/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleRecursion"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/43-recursion-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "Choice-1.h"

static asn_oer_constraints_t asn_OER_type_Choice_1_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Choice_1_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_or_3[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Choice_1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_or_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_or_specs_3 = {
	sizeof(struct Or),
	offsetof(struct Or, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_or_3 = {
	"or",
	"or",
	&asn_OP_SET_OF,
	asn_DEF_or_tags_3,
	sizeof(asn_DEF_or_tags_3)
		/sizeof(asn_DEF_or_tags_3[0]) - 1, /* 1 */
	asn_DEF_or_tags_3,	/* Same as above */
	sizeof(asn_DEF_or_tags_3)
		/sizeof(asn_DEF_or_tags_3[0]), /* 2 */
	{ 0, 0, SET_OF_constraint },
	asn_MBR_or_3,
	1,	/* Single element */
	&asn_SPC_or_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Choice_1_1[] = {
	{ ATF_POINTER, 0, offsetof(struct Choice_1, choice.And),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Choice_1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"and"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Choice_1, choice.Or),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_or_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"or"
		},
	{ ATF_POINTER, 0, offsetof(struct Choice_1, choice.Not),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Choice_1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"not"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Choice_1, choice.other),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"other"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Choice_1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* and */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* or */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* not */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 } /* other */
};
asn_CHOICE_specifics_t asn_SPC_Choice_1_specs_1 = {
	sizeof(struct Choice_1),
	offsetof(struct Choice_1, _asn_ctx),
	offsetof(struct Choice_1, present),
	sizeof(((struct Choice_1 *)0)->present),
	asn_MAP_Choice_1_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Choice_1 = {
	"Choice-1",
	"Choice-1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Choice_1_constr_1, &asn_PER_type_Choice_1_constr_1, CHOICE_constraint },
	asn_MBR_Choice_1_1,
	4,	/* Elements count */
	&asn_SPC_Choice_1_specs_1	/* Additional specs */
};

