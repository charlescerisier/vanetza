/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_ClusterBreakupInfo_H_
#define	_Vanetza_ITS2_ClusterBreakupInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ClusterBreakupReason.h"
#include "DeltaTimeQuarterSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_ITS2_ClusterBreakupInfo */
typedef struct Vanetza_ITS2_ClusterBreakupInfo {
	Vanetza_ITS2_ClusterBreakupReason_t	 clusterBreakupReason;
	Vanetza_ITS2_DeltaTimeQuarterSecond_t	 breakupTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_ClusterBreakupInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_ClusterBreakupInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_ClusterBreakupInfo_H_ */
#include "asn_internal.h"
