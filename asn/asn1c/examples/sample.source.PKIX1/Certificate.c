/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S ../../skeletons -pdu=Certificate -fcompound-names -fwide-types`
 */

#include "Certificate.h"

static asn_TYPE_member_t asn_MBR_Certificate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Certificate, tbsCertificate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TBSCertificate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tbsCertificate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Certificate, signatureAlgorithm),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signatureAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Certificate, signature),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signature"
		},
};
static const ber_tlv_tag_t asn_DEF_Certificate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Certificate_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 2, 0, 0 }, /* signature */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* tbsCertificate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 } /* signatureAlgorithm */
};
static asn_SEQUENCE_specifics_t asn_SPC_Certificate_specs_1 = {
	sizeof(struct Certificate),
	offsetof(struct Certificate, _asn_ctx),
	asn_MAP_Certificate_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
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
	asn_MBR_Certificate_1,
	3,	/* Elements count */
	&asn_SPC_Certificate_specs_1	/* Additional specs */
};

