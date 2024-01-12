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
hvl41qwm3c , real_T * g0hb2yo1wf , real_T * pv3jch0rpi , real_T * iwatrfla0c
, izbd5cj1yx * localB , kfczeuvxuu * localDW ) { real_T u0 ; static const
real_T b [ 1435 ] = { 0.00035033700000000004 , 0.00270835 , 0.00273914 ,
0.00280647 , 0.00278794 , 0.0028602799999999998 , 0.00287403 , 0.00292867 ,
0.00294808 , 0.00298515 , 0.0030202700000000002 , 0.00311384 ,
0.0031198600000000003 , 0.0031633599999999996 , 0.00320197 ,
0.0032397199999999998 , 0.00327595 , 0.00330828 , 0.0033519500000000002 ,
0.0034770599999999997 , 0.00342299 , 0.00354915 , 0.00357946 , 0.00351737 ,
0.00351737 , 23.93 , 32.84 , 44.88 , 61.150000000000006 , 83.73 , 113.89 ,
104.89 , 112.15 , 117.87 , 122.5 , 124.86 , 131.57 , 3743.09 ,
1255.4099999999999 , 5138.39 , 1662.3799999999999 , 1193.44 , 1121.22 ,
1034.14 , 650.49 , 516.22 , 436.32 , 775.07 , 775.07 , 1319.25 , 954.24 ,
911.56000000000006 , 4365.9299999999994 , 1729.86 , 1656.08 , 4701.51 ,
5161.41 , 1881.6 , 1156.3000000000002 , 2268.79 , 1086.8500000000001 ,
1086.8500000000001 , 774.4799999999999 , 703.99 , 658.06 , 626.97 , 605.24 ,
589.91000000000008 , 579.54000000000008 , 571.23 , 566.03000000000009 ,
565.21999999999991 , 578.28 , 792.31 , 506.1 , 506.1 , 386.04 ,
352.38000000000005 , 314.87 , 286.92 , 268.36 , 268.36 , 1655.7900000000002 ,
2096.45 , 2096.45 , 1696.05 , 4426.72 , 819.28 , 633.53000000000009 , 512.95
, 440.89 , 382.26 , 350.06 , 321.06 , 306.05 , 281.72999999999996 , 274.59 ,
890.78 , 453.23 , 453.23 , 1322.38 , 1322.38 , 878.4 , 2429.51 , 2337.94 ,
2326.69 , 1454.05 , 1454.05 , 5616.21 , 1111.1299999999999 , 911.84 , 798.32
, 728.14 , 682.69 , 652.07 , 631.1099999999999 , 616.81 , 601.15 , 601.15 ,
632.49 , 632.49 , 1106.88 , 498.58000000000004 , 437.74 , 459.33000000000004
, 459.33000000000004 , 31824.86 , 34811.619999999995 , 34589.86 , 34589.86 ,
3354.1400000000003 , 1015.2600000000001 , 1011.4399999999999 ,
1011.4399999999999 , 2029.7999999999997 , 2029.7999999999997 , 2146.37 ,
2227.51 , 2322.59 , 2322.59 , 1438.58 , 3484.61 , 5646.7400000000007 ,
1347.52 , 1347.52 , 861.06000000000006 , 861.06000000000006 , 701.16 ,
660.56999999999994 , 632.95 , 615.13 , 620.97 , 680.08 , 680.08 , 485.73 ,
961.42000000000007 , 541.93000000000006 , 4545.4100000000008 , 13096.23 ,
26578.67 , 18827.86 , 34120.17 , 24523.29 , 5096.0599999999995 ,
1626.8899999999999 , 23897.55 , 2227.21 , 851.96 , 851.96 ,
641.07999999999993 , 530.65 , 1027.6499999999999 , 563.12 , 1779.4 , 1334.81
, 712.43000000000006 , 1796.08 , 1767.29 , 1767.29 , 2141.89 , 2154.25 ,
2105.87 , 694.57999999999993 , 549.29 , 12397.349999999999 ,
12397.349999999999 , 1634.05 , 32916.87 , 1456.84 , 1456.84 , 701.27 , 564.6
, 464.05999999999995 , 464.05999999999995 , 418.5 , 1324.9899999999998 ,
598.23 , 503.17999999999995 , 430.14000000000004 , 1194.65 ,
469.40999999999997 , 469.40999999999997 , 12963.26 , 11093.199999999999 ,
20283.760000000002 , 2123.69 , 8423.84 , 2082.68 , 1952.98 , 2085.3 , 2206.27
, 4611.7999999999993 , 1687.47 , 1177.29 , 1952.65 , 1952.65 , 1128.0 ,
3720.5499999999997 , 1330.13 , 1055.18 , 818.93000000000006 , 763.66 , 727.1
, 727.1 , 684.81000000000006 , 672.20999999999992 , 663.01 , 655.99 , 650.58
, 646.32999999999993 , 642.80000000000007 , 639.85 , 637.28 , 635.01 , 633.01
, 631.13 , 629.31999999999994 , 627.67 , 626.25 , 625.01 , 623.93 , 623.93 ,
621.95 , 621.02 , 620.14 , 620.71 , 628.64 , 628.64 , 803.02 , 446.95 ,
387.75 , 348.62 , 318.19 , 302.32 , 302.32 , 1186.73 , 534.93000000000006 ,
845.64 , 675.65 , 424.41 , 382.76 , 1970.8300000000002 , 1970.8300000000002 ,
709.08 , 2635.94 , 880.93999999999994 , 535.24 , 455.46999999999997 ,
455.46999999999997 , 403.65000000000003 , 335.51 , 335.51 , 2704.34 , 665.95
, 527.64 , 448.11 , 448.11 , 1000.1800000000001 , 1050.64 ,
1369.6200000000001 , 5665.7400000000007 , 1631.79 , 1631.79 , 3385.1 ,
4324.25 , 6234.0999999999995 , 6234.0999999999995 , 2637.6400000000003 ,
1977.26 , 1014.43 , 4862.5 , 4650.55 , 2541.0 , 2362.97 , 1694.98 , 1694.98 ,
3441.7 , 5668.21 , 3836.53 , 1697.13 , 1164.83 , 1064.77 , 1064.77 , 966.46 ,
941.33999999999992 , 924.16 , 911.62 , 902.05000000000007 , 894.48 , 888.15 ,
882.55 , 877.53000000000009 , 872.81 , 868.83999999999992 , 864.88 , 860.94 ,
857.04000000000008 , 853.18000000000006 , 849.35 , 845.55000000000007 ,
841.54 , 842.31999999999994 , 842.31999999999994 , 859.07 , 2104.72 , 627.41
, 627.41 , 10281.13 , 8716.43 , 3606.95 , 34532.649999999994 , 34845.2 ,
34845.2 , 20598.33 , 21929.28 , 7001.98 , 3951.93 , 34526.55 ,
34836.840000000004 , 34939.270000000004 , 34939.270000000004 , 22960.4 ,
9881.72 , 19650.300000000003 , 2272.4700000000003 , 4289.76 , 4289.76 ,
4057.7 , 4057.7 , 5969.78 , 6298.63 , 5909.7099999999991 , 3373.0699999999997
, 1600.8 , 1600.8 , 899.28 , 30181.62 , 15154.74 , 15486.08 ,
9346.5299999999988 , 21928.329999999998 , 28299.1 , 2963.16 , 1546.78 ,
30434.850000000002 , 7938.41 , 31390.75 , 6452.82 , 6452.82 , 2215.57 ,
5649.73 , 5649.73 , 6624.5700000000006 , 1995.17 , 1995.17 , 733.39 , 733.39
, 34357.27 , 33737.62 , 33737.62 , 30008.48 , 3729.5600000000004 , 1027.21 ,
1027.21 , 3784.0600000000004 , 7466.2 , 7466.2 , 913.0 , 913.0 , 4861.08 ,
1816.76 , 34278.37 , 34278.37 , 11350.6 , 34696.66 , 34901.58 , 34876.74 ,
34991.36 , 34991.36 , 3414.94 , 33620.21 , 14303.67 , 2254.4900000000002 ,
1245.35 , 32965.89 , 2959.4700000000003 , 33463.799999999996 , 3893.21 ,
1985.3 , 30945.3 , 4302.39 , 32129.890000000003 , 4663.7199999999993 ,
32530.63 , 31923.0 , 3031.75 , 1953.3700000000001 , 8208.85 , 1137.57 ,
1137.57 , 1557.18 , 2274.08 , 5900.75 , 5900.75 , 34501.130000000005 ,
34809.420000000006 , 34930.89 , 34930.89 , 11869.23 , 34059.02 , 14732.33 ,
2266.6400000000003 , 889.32999999999993 , 889.32999999999993 ,
2783.5899999999997 , 32754.190000000002 , 7555.51 , 7555.51 ,
33491.549999999996 , 34834.44 , 34834.44 , 8885.83 , 34664.06 , 34664.06 ,
7943.72 , 4296.1 , 4253.54 , 11351.6 , 1047.96 , 1047.96 , 4219.71 , 7359.0 ,
12702.27 , 11920.68 , 32695.38 , 2894.13 , 4504.43 , 5759.59 , 1913.32 ,
1913.32 , 13402.77 , 13402.77 , 34627.87 , 34829.259999999995 ,
34917.140000000007 , 34917.140000000007 , 11377.33 , 33921.3 , 34721.01 ,
9252.0299999999988 , 5172.7699999999995 , 32993.89 , 9772.14 , 1943.03 ,
10545.87 , 10545.87 , 10517.92 , 4248.03 , 4248.03 , 33281.47 , 2830.16 ,
33373.130000000005 , 3626.7999999999997 , 9461.34 , 1954.02 , 7975.43 ,
6947.5 , 6947.5 , 2084.9700000000003 , 2271.47 , 1985.59 , 1954.68 , 1638.98
, 1551.94 , 1551.94 , 2224.02 , 2224.02 , 4775.6100000000006 ,
1230.9699999999998 , 872.83 , 32876.85 , 1522.3999999999999 , 955.45 ,
708.6400000000001 , 708.6400000000001 , 738.09 , 4199.61 , 1779.23 , 1779.23
, 954.37 , 860.05 , 606.52 , 842.58999999999992 , 776.65 , 4220.4 , 965.96 ,
965.96 , 655.06 , 843.34 , 552.23 , 788.49 , 788.49 , 986.55000000000007 ,
986.55000000000007 , 1747.56 , 2015.95 , 2015.95 , 2184.98 , 1410.62 ,
1407.1100000000001 , 1161.46 , 5374.4500000000007 , 5374.4500000000007 ,
4976.1100000000006 , 4831.1 , 1556.13 , 1269.83 , 1269.83 ,
827.06000000000006 , 743.97 , 743.97 , 669.81999999999994 , 717.85 , 1048.3 ,
587.26 , 415.60999999999996 , 415.60999999999996 , 708.54 , 4485.03 ,
4961.8099999999995 , 1310.41 , 1310.41 , 1179.3700000000001 ,
1179.3700000000001 , 1150.29 , 5010.37 , 1052.68 , 875.31000000000006 ,
772.38 , 707.9 , 707.9 , 637.16 , 617.3 , 603.24 , 593.17 , 593.17 , 580.41 ,
576.45 , 576.45 , 571.25 , 569.59 , 568.30000000000007 , 567.31 , 567.31 ,
565.91 , 565.42000000000007 , 565.01 , 565.01 , 564.66000000000008 , 564.26 ,
564.98 , 564.98 , 561.05000000000007 , 589.6 , 928.98 , 552.13 , 406.04 ,
355.69 , 331.65 , 331.65 , 291.49 , 291.49 , 239.2 , 353.01 , 353.01 ,
1181.03 , 1716.3200000000002 , 1720.71 , 847.21 , 645.51 , 645.51 , 540.62 ,
478.10999999999996 , 401.62 , 26197.99 , 1662.24 , 1662.24 , 695.08 , 695.08
, 685.18000000000006 , 4648.08 , 4648.08 , 1308.67 , 1021.63 , 694.36 ,
546.84999999999991 , 494.25 , 481.5 , 446.61 , 1029.26 , 1029.26 , 1804.3 ,
2021.01 , 2105.14 , 2105.14 , 1393.8999999999999 , 1393.8999999999999 ,
1732.03 , 824.03000000000009 , 1321.58 , 1321.58 , 929.13 , 929.13 ,
689.03000000000009 , 3439.65 , 4369.5199999999995 , 4369.5199999999995 ,
4126.2800000000007 , 2207.42 , 2207.42 , 1608.09 , 1608.09 , 623.13 , 512.55
, 444.44 , 390.46 , 353.79 , 329.11 , 312.28000000000003 , 291.97 , 291.97 ,
1431.56 , 1034.53 , 2475.53 , 7344.67 , 4265.5 , 5749.51 , 5749.51 , 4833.63
, 2277.79 , 2277.79 , 962.75 , 962.75 , 4019.2500000000005 , 16265.88 ,
31825.14 , 6693.04 , 33138.75 , 4204.4800000000005 , 25682.559999999998 ,
2490.59 , 3212.65 , 3212.65 , 1613.5600000000002 , 2424.2599999999998 ,
2424.2599999999998 , 7796.98 , 20162.79 , 20162.79 , 18189.39 , 18189.39 ,
2602.1299999999997 , 10201.63 , 9547.53 , 7053.9 , 6339.4199999999992 ,
1457.6899999999998 , 5315.08 , 1489.06 , 1112.47 , 713.57 , 794.42 , 7572.83
, 1804.33 , 6162.17 , 6713.5199999999995 , 6713.5199999999995 , 5483.01 ,
4487.57 , 3822.44 , 2488.95 , 5411.44 , 5411.44 , 2326.4 , 2326.4 , 2264.62 ,
2244.26 , 1315.28 , 3665.3199999999997 , 3665.3199999999997 , 1216.61 ,
29951.74 , 34038.46 , 16716.35 , 2364.6699999999996 , 1319.5600000000002 ,
945.45999999999992 , 702.56 , 702.56 , 1922.0900000000001 , 768.66 , 499.23 ,
499.23 , 1184.94 , 594.08 , 1012.26 , 1517.59 , 5074.13 , 2811.2200000000003
, 1514.26 , 1964.73 , 2084.96 , 2084.96 , 1778.5 , 1778.5 , 5853.13 ,
1754.4299999999998 , 1754.4299999999998 , 2434.0099999999998 ,
1379.1299999999999 , 1865.51 , 1865.51 , 4675.97 , 1180.49 , 1004.64 , 904.35
, 842.70999999999992 , 842.70999999999992 , 776.29000000000008 ,
758.07999999999993 , 745.24 , 745.24 , 728.82 , 723.39 , 719.01 , 715.34 ,
712.25 , 709.54 , 709.54 , 704.8 , 702.7 , 700.62 , 700.62 ,
696.69999999999993 , 694.8 , 692.98 , 691.16 , 689.37 , 687.57999999999993 ,
685.77 , 685.77 , 695.03000000000009 , 695.03000000000009 , 909.37 , 475.51 ,
416.64 , 369.75 , 339.3 , 300.44 , 285.07 , 285.07 , 646.37 , 2509.06 ,
3398.7599999999998 , 2835.69 , 1625.5900000000001 , 2571.35 ,
1662.4099999999999 , 1126.86 , 2348.1200000000003 , 1149.51 , 1149.51 , 595.9
, 595.9 , 423.85 , 3177.56 , 3177.56 , 889.55 , 1365.78 , 728.17 , 676.29 ,
676.29 , 14812.51 , 29308.32 , 34267.61 , 3157.69 , 6377.9199999999992 ,
2464.29 , 1593.2900000000002 , 1362.77 , 762.91 , 762.91 , 4575.31 , 2147.48
, 2147.48 , 1291.79 , 1313.39 , 1313.39 , 1168.6000000000001 ,
1521.9499999999998 , 5006.36 , 5006.36 , 1702.76 , 1320.1499999999999 ,
1104.72 , 2480.7999999999997 , 2480.7999999999997 , 3553.2 ,
1323.8799999999999 , 1080.84 , 1080.84 , 1800.6200000000001 , 5778.65 ,
6602.1799999999994 , 6602.1799999999994 , 1276.3500000000001 ,
1276.3500000000001 , 1469.3899999999999 , 1805.1999999999998 , 1473.71 ,
1227.3400000000001 , 1301.22 , 1301.22 , 846.19 , 1541.49 , 1541.49 , 2058.03
, 5164.07 , 2032.0399999999997 , 1363.1299999999999 , 3177.61 , 3177.61 ,
1282.5800000000002 , 1147.71 , 723.54 , 33170.520000000004 , 34821.78 ,
34948.880000000005 , 34997.75 , 34996.69 , 35002.28 , 34993.009999999995 ,
34992.68 , 34992.48 , 35006.33 , 34997.07 , 34999.07 , 34996.06 , 34997.27 ,
35001.579999999994 , 35000.21 , 35002.740000000005 , 34994.89 , 34996.17 ,
34985.67 , 34990.49 , 34990.49 , 2086.03 , 2086.03 , 1215.62 , 32855.38 ,
34421.89 , 3187.3399999999997 , 1031.1699999999998 , 1031.1699999999998 ,
3875.5099999999998 , 1052.25 , 32242.03 , 2902.6200000000003 , 33126.61 ,
34856.200000000004 , 34924.439999999995 , 34993.59 , 34993.59 , 11621.31 ,
34052.729999999996 , 3133.6 , 34606.06 , 34606.06 , 5559.9100000000008 ,
5910.04 , 996.01 , 996.01 , 6612.53 , 33260.170000000006 , 2764.38 , 928.29 ,
928.29 , 16620.48 , 14393.99 , 14393.99 , 1138.6000000000001 ,
12918.189999999999 , 12918.189999999999 , 19011.89 , 33996.270000000004 ,
29534.780000000002 , 34647.74 , 3312.78 , 1642.34 , 34461.869999999995 ,
34461.869999999995 , 30175.850000000002 , 27253.8 , 3728.02 , 7074.04 ,
1536.7 , 34426.35 , 34796.869999999995 , 34936.53 , 34936.53 , 5913.83 ,
4457.0999999999995 , 4457.0999999999995 , 32691.3 , 2762.08 , 2920.36 ,
5644.2 , 5644.2 , 34476.71 , 34808.14 , 34808.14 , 3360.8799999999997 ,
2328.89 , 7952.9500000000007 , 2519.8399999999997 , 1860.86 , 2137.25 ,
2137.25 , 1514.3999999999999 , 2039.85 , 2191.08 , 1448.15 , 1448.15 ,
1956.37 , 2249.72 , 2262.54 , 2365.97 , 1365.1899999999998 ,
1365.1899999999998 , 2234.52 , 1843.92 , 1402.74 , 1402.74 ,
4052.8500000000004 , 5351.6500000000005 , 5351.6500000000005 , 1113.41 ,
1113.41 , 776.83 , 825.9 , 825.9 , 614.38 , 427.79 , 380.11 , 380.11 , 330.13
, 311.59 , 311.59 , 285.53000000000003 , 1170.19 , 454.21 ,
399.11999999999995 , 399.11999999999995 , 2015.1500000000003 , 868.88 ,
510.49 , 424.77 , 424.77 , 348.13 , 348.13 , 292.87 , 292.87 ,
281.96999999999997 , 4042.11 , 5254.96 , 5254.96 , 2027.57 , 5267.38 ,
1260.04 , 1299.93 , 1965.35 , 2140.91 , 1719.88 , 1719.88 , 1415.18 , 1942.96
, 4515.0499999999993 , 1798.08 , 1798.08 , 4457.12 , 2039.13 , 2789.0 ,
2414.19 , 1900.4 , 4614.75 , 1790.1000000000001 , 923.93000000000006 , 801.64
, 801.64 , 679.0 , 646.63 , 624.26 , 608.58 , 597.35 , 589.21 , 589.21 ,
578.89 , 575.63 , 573.18999999999994 , 571.47 , 573.54000000000008 ,
573.54000000000008 , 573.92 , 533.52 , 533.52 , 459.28000000000003 , 362.89 ,
335.42 , 310.15 , 292.86 , 277.17 , 263.35999999999996 , 253.61 ,
249.70999999999998 , 240.44 , 229.91 , 229.91 , 766.07 , 766.07 , 367.38 ,
367.38 , 643.87 , 421.58 , 743.36 , 4454.4800000000005 , 4454.4800000000005 ,
5311.38 , 2604.4 , 2389.65 , 1972.8600000000001 , 1972.8600000000001 ,
5570.52 , 1067.9 , 730.31000000000006 , 578.99 , 489.59000000000003 ,
426.70000000000005 , 426.70000000000005 , 385.07000000000005 , 15237.33 ,
15237.33 , 22732.94 , 19120.41 , 4407.91 , 4407.91 , 1248.17 , 1638.69 ,
1763.64 , 811.35 , 1583.6200000000001 , 5352.37 , 2477.9300000000003 ,
2259.67 , 2247.21 , 2220.77 , 1396.8 , 1396.8 , 3814.71 , 1667.48 ,
1684.4099999999999 , 6169.7800000000007 , 1397.3999999999999 ,
1397.3999999999999 , 1752.03 , 633.24 , 521.26 , 521.26 , 446.29999999999995
, 344.21000000000004 , 310.85 , 310.85 , 2665.15 , 1651.28 ,
2080.8900000000003 , 2080.8900000000003 , 1599.9399999999998 ,
6339.3899999999994 , 886.59 , 655.28 , 655.28 , 1892.79 , 2618.05 ,
1587.5900000000001 , 2029.8600000000001 , 2078.7599999999998 , 909.44 ,
680.29 , 1214.17 , 1703.25 , 33365.4 , 19829.09 , 34457.46 , 34457.46 ,
3373.89 , 2337.6800000000003 , 33804.009999999995 , 33804.009999999995 ,
22708.95 , 34784.520000000004 , 34784.520000000004 , 33925.64 , 3780.48 ,
4184.86 , 7312.22 , 1456.07 , 3489.58 , 3685.92 , 5846.87 , 3757.06 , 3757.06
, 838.16 , 643.2 , 518.66 , 518.66 , 511.70000000000005 , 375.95 , 343.54 ,
318.82 , 294.06 , 294.06 , 294.09000000000003 , 9342.29 , 30888.78 ,
10774.630000000001 , 9783.23 , 9783.23 , 7300.77 , 2191.7599999999998 ,
2191.7599999999998 , 2034.9499999999998 , 2034.9499999999998 , 2099.98 ,
2167.95 , 2207.41 , 1457.5 , 1312.8999999999999 , 1398.8700000000001 ,
5006.4000000000005 , 1511.13 , 1106.75 , 811.64 , 745.09 , 745.09 ,
711.55000000000007 , 503.63 , 433.83 , 382.25 , 382.25 , 311.28 , 311.28 ,
5197.36 , 5873.15 , 2829.98 , 2829.98 , 1153.27 , 1992.23 , 1249.7 ,
746.43000000000006 , 942.44 , 1664.24 , 4687.7000000000007 , 3052.1 , 1701.46
, 1704.66 , 4984.47 , 2450.46 , 1016.75 , 1016.75 , 870.25 , 746.03 , 746.03
, 1376.16 , 556.78000000000009 , 556.78000000000009 , 619.14 ,
31561.039999999997 , 7603.54 , 1104.52 , 1104.52 , 610.82999999999993 ,
610.82999999999993 , 502.94000000000005 , 502.94000000000005 , 929.11 ,
929.11 , 4824.57 , 2393.38 , 2270.4300000000003 , 2208.4100000000003 ,
2253.17 , 2253.17 , 1497.48 , 1898.93 , 4733.63 , 5986.21 , 1983.95 ,
1291.6499999999999 , 904.80000000000007 , 823.02 , 771.23 , 737.11 ,
713.82999999999993 , 697.36 , 685.54000000000008 , 676.73 , 670.07 , 664.98 ,
660.87 , 657.55 , 654.69999999999993 , 652.22 , 652.22 , 648.09 ,
646.29000000000008 , 644.55 , 642.87 , 648.23 , 680.33 , 680.33 , 502.63 ,
12016.72 , 33036.740000000005 , 2931.34 , 2886.17 , 1184.57 , 20267.88 ,
34555.13 , 34863.079999999994 , 34863.079999999994 , 3733.2200000000003 ,
1702.8700000000001 , 770.1 , 770.1 , 9659.72 , 32144.05 , 5389.83 ,
33521.590000000004 , 15554.7 , 2250.6400000000003 , 1281.21 , 984.77 , 728.76
, 728.76 , 1243.43 , 29946.51 , 2519.3500000000004 , 33364.56 , 24431.53 ,
2640.39 , 2613.58 , 2264.79 , 2264.79 , 2305.28 , 2262.08 , 952.2 , 30001.16
, 13127.62 , 33806.68 , 33639.119999999995 , 34883.6 , 34883.6 ,
5008.7599999999993 , 1774.5200000000002 , 1199.4199999999998 ,
1199.4199999999998 , 587.13 , 587.13 , 2746.36 , 666.68000000000006 ,
666.68000000000006 , 6719.7300000000005 , 26575.399999999998 , 1473.59 ,
4993.97 , 4993.97 , 1215.9199999999998 , 7466.34 , 7466.34 , 1593.96 ,
1165.68 , 32948.06 , 2702.7000000000003 , 8545.51 , 8545.51 , 2148.48 ,
2148.48 , 2313.6800000000003 , 2216.26 , 5702.8499999999995 , 3451.14 ,
3451.14 , 3269.4700000000003 , 5620.1100000000006 , 3057.9 , 2700.59 ,
5598.6900000000005 , 2523.96 , 2121.9100000000003 , 2572.8300000000004 ,
2572.8300000000004 , 2361.17 , 2318.98 , 1058.5800000000002 , 1096.98 ,
1096.98 , 4619.96 , 1904.22 , 690.92 , 537.54 , 537.54 , 442.27 , 765.93 ,
1127.8999999999999 , 1127.8999999999999 , 954.81000000000006 ,
954.81000000000006 , 863.39 , 655.20999999999992 , 529.81999999999994 ,
529.81999999999994 , 395.15 , 738.98 , 738.98 , 413.94 , 369.53999999999996 ,
369.53999999999996 , 17316.45 , 9153.16 , 1857.87 , 1104.24 , 3783.29 ,
1083.2900000000002 , 3937.71 , 1047.42 , 973.84 , 973.84 , 5093.04 , 4087.11
, 1881.06 , 1437.81 , 1283.02 , 1364.93 , 1364.93 , 1893.2199999999998 ,
4882.3499999999995 , 4314.7 , 6134.69 , 2245.66 , 1636.6000000000001 , 4887.2
, 1748.34 , 1928.1999999999998 , 1396.76 , 3608.92 , 1644.9199999999998 ,
1644.9199999999998 , 4753.15 , 6716.8099999999995 , 6734.81 , 2993.17 ,
1661.26 , 1661.26 , 1095.26 , 1095.26 , 827.81000000000006 ,
827.81000000000006 , 872.33 , 479.62 , 417.10999999999996 ,
417.10999999999996 , 332.22 , 311.71999999999997 , 311.71999999999997 ,
5223.47 , 2315.79 , 6412.72 , 1580.24 , 1580.24 , 1816.52 , 850.27 , 850.27 ,
511.34999999999997 , 511.34999999999997 , 1614.8700000000001 ,
5033.5599999999995 , 1267.5 , 1267.5 , 1274.6100000000001 , 1826.2 , 1826.2 ,
1749.42 , 5092.94 , 5951.06 , 2185.35 , 1337.73 , 2922.2999999999997 ,
1256.76 , 888.02 , 809.35 , 809.35 , 725.77 , 702.94999999999993 ,
686.69999999999993 , 686.69999999999993 } ; localB -> gjlfkduml1 =
rtmGetTaskTime ( jxp0bqrs0w , 0 ) ; if ( ssIsModeUpdateTimeStep ( jxp0bqrs0w
-> _mdlRefSfcnS ) ) { localDW -> jf40w34zmi = ( localB -> gjlfkduml1 >
gdngfg3ibw . P_0 ) ; } if ( localDW -> jf40w34zmi ) { u0 = localB ->
gjlfkduml1 ; } else { u0 = gdngfg3ibw . P_11 ; } * iwatrfla0c = b [ ( int32_T
) ( u0 + 1.0 ) - 1 ] ; u0 = * jfbc5gabq5 ; if ( u0 > gdngfg3ibw . P_1 ) { u0
= gdngfg3ibw . P_1 ; } else if ( u0 < gdngfg3ibw . P_2 ) { u0 = gdngfg3ibw .
P_2 ; } u0 = * iwatrfla0c / u0 ; if ( u0 > gdngfg3ibw . P_3 ) { * hvl41qwm3c
= gdngfg3ibw . P_3 ; } else if ( u0 < gdngfg3ibw . P_4 ) { * hvl41qwm3c =
gdngfg3ibw . P_4 ; } else { * hvl41qwm3c = u0 ; } * pv3jch0rpi = * ofofgt3fsm
; localB -> blrr4ks5vy = look1_binlxpw ( gdngfg3ibw . P_5 * * pv3jch0rpi ,
gdngfg3ibw . P_7 , gdngfg3ibw . P_6 , 11U ) ; localB -> np4ahp0lvy =
gdngfg3ibw . P_8 * localB -> blrr4ks5vy ; * g0hb2yo1wf = * lqeaxkgw5f ; if (
( rtmIsMajorTimeStep ( jxp0bqrs0w ) && rtmIsSampleHit ( jxp0bqrs0w , 1 , 0 )
) && ssIsModeUpdateTimeStep ( jxp0bqrs0w -> _mdlRefSfcnS ) ) { localDW ->
pzummf0301 = ( * g0hb2yo1wf > localB -> blrr4ks5vy ) ; localDW -> c23dliamkh
= ( * g0hb2yo1wf < localB -> np4ahp0lvy ) ; } } void otjhyqv5ki ( void ) { }
void jt0nw0i3cw ( ax0myfw24a * localX , ibikp0pgia * localXdot ) { localXdot
-> bzjnqqh5ry = gdngfg3ibw . P_9 * localX -> bzjnqqh5ry ; } void bkxy2vuq3d (
real_T * g0hb2yo1wf , izbd5cj1yx * localB , bzzrkabtjr * localZCSV ) {
localZCSV -> atvn20tvky = localB -> gjlfkduml1 - gdngfg3ibw . P_0 ; localZCSV
-> fja35wwpwg = * g0hb2yo1wf - localB -> blrr4ks5vy ; localZCSV -> ifj1qrjkm3
= * g0hb2yo1wf - localB -> np4ahp0lvy ; } void bsdghwadnz ( ezkw1qrycv *
const jxp0bqrs0w ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( jxp0bqrs0w -> _mdlRefSfcnS , "FCEvPowertrainController"
, "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void k2oudzyk03 (
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
const uint32_T chksum [ 4 ] = { 2198320521U , 2937091429U , 360617169U ,
268707913U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"FCEvPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_FCEvPowertrainController_GetSimStateDisallowedBlocks ( ) { return ( NULL )
; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
