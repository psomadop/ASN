/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S ../../skeletons -pdu=Certificate -fcompound-names -fwide-types`
 */

#ifndef	_BaseDistance_H_
#define	_BaseDistance_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BaseDistance */
typedef INTEGER_t	 BaseDistance_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BaseDistance_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BaseDistance;
asn_struct_free_f BaseDistance_free;
asn_struct_print_f BaseDistance_print;
asn_constr_check_f BaseDistance_constraint;
ber_type_decoder_f BaseDistance_decode_ber;
der_type_encoder_f BaseDistance_encode_der;
xer_type_decoder_f BaseDistance_decode_xer;
xer_type_encoder_f BaseDistance_encode_xer;
oer_type_decoder_f BaseDistance_decode_oer;
oer_type_encoder_f BaseDistance_encode_oer;
per_type_decoder_f BaseDistance_decode_uper;
per_type_encoder_f BaseDistance_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _BaseDistance_H_ */
#include <asn_internal.h>
