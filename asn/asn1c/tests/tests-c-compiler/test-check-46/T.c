/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleRedefineType"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/46-redefine-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "T.h"

/*
 * This type is implemented using ConstructedType,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_T_tags_1[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
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
	asn_MBR_ConstructedType_1,
	1,	/* Elements count */
	&asn_SPC_ConstructedType_specs_1	/* Additional specs */
};

