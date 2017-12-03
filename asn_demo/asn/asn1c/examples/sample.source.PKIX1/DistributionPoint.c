/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S ../../skeletons -pdu=Certificate -fcompound-names -fwide-types`
 */

#include "DistributionPoint.h"

asn_TYPE_member_t asn_MBR_DistributionPoint_1[] = {
	{ ATF_POINTER, 3, offsetof(struct DistributionPoint, distributionPoint),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DistributionPointName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"distributionPoint"
		},
	{ ATF_POINTER, 2, offsetof(struct DistributionPoint, reasons),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReasonFlags,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reasons"
		},
	{ ATF_POINTER, 1, offsetof(struct DistributionPoint, cRLIssuer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralNames,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cRLIssuer"
		},
};
static const int asn_MAP_DistributionPoint_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_DistributionPoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DistributionPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* distributionPoint */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reasons */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cRLIssuer */
};
asn_SEQUENCE_specifics_t asn_SPC_DistributionPoint_specs_1 = {
	sizeof(struct DistributionPoint),
	offsetof(struct DistributionPoint, _asn_ctx),
	asn_MAP_DistributionPoint_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DistributionPoint_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DistributionPoint = {
	"DistributionPoint",
	"DistributionPoint",
	&asn_OP_SEQUENCE,
	asn_DEF_DistributionPoint_tags_1,
	sizeof(asn_DEF_DistributionPoint_tags_1)
		/sizeof(asn_DEF_DistributionPoint_tags_1[0]), /* 1 */
	asn_DEF_DistributionPoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_DistributionPoint_tags_1)
		/sizeof(asn_DEF_DistributionPoint_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DistributionPoint_1,
	3,	/* Elements count */
	&asn_SPC_DistributionPoint_specs_1	/* Additional specs */
};
