/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Test"
 * 	found in "test.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -fnative-types -flink-skeletons`
 */

#ifndef	_T_H_
#define	_T_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <BOOLEAN.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_PR {
	T_PR_NOTHING,	/* No components present */
	T_PR_null,
	/* Extensions may appear below */
	T_PR_one,
	T_PR_two,
	T_PR_three
} T_PR;

/* T */
typedef struct T {
	T_PR present;
	union T_u {
		NULL_t	 null;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		NULL_t	 one;
		BOOLEAN_t	 two;
		BIT_STRING_t	 three;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} T_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T;

#ifdef __cplusplus
}
#endif

#endif	/* _T_H_ */
#include <asn_internal.h>
