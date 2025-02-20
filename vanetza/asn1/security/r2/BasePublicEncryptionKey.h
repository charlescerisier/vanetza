/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "build.asn1/ieee/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_BasePublicEncryptionKey_H_
#define	_Vanetza_Security2_BasePublicEncryptionKey_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EccP256CurvePoint.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_BasePublicEncryptionKey_PR {
	Vanetza_Security2_BasePublicEncryptionKey_PR_NOTHING,	/* No components present */
	Vanetza_Security2_BasePublicEncryptionKey_PR_eciesNistP256,
	Vanetza_Security2_BasePublicEncryptionKey_PR_eciesBrainpoolP256r1,
	/* Extensions may appear below */
	Vanetza_Security2_BasePublicEncryptionKey_PR_ecencSm2
} Vanetza_Security2_BasePublicEncryptionKey_PR;

/* Vanetza_Security2_BasePublicEncryptionKey */
typedef struct Vanetza_Security2_BasePublicEncryptionKey {
	Vanetza_Security2_BasePublicEncryptionKey_PR present;
	union Vanetza_Security2_BasePublicEncryptionKey_u {
		Vanetza_Security2_EccP256CurvePoint_t	 eciesNistP256;
		Vanetza_Security2_EccP256CurvePoint_t	 eciesBrainpoolP256r1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		Vanetza_Security2_EccP256CurvePoint_t	 ecencSm2;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_BasePublicEncryptionKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_BasePublicEncryptionKey;
extern asn_CHOICE_specifics_t asn_SPC_Vanetza_Security2_BasePublicEncryptionKey_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_BasePublicEncryptionKey_1[3];
extern asn_per_constraints_t asn_PER_type_Vanetza_Security2_BasePublicEncryptionKey_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_BasePublicEncryptionKey_H_ */
#include "asn_internal.h"
