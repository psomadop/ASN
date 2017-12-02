/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestANY"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/60-any-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "T3.h"

static asn_TYPE_member_t asn_MBR_T3_1[] = {
	{ ATF_ANY_TYPE | ATF_NOFLAGS, 0, offsetof(struct T3, any1),
		-1 /* Ambiguous tag (ANY?) */,
		0,
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"any1"
		},
	{ ATF_ANY_TYPE | ATF_NOFLAGS, 0, offsetof(struct T3, any2),
		-1 /* Ambiguous tag (ANY?) */,
		0,
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"any2"
		},
};
static const ber_tlv_tag_t asn_DEF_T3_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_T3_specs_1 = {
	sizeof(struct T3),
	offsetof(struct T3, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_T3 = {
	"T3",
	"T3",
	&asn_OP_SEQUENCE,
	asn_DEF_T3_tags_1,
	sizeof(asn_DEF_T3_tags_1)
		/sizeof(asn_DEF_T3_tags_1[0]), /* 1 */
	asn_DEF_T3_tags_1,	/* Same as above */
	sizeof(asn_DEF_T3_tags_1)
		/sizeof(asn_DEF_T3_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_T3_1,
	2,	/* Elements count */
	&asn_SPC_T3_specs_1	/* Additional specs */
};

