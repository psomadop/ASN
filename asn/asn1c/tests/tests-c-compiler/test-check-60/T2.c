/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestANY"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/60-any-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "T2.h"

static asn_TYPE_member_t asn_MBR_T2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct T2, i),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"i"
		},
	{ ATF_POINTER, 1, offsetof(struct T2, any),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"any"
		},
};
static const int asn_MAP_T2_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_T2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_T2_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* i */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* any */
};
static asn_SEQUENCE_specifics_t asn_SPC_T2_specs_1 = {
	sizeof(struct T2),
	offsetof(struct T2, _asn_ctx),
	asn_MAP_T2_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_T2_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_T2 = {
	"T2",
	"T2",
	&asn_OP_SEQUENCE,
	asn_DEF_T2_tags_1,
	sizeof(asn_DEF_T2_tags_1)
		/sizeof(asn_DEF_T2_tags_1[0]), /* 1 */
	asn_DEF_T2_tags_1,	/* Same as above */
	sizeof(asn_DEF_T2_tags_1)
		/sizeof(asn_DEF_T2_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_T2_1,
	2,	/* Elements count */
	&asn_SPC_T2_specs_1	/* Additional specs */
};

