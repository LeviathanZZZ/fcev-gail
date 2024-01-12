#ifndef RTW_HEADER_FCEvPowertrainController_h_
#define RTW_HEADER_FCEvPowertrainController_h_
#ifndef FCEvPowertrainController_COMMON_INCLUDES_
#define FCEvPowertrainController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "FCEvPowertrainController_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T gjlfkduml1 ; real_T blrr4ks5vy ; real_T np4ahp0lvy ;
} izbd5cj1yx ; typedef struct { boolean_T jf40w34zmi ; boolean_T pzummf0301 ;
boolean_T c23dliamkh ; } kfczeuvxuu ; typedef struct { real_T bzjnqqh5ry ; }
ax0myfw24a ; typedef struct { real_T bzjnqqh5ry ; } ibikp0pgia ; typedef
struct { boolean_T bzjnqqh5ry ; } d1pwx2baxm ; typedef struct { real_T
bzjnqqh5ry ; } dbmyxo2m5d ; typedef struct { real_T bzjnqqh5ry ; } gf5wxrzqsr
; typedef struct { real_T bzjnqqh5ry ; } eo2g54aezf ; typedef struct { real_T
atvn20tvky ; real_T fja35wwpwg ; real_T ifj1qrjkm3 ; } bzzrkabtjr ; struct
gdngfg3ibwc_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4
; real_T P_5 ; real_T P_6 [ 12 ] ; real_T P_7 [ 12 ] ; real_T P_8 ; real_T
P_9 ; real_T P_10 ; real_T P_11 ; } ; struct ax55bwwar2 { struct
SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 3 ] ;
int_T systemTid [ 3 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; } Timing ; } ; typedef struct { izbd5cj1yx rtb ; kfczeuvxuu rtdw ;
ezkw1qrycv rtm ; } dif03hcjvgl ; extern void k2oudzyk03 ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
ezkw1qrycv * const jxp0bqrs0w , izbd5cj1yx * localB , kfczeuvxuu * localDW ,
ax0myfw24a * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_FCEvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_FCEvPowertrainController_GetDWork ( const dif03hcjvgl * mdlrefDW ) ;
extern void mr_FCEvPowertrainController_SetDWork ( dif03hcjvgl * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_FCEvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_FCEvPowertrainController_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
FCEvPowertrainController_GetCAPIStaticMap ( void ) ; extern void dyjn3zzpfq (
ax0myfw24a * localX ) ; extern void edcpavqjru ( ax0myfw24a * localX ) ;
extern void jt0nw0i3cw ( ax0myfw24a * localX , ibikp0pgia * localXdot ) ;
extern void bkxy2vuq3d ( real_T * g0hb2yo1wf , izbd5cj1yx * localB ,
bzzrkabtjr * localZCSV ) ; extern void otjhyqv5ki ( void ) ; extern void
FCEvPowertrainController ( ezkw1qrycv * const jxp0bqrs0w , const real_T *
jfbc5gabq5 , const real_T * ofofgt3fsm , const real_T * lqeaxkgw5f , real_T *
hvl41qwm3c , real_T * g0hb2yo1wf , real_T * pv3jch0rpi , real_T * iwatrfla0c
, izbd5cj1yx * localB , kfczeuvxuu * localDW ) ; extern void bsdghwadnz (
ezkw1qrycv * const jxp0bqrs0w ) ;
#endif
