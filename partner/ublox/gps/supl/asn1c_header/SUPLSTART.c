/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "supl.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#include "SUPLSTART.h"

static asn_TYPE_member_t asn_MBR_SUPLSTART_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SUPLSTART, sETCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SETCapabilities,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sETCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SUPLSTART, locationId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"locationId"
		},
	{ ATF_POINTER, 1, offsetof(struct SUPLSTART, qoP),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"qoP"
		},
};
static int asn_MAP_SUPLSTART_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_SUPLSTART_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SUPLSTART_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sETCapabilities at 110 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationId at 111 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* qoP at 112 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SUPLSTART_specs_1 = {
	sizeof(struct SUPLSTART),
	offsetof(struct SUPLSTART, _asn_ctx),
	asn_MAP_SUPLSTART_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SUPLSTART_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SUPLSTART = {
	"SUPLSTART",
	"SUPLSTART",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SUPLSTART_tags_1,
	sizeof(asn_DEF_SUPLSTART_tags_1)
		/sizeof(asn_DEF_SUPLSTART_tags_1[0]), /* 1 */
	asn_DEF_SUPLSTART_tags_1,	/* Same as above */
	sizeof(asn_DEF_SUPLSTART_tags_1)
		/sizeof(asn_DEF_SUPLSTART_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SUPLSTART_1,
	3,	/* Elements count */
	&asn_SPC_SUPLSTART_specs_1	/* Additional specs */
};
