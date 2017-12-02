/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleCircularReferences"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/92-circular-loops-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#ifndef	_Beta_H_
#define	_Beta_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Alpha;
struct Gamma;

/* Beta */
typedef struct Beta {
	struct Alpha	*b	/* OPTIONAL */;
	struct Gamma	*g	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Beta_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Beta;
extern asn_SEQUENCE_specifics_t asn_SPC_Beta_specs_1;
extern asn_TYPE_member_t asn_MBR_Beta_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Alpha.h"
#include "Gamma.h"

#endif	/* _Beta_H_ */
#include <asn_internal.h>
