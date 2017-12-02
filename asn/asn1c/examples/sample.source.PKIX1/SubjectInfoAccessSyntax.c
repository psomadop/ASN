/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "../rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S ../../skeletons -pdu=Certificate -fcompound-names -fwide-types`
 */

#include "SubjectInfoAccessSyntax.h"

static asn_oer_constraints_t asn_OER_type_SubjectInfoAccessSyntax_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..MAX)) */};
static asn_per_constraints_t asn_PER_type_SubjectInfoAccessSyntax_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  1,  0 }	/* (SIZE(1..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SubjectInfoAccessSyntax_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AccessDescription,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SubjectInfoAccessSyntax_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_SubjectInfoAccessSyntax_specs_1 = {
	sizeof(struct SubjectInfoAccessSyntax),
	offsetof(struct SubjectInfoAccessSyntax, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SubjectInfoAccessSyntax = {
	"SubjectInfoAccessSyntax",
	"SubjectInfoAccessSyntax",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SubjectInfoAccessSyntax_tags_1,
	sizeof(asn_DEF_SubjectInfoAccessSyntax_tags_1)
		/sizeof(asn_DEF_SubjectInfoAccessSyntax_tags_1[0]), /* 1 */
	asn_DEF_SubjectInfoAccessSyntax_tags_1,	/* Same as above */
	sizeof(asn_DEF_SubjectInfoAccessSyntax_tags_1)
		/sizeof(asn_DEF_SubjectInfoAccessSyntax_tags_1[0]), /* 1 */
	{ &asn_OER_type_SubjectInfoAccessSyntax_constr_1, &asn_PER_type_SubjectInfoAccessSyntax_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SubjectInfoAccessSyntax_1,
	1,	/* Single element */
	&asn_SPC_SubjectInfoAccessSyntax_specs_1	/* Additional specs */
};

