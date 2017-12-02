/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestExtensibleChoice"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/59-choice-extended-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#ifndef	_Choice_H_
#define	_Choice_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Choice_PR {
	Choice_PR_NOTHING,	/* No components present */
	Choice_PR_a,
	/* Extensions may appear below */
	Choice_PR_b,
	Choice_PR_c
} Choice_PR;

/* Forward declarations */
struct Choice;

/* Choice */
typedef struct Choice {
	Choice_PR present;
	union Choice_u {
		long	 a;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		long	 b;
		struct Choice	*c;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Choice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Choice;
extern asn_CHOICE_specifics_t asn_SPC_Choice_specs_1;
extern asn_TYPE_member_t asn_MBR_Choice_1[3];
extern asn_per_constraints_t asn_PER_type_Choice_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Choice.h"

#endif	/* _Choice_H_ */
#include <asn_internal.h>
