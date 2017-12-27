#include "pdu_transcoder.h"
#include "pdu_builder.h"    // Generated by `flatcc`.
#include "pdu_reader.h"     // Generated by 'flatcc'.
#include "pdu_verifier.h"   // Generated by 'flatcc'.
#include "string.h"


/**
 * Encode tx_pdu, to the supplied buffer of specified length.
 *
 * @param   tx_pdu          TX_PDU structure to encode to binary format.
 * @param   buffer          Byte buffer where encoded TX_PDU will be stored.
 * @param   buffer_size     Size of supplied buffer.
 * @param   enc_len         Will contain the number of encoded bytes, on success.
 *
 * @return  encoded bytes   On success, the number of encoded bytes is returned.
 *          -1              On failure.
 */
int pdu_encode(TX_PDU* tx_pdu, char* buffer, int buffer_size, int *enc_len)
{
    int i, status, ret;
    flatcc_builder_t builder, *B;
    B = &builder;
    flatcc_builder_init(B);

    // Let's make a PDU. I'm using the top-down approach here,
    // as I find it a lot easier and comprehensible.
    GTP_PDU_start_as_root(B);
    // Entering PDU cells vector.
    GTP_PDU_cells_start(B);

    for (i = 0; i < tx_pdu->num_cells; i++)
    {
        CELL *cur = &tx_pdu->cells[i];
        
        // Pushing an element in cells vector
        GTP_PDU_cells_push_start(B);
        // Creating a cell. Starting here.
        GTP_Cell_start(B);

        // Here, we populate the new cell,
        switch (cur->type)
        {
            case CELL_TYPE_INT:
                GTP_Cell_type_add(B, GTP_CellType_INT);
                GTP_Cell_intVal_add(B, cur->u.int_val);
                break;

            case CELL_TYPE_BOOL:
                GTP_Cell_type_add(B, GTP_CellType_BOOL);
                GTP_Cell_boolVal_add(B, cur->u.bool_val);
                break;

            case CELL_TYPE_NAME:
                GTP_Cell_type_add(B, GTP_CellType_NAME);
                GTP_Cell_name_add(B, flatbuffers_string_create_str(B, cur->u.name_val));
                break;

            case CELL_TYPE_MESSAGE:
                GTP_Cell_type_add(B, GTP_CellType_MESSAGE);
                // Need to create a ComplexType for this cell. Start it here.
                GTP_ComplexType_start(B);
                GTP_ComplexType_clockTicks_add(B, cur->u.message.clock_ticks);
                GTP_ComplexType_intSequence_add(B,
                        flatbuffers_int32_vec_create(B, cur->u.message.integers, 4*sizeof(int)));
                // Done with ComplexType creation. Tell builder.
                GTP_ComplexType_end(B);
                break;
        }

        // Done with Cell creation. Tell builder
        // and push it in the PDU cells vector.
        GTP_Cell_end(B);
        GTP_PDU_cells_push_end(B);
    }

    // End PDU cells vector, tell builder.
    GTP_PDU_cells_end(B);
    // Done with PDU. Tell builder.
    GTP_PDU_end_as_root(B);

    *enc_len = 0;

    /* Get encoded buffer. */
    uint8_t* buf = flatcc_builder_get_direct_buffer(&builder, (size_t*)enc_len);

    if ( (*enc_len == 0) ||
         (GTP_PDU_verify_as_root(buf, (size_t)*enc_len)) )
    {
        ret = -1;
    }
    else
    {
        ret = *enc_len;
        memcpy(buffer, buf, *enc_len);
    }

    flatcc_builder_clear(B);
    return ret;
}


/**
 * Decode encoded buffer to supplied TX_PDU structure;
 *
 * @param   tx_pdu          TX_PDU structure with decoded data.
 * @param   buffer          Byte buffer where encoded TX_PDU is be stored.
 * @param   buffer_size     Size of supplied buffer.
 *
 * @return  Consumed bytes  On success, the number of bytes consumed from buffer is returned.
 *          -1              On failure.
 */
int pdu_decode(TX_PDU* tx_pdu, char* buffer, int buffer_size)
{
    GTP_PDU_table_t  fpdu    = GTP_PDU_as_root(buffer);
    GTP_Cell_vec_t   fcells  = GTP_PDU_cells(fpdu);
    GTP_ComplexType_table_t  fmessage;
    flatbuffers_int32_vec_t  fintSeq;   // flatbuffers_int32_vec_t is really a int[] array (look at macro definition).
    int     i,ret,num_cells;

    tx_pdu->num_cells = GTP_Cell_vec_len(fcells);
    tx_pdu->cells = (CELL*) malloc (tx_pdu->num_cells * sizeof(CELL));
    for (i = 0; i < tx_pdu->num_cells; i++)
    {
        CELL *cur = &tx_pdu->cells[i];
        GTP_Cell_table_t fcell = GTP_Cell_vec_at(fcells, i);

        cur->type = GTP_Cell_type(fcell);
        switch (cur->type)
        {
            case GTP_CellType_INT:
                cur->u.int_val = GTP_Cell_intVal(fcell);
                break;

            case GTP_CellType_BOOL:
                cur->u.bool_val = GTP_Cell_boolVal(fcell);
                break;

            case GTP_CellType_NAME:
                cur->u.name_val = (char *) malloc(strlen(GTP_Cell_name(fcell)));
                memcpy(cur->u.name_val, GTP_Cell_name(fcell), strlen(GTP_Cell_name(fcell)));
                break;

            case GTP_CellType_MESSAGE:
                fmessage = GTP_Cell_msg(fcell);
                fintSeq = GTP_ComplexType_intSequence(fmessage);
                cur->u.message.clock_ticks = GTP_ComplexType_clockTicks(fmessage);
                memcpy(cur->u.message.integers, fintSeq, flatbuffers_int32_vec_len(fintSeq));
                break;
        }
    }

    return 1;
}
