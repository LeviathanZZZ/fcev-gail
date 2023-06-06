#ifndef RTW_HEADER_FCEvReferenceApplication_cap_host_h__
#define RTW_HEADER_FCEvReferenceApplication_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "FCEvPowertrainController_capi_host.h"
#include "DrivetrainEv_capi_host.h"
#include "FCElectricPlant_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 3 ] ; FCEvPowertrainController_host_DataMapInfo_T child0 ;
DrivetrainEv_host_DataMapInfo_T child1 ; FCElectricPlant_host_DataMapInfo_T
child2 ; } FCEvReferenceApplication_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void FCEvReferenceApplication_host_InitializeDataMapInfo (
FCEvReferenceApplication_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
