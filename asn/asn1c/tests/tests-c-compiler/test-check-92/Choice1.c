/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleCircularReferences"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/92-circular-loops-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "Choice1.h"

static asn_oer_constraints_t asn_OER_type_Choice1_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Choice1_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Choice1_1[] = {
	{ ATF_POINTER, 0, offsetof(struct Choice1, choice.something),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Everything,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"something"
		},
	{ ATF_POINTER, 0, offsetof(struct Choice1, choice.some2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Everything,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"some2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Choice1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* something */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* some2 */
};
asn_CHOICE_specifics_t asn_SPC_Choice1_specs_1 = {
	sizeof(struct Choice1),
	offsetof(struct Choice1, _asn_ctx),
	offsetof(struct Choice1, present),
	sizeof(((struct Choice1 *)0)->present),
	asn_MAP_Choice1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Choice1 = {
	"Choice1",
	"Choice1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Choice1_constr_1, &asn_PER_type_Choice1_constr_1, CHOICE_constraint },
	asn_MBR_Choice1_1,
	2,	/* Elements count */
	&asn_SPC_Choice1_specs_1	/* Additional specs */
};

