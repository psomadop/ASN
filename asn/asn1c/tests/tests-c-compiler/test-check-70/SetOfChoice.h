/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestXERDecoding"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/70-xer-test-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#ifndef	_SetOfChoice_H_
#define	_SetOfChoice_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SimpleChoice;

/* SetOfChoice */
typedef struct SetOfChoice {
	A_SET_OF(struct SimpleChoice) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SetOfChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SetOfChoice;
extern asn_SET_OF_specifics_t asn_SPC_SetOfChoice_specs_1;
extern asn_TYPE_member_t asn_MBR_SetOfChoice_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SimpleChoice.h"

#endif	/* _SetOfChoice_H_ */
#include <asn_internal.h>
