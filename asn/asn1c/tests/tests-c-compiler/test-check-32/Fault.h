/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestSequenceSimple"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/32-sequence-of-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#ifndef	_Fault_H_
#define	_Fault_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Error;

/* Fault */
typedef struct Fault {
	A_SET_OF(struct Error) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Fault_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Fault;
extern asn_SET_OF_specifics_t asn_SPC_Fault_specs_1;
extern asn_TYPE_member_t asn_MBR_Fault_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Error.h"

#endif	/* _Fault_H_ */
#include <asn_internal.h>
