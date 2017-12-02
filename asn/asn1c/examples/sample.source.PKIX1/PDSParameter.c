/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "../rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S ../../skeletons -pdu=Certificate -fcompound-names -fwide-types`
 */

#include "PDSParameter.h"

static const int permitted_alphabet_table_2[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};
static const int permitted_alphabet_code2value_2[74] = {
32,39,40,41,43,44,45,46,47,48,49,50,51,52,53,54,
55,56,57,58,61,63,65,66,67,68,69,70,71,72,73,74,
75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,
97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,
113,114,115,116,117,118,119,120,121,122,};


static int check_permitted_alphabet_2(const void *sptr) {
	const int *table = permitted_alphabet_table_2;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int
memb_printable_string_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 30)
		 && !check_permitted_alphabet_2(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_printable_string_2_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_2)/sizeof(permitted_alphabet_table_2[0]))
		return -1;
	return permitted_alphabet_table_2[value] - 1;
}
static int asn_PER_MAP_printable_string_2_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_2)/sizeof(permitted_alphabet_code2value_2[0]))
		return -1;
	return permitted_alphabet_code2value_2[code];
}
static int
memb_teletex_string_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const TeletexString_t *st = (const TeletexString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 30)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_printable_string_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..30)) */};
static asn_per_constraints_t asn_PER_memb_printable_string_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  122 }	/* (32..122) */,
	{ APC_CONSTRAINED,	 5,  5,  1,  30 }	/* (SIZE(1..30)) */,
	asn_PER_MAP_printable_string_2_v2c,	/* Value to PER code map */
	asn_PER_MAP_printable_string_2_c2v	/* PER code to value map */
};
static asn_oer_constraints_t asn_OER_memb_teletex_string_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_teletex_string_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PDSParameter_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PDSParameter, printable_string),
		(ASN_TAG_CLASS_UNIVERSAL | (19 << 2)),
		0,
		&asn_DEF_PrintableString,
		0,
		{ &asn_OER_memb_printable_string_constr_2, &asn_PER_memb_printable_string_constr_2,  memb_printable_string_constraint_1 },
		0, 0, /* No default value */
		"printable-string"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSParameter, teletex_string),
		(ASN_TAG_CLASS_UNIVERSAL | (20 << 2)),
		0,
		&asn_DEF_TeletexString,
		0,
		{ &asn_OER_memb_teletex_string_constr_3, &asn_PER_memb_teletex_string_constr_3,  memb_teletex_string_constraint_1 },
		0, 0, /* No default value */
		"teletex-string"
		},
};
static const ber_tlv_tag_t asn_DEF_PDSParameter_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSParameter_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (19 << 2)), 0, 0, 0 }, /* printable-string */
    { (ASN_TAG_CLASS_UNIVERSAL | (20 << 2)), 1, 0, 0 } /* teletex-string */
};
static const uint8_t asn_MAP_PDSParameter_mmap_1[(2 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(0 << 7) | (0 << 6)
};
asn_SET_specifics_t asn_SPC_PDSParameter_specs_1 = {
	sizeof(struct PDSParameter),
	offsetof(struct PDSParameter, _asn_ctx),
	offsetof(struct PDSParameter, _presence_map),
	asn_MAP_PDSParameter_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PDSParameter_tag2el_1,	/* Same as above */
	2,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(const unsigned int *)asn_MAP_PDSParameter_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_PDSParameter = {
	"PDSParameter",
	"PDSParameter",
	&asn_OP_SET,
	asn_DEF_PDSParameter_tags_1,
	sizeof(asn_DEF_PDSParameter_tags_1)
		/sizeof(asn_DEF_PDSParameter_tags_1[0]), /* 1 */
	asn_DEF_PDSParameter_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSParameter_tags_1)
		/sizeof(asn_DEF_PDSParameter_tags_1[0]), /* 1 */
	{ 0, 0, SET_constraint },
	asn_MBR_PDSParameter_1,
	2,	/* Elements count */
	&asn_SPC_PDSParameter_specs_1	/* Additional specs */
};

