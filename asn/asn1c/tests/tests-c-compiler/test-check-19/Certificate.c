/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestParam"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/19-param-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "Certificate.h"

/*
 * This type is implemented using SIGNED_15P0,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Certificate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Certificate = {
	"Certificate",
	"Certificate",
	&asn_OP_SEQUENCE,
	asn_DEF_Certificate_tags_1,
	sizeof(asn_DEF_Certificate_tags_1)
		/sizeof(asn_DEF_Certificate_tags_1[0]), /* 1 */
	asn_DEF_Certificate_tags_1,	/* Same as above */
	sizeof(asn_DEF_Certificate_tags_1)
		/sizeof(asn_DEF_Certificate_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SIGNED_15P0_1,
	3,	/* Elements count */
	&asn_SPC_SIGNED_15P0_specs_1	/* Additional specs */
};

