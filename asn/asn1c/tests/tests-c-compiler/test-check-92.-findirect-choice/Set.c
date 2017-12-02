/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleCircularReferences"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/92-circular-loops-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler -findirect-choice`
 */

#include "Set.h"

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Member, Int),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"int"
		},
	{ ATF_POINTER, 0, offsetof(struct Member, set),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Set,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"set"
		},
	{ ATF_POINTER, 0, offsetof(struct Member, seq),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Sequence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"seq"
		},
	{ ATF_POINTER, 2, offsetof(struct Member, set2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Set,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"set2"
		},
	{ ATF_POINTER, 1, offsetof(struct Member, set3),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Set,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"set3"
		},
};
static const int asn_MAP_Member_oms_2[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* int */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* set */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* seq */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* set2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* set3 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct Member),
	offsetof(struct Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	5,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	1, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	5,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Set_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Set_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Set_specs_1 = {
	sizeof(struct Set),
	offsetof(struct Set, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Set = {
	"Set",
	"Set",
	&asn_OP_SET_OF,
	asn_DEF_Set_tags_1,
	sizeof(asn_DEF_Set_tags_1)
		/sizeof(asn_DEF_Set_tags_1[0]), /* 1 */
	asn_DEF_Set_tags_1,	/* Same as above */
	sizeof(asn_DEF_Set_tags_1)
		/sizeof(asn_DEF_Set_tags_1[0]), /* 1 */
	{ 0, 0, SET_OF_constraint },
	asn_MBR_Set_1,
	1,	/* Single element */
	&asn_SPC_Set_specs_1	/* Additional specs */
};

