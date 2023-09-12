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
, kfczeuvxuu * localDW ) { real_T tmp ; real_T u0 ; static const real_T b [
1370 ] = { 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 3534.123 , 6361.4214 ,
9188.7198 , 12722.8428 , 14843.3166 , 14843.3166 , 4240.9476 , 7068.246 ,
14843.3166 , 9895.5444 , 8481.8952 , 3534.123 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 2120.4738 ,
3534.123 , 3534.123 , 4947.7722 , 8481.8952 , 14136.492 , 14136.492 ,
14136.492 , 4947.7722 , 1413.6492 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 2120.4738 , 13429.6674 , 14136.492 , 14136.492 ,
14136.492 , 11309.1936 , 7068.246 , 5654.5968 , 4240.9476 , 1413.6492 ,
2827.2984 , 4947.7722 , 4240.9476 , 2827.2984 , 2827.2984 , 3534.123 ,
7775.0706 , 7775.0706 , 4240.9476 , 1413.6492 , 1413.6492 , 4240.9476 ,
7068.246 , 9188.7198 , 3534.123 , 1413.6492 , 7068.246 , 9188.7198 ,
11309.1936 , 14136.492 , 11309.1936 , 9188.7198 , 7775.0706 , 7775.0706 ,
7775.0706 , 4240.9476 , 2827.2984 , 3534.123 , 3534.123 , 5654.5968 ,
9188.7198 , 1413.6492 , 1413.6492 , 1413.6492 , 7775.0706 , 9895.5444 ,
9188.7198 , 7068.246 , 5654.5968 , 3534.123 , 1413.6492 , 1413.6492 ,
5654.5968 , 7775.0706 , 9895.5444 , 9895.5444 , 11309.1936 , 9188.7198 ,
7068.246 , 2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 4240.9476 , 8481.8952 , 12722.8428 ,
13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 ,
9188.7198 , 1413.6492 , 1413.6492 , 1413.6492 , 5654.5968 , 4947.7722 ,
4947.7722 , 7068.246 , 13429.6674 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 7775.0706 , 5654.5968 , 11309.1936 ,
13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 13429.6674 , 9188.7198 , 6361.4214 , 7775.0706 ,
6361.4214 , 9188.7198 , 9188.7198 , 9188.7198 , 9188.7198 , 12722.8428 ,
12722.8428 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 13429.6674 , 10602.369 , 7068.246 , 12722.8428 ,
13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 13429.6674 , 9188.7198 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 13429.6674 , 11309.1936 , 7068.246 , 7068.246 ,
1413.6492 , 2827.2984 , 4947.7722 , 8481.8952 , 6361.4214 , 9895.5444 ,
13429.6674 , 13429.6674 , 13429.6674 , 12016.0182 , 6361.4214 , 4240.9476 ,
4240.9476 , 4240.9476 , 2120.4738 , 13429.6674 , 4240.9476 , 9188.7198 ,
7775.0706 , 7775.0706 , 12722.8428 , 13429.6674 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 , 13429.6674 ,
13429.6674 , 13429.6674 , 9188.7198 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 11309.1936 , 11309.1936 , 4240.9476 , 1413.6492 ,
8481.8952 , 12016.0182 , 8481.8952 , 3534.123 , 8481.8952 , 10602.369 ,
10602.369 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 4947.7722 , 9188.7198 , 12016.0182 , 12016.0182 , 12016.0182 ,
12016.0182 , 12016.0182 , 12016.0182 , 12016.0182 , 12016.0182 , 12016.0182 ,
12016.0182 , 12016.0182 , 12016.0182 , 10602.369 , 12016.0182 , 12016.0182 ,
12016.0182 , 6361.4214 , 9188.7198 , 4240.9476 , 2120.4738 , 7775.0706 ,
12016.0182 , 12016.0182 , 5654.5968 , 5654.5968 , 5654.5968 , 5654.5968 ,
5654.5968 , 7068.246 , 9895.5444 , 7068.246 , 4947.7722 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 2827.2984 , 7068.246 , 10602.369 , 10602.369 ,
10602.369 , 10602.369 , 11309.1936 , 10602.369 , 8481.8952 , 10602.369 ,
10602.369 , 10602.369 , 5654.5968 , 3534.123 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 4240.9476 ,
8481.8952 , 9188.7198 , 9188.7198 , 9895.5444 , 9895.5444 , 9895.5444 ,
9895.5444 , 9188.7198 , 9188.7198 , 9895.5444 , 9895.5444 , 9188.7198 ,
9188.7198 , 9188.7198 , 9188.7198 , 9188.7198 , 4240.9476 , 7068.246 ,
7068.246 , 3534.123 , 2120.4738 , 9188.7198 , 5654.5968 , 1413.6492 ,
4240.9476 , 4240.9476 , 2827.2984 , 5654.5968 , 5654.5968 , 5654.5968 ,
5654.5968 , 5654.5968 , 2827.2984 , 7068.246 , 7068.246 , 9188.7198 ,
2120.4738 , 2827.2984 , 5654.5968 , 5654.5968 , 2827.2984 , 2827.2984 ,
4240.9476 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 , 4240.9476 , 2827.2984 ,
6361.4214 , 4240.9476 , 4240.9476 , 7068.246 , 9188.7198 , 9188.7198 ,
9188.7198 , 9188.7198 , 9188.7198 , 8481.8952 , 9188.7198 , 9188.7198 ,
9188.7198 , 9188.7198 , 6361.4214 , 4240.9476 , 3534.123 , 3534.123 ,
3534.123 , 3534.123 , 3534.123 , 8481.8952 , 4947.7722 , 4947.7722 ,
1413.6492 , 1413.6492 , 1413.6492 , 3534.123 , 3534.123 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
4240.9476 , 7775.0706 , 7775.0706 , 8481.8952 , 7775.0706 , 7775.0706 ,
7775.0706 , 2120.4738 , 2120.4738 , 4947.7722 , 3534.123 , 2120.4738 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 4240.9476 , 2827.2984 ,
1413.6492 , 1413.6492 , 1413.6492 , 2120.4738 , 2827.2984 , 4240.9476 ,
5654.5968 , 7775.0706 , 7068.246 , 7775.0706 , 7775.0706 , 3534.123 ,
3534.123 , 5654.5968 , 5654.5968 , 5654.5968 , 3534.123 , 2827.2984 ,
2827.2984 , 4240.9476 , 7775.0706 , 7775.0706 , 7775.0706 , 7775.0706 ,
7775.0706 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
4240.9476 , 6361.4214 , 6361.4214 , 6361.4214 , 6361.4214 , 6361.4214 ,
6361.4214 , 6361.4214 , 6361.4214 , 6361.4214 , 6361.4214 , 6361.4214 ,
6361.4214 , 5654.5968 , 6361.4214 , 4240.9476 , 4240.9476 , 3534.123 ,
5654.5968 , 4240.9476 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
2120.4738 , 2120.4738 , 4947.7722 , 5654.5968 , 5654.5968 , 5654.5968 ,
5654.5968 , 5654.5968 , 3534.123 , 1413.6492 , 2120.4738 , 5654.5968 ,
5654.5968 , 5654.5968 , 5654.5968 , 5654.5968 , 2827.2984 , 1413.6492 ,
5654.5968 , 5654.5968 , 4240.9476 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 , 4947.7722 ,
4947.7722 , 4947.7722 , 4947.7722 , 4947.7722 , 4947.7722 , 4947.7722 ,
4947.7722 , 4947.7722 , 4947.7722 , 4947.7722 , 4947.7722 , 4947.7722 ,
4947.7722 , 4947.7722 , 4947.7722 , 4947.7722 , 4240.9476 , 1413.6492 ,
2827.2984 , 2120.4738 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
3534.123 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 2827.2984 , 1413.6492 , 2120.4738 , 3534.123 , 3534.123 ,
2827.2984 , 1413.6492 , 2827.2984 , 3534.123 , 3534.123 , 3534.123 , 3534.123
, 3534.123 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 2827.2984 , 4240.9476 , 4240.9476 , 1413.6492 , 1413.6492 ,
3534.123 , 1413.6492 , 1413.6492 , 3534.123 , 1413.6492 , 3534.123 ,
1413.6492 , 1413.6492 , 2827.2984 , 4240.9476 , 4240.9476 , 4240.9476 ,
1413.6492 , 2827.2984 , 4240.9476 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 2120.4738 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
3534.123 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 4240.9476 , 4240.9476 , 4240.9476 , 2827.2984 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 3534.123 ,
3741.58519721956 , 4240.9476 , 3534.123 , 4240.9476 , 4240.9476 , 4240.9476 ,
4240.9476 , 4240.9476 , 4240.9476 , 3853.00228774545 , 2827.2984 , 2827.2984
, 2827.2984 , 1413.6492 , 1413.6492 , 2827.2984 , 3534.123 , 1413.6492 ,
1413.6492 , 1413.6492 , 3534.123 , 3574.95477931332 , 3534.123 , 3534.123 ,
2120.4738 , 3534.123 , 3534.123 , 3534.123 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 2827.2984 , 3534.123 , 3534.123 , 1413.6492 ,
2827.2984 , 3534.123 , 1413.6492 , 1413.6492 , 3534.123 , 3534.123 ,
2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
2827.2984 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 ,
3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 1413.6492 , 1413.6492
, 3534.123 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 ,
3534.123 , 3534.123 , 3534.123 , 1413.6492 , 2827.2984 , 1413.6492 , 3534.123
, 3534.123 , 3534.123 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 3534.123 , 3534.123 ,
3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 ,
3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 ,
3534.123 , 3534.123 , 1413.6492 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 2827.2984 , 3534.123 , 3534.123 , 3534.123 , 1413.6492 ,
2827.2984 , 3534.123 , 1413.6492 , 2827.2984 , 2827.2984 , 3534.123 ,
3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 3534.123 , 2120.4738 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 3534.123 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 ,
2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2120.4738 , 2120.4738 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 1413.6492 , 2827.2984 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2120.4738 , 1413.6492 ,
2120.4738 , 2827.2984 , 1413.6492 , 2827.2984 , 2827.2984 , 2827.2984 ,
2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 , 2827.2984 ,
1413.6492 , 1413.6492 , 2827.2984 , 2827.2984 , 2827.2984 , 2120.4738 ,
1413.6492 , 1413.6492 , 2827.2984 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 2827.2984 , 2827.2984 , 2827.2984 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 1413.6492 ,
1413.6492 , 1413.6492 , 2120.4738 , 2120.4738 , 2120.4738 , 2418.16328949079
, 2394.87553214349 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 ,
2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 1413.6492 , 1413.6492 ,
2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 ,
2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 ,
2120.4738 , 2120.4738 , 2120.4738 , 2337.47186456183 , 2426.24365080249 ,
2120.4738 , 2827.2984 , 2120.4738 , 2120.4738 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 2120.4738 , 2120.4738 , 2212.15392820873
, 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 , 2120.4738 ,
2827.2984 , 2399.72202030744 , 2214.69640107526 , 2201.01445436082 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 ,
1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 , 1413.6492 } ;
localB -> gjlfkduml1 = rtmGetTaskTime ( jxp0bqrs0w , 0 ) ; if (
ssIsModeUpdateTimeStep ( jxp0bqrs0w -> _mdlRefSfcnS ) ) { localDW ->
jf40w34zmi = ( localB -> gjlfkduml1 > gdngfg3ibw . P_0 ) ; } u0 = *
jfbc5gabq5 ; if ( localDW -> jf40w34zmi ) { tmp = localB -> gjlfkduml1 ; }
else { tmp = gdngfg3ibw . P_11 ; } if ( u0 > gdngfg3ibw . P_1 ) { u0 =
gdngfg3ibw . P_1 ; } else if ( u0 < gdngfg3ibw . P_2 ) { u0 = gdngfg3ibw .
P_2 ; } u0 = b [ ( int32_T ) ( tmp + 1.0 ) - 1 ] / u0 ; if ( u0 > gdngfg3ibw
. P_3 ) { * hvl41qwm3c = gdngfg3ibw . P_3 ; } else if ( u0 < gdngfg3ibw . P_4
) { * hvl41qwm3c = gdngfg3ibw . P_4 ; } else { * hvl41qwm3c = u0 ; } *
pv3jch0rpi = * ofofgt3fsm ; localB -> blrr4ks5vy = look1_binlxpw ( gdngfg3ibw
. P_5 * * pv3jch0rpi , gdngfg3ibw . P_7 , gdngfg3ibw . P_6 , 11U ) ; localB
-> np4ahp0lvy = gdngfg3ibw . P_8 * localB -> blrr4ks5vy ; * g0hb2yo1wf = *
lqeaxkgw5f ; if ( ( rtmIsMajorTimeStep ( jxp0bqrs0w ) && rtmIsSampleHit (
jxp0bqrs0w , 1 , 0 ) ) && ssIsModeUpdateTimeStep ( jxp0bqrs0w -> _mdlRefSfcnS
) ) { localDW -> pzummf0301 = ( * g0hb2yo1wf > localB -> blrr4ks5vy ) ;
localDW -> c23dliamkh = ( * g0hb2yo1wf < localB -> np4ahp0lvy ) ; } } void
otjhyqv5ki ( void ) { } void jt0nw0i3cw ( ax0myfw24a * localX , ibikp0pgia *
localXdot ) { localXdot -> bzjnqqh5ry = gdngfg3ibw . P_9 * localX ->
bzjnqqh5ry ; } void bkxy2vuq3d ( real_T * g0hb2yo1wf , izbd5cj1yx * localB ,
bzzrkabtjr * localZCSV ) { localZCSV -> atvn20tvky = localB -> gjlfkduml1 -
gdngfg3ibw . P_0 ; localZCSV -> fja35wwpwg = * g0hb2yo1wf - localB ->
blrr4ks5vy ; localZCSV -> ifj1qrjkm3 = * g0hb2yo1wf - localB -> np4ahp0lvy ;
} void bsdghwadnz ( ezkw1qrycv * const jxp0bqrs0w ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( jxp0bqrs0w ->
_mdlRefSfcnS , "FCEvPowertrainController" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void k2oudzyk03 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
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
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> gjlfkduml1 =
0.0 ; localB -> blrr4ks5vy = 0.0 ; localB -> np4ahp0lvy = 0.0 ; } ( void )
memset ( ( void * ) localDW , 0 , sizeof ( kfczeuvxuu ) ) ;
FCEvPowertrainController_InitializeDataMapInfo ( jxp0bqrs0w , localDW ,
localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( jxp0bqrs0w -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
jxp0bqrs0w -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( jxp0bqrs0w -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_FCEvPowertrainController_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
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
const uint32_T chksum [ 4 ] = { 1791567699U , 2419040925U , 3716470736U ,
3867903283U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"FCEvPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_FCEvPowertrainController_GetSimStateDisallowedBlocks ( ) { return ( NULL )
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
