/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestSetOfSimple"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/31-set-of-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler -fwide-types`
 */

#ifndef	_Stuff_H_
#define	_Stuff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <INTEGER.h>
#include <constr_CHOICE.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum Stuff_PR {
	Stuff_PR_trees,	/* Member trees is present */
	Stuff_PR_anything,	/* Member anything is present */
	Stuff_PR_other,	/* Member other is present */
} Stuff_PR;
typedef enum other_PR {
	other_PR_NOTHING,	/* No components present */
	other_PR_a,
	other_PR_b
} other_PR;

/* Forward declarations */
struct Forest;

/* Forward definitions */
typedef struct Member {
	BIT_STRING_t	 cup_of_coffee;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Member;

/* Stuff */
typedef struct Stuff {
	struct trees {
		A_SET_OF(struct Forest) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *trees;
	struct anything {
		A_SET_OF(Member) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *anything;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct other {
		other_PR present;
		union Stuff__other_u {
			INTEGER_t	 a;
			INTEGER_t	 b;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *other;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pStuff, Stuff_PR_x) */
	unsigned int _presence_map
		[((3+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Stuff_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Stuff;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Forest.h"

#endif	/* _Stuff_H_ */
#include <asn_internal.h>
