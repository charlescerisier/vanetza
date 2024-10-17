/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Description"
 * 	found in "asn1/release2/TS103831v221-DENM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_DENM_PDU_Description_ManagementContainer_H_
#define	_Vanetza_ITS2_DENM_PDU_Description_ManagementContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ActionId.h"
#include "TimestampIts.h"
#include "Termination.h"
#include "ReferencePosition.h"
#include "StandardLength3b.h"
#include "TrafficDirection.h"
#include "DeltaTimeSecond.h"
#include "DeltaTimeMilliSecondPositive.h"
#include "StationType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_ITS2_DENM-PDU-Description_ManagementContainer */
typedef struct Vanetza_ITS2_DENM_PDU_Description_ManagementContainer {
	Vanetza_ITS2_ActionId_t	 actionId;
	Vanetza_ITS2_TimestampIts_t	 detectionTime;
	Vanetza_ITS2_TimestampIts_t	 referenceTime;
	Vanetza_ITS2_Termination_t	*termination;	/* OPTIONAL */
	Vanetza_ITS2_ReferencePosition_t	 eventPosition;
	Vanetza_ITS2_StandardLength3b_t	*awarenessDistance;	/* OPTIONAL */
	Vanetza_ITS2_TrafficDirection_t	*trafficDirection;	/* OPTIONAL */
	Vanetza_ITS2_DeltaTimeSecond_t	*validityDuration;	/* DEFAULT 600 */
	Vanetza_ITS2_DeltaTimeMilliSecondPositive_t	*transmissionInterval;	/* OPTIONAL */
	Vanetza_ITS2_StationType_t	 stationType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_DENM_PDU_Description_ManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_DENM_PDU_Description_ManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_DENM_PDU_Description_ManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_DENM_PDU_Description_ManagementContainer_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_DENM_PDU_Description_ManagementContainer_H_ */
#include "asn_internal.h"
