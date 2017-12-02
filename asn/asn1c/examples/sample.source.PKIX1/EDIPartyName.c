/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S ../../skeletons -pdu=Certificate -fcompound-names -fwide-types`
 */

#include "EDIPartyName.h"

asn_TYPE_member_t asn_MBR_EDIPartyName_1[] = {
	{ ATF_POINTER, 1, offsetof(struct EDIPartyName, nameAssigner),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DirectoryString,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nameAssigner"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EDIPartyName, partyName),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DirectoryString,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"partyName"
		},
};
static const int asn_MAP_EDIPartyName_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_EDIPartyName_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EDIPartyName_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nameAssigner */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* partyName */
};
asn_SEQUENCE_specifics_t asn_SPC_EDIPartyName_specs_1 = {
	sizeof(struct EDIPartyName),
	offsetof(struct EDIPartyName, _asn_ctx),
	asn_MAP_EDIPartyName_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_EDIPartyName_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EDIPartyName = {
	"EDIPartyName",
	"EDIPartyName",
	&asn_OP_SEQUENCE,
	asn_DEF_EDIPartyName_tags_1,
	sizeof(asn_DEF_EDIPartyName_tags_1)
		/sizeof(asn_DEF_EDIPartyName_tags_1[0]), /* 1 */
	asn_DEF_EDIPartyName_tags_1,	/* Same as above */
	sizeof(asn_DEF_EDIPartyName_tags_1)
		/sizeof(asn_DEF_EDIPartyName_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EDIPartyName_1,
	2,	/* Elements count */
	&asn_SPC_EDIPartyName_specs_1	/* Additional specs */
};

