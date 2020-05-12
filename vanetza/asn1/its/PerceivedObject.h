/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/TR103562v211.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_PerceivedObject_H_
#define	_PerceivedObject_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "TimeOfMeasurement.h"
#include "ObjectAge.h"
#include "ObjectConfidence.h"
#include "ObjectDistanceWithConfidence.h"
#include "SpeedExtended.h"
#include "ObjectRefPoint.h"
#include "DynamicStatus.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SensorIdList;
struct ObjectDistanceWithConfidence;
struct SpeedExtended;
struct LongitudinalAcceleration;
struct LateralAcceleration;
struct VerticalAcceleration;
struct CartesianAngle;
struct ObjectDimension;
struct ObjectClassDescription;
struct MatchedPosition;

/* PerceivedObject */
typedef struct PerceivedObject {
	Identifier_t	 objectID;
	struct SensorIdList	*sensorIDList;	/* OPTIONAL */
	TimeOfMeasurement_t	 timeOfMeasurement;
	ObjectAge_t	*objectAge;	/* OPTIONAL */
	ObjectConfidence_t	 objectConfidence;	/* DEFAULT 0 */
	ObjectDistanceWithConfidence_t	 xDistance;
	ObjectDistanceWithConfidence_t	 yDistance;
	struct ObjectDistanceWithConfidence	*zDistance;	/* OPTIONAL */
	SpeedExtended_t	 xSpeed;
	SpeedExtended_t	 ySpeed;
	struct SpeedExtended	*zSpeed;	/* OPTIONAL */
	struct LongitudinalAcceleration	*xAcceleration;	/* OPTIONAL */
	struct LateralAcceleration	*yAcceleration;	/* OPTIONAL */
	struct VerticalAcceleration	*zAcceleration;	/* OPTIONAL */
	struct CartesianAngle	*yawAngle;	/* OPTIONAL */
	struct ObjectDimension	*planarObjectDimension1;	/* OPTIONAL */
	struct ObjectDimension	*planarObjectDimension2;	/* OPTIONAL */
	struct ObjectDimension	*verticalObjectDimension;	/* OPTIONAL */
	ObjectRefPoint_t	 objectRefPoint;	/* DEFAULT 0 */
	DynamicStatus_t	*dynamicStatus;	/* OPTIONAL */
	struct ObjectClassDescription	*classification;	/* OPTIONAL */
	struct MatchedPosition	*matchedPosition;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PerceivedObject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PerceivedObject;
extern asn_SEQUENCE_specifics_t asn_SPC_PerceivedObject_specs_1;
extern asn_TYPE_member_t asn_MBR_PerceivedObject_1[22];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SensorIdList.h"
#include "ObjectDistanceWithConfidence.h"
#include "SpeedExtended.h"
#include "LongitudinalAcceleration.h"
#include "LateralAcceleration.h"
#include "VerticalAcceleration.h"
#include "CartesianAngle.h"
#include "ObjectDimension.h"
#include "ObjectClassDescription.h"
#include "MatchedPosition.h"

#endif	/* _PerceivedObject_H_ */
#include "asn_internal.h"