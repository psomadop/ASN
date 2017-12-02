/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S ../../skeletons -pdu=Certificate -fcompound-names -fwide-types`
 */

#include "CertPolicyId.h"

/*
 * This type is implemented using OBJECT_IDENTIFIER,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_CertPolicyId_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (6 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CertPolicyId = {
	"CertPolicyId",
	"CertPolicyId",
	&asn_OP_OBJECT_IDENTIFIER,
	asn_DEF_CertPolicyId_tags_1,
	sizeof(asn_DEF_CertPolicyId_tags_1)
		/sizeof(asn_DEF_CertPolicyId_tags_1[0]), /* 1 */
	asn_DEF_CertPolicyId_tags_1,	/* Same as above */
	sizeof(asn_DEF_CertPolicyId_tags_1)
		/sizeof(asn_DEF_CertPolicyId_tags_1[0]), /* 1 */
	{ 0, 0, OBJECT_IDENTIFIER_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

