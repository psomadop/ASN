/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestTags3"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/22-tags-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler -fwide-types`
 */

#include "T1.h"

static asn_oer_constraints_t asn_OER_type_b_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_b_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_b_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct b, choice.i),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"i"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct b, choice.n),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_b_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* i */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* n */
};
static asn_CHOICE_specifics_t asn_SPC_b_specs_3 = {
	sizeof(struct b),
	offsetof(struct b, _asn_ctx),
	offsetof(struct b, present),
	sizeof(((struct b *)0)->present),
	asn_MAP_b_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_b_3 = {
	"b",
	"b",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_b_constr_3, &asn_PER_type_b_constr_3, CHOICE_constraint },
	asn_MBR_b_3,
	2,	/* Elements count */
	&asn_SPC_b_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_T1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct T1, a),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct T1, b),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_b_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct T1, c),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c"
		},
};
static const ber_tlv_tag_t asn_DEF_T1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_T1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* c */
};
static asn_SEQUENCE_specifics_t asn_SPC_T1_specs_1 = {
	sizeof(struct T1),
	offsetof(struct T1, _asn_ctx),
	asn_MAP_T1_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_T1 = {
	"T1",
	"T1",
	&asn_OP_SEQUENCE,
	asn_DEF_T1_tags_1,
	sizeof(asn_DEF_T1_tags_1)
		/sizeof(asn_DEF_T1_tags_1[0]), /* 1 */
	asn_DEF_T1_tags_1,	/* Same as above */
	sizeof(asn_DEF_T1_tags_1)
		/sizeof(asn_DEF_T1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_T1_1,
	3,	/* Elements count */
	&asn_SPC_T1_specs_1	/* Additional specs */
};

