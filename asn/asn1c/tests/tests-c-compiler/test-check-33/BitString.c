/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestMiscComplex"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/33-misc-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "BitString.h"

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_BitString_tags_1[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_BitString = {
	"BitString",
	"BitString",
	&asn_OP_BIT_STRING,
	asn_DEF_BitString_tags_1,
	sizeof(asn_DEF_BitString_tags_1)
		/sizeof(asn_DEF_BitString_tags_1[0]) - 1, /* 1 */
	asn_DEF_BitString_tags_1,	/* Same as above */
	sizeof(asn_DEF_BitString_tags_1)
		/sizeof(asn_DEF_BitString_tags_1[0]), /* 2 */
	{ 0, 0, BIT_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

