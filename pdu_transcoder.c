//
// Created by Tasos Psomadopoulos on 02/12/2017.
//

#include "pdu_transcoder.h"
#include "PDU.h"
#include "errno.h"
#include <stdlib.h>
#include <string.h>

/**
 * ASN.1 Encode tx_pdu, to the supplied buffer of specified length.
 * 
 * @param   tx_pdu          TX_PDU structure to encode to ASN.1 binary format.
 * @param   buffer          Byte buffer where encoded TX_PDU will be stored.
 * @param   buffer_size     Size of supplied buffer.
 * @param   enc_len         Will contain the number of encoded bytes, on success.
 *
 * @return  encoded bytes   On success, the number of encoded bytes is returned.
 *          -1              On failure.
 */
int pdu_encode(TX_PDU* tx_pdu, char* buffer, int buffer_size, int *enc_len)
{
    int         i;
    Cell_t      *asn_cells;   //!< Will hold the equivalent ASN.1 structure for CELL.
    struct PDU  asn_pdu;	  //!< ASN.1 structure for TX_PDU, suitable for encoding.

    asn_enc_rval_t er;		  //!< Result of ASN.1 encode operation.
    *enc_len = 0;		      //!< Encoded bytes.

    asn_cells = malloc(tx_pdu->num_cells * sizeof(Cell_t));
    if (asn_cells == NULL)
    {
        return 0;
    }

    memset(&asn_pdu, 0, sizeof(struct PDU));

    /**
     * Populate each ASN.1 Cell_t, with info from our
     * human-friendly CELL structures.
     *
     * We will use the facilities provided by asn1c generated code
     * for populating this weird, monstrous structure.
     */
    for (i = 0; i < tx_pdu->num_cells; i++)
    {
        CELL    *cur     = &tx_pdu->cells[i];    //!< Current CELL to convert.
        Cell_t  *asn_cur = &asn_cells[i];        //!< Current ASN.1 Cell_t for encoding.
        memset(asn_cur, 0, sizeof(Cell_t));

        switch (cur->type)
        {
            case CELL_TYPE_INT:
                asn_cur->present = Cell_PR_intVal;
                asn_cur->choice.intVal = cur->u.int_val;
                break;

            case CELL_TYPE_BOOL:
                asn_cur->present = Cell_PR_boolVal;
                asn_cur->choice.boolVal = cur->u.bool_val;
                break;

            case CELL_TYPE_NAME:
                asn_cur->present = Cell_PR_name;
                asn_cur->choice.name.buf = (unsigned char*) cur->u.name_val;
                asn_cur->choice.name.size = strlen(cur->u.name_val);
                break;

            case CELL_TYPE_MESSAGE:
                asn_cur->present = Cell_PR_message;
                asn_cur->choice.message.clockTicks = cur->u.message.clock_ticks;
                for (int i = 0; i < sizeof(cur->u.message.integers) / sizeof(int); i++)
                {
                    if (0 != ASN_SEQUENCE_ADD( &asn_cur->choice.message.intSequence,
                                               &cur->u.message.integers[i]))
                    {
                        return 0;
                    }
                }
                break;

            default:
                asn_cur->present = Cell_PR_NOTHING;
                break;
        }

        if (0 != ASN_SEQUENCE_ADD( &asn_pdu.cells, asn_cur ))
        {
            return 0;
        }
    }
    
    /* Let's see the XML representation of what we are about to encode. */
    xer_fprint(stdout, &asn_DEF_PDU, &asn_pdu);

    er.encoded = -1; 

    /* And let God sort'em out... */
    er = der_encode_to_buffer( &asn_DEF_PDU, 
                               &asn_pdu, buffer, buffer_size );

    if(er.encoded == -1) 
    {
        return -1;
    } 
    else 
    {
        if (enc_len)
        {
            *enc_len = (int)er.encoded;
        }
    }

    return er.encoded;
}

/**
 * Decode ASN.1 encoded buffer to supplied TX_PDU structure;
 *
 * @param   tx_pdu          TX_PDU structure with decoded data.
 * @param   buffer          Byte buffer where encoded TX_PDU is be stored.
 * @param   buffer_size     Size of supplied buffer.
 *
 * @return  Consumed bytes  On success, the number of consumed bytes from buffer is returned.
 *          -1              On failure.
 */
int pdu_decode(TX_PDU* tx_pdu, char* buffer, int buffer_size)
{
    asn_dec_rval_t   dr;        //!< Decoder's result.
    struct PDU       asn_pdu;   //!< Decoded PDU.
    int              i;

    memset(&asn_pdu, 0, sizeof(asn_pdu));    

    /** 
     * Brain-damaged interface for the decoder, but I'm now used to that.
     */
    dr = asn_DEF_PDU.op->ber_decoder( 0, &asn_DEF_PDU, (void **)&asn_pdu,
                                      buffer, buffer_size, 0 ); 

    /**  
     * There is another Return Code, which means that decoder needs more data. 
     * That won't happen in this example so I'm ignoring it. 
     */ 
    if (dr.code != RC_OK)
    {
        return -1;
    }
    
    /* Let's see what we decoded. Not that I expect it to work...*/
    xer_fprint(stdout, &asn_DEF_PDU, &asn_pdu);
   
    tx_pdu->num_cells = asn_pdu.cells.list.count;
    tx_pdu->cells = malloc(tx_pdu->num_cells * sizeof(CELL));

    /* Now let's take stuff from ASN.1 structure to human-friendly PDU. */
    for (i = 0; i < asn_pdu.cells.list.count; i++)
    {
    	int 	str_len;
        CELL     *cur  = &tx_pdu->cells[i];    //!< Current CELL to store decoded data to.
        Cell_t 	 *asn_cur;                     //!< Current ASN.1 Cell_t for encoding.
        memset(cur, 0, sizeof(CELL));

        asn_cur = asn_pdu.cells.list.array[i];
        switch (asn_cur->present)
        {
            case Cell_PR_intVal:
        	cur->type = CELL_TYPE_INT;
        	cur->u.int_val = asn_cur->choice.intVal;
        	break;

            case Cell_PR_boolVal:
            	cur->type = CELL_TYPE_BOOL;
            	cur->u.bool_val = asn_cur->choice.boolVal;
            	break;

            case Cell_PR_name:
        	str_len = asn_cur->choice.name.size;
            	cur->type = CELL_TYPE_NAME;
        	cur->u.name_val = malloc(sizeof(char) * str_len);
        	memcpy(cur->u.name_val, asn_cur->choice.name.buf, str_len);
        	break;

            case Cell_PR_message:
        	cur->type = CELL_TYPE_MESSAGE;
        	cur->u.message.clock_ticks = asn_cur->choice.message.clockTicks;
        	for (int i = 0; i < asn_cur->choice.message.intSequence.list.count; i++)
        	{
        	    cur->u.message.integers[i] = *asn_cur->choice.message.intSequence.list.array[i];
        	}
        	break;

            default:
        	break;

        }
    }
     
    return dr.consumed;
}
