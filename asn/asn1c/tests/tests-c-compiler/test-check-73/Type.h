/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestCircularReferences"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/73-circular-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#ifndef	_Type_H_
#define	_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EpytRef;

/* Type */
typedef struct Type {
	struct data {
		A_SEQUENCE_OF(struct EpytRef) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} data;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Type_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Type;
extern asn_SEQUENCE_specifics_t asn_SPC_Type_specs_1;
extern asn_TYPE_member_t asn_MBR_Type_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EpytRef.h"

#endif	/* _Type_H_ */
#include <asn_internal.h>
