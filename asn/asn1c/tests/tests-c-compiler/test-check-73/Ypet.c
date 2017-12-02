/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ModuleTestCircularReferences"
 * 	found in "/Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/tests/tests-asn1c-compiler/73-circular-OK.asn1"
 * 	`asn1c -S /Users/tasospsomadopoulos/Documents/asn1_sample/asn1c/skeletons -flink-skeletons -Wdebug-compiler`
 */

#include "Ypet.h"

static int check_permitted_alphabet_6(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv >= 65 && cv <= 90)) return -1;
	}
	return 0;
}

static int check_permitted_alphabet_7(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv >= 97 && cv <= 122)) return -1;
	}
	return 0;
}

static int
memb_patest1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(!check_permitted_alphabet_6(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_patest2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(!check_permitted_alphabet_7(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_patest1_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_patest1_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  65,  90 }	/* (65..90) */,
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_patest2_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_patest2_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  97,  122 }	/* (97..122) */,
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER character map necessary */
};
static int asn_DFL_3_cmp_7(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 7 */
	return (*st != 7);
}
static int asn_DFL_3_set_7(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 7 */
	*st = 7;
	return 0;
}
static asn_TYPE_member_t asn_MBR_senums_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_EnumType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_senums_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_senums_specs_4 = {
	sizeof(struct senums),
	offsetof(struct senums, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_senums_4 = {
	"senums",
	"senums",
	&asn_OP_SET_OF,
	asn_DEF_senums_tags_4,
	sizeof(asn_DEF_senums_tags_4)
		/sizeof(asn_DEF_senums_tags_4[0]), /* 1 */
	asn_DEF_senums_tags_4,	/* Same as above */
	sizeof(asn_DEF_senums_tags_4)
		/sizeof(asn_DEF_senums_tags_4[0]), /* 1 */
	{ 0, 0, SET_OF_constraint },
	asn_MBR_senums_4,
	1,	/* Single element */
	&asn_SPC_senums_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Ypet_1[] = {
	{ ATF_POINTER, 0, offsetof(struct Ypet, epyt),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Epyt,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"epyt"
		},
	{ ATF_POINTER, 1, offsetof(struct Ypet, plain),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		&asn_DFL_3_cmp_7,	/* Compare DEFAULT 7 */
		&asn_DFL_3_set_7,	/* Set DEFAULT 7 */
		"plain"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ypet, senums),
		(ASN_TAG_CLASS_UNIVERSAL | (17 << 2)),
		0,
		&asn_DEF_senums_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"senums"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ypet, patest1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_patest1_constr_6, &asn_PER_memb_patest1_constr_6,  memb_patest1_constraint_1 },
		0, 0, /* No default value */
		"patest1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ypet, patest2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_patest2_constr_7, &asn_PER_memb_patest2_constr_7,  memb_patest2_constraint_1 },
		0, 0, /* No default value */
		"patest2"
		},
};
static const ber_tlv_tag_t asn_DEF_Ypet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ypet_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* plain */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* epyt */
    { (ASN_TAG_CLASS_UNIVERSAL | (17 << 2)), 2, 0, 0 }, /* senums */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 3, 0, 0 }, /* patest1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 4, 0, 0 } /* patest2 */
};
static const uint8_t asn_MAP_Ypet_mmap_1[(5 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(1 << 7) | (0 << 6) | (1 << 5) | (1 << 4) | (1 << 3)
};
asn_SET_specifics_t asn_SPC_Ypet_specs_1 = {
	sizeof(struct Ypet),
	offsetof(struct Ypet, _asn_ctx),
	offsetof(struct Ypet, _presence_map),
	asn_MAP_Ypet_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_Ypet_tag2el_1,	/* Same as above */
	5,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(const unsigned int *)asn_MAP_Ypet_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_Ypet = {
	"Ypet",
	"Ypet",
	&asn_OP_SET,
	asn_DEF_Ypet_tags_1,
	sizeof(asn_DEF_Ypet_tags_1)
		/sizeof(asn_DEF_Ypet_tags_1[0]), /* 1 */
	asn_DEF_Ypet_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ypet_tags_1)
		/sizeof(asn_DEF_Ypet_tags_1[0]), /* 1 */
	{ 0, 0, SET_constraint },
	asn_MBR_Ypet_1,
	5,	/* Elements count */
	&asn_SPC_Ypet_specs_1	/* Additional specs */
};

