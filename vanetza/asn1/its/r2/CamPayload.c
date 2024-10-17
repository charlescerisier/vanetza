/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "asn1/release2/TS103900v211-CAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "CamPayload.h"

asn_TYPE_member_t asn_MBR_Vanetza_ITS2_CamPayload_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_CamPayload, generationDeltaTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_GenerationDeltaTime,
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
		"generationDeltaTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_CamPayload, camParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_CamParameters,
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
		"camParameters"
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_CamPayload_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_ITS2_CamPayload_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* generationDeltaTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* camParameters */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_CamPayload_specs_1 = {
	sizeof(struct Vanetza_ITS2_CamPayload),
	offsetof(struct Vanetza_ITS2_CamPayload, _asn_ctx),
	asn_MAP_Vanetza_ITS2_CamPayload_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_CamPayload = {
	"CamPayload",
	"CamPayload",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_ITS2_CamPayload_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_CamPayload_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_CamPayload_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_CamPayload_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_CamPayload_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_CamPayload_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_ITS2_CamPayload_1,
	2,	/* Elements count */
	&asn_SPC_Vanetza_ITS2_CamPayload_specs_1	/* Additional specs */
};

