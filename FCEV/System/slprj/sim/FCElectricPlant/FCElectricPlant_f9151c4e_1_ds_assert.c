#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_assert.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_assert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t2188 , NeDsMethodOutput * t2189 ) { ETTS0
ab_efOut ; ETTS0 ac_efOut ; ETTS0 c_efOut ; ETTS0 cb_efOut ; ETTS0 cc_efOut ;
ETTS0 cd_efOut ; ETTS0 efOut ; ETTS0 fg_efOut ; ETTS0 g_efOut ; ETTS0
gb_efOut ; ETTS0 gc_efOut ; ETTS0 hf_efOut ; ETTS0 i_efOut ; ETTS0 ib_efOut ;
ETTS0 jd_efOut ; ETTS0 je_efOut ; ETTS0 jg_efOut ; ETTS0 lc_efOut ; ETTS0
nd_efOut ; ETTS0 of_efOut ; ETTS0 qe_efOut ; ETTS0 s_efOut ; ETTS0 sb_efOut ;
ETTS0 sc_efOut ; ETTS0 sd_efOut ; ETTS0 sf_efOut ; ETTS0 t37 ; ETTS0 t46 ;
ETTS0 t53 ; ETTS0 t54 ; ETTS0 ue_efOut ; ETTS0 wc_efOut ; ETTS0 wd_efOut ;
ETTS0 we_efOut ; ETTS0 xf_efOut ; ETTS0 yd_efOut ; PmIntVector out ; real_T X
[ 394 ] ; real_T ad_efOut [ 1 ] ; real_T ae_efOut [ 1 ] ; real_T af_efOut [ 1
] ; real_T ag_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ;
real_T bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ; real_T be_efOut [ 1 ] ;
real_T bf_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ; real_T ce_efOut [ 1 ] ;
real_T cf_efOut [ 1 ] ; real_T cg_efOut [ 1 ] ; real_T d_efOut [ 1 ] ; real_T
db_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T dd_efOut [ 1 ] ; real_T
de_efOut [ 1 ] ; real_T df_efOut [ 1 ] ; real_T dg_efOut [ 1 ] ; real_T
e_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T ec_efOut [ 1 ] ; real_T
ed_efOut [ 1 ] ; real_T ee_efOut [ 1 ] ; real_T ef_efOut [ 1 ] ; real_T
eg_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T fb_efOut [ 1 ] ; real_T
fc_efOut [ 1 ] ; real_T fd_efOut [ 1 ] ; real_T fe_efOut [ 1 ] ; real_T
ff_efOut [ 1 ] ; real_T gd_efOut [ 1 ] ; real_T ge_efOut [ 1 ] ; real_T
gf_efOut [ 1 ] ; real_T gg_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T
hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T hd_efOut [ 1 ] ; real_T
he_efOut [ 1 ] ; real_T hg_efOut [ 1 ] ; real_T ic_efOut [ 1 ] ; real_T
id_efOut [ 1 ] ; real_T ie_efOut [ 1 ] ; real_T if_efOut [ 1 ] ; real_T
ig_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T
jc_efOut [ 1 ] ; real_T jf_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T
kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T
ke_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T kg_efOut [ 1 ] ; real_T
l_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T ld_efOut [ 1 ] ; real_T
le_efOut [ 1 ] ; real_T lf_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T
m_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T
md_efOut [ 1 ] ; real_T me_efOut [ 1 ] ; real_T mf_efOut [ 1 ] ; real_T
mg_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T nf_efOut [ 1 ] ; real_T
ng_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T ob_efOut [ 1 ] ; real_T
oc_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T oe_efOut [ 1 ] ; real_T
p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T pc_efOut [ 1 ] ; real_T
pd_efOut [ 1 ] ; real_T pe_efOut [ 1 ] ; real_T pf_efOut [ 1 ] ; real_T
q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T
qd_efOut [ 1 ] ; real_T qf_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T
rb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T rd_efOut [ 1 ] ; real_T
re_efOut [ 1 ] ; real_T rf_efOut [ 1 ] ; real_T se_efOut [ 1 ] ; real_T t121
[ 1 ] ; real_T t422 [ 1 ] ; real_T t423 [ 1 ] ; real_T t424 [ 1 ] ; real_T
t425 [ 1 ] ; real_T t428 [ 1 ] ; real_T t429 [ 1 ] ; real_T t539 [ 1 ] ;
real_T t61 [ 1 ] ; real_T t66 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T tb_efOut
[ 1 ] ; real_T tc_efOut [ 1 ] ; real_T td_efOut [ 1 ] ; real_T te_efOut [ 1 ]
; real_T tf_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T ub_efOut [ 1 ] ;
real_T uc_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T uf_efOut [ 1 ] ;
real_T v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T vc_efOut [ 1 ] ; real_T
vd_efOut [ 1 ] ; real_T ve_efOut [ 1 ] ; real_T vf_efOut [ 1 ] ; real_T
w_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T wf_efOut [ 1 ] ; real_T
x_efOut [ 1 ] ; real_T xb_efOut [ 1 ] ; real_T xc_efOut [ 1 ] ; real_T
xd_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T y_efOut [ 1 ] ; real_T
yb_efOut [ 1 ] ; real_T yc_efOut [ 1 ] ; real_T ye_efOut [ 1 ] ; real_T
yf_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_5
; real_T U_idx_7 ; real_T U_idx_9 ; real_T intrm_sf_mf_1050 ; real_T
intrm_sf_mf_1071 ; real_T intrm_sf_mf_1094 ; real_T intrm_sf_mf_110 ; real_T
intrm_sf_mf_1170 ; real_T intrm_sf_mf_1191 ; real_T intrm_sf_mf_1240 ; real_T
intrm_sf_mf_1241 ; real_T intrm_sf_mf_1247 ; real_T intrm_sf_mf_1252 ; real_T
intrm_sf_mf_1263 ; real_T intrm_sf_mf_1371 ; real_T intrm_sf_mf_1372 ; real_T
intrm_sf_mf_1395 ; real_T intrm_sf_mf_1402 ; real_T intrm_sf_mf_173 ; real_T
intrm_sf_mf_200 ; real_T intrm_sf_mf_233 ; real_T intrm_sf_mf_281 ; real_T
intrm_sf_mf_293 ; real_T intrm_sf_mf_299 ; real_T intrm_sf_mf_47 ; real_T
intrm_sf_mf_498 ; real_T intrm_sf_mf_528 ; real_T intrm_sf_mf_551 ; real_T
intrm_sf_mf_557 ; real_T intrm_sf_mf_666 ; real_T intrm_sf_mf_681 ; real_T
intrm_sf_mf_693 ; real_T intrm_sf_mf_755 ; real_T intrm_sf_mf_762 ; real_T
intrm_sf_mf_791 ; real_T intrm_sf_mf_798 ; real_T intrm_sf_mf_81 ; real_T
intrm_sf_mf_814 ; real_T intrm_sf_mf_829 ; real_T intrm_sf_mf_895 ; real_T
intrm_sf_mf_923 ; real_T intrm_sf_mf_924 ; real_T intrm_sf_mf_926 ; real_T
intrm_sf_mf_931 ; real_T intrm_sf_mf_948 ; real_T t1000 ; real_T t1002 ;
real_T t1004 ; real_T t1005 ; real_T t1007 ; real_T t1009 ; real_T t1011 ;
real_T t1012 ; real_T t1013 ; real_T t1014 ; real_T t1015 ; real_T t1016 ;
real_T t1017 ; real_T t1019 ; real_T t1020 ; real_T t1021 ; real_T t1022 ;
real_T t1026 ; real_T t1027 ; real_T t1028 ; real_T t1029 ; real_T t1031 ;
real_T t1033 ; real_T t1036 ; real_T t1037 ; real_T t1038 ; real_T t1039 ;
real_T t1040 ; real_T t1042 ; real_T t1043 ; real_T t1046 ; real_T t1049 ;
real_T t1050 ; real_T t1051 ; real_T t1052 ; real_T t1053 ; real_T t1056 ;
real_T t1057 ; real_T t1060 ; real_T t1062 ; real_T t1063 ; real_T t1066 ;
real_T t1067 ; real_T t1068 ; real_T t1069 ; real_T t1071 ; real_T t1072 ;
real_T t1074 ; real_T t1075 ; real_T t1076 ; real_T t1078 ; real_T t1079 ;
real_T t1080 ; real_T t1081 ; real_T t1086 ; real_T t1087 ; real_T t1088 ;
real_T t1089 ; real_T t1095 ; real_T t1096 ; real_T t1098 ; real_T t1100 ;
real_T t1102 ; real_T t1104 ; real_T t1106 ; real_T t1107 ; real_T t1108 ;
real_T t1109 ; real_T t1110 ; real_T t1111 ; real_T t1114 ; real_T t1116 ;
real_T t1121 ; real_T t1122 ; real_T t1123 ; real_T t1124 ; real_T t1125 ;
real_T t1126 ; real_T t1127 ; real_T t1128 ; real_T t1129 ; real_T t1130 ;
real_T t1131 ; real_T t1132 ; real_T t1134 ; real_T t1135 ; real_T t1136 ;
real_T t1139 ; real_T t1140 ; real_T t1142 ; real_T t1143 ; real_T t1145 ;
real_T t1146 ; real_T t1147 ; real_T t1148 ; real_T t1151 ; real_T t1153 ;
real_T t1155 ; real_T t1156 ; real_T t1159 ; real_T t1160 ; real_T t1162 ;
real_T t1163 ; real_T t1166 ; real_T t1167 ; real_T t1168 ; real_T t1169 ;
real_T t1173 ; real_T t1174 ; real_T t1176 ; real_T t1177 ; real_T t1179 ;
real_T t1181 ; real_T t1183 ; real_T t1187 ; real_T t1188 ; real_T t1192 ;
real_T t1193 ; real_T t1194 ; real_T t1195 ; real_T t1196 ; real_T t1199 ;
real_T t1200 ; real_T t1201 ; real_T t1203 ; real_T t1204 ; real_T t1206 ;
real_T t1207 ; real_T t1208 ; real_T t1210 ; real_T t1211 ; real_T t1212 ;
real_T t1213 ; real_T t1214 ; real_T t1216 ; real_T t1217 ; real_T t1219 ;
real_T t1220 ; real_T t1223 ; real_T t1224 ; real_T t1225 ; real_T t1226 ;
real_T t1227 ; real_T t1228 ; real_T t1230 ; real_T t1232 ; real_T t1234 ;
real_T t1237 ; real_T t1238 ; real_T t1239 ; real_T t1242 ; real_T t1243 ;
real_T t1244 ; real_T t1245 ; real_T t1247 ; real_T t1248 ; real_T t1251 ;
real_T t1252 ; real_T t1253 ; real_T t1256 ; real_T t1257 ; real_T t1262 ;
real_T t1264 ; real_T t1265 ; real_T t1269 ; real_T t1271 ; real_T t1280 ;
real_T t1284 ; real_T t1291 ; real_T t1302 ; real_T t1306 ; real_T t1314 ;
real_T t1330 ; real_T t1334 ; real_T t1350 ; real_T t1367 ; real_T t1371 ;
real_T t1380 ; real_T t1391 ; real_T t1396 ; real_T t1404 ; real_T t1419 ;
real_T t1439 ; real_T t1457 ; real_T t1462 ; real_T t1469 ; real_T t1482 ;
real_T t1483 ; real_T t1493 ; real_T t1516 ; real_T t1525 ; real_T t1544 ;
real_T t1560 ; real_T t1565 ; real_T t1572 ; real_T t1585 ; real_T t1589 ;
real_T t1597 ; real_T t1613 ; real_T t1633 ; real_T t1649 ; real_T t1650 ;
real_T t1661 ; real_T t1671 ; real_T t1674 ; real_T t1683 ; real_T t1727 ;
real_T t2182 ; real_T t2183 ; real_T t36_idx_0 ; real_T t427_idx_0 ; real_T
t42_idx_0 ; real_T t537_idx_0 ; real_T t538_idx_0 ; real_T t540_idx_0 ;
real_T t734 ; real_T t741 ; real_T t742 ; real_T t749 ; real_T t750 ; real_T
t754 ; real_T t757 ; real_T t758 ; real_T t765 ; real_T t766 ; real_T t774 ;
real_T t780 ; real_T t789 ; real_T t792 ; real_T t813 ; real_T t825 ; real_T
t829 ; real_T t830 ; real_T t831 ; real_T t832 ; real_T t833 ; real_T t834 ;
real_T t837 ; real_T t838 ; real_T t839 ; real_T t840 ; real_T t841 ; real_T
t844 ; real_T t845 ; real_T t846 ; real_T t847 ; real_T t850 ; real_T t852 ;
real_T t853 ; real_T t854 ; real_T t855 ; real_T t856 ; real_T t857 ; real_T
t858 ; real_T t863 ; real_T t864 ; real_T t865 ; real_T t866 ; real_T t869 ;
real_T t871 ; real_T t873 ; real_T t874 ; real_T t876 ; real_T t879 ; real_T
t880 ; real_T t882 ; real_T t884 ; real_T t885 ; real_T t886 ; real_T t888 ;
real_T t892 ; real_T t893 ; real_T t894 ; real_T t896 ; real_T t898 ; real_T
t899 ; real_T t900 ; real_T t902 ; real_T t903 ; real_T t904 ; real_T t907 ;
real_T t908 ; real_T t909 ; real_T t910 ; real_T t911 ; real_T t912 ; real_T
t915 ; real_T t916 ; real_T t917 ; real_T t918 ; real_T t920 ; real_T t922 ;
real_T t923 ; real_T t924 ; real_T t926 ; real_T t929 ; real_T t930 ; real_T
t934 ; real_T t939 ; real_T t940 ; real_T t941 ; real_T t943 ; real_T t944 ;
real_T t946 ; real_T t947 ; real_T t948 ; real_T t949 ; real_T t950 ; real_T
t952 ; real_T t955 ; real_T t958 ; real_T t959 ; real_T t961 ; real_T t962 ;
real_T t963 ; real_T t965 ; real_T t966 ; real_T t967 ; real_T t968 ; real_T
t972 ; real_T t973 ; real_T t974 ; real_T t975 ; real_T t976 ; real_T t980 ;
real_T t983 ; real_T t985 ; real_T t988 ; real_T t989 ; real_T t990 ; real_T
t993 ; real_T t994 ; real_T t995 ; real_T t997 ; real_T t998 ; real_T t999 ;
size_t t62 [ 1 ] ; size_t t63 [ 1 ] ; int32_T t421 [ 2851 ] ; int32_T M [ 214
] ; int32_T b ; boolean_T intrm_sf_mf_1457 ; boolean_T t55 ; boolean_T t56 ;
boolean_T t57 ; boolean_T t58 ; boolean_T t59 ; boolean_T t60 ; for ( b = 0 ;
b < 214 ; b ++ ) { M [ b ] = t2188 -> mM . mX [ b ] ; } U_idx_1 = t2188 -> mU
. mX [ 1 ] ; U_idx_2 = t2188 -> mU . mX [ 2 ] ; U_idx_3 = t2188 -> mU . mX [
3 ] ; U_idx_5 = t2188 -> mU . mX [ 5 ] ; U_idx_7 = t2188 -> mU . mX [ 7 ] ;
U_idx_9 = t2188 -> mU . mX [ 9 ] ; U_idx_10 = t2188 -> mU . mX [ 10 ] ; for (
b = 0 ; b < 394 ; b ++ ) { X [ b ] = t2188 -> mX . mX [ b ] ; } out = t2189
-> mASSERT ; if ( X [ 87ULL ] < 0.0 ) { t2182 = X [ 87ULL ] * 17.81 + 0.043 ;
} else if ( X [ 87ULL ] <= 1.0 ) { t2182 = ( ( X [ 87ULL ] * 17.81 + 0.043 )
- X [ 87ULL ] * X [ 87ULL ] * 39.85 ) + X [ 87ULL ] * X [ 87ULL ] * X [ 87ULL
] * 36.0 ; } else { t2182 = ( X [ 87ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [
88ULL ] < 0.0 ) { t2183 = X [ 88ULL ] * 17.81 + 0.043 ; } else if ( X [ 88ULL
] <= 1.0 ) { t2183 = ( ( X [ 88ULL ] * 17.81 + 0.043 ) - X [ 88ULL ] * X [
88ULL ] * 39.85 ) + X [ 88ULL ] * X [ 88ULL ] * X [ 88ULL ] * 36.0 ; } else {
t2183 = ( X [ 88ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 57ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = - X [ 57ULL
] / 0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = 0.0 ; }
t734 = ( X [ 67ULL ] + X [ 73ULL ] ) / 2.0 ; t742 = ( X [ 77ULL ] + X [ 82ULL
] ) / 2.0 ; t61 [ 0 ] = 343.15 ; t62 [ 0 ] = 52ULL ; t63 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t61 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t54 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] ,
& t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t42_idx_0 = b_efOut [ 0 ] ; t750 = pmf_exp
( pmf_log ( t734 ) - t42_idx_0 ) ; t758 = pmf_exp ( pmf_log ( t742 ) -
t42_idx_0 ) ; t2182 = ( t2182 + t2183 ) / 2.0 ; if ( t2182 >= 1.0 ) { t2183 =
t2182 * 0.005139 - 0.00326 ; } else { t2183 = 0.0018790000000000005 ; } t2182
= t2183 * 1.6283557743720771 ; t754 = t758 * ( ( X [ 81ULL ] + X [ 86ULL ] )
/ 2.0 ) ; t2183 = t754 >= 1.0E-9 ? t754 : 1.0E-6 ; t754 = t734 * ( ( X [
70ULL ] + X [ 75ULL ] ) / 2.0 ) / 1.01325 ; if ( t754 * 1.0E-5 >= 1.0E-9 ) {
t741 = t754 * 1.0E-5 ; } else { t741 = 1.0E-6 ; } t754 = t742 * ( ( X [ 80ULL
] + X [ 85ULL ] ) / 2.0 ) / 1.01325 ; if ( t754 * 1.0E-5 >= 1.0E-9 ) { t749 =
t754 * 1.0E-5 ; } else { t749 = 1.0E-6 ; } if ( X [ 122ULL ] <= 0.0 ) { t829
= 0.0 ; } else { t829 = X [ 122ULL ] >= 1.0 ? 1.0 : X [ 122ULL ] ; } if ( X [
123ULL ] <= 0.0 ) { t754 = 0.0 ; } else { t754 = X [ 123ULL ] >= 1.0 ? 1.0 :
X [ 123ULL ] ; } t757 = ( ( ( 1.0 - t829 ) - t754 ) * 296.802103844292 + t829
* 461.523 ) + t754 * 4124.48151675695 ; if ( X [ 19ULL ] <= 0.0 ) { t829 =
0.0 ; } else { t829 = X [ 19ULL ] >= 1.0 ? 1.0 : X [ 19ULL ] ; } if ( X [
20ULL ] <= 0.0 ) { t754 = 0.0 ; } else { t754 = X [ 20ULL ] >= 1.0 ? 1.0 : X
[ 20ULL ] ; } t765 = ( ( ( 1.0 - t829 ) - t754 ) * 296.802103844292 + t829 *
461.523 ) + t754 * 4124.48151675695 ; t830 = ( X [ 17ULL ] / ( X [ 18ULL ] ==
0.0 ? 1.0E-16 : X [ 18ULL ] ) - X [ 130ULL ] / ( X [ 131ULL ] == 0.0 ?
1.0E-16 : X [ 131ULL ] ) ) * X [ 129ULL ] * t765 / 7.8539816339744827E-5 ; if
( X [ 130ULL ] <= 216.59999999999997 ) { t831 = 216.59999999999997 ; } else {
t831 = X [ 130ULL ] >= 623.15 ? 623.15 : X [ 130ULL ] ; } t833 = t831 * t831
; t832 = ( ( ( 1074.1165326382641 + t831 * - 0.2214565261064495 ) + t833 *
0.00037212980109014541 ) * ( ( 1.0 - t829 ) - t754 ) + ( ( 1479.6504774711011
+ t831 * 1.2002114337048222 ) + t833 * - 0.00038614513167823636 ) * t829 ) +
( ( 12825.281119789837 + t831 * 6.9647057412840034 ) + t833 * -
0.0070524868246844051 ) * t754 ; t845 = t832 - t765 ; t833 = t832 / ( t845 ==
0.0 ? 1.0E-16 : t845 ) ; t834 = pmf_sqrt ( t830 * t830 *
9.999999999999999E-14 + fabs ( X [ 130ULL ] * t833 * t765 ) * 1.0E-9 ) ; if (
X [ 132ULL ] <= 0.0 ) { intrm_sf_mf_829 = 0.0 ; } else { intrm_sf_mf_829 = X
[ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; } if ( X [ 133ULL ] <= 0.0 ) {
intrm_sf_mf_110 = 0.0 ; } else { intrm_sf_mf_110 = X [ 133ULL ] >= 1.0 ? 1.0
: X [ 133ULL ] ; } t66 [ 0ULL ] = X [ 17ULL ] ; tlu2_linear_nearest_prelookup
( & c_efOut . mField0 [ 0ULL ] , & c_efOut . mField1 [ 0ULL ] , & c_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t66 [
0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t37 = c_efOut ;
tlu2_1d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t422 [ 0 ] = d_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & e_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t423 [ 0 ] = e_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & f_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t424 [ 0 ] = f_efOut [ 0 ] ; t837 = ( ( (
1.0 - intrm_sf_mf_829 ) - intrm_sf_mf_110 ) * t422 [ 0ULL ] + t423 [ 0ULL ] *
intrm_sf_mf_829 ) + t424 [ 0ULL ] * intrm_sf_mf_110 ; t846 = X [ 131ULL ] * X
[ 131ULL ] * t833 ; t838 = - pmf_sqrt ( fabs ( t846 / ( t765 == 0.0 ? 1.0E-16
: t765 ) / ( X [ 130ULL ] == 0.0 ? 1.0E-16 : X [ 130ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t838 >= 0.0 ) { t839 = t838 * 100000.0 ; } else
{ t839 = - t838 * 100000.0 ; } t850 = t837 * 7.8539816339744827E-5 ; t831 =
t839 * 0.01 / ( t850 == 0.0 ? 1.0E-16 : t850 ) ; t852 = X [ 17ULL ] * t765 ;
t844 = X [ 18ULL ] / ( t852 == 0.0 ? 1.0E-16 : t852 ) ; t854 = t844 *
1.5707963267948965E-8 ; t845 = t838 * t837 * 35.2 / ( t854 == 0.0 ? 1.0E-16 :
t854 ) ; t847 = t831 >= 1.0 ? t831 : 1.0 ; t855 = pmf_log10 ( 6.9 / ( t847 ==
0.0 ? 1.0E-16 : t847 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t847
== 0.0 ? 1.0E-16 : t847 ) + 0.00017169489553429715 ) * 3.24 ; t857 = t844 *
1.2337005501361697E-10 ; t839 = t838 * t839 * ( 1.0 / ( t855 == 0.0 ? 1.0E-16
: t855 ) ) * 0.55 / ( t857 == 0.0 ? 1.0E-16 : t857 ) ; intrm_sf_mf_47 = (
t831 - 2000.0 ) / 2000.0 ; t852 = intrm_sf_mf_47 * intrm_sf_mf_47 * 3.0 -
intrm_sf_mf_47 * intrm_sf_mf_47 * intrm_sf_mf_47 * 2.0 ; if ( t831 <= 2000.0
) { intrm_sf_mf_47 = t845 * 1.0E-5 ; } else if ( t831 >= 4000.0 ) {
intrm_sf_mf_47 = t839 * 1.0E-5 ; } else { intrm_sf_mf_47 = ( ( 1.0 - t852 ) *
t845 + t839 * t852 ) * 1.0E-5 ; } t834 = X [ 129ULL ] * t834 /
7.8539816339744827E-5 * 0.00031622776601683789 + intrm_sf_mf_47 ; t839 = - (
( X [ 17ULL ] / ( X [ 18ULL ] == 0.0 ? 1.0E-16 : X [ 18ULL ] ) - X [ 134ULL ]
/ ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ) * X [ 117ULL ] * t765 )
/ 7.8539816339744827E-5 ; if ( X [ 134ULL ] <= 216.59999999999997 ) { t831 =
216.59999999999997 ; } else { t831 = X [ 134ULL ] >= 623.15 ? 623.15 : X [
134ULL ] ; } t840 = t831 * t831 ; t845 = ( ( ( 1074.1165326382641 + t831 * -
0.2214565261064495 ) + t840 * 0.00037212980109014541 ) * ( ( 1.0 - t829 ) -
t754 ) + ( ( 1479.6504774711011 + t831 * 1.2002114337048222 ) + t840 * -
0.00038614513167823636 ) * t829 ) + ( ( 12825.281119789837 + t831 *
6.9647057412840034 ) + t840 * - 0.0070524868246844051 ) * t754 ; t865 = t845
- t765 ; t829 = t845 / ( t865 == 0.0 ? 1.0E-16 : t865 ) ; t754 = pmf_sqrt (
t839 * t839 * 9.999999999999999E-14 + fabs ( X [ 134ULL ] * t829 * t765 ) *
1.0E-9 ) ; t866 = X [ 135ULL ] * X [ 135ULL ] * t829 ; intrm_sf_mf_47 = -
pmf_sqrt ( fabs ( t866 / ( t765 == 0.0 ? 1.0E-16 : t765 ) / ( X [ 134ULL ] ==
0.0 ? 1.0E-16 : X [ 134ULL ] ) ) ) * 7.8539816339744827E-5 ; if (
intrm_sf_mf_47 >= 0.0 ) { t852 = intrm_sf_mf_47 * 100000.0 ; } else { t852 =
- intrm_sf_mf_47 * 100000.0 ; } t840 = t852 * 0.01 / ( t850 == 0.0 ? 1.0E-16
: t850 ) ; t841 = intrm_sf_mf_47 * t837 * 35.2 / ( t854 == 0.0 ? 1.0E-16 :
t854 ) ; t853 = t840 >= 1.0 ? t840 : 1.0 ; t873 = pmf_log10 ( 6.9 / ( t853 ==
0.0 ? 1.0E-16 : t853 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t853
== 0.0 ? 1.0E-16 : t853 ) + 0.00017169489553429715 ) * 3.24 ; t852 =
intrm_sf_mf_47 * t852 * ( 1.0 / ( t873 == 0.0 ? 1.0E-16 : t873 ) ) * 0.55 / (
t857 == 0.0 ? 1.0E-16 : t857 ) ; t854 = ( t840 - 2000.0 ) / 2000.0 ; t855 =
t854 * t854 * 3.0 - t854 * t854 * t854 * 2.0 ; if ( t840 <= 2000.0 ) { t854 =
t841 * 1.0E-5 ; } else if ( t840 >= 4000.0 ) { t854 = t852 * 1.0E-5 ; } else
{ t854 = ( ( 1.0 - t855 ) * t841 + t852 * t855 ) * 1.0E-5 ; } t754 = - ( X [
117ULL ] * t754 ) / 7.8539816339744827E-5 * 0.00031622776601683789 + t854 ;
if ( 1.0 - X [ 19ULL ] >= 0.01 ) { t840 = 1.0 - X [ 19ULL ] ; } else if ( 1.0
- X [ 19ULL ] >= - 0.1 ) { t840 = pmf_exp ( ( ( 1.0 - X [ 19ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t840 = 1.6701700790245661E-7 ; } t841 = X [ 20ULL
] / ( t840 == 0.0 ? 1.0E-16 : t840 ) * 3827.6794129126583 + 296.802103844292
; t422 [ 0ULL ] = X [ 17ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut .
mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t422 [ 0ULL ] , & t62 [
0ULL ] , & t63 [ 0ULL ] ) ; t54 = g_efOut ; tlu2_1d_linear_linear_value ( &
h_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t36_idx_0 = h_efOut [ 0 ] ; t854 = pmf_exp ( pmf_log ( X [ 18ULL ] *
100000.0 ) - t36_idx_0 ) ; if ( t854 >= 1.0 ) { t880 = ( t854 - 1.0 ) *
461.523 + t841 ; t855 = t841 / ( t880 == 0.0 ? 1.0E-16 : t880 ) ; } else {
t855 = 1.0 ; } t856 = ( X [ 129ULL ] - ( - X [ 117ULL ] ) ) / 2.0 ; if ( X [
128ULL ] <= 0.0 ) { t858 = 0.0 ; } else { t858 = X [ 128ULL ] >= 1.0 ? 1.0 :
X [ 128ULL ] ; } if ( X [ 127ULL ] <= 0.0 ) { intrm_sf_mf_81 = 0.0 ; } else {
intrm_sf_mf_81 = X [ 127ULL ] >= 1.0 ? 1.0 : X [ 127ULL ] ; } t863 = ( ( (
1.0 - t858 ) - intrm_sf_mf_81 ) * 296.802103844292 + t858 * 461.523 ) +
intrm_sf_mf_81 * 4124.48151675695 ; t858 = X [ 127ULL ] * 4124.48151675695 /
( t863 == 0.0 ? 1.0E-16 : t863 ) ; if ( t858 <= 0.0 ) { intrm_sf_mf_81 = 0.0
; } else { intrm_sf_mf_81 = t858 >= 1.0 ? 1.0 : t858 ; } t858 = X [ 128ULL ]
* 461.523 / ( t863 == 0.0 ? 1.0E-16 : t863 ) ; if ( t858 <= 0.0 ) { t864 =
0.0 ; } else { t864 = t858 >= 1.0 ? 1.0 : t858 ; } t423 [ 0ULL ] = X [ 125ULL
] ; tlu2_linear_nearest_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut
. mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t423 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ;
t54 = i_efOut ; tlu2_1d_linear_nearest_value ( & j_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t425 [ 0 ] = j_efOut [ 0 ]
; tlu2_1d_linear_nearest_value ( & k_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL
] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t121 [ 0 ] = k_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t427_idx_0 = l_efOut [ 0 ] ; t858 = ( ( (
1.0 - t864 ) - intrm_sf_mf_81 ) * t425 [ 0ULL ] + t121 [ 0ULL ] * t864 ) +
t427_idx_0 * intrm_sf_mf_81 ; t884 = t858 + t837 ; t886 = t884 / 2.0 *
7.8539816339744827E-5 ; t857 = - ( t856 <= 0.0 ? t856 : 0.0 ) * 0.01 / ( t886
== 0.0 ? 1.0E-16 : t886 ) ; t858 = t857 >= 0.0 ? t857 : - t857 ; t857 = t858
> 1000.0 ? t858 : 1000.0 ; intrm_sf_mf_173 = pmf_log10 ( 6.9 / ( t857 == 0.0
? 1.0E-16 : t857 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t857 ==
0.0 ? 1.0E-16 : t857 ) + 0.00017169489553429715 ) * 3.24 ; t865 = 1.0 / (
intrm_sf_mf_173 == 0.0 ? 1.0E-16 : intrm_sf_mf_173 ) ;
tlu2_1d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t428 [ 0 ] = m_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t429 [ 0 ] = n_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t539 [ 0 ] = o_efOut [ 0 ] ; t831 = ( ( (
1.0 - intrm_sf_mf_829 ) - intrm_sf_mf_110 ) * t428 [ 0ULL ] + t429 [ 0ULL ] *
intrm_sf_mf_829 ) + t539 [ 0ULL ] * intrm_sf_mf_110 ;
tlu2_1d_linear_nearest_value ( & p_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = p_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & q_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = q_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = r_efOut [ 0 ] ;
intrm_sf_mf_829 = ( ( ( 1.0 - t864 ) - intrm_sf_mf_81 ) * t540_idx_0 +
t537_idx_0 * t864 ) + t538_idx_0 * intrm_sf_mf_81 ; t888 = t831 +
intrm_sf_mf_829 ; if ( ( pmf_pow ( t888 / 2.0 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t865 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t892 = ( pmf_pow ( (
t831 + intrm_sf_mf_829 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t865 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_110 = ( t857 - 1000.0 ) * ( t865 /
8.0 ) * ( ( t831 + intrm_sf_mf_829 ) / 2.0 ) / ( t892 == 0.0 ? 1.0E-16 : t892
) ; } else { intrm_sf_mf_110 = ( t857 - 1000.0 ) * ( t865 / 8.0 ) * ( ( t831
+ intrm_sf_mf_829 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_81 = ( t858 - 2000.0 ) /
2000.0 ; t864 = intrm_sf_mf_81 * intrm_sf_mf_81 * 3.0 - intrm_sf_mf_81 *
intrm_sf_mf_81 * intrm_sf_mf_81 * 2.0 ; if ( t858 <= 2000.0 ) {
intrm_sf_mf_81 = 3.66 ; } else if ( t858 >= 4000.0 ) { intrm_sf_mf_81 =
intrm_sf_mf_110 ; } else { intrm_sf_mf_81 = ( 1.0 - t864 ) * 3.66 +
intrm_sf_mf_110 * t864 ; } t896 = intrm_sf_mf_81 * 0.031415926535897927 ;
t899 = t888 / 2.0 ; if ( t858 > t896 / 7.8539816339744827E-5 / ( t899 == 0.0
? 1.0E-16 : t899 ) / 30.0 ) { intrm_sf_mf_233 = ( t831 + intrm_sf_mf_829 ) /
2.0 ; intrm_sf_mf_110 = intrm_sf_mf_81 * 0.031415926535897927 / ( t858 == 0.0
? 1.0E-16 : t858 ) / 7.8539816339744827E-5 / ( intrm_sf_mf_233 == 0.0 ?
1.0E-16 : intrm_sf_mf_233 ) ; } else { intrm_sf_mf_110 = 30.0 ; } if ( X [
109ULL ] <= 0.0 ) { intrm_sf_mf_829 = 0.0 ; } else { intrm_sf_mf_829 = X [
109ULL ] >= 1.0 ? 1.0 : X [ 109ULL ] ; } if ( X [ 108ULL ] <= 0.0 ) {
intrm_sf_mf_81 = 0.0 ; } else { intrm_sf_mf_81 = X [ 108ULL ] >= 1.0 ? 1.0 :
X [ 108ULL ] ; } t864 = ( ( ( 1.0 - intrm_sf_mf_829 ) - intrm_sf_mf_81 ) *
296.802103844292 + intrm_sf_mf_829 * 461.523 ) + intrm_sf_mf_81 *
4124.48151675695 ; intrm_sf_mf_829 = X [ 109ULL ] * 461.523 / ( t864 == 0.0 ?
1.0E-16 : t864 ) ; if ( intrm_sf_mf_829 <= 0.0 ) { intrm_sf_mf_81 = 0.0 ; }
else { intrm_sf_mf_81 = intrm_sf_mf_829 >= 1.0 ? 1.0 : intrm_sf_mf_829 ; }
intrm_sf_mf_829 = X [ 108ULL ] * 4124.48151675695 / ( t864 == 0.0 ? 1.0E-16 :
t864 ) ; if ( intrm_sf_mf_829 <= 0.0 ) { t869 = 0.0 ; } else { t869 =
intrm_sf_mf_829 >= 1.0 ? 1.0 : intrm_sf_mf_829 ; } t424 [ 0ULL ] = X [ 106ULL
] ; tlu2_linear_nearest_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut
. mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t424 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ;
t37 = s_efOut ; tlu2_1d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t37 .
mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = t_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t37 . mField0 [
0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = u_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & v_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = v_efOut [ 0 ] ;
intrm_sf_mf_829 = ( ( ( 1.0 - intrm_sf_mf_81 ) - t869 ) * t540_idx_0 +
t537_idx_0 * intrm_sf_mf_81 ) + t538_idx_0 * t869 ; t871 = t856 >= 0.0 ? t856
: 0.0 ; tlu2_1d_linear_nearest_value ( & w_efOut [ 0ULL ] , & t37 . mField0 [
0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = w_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & x_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = x_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = y_efOut [ 0 ] ; t856 = ( ( (
1.0 - intrm_sf_mf_81 ) - t869 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_81 )
+ t538_idx_0 * t869 ; t908 = t837 + t856 ; t910 = t908 / 2.0 *
7.8539816339744827E-5 ; intrm_sf_mf_81 = t871 * 0.01 / ( t910 == 0.0 ?
1.0E-16 : t910 ) ; t869 = intrm_sf_mf_81 >= 0.0 ? intrm_sf_mf_81 : -
intrm_sf_mf_81 ; intrm_sf_mf_81 = t869 > 1000.0 ? t869 : 1000.0 ; t911 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_81 == 0.0 ? 1.0E-16 : intrm_sf_mf_81 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_81 == 0.0 ?
1.0E-16 : intrm_sf_mf_81 ) + 0.00017169489553429715 ) * 3.24 ; t871 = 1.0 / (
t911 == 0.0 ? 1.0E-16 : t911 ) ; t912 = intrm_sf_mf_829 + t831 ; if ( (
pmf_pow ( t912 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t871 / 8.0
) * 12.7 + 1.0 >= 1.0E-6 ) { t916 = ( pmf_pow ( ( intrm_sf_mf_829 + t831 ) /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t871 / 8.0 ) * 12.7 + 1.0 ;
t873 = ( intrm_sf_mf_81 - 1000.0 ) * ( t871 / 8.0 ) * ( ( intrm_sf_mf_829 +
t831 ) / 2.0 ) / ( t916 == 0.0 ? 1.0E-16 : t916 ) ; } else { t873 = (
intrm_sf_mf_81 - 1000.0 ) * ( t871 / 8.0 ) * ( ( intrm_sf_mf_829 + t831 ) /
2.0 ) / 1.0E-6 ; } t874 = ( t869 - 2000.0 ) / 2000.0 ; t876 = t874 * t874 *
3.0 - t874 * t874 * t874 * 2.0 ; if ( t869 <= 2000.0 ) { t874 = 3.66 ; } else
if ( t869 >= 4000.0 ) { t874 = t873 ; } else { t874 = ( 1.0 - t876 ) * 3.66 +
t873 * t876 ; } t920 = t874 * 0.031415926535897927 ; t923 = t912 / 2.0 ; if (
t869 > t920 / 7.8539816339744827E-5 / ( t923 == 0.0 ? 1.0E-16 : t923 ) / 30.0
) { t929 = ( intrm_sf_mf_829 + t831 ) / 2.0 ; t873 = t874 *
0.031415926535897927 / ( t869 == 0.0 ? 1.0E-16 : t869 ) /
7.8539816339744827E-5 / ( t929 == 0.0 ? 1.0E-16 : t929 ) ; } else { t873 =
30.0 ; } t874 = U_idx_2 * 0.031415926535897927 ; if ( t874 * 0.0001 <=
7.8539816339744857E-13 ) { t876 = 7.8539816339744857E-13 ; } else if ( t874 *
0.0001 >= 3.1415926535897929E-6 ) { t876 = 3.1415926535897929E-6 ; } else {
t876 = t874 * 0.0001 ; } t874 = t876 / 7.8539816339744827E-5 ; if ( X [
149ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c = X [
149ULL ] >= 1.0 ? 1.0 : X [ 149ULL ] ; } if ( X [ 150ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = X [ 150ULL ] >=
1.0 ? 1.0 : X [ 150ULL ] ; } t879 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I * 4124.48151675695
; intrm_sf_mf_299 = X [ 147ULL ] * t879 ; t880 = X [ 148ULL ] / (
intrm_sf_mf_299 == 0.0 ? 1.0E-16 : intrm_sf_mf_299 ) ; t852 = X [ 148ULL ] /
( X [ 126ULL ] == 0.0 ? 1.0E-16 : X [ 126ULL ] ) * ( X [ 151ULL ] / ( X [
147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ; t882 = X [ 148ULL ] / 1.01325
* ( X [ 152ULL ] / ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ; t885
= ( X [ 126ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; intrm_sf_mf_200
= ( 1.0 - t874 ) * ( 1.0 - t874 ) ; t886 = t885 * intrm_sf_mf_200 ;
intrm_sf_mf_173 = ( t874 + 1.0 ) * ( 1.0 - t874 * t852 ) - ( 1.0 - t874 *
t882 ) * t874 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 = ( X [
126ULL ] - 1.01325 ) * ( intrm_sf_mf_173 >= intrm_sf_mf_200 ? intrm_sf_mf_173
: intrm_sf_mf_200 ) ; intrm_sf_mf_173 = ( X [ 126ULL ] - 1.01325 ) / ( t885
== 0.0 ? 1.0E-16 : t885 ) ; t831 = intrm_sf_mf_173 * intrm_sf_mf_173 * 3.0 -
intrm_sf_mf_173 * intrm_sf_mf_173 * intrm_sf_mf_173 * 2.0 ; if ( X [ 126ULL ]
- 1.01325 <= 0.0 ) { intrm_sf_mf_173 = t886 ; } else if ( X [ 126ULL ] -
1.01325 >= t885 ) { intrm_sf_mf_173 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 ; } else {
intrm_sf_mf_173 = ( 1.0 - t831 ) * t886 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 * t831 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 = ( t874 +
1.0 ) * ( 1.0 - t874 * t882 ) - ( 1.0 - t874 * t852 ) * t874 * 2.0 ; t874 = (
1.01325 - X [ 126ULL ] ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 >=
intrm_sf_mf_200 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 :
intrm_sf_mf_200 ) ; t852 = ( 1.01325 - X [ 126ULL ] ) / ( t885 == 0.0 ?
1.0E-16 : t885 ) ; t882 = t852 * t852 * 3.0 - t852 * t852 * t852 * 2.0 ; if (
1.01325 - X [ 126ULL ] <= 0.0 ) { t852 = t886 ; } else if ( 1.01325 - X [
126ULL ] >= t885 ) { t852 = t874 ; } else { t852 = ( 1.0 - t882 ) * t886 +
t874 * t882 ; } if ( X [ 126ULL ] > 1.01325 ) { t874 = intrm_sf_mf_173 ; }
else { t874 = X [ 126ULL ] < 1.01325 ? t852 : t886 ; } if ( X [ 147ULL ] <=
216.59999999999997 ) { t852 = 216.59999999999997 ; } else { t852 = X [ 147ULL
] >= 623.15 ? 623.15 : X [ 147ULL ] ; } t774 = t852 * t852 ; t882 = ( ( (
1074.1165326382641 + t852 * - 0.2214565261064495 ) + t774 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ) + ( (
1479.6504774711011 + t852 * 1.2002114337048222 ) + t774 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c ) + ( (
12825.281119789837 + t852 * 6.9647057412840034 ) + t774 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ; t852 = t882 -
t879 ; t943 = X [ 148ULL ] * X [ 148ULL ] * ( t882 / ( t852 == 0.0 ? 1.0E-16
: t852 ) ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c
= pmf_sqrt ( fabs ( t943 / ( t879 == 0.0 ? 1.0E-16 : t879 ) / ( X [ 147ULL ]
== 0.0 ? 1.0E-16 : X [ 147ULL ] ) ) ) * t876 * 0.64 ; if ( X [ 24ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = X [ 24ULL ] >=
1.0 ? 1.0 : X [ 24ULL ] ; } if ( X [ 23ULL ] <= 0.0 ) { intrm_sf_mf_200 = 0.0
; } else { intrm_sf_mf_200 = X [ 23ULL ] >= 1.0 ? 1.0 : X [ 23ULL ] ; } t886
= ( ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ) -
intrm_sf_mf_200 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I * 461.523 ) +
intrm_sf_mf_200 * 4124.48151675695 ; if ( 1.0 - X [ 24ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = 1.0 - X [ 24ULL
] ; } else if ( 1.0 - X [ 24ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = pmf_exp ( ( (
1.0 - X [ 24ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I =
1.6701700790245661E-7 ; } intrm_sf_mf_200 = X [ 23ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ) *
3827.6794129126583 + 296.802103844292 ; t425 [ 0ULL ] = X [ 21ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t425 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t53
= ab_efOut ; tlu2_1d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t53 .
mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t427_idx_0 = bb_efOut [ 0
] ; intrm_sf_mf_173 = pmf_exp ( pmf_log ( X [ 22ULL ] * 100000.0 ) -
t427_idx_0 ) ; if ( intrm_sf_mf_173 >= 1.0 ) { t948 = ( intrm_sf_mf_173 - 1.0
) * 461.523 + intrm_sf_mf_200 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 =
intrm_sf_mf_200 / ( t948 == 0.0 ? 1.0E-16 : t948 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 = 1.0 ; } if
( X [ 27ULL ] <= 0.0 ) { t774 = 0.0 ; } else { t774 = X [ 27ULL ] >= 1.0 ?
1.0 : X [ 27ULL ] ; } if ( X [ 28ULL ] <= 0.0 ) { t892 = 0.0 ; } else { t892
= X [ 28ULL ] >= 1.0 ? 1.0 : X [ 28ULL ] ; } t893 = ( ( ( 1.0 - t774 ) - t892
) * 296.802103844292 + t774 * 461.523 ) + t892 * 4124.48151675695 ; t894 = -
( ( X [ 25ULL ] / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL ] ) - X [ 177ULL
] / ( X [ 178ULL ] == 0.0 ? 1.0E-16 : X [ 178ULL ] ) ) * X [ 167ULL ] * t893
) / 7.8539816339744827E-5 ; if ( X [ 177ULL ] <= 216.59999999999997 ) { t831
= 216.59999999999997 ; } else { t831 = X [ 177ULL ] >= 623.15 ? 623.15 : X [
177ULL ] ; } t899 = t831 * t831 ; t898 = ( ( ( 1074.1165326382641 + t831 * -
0.2214565261064495 ) + t899 * 0.00037212980109014541 ) * ( ( 1.0 - t774 ) -
t892 ) + ( ( 1479.6504774711011 + t831 * 1.2002114337048222 ) + t899 * -
0.00038614513167823636 ) * t774 ) + ( ( 12825.281119789837 + t831 *
6.9647057412840034 ) + t899 * - 0.0070524868246844051 ) * t892 ; t831 = t898
- t893 ; t899 = t898 / ( t831 == 0.0 ? 1.0E-16 : t831 ) ; t900 = pmf_sqrt (
t894 * t894 * 9.999999999999999E-14 + fabs ( X [ 177ULL ] * t899 * t893 ) *
1.0E-9 ) ; if ( X [ 179ULL ] <= 0.0 ) { intrm_sf_mf_528 = 0.0 ; } else {
intrm_sf_mf_528 = X [ 179ULL ] >= 1.0 ? 1.0 : X [ 179ULL ] ; } if ( X [
180ULL ] <= 0.0 ) { t902 = 0.0 ; } else { t902 = X [ 180ULL ] >= 1.0 ? 1.0 :
X [ 180ULL ] ; } t121 [ 0ULL ] = X [ 25ULL ] ; tlu2_linear_nearest_prelookup
( & cb_efOut . mField0 [ 0ULL ] , & cb_efOut . mField1 [ 0ULL ] , & cb_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t121 [
0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t37 = cb_efOut ;
tlu2_1d_linear_nearest_value ( & db_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = db_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & eb_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = eb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fb_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = fb_efOut [ 0 ] ; t903 = ( ( (
1.0 - intrm_sf_mf_528 ) - t902 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_528
) + t538_idx_0 * t902 ; t955 = X [ 178ULL ] * X [ 178ULL ] * t899 ; t904 = -
pmf_sqrt ( fabs ( t955 / ( t893 == 0.0 ? 1.0E-16 : t893 ) / ( X [ 177ULL ] ==
0.0 ? 1.0E-16 : X [ 177ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t904 >= 0.0
) { intrm_sf_mf_233 = t904 * 100000.0 ; } else { intrm_sf_mf_233 = - t904 *
100000.0 ; } t959 = t903 * 7.8539816339744827E-5 ; t831 = intrm_sf_mf_233 *
0.01 / ( t959 == 0.0 ? 1.0E-16 : t959 ) ; t961 = X [ 25ULL ] * t893 ; t907 =
X [ 26ULL ] / ( t961 == 0.0 ? 1.0E-16 : t961 ) ; t963 = t907 *
1.5707963267948965E-8 ; t909 = t904 * t903 * 35.2 / ( t963 == 0.0 ? 1.0E-16 :
t963 ) ; t910 = t831 >= 1.0 ? t831 : 1.0 ; t852 = pmf_log10 ( 6.9 / ( t910 ==
0.0 ? 1.0E-16 : t910 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t910
== 0.0 ? 1.0E-16 : t910 ) + 0.00017169489553429715 ) * 3.24 ; t966 = t907 *
1.2337005501361697E-10 ; intrm_sf_mf_233 = t904 * intrm_sf_mf_233 * ( 1.0 / (
t852 == 0.0 ? 1.0E-16 : t852 ) ) * 0.55 / ( t966 == 0.0 ? 1.0E-16 : t966 ) ;
t911 = ( t831 - 2000.0 ) / 2000.0 ; t852 = t911 * t911 * 3.0 - t911 * t911 *
t911 * 2.0 ; if ( t831 <= 2000.0 ) { t911 = t909 * 1.0E-5 ; } else if ( t831
>= 4000.0 ) { t911 = intrm_sf_mf_233 * 1.0E-5 ; } else { t911 = ( ( 1.0 -
t852 ) * t909 + intrm_sf_mf_233 * t852 ) * 1.0E-5 ; } t900 = - ( X [ 167ULL ]
* t900 ) / 7.8539816339744827E-5 * 0.00031622776601683789 + t911 ;
intrm_sf_mf_233 = ( X [ 25ULL ] / ( X [ 26ULL ] == 0.0 ? 1.0E-16 : X [ 26ULL
] ) - X [ 182ULL ] / ( X [ 183ULL ] == 0.0 ? 1.0E-16 : X [ 183ULL ] ) ) * X [
181ULL ] * t893 / 7.8539816339744827E-5 ; if ( X [ 182ULL ] <=
216.59999999999997 ) { t831 = 216.59999999999997 ; } else { t831 = X [ 182ULL
] >= 623.15 ? 623.15 : X [ 182ULL ] ; } t780 = t831 * t831 ; t909 = ( ( (
1074.1165326382641 + t831 * - 0.2214565261064495 ) + t780 *
0.00037212980109014541 ) * ( ( 1.0 - t774 ) - t892 ) + ( ( 1479.6504774711011
+ t831 * 1.2002114337048222 ) + t780 * - 0.00038614513167823636 ) * t774 ) +
( ( 12825.281119789837 + t831 * 6.9647057412840034 ) + t780 * -
0.0070524868246844051 ) * t892 ; t974 = t909 - t893 ; t774 = t909 / ( t974 ==
0.0 ? 1.0E-16 : t974 ) ; t892 = pmf_sqrt ( intrm_sf_mf_233 * intrm_sf_mf_233
* 9.999999999999999E-14 + fabs ( X [ 182ULL ] * t774 * t893 ) * 1.0E-9 ) ;
t975 = X [ 183ULL ] * X [ 183ULL ] * t774 ; t911 = - pmf_sqrt ( fabs ( t975 /
( t893 == 0.0 ? 1.0E-16 : t893 ) / ( X [ 182ULL ] == 0.0 ? 1.0E-16 : X [
182ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t911 >= 0.0 ) { t852 = t911 *
100000.0 ; } else { t852 = - t911 * 100000.0 ; } t780 = t852 * 0.01 / ( t959
== 0.0 ? 1.0E-16 : t959 ) ; t915 = t911 * t903 * 35.2 / ( t963 == 0.0 ?
1.0E-16 : t963 ) ; t916 = t780 >= 1.0 ? t780 : 1.0 ; intrm_sf_mf_498 =
pmf_log10 ( 6.9 / ( t916 == 0.0 ? 1.0E-16 : t916 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t916 == 0.0 ? 1.0E-16 : t916 ) + 0.00017169489553429715
) * 3.24 ; t852 = t911 * t852 * ( 1.0 / ( intrm_sf_mf_498 == 0.0 ? 1.0E-16 :
intrm_sf_mf_498 ) ) * 0.55 / ( t966 == 0.0 ? 1.0E-16 : t966 ) ; t917 = ( t780
- 2000.0 ) / 2000.0 ; t918 = t917 * t917 * 3.0 - t917 * t917 * t917 * 2.0 ;
if ( t780 <= 2000.0 ) { t917 = t915 * 1.0E-5 ; } else if ( t780 >= 4000.0 ) {
t917 = t852 * 1.0E-5 ; } else { t917 = ( ( 1.0 - t918 ) * t915 + t852 * t918
) * 1.0E-5 ; } t892 = X [ 181ULL ] * t892 / 7.8539816339744827E-5 *
0.00031622776601683789 + t917 ; if ( 1.0 - X [ 27ULL ] >= 0.01 ) { t780 = 1.0
- X [ 27ULL ] ; } else if ( 1.0 - X [ 27ULL ] >= - 0.1 ) { t780 = pmf_exp ( (
( 1.0 - X [ 27ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t780 =
1.6701700790245661E-7 ; } t915 = X [ 28ULL ] / ( t780 == 0.0 ? 1.0E-16 : t780
) * 3827.6794129126583 + 296.802103844292 ; t428 [ 0ULL ] = X [ 25ULL ] ;
tlu2_linear_linear_prelookup ( & gb_efOut . mField0 [ 0ULL ] , & gb_efOut .
mField1 [ 0ULL ] , & gb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t428 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t53
= gb_efOut ; tlu2_1d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t53 .
mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t425 [ 0 ] = hb_efOut [ 0
] ; t917 = pmf_exp ( pmf_log ( X [ 26ULL ] * 100000.0 ) - t425 [ 0ULL ] ) ;
if ( t917 >= 1.0 ) { t989 = ( t917 - 1.0 ) * 461.523 + t915 ; t918 = t915 / (
t989 == 0.0 ? 1.0E-16 : t989 ) ; } else { t918 = 1.0 ; } if ( X [ 176ULL ] <=
0.0 ) { intrm_sf_mf_814 = 0.0 ; } else { intrm_sf_mf_814 = X [ 176ULL ] >=
1.0 ? 1.0 : X [ 176ULL ] ; } if ( X [ 175ULL ] <= 0.0 ) { t922 = 0.0 ; } else
{ t922 = X [ 175ULL ] >= 1.0 ? 1.0 : X [ 175ULL ] ; } t923 = ( ( ( 1.0 -
intrm_sf_mf_814 ) - t922 ) * 296.802103844292 + intrm_sf_mf_814 * 461.523 ) +
t922 * 4124.48151675695 ; intrm_sf_mf_814 = X [ 176ULL ] * 461.523 / ( t923
== 0.0 ? 1.0E-16 : t923 ) ; if ( intrm_sf_mf_814 <= 0.0 ) { t922 = 0.0 ; }
else { t922 = intrm_sf_mf_814 >= 1.0 ? 1.0 : intrm_sf_mf_814 ; }
intrm_sf_mf_814 = X [ 175ULL ] * 4124.48151675695 / ( t923 == 0.0 ? 1.0E-16 :
t923 ) ; if ( intrm_sf_mf_814 <= 0.0 ) { t924 = 0.0 ; } else { t924 =
intrm_sf_mf_814 >= 1.0 ? 1.0 : intrm_sf_mf_814 ; } t429 [ 0ULL ] = X [ 173ULL
] ; tlu2_linear_nearest_prelookup ( & ib_efOut . mField0 [ 0ULL ] , &
ib_efOut . mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t429 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t54 = ib_efOut ; tlu2_1d_linear_nearest_value ( & jb_efOut
[ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = jb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & kb_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = kb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & lb_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = lb_efOut [ 0 ] ; intrm_sf_mf_814 = ( ( ( 1.0 - t922 ) - t924 )
* t540_idx_0 + t537_idx_0 * t922 ) + t538_idx_0 * t924 ;
tlu2_1d_linear_nearest_value ( & mb_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = mb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nb_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = nb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ob_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = ob_efOut [ 0 ] ; t831 = ( (
( 1.0 - intrm_sf_mf_528 ) - t902 ) * t540_idx_0 + t537_idx_0 *
intrm_sf_mf_528 ) + t538_idx_0 * t902 ; intrm_sf_mf_528 = ( - X [ 167ULL ] -
X [ 181ULL ] ) / 2.0 ; tlu2_1d_linear_nearest_value ( & pb_efOut [ 0ULL ] , &
t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 =
pb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qb_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = qb_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & rb_efOut [ 0ULL ] , & t54 . mField0 [
0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField7 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = rb_efOut [ 0 ] ;
t993 = t903 + ( ( ( ( 1.0 - t922 ) - t924 ) * t540_idx_0 + t537_idx_0 * t922
) + t538_idx_0 * t924 ) ; t995 = t993 / 2.0 * 7.8539816339744827E-5 ; t902 =
( intrm_sf_mf_528 >= 0.0 ? intrm_sf_mf_528 : 0.0 ) * 0.01 / ( t995 == 0.0 ?
1.0E-16 : t995 ) ; t922 = t902 >= 0.0 ? t902 : - t902 ; t902 = t922 > 1000.0
? t922 : 1000.0 ; intrm_sf_mf_551 = pmf_log10 ( 6.9 / ( t902 == 0.0 ? 1.0E-16
: t902 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t902 == 0.0 ?
1.0E-16 : t902 ) + 0.00017169489553429715 ) * 3.24 ; t924 = 1.0 / (
intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) ; t997 = intrm_sf_mf_814
+ t831 ; if ( ( pmf_pow ( t997 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t924 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { intrm_sf_mf_557 = (
pmf_pow ( ( intrm_sf_mf_814 + t831 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t924 / 8.0 ) * 12.7 + 1.0 ; t926 = ( t902 - 1000.0 ) * ( t924 /
8.0 ) * ( ( intrm_sf_mf_814 + t831 ) / 2.0 ) / ( intrm_sf_mf_557 == 0.0 ?
1.0E-16 : intrm_sf_mf_557 ) ; } else { t926 = ( t902 - 1000.0 ) * ( t924 /
8.0 ) * ( ( intrm_sf_mf_814 + t831 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_293 = (
t922 - 2000.0 ) / 2000.0 ; intrm_sf_mf_281 = intrm_sf_mf_293 *
intrm_sf_mf_293 * 3.0 - intrm_sf_mf_293 * intrm_sf_mf_293 * intrm_sf_mf_293 *
2.0 ; if ( t922 <= 2000.0 ) { intrm_sf_mf_293 = 3.66 ; } else if ( t922 >=
4000.0 ) { intrm_sf_mf_293 = t926 ; } else { intrm_sf_mf_293 = ( 1.0 -
intrm_sf_mf_281 ) * 3.66 + t926 * intrm_sf_mf_281 ; } t1005 = intrm_sf_mf_293
* 0.031415926535897927 ; t852 = t997 / 2.0 ; if ( t922 > t1005 /
7.8539816339744827E-5 / ( t852 == 0.0 ? 1.0E-16 : t852 ) / 30.0 ) { t1014 = (
intrm_sf_mf_814 + t831 ) / 2.0 ; t926 = intrm_sf_mf_293 *
0.031415926535897927 / ( t922 == 0.0 ? 1.0E-16 : t922 ) /
7.8539816339744827E-5 / ( t1014 == 0.0 ? 1.0E-16 : t1014 ) ; } else { t926 =
30.0 ; } if ( X [ 157ULL ] <= 0.0 ) { intrm_sf_mf_814 = 0.0 ; } else {
intrm_sf_mf_814 = X [ 157ULL ] >= 1.0 ? 1.0 : X [ 157ULL ] ; } if ( X [
156ULL ] <= 0.0 ) { intrm_sf_mf_293 = 0.0 ; } else { intrm_sf_mf_293 = X [
156ULL ] >= 1.0 ? 1.0 : X [ 156ULL ] ; } intrm_sf_mf_281 = ( ( ( 1.0 -
intrm_sf_mf_814 ) - intrm_sf_mf_293 ) * 296.802103844292 + intrm_sf_mf_814 *
461.523 ) + intrm_sf_mf_293 * 4124.48151675695 ; intrm_sf_mf_814 = X [ 157ULL
] * 461.523 / ( intrm_sf_mf_281 == 0.0 ? 1.0E-16 : intrm_sf_mf_281 ) ; if (
intrm_sf_mf_814 <= 0.0 ) { intrm_sf_mf_293 = 0.0 ; } else { intrm_sf_mf_293 =
intrm_sf_mf_814 >= 1.0 ? 1.0 : intrm_sf_mf_814 ; } intrm_sf_mf_814 = X [
156ULL ] * 4124.48151675695 / ( intrm_sf_mf_281 == 0.0 ? 1.0E-16 :
intrm_sf_mf_281 ) ; if ( intrm_sf_mf_814 <= 0.0 ) { t929 = 0.0 ; } else {
t929 = intrm_sf_mf_814 >= 1.0 ? 1.0 : intrm_sf_mf_814 ; } t539 [ 0ULL ] = X [
154ULL ] ; tlu2_linear_nearest_prelookup ( & sb_efOut . mField0 [ 0ULL ] , &
sb_efOut . mField1 [ 0ULL ] , & sb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t54 = sb_efOut ; tlu2_1d_linear_nearest_value ( & tb_efOut
[ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = tb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ub_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = ub_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vb_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = vb_efOut [ 0 ] ; intrm_sf_mf_814 = ( ( ( 1.0 - intrm_sf_mf_293
) - t929 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_293 ) + t538_idx_0 * t929
; t930 = intrm_sf_mf_528 <= 0.0 ? intrm_sf_mf_528 : 0.0 ;
tlu2_1d_linear_nearest_value ( & wb_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = wb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xb_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = xb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & yb_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = yb_efOut [ 0 ] ;
intrm_sf_mf_528 = ( ( ( 1.0 - intrm_sf_mf_293 ) - t929 ) * t540_idx_0 +
t537_idx_0 * intrm_sf_mf_293 ) + t538_idx_0 * t929 ; t1017 = t903 +
intrm_sf_mf_528 ; t1019 = t1017 / 2.0 * 7.8539816339744827E-5 ;
intrm_sf_mf_293 = - t930 * 0.01 / ( t1019 == 0.0 ? 1.0E-16 : t1019 ) ; t929 =
intrm_sf_mf_293 >= 0.0 ? intrm_sf_mf_293 : - intrm_sf_mf_293 ;
intrm_sf_mf_293 = t929 > 1000.0 ? t929 : 1000.0 ; t1020 = pmf_log10 ( 6.9 / (
intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 )
+ 0.00017169489553429715 ) * 3.24 ; t930 = 1.0 / ( t1020 == 0.0 ? 1.0E-16 :
t1020 ) ; t1021 = t831 + intrm_sf_mf_814 ; if ( ( pmf_pow ( t1021 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t930 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { intrm_sf_mf_693 = ( pmf_pow ( ( t831 + intrm_sf_mf_814 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t930 / 8.0 ) * 12.7 + 1.0 ;
intrm_sf_mf_299 = ( intrm_sf_mf_293 - 1000.0 ) * ( t930 / 8.0 ) * ( ( t831 +
intrm_sf_mf_814 ) / 2.0 ) / ( intrm_sf_mf_693 == 0.0 ? 1.0E-16 :
intrm_sf_mf_693 ) ; } else { intrm_sf_mf_299 = ( intrm_sf_mf_293 - 1000.0 ) *
( t930 / 8.0 ) * ( ( t831 + intrm_sf_mf_814 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( t929 -
2000.0 ) / 2000.0 ; t934 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ; if (
t929 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = 3.66 ; }
else if ( t929 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 =
intrm_sf_mf_299 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( 1.0 -
t934 ) * 3.66 + intrm_sf_mf_299 * t934 ; } t1029 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
0.031415926535897927 ; t852 = t1021 / 2.0 ; if ( t929 > t1029 /
7.8539816339744827E-5 / ( t852 == 0.0 ? 1.0E-16 : t852 ) / 30.0 ) { t1038 = (
t831 + intrm_sf_mf_814 ) / 2.0 ; intrm_sf_mf_299 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
0.031415926535897927 / ( t929 == 0.0 ? 1.0E-16 : t929 ) /
7.8539816339744827E-5 / ( t1038 == 0.0 ? 1.0E-16 : t1038 ) ; } else {
intrm_sf_mf_299 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
174ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t934 =
7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
7.8539816339744827E-5 >= 3.1415926535897929E-6 ) { t934 =
3.1415926535897929E-6 ; } else { t934 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
7.8539816339744827E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = t934 /
7.8539816339744827E-5 ; if ( X [ 197ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 = X [
197ULL ] >= 1.0 ? 1.0 : X [ 197ULL ] ; } if ( X [ 198ULL ] <= 0.0 ) { t939 =
0.0 ; } else { t939 = X [ 198ULL ] >= 1.0 ? 1.0 : X [ 198ULL ] ; } t940 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ) -
t939 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 * 461.523 ) +
t939 * 4124.48151675695 ; t1040 = X [ 195ULL ] * t940 ; t941 = X [ 196ULL ] /
( t1040 == 0.0 ? 1.0E-16 : t1040 ) ; t852 = X [ 196ULL ] / ( X [ 22ULL ] ==
0.0 ? 1.0E-16 : X [ 22ULL ] ) * ( X [ 199ULL ] / ( X [ 195ULL ] == 0.0 ?
1.0E-16 : X [ 195ULL ] ) ) ; t944 = X [ 196ULL ] / ( X [ 174ULL ] == 0.0 ?
1.0E-16 : X [ 174ULL ] ) * ( X [ 200ULL ] / ( X [ 195ULL ] == 0.0 ? 1.0E-16 :
X [ 195ULL ] ) ) ; t947 = ( X [ 22ULL ] + X [ 174ULL ] ) / 2.0 *
0.0010000000000000009 ; t946 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) ; t948 =
t947 * t946 ; t949 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t852
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
t944 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 *
2.0 ; t950 = ( X [ 22ULL ] - X [ 174ULL ] ) * ( t949 >= t946 ? t949 : t946 )
; t949 = ( X [ 22ULL ] - X [ 174ULL ] ) / ( t947 == 0.0 ? 1.0E-16 : t947 ) ;
t952 = t949 * t949 * 3.0 - t949 * t949 * t949 * 2.0 ; if ( X [ 22ULL ] - X [
174ULL ] <= 0.0 ) { t949 = t948 ; } else if ( X [ 22ULL ] - X [ 174ULL ] >=
t947 ) { t949 = t950 ; } else { t949 = ( 1.0 - t952 ) * t948 + t950 * t952 ;
} t950 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 +
1.0 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t944 ) - (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t852
) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = ( X [
174ULL ] - X [ 22ULL ] ) * ( t950 >= t946 ? t950 : t946 ) ; t852 = ( X [
174ULL ] - X [ 22ULL ] ) / ( t947 == 0.0 ? 1.0E-16 : t947 ) ; t944 = t852 *
t852 * 3.0 - t852 * t852 * t852 * 2.0 ; if ( X [ 174ULL ] - X [ 22ULL ] <=
0.0 ) { t852 = t948 ; } else if ( X [ 174ULL ] - X [ 22ULL ] >= t947 ) { t852
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ; } else {
t852 = ( 1.0 - t944 ) * t948 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 * t944 ; } if
( X [ 22ULL ] > X [ 174ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = t949 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 = X [
22ULL ] < X [ 174ULL ] ? t852 : t948 ; } if ( X [ 195ULL ] <=
216.59999999999997 ) { t852 = 216.59999999999997 ; } else { t852 = X [ 195ULL
] >= 623.15 ? 623.15 : X [ 195ULL ] ; } t831 = t852 * t852 ; t944 = ( ( (
1074.1165326382641 + t852 * - 0.2214565261064495 ) + t831 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ) - t939 ) +
( ( 1479.6504774711011 + t852 * 1.2002114337048222 ) + t831 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ) + ( (
12825.281119789837 + t852 * 6.9647057412840034 ) + t831 * -
0.0070524868246844051 ) * t939 ; t1052 = t944 - t940 ; t1053 = X [ 196ULL ] *
X [ 196ULL ] * ( t944 / ( t1052 == 0.0 ? 1.0E-16 : t1052 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 = pmf_sqrt (
fabs ( t1053 / ( t940 == 0.0 ? 1.0E-16 : t940 ) / ( X [ 195ULL ] == 0.0 ?
1.0E-16 : X [ 195ULL ] ) ) ) * t934 * 0.64 ; if ( X [ 213ULL ] <= 0.0 ) {
t939 = 0.0 ; } else { t939 = X [ 213ULL ] >= 1.0 ? 1.0 : X [ 213ULL ] ; } if
( X [ 214ULL ] <= 0.0 ) { t946 = 0.0 ; } else { t946 = X [ 214ULL ] >= 1.0 ?
1.0 : X [ 214ULL ] ; } t948 = ( ( ( 1.0 - t939 ) - t946 ) * 296.802103844292
+ t939 * 461.523 ) + t946 * 259.836612622973 ; if ( X [ 32ULL ] <= 0.0 ) {
t939 = 0.0 ; } else { t939 = X [ 32ULL ] >= 1.0 ? 1.0 : X [ 32ULL ] ; } if (
X [ 31ULL ] <= 0.0 ) { t946 = 0.0 ; } else { t946 = X [ 31ULL ] >= 1.0 ? 1.0
: X [ 31ULL ] ; } t949 = ( ( ( 1.0 - t939 ) - t946 ) * 296.802103844292 +
t939 * 461.523 ) + t946 * 259.836612622973 ; if ( 1.0 - X [ 32ULL ] >= 0.01 )
{ t939 = 1.0 - X [ 32ULL ] ; } else if ( 1.0 - X [ 32ULL ] >= - 0.1 ) { t939
= pmf_exp ( ( ( 1.0 - X [ 32ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t939
= 1.6701700790245661E-7 ; } t946 = X [ 31ULL ] / ( t939 == 0.0 ? 1.0E-16 :
t939 ) * - 36.965491221318985 + 296.802103844292 ; t539 [ 0ULL ] = X [ 30ULL
] ; tlu2_linear_linear_prelookup ( & ac_efOut . mField0 [ 0ULL ] , & ac_efOut
. mField1 [ 0ULL ] , & ac_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ;
t53 = ac_efOut ; tlu2_1d_linear_linear_value ( & bc_efOut [ 0ULL ] , & t53 .
mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t424 [ 0 ] = bc_efOut [ 0
] ; t950 = pmf_exp ( pmf_log ( X [ 29ULL ] * 100000.0 ) - t424 [ 0ULL ] ) ;
if ( t950 >= 1.0 ) { intrm_sf_mf_755 = ( t950 - 1.0 ) * 461.523 + t946 ; t952
= t946 / ( intrm_sf_mf_755 == 0.0 ? 1.0E-16 : intrm_sf_mf_755 ) ; } else {
t952 = 1.0 ; } if ( X [ 218ULL ] <= 0.0 ) { t831 = 0.0 ; } else { t831 = X [
218ULL ] >= 1.0 ? 1.0 : X [ 218ULL ] ; } if ( X [ 217ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 217ULL ] >=
1.0 ? 1.0 : X [ 217ULL ] ; } t958 = ( ( ( 1.0 - t831 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) *
296.802103844292 + t831 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * 259.836612622973
; if ( X [ 35ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = X [ 35ULL ] >=
1.0 ? 1.0 : X [ 35ULL ] ; } if ( X [ 34ULL ] <= 0.0 ) { t961 = 0.0 ; } else {
t961 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } t962 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t961 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI
* 461.523 ) + t961 * 4124.48151675695 ; t963 = - ( ( X [ 33ULL ] / ( X [
36ULL ] == 0.0 ? 1.0E-16 : X [ 36ULL ] ) - X [ 256ULL ] / ( X [ 257ULL ] ==
0.0 ? 1.0E-16 : X [ 257ULL ] ) ) * X [ 181ULL ] * t962 ) /
0.0019634954084936209 ; if ( X [ 256ULL ] <= 216.59999999999997 ) { t852 =
216.59999999999997 ; } else { t852 = X [ 256ULL ] >= 623.15 ? 623.15 : X [
256ULL ] ; } t966 = t852 * t852 ; t965 = ( ( ( 1074.1165326382641 + t852 * -
0.2214565261064495 ) + t966 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t961 ) + ( (
1479.6504774711011 + t852 * 1.2002114337048222 ) + t966 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t852 * 6.9647057412840034 ) + t966 * -
0.0070524868246844051 ) * t961 ; t1067 = t965 - t962 ; t966 = t965 / ( t1067
== 0.0 ? 1.0E-16 : t1067 ) ; t967 = pmf_sqrt ( t963 * t963 *
9.999999999999999E-14 + fabs ( X [ 256ULL ] * t966 * t962 ) * 1.0E-9 ) ; if (
X [ 254ULL ] <= 0.0 ) { t968 = 0.0 ; } else { t968 = X [ 254ULL ] >= 1.0 ?
1.0 : X [ 254ULL ] ; } if ( X [ 253ULL ] <= 0.0 ) { t972 = 0.0 ; } else {
t972 = X [ 253ULL ] >= 1.0 ? 1.0 : X [ 253ULL ] ; } t539 [ 0ULL ] = X [ 33ULL
] ; tlu2_linear_nearest_prelookup ( & cc_efOut . mField0 [ 0ULL ] , &
cc_efOut . mField1 [ 0ULL ] , & cc_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t37 = cc_efOut ; tlu2_1d_linear_nearest_value ( & dc_efOut
[ 0ULL ] , & t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = dc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ec_efOut [
0ULL ] , & t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = ec_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & fc_efOut [
0ULL ] , & t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = fc_efOut [ 0 ] ; t973 = ( ( ( 1.0 - t968 ) - t972 ) *
t540_idx_0 + t537_idx_0 * t968 ) + t538_idx_0 * t972 ; t1068 = X [ 257ULL ] *
X [ 257ULL ] * t966 ; t974 = - pmf_sqrt ( fabs ( t1068 / ( t962 == 0.0 ?
1.0E-16 : t962 ) / ( X [ 256ULL ] == 0.0 ? 1.0E-16 : X [ 256ULL ] ) ) ) *
0.0019634954084936209 ; if ( t974 >= 0.0 ) { t976 = t974 * 100000.0 ; } else
{ t976 = - t974 * 100000.0 ; } t1072 = t973 * 0.0019634954084936209 ; t831 =
t976 * 0.05 / ( t1072 == 0.0 ? 1.0E-16 : t1072 ) ; t1074 = X [ 33ULL ] * t962
; t980 = X [ 36ULL ] / ( t1074 == 0.0 ? 1.0E-16 : t1074 ) ; t1076 = t980 *
9.8174770424681068E-6 ; intrm_sf_mf_498 = t974 * t973 * 11.2 / ( t1076 == 0.0
? 1.0E-16 : t1076 ) ; t983 = t831 >= 1.0 ? t831 : 1.0 ; intrm_sf_mf_798 =
pmf_log10 ( 6.9 / ( t983 == 0.0 ? 1.0E-16 : t983 ) + 2.8767404433520813E-5 )
* pmf_log10 ( 6.9 / ( t983 == 0.0 ? 1.0E-16 : t983 ) + 2.8767404433520813E-5
) * 3.24 ; t1079 = t980 * 3.855314219175531E-7 ; t976 = t974 * t976 * ( 1.0 /
( intrm_sf_mf_798 == 0.0 ? 1.0E-16 : intrm_sf_mf_798 ) ) * 0.175 / ( t1079 ==
0.0 ? 1.0E-16 : t1079 ) ; t985 = ( t831 - 2000.0 ) / 2000.0 ; t852 = t985 *
t985 * 3.0 - t985 * t985 * t985 * 2.0 ; if ( t831 <= 2000.0 ) { t985 =
intrm_sf_mf_498 * 1.0E-5 ; } else if ( t831 >= 4000.0 ) { t985 = t976 *
1.0E-5 ; } else { t985 = ( ( 1.0 - t852 ) * intrm_sf_mf_498 + t976 * t852 ) *
1.0E-5 ; } t967 = - ( X [ 181ULL ] * t967 ) / 0.0019634954084936209 *
0.00031622776601683789 + t985 ; t976 = ( X [ 33ULL ] / ( X [ 36ULL ] == 0.0 ?
1.0E-16 : X [ 36ULL ] ) - X [ 259ULL ] / ( X [ 260ULL ] == 0.0 ? 1.0E-16 : X
[ 260ULL ] ) ) * X [ 258ULL ] * t962 / 0.0019634954084936209 ; if ( X [
259ULL ] <= 216.59999999999997 ) { t831 = 216.59999999999997 ; } else { t831
= X [ 259ULL ] >= 623.15 ? 623.15 : X [ 259ULL ] ; } t789 = t831 * t831 ;
intrm_sf_mf_498 = ( ( ( 1074.1165326382641 + t831 * - 0.2214565261064495 ) +
t789 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) - t961 ) + ( (
1479.6504774711011 + t831 * 1.2002114337048222 ) + t789 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t831 * 6.9647057412840034 ) + t789 * -
0.0070524868246844051 ) * t961 ; t1087 = intrm_sf_mf_498 - t962 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI = intrm_sf_mf_498
/ ( t1087 == 0.0 ? 1.0E-16 : t1087 ) ; t961 = pmf_sqrt ( t976 * t976 *
9.999999999999999E-14 + fabs ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) * 1.0E-9
) ; t1088 = X [ 260ULL ] * X [ 260ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI ; t985 = -
pmf_sqrt ( fabs ( t1088 / ( t962 == 0.0 ? 1.0E-16 : t962 ) / ( X [ 259ULL ]
== 0.0 ? 1.0E-16 : X [ 259ULL ] ) ) ) * 0.0019634954084936209 ; if ( t985 >=
0.0 ) { t852 = t985 * 100000.0 ; } else { t852 = - t985 * 100000.0 ; } t789 =
t852 * 0.05 / ( t1072 == 0.0 ? 1.0E-16 : t1072 ) ; t988 = t985 * t973 * 11.2
/ ( t1076 == 0.0 ? 1.0E-16 : t1076 ) ; t989 = t789 >= 1.0 ? t789 : 1.0 ;
t1095 = pmf_log10 ( 6.9 / ( t989 == 0.0 ? 1.0E-16 : t989 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t989 == 0.0 ? 1.0E-16 : t989 )
+ 2.8767404433520813E-5 ) * 3.24 ; t852 = t985 * t852 * ( 1.0 / ( t1095 ==
0.0 ? 1.0E-16 : t1095 ) ) * 0.175 / ( t1079 == 0.0 ? 1.0E-16 : t1079 ) ; t990
= ( t789 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I = t990 * t990 * 3.0
- t990 * t990 * t990 * 2.0 ; if ( t789 <= 2000.0 ) { t990 = t988 * 1.0E-5 ; }
else if ( t789 >= 4000.0 ) { t990 = t852 * 1.0E-5 ; } else { t990 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I ) * t988 + t852 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I ) * 1.0E-5 ; } t961
= X [ 258ULL ] * t961 / 0.0019634954084936209 * 0.00031622776601683789 + t990
; if ( 1.0 - X [ 35ULL ] >= 0.01 ) { t789 = 1.0 - X [ 35ULL ] ; } else if (
1.0 - X [ 35ULL ] >= - 0.1 ) { t789 = pmf_exp ( ( ( 1.0 - X [ 35ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t789 = 1.6701700790245661E-7 ; } t988 = X [
34ULL ] / ( t789 == 0.0 ? 1.0E-16 : t789 ) * 3827.6794129126583 +
296.802103844292 ; t539 [ 0ULL ] = X [ 33ULL ] ; tlu2_linear_linear_prelookup
( & gc_efOut . mField0 [ 0ULL ] , & gc_efOut . mField1 [ 0ULL ] , & gc_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [
0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t53 = gc_efOut ;
tlu2_1d_linear_linear_value ( & hc_efOut [ 0ULL ] , & t53 . mField0 [ 0ULL ]
, & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t429 [ 0 ] = hc_efOut [ 0 ] ; t990 =
pmf_exp ( pmf_log ( X [ 36ULL ] * 100000.0 ) - t429 [ 0ULL ] ) ; if ( t990 >=
1.0 ) { t1102 = ( t990 - 1.0 ) * 461.523 + t988 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I = t988 / ( t1102 ==
0.0 ? 1.0E-16 : t1102 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I = 1.0 ; }
tlu2_1d_linear_nearest_value ( & ic_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = ic_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jc_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = jc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kc_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = kc_efOut [ 0 ] ; t831 = ( (
( 1.0 - t968 ) - t972 ) * t540_idx_0 + t537_idx_0 * t968 ) + t538_idx_0 *
t972 ; t968 = ( - X [ 181ULL ] - X [ 258ULL ] ) / 2.0 ; t1104 =
intrm_sf_mf_528 + t973 ; t1106 = t1104 / 2.0 * 0.0019634954084936209 ;
intrm_sf_mf_528 = ( t968 >= 0.0 ? t968 : 0.0 ) * 0.05 / ( t1106 == 0.0 ?
1.0E-16 : t1106 ) ; t972 = intrm_sf_mf_528 >= 0.0 ? intrm_sf_mf_528 : -
intrm_sf_mf_528 ; intrm_sf_mf_528 = t972 > 1000.0 ? t972 : 1000.0 ; t1107 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_528 == 0.0 ? 1.0E-16 : intrm_sf_mf_528 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_528 == 0.0 ?
1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5 ) * 3.24 ; t994 = 1.0 / (
t1107 == 0.0 ? 1.0E-16 : t1107 ) ; t1108 = intrm_sf_mf_814 + t831 ; if ( (
pmf_pow ( t1108 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t994 / 8.0
) * 12.7 + 1.0 >= 1.0E-6 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = ( pmf_pow (
( intrm_sf_mf_814 + t831 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t994 / 8.0 ) * 12.7 + 1.0 ; t995 = ( intrm_sf_mf_528 - 1000.0 ) * ( t994 /
8.0 ) * ( ( intrm_sf_mf_814 + t831 ) / 2.0 ) / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) ;
} else { t995 = ( intrm_sf_mf_528 - 1000.0 ) * ( t994 / 8.0 ) * ( (
intrm_sf_mf_814 + t831 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_551 = ( t972 -
2000.0 ) / 2000.0 ; t998 = intrm_sf_mf_551 * intrm_sf_mf_551 * 3.0 -
intrm_sf_mf_551 * intrm_sf_mf_551 * intrm_sf_mf_551 * 2.0 ; if ( t972 <=
2000.0 ) { intrm_sf_mf_551 = 3.66 ; } else if ( t972 >= 4000.0 ) {
intrm_sf_mf_551 = t995 ; } else { intrm_sf_mf_551 = ( 1.0 - t998 ) * 3.66 +
t995 * t998 ; } t1116 = intrm_sf_mf_551 * 0.039269908169872414 ;
intrm_sf_mf_931 = t1108 / 2.0 ; if ( t972 > t1116 / 0.0019634954084936209 / (
intrm_sf_mf_931 == 0.0 ? 1.0E-16 : intrm_sf_mf_931 ) / 30.0 ) { t1125 = (
intrm_sf_mf_814 + t831 ) / 2.0 ; t995 = intrm_sf_mf_551 *
0.039269908169872414 / ( t972 == 0.0 ? 1.0E-16 : t972 ) /
0.0019634954084936209 / ( t1125 == 0.0 ? 1.0E-16 : t1125 ) ; } else { t995 =
30.0 ; } if ( X [ 248ULL ] <= 0.0 ) { intrm_sf_mf_814 = 0.0 ; } else {
intrm_sf_mf_814 = X [ 248ULL ] >= 1.0 ? 1.0 : X [ 248ULL ] ; } if ( X [
247ULL ] <= 0.0 ) { intrm_sf_mf_551 = 0.0 ; } else { intrm_sf_mf_551 = X [
247ULL ] >= 1.0 ? 1.0 : X [ 247ULL ] ; } t998 = ( ( ( 1.0 - intrm_sf_mf_814 )
- intrm_sf_mf_551 ) * 296.802103844292 + intrm_sf_mf_814 * 461.523 ) +
intrm_sf_mf_551 * 4124.48151675695 ; intrm_sf_mf_814 = X [ 248ULL ] * 461.523
/ ( t998 == 0.0 ? 1.0E-16 : t998 ) ; if ( intrm_sf_mf_814 <= 0.0 ) {
intrm_sf_mf_551 = 0.0 ; } else { intrm_sf_mf_551 = intrm_sf_mf_814 >= 1.0 ?
1.0 : intrm_sf_mf_814 ; } intrm_sf_mf_814 = X [ 247ULL ] * 4124.48151675695 /
( t998 == 0.0 ? 1.0E-16 : t998 ) ; if ( intrm_sf_mf_814 <= 0.0 ) { t999 = 0.0
; } else { t999 = intrm_sf_mf_814 >= 1.0 ? 1.0 : intrm_sf_mf_814 ; } t539 [
0ULL ] = X [ 245ULL ] ; tlu2_linear_nearest_prelookup ( & lc_efOut . mField0
[ 0ULL ] , & lc_efOut . mField1 [ 0ULL ] , & lc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ]
, & t63 [ 0ULL ] ) ; t54 = lc_efOut ; tlu2_1d_linear_nearest_value ( &
mc_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = mc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & nc_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = nc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & oc_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = oc_efOut [ 0 ] ; intrm_sf_mf_814 = ( ( ( 1.0 - intrm_sf_mf_551
) - t999 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_551 ) + t538_idx_0 * t999
; t1000 = t968 <= 0.0 ? t968 : 0.0 ; tlu2_1d_linear_nearest_value ( &
pc_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = pc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qc_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = qc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rc_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = rc_efOut [ 0 ] ; t968 = ( ( ( 1.0 - intrm_sf_mf_551 ) - t999 )
* t540_idx_0 + t537_idx_0 * intrm_sf_mf_551 ) + t538_idx_0 * t999 ; t1128 =
t973 + t968 ; t1130 = t1128 / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_551 =
- t1000 * 0.05 / ( t1130 == 0.0 ? 1.0E-16 : t1130 ) ; t999 = intrm_sf_mf_551
>= 0.0 ? intrm_sf_mf_551 : - intrm_sf_mf_551 ; intrm_sf_mf_551 = t999 >
1000.0 ? t999 : 1000.0 ; t1131 = pmf_log10 ( 6.9 / ( intrm_sf_mf_551 == 0.0 ?
1.0E-16 : intrm_sf_mf_551 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) + 2.8767404433520813E-5
) * 3.24 ; t1000 = 1.0 / ( t1131 == 0.0 ? 1.0E-16 : t1131 ) ; t1132 = t831 +
intrm_sf_mf_814 ; if ( ( pmf_pow ( t1132 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1000 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1136 = ( pmf_pow ( (
t831 + intrm_sf_mf_814 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1000 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_557 = ( intrm_sf_mf_551 - 1000.0 ) *
( t1000 / 8.0 ) * ( ( t831 + intrm_sf_mf_814 ) / 2.0 ) / ( t1136 == 0.0 ?
1.0E-16 : t1136 ) ; } else { intrm_sf_mf_557 = ( intrm_sf_mf_551 - 1000.0 ) *
( t1000 / 8.0 ) * ( ( t831 + intrm_sf_mf_814 ) / 2.0 ) / 1.0E-6 ; } t1002 = (
t999 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = t1002 *
t1002 * 3.0 - t1002 * t1002 * t1002 * 2.0 ; if ( t999 <= 2000.0 ) { t1002 =
3.66 ; } else if ( t999 >= 4000.0 ) { t1002 = intrm_sf_mf_557 ; } else {
t1002 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) * 3.66 +
intrm_sf_mf_557 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ; } t1140 =
t1002 * 0.039269908169872414 ; t1143 = t1132 / 2.0 ; if ( t999 > t1140 /
0.0019634954084936209 / ( t1143 == 0.0 ? 1.0E-16 : t1143 ) / 30.0 ) { t831 =
( t831 + intrm_sf_mf_814 ) / 2.0 ; intrm_sf_mf_557 = t1002 *
0.039269908169872414 / ( t999 == 0.0 ? 1.0E-16 : t999 ) /
0.0019634954084936209 / ( t831 == 0.0 ? 1.0E-16 : t831 ) ; } else {
intrm_sf_mf_557 = 30.0 ; } if ( X [ 6ULL ] <= 0.0 ) { t1002 = 0.0 ; } else {
t1002 = X [ 6ULL ] >= 1.0 ? 1.0 : X [ 6ULL ] ; } if ( X [ 5ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = X [ 5ULL ]
>= 1.0 ? 1.0 : X [ 5ULL ] ; } t1004 = ( ( ( 1.0 - t1002 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) *
296.802103844292 + t1002 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked *
4124.48151675695 ; t1007 = - ( ( X [ 4ULL ] / ( X [ 37ULL ] == 0.0 ? 1.0E-16
: X [ 37ULL ] ) - X [ 270ULL ] / ( X [ 271ULL ] == 0.0 ? 1.0E-16 : X [ 271ULL
] ) ) * X [ 258ULL ] * t1004 ) / 0.32 ; if ( X [ 270ULL ] <=
216.59999999999997 ) { t852 = 216.59999999999997 ; } else { t852 = X [ 270ULL
] >= 623.15 ? 623.15 : X [ 270ULL ] ; } t792 = t852 * t852 ; t1009 = ( ( (
1074.1165326382641 + t852 * - 0.2214565261064495 ) + t792 *
0.00037212980109014541 ) * ( ( 1.0 - t1002 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774711011 + t852 * 1.2002114337048222 ) + t792 * -
0.00038614513167823636 ) * t1002 ) + ( ( 12825.281119789837 + t852 *
6.9647057412840034 ) + t792 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ; t1155 =
t1009 - t1004 ; t792 = t1009 / ( t1155 == 0.0 ? 1.0E-16 : t1155 ) ; t1011 =
pmf_sqrt ( t1007 * t1007 * 9.999999999999999E-14 + fabs ( X [ 270ULL ] * t792
* t1004 ) * 1.0E-9 ) ; if ( X [ 71ULL ] <= 0.0 ) { t1012 = 0.0 ; } else {
t1012 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL ] <= 0.0 )
{ t1013 = 0.0 ; } else { t1013 = X [ 70ULL ] >= 1.0 ? 1.0 : X [ 70ULL ] ; }
t539 [ 0ULL ] = X [ 4ULL ] ; tlu2_linear_nearest_prelookup ( & sc_efOut .
mField0 [ 0ULL ] , & sc_efOut . mField1 [ 0ULL ] , & sc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t53 = sc_efOut ;
tlu2_1d_linear_nearest_value ( & tc_efOut [ 0ULL ] , & t53 . mField0 [ 0ULL ]
, & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = tc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & uc_efOut [ 0ULL ] , & t53 . mField0 [ 0ULL ]
, & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = uc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vc_efOut [ 0ULL ] , & t53 . mField0 [ 0ULL ]
, & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = vc_efOut [ 0 ] ; t1014 = ( ( (
1.0 - t1012 ) - t1013 ) * t540_idx_0 + t537_idx_0 * t1012 ) + t538_idx_0 *
t1013 ; t1156 = X [ 271ULL ] * X [ 271ULL ] * t792 ; t1015 = - pmf_sqrt (
fabs ( t1156 / ( t1004 == 0.0 ? 1.0E-16 : t1004 ) / ( X [ 270ULL ] == 0.0 ?
1.0E-16 : X [ 270ULL ] ) ) ) * 0.32 ; if ( t1015 >= 0.0 ) { t1016 = t1015 *
100000.0 ; } else { t1016 = - t1015 * 100000.0 ; } t1160 = t1014 * 0.32 ;
t831 = t1016 * 0.01 / ( t1160 == 0.0 ? 1.0E-16 : t1160 ) ; t1162 = X [ 4ULL ]
* t1004 ; t1019 = X [ 37ULL ] / ( t1162 == 0.0 ? 1.0E-16 : t1162 ) ; U_idx_2
= t1019 * 6.4000000000000011E-5 ; t1020 = t1015 * t1014 * 2.9973120849090416
/ ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t1022 = t831 >= 1.0 ? t831 : 1.0 ;
intrm_sf_mf_1395 = pmf_log10 ( 6.9 / ( t1022 == 0.0 ? 1.0E-16 : t1022 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1022 == 0.0 ? 1.0E-16 : t1022
) + 0.00017169489553429715 ) * 3.24 ; t1167 = t1019 * 0.0020480000000000003 ;
t1016 = t1015 * t1016 * ( 1.0 / ( intrm_sf_mf_1395 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1395 ) ) * 0.046833001326703774 / ( t1167 == 0.0 ? 1.0E-16 :
t1167 ) ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked = (
t831 - 2000.0 ) / 2000.0 ; t852 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked * 2.0 ; if (
t831 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked = t1020 *
1.0E-5 ; } else if ( t831 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked = t1016 *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked = ( ( 1.0 -
t852 ) * t1020 + t1016 * t852 ) * 1.0E-5 ; } t1011 = - ( X [ 258ULL ] * t1011
) / 0.32 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked ; t1016 = ( X
[ 4ULL ] / ( X [ 37ULL ] == 0.0 ? 1.0E-16 : X [ 37ULL ] ) - X [ 273ULL ] / (
X [ 274ULL ] == 0.0 ? 1.0E-16 : X [ 274ULL ] ) ) * X [ 272ULL ] * t1004 /
0.32 ; if ( X [ 273ULL ] <= 216.59999999999997 ) { t831 = 216.59999999999997
; } else { t831 = X [ 273ULL ] >= 623.15 ? 623.15 : X [ 273ULL ] ; }
intrm_sf_mf_693 = t831 * t831 ; t1020 = ( ( ( 1074.1165326382641 + t831 * -
0.2214565261064495 ) + intrm_sf_mf_693 * 0.00037212980109014541 ) * ( ( 1.0 -
t1002 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) +
( ( 1479.6504774711011 + t831 * 1.2002114337048222 ) + intrm_sf_mf_693 * -
0.00038614513167823636 ) * t1002 ) + ( ( 12825.281119789837 + t831 *
6.9647057412840034 ) + intrm_sf_mf_693 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t1020 -
t1004 ; t1002 = t1020 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = pmf_sqrt (
t1016 * t1016 * 9.999999999999999E-14 + fabs ( X [ 273ULL ] * t1002 * t1004 )
* 1.0E-9 ) ; t1176 = X [ 274ULL ] * X [ 274ULL ] * t1002 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked = - pmf_sqrt
( fabs ( t1176 / ( t1004 == 0.0 ? 1.0E-16 : t1004 ) / ( X [ 273ULL ] == 0.0 ?
1.0E-16 : X [ 273ULL ] ) ) ) * 0.32 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked >= 0.0 ) {
t852 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked *
100000.0 ; } else { t852 = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked * 100000.0 ;
} intrm_sf_mf_693 = t852 * 0.01 / ( t1160 == 0.0 ? 1.0E-16 : t1160 ) ; t1026
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked * t1014 *
2.9973120849090416 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t1027 =
intrm_sf_mf_693 >= 1.0 ? intrm_sf_mf_693 : 1.0 ; t1183 = pmf_log10 ( 6.9 / (
t1027 == 0.0 ? 1.0E-16 : t1027 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t1027 == 0.0 ? 1.0E-16 : t1027 ) + 0.00017169489553429715 ) * 3.24 ; t852
= Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked * t852 * (
1.0 / ( t1183 == 0.0 ? 1.0E-16 : t1183 ) ) * 0.046833001326703774 / ( t1167
== 0.0 ? 1.0E-16 : t1167 ) ; t1028 = ( intrm_sf_mf_693 - 2000.0 ) / 2000.0 ;
t1031 = t1028 * t1028 * 3.0 - t1028 * t1028 * t1028 * 2.0 ; if (
intrm_sf_mf_693 <= 2000.0 ) { t1028 = t1026 * 1.0E-5 ; } else if (
intrm_sf_mf_693 >= 4000.0 ) { t1028 = t852 * 1.0E-5 ; } else { t1028 = ( (
1.0 - t1031 ) * t1026 + t852 * t1031 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = X [ 272ULL ]
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked / 0.32 *
0.00031622776601683789 + t1028 ; if ( 1.0 - X [ 6ULL ] >= 0.01 ) {
intrm_sf_mf_693 = 1.0 - X [ 6ULL ] ; } else if ( 1.0 - X [ 6ULL ] >= - 0.1 )
{ intrm_sf_mf_693 = pmf_exp ( ( ( 1.0 - X [ 6ULL ] ) - 0.01 ) / 0.01 ) * 0.01
; } else { intrm_sf_mf_693 = 1.6701700790245661E-7 ; } t1026 = X [ 5ULL ] / (
intrm_sf_mf_693 == 0.0 ? 1.0E-16 : intrm_sf_mf_693 ) * 3827.6794129126583 +
296.802103844292 ; t539 [ 0ULL ] = X [ 4ULL ] ; tlu2_linear_linear_prelookup
( & wc_efOut . mField0 [ 0ULL ] , & wc_efOut . mField1 [ 0ULL ] , & wc_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [
0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t46 = wc_efOut ;
tlu2_1d_linear_linear_value ( & xc_efOut [ 0ULL ] , & t46 . mField0 [ 0ULL ]
, & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t121 [ 0 ] = xc_efOut [ 0 ] ; t1028 =
pmf_exp ( pmf_log ( X [ 37ULL ] * 100000.0 ) - t121 [ 0ULL ] ) ; if ( t1028
>= 1.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI = (
t1028 - 1.0 ) * 461.523 + t1026 ; t1031 = t1026 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI ) ;
} else { t1031 = 1.0 ; } tlu2_1d_linear_nearest_value ( & yc_efOut [ 0ULL ] ,
& t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 =
yc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ad_efOut [ 0ULL ] , & t53 .
mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = ad_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & bd_efOut [ 0ULL ] , & t53 . mField0 [
0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = bd_efOut [ 0 ] ;
t852 = ( ( ( 1.0 - t1012 ) - t1013 ) * t540_idx_0 + t537_idx_0 * t1012 ) +
t538_idx_0 * t1013 ; t1012 = ( - X [ 258ULL ] - X [ 272ULL ] ) / 2.0 ; t1192
= t968 + t1014 ; t1194 = t1192 / 2.0 * 0.32 ; t968 = ( t1012 >= 0.0 ? t1012 :
0.0 ) * 0.01 / ( t1194 == 0.0 ? 1.0E-16 : t1194 ) ; t1013 = t968 >= 0.0 ?
t968 : - t968 ; t968 = t1013 > 1000.0 ? t1013 : 1000.0 ; t1195 = pmf_log10 (
6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00017169489553429715 ) * pmf_log10
( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00017169489553429715 ) * 3.24 ;
t1033 = 1.0 / ( t1195 == 0.0 ? 1.0E-16 : t1195 ) ; t1196 = intrm_sf_mf_814 +
t852 ; if ( ( pmf_pow ( t1196 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1033 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1200 = ( pmf_pow ( (
intrm_sf_mf_814 + t852 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1033 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_666 = ( t968 - 1000.0 ) * ( t1033 /
8.0 ) * ( ( intrm_sf_mf_814 + t852 ) / 2.0 ) / ( t1200 == 0.0 ? 1.0E-16 :
t1200 ) ; } else { intrm_sf_mf_666 = ( t968 - 1000.0 ) * ( t1033 / 8.0 ) * (
( intrm_sf_mf_814 + t852 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_681 = ( t1013 -
2000.0 ) / 2000.0 ; t1036 = intrm_sf_mf_681 * intrm_sf_mf_681 * 3.0 -
intrm_sf_mf_681 * intrm_sf_mf_681 * intrm_sf_mf_681 * 2.0 ; if ( t1013 <=
2000.0 ) { intrm_sf_mf_681 = 3.66 ; } else if ( t1013 >= 4000.0 ) {
intrm_sf_mf_681 = intrm_sf_mf_666 ; } else { intrm_sf_mf_681 = ( 1.0 - t1036
) * 3.66 + intrm_sf_mf_666 * t1036 ; } t1204 = intrm_sf_mf_681 *
10.709248339636167 ; t1207 = t1196 / 2.0 ; if ( t1013 > t1204 / 0.32 / (
t1207 == 0.0 ? 1.0E-16 : t1207 ) / 30.0 ) { t1213 = ( intrm_sf_mf_814 + t852
) / 2.0 ; intrm_sf_mf_666 = intrm_sf_mf_681 * 10.709248339636167 / ( t1013 ==
0.0 ? 1.0E-16 : t1013 ) / 0.32 / ( t1213 == 0.0 ? 1.0E-16 : t1213 ) ; } else
{ intrm_sf_mf_666 = 30.0 ; } if ( X [ 62ULL ] <= 0.0 ) { intrm_sf_mf_814 =
0.0 ; } else { intrm_sf_mf_814 = X [ 62ULL ] >= 1.0 ? 1.0 : X [ 62ULL ] ; }
if ( X [ 61ULL ] <= 0.0 ) { intrm_sf_mf_681 = 0.0 ; } else { intrm_sf_mf_681
= X [ 61ULL ] >= 1.0 ? 1.0 : X [ 61ULL ] ; } t1036 = ( ( ( 1.0 -
intrm_sf_mf_814 ) - intrm_sf_mf_681 ) * 296.802103844292 + intrm_sf_mf_814 *
461.523 ) + intrm_sf_mf_681 * 4124.48151675695 ; intrm_sf_mf_814 = X [ 62ULL
] * 461.523 / ( t1036 == 0.0 ? 1.0E-16 : t1036 ) ; if ( intrm_sf_mf_814 <=
0.0 ) { intrm_sf_mf_681 = 0.0 ; } else { intrm_sf_mf_681 = intrm_sf_mf_814 >=
1.0 ? 1.0 : intrm_sf_mf_814 ; } intrm_sf_mf_814 = X [ 61ULL ] *
4124.48151675695 / ( t1036 == 0.0 ? 1.0E-16 : t1036 ) ; if ( intrm_sf_mf_814
<= 0.0 ) { t1037 = 0.0 ; } else { t1037 = intrm_sf_mf_814 >= 1.0 ? 1.0 :
intrm_sf_mf_814 ; } t539 [ 0ULL ] = X [ 59ULL ] ;
tlu2_linear_nearest_prelookup ( & cd_efOut . mField0 [ 0ULL ] , & cd_efOut .
mField1 [ 0ULL ] , & cd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t54
= cd_efOut ; tlu2_1d_linear_nearest_value ( & dd_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = dd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ed_efOut [ 0ULL ] , & t54 . mField0 [
0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = ed_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fd_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = fd_efOut [ 0 ] ;
intrm_sf_mf_814 = ( ( ( 1.0 - intrm_sf_mf_681 ) - t1037 ) * t540_idx_0 +
t537_idx_0 * intrm_sf_mf_681 ) + t538_idx_0 * t1037 ; t1038 = t1012 <= 0.0 ?
t1012 : 0.0 ; tlu2_1d_linear_nearest_value ( & gd_efOut [ 0ULL ] , & t54 .
mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = gd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & hd_efOut [ 0ULL ] , & t54 . mField0 [
0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = hd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & id_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = id_efOut [ 0 ] ; t1012 = ( ( (
1.0 - intrm_sf_mf_681 ) - t1037 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_681
) + t538_idx_0 * t1037 ; t1216 = t1014 + t1012 ; intrm_sf_mf_1247 = t1216 /
2.0 * 0.32 ; intrm_sf_mf_681 = - t1038 * 0.01 / ( intrm_sf_mf_1247 == 0.0 ?
1.0E-16 : intrm_sf_mf_1247 ) ; t1037 = intrm_sf_mf_681 >= 0.0 ?
intrm_sf_mf_681 : - intrm_sf_mf_681 ; intrm_sf_mf_681 = t1037 > 1000.0 ?
t1037 : 1000.0 ; t1219 = pmf_log10 ( 6.9 / ( intrm_sf_mf_681 == 0.0 ? 1.0E-16
: intrm_sf_mf_681 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_681 == 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) + 0.00017169489553429715
) * 3.24 ; t1038 = 1.0 / ( t1219 == 0.0 ? 1.0E-16 : t1219 ) ; t1220 = t852 +
intrm_sf_mf_814 ; if ( ( pmf_pow ( t1220 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1038 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1224 = ( pmf_pow ( (
t852 + intrm_sf_mf_814 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1038 / 8.0 ) * 12.7 + 1.0 ; t1039 = ( intrm_sf_mf_681 - 1000.0 ) * ( t1038 /
8.0 ) * ( ( t852 + intrm_sf_mf_814 ) / 2.0 ) / ( t1224 == 0.0 ? 1.0E-16 :
t1224 ) ; } else { t1039 = ( intrm_sf_mf_681 - 1000.0 ) * ( t1038 / 8.0 ) * (
( t852 + intrm_sf_mf_814 ) / 2.0 ) / 1.0E-6 ; } t1040 = ( t1037 - 2000.0 ) /
2000.0 ; t1042 = t1040 * t1040 * 3.0 - t1040 * t1040 * t1040 * 2.0 ; if (
t1037 <= 2000.0 ) { t1040 = 3.66 ; } else if ( t1037 >= 4000.0 ) { t1040 =
t1039 ; } else { t1040 = ( 1.0 - t1042 ) * 3.66 + t1039 * t1042 ; } t1228 =
t1040 * 10.709248339636167 ; t831 = t1220 / 2.0 ; if ( t1037 > t1228 / 0.32 /
( t831 == 0.0 ? 1.0E-16 : t831 ) / 30.0 ) { t1237 = ( t852 + intrm_sf_mf_814
) / 2.0 ; t1039 = t1040 * 10.709248339636167 / ( t1037 == 0.0 ? 1.0E-16 :
t1037 ) / 0.32 / ( t1237 == 0.0 ? 1.0E-16 : t1237 ) ; } else { t1039 = 30.0 ;
} if ( X [ 9ULL ] <= 0.0 ) { t1040 = 0.0 ; } else { t1040 = X [ 9ULL ] >= 1.0
? 1.0 : X [ 9ULL ] ; } if ( X [ 8ULL ] <= 0.0 ) { t1042 = 0.0 ; } else {
t1042 = X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ; } t1043 = ( ( ( 1.0 - t1040 )
- t1042 ) * 296.802103844292 + t1040 * 461.523 ) + t1042 * 4124.48151675695 ;
t1046 = - ( ( X [ 7ULL ] / ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) - X
[ 284ULL ] / ( X [ 285ULL ] == 0.0 ? 1.0E-16 : X [ 285ULL ] ) ) * X [ 272ULL
] * t1043 ) / 0.32 ; if ( X [ 284ULL ] <= 216.59999999999997 ) { t831 =
216.59999999999997 ; } else { t831 = X [ 284ULL ] >= 623.15 ? 623.15 : X [
284ULL ] ; } t1050 = t831 * t831 ; t1049 = ( ( ( 1074.1165326382641 + t831 *
- 0.2214565261064495 ) + t1050 * 0.00037212980109014541 ) * ( ( 1.0 - t1040 )
- t1042 ) + ( ( 1479.6504774711011 + t831 * 1.2002114337048222 ) + t1050 * -
0.00038614513167823636 ) * t1040 ) + ( ( 12825.281119789837 + t831 *
6.9647057412840034 ) + t1050 * - 0.0070524868246844051 ) * t1042 ; t1243 =
t1049 - t1043 ; t1050 = t1049 / ( t1243 == 0.0 ? 1.0E-16 : t1243 ) ; t1051 =
pmf_sqrt ( t1046 * t1046 * 9.999999999999999E-14 + fabs ( X [ 284ULL ] *
t1050 * t1043 ) * 1.0E-9 ) ; if ( X [ 76ULL ] <= 0.0 ) { t1052 = 0.0 ; } else
{ t1052 = X [ 76ULL ] >= 1.0 ? 1.0 : X [ 76ULL ] ; } if ( X [ 75ULL ] <= 0.0
) { intrm_sf_mf_791 = 0.0 ; } else { intrm_sf_mf_791 = X [ 75ULL ] >= 1.0 ?
1.0 : X [ 75ULL ] ; } t539 [ 0ULL ] = X [ 7ULL ] ;
tlu2_linear_nearest_prelookup ( & jd_efOut . mField0 [ 0ULL ] , & jd_efOut .
mField1 [ 0ULL ] , & jd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t53
= jd_efOut ; tlu2_1d_linear_nearest_value ( & kd_efOut [ 0ULL ] , & t53 .
mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = kd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ld_efOut [ 0ULL ] , & t53 . mField0 [
0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = ld_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & md_efOut [ 0ULL ] , & t53 . mField0 [ 0ULL ]
, & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = md_efOut [ 0 ] ; t1056 = ( ( (
1.0 - t1052 ) - intrm_sf_mf_791 ) * t540_idx_0 + t537_idx_0 * t1052 ) +
t538_idx_0 * intrm_sf_mf_791 ; t1244 = X [ 285ULL ] * X [ 285ULL ] * t1050 ;
t1057 = - pmf_sqrt ( fabs ( t1244 / ( t1043 == 0.0 ? 1.0E-16 : t1043 ) / ( X
[ 284ULL ] == 0.0 ? 1.0E-16 : X [ 284ULL ] ) ) ) * 0.32 ; if ( t1057 >= 0.0 )
{ intrm_sf_mf_755 = t1057 * 100000.0 ; } else { intrm_sf_mf_755 = - t1057 *
100000.0 ; } t1248 = t1056 * 0.32 ; t831 = intrm_sf_mf_755 * 0.01 / ( t1248
== 0.0 ? 1.0E-16 : t1248 ) ; U_idx_2 = X [ 7ULL ] * t1043 ; t1060 = X [ 38ULL
] / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t1252 = t1060 *
6.4000000000000011E-5 ; intrm_sf_mf_762 = t1057 * t1056 * 2.9973120849090416
/ ( t1252 == 0.0 ? 1.0E-16 : t1252 ) ; t1062 = t831 >= 1.0 ? t831 : 1.0 ;
t1253 = pmf_log10 ( 6.9 / ( t1062 == 0.0 ? 1.0E-16 : t1062 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1062 == 0.0 ? 1.0E-16 : t1062
) + 0.00017169489553429715 ) * 3.24 ; U_idx_2 = t1060 * 0.0020480000000000003
; intrm_sf_mf_755 = t1057 * intrm_sf_mf_755 * ( 1.0 / ( t1253 == 0.0 ?
1.0E-16 : t1253 ) ) * 0.046833001326703774 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ; t1063 = ( t831 - 2000.0 ) / 2000.0 ; t852 = t1063 * t1063 * 3.0 -
t1063 * t1063 * t1063 * 2.0 ; if ( t831 <= 2000.0 ) { t1063 = intrm_sf_mf_762
* 1.0E-5 ; } else if ( t831 >= 4000.0 ) { t1063 = intrm_sf_mf_755 * 1.0E-5 ;
} else { t1063 = ( ( 1.0 - t852 ) * intrm_sf_mf_762 + intrm_sf_mf_755 * t852
) * 1.0E-5 ; } t1051 = - ( X [ 272ULL ] * t1051 ) / 0.32 *
0.00031622776601683789 + t1063 ; intrm_sf_mf_755 = - ( ( X [ 7ULL ] / ( X [
38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) - X [ 286ULL ] / ( X [ 287ULL ] ==
0.0 ? 1.0E-16 : X [ 287ULL ] ) ) * X [ 129ULL ] * t1043 ) / 0.32 ; if ( X [
286ULL ] <= 216.59999999999997 ) { t831 = 216.59999999999997 ; } else { t831
= X [ 286ULL ] >= 623.15 ? 623.15 : X [ 286ULL ] ; } t1066 = t831 * t831 ;
intrm_sf_mf_762 = ( ( ( 1074.1165326382641 + t831 * - 0.2214565261064495 ) +
t1066 * 0.00037212980109014541 ) * ( ( 1.0 - t1040 ) - t1042 ) + ( (
1479.6504774711011 + t831 * 1.2002114337048222 ) + t1066 * -
0.00038614513167823636 ) * t1040 ) + ( ( 12825.281119789837 + t831 *
6.9647057412840034 ) + t1066 * - 0.0070524868246844051 ) * t1042 ; t831 =
intrm_sf_mf_762 - t1043 ; t1040 = intrm_sf_mf_762 / ( t831 == 0.0 ? 1.0E-16 :
t831 ) ; t1042 = pmf_sqrt ( intrm_sf_mf_755 * intrm_sf_mf_755 *
9.999999999999999E-14 + fabs ( X [ 286ULL ] * t1040 * t1043 ) * 1.0E-9 ) ;
t1264 = X [ 287ULL ] * X [ 287ULL ] * t1040 ; t1063 = - pmf_sqrt ( fabs (
t1264 / ( t1043 == 0.0 ? 1.0E-16 : t1043 ) / ( X [ 286ULL ] == 0.0 ? 1.0E-16
: X [ 286ULL ] ) ) ) * 0.32 ; if ( t1063 >= 0.0 ) { t852 = t1063 * 100000.0 ;
} else { t852 = - t1063 * 100000.0 ; } t1066 = t852 * 0.01 / ( t1248 == 0.0 ?
1.0E-16 : t1248 ) ; t1067 = t1063 * t1056 * 2.9973120849090416 / ( t1252 ==
0.0 ? 1.0E-16 : t1252 ) ; t1069 = t1066 >= 1.0 ? t1066 : 1.0 ; t1271 =
pmf_log10 ( 6.9 / ( t1069 == 0.0 ? 1.0E-16 : t1069 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t1069 == 0.0 ? 1.0E-16 : t1069 ) +
0.00017169489553429715 ) * 3.24 ; t852 = t1063 * t852 * ( 1.0 / ( t1271 ==
0.0 ? 1.0E-16 : t1271 ) ) * 0.046833001326703774 / ( U_idx_2 == 0.0 ? 1.0E-16
: U_idx_2 ) ; t1071 = ( t1066 - 2000.0 ) / 2000.0 ; t1074 = t1071 * t1071 *
3.0 - t1071 * t1071 * t1071 * 2.0 ; if ( t1066 <= 2000.0 ) { t1071 = t1067 *
1.0E-5 ; } else if ( t1066 >= 4000.0 ) { t1071 = t852 * 1.0E-5 ; } else {
t1071 = ( ( 1.0 - t1074 ) * t1067 + t852 * t1074 ) * 1.0E-5 ; } t1042 = - ( X
[ 129ULL ] * t1042 ) / 0.32 * 0.00031622776601683789 + t1071 ; if ( 1.0 - X [
9ULL ] >= 0.01 ) { t1066 = 1.0 - X [ 9ULL ] ; } else if ( 1.0 - X [ 9ULL ] >=
- 0.1 ) { t1066 = pmf_exp ( ( ( 1.0 - X [ 9ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ;
} else { t1066 = 1.6701700790245661E-7 ; } t1067 = X [ 8ULL ] / ( t1066 ==
0.0 ? 1.0E-16 : t1066 ) * 3827.6794129126583 + 296.802103844292 ; t539 [ 0ULL
] = X [ 7ULL ] ; tlu2_linear_linear_prelookup ( & nd_efOut . mField0 [ 0ULL ]
, & nd_efOut . mField1 [ 0ULL ] , & nd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t46 = nd_efOut ; tlu2_1d_linear_linear_value ( & od_efOut
[ 0ULL ] , & t46 . mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t422 [ 0 ] = od_efOut [ 0 ] ; t1071 = pmf_exp ( pmf_log ( X [ 38ULL ] *
100000.0 ) - t422 [ 0ULL ] ) ; if ( t1071 >= 1.0 ) { t831 = ( t1071 - 1.0 ) *
461.523 + t1067 ; t1074 = t1067 / ( t831 == 0.0 ? 1.0E-16 : t831 ) ; } else {
t1074 = 1.0 ; } tlu2_1d_linear_nearest_value ( & pd_efOut [ 0ULL ] , & t53 .
mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = pd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & qd_efOut [ 0ULL ] , & t53 . mField0 [
0ULL ] , & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = qd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rd_efOut [ 0ULL ] , & t53 . mField0 [ 0ULL ]
, & t53 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = rd_efOut [ 0 ] ; t1075 = ( (
( 1.0 - t1052 ) - intrm_sf_mf_791 ) * t540_idx_0 + t537_idx_0 * t1052 ) +
t538_idx_0 * intrm_sf_mf_791 ; t1052 = ( - X [ 272ULL ] - ( - X [ 129ULL ] )
) / 2.0 ; t1280 = t1012 + t1056 ; t538_idx_0 = t1280 / 2.0 * 0.32 ; t1012 = (
t1052 >= 0.0 ? t1052 : 0.0 ) * 0.01 / ( t538_idx_0 == 0.0 ? 1.0E-16 :
t538_idx_0 ) ; intrm_sf_mf_791 = t1012 >= 0.0 ? t1012 : - t1012 ; t1012 =
intrm_sf_mf_791 > 1000.0 ? intrm_sf_mf_791 : 1000.0 ; U_idx_3 = pmf_log10 (
6.9 / ( t1012 == 0.0 ? 1.0E-16 : t1012 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1012 == 0.0 ? 1.0E-16 : t1012 ) + 0.00017169489553429715
) * 3.24 ; t1076 = 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; t1284 =
intrm_sf_mf_814 + t1075 ; if ( ( pmf_pow ( t1284 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1076 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1314 = (
pmf_pow ( ( intrm_sf_mf_814 + t1075 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1076 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_798 = ( t1012 - 1000.0 )
* ( t1076 / 8.0 ) * ( ( intrm_sf_mf_814 + t1075 ) / 2.0 ) / ( t1314 == 0.0 ?
1.0E-16 : t1314 ) ; } else { intrm_sf_mf_798 = ( t1012 - 1000.0 ) * ( t1076 /
8.0 ) * ( ( intrm_sf_mf_814 + t1075 ) / 2.0 ) / 1.0E-6 ; } t1078 = (
intrm_sf_mf_791 - 2000.0 ) / 2000.0 ; t1079 = t1078 * t1078 * 3.0 - t1078 *
t1078 * t1078 * 2.0 ; if ( intrm_sf_mf_791 <= 2000.0 ) { t1078 = 3.66 ; }
else if ( intrm_sf_mf_791 >= 4000.0 ) { t1078 = intrm_sf_mf_798 ; } else {
t1078 = ( 1.0 - t1079 ) * 3.66 + intrm_sf_mf_798 * t1079 ; } t1291 = t1078 *
10.709248339636167 ; t1306 = t1284 / 2.0 ; if ( intrm_sf_mf_791 > t1291 /
0.32 / ( t1306 == 0.0 ? 1.0E-16 : t1306 ) / 30.0 ) { t831 = ( intrm_sf_mf_814
+ t1075 ) / 2.0 ; intrm_sf_mf_798 = t1078 * 10.709248339636167 / (
intrm_sf_mf_791 == 0.0 ? 1.0E-16 : intrm_sf_mf_791 ) / 0.32 / ( t831 == 0.0 ?
1.0E-16 : t831 ) ; } else { intrm_sf_mf_798 = 30.0 ; } t1302 = t1056 + t856 ;
t1314 = t1302 / 2.0 * 0.32 ; t856 = - ( t1052 <= 0.0 ? t1052 : 0.0 ) * 0.01 /
( t1314 == 0.0 ? 1.0E-16 : t1314 ) ; intrm_sf_mf_814 = t856 >= 0.0 ? t856 : -
t856 ; t856 = intrm_sf_mf_814 > 1000.0 ? intrm_sf_mf_814 : 1000.0 ; t1306 =
pmf_log10 ( 6.9 / ( t856 == 0.0 ? 1.0E-16 : t856 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t856 == 0.0 ? 1.0E-16 : t856 ) + 0.00017169489553429715
) * 3.24 ; t1052 = 1.0 / ( t1306 == 0.0 ? 1.0E-16 : t1306 ) ; t1306 =
intrm_sf_mf_829 + t1075 ; if ( ( pmf_pow ( t1306 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1052 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t831 = (
pmf_pow ( ( intrm_sf_mf_829 + t1075 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1052 / 8.0 ) * 12.7 + 1.0 ; t1078 = ( t856 - 1000.0 ) * ( t1052 /
8.0 ) * ( ( intrm_sf_mf_829 + t1075 ) / 2.0 ) / ( t831 == 0.0 ? 1.0E-16 :
t831 ) ; } else { t1078 = ( t856 - 1000.0 ) * ( t1052 / 8.0 ) * ( (
intrm_sf_mf_829 + t1075 ) / 2.0 ) / 1.0E-6 ; } t1079 = ( intrm_sf_mf_814 -
2000.0 ) / 2000.0 ; t1080 = t1079 * t1079 * 3.0 - t1079 * t1079 * t1079 * 2.0
; if ( intrm_sf_mf_814 <= 2000.0 ) { t1079 = 3.66 ; } else if (
intrm_sf_mf_814 >= 4000.0 ) { t1079 = t1078 ; } else { t1079 = ( 1.0 - t1080
) * 3.66 + t1078 * t1080 ; } t1314 = t1079 * 10.709248339636167 ; t1367 =
t1306 / 2.0 ; if ( intrm_sf_mf_814 > t1314 / 0.32 / ( t1367 == 0.0 ? 1.0E-16
: t1367 ) / 30.0 ) { t1334 = ( intrm_sf_mf_829 + t1075 ) / 2.0 ; t1078 =
t1079 * 10.709248339636167 / ( intrm_sf_mf_814 == 0.0 ? 1.0E-16 :
intrm_sf_mf_814 ) / 0.32 / ( t1334 == 0.0 ? 1.0E-16 : t1334 ) ; } else {
t1078 = 30.0 ; } if ( X [ 41ULL ] <= 0.0 ) { t1075 = 0.0 ; } else { t1075 = X
[ 41ULL ] >= 1.0 ? 1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) { t1079 =
0.0 ; } else { t1079 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t1080 = ( (
( 1.0 - t1075 ) - t1079 ) * 296.802103844292 + t1075 * 461.523 ) + t1079 *
259.836612622973 ; t1081 = - ( ( X [ 39ULL ] / ( X [ 42ULL ] == 0.0 ? 1.0E-16
: X [ 42ULL ] ) - X [ 305ULL ] / ( X [ 306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL
] ) ) * X [ 239ULL ] * t1080 ) / 0.0019634954084936209 ; if ( X [ 305ULL ] <=
216.59999999999997 ) { t831 = 216.59999999999997 ; } else { t831 = X [ 305ULL
] >= 623.15 ? 623.15 : X [ 305ULL ] ; } t1087 = t831 * t831 ; t1086 = ( ( (
1074.1165326382641 + t831 * - 0.2214565261064495 ) + t1087 *
0.00037212980109014541 ) * ( ( 1.0 - t1075 ) - t1079 ) + ( (
1479.6504774711011 + t831 * 1.2002114337048222 ) + t1087 * -
0.00038614513167823636 ) * t1075 ) + ( ( 900.63941224838356 + t831 * -
0.044484923911382625 ) + t1087 * 0.00036936011832044979 ) * t1079 ; t1330 =
t1086 - t1080 ; t1087 = t1086 / ( t1330 == 0.0 ? 1.0E-16 : t1330 ) ; t1089 =
pmf_sqrt ( t1081 * t1081 * 9.999999999999999E-14 + fabs ( X [ 305ULL ] *
t1087 * t1080 ) * 1.0E-9 ) ; if ( X [ 303ULL ] <= 0.0 ) { intrm_sf_mf_1241 =
0.0 ; } else { intrm_sf_mf_1241 = X [ 303ULL ] >= 1.0 ? 1.0 : X [ 303ULL ] ;
} if ( X [ 302ULL ] <= 0.0 ) { intrm_sf_mf_923 = 0.0 ; } else {
intrm_sf_mf_923 = X [ 302ULL ] >= 1.0 ? 1.0 : X [ 302ULL ] ; } t539 [ 0ULL ]
= X [ 39ULL ] ; tlu2_linear_nearest_prelookup ( & sd_efOut . mField0 [ 0ULL ]
, & sd_efOut . mField1 [ 0ULL ] , & sd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t37 = sd_efOut ; tlu2_1d_linear_nearest_value ( & td_efOut
[ 0ULL ] , & t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = td_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ud_efOut [
0ULL ] , & t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = ud_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vd_efOut [
0ULL ] , & t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = vd_efOut [ 0 ] ; t1095 = ( ( ( 1.0 - intrm_sf_mf_1241 ) -
intrm_sf_mf_923 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_1241 ) + t538_idx_0
* intrm_sf_mf_923 ; t1330 = X [ 306ULL ] * X [ 306ULL ] * t1087 ; t1096 = -
pmf_sqrt ( fabs ( t1330 / ( t1080 == 0.0 ? 1.0E-16 : t1080 ) / ( X [ 305ULL ]
== 0.0 ? 1.0E-16 : X [ 305ULL ] ) ) ) * 0.0019634954084936209 ; if ( t1096 >=
0.0 ) { t1098 = t1096 * 100000.0 ; } else { t1098 = - t1096 * 100000.0 ; }
t1334 = t1095 * 0.0019634954084936209 ; t852 = t1098 * 0.05 / ( t1334 == 0.0
? 1.0E-16 : t1334 ) ; t831 = X [ 39ULL ] * t1080 ; t1100 = X [ 42ULL ] / (
t831 == 0.0 ? 1.0E-16 : t831 ) ; t1371 = t1100 * 9.8174770424681068E-6 ;
intrm_sf_mf_895 = t1096 * t1095 * 11.2 / ( t1371 == 0.0 ? 1.0E-16 : t1371 ) ;
t1102 = t852 >= 1.0 ? t852 : 1.0 ; t831 = pmf_log10 ( 6.9 / ( t1102 == 0.0 ?
1.0E-16 : t1102 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1102 ==
0.0 ? 1.0E-16 : t1102 ) + 2.8767404433520813E-5 ) * 3.24 ; t1380 = t1100 *
3.855314219175531E-7 ; t1098 = t1096 * t1098 * ( 1.0 / ( t831 == 0.0 ?
1.0E-16 : t831 ) ) * 0.175 / ( t1380 == 0.0 ? 1.0E-16 : t1380 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked = ( t852 -
2000.0 ) / 2000.0 ; t831 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked * 2.0 ; if (
t852 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked =
intrm_sf_mf_895 * 1.0E-5 ; } else if ( t852 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked = t1098 *
1.0E-5 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked = ( ( 1.0 -
t831 ) * intrm_sf_mf_895 + t1098 * t831 ) * 1.0E-5 ; } t1089 = - ( X [ 239ULL
] * t1089 ) / 0.0019634954084936209 * 0.00031622776601683789 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked ; t1098 = ( X
[ 39ULL ] / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) - X [ 308ULL ] / (
X [ 309ULL ] == 0.0 ? 1.0E-16 : X [ 309ULL ] ) ) * X [ 307ULL ] * t1080 /
0.0019634954084936209 ; if ( X [ 308ULL ] <= 216.59999999999997 ) { t852 =
216.59999999999997 ; } else { t852 = X [ 308ULL ] >= 623.15 ? 623.15 : X [
308ULL ] ; } t1106 = t852 * t852 ; intrm_sf_mf_895 = ( ( ( 1074.1165326382641
+ t852 * - 0.2214565261064495 ) + t1106 * 0.00037212980109014541 ) * ( ( 1.0
- t1075 ) - t1079 ) + ( ( 1479.6504774711011 + t852 * 1.2002114337048222 ) +
t1106 * - 0.00038614513167823636 ) * t1075 ) + ( ( 900.63941224838356 + t852
* - 0.044484923911382625 ) + t1106 * 0.00036936011832044979 ) * t1079 ; t1350
= intrm_sf_mf_895 - t1080 ; t1075 = intrm_sf_mf_895 / ( t1350 == 0.0 ?
1.0E-16 : t1350 ) ; t1079 = pmf_sqrt ( t1098 * t1098 * 9.999999999999999E-14
+ fabs ( X [ 308ULL ] * t1075 * t1080 ) * 1.0E-9 ) ; t1350 = X [ 309ULL ] * X
[ 309ULL ] * t1075 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked = - pmf_sqrt
( fabs ( t1350 / ( t1080 == 0.0 ? 1.0E-16 : t1080 ) / ( X [ 308ULL ] == 0.0 ?
1.0E-16 : X [ 308ULL ] ) ) ) * 0.0019634954084936209 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked >= 0.0 ) {
t831 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked *
100000.0 ; } else { t831 = -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked * 100000.0 ;
} t1106 = t831 * 0.05 / ( t1334 == 0.0 ? 1.0E-16 : t1334 ) ; t1107 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked * t1095 *
11.2 / ( t1371 == 0.0 ? 1.0E-16 : t1371 ) ; t1109 = t1106 >= 1.0 ? t1106 :
1.0 ; t1367 = pmf_log10 ( 6.9 / ( t1109 == 0.0 ? 1.0E-16 : t1109 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1109 == 0.0 ? 1.0E-16 : t1109
) + 2.8767404433520813E-5 ) * 3.24 ; t831 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked * t831 * (
1.0 / ( t1367 == 0.0 ? 1.0E-16 : t1367 ) ) * 0.175 / ( t1380 == 0.0 ? 1.0E-16
: t1380 ) ; t1110 = ( t1106 - 2000.0 ) / 2000.0 ; t1111 = t1110 * t1110 * 3.0
- t1110 * t1110 * t1110 * 2.0 ; if ( t1106 <= 2000.0 ) { t1110 = t1107 *
1.0E-5 ; } else if ( t1106 >= 4000.0 ) { t1110 = t831 * 1.0E-5 ; } else {
t1110 = ( ( 1.0 - t1111 ) * t1107 + t831 * t1111 ) * 1.0E-5 ; } t1079 = X [
307ULL ] * t1079 / 0.0019634954084936209 * 0.00031622776601683789 + t1110 ;
if ( 1.0 - X [ 41ULL ] >= 0.01 ) { t1106 = 1.0 - X [ 41ULL ] ; } else if (
1.0 - X [ 41ULL ] >= - 0.1 ) { t1106 = pmf_exp ( ( ( 1.0 - X [ 41ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t1106 = 1.6701700790245661E-7 ; } t1107 = X
[ 40ULL ] / ( t1106 == 0.0 ? 1.0E-16 : t1106 ) * - 36.965491221318985 +
296.802103844292 ; t539 [ 0ULL ] = X [ 39ULL ] ; tlu2_linear_linear_prelookup
( & wd_efOut . mField0 [ 0ULL ] , & wd_efOut . mField1 [ 0ULL ] , & wd_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [
0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t46 = wd_efOut ;
tlu2_1d_linear_linear_value ( & xd_efOut [ 0ULL ] , & t46 . mField0 [ 0ULL ]
, & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t428 [ 0 ] = xd_efOut [ 0 ] ; t1110 =
pmf_exp ( pmf_log ( X [ 42ULL ] * 100000.0 ) - t428 [ 0ULL ] ) ; if ( t1110
>= 1.0 ) { t1367 = ( t1110 - 1.0 ) * 461.523 + t1107 ; t1111 = t1107 / (
t1367 == 0.0 ? 1.0E-16 : t1367 ) ; } else { t1111 = 1.0 ; } if ( X [ 229ULL ]
<= 0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg =
0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [ 229ULL
] >= 1.0 ? 1.0 : X [ 229ULL ] ; } if ( X [ 228ULL ] <= 0.0 ) {
intrm_sf_mf_924 = 0.0 ; } else { intrm_sf_mf_924 = X [ 228ULL ] >= 1.0 ? 1.0
: X [ 228ULL ] ; } t1114 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) -
intrm_sf_mf_924 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg * 461.523 ) +
intrm_sf_mf_924 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [ 229ULL
] * 461.523 / ( t1114 == 0.0 ? 1.0E-16 : t1114 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg <= 0.0 ) {
intrm_sf_mf_924 = 0.0 ; } else { intrm_sf_mf_924 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [ 228ULL
] * 259.836612622973 / ( t1114 == 0.0 ? 1.0E-16 : t1114 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg <= 0.0 ) {
intrm_sf_mf_926 = 0.0 ; } else { intrm_sf_mf_926 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; } t539 [
0ULL ] = X [ 227ULL ] ; tlu2_linear_nearest_prelookup ( & yd_efOut . mField0
[ 0ULL ] , & yd_efOut . mField1 [ 0ULL ] , & yd_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ]
, & t63 [ 0ULL ] ) ; t54 = yd_efOut ; tlu2_1d_linear_nearest_value ( &
ae_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = ae_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & be_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = be_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ce_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = ce_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = ( ( ( 1.0 -
intrm_sf_mf_924 ) - intrm_sf_mf_926 ) * t540_idx_0 + t537_idx_0 *
intrm_sf_mf_924 ) + t538_idx_0 * intrm_sf_mf_926 ;
tlu2_1d_linear_nearest_value ( & de_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = de_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ee_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = ee_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fe_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = fe_efOut [ 0 ] ; t852 = ( (
( 1.0 - intrm_sf_mf_1241 ) - intrm_sf_mf_923 ) * t540_idx_0 + t537_idx_0 *
intrm_sf_mf_1241 ) + t538_idx_0 * intrm_sf_mf_923 ; intrm_sf_mf_1241 = ( - X
[ 239ULL ] - X [ 307ULL ] ) / 2.0 ; tlu2_1d_linear_nearest_value ( & ge_efOut
[ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = ge_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & he_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = he_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ie_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = ie_efOut [ 0 ] ; t1367 = t1095 + ( ( ( ( 1.0 - intrm_sf_mf_924
) - intrm_sf_mf_926 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_924 ) +
t538_idx_0 * intrm_sf_mf_926 ) ; t1380 = t1367 / 2.0 * 0.0019634954084936209
; intrm_sf_mf_923 = ( intrm_sf_mf_1241 >= 0.0 ? intrm_sf_mf_1241 : 0.0 ) *
0.05 / ( t1380 == 0.0 ? 1.0E-16 : t1380 ) ; intrm_sf_mf_924 = intrm_sf_mf_923
>= 0.0 ? intrm_sf_mf_923 : - intrm_sf_mf_923 ; intrm_sf_mf_923 =
intrm_sf_mf_924 > 1000.0 ? intrm_sf_mf_924 : 1000.0 ; t1371 = pmf_log10 ( 6.9
/ ( intrm_sf_mf_923 == 0.0 ? 1.0E-16 : intrm_sf_mf_923 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_923 == 0.0 ?
1.0E-16 : intrm_sf_mf_923 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_926 = 1.0 / ( t1371 == 0.0 ? 1.0E-16 : t1371 ) ; t1371 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + t852 ; if (
( pmf_pow ( t1371 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_926 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1404 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + t852 ) /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_926 / 8.0 ) *
12.7 + 1.0 ; intrm_sf_mf_931 = ( intrm_sf_mf_923 - 1000.0 ) * (
intrm_sf_mf_926 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + t852 ) /
2.0 ) / ( t1404 == 0.0 ? 1.0E-16 : t1404 ) ; } else { intrm_sf_mf_931 = (
intrm_sf_mf_923 - 1000.0 ) * ( intrm_sf_mf_926 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + t852 ) /
2.0 ) / 1.0E-6 ; } intrm_sf_mf_948 = ( intrm_sf_mf_924 - 2000.0 ) / 2000.0 ;
t1121 = intrm_sf_mf_948 * intrm_sf_mf_948 * 3.0 - intrm_sf_mf_948 *
intrm_sf_mf_948 * intrm_sf_mf_948 * 2.0 ; if ( intrm_sf_mf_924 <= 2000.0 ) {
intrm_sf_mf_948 = 3.66 ; } else if ( intrm_sf_mf_924 >= 4000.0 ) {
intrm_sf_mf_948 = intrm_sf_mf_931 ; } else { intrm_sf_mf_948 = ( 1.0 - t1121
) * 3.66 + intrm_sf_mf_931 * t1121 ; } t1380 = intrm_sf_mf_948 *
0.039269908169872414 ; t1396 = t1371 / 2.0 ; if ( intrm_sf_mf_924 > t1380 /
0.0019634954084936209 / ( t1396 == 0.0 ? 1.0E-16 : t1396 ) / 30.0 ) { t831 =
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + t852 ) /
2.0 ; intrm_sf_mf_931 = intrm_sf_mf_948 * 0.039269908169872414 / (
intrm_sf_mf_924 == 0.0 ? 1.0E-16 : intrm_sf_mf_924 ) / 0.0019634954084936209
/ ( t831 == 0.0 ? 1.0E-16 : t831 ) ; } else { intrm_sf_mf_931 = 30.0 ; } if (
X [ 297ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [
297ULL ] >= 1.0 ? 1.0 : X [ 297ULL ] ; } if ( X [ 296ULL ] <= 0.0 ) {
intrm_sf_mf_948 = 0.0 ; } else { intrm_sf_mf_948 = X [ 296ULL ] >= 1.0 ? 1.0
: X [ 296ULL ] ; } t1121 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) -
intrm_sf_mf_948 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg * 461.523 ) +
intrm_sf_mf_948 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [ 297ULL
] * 461.523 / ( t1121 == 0.0 ? 1.0E-16 : t1121 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg <= 0.0 ) {
intrm_sf_mf_948 = 0.0 ; } else { intrm_sf_mf_948 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [ 296ULL
] * 259.836612622973 / ( t1121 == 0.0 ? 1.0E-16 : t1121 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg <= 0.0 ) {
t1122 = 0.0 ; } else { t1122 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; } t539 [
0ULL ] = X [ 294ULL ] ; tlu2_linear_nearest_prelookup ( & je_efOut . mField0
[ 0ULL ] , & je_efOut . mField1 [ 0ULL ] , & je_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ]
, & t63 [ 0ULL ] ) ; t54 = je_efOut ; tlu2_1d_linear_nearest_value ( &
ke_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = ke_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & le_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = le_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & me_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = me_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = ( ( ( 1.0 -
intrm_sf_mf_948 ) - t1122 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_948 ) +
t538_idx_0 * t1122 ; t1123 = intrm_sf_mf_1241 <= 0.0 ? intrm_sf_mf_1241 : 0.0
; tlu2_1d_linear_nearest_value ( & ne_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL
] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = ne_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oe_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = oe_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pe_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = pe_efOut [ 0 ] ;
intrm_sf_mf_1241 = ( ( ( 1.0 - intrm_sf_mf_948 ) - t1122 ) * t540_idx_0 +
t537_idx_0 * intrm_sf_mf_948 ) + t538_idx_0 * t1122 ; t1391 = t1095 +
intrm_sf_mf_1241 ; t1404 = t1391 / 2.0 * 0.0019634954084936209 ;
intrm_sf_mf_948 = - t1123 * 0.05 / ( t1404 == 0.0 ? 1.0E-16 : t1404 ) ; t1122
= intrm_sf_mf_948 >= 0.0 ? intrm_sf_mf_948 : - intrm_sf_mf_948 ;
intrm_sf_mf_948 = t1122 > 1000.0 ? t1122 : 1000.0 ; t1396 = pmf_log10 ( 6.9 /
( intrm_sf_mf_948 == 0.0 ? 1.0E-16 : intrm_sf_mf_948 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_948 == 0.0 ?
1.0E-16 : intrm_sf_mf_948 ) + 2.8767404433520813E-5 ) * 3.24 ; t1123 = 1.0 /
( t1396 == 0.0 ? 1.0E-16 : t1396 ) ; t1396 = t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; if ( (
pmf_pow ( t1396 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1123 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t831 = ( pmf_pow ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1123 / 8.0 ) * 12.7 + 1.0 ; t1124
= ( intrm_sf_mf_948 - 1000.0 ) * ( t1123 / 8.0 ) * ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ) / (
t831 == 0.0 ? 1.0E-16 : t831 ) ; } else { t1124 = ( intrm_sf_mf_948 - 1000.0
) * ( t1123 / 8.0 ) * ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ) /
1.0E-6 ; } t1125 = ( t1122 - 2000.0 ) / 2000.0 ; t1126 = t1125 * t1125 * 3.0
- t1125 * t1125 * t1125 * 2.0 ; if ( t1122 <= 2000.0 ) { t1125 = 3.66 ; }
else if ( t1122 >= 4000.0 ) { t1125 = t1124 ; } else { t1125 = ( 1.0 - t1126
) * 3.66 + t1124 * t1126 ; } t1404 = t1125 * 0.039269908169872414 ; t1457 =
t1396 / 2.0 ; if ( t1122 > t1404 / 0.0019634954084936209 / ( t1457 == 0.0 ?
1.0E-16 : t1457 ) / 30.0 ) { t1727 = ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ;
t1124 = t1125 * 0.039269908169872414 / ( t1122 == 0.0 ? 1.0E-16 : t1122 ) /
0.0019634954084936209 / ( t1727 == 0.0 ? 1.0E-16 : t1727 ) ; } else { t1124 =
30.0 ; } if ( X [ 335ULL ] <= 0.0 ) { t1125 = 0.0 ; } else { t1125 = X [
335ULL ] >= 1.0 ? 1.0 : X [ 335ULL ] ; } if ( X [ 336ULL ] <= 0.0 ) { t1126 =
0.0 ; } else { t1126 = X [ 336ULL ] >= 1.0 ? 1.0 : X [ 336ULL ] ; } t1127 = (
( ( 1.0 - t1125 ) - t1126 ) * 296.802103844292 + t1125 * 461.523 ) + t1126 *
259.836612622973 ; t1125 = ( X [ 339ULL ] * 0.07812500122070315 + U_idx_9 *
10.0 ) - 7.8125001220703152E-10 ; if ( X [ 45ULL ] <= 0.0 ) { t1126 = 0.0 ; }
else { t1126 = X [ 45ULL ] >= 1.0 ? 1.0 : X [ 45ULL ] ; } if ( X [ 46ULL ] <=
0.0 ) { t1129 = 0.0 ; } else { t1129 = X [ 46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ]
; } t1130 = ( ( ( 1.0 - t1126 ) - t1129 ) * 296.802103844292 + t1126 *
461.523 ) + t1129 * 259.836612622973 ; t1131 = ( X [ 43ULL ] / ( X [ 44ULL ]
== 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [ 343ULL ] / ( X [ 344ULL ] == 0.0 ?
1.0E-16 : X [ 344ULL ] ) ) * X [ 342ULL ] * t1130 / 0.0019634954084936209 ;
if ( X [ 343ULL ] <= 216.59999999999997 ) { t831 = 216.59999999999997 ; }
else { t831 = X [ 343ULL ] >= 623.15 ? 623.15 : X [ 343ULL ] ; } t1135 = t831
* t831 ; t1134 = ( ( ( 1074.1165326382641 + t831 * - 0.2214565261064495 ) +
t1135 * 0.00037212980109014541 ) * ( ( 1.0 - t1126 ) - t1129 ) + ( (
1479.6504774711011 + t831 * 1.2002114337048222 ) + t1135 * -
0.00038614513167823636 ) * t1126 ) + ( ( 900.63941224838356 + t831 * -
0.044484923911382625 ) + t1135 * 0.00036936011832044979 ) * t1129 ; t1419 =
t1134 - t1130 ; t1135 = t1134 / ( t1419 == 0.0 ? 1.0E-16 : t1419 ) ; t1136 =
pmf_sqrt ( t1131 * t1131 * 9.999999999999999E-14 + fabs ( X [ 343ULL ] *
t1135 * t1130 ) * 1.0E-9 ) ; if ( X [ 345ULL ] <= 0.0 ) { intrm_sf_mf_1094 =
0.0 ; } else { intrm_sf_mf_1094 = X [ 345ULL ] >= 1.0 ? 1.0 : X [ 345ULL ] ;
} if ( X [ 346ULL ] <= 0.0 ) { intrm_sf_mf_1071 = 0.0 ; } else {
intrm_sf_mf_1071 = X [ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ; } t539 [ 0ULL ]
= X [ 43ULL ] ; tlu2_linear_nearest_prelookup ( & qe_efOut . mField0 [ 0ULL ]
, & qe_efOut . mField1 [ 0ULL ] , & qe_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t53 = qe_efOut ; tlu2_1d_linear_nearest_value ( & re_efOut
[ 0ULL ] , & t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = re_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & se_efOut [
0ULL ] , & t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = se_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & te_efOut [
0ULL ] , & t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField16 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = te_efOut [ 0 ] ; t1139 = ( ( ( 1.0 - intrm_sf_mf_1094 ) -
intrm_sf_mf_1071 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_1094 ) +
t538_idx_0 * intrm_sf_mf_1071 ; t1419 = X [ 344ULL ] * X [ 344ULL ] * t1135 ;
t1142 = - pmf_sqrt ( fabs ( t1419 / ( t1130 == 0.0 ? 1.0E-16 : t1130 ) / ( X
[ 343ULL ] == 0.0 ? 1.0E-16 : X [ 343ULL ] ) ) ) * 0.0019634954084936209 ; if
( t1142 >= 0.0 ) { t1143 = t1142 * 100000.0 ; } else { t1143 = - t1142 *
100000.0 ; } t1727 = t1139 * 0.0019634954084936209 ; t852 = t1143 * 0.05 / (
t1727 == 0.0 ? 1.0E-16 : t1727 ) ; t831 = X [ 43ULL ] * t1130 ; t1145 = X [
44ULL ] / ( t831 == 0.0 ? 1.0E-16 : t831 ) ; t1462 = t1145 *
9.8174770424681068E-6 ; t1146 = t1142 * t1139 * 35.2 / ( t1462 == 0.0 ?
1.0E-16 : t1462 ) ; t1147 = t852 >= 1.0 ? t852 : 1.0 ; t831 = pmf_log10 ( 6.9
/ ( t1147 == 0.0 ? 1.0E-16 : t1147 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1147 == 0.0 ? 1.0E-16 : t1147 ) + 2.8767404433520813E-5 ) * 3.24 ;
t1469 = t1145 * 3.855314219175531E-7 ; t1143 = t1142 * t1143 * ( 1.0 / ( t831
== 0.0 ? 1.0E-16 : t831 ) ) * 0.55 / ( t1469 == 0.0 ? 1.0E-16 : t1469 ) ;
t1148 = ( t852 - 2000.0 ) / 2000.0 ; t831 = t1148 * t1148 * 3.0 - t1148 *
t1148 * t1148 * 2.0 ; if ( t852 <= 2000.0 ) { t1148 = t1146 * 1.0E-5 ; } else
if ( t852 >= 4000.0 ) { t1148 = t1143 * 1.0E-5 ; } else { t1148 = ( ( 1.0 -
t831 ) * t1146 + t1143 * t831 ) * 1.0E-5 ; } t1136 = X [ 342ULL ] * t1136 /
0.0019634954084936209 * 0.00031622776601683789 + t1148 ; t1143 = - ( ( X [
43ULL ] / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [ 347ULL ] / ( X
[ 348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ] ) ) * X [ 330ULL ] * t1130 ) /
0.0019634954084936209 ; if ( X [ 347ULL ] <= 216.59999999999997 ) { t852 =
216.59999999999997 ; } else { t852 = X [ 347ULL ] >= 623.15 ? 623.15 : X [
347ULL ] ; } t813 = t852 * t852 ; t1146 = ( ( ( 1074.1165326382641 + t852 * -
0.2214565261064495 ) + t813 * 0.00037212980109014541 ) * ( ( 1.0 - t1126 ) -
t1129 ) + ( ( 1479.6504774711011 + t852 * 1.2002114337048222 ) + t813 * -
0.00038614513167823636 ) * t1126 ) + ( ( 900.63941224838356 + t852 * -
0.044484923911382625 ) + t813 * 0.00036936011832044979 ) * t1129 ; t1439 =
t1146 - t1130 ; t1126 = t1146 / ( t1439 == 0.0 ? 1.0E-16 : t1439 ) ; t1129 =
pmf_sqrt ( t1143 * t1143 * 9.999999999999999E-14 + fabs ( X [ 347ULL ] *
t1126 * t1130 ) * 1.0E-9 ) ; t1439 = X [ 348ULL ] * X [ 348ULL ] * t1126 ;
t1148 = - pmf_sqrt ( fabs ( t1439 / ( t1130 == 0.0 ? 1.0E-16 : t1130 ) / ( X
[ 347ULL ] == 0.0 ? 1.0E-16 : X [ 347ULL ] ) ) ) * 0.0019634954084936209 ; if
( t1148 >= 0.0 ) { t831 = t1148 * 100000.0 ; } else { t831 = - t1148 *
100000.0 ; } t813 = t831 * 0.05 / ( t1727 == 0.0 ? 1.0E-16 : t1727 ) ; t1151
= t1148 * t1139 * 35.2 / ( t1462 == 0.0 ? 1.0E-16 : t1462 ) ; t1153 = t813 >=
1.0 ? t813 : 1.0 ; t1457 = pmf_log10 ( 6.9 / ( t1153 == 0.0 ? 1.0E-16 : t1153
) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1153 == 0.0 ? 1.0E-16 :
t1153 ) + 2.8767404433520813E-5 ) * 3.24 ; t831 = t1148 * t831 * ( 1.0 / (
t1457 == 0.0 ? 1.0E-16 : t1457 ) ) * 0.55 / ( t1469 == 0.0 ? 1.0E-16 : t1469
) ; intrm_sf_mf_1050 = ( t813 - 2000.0 ) / 2000.0 ; t1155 = intrm_sf_mf_1050
* intrm_sf_mf_1050 * 3.0 - intrm_sf_mf_1050 * intrm_sf_mf_1050 *
intrm_sf_mf_1050 * 2.0 ; if ( t813 <= 2000.0 ) { intrm_sf_mf_1050 = t1151 *
1.0E-5 ; } else if ( t813 >= 4000.0 ) { intrm_sf_mf_1050 = t831 * 1.0E-5 ; }
else { intrm_sf_mf_1050 = ( ( 1.0 - t1155 ) * t1151 + t831 * t1155 ) * 1.0E-5
; } t1129 = - ( X [ 330ULL ] * t1129 ) / 0.0019634954084936209 *
0.00031622776601683789 + intrm_sf_mf_1050 ; if ( 1.0 - X [ 45ULL ] >= 0.01 )
{ t813 = 1.0 - X [ 45ULL ] ; } else if ( 1.0 - X [ 45ULL ] >= - 0.1 ) { t813
= pmf_exp ( ( ( 1.0 - X [ 45ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t813
= 1.6701700790245661E-7 ; } t1151 = X [ 46ULL ] / ( t813 == 0.0 ? 1.0E-16 :
t813 ) * - 36.965491221318985 + 296.802103844292 ; t539 [ 0ULL ] = X [ 43ULL
] ; tlu2_linear_linear_prelookup ( & ue_efOut . mField0 [ 0ULL ] , & ue_efOut
. mField1 [ 0ULL ] , & ue_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ;
t46 = ue_efOut ; tlu2_1d_linear_linear_value ( & ve_efOut [ 0ULL ] , & t46 .
mField0 [ 0ULL ] , & t46 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t66 [ 0 ] = ve_efOut [ 0 ]
; intrm_sf_mf_1050 = pmf_exp ( pmf_log ( X [ 44ULL ] * 100000.0 ) - t66 [
0ULL ] ) ; if ( intrm_sf_mf_1050 >= 1.0 ) { t1457 = ( intrm_sf_mf_1050 - 1.0
) * 461.523 + t1151 ; t1155 = t1151 / ( t1457 == 0.0 ? 1.0E-16 : t1457 ) ; }
else { t1155 = 1.0 ; } if ( X [ 322ULL ] <= 0.0 ) { intrm_sf_mf_829 = 0.0 ; }
else { intrm_sf_mf_829 = X [ 322ULL ] >= 1.0 ? 1.0 : X [ 322ULL ] ; } if ( X
[ 321ULL ] <= 0.0 ) { t1159 = 0.0 ; } else { t1159 = X [ 321ULL ] >= 1.0 ?
1.0 : X [ 321ULL ] ; } t1162 = ( ( ( 1.0 - intrm_sf_mf_829 ) - t1159 ) *
296.802103844292 + intrm_sf_mf_829 * 461.523 ) + t1159 * 259.836612622973 ;
intrm_sf_mf_829 = X [ 322ULL ] * 461.523 / ( t1162 == 0.0 ? 1.0E-16 : t1162 )
; if ( intrm_sf_mf_829 <= 0.0 ) { t1159 = 0.0 ; } else { t1159 =
intrm_sf_mf_829 >= 1.0 ? 1.0 : intrm_sf_mf_829 ; } intrm_sf_mf_829 = X [
321ULL ] * 259.836612622973 / ( t1162 == 0.0 ? 1.0E-16 : t1162 ) ; if (
intrm_sf_mf_829 <= 0.0 ) { t1163 = 0.0 ; } else { t1163 = intrm_sf_mf_829 >=
1.0 ? 1.0 : intrm_sf_mf_829 ; } t539 [ 0ULL ] = X [ 319ULL ] ;
tlu2_linear_nearest_prelookup ( & we_efOut . mField0 [ 0ULL ] , & we_efOut .
mField1 [ 0ULL ] , & we_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t37
= we_efOut ; tlu2_1d_linear_nearest_value ( & xe_efOut [ 0ULL ] , & t37 .
mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = xe_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ye_efOut [ 0ULL ] , & t37 . mField0 [
0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = ye_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & af_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = af_efOut [ 0 ] ;
intrm_sf_mf_829 = ( ( ( 1.0 - t1159 ) - t1163 ) * t540_idx_0 + t537_idx_0 *
t1159 ) + t538_idx_0 * t1163 ; tlu2_1d_linear_nearest_value ( & bf_efOut [
0ULL ] , & t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = bf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & cf_efOut [
0ULL ] , & t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = cf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & df_efOut [
0ULL ] , & t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = df_efOut [ 0 ] ; U_idx_2 = ( ( ( 1.0 - intrm_sf_mf_1094 ) -
intrm_sf_mf_1071 ) * t540_idx_0 + t537_idx_0 * intrm_sf_mf_1094 ) +
t538_idx_0 * intrm_sf_mf_1071 ; intrm_sf_mf_1094 = ( X [ 342ULL ] - ( - X [
330ULL ] ) ) / 2.0 ; tlu2_1d_linear_nearest_value ( & ef_efOut [ 0ULL ] , &
t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 =
ef_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ff_efOut [ 0ULL ] , & t37 .
mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = ff_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & gf_efOut [ 0ULL ] , & t37 . mField0 [
0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = gf_efOut [ 0 ] ;
intrm_sf_mf_1395 = ( ( ( 1.0 - t1159 ) - t1163 ) * t540_idx_0 + t537_idx_0 *
t1159 ) + t538_idx_0 * t1163 ; t1457 = t1139 + intrm_sf_mf_1395 ; t1469 =
t1457 / 2.0 * 0.0019634954084936209 ; intrm_sf_mf_1071 = ( intrm_sf_mf_1094
>= 0.0 ? intrm_sf_mf_1094 : 0.0 ) * 0.05 / ( t1469 == 0.0 ? 1.0E-16 : t1469 )
; t1159 = intrm_sf_mf_1071 >= 0.0 ? intrm_sf_mf_1071 : - intrm_sf_mf_1071 ;
intrm_sf_mf_1071 = t1159 > 1000.0 ? t1159 : 1000.0 ; t1462 = pmf_log10 ( 6.9
/ ( intrm_sf_mf_1071 == 0.0 ? 1.0E-16 : intrm_sf_mf_1071 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1071 == 0.0 ?
1.0E-16 : intrm_sf_mf_1071 ) + 2.8767404433520813E-5 ) * 3.24 ; t1163 = 1.0 /
( t1462 == 0.0 ? 1.0E-16 : t1462 ) ; t1462 = intrm_sf_mf_829 + U_idx_2 ; if (
( pmf_pow ( t1462 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1163 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1493 = ( pmf_pow ( ( intrm_sf_mf_829 +
U_idx_2 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1163 / 8.0 ) *
12.7 + 1.0 ; t1166 = ( intrm_sf_mf_1071 - 1000.0 ) * ( t1163 / 8.0 ) * ( (
intrm_sf_mf_829 + U_idx_2 ) / 2.0 ) / ( t1493 == 0.0 ? 1.0E-16 : t1493 ) ; }
else { t1166 = ( intrm_sf_mf_1071 - 1000.0 ) * ( t1163 / 8.0 ) * ( (
intrm_sf_mf_829 + U_idx_2 ) / 2.0 ) / 1.0E-6 ; } t1167 = ( t1159 - 2000.0 ) /
2000.0 ; t1168 = t1167 * t1167 * 3.0 - t1167 * t1167 * t1167 * 2.0 ; if (
t1159 <= 2000.0 ) { t1167 = 3.66 ; } else if ( t1159 >= 4000.0 ) { t1167 =
t1166 ; } else { t1167 = ( 1.0 - t1168 ) * 3.66 + t1166 * t1168 ; } t1469 =
t1167 * 0.15707963267948966 ; t1483 = t1462 / 2.0 ; if ( t1159 > t1469 /
0.0019634954084936209 / ( t1483 == 0.0 ? 1.0E-16 : t1483 ) / 30.0 ) { t831 =
( intrm_sf_mf_829 + U_idx_2 ) / 2.0 ; t1166 = t1167 * 0.15707963267948966 / (
t1159 == 0.0 ? 1.0E-16 : t1159 ) / 0.0019634954084936209 / ( t831 == 0.0 ?
1.0E-16 : t831 ) ; } else { t1166 = 30.0 ; } if ( X [ 341ULL ] <= 0.0 ) {
t1167 = 0.0 ; } else { t1167 = X [ 341ULL ] >= 1.0 ? 1.0 : X [ 341ULL ] ; }
if ( X [ 340ULL ] <= 0.0 ) { t1168 = 0.0 ; } else { t1168 = X [ 340ULL ] >=
1.0 ? 1.0 : X [ 340ULL ] ; } t1169 = ( ( ( 1.0 - t1167 ) - t1168 ) *
296.802103844292 + t1167 * 461.523 ) + t1168 * 259.836612622973 ; t1167 = X [
341ULL ] * 461.523 / ( t1169 == 0.0 ? 1.0E-16 : t1169 ) ; if ( t1167 <= 0.0 )
{ t1168 = 0.0 ; } else { t1168 = t1167 >= 1.0 ? 1.0 : t1167 ; } t1167 = X [
340ULL ] * 259.836612622973 / ( t1169 == 0.0 ? 1.0E-16 : t1169 ) ; if ( t1167
<= 0.0 ) { t1173 = 0.0 ; } else { t1173 = t1167 >= 1.0 ? 1.0 : t1167 ; } t539
[ 0ULL ] = X [ 338ULL ] ; tlu2_linear_nearest_prelookup ( & hf_efOut .
mField0 [ 0ULL ] , & hf_efOut . mField1 [ 0ULL ] , & hf_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t54 = hf_efOut ;
tlu2_1d_linear_nearest_value ( & if_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = if_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jf_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = jf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kf_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = kf_efOut [ 0 ] ; t1167 = ( (
( 1.0 - t1168 ) - t1173 ) * t540_idx_0 + t537_idx_0 * t1168 ) + t538_idx_0 *
t1173 ; tlu2_1d_linear_nearest_value ( & lf_efOut [ 0ULL ] , & t54 . mField0
[ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = lf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mf_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = mf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nf_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = nf_efOut [ 0 ] ; t1482 =
t1139 + ( ( ( ( 1.0 - t1168 ) - t1173 ) * t540_idx_0 + t537_idx_0 * t1168 ) +
t538_idx_0 * t1173 ) ; t1493 = t1482 / 2.0 * 0.0019634954084936209 ;
intrm_sf_mf_1094 = - ( intrm_sf_mf_1094 <= 0.0 ? intrm_sf_mf_1094 : 0.0 ) *
0.05 / ( t1493 == 0.0 ? 1.0E-16 : t1493 ) ; t1168 = intrm_sf_mf_1094 >= 0.0 ?
intrm_sf_mf_1094 : - intrm_sf_mf_1094 ; intrm_sf_mf_1094 = t1168 > 1000.0 ?
t1168 : 1000.0 ; t1483 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1094 == 0.0 ?
1.0E-16 : intrm_sf_mf_1094 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1094 == 0.0 ? 1.0E-16 : intrm_sf_mf_1094 ) +
2.8767404433520813E-5 ) * 3.24 ; t1173 = 1.0 / ( t1483 == 0.0 ? 1.0E-16 :
t1483 ) ; t1483 = U_idx_2 + t1167 ; if ( ( pmf_pow ( t1483 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1173 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t831 = ( pmf_pow ( ( U_idx_2 + t1167 ) / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1173 / 8.0 ) * 12.7 + 1.0 ; t1174 = (
intrm_sf_mf_1094 - 1000.0 ) * ( t1173 / 8.0 ) * ( ( U_idx_2 + t1167 ) / 2.0 )
/ ( t831 == 0.0 ? 1.0E-16 : t831 ) ; } else { t1174 = ( intrm_sf_mf_1094 -
1000.0 ) * ( t1173 / 8.0 ) * ( ( U_idx_2 + t1167 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( t1168 -
2000.0 ) / 2000.0 ; t1177 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ; if (
t1168 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = 3.66 ; }
else if ( t1168 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t1174 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( 1.0
- t1177 ) * 3.66 + t1174 * t1177 ; } t1493 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
0.15707963267948966 ; t1544 = t1483 / 2.0 ; if ( t1168 > t1493 /
0.0019634954084936209 / ( t1544 == 0.0 ? 1.0E-16 : t1544 ) / 30.0 ) { t1525 =
( U_idx_2 + t1167 ) / 2.0 ; t1174 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
0.15707963267948966 / ( t1168 == 0.0 ? 1.0E-16 : t1168 ) /
0.0019634954084936209 / ( t1525 == 0.0 ? 1.0E-16 : t1525 ) ; } else { t1174 =
30.0 ; } if ( X [ 339ULL ] * 0.0019634954084936209 <= 1.9634954084936209E-11
) { t1167 = 1.9634954084936209E-11 ; } else if ( X [ 339ULL ] *
0.0019634954084936209 >= 0.0012566370614359179 ) { t1167 =
0.0012566370614359179 ; } else { t1167 = X [ 339ULL ] * 0.0019634954084936209
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t1167 /
0.0019634954084936209 ; if ( X [ 362ULL ] <= 0.0 ) { t1177 = 0.0 ; } else {
t1177 = X [ 362ULL ] >= 1.0 ? 1.0 : X [ 362ULL ] ; } if ( X [ 363ULL ] <= 0.0
) { t1179 = 0.0 ; } else { t1179 = X [ 363ULL ] >= 1.0 ? 1.0 : X [ 363ULL ] ;
} t1181 = ( ( ( 1.0 - t1177 ) - t1179 ) * 296.802103844292 + t1177 * 461.523
) + t1179 * 259.836612622973 ; t1544 = X [ 360ULL ] * t1181 ; t1183 = X [
361ULL ] / ( t1544 == 0.0 ? 1.0E-16 : t1544 ) ; t831 = X [ 361ULL ] / ( t1125
== 0.0 ? 1.0E-16 : t1125 ) * ( X [ 364ULL ] / ( X [ 360ULL ] == 0.0 ? 1.0E-16
: X [ 360ULL ] ) ) ; intrm_sf_mf_1170 = X [ 361ULL ] / 1.01325 * ( X [ 365ULL
] / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [ 360ULL ] ) ) ; t1188 = ( t1125 +
1.01325 ) / 2.0 * 0.0010000000000000009 ; t1187 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) ;
intrm_sf_mf_1191 = t1188 * t1187 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t831 )
- ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1170 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ; t852 =
( t1125 - 1.01325 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI >= t1187 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI : t1187 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI = ( t1125 -
1.01325 ) / ( t1188 == 0.0 ? 1.0E-16 : t1188 ) ; t1193 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI * 2.0 ; if (
t1125 - 1.01325 <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI =
intrm_sf_mf_1191 ; } else if ( t1125 - 1.01325 >= t1188 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI = t852 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI = ( 1.0
- t1193 ) * intrm_sf_mf_1191 + t852 * t1193 ; } t852 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1170 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * t831 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = ( 1.01325 -
t1125 ) * ( t852 >= t1187 ? t852 : t1187 ) ; t831 = ( 1.01325 - t1125 ) / (
t1188 == 0.0 ? 1.0E-16 : t1188 ) ; intrm_sf_mf_1170 = t831 * t831 * 3.0 -
t831 * t831 * t831 * 2.0 ; if ( 1.01325 - t1125 <= 0.0 ) { t831 =
intrm_sf_mf_1191 ; } else if ( 1.01325 - t1125 >= t1188 ) { t831 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ; } else {
t831 = ( 1.0 - intrm_sf_mf_1170 ) * intrm_sf_mf_1191 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 *
intrm_sf_mf_1170 ; } if ( t1125 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 = t1125 <
1.01325 ? t831 : intrm_sf_mf_1191 ; } if ( X [ 360ULL ] <= 216.59999999999997
) { t831 = 216.59999999999997 ; } else { t831 = X [ 360ULL ] >= 623.15 ?
623.15 : X [ 360ULL ] ; } t1194 = t831 * t831 ; intrm_sf_mf_1170 = ( ( (
1074.1165326382641 + t831 * - 0.2214565261064495 ) + t1194 *
0.00037212980109014541 ) * ( ( 1.0 - t1177 ) - t1179 ) + ( (
1479.6504774711011 + t831 * 1.2002114337048222 ) + t1194 * -
0.00038614513167823636 ) * t1177 ) + ( ( 900.63941224838356 + t831 * -
0.044484923911382625 ) + t1194 * 0.00036936011832044979 ) * t1179 ; t1516 =
intrm_sf_mf_1170 - t1181 ; t1516 = X [ 361ULL ] * X [ 361ULL ] * (
intrm_sf_mf_1170 / ( t1516 == 0.0 ? 1.0E-16 : t1516 ) ) ; t1177 = pmf_sqrt (
fabs ( t1516 / ( t1181 == 0.0 ? 1.0E-16 : t1181 ) / ( X [ 360ULL ] == 0.0 ?
1.0E-16 : X [ 360ULL ] ) ) ) * t1167 * 0.64 ; if ( X [ 12ULL ] <= 0.0 ) {
t1179 = 0.0 ; } else { t1179 = X [ 12ULL ] >= 1.0 ? 1.0 : X [ 12ULL ] ; } if
( X [ 11ULL ] <= 0.0 ) { t1187 = 0.0 ; } else { t1187 = X [ 11ULL ] >= 1.0 ?
1.0 : X [ 11ULL ] ; } intrm_sf_mf_1191 = ( ( ( 1.0 - t1179 ) - t1187 ) *
296.802103844292 + t1179 * 461.523 ) + t1187 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI = - ( ( X [
10ULL ] / ( X [ 47ULL ] == 0.0 ? 1.0E-16 : X [ 47ULL ] ) - X [ 367ULL ] / ( X
[ 368ULL ] == 0.0 ? 1.0E-16 : X [ 368ULL ] ) ) * X [ 307ULL ] *
intrm_sf_mf_1191 ) / 0.32 ; if ( X [ 367ULL ] <= 216.59999999999997 ) { t852
= 216.59999999999997 ; } else { t852 = X [ 367ULL ] >= 623.15 ? 623.15 : X [
367ULL ] ; } t1195 = t852 * t852 ; t1193 = ( ( ( 1074.1165326382641 + t852 *
- 0.2214565261064495 ) + t1195 * 0.00037212980109014541 ) * ( ( 1.0 - t1179 )
- t1187 ) + ( ( 1479.6504774711011 + t852 * 1.2002114337048222 ) + t1195 * -
0.00038614513167823636 ) * t1179 ) + ( ( 900.63941224838356 + t852 * -
0.044484923911382625 ) + t1195 * 0.00036936011832044979 ) * t1187 ; t1525 =
t1193 - intrm_sf_mf_1191 ; t1194 = t1193 / ( t1525 == 0.0 ? 1.0E-16 : t1525 )
; t1195 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 ) ; if ( X [ 81ULL ] <= 0.0 ) { intrm_sf_mf_1371 = 0.0 ; } else {
intrm_sf_mf_1371 = X [ 81ULL ] >= 1.0 ? 1.0 : X [ 81ULL ] ; } if ( X [ 80ULL
] <= 0.0 ) { intrm_sf_mf_1240 = 0.0 ; } else { intrm_sf_mf_1240 = X [ 80ULL ]
>= 1.0 ? 1.0 : X [ 80ULL ] ; } t539 [ 0ULL ] = X [ 10ULL ] ;
tlu2_linear_nearest_prelookup ( & of_efOut . mField0 [ 0ULL ] , & of_efOut .
mField1 [ 0ULL ] , & of_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t37
= of_efOut ; tlu2_1d_linear_nearest_value ( & pf_efOut [ 0ULL ] , & t37 .
mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = pf_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & qf_efOut [ 0ULL ] , & t37 . mField0 [
0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField0 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = qf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rf_efOut [ 0ULL ] , & t37 . mField0 [ 0ULL ]
, & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = rf_efOut [ 0 ] ; t1199 = ( (
( 1.0 - intrm_sf_mf_1371 ) - intrm_sf_mf_1240 ) * t540_idx_0 + t537_idx_0 *
intrm_sf_mf_1371 ) + t538_idx_0 * intrm_sf_mf_1240 ; t1525 = X [ 368ULL ] * X
[ 368ULL ] * t1194 ; t1200 = - pmf_sqrt ( fabs ( t1525 / ( intrm_sf_mf_1191
== 0.0 ? 1.0E-16 : intrm_sf_mf_1191 ) / ( X [ 367ULL ] == 0.0 ? 1.0E-16 : X [
367ULL ] ) ) ) * 0.32 ; if ( t1200 >= 0.0 ) { t1201 = t1200 * 100000.0 ; }
else { t1201 = - t1200 * 100000.0 ; } U_idx_9 = t1199 * 0.32 ; t852 = t1201 *
0.01 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ; t831 = X [ 10ULL ] *
intrm_sf_mf_1191 ; t1203 = X [ 47ULL ] / ( t831 == 0.0 ? 1.0E-16 : t831 ) ;
t1565 = t1203 * 6.4000000000000011E-5 ; t1206 = t1200 * t1199 *
2.9973120849090416 / ( t1565 == 0.0 ? 1.0E-16 : t1565 ) ; t1207 = t852 >= 1.0
? t852 : 1.0 ; t831 = pmf_log10 ( 6.9 / ( t1207 == 0.0 ? 1.0E-16 : t1207 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1207 == 0.0 ? 1.0E-16 : t1207
) + 0.00017169489553429715 ) * 3.24 ; t1572 = t1203 * 0.0020480000000000003 ;
t1201 = t1200 * t1201 * ( 1.0 / ( t831 == 0.0 ? 1.0E-16 : t831 ) ) *
0.046833001326703774 / ( t1572 == 0.0 ? 1.0E-16 : t1572 ) ; t1208 = ( t852 -
2000.0 ) / 2000.0 ; t831 = t1208 * t1208 * 3.0 - t1208 * t1208 * t1208 * 2.0
; if ( t852 <= 2000.0 ) { t1208 = t1206 * 1.0E-5 ; } else if ( t852 >= 4000.0
) { t1208 = t1201 * 1.0E-5 ; } else { t1208 = ( ( 1.0 - t831 ) * t1206 +
t1201 * t831 ) * 1.0E-5 ; } t1195 = - ( X [ 307ULL ] * t1195 ) / 0.32 *
0.00031622776601683789 + t1208 ; t1201 = ( X [ 10ULL ] / ( X [ 47ULL ] == 0.0
? 1.0E-16 : X [ 47ULL ] ) - X [ 370ULL ] / ( X [ 371ULL ] == 0.0 ? 1.0E-16 :
X [ 371ULL ] ) ) * X [ 369ULL ] * intrm_sf_mf_1191 / 0.32 ; if ( X [ 370ULL ]
<= 216.59999999999997 ) { t852 = 216.59999999999997 ; } else { t852 = X [
370ULL ] >= 623.15 ? 623.15 : X [ 370ULL ] ; } t1210 = t852 * t852 ; t1206 =
( ( ( 1074.1165326382641 + t852 * - 0.2214565261064495 ) + t1210 *
0.00037212980109014541 ) * ( ( 1.0 - t1179 ) - t1187 ) + ( (
1479.6504774711011 + t852 * 1.2002114337048222 ) + t1210 * -
0.00038614513167823636 ) * t1179 ) + ( ( 900.63941224838356 + t852 * -
0.044484923911382625 ) + t1210 * 0.00036936011832044979 ) * t1187 ; t1544 =
t1206 - intrm_sf_mf_1191 ; t1179 = t1206 / ( t1544 == 0.0 ? 1.0E-16 : t1544 )
; t1187 = pmf_sqrt ( t1201 * t1201 * 9.999999999999999E-14 + fabs ( X [
370ULL ] * t1179 * intrm_sf_mf_1191 ) * 1.0E-9 ) ; t1544 = X [ 371ULL ] * X [
371ULL ] * t1179 ; t1208 = - pmf_sqrt ( fabs ( t1544 / ( intrm_sf_mf_1191 ==
0.0 ? 1.0E-16 : intrm_sf_mf_1191 ) / ( X [ 370ULL ] == 0.0 ? 1.0E-16 : X [
370ULL ] ) ) ) * 0.32 ; if ( t1208 >= 0.0 ) { t831 = t1208 * 100000.0 ; }
else { t831 = - t1208 * 100000.0 ; } t1210 = t831 * 0.01 / ( U_idx_9 == 0.0 ?
1.0E-16 : U_idx_9 ) ; t1211 = t1208 * t1199 * 2.9973120849090416 / ( t1565 ==
0.0 ? 1.0E-16 : t1565 ) ; t1212 = t1210 >= 1.0 ? t1210 : 1.0 ; t1560 =
pmf_log10 ( 6.9 / ( t1212 == 0.0 ? 1.0E-16 : t1212 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( t1212 == 0.0 ? 1.0E-16 : t1212 ) +
0.00017169489553429715 ) * 3.24 ; t831 = t1208 * t831 * ( 1.0 / ( t1560 ==
0.0 ? 1.0E-16 : t1560 ) ) * 0.046833001326703774 / ( t1572 == 0.0 ? 1.0E-16 :
t1572 ) ; t1213 = ( t1210 - 2000.0 ) / 2000.0 ; t1214 = t1213 * t1213 * 3.0 -
t1213 * t1213 * t1213 * 2.0 ; if ( t1210 <= 2000.0 ) { t1213 = t1211 * 1.0E-5
; } else if ( t1210 >= 4000.0 ) { t1213 = t831 * 1.0E-5 ; } else { t1213 = (
( 1.0 - t1214 ) * t1211 + t831 * t1214 ) * 1.0E-5 ; } t1187 = X [ 369ULL ] *
t1187 / 0.32 * 0.00031622776601683789 + t1213 ; if ( 1.0 - X [ 12ULL ] >=
0.01 ) { t1210 = 1.0 - X [ 12ULL ] ; } else if ( 1.0 - X [ 12ULL ] >= - 0.1 )
{ t1210 = pmf_exp ( ( ( 1.0 - X [ 12ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else
{ t1210 = 1.6701700790245661E-7 ; } t1211 = X [ 11ULL ] / ( t1210 == 0.0 ?
1.0E-16 : t1210 ) * - 36.965491221318985 + 296.802103844292 ; t539 [ 0ULL ] =
X [ 10ULL ] ; tlu2_linear_linear_prelookup ( & sf_efOut . mField0 [ 0ULL ] ,
& sf_efOut . mField1 [ 0ULL ] , & sf_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t53 = sf_efOut ; tlu2_1d_linear_linear_value ( & tf_efOut
[ 0ULL ] , & t53 . mField0 [ 0ULL ] , & t53 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t423 [ 0 ] = tf_efOut [ 0 ] ; t1213 = pmf_exp ( pmf_log ( X [ 47ULL ] *
100000.0 ) - t423 [ 0ULL ] ) ; if ( t1213 >= 1.0 ) { t1560 = ( t1213 - 1.0 )
* 461.523 + t1211 ; t1214 = t1211 / ( t1560 == 0.0 ? 1.0E-16 : t1560 ) ; }
else { t1214 = 1.0 ; } tlu2_1d_linear_nearest_value ( & uf_efOut [ 0ULL ] , &
t37 . mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 =
uf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vf_efOut [ 0ULL ] , & t37 .
mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = vf_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & wf_efOut [ 0ULL ] , & t37 . mField0 [
0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField18 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = wf_efOut [ 0 ] ;
t852 = ( ( ( 1.0 - intrm_sf_mf_1371 ) - intrm_sf_mf_1240 ) * t540_idx_0 +
t537_idx_0 * intrm_sf_mf_1371 ) + t538_idx_0 * intrm_sf_mf_1240 ;
intrm_sf_mf_1371 = ( - X [ 307ULL ] - X [ 369ULL ] ) / 2.0 ; t1560 = t1199 +
intrm_sf_mf_1241 ; t1572 = t1560 / 2.0 * 0.32 ; intrm_sf_mf_1241 = (
intrm_sf_mf_1371 >= 0.0 ? intrm_sf_mf_1371 : 0.0 ) * 0.01 / ( t1572 == 0.0 ?
1.0E-16 : t1572 ) ; intrm_sf_mf_1240 = intrm_sf_mf_1241 >= 0.0 ?
intrm_sf_mf_1241 : - intrm_sf_mf_1241 ; intrm_sf_mf_1241 = intrm_sf_mf_1240 >
1000.0 ? intrm_sf_mf_1240 : 1000.0 ; t1565 = pmf_log10 ( 6.9 / (
intrm_sf_mf_1241 == 0.0 ? 1.0E-16 : intrm_sf_mf_1241 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1241 == 0.0 ?
1.0E-16 : intrm_sf_mf_1241 ) + 0.00017169489553429715 ) * 3.24 ; t1217 = 1.0
/ ( t1565 == 0.0 ? 1.0E-16 : t1565 ) ; t1565 = t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; if ( (
pmf_pow ( t1565 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1217 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1597 = ( pmf_pow ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1217 / 8.0 ) * 12.7 + 1.0 ;
intrm_sf_mf_1247 = ( intrm_sf_mf_1241 - 1000.0 ) * ( t1217 / 8.0 ) * ( ( t852
+ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ) /
( t1597 == 0.0 ? 1.0E-16 : t1597 ) ; } else { intrm_sf_mf_1247 = (
intrm_sf_mf_1241 - 1000.0 ) * ( t1217 / 8.0 ) * ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ) /
1.0E-6 ; } t1219 = ( intrm_sf_mf_1240 - 2000.0 ) / 2000.0 ; intrm_sf_mf_1252
= t1219 * t1219 * 3.0 - t1219 * t1219 * t1219 * 2.0 ; if ( intrm_sf_mf_1240
<= 2000.0 ) { t1219 = 3.66 ; } else if ( intrm_sf_mf_1240 >= 4000.0 ) { t1219
= intrm_sf_mf_1247 ; } else { t1219 = ( 1.0 - intrm_sf_mf_1252 ) * 3.66 +
intrm_sf_mf_1247 * intrm_sf_mf_1252 ; } t1572 = t1219 * 10.709248339636167 ;
t1589 = t1565 / 2.0 ; if ( intrm_sf_mf_1240 > t1572 / 0.32 / ( t1589 == 0.0 ?
1.0E-16 : t1589 ) / 30.0 ) { t831 = ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ;
intrm_sf_mf_1247 = t1219 * 10.709248339636167 / ( intrm_sf_mf_1240 == 0.0 ?
1.0E-16 : intrm_sf_mf_1240 ) / 0.32 / ( t831 == 0.0 ? 1.0E-16 : t831 ) ; }
else { intrm_sf_mf_1247 = 30.0 ; } if ( X [ 66ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [
66ULL ] >= 1.0 ? 1.0 : X [ 66ULL ] ; } if ( X [ 65ULL ] <= 0.0 ) { t1219 =
0.0 ; } else { t1219 = X [ 65ULL ] >= 1.0 ? 1.0 : X [ 65ULL ] ; }
intrm_sf_mf_1252 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) - t1219 ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg * 461.523 ) +
t1219 * 259.836612622973 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [ 66ULL ]
* 461.523 / ( intrm_sf_mf_1252 == 0.0 ? 1.0E-16 : intrm_sf_mf_1252 ) ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg <= 0.0 ) {
t1219 = 0.0 ; } else { t1219 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = X [ 65ULL ]
* 259.836612622973 / ( intrm_sf_mf_1252 == 0.0 ? 1.0E-16 : intrm_sf_mf_1252 )
; if ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg <= 0.0
) { intrm_sf_mf_1263 = 0.0 ; } else { intrm_sf_mf_1263 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg >= 1.0 ? 1.0
: Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; } t539 [
0ULL ] = X [ 63ULL ] ; tlu2_linear_nearest_prelookup ( & xf_efOut . mField0 [
0ULL ] , & xf_efOut . mField1 [ 0ULL ] , & xf_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] ,
& t63 [ 0ULL ] ) ; t54 = xf_efOut ; tlu2_1d_linear_nearest_value ( & yf_efOut
[ 0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField12 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t540_idx_0 = yf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ag_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t537_idx_0 = ag_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & bg_efOut [
0ULL ] , & t54 . mField0 [ 0ULL ] , & t54 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField18 , & t62 [ 0ULL ] , & t63 [ 0ULL ] )
; t538_idx_0 = bg_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = ( ( ( 1.0 -
t1219 ) - intrm_sf_mf_1263 ) * t540_idx_0 + t537_idx_0 * t1219 ) + t538_idx_0
* intrm_sf_mf_1263 ; t1223 = intrm_sf_mf_1371 <= 0.0 ? intrm_sf_mf_1371 : 0.0
; tlu2_1d_linear_nearest_value ( & cg_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL
] , & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = cg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & dg_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = dg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & eg_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = eg_efOut [ 0 ] ;
intrm_sf_mf_1371 = ( ( ( 1.0 - t1219 ) - intrm_sf_mf_1263 ) * t540_idx_0 +
t537_idx_0 * t1219 ) + t538_idx_0 * intrm_sf_mf_1263 ; t1585 = t1199 +
intrm_sf_mf_1371 ; t1597 = t1585 / 2.0 * 0.32 ; t1219 = - t1223 * 0.01 / (
t1597 == 0.0 ? 1.0E-16 : t1597 ) ; intrm_sf_mf_1263 = t1219 >= 0.0 ? t1219 :
- t1219 ; t1219 = intrm_sf_mf_1263 > 1000.0 ? intrm_sf_mf_1263 : 1000.0 ;
t1589 = pmf_log10 ( 6.9 / ( t1219 == 0.0 ? 1.0E-16 : t1219 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1219 == 0.0 ? 1.0E-16 : t1219
) + 0.00017169489553429715 ) * 3.24 ; t1223 = 1.0 / ( t1589 == 0.0 ? 1.0E-16
: t1589 ) ; t1589 = t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ; if ( (
pmf_pow ( t1589 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1223 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t831 = ( pmf_pow ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1223 / 8.0 ) * 12.7 + 1.0 ; t1224
= ( t1219 - 1000.0 ) * ( t1223 / 8.0 ) * ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ) / (
t831 == 0.0 ? 1.0E-16 : t831 ) ; } else { t1224 = ( t1219 - 1000.0 ) * (
t1223 / 8.0 ) * ( ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ) /
1.0E-6 ; } t1225 = ( intrm_sf_mf_1263 - 2000.0 ) / 2000.0 ; t1226 = t1225 *
t1225 * 3.0 - t1225 * t1225 * t1225 * 2.0 ; if ( intrm_sf_mf_1263 <= 2000.0 )
{ t1225 = 3.66 ; } else if ( intrm_sf_mf_1263 >= 4000.0 ) { t1225 = t1224 ; }
else { t1225 = ( 1.0 - t1226 ) * 3.66 + t1224 * t1226 ; } t1597 = t1225 *
10.709248339636167 ; t1649 = t1589 / 2.0 ; if ( intrm_sf_mf_1263 > t1597 /
0.32 / ( t1649 == 0.0 ? 1.0E-16 : t1649 ) / 30.0 ) { U_idx_3 = ( t852 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) / 2.0 ;
t1224 = t1225 * 10.709248339636167 / ( intrm_sf_mf_1263 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1263 ) / 0.32 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; } else {
t1224 = 30.0 ; } if ( X [ 15ULL ] <= 0.0 ) { t1225 = 0.0 ; } else { t1225 = X
[ 15ULL ] >= 1.0 ? 1.0 : X [ 15ULL ] ; } if ( X [ 14ULL ] <= 0.0 ) { t1226 =
0.0 ; } else { t1226 = X [ 14ULL ] >= 1.0 ? 1.0 : X [ 14ULL ] ; } t1227 = ( (
( 1.0 - t1225 ) - t1226 ) * 296.802103844292 + t1225 * 461.523 ) + t1226 *
259.836612622973 ; t1230 = - ( ( X [ 13ULL ] / ( X [ 48ULL ] == 0.0 ? 1.0E-16
: X [ 48ULL ] ) - X [ 381ULL ] / ( X [ 382ULL ] == 0.0 ? 1.0E-16 : X [ 382ULL
] ) ) * X [ 369ULL ] * t1227 ) / 0.32 ; if ( X [ 381ULL ] <=
216.59999999999997 ) { t831 = 216.59999999999997 ; } else { t831 = X [ 381ULL
] >= 623.15 ? 623.15 : X [ 381ULL ] ; } t825 = t831 * t831 ; t1232 = ( ( (
1074.1165326382641 + t831 * - 0.2214565261064495 ) + t825 *
0.00037212980109014541 ) * ( ( 1.0 - t1225 ) - t1226 ) + ( (
1479.6504774711011 + t831 * 1.2002114337048222 ) + t825 * -
0.00038614513167823636 ) * t1225 ) + ( ( 900.63941224838356 + t831 * -
0.044484923911382625 ) + t825 * 0.00036936011832044979 ) * t1226 ; t1613 =
t1232 - t1227 ; t825 = t1232 / ( t1613 == 0.0 ? 1.0E-16 : t1613 ) ; t1234 =
pmf_sqrt ( t1230 * t1230 * 9.999999999999999E-14 + fabs ( X [ 381ULL ] * t825
* t1227 ) * 1.0E-9 ) ; if ( X [ 86ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = X [ 86ULL ] >=
1.0 ? 1.0 : X [ 86ULL ] ; } if ( X [ 85ULL ] <= 0.0 ) { intrm_sf_mf_1372 =
0.0 ; } else { intrm_sf_mf_1372 = X [ 85ULL ] >= 1.0 ? 1.0 : X [ 85ULL ] ; }
t539 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_nearest_prelookup ( & fg_efOut .
mField0 [ 0ULL ] , & fg_efOut . mField1 [ 0ULL ] , & fg_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t539 [ 0ULL ] , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t54 = fg_efOut ;
tlu2_1d_linear_nearest_value ( & gg_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = gg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hg_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , &
t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = hg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ig_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField16 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t538_idx_0 = ig_efOut [ 0 ] ; t1237 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) -
intrm_sf_mf_1372 ) * t540_idx_0 + t537_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) + t538_idx_0 *
intrm_sf_mf_1372 ; t1613 = X [ 382ULL ] * X [ 382ULL ] * t825 ; t1238 = -
pmf_sqrt ( fabs ( t1613 / ( t1227 == 0.0 ? 1.0E-16 : t1227 ) / ( X [ 381ULL ]
== 0.0 ? 1.0E-16 : X [ 381ULL ] ) ) ) * 0.32 ; if ( t1238 >= 0.0 ) { t1239 =
t1238 * 100000.0 ; } else { t1239 = - t1238 * 100000.0 ; } U_idx_3 = t1237 *
0.32 ; t852 = t1239 * 0.01 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; t831 =
X [ 13ULL ] * t1227 ; t1242 = X [ 48ULL ] / ( t831 == 0.0 ? 1.0E-16 : t831 )
; t1650 = t1242 * 6.4000000000000011E-5 ; t1243 = t1238 * t1237 *
2.9973120849090416 / ( t1650 == 0.0 ? 1.0E-16 : t1650 ) ; t1245 = t852 >= 1.0
? t852 : 1.0 ; t831 = pmf_log10 ( 6.9 / ( t1245 == 0.0 ? 1.0E-16 : t1245 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1245 == 0.0 ? 1.0E-16 : t1245
) + 0.00017169489553429715 ) * 3.24 ; t1661 = t1242 * 0.0020480000000000003 ;
t1239 = t1238 * t1239 * ( 1.0 / ( t831 == 0.0 ? 1.0E-16 : t831 ) ) *
0.046833001326703774 / ( t1661 == 0.0 ? 1.0E-16 : t1661 ) ; t1247 = ( t852 -
2000.0 ) / 2000.0 ; U_idx_2 = t1247 * t1247 * 3.0 - t1247 * t1247 * t1247 *
2.0 ; if ( t852 <= 2000.0 ) { t1247 = t1243 * 1.0E-5 ; } else if ( t852 >=
4000.0 ) { t1247 = t1239 * 1.0E-5 ; } else { t1247 = ( ( 1.0 - U_idx_2 ) *
t1243 + t1239 * U_idx_2 ) * 1.0E-5 ; } t1234 = - ( X [ 369ULL ] * t1234 ) /
0.32 * 0.00031622776601683789 + t1247 ; t1239 = - ( ( X [ 13ULL ] / ( X [
48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) - X [ 383ULL ] / ( X [ 384ULL ] ==
0.0 ? 1.0E-16 : X [ 384ULL ] ) ) * X [ 342ULL ] * t1227 ) / 0.32 ; if ( X [
383ULL ] <= 216.59999999999997 ) { t852 = 216.59999999999997 ; } else { t852
= X [ 383ULL ] >= 623.15 ? 623.15 : X [ 383ULL ] ; } t1251 = t852 * t852 ;
t1243 = ( ( ( 1074.1165326382641 + t852 * - 0.2214565261064495 ) + t1251 *
0.00037212980109014541 ) * ( ( 1.0 - t1225 ) - t1226 ) + ( (
1479.6504774711011 + t852 * 1.2002114337048222 ) + t1251 * -
0.00038614513167823636 ) * t1225 ) + ( ( 900.63941224838356 + t852 * -
0.044484923911382625 ) + t1251 * 0.00036936011832044979 ) * t1226 ; t1633 =
t1243 - t1227 ; t1225 = t1243 / ( t1633 == 0.0 ? 1.0E-16 : t1633 ) ; t1226 =
pmf_sqrt ( t1239 * t1239 * 9.999999999999999E-14 + fabs ( X [ 383ULL ] *
t1225 * t1227 ) * 1.0E-9 ) ; t1633 = X [ 384ULL ] * X [ 384ULL ] * t1225 ;
t1247 = - pmf_sqrt ( fabs ( t1633 / ( t1227 == 0.0 ? 1.0E-16 : t1227 ) / ( X
[ 383ULL ] == 0.0 ? 1.0E-16 : X [ 383ULL ] ) ) ) * 0.32 ; if ( t1247 >= 0.0 )
{ U_idx_2 = t1247 * 100000.0 ; } else { U_idx_2 = - t1247 * 100000.0 ; } t766
= U_idx_2 * 0.01 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; t1251 = t1247 *
t1237 * 2.9973120849090416 / ( t1650 == 0.0 ? 1.0E-16 : t1650 ) ; t1252 =
t766 >= 1.0 ? t766 : 1.0 ; t1649 = pmf_log10 ( 6.9 / ( t1252 == 0.0 ? 1.0E-16
: t1252 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1252 == 0.0 ?
1.0E-16 : t1252 ) + 0.00017169489553429715 ) * 3.24 ; U_idx_2 = t1247 *
U_idx_2 * ( 1.0 / ( t1649 == 0.0 ? 1.0E-16 : t1649 ) ) * 0.046833001326703774
/ ( t1661 == 0.0 ? 1.0E-16 : t1661 ) ; t1253 = ( t766 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I = t1253 * t1253 *
3.0 - t1253 * t1253 * t1253 * 2.0 ; if ( t766 <= 2000.0 ) { t1253 = t1251 *
1.0E-5 ; } else if ( t766 >= 4000.0 ) { t1253 = U_idx_2 * 1.0E-5 ; } else {
t1253 = ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I )
* t1251 + U_idx_2 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I
) * 1.0E-5 ; } t1226 = - ( X [ 342ULL ] * t1226 ) / 0.32 *
0.00031622776601683789 + t1253 ; if ( 1.0 - X [ 15ULL ] >= 0.01 ) { t766 =
1.0 - X [ 15ULL ] ; } else if ( 1.0 - X [ 15ULL ] >= - 0.1 ) { t766 = pmf_exp
( ( ( 1.0 - X [ 15ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t766 =
1.6701700790245661E-7 ; } t1251 = X [ 14ULL ] / ( t766 == 0.0 ? 1.0E-16 :
t766 ) * - 36.965491221318985 + 296.802103844292 ; t539 [ 0ULL ] = X [ 13ULL
] ; tlu2_linear_linear_prelookup ( & jg_efOut . mField0 [ 0ULL ] , & jg_efOut
. mField1 [ 0ULL ] , & jg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField1 , & t539 [ 0ULL ] , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ;
t37 = jg_efOut ; tlu2_1d_linear_linear_value ( & kg_efOut [ 0ULL ] , & t37 .
mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t61 [ 0 ] = kg_efOut [ 0 ]
; t1253 = pmf_exp ( pmf_log ( X [ 48ULL ] * 100000.0 ) - t61 [ 0ULL ] ) ; if
( t1253 >= 1.0 ) { t1649 = ( t1253 - 1.0 ) * 461.523 + t1251 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I = t1251 / ( t1649
== 0.0 ? 1.0E-16 : t1649 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I = 1.0 ; }
tlu2_1d_linear_nearest_value ( & lg_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t539 [ 0 ] = lg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mg_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t540_idx_0 = mg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ng_efOut [ 0ULL ] , & t54 . mField0 [ 0ULL ]
, & t54 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField18 ,
& t62 [ 0ULL ] , & t63 [ 0ULL ] ) ; t537_idx_0 = ng_efOut [ 0 ] ; U_idx_2 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) -
intrm_sf_mf_1372 ) * t539 [ 0ULL ] + t540_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) + t537_idx_0 *
intrm_sf_mf_1372 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = ( - X [ 369ULL
] - ( - X [ 342ULL ] ) ) / 2.0 ; t1649 = intrm_sf_mf_1371 + t1237 ; t1661 =
t1649 / 2.0 * 0.32 ; intrm_sf_mf_1371 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg : 0.0 ) * 0.01 /
( t1661 == 0.0 ? 1.0E-16 : t1661 ) ; intrm_sf_mf_1372 = intrm_sf_mf_1371 >=
0.0 ? intrm_sf_mf_1371 : - intrm_sf_mf_1371 ; intrm_sf_mf_1371 =
intrm_sf_mf_1372 > 1000.0 ? intrm_sf_mf_1372 : 1000.0 ; t1650 = pmf_log10 (
6.9 / ( intrm_sf_mf_1371 == 0.0 ? 1.0E-16 : intrm_sf_mf_1371 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1371 == 0.0 ?
1.0E-16 : intrm_sf_mf_1371 ) + 0.00017169489553429715 ) * 3.24 ; t1256 = 1.0
/ ( t1650 == 0.0 ? 1.0E-16 : t1650 ) ; t1650 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + U_idx_2 ;
if ( ( pmf_pow ( t1650 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1256 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1683 = ( pmf_pow ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + U_idx_2 ) /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1256 / 8.0 ) * 12.7 + 1.0 ;
t1257 = ( intrm_sf_mf_1371 - 1000.0 ) * ( t1256 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + U_idx_2 ) /
2.0 ) / ( t1683 == 0.0 ? 1.0E-16 : t1683 ) ; } else { t1257 = (
intrm_sf_mf_1371 - 1000.0 ) * ( t1256 / 8.0 ) * ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + U_idx_2 ) /
2.0 ) / 1.0E-6 ; } intrm_sf_mf_1402 = ( intrm_sf_mf_1372 - 2000.0 ) / 2000.0
; t1262 = intrm_sf_mf_1402 * intrm_sf_mf_1402 * 3.0 - intrm_sf_mf_1402 *
intrm_sf_mf_1402 * intrm_sf_mf_1402 * 2.0 ; if ( intrm_sf_mf_1372 <= 2000.0 )
{ intrm_sf_mf_1402 = 3.66 ; } else if ( intrm_sf_mf_1372 >= 4000.0 ) {
intrm_sf_mf_1402 = t1257 ; } else { intrm_sf_mf_1402 = ( 1.0 - t1262 ) * 3.66
+ t1257 * t1262 ; } t1661 = intrm_sf_mf_1402 * 10.709248339636167 ; t1674 =
t1650 / 2.0 ; if ( intrm_sf_mf_1372 > t1661 / 0.32 / ( t1674 == 0.0 ? 1.0E-16
: t1674 ) / 30.0 ) { t831 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg + U_idx_2 ) /
2.0 ; t1257 = intrm_sf_mf_1402 * 10.709248339636167 / ( intrm_sf_mf_1372 ==
0.0 ? 1.0E-16 : intrm_sf_mf_1372 ) / 0.32 / ( t831 == 0.0 ? 1.0E-16 : t831 )
; } else { t1257 = 30.0 ; } t1671 = intrm_sf_mf_1395 + t1237 ; t1683 = t1671
/ 2.0 * 0.32 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg <= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg : 0.0 ) * 0.01 /
( t1683 == 0.0 ? 1.0E-16 : t1683 ) ; intrm_sf_mf_1395 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg =
intrm_sf_mf_1395 > 1000.0 ? intrm_sf_mf_1395 : 1000.0 ; t1674 = pmf_log10 (
6.9 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) +
0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = 1.0 / ( t1674
== 0.0 ? 1.0E-16 : t1674 ) ; t1674 = intrm_sf_mf_829 + U_idx_2 ; if ( (
pmf_pow ( t1674 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) { t831 = ( pmf_pow ( ( intrm_sf_mf_829 + U_idx_2 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 ; intrm_sf_mf_1402 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg - 1000.0 ) *
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * ( (
intrm_sf_mf_829 + U_idx_2 ) / 2.0 ) / ( t831 == 0.0 ? 1.0E-16 : t831 ) ; }
else { intrm_sf_mf_1402 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg - 1000.0 ) *
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * ( (
intrm_sf_mf_829 + U_idx_2 ) / 2.0 ) / 1.0E-6 ; } t1262 = ( intrm_sf_mf_1395 -
2000.0 ) / 2000.0 ; t831 = t1262 * t1262 * 3.0 - t1262 * t1262 * t1262 * 2.0
; if ( intrm_sf_mf_1395 <= 2000.0 ) { t1262 = 3.66 ; } else if (
intrm_sf_mf_1395 >= 4000.0 ) { t1262 = intrm_sf_mf_1402 ; } else { t1262 = (
1.0 - t831 ) * 3.66 + intrm_sf_mf_1402 * t831 ; } t1683 = t1262 *
10.709248339636167 ; t831 = t1674 / 2.0 ; if ( intrm_sf_mf_1395 > t1683 /
0.32 / ( t831 == 0.0 ? 1.0E-16 : t831 ) / 30.0 ) { t831 = ( intrm_sf_mf_829 +
U_idx_2 ) / 2.0 ; intrm_sf_mf_1402 = t1262 * 10.709248339636167 / (
intrm_sf_mf_1395 == 0.0 ? 1.0E-16 : intrm_sf_mf_1395 ) / 0.32 / ( t831 == 0.0
? 1.0E-16 : t831 ) ; } else { intrm_sf_mf_1402 = 30.0 ; } U_idx_2 = ( X [
307ULL ] >= 0.0 ? X [ 307ULL ] : - X [ 307ULL ] ) * 0.05 / ( t1334 == 0.0 ?
1.0E-16 : t1334 ) ; t1262 = U_idx_2 >= 1.0 ? U_idx_2 : 1.0 ; t831 = ( X [
342ULL ] >= 0.0 ? X [ 342ULL ] : - X [ 342ULL ] ) * 0.05 / ( t1727 == 0.0 ?
1.0E-16 : t1727 ) ; t1265 = t831 >= 1.0 ? t831 : 1.0 ; if ( - X [ 330ULL ] >=
0.0 ) { t831 = - X [ 330ULL ] ; } else { t831 = X [ 330ULL ] ; } t831 = t831
* 0.05 / ( t1727 == 0.0 ? 1.0E-16 : t1727 ) ; t1727 = t831 >= 1.0 ? t831 :
1.0 ; if ( - X [ 307ULL ] >= 0.0 ) { t831 = - X [ 307ULL ] ; } else { t831 =
X [ 307ULL ] ; } t831 = t831 * 0.01 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 )
; t1269 = t831 >= 1.0 ? t831 : 1.0 ; t831 = ( X [ 369ULL ] >= 0.0 ? X [
369ULL ] : - X [ 369ULL ] ) * 0.01 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) ;
t1271 = t831 >= 1.0 ? t831 : 1.0 ; if ( - X [ 369ULL ] >= 0.0 ) { t540_idx_0
= - X [ 369ULL ] ; } else { t540_idx_0 = X [ 369ULL ] ; } t540_idx_0 =
t540_idx_0 * 0.01 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ; t537_idx_0 =
t540_idx_0 >= 1.0 ? t540_idx_0 : 1.0 ; t831 = ( X [ 129ULL ] >= 0.0 ? X [
129ULL ] : - X [ 129ULL ] ) * 0.01 / ( t850 == 0.0 ? 1.0E-16 : t850 ) ; if (
- X [ 342ULL ] >= 0.0 ) { t540_idx_0 = - X [ 342ULL ] ; } else { t540_idx_0 =
X [ 342ULL ] ; } t540_idx_0 = t540_idx_0 * 0.01 / ( U_idx_3 == 0.0 ? 1.0E-16
: U_idx_3 ) ; U_idx_9 = t540_idx_0 >= 1.0 ? t540_idx_0 : 1.0 ; t540_idx_0 =
t831 >= 1.0 ? t831 : 1.0 ; if ( U_idx_10 >= 1.0 ) { t831 = 1.0 ; } else {
t831 = U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; } intrm_sf_mf_1457 = ( fabs ( t831
- U_idx_10 ) > 0.001 ) ; if ( - X [ 117ULL ] >= 0.0 ) { t831 = - X [ 117ULL ]
; } else { t831 = X [ 117ULL ] ; } t831 = t831 * 0.01 / ( t850 == 0.0 ?
1.0E-16 : t850 ) ; t850 = t831 >= 1.0 ? t831 : 1.0 ; if ( - X [ 167ULL ] >=
0.0 ) { t831 = - X [ 167ULL ] ; } else { t831 = X [ 167ULL ] ; } t831 = t831
* 0.01 / ( t959 == 0.0 ? 1.0E-16 : t959 ) ; intrm_sf_mf_829 = t831 >= 1.0 ?
t831 : 1.0 ; t831 = ( X [ 181ULL ] >= 0.0 ? X [ 181ULL ] : - X [ 181ULL ] ) *
0.01 / ( t959 == 0.0 ? 1.0E-16 : t959 ) ; t959 = t831 >= 1.0 ? t831 : 1.0 ;
if ( - X [ 181ULL ] >= 0.0 ) { t831 = - X [ 181ULL ] ; } else { t831 = X [
181ULL ] ; } t831 = t831 * 0.05 / ( t1072 == 0.0 ? 1.0E-16 : t1072 ) ; t852 =
t831 >= 1.0 ? t831 : 1.0 ; t831 = ( X [ 258ULL ] >= 0.0 ? X [ 258ULL ] : - X
[ 258ULL ] ) * 0.05 / ( t1072 == 0.0 ? 1.0E-16 : t1072 ) ; t1072 = t831 >=
1.0 ? t831 : 1.0 ; if ( - X [ 258ULL ] >= 0.0 ) { t831 = - X [ 258ULL ] ; }
else { t831 = X [ 258ULL ] ; } t831 = t831 * 0.01 / ( t1160 == 0.0 ? 1.0E-16
: t1160 ) ; U_idx_2 = t831 >= 1.0 ? t831 : 1.0 ; t831 = ( X [ 272ULL ] >= 0.0
? X [ 272ULL ] : - X [ 272ULL ] ) * 0.01 / ( t1160 == 0.0 ? 1.0E-16 : t1160 )
; t1160 = t831 >= 1.0 ? t831 : 1.0 ; if ( - X [ 272ULL ] >= 0.0 ) { t831 = -
X [ 272ULL ] ; } else { t831 = X [ 272ULL ] ; } t831 = t831 * 0.01 / ( t1248
== 0.0 ? 1.0E-16 : t1248 ) ; t538_idx_0 = t831 >= 1.0 ? t831 : 1.0 ; if ( - X
[ 129ULL ] >= 0.0 ) { t831 = - X [ 129ULL ] ; } else { t831 = X [ 129ULL ] ;
} t831 = t831 * 0.01 / ( t1248 == 0.0 ? 1.0E-16 : t1248 ) ; t1248 = t831 >=
1.0 ? t831 : 1.0 ; if ( - X [ 239ULL ] >= 0.0 ) { t831 = - X [ 239ULL ] ; }
else { t831 = X [ 239ULL ] ; } t831 = t831 * 0.05 / ( t1334 == 0.0 ? 1.0E-16
: t1334 ) ; U_idx_3 = t831 >= 1.0 ? t831 : 1.0 ; if ( U_idx_5 >= 0.0 ) { t55
= true ; } else { t55 = ( X [ 35ULL ] > 0.0 ) ; } if ( X [ 99ULL ] >= 0.0 ) {
t56 = true ; } else { t56 = ( X [ 9ULL ] > 0.0 ) ; } if ( X [ 93ULL ] >= 0.0
) { t57 = true ; } else { t57 = ( X [ 8ULL ] > 0.0 ) ; } if ( U_idx_7 >= 0.0
) { t58 = true ; } else { t58 = ( X [ 41ULL ] > 0.0 ) ; } if ( X [ 100ULL ]
>= 0.0 ) { t59 = true ; } else { t59 = ( X [ 15ULL ] > 0.0 ) ; } if ( X [
95ULL ] >= 0.0 ) { t60 = true ; } else { t60 = ( X [ 14ULL ] > 0.0 ) ; } t421
[ 0ULL ] = ( int32_T ) ! intrm_sf_mf_1457 ; t421 [ 1ULL ] = ( int32_T ) ( M [
33ULL ] != 0 ) ; t421 [ 2ULL ] = ( int32_T ) ( M [ 35ULL ] != 0 ) ; t421 [
3ULL ] = 1 ; t421 [ 4ULL ] = 1 ; t421 [ 5ULL ] = ( int32_T ) ( M [ 36ULL ] !=
0 ) ; t421 [ 6ULL ] = ( int32_T ) ( M [ 37ULL ] != 0 ) ; t421 [ 7ULL ] = (
int32_T ) ( M [ 38ULL ] != 0 ) ; t421 [ 8ULL ] = ( int32_T ) ( M [ 39ULL ] !=
0 ) ; t421 [ 9ULL ] = ( int32_T ) ( M [ 40ULL ] != 0 ) ; t421 [ 10ULL ] = (
int32_T ) ( M [ 41ULL ] != 0 ) ; t421 [ 11ULL ] = ( int32_T ) ( M [ 42ULL ]
!= 0 ) ; t421 [ 12ULL ] = ( int32_T ) ( M [ 43ULL ] != 0 ) ; t421 [ 13ULL ] =
( int32_T ) ( M [ 44ULL ] != 0 ) ; t421 [ 14ULL ] = ( int32_T ) ( M [ 46ULL ]
!= 0 ) ; t421 [ 15ULL ] = ( int32_T ) ( M [ 47ULL ] != 0 ) ; t421 [ 16ULL ] =
( int32_T ) ( M [ 48ULL ] != 0 ) ; t421 [ 17ULL ] = ( int32_T ) ( M [ 40ULL ]
!= 0 ) ; t421 [ 18ULL ] = ( int32_T ) ( M [ 41ULL ] != 0 ) ; t421 [ 19ULL ] =
( int32_T ) ( M [ 42ULL ] != 0 ) ; t421 [ 20ULL ] = ( int32_T ) ( M [ 43ULL ]
!= 0 ) ; t421 [ 21ULL ] = ( int32_T ) ( M [ 49ULL ] != 0 ) ; t421 [ 22ULL ] =
( int32_T ) ( M [ 50ULL ] != 0 ) ; t421 [ 23ULL ] = 1 ; t421 [ 24ULL ] = 1 ;
t421 [ 25ULL ] = ( int32_T ) ( M [ 51ULL ] != 0 ) ; t421 [ 26ULL ] = (
int32_T ) ( M [ 52ULL ] != 0 ) ; t421 [ 27ULL ] = ( int32_T ) ( M [ 53ULL ]
!= 0 ) ; t421 [ 28ULL ] = ( int32_T ) ( M [ 54ULL ] != 0 ) ; t421 [ 29ULL ] =
1 ; t421 [ 30ULL ] = 1 ; t421 [ 31ULL ] = ( int32_T ) ( M [ 55ULL ] != 0 ) ;
t421 [ 32ULL ] = ( int32_T ) ( M [ 57ULL ] != 0 ) ; t421 [ 33ULL ] = (
int32_T ) ( M [ 58ULL ] != 0 ) ; t421 [ 34ULL ] = ( int32_T ) ( M [ 59ULL ]
!= 0 ) ; t421 [ 35ULL ] = ( int32_T ) ( M [ 60ULL ] != 0 ) ; t421 [ 36ULL ] =
( int32_T ) ( M [ 61ULL ] != 0 ) ; t421 [ 37ULL ] = ( int32_T ) ( M [ 62ULL ]
!= 0 ) ; t421 [ 38ULL ] = ( int32_T ) ( M [ 63ULL ] != 0 ) ; t421 [ 39ULL ] =
( int32_T ) ( M [ 64ULL ] != 0 ) ; t421 [ 40ULL ] = ( int32_T ) ( M [ 65ULL ]
!= 0 ) ; t421 [ 41ULL ] = ( int32_T ) ( M [ 66ULL ] != 0 ) ; t421 [ 42ULL ] =
( int32_T ) ( M [ 68ULL ] != 0 ) ; t421 [ 43ULL ] = ( int32_T ) ( M [ 51ULL ]
!= 0 ) ; t421 [ 44ULL ] = ( int32_T ) ( M [ 52ULL ] != 0 ) ; t421 [ 45ULL ] =
( int32_T ) ( M [ 69ULL ] != 0 ) ; t421 [ 46ULL ] = ( int32_T ) ( M [ 70ULL ]
!= 0 ) ; t421 [ 47ULL ] = ( int32_T ) ( M [ 55ULL ] != 0 ) ; t421 [ 48ULL ] =
( int32_T ) ( M [ 57ULL ] != 0 ) ; t421 [ 49ULL ] = ( int32_T ) ( M [ 58ULL ]
!= 0 ) ; t421 [ 50ULL ] = ( int32_T ) ( M [ 59ULL ] != 0 ) ; t421 [ 51ULL ] =
( int32_T ) ( M [ 71ULL ] != 0 ) ; t421 [ 52ULL ] = ( int32_T ) ( M [ 72ULL ]
!= 0 ) ; t421 [ 53ULL ] = ( int32_T ) ( M [ 73ULL ] != 0 ) ; t421 [ 54ULL ] =
( int32_T ) ( M [ 74ULL ] != 0 ) ; t421 [ 55ULL ] = ( int32_T ) ( M [ 75ULL ]
!= 0 ) ; t421 [ 56ULL ] = ( int32_T ) ( M [ 76ULL ] != 0 ) ; t421 [ 57ULL ] =
( int32_T ) ( M [ 77ULL ] != 0 ) ; t421 [ 58ULL ] = 1 ; t421 [ 59ULL ] = 1 ;
t421 [ 60ULL ] = ( int32_T ) ( M [ 74ULL ] != 0 ) ; t421 [ 61ULL ] = (
int32_T ) ( M [ 75ULL ] != 0 ) ; t421 [ 62ULL ] = ( int32_T ) ( M [ 79ULL ]
!= 0 ) ; t421 [ 63ULL ] = ( int32_T ) ( M [ 80ULL ] != 0 ) ; t421 [ 64ULL ] =
( int32_T ) t55 ; t421 [ 65ULL ] = 1 ; t421 [ 66ULL ] = ( int32_T ) ( M [
60ULL ] != 0 ) ; t421 [ 67ULL ] = ( int32_T ) ( M [ 61ULL ] != 0 ) ; t421 [
68ULL ] = ( int32_T ) ( M [ 62ULL ] != 0 ) ; t421 [ 69ULL ] = ( int32_T ) ( M
[ 63ULL ] != 0 ) ; t421 [ 70ULL ] = ( int32_T ) ( M [ 81ULL ] != 0 ) ; t421 [
71ULL ] = ( int32_T ) ( M [ 82ULL ] != 0 ) ; t421 [ 72ULL ] = ( int32_T ) ( M
[ 83ULL ] != 0 ) ; t421 [ 73ULL ] = ( int32_T ) ( M [ 84ULL ] != 0 ) ; t421 [
74ULL ] = ( int32_T ) ( M [ 85ULL ] != 0 ) ; t421 [ 75ULL ] = ( int32_T ) ( M
[ 86ULL ] != 0 ) ; t421 [ 76ULL ] = ( int32_T ) ( M [ 87ULL ] != 0 ) ; t421 [
77ULL ] = ( int32_T ) ( M [ 88ULL ] != 0 ) ; t421 [ 78ULL ] = 1 ; t421 [
79ULL ] = 1 ; t421 [ 80ULL ] = ( int32_T ) ( M [ 81ULL ] != 0 ) ; t421 [
81ULL ] = ( int32_T ) ( M [ 82ULL ] != 0 ) ; t421 [ 82ULL ] = ( int32_T ) ( M
[ 83ULL ] != 0 ) ; t421 [ 83ULL ] = ( int32_T ) ( M [ 84ULL ] != 0 ) ; t421 [
84ULL ] = ( int32_T ) ( M [ 90ULL ] != 0 ) ; t421 [ 85ULL ] = ( int32_T ) ( M
[ 91ULL ] != 0 ) ; t421 [ 86ULL ] = ( int32_T ) ( M [ 92ULL ] != 0 ) ; t421 [
87ULL ] = ( int32_T ) ( M [ 93ULL ] != 0 ) ; t421 [ 88ULL ] = ( int32_T ) ( M
[ 94ULL ] != 0 ) ; t421 [ 89ULL ] = ( int32_T ) ( M [ 95ULL ] != 0 ) ; t421 [
90ULL ] = ( int32_T ) ( M [ 96ULL ] != 0 ) ; t421 [ 91ULL ] = ( int32_T ) ( M
[ 97ULL ] != 0 ) ; t421 [ 92ULL ] = ( int32_T ) t56 ; t421 [ 93ULL ] = (
int32_T ) t57 ; t421 [ 94ULL ] = ( int32_T ) ( M [ 90ULL ] != 0 ) ; t421 [
95ULL ] = ( int32_T ) ( M [ 91ULL ] != 0 ) ; t421 [ 96ULL ] = ( int32_T ) ( M
[ 92ULL ] != 0 ) ; t421 [ 97ULL ] = ( int32_T ) ( M [ 93ULL ] != 0 ) ; t421 [
98ULL ] = ( int32_T ) ( M [ 36ULL ] != 0 ) ; t421 [ 99ULL ] = ( int32_T ) ( M
[ 37ULL ] != 0 ) ; t421 [ 100ULL ] = ( int32_T ) ( M [ 38ULL ] != 0 ) ; t421
[ 101ULL ] = ( int32_T ) ( M [ 39ULL ] != 0 ) ; t421 [ 102ULL ] = ( int32_T )
( M [ 98ULL ] != 0 ) ; t421 [ 103ULL ] = ( int32_T ) ( M [ 99ULL ] != 0 ) ;
t421 [ 104ULL ] = ( int32_T ) ( M [ 101ULL ] != 0 ) ; t421 [ 105ULL ] = (
int32_T ) ( M [ 102ULL ] != 0 ) ; t421 [ 106ULL ] = ( int32_T ) t58 ; t421 [
107ULL ] = 1 ; t421 [ 108ULL ] = ( int32_T ) ( M [ 74ULL ] != 0 ) ; t421 [
109ULL ] = ( int32_T ) ( M [ 75ULL ] != 0 ) ; t421 [ 110ULL ] = ( int32_T ) (
M [ 103ULL ] != 0 ) ; t421 [ 111ULL ] = ( int32_T ) ( M [ 104ULL ] != 0 ) ;
t421 [ 112ULL ] = ( int32_T ) ( M [ 105ULL ] != 0 ) ; t421 [ 113ULL ] = (
int32_T ) ( M [ 106ULL ] != 0 ) ; t421 [ 114ULL ] = ( int32_T ) ( M [ 107ULL
] != 0 ) ; t421 [ 115ULL ] = ( int32_T ) ( M [ 108ULL ] != 0 ) ; t421 [
116ULL ] = ( int32_T ) ( M [ 109ULL ] != 0 ) ; t421 [ 117ULL ] = ( int32_T )
( M [ 110ULL ] != 0 ) ; t421 [ 118ULL ] = ( int32_T ) ( M [ 113ULL ] != 0 ) ;
t421 [ 119ULL ] = ( int32_T ) ( M [ 114ULL ] != 0 ) ; t421 [ 120ULL ] = (
int32_T ) ( M [ 115ULL ] != 0 ) ; t421 [ 121ULL ] = 1 ; t421 [ 122ULL ] = 1 ;
t421 [ 123ULL ] = ( int32_T ) ( M [ 116ULL ] != 0 ) ; t421 [ 124ULL ] = (
int32_T ) ( M [ 117ULL ] != 0 ) ; t421 [ 125ULL ] = ( int32_T ) ( M [ 118ULL
] != 0 ) ; t421 [ 126ULL ] = ( int32_T ) ( M [ 119ULL ] != 0 ) ; t421 [
127ULL ] = ( int32_T ) ( M [ 120ULL ] != 0 ) ; t421 [ 128ULL ] = ( int32_T )
( M [ 121ULL ] != 0 ) ; t421 [ 129ULL ] = ( int32_T ) ( M [ 122ULL ] != 0 ) ;
t421 [ 130ULL ] = ( int32_T ) ( M [ 124ULL ] != 0 ) ; t421 [ 131ULL ] = (
int32_T ) ( M [ 125ULL ] != 0 ) ; t421 [ 132ULL ] = ( int32_T ) ( M [ 126ULL
] != 0 ) ; t421 [ 133ULL ] = ( int32_T ) ( M [ 127ULL ] != 0 ) ; t421 [
134ULL ] = ( int32_T ) ( M [ 128ULL ] != 0 ) ; t421 [ 135ULL ] = ( int32_T )
( M [ 120ULL ] != 0 ) ; t421 [ 136ULL ] = ( int32_T ) ( M [ 121ULL ] != 0 ) ;
t421 [ 137ULL ] = ( int32_T ) ( M [ 122ULL ] != 0 ) ; t421 [ 138ULL ] = (
int32_T ) ( M [ 124ULL ] != 0 ) ; t421 [ 139ULL ] = ( int32_T ) ( M [ 129ULL
] != 0 ) ; t421 [ 140ULL ] = ( int32_T ) ( M [ 130ULL ] != 0 ) ; t421 [
141ULL ] = 1 ; t421 [ 142ULL ] = 1 ; t421 [ 143ULL ] = ( int32_T ) ( M [
105ULL ] != 0 ) ; t421 [ 144ULL ] = ( int32_T ) ( M [ 106ULL ] != 0 ) ; t421
[ 145ULL ] = ( int32_T ) ( M [ 107ULL ] != 0 ) ; t421 [ 146ULL ] = ( int32_T
) ( M [ 108ULL ] != 0 ) ; t421 [ 147ULL ] = ( int32_T ) ( M [ 131ULL ] != 0 )
; t421 [ 148ULL ] = ( int32_T ) ( M [ 132ULL ] != 0 ) ; t421 [ 149ULL ] = (
int32_T ) ( M [ 133ULL ] != 0 ) ; t421 [ 150ULL ] = ( int32_T ) ( M [ 135ULL
] != 0 ) ; t421 [ 151ULL ] = ( int32_T ) ( M [ 136ULL ] != 0 ) ; t421 [
152ULL ] = ( int32_T ) ( M [ 137ULL ] != 0 ) ; t421 [ 153ULL ] = ( int32_T )
( M [ 138ULL ] != 0 ) ; t421 [ 154ULL ] = ( int32_T ) ( M [ 139ULL ] != 0 ) ;
t421 [ 155ULL ] = ( int32_T ) t59 ; t421 [ 156ULL ] = ( int32_T ) t60 ; t421
[ 157ULL ] = ( int32_T ) ( M [ 131ULL ] != 0 ) ; t421 [ 158ULL ] = ( int32_T
) ( M [ 132ULL ] != 0 ) ; t421 [ 159ULL ] = ( int32_T ) ( M [ 133ULL ] != 0 )
; t421 [ 160ULL ] = ( int32_T ) ( M [ 135ULL ] != 0 ) ; t421 [ 161ULL ] = (
int32_T ) ( M [ 116ULL ] != 0 ) ; t421 [ 162ULL ] = ( int32_T ) ( M [ 117ULL
] != 0 ) ; t421 [ 163ULL ] = ( int32_T ) ( M [ 118ULL ] != 0 ) ; t421 [
164ULL ] = ( int32_T ) ( M [ 119ULL ] != 0 ) ; t421 [ 165ULL ] = ( int32_T )
( M [ 140ULL ] != 0 ) ; t421 [ 166ULL ] = ( int32_T ) ( M [ 141ULL ] != 0 ) ;
t421 [ 167ULL ] = ( int32_T ) ( M [ 142ULL ] != 0 ) ; t421 [ 168ULL ] = (
int32_T ) ( M [ 143ULL ] != 0 ) ; t421 [ 169ULL ] = ( int32_T ) ( M [ 144ULL
] != 0 ) ; t421 [ 170ULL ] = 1 ; t421 [ 171ULL ] = 1 ; t421 [ 172ULL ] = 1 ;
t421 [ 173ULL ] = 1 ; t421 [ 174ULL ] = 1 ; t421 [ 175ULL ] = 1 ; t421 [
176ULL ] = 1 ; t421 [ 177ULL ] = 1 ; t421 [ 178ULL ] = 1 ; t421 [ 179ULL ] =
1 ; t421 [ 180ULL ] = 1 ; t421 [ 181ULL ] = 1 ; t421 [ 182ULL ] = 1 ; t421 [
183ULL ] = 1 ; t421 [ 184ULL ] = 1 ; t421 [ 185ULL ] = 1 ; t421 [ 186ULL ] =
1 ; t421 [ 187ULL ] = 1 ; t421 [ 188ULL ] = 1 ; t421 [ 189ULL ] = 1 ; t421 [
190ULL ] = 1 ; t421 [ 191ULL ] = 1 ; t421 [ 192ULL ] = 1 ; t421 [ 193ULL ] =
1 ; t421 [ 194ULL ] = 1 ; t421 [ 195ULL ] = ( int32_T ) ( t734 > 0.0 ) ; t421
[ 196ULL ] = ( int32_T ) ( ( ! ( t734 > 0.0 ) ) || ( pmf_log ( t734 ) -
t42_idx_0 < 663.67513503334737 ) ) ; t421 [ 197ULL ] = ( int32_T ) ( t750 !=
0.0 ) ; t421 [ 198ULL ] = ( int32_T ) ( t742 > 0.0 ) ; t421 [ 199ULL ] = (
int32_T ) ( ( ! ( t742 > 0.0 ) ) || ( pmf_log ( t742 ) - t42_idx_0 <
663.67513503334737 ) ) ; t421 [ 200ULL ] = ( int32_T ) ( t758 != 0.0 ) ; t421
[ 201ULL ] = 1 ; t421 [ 202ULL ] = 1 ; t421 [ 203ULL ] = ( int32_T ) ( t2182
!= 0.0 ) ; t421 [ 204ULL ] = 1 ; t421 [ 205ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 >= 1.0 ) ) ||
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 > 0.0 ) ) ;
t421 [ 206ULL ] = 1 ; t421 [ 207ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 <= 13986.0 )
) || ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15
/ 14000.0 > 0.0 ) ) ; t421 [ 208ULL ] = 1 ; t421 [ 209ULL ] = 1 ; t421 [
210ULL ] = 1 ; t421 [ 211ULL ] = 1 ; t421 [ 212ULL ] = ( int32_T ) ( t749 >=
0.0 ) ; t421 [ 213ULL ] = ( int32_T ) ( ( ! ( t749 >= 0.0 ) ) || ( t2183 !=
0.0 ) ) ; t831 = pmf_sqrt ( t749 ) * t741 ; t421 [ 214ULL ] = ( int32_T ) ( (
! ( t749 >= 0.0 ) ) || ( ( t749 >= 0.0 ) && ( ! ( t2183 != 0.0 ) ) ) || (
t831 / ( t2183 == 0.0 ? 1.0E-16 : t2183 ) > 0.0 ) ) ; t421 [ 215ULL ] = (
int32_T ) ( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15
* 0.022577863652674921 / 192970.66424 * 241812.2160511087 /
0.0020158806832745466 * 0.001 + ( ( ( X [ 94ULL ] - X [ 93ULL ] * -
3931.85243448965 ) + ( X [ 96ULL ] - X [ 95ULL ] * - 271.011680699068 ) ) + (
X [ 92ULL ] - X [ 91ULL ] * - 2546.6190535198302 ) ) ) + ( X [ 97ULL ] + X [
98ULL ] ) != 0.0 ) ; t421 [ 216ULL ] = 1 ; t421 [ 217ULL ] = 1 ; t421 [
218ULL ] = 1 ; t421 [ 219ULL ] = 1 ; t421 [ 220ULL ] = 1 ; t421 [ 221ULL ] =
1 ; t421 [ 222ULL ] = 1 ; t421 [ 223ULL ] = 1 ; t421 [ 224ULL ] = 1 ; t421 [
225ULL ] = 1 ; t421 [ 226ULL ] = 1 ; t421 [ 227ULL ] = ( int32_T ) ( ( X [
117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 == X [ 117ULL ] * X [ 117ULL
] + 1.8324100759713822E-12 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 228ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 == X [ 117ULL
] * X [ 117ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t421 [ 229ULL ]
= 1 ; t421 [ 230ULL ] = 1 ; t421 [ 231ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 2.0914103314136477E-13 == X [ 117ULL ] * X [ 117ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 232ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 2.0914103314136477E-13 == X [ 117ULL
] * X [ 117ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t421 [ 233ULL ]
= 1 ; t421 [ 234ULL ] = 1 ; t421 [ 235ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 1.4768645655431171E-13 == X [ 117ULL ] * X [ 117ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 236ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 1.4768645655431171E-13 == X [ 117ULL
] * X [ 117ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t421 [ 237ULL ]
= ( int32_T ) ( t757 * 293.15 != 0.0 ) ; t421 [ 238ULL ] = ( int32_T ) ( X [
18ULL ] != 0.0 ) ; t421 [ 239ULL ] = ( int32_T ) ( X [ 131ULL ] != 0.0 ) ;
t421 [ 240ULL ] = 1 ; t421 [ 241ULL ] = 1 ; t421 [ 242ULL ] = 1 ; t421 [
243ULL ] = ( int32_T ) ( t832 - t765 != 0.0 ) ; t421 [ 244ULL ] = 1 ; t421 [
245ULL ] = 1 ; t421 [ 246ULL ] = ( int32_T ) ( ( t830 * t830 *
9.999999999999999E-14 + fabs ( X [ 130ULL ] * t833 * t765 ) * 1.0E-9 == t830
* t830 * 9.999999999999999E-14 + fabs ( X [ 130ULL ] * t833 * t765 ) * 1.0E-9
) && ( fabs ( t830 * t830 * 9.999999999999999E-14 + fabs ( X [ 130ULL ] *
t833 * t765 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 247ULL ] = ( int32_T
) ( ( ! ( t830 * t830 * 9.999999999999999E-14 + fabs ( X [ 130ULL ] * t833 *
t765 ) * 1.0E-9 == t830 * t830 * 9.999999999999999E-14 + fabs ( X [ 130ULL ]
* t833 * t765 ) * 1.0E-9 ) ) || ( ! ( fabs ( t830 * t830 *
9.999999999999999E-14 + fabs ( X [ 130ULL ] * t833 * t765 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t830 * t830 * 9.999999999999999E-14 + fabs ( X [
130ULL ] * t833 * t765 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 248ULL ] = 1 ; t421 [
249ULL ] = 1 ; t421 [ 250ULL ] = ( int32_T ) ( t765 != 0.0 ) ; t421 [ 251ULL
] = ( int32_T ) ( ( ! ( t765 != 0.0 ) ) || ( X [ 130ULL ] != 0.0 ) ) ; t421 [
252ULL ] = 1 ; t421 [ 253ULL ] = ( int32_T ) ( ( ! ( t765 != 0.0 ) ) || ( (
t765 != 0.0 ) && ( ! ( X [ 130ULL ] != 0.0 ) ) ) || ( fabs ( t846 / ( t765 ==
0.0 ? 1.0E-16 : t765 ) / ( X [ 130ULL ] == 0.0 ? 1.0E-16 : X [ 130ULL ] ) )
>= 0.0 ) ) ; t421 [ 254ULL ] = ( int32_T ) ( t837 * 7.8539816339744827E-5 !=
0.0 ) ; t421 [ 255ULL ] = ( int32_T ) ( X [ 17ULL ] * t765 != 0.0 ) ; t421 [
256ULL ] = ( int32_T ) ( t844 * 1.5707963267948965E-8 != 0.0 ) ; t421 [
257ULL ] = ( int32_T ) ( t847 != 0.0 ) ; t421 [ 258ULL ] = ( int32_T ) ( ( !
( t847 != 0.0 ) ) || ( 6.9 / ( t847 == 0.0 ? 1.0E-16 : t847 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 259ULL ] = 1 ; t421 [ 260ULL ] = 1
; t421 [ 261ULL ] = ( int32_T ) ( ( ! ( t847 != 0.0 ) ) || ( ( t847 != 0.0 )
&& ( ! ( 6.9 / ( t847 == 0.0 ? 1.0E-16 : t847 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t847 == 0.0 ? 1.0E-16 : t847 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t847 == 0.0 ? 1.0E-16 : t847 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 262ULL ] = ( int32_T )
( t844 * 1.2337005501361697E-10 != 0.0 ) ; t421 [ 263ULL ] = 1 ; t421 [
264ULL ] = 1 ; t421 [ 265ULL ] = 1 ; t421 [ 266ULL ] = 1 ; t421 [ 267ULL ] =
( int32_T ) ( X [ 18ULL ] != 0.0 ) ; t421 [ 268ULL ] = ( int32_T ) ( X [
135ULL ] != 0.0 ) ; t421 [ 269ULL ] = 1 ; t421 [ 270ULL ] = 1 ; t421 [ 271ULL
] = 1 ; t421 [ 272ULL ] = ( int32_T ) ( t845 - t765 != 0.0 ) ; t421 [ 273ULL
] = 1 ; t421 [ 274ULL ] = 1 ; t421 [ 275ULL ] = ( int32_T ) ( ( t839 * t839 *
9.999999999999999E-14 + fabs ( X [ 134ULL ] * t829 * t765 ) * 1.0E-9 == t839
* t839 * 9.999999999999999E-14 + fabs ( X [ 134ULL ] * t829 * t765 ) * 1.0E-9
) && ( fabs ( t839 * t839 * 9.999999999999999E-14 + fabs ( X [ 134ULL ] *
t829 * t765 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 276ULL ] = ( int32_T
) ( ( ! ( t839 * t839 * 9.999999999999999E-14 + fabs ( X [ 134ULL ] * t829 *
t765 ) * 1.0E-9 == t839 * t839 * 9.999999999999999E-14 + fabs ( X [ 134ULL ]
* t829 * t765 ) * 1.0E-9 ) ) || ( ! ( fabs ( t839 * t839 *
9.999999999999999E-14 + fabs ( X [ 134ULL ] * t829 * t765 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t839 * t839 * 9.999999999999999E-14 + fabs ( X [
134ULL ] * t829 * t765 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 277ULL ] = 1 ; t421 [
278ULL ] = 1 ; t421 [ 279ULL ] = ( int32_T ) ( t765 != 0.0 ) ; t421 [ 280ULL
] = ( int32_T ) ( ( ! ( t765 != 0.0 ) ) || ( X [ 134ULL ] != 0.0 ) ) ; t421 [
281ULL ] = 1 ; t421 [ 282ULL ] = ( int32_T ) ( ( ! ( t765 != 0.0 ) ) || ( (
t765 != 0.0 ) && ( ! ( X [ 134ULL ] != 0.0 ) ) ) || ( fabs ( t866 / ( t765 ==
0.0 ? 1.0E-16 : t765 ) / ( X [ 134ULL ] == 0.0 ? 1.0E-16 : X [ 134ULL ] ) )
>= 0.0 ) ) ; t421 [ 283ULL ] = ( int32_T ) ( t837 * 7.8539816339744827E-5 !=
0.0 ) ; t421 [ 284ULL ] = ( int32_T ) ( t844 * 1.5707963267948965E-8 != 0.0 )
; t421 [ 285ULL ] = ( int32_T ) ( t853 != 0.0 ) ; t421 [ 286ULL ] = ( int32_T
) ( ( ! ( t853 != 0.0 ) ) || ( 6.9 / ( t853 == 0.0 ? 1.0E-16 : t853 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 287ULL ] = 1 ; t421 [ 288ULL ] = 1
; t421 [ 289ULL ] = ( int32_T ) ( ( ! ( t853 != 0.0 ) ) || ( ( t853 != 0.0 )
&& ( ! ( 6.9 / ( t853 == 0.0 ? 1.0E-16 : t853 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t853 == 0.0 ? 1.0E-16 : t853 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t853 == 0.0 ? 1.0E-16 : t853 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 290ULL ] = ( int32_T )
( t844 * 1.2337005501361697E-10 != 0.0 ) ; t421 [ 291ULL ] = 1 ; t421 [
292ULL ] = 1 ; t421 [ 293ULL ] = 1 ; t421 [ 294ULL ] = 1 ; t421 [ 295ULL ] =
( int32_T ) ( ( ! ( X [ 129ULL ] >= 0.0 ) ) || ( t838 != 0.0 ) ) ; t421 [
296ULL ] = ( int32_T ) ( ( X [ 129ULL ] >= 0.0 ) || ( t838 != 0.0 ) ) ; t421
[ 297ULL ] = ( int32_T ) ( ( ! ( - X [ 117ULL ] >= 0.0 ) ) || (
intrm_sf_mf_47 != 0.0 ) ) ; t421 [ 298ULL ] = ( int32_T ) ( ( - X [ 117ULL ]
>= 0.0 ) || ( intrm_sf_mf_47 != 0.0 ) ) ; t421 [ 299ULL ] = 1 ; t421 [ 300ULL
] = ( int32_T ) ( ( ! ( 1.0 - X [ 19ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [
19ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 19ULL ] >=
0.01 ) ) ; t421 [ 301ULL ] = 1 ; t421 [ 302ULL ] = ( int32_T ) ( t840 != 0.0
) ; t421 [ 303ULL ] = ( int32_T ) ( X [ 18ULL ] * 100000.0 > 0.0 ) ; t421 [
304ULL ] = ( int32_T ) ( ( ! ( X [ 18ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log
( X [ 18ULL ] * 100000.0 ) - t36_idx_0 < 663.67513503334737 ) ) ; t421 [
305ULL ] = 1 ; t421 [ 306ULL ] = ( int32_T ) ( ( ! ( t854 >= 1.0 ) ) || ( (
t854 - 1.0 ) * 461.523 + t841 != 0.0 ) ) ; t421 [ 307ULL ] = ( int32_T ) (
t855 * 0.01 != 0.0 ) ; t421 [ 308ULL ] = 1 ; t421 [ 309ULL ] = 1 ; t421 [
310ULL ] = 1 ; t421 [ 311ULL ] = 1 ; t421 [ 312ULL ] = ( int32_T ) ( t863 !=
0.0 ) ; t421 [ 313ULL ] = ( int32_T ) ( t884 / 2.0 * 7.8539816339744827E-5 !=
0.0 ) ; t421 [ 314ULL ] = ( int32_T ) ( t857 != 0.0 ) ; t421 [ 315ULL ] = (
int32_T ) ( ( ! ( t857 != 0.0 ) ) || ( 6.9 / ( t857 == 0.0 ? 1.0E-16 : t857 )
+ 0.00017169489553429715 > 0.0 ) ) ; t421 [ 316ULL ] = 1 ; t421 [ 317ULL ] =
1 ; t421 [ 318ULL ] = ( int32_T ) ( ( ! ( t857 != 0.0 ) ) || ( ( t857 != 0.0
) && ( ! ( 6.9 / ( t857 == 0.0 ? 1.0E-16 : t857 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t857 == 0.0 ? 1.0E-16 : t857 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t857 == 0.0 ? 1.0E-16 : t857 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 319ULL ] = ( int32_T )
( ( t865 / 8.0 == t865 / 8.0 ) && ( fabs ( t865 / 8.0 ) != pmf_get_inf ( ) )
) ; t421 [ 320ULL ] = ( int32_T ) ( ( ! ( t865 / 8.0 == t865 / 8.0 ) ) || ( !
( fabs ( t865 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t865 / 8.0 >= 0.0 ) ) ;
t421 [ 321ULL ] = 1 ; t421 [ 322ULL ] = ( int32_T ) ( t888 / 2.0 >= 0.0 ) ;
t421 [ 323ULL ] = 1 ; t421 [ 324ULL ] = 1 ; t421 [ 325ULL ] = 1 ; t421 [
326ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t888 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t865 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t865 /
8.0 == t865 / 8.0 ) && ( fabs ( t865 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t421
[ 327ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t888 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t865 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
t865 / 8.0 == t865 / 8.0 ) ) || ( ! ( fabs ( t865 / 8.0 ) != pmf_get_inf ( )
) ) ) || ( t865 / 8.0 >= 0.0 ) ) ; t421 [ 328ULL ] = 1 ; t421 [ 329ULL ] = 1
; t421 [ 330ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t888 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t865 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( t888 / 2.0 >= 0.0 ) ) ; t421 [ 331ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t888 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t865 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t865 / 8.0 == t865 / 8.0 ) ) || (
! ( fabs ( t865 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t865 / 8.0 == t865 /
8.0 ) && ( fabs ( t865 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t865 / 8.0 >=
0.0 ) ) ) || ( ! ( t888 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t888 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t865 / 8.0 ) * 12.7 + 1.0 != 0.0 )
) ; t421 [ 332ULL ] = 1 ; t421 [ 333ULL ] = 1 ; t421 [ 334ULL ] = 1 ; t421 [
335ULL ] = 1 ; t421 [ 336ULL ] = 1 ; t421 [ 337ULL ] = 1 ; t421 [ 338ULL ] =
1 ; t421 [ 339ULL ] = ( int32_T ) ( t888 / 2.0 != 0.0 ) ; t421 [ 340ULL ] = 1
; t2182 = t888 / 2.0 ; t421 [ 341ULL ] = ( int32_T ) ( ( ! ( t858 > t896 /
7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || (
t858 != 0.0 ) ) ; t421 [ 342ULL ] = 1 ; t421 [ 343ULL ] = 1 ; t2182 = t888 /
2.0 ; t421 [ 344ULL ] = ( int32_T ) ( ( ! ( t858 > t896 /
7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( !
( t858 != 0.0 ) ) || ( t888 / 2.0 != 0.0 ) ) ; t421 [ 345ULL ] = ( int32_T )
( - intrm_sf_mf_110 < 663.67513503334737 ) ; t421 [ 346ULL ] = ( int32_T ) (
t864 != 0.0 ) ; t421 [ 347ULL ] = ( int32_T ) ( t908 / 2.0 *
7.8539816339744827E-5 != 0.0 ) ; t421 [ 348ULL ] = ( int32_T ) (
intrm_sf_mf_81 != 0.0 ) ; t421 [ 349ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_81 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_81 == 0.0 ? 1.0E-16 :
intrm_sf_mf_81 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 350ULL ] = 1 ;
t421 [ 351ULL ] = 1 ; t421 [ 352ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_81 !=
0.0 ) ) || ( ( intrm_sf_mf_81 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_81 == 0.0
? 1.0E-16 : intrm_sf_mf_81 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( intrm_sf_mf_81 == 0.0 ? 1.0E-16 : intrm_sf_mf_81 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_81 == 0.0 ?
1.0E-16 : intrm_sf_mf_81 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t421 [ 353ULL ] = ( int32_T ) ( ( t871 / 8.0 == t871 / 8.0 ) && ( fabs ( t871
/ 8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 354ULL ] = ( int32_T ) ( ( ! ( t871 /
8.0 == t871 / 8.0 ) ) || ( ! ( fabs ( t871 / 8.0 ) != pmf_get_inf ( ) ) ) ||
( t871 / 8.0 >= 0.0 ) ) ; t421 [ 355ULL ] = 1 ; t421 [ 356ULL ] = ( int32_T )
( t912 / 2.0 >= 0.0 ) ; t421 [ 357ULL ] = 1 ; t421 [ 358ULL ] = 1 ; t421 [
359ULL ] = 1 ; t421 [ 360ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t912 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t871 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t871 / 8.0 == t871 / 8.0 ) && ( fabs ( t871 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 361ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t912 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t871 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! ( t871 / 8.0 == t871 / 8.0 ) ) || ( ! ( fabs (
t871 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t871 / 8.0 >= 0.0 ) ) ; t421 [
362ULL ] = 1 ; t421 [ 363ULL ] = 1 ; t421 [ 364ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t912 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t871 / 8.0
) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t912 / 2.0 >= 0.0 ) ) ; t421 [ 365ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t912 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t871 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t871 / 8.0 ==
t871 / 8.0 ) ) || ( ! ( fabs ( t871 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( (
t871 / 8.0 == t871 / 8.0 ) && ( fabs ( t871 / 8.0 ) != pmf_get_inf ( ) ) && (
! ( t871 / 8.0 >= 0.0 ) ) ) || ( ! ( t912 / 2.0 >= 0.0 ) ) || ( ( pmf_pow (
t912 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t871 / 8.0 ) * 12.7 +
1.0 != 0.0 ) ) ; t421 [ 366ULL ] = 1 ; t421 [ 367ULL ] = 1 ; t421 [ 368ULL ]
= 1 ; t421 [ 369ULL ] = 1 ; t421 [ 370ULL ] = 1 ; t421 [ 371ULL ] = 1 ; t421
[ 372ULL ] = 1 ; t421 [ 373ULL ] = ( int32_T ) ( t912 / 2.0 != 0.0 ) ; t421 [
374ULL ] = 1 ; t2182 = t912 / 2.0 ; t421 [ 375ULL ] = ( int32_T ) ( ( ! (
t869 > t920 / 7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) /
30.0 ) ) || ( t869 != 0.0 ) ) ; t421 [ 376ULL ] = 1 ; t421 [ 377ULL ] = 1 ;
t2182 = t912 / 2.0 ; t421 [ 378ULL ] = ( int32_T ) ( ( ! ( t869 > t920 /
7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( !
( t869 != 0.0 ) ) || ( t912 / 2.0 != 0.0 ) ) ; t421 [ 379ULL ] = ( int32_T )
( - t873 < 663.67513503334737 ) ; t421 [ 380ULL ] = 1 ; t421 [ 381ULL ] = 1 ;
t421 [ 382ULL ] = ( int32_T ) ( X [ 107ULL ] != 0.0 ) ; t421 [ 383ULL ] = 1 ;
t421 [ 384ULL ] = 1 ; t421 [ 385ULL ] = 1 ; t421 [ 386ULL ] = 1 ; t421 [
387ULL ] = 1 ; t421 [ 388ULL ] = ( int32_T ) ( ( X [ 129ULL ] * X [ 129ULL ]
+ 2.0360111955237585E-13 == X [ 129ULL ] * X [ 129ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 129ULL ] * X [ 129ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 389ULL ] = ( int32_T
) ( ( ! ( X [ 129ULL ] * X [ 129ULL ] + 2.0360111955237585E-13 == X [ 129ULL
] * X [ 129ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 129ULL ] *
X [ 129ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
129ULL ] * X [ 129ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t421 [ 390ULL ]
= 1 ; t421 [ 391ULL ] = 1 ; t421 [ 392ULL ] = ( int32_T ) ( ( X [ 129ULL ] *
X [ 129ULL ] + 2.3237892571262758E-14 == X [ 129ULL ] * X [ 129ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 129ULL ] * X [ 129ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 393ULL ] = ( int32_T
) ( ( ! ( X [ 129ULL ] * X [ 129ULL ] + 2.3237892571262758E-14 == X [ 129ULL
] * X [ 129ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 129ULL ] *
X [ 129ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
129ULL ] * X [ 129ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t421 [ 394ULL ]
= 1 ; t421 [ 395ULL ] = 1 ; t421 [ 396ULL ] = ( int32_T ) ( ( X [ 129ULL ] *
X [ 129ULL ] + 1.6409606283812411E-14 == X [ 129ULL ] * X [ 129ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 129ULL ] * X [ 129ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 397ULL ] = ( int32_T
) ( ( ! ( X [ 129ULL ] * X [ 129ULL ] + 1.6409606283812411E-14 == X [ 129ULL
] * X [ 129ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 129ULL ] *
X [ 129ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
129ULL ] * X [ 129ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t421 [ 398ULL ]
= ( int32_T ) ( X [ 126ULL ] != 0.0 ) ; t421 [ 399ULL ] = 1 ; t421 [ 400ULL ]
= 1 ; t421 [ 401ULL ] = 1 ; t421 [ 402ULL ] = 1 ; t421 [ 403ULL ] = 1 ; t421
[ 404ULL ] = ( int32_T ) ( ( X [ 117ULL ] * X [ 117ULL ] +
2.0360111955237585E-13 == X [ 117ULL ] * X [ 117ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 405ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 2.0360111955237585E-13 == X [ 117ULL
] * X [ 117ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t421 [ 406ULL ]
= 1 ; t421 [ 407ULL ] = 1 ; t421 [ 408ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 2.3237892571262758E-14 == X [ 117ULL ] * X [ 117ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 409ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 2.3237892571262758E-14 == X [ 117ULL
] * X [ 117ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t421 [ 410ULL ]
= 1 ; t421 [ 411ULL ] = 1 ; t421 [ 412ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 1.6409606283812411E-14 == X [ 117ULL ] * X [ 117ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 413ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 1.6409606283812411E-14 == X [ 117ULL
] * X [ 117ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t421 [ 414ULL ]
= ( int32_T ) ( X [ 147ULL ] * t879 != 0.0 ) ; t421 [ 415ULL ] = ( int32_T )
( X [ 126ULL ] != 0.0 ) ; t421 [ 416ULL ] = ( int32_T ) ( X [ 147ULL ] != 0.0
) ; t421 [ 417ULL ] = ( int32_T ) ( X [ 147ULL ] != 0.0 ) ; t421 [ 418ULL ] =
1 ; t421 [ 419ULL ] = ( int32_T ) ( ( ! ( X [ 117ULL ] > 0.0 ) ) || ( t876 !=
0.0 ) ) ; t421 [ 420ULL ] = 1 ; t421 [ 421ULL ] = 1 ; t421 [ 422ULL ] = 1 ;
t421 [ 423ULL ] = ( int32_T ) ( ( ! ( X [ 117ULL ] > 0.0 ) ) || ( ! ( t876 !=
0.0 ) ) || ( t880 != 0.0 ) ) ; t421 [ 424ULL ] = 1 ; t421 [ 425ULL ] = (
int32_T ) ( ( ! ( X [ 117ULL ] < 0.0 ) ) || ( X [ 117ULL ] > 0.0 ) || ( t876
!= 0.0 ) ) ; t421 [ 426ULL ] = 1 ; t421 [ 427ULL ] = 1 ; t421 [ 428ULL ] = 1
; t421 [ 429ULL ] = ( int32_T ) ( ( ! ( X [ 117ULL ] < 0.0 ) ) || ( ! ( t876
!= 0.0 ) ) || ( X [ 117ULL ] > 0.0 ) || ( t880 != 0.0 ) ) ; t421 [ 430ULL ] =
1 ; t421 [ 431ULL ] = 1 ; t421 [ 432ULL ] = ( int32_T ) ( t885 != 0.0 ) ;
t421 [ 433ULL ] = 1 ; t421 [ 434ULL ] = 1 ; t421 [ 435ULL ] = 1 ; t421 [
436ULL ] = 1 ; t421 [ 437ULL ] = 1 ; t421 [ 438ULL ] = 1 ; t421 [ 439ULL ] =
1 ; t421 [ 440ULL ] = 1 ; t421 [ 441ULL ] = 1 ; t421 [ 442ULL ] = 1 ; t421 [
443ULL ] = ( int32_T ) ( t882 - t879 != 0.0 ) ; t421 [ 444ULL ] = 1 ; t421 [
445ULL ] = 1 ; t421 [ 446ULL ] = ( int32_T ) ( t879 != 0.0 ) ; t421 [ 447ULL
] = ( int32_T ) ( ( ! ( t879 != 0.0 ) ) || ( X [ 147ULL ] != 0.0 ) ) ; t421 [
448ULL ] = 1 ; t421 [ 449ULL ] = ( int32_T ) ( ( ! ( t879 != 0.0 ) ) || ( (
t879 != 0.0 ) && ( ! ( X [ 147ULL ] != 0.0 ) ) ) || ( fabs ( t943 / ( t879 ==
0.0 ? 1.0E-16 : t879 ) / ( X [ 147ULL ] == 0.0 ? 1.0E-16 : X [ 147ULL ] ) )
>= 0.0 ) ) ; t421 [ 450ULL ] = ( int32_T ) ( ( ! ( X [ 117ULL ] >= 0.0 ) ) ||
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c != 0.0 ) )
; t421 [ 451ULL ] = ( int32_T ) ( ( X [ 117ULL ] >= 0.0 ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c != 0.0 ) ) ;
t421 [ 452ULL ] = ( int32_T ) ( X [ 126ULL ] != 0.0 ) ; t421 [ 453ULL ] = 1 ;
t421 [ 454ULL ] = 1 ; t421 [ 455ULL ] = 1 ; t421 [ 456ULL ] = 1 ; t421 [
457ULL ] = 1 ; t421 [ 458ULL ] = ( int32_T ) ( ( X [ 117ULL ] * X [ 117ULL ]
+ 1.8324100759713822E-12 == X [ 117ULL ] * X [ 117ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 459ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 == X [ 117ULL
] * X [ 117ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t421 [ 460ULL ]
= 1 ; t421 [ 461ULL ] = 1 ; t421 [ 462ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 2.0914103314136477E-13 == X [ 117ULL ] * X [ 117ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 463ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 2.0914103314136477E-13 == X [ 117ULL
] * X [ 117ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t421 [ 464ULL ]
= 1 ; t421 [ 465ULL ] = 1 ; t421 [ 466ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 1.4768645655431171E-13 == X [ 117ULL ] * X [ 117ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 467ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 1.4768645655431171E-13 == X [ 117ULL
] * X [ 117ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t421 [ 468ULL ]
= 1 ; t421 [ 469ULL ] = 1 ; t421 [ 470ULL ] = 1 ; t421 [ 471ULL ] = 1 ; t421
[ 472ULL ] = 1 ; t421 [ 473ULL ] = ( int32_T ) ( ( X [ 117ULL ] * X [ 117ULL
] + 1.8324100759713822E-12 == X [ 117ULL ] * X [ 117ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 474ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 == X [ 117ULL
] * X [ 117ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t421 [ 475ULL ]
= 1 ; t421 [ 476ULL ] = 1 ; t421 [ 477ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 2.0914103314136477E-13 == X [ 117ULL ] * X [ 117ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 478ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 2.0914103314136477E-13 == X [ 117ULL
] * X [ 117ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t421 [ 479ULL ]
= 1 ; t421 [ 480ULL ] = 1 ; t421 [ 481ULL ] = ( int32_T ) ( ( X [ 117ULL ] *
X [ 117ULL ] + 1.4768645655431171E-13 == X [ 117ULL ] * X [ 117ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 117ULL ] * X [ 117ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 482ULL ] = ( int32_T
) ( ( ! ( X [ 117ULL ] * X [ 117ULL ] + 1.4768645655431171E-13 == X [ 117ULL
] * X [ 117ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 117ULL ] *
X [ 117ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
117ULL ] * X [ 117ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t421 [ 483ULL ]
= ( int32_T ) ( t874 != 0.0 ) ; t421 [ 484ULL ] = 1 ; t421 [ 485ULL ] = (
int32_T ) ( ( ! ( t874 != 0.0 ) ) || ( fabs ( t880 * 2.0 / ( t874 == 0.0 ?
1.0E-16 : t874 ) ) >= 0.0 ) ) ; t421 [ 486ULL ] = ( int32_T ) ( X [ 21ULL ] *
t886 != 0.0 ) ; t421 [ 487ULL ] = 1 ; t421 [ 488ULL ] = ( int32_T ) ( ( ! (
1.0 - X [ 24ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 24ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 24ULL ] >= 0.01 ) ) ; t421 [ 489ULL ] = 1
; t421 [ 490ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I != 0.0 ) ; t421 [
491ULL ] = ( int32_T ) ( X [ 22ULL ] * 100000.0 > 0.0 ) ; t421 [ 492ULL ] = (
int32_T ) ( ( ! ( X [ 22ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 22ULL ]
* 100000.0 ) - t427_idx_0 < 663.67513503334737 ) ) ; t421 [ 493ULL ] = 1 ;
t421 [ 494ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_173 >= 1.0 ) ) || ( (
intrm_sf_mf_173 - 1.0 ) * 461.523 + intrm_sf_mf_200 != 0.0 ) ) ; t421 [
495ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_tur1 * 0.01 != 0.0
) ; t421 [ 496ULL ] = 1 ; t421 [ 497ULL ] = 1 ; t421 [ 498ULL ] = 1 ; t421 [
499ULL ] = 1 ; t421 [ 500ULL ] = 1 ; t421 [ 501ULL ] = 1 ; t421 [ 502ULL ] =
( int32_T ) ( X [ 22ULL ] != 0.0 ) ; t421 [ 503ULL ] = 1 ; t421 [ 504ULL ] =
1 ; t421 [ 505ULL ] = 1 ; t421 [ 506ULL ] = 1 ; t421 [ 507ULL ] = 1 ; t421 [
508ULL ] = ( int32_T ) ( ( X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 == X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 509ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 1.8324100759713822E-12 == X [ 167ULL
] * X [ 167ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t421 [ 510ULL ]
= 1 ; t421 [ 511ULL ] = 1 ; t421 [ 512ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 2.0914103314136477E-13 == X [ 167ULL ] * X [ 167ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 513ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 2.0914103314136477E-13 == X [ 167ULL
] * X [ 167ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t421 [ 514ULL ]
= 1 ; t421 [ 515ULL ] = 1 ; t421 [ 516ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 1.4768645655431171E-13 == X [ 167ULL ] * X [ 167ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 517ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 1.4768645655431171E-13 == X [ 167ULL
] * X [ 167ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t421 [ 518ULL ]
= ( int32_T ) ( X [ 26ULL ] != 0.0 ) ; t421 [ 519ULL ] = ( int32_T ) ( X [
178ULL ] != 0.0 ) ; t421 [ 520ULL ] = 1 ; t421 [ 521ULL ] = 1 ; t421 [ 522ULL
] = 1 ; t421 [ 523ULL ] = ( int32_T ) ( t898 - t893 != 0.0 ) ; t421 [ 524ULL
] = 1 ; t421 [ 525ULL ] = 1 ; t421 [ 526ULL ] = ( int32_T ) ( ( t894 * t894 *
9.999999999999999E-14 + fabs ( X [ 177ULL ] * t899 * t893 ) * 1.0E-9 == t894
* t894 * 9.999999999999999E-14 + fabs ( X [ 177ULL ] * t899 * t893 ) * 1.0E-9
) && ( fabs ( t894 * t894 * 9.999999999999999E-14 + fabs ( X [ 177ULL ] *
t899 * t893 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 527ULL ] = ( int32_T
) ( ( ! ( t894 * t894 * 9.999999999999999E-14 + fabs ( X [ 177ULL ] * t899 *
t893 ) * 1.0E-9 == t894 * t894 * 9.999999999999999E-14 + fabs ( X [ 177ULL ]
* t899 * t893 ) * 1.0E-9 ) ) || ( ! ( fabs ( t894 * t894 *
9.999999999999999E-14 + fabs ( X [ 177ULL ] * t899 * t893 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t894 * t894 * 9.999999999999999E-14 + fabs ( X [
177ULL ] * t899 * t893 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 528ULL ] = 1 ; t421 [
529ULL ] = 1 ; t421 [ 530ULL ] = ( int32_T ) ( t893 != 0.0 ) ; t421 [ 531ULL
] = ( int32_T ) ( ( ! ( t893 != 0.0 ) ) || ( X [ 177ULL ] != 0.0 ) ) ; t421 [
532ULL ] = 1 ; t421 [ 533ULL ] = ( int32_T ) ( ( ! ( t893 != 0.0 ) ) || ( (
t893 != 0.0 ) && ( ! ( X [ 177ULL ] != 0.0 ) ) ) || ( fabs ( t955 / ( t893 ==
0.0 ? 1.0E-16 : t893 ) / ( X [ 177ULL ] == 0.0 ? 1.0E-16 : X [ 177ULL ] ) )
>= 0.0 ) ) ; t421 [ 534ULL ] = ( int32_T ) ( t903 * 7.8539816339744827E-5 !=
0.0 ) ; t421 [ 535ULL ] = ( int32_T ) ( X [ 25ULL ] * t893 != 0.0 ) ; t421 [
536ULL ] = ( int32_T ) ( t907 * 1.5707963267948965E-8 != 0.0 ) ; t421 [
537ULL ] = ( int32_T ) ( t910 != 0.0 ) ; t421 [ 538ULL ] = ( int32_T ) ( ( !
( t910 != 0.0 ) ) || ( 6.9 / ( t910 == 0.0 ? 1.0E-16 : t910 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 539ULL ] = 1 ; t421 [ 540ULL ] = 1
; t421 [ 541ULL ] = ( int32_T ) ( ( ! ( t910 != 0.0 ) ) || ( ( t910 != 0.0 )
&& ( ! ( 6.9 / ( t910 == 0.0 ? 1.0E-16 : t910 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t910 == 0.0 ? 1.0E-16 : t910 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t910 == 0.0 ? 1.0E-16 : t910 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 542ULL ] = ( int32_T )
( t907 * 1.2337005501361697E-10 != 0.0 ) ; t421 [ 543ULL ] = 1 ; t421 [
544ULL ] = 1 ; t421 [ 545ULL ] = 1 ; t421 [ 546ULL ] = 1 ; t421 [ 547ULL ] =
( int32_T ) ( X [ 26ULL ] != 0.0 ) ; t421 [ 548ULL ] = ( int32_T ) ( X [
183ULL ] != 0.0 ) ; t421 [ 549ULL ] = 1 ; t421 [ 550ULL ] = 1 ; t421 [ 551ULL
] = 1 ; t421 [ 552ULL ] = ( int32_T ) ( t909 - t893 != 0.0 ) ; t421 [ 553ULL
] = 1 ; t421 [ 554ULL ] = 1 ; t421 [ 555ULL ] = ( int32_T ) ( (
intrm_sf_mf_233 * intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [ 182ULL
] * t774 * t893 ) * 1.0E-9 == intrm_sf_mf_233 * intrm_sf_mf_233 *
9.999999999999999E-14 + fabs ( X [ 182ULL ] * t774 * t893 ) * 1.0E-9 ) && (
fabs ( intrm_sf_mf_233 * intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [
182ULL ] * t774 * t893 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 556ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_233 * intrm_sf_mf_233 *
9.999999999999999E-14 + fabs ( X [ 182ULL ] * t774 * t893 ) * 1.0E-9 ==
intrm_sf_mf_233 * intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [ 182ULL
] * t774 * t893 ) * 1.0E-9 ) ) || ( ! ( fabs ( intrm_sf_mf_233 *
intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [ 182ULL ] * t774 * t893 )
* 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( intrm_sf_mf_233 * intrm_sf_mf_233 *
9.999999999999999E-14 + fabs ( X [ 182ULL ] * t774 * t893 ) * 1.0E-9 >= 0.0 )
) ; t421 [ 557ULL ] = 1 ; t421 [ 558ULL ] = 1 ; t421 [ 559ULL ] = ( int32_T )
( t893 != 0.0 ) ; t421 [ 560ULL ] = ( int32_T ) ( ( ! ( t893 != 0.0 ) ) || (
X [ 182ULL ] != 0.0 ) ) ; t421 [ 561ULL ] = 1 ; t421 [ 562ULL ] = ( int32_T )
( ( ! ( t893 != 0.0 ) ) || ( ( t893 != 0.0 ) && ( ! ( X [ 182ULL ] != 0.0 ) )
) || ( fabs ( t975 / ( t893 == 0.0 ? 1.0E-16 : t893 ) / ( X [ 182ULL ] == 0.0
? 1.0E-16 : X [ 182ULL ] ) ) >= 0.0 ) ) ; t421 [ 563ULL ] = ( int32_T ) (
t903 * 7.8539816339744827E-5 != 0.0 ) ; t421 [ 564ULL ] = ( int32_T ) ( t907
* 1.5707963267948965E-8 != 0.0 ) ; t421 [ 565ULL ] = ( int32_T ) ( t916 !=
0.0 ) ; t421 [ 566ULL ] = ( int32_T ) ( ( ! ( t916 != 0.0 ) ) || ( 6.9 / (
t916 == 0.0 ? 1.0E-16 : t916 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [
567ULL ] = 1 ; t421 [ 568ULL ] = 1 ; t421 [ 569ULL ] = ( int32_T ) ( ( ! (
t916 != 0.0 ) ) || ( ( t916 != 0.0 ) && ( ! ( 6.9 / ( t916 == 0.0 ? 1.0E-16 :
t916 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t916 ==
0.0 ? 1.0E-16 : t916 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t916
== 0.0 ? 1.0E-16 : t916 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421
[ 570ULL ] = ( int32_T ) ( t907 * 1.2337005501361697E-10 != 0.0 ) ; t421 [
571ULL ] = 1 ; t421 [ 572ULL ] = 1 ; t421 [ 573ULL ] = 1 ; t421 [ 574ULL ] =
1 ; t421 [ 575ULL ] = ( int32_T ) ( ( ! ( - X [ 167ULL ] >= 0.0 ) ) || ( t904
!= 0.0 ) ) ; t421 [ 576ULL ] = ( int32_T ) ( ( - X [ 167ULL ] >= 0.0 ) || (
t904 != 0.0 ) ) ; t421 [ 577ULL ] = ( int32_T ) ( ( ! ( X [ 181ULL ] >= 0.0 )
) || ( t911 != 0.0 ) ) ; t421 [ 578ULL ] = ( int32_T ) ( ( X [ 181ULL ] >=
0.0 ) || ( t911 != 0.0 ) ) ; t421 [ 579ULL ] = 1 ; t421 [ 580ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 27ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 27ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 27ULL ] >= 0.01 ) ) ;
t421 [ 581ULL ] = 1 ; t421 [ 582ULL ] = ( int32_T ) ( t780 != 0.0 ) ; t421 [
583ULL ] = ( int32_T ) ( X [ 26ULL ] * 100000.0 > 0.0 ) ; t421 [ 584ULL ] = (
int32_T ) ( ( ! ( X [ 26ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 26ULL ]
* 100000.0 ) - t425 [ 0ULL ] < 663.67513503334737 ) ) ; t421 [ 585ULL ] = 1 ;
t421 [ 586ULL ] = ( int32_T ) ( ( ! ( t917 >= 1.0 ) ) || ( ( t917 - 1.0 ) *
461.523 + t915 != 0.0 ) ) ; t421 [ 587ULL ] = ( int32_T ) ( t918 * 0.01 !=
0.0 ) ; t421 [ 588ULL ] = 1 ; t421 [ 589ULL ] = 1 ; t421 [ 590ULL ] = 1 ;
t421 [ 591ULL ] = 1 ; t421 [ 592ULL ] = ( int32_T ) ( t923 != 0.0 ) ; t421 [
593ULL ] = ( int32_T ) ( t993 / 2.0 * 7.8539816339744827E-5 != 0.0 ) ; t421 [
594ULL ] = ( int32_T ) ( t902 != 0.0 ) ; t421 [ 595ULL ] = ( int32_T ) ( ( !
( t902 != 0.0 ) ) || ( 6.9 / ( t902 == 0.0 ? 1.0E-16 : t902 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 596ULL ] = 1 ; t421 [ 597ULL ] = 1
; t421 [ 598ULL ] = ( int32_T ) ( ( ! ( t902 != 0.0 ) ) || ( ( t902 != 0.0 )
&& ( ! ( 6.9 / ( t902 == 0.0 ? 1.0E-16 : t902 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t902 == 0.0 ? 1.0E-16 : t902 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t902 == 0.0 ? 1.0E-16 : t902 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 599ULL ] = ( int32_T )
( ( t924 / 8.0 == t924 / 8.0 ) && ( fabs ( t924 / 8.0 ) != pmf_get_inf ( ) )
) ; t421 [ 600ULL ] = ( int32_T ) ( ( ! ( t924 / 8.0 == t924 / 8.0 ) ) || ( !
( fabs ( t924 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t924 / 8.0 >= 0.0 ) ) ;
t421 [ 601ULL ] = 1 ; t421 [ 602ULL ] = ( int32_T ) ( t997 / 2.0 >= 0.0 ) ;
t421 [ 603ULL ] = 1 ; t421 [ 604ULL ] = 1 ; t421 [ 605ULL ] = 1 ; t421 [
606ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t997 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t924 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t924 /
8.0 == t924 / 8.0 ) && ( fabs ( t924 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t421
[ 607ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t997 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t924 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
t924 / 8.0 == t924 / 8.0 ) ) || ( ! ( fabs ( t924 / 8.0 ) != pmf_get_inf ( )
) ) ) || ( t924 / 8.0 >= 0.0 ) ) ; t421 [ 608ULL ] = 1 ; t421 [ 609ULL ] = 1
; t421 [ 610ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t997 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t924 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( t997 / 2.0 >= 0.0 ) ) ; t421 [ 611ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t997 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t924 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t924 / 8.0 == t924 / 8.0 ) ) || (
! ( fabs ( t924 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t924 / 8.0 == t924 /
8.0 ) && ( fabs ( t924 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t924 / 8.0 >=
0.0 ) ) ) || ( ! ( t997 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t997 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t924 / 8.0 ) * 12.7 + 1.0 != 0.0 )
) ; t421 [ 612ULL ] = 1 ; t421 [ 613ULL ] = 1 ; t421 [ 614ULL ] = 1 ; t421 [
615ULL ] = 1 ; t421 [ 616ULL ] = 1 ; t421 [ 617ULL ] = 1 ; t421 [ 618ULL ] =
1 ; t421 [ 619ULL ] = ( int32_T ) ( t997 / 2.0 != 0.0 ) ; t421 [ 620ULL ] = 1
; t2182 = t997 / 2.0 ; t421 [ 621ULL ] = ( int32_T ) ( ( ! ( t922 > t1005 /
7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || (
t922 != 0.0 ) ) ; t421 [ 622ULL ] = 1 ; t421 [ 623ULL ] = 1 ; t2182 = t997 /
2.0 ; t421 [ 624ULL ] = ( int32_T ) ( ( ! ( t922 > t1005 /
7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( !
( t922 != 0.0 ) ) || ( t997 / 2.0 != 0.0 ) ) ; t421 [ 625ULL ] = ( int32_T )
( - t926 < 663.67513503334737 ) ; t421 [ 626ULL ] = ( int32_T ) (
intrm_sf_mf_281 != 0.0 ) ; t421 [ 627ULL ] = ( int32_T ) ( t1017 / 2.0 *
7.8539816339744827E-5 != 0.0 ) ; t421 [ 628ULL ] = ( int32_T ) (
intrm_sf_mf_293 != 0.0 ) ; t421 [ 629ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_293 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_293 == 0.0 ? 1.0E-16 :
intrm_sf_mf_293 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 630ULL ] = 1 ;
t421 [ 631ULL ] = 1 ; t421 [ 632ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_293
!= 0.0 ) ) || ( ( intrm_sf_mf_293 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_293
== 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) + 0.00017169489553429715 > 0.0 ) ) ) ||
( pmf_log10 ( 6.9 / ( intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_293 == 0.0 ?
1.0E-16 : intrm_sf_mf_293 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t421 [ 633ULL ] = ( int32_T ) ( ( t930 / 8.0 == t930 / 8.0 ) && ( fabs ( t930
/ 8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 634ULL ] = ( int32_T ) ( ( ! ( t930 /
8.0 == t930 / 8.0 ) ) || ( ! ( fabs ( t930 / 8.0 ) != pmf_get_inf ( ) ) ) ||
( t930 / 8.0 >= 0.0 ) ) ; t421 [ 635ULL ] = 1 ; t421 [ 636ULL ] = ( int32_T )
( t1021 / 2.0 >= 0.0 ) ; t421 [ 637ULL ] = 1 ; t421 [ 638ULL ] = 1 ; t421 [
639ULL ] = 1 ; t421 [ 640ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1021 / 2.0
, 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t930 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t930 / 8.0 == t930 / 8.0 ) && ( fabs ( t930 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 641ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1021 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t930 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( ! ( t930 / 8.0 == t930 / 8.0 ) ) || ( ! ( fabs (
t930 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t930 / 8.0 >= 0.0 ) ) ; t421 [
642ULL ] = 1 ; t421 [ 643ULL ] = 1 ; t421 [ 644ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1021 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t930 / 8.0
) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1021 / 2.0 >= 0.0 ) ) ; t421 [ 645ULL ] =
( int32_T ) ( ( ! ( ( pmf_pow ( t1021 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t930 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t930 / 8.0 ==
t930 / 8.0 ) ) || ( ! ( fabs ( t930 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( (
t930 / 8.0 == t930 / 8.0 ) && ( fabs ( t930 / 8.0 ) != pmf_get_inf ( ) ) && (
! ( t930 / 8.0 >= 0.0 ) ) ) || ( ! ( t1021 / 2.0 >= 0.0 ) ) || ( ( pmf_pow (
t1021 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t930 / 8.0 ) * 12.7
+ 1.0 != 0.0 ) ) ; t421 [ 646ULL ] = 1 ; t421 [ 647ULL ] = 1 ; t421 [ 648ULL
] = 1 ; t421 [ 649ULL ] = 1 ; t421 [ 650ULL ] = 1 ; t421 [ 651ULL ] = 1 ;
t421 [ 652ULL ] = 1 ; t421 [ 653ULL ] = ( int32_T ) ( t1021 / 2.0 != 0.0 ) ;
t421 [ 654ULL ] = 1 ; t2182 = t1021 / 2.0 ; t421 [ 655ULL ] = ( int32_T ) ( (
! ( t929 > t1029 / 7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 )
/ 30.0 ) ) || ( t929 != 0.0 ) ) ; t421 [ 656ULL ] = 1 ; t421 [ 657ULL ] = 1 ;
t2182 = t1021 / 2.0 ; t421 [ 658ULL ] = ( int32_T ) ( ( ! ( t929 > t1029 /
7.8539816339744827E-5 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( !
( t929 != 0.0 ) ) || ( t1021 / 2.0 != 0.0 ) ) ; t421 [ 659ULL ] = ( int32_T )
( - intrm_sf_mf_299 < 663.67513503334737 ) ; t421 [ 660ULL ] = 1 ; t421 [
661ULL ] = 1 ; t421 [ 662ULL ] = ( int32_T ) ( X [ 174ULL ] != 0.0 ) ; t421 [
663ULL ] = 1 ; t421 [ 664ULL ] = 1 ; t421 [ 665ULL ] = 1 ; t421 [ 666ULL ] =
1 ; t421 [ 667ULL ] = 1 ; t421 [ 668ULL ] = ( int32_T ) ( ( X [ 167ULL ] * X
[ 167ULL ] + 2.0360111955237585E-13 == X [ 167ULL ] * X [ 167ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 669ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 2.0360111955237585E-13 == X [ 167ULL
] * X [ 167ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t421 [ 670ULL ]
= 1 ; t421 [ 671ULL ] = 1 ; t421 [ 672ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 2.3237892571262758E-14 == X [ 167ULL ] * X [ 167ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 673ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 2.3237892571262758E-14 == X [ 167ULL
] * X [ 167ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t421 [ 674ULL ]
= 1 ; t421 [ 675ULL ] = 1 ; t421 [ 676ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 1.6409606283812411E-14 == X [ 167ULL ] * X [ 167ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 677ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 1.6409606283812411E-14 == X [ 167ULL
] * X [ 167ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t421 [ 678ULL ]
= ( int32_T ) ( X [ 155ULL ] != 0.0 ) ; t421 [ 679ULL ] = 1 ; t421 [ 680ULL ]
= 1 ; t421 [ 681ULL ] = 1 ; t421 [ 682ULL ] = 1 ; t421 [ 683ULL ] = 1 ; t421
[ 684ULL ] = ( int32_T ) ( ( X [ 181ULL ] * X [ 181ULL ] +
2.0360111955237585E-13 == X [ 181ULL ] * X [ 181ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 181ULL ] * X [ 181ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 685ULL ] = ( int32_T
) ( ( ! ( X [ 181ULL ] * X [ 181ULL ] + 2.0360111955237585E-13 == X [ 181ULL
] * X [ 181ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 181ULL ] *
X [ 181ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
181ULL ] * X [ 181ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t421 [ 686ULL ]
= 1 ; t421 [ 687ULL ] = 1 ; t421 [ 688ULL ] = ( int32_T ) ( ( X [ 181ULL ] *
X [ 181ULL ] + 2.3237892571262758E-14 == X [ 181ULL ] * X [ 181ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 181ULL ] * X [ 181ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 689ULL ] = ( int32_T
) ( ( ! ( X [ 181ULL ] * X [ 181ULL ] + 2.3237892571262758E-14 == X [ 181ULL
] * X [ 181ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 181ULL ] *
X [ 181ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
181ULL ] * X [ 181ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t421 [ 690ULL ]
= 1 ; t421 [ 691ULL ] = 1 ; t421 [ 692ULL ] = ( int32_T ) ( ( X [ 181ULL ] *
X [ 181ULL ] + 1.6409606283812411E-14 == X [ 181ULL ] * X [ 181ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 181ULL ] * X [ 181ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t421 [ 693ULL ] = ( int32_T
) ( ( ! ( X [ 181ULL ] * X [ 181ULL ] + 1.6409606283812411E-14 == X [ 181ULL
] * X [ 181ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 181ULL ] *
X [ 181ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
181ULL ] * X [ 181ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t421 [ 694ULL ]
= ( int32_T ) ( X [ 195ULL ] * t940 != 0.0 ) ; t421 [ 695ULL ] = ( int32_T )
( X [ 22ULL ] != 0.0 ) ; t421 [ 696ULL ] = ( int32_T ) ( X [ 195ULL ] != 0.0
) ; t421 [ 697ULL ] = ( int32_T ) ( X [ 174ULL ] != 0.0 ) ; t421 [ 698ULL ] =
( int32_T ) ( X [ 195ULL ] != 0.0 ) ; t421 [ 699ULL ] = 1 ; t421 [ 700ULL ] =
( int32_T ) ( ( ! ( - X [ 167ULL ] > 0.0 ) ) || ( t934 != 0.0 ) ) ; t421 [
701ULL ] = 1 ; t421 [ 702ULL ] = 1 ; t421 [ 703ULL ] = 1 ; t421 [ 704ULL ] =
( int32_T ) ( ( ! ( - X [ 167ULL ] > 0.0 ) ) || ( ! ( t934 != 0.0 ) ) || (
t941 != 0.0 ) ) ; t421 [ 705ULL ] = 1 ; t421 [ 706ULL ] = ( int32_T ) ( ( ! (
- X [ 167ULL ] < 0.0 ) ) || ( - X [ 167ULL ] > 0.0 ) || ( t934 != 0.0 ) ) ;
t421 [ 707ULL ] = 1 ; t421 [ 708ULL ] = 1 ; t421 [ 709ULL ] = 1 ; t421 [
710ULL ] = ( int32_T ) ( ( ! ( - X [ 167ULL ] < 0.0 ) ) || ( ! ( t934 != 0.0
) ) || ( - X [ 167ULL ] > 0.0 ) || ( t941 != 0.0 ) ) ; t421 [ 711ULL ] = 1 ;
t421 [ 712ULL ] = 1 ; t421 [ 713ULL ] = ( int32_T ) ( t947 != 0.0 ) ; t421 [
714ULL ] = 1 ; t421 [ 715ULL ] = 1 ; t421 [ 716ULL ] = 1 ; t421 [ 717ULL ] =
1 ; t421 [ 718ULL ] = 1 ; t421 [ 719ULL ] = 1 ; t421 [ 720ULL ] = 1 ; t421 [
721ULL ] = 1 ; t421 [ 722ULL ] = 1 ; t421 [ 723ULL ] = 1 ; t421 [ 724ULL ] =
( int32_T ) ( t944 - t940 != 0.0 ) ; t421 [ 725ULL ] = 1 ; t421 [ 726ULL ] =
1 ; t421 [ 727ULL ] = ( int32_T ) ( t940 != 0.0 ) ; t421 [ 728ULL ] = (
int32_T ) ( ( ! ( t940 != 0.0 ) ) || ( X [ 195ULL ] != 0.0 ) ) ; t421 [
729ULL ] = 1 ; t421 [ 730ULL ] = ( int32_T ) ( ( ! ( t940 != 0.0 ) ) || ( (
t940 != 0.0 ) && ( ! ( X [ 195ULL ] != 0.0 ) ) ) || ( fabs ( t1053 / ( t940
== 0.0 ? 1.0E-16 : t940 ) / ( X [ 195ULL ] == 0.0 ? 1.0E-16 : X [ 195ULL ] )
) >= 0.0 ) ) ; t421 [ 731ULL ] = ( int32_T ) ( ( ! ( - X [ 167ULL ] >= 0.0 )
) || ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 != 0.0
) ) ; t421 [ 732ULL ] = ( int32_T ) ( ( - X [ 167ULL ] >= 0.0 ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 != 0.0 ) ) ;
t421 [ 733ULL ] = ( int32_T ) ( X [ 22ULL ] != 0.0 ) ; t421 [ 734ULL ] = 1 ;
t421 [ 735ULL ] = 1 ; t421 [ 736ULL ] = 1 ; t421 [ 737ULL ] = 1 ; t421 [
738ULL ] = 1 ; t421 [ 739ULL ] = ( int32_T ) ( ( X [ 167ULL ] * X [ 167ULL ]
+ 1.8324100759713822E-12 == X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 740ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 1.8324100759713822E-12 == X [ 167ULL
] * X [ 167ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t421 [ 741ULL ]
= 1 ; t421 [ 742ULL ] = 1 ; t421 [ 743ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 2.0914103314136477E-13 == X [ 167ULL ] * X [ 167ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 744ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 2.0914103314136477E-13 == X [ 167ULL
] * X [ 167ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t421 [ 745ULL ]
= 1 ; t421 [ 746ULL ] = 1 ; t421 [ 747ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 1.4768645655431171E-13 == X [ 167ULL ] * X [ 167ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 748ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 1.4768645655431171E-13 == X [ 167ULL
] * X [ 167ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t421 [ 749ULL ]
= ( int32_T ) ( X [ 174ULL ] != 0.0 ) ; t421 [ 750ULL ] = 1 ; t421 [ 751ULL ]
= 1 ; t421 [ 752ULL ] = 1 ; t421 [ 753ULL ] = 1 ; t421 [ 754ULL ] = 1 ; t421
[ 755ULL ] = ( int32_T ) ( ( X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 == X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 756ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 1.8324100759713822E-12 == X [ 167ULL
] * X [ 167ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t421 [ 757ULL ]
= 1 ; t421 [ 758ULL ] = 1 ; t421 [ 759ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 2.0914103314136477E-13 == X [ 167ULL ] * X [ 167ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 760ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 2.0914103314136477E-13 == X [ 167ULL
] * X [ 167ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t421 [ 761ULL ]
= 1 ; t421 [ 762ULL ] = 1 ; t421 [ 763ULL ] = ( int32_T ) ( ( X [ 167ULL ] *
X [ 167ULL ] + 1.4768645655431171E-13 == X [ 167ULL ] * X [ 167ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 167ULL ] * X [ 167ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 764ULL ] = ( int32_T
) ( ( ! ( X [ 167ULL ] * X [ 167ULL ] + 1.4768645655431171E-13 == X [ 167ULL
] * X [ 167ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 167ULL ] *
X [ 167ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
167ULL ] * X [ 167ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t421 [ 765ULL ]
= ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 != 0.0 ) ;
t421 [ 766ULL ] = 1 ; t421 [ 767ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 != 0.0 ) ) ||
( fabs ( t941 * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V13 ) )
>= 0.0 ) ) ; t421 [ 768ULL ] = 1 ; t421 [ 769ULL ] = 1 ; t421 [ 770ULL ] = 1
; t421 [ 771ULL ] = 1 ; t421 [ 772ULL ] = 1 ; t421 [ 773ULL ] = ( int32_T ) (
( X [ 208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 == X [ 208ULL ] * X [
208ULL ] + 2.7104677895120892E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 774ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 == X [ 208ULL
] * X [ 208ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [ 775ULL ]
= 1 ; t421 [ 776ULL ] = 1 ; t421 [ 777ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 778ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL
] * X [ 208ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [ 779ULL ]
= 1 ; t421 [ 780ULL ] = 1 ; t421 [ 781ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 782ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL
] * X [ 208ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [ 783ULL ]
= ( int32_T ) ( t948 * 293.15 != 0.0 ) ; t421 [ 784ULL ] = 1 ; t421 [ 785ULL
] = 1 ; t421 [ 786ULL ] = 1 ; t421 [ 787ULL ] = 1 ; t421 [ 788ULL ] = 1 ;
t421 [ 789ULL ] = ( int32_T ) ( ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 == X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 790ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 == X [ 208ULL
] * X [ 208ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [ 791ULL ]
= 1 ; t421 [ 792ULL ] = 1 ; t421 [ 793ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 794ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL
] * X [ 208ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [ 795ULL ]
= 1 ; t421 [ 796ULL ] = 1 ; t421 [ 797ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 798ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL
] * X [ 208ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [ 799ULL ]
= ( int32_T ) ( X [ 29ULL ] != 0.0 ) ; t421 [ 800ULL ] = 1 ; t421 [ 801ULL ]
= 1 ; t421 [ 802ULL ] = 1 ; t421 [ 803ULL ] = 1 ; t421 [ 804ULL ] = 1 ; t421
[ 805ULL ] = ( int32_T ) ( ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 == X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 806ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 == X [ 208ULL
] * X [ 208ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [ 807ULL ]
= 1 ; t421 [ 808ULL ] = 1 ; t421 [ 809ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 810ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL
] * X [ 208ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [ 811ULL ]
= 1 ; t421 [ 812ULL ] = 1 ; t421 [ 813ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 814ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL
] * X [ 208ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [ 815ULL ]
= 1 ; t421 [ 816ULL ] = 1 ; t421 [ 817ULL ] = 1 ; t421 [ 818ULL ] = ( int32_T
) ( X [ 29ULL ] != 0.0 ) ; t421 [ 819ULL ] = 1 ; t421 [ 820ULL ] = 1 ; t421 [
821ULL ] = 1 ; t421 [ 822ULL ] = ( int32_T ) ( X [ 29ULL ] != 0.0 ) ; t421 [
823ULL ] = 1 ; t421 [ 824ULL ] = 1 ; t421 [ 825ULL ] = 1 ; t421 [ 826ULL ] =
1 ; t421 [ 827ULL ] = 1 ; t421 [ 828ULL ] = 1 ; t421 [ 829ULL ] = ( int32_T )
( X [ 30ULL ] * t949 != 0.0 ) ; t421 [ 830ULL ] = 1 ; t421 [ 831ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 32ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 32ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 32ULL ] >= 0.01 ) ) ;
t421 [ 832ULL ] = 1 ; t421 [ 833ULL ] = ( int32_T ) ( t939 != 0.0 ) ; t421 [
834ULL ] = ( int32_T ) ( X [ 29ULL ] * 100000.0 > 0.0 ) ; t421 [ 835ULL ] = (
int32_T ) ( ( ! ( X [ 29ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 29ULL ]
* 100000.0 ) - t424 [ 0ULL ] < 663.67513503334737 ) ) ; t421 [ 836ULL ] = 1 ;
t421 [ 837ULL ] = ( int32_T ) ( ( ! ( t950 >= 1.0 ) ) || ( ( t950 - 1.0 ) *
461.523 + t946 != 0.0 ) ) ; t421 [ 838ULL ] = ( int32_T ) ( t952 * 0.01 !=
0.0 ) ; t421 [ 839ULL ] = 1 ; t421 [ 840ULL ] = 1 ; t421 [ 841ULL ] = 1 ;
t421 [ 842ULL ] = 1 ; t421 [ 843ULL ] = 1 ; t421 [ 844ULL ] = 1 ; t421 [
845ULL ] = ( int32_T ) ( X [ 29ULL ] != 0.0 ) ; t421 [ 846ULL ] = 1 ; t421 [
847ULL ] = 1 ; t421 [ 848ULL ] = 1 ; t421 [ 849ULL ] = 1 ; t421 [ 850ULL ] =
1 ; t421 [ 851ULL ] = ( int32_T ) ( ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 == X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 852ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 == X [ 208ULL
] * X [ 208ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [ 853ULL ]
= 1 ; t421 [ 854ULL ] = 1 ; t421 [ 855ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 856ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 == X [ 208ULL
] * X [ 208ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [ 857ULL ]
= 1 ; t421 [ 858ULL ] = 1 ; t421 [ 859ULL ] = ( int32_T ) ( ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 208ULL ] * X [ 208ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 860ULL ] = ( int32_T
) ( ( ! ( X [ 208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 == X [ 208ULL
] * X [ 208ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 208ULL ] *
X [ 208ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
208ULL ] * X [ 208ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [ 861ULL ]
= ( int32_T ) ( X [ 29ULL ] != 0.0 ) ; t421 [ 862ULL ] = 1 ; t421 [ 863ULL ]
= 1 ; t421 [ 864ULL ] = 1 ; t421 [ 865ULL ] = 1 ; t421 [ 866ULL ] = 1 ; t421
[ 867ULL ] = ( int32_T ) ( ( X [ 239ULL ] * X [ 239ULL ] +
2.7104677895120892E-12 == X [ 239ULL ] * X [ 239ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 239ULL ] * X [ 239ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 868ULL ] = ( int32_T
) ( ( ! ( X [ 239ULL ] * X [ 239ULL ] + 2.7104677895120892E-12 == X [ 239ULL
] * X [ 239ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 239ULL ] *
X [ 239ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
239ULL ] * X [ 239ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [ 869ULL ]
= 1 ; t421 [ 870ULL ] = 1 ; t421 [ 871ULL ] = ( int32_T ) ( ( X [ 239ULL ] *
X [ 239ULL ] + 5.2285258285341208E-12 == X [ 239ULL ] * X [ 239ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 239ULL ] * X [ 239ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 872ULL ] = ( int32_T
) ( ( ! ( X [ 239ULL ] * X [ 239ULL ] + 5.2285258285341208E-12 == X [ 239ULL
] * X [ 239ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 239ULL ] *
X [ 239ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
239ULL ] * X [ 239ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [ 873ULL ]
= 1 ; t421 [ 874ULL ] = 1 ; t421 [ 875ULL ] = ( int32_T ) ( ( X [ 239ULL ] *
X [ 239ULL ] + 3.6921614138577926E-12 == X [ 239ULL ] * X [ 239ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 239ULL ] * X [ 239ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 876ULL ] = ( int32_T
) ( ( ! ( X [ 239ULL ] * X [ 239ULL ] + 3.6921614138577926E-12 == X [ 239ULL
] * X [ 239ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 239ULL ] *
X [ 239ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
239ULL ] * X [ 239ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [ 877ULL ]
= ( int32_T ) ( t958 != 0.0 ) ; t421 [ 878ULL ] = ( int32_T ) ( ( ! ( t958 !=
0.0 ) ) || ( X [ 216ULL ] != 0.0 ) ) ; t421 [ 879ULL ] = ( int32_T ) ( X [
29ULL ] / ( t958 == 0.0 ? 1.0E-16 : t958 ) / ( X [ 216ULL ] == 0.0 ? 1.0E-16
: X [ 216ULL ] ) != 0.0 ) ; t421 [ 880ULL ] = ( int32_T ) ( X [ 36ULL ] !=
0.0 ) ; t421 [ 881ULL ] = ( int32_T ) ( X [ 257ULL ] != 0.0 ) ; t421 [ 882ULL
] = 1 ; t421 [ 883ULL ] = 1 ; t421 [ 884ULL ] = 1 ; t421 [ 885ULL ] = (
int32_T ) ( t965 - t962 != 0.0 ) ; t421 [ 886ULL ] = 1 ; t421 [ 887ULL ] = 1
; t421 [ 888ULL ] = ( int32_T ) ( ( t963 * t963 * 9.999999999999999E-14 +
fabs ( X [ 256ULL ] * t966 * t962 ) * 1.0E-9 == t963 * t963 *
9.999999999999999E-14 + fabs ( X [ 256ULL ] * t966 * t962 ) * 1.0E-9 ) && (
fabs ( t963 * t963 * 9.999999999999999E-14 + fabs ( X [ 256ULL ] * t966 *
t962 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 889ULL ] = ( int32_T ) ( (
! ( t963 * t963 * 9.999999999999999E-14 + fabs ( X [ 256ULL ] * t966 * t962 )
* 1.0E-9 == t963 * t963 * 9.999999999999999E-14 + fabs ( X [ 256ULL ] * t966
* t962 ) * 1.0E-9 ) ) || ( ! ( fabs ( t963 * t963 * 9.999999999999999E-14 +
fabs ( X [ 256ULL ] * t966 * t962 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || (
t963 * t963 * 9.999999999999999E-14 + fabs ( X [ 256ULL ] * t966 * t962 ) *
1.0E-9 >= 0.0 ) ) ; t421 [ 890ULL ] = 1 ; t421 [ 891ULL ] = 1 ; t421 [ 892ULL
] = ( int32_T ) ( t962 != 0.0 ) ; t421 [ 893ULL ] = ( int32_T ) ( ( ! ( t962
!= 0.0 ) ) || ( X [ 256ULL ] != 0.0 ) ) ; t421 [ 894ULL ] = 1 ; t421 [ 895ULL
] = ( int32_T ) ( ( ! ( t962 != 0.0 ) ) || ( ( t962 != 0.0 ) && ( ! ( X [
256ULL ] != 0.0 ) ) ) || ( fabs ( t1068 / ( t962 == 0.0 ? 1.0E-16 : t962 ) /
( X [ 256ULL ] == 0.0 ? 1.0E-16 : X [ 256ULL ] ) ) >= 0.0 ) ) ; t421 [ 896ULL
] = ( int32_T ) ( t973 * 0.0019634954084936209 != 0.0 ) ; t421 [ 897ULL ] = (
int32_T ) ( X [ 33ULL ] * t962 != 0.0 ) ; t421 [ 898ULL ] = ( int32_T ) (
t980 * 9.8174770424681068E-6 != 0.0 ) ; t421 [ 899ULL ] = ( int32_T ) ( t983
!= 0.0 ) ; t421 [ 900ULL ] = ( int32_T ) ( ( ! ( t983 != 0.0 ) ) || ( 6.9 / (
t983 == 0.0 ? 1.0E-16 : t983 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [
901ULL ] = 1 ; t421 [ 902ULL ] = 1 ; t421 [ 903ULL ] = ( int32_T ) ( ( ! (
t983 != 0.0 ) ) || ( ( t983 != 0.0 ) && ( ! ( 6.9 / ( t983 == 0.0 ? 1.0E-16 :
t983 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t983 ==
0.0 ? 1.0E-16 : t983 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t983
== 0.0 ? 1.0E-16 : t983 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421
[ 904ULL ] = ( int32_T ) ( t980 * 3.855314219175531E-7 != 0.0 ) ; t421 [
905ULL ] = 1 ; t421 [ 906ULL ] = 1 ; t421 [ 907ULL ] = 1 ; t421 [ 908ULL ] =
1 ; t421 [ 909ULL ] = ( int32_T ) ( X [ 36ULL ] != 0.0 ) ; t421 [ 910ULL ] =
( int32_T ) ( X [ 260ULL ] != 0.0 ) ; t421 [ 911ULL ] = 1 ; t421 [ 912ULL ] =
1 ; t421 [ 913ULL ] = 1 ; t421 [ 914ULL ] = ( int32_T ) ( intrm_sf_mf_498 -
t962 != 0.0 ) ; t421 [ 915ULL ] = 1 ; t421 [ 916ULL ] = 1 ; t421 [ 917ULL ] =
( int32_T ) ( ( t976 * t976 * 9.999999999999999E-14 + fabs ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) * 1.0E-9
== t976 * t976 * 9.999999999999999E-14 + fabs ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) * 1.0E-9
) && ( fabs ( t976 * t976 * 9.999999999999999E-14 + fabs ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) * 1.0E-9
) != pmf_get_inf ( ) ) ) ; t421 [ 918ULL ] = ( int32_T ) ( ( ! ( t976 * t976
* 9.999999999999999E-14 + fabs ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) * 1.0E-9
== t976 * t976 * 9.999999999999999E-14 + fabs ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) * 1.0E-9
) ) || ( ! ( fabs ( t976 * t976 * 9.999999999999999E-14 + fabs ( X [ 259ULL ]
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t976 * t976 * 9.999999999999999E-14 +
fabs ( X [ 259ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_BI * t962 ) * 1.0E-9
>= 0.0 ) ) ; t421 [ 919ULL ] = 1 ; t421 [ 920ULL ] = 1 ; t421 [ 921ULL ] = (
int32_T ) ( t962 != 0.0 ) ; t421 [ 922ULL ] = ( int32_T ) ( ( ! ( t962 != 0.0
) ) || ( X [ 259ULL ] != 0.0 ) ) ; t421 [ 923ULL ] = 1 ; t421 [ 924ULL ] = (
int32_T ) ( ( ! ( t962 != 0.0 ) ) || ( ( t962 != 0.0 ) && ( ! ( X [ 259ULL ]
!= 0.0 ) ) ) || ( fabs ( t1088 / ( t962 == 0.0 ? 1.0E-16 : t962 ) / ( X [
259ULL ] == 0.0 ? 1.0E-16 : X [ 259ULL ] ) ) >= 0.0 ) ) ; t421 [ 925ULL ] = (
int32_T ) ( t973 * 0.0019634954084936209 != 0.0 ) ; t421 [ 926ULL ] = (
int32_T ) ( t980 * 9.8174770424681068E-6 != 0.0 ) ; t421 [ 927ULL ] = (
int32_T ) ( t989 != 0.0 ) ; t421 [ 928ULL ] = ( int32_T ) ( ( ! ( t989 != 0.0
) ) || ( 6.9 / ( t989 == 0.0 ? 1.0E-16 : t989 ) + 2.8767404433520813E-5 > 0.0
) ) ; t421 [ 929ULL ] = 1 ; t421 [ 930ULL ] = 1 ; t421 [ 931ULL ] = ( int32_T
) ( ( ! ( t989 != 0.0 ) ) || ( ( t989 != 0.0 ) && ( ! ( 6.9 / ( t989 == 0.0 ?
1.0E-16 : t989 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / (
t989 == 0.0 ? 1.0E-16 : t989 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 /
( t989 == 0.0 ? 1.0E-16 : t989 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) )
; t421 [ 932ULL ] = ( int32_T ) ( t980 * 3.855314219175531E-7 != 0.0 ) ; t421
[ 933ULL ] = 1 ; t421 [ 934ULL ] = 1 ; t421 [ 935ULL ] = 1 ; t421 [ 936ULL ]
= 1 ; t421 [ 937ULL ] = ( int32_T ) ( ( ! ( - X [ 181ULL ] >= 0.0 ) ) || (
t974 != 0.0 ) ) ; t421 [ 938ULL ] = ( int32_T ) ( ( - X [ 181ULL ] >= 0.0 )
|| ( t974 != 0.0 ) ) ; t421 [ 939ULL ] = ( int32_T ) ( ( ! ( X [ 258ULL ] >=
0.0 ) ) || ( t985 != 0.0 ) ) ; t421 [ 940ULL ] = ( int32_T ) ( ( X [ 258ULL ]
>= 0.0 ) || ( t985 != 0.0 ) ) ; t421 [ 941ULL ] = 1 ; t421 [ 942ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 35ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 35ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 35ULL ] >= 0.01 ) ) ;
t421 [ 943ULL ] = 1 ; t421 [ 944ULL ] = ( int32_T ) ( t789 != 0.0 ) ; t421 [
945ULL ] = ( int32_T ) ( X [ 36ULL ] * 100000.0 > 0.0 ) ; t421 [ 946ULL ] = (
int32_T ) ( ( ! ( X [ 36ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 36ULL ]
* 100000.0 ) - t429 [ 0ULL ] < 663.67513503334737 ) ) ; t421 [ 947ULL ] = 1 ;
t421 [ 948ULL ] = ( int32_T ) ( ( ! ( t990 >= 1.0 ) ) || ( ( t990 - 1.0 ) *
461.523 + t988 != 0.0 ) ) ; t421 [ 949ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I * 0.01 != 0.0 ) ;
t421 [ 950ULL ] = 1 ; t421 [ 951ULL ] = 1 ; t421 [ 952ULL ] = 1 ; t421 [
953ULL ] = 1 ; t421 [ 954ULL ] = ( int32_T ) ( intrm_sf_mf_281 != 0.0 ) ;
t421 [ 955ULL ] = ( int32_T ) ( t1104 / 2.0 * 0.0019634954084936209 != 0.0 )
; t421 [ 956ULL ] = ( int32_T ) ( intrm_sf_mf_528 != 0.0 ) ; t421 [ 957ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_528 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_528
== 0.0 ? 1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421
[ 958ULL ] = 1 ; t421 [ 959ULL ] = 1 ; t421 [ 960ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_528 != 0.0 ) ) || ( ( intrm_sf_mf_528 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_528 == 0.0 ? 1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5
> 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_528 == 0.0 ? 1.0E-16 :
intrm_sf_mf_528 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_528 == 0.0 ? 1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5
) * 3.24 != 0.0 ) ) ; t421 [ 961ULL ] = ( int32_T ) ( ( t994 / 8.0 == t994 /
8.0 ) && ( fabs ( t994 / 8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 962ULL ] = (
int32_T ) ( ( ! ( t994 / 8.0 == t994 / 8.0 ) ) || ( ! ( fabs ( t994 / 8.0 )
!= pmf_get_inf ( ) ) ) || ( t994 / 8.0 >= 0.0 ) ) ; t421 [ 963ULL ] = 1 ;
t421 [ 964ULL ] = ( int32_T ) ( t1108 / 2.0 >= 0.0 ) ; t421 [ 965ULL ] = 1 ;
t421 [ 966ULL ] = 1 ; t421 [ 967ULL ] = 1 ; t421 [ 968ULL ] = ( int32_T ) ( (
! ( ( pmf_pow ( t1108 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t994
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t994 / 8.0 == t994 / 8.0 ) && (
fabs ( t994 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t421 [ 969ULL ] = ( int32_T )
( ( ! ( ( pmf_pow ( t1108 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t994 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t994 / 8.0 == t994 / 8.0 )
) || ( ! ( fabs ( t994 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t994 / 8.0 >=
0.0 ) ) ; t421 [ 970ULL ] = 1 ; t421 [ 971ULL ] = 1 ; t421 [ 972ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1108 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t994 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1108 / 2.0 >= 0.0 )
) ; t421 [ 973ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1108 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t994 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t994 / 8.0 == t994 / 8.0 ) ) || ( ! ( fabs ( t994 / 8.0
) != pmf_get_inf ( ) ) ) ) || ( ( t994 / 8.0 == t994 / 8.0 ) && ( fabs ( t994
/ 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t994 / 8.0 >= 0.0 ) ) ) || ( ! ( t1108
/ 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1108 / 2.0 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t994 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 974ULL ] = 1 ;
t421 [ 975ULL ] = 1 ; t421 [ 976ULL ] = 1 ; t421 [ 977ULL ] = 1 ; t421 [
978ULL ] = 1 ; t421 [ 979ULL ] = 1 ; t421 [ 980ULL ] = 1 ; t421 [ 981ULL ] =
( int32_T ) ( t1108 / 2.0 != 0.0 ) ; t421 [ 982ULL ] = 1 ; t2182 = t1108 /
2.0 ; t421 [ 983ULL ] = ( int32_T ) ( ( ! ( t972 > t1116 /
0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || (
t972 != 0.0 ) ) ; t421 [ 984ULL ] = 1 ; t421 [ 985ULL ] = 1 ; t2182 = t1108 /
2.0 ; t421 [ 986ULL ] = ( int32_T ) ( ( ! ( t972 > t1116 /
0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( !
( t972 != 0.0 ) ) || ( t1108 / 2.0 != 0.0 ) ) ; t421 [ 987ULL ] = ( int32_T )
( - t995 < 663.67513503334737 ) ; t421 [ 988ULL ] = ( int32_T ) ( t998 != 0.0
) ; t421 [ 989ULL ] = ( int32_T ) ( t1128 / 2.0 * 0.0019634954084936209 !=
0.0 ) ; t421 [ 990ULL ] = ( int32_T ) ( intrm_sf_mf_551 != 0.0 ) ; t421 [
991ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_551 != 0.0 ) ) || ( 6.9 / (
intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) + 2.8767404433520813E-5
> 0.0 ) ) ; t421 [ 992ULL ] = 1 ; t421 [ 993ULL ] = 1 ; t421 [ 994ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_551 != 0.0 ) ) || ( ( intrm_sf_mf_551 != 0.0 )
&& ( ! ( 6.9 / ( intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_551 ==
0.0 ? 1.0E-16 : intrm_sf_mf_551 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) +
2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [ 995ULL ] = ( int32_T ) ( (
t1000 / 8.0 == t1000 / 8.0 ) && ( fabs ( t1000 / 8.0 ) != pmf_get_inf ( ) ) )
; t421 [ 996ULL ] = ( int32_T ) ( ( ! ( t1000 / 8.0 == t1000 / 8.0 ) ) || ( !
( fabs ( t1000 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1000 / 8.0 >= 0.0 ) ) ;
t421 [ 997ULL ] = 1 ; t421 [ 998ULL ] = ( int32_T ) ( t1132 / 2.0 >= 0.0 ) ;
t421 [ 999ULL ] = 1 ; t421 [ 1000ULL ] = 1 ; t421 [ 1001ULL ] = 1 ; t421 [
1002ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1132 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1000 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1000
/ 8.0 == t1000 / 8.0 ) && ( fabs ( t1000 / 8.0 ) != pmf_get_inf ( ) ) ) ) ;
t421 [ 1003ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1132 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1000 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1000 / 8.0 == t1000 / 8.0 ) ) || ( ! ( fabs ( t1000 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1000 / 8.0 >= 0.0 ) ) ; t421 [ 1004ULL ]
= 1 ; t421 [ 1005ULL ] = 1 ; t421 [ 1006ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1132 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1000 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) ) || ( t1132 / 2.0 >= 0.0 ) ) ; t421 [ 1007ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1132 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1000 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1000 / 8.0 ==
t1000 / 8.0 ) ) || ( ! ( fabs ( t1000 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( (
t1000 / 8.0 == t1000 / 8.0 ) && ( fabs ( t1000 / 8.0 ) != pmf_get_inf ( ) )
&& ( ! ( t1000 / 8.0 >= 0.0 ) ) ) || ( ! ( t1132 / 2.0 >= 0.0 ) ) || ( (
pmf_pow ( t1132 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1000 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1008ULL ] = 1 ; t421 [ 1009ULL ] = 1 ;
t421 [ 1010ULL ] = 1 ; t421 [ 1011ULL ] = 1 ; t421 [ 1012ULL ] = 1 ; t421 [
1013ULL ] = 1 ; t421 [ 1014ULL ] = 1 ; t421 [ 1015ULL ] = ( int32_T ) ( t1132
/ 2.0 != 0.0 ) ; t421 [ 1016ULL ] = 1 ; t2182 = t1132 / 2.0 ; t421 [ 1017ULL
] = ( int32_T ) ( ( ! ( t999 > t1140 / 0.0019634954084936209 / ( t2182 == 0.0
? 1.0E-16 : t2182 ) / 30.0 ) ) || ( t999 != 0.0 ) ) ; t421 [ 1018ULL ] = 1 ;
t421 [ 1019ULL ] = 1 ; t2182 = t1132 / 2.0 ; t421 [ 1020ULL ] = ( int32_T ) (
( ! ( t999 > t1140 / 0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 : t2182
) / 30.0 ) ) || ( ! ( t999 != 0.0 ) ) || ( t1132 / 2.0 != 0.0 ) ) ; t421 [
1021ULL ] = ( int32_T ) ( - intrm_sf_mf_557 < 663.67513503334737 ) ; t421 [
1022ULL ] = 1 ; t421 [ 1023ULL ] = 1 ; t421 [ 1024ULL ] = ( int32_T ) ( X [
155ULL ] != 0.0 ) ; t421 [ 1025ULL ] = 1 ; t421 [ 1026ULL ] = 1 ; t421 [
1027ULL ] = 1 ; t421 [ 1028ULL ] = 1 ; t421 [ 1029ULL ] = 1 ; t421 [ 1030ULL
] = ( int32_T ) ( ( X [ 181ULL ] * X [ 181ULL ] + 5.0900279888093953E-12 == X
[ 181ULL ] * X [ 181ULL ] + 5.0900279888093953E-12 ) && ( fabs ( X [ 181ULL ]
* X [ 181ULL ] + 5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ; t421 [
1031ULL ] = ( int32_T ) ( ( ! ( X [ 181ULL ] * X [ 181ULL ] +
5.0900279888093953E-12 == X [ 181ULL ] * X [ 181ULL ] +
5.0900279888093953E-12 ) ) || ( ! ( fabs ( X [ 181ULL ] * X [ 181ULL ] +
5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) || ( X [ 181ULL ] * X [
181ULL ] + 5.0900279888093953E-12 >= 0.0 ) ) ; t421 [ 1032ULL ] = 1 ; t421 [
1033ULL ] = 1 ; t421 [ 1034ULL ] = ( int32_T ) ( ( X [ 181ULL ] * X [ 181ULL
] + 5.8094731428156895E-13 == X [ 181ULL ] * X [ 181ULL ] +
5.8094731428156895E-13 ) && ( fabs ( X [ 181ULL ] * X [ 181ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1035ULL ] = (
int32_T ) ( ( ! ( X [ 181ULL ] * X [ 181ULL ] + 5.8094731428156895E-13 == X [
181ULL ] * X [ 181ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
181ULL ] * X [ 181ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 181ULL ] * X [ 181ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t421 [
1036ULL ] = 1 ; t421 [ 1037ULL ] = 1 ; t421 [ 1038ULL ] = ( int32_T ) ( ( X [
181ULL ] * X [ 181ULL ] + 4.1024015709531014E-13 == X [ 181ULL ] * X [ 181ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 181ULL ] * X [ 181ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1039ULL ] = (
int32_T ) ( ( ! ( X [ 181ULL ] * X [ 181ULL ] + 4.1024015709531014E-13 == X [
181ULL ] * X [ 181ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
181ULL ] * X [ 181ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 181ULL ] * X [ 181ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t421 [
1040ULL ] = ( int32_T ) ( X [ 246ULL ] != 0.0 ) ; t421 [ 1041ULL ] = 1 ; t421
[ 1042ULL ] = 1 ; t421 [ 1043ULL ] = 1 ; t421 [ 1044ULL ] = 1 ; t421 [
1045ULL ] = 1 ; t421 [ 1046ULL ] = ( int32_T ) ( ( X [ 258ULL ] * X [ 258ULL
] + 5.0900279888093953E-12 == X [ 258ULL ] * X [ 258ULL ] +
5.0900279888093953E-12 ) && ( fabs ( X [ 258ULL ] * X [ 258ULL ] +
5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1047ULL ] = (
int32_T ) ( ( ! ( X [ 258ULL ] * X [ 258ULL ] + 5.0900279888093953E-12 == X [
258ULL ] * X [ 258ULL ] + 5.0900279888093953E-12 ) ) || ( ! ( fabs ( X [
258ULL ] * X [ 258ULL ] + 5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 258ULL ] * X [ 258ULL ] + 5.0900279888093953E-12 >= 0.0 ) ) ; t421 [
1048ULL ] = 1 ; t421 [ 1049ULL ] = 1 ; t421 [ 1050ULL ] = ( int32_T ) ( ( X [
258ULL ] * X [ 258ULL ] + 5.8094731428156895E-13 == X [ 258ULL ] * X [ 258ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 258ULL ] * X [ 258ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1051ULL ] = (
int32_T ) ( ( ! ( X [ 258ULL ] * X [ 258ULL ] + 5.8094731428156895E-13 == X [
258ULL ] * X [ 258ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
258ULL ] * X [ 258ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 258ULL ] * X [ 258ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t421 [
1052ULL ] = 1 ; t421 [ 1053ULL ] = 1 ; t421 [ 1054ULL ] = ( int32_T ) ( ( X [
258ULL ] * X [ 258ULL ] + 4.1024015709531014E-13 == X [ 258ULL ] * X [ 258ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 258ULL ] * X [ 258ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1055ULL ] = (
int32_T ) ( ( ! ( X [ 258ULL ] * X [ 258ULL ] + 4.1024015709531014E-13 == X [
258ULL ] * X [ 258ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
258ULL ] * X [ 258ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 258ULL ] * X [ 258ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t421 [
1056ULL ] = ( int32_T ) ( X [ 37ULL ] != 0.0 ) ; t421 [ 1057ULL ] = ( int32_T
) ( X [ 271ULL ] != 0.0 ) ; t421 [ 1058ULL ] = 1 ; t421 [ 1059ULL ] = 1 ;
t421 [ 1060ULL ] = 1 ; t421 [ 1061ULL ] = ( int32_T ) ( t1009 - t1004 != 0.0
) ; t421 [ 1062ULL ] = 1 ; t421 [ 1063ULL ] = 1 ; t421 [ 1064ULL ] = (
int32_T ) ( ( t1007 * t1007 * 9.999999999999999E-14 + fabs ( X [ 270ULL ] *
t792 * t1004 ) * 1.0E-9 == t1007 * t1007 * 9.999999999999999E-14 + fabs ( X [
270ULL ] * t792 * t1004 ) * 1.0E-9 ) && ( fabs ( t1007 * t1007 *
9.999999999999999E-14 + fabs ( X [ 270ULL ] * t792 * t1004 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1065ULL ] = ( int32_T ) ( ( ! ( t1007 * t1007 *
9.999999999999999E-14 + fabs ( X [ 270ULL ] * t792 * t1004 ) * 1.0E-9 ==
t1007 * t1007 * 9.999999999999999E-14 + fabs ( X [ 270ULL ] * t792 * t1004 )
* 1.0E-9 ) ) || ( ! ( fabs ( t1007 * t1007 * 9.999999999999999E-14 + fabs ( X
[ 270ULL ] * t792 * t1004 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1007 *
t1007 * 9.999999999999999E-14 + fabs ( X [ 270ULL ] * t792 * t1004 ) * 1.0E-9
>= 0.0 ) ) ; t421 [ 1066ULL ] = 1 ; t421 [ 1067ULL ] = 1 ; t421 [ 1068ULL ] =
( int32_T ) ( t1004 != 0.0 ) ; t421 [ 1069ULL ] = ( int32_T ) ( ( ! ( t1004
!= 0.0 ) ) || ( X [ 270ULL ] != 0.0 ) ) ; t421 [ 1070ULL ] = 1 ; t421 [
1071ULL ] = ( int32_T ) ( ( ! ( t1004 != 0.0 ) ) || ( ( t1004 != 0.0 ) && ( !
( X [ 270ULL ] != 0.0 ) ) ) || ( fabs ( t1156 / ( t1004 == 0.0 ? 1.0E-16 :
t1004 ) / ( X [ 270ULL ] == 0.0 ? 1.0E-16 : X [ 270ULL ] ) ) >= 0.0 ) ) ;
t421 [ 1072ULL ] = ( int32_T ) ( t1014 * 0.32 != 0.0 ) ; t421 [ 1073ULL ] = (
int32_T ) ( X [ 4ULL ] * t1004 != 0.0 ) ; t421 [ 1074ULL ] = ( int32_T ) (
t1019 * 6.4000000000000011E-5 != 0.0 ) ; t421 [ 1075ULL ] = ( int32_T ) (
t1022 != 0.0 ) ; t421 [ 1076ULL ] = ( int32_T ) ( ( ! ( t1022 != 0.0 ) ) || (
6.9 / ( t1022 == 0.0 ? 1.0E-16 : t1022 ) + 0.00017169489553429715 > 0.0 ) ) ;
t421 [ 1077ULL ] = 1 ; t421 [ 1078ULL ] = 1 ; t421 [ 1079ULL ] = ( int32_T )
( ( ! ( t1022 != 0.0 ) ) || ( ( t1022 != 0.0 ) && ( ! ( 6.9 / ( t1022 == 0.0
? 1.0E-16 : t1022 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1022 == 0.0 ? 1.0E-16 : t1022 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1022 == 0.0 ? 1.0E-16 : t1022 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t421 [ 1080ULL ] = ( int32_T ) ( t1019 * 0.0020480000000000003 !=
0.0 ) ; t421 [ 1081ULL ] = 1 ; t421 [ 1082ULL ] = 1 ; t421 [ 1083ULL ] = 1 ;
t421 [ 1084ULL ] = 1 ; t421 [ 1085ULL ] = ( int32_T ) ( X [ 37ULL ] != 0.0 )
; t421 [ 1086ULL ] = ( int32_T ) ( X [ 274ULL ] != 0.0 ) ; t421 [ 1087ULL ] =
1 ; t421 [ 1088ULL ] = 1 ; t421 [ 1089ULL ] = 1 ; t421 [ 1090ULL ] = (
int32_T ) ( t1020 - t1004 != 0.0 ) ; t421 [ 1091ULL ] = 1 ; t421 [ 1092ULL ]
= 1 ; t421 [ 1093ULL ] = ( int32_T ) ( ( t1016 * t1016 *
9.999999999999999E-14 + fabs ( X [ 273ULL ] * t1002 * t1004 ) * 1.0E-9 ==
t1016 * t1016 * 9.999999999999999E-14 + fabs ( X [ 273ULL ] * t1002 * t1004 )
* 1.0E-9 ) && ( fabs ( t1016 * t1016 * 9.999999999999999E-14 + fabs ( X [
273ULL ] * t1002 * t1004 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 1094ULL
] = ( int32_T ) ( ( ! ( t1016 * t1016 * 9.999999999999999E-14 + fabs ( X [
273ULL ] * t1002 * t1004 ) * 1.0E-9 == t1016 * t1016 * 9.999999999999999E-14
+ fabs ( X [ 273ULL ] * t1002 * t1004 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1016 *
t1016 * 9.999999999999999E-14 + fabs ( X [ 273ULL ] * t1002 * t1004 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1016 * t1016 * 9.999999999999999E-14 +
fabs ( X [ 273ULL ] * t1002 * t1004 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 1095ULL ]
= 1 ; t421 [ 1096ULL ] = 1 ; t421 [ 1097ULL ] = ( int32_T ) ( t1004 != 0.0 )
; t421 [ 1098ULL ] = ( int32_T ) ( ( ! ( t1004 != 0.0 ) ) || ( X [ 273ULL ]
!= 0.0 ) ) ; t421 [ 1099ULL ] = 1 ; t421 [ 1100ULL ] = ( int32_T ) ( ( ! (
t1004 != 0.0 ) ) || ( ( t1004 != 0.0 ) && ( ! ( X [ 273ULL ] != 0.0 ) ) ) ||
( fabs ( t1176 / ( t1004 == 0.0 ? 1.0E-16 : t1004 ) / ( X [ 273ULL ] == 0.0 ?
1.0E-16 : X [ 273ULL ] ) ) >= 0.0 ) ) ; t421 [ 1101ULL ] = ( int32_T ) (
t1014 * 0.32 != 0.0 ) ; t421 [ 1102ULL ] = ( int32_T ) ( t1019 *
6.4000000000000011E-5 != 0.0 ) ; t421 [ 1103ULL ] = ( int32_T ) ( t1027 !=
0.0 ) ; t421 [ 1104ULL ] = ( int32_T ) ( ( ! ( t1027 != 0.0 ) ) || ( 6.9 / (
t1027 == 0.0 ? 1.0E-16 : t1027 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [
1105ULL ] = 1 ; t421 [ 1106ULL ] = 1 ; t421 [ 1107ULL ] = ( int32_T ) ( ( ! (
t1027 != 0.0 ) ) || ( ( t1027 != 0.0 ) && ( ! ( 6.9 / ( t1027 == 0.0 ?
1.0E-16 : t1027 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1027 == 0.0 ? 1.0E-16 : t1027 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1027 == 0.0 ? 1.0E-16 : t1027 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t421 [ 1108ULL ] = ( int32_T ) ( t1019 * 0.0020480000000000003 !=
0.0 ) ; t421 [ 1109ULL ] = 1 ; t421 [ 1110ULL ] = 1 ; t421 [ 1111ULL ] = 1 ;
t421 [ 1112ULL ] = 1 ; t421 [ 1113ULL ] = ( int32_T ) ( ( ! ( - X [ 258ULL ]
>= 0.0 ) ) || ( t1015 != 0.0 ) ) ; t421 [ 1114ULL ] = ( int32_T ) ( ( - X [
258ULL ] >= 0.0 ) || ( t1015 != 0.0 ) ) ; t421 [ 1115ULL ] = ( int32_T ) ( (
! ( X [ 272ULL ] >= 0.0 ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked != 0.0 ) ) ;
t421 [ 1116ULL ] = ( int32_T ) ( ( X [ 272ULL ] >= 0.0 ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_mdot_B_choked != 0.0 ) ) ;
t421 [ 1117ULL ] = 1 ; t421 [ 1118ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 6ULL
] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 6ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 6ULL ] >= 0.01 ) ) ; t421 [ 1119ULL ] = 1
; t421 [ 1120ULL ] = ( int32_T ) ( intrm_sf_mf_693 != 0.0 ) ; t421 [ 1121ULL
] = ( int32_T ) ( X [ 37ULL ] * 100000.0 > 0.0 ) ; t421 [ 1122ULL ] = (
int32_T ) ( ( ! ( X [ 37ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 37ULL ]
* 100000.0 ) - t121 [ 0ULL ] < 663.67513503334737 ) ) ; t421 [ 1123ULL ] = 1
; t421 [ 1124ULL ] = ( int32_T ) ( ( ! ( t1028 >= 1.0 ) ) || ( ( t1028 - 1.0
) * 461.523 + t1026 != 0.0 ) ) ; t421 [ 1125ULL ] = ( int32_T ) ( t1031 *
0.01 != 0.0 ) ; t421 [ 1126ULL ] = 1 ; t421 [ 1127ULL ] = 1 ; t421 [ 1128ULL
] = 1 ; t421 [ 1129ULL ] = 1 ; t421 [ 1130ULL ] = ( int32_T ) ( t998 != 0.0 )
; t421 [ 1131ULL ] = ( int32_T ) ( t1192 / 2.0 * 0.32 != 0.0 ) ; t421 [
1132ULL ] = ( int32_T ) ( t968 != 0.0 ) ; t421 [ 1133ULL ] = ( int32_T ) ( (
! ( t968 != 0.0 ) ) || ( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 1134ULL ] = 1 ; t421 [ 1135ULL ] =
1 ; t421 [ 1136ULL ] = ( int32_T ) ( ( ! ( t968 != 0.0 ) ) || ( ( t968 != 0.0
) && ( ! ( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t968 == 0.0 ? 1.0E-16 : t968 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 1137ULL ] = ( int32_T )
( ( t1033 / 8.0 == t1033 / 8.0 ) && ( fabs ( t1033 / 8.0 ) != pmf_get_inf ( )
) ) ; t421 [ 1138ULL ] = ( int32_T ) ( ( ! ( t1033 / 8.0 == t1033 / 8.0 ) )
|| ( ! ( fabs ( t1033 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1033 / 8.0 >= 0.0
) ) ; t421 [ 1139ULL ] = 1 ; t421 [ 1140ULL ] = ( int32_T ) ( t1196 / 2.0 >=
0.0 ) ; t421 [ 1141ULL ] = 1 ; t421 [ 1142ULL ] = 1 ; t421 [ 1143ULL ] = 1 ;
t421 [ 1144ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1196 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1033 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t1033 / 8.0 == t1033 / 8.0 ) && ( fabs ( t1033 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 1145ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1196 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1033 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1033 / 8.0 == t1033 / 8.0 ) ) || ( ! ( fabs (
t1033 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1033 / 8.0 >= 0.0 ) ) ; t421 [
1146ULL ] = 1 ; t421 [ 1147ULL ] = 1 ; t421 [ 1148ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t1196 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1033 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1196 / 2.0 >= 0.0 ) ) ; t421 [ 1149ULL
] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1196 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1033 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1033 /
8.0 == t1033 / 8.0 ) ) || ( ! ( fabs ( t1033 / 8.0 ) != pmf_get_inf ( ) ) ) )
|| ( ( t1033 / 8.0 == t1033 / 8.0 ) && ( fabs ( t1033 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1033 / 8.0 >= 0.0 ) ) ) || ( ! ( t1196 / 2.0 >= 0.0 ) ) || (
( pmf_pow ( t1196 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1033 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1150ULL ] = 1 ; t421 [ 1151ULL ] = 1 ;
t421 [ 1152ULL ] = 1 ; t421 [ 1153ULL ] = 1 ; t421 [ 1154ULL ] = 1 ; t421 [
1155ULL ] = 1 ; t421 [ 1156ULL ] = 1 ; t421 [ 1157ULL ] = ( int32_T ) ( t1196
/ 2.0 != 0.0 ) ; t421 [ 1158ULL ] = 1 ; t2182 = t1196 / 2.0 ; t421 [ 1159ULL
] = ( int32_T ) ( ( ! ( t1013 > t1204 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 :
t2182 ) / 30.0 ) ) || ( t1013 != 0.0 ) ) ; t421 [ 1160ULL ] = 1 ; t421 [
1161ULL ] = 1 ; t2182 = t1196 / 2.0 ; t421 [ 1162ULL ] = ( int32_T ) ( ( ! (
t1013 > t1204 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( ! (
t1013 != 0.0 ) ) || ( t1196 / 2.0 != 0.0 ) ) ; t421 [ 1163ULL ] = ( int32_T )
( - intrm_sf_mf_666 < 663.67513503334737 ) ; t421 [ 1164ULL ] = ( int32_T ) (
t1036 != 0.0 ) ; t421 [ 1165ULL ] = ( int32_T ) ( t1216 / 2.0 * 0.32 != 0.0 )
; t421 [ 1166ULL ] = ( int32_T ) ( intrm_sf_mf_681 != 0.0 ) ; t421 [ 1167ULL
] = ( int32_T ) ( ( ! ( intrm_sf_mf_681 != 0.0 ) ) || ( 6.9 / (
intrm_sf_mf_681 == 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) + 0.00017169489553429715
> 0.0 ) ) ; t421 [ 1168ULL ] = 1 ; t421 [ 1169ULL ] = 1 ; t421 [ 1170ULL ] =
( int32_T ) ( ( ! ( intrm_sf_mf_681 != 0.0 ) ) || ( ( intrm_sf_mf_681 != 0.0
) && ( ! ( 6.9 / ( intrm_sf_mf_681 == 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_681
== 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_681 == 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 1171ULL ] = ( int32_T ) (
( t1038 / 8.0 == t1038 / 8.0 ) && ( fabs ( t1038 / 8.0 ) != pmf_get_inf ( ) )
) ; t421 [ 1172ULL ] = ( int32_T ) ( ( ! ( t1038 / 8.0 == t1038 / 8.0 ) ) ||
( ! ( fabs ( t1038 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1038 / 8.0 >= 0.0 ) )
; t421 [ 1173ULL ] = 1 ; t421 [ 1174ULL ] = ( int32_T ) ( t1220 / 2.0 >= 0.0
) ; t421 [ 1175ULL ] = 1 ; t421 [ 1176ULL ] = 1 ; t421 [ 1177ULL ] = 1 ; t421
[ 1178ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1220 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1038 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t1038 / 8.0 == t1038 / 8.0 ) && ( fabs ( t1038 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 1179ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1220 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1038 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1038 / 8.0 == t1038 / 8.0 ) ) || ( ! ( fabs (
t1038 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1038 / 8.0 >= 0.0 ) ) ; t421 [
1180ULL ] = 1 ; t421 [ 1181ULL ] = 1 ; t421 [ 1182ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t1220 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1038 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1220 / 2.0 >= 0.0 ) ) ; t421 [ 1183ULL
] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1220 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1038 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1038 /
8.0 == t1038 / 8.0 ) ) || ( ! ( fabs ( t1038 / 8.0 ) != pmf_get_inf ( ) ) ) )
|| ( ( t1038 / 8.0 == t1038 / 8.0 ) && ( fabs ( t1038 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1038 / 8.0 >= 0.0 ) ) ) || ( ! ( t1220 / 2.0 >= 0.0 ) ) || (
( pmf_pow ( t1220 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1038 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1184ULL ] = 1 ; t421 [ 1185ULL ] = 1 ;
t421 [ 1186ULL ] = 1 ; t421 [ 1187ULL ] = 1 ; t421 [ 1188ULL ] = 1 ; t421 [
1189ULL ] = 1 ; t421 [ 1190ULL ] = 1 ; t421 [ 1191ULL ] = ( int32_T ) ( t1220
/ 2.0 != 0.0 ) ; t421 [ 1192ULL ] = 1 ; t2182 = t1220 / 2.0 ; t421 [ 1193ULL
] = ( int32_T ) ( ( ! ( t1037 > t1228 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 :
t2182 ) / 30.0 ) ) || ( t1037 != 0.0 ) ) ; t421 [ 1194ULL ] = 1 ; t421 [
1195ULL ] = 1 ; t2182 = t1220 / 2.0 ; t421 [ 1196ULL ] = ( int32_T ) ( ( ! (
t1037 > t1228 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( ! (
t1037 != 0.0 ) ) || ( t1220 / 2.0 != 0.0 ) ) ; t421 [ 1197ULL ] = ( int32_T )
( - t1039 < 663.67513503334737 ) ; t421 [ 1198ULL ] = 1 ; t421 [ 1199ULL ] =
1 ; t421 [ 1200ULL ] = ( int32_T ) ( X [ 246ULL ] != 0.0 ) ; t421 [ 1201ULL ]
= 1 ; t421 [ 1202ULL ] = 1 ; t421 [ 1203ULL ] = 1 ; t421 [ 1204ULL ] = 1 ;
t421 [ 1205ULL ] = 1 ; t421 [ 1206ULL ] = ( int32_T ) ( ( X [ 258ULL ] * X [
258ULL ] + 4.3455507383574884E-7 == X [ 258ULL ] * X [ 258ULL ] +
4.3455507383574884E-7 ) && ( fabs ( X [ 258ULL ] * X [ 258ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) ; t421 [ 1207ULL ] = ( int32_T
) ( ( ! ( X [ 258ULL ] * X [ 258ULL ] + 4.3455507383574884E-7 == X [ 258ULL ]
* X [ 258ULL ] + 4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 258ULL ] * X [
258ULL ] + 4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 258ULL ] *
X [ 258ULL ] + 4.3455507383574884E-7 >= 0.0 ) ) ; t421 [ 1208ULL ] = 1 ; t421
[ 1209ULL ] = 1 ; t421 [ 1210ULL ] = ( int32_T ) ( ( X [ 258ULL ] * X [
258ULL ] + 4.9597684650720062E-8 == X [ 258ULL ] * X [ 258ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 258ULL ] * X [ 258ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 1211ULL ] = ( int32_T
) ( ( ! ( X [ 258ULL ] * X [ 258ULL ] + 4.9597684650720062E-8 == X [ 258ULL ]
* X [ 258ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 258ULL ] * X [
258ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 258ULL ] *
X [ 258ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t421 [ 1212ULL ] = 1 ; t421
[ 1213ULL ] = 1 ; t421 [ 1214ULL ] = ( int32_T ) ( ( X [ 258ULL ] * X [
258ULL ] + 3.5023764535063242E-8 == X [ 258ULL ] * X [ 258ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 258ULL ] * X [ 258ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 1215ULL ] = ( int32_T
) ( ( ! ( X [ 258ULL ] * X [ 258ULL ] + 3.5023764535063242E-8 == X [ 258ULL ]
* X [ 258ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 258ULL ] * X [
258ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 258ULL ] *
X [ 258ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t421 [ 1216ULL ] = (
int32_T ) ( X [ 60ULL ] != 0.0 ) ; t421 [ 1217ULL ] = 1 ; t421 [ 1218ULL ] =
1 ; t421 [ 1219ULL ] = 1 ; t421 [ 1220ULL ] = 1 ; t421 [ 1221ULL ] = 1 ; t421
[ 1222ULL ] = ( int32_T ) ( ( X [ 272ULL ] * X [ 272ULL ] +
4.3455507383574884E-7 == X [ 272ULL ] * X [ 272ULL ] + 4.3455507383574884E-7
) && ( fabs ( X [ 272ULL ] * X [ 272ULL ] + 4.3455507383574884E-7 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1223ULL ] = ( int32_T ) ( ( ! ( X [ 272ULL ] * X
[ 272ULL ] + 4.3455507383574884E-7 == X [ 272ULL ] * X [ 272ULL ] +
4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 272ULL ] * X [ 272ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 272ULL ] * X [ 272ULL
] + 4.3455507383574884E-7 >= 0.0 ) ) ; t421 [ 1224ULL ] = 1 ; t421 [ 1225ULL
] = 1 ; t421 [ 1226ULL ] = ( int32_T ) ( ( X [ 272ULL ] * X [ 272ULL ] +
4.9597684650720062E-8 == X [ 272ULL ] * X [ 272ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 272ULL ] * X [ 272ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1227ULL ] = ( int32_T ) ( ( ! ( X [ 272ULL ] * X
[ 272ULL ] + 4.9597684650720062E-8 == X [ 272ULL ] * X [ 272ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 272ULL ] * X [ 272ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 272ULL ] * X [ 272ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t421 [ 1228ULL ] = 1 ; t421 [ 1229ULL
] = 1 ; t421 [ 1230ULL ] = ( int32_T ) ( ( X [ 272ULL ] * X [ 272ULL ] +
3.5023764535063242E-8 == X [ 272ULL ] * X [ 272ULL ] + 3.5023764535063242E-8
) && ( fabs ( X [ 272ULL ] * X [ 272ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1231ULL ] = ( int32_T ) ( ( ! ( X [ 272ULL ] * X
[ 272ULL ] + 3.5023764535063242E-8 == X [ 272ULL ] * X [ 272ULL ] +
3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 272ULL ] * X [ 272ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 272ULL ] * X [ 272ULL
] + 3.5023764535063242E-8 >= 0.0 ) ) ; t421 [ 1232ULL ] = ( int32_T ) ( X [
38ULL ] != 0.0 ) ; t421 [ 1233ULL ] = ( int32_T ) ( X [ 285ULL ] != 0.0 ) ;
t421 [ 1234ULL ] = 1 ; t421 [ 1235ULL ] = 1 ; t421 [ 1236ULL ] = 1 ; t421 [
1237ULL ] = ( int32_T ) ( t1049 - t1043 != 0.0 ) ; t421 [ 1238ULL ] = 1 ;
t421 [ 1239ULL ] = 1 ; t421 [ 1240ULL ] = ( int32_T ) ( ( t1046 * t1046 *
9.999999999999999E-14 + fabs ( X [ 284ULL ] * t1050 * t1043 ) * 1.0E-9 ==
t1046 * t1046 * 9.999999999999999E-14 + fabs ( X [ 284ULL ] * t1050 * t1043 )
* 1.0E-9 ) && ( fabs ( t1046 * t1046 * 9.999999999999999E-14 + fabs ( X [
284ULL ] * t1050 * t1043 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 1241ULL
] = ( int32_T ) ( ( ! ( t1046 * t1046 * 9.999999999999999E-14 + fabs ( X [
284ULL ] * t1050 * t1043 ) * 1.0E-9 == t1046 * t1046 * 9.999999999999999E-14
+ fabs ( X [ 284ULL ] * t1050 * t1043 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1046 *
t1046 * 9.999999999999999E-14 + fabs ( X [ 284ULL ] * t1050 * t1043 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1046 * t1046 * 9.999999999999999E-14 +
fabs ( X [ 284ULL ] * t1050 * t1043 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 1242ULL ]
= 1 ; t421 [ 1243ULL ] = 1 ; t421 [ 1244ULL ] = ( int32_T ) ( t1043 != 0.0 )
; t421 [ 1245ULL ] = ( int32_T ) ( ( ! ( t1043 != 0.0 ) ) || ( X [ 284ULL ]
!= 0.0 ) ) ; t421 [ 1246ULL ] = 1 ; t421 [ 1247ULL ] = ( int32_T ) ( ( ! (
t1043 != 0.0 ) ) || ( ( t1043 != 0.0 ) && ( ! ( X [ 284ULL ] != 0.0 ) ) ) ||
( fabs ( t1244 / ( t1043 == 0.0 ? 1.0E-16 : t1043 ) / ( X [ 284ULL ] == 0.0 ?
1.0E-16 : X [ 284ULL ] ) ) >= 0.0 ) ) ; t421 [ 1248ULL ] = ( int32_T ) (
t1056 * 0.32 != 0.0 ) ; t421 [ 1249ULL ] = ( int32_T ) ( X [ 7ULL ] * t1043
!= 0.0 ) ; t421 [ 1250ULL ] = ( int32_T ) ( t1060 * 6.4000000000000011E-5 !=
0.0 ) ; t421 [ 1251ULL ] = ( int32_T ) ( t1062 != 0.0 ) ; t421 [ 1252ULL ] =
( int32_T ) ( ( ! ( t1062 != 0.0 ) ) || ( 6.9 / ( t1062 == 0.0 ? 1.0E-16 :
t1062 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 1253ULL ] = 1 ; t421 [
1254ULL ] = 1 ; t421 [ 1255ULL ] = ( int32_T ) ( ( ! ( t1062 != 0.0 ) ) || (
( t1062 != 0.0 ) && ( ! ( 6.9 / ( t1062 == 0.0 ? 1.0E-16 : t1062 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1062 == 0.0 ?
1.0E-16 : t1062 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1062 ==
0.0 ? 1.0E-16 : t1062 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
1256ULL ] = ( int32_T ) ( t1060 * 0.0020480000000000003 != 0.0 ) ; t421 [
1257ULL ] = 1 ; t421 [ 1258ULL ] = 1 ; t421 [ 1259ULL ] = 1 ; t421 [ 1260ULL
] = 1 ; t421 [ 1261ULL ] = ( int32_T ) ( X [ 38ULL ] != 0.0 ) ; t421 [
1262ULL ] = ( int32_T ) ( X [ 287ULL ] != 0.0 ) ; t421 [ 1263ULL ] = 1 ; t421
[ 1264ULL ] = 1 ; t421 [ 1265ULL ] = 1 ; t421 [ 1266ULL ] = ( int32_T ) (
intrm_sf_mf_762 - t1043 != 0.0 ) ; t421 [ 1267ULL ] = 1 ; t421 [ 1268ULL ] =
1 ; t421 [ 1269ULL ] = ( int32_T ) ( ( intrm_sf_mf_755 * intrm_sf_mf_755 *
9.999999999999999E-14 + fabs ( X [ 286ULL ] * t1040 * t1043 ) * 1.0E-9 ==
intrm_sf_mf_755 * intrm_sf_mf_755 * 9.999999999999999E-14 + fabs ( X [ 286ULL
] * t1040 * t1043 ) * 1.0E-9 ) && ( fabs ( intrm_sf_mf_755 * intrm_sf_mf_755
* 9.999999999999999E-14 + fabs ( X [ 286ULL ] * t1040 * t1043 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1270ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_755
* intrm_sf_mf_755 * 9.999999999999999E-14 + fabs ( X [ 286ULL ] * t1040 *
t1043 ) * 1.0E-9 == intrm_sf_mf_755 * intrm_sf_mf_755 * 9.999999999999999E-14
+ fabs ( X [ 286ULL ] * t1040 * t1043 ) * 1.0E-9 ) ) || ( ! ( fabs (
intrm_sf_mf_755 * intrm_sf_mf_755 * 9.999999999999999E-14 + fabs ( X [ 286ULL
] * t1040 * t1043 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( intrm_sf_mf_755 *
intrm_sf_mf_755 * 9.999999999999999E-14 + fabs ( X [ 286ULL ] * t1040 * t1043
) * 1.0E-9 >= 0.0 ) ) ; t421 [ 1271ULL ] = 1 ; t421 [ 1272ULL ] = 1 ; t421 [
1273ULL ] = ( int32_T ) ( t1043 != 0.0 ) ; t421 [ 1274ULL ] = ( int32_T ) ( (
! ( t1043 != 0.0 ) ) || ( X [ 286ULL ] != 0.0 ) ) ; t421 [ 1275ULL ] = 1 ;
t421 [ 1276ULL ] = ( int32_T ) ( ( ! ( t1043 != 0.0 ) ) || ( ( t1043 != 0.0 )
&& ( ! ( X [ 286ULL ] != 0.0 ) ) ) || ( fabs ( t1264 / ( t1043 == 0.0 ?
1.0E-16 : t1043 ) / ( X [ 286ULL ] == 0.0 ? 1.0E-16 : X [ 286ULL ] ) ) >= 0.0
) ) ; t421 [ 1277ULL ] = ( int32_T ) ( t1056 * 0.32 != 0.0 ) ; t421 [ 1278ULL
] = ( int32_T ) ( t1060 * 6.4000000000000011E-5 != 0.0 ) ; t421 [ 1279ULL ] =
( int32_T ) ( t1069 != 0.0 ) ; t421 [ 1280ULL ] = ( int32_T ) ( ( ! ( t1069
!= 0.0 ) ) || ( 6.9 / ( t1069 == 0.0 ? 1.0E-16 : t1069 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 1281ULL ] = 1 ; t421 [ 1282ULL ] =
1 ; t421 [ 1283ULL ] = ( int32_T ) ( ( ! ( t1069 != 0.0 ) ) || ( ( t1069 !=
0.0 ) && ( ! ( 6.9 / ( t1069 == 0.0 ? 1.0E-16 : t1069 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1069 == 0.0 ?
1.0E-16 : t1069 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1069 ==
0.0 ? 1.0E-16 : t1069 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
1284ULL ] = ( int32_T ) ( t1060 * 0.0020480000000000003 != 0.0 ) ; t421 [
1285ULL ] = 1 ; t421 [ 1286ULL ] = 1 ; t421 [ 1287ULL ] = 1 ; t421 [ 1288ULL
] = 1 ; t421 [ 1289ULL ] = ( int32_T ) ( ( ! ( - X [ 272ULL ] >= 0.0 ) ) || (
t1057 != 0.0 ) ) ; t421 [ 1290ULL ] = ( int32_T ) ( ( - X [ 272ULL ] >= 0.0 )
|| ( t1057 != 0.0 ) ) ; t421 [ 1291ULL ] = ( int32_T ) ( ( ! ( - X [ 129ULL ]
>= 0.0 ) ) || ( t1063 != 0.0 ) ) ; t421 [ 1292ULL ] = ( int32_T ) ( ( - X [
129ULL ] >= 0.0 ) || ( t1063 != 0.0 ) ) ; t421 [ 1293ULL ] = 1 ; t421 [
1294ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 9ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 9ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 9ULL ] >=
0.01 ) ) ; t421 [ 1295ULL ] = 1 ; t421 [ 1296ULL ] = ( int32_T ) ( t1066 !=
0.0 ) ; t421 [ 1297ULL ] = ( int32_T ) ( X [ 38ULL ] * 100000.0 > 0.0 ) ;
t421 [ 1298ULL ] = ( int32_T ) ( ( ! ( X [ 38ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 38ULL ] * 100000.0 ) - t422 [ 0ULL ] < 663.67513503334737 ) ) ;
t421 [ 1299ULL ] = 1 ; t421 [ 1300ULL ] = ( int32_T ) ( ( ! ( t1071 >= 1.0 )
) || ( ( t1071 - 1.0 ) * 461.523 + t1067 != 0.0 ) ) ; t421 [ 1301ULL ] = (
int32_T ) ( t1074 * 0.01 != 0.0 ) ; t421 [ 1302ULL ] = 1 ; t421 [ 1303ULL ] =
1 ; t421 [ 1304ULL ] = 1 ; t421 [ 1305ULL ] = 1 ; t421 [ 1306ULL ] = (
int32_T ) ( t1036 != 0.0 ) ; t421 [ 1307ULL ] = ( int32_T ) ( t1280 / 2.0 *
0.32 != 0.0 ) ; t421 [ 1308ULL ] = ( int32_T ) ( t1012 != 0.0 ) ; t421 [
1309ULL ] = ( int32_T ) ( ( ! ( t1012 != 0.0 ) ) || ( 6.9 / ( t1012 == 0.0 ?
1.0E-16 : t1012 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 1310ULL ] = 1 ;
t421 [ 1311ULL ] = 1 ; t421 [ 1312ULL ] = ( int32_T ) ( ( ! ( t1012 != 0.0 )
) || ( ( t1012 != 0.0 ) && ( ! ( 6.9 / ( t1012 == 0.0 ? 1.0E-16 : t1012 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1012 == 0.0 ?
1.0E-16 : t1012 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1012 ==
0.0 ? 1.0E-16 : t1012 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
1313ULL ] = ( int32_T ) ( ( t1076 / 8.0 == t1076 / 8.0 ) && ( fabs ( t1076 /
8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 1314ULL ] = ( int32_T ) ( ( ! ( t1076 /
8.0 == t1076 / 8.0 ) ) || ( ! ( fabs ( t1076 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1076 / 8.0 >= 0.0 ) ) ; t421 [ 1315ULL ] = 1 ; t421 [ 1316ULL ] = (
int32_T ) ( t1284 / 2.0 >= 0.0 ) ; t421 [ 1317ULL ] = 1 ; t421 [ 1318ULL ] =
1 ; t421 [ 1319ULL ] = 1 ; t421 [ 1320ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1284 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1076 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( t1076 / 8.0 == t1076 / 8.0 ) && ( fabs ( t1076 /
8.0 ) != pmf_get_inf ( ) ) ) ) ; t421 [ 1321ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1284 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1076 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1076 / 8.0 == t1076 / 8.0 ) ) ||
( ! ( fabs ( t1076 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1076 / 8.0 >= 0.0 )
) ; t421 [ 1322ULL ] = 1 ; t421 [ 1323ULL ] = 1 ; t421 [ 1324ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1284 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1076 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1284 / 2.0 >= 0.0 )
) ; t421 [ 1325ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1284 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1076 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1076 / 8.0 == t1076 / 8.0 ) ) || ( ! ( fabs ( t1076 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1076 / 8.0 == t1076 / 8.0 ) && ( fabs
( t1076 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1076 / 8.0 >= 0.0 ) ) ) || ( !
( t1284 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1284 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1076 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1326ULL ]
= 1 ; t421 [ 1327ULL ] = 1 ; t421 [ 1328ULL ] = 1 ; t421 [ 1329ULL ] = 1 ;
t421 [ 1330ULL ] = 1 ; t421 [ 1331ULL ] = 1 ; t421 [ 1332ULL ] = 1 ; t421 [
1333ULL ] = ( int32_T ) ( t1284 / 2.0 != 0.0 ) ; t421 [ 1334ULL ] = 1 ; t2182
= t1284 / 2.0 ; t421 [ 1335ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_791 >
t1291 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || (
intrm_sf_mf_791 != 0.0 ) ) ; t421 [ 1336ULL ] = 1 ; t421 [ 1337ULL ] = 1 ;
t2182 = t1284 / 2.0 ; t421 [ 1338ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_791
> t1291 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( ! (
intrm_sf_mf_791 != 0.0 ) ) || ( t1284 / 2.0 != 0.0 ) ) ; t421 [ 1339ULL ] = (
int32_T ) ( - intrm_sf_mf_798 < 663.67513503334737 ) ; t421 [ 1340ULL ] = (
int32_T ) ( t864 != 0.0 ) ; t421 [ 1341ULL ] = ( int32_T ) ( t1302 / 2.0 *
0.32 != 0.0 ) ; t421 [ 1342ULL ] = ( int32_T ) ( t856 != 0.0 ) ; t421 [
1343ULL ] = ( int32_T ) ( ( ! ( t856 != 0.0 ) ) || ( 6.9 / ( t856 == 0.0 ?
1.0E-16 : t856 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 1344ULL ] = 1 ;
t421 [ 1345ULL ] = 1 ; t421 [ 1346ULL ] = ( int32_T ) ( ( ! ( t856 != 0.0 ) )
|| ( ( t856 != 0.0 ) && ( ! ( 6.9 / ( t856 == 0.0 ? 1.0E-16 : t856 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t856 == 0.0 ?
1.0E-16 : t856 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t856 == 0.0
? 1.0E-16 : t856 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
1347ULL ] = ( int32_T ) ( ( t1052 / 8.0 == t1052 / 8.0 ) && ( fabs ( t1052 /
8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 1348ULL ] = ( int32_T ) ( ( ! ( t1052 /
8.0 == t1052 / 8.0 ) ) || ( ! ( fabs ( t1052 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1052 / 8.0 >= 0.0 ) ) ; t421 [ 1349ULL ] = 1 ; t421 [ 1350ULL ] = (
int32_T ) ( t1306 / 2.0 >= 0.0 ) ; t421 [ 1351ULL ] = 1 ; t421 [ 1352ULL ] =
1 ; t421 [ 1353ULL ] = 1 ; t421 [ 1354ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1306 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1052 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( t1052 / 8.0 == t1052 / 8.0 ) && ( fabs ( t1052 /
8.0 ) != pmf_get_inf ( ) ) ) ) ; t421 [ 1355ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1306 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1052 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1052 / 8.0 == t1052 / 8.0 ) ) ||
( ! ( fabs ( t1052 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1052 / 8.0 >= 0.0 )
) ; t421 [ 1356ULL ] = 1 ; t421 [ 1357ULL ] = 1 ; t421 [ 1358ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1306 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1052 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1306 / 2.0 >= 0.0 )
) ; t421 [ 1359ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1306 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1052 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1052 / 8.0 == t1052 / 8.0 ) ) || ( ! ( fabs ( t1052 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1052 / 8.0 == t1052 / 8.0 ) && ( fabs
( t1052 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1052 / 8.0 >= 0.0 ) ) ) || ( !
( t1306 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1306 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1052 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1360ULL ]
= 1 ; t421 [ 1361ULL ] = 1 ; t421 [ 1362ULL ] = 1 ; t421 [ 1363ULL ] = 1 ;
t421 [ 1364ULL ] = 1 ; t421 [ 1365ULL ] = 1 ; t421 [ 1366ULL ] = 1 ; t421 [
1367ULL ] = ( int32_T ) ( t1306 / 2.0 != 0.0 ) ; t421 [ 1368ULL ] = 1 ; t2182
= t1306 / 2.0 ; t421 [ 1369ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_814 >
t1314 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || (
intrm_sf_mf_814 != 0.0 ) ) ; t421 [ 1370ULL ] = 1 ; t421 [ 1371ULL ] = 1 ;
t2182 = t1306 / 2.0 ; t421 [ 1372ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_814
> t1314 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( ! (
intrm_sf_mf_814 != 0.0 ) ) || ( t1306 / 2.0 != 0.0 ) ) ; t421 [ 1373ULL ] = (
int32_T ) ( - t1078 < 663.67513503334737 ) ; t421 [ 1374ULL ] = 1 ; t421 [
1375ULL ] = 1 ; t421 [ 1376ULL ] = ( int32_T ) ( X [ 60ULL ] != 0.0 ) ; t421
[ 1377ULL ] = 1 ; t421 [ 1378ULL ] = 1 ; t421 [ 1379ULL ] = 1 ; t421 [
1380ULL ] = 1 ; t421 [ 1381ULL ] = 1 ; t421 [ 1382ULL ] = ( int32_T ) ( ( X [
272ULL ] * X [ 272ULL ] + 4.3455507383574884E-7 == X [ 272ULL ] * X [ 272ULL
] + 4.3455507383574884E-7 ) && ( fabs ( X [ 272ULL ] * X [ 272ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) ; t421 [ 1383ULL ] = ( int32_T
) ( ( ! ( X [ 272ULL ] * X [ 272ULL ] + 4.3455507383574884E-7 == X [ 272ULL ]
* X [ 272ULL ] + 4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 272ULL ] * X [
272ULL ] + 4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 272ULL ] *
X [ 272ULL ] + 4.3455507383574884E-7 >= 0.0 ) ) ; t421 [ 1384ULL ] = 1 ; t421
[ 1385ULL ] = 1 ; t421 [ 1386ULL ] = ( int32_T ) ( ( X [ 272ULL ] * X [
272ULL ] + 4.9597684650720062E-8 == X [ 272ULL ] * X [ 272ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 272ULL ] * X [ 272ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 1387ULL ] = ( int32_T
) ( ( ! ( X [ 272ULL ] * X [ 272ULL ] + 4.9597684650720062E-8 == X [ 272ULL ]
* X [ 272ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 272ULL ] * X [
272ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 272ULL ] *
X [ 272ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t421 [ 1388ULL ] = 1 ; t421
[ 1389ULL ] = 1 ; t421 [ 1390ULL ] = ( int32_T ) ( ( X [ 272ULL ] * X [
272ULL ] + 3.5023764535063242E-8 == X [ 272ULL ] * X [ 272ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 272ULL ] * X [ 272ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 1391ULL ] = ( int32_T
) ( ( ! ( X [ 272ULL ] * X [ 272ULL ] + 3.5023764535063242E-8 == X [ 272ULL ]
* X [ 272ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 272ULL ] * X [
272ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 272ULL ] *
X [ 272ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t421 [ 1392ULL ] = (
int32_T ) ( X [ 107ULL ] != 0.0 ) ; t421 [ 1393ULL ] = 1 ; t421 [ 1394ULL ] =
1 ; t421 [ 1395ULL ] = 1 ; t421 [ 1396ULL ] = 1 ; t421 [ 1397ULL ] = 1 ; t421
[ 1398ULL ] = ( int32_T ) ( ( X [ 129ULL ] * X [ 129ULL ] +
4.3455507383574884E-7 == X [ 129ULL ] * X [ 129ULL ] + 4.3455507383574884E-7
) && ( fabs ( X [ 129ULL ] * X [ 129ULL ] + 4.3455507383574884E-7 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1399ULL ] = ( int32_T ) ( ( ! ( X [ 129ULL ] * X
[ 129ULL ] + 4.3455507383574884E-7 == X [ 129ULL ] * X [ 129ULL ] +
4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 129ULL ] * X [ 129ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 129ULL ] * X [ 129ULL
] + 4.3455507383574884E-7 >= 0.0 ) ) ; t421 [ 1400ULL ] = 1 ; t421 [ 1401ULL
] = 1 ; t421 [ 1402ULL ] = ( int32_T ) ( ( X [ 129ULL ] * X [ 129ULL ] +
4.9597684650720062E-8 == X [ 129ULL ] * X [ 129ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 129ULL ] * X [ 129ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1403ULL ] = ( int32_T ) ( ( ! ( X [ 129ULL ] * X
[ 129ULL ] + 4.9597684650720062E-8 == X [ 129ULL ] * X [ 129ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 129ULL ] * X [ 129ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 129ULL ] * X [ 129ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t421 [ 1404ULL ] = 1 ; t421 [ 1405ULL
] = 1 ; t421 [ 1406ULL ] = ( int32_T ) ( ( X [ 129ULL ] * X [ 129ULL ] +
3.5023764535063242E-8 == X [ 129ULL ] * X [ 129ULL ] + 3.5023764535063242E-8
) && ( fabs ( X [ 129ULL ] * X [ 129ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1407ULL ] = ( int32_T ) ( ( ! ( X [ 129ULL ] * X
[ 129ULL ] + 3.5023764535063242E-8 == X [ 129ULL ] * X [ 129ULL ] +
3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 129ULL ] * X [ 129ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 129ULL ] * X [ 129ULL
] + 3.5023764535063242E-8 >= 0.0 ) ) ; t421 [ 1408ULL ] = ( int32_T ) ( X [
42ULL ] != 0.0 ) ; t421 [ 1409ULL ] = ( int32_T ) ( X [ 306ULL ] != 0.0 ) ;
t421 [ 1410ULL ] = 1 ; t421 [ 1411ULL ] = 1 ; t421 [ 1412ULL ] = 1 ; t421 [
1413ULL ] = ( int32_T ) ( t1086 - t1080 != 0.0 ) ; t421 [ 1414ULL ] = 1 ;
t421 [ 1415ULL ] = 1 ; t421 [ 1416ULL ] = ( int32_T ) ( ( t1081 * t1081 *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1087 * t1080 ) * 1.0E-9 ==
t1081 * t1081 * 9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1087 * t1080 )
* 1.0E-9 ) && ( fabs ( t1081 * t1081 * 9.999999999999999E-14 + fabs ( X [
305ULL ] * t1087 * t1080 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 1417ULL
] = ( int32_T ) ( ( ! ( t1081 * t1081 * 9.999999999999999E-14 + fabs ( X [
305ULL ] * t1087 * t1080 ) * 1.0E-9 == t1081 * t1081 * 9.999999999999999E-14
+ fabs ( X [ 305ULL ] * t1087 * t1080 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1081 *
t1081 * 9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1087 * t1080 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1081 * t1081 * 9.999999999999999E-14 +
fabs ( X [ 305ULL ] * t1087 * t1080 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 1418ULL ]
= 1 ; t421 [ 1419ULL ] = 1 ; t421 [ 1420ULL ] = ( int32_T ) ( t1080 != 0.0 )
; t421 [ 1421ULL ] = ( int32_T ) ( ( ! ( t1080 != 0.0 ) ) || ( X [ 305ULL ]
!= 0.0 ) ) ; t421 [ 1422ULL ] = 1 ; t421 [ 1423ULL ] = ( int32_T ) ( ( ! (
t1080 != 0.0 ) ) || ( ( t1080 != 0.0 ) && ( ! ( X [ 305ULL ] != 0.0 ) ) ) ||
( fabs ( t1330 / ( t1080 == 0.0 ? 1.0E-16 : t1080 ) / ( X [ 305ULL ] == 0.0 ?
1.0E-16 : X [ 305ULL ] ) ) >= 0.0 ) ) ; t421 [ 1424ULL ] = ( int32_T ) (
t1095 * 0.0019634954084936209 != 0.0 ) ; t421 [ 1425ULL ] = ( int32_T ) ( X [
39ULL ] * t1080 != 0.0 ) ; t421 [ 1426ULL ] = ( int32_T ) ( t1100 *
9.8174770424681068E-6 != 0.0 ) ; t421 [ 1427ULL ] = ( int32_T ) ( t1102 !=
0.0 ) ; t421 [ 1428ULL ] = ( int32_T ) ( ( ! ( t1102 != 0.0 ) ) || ( 6.9 / (
t1102 == 0.0 ? 1.0E-16 : t1102 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [
1429ULL ] = 1 ; t421 [ 1430ULL ] = 1 ; t421 [ 1431ULL ] = ( int32_T ) ( ( ! (
t1102 != 0.0 ) ) || ( ( t1102 != 0.0 ) && ( ! ( 6.9 / ( t1102 == 0.0 ?
1.0E-16 : t1102 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1102 == 0.0 ? 1.0E-16 : t1102 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1102 == 0.0 ? 1.0E-16 : t1102 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t421 [ 1432ULL ] = ( int32_T ) ( t1100 * 3.855314219175531E-7 !=
0.0 ) ; t421 [ 1433ULL ] = 1 ; t421 [ 1434ULL ] = 1 ; t421 [ 1435ULL ] = 1 ;
t421 [ 1436ULL ] = 1 ; t421 [ 1437ULL ] = ( int32_T ) ( X [ 42ULL ] != 0.0 )
; t421 [ 1438ULL ] = ( int32_T ) ( X [ 309ULL ] != 0.0 ) ; t421 [ 1439ULL ] =
1 ; t421 [ 1440ULL ] = 1 ; t421 [ 1441ULL ] = 1 ; t421 [ 1442ULL ] = (
int32_T ) ( intrm_sf_mf_895 - t1080 != 0.0 ) ; t421 [ 1443ULL ] = 1 ; t421 [
1444ULL ] = 1 ; t421 [ 1445ULL ] = ( int32_T ) ( ( t1098 * t1098 *
9.999999999999999E-14 + fabs ( X [ 308ULL ] * t1075 * t1080 ) * 1.0E-9 ==
t1098 * t1098 * 9.999999999999999E-14 + fabs ( X [ 308ULL ] * t1075 * t1080 )
* 1.0E-9 ) && ( fabs ( t1098 * t1098 * 9.999999999999999E-14 + fabs ( X [
308ULL ] * t1075 * t1080 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 1446ULL
] = ( int32_T ) ( ( ! ( t1098 * t1098 * 9.999999999999999E-14 + fabs ( X [
308ULL ] * t1075 * t1080 ) * 1.0E-9 == t1098 * t1098 * 9.999999999999999E-14
+ fabs ( X [ 308ULL ] * t1075 * t1080 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1098 *
t1098 * 9.999999999999999E-14 + fabs ( X [ 308ULL ] * t1075 * t1080 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1098 * t1098 * 9.999999999999999E-14 +
fabs ( X [ 308ULL ] * t1075 * t1080 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 1447ULL ]
= 1 ; t421 [ 1448ULL ] = 1 ; t421 [ 1449ULL ] = ( int32_T ) ( t1080 != 0.0 )
; t421 [ 1450ULL ] = ( int32_T ) ( ( ! ( t1080 != 0.0 ) ) || ( X [ 308ULL ]
!= 0.0 ) ) ; t421 [ 1451ULL ] = 1 ; t421 [ 1452ULL ] = ( int32_T ) ( ( ! (
t1080 != 0.0 ) ) || ( ( t1080 != 0.0 ) && ( ! ( X [ 308ULL ] != 0.0 ) ) ) ||
( fabs ( t1350 / ( t1080 == 0.0 ? 1.0E-16 : t1080 ) / ( X [ 308ULL ] == 0.0 ?
1.0E-16 : X [ 308ULL ] ) ) >= 0.0 ) ) ; t421 [ 1453ULL ] = ( int32_T ) (
t1095 * 0.0019634954084936209 != 0.0 ) ; t421 [ 1454ULL ] = ( int32_T ) (
t1100 * 9.8174770424681068E-6 != 0.0 ) ; t421 [ 1455ULL ] = ( int32_T ) (
t1109 != 0.0 ) ; t421 [ 1456ULL ] = ( int32_T ) ( ( ! ( t1109 != 0.0 ) ) || (
6.9 / ( t1109 == 0.0 ? 1.0E-16 : t1109 ) + 2.8767404433520813E-5 > 0.0 ) ) ;
t421 [ 1457ULL ] = 1 ; t421 [ 1458ULL ] = 1 ; t421 [ 1459ULL ] = ( int32_T )
( ( ! ( t1109 != 0.0 ) ) || ( ( t1109 != 0.0 ) && ( ! ( 6.9 / ( t1109 == 0.0
? 1.0E-16 : t1109 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1109 == 0.0 ? 1.0E-16 : t1109 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1109 == 0.0 ? 1.0E-16 : t1109 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t421 [ 1460ULL ] = ( int32_T ) ( t1100 * 3.855314219175531E-7 !=
0.0 ) ; t421 [ 1461ULL ] = 1 ; t421 [ 1462ULL ] = 1 ; t421 [ 1463ULL ] = 1 ;
t421 [ 1464ULL ] = 1 ; t421 [ 1465ULL ] = ( int32_T ) ( ( ! ( - X [ 239ULL ]
>= 0.0 ) ) || ( t1096 != 0.0 ) ) ; t421 [ 1466ULL ] = ( int32_T ) ( ( - X [
239ULL ] >= 0.0 ) || ( t1096 != 0.0 ) ) ; t421 [ 1467ULL ] = ( int32_T ) ( (
! ( X [ 307ULL ] >= 0.0 ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked != 0.0 ) ) ;
t421 [ 1468ULL ] = ( int32_T ) ( ( X [ 307ULL ] >= 0.0 ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_B_choked != 0.0 ) ) ;
t421 [ 1469ULL ] = 1 ; t421 [ 1470ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 41ULL
] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 41ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 41ULL ] >= 0.01 ) ) ; t421 [ 1471ULL ] =
1 ; t421 [ 1472ULL ] = ( int32_T ) ( t1106 != 0.0 ) ; t421 [ 1473ULL ] = (
int32_T ) ( X [ 42ULL ] * 100000.0 > 0.0 ) ; t421 [ 1474ULL ] = ( int32_T ) (
( ! ( X [ 42ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 42ULL ] * 100000.0
) - t428 [ 0ULL ] < 663.67513503334737 ) ) ; t421 [ 1475ULL ] = 1 ; t421 [
1476ULL ] = ( int32_T ) ( ( ! ( t1110 >= 1.0 ) ) || ( ( t1110 - 1.0 ) *
461.523 + t1107 != 0.0 ) ) ; t421 [ 1477ULL ] = ( int32_T ) ( t1111 * 0.01 !=
0.0 ) ; t421 [ 1478ULL ] = 1 ; t421 [ 1479ULL ] = 1 ; t421 [ 1480ULL ] = 1 ;
t421 [ 1481ULL ] = 1 ; t421 [ 1482ULL ] = ( int32_T ) ( t1114 != 0.0 ) ; t421
[ 1483ULL ] = ( int32_T ) ( t1367 / 2.0 * 0.0019634954084936209 != 0.0 ) ;
t421 [ 1484ULL ] = ( int32_T ) ( intrm_sf_mf_923 != 0.0 ) ; t421 [ 1485ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_923 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_923
== 0.0 ? 1.0E-16 : intrm_sf_mf_923 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421
[ 1486ULL ] = 1 ; t421 [ 1487ULL ] = 1 ; t421 [ 1488ULL ] = ( int32_T ) ( ( !
( intrm_sf_mf_923 != 0.0 ) ) || ( ( intrm_sf_mf_923 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_923 == 0.0 ? 1.0E-16 : intrm_sf_mf_923 ) + 2.8767404433520813E-5
> 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_923 == 0.0 ? 1.0E-16 :
intrm_sf_mf_923 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_923 == 0.0 ? 1.0E-16 : intrm_sf_mf_923 ) + 2.8767404433520813E-5
) * 3.24 != 0.0 ) ) ; t421 [ 1489ULL ] = ( int32_T ) ( ( intrm_sf_mf_926 /
8.0 == intrm_sf_mf_926 / 8.0 ) && ( fabs ( intrm_sf_mf_926 / 8.0 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1490ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_926
/ 8.0 == intrm_sf_mf_926 / 8.0 ) ) || ( ! ( fabs ( intrm_sf_mf_926 / 8.0 ) !=
pmf_get_inf ( ) ) ) || ( intrm_sf_mf_926 / 8.0 >= 0.0 ) ) ; t421 [ 1491ULL ]
= 1 ; t421 [ 1492ULL ] = ( int32_T ) ( t1371 / 2.0 >= 0.0 ) ; t421 [ 1493ULL
] = 1 ; t421 [ 1494ULL ] = 1 ; t421 [ 1495ULL ] = 1 ; t421 [ 1496ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1371 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( intrm_sf_mf_926 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( (
intrm_sf_mf_926 / 8.0 == intrm_sf_mf_926 / 8.0 ) && ( fabs ( intrm_sf_mf_926
/ 8.0 ) != pmf_get_inf ( ) ) ) ) ; t421 [ 1497ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1371 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_926 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( intrm_sf_mf_926
/ 8.0 == intrm_sf_mf_926 / 8.0 ) ) || ( ! ( fabs ( intrm_sf_mf_926 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) || ( intrm_sf_mf_926 / 8.0 >= 0.0 ) ) ; t421 [ 1498ULL
] = 1 ; t421 [ 1499ULL ] = 1 ; t421 [ 1500ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1371 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_926 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1371 / 2.0 >= 0.0 )
) ; t421 [ 1501ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1371 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_926 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! ( intrm_sf_mf_926 / 8.0 == intrm_sf_mf_926 / 8.0 )
) || ( ! ( fabs ( intrm_sf_mf_926 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( (
intrm_sf_mf_926 / 8.0 == intrm_sf_mf_926 / 8.0 ) && ( fabs ( intrm_sf_mf_926
/ 8.0 ) != pmf_get_inf ( ) ) && ( ! ( intrm_sf_mf_926 / 8.0 >= 0.0 ) ) ) || (
! ( t1371 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1371 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_926 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421
[ 1502ULL ] = 1 ; t421 [ 1503ULL ] = 1 ; t421 [ 1504ULL ] = 1 ; t421 [
1505ULL ] = 1 ; t421 [ 1506ULL ] = 1 ; t421 [ 1507ULL ] = 1 ; t421 [ 1508ULL
] = 1 ; t421 [ 1509ULL ] = ( int32_T ) ( t1371 / 2.0 != 0.0 ) ; t421 [
1510ULL ] = 1 ; t2182 = t1371 / 2.0 ; t421 [ 1511ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_924 > t1380 / 0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 :
t2182 ) / 30.0 ) ) || ( intrm_sf_mf_924 != 0.0 ) ) ; t421 [ 1512ULL ] = 1 ;
t421 [ 1513ULL ] = 1 ; t2182 = t1371 / 2.0 ; t421 [ 1514ULL ] = ( int32_T ) (
( ! ( intrm_sf_mf_924 > t1380 / 0.0019634954084936209 / ( t2182 == 0.0 ?
1.0E-16 : t2182 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_924 != 0.0 ) ) || ( t1371 /
2.0 != 0.0 ) ) ; t421 [ 1515ULL ] = ( int32_T ) ( - intrm_sf_mf_931 <
663.67513503334737 ) ; t421 [ 1516ULL ] = ( int32_T ) ( t1121 != 0.0 ) ; t421
[ 1517ULL ] = ( int32_T ) ( t1391 / 2.0 * 0.0019634954084936209 != 0.0 ) ;
t421 [ 1518ULL ] = ( int32_T ) ( intrm_sf_mf_948 != 0.0 ) ; t421 [ 1519ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_948 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_948
== 0.0 ? 1.0E-16 : intrm_sf_mf_948 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421
[ 1520ULL ] = 1 ; t421 [ 1521ULL ] = 1 ; t421 [ 1522ULL ] = ( int32_T ) ( ( !
( intrm_sf_mf_948 != 0.0 ) ) || ( ( intrm_sf_mf_948 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_948 == 0.0 ? 1.0E-16 : intrm_sf_mf_948 ) + 2.8767404433520813E-5
> 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_948 == 0.0 ? 1.0E-16 :
intrm_sf_mf_948 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_948 == 0.0 ? 1.0E-16 : intrm_sf_mf_948 ) + 2.8767404433520813E-5
) * 3.24 != 0.0 ) ) ; t421 [ 1523ULL ] = ( int32_T ) ( ( t1123 / 8.0 == t1123
/ 8.0 ) && ( fabs ( t1123 / 8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 1524ULL ] =
( int32_T ) ( ( ! ( t1123 / 8.0 == t1123 / 8.0 ) ) || ( ! ( fabs ( t1123 /
8.0 ) != pmf_get_inf ( ) ) ) || ( t1123 / 8.0 >= 0.0 ) ) ; t421 [ 1525ULL ] =
1 ; t421 [ 1526ULL ] = ( int32_T ) ( t1396 / 2.0 >= 0.0 ) ; t421 [ 1527ULL ]
= 1 ; t421 [ 1528ULL ] = 1 ; t421 [ 1529ULL ] = 1 ; t421 [ 1530ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1396 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1123 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1123 / 8.0 ==
t1123 / 8.0 ) && ( fabs ( t1123 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t421 [
1531ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1396 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1123 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
t1123 / 8.0 == t1123 / 8.0 ) ) || ( ! ( fabs ( t1123 / 8.0 ) != pmf_get_inf (
) ) ) ) || ( t1123 / 8.0 >= 0.0 ) ) ; t421 [ 1532ULL ] = 1 ; t421 [ 1533ULL ]
= 1 ; t421 [ 1534ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1396 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1123 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( t1396 / 2.0 >= 0.0 ) ) ; t421 [ 1535ULL ] = ( int32_T ) ( ( !
( ( pmf_pow ( t1396 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1123
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1123 / 8.0 == t1123 / 8.0 ) )
|| ( ! ( fabs ( t1123 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1123 / 8.0 ==
t1123 / 8.0 ) && ( fabs ( t1123 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1123 /
8.0 >= 0.0 ) ) ) || ( ! ( t1396 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1396 / 2.0
, 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1123 / 8.0 ) * 12.7 + 1.0 !=
0.0 ) ) ; t421 [ 1536ULL ] = 1 ; t421 [ 1537ULL ] = 1 ; t421 [ 1538ULL ] = 1
; t421 [ 1539ULL ] = 1 ; t421 [ 1540ULL ] = 1 ; t421 [ 1541ULL ] = 1 ; t421 [
1542ULL ] = 1 ; t421 [ 1543ULL ] = ( int32_T ) ( t1396 / 2.0 != 0.0 ) ; t421
[ 1544ULL ] = 1 ; t2182 = t1396 / 2.0 ; t421 [ 1545ULL ] = ( int32_T ) ( ( !
( t1122 > t1404 / 0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 : t2182 )
/ 30.0 ) ) || ( t1122 != 0.0 ) ) ; t421 [ 1546ULL ] = 1 ; t421 [ 1547ULL ] =
1 ; t2182 = t1396 / 2.0 ; t421 [ 1548ULL ] = ( int32_T ) ( ( ! ( t1122 >
t1404 / 0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) )
|| ( ! ( t1122 != 0.0 ) ) || ( t1396 / 2.0 != 0.0 ) ) ; t421 [ 1549ULL ] = (
int32_T ) ( - t1124 < 663.67513503334737 ) ; t421 [ 1550ULL ] = 1 ; t421 [
1551ULL ] = 1 ; t421 [ 1552ULL ] = ( int32_T ) ( X [ 29ULL ] != 0.0 ) ; t421
[ 1553ULL ] = 1 ; t421 [ 1554ULL ] = 1 ; t421 [ 1555ULL ] = 1 ; t421 [
1556ULL ] = 1 ; t421 [ 1557ULL ] = 1 ; t421 [ 1558ULL ] = ( int32_T ) ( ( X [
239ULL ] * X [ 239ULL ] + 3.0116308772356542E-13 == X [ 239ULL ] * X [ 239ULL
] + 3.0116308772356542E-13 ) && ( fabs ( X [ 239ULL ] * X [ 239ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1559ULL ] = (
int32_T ) ( ( ! ( X [ 239ULL ] * X [ 239ULL ] + 3.0116308772356542E-13 == X [
239ULL ] * X [ 239ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
239ULL ] * X [ 239ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 239ULL ] * X [ 239ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t421 [
1560ULL ] = 1 ; t421 [ 1561ULL ] = 1 ; t421 [ 1562ULL ] = ( int32_T ) ( ( X [
239ULL ] * X [ 239ULL ] + 5.8094731428156895E-13 == X [ 239ULL ] * X [ 239ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 239ULL ] * X [ 239ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1563ULL ] = (
int32_T ) ( ( ! ( X [ 239ULL ] * X [ 239ULL ] + 5.8094731428156895E-13 == X [
239ULL ] * X [ 239ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
239ULL ] * X [ 239ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 239ULL ] * X [ 239ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t421 [
1564ULL ] = 1 ; t421 [ 1565ULL ] = 1 ; t421 [ 1566ULL ] = ( int32_T ) ( ( X [
239ULL ] * X [ 239ULL ] + 4.1024015709531014E-13 == X [ 239ULL ] * X [ 239ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 239ULL ] * X [ 239ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1567ULL ] = (
int32_T ) ( ( ! ( X [ 239ULL ] * X [ 239ULL ] + 4.1024015709531014E-13 == X [
239ULL ] * X [ 239ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
239ULL ] * X [ 239ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 239ULL ] * X [ 239ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t421 [
1568ULL ] = ( int32_T ) ( X [ 295ULL ] != 0.0 ) ; t421 [ 1569ULL ] = 1 ; t421
[ 1570ULL ] = 1 ; t421 [ 1571ULL ] = 1 ; t421 [ 1572ULL ] = 1 ; t421 [
1573ULL ] = 1 ; t421 [ 1574ULL ] = ( int32_T ) ( ( X [ 307ULL ] * X [ 307ULL
] + 3.0116308772356542E-13 == X [ 307ULL ] * X [ 307ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 307ULL ] * X [ 307ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1575ULL ] = (
int32_T ) ( ( ! ( X [ 307ULL ] * X [ 307ULL ] + 3.0116308772356542E-13 == X [
307ULL ] * X [ 307ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
307ULL ] * X [ 307ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 307ULL ] * X [ 307ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t421 [
1576ULL ] = 1 ; t421 [ 1577ULL ] = 1 ; t421 [ 1578ULL ] = ( int32_T ) ( ( X [
307ULL ] * X [ 307ULL ] + 5.8094731428156895E-13 == X [ 307ULL ] * X [ 307ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 307ULL ] * X [ 307ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1579ULL ] = (
int32_T ) ( ( ! ( X [ 307ULL ] * X [ 307ULL ] + 5.8094731428156895E-13 == X [
307ULL ] * X [ 307ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
307ULL ] * X [ 307ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 307ULL ] * X [ 307ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t421 [
1580ULL ] = 1 ; t421 [ 1581ULL ] = 1 ; t421 [ 1582ULL ] = ( int32_T ) ( ( X [
307ULL ] * X [ 307ULL ] + 4.1024015709531014E-13 == X [ 307ULL ] * X [ 307ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 307ULL ] * X [ 307ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1583ULL ] = (
int32_T ) ( ( ! ( X [ 307ULL ] * X [ 307ULL ] + 4.1024015709531014E-13 == X [
307ULL ] * X [ 307ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
307ULL ] * X [ 307ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 307ULL ] * X [ 307ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t421 [
1584ULL ] = 1 ; t421 [ 1585ULL ] = 1 ; t421 [ 1586ULL ] = 1 ; t421 [ 1587ULL
] = 1 ; t421 [ 1588ULL ] = 1 ; t421 [ 1589ULL ] = ( int32_T ) ( ( X [ 330ULL
] * X [ 330ULL ] + 2.7104677895120892E-12 == X [ 330ULL ] * X [ 330ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1590ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 == X [
330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [
1591ULL ] = 1 ; t421 [ 1592ULL ] = 1 ; t421 [ 1593ULL ] = ( int32_T ) ( ( X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 == X [ 330ULL ] * X [ 330ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1594ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 == X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [
1595ULL ] = 1 ; t421 [ 1596ULL ] = 1 ; t421 [ 1597ULL ] = ( int32_T ) ( ( X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 == X [ 330ULL ] * X [ 330ULL
] + 3.6921614138577926E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1598ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 == X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [
1599ULL ] = ( int32_T ) ( t1127 * 293.15 != 0.0 ) ; t421 [ 1600ULL ] = (
int32_T ) ( X [ 44ULL ] != 0.0 ) ; t421 [ 1601ULL ] = ( int32_T ) ( X [
344ULL ] != 0.0 ) ; t421 [ 1602ULL ] = 1 ; t421 [ 1603ULL ] = 1 ; t421 [
1604ULL ] = 1 ; t421 [ 1605ULL ] = ( int32_T ) ( t1134 - t1130 != 0.0 ) ;
t421 [ 1606ULL ] = 1 ; t421 [ 1607ULL ] = 1 ; t421 [ 1608ULL ] = ( int32_T )
( ( t1131 * t1131 * 9.999999999999999E-14 + fabs ( X [ 343ULL ] * t1135 *
t1130 ) * 1.0E-9 == t1131 * t1131 * 9.999999999999999E-14 + fabs ( X [ 343ULL
] * t1135 * t1130 ) * 1.0E-9 ) && ( fabs ( t1131 * t1131 *
9.999999999999999E-14 + fabs ( X [ 343ULL ] * t1135 * t1130 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1609ULL ] = ( int32_T ) ( ( ! ( t1131 * t1131 *
9.999999999999999E-14 + fabs ( X [ 343ULL ] * t1135 * t1130 ) * 1.0E-9 ==
t1131 * t1131 * 9.999999999999999E-14 + fabs ( X [ 343ULL ] * t1135 * t1130 )
* 1.0E-9 ) ) || ( ! ( fabs ( t1131 * t1131 * 9.999999999999999E-14 + fabs ( X
[ 343ULL ] * t1135 * t1130 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1131 *
t1131 * 9.999999999999999E-14 + fabs ( X [ 343ULL ] * t1135 * t1130 ) *
1.0E-9 >= 0.0 ) ) ; t421 [ 1610ULL ] = 1 ; t421 [ 1611ULL ] = 1 ; t421 [
1612ULL ] = ( int32_T ) ( t1130 != 0.0 ) ; t421 [ 1613ULL ] = ( int32_T ) ( (
! ( t1130 != 0.0 ) ) || ( X [ 343ULL ] != 0.0 ) ) ; t421 [ 1614ULL ] = 1 ;
t421 [ 1615ULL ] = ( int32_T ) ( ( ! ( t1130 != 0.0 ) ) || ( ( t1130 != 0.0 )
&& ( ! ( X [ 343ULL ] != 0.0 ) ) ) || ( fabs ( t1419 / ( t1130 == 0.0 ?
1.0E-16 : t1130 ) / ( X [ 343ULL ] == 0.0 ? 1.0E-16 : X [ 343ULL ] ) ) >= 0.0
) ) ; t421 [ 1616ULL ] = ( int32_T ) ( t1139 * 0.0019634954084936209 != 0.0 )
; t421 [ 1617ULL ] = ( int32_T ) ( X [ 43ULL ] * t1130 != 0.0 ) ; t421 [
1618ULL ] = ( int32_T ) ( t1145 * 9.8174770424681068E-6 != 0.0 ) ; t421 [
1619ULL ] = ( int32_T ) ( t1147 != 0.0 ) ; t421 [ 1620ULL ] = ( int32_T ) ( (
! ( t1147 != 0.0 ) ) || ( 6.9 / ( t1147 == 0.0 ? 1.0E-16 : t1147 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t421 [ 1621ULL ] = 1 ; t421 [ 1622ULL ] = 1
; t421 [ 1623ULL ] = ( int32_T ) ( ( ! ( t1147 != 0.0 ) ) || ( ( t1147 != 0.0
) && ( ! ( 6.9 / ( t1147 == 0.0 ? 1.0E-16 : t1147 ) + 2.8767404433520813E-5 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1147 == 0.0 ? 1.0E-16 : t1147 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1147 == 0.0 ? 1.0E-16 : t1147
) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [ 1624ULL ] = ( int32_T
) ( t1145 * 3.855314219175531E-7 != 0.0 ) ; t421 [ 1625ULL ] = 1 ; t421 [
1626ULL ] = 1 ; t421 [ 1627ULL ] = 1 ; t421 [ 1628ULL ] = 1 ; t421 [ 1629ULL
] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t421 [ 1630ULL ] = ( int32_T ) ( X [
348ULL ] != 0.0 ) ; t421 [ 1631ULL ] = 1 ; t421 [ 1632ULL ] = 1 ; t421 [
1633ULL ] = 1 ; t421 [ 1634ULL ] = ( int32_T ) ( t1146 - t1130 != 0.0 ) ;
t421 [ 1635ULL ] = 1 ; t421 [ 1636ULL ] = 1 ; t421 [ 1637ULL ] = ( int32_T )
( ( t1143 * t1143 * 9.999999999999999E-14 + fabs ( X [ 347ULL ] * t1126 *
t1130 ) * 1.0E-9 == t1143 * t1143 * 9.999999999999999E-14 + fabs ( X [ 347ULL
] * t1126 * t1130 ) * 1.0E-9 ) && ( fabs ( t1143 * t1143 *
9.999999999999999E-14 + fabs ( X [ 347ULL ] * t1126 * t1130 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 1638ULL ] = ( int32_T ) ( ( ! ( t1143 * t1143 *
9.999999999999999E-14 + fabs ( X [ 347ULL ] * t1126 * t1130 ) * 1.0E-9 ==
t1143 * t1143 * 9.999999999999999E-14 + fabs ( X [ 347ULL ] * t1126 * t1130 )
* 1.0E-9 ) ) || ( ! ( fabs ( t1143 * t1143 * 9.999999999999999E-14 + fabs ( X
[ 347ULL ] * t1126 * t1130 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1143 *
t1143 * 9.999999999999999E-14 + fabs ( X [ 347ULL ] * t1126 * t1130 ) *
1.0E-9 >= 0.0 ) ) ; t421 [ 1639ULL ] = 1 ; t421 [ 1640ULL ] = 1 ; t421 [
1641ULL ] = ( int32_T ) ( t1130 != 0.0 ) ; t421 [ 1642ULL ] = ( int32_T ) ( (
! ( t1130 != 0.0 ) ) || ( X [ 347ULL ] != 0.0 ) ) ; t421 [ 1643ULL ] = 1 ;
t421 [ 1644ULL ] = ( int32_T ) ( ( ! ( t1130 != 0.0 ) ) || ( ( t1130 != 0.0 )
&& ( ! ( X [ 347ULL ] != 0.0 ) ) ) || ( fabs ( t1439 / ( t1130 == 0.0 ?
1.0E-16 : t1130 ) / ( X [ 347ULL ] == 0.0 ? 1.0E-16 : X [ 347ULL ] ) ) >= 0.0
) ) ; t421 [ 1645ULL ] = ( int32_T ) ( t1139 * 0.0019634954084936209 != 0.0 )
; t421 [ 1646ULL ] = ( int32_T ) ( t1145 * 9.8174770424681068E-6 != 0.0 ) ;
t421 [ 1647ULL ] = ( int32_T ) ( t1153 != 0.0 ) ; t421 [ 1648ULL ] = (
int32_T ) ( ( ! ( t1153 != 0.0 ) ) || ( 6.9 / ( t1153 == 0.0 ? 1.0E-16 :
t1153 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [ 1649ULL ] = 1 ; t421 [
1650ULL ] = 1 ; t421 [ 1651ULL ] = ( int32_T ) ( ( ! ( t1153 != 0.0 ) ) || (
( t1153 != 0.0 ) && ( ! ( 6.9 / ( t1153 == 0.0 ? 1.0E-16 : t1153 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1153 == 0.0 ?
1.0E-16 : t1153 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1153 ==
0.0 ? 1.0E-16 : t1153 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [
1652ULL ] = ( int32_T ) ( t1145 * 3.855314219175531E-7 != 0.0 ) ; t421 [
1653ULL ] = 1 ; t421 [ 1654ULL ] = 1 ; t421 [ 1655ULL ] = 1 ; t421 [ 1656ULL
] = 1 ; t421 [ 1657ULL ] = ( int32_T ) ( ( ! ( X [ 342ULL ] >= 0.0 ) ) || (
t1142 != 0.0 ) ) ; t421 [ 1658ULL ] = ( int32_T ) ( ( X [ 342ULL ] >= 0.0 )
|| ( t1142 != 0.0 ) ) ; t421 [ 1659ULL ] = ( int32_T ) ( ( ! ( - X [ 330ULL ]
>= 0.0 ) ) || ( t1148 != 0.0 ) ) ; t421 [ 1660ULL ] = ( int32_T ) ( ( - X [
330ULL ] >= 0.0 ) || ( t1148 != 0.0 ) ) ; t421 [ 1661ULL ] = 1 ; t421 [
1662ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 45ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 45ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 45ULL ]
>= 0.01 ) ) ; t421 [ 1663ULL ] = 1 ; t421 [ 1664ULL ] = ( int32_T ) ( t813 !=
0.0 ) ; t421 [ 1665ULL ] = ( int32_T ) ( X [ 44ULL ] * 100000.0 > 0.0 ) ;
t421 [ 1666ULL ] = ( int32_T ) ( ( ! ( X [ 44ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 44ULL ] * 100000.0 ) - t66 [ 0ULL ] < 663.67513503334737 ) ) ;
t421 [ 1667ULL ] = 1 ; t421 [ 1668ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1050 >= 1.0 ) ) || ( ( intrm_sf_mf_1050 - 1.0 ) * 461.523 + t1151
!= 0.0 ) ) ; t421 [ 1669ULL ] = ( int32_T ) ( t1155 * 0.01 != 0.0 ) ; t421 [
1670ULL ] = 1 ; t421 [ 1671ULL ] = 1 ; t421 [ 1672ULL ] = 1 ; t421 [ 1673ULL
] = 1 ; t421 [ 1674ULL ] = ( int32_T ) ( t1162 != 0.0 ) ; t421 [ 1675ULL ] =
( int32_T ) ( t1457 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t421 [ 1676ULL ]
= ( int32_T ) ( intrm_sf_mf_1071 != 0.0 ) ; t421 [ 1677ULL ] = ( int32_T ) (
( ! ( intrm_sf_mf_1071 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_1071 == 0.0 ?
1.0E-16 : intrm_sf_mf_1071 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [
1678ULL ] = 1 ; t421 [ 1679ULL ] = 1 ; t421 [ 1680ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1071 != 0.0 ) ) || ( ( intrm_sf_mf_1071 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_1071 == 0.0 ? 1.0E-16 : intrm_sf_mf_1071 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_1071
== 0.0 ? 1.0E-16 : intrm_sf_mf_1071 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_1071 == 0.0 ? 1.0E-16 : intrm_sf_mf_1071 ) +
2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [ 1681ULL ] = ( int32_T ) (
( t1163 / 8.0 == t1163 / 8.0 ) && ( fabs ( t1163 / 8.0 ) != pmf_get_inf ( ) )
) ; t421 [ 1682ULL ] = ( int32_T ) ( ( ! ( t1163 / 8.0 == t1163 / 8.0 ) ) ||
( ! ( fabs ( t1163 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1163 / 8.0 >= 0.0 ) )
; t421 [ 1683ULL ] = 1 ; t421 [ 1684ULL ] = ( int32_T ) ( t1462 / 2.0 >= 0.0
) ; t421 [ 1685ULL ] = 1 ; t421 [ 1686ULL ] = 1 ; t421 [ 1687ULL ] = 1 ; t421
[ 1688ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1462 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1163 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t1163 / 8.0 == t1163 / 8.0 ) && ( fabs ( t1163 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 1689ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1462 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1163 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1163 / 8.0 == t1163 / 8.0 ) ) || ( ! ( fabs (
t1163 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1163 / 8.0 >= 0.0 ) ) ; t421 [
1690ULL ] = 1 ; t421 [ 1691ULL ] = 1 ; t421 [ 1692ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t1462 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1163 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1462 / 2.0 >= 0.0 ) ) ; t421 [ 1693ULL
] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1462 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1163 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1163 /
8.0 == t1163 / 8.0 ) ) || ( ! ( fabs ( t1163 / 8.0 ) != pmf_get_inf ( ) ) ) )
|| ( ( t1163 / 8.0 == t1163 / 8.0 ) && ( fabs ( t1163 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1163 / 8.0 >= 0.0 ) ) ) || ( ! ( t1462 / 2.0 >= 0.0 ) ) || (
( pmf_pow ( t1462 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1163 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1694ULL ] = 1 ; t421 [ 1695ULL ] = 1 ;
t421 [ 1696ULL ] = 1 ; t421 [ 1697ULL ] = 1 ; t421 [ 1698ULL ] = 1 ; t421 [
1699ULL ] = 1 ; t421 [ 1700ULL ] = 1 ; t421 [ 1701ULL ] = ( int32_T ) ( t1462
/ 2.0 != 0.0 ) ; t421 [ 1702ULL ] = 1 ; t2182 = t1462 / 2.0 ; t421 [ 1703ULL
] = ( int32_T ) ( ( ! ( t1159 > t1469 / 0.0019634954084936209 / ( t2182 ==
0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( t1159 != 0.0 ) ) ; t421 [ 1704ULL ] =
1 ; t421 [ 1705ULL ] = 1 ; t2182 = t1462 / 2.0 ; t421 [ 1706ULL ] = ( int32_T
) ( ( ! ( t1159 > t1469 / 0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 :
t2182 ) / 30.0 ) ) || ( ! ( t1159 != 0.0 ) ) || ( t1462 / 2.0 != 0.0 ) ) ;
t421 [ 1707ULL ] = ( int32_T ) ( - t1166 < 663.67513503334737 ) ; t421 [
1708ULL ] = ( int32_T ) ( t1169 != 0.0 ) ; t421 [ 1709ULL ] = ( int32_T ) (
t1482 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t421 [ 1710ULL ] = ( int32_T )
( intrm_sf_mf_1094 != 0.0 ) ; t421 [ 1711ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1094 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_1094 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1094 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [ 1712ULL ] = 1 ;
t421 [ 1713ULL ] = 1 ; t421 [ 1714ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1094 != 0.0 ) ) || ( ( intrm_sf_mf_1094 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_1094 == 0.0 ? 1.0E-16 : intrm_sf_mf_1094 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_1094
== 0.0 ? 1.0E-16 : intrm_sf_mf_1094 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_1094 == 0.0 ? 1.0E-16 : intrm_sf_mf_1094 ) +
2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [ 1715ULL ] = ( int32_T ) (
( t1173 / 8.0 == t1173 / 8.0 ) && ( fabs ( t1173 / 8.0 ) != pmf_get_inf ( ) )
) ; t421 [ 1716ULL ] = ( int32_T ) ( ( ! ( t1173 / 8.0 == t1173 / 8.0 ) ) ||
( ! ( fabs ( t1173 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1173 / 8.0 >= 0.0 ) )
; t421 [ 1717ULL ] = 1 ; t421 [ 1718ULL ] = ( int32_T ) ( t1483 / 2.0 >= 0.0
) ; t421 [ 1719ULL ] = 1 ; t421 [ 1720ULL ] = 1 ; t421 [ 1721ULL ] = 1 ; t421
[ 1722ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1483 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1173 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t1173 / 8.0 == t1173 / 8.0 ) && ( fabs ( t1173 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 1723ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1483 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1173 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1173 / 8.0 == t1173 / 8.0 ) ) || ( ! ( fabs (
t1173 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1173 / 8.0 >= 0.0 ) ) ; t421 [
1724ULL ] = 1 ; t421 [ 1725ULL ] = 1 ; t421 [ 1726ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t1483 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1173 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1483 / 2.0 >= 0.0 ) ) ; t421 [ 1727ULL
] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1483 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1173 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1173 /
8.0 == t1173 / 8.0 ) ) || ( ! ( fabs ( t1173 / 8.0 ) != pmf_get_inf ( ) ) ) )
|| ( ( t1173 / 8.0 == t1173 / 8.0 ) && ( fabs ( t1173 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1173 / 8.0 >= 0.0 ) ) ) || ( ! ( t1483 / 2.0 >= 0.0 ) ) || (
( pmf_pow ( t1483 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1173 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1728ULL ] = 1 ; t421 [ 1729ULL ] = 1 ;
t421 [ 1730ULL ] = 1 ; t421 [ 1731ULL ] = 1 ; t421 [ 1732ULL ] = 1 ; t421 [
1733ULL ] = 1 ; t421 [ 1734ULL ] = 1 ; t421 [ 1735ULL ] = ( int32_T ) ( t1483
/ 2.0 != 0.0 ) ; t421 [ 1736ULL ] = 1 ; t2182 = t1483 / 2.0 ; t421 [ 1737ULL
] = ( int32_T ) ( ( ! ( t1168 > t1493 / 0.0019634954084936209 / ( t2182 ==
0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( t1168 != 0.0 ) ) ; t421 [ 1738ULL ] =
1 ; t421 [ 1739ULL ] = 1 ; t2182 = t1483 / 2.0 ; t421 [ 1740ULL ] = ( int32_T
) ( ( ! ( t1168 > t1493 / 0.0019634954084936209 / ( t2182 == 0.0 ? 1.0E-16 :
t2182 ) / 30.0 ) ) || ( ! ( t1168 != 0.0 ) ) || ( t1483 / 2.0 != 0.0 ) ) ;
t421 [ 1741ULL ] = ( int32_T ) ( - t1174 < 663.67513503334737 ) ; t421 [
1742ULL ] = 1 ; t421 [ 1743ULL ] = 1 ; t421 [ 1744ULL ] = ( int32_T ) ( X [
320ULL ] != 0.0 ) ; t421 [ 1745ULL ] = 1 ; t421 [ 1746ULL ] = 1 ; t421 [
1747ULL ] = 1 ; t421 [ 1748ULL ] = 1 ; t421 [ 1749ULL ] = 1 ; t421 [ 1750ULL
] = ( int32_T ) ( ( X [ 342ULL ] * X [ 342ULL ] + 3.0116308772356542E-13 == X
[ 342ULL ] * X [ 342ULL ] + 3.0116308772356542E-13 ) && ( fabs ( X [ 342ULL ]
* X [ 342ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t421 [
1751ULL ] = ( int32_T ) ( ( ! ( X [ 342ULL ] * X [ 342ULL ] +
3.0116308772356542E-13 == X [ 342ULL ] * X [ 342ULL ] +
3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [ 342ULL ] * X [ 342ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) || ( X [ 342ULL ] * X [
342ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t421 [ 1752ULL ] = 1 ; t421 [
1753ULL ] = 1 ; t421 [ 1754ULL ] = ( int32_T ) ( ( X [ 342ULL ] * X [ 342ULL
] + 5.8094731428156895E-13 == X [ 342ULL ] * X [ 342ULL ] +
5.8094731428156895E-13 ) && ( fabs ( X [ 342ULL ] * X [ 342ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1755ULL ] = (
int32_T ) ( ( ! ( X [ 342ULL ] * X [ 342ULL ] + 5.8094731428156895E-13 == X [
342ULL ] * X [ 342ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
342ULL ] * X [ 342ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 342ULL ] * X [ 342ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t421 [
1756ULL ] = 1 ; t421 [ 1757ULL ] = 1 ; t421 [ 1758ULL ] = ( int32_T ) ( ( X [
342ULL ] * X [ 342ULL ] + 4.1024015709531014E-13 == X [ 342ULL ] * X [ 342ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 342ULL ] * X [ 342ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1759ULL ] = (
int32_T ) ( ( ! ( X [ 342ULL ] * X [ 342ULL ] + 4.1024015709531014E-13 == X [
342ULL ] * X [ 342ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
342ULL ] * X [ 342ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 342ULL ] * X [ 342ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t421 [
1760ULL ] = ( int32_T ) ( t1125 != 0.0 ) ; t421 [ 1761ULL ] = 1 ; t421 [
1762ULL ] = 1 ; t421 [ 1763ULL ] = 1 ; t421 [ 1764ULL ] = 1 ; t421 [ 1765ULL
] = 1 ; t421 [ 1766ULL ] = ( int32_T ) ( ( X [ 330ULL ] * X [ 330ULL ] +
3.0116308772356542E-13 == X [ 330ULL ] * X [ 330ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1767ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 3.0116308772356542E-13 == X [
330ULL ] * X [ 330ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t421 [
1768ULL ] = 1 ; t421 [ 1769ULL ] = 1 ; t421 [ 1770ULL ] = ( int32_T ) ( ( X [
330ULL ] * X [ 330ULL ] + 5.8094731428156895E-13 == X [ 330ULL ] * X [ 330ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1771ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 5.8094731428156895E-13 == X [
330ULL ] * X [ 330ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t421 [
1772ULL ] = 1 ; t421 [ 1773ULL ] = 1 ; t421 [ 1774ULL ] = ( int32_T ) ( ( X [
330ULL ] * X [ 330ULL ] + 4.1024015709531014E-13 == X [ 330ULL ] * X [ 330ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t421 [ 1775ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 4.1024015709531014E-13 == X [
330ULL ] * X [ 330ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t421 [
1776ULL ] = ( int32_T ) ( X [ 360ULL ] * t1181 != 0.0 ) ; t421 [ 1777ULL ] =
( int32_T ) ( t1125 != 0.0 ) ; t421 [ 1778ULL ] = ( int32_T ) ( X [ 360ULL ]
!= 0.0 ) ; t421 [ 1779ULL ] = ( int32_T ) ( X [ 360ULL ] != 0.0 ) ; t421 [
1780ULL ] = 1 ; t421 [ 1781ULL ] = ( int32_T ) ( ( ! ( X [ 330ULL ] > 0.0 ) )
|| ( t1167 != 0.0 ) ) ; t421 [ 1782ULL ] = 1 ; t421 [ 1783ULL ] = 1 ; t421 [
1784ULL ] = 1 ; t421 [ 1785ULL ] = ( int32_T ) ( ( ! ( X [ 330ULL ] > 0.0 ) )
|| ( ! ( t1167 != 0.0 ) ) || ( t1183 != 0.0 ) ) ; t421 [ 1786ULL ] = 1 ; t421
[ 1787ULL ] = ( int32_T ) ( ( ! ( X [ 330ULL ] < 0.0 ) ) || ( X [ 330ULL ] >
0.0 ) || ( t1167 != 0.0 ) ) ; t421 [ 1788ULL ] = 1 ; t421 [ 1789ULL ] = 1 ;
t421 [ 1790ULL ] = 1 ; t421 [ 1791ULL ] = ( int32_T ) ( ( ! ( X [ 330ULL ] <
0.0 ) ) || ( ! ( t1167 != 0.0 ) ) || ( X [ 330ULL ] > 0.0 ) || ( t1183 != 0.0
) ) ; t421 [ 1792ULL ] = 1 ; t421 [ 1793ULL ] = 1 ; t421 [ 1794ULL ] = (
int32_T ) ( t1188 != 0.0 ) ; t421 [ 1795ULL ] = 1 ; t421 [ 1796ULL ] = 1 ;
t421 [ 1797ULL ] = 1 ; t421 [ 1798ULL ] = 1 ; t421 [ 1799ULL ] = 1 ; t421 [
1800ULL ] = 1 ; t421 [ 1801ULL ] = 1 ; t421 [ 1802ULL ] = 1 ; t421 [ 1803ULL
] = 1 ; t421 [ 1804ULL ] = 1 ; t421 [ 1805ULL ] = ( int32_T ) (
intrm_sf_mf_1170 - t1181 != 0.0 ) ; t421 [ 1806ULL ] = 1 ; t421 [ 1807ULL ] =
1 ; t421 [ 1808ULL ] = ( int32_T ) ( t1181 != 0.0 ) ; t421 [ 1809ULL ] = (
int32_T ) ( ( ! ( t1181 != 0.0 ) ) || ( X [ 360ULL ] != 0.0 ) ) ; t421 [
1810ULL ] = 1 ; t421 [ 1811ULL ] = ( int32_T ) ( ( ! ( t1181 != 0.0 ) ) || (
( t1181 != 0.0 ) && ( ! ( X [ 360ULL ] != 0.0 ) ) ) || ( fabs ( t1516 / (
t1181 == 0.0 ? 1.0E-16 : t1181 ) / ( X [ 360ULL ] == 0.0 ? 1.0E-16 : X [
360ULL ] ) ) >= 0.0 ) ) ; t421 [ 1812ULL ] = ( int32_T ) ( ( ! ( X [ 330ULL ]
>= 0.0 ) ) || ( t1177 != 0.0 ) ) ; t421 [ 1813ULL ] = ( int32_T ) ( ( X [
330ULL ] >= 0.0 ) || ( t1177 != 0.0 ) ) ; t421 [ 1814ULL ] = ( int32_T ) (
t1125 != 0.0 ) ; t421 [ 1815ULL ] = 1 ; t421 [ 1816ULL ] = 1 ; t421 [ 1817ULL
] = 1 ; t421 [ 1818ULL ] = 1 ; t421 [ 1819ULL ] = 1 ; t421 [ 1820ULL ] = (
int32_T ) ( ( X [ 330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 == X [
330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 ) && ( fabs ( X [ 330ULL ] *
X [ 330ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [
1821ULL ] = ( int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] +
2.7104677895120892E-12 == X [ 330ULL ] * X [ 330ULL ] +
2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [ 330ULL ] * X [
330ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [ 1822ULL ] = 1 ; t421 [
1823ULL ] = 1 ; t421 [ 1824ULL ] = ( int32_T ) ( ( X [ 330ULL ] * X [ 330ULL
] + 5.2285258285341208E-12 == X [ 330ULL ] * X [ 330ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1825ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 == X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [
1826ULL ] = 1 ; t421 [ 1827ULL ] = 1 ; t421 [ 1828ULL ] = ( int32_T ) ( ( X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 == X [ 330ULL ] * X [ 330ULL
] + 3.6921614138577926E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1829ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 == X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [
1830ULL ] = 1 ; t421 [ 1831ULL ] = 1 ; t421 [ 1832ULL ] = 1 ; t421 [ 1833ULL
] = 1 ; t421 [ 1834ULL ] = 1 ; t421 [ 1835ULL ] = ( int32_T ) ( ( X [ 330ULL
] * X [ 330ULL ] + 2.7104677895120892E-12 == X [ 330ULL ] * X [ 330ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1836ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 == X [
330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t421 [
1837ULL ] = 1 ; t421 [ 1838ULL ] = 1 ; t421 [ 1839ULL ] = ( int32_T ) ( ( X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 == X [ 330ULL ] * X [ 330ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1840ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 == X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t421 [
1841ULL ] = 1 ; t421 [ 1842ULL ] = 1 ; t421 [ 1843ULL ] = ( int32_T ) ( ( X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 == X [ 330ULL ] * X [ 330ULL
] + 3.6921614138577926E-12 ) && ( fabs ( X [ 330ULL ] * X [ 330ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t421 [ 1844ULL ] = (
int32_T ) ( ( ! ( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 == X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [
330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 330ULL ] * X [ 330ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t421 [
1845ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 != 0.0 ) ;
t421 [ 1846ULL ] = 1 ; t421 [ 1847ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 != 0.0 ) ) ||
( fabs ( t1183 * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pressure_Relief_Val6 ) )
>= 0.0 ) ) ; t421 [ 1848ULL ] = ( int32_T ) ( X [ 47ULL ] != 0.0 ) ; t421 [
1849ULL ] = ( int32_T ) ( X [ 368ULL ] != 0.0 ) ; t421 [ 1850ULL ] = 1 ; t421
[ 1851ULL ] = 1 ; t421 [ 1852ULL ] = 1 ; t421 [ 1853ULL ] = ( int32_T ) (
t1193 - intrm_sf_mf_1191 != 0.0 ) ; t421 [ 1854ULL ] = 1 ; t421 [ 1855ULL ] =
1 ; t421 [ 1856ULL ] = ( int32_T ) ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 == Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 ) && ( fabs (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 1857ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 == Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 ) ) || ( ! ( fabs (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_AI *
9.999999999999999E-14 + fabs ( X [ 367ULL ] * t1194 * intrm_sf_mf_1191 ) *
1.0E-9 >= 0.0 ) ) ; t421 [ 1858ULL ] = 1 ; t421 [ 1859ULL ] = 1 ; t421 [
1860ULL ] = ( int32_T ) ( intrm_sf_mf_1191 != 0.0 ) ; t421 [ 1861ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_1191 != 0.0 ) ) || ( X [ 367ULL ] != 0.0 ) ) ;
t421 [ 1862ULL ] = 1 ; t421 [ 1863ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1191 != 0.0 ) ) || ( ( intrm_sf_mf_1191 != 0.0 ) && ( ! ( X [
367ULL ] != 0.0 ) ) ) || ( fabs ( t1525 / ( intrm_sf_mf_1191 == 0.0 ? 1.0E-16
: intrm_sf_mf_1191 ) / ( X [ 367ULL ] == 0.0 ? 1.0E-16 : X [ 367ULL ] ) ) >=
0.0 ) ) ; t421 [ 1864ULL ] = ( int32_T ) ( t1199 * 0.32 != 0.0 ) ; t421 [
1865ULL ] = ( int32_T ) ( X [ 10ULL ] * intrm_sf_mf_1191 != 0.0 ) ; t421 [
1866ULL ] = ( int32_T ) ( t1203 * 6.4000000000000011E-5 != 0.0 ) ; t421 [
1867ULL ] = ( int32_T ) ( t1207 != 0.0 ) ; t421 [ 1868ULL ] = ( int32_T ) ( (
! ( t1207 != 0.0 ) ) || ( 6.9 / ( t1207 == 0.0 ? 1.0E-16 : t1207 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 1869ULL ] = 1 ; t421 [ 1870ULL ] =
1 ; t421 [ 1871ULL ] = ( int32_T ) ( ( ! ( t1207 != 0.0 ) ) || ( ( t1207 !=
0.0 ) && ( ! ( 6.9 / ( t1207 == 0.0 ? 1.0E-16 : t1207 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1207 == 0.0 ?
1.0E-16 : t1207 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1207 ==
0.0 ? 1.0E-16 : t1207 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
1872ULL ] = ( int32_T ) ( t1203 * 0.0020480000000000003 != 0.0 ) ; t421 [
1873ULL ] = 1 ; t421 [ 1874ULL ] = 1 ; t421 [ 1875ULL ] = 1 ; t421 [ 1876ULL
] = 1 ; t421 [ 1877ULL ] = ( int32_T ) ( X [ 47ULL ] != 0.0 ) ; t421 [
1878ULL ] = ( int32_T ) ( X [ 371ULL ] != 0.0 ) ; t421 [ 1879ULL ] = 1 ; t421
[ 1880ULL ] = 1 ; t421 [ 1881ULL ] = 1 ; t421 [ 1882ULL ] = ( int32_T ) (
t1206 - intrm_sf_mf_1191 != 0.0 ) ; t421 [ 1883ULL ] = 1 ; t421 [ 1884ULL ] =
1 ; t421 [ 1885ULL ] = ( int32_T ) ( ( t1201 * t1201 * 9.999999999999999E-14
+ fabs ( X [ 370ULL ] * t1179 * intrm_sf_mf_1191 ) * 1.0E-9 == t1201 * t1201
* 9.999999999999999E-14 + fabs ( X [ 370ULL ] * t1179 * intrm_sf_mf_1191 ) *
1.0E-9 ) && ( fabs ( t1201 * t1201 * 9.999999999999999E-14 + fabs ( X [
370ULL ] * t1179 * intrm_sf_mf_1191 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ;
t421 [ 1886ULL ] = ( int32_T ) ( ( ! ( t1201 * t1201 * 9.999999999999999E-14
+ fabs ( X [ 370ULL ] * t1179 * intrm_sf_mf_1191 ) * 1.0E-9 == t1201 * t1201
* 9.999999999999999E-14 + fabs ( X [ 370ULL ] * t1179 * intrm_sf_mf_1191 ) *
1.0E-9 ) ) || ( ! ( fabs ( t1201 * t1201 * 9.999999999999999E-14 + fabs ( X [
370ULL ] * t1179 * intrm_sf_mf_1191 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || (
t1201 * t1201 * 9.999999999999999E-14 + fabs ( X [ 370ULL ] * t1179 *
intrm_sf_mf_1191 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 1887ULL ] = 1 ; t421 [
1888ULL ] = 1 ; t421 [ 1889ULL ] = ( int32_T ) ( intrm_sf_mf_1191 != 0.0 ) ;
t421 [ 1890ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1191 != 0.0 ) ) || ( X [
370ULL ] != 0.0 ) ) ; t421 [ 1891ULL ] = 1 ; t421 [ 1892ULL ] = ( int32_T ) (
( ! ( intrm_sf_mf_1191 != 0.0 ) ) || ( ( intrm_sf_mf_1191 != 0.0 ) && ( ! ( X
[ 370ULL ] != 0.0 ) ) ) || ( fabs ( t1544 / ( intrm_sf_mf_1191 == 0.0 ?
1.0E-16 : intrm_sf_mf_1191 ) / ( X [ 370ULL ] == 0.0 ? 1.0E-16 : X [ 370ULL ]
) ) >= 0.0 ) ) ; t421 [ 1893ULL ] = ( int32_T ) ( t1199 * 0.32 != 0.0 ) ;
t421 [ 1894ULL ] = ( int32_T ) ( t1203 * 6.4000000000000011E-5 != 0.0 ) ;
t421 [ 1895ULL ] = ( int32_T ) ( t1212 != 0.0 ) ; t421 [ 1896ULL ] = (
int32_T ) ( ( ! ( t1212 != 0.0 ) ) || ( 6.9 / ( t1212 == 0.0 ? 1.0E-16 :
t1212 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 1897ULL ] = 1 ; t421 [
1898ULL ] = 1 ; t421 [ 1899ULL ] = ( int32_T ) ( ( ! ( t1212 != 0.0 ) ) || (
( t1212 != 0.0 ) && ( ! ( 6.9 / ( t1212 == 0.0 ? 1.0E-16 : t1212 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1212 == 0.0 ?
1.0E-16 : t1212 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1212 ==
0.0 ? 1.0E-16 : t1212 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
1900ULL ] = ( int32_T ) ( t1203 * 0.0020480000000000003 != 0.0 ) ; t421 [
1901ULL ] = 1 ; t421 [ 1902ULL ] = 1 ; t421 [ 1903ULL ] = 1 ; t421 [ 1904ULL
] = 1 ; t421 [ 1905ULL ] = ( int32_T ) ( ( ! ( - X [ 307ULL ] >= 0.0 ) ) || (
t1200 != 0.0 ) ) ; t421 [ 1906ULL ] = ( int32_T ) ( ( - X [ 307ULL ] >= 0.0 )
|| ( t1200 != 0.0 ) ) ; t421 [ 1907ULL ] = ( int32_T ) ( ( ! ( X [ 369ULL ]
>= 0.0 ) ) || ( t1208 != 0.0 ) ) ; t421 [ 1908ULL ] = ( int32_T ) ( ( X [
369ULL ] >= 0.0 ) || ( t1208 != 0.0 ) ) ; t421 [ 1909ULL ] = 1 ; t421 [
1910ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 12ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 12ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 12ULL ]
>= 0.01 ) ) ; t421 [ 1911ULL ] = 1 ; t421 [ 1912ULL ] = ( int32_T ) ( t1210
!= 0.0 ) ; t421 [ 1913ULL ] = ( int32_T ) ( X [ 47ULL ] * 100000.0 > 0.0 ) ;
t421 [ 1914ULL ] = ( int32_T ) ( ( ! ( X [ 47ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 47ULL ] * 100000.0 ) - t423 [ 0ULL ] < 663.67513503334737 ) ) ;
t421 [ 1915ULL ] = 1 ; t421 [ 1916ULL ] = ( int32_T ) ( ( ! ( t1213 >= 1.0 )
) || ( ( t1213 - 1.0 ) * 461.523 + t1211 != 0.0 ) ) ; t421 [ 1917ULL ] = (
int32_T ) ( t1214 * 0.01 != 0.0 ) ; t421 [ 1918ULL ] = 1 ; t421 [ 1919ULL ] =
1 ; t421 [ 1920ULL ] = 1 ; t421 [ 1921ULL ] = 1 ; t421 [ 1922ULL ] = (
int32_T ) ( t1121 != 0.0 ) ; t421 [ 1923ULL ] = ( int32_T ) ( t1560 / 2.0 *
0.32 != 0.0 ) ; t421 [ 1924ULL ] = ( int32_T ) ( intrm_sf_mf_1241 != 0.0 ) ;
t421 [ 1925ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1241 != 0.0 ) ) || ( 6.9 /
( intrm_sf_mf_1241 == 0.0 ? 1.0E-16 : intrm_sf_mf_1241 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 1926ULL ] = 1 ; t421 [ 1927ULL ] =
1 ; t421 [ 1928ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1241 != 0.0 ) ) || ( (
intrm_sf_mf_1241 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_1241 == 0.0 ? 1.0E-16
: intrm_sf_mf_1241 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 (
6.9 / ( intrm_sf_mf_1241 == 0.0 ? 1.0E-16 : intrm_sf_mf_1241 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1241 == 0.0 ?
1.0E-16 : intrm_sf_mf_1241 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t421 [ 1929ULL ] = ( int32_T ) ( ( t1217 / 8.0 == t1217 / 8.0 ) && ( fabs (
t1217 / 8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 1930ULL ] = ( int32_T ) ( ( ! (
t1217 / 8.0 == t1217 / 8.0 ) ) || ( ! ( fabs ( t1217 / 8.0 ) != pmf_get_inf (
) ) ) || ( t1217 / 8.0 >= 0.0 ) ) ; t421 [ 1931ULL ] = 1 ; t421 [ 1932ULL ] =
( int32_T ) ( t1565 / 2.0 >= 0.0 ) ; t421 [ 1933ULL ] = 1 ; t421 [ 1934ULL ]
= 1 ; t421 [ 1935ULL ] = 1 ; t421 [ 1936ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1565 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1217 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1217 / 8.0 == t1217 / 8.0 ) && ( fabs (
t1217 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t421 [ 1937ULL ] = ( int32_T ) ( ( !
( ( pmf_pow ( t1565 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1217
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1217 / 8.0 == t1217 / 8.0 ) )
|| ( ! ( fabs ( t1217 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1217 / 8.0 >=
0.0 ) ) ; t421 [ 1938ULL ] = 1 ; t421 [ 1939ULL ] = 1 ; t421 [ 1940ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1565 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1217 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1565 / 2.0 >= 0.0 )
) ; t421 [ 1941ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1565 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1217 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1217 / 8.0 == t1217 / 8.0 ) ) || ( ! ( fabs ( t1217 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1217 / 8.0 == t1217 / 8.0 ) && ( fabs
( t1217 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1217 / 8.0 >= 0.0 ) ) ) || ( !
( t1565 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1565 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1217 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 1942ULL ]
= 1 ; t421 [ 1943ULL ] = 1 ; t421 [ 1944ULL ] = 1 ; t421 [ 1945ULL ] = 1 ;
t421 [ 1946ULL ] = 1 ; t421 [ 1947ULL ] = 1 ; t421 [ 1948ULL ] = 1 ; t421 [
1949ULL ] = ( int32_T ) ( t1565 / 2.0 != 0.0 ) ; t421 [ 1950ULL ] = 1 ; t2182
= t1565 / 2.0 ; t421 [ 1951ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1240 >
t1572 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || (
intrm_sf_mf_1240 != 0.0 ) ) ; t421 [ 1952ULL ] = 1 ; t421 [ 1953ULL ] = 1 ;
t2182 = t1565 / 2.0 ; t421 [ 1954ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1240
> t1572 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 ) ) || ( ! (
intrm_sf_mf_1240 != 0.0 ) ) || ( t1565 / 2.0 != 0.0 ) ) ; t421 [ 1955ULL ] =
( int32_T ) ( - intrm_sf_mf_1247 < 663.67513503334737 ) ; t421 [ 1956ULL ] =
( int32_T ) ( intrm_sf_mf_1252 != 0.0 ) ; t421 [ 1957ULL ] = ( int32_T ) (
t1585 / 2.0 * 0.32 != 0.0 ) ; t421 [ 1958ULL ] = ( int32_T ) ( t1219 != 0.0 )
; t421 [ 1959ULL ] = ( int32_T ) ( ( ! ( t1219 != 0.0 ) ) || ( 6.9 / ( t1219
== 0.0 ? 1.0E-16 : t1219 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [
1960ULL ] = 1 ; t421 [ 1961ULL ] = 1 ; t421 [ 1962ULL ] = ( int32_T ) ( ( ! (
t1219 != 0.0 ) ) || ( ( t1219 != 0.0 ) && ( ! ( 6.9 / ( t1219 == 0.0 ?
1.0E-16 : t1219 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1219 == 0.0 ? 1.0E-16 : t1219 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1219 == 0.0 ? 1.0E-16 : t1219 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t421 [ 1963ULL ] = ( int32_T ) ( ( t1223 / 8.0 == t1223 / 8.0 ) &&
( fabs ( t1223 / 8.0 ) != pmf_get_inf ( ) ) ) ; t421 [ 1964ULL ] = ( int32_T
) ( ( ! ( t1223 / 8.0 == t1223 / 8.0 ) ) || ( ! ( fabs ( t1223 / 8.0 ) !=
pmf_get_inf ( ) ) ) || ( t1223 / 8.0 >= 0.0 ) ) ; t421 [ 1965ULL ] = 1 ; t421
[ 1966ULL ] = ( int32_T ) ( t1589 / 2.0 >= 0.0 ) ; t421 [ 1967ULL ] = 1 ;
t421 [ 1968ULL ] = 1 ; t421 [ 1969ULL ] = 1 ; t421 [ 1970ULL ] = ( int32_T )
( ( ! ( ( pmf_pow ( t1589 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1223 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1223 / 8.0 == t1223 / 8.0 )
&& ( fabs ( t1223 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t421 [ 1971ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1589 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1223 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1223 / 8.0 ==
t1223 / 8.0 ) ) || ( ! ( fabs ( t1223 / 8.0 ) != pmf_get_inf ( ) ) ) ) || (
t1223 / 8.0 >= 0.0 ) ) ; t421 [ 1972ULL ] = 1 ; t421 [ 1973ULL ] = 1 ; t421 [
1974ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1589 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1223 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1589 /
2.0 >= 0.0 ) ) ; t421 [ 1975ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1589 /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1223 / 8.0 ) * 12.7 + 1.0
>= 1.0E-6 ) ) || ( ( ! ( t1223 / 8.0 == t1223 / 8.0 ) ) || ( ! ( fabs ( t1223
/ 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1223 / 8.0 == t1223 / 8.0 ) && (
fabs ( t1223 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1223 / 8.0 >= 0.0 ) ) )
|| ( ! ( t1589 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1589 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1223 / 8.0 ) * 12.7 + 1.0 != 0.0
) ) ; t421 [ 1976ULL ] = 1 ; t421 [ 1977ULL ] = 1 ; t421 [ 1978ULL ] = 1 ;
t421 [ 1979ULL ] = 1 ; t421 [ 1980ULL ] = 1 ; t421 [ 1981ULL ] = 1 ; t421 [
1982ULL ] = 1 ; t421 [ 1983ULL ] = ( int32_T ) ( t1589 / 2.0 != 0.0 ) ; t421
[ 1984ULL ] = 1 ; t2182 = t1589 / 2.0 ; t421 [ 1985ULL ] = ( int32_T ) ( ( !
( intrm_sf_mf_1263 > t1597 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0
) ) || ( intrm_sf_mf_1263 != 0.0 ) ) ; t421 [ 1986ULL ] = 1 ; t421 [ 1987ULL
] = 1 ; t2182 = t1589 / 2.0 ; t421 [ 1988ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1263 > t1597 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 )
) || ( ! ( intrm_sf_mf_1263 != 0.0 ) ) || ( t1589 / 2.0 != 0.0 ) ) ; t421 [
1989ULL ] = ( int32_T ) ( - t1224 < 663.67513503334737 ) ; t421 [ 1990ULL ] =
1 ; t421 [ 1991ULL ] = 1 ; t421 [ 1992ULL ] = ( int32_T ) ( X [ 295ULL ] !=
0.0 ) ; t421 [ 1993ULL ] = 1 ; t421 [ 1994ULL ] = 1 ; t421 [ 1995ULL ] = 1 ;
t421 [ 1996ULL ] = 1 ; t421 [ 1997ULL ] = 1 ; t421 [ 1998ULL ] = ( int32_T )
( ( X [ 307ULL ] * X [ 307ULL ] + 2.5711439722933289E-8 == X [ 307ULL ] * X [
307ULL ] + 2.5711439722933289E-8 ) && ( fabs ( X [ 307ULL ] * X [ 307ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 1999ULL ] = ( int32_T
) ( ( ! ( X [ 307ULL ] * X [ 307ULL ] + 2.5711439722933289E-8 == X [ 307ULL ]
* X [ 307ULL ] + 2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 307ULL ] * X [
307ULL ] + 2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 307ULL ] *
X [ 307ULL ] + 2.5711439722933289E-8 >= 0.0 ) ) ; t421 [ 2000ULL ] = 1 ; t421
[ 2001ULL ] = 1 ; t421 [ 2002ULL ] = ( int32_T ) ( ( X [ 307ULL ] * X [
307ULL ] + 4.9597684650720062E-8 == X [ 307ULL ] * X [ 307ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 307ULL ] * X [ 307ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 2003ULL ] = ( int32_T
) ( ( ! ( X [ 307ULL ] * X [ 307ULL ] + 4.9597684650720062E-8 == X [ 307ULL ]
* X [ 307ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 307ULL ] * X [
307ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 307ULL ] *
X [ 307ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t421 [ 2004ULL ] = 1 ; t421
[ 2005ULL ] = 1 ; t421 [ 2006ULL ] = ( int32_T ) ( ( X [ 307ULL ] * X [
307ULL ] + 3.5023764535063242E-8 == X [ 307ULL ] * X [ 307ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 307ULL ] * X [ 307ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 2007ULL ] = ( int32_T
) ( ( ! ( X [ 307ULL ] * X [ 307ULL ] + 3.5023764535063242E-8 == X [ 307ULL ]
* X [ 307ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 307ULL ] * X [
307ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 307ULL ] *
X [ 307ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t421 [ 2008ULL ] = (
int32_T ) ( X [ 64ULL ] != 0.0 ) ; t421 [ 2009ULL ] = 1 ; t421 [ 2010ULL ] =
1 ; t421 [ 2011ULL ] = 1 ; t421 [ 2012ULL ] = 1 ; t421 [ 2013ULL ] = 1 ; t421
[ 2014ULL ] = ( int32_T ) ( ( X [ 369ULL ] * X [ 369ULL ] +
2.5711439722933289E-8 == X [ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8
) && ( fabs ( X [ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 2015ULL ] = ( int32_T ) ( ( ! ( X [ 369ULL ] * X
[ 369ULL ] + 2.5711439722933289E-8 == X [ 369ULL ] * X [ 369ULL ] +
2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 369ULL ] * X [ 369ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 369ULL ] * X [ 369ULL
] + 2.5711439722933289E-8 >= 0.0 ) ) ; t421 [ 2016ULL ] = 1 ; t421 [ 2017ULL
] = 1 ; t421 [ 2018ULL ] = ( int32_T ) ( ( X [ 369ULL ] * X [ 369ULL ] +
4.9597684650720062E-8 == X [ 369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 2019ULL ] = ( int32_T ) ( ( ! ( X [ 369ULL ] * X
[ 369ULL ] + 4.9597684650720062E-8 == X [ 369ULL ] * X [ 369ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 369ULL ] * X [ 369ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 369ULL ] * X [ 369ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t421 [ 2020ULL ] = 1 ; t421 [ 2021ULL
] = 1 ; t421 [ 2022ULL ] = ( int32_T ) ( ( X [ 369ULL ] * X [ 369ULL ] +
3.5023764535063242E-8 == X [ 369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8
) && ( fabs ( X [ 369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 2023ULL ] = ( int32_T ) ( ( ! ( X [ 369ULL ] * X
[ 369ULL ] + 3.5023764535063242E-8 == X [ 369ULL ] * X [ 369ULL ] +
3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 369ULL ] * X [ 369ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 369ULL ] * X [ 369ULL
] + 3.5023764535063242E-8 >= 0.0 ) ) ; t421 [ 2024ULL ] = ( int32_T ) ( X [
48ULL ] != 0.0 ) ; t421 [ 2025ULL ] = ( int32_T ) ( X [ 382ULL ] != 0.0 ) ;
t421 [ 2026ULL ] = 1 ; t421 [ 2027ULL ] = 1 ; t421 [ 2028ULL ] = 1 ; t421 [
2029ULL ] = ( int32_T ) ( t1232 - t1227 != 0.0 ) ; t421 [ 2030ULL ] = 1 ;
t421 [ 2031ULL ] = 1 ; t421 [ 2032ULL ] = ( int32_T ) ( ( t1230 * t1230 *
9.999999999999999E-14 + fabs ( X [ 381ULL ] * t825 * t1227 ) * 1.0E-9 ==
t1230 * t1230 * 9.999999999999999E-14 + fabs ( X [ 381ULL ] * t825 * t1227 )
* 1.0E-9 ) && ( fabs ( t1230 * t1230 * 9.999999999999999E-14 + fabs ( X [
381ULL ] * t825 * t1227 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 2033ULL
] = ( int32_T ) ( ( ! ( t1230 * t1230 * 9.999999999999999E-14 + fabs ( X [
381ULL ] * t825 * t1227 ) * 1.0E-9 == t1230 * t1230 * 9.999999999999999E-14 +
fabs ( X [ 381ULL ] * t825 * t1227 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1230 *
t1230 * 9.999999999999999E-14 + fabs ( X [ 381ULL ] * t825 * t1227 ) * 1.0E-9
) != pmf_get_inf ( ) ) ) || ( t1230 * t1230 * 9.999999999999999E-14 + fabs (
X [ 381ULL ] * t825 * t1227 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 2034ULL ] = 1 ;
t421 [ 2035ULL ] = 1 ; t421 [ 2036ULL ] = ( int32_T ) ( t1227 != 0.0 ) ; t421
[ 2037ULL ] = ( int32_T ) ( ( ! ( t1227 != 0.0 ) ) || ( X [ 381ULL ] != 0.0 )
) ; t421 [ 2038ULL ] = 1 ; t421 [ 2039ULL ] = ( int32_T ) ( ( ! ( t1227 !=
0.0 ) ) || ( ( t1227 != 0.0 ) && ( ! ( X [ 381ULL ] != 0.0 ) ) ) || ( fabs (
t1613 / ( t1227 == 0.0 ? 1.0E-16 : t1227 ) / ( X [ 381ULL ] == 0.0 ? 1.0E-16
: X [ 381ULL ] ) ) >= 0.0 ) ) ; t421 [ 2040ULL ] = ( int32_T ) ( t1237 * 0.32
!= 0.0 ) ; t421 [ 2041ULL ] = ( int32_T ) ( X [ 13ULL ] * t1227 != 0.0 ) ;
t421 [ 2042ULL ] = ( int32_T ) ( t1242 * 6.4000000000000011E-5 != 0.0 ) ;
t421 [ 2043ULL ] = ( int32_T ) ( t1245 != 0.0 ) ; t421 [ 2044ULL ] = (
int32_T ) ( ( ! ( t1245 != 0.0 ) ) || ( 6.9 / ( t1245 == 0.0 ? 1.0E-16 :
t1245 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 2045ULL ] = 1 ; t421 [
2046ULL ] = 1 ; t421 [ 2047ULL ] = ( int32_T ) ( ( ! ( t1245 != 0.0 ) ) || (
( t1245 != 0.0 ) && ( ! ( 6.9 / ( t1245 == 0.0 ? 1.0E-16 : t1245 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1245 == 0.0 ?
1.0E-16 : t1245 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1245 ==
0.0 ? 1.0E-16 : t1245 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
2048ULL ] = ( int32_T ) ( t1242 * 0.0020480000000000003 != 0.0 ) ; t421 [
2049ULL ] = 1 ; t421 [ 2050ULL ] = 1 ; t421 [ 2051ULL ] = 1 ; t421 [ 2052ULL
] = 1 ; t421 [ 2053ULL ] = ( int32_T ) ( X [ 48ULL ] != 0.0 ) ; t421 [
2054ULL ] = ( int32_T ) ( X [ 384ULL ] != 0.0 ) ; t421 [ 2055ULL ] = 1 ; t421
[ 2056ULL ] = 1 ; t421 [ 2057ULL ] = 1 ; t421 [ 2058ULL ] = ( int32_T ) (
t1243 - t1227 != 0.0 ) ; t421 [ 2059ULL ] = 1 ; t421 [ 2060ULL ] = 1 ; t421 [
2061ULL ] = ( int32_T ) ( ( t1239 * t1239 * 9.999999999999999E-14 + fabs ( X
[ 383ULL ] * t1225 * t1227 ) * 1.0E-9 == t1239 * t1239 *
9.999999999999999E-14 + fabs ( X [ 383ULL ] * t1225 * t1227 ) * 1.0E-9 ) && (
fabs ( t1239 * t1239 * 9.999999999999999E-14 + fabs ( X [ 383ULL ] * t1225 *
t1227 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t421 [ 2062ULL ] = ( int32_T ) (
( ! ( t1239 * t1239 * 9.999999999999999E-14 + fabs ( X [ 383ULL ] * t1225 *
t1227 ) * 1.0E-9 == t1239 * t1239 * 9.999999999999999E-14 + fabs ( X [ 383ULL
] * t1225 * t1227 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1239 * t1239 *
9.999999999999999E-14 + fabs ( X [ 383ULL ] * t1225 * t1227 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t1239 * t1239 * 9.999999999999999E-14 + fabs ( X [
383ULL ] * t1225 * t1227 ) * 1.0E-9 >= 0.0 ) ) ; t421 [ 2063ULL ] = 1 ; t421
[ 2064ULL ] = 1 ; t421 [ 2065ULL ] = ( int32_T ) ( t1227 != 0.0 ) ; t421 [
2066ULL ] = ( int32_T ) ( ( ! ( t1227 != 0.0 ) ) || ( X [ 383ULL ] != 0.0 ) )
; t421 [ 2067ULL ] = 1 ; t421 [ 2068ULL ] = ( int32_T ) ( ( ! ( t1227 != 0.0
) ) || ( ( t1227 != 0.0 ) && ( ! ( X [ 383ULL ] != 0.0 ) ) ) || ( fabs (
t1633 / ( t1227 == 0.0 ? 1.0E-16 : t1227 ) / ( X [ 383ULL ] == 0.0 ? 1.0E-16
: X [ 383ULL ] ) ) >= 0.0 ) ) ; t421 [ 2069ULL ] = ( int32_T ) ( t1237 * 0.32
!= 0.0 ) ; t421 [ 2070ULL ] = ( int32_T ) ( t1242 * 6.4000000000000011E-5 !=
0.0 ) ; t421 [ 2071ULL ] = ( int32_T ) ( t1252 != 0.0 ) ; t421 [ 2072ULL ] =
( int32_T ) ( ( ! ( t1252 != 0.0 ) ) || ( 6.9 / ( t1252 == 0.0 ? 1.0E-16 :
t1252 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 2073ULL ] = 1 ; t421 [
2074ULL ] = 1 ; t421 [ 2075ULL ] = ( int32_T ) ( ( ! ( t1252 != 0.0 ) ) || (
( t1252 != 0.0 ) && ( ! ( 6.9 / ( t1252 == 0.0 ? 1.0E-16 : t1252 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1252 == 0.0 ?
1.0E-16 : t1252 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1252 ==
0.0 ? 1.0E-16 : t1252 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
2076ULL ] = ( int32_T ) ( t1242 * 0.0020480000000000003 != 0.0 ) ; t421 [
2077ULL ] = 1 ; t421 [ 2078ULL ] = 1 ; t421 [ 2079ULL ] = 1 ; t421 [ 2080ULL
] = 1 ; t421 [ 2081ULL ] = ( int32_T ) ( ( ! ( - X [ 369ULL ] >= 0.0 ) ) || (
t1238 != 0.0 ) ) ; t421 [ 2082ULL ] = ( int32_T ) ( ( - X [ 369ULL ] >= 0.0 )
|| ( t1238 != 0.0 ) ) ; t421 [ 2083ULL ] = ( int32_T ) ( ( ! ( - X [ 342ULL ]
>= 0.0 ) ) || ( t1247 != 0.0 ) ) ; t421 [ 2084ULL ] = ( int32_T ) ( ( - X [
342ULL ] >= 0.0 ) || ( t1247 != 0.0 ) ) ; t421 [ 2085ULL ] = 1 ; t421 [
2086ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 15ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 15ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 15ULL ]
>= 0.01 ) ) ; t421 [ 2087ULL ] = 1 ; t421 [ 2088ULL ] = ( int32_T ) ( t766 !=
0.0 ) ; t421 [ 2089ULL ] = ( int32_T ) ( X [ 48ULL ] * 100000.0 > 0.0 ) ;
t421 [ 2090ULL ] = ( int32_T ) ( ( ! ( X [ 48ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 48ULL ] * 100000.0 ) - t61 [ 0ULL ] < 663.67513503334737 ) ) ;
t421 [ 2091ULL ] = 1 ; t421 [ 2092ULL ] = ( int32_T ) ( ( ! ( t1253 >= 1.0 )
) || ( ( t1253 - 1.0 ) * 461.523 + t1251 != 0.0 ) ) ; t421 [ 2093ULL ] = (
int32_T ) ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I * 0.01
!= 0.0 ) ; t421 [ 2094ULL ] = 1 ; t421 [ 2095ULL ] = 1 ; t421 [ 2096ULL ] = 1
; t421 [ 2097ULL ] = 1 ; t421 [ 2098ULL ] = ( int32_T ) ( intrm_sf_mf_1252 !=
0.0 ) ; t421 [ 2099ULL ] = ( int32_T ) ( t1649 / 2.0 * 0.32 != 0.0 ) ; t421 [
2100ULL ] = ( int32_T ) ( intrm_sf_mf_1371 != 0.0 ) ; t421 [ 2101ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_1371 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_1371
== 0.0 ? 1.0E-16 : intrm_sf_mf_1371 ) + 0.00017169489553429715 > 0.0 ) ) ;
t421 [ 2102ULL ] = 1 ; t421 [ 2103ULL ] = 1 ; t421 [ 2104ULL ] = ( int32_T )
( ( ! ( intrm_sf_mf_1371 != 0.0 ) ) || ( ( intrm_sf_mf_1371 != 0.0 ) && ( ! (
6.9 / ( intrm_sf_mf_1371 == 0.0 ? 1.0E-16 : intrm_sf_mf_1371 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_1371
== 0.0 ? 1.0E-16 : intrm_sf_mf_1371 ) + 0.00017169489553429715 ) * pmf_log10
( 6.9 / ( intrm_sf_mf_1371 == 0.0 ? 1.0E-16 : intrm_sf_mf_1371 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 2105ULL ] = ( int32_T ) (
( t1256 / 8.0 == t1256 / 8.0 ) && ( fabs ( t1256 / 8.0 ) != pmf_get_inf ( ) )
) ; t421 [ 2106ULL ] = ( int32_T ) ( ( ! ( t1256 / 8.0 == t1256 / 8.0 ) ) ||
( ! ( fabs ( t1256 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1256 / 8.0 >= 0.0 ) )
; t421 [ 2107ULL ] = 1 ; t421 [ 2108ULL ] = ( int32_T ) ( t1650 / 2.0 >= 0.0
) ; t421 [ 2109ULL ] = 1 ; t421 [ 2110ULL ] = 1 ; t421 [ 2111ULL ] = 1 ; t421
[ 2112ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1650 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1256 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t1256 / 8.0 == t1256 / 8.0 ) && ( fabs ( t1256 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 2113ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1650 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1256 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1256 / 8.0 == t1256 / 8.0 ) ) || ( ! ( fabs (
t1256 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1256 / 8.0 >= 0.0 ) ) ; t421 [
2114ULL ] = 1 ; t421 [ 2115ULL ] = 1 ; t421 [ 2116ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t1650 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1256 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1650 / 2.0 >= 0.0 ) ) ; t421 [ 2117ULL
] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1650 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1256 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1256 /
8.0 == t1256 / 8.0 ) ) || ( ! ( fabs ( t1256 / 8.0 ) != pmf_get_inf ( ) ) ) )
|| ( ( t1256 / 8.0 == t1256 / 8.0 ) && ( fabs ( t1256 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1256 / 8.0 >= 0.0 ) ) ) || ( ! ( t1650 / 2.0 >= 0.0 ) ) || (
( pmf_pow ( t1650 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1256 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t421 [ 2118ULL ] = 1 ; t421 [ 2119ULL ] = 1 ;
t421 [ 2120ULL ] = 1 ; t421 [ 2121ULL ] = 1 ; t421 [ 2122ULL ] = 1 ; t421 [
2123ULL ] = 1 ; t421 [ 2124ULL ] = 1 ; t421 [ 2125ULL ] = ( int32_T ) ( t1650
/ 2.0 != 0.0 ) ; t421 [ 2126ULL ] = 1 ; t2182 = t1650 / 2.0 ; t421 [ 2127ULL
] = ( int32_T ) ( ( ! ( intrm_sf_mf_1372 > t1661 / 0.32 / ( t2182 == 0.0 ?
1.0E-16 : t2182 ) / 30.0 ) ) || ( intrm_sf_mf_1372 != 0.0 ) ) ; t421 [
2128ULL ] = 1 ; t421 [ 2129ULL ] = 1 ; t2182 = t1650 / 2.0 ; t421 [ 2130ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_1372 > t1661 / 0.32 / ( t2182 == 0.0 ?
1.0E-16 : t2182 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_1372 != 0.0 ) ) || ( t1650
/ 2.0 != 0.0 ) ) ; t421 [ 2131ULL ] = ( int32_T ) ( - t1257 <
663.67513503334737 ) ; t421 [ 2132ULL ] = ( int32_T ) ( t1162 != 0.0 ) ; t421
[ 2133ULL ] = ( int32_T ) ( t1671 / 2.0 * 0.32 != 0.0 ) ; t421 [ 2134ULL ] =
( int32_T ) ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg
!= 0.0 ) ; t421 [ 2135ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg != 0.0 ) ) ||
( 6.9 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 2136ULL ] = 1 ; t421 [ 2137ULL ] =
1 ; t421 [ 2138ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg != 0.0 ) ) ||
( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg != 0.0 )
&& ( ! ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg_neg ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 2139ULL ] = ( int32_T ) (
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) && ( fabs
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) !=
pmf_get_inf ( ) ) ) ; t421 [ 2140ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) ) || ( !
( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 )
!= pmf_get_inf ( ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 >= 0.0 ) )
; t421 [ 2141ULL ] = 1 ; t421 [ 2142ULL ] = ( int32_T ) ( t1674 / 2.0 >= 0.0
) ; t421 [ 2143ULL ] = 1 ; t421 [ 2144ULL ] = 1 ; t421 [ 2145ULL ] = 1 ; t421
[ 2146ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1674 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) && ( fabs
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t421 [ 2147ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1674 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) ) || ( !
( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 )
!= pmf_get_inf ( ) ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 >= 0.0 ) )
; t421 [ 2148ULL ] = 1 ; t421 [ 2149ULL ] = 1 ; t421 [ 2150ULL ] = ( int32_T
) ( ( ! ( ( pmf_pow ( t1674 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( t1674 / 2.0 >= 0.0 ) ) ; t421 [ 2151ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1674 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0
) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) ) || ( !
( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 )
!= pmf_get_inf ( ) ) ) ) || ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) && ( fabs
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) !=
pmf_get_inf ( ) ) && ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 >= 0.0 ) )
) || ( ! ( t1674 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1674 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 != 0.0 ) ) ; t421 [ 2152ULL ] = 1 ; t421 [ 2153ULL ] = 1 ; t421 [ 2154ULL
] = 1 ; t421 [ 2155ULL ] = 1 ; t421 [ 2156ULL ] = 1 ; t421 [ 2157ULL ] = 1 ;
t421 [ 2158ULL ] = 1 ; t421 [ 2159ULL ] = ( int32_T ) ( t1674 / 2.0 != 0.0 )
; t421 [ 2160ULL ] = 1 ; t2182 = t1674 / 2.0 ; t421 [ 2161ULL ] = ( int32_T )
( ( ! ( intrm_sf_mf_1395 > t1683 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 )
/ 30.0 ) ) || ( intrm_sf_mf_1395 != 0.0 ) ) ; t421 [ 2162ULL ] = 1 ; t421 [
2163ULL ] = 1 ; t2182 = t1674 / 2.0 ; t421 [ 2164ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1395 > t1683 / 0.32 / ( t2182 == 0.0 ? 1.0E-16 : t2182 ) / 30.0 )
) || ( ! ( intrm_sf_mf_1395 != 0.0 ) ) || ( t1674 / 2.0 != 0.0 ) ) ; t421 [
2165ULL ] = ( int32_T ) ( - intrm_sf_mf_1402 < 663.67513503334737 ) ; t421 [
2166ULL ] = 1 ; t421 [ 2167ULL ] = 1 ; t421 [ 2168ULL ] = ( int32_T ) ( X [
64ULL ] != 0.0 ) ; t421 [ 2169ULL ] = 1 ; t421 [ 2170ULL ] = 1 ; t421 [
2171ULL ] = 1 ; t421 [ 2172ULL ] = 1 ; t421 [ 2173ULL ] = 1 ; t421 [ 2174ULL
] = ( int32_T ) ( ( X [ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8 == X
[ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8 ) && ( fabs ( X [ 369ULL ]
* X [ 369ULL ] + 2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) ; t421 [
2175ULL ] = ( int32_T ) ( ( ! ( X [ 369ULL ] * X [ 369ULL ] +
2.5711439722933289E-8 == X [ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8
) ) || ( ! ( fabs ( X [ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8 ) !=
pmf_get_inf ( ) ) ) || ( X [ 369ULL ] * X [ 369ULL ] + 2.5711439722933289E-8
>= 0.0 ) ) ; t421 [ 2176ULL ] = 1 ; t421 [ 2177ULL ] = 1 ; t421 [ 2178ULL ] =
( int32_T ) ( ( X [ 369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8 == X [
369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8 ) && ( fabs ( X [ 369ULL ] *
X [ 369ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t421 [
2179ULL ] = ( int32_T ) ( ( ! ( X [ 369ULL ] * X [ 369ULL ] +
4.9597684650720062E-8 == X [ 369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8
) ) || ( ! ( fabs ( X [ 369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) || ( X [ 369ULL ] * X [ 369ULL ] + 4.9597684650720062E-8
>= 0.0 ) ) ; t421 [ 2180ULL ] = 1 ; t421 [ 2181ULL ] = 1 ; t421 [ 2182ULL ] =
( int32_T ) ( ( X [ 369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8 == X [
369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8 ) && ( fabs ( X [ 369ULL ] *
X [ 369ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t421 [
2183ULL ] = ( int32_T ) ( ( ! ( X [ 369ULL ] * X [ 369ULL ] +
3.5023764535063242E-8 == X [ 369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8
) ) || ( ! ( fabs ( X [ 369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) || ( X [ 369ULL ] * X [ 369ULL ] + 3.5023764535063242E-8
>= 0.0 ) ) ; t421 [ 2184ULL ] = ( int32_T ) ( X [ 320ULL ] != 0.0 ) ; t421 [
2185ULL ] = 1 ; t421 [ 2186ULL ] = 1 ; t421 [ 2187ULL ] = 1 ; t421 [ 2188ULL
] = 1 ; t421 [ 2189ULL ] = 1 ; t421 [ 2190ULL ] = ( int32_T ) ( ( X [ 342ULL
] * X [ 342ULL ] + 2.5711439722933289E-8 == X [ 342ULL ] * X [ 342ULL ] +
2.5711439722933289E-8 ) && ( fabs ( X [ 342ULL ] * X [ 342ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 2191ULL ] = ( int32_T
) ( ( ! ( X [ 342ULL ] * X [ 342ULL ] + 2.5711439722933289E-8 == X [ 342ULL ]
* X [ 342ULL ] + 2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 342ULL ] * X [
342ULL ] + 2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 342ULL ] *
X [ 342ULL ] + 2.5711439722933289E-8 >= 0.0 ) ) ; t421 [ 2192ULL ] = 1 ; t421
[ 2193ULL ] = 1 ; t421 [ 2194ULL ] = ( int32_T ) ( ( X [ 342ULL ] * X [
342ULL ] + 4.9597684650720062E-8 == X [ 342ULL ] * X [ 342ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 342ULL ] * X [ 342ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 2195ULL ] = ( int32_T
) ( ( ! ( X [ 342ULL ] * X [ 342ULL ] + 4.9597684650720062E-8 == X [ 342ULL ]
* X [ 342ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 342ULL ] * X [
342ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 342ULL ] *
X [ 342ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t421 [ 2196ULL ] = 1 ; t421
[ 2197ULL ] = 1 ; t421 [ 2198ULL ] = ( int32_T ) ( ( X [ 342ULL ] * X [
342ULL ] + 3.5023764535063242E-8 == X [ 342ULL ] * X [ 342ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 342ULL ] * X [ 342ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t421 [ 2199ULL ] = ( int32_T
) ( ( ! ( X [ 342ULL ] * X [ 342ULL ] + 3.5023764535063242E-8 == X [ 342ULL ]
* X [ 342ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 342ULL ] * X [
342ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 342ULL ] *
X [ 342ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t421 [ 2200ULL ] = 1 ; t421
[ 2201ULL ] = 1 ; t421 [ 2202ULL ] = ( int32_T ) ( t1100 *
9.8174770424681068E-6 != 0.0 ) ; t421 [ 2203ULL ] = ( int32_T ) ( t1095 *
0.0019634954084936209 != 0.0 ) ; t421 [ 2204ULL ] = ( int32_T ) ( t1262 !=
0.0 ) ; t421 [ 2205ULL ] = ( int32_T ) ( ( ! ( t1262 != 0.0 ) ) || ( 6.9 / (
t1262 == 0.0 ? 1.0E-16 : t1262 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [
2206ULL ] = 1 ; t421 [ 2207ULL ] = 1 ; t421 [ 2208ULL ] = ( int32_T ) ( ( ! (
t1262 != 0.0 ) ) || ( ( t1262 != 0.0 ) && ( ! ( 6.9 / ( t1262 == 0.0 ?
1.0E-16 : t1262 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1262 == 0.0 ? 1.0E-16 : t1262 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1262 == 0.0 ? 1.0E-16 : t1262 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t421 [ 2209ULL ] = ( int32_T ) ( t1100 * 3.855314219175531E-7 !=
0.0 ) ; t421 [ 2210ULL ] = 1 ; t421 [ 2211ULL ] = 1 ; t421 [ 2212ULL ] = 1 ;
t421 [ 2213ULL ] = 1 ; t421 [ 2214ULL ] = 1 ; t421 [ 2215ULL ] = ( int32_T )
( ( ! ( 1.0 - X [ 335ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 335ULL ] ) - 0.01
) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 335ULL ] >= 0.01 ) ) ; t421 [
2216ULL ] = 1 ; t421 [ 2217ULL ] = ( int32_T ) ( t1139 *
0.0019634954084936209 != 0.0 ) ; t421 [ 2218ULL ] = ( int32_T ) ( t1265 !=
0.0 ) ; t421 [ 2219ULL ] = ( int32_T ) ( ( ! ( t1265 != 0.0 ) ) || ( 6.9 / (
t1265 == 0.0 ? 1.0E-16 : t1265 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [
2220ULL ] = 1 ; t421 [ 2221ULL ] = 1 ; t421 [ 2222ULL ] = ( int32_T ) ( ( ! (
t1265 != 0.0 ) ) || ( ( t1265 != 0.0 ) && ( ! ( 6.9 / ( t1265 == 0.0 ?
1.0E-16 : t1265 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1265 == 0.0 ? 1.0E-16 : t1265 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1265 == 0.0 ? 1.0E-16 : t1265 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t421 [ 2223ULL ] = ( int32_T ) ( t1145 * 9.8174770424681068E-6 !=
0.0 ) ; t421 [ 2224ULL ] = ( int32_T ) ( t1145 * 3.855314219175531E-7 != 0.0
) ; t421 [ 2225ULL ] = 1 ; t421 [ 2226ULL ] = 1 ; t421 [ 2227ULL ] = 1 ; t421
[ 2228ULL ] = 1 ; t421 [ 2229ULL ] = ( int32_T ) ( t1139 *
0.0019634954084936209 != 0.0 ) ; t421 [ 2230ULL ] = ( int32_T ) ( t1727 !=
0.0 ) ; t421 [ 2231ULL ] = ( int32_T ) ( ( ! ( t1727 != 0.0 ) ) || ( 6.9 / (
t1727 == 0.0 ? 1.0E-16 : t1727 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [
2232ULL ] = 1 ; t421 [ 2233ULL ] = 1 ; t421 [ 2234ULL ] = ( int32_T ) ( ( ! (
t1727 != 0.0 ) ) || ( ( t1727 != 0.0 ) && ( ! ( 6.9 / ( t1727 == 0.0 ?
1.0E-16 : t1727 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1727 == 0.0 ? 1.0E-16 : t1727 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1727 == 0.0 ? 1.0E-16 : t1727 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t421 [ 2235ULL ] = ( int32_T ) ( t1145 * 9.8174770424681068E-6 !=
0.0 ) ; t421 [ 2236ULL ] = ( int32_T ) ( t1145 * 3.855314219175531E-7 != 0.0
) ; t421 [ 2237ULL ] = 1 ; t421 [ 2238ULL ] = 1 ; t421 [ 2239ULL ] = 1 ; t421
[ 2240ULL ] = 1 ; t421 [ 2241ULL ] = ( int32_T ) ( t1188 - ( - t1188 ) != 0.0
) ; t421 [ 2242ULL ] = 1 ; t421 [ 2243ULL ] = 1 ; t421 [ 2244ULL ] = 1 ; t421
[ 2245ULL ] = 1 ; t421 [ 2246ULL ] = ( int32_T ) ( t1199 * 0.32 != 0.0 ) ;
t421 [ 2247ULL ] = ( int32_T ) ( t1269 != 0.0 ) ; t421 [ 2248ULL ] = (
int32_T ) ( ( ! ( t1269 != 0.0 ) ) || ( 6.9 / ( t1269 == 0.0 ? 1.0E-16 :
t1269 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 2249ULL ] = 1 ; t421 [
2250ULL ] = 1 ; t421 [ 2251ULL ] = ( int32_T ) ( ( ! ( t1269 != 0.0 ) ) || (
( t1269 != 0.0 ) && ( ! ( 6.9 / ( t1269 == 0.0 ? 1.0E-16 : t1269 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1269 == 0.0 ?
1.0E-16 : t1269 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1269 ==
0.0 ? 1.0E-16 : t1269 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
2252ULL ] = ( int32_T ) ( t1203 * 6.4000000000000011E-5 != 0.0 ) ; t421 [
2253ULL ] = ( int32_T ) ( t1203 * 0.0020480000000000003 != 0.0 ) ; t421 [
2254ULL ] = 1 ; t421 [ 2255ULL ] = 1 ; t421 [ 2256ULL ] = 1 ; t421 [ 2257ULL
] = 1 ; t421 [ 2258ULL ] = ( int32_T ) ( t1199 * 0.32 != 0.0 ) ; t421 [
2259ULL ] = ( int32_T ) ( t1271 != 0.0 ) ; t421 [ 2260ULL ] = ( int32_T ) ( (
! ( t1271 != 0.0 ) ) || ( 6.9 / ( t1271 == 0.0 ? 1.0E-16 : t1271 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 2261ULL ] = 1 ; t421 [ 2262ULL ] =
1 ; t421 [ 2263ULL ] = ( int32_T ) ( ( ! ( t1271 != 0.0 ) ) || ( ( t1271 !=
0.0 ) && ( ! ( 6.9 / ( t1271 == 0.0 ? 1.0E-16 : t1271 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1271 == 0.0 ?
1.0E-16 : t1271 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1271 ==
0.0 ? 1.0E-16 : t1271 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
2264ULL ] = ( int32_T ) ( t1203 * 6.4000000000000011E-5 != 0.0 ) ; t421 [
2265ULL ] = ( int32_T ) ( t1203 * 0.0020480000000000003 != 0.0 ) ; t421 [
2266ULL ] = 1 ; t421 [ 2267ULL ] = 1 ; t421 [ 2268ULL ] = 1 ; t421 [ 2269ULL
] = 1 ; t421 [ 2270ULL ] = ( int32_T ) ( t1237 * 0.32 != 0.0 ) ; t421 [
2271ULL ] = ( int32_T ) ( t537_idx_0 != 0.0 ) ; t421 [ 2272ULL ] = ( int32_T
) ( ( ! ( t537_idx_0 != 0.0 ) ) || ( 6.9 / ( t537_idx_0 == 0.0 ? 1.0E-16 :
t537_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 2273ULL ] = 1 ; t421
[ 2274ULL ] = 1 ; t421 [ 2275ULL ] = ( int32_T ) ( ( ! ( t537_idx_0 != 0.0 )
) || ( ( t537_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t537_idx_0 == 0.0 ? 1.0E-16 :
t537_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / (
t537_idx_0 == 0.0 ? 1.0E-16 : t537_idx_0 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t537_idx_0 == 0.0 ? 1.0E-16 : t537_idx_0 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 2276ULL ] = ( int32_T ) (
t1242 * 6.4000000000000011E-5 != 0.0 ) ; t421 [ 2277ULL ] = ( int32_T ) (
t837 * 7.8539816339744827E-5 != 0.0 ) ; t421 [ 2278ULL ] = ( int32_T ) (
t1242 * 0.0020480000000000003 != 0.0 ) ; t421 [ 2279ULL ] = 1 ; t421 [
2280ULL ] = 1 ; t421 [ 2281ULL ] = 1 ; t421 [ 2282ULL ] = 1 ; t421 [ 2283ULL
] = ( int32_T ) ( t1237 * 0.32 != 0.0 ) ; t421 [ 2284ULL ] = ( int32_T ) (
U_idx_9 != 0.0 ) ; t421 [ 2285ULL ] = ( int32_T ) ( ( ! ( U_idx_9 != 0.0 ) )
|| ( 6.9 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) + 0.00017169489553429715 >
0.0 ) ) ; t421 [ 2286ULL ] = 1 ; t421 [ 2287ULL ] = 1 ; t421 [ 2288ULL ] = (
int32_T ) ( ( ! ( U_idx_9 != 0.0 ) ) || ( ( U_idx_9 != 0.0 ) && ( ! ( 6.9 / (
U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) + 0.00017169489553429715 > 0.0 ) ) ) ||
( pmf_log10 ( 6.9 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( U_idx_9 == 0.0 ? 1.0E-16 :
U_idx_9 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 2289ULL ] = (
int32_T ) ( t1242 * 6.4000000000000011E-5 != 0.0 ) ; t421 [ 2290ULL ] = (
int32_T ) ( t1242 * 0.0020480000000000003 != 0.0 ) ; t421 [ 2291ULL ] = 1 ;
t421 [ 2292ULL ] = 1 ; t421 [ 2293ULL ] = 1 ; t421 [ 2294ULL ] = 1 ; t421 [
2295ULL ] = ( int32_T ) ( t540_idx_0 != 0.0 ) ; t421 [ 2296ULL ] = ( int32_T
) ( ( ! ( t540_idx_0 != 0.0 ) ) || ( 6.9 / ( t540_idx_0 == 0.0 ? 1.0E-16 :
t540_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 2297ULL ] = 1 ; t421
[ 2298ULL ] = 1 ; t421 [ 2299ULL ] = ( int32_T ) ( ( ! ( t540_idx_0 != 0.0 )
) || ( ( t540_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t540_idx_0 == 0.0 ? 1.0E-16 :
t540_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / (
t540_idx_0 == 0.0 ? 1.0E-16 : t540_idx_0 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t540_idx_0 == 0.0 ? 1.0E-16 : t540_idx_0 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 2300ULL ] = ( int32_T ) (
- t834 - t834 * - 0.95 != 0.0 ) ; t421 [ 2301ULL ] = 1 ; t421 [ 2302ULL ] = 1
; t421 [ 2303ULL ] = 1 ; t421 [ 2304ULL ] = 1 ; t421 [ 2305ULL ] = ( int32_T
) ( - t754 - t754 * - 0.95 != 0.0 ) ; t421 [ 2306ULL ] = 1 ; t421 [ 2307ULL ]
= 1 ; t421 [ 2308ULL ] = 1 ; t421 [ 2309ULL ] = 1 ; t421 [ 2310ULL ] = (
int32_T ) ( t844 * 1.5707963267948965E-8 != 0.0 ) ; t421 [ 2311ULL ] = (
int32_T ) ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_mdot_c * 0.95 != 0.0
) ; t421 [ 2312ULL ] = 1 ; t421 [ 2313ULL ] = 1 ; t421 [ 2314ULL ] = 1 ; t421
[ 2315ULL ] = 1 ; t421 [ 2316ULL ] = 1 ; t421 [ 2317ULL ] = 1 ; t421 [
2318ULL ] = 1 ; t421 [ 2319ULL ] = 1 ; t421 [ 2320ULL ] = ( int32_T ) ( -
t900 - t900 * - 0.95 != 0.0 ) ; t421 [ 2321ULL ] = 1 ; t421 [ 2322ULL ] = 1 ;
t421 [ 2323ULL ] = 1 ; t421 [ 2324ULL ] = 1 ; t421 [ 2325ULL ] = ( int32_T )
( t844 * 1.2337005501361697E-10 != 0.0 ) ; t421 [ 2326ULL ] = ( int32_T ) ( -
t892 - t892 * - 0.95 != 0.0 ) ; t421 [ 2327ULL ] = 1 ; t421 [ 2328ULL ] = 1 ;
t421 [ 2329ULL ] = 1 ; t421 [ 2330ULL ] = 1 ; t421 [ 2331ULL ] = ( int32_T )
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 * 0.95 != 0.0
) ; t421 [ 2332ULL ] = 1 ; t421 [ 2333ULL ] = 1 ; t421 [ 2334ULL ] = 1 ; t421
[ 2335ULL ] = 1 ; t421 [ 2336ULL ] = 1 ; t421 [ 2337ULL ] = 1 ; t421 [
2338ULL ] = 1 ; t421 [ 2339ULL ] = 1 ; t421 [ 2340ULL ] = 1 ; t421 [ 2341ULL
] = 1 ; t421 [ 2342ULL ] = 1 ; t421 [ 2343ULL ] = 1 ; t421 [ 2344ULL ] = (
int32_T ) ( - t967 - t967 * - 0.95 != 0.0 ) ; t421 [ 2345ULL ] = 1 ; t421 [
2346ULL ] = 1 ; t421 [ 2347ULL ] = 1 ; t421 [ 2348ULL ] = 1 ; t421 [ 2349ULL
] = ( int32_T ) ( - t961 - t961 * - 0.95 != 0.0 ) ; t421 [ 2350ULL ] = 1 ;
t421 [ 2351ULL ] = 1 ; t421 [ 2352ULL ] = 1 ; t421 [ 2353ULL ] = 1 ; t421 [
2354ULL ] = ( int32_T ) ( - t1011 - t1011 * - 0.95 != 0.0 ) ; t421 [ 2355ULL
] = 1 ; t421 [ 2356ULL ] = 1 ; t421 [ 2357ULL ] = 1 ; t421 [ 2358ULL ] = 1 ;
t421 [ 2359ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked * - 0.95 !=
0.0 ) ; t421 [ 2360ULL ] = 1 ; t421 [ 2361ULL ] = 1 ; t421 [ 2362ULL ] = 1 ;
t421 [ 2363ULL ] = 1 ; t421 [ 2364ULL ] = ( int32_T ) ( - t1051 - t1051 * -
0.95 != 0.0 ) ; t421 [ 2365ULL ] = 1 ; t421 [ 2366ULL ] = 1 ; t421 [ 2367ULL
] = 1 ; t421 [ 2368ULL ] = 1 ; t421 [ 2369ULL ] = ( int32_T ) ( - t1042 -
t1042 * - 0.95 != 0.0 ) ; t421 [ 2370ULL ] = 1 ; t421 [ 2371ULL ] = 1 ; t421
[ 2372ULL ] = 1 ; t421 [ 2373ULL ] = 1 ; t421 [ 2374ULL ] = ( int32_T ) (
t837 * 7.8539816339744827E-5 != 0.0 ) ; t421 [ 2375ULL ] = ( int32_T ) ( -
t1089 - t1089 * - 0.95 != 0.0 ) ; t421 [ 2376ULL ] = 1 ; t421 [ 2377ULL ] = 1
; t421 [ 2378ULL ] = 1 ; t421 [ 2379ULL ] = 1 ; t421 [ 2380ULL ] = ( int32_T
) ( - t1079 - t1079 * - 0.95 != 0.0 ) ; t421 [ 2381ULL ] = 1 ; t421 [ 2382ULL
] = 1 ; t421 [ 2383ULL ] = 1 ; t421 [ 2384ULL ] = 1 ; t421 [ 2385ULL ] = (
int32_T ) ( - t1136 - t1136 * - 0.95 != 0.0 ) ; t421 [ 2386ULL ] = 1 ; t421 [
2387ULL ] = 1 ; t421 [ 2388ULL ] = 1 ; t421 [ 2389ULL ] = 1 ; t421 [ 2390ULL
] = ( int32_T ) ( - t1129 - t1129 * - 0.95 != 0.0 ) ; t421 [ 2391ULL ] = (
int32_T ) ( t850 != 0.0 ) ; t421 [ 2392ULL ] = ( int32_T ) ( ( ! ( t850 !=
0.0 ) ) || ( 6.9 / ( t850 == 0.0 ? 1.0E-16 : t850 ) + 0.00017169489553429715
> 0.0 ) ) ; t421 [ 2393ULL ] = 1 ; t421 [ 2394ULL ] = 1 ; t421 [ 2395ULL ] =
( int32_T ) ( ( ! ( t850 != 0.0 ) ) || ( ( t850 != 0.0 ) && ( ! ( 6.9 / (
t850 == 0.0 ? 1.0E-16 : t850 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t850 == 0.0 ? 1.0E-16 : t850 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t850 == 0.0 ? 1.0E-16 : t850 ) + 0.00017169489553429715
) * 3.24 != 0.0 ) ) ; t421 [ 2396ULL ] = 1 ; t421 [ 2397ULL ] = 1 ; t421 [
2398ULL ] = 1 ; t421 [ 2399ULL ] = 1 ; t421 [ 2400ULL ] = ( int32_T ) ( t1177
- t1177 * 0.95 != 0.0 ) ; t421 [ 2401ULL ] = 1 ; t421 [ 2402ULL ] = 1 ; t421
[ 2403ULL ] = 1 ; t421 [ 2404ULL ] = 1 ; t421 [ 2405ULL ] = ( int32_T ) (
t844 * 1.5707963267948965E-8 != 0.0 ) ; t421 [ 2406ULL ] = 1 ; t421 [ 2407ULL
] = 1 ; t421 [ 2408ULL ] = 1 ; t421 [ 2409ULL ] = 1 ; t421 [ 2410ULL ] = (
int32_T ) ( - t1195 - t1195 * - 0.95 != 0.0 ) ; t421 [ 2411ULL ] = 1 ; t421 [
2412ULL ] = 1 ; t421 [ 2413ULL ] = 1 ; t421 [ 2414ULL ] = 1 ; t421 [ 2415ULL
] = ( int32_T ) ( - t1187 - t1187 * - 0.95 != 0.0 ) ; t421 [ 2416ULL ] = 1 ;
t421 [ 2417ULL ] = 1 ; t421 [ 2418ULL ] = 1 ; t421 [ 2419ULL ] = 1 ; t421 [
2420ULL ] = ( int32_T ) ( t844 * 1.2337005501361697E-10 != 0.0 ) ; t421 [
2421ULL ] = ( int32_T ) ( - t1234 - t1234 * - 0.95 != 0.0 ) ; t421 [ 2422ULL
] = 1 ; t421 [ 2423ULL ] = 1 ; t421 [ 2424ULL ] = 1 ; t421 [ 2425ULL ] = 1 ;
t421 [ 2426ULL ] = ( int32_T ) ( - t1226 - t1226 * - 0.95 != 0.0 ) ; t421 [
2427ULL ] = 1 ; t421 [ 2428ULL ] = 1 ; t421 [ 2429ULL ] = 1 ; t421 [ 2430ULL
] = 1 ; t421 [ 2431ULL ] = 1 ; t421 [ 2432ULL ] = 1 ; t421 [ 2433ULL ] = 1 ;
t421 [ 2434ULL ] = 1 ; t421 [ 2435ULL ] = 1 ; t421 [ 2436ULL ] = ( int32_T )
( ( ! ( 1.0 - X [ 122ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 122ULL ] ) - 0.01
) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 122ULL ] >= 0.01 ) ) ; t421 [
2437ULL ] = 1 ; t421 [ 2438ULL ] = ( int32_T ) ( t885 - ( - t885 ) != 0.0 ) ;
t421 [ 2439ULL ] = 1 ; t421 [ 2440ULL ] = 1 ; t421 [ 2441ULL ] = 1 ; t421 [
2442ULL ] = 1 ; t421 [ 2443ULL ] = ( int32_T ) ( t903 * 7.8539816339744827E-5
!= 0.0 ) ; t421 [ 2444ULL ] = ( int32_T ) ( intrm_sf_mf_829 != 0.0 ) ; t421 [
2445ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_829 != 0.0 ) ) || ( 6.9 / (
intrm_sf_mf_829 == 0.0 ? 1.0E-16 : intrm_sf_mf_829 ) + 0.00017169489553429715
> 0.0 ) ) ; t421 [ 2446ULL ] = 1 ; t421 [ 2447ULL ] = 1 ; t421 [ 2448ULL ] =
( int32_T ) ( ( ! ( intrm_sf_mf_829 != 0.0 ) ) || ( ( intrm_sf_mf_829 != 0.0
) && ( ! ( 6.9 / ( intrm_sf_mf_829 == 0.0 ? 1.0E-16 : intrm_sf_mf_829 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_829
== 0.0 ? 1.0E-16 : intrm_sf_mf_829 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_829 == 0.0 ? 1.0E-16 : intrm_sf_mf_829 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 2449ULL ] = ( int32_T ) (
t907 * 1.5707963267948965E-8 != 0.0 ) ; t421 [ 2450ULL ] = ( int32_T ) ( t907
* 1.2337005501361697E-10 != 0.0 ) ; t421 [ 2451ULL ] = 1 ; t421 [ 2452ULL ] =
1 ; t421 [ 2453ULL ] = 1 ; t421 [ 2454ULL ] = 1 ; t421 [ 2455ULL ] = (
int32_T ) ( t903 * 7.8539816339744827E-5 != 0.0 ) ; t421 [ 2456ULL ] = (
int32_T ) ( t959 != 0.0 ) ; t421 [ 2457ULL ] = ( int32_T ) ( ( ! ( t959 !=
0.0 ) ) || ( 6.9 / ( t959 == 0.0 ? 1.0E-16 : t959 ) + 0.00017169489553429715
> 0.0 ) ) ; t421 [ 2458ULL ] = 1 ; t421 [ 2459ULL ] = 1 ; t421 [ 2460ULL ] =
( int32_T ) ( ( ! ( t959 != 0.0 ) ) || ( ( t959 != 0.0 ) && ( ! ( 6.9 / (
t959 == 0.0 ? 1.0E-16 : t959 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t959 == 0.0 ? 1.0E-16 : t959 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t959 == 0.0 ? 1.0E-16 : t959 ) + 0.00017169489553429715
) * 3.24 != 0.0 ) ) ; t421 [ 2461ULL ] = ( int32_T ) ( t907 *
1.5707963267948965E-8 != 0.0 ) ; t421 [ 2462ULL ] = ( int32_T ) ( t907 *
1.2337005501361697E-10 != 0.0 ) ; t421 [ 2463ULL ] = 1 ; t421 [ 2464ULL ] = 1
; t421 [ 2465ULL ] = 1 ; t421 [ 2466ULL ] = 1 ; t421 [ 2467ULL ] = ( int32_T
) ( t947 - ( - t947 ) != 0.0 ) ; t421 [ 2468ULL ] = 1 ; t421 [ 2469ULL ] = 1
; t421 [ 2470ULL ] = 1 ; t421 [ 2471ULL ] = 1 ; t421 [ 2472ULL ] = 1 ; t421 [
2473ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 213ULL ] >= - 0.1 ) ) || ( ( ( 1.0
- X [ 213ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 213ULL
] >= 0.01 ) ) ; t421 [ 2474ULL ] = 1 ; t421 [ 2475ULL ] = 1 ; t421 [ 2476ULL
] = 1 ; t421 [ 2477ULL ] = 1 ; t421 [ 2478ULL ] = 1 ; t421 [ 2479ULL ] = (
int32_T ) ( X [ 29ULL ] * 100000.0 > 0.0 ) ; t421 [ 2480ULL ] = ( int32_T ) (
X [ 29ULL ] * 100000.0 > 0.0 ) ; t421 [ 2481ULL ] = ( int32_T ) ( t973 *
0.0019634954084936209 != 0.0 ) ; t421 [ 2482ULL ] = ( int32_T ) ( t852 != 0.0
) ; t421 [ 2483ULL ] = ( int32_T ) ( ( ! ( t852 != 0.0 ) ) || ( 6.9 / ( t852
== 0.0 ? 1.0E-16 : t852 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [ 2484ULL
] = 1 ; t421 [ 2485ULL ] = 1 ; t421 [ 2486ULL ] = ( int32_T ) ( ( ! ( t852 !=
0.0 ) ) || ( ( t852 != 0.0 ) && ( ! ( 6.9 / ( t852 == 0.0 ? 1.0E-16 : t852 )
+ 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t852 == 0.0 ?
1.0E-16 : t852 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t852 == 0.0
? 1.0E-16 : t852 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [
2487ULL ] = ( int32_T ) ( t980 * 9.8174770424681068E-6 != 0.0 ) ; t421 [
2488ULL ] = ( int32_T ) ( t980 * 3.855314219175531E-7 != 0.0 ) ; t421 [
2489ULL ] = 1 ; t421 [ 2490ULL ] = 1 ; t421 [ 2491ULL ] = 1 ; t421 [ 2492ULL
] = 1 ; t421 [ 2493ULL ] = ( int32_T ) ( t973 * 0.0019634954084936209 != 0.0
) ; t421 [ 2494ULL ] = ( int32_T ) ( t1072 != 0.0 ) ; t421 [ 2495ULL ] = (
int32_T ) ( ( ! ( t1072 != 0.0 ) ) || ( 6.9 / ( t1072 == 0.0 ? 1.0E-16 :
t1072 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t421 [ 2496ULL ] = 1 ; t421 [
2497ULL ] = 1 ; t421 [ 2498ULL ] = ( int32_T ) ( ( ! ( t1072 != 0.0 ) ) || (
( t1072 != 0.0 ) && ( ! ( 6.9 / ( t1072 == 0.0 ? 1.0E-16 : t1072 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1072 == 0.0 ?
1.0E-16 : t1072 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1072 ==
0.0 ? 1.0E-16 : t1072 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [
2499ULL ] = ( int32_T ) ( t980 * 9.8174770424681068E-6 != 0.0 ) ; t421 [
2500ULL ] = ( int32_T ) ( t980 * 3.855314219175531E-7 != 0.0 ) ; t421 [
2501ULL ] = 1 ; t421 [ 2502ULL ] = 1 ; t421 [ 2503ULL ] = 1 ; t421 [ 2504ULL
] = 1 ; t421 [ 2505ULL ] = ( int32_T ) ( t1014 * 0.32 != 0.0 ) ; t421 [
2506ULL ] = ( int32_T ) ( U_idx_2 != 0.0 ) ; t421 [ 2507ULL ] = ( int32_T ) (
( ! ( U_idx_2 != 0.0 ) ) || ( 6.9 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 2508ULL ] = 1 ; t421 [ 2509ULL ] =
1 ; t421 [ 2510ULL ] = ( int32_T ) ( ( ! ( U_idx_2 != 0.0 ) ) || ( ( U_idx_2
!= 0.0 ) && ( ! ( 6.9 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( U_idx_2 == 0.0 ?
1.0E-16 : U_idx_2 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( U_idx_2
== 0.0 ? 1.0E-16 : U_idx_2 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t421 [ 2511ULL ] = ( int32_T ) ( t1019 * 6.4000000000000011E-5 != 0.0 ) ;
t421 [ 2512ULL ] = ( int32_T ) ( t1019 * 0.0020480000000000003 != 0.0 ) ;
t421 [ 2513ULL ] = 1 ; t421 [ 2514ULL ] = 1 ; t421 [ 2515ULL ] = 1 ; t421 [
2516ULL ] = 1 ; t421 [ 2517ULL ] = ( int32_T ) ( t1014 * 0.32 != 0.0 ) ; t421
[ 2518ULL ] = ( int32_T ) ( t1160 != 0.0 ) ; t421 [ 2519ULL ] = ( int32_T ) (
( ! ( t1160 != 0.0 ) ) || ( 6.9 / ( t1160 == 0.0 ? 1.0E-16 : t1160 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 2520ULL ] = 1 ; t421 [ 2521ULL ] =
1 ; t421 [ 2522ULL ] = ( int32_T ) ( ( ! ( t1160 != 0.0 ) ) || ( ( t1160 !=
0.0 ) && ( ! ( 6.9 / ( t1160 == 0.0 ? 1.0E-16 : t1160 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1160 == 0.0 ?
1.0E-16 : t1160 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1160 ==
0.0 ? 1.0E-16 : t1160 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
2523ULL ] = ( int32_T ) ( t1019 * 6.4000000000000011E-5 != 0.0 ) ; t421 [
2524ULL ] = ( int32_T ) ( t1019 * 0.0020480000000000003 != 0.0 ) ; t421 [
2525ULL ] = 1 ; t421 [ 2526ULL ] = 1 ; t421 [ 2527ULL ] = 1 ; t421 [ 2528ULL
] = 1 ; t421 [ 2529ULL ] = 1 ; t421 [ 2530ULL ] = 1 ; t421 [ 2531ULL ] = 1 ;
t421 [ 2532ULL ] = 1 ; t421 [ 2533ULL ] = ( int32_T ) ( t1056 * 0.32 != 0.0 )
; t421 [ 2534ULL ] = ( int32_T ) ( t538_idx_0 != 0.0 ) ; t421 [ 2535ULL ] = (
int32_T ) ( ( ! ( t538_idx_0 != 0.0 ) ) || ( 6.9 / ( t538_idx_0 == 0.0 ?
1.0E-16 : t538_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ; t421 [ 2536ULL ]
= 1 ; t421 [ 2537ULL ] = 1 ; t421 [ 2538ULL ] = ( int32_T ) ( ( ! (
t538_idx_0 != 0.0 ) ) || ( ( t538_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t538_idx_0
== 0.0 ? 1.0E-16 : t538_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t538_idx_0 == 0.0 ? 1.0E-16 : t538_idx_0 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t538_idx_0 == 0.0 ? 1.0E-16 :
t538_idx_0 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [ 2539ULL ]
= ( int32_T ) ( t1060 * 6.4000000000000011E-5 != 0.0 ) ; t421 [ 2540ULL ] = (
int32_T ) ( t1060 * 0.0020480000000000003 != 0.0 ) ; t421 [ 2541ULL ] = 1 ;
t421 [ 2542ULL ] = 1 ; t421 [ 2543ULL ] = 1 ; t421 [ 2544ULL ] = 1 ; t421 [
2545ULL ] = ( int32_T ) ( t1056 * 0.32 != 0.0 ) ; t421 [ 2546ULL ] = (
int32_T ) ( t1248 != 0.0 ) ; t421 [ 2547ULL ] = ( int32_T ) ( ( ! ( t1248 !=
0.0 ) ) || ( 6.9 / ( t1248 == 0.0 ? 1.0E-16 : t1248 ) +
0.00017169489553429715 > 0.0 ) ) ; t421 [ 2548ULL ] = 1 ; t421 [ 2549ULL ] =
1 ; t421 [ 2550ULL ] = ( int32_T ) ( ( ! ( t1248 != 0.0 ) ) || ( ( t1248 !=
0.0 ) && ( ! ( 6.9 / ( t1248 == 0.0 ? 1.0E-16 : t1248 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1248 == 0.0 ?
1.0E-16 : t1248 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1248 ==
0.0 ? 1.0E-16 : t1248 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t421 [
2551ULL ] = ( int32_T ) ( t1060 * 6.4000000000000011E-5 != 0.0 ) ; t421 [
2552ULL ] = ( int32_T ) ( t1060 * 0.0020480000000000003 != 0.0 ) ; t421 [
2553ULL ] = 1 ; t421 [ 2554ULL ] = 1 ; t421 [ 2555ULL ] = 1 ; t421 [ 2556ULL
] = 1 ; t421 [ 2557ULL ] = 1 ; t421 [ 2558ULL ] = 1 ; t421 [ 2559ULL ] = 1 ;
t421 [ 2560ULL ] = 1 ; t421 [ 2561ULL ] = ( int32_T ) ( t1095 *
0.0019634954084936209 != 0.0 ) ; t421 [ 2562ULL ] = ( int32_T ) ( U_idx_3 !=
0.0 ) ; t421 [ 2563ULL ] = ( int32_T ) ( ( ! ( U_idx_3 != 0.0 ) ) || ( 6.9 /
( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) + 2.8767404433520813E-5 > 0.0 ) ) ;
t421 [ 2564ULL ] = 1 ; t421 [ 2565ULL ] = 1 ; t421 [ 2566ULL ] = ( int32_T )
( ( ! ( U_idx_3 != 0.0 ) ) || ( ( U_idx_3 != 0.0 ) && ( ! ( 6.9 / ( U_idx_3
== 0.0 ? 1.0E-16 : U_idx_3 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( U_idx_3 == 0.0 ? 1.0E-16 :
U_idx_3 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t421 [ 2567ULL ] = (
int32_T ) ( t1100 * 9.8174770424681068E-6 != 0.0 ) ; t421 [ 2568ULL ] = (
int32_T ) ( t1100 * 3.855314219175531E-7 != 0.0 ) ; t421 [ 2569ULL ] = 1 ;
t421 [ 2570ULL ] = 1 ; t421 [ 2571ULL ] = 1 ; t421 [ 2572ULL ] = 1 ; t421 [
2573ULL ] = ( int32_T ) ( X [ 18ULL ] != 0.0 ) ; t421 [ 2574ULL ] = ( int32_T
) ( X [ 17ULL ] != 0.0 ) ; t421 [ 2575ULL ] = ( int32_T ) ( t765 != 0.0 ) ;
t421 [ 2576ULL ] = ( int32_T ) ( X [ 22ULL ] != 0.0 ) ; t421 [ 2577ULL ] = (
int32_T ) ( X [ 21ULL ] != 0.0 ) ; t421 [ 2578ULL ] = ( int32_T ) ( t886 !=
0.0 ) ; t421 [ 2579ULL ] = ( int32_T ) ( X [ 26ULL ] != 0.0 ) ; t421 [
2580ULL ] = ( int32_T ) ( X [ 25ULL ] != 0.0 ) ; t421 [ 2581ULL ] = ( int32_T
) ( t893 != 0.0 ) ; t421 [ 2582ULL ] = ( int32_T ) ( X [ 29ULL ] != 0.0 ) ;
t421 [ 2583ULL ] = ( int32_T ) ( X [ 30ULL ] != 0.0 ) ; t421 [ 2584ULL ] = (
int32_T ) ( t949 != 0.0 ) ; t421 [ 2585ULL ] = ( int32_T ) ( X [ 36ULL ] !=
0.0 ) ; t421 [ 2586ULL ] = ( int32_T ) ( X [ 33ULL ] != 0.0 ) ; t421 [
2587ULL ] = ( int32_T ) ( t962 != 0.0 ) ; t421 [ 2588ULL ] = ( int32_T ) ( X
[ 37ULL ] != 0.0 ) ; t421 [ 2589ULL ] = ( int32_T ) ( X [ 4ULL ] != 0.0 ) ;
t421 [ 2590ULL ] = ( int32_T ) ( t1004 != 0.0 ) ; t421 [ 2591ULL ] = (
int32_T ) ( X [ 38ULL ] != 0.0 ) ; t421 [ 2592ULL ] = ( int32_T ) ( X [ 7ULL
] != 0.0 ) ; t421 [ 2593ULL ] = ( int32_T ) ( t1043 != 0.0 ) ; t421 [ 2594ULL
] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t421 [ 2595ULL ] = ( int32_T ) ( X [
39ULL ] != 0.0 ) ; t421 [ 2596ULL ] = ( int32_T ) ( t1080 != 0.0 ) ; t421 [
2597ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t421 [ 2598ULL ] = ( int32_T
) ( X [ 43ULL ] != 0.0 ) ; t421 [ 2599ULL ] = ( int32_T ) ( t1130 != 0.0 ) ;
t421 [ 2600ULL ] = ( int32_T ) ( X [ 47ULL ] != 0.0 ) ; t421 [ 2601ULL ] = (
int32_T ) ( X [ 10ULL ] != 0.0 ) ; t421 [ 2602ULL ] = ( int32_T ) (
intrm_sf_mf_1191 != 0.0 ) ; t421 [ 2603ULL ] = ( int32_T ) ( X [ 48ULL ] !=
0.0 ) ; t421 [ 2604ULL ] = ( int32_T ) ( X [ 13ULL ] != 0.0 ) ; t421 [
2605ULL ] = ( int32_T ) ( t1227 != 0.0 ) ; t421 [ 2606ULL ] = ( int32_T ) ( (
U_idx_1 > 0.9 ? U_idx_1 : 0.9 ) != 0.0 ) ; t421 [ 2607ULL ] = 1 ; t421 [
2608ULL ] = 1 ; t421 [ 2609ULL ] = 1 ; t421 [ 2610ULL ] = 1 ; t421 [ 2611ULL
] = 1 ; t421 [ 2612ULL ] = 1 ; t421 [ 2613ULL ] = ( int32_T ) ( X [ 131ULL ]
!= 0.0 ) ; t421 [ 2614ULL ] = ( int32_T ) ( X [ 131ULL ] != 0.0 ) ; t421 [
2615ULL ] = 1 ; t421 [ 2616ULL ] = 1 ; t421 [ 2617ULL ] = 1 ; t421 [ 2618ULL
] = ( int32_T ) ( X [ 135ULL ] != 0.0 ) ; t421 [ 2619ULL ] = ( int32_T ) ( X
[ 135ULL ] != 0.0 ) ; t421 [ 2620ULL ] = 1 ; t421 [ 2621ULL ] = 1 ; t421 [
2622ULL ] = 1 ; t421 [ 2623ULL ] = ( int32_T ) ( X [ 18ULL ] != 0.0 ) ; t421
[ 2624ULL ] = ( int32_T ) ( X [ 18ULL ] != 0.0 ) ; t421 [ 2625ULL ] = 1 ;
t421 [ 2626ULL ] = 1 ; t421 [ 2627ULL ] = 1 ; t421 [ 2628ULL ] = ( int32_T )
( X [ 18ULL ] != 0.0 ) ; t421 [ 2629ULL ] = ( int32_T ) ( X [ 18ULL ] != 0.0
) ; t421 [ 2630ULL ] = 1 ; t421 [ 2631ULL ] = 1 ; t421 [ 2632ULL ] = 1 ; t421
[ 2633ULL ] = 1 ; t421 [ 2634ULL ] = 1 ; t421 [ 2635ULL ] = 1 ; t421 [
2636ULL ] = 1 ; t421 [ 2637ULL ] = 1 ; t421 [ 2638ULL ] = 1 ; t421 [ 2639ULL
] = ( int32_T ) ( X [ 148ULL ] != 0.0 ) ; t421 [ 2640ULL ] = ( int32_T ) ( X
[ 148ULL ] != 0.0 ) ; t421 [ 2641ULL ] = ( int32_T ) ( t876 != 0.0 ) ; t421 [
2642ULL ] = 1 ; t421 [ 2643ULL ] = 1 ; t421 [ 2644ULL ] = 1 ; t421 [ 2645ULL
] = ( int32_T ) ( X [ 22ULL ] != 0.0 ) ; t421 [ 2646ULL ] = ( int32_T ) ( X [
22ULL ] != 0.0 ) ; t421 [ 2647ULL ] = 1 ; t421 [ 2648ULL ] = 1 ; t421 [
2649ULL ] = 1 ; t421 [ 2650ULL ] = ( int32_T ) ( X [ 178ULL ] != 0.0 ) ; t421
[ 2651ULL ] = ( int32_T ) ( X [ 178ULL ] != 0.0 ) ; t421 [ 2652ULL ] = 1 ;
t421 [ 2653ULL ] = 1 ; t421 [ 2654ULL ] = 1 ; t421 [ 2655ULL ] = ( int32_T )
( X [ 183ULL ] != 0.0 ) ; t421 [ 2656ULL ] = ( int32_T ) ( X [ 183ULL ] !=
0.0 ) ; t421 [ 2657ULL ] = 1 ; t421 [ 2658ULL ] = 1 ; t421 [ 2659ULL ] = 1 ;
t421 [ 2660ULL ] = ( int32_T ) ( X [ 26ULL ] != 0.0 ) ; t421 [ 2661ULL ] = (
int32_T ) ( X [ 26ULL ] != 0.0 ) ; t421 [ 2662ULL ] = 1 ; t421 [ 2663ULL ] =
1 ; t421 [ 2664ULL ] = 1 ; t421 [ 2665ULL ] = ( int32_T ) ( X [ 26ULL ] !=
0.0 ) ; t421 [ 2666ULL ] = ( int32_T ) ( X [ 26ULL ] != 0.0 ) ; t421 [
2667ULL ] = 1 ; t421 [ 2668ULL ] = 1 ; t421 [ 2669ULL ] = 1 ; t421 [ 2670ULL
] = 1 ; t421 [ 2671ULL ] = 1 ; t421 [ 2672ULL ] = 1 ; t421 [ 2673ULL ] = 1 ;
t421 [ 2674ULL ] = 1 ; t421 [ 2675ULL ] = 1 ; t421 [ 2676ULL ] = ( int32_T )
( X [ 196ULL ] != 0.0 ) ; t421 [ 2677ULL ] = ( int32_T ) ( X [ 196ULL ] !=
0.0 ) ; t421 [ 2678ULL ] = ( int32_T ) ( t934 != 0.0 ) ; t421 [ 2679ULL ] = 1
; t421 [ 2680ULL ] = 1 ; t421 [ 2681ULL ] = 1 ; t421 [ 2682ULL ] = 1 ; t421 [
2683ULL ] = 1 ; t421 [ 2684ULL ] = 1 ; t421 [ 2685ULL ] = ( int32_T ) ( X [
29ULL ] != 0.0 ) ; t421 [ 2686ULL ] = ( int32_T ) ( X [ 29ULL ] != 0.0 ) ;
t421 [ 2687ULL ] = 1 ; t421 [ 2688ULL ] = 1 ; t421 [ 2689ULL ] = 1 ; t421 [
2690ULL ] = ( int32_T ) ( X [ 29ULL ] != 0.0 ) ; t421 [ 2691ULL ] = ( int32_T
) ( X [ 29ULL ] != 0.0 ) ; t421 [ 2692ULL ] = 1 ; t421 [ 2693ULL ] = 1 ; t421
[ 2694ULL ] = 1 ; t421 [ 2695ULL ] = ( int32_T ) ( X [ 257ULL ] != 0.0 ) ;
t421 [ 2696ULL ] = ( int32_T ) ( X [ 257ULL ] != 0.0 ) ; t421 [ 2697ULL ] = 1
; t421 [ 2698ULL ] = 1 ; t421 [ 2699ULL ] = 1 ; t421 [ 2700ULL ] = ( int32_T
) ( X [ 260ULL ] != 0.0 ) ; t421 [ 2701ULL ] = ( int32_T ) ( X [ 260ULL ] !=
0.0 ) ; t421 [ 2702ULL ] = 1 ; t421 [ 2703ULL ] = 1 ; t421 [ 2704ULL ] = 1 ;
t421 [ 2705ULL ] = ( int32_T ) ( X [ 36ULL ] != 0.0 ) ; t421 [ 2706ULL ] = (
int32_T ) ( X [ 36ULL ] != 0.0 ) ; t421 [ 2707ULL ] = 1 ; t421 [ 2708ULL ] =
1 ; t421 [ 2709ULL ] = 1 ; t421 [ 2710ULL ] = ( int32_T ) ( X [ 36ULL ] !=
0.0 ) ; t421 [ 2711ULL ] = ( int32_T ) ( X [ 36ULL ] != 0.0 ) ; t421 [
2712ULL ] = 1 ; t421 [ 2713ULL ] = 1 ; t421 [ 2714ULL ] = 1 ; t421 [ 2715ULL
] = ( int32_T ) ( X [ 271ULL ] != 0.0 ) ; t421 [ 2716ULL ] = ( int32_T ) ( X
[ 271ULL ] != 0.0 ) ; t421 [ 2717ULL ] = 1 ; t421 [ 2718ULL ] = 1 ; t421 [
2719ULL ] = 1 ; t421 [ 2720ULL ] = ( int32_T ) ( X [ 274ULL ] != 0.0 ) ; t421
[ 2721ULL ] = ( int32_T ) ( X [ 274ULL ] != 0.0 ) ; t421 [ 2722ULL ] = 1 ;
t421 [ 2723ULL ] = 1 ; t421 [ 2724ULL ] = 1 ; t421 [ 2725ULL ] = ( int32_T )
( X [ 37ULL ] != 0.0 ) ; t421 [ 2726ULL ] = ( int32_T ) ( X [ 37ULL ] != 0.0
) ; t421 [ 2727ULL ] = 1 ; t421 [ 2728ULL ] = 1 ; t421 [ 2729ULL ] = 1 ; t421
[ 2730ULL ] = ( int32_T ) ( X [ 37ULL ] != 0.0 ) ; t421 [ 2731ULL ] = (
int32_T ) ( X [ 37ULL ] != 0.0 ) ; t421 [ 2732ULL ] = 1 ; t421 [ 2733ULL ] =
1 ; t421 [ 2734ULL ] = 1 ; t421 [ 2735ULL ] = ( int32_T ) ( X [ 285ULL ] !=
0.0 ) ; t421 [ 2736ULL ] = ( int32_T ) ( X [ 285ULL ] != 0.0 ) ; t421 [
2737ULL ] = 1 ; t421 [ 2738ULL ] = 1 ; t421 [ 2739ULL ] = 1 ; t421 [ 2740ULL
] = ( int32_T ) ( X [ 287ULL ] != 0.0 ) ; t421 [ 2741ULL ] = ( int32_T ) ( X
[ 287ULL ] != 0.0 ) ; t421 [ 2742ULL ] = 1 ; t421 [ 2743ULL ] = 1 ; t421 [
2744ULL ] = 1 ; t421 [ 2745ULL ] = ( int32_T ) ( X [ 38ULL ] != 0.0 ) ; t421
[ 2746ULL ] = ( int32_T ) ( X [ 38ULL ] != 0.0 ) ; t421 [ 2747ULL ] = 1 ;
t421 [ 2748ULL ] = 1 ; t421 [ 2749ULL ] = 1 ; t421 [ 2750ULL ] = ( int32_T )
( X [ 38ULL ] != 0.0 ) ; t421 [ 2751ULL ] = ( int32_T ) ( X [ 38ULL ] != 0.0
) ; t421 [ 2752ULL ] = 1 ; t421 [ 2753ULL ] = 1 ; t421 [ 2754ULL ] = 1 ; t421
[ 2755ULL ] = ( int32_T ) ( X [ 306ULL ] != 0.0 ) ; t421 [ 2756ULL ] = (
int32_T ) ( X [ 306ULL ] != 0.0 ) ; t421 [ 2757ULL ] = 1 ; t421 [ 2758ULL ] =
1 ; t421 [ 2759ULL ] = 1 ; t421 [ 2760ULL ] = ( int32_T ) ( X [ 309ULL ] !=
0.0 ) ; t421 [ 2761ULL ] = ( int32_T ) ( X [ 309ULL ] != 0.0 ) ; t421 [
2762ULL ] = 1 ; t421 [ 2763ULL ] = 1 ; t421 [ 2764ULL ] = 1 ; t421 [ 2765ULL
] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t421 [ 2766ULL ] = ( int32_T ) ( X [
42ULL ] != 0.0 ) ; t421 [ 2767ULL ] = 1 ; t421 [ 2768ULL ] = 1 ; t421 [
2769ULL ] = 1 ; t421 [ 2770ULL ] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t421
[ 2771ULL ] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t421 [ 2772ULL ] = 1 ;
t421 [ 2773ULL ] = 1 ; t421 [ 2774ULL ] = 1 ; t421 [ 2775ULL ] = 1 ; t421 [
2776ULL ] = 1 ; t421 [ 2777ULL ] = 1 ; t421 [ 2778ULL ] = ( int32_T ) ( X [
344ULL ] != 0.0 ) ; t421 [ 2779ULL ] = ( int32_T ) ( X [ 344ULL ] != 0.0 ) ;
t421 [ 2780ULL ] = 1 ; t421 [ 2781ULL ] = 1 ; t421 [ 2782ULL ] = 1 ; t421 [
2783ULL ] = ( int32_T ) ( X [ 348ULL ] != 0.0 ) ; t421 [ 2784ULL ] = (
int32_T ) ( X [ 348ULL ] != 0.0 ) ; t421 [ 2785ULL ] = 1 ; t421 [ 2786ULL ] =
1 ; t421 [ 2787ULL ] = 1 ; t421 [ 2788ULL ] = ( int32_T ) ( X [ 44ULL ] !=
0.0 ) ; t421 [ 2789ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t421 [
2790ULL ] = 1 ; t421 [ 2791ULL ] = 1 ; t421 [ 2792ULL ] = 1 ; t421 [ 2793ULL
] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t421 [ 2794ULL ] = ( int32_T ) ( X [
44ULL ] != 0.0 ) ; t421 [ 2795ULL ] = 1 ; t421 [ 2796ULL ] = 1 ; t421 [
2797ULL ] = 1 ; t421 [ 2798ULL ] = 1 ; t421 [ 2799ULL ] = 1 ; t421 [ 2800ULL
] = 1 ; t421 [ 2801ULL ] = 1 ; t421 [ 2802ULL ] = 1 ; t421 [ 2803ULL ] = 1 ;
t421 [ 2804ULL ] = ( int32_T ) ( X [ 361ULL ] != 0.0 ) ; t421 [ 2805ULL ] = (
int32_T ) ( X [ 361ULL ] != 0.0 ) ; t421 [ 2806ULL ] = ( int32_T ) ( t1167 !=
0.0 ) ; t421 [ 2807ULL ] = 1 ; t421 [ 2808ULL ] = 1 ; t421 [ 2809ULL ] = 1 ;
t421 [ 2810ULL ] = ( int32_T ) ( X [ 368ULL ] != 0.0 ) ; t421 [ 2811ULL ] = (
int32_T ) ( X [ 368ULL ] != 0.0 ) ; t421 [ 2812ULL ] = 1 ; t421 [ 2813ULL ] =
1 ; t421 [ 2814ULL ] = 1 ; t421 [ 2815ULL ] = ( int32_T ) ( X [ 371ULL ] !=
0.0 ) ; t421 [ 2816ULL ] = ( int32_T ) ( X [ 371ULL ] != 0.0 ) ; t421 [
2817ULL ] = 1 ; t421 [ 2818ULL ] = 1 ; t421 [ 2819ULL ] = 1 ; t421 [ 2820ULL
] = ( int32_T ) ( X [ 47ULL ] != 0.0 ) ; t421 [ 2821ULL ] = ( int32_T ) ( X [
47ULL ] != 0.0 ) ; t421 [ 2822ULL ] = 1 ; t421 [ 2823ULL ] = 1 ; t421 [
2824ULL ] = 1 ; t421 [ 2825ULL ] = ( int32_T ) ( X [ 47ULL ] != 0.0 ) ; t421
[ 2826ULL ] = ( int32_T ) ( X [ 47ULL ] != 0.0 ) ; t421 [ 2827ULL ] = 1 ;
t421 [ 2828ULL ] = 1 ; t421 [ 2829ULL ] = 1 ; t421 [ 2830ULL ] = ( int32_T )
( X [ 382ULL ] != 0.0 ) ; t421 [ 2831ULL ] = ( int32_T ) ( X [ 382ULL ] !=
0.0 ) ; t421 [ 2832ULL ] = 1 ; t421 [ 2833ULL ] = 1 ; t421 [ 2834ULL ] = 1 ;
t421 [ 2835ULL ] = ( int32_T ) ( X [ 384ULL ] != 0.0 ) ; t421 [ 2836ULL ] = (
int32_T ) ( X [ 384ULL ] != 0.0 ) ; t421 [ 2837ULL ] = 1 ; t421 [ 2838ULL ] =
1 ; t421 [ 2839ULL ] = 1 ; t421 [ 2840ULL ] = ( int32_T ) ( X [ 48ULL ] !=
0.0 ) ; t421 [ 2841ULL ] = ( int32_T ) ( X [ 48ULL ] != 0.0 ) ; t421 [
2842ULL ] = 1 ; t421 [ 2843ULL ] = 1 ; t421 [ 2844ULL ] = 1 ; t421 [ 2845ULL
] = ( int32_T ) ( X [ 48ULL ] != 0.0 ) ; t421 [ 2846ULL ] = ( int32_T ) ( X [
48ULL ] != 0.0 ) ; t421 [ 2847ULL ] = 1 ; t421 [ 2848ULL ] = 1 ; t421 [
2849ULL ] = 1 ; t421 [ 2850ULL ] = ( int32_T ) ( X [ 53ULL ] != 0.0 ) ; for (
b = 0 ; b < 2851 ; b ++ ) { out . mX [ b ] = t421 [ b ] ; } ( void ) LC ; (
void ) t2189 ; return 0 ; }
