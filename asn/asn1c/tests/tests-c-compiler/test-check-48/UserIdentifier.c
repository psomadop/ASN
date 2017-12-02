/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleSetChoiceExtensibility"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/48-real-life-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "UserIdentifier.h"

static asn_oer_constraints_t asn_OER_type_UserIdentifier_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_UserIdentifier_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UserIdentifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UserIdentifier, choice.phoneNumber),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phoneNumber"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UserIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 } /* phoneNumber */
};
static asn_CHOICE_specifics_t asn_SPC_UserIdentifier_specs_1 = {
	sizeof(struct UserIdentifier),
	offsetof(struct UserIdentifier, _asn_ctx),
	offsetof(struct UserIdentifier, present),
	sizeof(((struct UserIdentifier *)0)->present),
	asn_MAP_UserIdentifier_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UserIdentifier = {
	"UserIdentifier",
	"UserIdentifier",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UserIdentifier_constr_1, &asn_PER_type_UserIdentifier_constr_1, CHOICE_constraint },
	asn_MBR_UserIdentifier_1,
	1,	/* Elements count */
	&asn_SPC_UserIdentifier_specs_1	/* Additional specs */
};

