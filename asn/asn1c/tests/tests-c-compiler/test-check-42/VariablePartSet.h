/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleLAPStorage"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/42-real-life-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#ifndef	_VariablePartSet_H_
#define	_VariablePartSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActionItem.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VariablePart;

/* VariablePartSet */
typedef struct VariablePartSet {
	struct vparts {
		A_SEQUENCE_OF(struct VariablePart) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} vparts;
	ActionItem_t	 resolution;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VariablePartSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VariablePartSet;
extern asn_SEQUENCE_specifics_t asn_SPC_VariablePartSet_specs_1;
extern asn_TYPE_member_t asn_MBR_VariablePartSet_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VariablePart.h"

#endif	/* _VariablePartSet_H_ */
#include <asn_internal.h>
