/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleChoiceInSequence"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/44-choice-in-sequence-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "T.h"

static asn_oer_constraints_t asn_OER_type_e_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_e_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_h_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_h_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_b_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_b_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_e_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct e, choice.f),
		(ASN_TAG_CLASS_PRIVATE | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"f"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct e, choice.g),
		(ASN_TAG_CLASS_PRIVATE | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"g"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_e_tag2el_6[] = {
    { (ASN_TAG_CLASS_PRIVATE | (7 << 2)), 0, 0, 0 }, /* f */
    { (ASN_TAG_CLASS_PRIVATE | (8 << 2)), 1, 0, 0 } /* g */
};
static asn_CHOICE_specifics_t asn_SPC_e_specs_6 = {
	sizeof(struct e),
	offsetof(struct e, _asn_ctx),
	offsetof(struct e, present),
	sizeof(((struct e *)0)->present),
	asn_MAP_e_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e_6 = {
	"e",
	"e",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_e_constr_6, &asn_PER_type_e_constr_6, CHOICE_constraint },
	asn_MBR_e_6,
	2,	/* Elements count */
	&asn_SPC_e_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_h_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct h, choice.i),
		(ASN_TAG_CLASS_PRIVATE | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"i"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct h, choice.j),
		(ASN_TAG_CLASS_PRIVATE | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"j"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_h_tag2el_9[] = {
    { (ASN_TAG_CLASS_PRIVATE | (1 << 2)), 0, 0, 0 }, /* i */
    { (ASN_TAG_CLASS_PRIVATE | (2 << 2)), 1, 0, 0 } /* j */
};
static asn_CHOICE_specifics_t asn_SPC_h_specs_9 = {
	sizeof(struct h),
	offsetof(struct h, _asn_ctx),
	offsetof(struct h, present),
	sizeof(((struct h *)0)->present),
	asn_MAP_h_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_h_9 = {
	"h",
	"h",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_h_constr_9, &asn_PER_type_h_constr_9, CHOICE_constraint },
	asn_MBR_h_9,
	2,	/* Elements count */
	&asn_SPC_h_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_b_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct b, choice.c),
		(ASN_TAG_CLASS_PRIVATE | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct b, choice.d),
		(ASN_TAG_CLASS_PRIVATE | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"d"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct b, choice.e),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_e_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct b, choice.h),
		(ASN_TAG_CLASS_PRIVATE | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_h_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"h"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_b_tag2el_3[] = {
    { (ASN_TAG_CLASS_PRIVATE | (5 << 2)), 0, 0, 0 }, /* c */
    { (ASN_TAG_CLASS_PRIVATE | (6 << 2)), 1, 0, 0 }, /* d */
    { (ASN_TAG_CLASS_PRIVATE | (7 << 2)), 2, 0, 0 }, /* f */
    { (ASN_TAG_CLASS_PRIVATE | (8 << 2)), 2, 0, 0 }, /* g */
    { (ASN_TAG_CLASS_PRIVATE | (9 << 2)), 3, 0, 0 } /* h */
};
static asn_CHOICE_specifics_t asn_SPC_b_specs_3 = {
	sizeof(struct b),
	offsetof(struct b, _asn_ctx),
	offsetof(struct b, present),
	sizeof(((struct b *)0)->present),
	asn_MAP_b_tag2el_3,
	5,	/* Count of tags in the map */
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
	4,	/* Elements count */
	&asn_SPC_b_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_T_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct T, a),
		(ASN_TAG_CLASS_PRIVATE | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"a"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct T, b),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_b_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b"
		},
};
static const ber_tlv_tag_t asn_DEF_T_tags_1[] = {
	(ASN_TAG_CLASS_PRIVATE | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_T_tag2el_1[] = {
    { (ASN_TAG_CLASS_PRIVATE | (2 << 2)), 0, 0, 0 }, /* a */
    { (ASN_TAG_CLASS_PRIVATE | (5 << 2)), 1, 0, 0 }, /* c */
    { (ASN_TAG_CLASS_PRIVATE | (6 << 2)), 1, 0, 0 }, /* d */
    { (ASN_TAG_CLASS_PRIVATE | (7 << 2)), 1, 0, 0 }, /* f */
    { (ASN_TAG_CLASS_PRIVATE | (8 << 2)), 1, 0, 0 }, /* g */
    { (ASN_TAG_CLASS_PRIVATE | (9 << 2)), 1, 0, 0 } /* h */
};
static asn_SEQUENCE_specifics_t asn_SPC_T_specs_1 = {
	sizeof(struct T),
	offsetof(struct T, _asn_ctx),
	asn_MAP_T_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_T = {
	"T",
	"T",
	&asn_OP_SEQUENCE,
	asn_DEF_T_tags_1,
	sizeof(asn_DEF_T_tags_1)
		/sizeof(asn_DEF_T_tags_1[0]) - 1, /* 1 */
	asn_DEF_T_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_tags_1)
		/sizeof(asn_DEF_T_tags_1[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_T_1,
	2,	/* Elements count */
	&asn_SPC_T_specs_1	/* Additional specs */
};

