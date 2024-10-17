/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "GeoPosition.h"

static int asn_DFL_4_cmp_800001(const void *sptr) {
	const Vanetza_ITS2_AltitudeValue_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 800001 */
	return (*st != 800001);
}
static int asn_DFL_4_set_800001(void **sptr) {
	Vanetza_ITS2_AltitudeValue_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 800001 */
	*st = 800001;
	return 0;
}
asn_TYPE_member_t asn_MBR_Vanetza_ITS2_GeoPosition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_GeoPosition, latitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_Latitude,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"latitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_GeoPosition, longitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_Longitude,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"longitude"
		},
	{ ATF_POINTER, 1, offsetof(struct Vanetza_ITS2_GeoPosition, altitude),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_AltitudeValue,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		&asn_DFL_4_cmp_800001,	/* Compare DEFAULT 800001 */
		&asn_DFL_4_set_800001,	/* Set DEFAULT 800001 */
		"altitude"
		},
};
static const int asn_MAP_Vanetza_ITS2_GeoPosition_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_GeoPosition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_ITS2_GeoPosition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* longitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* altitude */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_GeoPosition_specs_1 = {
	sizeof(struct Vanetza_ITS2_GeoPosition),
	offsetof(struct Vanetza_ITS2_GeoPosition, _asn_ctx),
	asn_MAP_Vanetza_ITS2_GeoPosition_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Vanetza_ITS2_GeoPosition_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_GeoPosition = {
	"GeoPosition",
	"GeoPosition",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_ITS2_GeoPosition_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_GeoPosition_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_GeoPosition_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_GeoPosition_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_GeoPosition_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_GeoPosition_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Vanetza_ITS2_GeoPosition_1,
	3,	/* Elements count */
	&asn_SPC_Vanetza_ITS2_GeoPosition_specs_1	/* Additional specs */
};

