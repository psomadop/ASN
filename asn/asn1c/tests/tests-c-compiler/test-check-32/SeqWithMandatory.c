/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestSequenceSimple"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/32-sequence-of-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "SeqWithMandatory.h"

static asn_TYPE_member_t asn_MBR_seqOfMan_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Error,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_seqOfMan_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_seqOfMan_specs_3 = {
	sizeof(struct seqOfMan),
	offsetof(struct seqOfMan, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_seqOfMan_3 = {
	"seqOfMan",
	"seqOfMan",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_seqOfMan_tags_3,
	sizeof(asn_DEF_seqOfMan_tags_3)
		/sizeof(asn_DEF_seqOfMan_tags_3[0]), /* 2 */
	asn_DEF_seqOfMan_tags_3,	/* Same as above */
	sizeof(asn_DEF_seqOfMan_tags_3)
		/sizeof(asn_DEF_seqOfMan_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_seqOfMan_3,
	1,	/* Single element */
	&asn_SPC_seqOfMan_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SeqWithMandatory_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SeqWithMandatory, someString),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"someString"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SeqWithMandatory, seqOfMan),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_seqOfMan_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"seqOfMan"
		},
};
static const ber_tlv_tag_t asn_DEF_SeqWithMandatory_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SeqWithMandatory_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 0, 0, 0 }, /* someString */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* seqOfMan */
};
static asn_SEQUENCE_specifics_t asn_SPC_SeqWithMandatory_specs_1 = {
	sizeof(struct SeqWithMandatory),
	offsetof(struct SeqWithMandatory, _asn_ctx),
	asn_MAP_SeqWithMandatory_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SeqWithMandatory = {
	"SeqWithMandatory",
	"SeqWithMandatory",
	&asn_OP_SEQUENCE,
	asn_DEF_SeqWithMandatory_tags_1,
	sizeof(asn_DEF_SeqWithMandatory_tags_1)
		/sizeof(asn_DEF_SeqWithMandatory_tags_1[0]), /* 1 */
	asn_DEF_SeqWithMandatory_tags_1,	/* Same as above */
	sizeof(asn_DEF_SeqWithMandatory_tags_1)
		/sizeof(asn_DEF_SeqWithMandatory_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SeqWithMandatory_1,
	2,	/* Elements count */
	&asn_SPC_SeqWithMandatory_specs_1	/* Additional specs */
};

