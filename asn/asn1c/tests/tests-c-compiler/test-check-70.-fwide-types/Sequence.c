/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestXERDecoding"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/70-xer-test-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler -fwide-types`
 */

#include "Sequence.h"

asn_TYPE_member_t asn_MBR_Sequence_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Sequence, integer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"integer"
		},
	{ ATF_POINTER, 2, offsetof(struct Sequence, sequence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Sequence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sequence"
		},
	{ ATF_POINTER, 1, offsetof(struct Sequence, bits),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bits"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Sequence, string),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"string"
		},
};
static const int asn_MAP_Sequence_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_Sequence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Sequence_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sequence */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bits */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* string */
};
asn_SEQUENCE_specifics_t asn_SPC_Sequence_specs_1 = {
	sizeof(struct Sequence),
	offsetof(struct Sequence, _asn_ctx),
	asn_MAP_Sequence_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Sequence_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Sequence = {
	"Sequence",
	"Sequence",
	&asn_OP_SEQUENCE,
	asn_DEF_Sequence_tags_1,
	sizeof(asn_DEF_Sequence_tags_1)
		/sizeof(asn_DEF_Sequence_tags_1[0]), /* 1 */
	asn_DEF_Sequence_tags_1,	/* Same as above */
	sizeof(asn_DEF_Sequence_tags_1)
		/sizeof(asn_DEF_Sequence_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Sequence_1,
	4,	/* Elements count */
	&asn_SPC_Sequence_specs_1	/* Additional specs */
};

