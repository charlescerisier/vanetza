/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "asn1/release2/TS103900v211-CAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_SpecialVehicleContainer_H_
#define	_Vanetza_ITS2_SpecialVehicleContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PublicTransportContainer.h"
#include "SpecialTransportContainer.h"
#include "DangerousGoodsContainer.h"
#include "RoadWorksContainerBasic.h"
#include "RescueContainer.h"
#include "EmergencyContainer.h"
#include "SafetyCarContainer.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_ITS2_SpecialVehicleContainer_PR {
	Vanetza_ITS2_SpecialVehicleContainer_PR_NOTHING,	/* No components present */
	Vanetza_ITS2_SpecialVehicleContainer_PR_publicTransportContainer,
	Vanetza_ITS2_SpecialVehicleContainer_PR_specialTransportContainer,
	Vanetza_ITS2_SpecialVehicleContainer_PR_dangerousGoodsContainer,
	Vanetza_ITS2_SpecialVehicleContainer_PR_roadWorksContainerBasic,
	Vanetza_ITS2_SpecialVehicleContainer_PR_rescueContainer,
	Vanetza_ITS2_SpecialVehicleContainer_PR_emergencyContainer,
	Vanetza_ITS2_SpecialVehicleContainer_PR_safetyCarContainer
	/* Extensions may appear below */
	
} Vanetza_ITS2_SpecialVehicleContainer_PR;

/* Vanetza_ITS2_SpecialVehicleContainer */
typedef struct Vanetza_ITS2_SpecialVehicleContainer {
	Vanetza_ITS2_SpecialVehicleContainer_PR present;
	union Vanetza_ITS2_SpecialVehicleContainer_u {
		Vanetza_ITS2_PublicTransportContainer_t	 publicTransportContainer;
		Vanetza_ITS2_SpecialTransportContainer_t	 specialTransportContainer;
		Vanetza_ITS2_DangerousGoodsContainer_t	 dangerousGoodsContainer;
		Vanetza_ITS2_RoadWorksContainerBasic_t	 roadWorksContainerBasic;
		Vanetza_ITS2_RescueContainer_t	 rescueContainer;
		Vanetza_ITS2_EmergencyContainer_t	 emergencyContainer;
		Vanetza_ITS2_SafetyCarContainer_t	 safetyCarContainer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_SpecialVehicleContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_SpecialVehicleContainer;
extern asn_CHOICE_specifics_t asn_SPC_Vanetza_ITS2_SpecialVehicleContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_SpecialVehicleContainer_1[7];
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_SpecialVehicleContainer_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_SpecialVehicleContainer_H_ */
#include "asn_internal.h"
