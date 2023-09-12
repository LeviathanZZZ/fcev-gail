#include "FCEvPowertrainController.h"
#include "rtwtypes.h"
#include "FCEvPowertrainController_private.h"
#include "FCEvPowertrainController_capi.h"
#include "look1_binlxpw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_FCEvPowertrainController [ 47 ] = { {
"dif03hcjvgl" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "bzzrkabtjr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "eo2g54aezf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "gf5wxrzqsr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "dbmyxo2m5d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "d1pwx2baxm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ibikp0pgia" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ax0myfw24a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "nzekywx1we" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "empdn44ymi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "blhejuf4nc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "hisuxex301" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "kfczeuvxuu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "izbd5cj1yx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "c0zmftiqzd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "bsdghwadnz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "nlh1gryrx0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "bkxy2vuq3d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "jt0nw0i3cw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "otjhyqv5ki" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "edcpavqjru" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "dyjn3zzpfq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "k2oudzyk03" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "hjsbdkg1ln" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "paumcfdnuw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "FCEvPowertrainController" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "d2f0gowvmo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ax55bwwar2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "ezkw1qrycv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"FCEvPowertrainController" } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0
, - 1 , ( void * ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void *
) "int64" } , { "int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_FCEvPowertrainController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "FCEvPowertrainController"
} , { "mr_FCEvPowertrainController_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "FCEvPowertrainController" } , {
"mr_FCEvPowertrainController_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "FCEvPowertrainController" } , { "FCEvPowertrainController.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"FCEvPowertrainController.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"FCEvPowertrainController" } } ; gdngfg3ibwc gdngfg3ibw = { 0.0 , 0.0 , 200.0
, 350.0 , 0.0 , 9.5492965855137211 , { 335.0 , 335.0 , 335.0 , 335.0 , 335.0
, 269.7676 , 215.8141 , 179.8451 , 154.1529 , 134.8838 , 119.8967 , 107.9071
} , { 0.0 , 1000.0 , 2000.0 , 3000.0 , 3221.0 , 4000.0 , 5000.0 , 6000.0 ,
7000.0 , 8000.0 , 9000.0 , 10000.0 } , - 1.0 , - 1000.0 , 1000.0 , 0.0 } ;
void dyjn3zzpfq ( ax0myfw24a * localX ) { localX -> bzjnqqh5ry = 0.0 ; } void
edcpavqjru ( ax0myfw24a * localX ) { localX -> bzjnqqh5ry = 0.0 ; } void
FCEvPowertrainController ( ezkw1qrycv * const jxp0bqrs0w , const real_T *
jfbc5gabq5 , const real_T * ofofgt3fsm , const real_T * lqeaxkgw5f , real_T *
hvl41qwm3c , real_T * g0hb2yo1wf , real_T * pv3jch0rpi , izbd5cj1yx * localB
, kfczeuvxuu * localDW , ax0myfw24a * localX ) { real_T dn00dseura_p ; real_T
tmp ; static const real_T b [ 1370 ] = { 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
3534.123 , 6361.4214 , 7068.246 , 7068.246 , 7775.0706 , 7775.0706 ,
4240.9476 , 7068.246 , 8481.8952 , 7068.246 , 7068.246 , 3534.123 , 1413.6492
, 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 3534.123 , 3534.123 , 4240.9476 , 7068.246 , 7775.0706 ,
7775.0706 , 7775.0706 , 4240.9476 , 1413.6492 , 2120.4738 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 2120.4738 , 7068.246 , 7775.0706 ,
7775.0706 , 7775.0706 , 7068.246 , 6361.4214 , 5654.5968 , 4240.9476 ,
1413.6492 , 2120.4738 , 4947.7722 , 4240.9476 , 2120.4738 , 2120.4738 ,
3534.123 , 7068.246 , 7068.246 , 4240.9476 , 1413.6492 , 1413.6492 ,
4240.9476 , 7068.246 , 7068.246 , 3534.123 , 1413.6492 , 7068.246 , 7068.246
, 7068.246 , 7775.0706 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246
, 4240.9476 , 2120.4738 , 3534.123 , 3534.123 , 5654.5968 , 7068.246 ,
1413.6492 , 1413.6492 , 1413.6492 , 7068.246 , 7068.246 , 7068.246 ,
6361.4214 , 5654.5968 , 3534.123 , 1413.6492 , 1413.6492 , 4947.7722 ,
7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 2827.2984 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 4240.9476 , 7068.246 , 7068.246 , 7775.0706 , 8481.8952 ,
8481.8952 , 8481.8952 , 7775.0706 , 7775.0706 , 7068.246 , 1413.6492 ,
1413.6492 , 1413.6492 , 5654.5968 , 4947.7722 , 4947.7722 , 7068.246 ,
7775.0706 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 7068.246 , 5654.5968 , 7068.246 , 7775.0706 , 8481.8952 ,
8481.8952 , 9188.7198 , 9188.7198 , 9188.7198 , 7775.0706 , 9188.7198 ,
8481.8952 , 8481.8952 , 8481.8952 , 9188.7198 , 8481.8952 , 8481.8952 ,
8481.8952 , 7068.246 , 6361.4214 , 7068.246 , 5654.5968 , 7068.246 , 7068.246
, 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7775.0706 , 7775.0706 ,
7775.0706 , 7775.0706 , 7775.0706 , 8481.8952 , 7775.0706 , 7775.0706 ,
8481.8952 , 8481.8952 , 8481.8952 , 8481.8952 , 7775.0706 , 7775.0706 ,
7068.246 , 6361.4214 , 7068.246 , 7775.0706 , 7775.0706 , 8424.72258982557 ,
7775.0706 , 8481.8952 , 7775.0706 , 7775.0706 , 7775.0706 , 7068.246 ,
7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 ,
7020.09085899841 , 6389.45892272216 , 1413.6492 , 2827.2984 , 4947.7722 ,
7068.246 , 6361.4214 , 7068.246 , 7775.0706 , 7068.246 , 7068.246 , 7068.246
, 6361.4214 , 4240.9476 , 4240.9476 , 4240.9476 , 2120.4738 , 7775.0706 ,
4240.9476 , 7068.246 , 7068.246 , 6902.76739080852 , 7068.246 , 7775.0706 ,
7775.0706 , 7775.0706 , 8481.8952 , 8481.8952 , 8481.8952 , 8481.8952 ,
8481.8952 , 7775.0706 , 8481.8952 , 7068.246 , 7068.246 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 7068.246 , 7068.246 ,
3534.123 , 1413.6492 , 7068.246 , 7068.246 , 7068.246 , 3534.123 , 7068.246 ,
7068.246 , 7068.246 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 4947.7722 , 7068.246 , 7068.246 , 7775.0706 ,
7775.0706 , 7775.0706 , 8481.8952 , 7068.246 , 7775.0706 , 7775.0706 ,
7775.0706 , 8481.8952 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246
, 7775.0706 , 6361.4214 , 7068.246 , 4240.9476 , 2120.4738 , 7068.246 ,
7775.0706 , 7068.246 , 5654.5968 , 5654.5968 , 5654.5968 , 5654.5968 ,
5654.5968 , 6361.4214 , 7068.246 , 6361.4214 , 4240.9476 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 2827.2984 , 6361.4214 , 7068.246 , 7775.0706 ,
7775.0706 , 8481.8952 , 8481.8952 , 8481.8952 , 7068.246 , 8141.6286288095 ,
7775.0706 , 7068.246 , 5654.5968 , 3534.123 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 4240.9476 ,
7068.246 , 7068.246 , 7775.0706 , 7775.0706 , 8481.8952 , 8481.8952 ,
9188.7198 , 7775.0706 , 7775.0706 , 8481.8952 , 8169.21972055473 , 7068.246 ,
7775.0706 , 7068.246 , 7068.246 , 7068.246 , 4240.9476 , 6361.4214 ,
6361.4214 , 3534.123 , 2120.4738 , 7068.246 , 5654.5968 , 1413.6492 ,
4240.9476 , 4240.9476 , 2827.2984 , 5654.5968 , 5654.5968 , 5654.5968 ,
5654.5968 , 5654.5968 , 2827.2984 , 6361.4214 , 6361.4214 , 7068.246 ,
2120.4738 , 2827.2984 , 5654.5968 , 5654.5968 , 2827.2984 , 2827.2984 ,
4240.9476 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 , 4240.9476 , 2827.2984 ,
6361.4214 , 4240.9476 , 4240.9476 , 6361.4214 , 7068.246 , 7068.246 ,
7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 ,
7068.246 , 6361.4214 , 4240.9476 , 3534.123 , 3534.123 , 3534.123 , 3534.123
, 3534.123 , 7068.246 , 4947.7722 , 4947.7722 , 1413.6492 , 1413.6492 ,
1413.6492 , 3534.123 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 4240.9476 , 7068.246 ,
7068.246 , 7434.2483362056 , 7068.246 , 7068.246 , 6361.4214 , 2120.4738 ,
2120.4738 , 4947.7722 , 3534.123 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 4240.9476 , 2827.2984 , 1413.6492 , 1413.6492 ,
1413.6492 , 2120.4738 , 2827.2984 , 4240.9476 , 5654.5968 , 6706.25044762511
, 6361.4214 , 7068.246 , 7068.246 , 3534.123 , 3534.123 , 5654.5968 ,
5654.5968 , 5654.5968 , 3534.123 , 2827.2984 , 2827.2984 , 4240.9476 ,
7068.246 , 7068.246 , 7068.246 , 6887.50895268278 , 7068.246 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 4240.9476 , 7068.246 ,
7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7775.0706 , 7068.246 ,
7068.246 , 7068.246 , 7068.246 , 7068.246 , 5747.10568051961 , 6361.4214 ,
4240.9476 , 4240.9476 , 3534.123 , 5654.5968 , 4240.9476 , 3534.123 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 2120.4738 , 2120.4738 , 4947.7722 ,
7068.246 , 7068.246 , 7068.246 , 6361.4214 , 7068.246 , 3534.123 , 1413.6492
, 2120.4738 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246 ,
2827.2984 , 1413.6492 , 6361.4214 , 6566.44353570012 , 4240.9476 , 1413.6492
, 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
2827.2984 , 7024.34965010971 , 7068.246 , 7068.246 , 7068.246 , 7068.246 ,
7068.246 , 7068.246 , 7775.0706 , 7116.28389989889 , 7068.246 , 7068.246 ,
7068.246 , 7068.246 , 7068.246 , 6361.4214 , 6594.94994788364 , 6361.4214 ,
4240.9476 , 1413.6492 , 2827.2984 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 3534.123 , 6361.4214 , 7068.246 , 7775.0706 ,
7775.0706 , 7068.246 , 6361.4214 , 7068.246 , 7068.246 , 7068.246 , 7068.246
, 7775.0706 , 7775.0706 , 7068.246 , 7068.246 , 6361.4214 , 7068.246 ,
4240.9476 , 4240.9476 , 2827.2984 , 1413.6492 , 2120.4738 , 4240.9476 ,
4240.9476 , 2827.2984 , 1413.6492 , 2827.2984 , 3534.123 , 3534.123 ,
3534.123 , 3534.123 , 3534.123 , 4947.7722 , 6361.4214 , 7068.246 , 7775.0706
, 7068.246 , 7276.80663607281 , 7551.54280753892 , 4947.7722 , 7068.246 ,
7068.246 , 7068.246 , 4240.9476 , 2827.2984 , 4947.7722 , 4240.9476 ,
1413.6492 , 1413.6492 , 3534.123 , 1413.6492 , 1413.6492 , 3534.123 ,
1413.6492 , 3534.123 , 1413.6492 , 1413.6492 , 3534.123 , 4240.9476 ,
4240.9476 , 4240.9476 , 1413.6492 , 2827.2984 , 4240.9476 , 2120.4738 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 2120.4738 , 7046.01422121319 ,
6548.24617451123 , 6361.4214 , 6361.4214 , 6361.4214 , 6426.53641640354 ,
7068.246 , 7068.246 , 7068.246 , 7068.246 , 3534.123 , 5654.5968 , 5654.5968
, 5654.5968 , 7068.246 , 6361.4214 , 7068.246 , 4947.7722 , 4947.7722 ,
4947.7722 , 2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 5654.5968 , 5654.5968 , 6361.4214 , 4947.7722 ,
6576.7356181714 , 7068.246 , 7068.246 , 6361.4214 , 7068.246 , 7068.246 ,
6361.4214 , 2827.2984 , 2827.2984 , 2827.2984 , 1413.6492 , 1413.6492 ,
2827.2984 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 6361.4214 ,
7068.246 , 6361.4214 , 5654.5968 , 2120.4738 , 5654.5968 , 3534.123 ,
3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 ,
3534.123 , 3534.123 , 2120.4738 , 2827.2984 , 3534.123 , 1413.6492 ,
1413.6492 , 3534.123 , 6361.4214 , 2827.2984 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 , 3534.123 , 7068.246 ,
7068.246 , 6361.4214 , 4947.7722 , 4947.7722 , 6361.4214 , 4947.7722 ,
4240.9476 , 4240.9476 , 4947.7722 , 1413.6492 , 1413.6492 , 3534.123 ,
3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 , 4947.7722 ,
6361.4214 , 3534.123 , 1413.6492 , 3534.123 , 1413.6492 , 6361.4214 ,
6858.61294988248 , 6380.12544995358 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 6361.4214 ,
7068.246 , 7068.246 , 7775.0706 , 7688.93879181494 , 7068.246 , 7068.246 ,
7068.246 , 7068.246 , 7068.246 , 7129.00669373074 , 7775.0706 , 7068.246 ,
7068.246 , 6361.4214 , 4947.7722 , 4240.9476 , 4240.9476 , 1413.6492 ,
2120.4738 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 , 4947.7722 ,
6611.56480936451 , 6361.4214 , 1413.6492 , 2827.2984 , 4240.9476 , 1413.6492
, 2827.2984 , 2827.2984 , 7068.246 , 6361.4214 , 6773.87517982162 , 4947.7722
, 5654.5968 , 6383.03282110736 , 4240.9476 , 2827.2984 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 4240.9476 , 7068.246 , 7068.246 ,
7775.0706 , 7775.0706 , 7068.246 , 7068.246 , 7068.246 , 7068.246 , 7068.246
, 7068.246 , 7068.246 , 7068.246 , 6361.4214 , 7032.45800409138 ,
6642.73083522174 , 6361.4214 , 1413.6492 , 1413.6492 , 1413.6492 , 3534.123 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 ,
6766.83160233433 , 7068.246 , 7068.246 , 6361.4214 , 4240.9476 , 7068.246 ,
7068.246 , 7082.13100294764 , 7068.246 , 4240.9476 , 3534.123 , 3534.123 ,
4947.7722 , 7033.78054945804 , 6585.80993370602 , 7068.246 , 6982.81236318557
, 6554.68874623724 , 2120.4738 , 2120.4738 , 4947.7722 , 6361.4214 ,
6361.4214 , 4947.7722 , 6460.9454463555 , 5654.5968 , 6361.4214 , 4240.9476 ,
3534.123 , 3534.123 , 2827.2984 , 2827.2984 , 3534.123 , 1413.6492 ,
2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 6361.4214 , 7068.246 , 7296.26368640619 , 7775.0706 ,
8187.38354427861 , 7822.68483562006 , 7775.0706 , 6361.4214 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 2827.2984 , 6696.93073626148 , 7068.246 ,
6763.53877408688 , 4947.7722 , 2120.4738 , 1413.6492 , 2120.4738 , 2827.2984
, 1413.6492 , 5654.5968 , 6544.42229302036 , 6934.85965343772 , 7068.246 ,
6592.16590655116 , 6979.97971427341 , 6361.4214 , 4947.7722 , 2827.2984 ,
1413.6492 , 1413.6492 , 4947.7722 , 4947.7722 , 4240.9476 , 2120.4738 ,
1413.6492 , 1413.6492 , 2827.2984 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 4947.7722 , 3534.123 , 3534.123 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
2120.4738 , 3534.123 , 5654.5968 , 6862.09039843185 , 2827.2984 , 1413.6492 ,
1413.6492 , 1413.6492 , 4240.9476 , 6832.69632536083 , 7186.7195816718 ,
7775.0706 , 7519.19808288462 , 7068.246 , 6749.67557378115 , 5654.5968 ,
6361.4214 , 6723.82928413377 , 6898.27248984111 , 6361.4214 , 2827.2984 ,
1413.6492 , 1413.6492 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 6877.27122893218 , 4240.9476 , 6361.4214 , 4947.7722 , 5654.5968
, 6405.38594051907 , 4947.7722 , 4240.9476 , 6361.4214 , 4947.7722 ,
6692.02835796892 , 6525.39327090142 , 7190.56888299147 , 6244.28844585195 ,
4947.7722 , 2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 5654.5968 , 7064.67862610682 , 7858.21350750131 ,
7329.46762216602 , 6506.3684712433 , 7026.58769045064 , 6734.33575156706 ,
6938.71089644369 , 7164.49049158449 , 6041.65204147966 , 7006.26226196157 ,
4240.9476 , 5040.84598387937 , 1552.28598159911 , 1413.6492 ,
1881.87299412719 , 2120.4738 , 1894.41935647253 , 2120.4738 ,
2028.85880112291 , 2083.80839474123 , 2204.83302708476 , 2328.80275648187 ,
1748.88374310038 , 2463.26234903331 , 1991.44863734809 , 2524.81894694468 ,
2964.92783071948 , 2605.70869797599 , 2837.67893223857 , 5983.38163386491 } ;
localB -> gjlfkduml1 = rtmGetTaskTime ( jxp0bqrs0w , 0 ) ; if (
ssIsModeUpdateTimeStep ( jxp0bqrs0w -> _mdlRefSfcnS ) ) { localDW ->
jf40w34zmi = ( localB -> gjlfkduml1 > gdngfg3ibw . P_0 ) ; } dn00dseura_p = *
jfbc5gabq5 ; if ( localDW -> jf40w34zmi ) { tmp = localB -> gjlfkduml1 ; }
else { tmp = gdngfg3ibw . P_11 ; } if ( dn00dseura_p > gdngfg3ibw . P_1 ) {
dn00dseura_p = gdngfg3ibw . P_1 ; } else if ( dn00dseura_p < gdngfg3ibw . P_2
) { dn00dseura_p = gdngfg3ibw . P_2 ; } dn00dseura_p = b [ ( int32_T ) ( tmp
+ 1.0 ) - 1 ] / dn00dseura_p ; if ( dn00dseura_p > gdngfg3ibw . P_3 ) { *
hvl41qwm3c = gdngfg3ibw . P_3 ; } else if ( dn00dseura_p < gdngfg3ibw . P_4 )
{ * hvl41qwm3c = gdngfg3ibw . P_4 ; } else { * hvl41qwm3c = dn00dseura_p ; }
dn00dseura_p = gdngfg3ibw . P_5 * * ofofgt3fsm ; localB -> ei3fjourx3 =
look1_binlxpw ( dn00dseura_p , gdngfg3ibw . P_7 , gdngfg3ibw . P_6 , 11U ) ;
localB -> orl04cgsvu = gdngfg3ibw . P_8 * localB -> ei3fjourx3 ; if (
rtmIsMajorTimeStep ( jxp0bqrs0w ) && rtmIsSampleHit ( jxp0bqrs0w , 1 , 0 ) )
{ if ( ssIsModeUpdateTimeStep ( jxp0bqrs0w -> _mdlRefSfcnS ) ) { localDW ->
pzummf0301 = ( * lqeaxkgw5f > localB -> ei3fjourx3 ) ; localDW -> c23dliamkh
= ( * lqeaxkgw5f < localB -> orl04cgsvu ) ; } localB -> enq0lu0kuo = localDW
-> pzummf0301 ; localB -> aqhdwhq12l = localDW -> c23dliamkh ; } if ( localB
-> aqhdwhq12l ) { dn00dseura_p = localB -> orl04cgsvu ; } else { dn00dseura_p
= * lqeaxkgw5f ; } if ( localB -> enq0lu0kuo ) { * g0hb2yo1wf = localB ->
ei3fjourx3 ; } else { * g0hb2yo1wf = dn00dseura_p ; } * pv3jch0rpi = 0.0 ; *
pv3jch0rpi += gdngfg3ibw . P_10 * localX -> bzjnqqh5ry ; } void otjhyqv5ki (
void ) { } void jt0nw0i3cw ( const real_T * ofofgt3fsm , ax0myfw24a * localX
, ibikp0pgia * localXdot ) { localXdot -> bzjnqqh5ry = gdngfg3ibw . P_9 *
localX -> bzjnqqh5ry ; localXdot -> bzjnqqh5ry += * ofofgt3fsm ; } void
bkxy2vuq3d ( const real_T * lqeaxkgw5f , izbd5cj1yx * localB , bzzrkabtjr *
localZCSV ) { localZCSV -> atvn20tvky = localB -> gjlfkduml1 - gdngfg3ibw .
P_0 ; localZCSV -> fja35wwpwg = * lqeaxkgw5f - localB -> ei3fjourx3 ;
localZCSV -> ifj1qrjkm3 = * lqeaxkgw5f - localB -> orl04cgsvu ; } void
bsdghwadnz ( ezkw1qrycv * const jxp0bqrs0w ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( jxp0bqrs0w ->
_mdlRefSfcnS , "FCEvPowertrainController" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void k2oudzyk03 (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , ezkw1qrycv * const jxp0bqrs0w , izbd5cj1yx * localB ,
kfczeuvxuu * localDW , ax0myfw24a * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; gdngfg3ibw . P_1 = rtInf ; ( void ) memset ( ( void *
) jxp0bqrs0w , 0 , sizeof ( ezkw1qrycv ) ) ; jxp0bqrs0w -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; jxp0bqrs0w -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; jxp0bqrs0w -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; jxp0bqrs0w -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( jxp0bqrs0w -> _mdlRefSfcnS , "FCEvPowertrainController"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void
* ) localB ) , 0 , sizeof ( izbd5cj1yx ) ) ; { localB -> gjlfkduml1 = 0.0 ;
localB -> ei3fjourx3 = 0.0 ; localB -> orl04cgsvu = 0.0 ; } ( void ) memset (
( void * ) localDW , 0 , sizeof ( kfczeuvxuu ) ) ;
FCEvPowertrainController_InitializeDataMapInfo ( jxp0bqrs0w , localDW ,
localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( jxp0bqrs0w -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
jxp0bqrs0w -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( jxp0bqrs0w -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 1 ] [ 0 ] . currVal = ( char_T * ) & localB ->
aqhdwhq12l ; mr_nonContOutputArray [ 1 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 1 ] . currVal = ( char_T * ) &
localB -> enq0lu0kuo ; mr_nonContOutputArray [ 1 ] [ 1 ] . next = ( NULL ) ;
} } void mr_FCEvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS
, char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_FCEvPowertrainController , 47 ) ; * retVal = 1 ; } static void
mr_FCEvPowertrainController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_FCEvPowertrainController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_FCEvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_FCEvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_FCEvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_FCEvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_FCEvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_FCEvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_FCEvPowertrainController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_FCEvPowertrainController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_FCEvPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_FCEvPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_FCEvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_FCEvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_FCEvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_FCEvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_FCEvPowertrainController_GetDWork (
const dif03hcjvgl * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] =
{ "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix
( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_FCEvPowertrainController_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const
char_T * rtdwDataFieldNames [ 3 ] = { "mdlrefDW->rtdw.jf40w34zmi" ,
"mdlrefDW->rtdw.pzummf0301" , "mdlrefDW->rtdw.c23dliamkh" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 3 , rtdwDataFieldNames ) ;
mr_FCEvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . jf40w34zmi ) , sizeof ( mdlrefDW -> rtdw .
jf40w34zmi ) ) ; mr_FCEvPowertrainController_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . pzummf0301 ) , sizeof (
mdlrefDW -> rtdw . pzummf0301 ) ) ;
mr_FCEvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . c23dliamkh ) , sizeof ( mdlrefDW -> rtdw .
c23dliamkh ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_FCEvPowertrainController_SetDWork (
dif03hcjvgl * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_FCEvPowertrainController_restoreDataFromMxArray ( ( void * ) &
( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_FCEvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . jf40w34zmi ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
jf40w34zmi ) ) ; mr_FCEvPowertrainController_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . pzummf0301 ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . pzummf0301 ) ) ;
mr_FCEvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . c23dliamkh ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
c23dliamkh ) ) ; } } void
mr_FCEvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 3510179948U , 1942336791U , 4073947805U ,
2561925205U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"FCEvPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_FCEvPowertrainController_GetSimStateDisallowedBlocks ( ) { return ( NULL )
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
