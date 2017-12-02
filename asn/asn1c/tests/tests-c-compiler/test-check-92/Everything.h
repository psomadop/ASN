/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleCircularReferences"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/92-circular-loops-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#ifndef	_Everything_H_
#define	_Everything_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Set.h"
#include "Alpha.h"
#include "Beta.h"
#include "Gamma.h"
#include "OneTwo.h"
#include "TwoThree.h"
#include "ThreeOne.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Choice1;
struct Choice2;
struct Choice3;

/* Everything */
typedef struct Everything {
	struct Choice1	*ch1;
	struct Choice2	*ch2;
	struct Choice3	*ch3;
	Set_t	 set;
	Alpha_t	 a;
	Beta_t	 b;
	Gamma_t	 g;
	OneTwo_t	 ot;
	TwoThree_t	 tt;
	ThreeOne_t	 to;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Everything_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Everything;
extern asn_SEQUENCE_specifics_t asn_SPC_Everything_specs_1;
extern asn_TYPE_member_t asn_MBR_Everything_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Choice1.h"
#include "Choice2.h"
#include "Choice3.h"

#endif	/* _Everything_H_ */
#include <asn_internal.h>
