#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_assert.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_assert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t2184 , NeDsMethodOutput * t2185 ) { ETTS0
ab_efOut ; ETTS0 ac_efOut ; ETTS0 c_efOut ; ETTS0 cb_efOut ; ETTS0 cc_efOut ;
ETTS0 cd_efOut ; ETTS0 efOut ; ETTS0 fg_efOut ; ETTS0 g_efOut ; ETTS0
gb_efOut ; ETTS0 gc_efOut ; ETTS0 hf_efOut ; ETTS0 i_efOut ; ETTS0 ib_efOut ;
ETTS0 jd_efOut ; ETTS0 je_efOut ; ETTS0 jg_efOut ; ETTS0 lc_efOut ; ETTS0
nd_efOut ; ETTS0 of_efOut ; ETTS0 qe_efOut ; ETTS0 s_efOut ; ETTS0 sb_efOut ;
ETTS0 sc_efOut ; ETTS0 sd_efOut ; ETTS0 sf_efOut ; ETTS0 t48 ; ETTS0 t49 ;
ETTS0 t50 ; ETTS0 t51 ; ETTS0 t55 ; ETTS0 ue_efOut ; ETTS0 wc_efOut ; ETTS0
wd_efOut ; ETTS0 we_efOut ; ETTS0 xf_efOut ; ETTS0 yd_efOut ; PmIntVector out
; real_T X [ 399 ] ; real_T ad_efOut [ 1 ] ; real_T ae_efOut [ 1 ] ; real_T
af_efOut [ 1 ] ; real_T ag_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T
bb_efOut [ 1 ] ; real_T bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ; real_T
be_efOut [ 1 ] ; real_T bf_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ; real_T
ce_efOut [ 1 ] ; real_T cf_efOut [ 1 ] ; real_T cg_efOut [ 1 ] ; real_T
d_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T
dd_efOut [ 1 ] ; real_T de_efOut [ 1 ] ; real_T df_efOut [ 1 ] ; real_T
dg_efOut [ 1 ] ; real_T e_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T
ec_efOut [ 1 ] ; real_T ed_efOut [ 1 ] ; real_T ee_efOut [ 1 ] ; real_T
ef_efOut [ 1 ] ; real_T eg_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
fb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ; real_T fd_efOut [ 1 ] ; real_T
fe_efOut [ 1 ] ; real_T ff_efOut [ 1 ] ; real_T gd_efOut [ 1 ] ; real_T
ge_efOut [ 1 ] ; real_T gf_efOut [ 1 ] ; real_T gg_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T
hd_efOut [ 1 ] ; real_T he_efOut [ 1 ] ; real_T hg_efOut [ 1 ] ; real_T
ic_efOut [ 1 ] ; real_T id_efOut [ 1 ] ; real_T ie_efOut [ 1 ] ; real_T
if_efOut [ 1 ] ; real_T ig_efOut [ 1 ] ; real_T j_efOut [ 1 ] ; real_T
jb_efOut [ 1 ] ; real_T jc_efOut [ 1 ] ; real_T jf_efOut [ 1 ] ; real_T
k_efOut [ 1 ] ; real_T kb_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T
kd_efOut [ 1 ] ; real_T ke_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T
kg_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T
ld_efOut [ 1 ] ; real_T le_efOut [ 1 ] ; real_T lf_efOut [ 1 ] ; real_T
lg_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T
mc_efOut [ 1 ] ; real_T md_efOut [ 1 ] ; real_T me_efOut [ 1 ] ; real_T
mf_efOut [ 1 ] ; real_T mg_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T
nb_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T
nf_efOut [ 1 ] ; real_T ng_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T
ob_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T
oe_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T
pc_efOut [ 1 ] ; real_T pd_efOut [ 1 ] ; real_T pe_efOut [ 1 ] ; real_T
pf_efOut [ 1 ] ; real_T q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T
qc_efOut [ 1 ] ; real_T qd_efOut [ 1 ] ; real_T qf_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T
rd_efOut [ 1 ] ; real_T re_efOut [ 1 ] ; real_T rf_efOut [ 1 ] ; real_T
se_efOut [ 1 ] ; real_T t122 [ 1 ] ; real_T t423 [ 1 ] ; real_T t424 [ 1 ] ;
real_T t425 [ 1 ] ; real_T t426 [ 1 ] ; real_T t428 [ 1 ] ; real_T t430 [ 1 ]
; real_T t540 [ 1 ] ; real_T t62 [ 1 ] ; real_T t67 [ 1 ] ; real_T t_efOut [
1 ] ; real_T tb_efOut [ 1 ] ; real_T tc_efOut [ 1 ] ; real_T td_efOut [ 1 ] ;
real_T te_efOut [ 1 ] ; real_T tf_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T
ub_efOut [ 1 ] ; real_T uc_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T
uf_efOut [ 1 ] ; real_T v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T
vc_efOut [ 1 ] ; real_T vd_efOut [ 1 ] ; real_T ve_efOut [ 1 ] ; real_T
vf_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T
wf_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T xb_efOut [ 1 ] ; real_T
xc_efOut [ 1 ] ; real_T xd_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T
y_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T yc_efOut [ 1 ] ; real_T
ye_efOut [ 1 ] ; real_T yf_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T U_idx_4 ; real_T U_idx_6 ; real_T U_idx_8 ; real_T
U_idx_9 ; real_T intrm_sf_mf_103 ; real_T intrm_sf_mf_104 ; real_T
intrm_sf_mf_1070 ; real_T intrm_sf_mf_1077 ; real_T intrm_sf_mf_1095 ; real_T
intrm_sf_mf_1151 ; real_T intrm_sf_mf_1170 ; real_T intrm_sf_mf_1241 ; real_T
intrm_sf_mf_1252 ; real_T intrm_sf_mf_233 ; real_T intrm_sf_mf_271 ; real_T
intrm_sf_mf_293 ; real_T intrm_sf_mf_299 ; real_T intrm_sf_mf_369 ; real_T
intrm_sf_mf_450 ; real_T intrm_sf_mf_47 ; real_T intrm_sf_mf_52 ; real_T
intrm_sf_mf_528 ; real_T intrm_sf_mf_550 ; real_T intrm_sf_mf_551 ; real_T
intrm_sf_mf_660 ; real_T intrm_sf_mf_681 ; real_T intrm_sf_mf_798 ; real_T
intrm_sf_mf_816 ; real_T intrm_sf_mf_829 ; real_T intrm_sf_mf_923 ; real_T
intrm_sf_mf_936 ; real_T intrm_sf_mf_949 ; real_T t1000 ; real_T t1002 ;
real_T t1003 ; real_T t1004 ; real_T t1006 ; real_T t1007 ; real_T t1009 ;
real_T t1011 ; real_T t1012 ; real_T t1013 ; real_T t1014 ; real_T t1015 ;
real_T t1016 ; real_T t1017 ; real_T t1018 ; real_T t1019 ; real_T t1021 ;
real_T t1022 ; real_T t1023 ; real_T t1024 ; real_T t1025 ; real_T t1027 ;
real_T t1028 ; real_T t1029 ; real_T t1030 ; real_T t1031 ; real_T t1033 ;
real_T t1035 ; real_T t1036 ; real_T t1038 ; real_T t1039 ; real_T t1040 ;
real_T t1041 ; real_T t1042 ; real_T t1044 ; real_T t1045 ; real_T t1048 ;
real_T t1051 ; real_T t1052 ; real_T t1053 ; real_T t1055 ; real_T t1056 ;
real_T t1058 ; real_T t1059 ; real_T t1060 ; real_T t1062 ; real_T t1063 ;
real_T t1064 ; real_T t1065 ; real_T t1068 ; real_T t1069 ; real_T t1070 ;
real_T t1071 ; real_T t1073 ; real_T t1074 ; real_T t1076 ; real_T t1077 ;
real_T t1078 ; real_T t1080 ; real_T t1081 ; real_T t1082 ; real_T t1083 ;
real_T t1088 ; real_T t1089 ; real_T t1090 ; real_T t1091 ; real_T t1097 ;
real_T t1098 ; real_T t1100 ; real_T t1102 ; real_T t1103 ; real_T t1104 ;
real_T t1105 ; real_T t1106 ; real_T t1109 ; real_T t1110 ; real_T t1111 ;
real_T t1112 ; real_T t1113 ; real_T t1114 ; real_T t1115 ; real_T t1116 ;
real_T t1117 ; real_T t1118 ; real_T t1121 ; real_T t1122 ; real_T t1124 ;
real_T t1126 ; real_T t1127 ; real_T t1129 ; real_T t1130 ; real_T t1131 ;
real_T t1132 ; real_T t1133 ; real_T t1134 ; real_T t1136 ; real_T t1137 ;
real_T t1138 ; real_T t1139 ; real_T t1140 ; real_T t1141 ; real_T t1142 ;
real_T t1144 ; real_T t1145 ; real_T t1147 ; real_T t1148 ; real_T t1149 ;
real_T t1150 ; real_T t1153 ; real_T t1155 ; real_T t1156 ; real_T t1158 ;
real_T t1162 ; real_T t1164 ; real_T t1165 ; real_T t1167 ; real_T t1170 ;
real_T t1171 ; real_T t1176 ; real_T t1177 ; real_T t1178 ; real_T t1179 ;
real_T t1183 ; real_T t1185 ; real_T t1189 ; real_T t1190 ; real_T t1191 ;
real_T t1192 ; real_T t1194 ; real_T t1195 ; real_T t1196 ; real_T t1197 ;
real_T t1198 ; real_T t1199 ; real_T t1200 ; real_T t1201 ; real_T t1202 ;
real_T t1203 ; real_T t1205 ; real_T t1206 ; real_T t1208 ; real_T t1209 ;
real_T t1210 ; real_T t1212 ; real_T t1213 ; real_T t1214 ; real_T t1215 ;
real_T t1216 ; real_T t1218 ; real_T t1219 ; real_T t1220 ; real_T t1221 ;
real_T t1222 ; real_T t1224 ; real_T t1225 ; real_T t1226 ; real_T t1228 ;
real_T t1229 ; real_T t1230 ; real_T t1232 ; real_T t1234 ; real_T t1235 ;
real_T t1238 ; real_T t1239 ; real_T t1240 ; real_T t1241 ; real_T t1244 ;
real_T t1245 ; real_T t1246 ; real_T t1247 ; real_T t1249 ; real_T t1250 ;
real_T t1253 ; real_T t1254 ; real_T t1255 ; real_T t1258 ; real_T t1259 ;
real_T t1263 ; real_T t1264 ; real_T t1266 ; real_T t1267 ; real_T t1271 ;
real_T t1273 ; real_T t1282 ; real_T t1286 ; real_T t1294 ; real_T t1304 ;
real_T t1308 ; real_T t1316 ; real_T t1332 ; real_T t1336 ; real_T t1352 ;
real_T t1370 ; real_T t1373 ; real_T t1382 ; real_T t1394 ; real_T t1398 ;
real_T t1406 ; real_T t1422 ; real_T t1442 ; real_T t1460 ; real_T t1464 ;
real_T t1465 ; real_T t1483 ; real_T t1488 ; real_T t1495 ; real_T t1518 ;
real_T t1527 ; real_T t1547 ; real_T t1563 ; real_T t1566 ; real_T t1575 ;
real_T t1580 ; real_T t1581 ; real_T t1599 ; real_T t1615 ; real_T t1635 ;
real_T t1651 ; real_T t1655 ; real_T t1663 ; real_T t1673 ; real_T t1677 ;
real_T t1684 ; real_T t1725 ; real_T t2179 ; real_T t2180 ; real_T t35_idx_0
; real_T t429_idx_0 ; real_T t43_idx_0 ; real_T t537_idx_0 ; real_T
t539_idx_0 ; real_T t542_idx_0 ; real_T t736 ; real_T t743 ; real_T t744 ;
real_T t751 ; real_T t752 ; real_T t759 ; real_T t760 ; real_T t767 ; real_T
t768 ; real_T t773 ; real_T t779 ; real_T t809 ; real_T t815 ; real_T t832 ;
real_T t833 ; real_T t834 ; real_T t835 ; real_T t836 ; real_T t838 ; real_T
t839 ; real_T t840 ; real_T t841 ; real_T t843 ; real_T t846 ; real_T t847 ;
real_T t848 ; real_T t849 ; real_T t852 ; real_T t855 ; real_T t856 ; real_T
t857 ; real_T t858 ; real_T t861 ; real_T t865 ; real_T t866 ; real_T t867 ;
real_T t868 ; real_T t871 ; real_T t873 ; real_T t875 ; real_T t878 ; real_T
t879 ; real_T t881 ; real_T t882 ; real_T t884 ; real_T t885 ; real_T t886 ;
real_T t887 ; real_T t888 ; real_T t889 ; real_T t890 ; real_T t891 ; real_T
t893 ; real_T t894 ; real_T t895 ; real_T t896 ; real_T t898 ; real_T t900 ;
real_T t902 ; real_T t904 ; real_T t905 ; real_T t906 ; real_T t909 ; real_T
t910 ; real_T t911 ; real_T t912 ; real_T t913 ; real_T t914 ; real_T t916 ;
real_T t918 ; real_T t919 ; real_T t920 ; real_T t921 ; real_T t922 ; real_T
t924 ; real_T t925 ; real_T t928 ; real_T t930 ; real_T t931 ; real_T t932 ;
real_T t935 ; real_T t936 ; real_T t942 ; real_T t943 ; real_T t945 ; real_T
t948 ; real_T t949 ; real_T t950 ; real_T t951 ; real_T t952 ; real_T t954 ;
real_T t957 ; real_T t958 ; real_T t960 ; real_T t961 ; real_T t963 ; real_T
t964 ; real_T t965 ; real_T t967 ; real_T t968 ; real_T t974 ; real_T t975 ;
real_T t976 ; real_T t977 ; real_T t978 ; real_T t982 ; real_T t984 ; real_T
t985 ; real_T t987 ; real_T t989 ; real_T t990 ; real_T t991 ; real_T t992 ;
real_T t995 ; real_T t996 ; real_T t997 ; real_T t999 ; size_t t63 [ 1 ] ;
size_t t64 [ 1 ] ; int32_T t422 [ 2861 ] ; int32_T M [ 218 ] ; int32_T b ;
boolean_T intrm_sf_mf_1457 ; boolean_T t56 ; boolean_T t57 ; boolean_T t58 ;
boolean_T t59 ; boolean_T t60 ; boolean_T t61 ; for ( b = 0 ; b < 218 ; b ++
) { M [ b ] = t2184 -> mM . mX [ b ] ; } U_idx_1 = t2184 -> mU . mX [ 1 ] ;
U_idx_2 = t2184 -> mU . mX [ 2 ] ; U_idx_4 = t2184 -> mU . mX [ 4 ] ; U_idx_6
= t2184 -> mU . mX [ 6 ] ; U_idx_8 = t2184 -> mU . mX [ 8 ] ; U_idx_9 = t2184
-> mU . mX [ 9 ] ; for ( b = 0 ; b < 399 ; b ++ ) { X [ b ] = t2184 -> mX .
mX [ b ] ; } out = t2185 -> mASSERT ; t2179 = X [ 0ULL ] *
9.2592592592592591E-6 ; if ( X [ 92ULL ] < 0.0 ) { t2180 = X [ 92ULL ] *
17.81 + 0.043 ; } else if ( X [ 92ULL ] <= 1.0 ) { t2180 = ( ( X [ 92ULL ] *
17.81 + 0.043 ) - X [ 92ULL ] * X [ 92ULL ] * 39.85 ) + X [ 92ULL ] * X [
92ULL ] * X [ 92ULL ] * 36.0 ; } else { t2180 = ( X [ 92ULL ] - 1.0 ) * 1.4 +
14.003 ; } if ( X [ 93ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = X [ 93ULL ]
* 17.81 + 0.043 ; } else if ( X [ 93ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = ( ( X [
93ULL ] * 17.81 + 0.043 ) - X [ 93ULL ] * X [ 93ULL ] * 39.85 ) + X [ 93ULL ]
* X [ 93ULL ] * X [ 93ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = ( X [ 93ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 62ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = - X [ 62ULL
] / 0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = 0.0 ; }
t736 = ( X [ 72ULL ] + X [ 78ULL ] ) / 2.0 ; t744 = ( X [ 82ULL ] + X [ 87ULL
] ) / 2.0 ; t62 [ 0 ] = 343.15 ; t63 [ 0 ] = 52ULL ; t64 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t62 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t55 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] ,
& t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t43_idx_0 = b_efOut [ 0 ] ; t752 = pmf_exp
( pmf_log ( t736 ) - t43_idx_0 ) ; t760 = pmf_exp ( pmf_log ( t744 ) -
t43_idx_0 ) ; t2180 = ( t2180 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ) / 2.0 ; if (
t2180 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = t2180 *
0.005139 - 0.00326 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 =
0.0018790000000000005 ; } t2180 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 *
1.6283557743720771 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = t760 * ( (
X [ 86ULL ] + X [ 91ULL ] ) / 2.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok >= 1.0E-9 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok : 1.0E-6 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = t736 * ( (
X [ 75ULL ] + X [ 80ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok * 1.0E-5 >=
1.0E-9 ) { t743 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok * 1.0E-5 ; }
else { t743 = 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = t744 * ( (
X [ 85ULL ] + X [ 90ULL ] ) / 2.0 ) / 1.01325 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok * 1.0E-5 >=
1.0E-9 ) { t751 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok * 1.0E-5 ; }
else { t751 = 1.0E-6 ; } if ( X [ 127ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI = X [ 127ULL
] >= 1.0 ? 1.0 : X [ 127ULL ] ; } if ( X [ 128ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = X [
128ULL ] >= 1.0 ? 1.0 : X [ 128ULL ] ; } t759 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok *
4124.48151675695 ; if ( X [ 21ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI = X [ 21ULL ]
>= 1.0 ? 1.0 : X [ 21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } t767 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ) *
296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok *
4124.48151675695 ; t832 = ( X [ 19ULL ] / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X
[ 20ULL ] ) - X [ 135ULL ] / ( X [ 136ULL ] == 0.0 ? 1.0E-16 : X [ 136ULL ] )
) * X [ 134ULL ] * t767 / 7.8539816339744827E-5 ; if ( X [ 135ULL ] <=
216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [ 135ULL
] >= 623.15 ? 623.15 : X [ 135ULL ] ; } t835 = t833 * t833 ; t834 = ( ( (
1074.1165326382641 + t833 * - 0.2214565261064495 ) + t835 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t835 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t833 * 6.9647057412840034 ) + t835 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ; t847 = t834
- t767 ; t835 = t834 / ( t847 == 0.0 ? 1.0E-16 : t847 ) ; t836 = pmf_sqrt (
t832 * t832 * 9.999999999999999E-14 + fabs ( X [ 135ULL ] * t835 * t767 ) *
1.0E-9 ) ; if ( X [ 137ULL ] <= 0.0 ) { intrm_sf_mf_829 = 0.0 ; } else {
intrm_sf_mf_829 = X [ 137ULL ] >= 1.0 ? 1.0 : X [ 137ULL ] ; } if ( X [
138ULL ] <= 0.0 ) { t838 = 0.0 ; } else { t838 = X [ 138ULL ] >= 1.0 ? 1.0 :
X [ 138ULL ] ; } t67 [ 0ULL ] = X [ 19ULL ] ; tlu2_linear_nearest_prelookup (
& c_efOut . mField0 [ 0ULL ] , & c_efOut . mField1 [ 0ULL ] , & c_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t67 [
0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t51 = c_efOut ;
tlu2_1d_linear_nearest_value ( & d_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t423 [ 0 ] = d_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & e_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t424 [ 0 ] = e_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & f_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t425 [ 0 ] = f_efOut [ 0 ] ; t839 = ( ( (
1.0 - intrm_sf_mf_829 ) - t838 ) * t423 [ 0ULL ] + t424 [ 0ULL ] *
intrm_sf_mf_829 ) + t425 [ 0ULL ] * t838 ; t848 = X [ 136ULL ] * X [ 136ULL ]
* t835 ; t840 = - pmf_sqrt ( fabs ( t848 / ( t767 == 0.0 ? 1.0E-16 : t767 ) /
( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) ) ) * 7.8539816339744827E-5
; if ( t840 >= 0.0 ) { t841 = t840 * 100000.0 ; } else { t841 = - t840 *
100000.0 ; } t852 = t839 * 7.8539816339744827E-5 ; t833 = t841 * 0.01 / (
t852 == 0.0 ? 1.0E-16 : t852 ) ; intrm_sf_mf_52 = X [ 19ULL ] * t767 ; t846 =
X [ 20ULL ] / ( intrm_sf_mf_52 == 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) ; t856 =
t846 * 1.5707963267948965E-8 ; t847 = t840 * t839 * 35.2 / ( t856 == 0.0 ?
1.0E-16 : t856 ) ; t849 = t833 >= 1.0 ? t833 : 1.0 ; t857 = pmf_log10 ( 6.9 /
( t849 == 0.0 ? 1.0E-16 : t849 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t849 == 0.0 ? 1.0E-16 : t849 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_104 = t846 * 1.2337005501361697E-10 ; t841 = t840 * t841 * ( 1.0
/ ( t857 == 0.0 ? 1.0E-16 : t857 ) ) * 0.55 / ( intrm_sf_mf_104 == 0.0 ?
1.0E-16 : intrm_sf_mf_104 ) ; intrm_sf_mf_47 = ( t833 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_52 = intrm_sf_mf_47 * intrm_sf_mf_47 * 3.0 - intrm_sf_mf_47 *
intrm_sf_mf_47 * intrm_sf_mf_47 * 2.0 ; if ( t833 <= 2000.0 ) {
intrm_sf_mf_47 = t847 * 1.0E-5 ; } else if ( t833 >= 4000.0 ) {
intrm_sf_mf_47 = t841 * 1.0E-5 ; } else { intrm_sf_mf_47 = ( ( 1.0 -
intrm_sf_mf_52 ) * t847 + t841 * intrm_sf_mf_52 ) * 1.0E-5 ; } t836 = X [
134ULL ] * t836 / 7.8539816339744827E-5 * 0.00031622776601683789 +
intrm_sf_mf_47 ; t841 = - ( ( X [ 19ULL ] / ( X [ 20ULL ] == 0.0 ? 1.0E-16 :
X [ 20ULL ] ) - X [ 139ULL ] / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X [ 140ULL ]
) ) * X [ 122ULL ] * t767 ) / 7.8539816339744827E-5 ; if ( X [ 139ULL ] <=
216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [ 139ULL
] >= 623.15 ? 623.15 : X [ 139ULL ] ; } t773 = t833 * t833 ; t847 = ( ( (
1074.1165326382641 + t833 * - 0.2214565261064495 ) + t773 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t773 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ) + ( (
12825.281119789837 + t833 * 6.9647057412840034 ) + t773 * -
0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ; t867 = t847
- t767 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI = t847
/ ( t867 == 0.0 ? 1.0E-16 : t867 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = pmf_sqrt (
t841 * t841 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * t767 ) *
1.0E-9 ) ; t868 = X [ 140ULL ] * X [ 140ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI ;
intrm_sf_mf_47 = - pmf_sqrt ( fabs ( t868 / ( t767 == 0.0 ? 1.0E-16 : t767 )
/ ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( intrm_sf_mf_47 >= 0.0 ) { intrm_sf_mf_52 =
intrm_sf_mf_47 * 100000.0 ; } else { intrm_sf_mf_52 = - intrm_sf_mf_47 *
100000.0 ; } t773 = intrm_sf_mf_52 * 0.01 / ( t852 == 0.0 ? 1.0E-16 : t852 )
; t843 = intrm_sf_mf_47 * t839 * 35.2 / ( t856 == 0.0 ? 1.0E-16 : t856 ) ;
t855 = t773 >= 1.0 ? t773 : 1.0 ; t875 = pmf_log10 ( 6.9 / ( t855 == 0.0 ?
1.0E-16 : t855 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t855 == 0.0
? 1.0E-16 : t855 ) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_52 =
intrm_sf_mf_47 * intrm_sf_mf_52 * ( 1.0 / ( t875 == 0.0 ? 1.0E-16 : t875 ) )
* 0.55 / ( intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104 ) ; t856 = (
t773 - 2000.0 ) / 2000.0 ; t857 = t856 * t856 * 3.0 - t856 * t856 * t856 *
2.0 ; if ( t773 <= 2000.0 ) { t856 = t843 * 1.0E-5 ; } else if ( t773 >=
4000.0 ) { t856 = intrm_sf_mf_52 * 1.0E-5 ; } else { t856 = ( ( 1.0 - t857 )
* t843 + intrm_sf_mf_52 * t857 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = - ( X [
122ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok )
/ 7.8539816339744827E-5 * 0.00031622776601683789 + t856 ; if ( 1.0 - X [
21ULL ] >= 0.01 ) { t773 = 1.0 - X [ 21ULL ] ; } else if ( 1.0 - X [ 21ULL ]
>= - 0.1 ) { t773 = pmf_exp ( ( ( 1.0 - X [ 21ULL ] ) - 0.01 ) / 0.01 ) *
0.01 ; } else { t773 = 1.6701700790245661E-7 ; } t843 = X [ 22ULL ] / ( t773
== 0.0 ? 1.0E-16 : t773 ) * 3827.6794129126583 + 296.802103844292 ; t423 [
0ULL ] = X [ 19ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [
0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t423 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t55 = g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t35_idx_0 = h_efOut [ 0 ] ; t856 = pmf_exp ( pmf_log ( X [ 20ULL ] *
100000.0 ) - t35_idx_0 ) ; if ( t856 >= 1.0 ) { t882 = ( t856 - 1.0 ) *
461.523 + t843 ; t857 = t843 / ( t882 == 0.0 ? 1.0E-16 : t882 ) ; } else {
t857 = 1.0 ; } t858 = ( X [ 134ULL ] - ( - X [ 122ULL ] ) ) / 2.0 ; if ( X [
133ULL ] <= 0.0 ) { intrm_sf_mf_103 = 0.0 ; } else { intrm_sf_mf_103 = X [
133ULL ] >= 1.0 ? 1.0 : X [ 133ULL ] ; } if ( X [ 132ULL ] <= 0.0 ) { t861 =
0.0 ; } else { t861 = X [ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; } t865 = ( (
( 1.0 - intrm_sf_mf_103 ) - t861 ) * 296.802103844292 + intrm_sf_mf_103 *
461.523 ) + t861 * 4124.48151675695 ; intrm_sf_mf_103 = X [ 132ULL ] *
4124.48151675695 / ( t865 == 0.0 ? 1.0E-16 : t865 ) ; if ( intrm_sf_mf_103 <=
0.0 ) { t861 = 0.0 ; } else { t861 = intrm_sf_mf_103 >= 1.0 ? 1.0 :
intrm_sf_mf_103 ; } intrm_sf_mf_103 = X [ 133ULL ] * 461.523 / ( t865 == 0.0
? 1.0E-16 : t865 ) ; if ( intrm_sf_mf_103 <= 0.0 ) { t866 = 0.0 ; } else {
t866 = intrm_sf_mf_103 >= 1.0 ? 1.0 : intrm_sf_mf_103 ; } t424 [ 0ULL ] = X [
130ULL ] ; tlu2_linear_nearest_prelookup ( & i_efOut . mField0 [ 0ULL ] , &
i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t424 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t55 = i_efOut ; tlu2_1d_linear_nearest_value ( & j_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t426 [ 0 ] = j_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & k_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t122 [ 0 ] = k_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & l_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t428 [ 0 ] = l_efOut [ 0 ] ; intrm_sf_mf_103 = ( ( ( 1.0 - t866 ) - t861 )
* t426 [ 0ULL ] + t122 [ 0ULL ] * t866 ) + t428 [ 0ULL ] * t861 ; t886 =
intrm_sf_mf_103 + t839 ; t888 = t886 / 2.0 * 7.8539816339744827E-5 ;
intrm_sf_mf_104 = - ( t858 <= 0.0 ? t858 : 0.0 ) * 0.01 / ( t888 == 0.0 ?
1.0E-16 : t888 ) ; intrm_sf_mf_103 = intrm_sf_mf_104 >= 0.0 ? intrm_sf_mf_104
: - intrm_sf_mf_104 ; intrm_sf_mf_104 = intrm_sf_mf_103 > 1000.0 ?
intrm_sf_mf_103 : 1000.0 ; t889 = pmf_log10 ( 6.9 / ( intrm_sf_mf_104 == 0.0
? 1.0E-16 : intrm_sf_mf_104 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 /
( intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104 ) +
0.00017169489553429715 ) * 3.24 ; t867 = 1.0 / ( t889 == 0.0 ? 1.0E-16 : t889
) ; tlu2_1d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t51 . mField0 [
0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t429_idx_0 = m_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t430 [ 0 ] = n_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t540 [ 0 ] = o_efOut [ 0 ] ; t833 = ( ( (
1.0 - intrm_sf_mf_829 ) - t838 ) * t429_idx_0 + t430 [ 0ULL ] *
intrm_sf_mf_829 ) + t540 [ 0ULL ] * t838 ; tlu2_1d_linear_nearest_value ( &
p_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = p_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & q_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = q_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & r_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = r_efOut [ 0 ] ; intrm_sf_mf_829 = ( ( ( 1.0 - t866 ) - t861 )
* t537_idx_0 + t542_idx_0 * t866 ) + t539_idx_0 * t861 ; t890 = t833 +
intrm_sf_mf_829 ; if ( ( pmf_pow ( t890 / 2.0 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t867 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t894 = ( pmf_pow ( (
t833 + intrm_sf_mf_829 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t867 / 8.0 ) * 12.7 + 1.0 ; t838 = ( intrm_sf_mf_104 - 1000.0 ) * ( t867 /
8.0 ) * ( ( t833 + intrm_sf_mf_829 ) / 2.0 ) / ( t894 == 0.0 ? 1.0E-16 : t894
) ; } else { t838 = ( intrm_sf_mf_104 - 1000.0 ) * ( t867 / 8.0 ) * ( ( t833
+ intrm_sf_mf_829 ) / 2.0 ) / 1.0E-6 ; } t861 = ( intrm_sf_mf_103 - 2000.0 )
/ 2000.0 ; t866 = t861 * t861 * 3.0 - t861 * t861 * t861 * 2.0 ; if (
intrm_sf_mf_103 <= 2000.0 ) { t861 = 3.66 ; } else if ( intrm_sf_mf_103 >=
4000.0 ) { t861 = t838 ; } else { t861 = ( 1.0 - t866 ) * 3.66 + t838 * t866
; } t898 = t861 * 0.031415926535897927 ; t779 = t890 / 2.0 ; if (
intrm_sf_mf_103 > t898 / 7.8539816339744827E-5 / ( t779 == 0.0 ? 1.0E-16 :
t779 ) / 30.0 ) { intrm_sf_mf_233 = ( t833 + intrm_sf_mf_829 ) / 2.0 ; t838 =
t861 * 0.031415926535897927 / ( intrm_sf_mf_103 == 0.0 ? 1.0E-16 :
intrm_sf_mf_103 ) / 7.8539816339744827E-5 / ( intrm_sf_mf_233 == 0.0 ?
1.0E-16 : intrm_sf_mf_233 ) ; } else { t838 = 30.0 ; } if ( X [ 114ULL ] <=
0.0 ) { intrm_sf_mf_829 = 0.0 ; } else { intrm_sf_mf_829 = X [ 114ULL ] >=
1.0 ? 1.0 : X [ 114ULL ] ; } if ( X [ 113ULL ] <= 0.0 ) { t861 = 0.0 ; } else
{ t861 = X [ 113ULL ] >= 1.0 ? 1.0 : X [ 113ULL ] ; } t866 = ( ( ( 1.0 -
intrm_sf_mf_829 ) - t861 ) * 296.802103844292 + intrm_sf_mf_829 * 461.523 ) +
t861 * 4124.48151675695 ; intrm_sf_mf_829 = X [ 114ULL ] * 461.523 / ( t866
== 0.0 ? 1.0E-16 : t866 ) ; if ( intrm_sf_mf_829 <= 0.0 ) { t861 = 0.0 ; }
else { t861 = intrm_sf_mf_829 >= 1.0 ? 1.0 : intrm_sf_mf_829 ; }
intrm_sf_mf_829 = X [ 113ULL ] * 4124.48151675695 / ( t866 == 0.0 ? 1.0E-16 :
t866 ) ; if ( intrm_sf_mf_829 <= 0.0 ) { t871 = 0.0 ; } else { t871 =
intrm_sf_mf_829 >= 1.0 ? 1.0 : intrm_sf_mf_829 ; } t425 [ 0ULL ] = X [ 111ULL
] ; tlu2_linear_nearest_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut
. mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t425 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ;
t55 = s_efOut ; tlu2_1d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = t_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t55 . mField0 [
0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = u_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & v_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = v_efOut [ 0 ] ;
intrm_sf_mf_829 = ( ( ( 1.0 - t861 ) - t871 ) * t537_idx_0 + t542_idx_0 *
t861 ) + t539_idx_0 * t871 ; t873 = t858 >= 0.0 ? t858 : 0.0 ;
tlu2_1d_linear_nearest_value ( & w_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = w_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & x_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = x_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = y_efOut [ 0 ] ; t858 = ( ( (
1.0 - t861 ) - t871 ) * t537_idx_0 + t542_idx_0 * t861 ) + t539_idx_0 * t871
; t910 = t839 + t858 ; t912 = t910 / 2.0 * 7.8539816339744827E-5 ; t861 =
t873 * 0.01 / ( t912 == 0.0 ? 1.0E-16 : t912 ) ; t871 = t861 >= 0.0 ? t861 :
- t861 ; t861 = t871 > 1000.0 ? t871 : 1000.0 ; t913 = pmf_log10 ( 6.9 / (
t861 == 0.0 ? 1.0E-16 : t861 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 /
( t861 == 0.0 ? 1.0E-16 : t861 ) + 0.00017169489553429715 ) * 3.24 ; t873 =
1.0 / ( t913 == 0.0 ? 1.0E-16 : t913 ) ; t914 = intrm_sf_mf_829 + t833 ; if (
( pmf_pow ( t914 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t873 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t918 = ( pmf_pow ( ( intrm_sf_mf_829 + t833
) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t873 / 8.0 ) * 12.7 +
1.0 ; t875 = ( t861 - 1000.0 ) * ( t873 / 8.0 ) * ( ( intrm_sf_mf_829 + t833
) / 2.0 ) / ( t918 == 0.0 ? 1.0E-16 : t918 ) ; } else { t875 = ( t861 -
1000.0 ) * ( t873 / 8.0 ) * ( ( intrm_sf_mf_829 + t833 ) / 2.0 ) / 1.0E-6 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = ( t871 -
2000.0 ) / 2000.0 ; t878 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 2.0 ; if (
t871 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = 3.66 ; }
else if ( t871 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t875 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = (
1.0 - t878 ) * 3.66 + t875 * t878 ; } t922 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
0.031415926535897927 ; t925 = t914 / 2.0 ; if ( t871 > t922 /
7.8539816339744827E-5 / ( t925 == 0.0 ? 1.0E-16 : t925 ) / 30.0 ) { t931 = (
intrm_sf_mf_829 + t833 ) / 2.0 ; t875 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
0.031415926535897927 / ( t871 == 0.0 ? 1.0E-16 : t871 ) /
7.8539816339744827E-5 / ( t931 == 0.0 ? 1.0E-16 : t931 ) ; } else { t875 =
30.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 =
U_idx_1 * 0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 0.0001 <=
7.8539816339744857E-13 ) { t878 = 7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 0.0001 >=
3.1415926535897929E-6 ) { t878 = 3.1415926535897929E-6 ; } else { t878 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 0.0001 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t878 /
7.8539816339744827E-5 ; if ( X [ 154ULL ] <= 0.0 ) { t879 = 0.0 ; } else {
t879 = X [ 154ULL ] >= 1.0 ? 1.0 : X [ 154ULL ] ; } if ( X [ 155ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = X [ 155ULL ]
>= 1.0 ? 1.0 : X [ 155ULL ] ; } t881 = ( ( ( 1.0 - t879 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ) *
296.802103844292 + t879 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I * 4124.48151675695
; intrm_sf_mf_299 = X [ 152ULL ] * t881 ; t882 = X [ 153ULL ] / (
intrm_sf_mf_299 == 0.0 ? 1.0E-16 : intrm_sf_mf_299 ) ; intrm_sf_mf_52 = X [
153ULL ] / ( X [ 131ULL ] == 0.0 ? 1.0E-16 : X [ 131ULL ] ) * ( X [ 156ULL ]
/ ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) ) ; t884 = X [ 153ULL ] /
1.01325 * ( X [ 157ULL ] / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) )
; t887 = ( X [ 131ULL ] + 1.01325 ) / 2.0 * 0.0010000000000000009 ; t885 = (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ) ;
t888 = t887 * t885 ; t889 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
intrm_sf_mf_52 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * t884 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 2.0 ; t891
= ( X [ 131ULL ] - 1.01325 ) * ( t889 >= t885 ? t889 : t885 ) ; t889 = ( X [
131ULL ] - 1.01325 ) / ( t887 == 0.0 ? 1.0E-16 : t887 ) ; t833 = t889 * t889
* 3.0 - t889 * t889 * t889 * 2.0 ; if ( X [ 131ULL ] - 1.01325 <= 0.0 ) {
t889 = t888 ; } else if ( X [ 131ULL ] - 1.01325 >= t887 ) { t889 = t891 ; }
else { t889 = ( 1.0 - t833 ) * t888 + t891 * t833 ; } t891 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * t884
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
intrm_sf_mf_52 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = ( 1.01325 -
X [ 131ULL ] ) * ( t891 >= t885 ? t891 : t885 ) ; intrm_sf_mf_52 = ( 1.01325
- X [ 131ULL ] ) / ( t887 == 0.0 ? 1.0E-16 : t887 ) ; t884 = intrm_sf_mf_52 *
intrm_sf_mf_52 * 3.0 - intrm_sf_mf_52 * intrm_sf_mf_52 * intrm_sf_mf_52 * 2.0
; if ( 1.01325 - X [ 131ULL ] <= 0.0 ) { intrm_sf_mf_52 = t888 ; } else if (
1.01325 - X [ 131ULL ] >= t887 ) { intrm_sf_mf_52 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ; } else {
intrm_sf_mf_52 = ( 1.0 - t884 ) * t888 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * t884 ; } if
( X [ 131ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t889 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = X [
131ULL ] < 1.01325 ? intrm_sf_mf_52 : t888 ; } if ( X [ 152ULL ] <=
216.59999999999997 ) { intrm_sf_mf_52 = 216.59999999999997 ; } else {
intrm_sf_mf_52 = X [ 152ULL ] >= 623.15 ? 623.15 : X [ 152ULL ] ; } t893 =
intrm_sf_mf_52 * intrm_sf_mf_52 ; t884 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_52 * - 0.2214565261064495 ) + t893 * 0.00037212980109014541 ) * (
( 1.0 - t879 ) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I )
+ ( ( 1479.6504774711011 + intrm_sf_mf_52 * 1.2002114337048222 ) + t893 * -
0.00038614513167823636 ) * t879 ) + ( ( 12825.281119789837 + intrm_sf_mf_52 *
6.9647057412840034 ) + t893 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ; intrm_sf_mf_52 =
t884 - t881 ; t945 = X [ 153ULL ] * X [ 153ULL ] * ( t884 / ( intrm_sf_mf_52
== 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) ) ; t879 = pmf_sqrt ( fabs ( t945 / (
t881 == 0.0 ? 1.0E-16 : t881 ) / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL
] ) ) ) * t878 * 0.64 ; if ( X [ 26ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = X [ 26ULL ] >=
1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [ 25ULL ] <= 0.0 ) { t885 = 0.0 ; } else {
t885 = X [ 25ULL ] >= 1.0 ? 1.0 : X [ 25ULL ] ; } t888 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ) - t885 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I
* 461.523 ) + t885 * 4124.48151675695 ; if ( 1.0 - X [ 26ULL ] >= 0.01 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = 1.0 - X [ 26ULL
] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I = pmf_exp ( ( (
1.0 - X [ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I =
1.6701700790245661E-7 ; } t885 = X [ 25ULL ] / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I ) *
3827.6794129126583 + 296.802103844292 ; t426 [ 0ULL ] = X [ 23ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t426 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t50
= ab_efOut ; tlu2_1d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t50 .
mField0 [ 0ULL ] , & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t429_idx_0 = bb_efOut [ 0
] ; t889 = pmf_exp ( pmf_log ( X [ 24ULL ] * 100000.0 ) - t429_idx_0 ) ; if (
t889 >= 1.0 ) { t950 = ( t889 - 1.0 ) * 461.523 + t885 ; t891 = t885 / ( t950
== 0.0 ? 1.0E-16 : t950 ) ; } else { t891 = 1.0 ; } if ( X [ 29ULL ] <= 0.0 )
{ t893 = 0.0 ; } else { t893 = X [ 29ULL ] >= 1.0 ? 1.0 : X [ 29ULL ] ; } if
( X [ 30ULL ] <= 0.0 ) { t894 = 0.0 ; } else { t894 = X [ 30ULL ] >= 1.0 ?
1.0 : X [ 30ULL ] ; } t895 = ( ( ( 1.0 - t893 ) - t894 ) * 296.802103844292 +
t893 * 461.523 ) + t894 * 4124.48151675695 ; t896 = - ( ( X [ 27ULL ] / ( X [
28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL ] ) - X [ 182ULL ] / ( X [ 183ULL ] ==
0.0 ? 1.0E-16 : X [ 183ULL ] ) ) * X [ 172ULL ] * t895 ) /
7.8539816339744827E-5 ; if ( X [ 182ULL ] <= 216.59999999999997 ) { t833 =
216.59999999999997 ; } else { t833 = X [ 182ULL ] >= 623.15 ? 623.15 : X [
182ULL ] ; } t779 = t833 * t833 ; t900 = ( ( ( 1074.1165326382641 + t833 * -
0.2214565261064495 ) + t779 * 0.00037212980109014541 ) * ( ( 1.0 - t893 ) -
t894 ) + ( ( 1479.6504774711011 + t833 * 1.2002114337048222 ) + t779 * -
0.00038614513167823636 ) * t893 ) + ( ( 12825.281119789837 + t833 *
6.9647057412840034 ) + t779 * - 0.0070524868246844051 ) * t894 ; t833 = t900
- t895 ; t779 = t900 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; t902 = pmf_sqrt (
t896 * t896 * 9.999999999999999E-14 + fabs ( X [ 182ULL ] * t779 * t895 ) *
1.0E-9 ) ; if ( X [ 184ULL ] <= 0.0 ) { intrm_sf_mf_528 = 0.0 ; } else {
intrm_sf_mf_528 = X [ 184ULL ] >= 1.0 ? 1.0 : X [ 184ULL ] ; } if ( X [
185ULL ] <= 0.0 ) { t904 = 0.0 ; } else { t904 = X [ 185ULL ] >= 1.0 ? 1.0 :
X [ 185ULL ] ; } t122 [ 0ULL ] = X [ 27ULL ] ; tlu2_linear_nearest_prelookup
( & cb_efOut . mField0 [ 0ULL ] , & cb_efOut . mField1 [ 0ULL ] , & cb_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t122 [
0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t50 = cb_efOut ;
tlu2_1d_linear_nearest_value ( & db_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = db_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & eb_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = eb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fb_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = fb_efOut [ 0 ] ; t905 = ( ( (
1.0 - intrm_sf_mf_528 ) - t904 ) * t537_idx_0 + t542_idx_0 * intrm_sf_mf_528
) + t539_idx_0 * t904 ; t957 = X [ 183ULL ] * X [ 183ULL ] * t779 ; t906 = -
pmf_sqrt ( fabs ( t957 / ( t895 == 0.0 ? 1.0E-16 : t895 ) / ( X [ 182ULL ] ==
0.0 ? 1.0E-16 : X [ 182ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t906 >= 0.0
) { intrm_sf_mf_233 = t906 * 100000.0 ; } else { intrm_sf_mf_233 = - t906 *
100000.0 ; } t961 = t905 * 7.8539816339744827E-5 ; t833 = intrm_sf_mf_233 *
0.01 / ( t961 == 0.0 ? 1.0E-16 : t961 ) ; t963 = X [ 27ULL ] * t895 ; t909 =
X [ 28ULL ] / ( t963 == 0.0 ? 1.0E-16 : t963 ) ; t965 = t909 *
1.5707963267948965E-8 ; t911 = t906 * t905 * 35.2 / ( t965 == 0.0 ? 1.0E-16 :
t965 ) ; t912 = t833 >= 1.0 ? t833 : 1.0 ; intrm_sf_mf_52 = pmf_log10 ( 6.9 /
( t912 == 0.0 ? 1.0E-16 : t912 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t912 == 0.0 ? 1.0E-16 : t912 ) + 0.00017169489553429715 ) * 3.24 ; t968 =
t909 * 1.2337005501361697E-10 ; intrm_sf_mf_233 = t906 * intrm_sf_mf_233 * (
1.0 / ( intrm_sf_mf_52 == 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) ) * 0.55 / ( t968
== 0.0 ? 1.0E-16 : t968 ) ; t913 = ( t833 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_52 = t913 * t913 * 3.0 - t913 * t913 * t913 * 2.0 ; if ( t833 <=
2000.0 ) { t913 = t911 * 1.0E-5 ; } else if ( t833 >= 4000.0 ) { t913 =
intrm_sf_mf_233 * 1.0E-5 ; } else { t913 = ( ( 1.0 - intrm_sf_mf_52 ) * t911
+ intrm_sf_mf_233 * intrm_sf_mf_52 ) * 1.0E-5 ; } t902 = - ( X [ 172ULL ] *
t902 ) / 7.8539816339744827E-5 * 0.00031622776601683789 + t913 ;
intrm_sf_mf_233 = ( X [ 27ULL ] / ( X [ 28ULL ] == 0.0 ? 1.0E-16 : X [ 28ULL
] ) - X [ 187ULL ] / ( X [ 188ULL ] == 0.0 ? 1.0E-16 : X [ 188ULL ] ) ) * X [
186ULL ] * t895 / 7.8539816339744827E-5 ; if ( X [ 187ULL ] <=
216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [ 187ULL
] >= 623.15 ? 623.15 : X [ 187ULL ] ; } t916 = t833 * t833 ; t911 = ( ( (
1074.1165326382641 + t833 * - 0.2214565261064495 ) + t916 *
0.00037212980109014541 ) * ( ( 1.0 - t893 ) - t894 ) + ( ( 1479.6504774711011
+ t833 * 1.2002114337048222 ) + t916 * - 0.00038614513167823636 ) * t893 ) +
( ( 12825.281119789837 + t833 * 6.9647057412840034 ) + t916 * -
0.0070524868246844051 ) * t894 ; t976 = t911 - t895 ; t893 = t911 / ( t976 ==
0.0 ? 1.0E-16 : t976 ) ; t894 = pmf_sqrt ( intrm_sf_mf_233 * intrm_sf_mf_233
* 9.999999999999999E-14 + fabs ( X [ 187ULL ] * t893 * t895 ) * 1.0E-9 ) ;
t977 = X [ 188ULL ] * X [ 188ULL ] * t893 ; t913 = - pmf_sqrt ( fabs ( t977 /
( t895 == 0.0 ? 1.0E-16 : t895 ) / ( X [ 187ULL ] == 0.0 ? 1.0E-16 : X [
187ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t913 >= 0.0 ) { intrm_sf_mf_52
= t913 * 100000.0 ; } else { intrm_sf_mf_52 = - t913 * 100000.0 ; } t916 =
intrm_sf_mf_52 * 0.01 / ( t961 == 0.0 ? 1.0E-16 : t961 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I = t913 * t905 * 35.2
/ ( t965 == 0.0 ? 1.0E-16 : t965 ) ; t918 = t916 >= 1.0 ? t916 : 1.0 ; t984 =
pmf_log10 ( 6.9 / ( t918 == 0.0 ? 1.0E-16 : t918 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t918 == 0.0 ? 1.0E-16 : t918 ) + 0.00017169489553429715
) * 3.24 ; intrm_sf_mf_52 = t913 * intrm_sf_mf_52 * ( 1.0 / ( t984 == 0.0 ?
1.0E-16 : t984 ) ) * 0.55 / ( t968 == 0.0 ? 1.0E-16 : t968 ) ; t919 = ( t916
- 2000.0 ) / 2000.0 ; t920 = t919 * t919 * 3.0 - t919 * t919 * t919 * 2.0 ;
if ( t916 <= 2000.0 ) { t919 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I * 1.0E-5 ; } else if
( t916 >= 4000.0 ) { t919 = intrm_sf_mf_52 * 1.0E-5 ; } else { t919 = ( ( 1.0
- t920 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I +
intrm_sf_mf_52 * t920 ) * 1.0E-5 ; } t894 = X [ 186ULL ] * t894 /
7.8539816339744827E-5 * 0.00031622776601683789 + t919 ; if ( 1.0 - X [ 29ULL
] >= 0.01 ) { t916 = 1.0 - X [ 29ULL ] ; } else if ( 1.0 - X [ 29ULL ] >= -
0.1 ) { t916 = pmf_exp ( ( ( 1.0 - X [ 29ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; }
else { t916 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I = X [ 30ULL ] / (
t916 == 0.0 ? 1.0E-16 : t916 ) * 3827.6794129126583 + 296.802103844292 ; t428
[ 0ULL ] = X [ 27ULL ] ; tlu2_linear_linear_prelookup ( & gb_efOut . mField0
[ 0ULL ] , & gb_efOut . mField1 [ 0ULL ] , & gb_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t428 [ 0ULL ] , & t63 [ 0ULL ]
, & t64 [ 0ULL ] ) ; t49 = gb_efOut ; tlu2_1d_linear_linear_value ( &
hb_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t428 [ 0 ] = hb_efOut [ 0 ] ; t919 = pmf_exp ( pmf_log ( X [ 28ULL ] *
100000.0 ) - t428 [ 0ULL ] ) ; if ( t919 >= 1.0 ) { t991 = ( t919 - 1.0 ) *
461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I ; t920 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I / ( t991 == 0.0 ?
1.0E-16 : t991 ) ; } else { t920 = 1.0 ; } if ( X [ 181ULL ] <= 0.0 ) { t921
= 0.0 ; } else { t921 = X [ 181ULL ] >= 1.0 ? 1.0 : X [ 181ULL ] ; } if ( X [
180ULL ] <= 0.0 ) { t924 = 0.0 ; } else { t924 = X [ 180ULL ] >= 1.0 ? 1.0 :
X [ 180ULL ] ; } t925 = ( ( ( 1.0 - t921 ) - t924 ) * 296.802103844292 + t921
* 461.523 ) + t924 * 4124.48151675695 ; t921 = X [ 181ULL ] * 461.523 / (
t925 == 0.0 ? 1.0E-16 : t925 ) ; if ( t921 <= 0.0 ) { t924 = 0.0 ; } else {
t924 = t921 >= 1.0 ? 1.0 : t921 ; } t921 = X [ 180ULL ] * 4124.48151675695 /
( t925 == 0.0 ? 1.0E-16 : t925 ) ; if ( t921 <= 0.0 ) { intrm_sf_mf_271 = 0.0
; } else { intrm_sf_mf_271 = t921 >= 1.0 ? 1.0 : t921 ; } t430 [ 0ULL ] = X [
178ULL ] ; tlu2_linear_nearest_prelookup ( & ib_efOut . mField0 [ 0ULL ] , &
ib_efOut . mField1 [ 0ULL ] , & ib_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t430 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t51 = ib_efOut ; tlu2_1d_linear_nearest_value ( & jb_efOut
[ 0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = jb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & kb_efOut [
0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = kb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & lb_efOut [
0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = lb_efOut [ 0 ] ; t921 = ( ( ( 1.0 - t924 ) - intrm_sf_mf_271 )
* t537_idx_0 + t542_idx_0 * t924 ) + t539_idx_0 * intrm_sf_mf_271 ;
tlu2_1d_linear_nearest_value ( & mb_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = mb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nb_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = nb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ob_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = ob_efOut [ 0 ] ; t833 = ( (
( 1.0 - intrm_sf_mf_528 ) - t904 ) * t537_idx_0 + t542_idx_0 *
intrm_sf_mf_528 ) + t539_idx_0 * t904 ; intrm_sf_mf_528 = ( - X [ 172ULL ] -
X [ 186ULL ] ) / 2.0 ; tlu2_1d_linear_nearest_value ( & pb_efOut [ 0ULL ] , &
t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 =
pb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qb_efOut [ 0ULL ] , & t51 .
mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = qb_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & rb_efOut [ 0ULL ] , & t51 . mField0 [
0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = rb_efOut [ 0 ] ;
t995 = t905 + ( ( ( ( 1.0 - t924 ) - intrm_sf_mf_271 ) * t537_idx_0 +
t542_idx_0 * t924 ) + t539_idx_0 * intrm_sf_mf_271 ) ; t997 = t995 / 2.0 *
7.8539816339744827E-5 ; t904 = ( intrm_sf_mf_528 >= 0.0 ? intrm_sf_mf_528 :
0.0 ) * 0.01 / ( t997 == 0.0 ? 1.0E-16 : t997 ) ; t924 = t904 >= 0.0 ? t904 :
- t904 ; t904 = t924 > 1000.0 ? t924 : 1000.0 ; intrm_sf_mf_551 = pmf_log10 (
6.9 / ( t904 == 0.0 ? 1.0E-16 : t904 ) + 0.00017169489553429715 ) * pmf_log10
( 6.9 / ( t904 == 0.0 ? 1.0E-16 : t904 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_271 = 1.0 / ( intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551
) ; t999 = t921 + t833 ; if ( ( pmf_pow ( t999 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( intrm_sf_mf_271 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1003
= ( pmf_pow ( ( t921 + t833 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( intrm_sf_mf_271 / 8.0 ) * 12.7 + 1.0 ; t928 = ( t904 - 1000.0 ) *
( intrm_sf_mf_271 / 8.0 ) * ( ( t921 + t833 ) / 2.0 ) / ( t1003 == 0.0 ?
1.0E-16 : t1003 ) ; } else { t928 = ( t904 - 1000.0 ) * ( intrm_sf_mf_271 /
8.0 ) * ( ( t921 + t833 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_293 = ( t924 -
2000.0 ) / 2000.0 ; t930 = intrm_sf_mf_293 * intrm_sf_mf_293 * 3.0 -
intrm_sf_mf_293 * intrm_sf_mf_293 * intrm_sf_mf_293 * 2.0 ; if ( t924 <=
2000.0 ) { intrm_sf_mf_293 = 3.66 ; } else if ( t924 >= 4000.0 ) {
intrm_sf_mf_293 = t928 ; } else { intrm_sf_mf_293 = ( 1.0 - t930 ) * 3.66 +
t928 * t930 ; } t1007 = intrm_sf_mf_293 * 0.031415926535897927 ;
intrm_sf_mf_52 = t999 / 2.0 ; if ( t924 > t1007 / 7.8539816339744827E-5 / (
intrm_sf_mf_52 == 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) / 30.0 ) { t1016 = ( t921
+ t833 ) / 2.0 ; t928 = intrm_sf_mf_293 * 0.031415926535897927 / ( t924 ==
0.0 ? 1.0E-16 : t924 ) / 7.8539816339744827E-5 / ( t1016 == 0.0 ? 1.0E-16 :
t1016 ) ; } else { t928 = 30.0 ; } if ( X [ 162ULL ] <= 0.0 ) { t921 = 0.0 ;
} else { t921 = X [ 162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; } if ( X [ 161ULL
] <= 0.0 ) { intrm_sf_mf_293 = 0.0 ; } else { intrm_sf_mf_293 = X [ 161ULL ]
>= 1.0 ? 1.0 : X [ 161ULL ] ; } t930 = ( ( ( 1.0 - t921 ) - intrm_sf_mf_293 )
* 296.802103844292 + t921 * 461.523 ) + intrm_sf_mf_293 * 4124.48151675695 ;
t921 = X [ 162ULL ] * 461.523 / ( t930 == 0.0 ? 1.0E-16 : t930 ) ; if ( t921
<= 0.0 ) { intrm_sf_mf_293 = 0.0 ; } else { intrm_sf_mf_293 = t921 >= 1.0 ?
1.0 : t921 ; } t921 = X [ 161ULL ] * 4124.48151675695 / ( t930 == 0.0 ?
1.0E-16 : t930 ) ; if ( t921 <= 0.0 ) { t931 = 0.0 ; } else { t931 = t921 >=
1.0 ? 1.0 : t921 ; } t540 [ 0ULL ] = X [ 159ULL ] ;
tlu2_linear_nearest_prelookup ( & sb_efOut . mField0 [ 0ULL ] , & sb_efOut .
mField1 [ 0ULL ] , & sb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t55
= sb_efOut ; tlu2_1d_linear_nearest_value ( & tb_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = tb_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ub_efOut [ 0ULL ] , & t55 . mField0 [
0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ub_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vb_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = vb_efOut [ 0 ] ; t921 = ( (
( 1.0 - intrm_sf_mf_293 ) - t931 ) * t537_idx_0 + t542_idx_0 *
intrm_sf_mf_293 ) + t539_idx_0 * t931 ; t932 = intrm_sf_mf_528 <= 0.0 ?
intrm_sf_mf_528 : 0.0 ; tlu2_1d_linear_nearest_value ( & wb_efOut [ 0ULL ] ,
& t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 =
wb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xb_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = xb_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & yb_efOut [ 0ULL ] , & t55 . mField0 [
0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = yb_efOut [ 0 ] ;
intrm_sf_mf_528 = ( ( ( 1.0 - intrm_sf_mf_293 ) - t931 ) * t537_idx_0 +
t542_idx_0 * intrm_sf_mf_293 ) + t539_idx_0 * t931 ; t1019 = t905 +
intrm_sf_mf_528 ; t1021 = t1019 / 2.0 * 7.8539816339744827E-5 ;
intrm_sf_mf_293 = - t932 * 0.01 / ( t1021 == 0.0 ? 1.0E-16 : t1021 ) ; t931 =
intrm_sf_mf_293 >= 0.0 ? intrm_sf_mf_293 : - intrm_sf_mf_293 ;
intrm_sf_mf_293 = t931 > 1000.0 ? t931 : 1000.0 ; t1022 = pmf_log10 ( 6.9 / (
intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 )
+ 0.00017169489553429715 ) * 3.24 ; t932 = 1.0 / ( t1022 == 0.0 ? 1.0E-16 :
t1022 ) ; t1023 = t833 + t921 ; if ( ( pmf_pow ( t1023 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t932 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t1027 = ( pmf_pow ( ( t833 + t921 ) / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t932 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_299 = (
intrm_sf_mf_293 - 1000.0 ) * ( t932 / 8.0 ) * ( ( t833 + t921 ) / 2.0 ) / (
t1027 == 0.0 ? 1.0E-16 : t1027 ) ; } else { intrm_sf_mf_299 = (
intrm_sf_mf_293 - 1000.0 ) * ( t932 / 8.0 ) * ( ( t833 + t921 ) / 2.0 ) /
1.0E-6 ; } t935 = ( t931 - 2000.0 ) / 2000.0 ; t936 = t935 * t935 * 3.0 -
t935 * t935 * t935 * 2.0 ; if ( t931 <= 2000.0 ) { t935 = 3.66 ; } else if (
t931 >= 4000.0 ) { t935 = intrm_sf_mf_299 ; } else { t935 = ( 1.0 - t936 ) *
3.66 + intrm_sf_mf_299 * t936 ; } t1031 = t935 * 0.031415926535897927 ;
intrm_sf_mf_52 = t1023 / 2.0 ; if ( t931 > t1031 / 7.8539816339744827E-5 / (
intrm_sf_mf_52 == 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) / 30.0 ) { t1040 = ( t833
+ t921 ) / 2.0 ; intrm_sf_mf_299 = t935 * 0.031415926535897927 / ( t931 ==
0.0 ? 1.0E-16 : t931 ) / 7.8539816339744827E-5 / ( t1040 == 0.0 ? 1.0E-16 :
t1040 ) ; } else { intrm_sf_mf_299 = 30.0 ; } t935 = ( X [ 179ULL ] * -
0.7999998 + U_idx_2 * 7.9999980000000006 ) + 9.9999999947364415E-9 ; if (
t935 * 7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { t936 =
7.8539816339744857E-13 ; } else if ( t935 * 7.8539816339744827E-5 >=
3.1415926535897929E-6 ) { t936 = 3.1415926535897929E-6 ; } else { t936 = t935
* 7.8539816339744827E-5 ; } t935 = t936 / 7.8539816339744827E-5 ; if ( X [
202ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 = X [
202ULL ] >= 1.0 ? 1.0 : X [ 202ULL ] ; } if ( X [ 203ULL ] <= 0.0 ) {
intrm_sf_mf_450 = 0.0 ; } else { intrm_sf_mf_450 = X [ 203ULL ] >= 1.0 ? 1.0
: X [ 203ULL ] ; } t942 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ) -
intrm_sf_mf_450 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 * 461.523 ) +
intrm_sf_mf_450 * 4124.48151675695 ; t1042 = X [ 200ULL ] * t942 ; t943 = X [
201ULL ] / ( t1042 == 0.0 ? 1.0E-16 : t1042 ) ; intrm_sf_mf_52 = X [ 201ULL ]
/ ( X [ 24ULL ] == 0.0 ? 1.0E-16 : X [ 24ULL ] ) * ( X [ 204ULL ] / ( X [
200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; intrm_sf_mf_369 = X [ 201ULL ]
/ ( X [ 179ULL ] == 0.0 ? 1.0E-16 : X [ 179ULL ] ) * ( X [ 205ULL ] / ( X [
200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] ) ) ; t949 = ( X [ 24ULL ] + X [
179ULL ] ) / 2.0 * 0.0010000000000000009 ; t948 = ( 1.0 - t935 ) * ( 1.0 -
t935 ) ; t950 = t949 * t948 ; t951 = ( t935 + 1.0 ) * ( 1.0 - t935 *
intrm_sf_mf_52 ) - ( 1.0 - t935 * intrm_sf_mf_369 ) * t935 * 2.0 ; t952 = ( X
[ 24ULL ] - X [ 179ULL ] ) * ( t951 >= t948 ? t951 : t948 ) ; t951 = ( X [
24ULL ] - X [ 179ULL ] ) / ( t949 == 0.0 ? 1.0E-16 : t949 ) ; t954 = t951 *
t951 * 3.0 - t951 * t951 * t951 * 2.0 ; if ( X [ 24ULL ] - X [ 179ULL ] <=
0.0 ) { t951 = t950 ; } else if ( X [ 24ULL ] - X [ 179ULL ] >= t949 ) { t951
= t952 ; } else { t951 = ( 1.0 - t954 ) * t950 + t952 * t954 ; } t952 = (
t935 + 1.0 ) * ( 1.0 - t935 * intrm_sf_mf_369 ) - ( 1.0 - t935 *
intrm_sf_mf_52 ) * t935 * 2.0 ; t935 = ( X [ 179ULL ] - X [ 24ULL ] ) * (
t952 >= t948 ? t952 : t948 ) ; intrm_sf_mf_52 = ( X [ 179ULL ] - X [ 24ULL ]
) / ( t949 == 0.0 ? 1.0E-16 : t949 ) ; intrm_sf_mf_369 = intrm_sf_mf_52 *
intrm_sf_mf_52 * 3.0 - intrm_sf_mf_52 * intrm_sf_mf_52 * intrm_sf_mf_52 * 2.0
; if ( X [ 179ULL ] - X [ 24ULL ] <= 0.0 ) { intrm_sf_mf_52 = t950 ; } else
if ( X [ 179ULL ] - X [ 24ULL ] >= t949 ) { intrm_sf_mf_52 = t935 ; } else {
intrm_sf_mf_52 = ( 1.0 - intrm_sf_mf_369 ) * t950 + t935 * intrm_sf_mf_369 ;
} if ( X [ 24ULL ] > X [ 179ULL ] ) { t935 = t951 ; } else { t935 = X [ 24ULL
] < X [ 179ULL ] ? intrm_sf_mf_52 : t950 ; } if ( X [ 200ULL ] <=
216.59999999999997 ) { intrm_sf_mf_52 = 216.59999999999997 ; } else {
intrm_sf_mf_52 = X [ 200ULL ] >= 623.15 ? 623.15 : X [ 200ULL ] ; } t833 =
intrm_sf_mf_52 * intrm_sf_mf_52 ; intrm_sf_mf_369 = ( ( ( 1074.1165326382641
+ intrm_sf_mf_52 * - 0.2214565261064495 ) + t833 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ) -
intrm_sf_mf_450 ) + ( ( 1479.6504774711011 + intrm_sf_mf_52 *
1.2002114337048222 ) + t833 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 ) + ( (
12825.281119789837 + intrm_sf_mf_52 * 6.9647057412840034 ) + t833 * -
0.0070524868246844051 ) * intrm_sf_mf_450 ; intrm_sf_mf_816 = intrm_sf_mf_369
- t942 ; t1055 = X [ 201ULL ] * X [ 201ULL ] * ( intrm_sf_mf_369 / (
intrm_sf_mf_816 == 0.0 ? 1.0E-16 : intrm_sf_mf_816 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 = pmf_sqrt (
fabs ( t1055 / ( t942 == 0.0 ? 1.0E-16 : t942 ) / ( X [ 200ULL ] == 0.0 ?
1.0E-16 : X [ 200ULL ] ) ) ) * t936 * 0.64 ; if ( X [ 218ULL ] <= 0.0 ) {
intrm_sf_mf_450 = 0.0 ; } else { intrm_sf_mf_450 = X [ 218ULL ] >= 1.0 ? 1.0
: X [ 218ULL ] ; } if ( X [ 219ULL ] <= 0.0 ) { t948 = 0.0 ; } else { t948 =
X [ 219ULL ] >= 1.0 ? 1.0 : X [ 219ULL ] ; } t950 = ( ( ( 1.0 -
intrm_sf_mf_450 ) - t948 ) * 296.802103844292 + intrm_sf_mf_450 * 461.523 ) +
t948 * 259.836612622973 ; if ( X [ 34ULL ] <= 0.0 ) { intrm_sf_mf_450 = 0.0 ;
} else { intrm_sf_mf_450 = X [ 34ULL ] >= 1.0 ? 1.0 : X [ 34ULL ] ; } if ( X
[ 33ULL ] <= 0.0 ) { t948 = 0.0 ; } else { t948 = X [ 33ULL ] >= 1.0 ? 1.0 :
X [ 33ULL ] ; } t951 = ( ( ( 1.0 - intrm_sf_mf_450 ) - t948 ) *
296.802103844292 + intrm_sf_mf_450 * 461.523 ) + t948 * 259.836612622973 ; if
( 1.0 - X [ 34ULL ] >= 0.01 ) { intrm_sf_mf_450 = 1.0 - X [ 34ULL ] ; } else
if ( 1.0 - X [ 34ULL ] >= - 0.1 ) { intrm_sf_mf_450 = pmf_exp ( ( ( 1.0 - X [
34ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { intrm_sf_mf_450 =
1.6701700790245661E-7 ; } t948 = X [ 33ULL ] / ( intrm_sf_mf_450 == 0.0 ?
1.0E-16 : intrm_sf_mf_450 ) * - 36.965491221318985 + 296.802103844292 ; t540
[ 0ULL ] = X [ 32ULL ] ; tlu2_linear_linear_prelookup ( & ac_efOut . mField0
[ 0ULL ] , & ac_efOut . mField1 [ 0ULL ] , & ac_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ]
, & t64 [ 0ULL ] ) ; t49 = ac_efOut ; tlu2_1d_linear_linear_value ( &
bc_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t430 [ 0 ] = bc_efOut [ 0 ] ; t952 = pmf_exp ( pmf_log ( X [ 31ULL ] *
100000.0 ) - t430 [ 0ULL ] ) ; if ( t952 >= 1.0 ) { t1060 = ( t952 - 1.0 ) *
461.523 + t948 ; t954 = t948 / ( t1060 == 0.0 ? 1.0E-16 : t1060 ) ; } else {
t954 = 1.0 ; } if ( X [ 223ULL ] <= 0.0 ) { t833 = 0.0 ; } else { t833 = X [
223ULL ] >= 1.0 ? 1.0 : X [ 223ULL ] ; } if ( X [ 222ULL ] <= 0.0 ) { t958 =
0.0 ; } else { t958 = X [ 222ULL ] >= 1.0 ? 1.0 : X [ 222ULL ] ; } t960 = ( (
( 1.0 - t833 ) - t958 ) * 296.802103844292 + t833 * 461.523 ) + t958 *
259.836612622973 ; if ( X [ 37ULL ] <= 0.0 ) { t958 = 0.0 ; } else { t958 = X
[ 37ULL ] >= 1.0 ? 1.0 : X [ 37ULL ] ; } if ( X [ 36ULL ] <= 0.0 ) { t963 =
0.0 ; } else { t963 = X [ 36ULL ] >= 1.0 ? 1.0 : X [ 36ULL ] ; } t964 = ( ( (
1.0 - t958 ) - t963 ) * 296.802103844292 + t958 * 461.523 ) + t963 *
4124.48151675695 ; t965 = - ( ( X [ 35ULL ] / ( X [ 38ULL ] == 0.0 ? 1.0E-16
: X [ 38ULL ] ) - X [ 261ULL ] / ( X [ 262ULL ] == 0.0 ? 1.0E-16 : X [ 262ULL
] ) ) * X [ 186ULL ] * t964 ) / 0.0019634954084936209 ; if ( X [ 261ULL ] <=
216.59999999999997 ) { intrm_sf_mf_52 = 216.59999999999997 ; } else {
intrm_sf_mf_52 = X [ 261ULL ] >= 623.15 ? 623.15 : X [ 261ULL ] ; } t968 =
intrm_sf_mf_52 * intrm_sf_mf_52 ; t967 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_52 * - 0.2214565261064495 ) + t968 * 0.00037212980109014541 ) * (
( 1.0 - t958 ) - t963 ) + ( ( 1479.6504774711011 + intrm_sf_mf_52 *
1.2002114337048222 ) + t968 * - 0.00038614513167823636 ) * t958 ) + ( (
12825.281119789837 + intrm_sf_mf_52 * 6.9647057412840034 ) + t968 * -
0.0070524868246844051 ) * t963 ; t1069 = t967 - t964 ; t968 = t967 / ( t1069
== 0.0 ? 1.0E-16 : t1069 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked = pmf_sqrt (
t965 * t965 * 9.999999999999999E-14 + fabs ( X [ 261ULL ] * t968 * t964 ) *
1.0E-9 ) ; if ( X [ 259ULL ] <= 0.0 ) { intrm_sf_mf_660 = 0.0 ; } else {
intrm_sf_mf_660 = X [ 259ULL ] >= 1.0 ? 1.0 : X [ 259ULL ] ; } if ( X [
258ULL ] <= 0.0 ) { t974 = 0.0 ; } else { t974 = X [ 258ULL ] >= 1.0 ? 1.0 :
X [ 258ULL ] ; } t540 [ 0ULL ] = X [ 35ULL ] ; tlu2_linear_nearest_prelookup
( & cc_efOut . mField0 [ 0ULL ] , & cc_efOut . mField1 [ 0ULL ] , & cc_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [
0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t55 = cc_efOut ;
tlu2_1d_linear_nearest_value ( & dc_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = dc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ec_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ec_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fc_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = fc_efOut [ 0 ] ; t975 = ( ( (
1.0 - intrm_sf_mf_660 ) - t974 ) * t537_idx_0 + t542_idx_0 * intrm_sf_mf_660
) + t539_idx_0 * t974 ; t1070 = X [ 262ULL ] * X [ 262ULL ] * t968 ; t976 = -
pmf_sqrt ( fabs ( t1070 / ( t964 == 0.0 ? 1.0E-16 : t964 ) / ( X [ 261ULL ]
== 0.0 ? 1.0E-16 : X [ 261ULL ] ) ) ) * 0.0019634954084936209 ; if ( t976 >=
0.0 ) { t978 = t976 * 100000.0 ; } else { t978 = - t976 * 100000.0 ; } t1074
= t975 * 0.0019634954084936209 ; t833 = t978 * 0.05 / ( t1074 == 0.0 ?
1.0E-16 : t1074 ) ; t1076 = X [ 35ULL ] * t964 ; t982 = X [ 38ULL ] / ( t1076
== 0.0 ? 1.0E-16 : t1076 ) ; t1078 = t982 * 9.8174770424681068E-6 ; t984 =
t976 * t975 * 11.2 / ( t1078 == 0.0 ? 1.0E-16 : t1078 ) ; t985 = t833 >= 1.0
? t833 : 1.0 ; intrm_sf_mf_798 = pmf_log10 ( 6.9 / ( t985 == 0.0 ? 1.0E-16 :
t985 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t985 == 0.0 ? 1.0E-16
: t985 ) + 2.8767404433520813E-5 ) * 3.24 ; t1081 = t982 *
3.855314219175531E-7 ; t978 = t976 * t978 * ( 1.0 / ( intrm_sf_mf_798 == 0.0
? 1.0E-16 : intrm_sf_mf_798 ) ) * 0.175 / ( t1081 == 0.0 ? 1.0E-16 : t1081 )
; t987 = ( t833 - 2000.0 ) / 2000.0 ; intrm_sf_mf_52 = t987 * t987 * 3.0 -
t987 * t987 * t987 * 2.0 ; if ( t833 <= 2000.0 ) { t987 = t984 * 1.0E-5 ; }
else if ( t833 >= 4000.0 ) { t987 = t978 * 1.0E-5 ; } else { t987 = ( ( 1.0 -
intrm_sf_mf_52 ) * t984 + t978 * intrm_sf_mf_52 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked = - ( X [
186ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked ) /
0.0019634954084936209 * 0.00031622776601683789 + t987 ; t978 = ( X [ 35ULL ]
/ ( X [ 38ULL ] == 0.0 ? 1.0E-16 : X [ 38ULL ] ) - X [ 264ULL ] / ( X [
265ULL ] == 0.0 ? 1.0E-16 : X [ 265ULL ] ) ) * X [ 263ULL ] * t964 /
0.0019634954084936209 ; if ( X [ 264ULL ] <= 216.59999999999997 ) { t833 =
216.59999999999997 ; } else { t833 = X [ 264ULL ] >= 623.15 ? 623.15 : X [
264ULL ] ; } t989 = t833 * t833 ; t984 = ( ( ( 1074.1165326382641 + t833 * -
0.2214565261064495 ) + t989 * 0.00037212980109014541 ) * ( ( 1.0 - t958 ) -
t963 ) + ( ( 1479.6504774711011 + t833 * 1.2002114337048222 ) + t989 * -
0.00038614513167823636 ) * t958 ) + ( ( 12825.281119789837 + t833 *
6.9647057412840034 ) + t989 * - 0.0070524868246844051 ) * t963 ; t1089 = t984
- t964 ; t958 = t984 / ( t1089 == 0.0 ? 1.0E-16 : t1089 ) ; t963 = pmf_sqrt (
t978 * t978 * 9.999999999999999E-14 + fabs ( X [ 264ULL ] * t958 * t964 ) *
1.0E-9 ) ; t1090 = X [ 265ULL ] * X [ 265ULL ] * t958 ; t987 = - pmf_sqrt (
fabs ( t1090 / ( t964 == 0.0 ? 1.0E-16 : t964 ) / ( X [ 264ULL ] == 0.0 ?
1.0E-16 : X [ 264ULL ] ) ) ) * 0.0019634954084936209 ; if ( t987 >= 0.0 ) {
intrm_sf_mf_52 = t987 * 100000.0 ; } else { intrm_sf_mf_52 = - t987 *
100000.0 ; } t989 = intrm_sf_mf_52 * 0.05 / ( t1074 == 0.0 ? 1.0E-16 : t1074
) ; t990 = t987 * t975 * 11.2 / ( t1078 == 0.0 ? 1.0E-16 : t1078 ) ; t991 =
t989 >= 1.0 ? t989 : 1.0 ; t1097 = pmf_log10 ( 6.9 / ( t991 == 0.0 ? 1.0E-16
: t991 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t991 == 0.0 ?
1.0E-16 : t991 ) + 2.8767404433520813E-5 ) * 3.24 ; intrm_sf_mf_52 = t987 *
intrm_sf_mf_52 * ( 1.0 / ( t1097 == 0.0 ? 1.0E-16 : t1097 ) ) * 0.175 / (
t1081 == 0.0 ? 1.0E-16 : t1081 ) ; t992 = ( t989 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I = t992 * t992 * 3.0
- t992 * t992 * t992 * 2.0 ; if ( t989 <= 2000.0 ) { t992 = t990 * 1.0E-5 ; }
else if ( t989 >= 4000.0 ) { t992 = intrm_sf_mf_52 * 1.0E-5 ; } else { t992 =
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I ) * t990 +
intrm_sf_mf_52 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I ) *
1.0E-5 ; } t963 = X [ 263ULL ] * t963 / 0.0019634954084936209 *
0.00031622776601683789 + t992 ; if ( 1.0 - X [ 37ULL ] >= 0.01 ) { t989 = 1.0
- X [ 37ULL ] ; } else if ( 1.0 - X [ 37ULL ] >= - 0.1 ) { t989 = pmf_exp ( (
( 1.0 - X [ 37ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t989 =
1.6701700790245661E-7 ; } t990 = X [ 36ULL ] / ( t989 == 0.0 ? 1.0E-16 : t989
) * 3827.6794129126583 + 296.802103844292 ; t540 [ 0ULL ] = X [ 35ULL ] ;
tlu2_linear_linear_prelookup ( & gc_efOut . mField0 [ 0ULL ] , & gc_efOut .
mField1 [ 0ULL ] , & gc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t48
= gc_efOut ; tlu2_1d_linear_linear_value ( & hc_efOut [ 0ULL ] , & t48 .
mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t122 [ 0 ] = hc_efOut [ 0
] ; t992 = pmf_exp ( pmf_log ( X [ 38ULL ] * 100000.0 ) - t122 [ 0ULL ] ) ;
if ( t992 >= 1.0 ) { t1104 = ( t992 - 1.0 ) * 461.523 + t990 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I = t990 / ( t1104 ==
0.0 ? 1.0E-16 : t1104 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I = 1.0 ; }
tlu2_1d_linear_nearest_value ( & ic_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = ic_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jc_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = jc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kc_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = kc_efOut [ 0 ] ; t833 = ( (
( 1.0 - intrm_sf_mf_660 ) - t974 ) * t537_idx_0 + t542_idx_0 *
intrm_sf_mf_660 ) + t539_idx_0 * t974 ; intrm_sf_mf_660 = ( - X [ 186ULL ] -
X [ 263ULL ] ) / 2.0 ; t1106 = intrm_sf_mf_528 + t975 ; t809 = t1106 / 2.0 *
0.0019634954084936209 ; intrm_sf_mf_528 = ( intrm_sf_mf_660 >= 0.0 ?
intrm_sf_mf_660 : 0.0 ) * 0.05 / ( t809 == 0.0 ? 1.0E-16 : t809 ) ; t974 =
intrm_sf_mf_528 >= 0.0 ? intrm_sf_mf_528 : - intrm_sf_mf_528 ;
intrm_sf_mf_528 = t974 > 1000.0 ? t974 : 1000.0 ; t1109 = pmf_log10 ( 6.9 / (
intrm_sf_mf_528 == 0.0 ? 1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_528 == 0.0 ? 1.0E-16 : intrm_sf_mf_528 )
+ 2.8767404433520813E-5 ) * 3.24 ; t996 = 1.0 / ( t1109 == 0.0 ? 1.0E-16 :
t1109 ) ; t1110 = t921 + t833 ; if ( ( pmf_pow ( t1110 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t996 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t1114 = ( pmf_pow ( ( t921 + t833 ) / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t996 / 8.0 ) * 12.7 + 1.0 ; t997 = ( intrm_sf_mf_528 -
1000.0 ) * ( t996 / 8.0 ) * ( ( t921 + t833 ) / 2.0 ) / ( t1114 == 0.0 ?
1.0E-16 : t1114 ) ; } else { t997 = ( intrm_sf_mf_528 - 1000.0 ) * ( t996 /
8.0 ) * ( ( t921 + t833 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_551 = ( t974 -
2000.0 ) / 2000.0 ; t1000 = intrm_sf_mf_551 * intrm_sf_mf_551 * 3.0 -
intrm_sf_mf_551 * intrm_sf_mf_551 * intrm_sf_mf_551 * 2.0 ; if ( t974 <=
2000.0 ) { intrm_sf_mf_551 = 3.66 ; } else if ( t974 >= 4000.0 ) {
intrm_sf_mf_551 = t997 ; } else { intrm_sf_mf_551 = ( 1.0 - t1000 ) * 3.66 +
t997 * t1000 ; } t1118 = intrm_sf_mf_551 * 0.039269908169872414 ; t1121 =
t1110 / 2.0 ; if ( t974 > t1118 / 0.0019634954084936209 / ( t1121 == 0.0 ?
1.0E-16 : t1121 ) / 30.0 ) { t1127 = ( t921 + t833 ) / 2.0 ; t997 =
intrm_sf_mf_551 * 0.039269908169872414 / ( t974 == 0.0 ? 1.0E-16 : t974 ) /
0.0019634954084936209 / ( t1127 == 0.0 ? 1.0E-16 : t1127 ) ; } else { t997 =
30.0 ; } if ( X [ 253ULL ] <= 0.0 ) { t921 = 0.0 ; } else { t921 = X [ 253ULL
] >= 1.0 ? 1.0 : X [ 253ULL ] ; } if ( X [ 252ULL ] <= 0.0 ) {
intrm_sf_mf_551 = 0.0 ; } else { intrm_sf_mf_551 = X [ 252ULL ] >= 1.0 ? 1.0
: X [ 252ULL ] ; } t1000 = ( ( ( 1.0 - t921 ) - intrm_sf_mf_551 ) *
296.802103844292 + t921 * 461.523 ) + intrm_sf_mf_551 * 4124.48151675695 ;
t921 = X [ 253ULL ] * 461.523 / ( t1000 == 0.0 ? 1.0E-16 : t1000 ) ; if (
t921 <= 0.0 ) { intrm_sf_mf_551 = 0.0 ; } else { intrm_sf_mf_551 = t921 >=
1.0 ? 1.0 : t921 ; } t921 = X [ 252ULL ] * 4124.48151675695 / ( t1000 == 0.0
? 1.0E-16 : t1000 ) ; if ( t921 <= 0.0 ) { intrm_sf_mf_550 = 0.0 ; } else {
intrm_sf_mf_550 = t921 >= 1.0 ? 1.0 : t921 ; } t540 [ 0ULL ] = X [ 250ULL ] ;
tlu2_linear_nearest_prelookup ( & lc_efOut . mField0 [ 0ULL ] , & lc_efOut .
mField1 [ 0ULL ] , & lc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t55
= lc_efOut ; tlu2_1d_linear_nearest_value ( & mc_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = mc_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & nc_efOut [ 0ULL ] , & t55 . mField0 [
0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = nc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oc_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = oc_efOut [ 0 ] ; t921 = ( (
( 1.0 - intrm_sf_mf_551 ) - intrm_sf_mf_550 ) * t537_idx_0 + t542_idx_0 *
intrm_sf_mf_551 ) + t539_idx_0 * intrm_sf_mf_550 ; t1002 = intrm_sf_mf_660 <=
0.0 ? intrm_sf_mf_660 : 0.0 ; tlu2_1d_linear_nearest_value ( & pc_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = pc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qc_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = qc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rc_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = rc_efOut [ 0 ] ; intrm_sf_mf_660 = ( ( ( 1.0 - intrm_sf_mf_551
) - intrm_sf_mf_550 ) * t537_idx_0 + t542_idx_0 * intrm_sf_mf_551 ) +
t539_idx_0 * intrm_sf_mf_550 ; t1130 = t975 + intrm_sf_mf_660 ; t1132 = t1130
/ 2.0 * 0.0019634954084936209 ; intrm_sf_mf_551 = - t1002 * 0.05 / ( t1132 ==
0.0 ? 1.0E-16 : t1132 ) ; intrm_sf_mf_550 = intrm_sf_mf_551 >= 0.0 ?
intrm_sf_mf_551 : - intrm_sf_mf_551 ; intrm_sf_mf_551 = intrm_sf_mf_550 >
1000.0 ? intrm_sf_mf_550 : 1000.0 ; t1133 = pmf_log10 ( 6.9 / (
intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) + 2.8767404433520813E-5
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 )
+ 2.8767404433520813E-5 ) * 3.24 ; t1002 = 1.0 / ( t1133 == 0.0 ? 1.0E-16 :
t1133 ) ; t1134 = t833 + t921 ; if ( ( pmf_pow ( t1134 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1002 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t1138 = ( pmf_pow ( ( t833 + t921 ) / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1002 / 8.0 ) * 12.7 + 1.0 ; t1003 = ( intrm_sf_mf_551 -
1000.0 ) * ( t1002 / 8.0 ) * ( ( t833 + t921 ) / 2.0 ) / ( t1138 == 0.0 ?
1.0E-16 : t1138 ) ; } else { t1003 = ( intrm_sf_mf_551 - 1000.0 ) * ( t1002 /
8.0 ) * ( ( t833 + t921 ) / 2.0 ) / 1.0E-6 ; } t1004 = ( intrm_sf_mf_550 -
2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = t1004 *
t1004 * 3.0 - t1004 * t1004 * t1004 * 2.0 ; if ( intrm_sf_mf_550 <= 2000.0 )
{ t1004 = 3.66 ; } else if ( intrm_sf_mf_550 >= 4000.0 ) { t1004 = t1003 ; }
else { t1004 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) * 3.66 +
t1003 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ; }
t1142 = t1004 * 0.039269908169872414 ; t1145 = t1134 / 2.0 ; if (
intrm_sf_mf_550 > t1142 / 0.0019634954084936209 / ( t1145 == 0.0 ? 1.0E-16 :
t1145 ) / 30.0 ) { t833 = ( t833 + t921 ) / 2.0 ; t1003 = t1004 *
0.039269908169872414 / ( intrm_sf_mf_550 == 0.0 ? 1.0E-16 : intrm_sf_mf_550 )
/ 0.0019634954084936209 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else { t1003 =
30.0 ; } if ( X [ 8ULL ] <= 0.0 ) { t1004 = 0.0 ; } else { t1004 = X [ 8ULL ]
>= 1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = X [ 7ULL ]
>= 1.0 ? 1.0 : X [ 7ULL ] ; } t1006 = ( ( ( 1.0 - t1004 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) *
296.802103844292 + t1004 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked *
4124.48151675695 ; t1009 = - ( ( X [ 6ULL ] / ( X [ 39ULL ] == 0.0 ? 1.0E-16
: X [ 39ULL ] ) - X [ 275ULL ] / ( X [ 276ULL ] == 0.0 ? 1.0E-16 : X [ 276ULL
] ) ) * X [ 263ULL ] * t1006 ) / 0.32 ; if ( X [ 275ULL ] <=
216.59999999999997 ) { intrm_sf_mf_52 = 216.59999999999997 ; } else {
intrm_sf_mf_52 = X [ 275ULL ] >= 623.15 ? 623.15 : X [ 275ULL ] ; } t1012 =
intrm_sf_mf_52 * intrm_sf_mf_52 ; t1011 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_52 * - 0.2214565261064495 ) + t1012 * 0.00037212980109014541 ) *
( ( 1.0 - t1004 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774711011 + intrm_sf_mf_52 * 1.2002114337048222 ) + t1012 * -
0.00038614513167823636 ) * t1004 ) + ( ( 12825.281119789837 + intrm_sf_mf_52
* 6.9647057412840034 ) + t1012 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I = t1011 - t1006 ;
t1012 = t1011 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I ==
0.0 ? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I ) ;
t1013 = pmf_sqrt ( t1009 * t1009 * 9.999999999999999E-14 + fabs ( X [ 275ULL
] * t1012 * t1006 ) * 1.0E-9 ) ; if ( X [ 76ULL ] <= 0.0 ) { t1014 = 0.0 ; }
else { t1014 = X [ 76ULL ] >= 1.0 ? 1.0 : X [ 76ULL ] ; } if ( X [ 75ULL ] <=
0.0 ) { t1015 = 0.0 ; } else { t1015 = X [ 75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ]
; } t540 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_nearest_prelookup ( & sc_efOut .
mField0 [ 0ULL ] , & sc_efOut . mField1 [ 0ULL ] , & sc_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t51 = sc_efOut ;
tlu2_1d_linear_nearest_value ( & tc_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = tc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & uc_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = uc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vc_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = vc_efOut [ 0 ] ; t1016 = ( ( (
1.0 - t1014 ) - t1015 ) * t537_idx_0 + t542_idx_0 * t1014 ) + t539_idx_0 *
t1015 ; t1158 = X [ 276ULL ] * X [ 276ULL ] * t1012 ; t1017 = - pmf_sqrt (
fabs ( t1158 / ( t1006 == 0.0 ? 1.0E-16 : t1006 ) / ( X [ 275ULL ] == 0.0 ?
1.0E-16 : X [ 275ULL ] ) ) ) * 0.32 ; if ( t1017 >= 0.0 ) { t1018 = t1017 *
100000.0 ; } else { t1018 = - t1017 * 100000.0 ; } t1162 = t1016 * 0.32 ;
t833 = t1018 * 0.01 / ( t1162 == 0.0 ? 1.0E-16 : t1162 ) ; t1164 = X [ 6ULL ]
* t1006 ; t1021 = X [ 39ULL ] / ( t1164 == 0.0 ? 1.0E-16 : t1164 ) ; U_idx_1
= t1021 * 6.4000000000000011E-5 ; t1022 = t1017 * t1016 * 2.9973120849090416
/ ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; t1024 = t833 >= 1.0 ? t833 : 1.0 ;
t1167 = pmf_log10 ( 6.9 / ( t1024 == 0.0 ? 1.0E-16 : t1024 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1024 == 0.0 ? 1.0E-16 : t1024
) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_1151 = t1021 *
0.0020480000000000003 ; t1018 = t1017 * t1018 * ( 1.0 / ( t1167 == 0.0 ?
1.0E-16 : t1167 ) ) * 0.046833001326703774 / ( intrm_sf_mf_1151 == 0.0 ?
1.0E-16 : intrm_sf_mf_1151 ) ; t1025 = ( t833 - 2000.0 ) / 2000.0 ;
intrm_sf_mf_52 = t1025 * t1025 * 3.0 - t1025 * t1025 * t1025 * 2.0 ; if (
t833 <= 2000.0 ) { t1025 = t1022 * 1.0E-5 ; } else if ( t833 >= 4000.0 ) {
t1025 = t1018 * 1.0E-5 ; } else { t1025 = ( ( 1.0 - intrm_sf_mf_52 ) * t1022
+ t1018 * intrm_sf_mf_52 ) * 1.0E-5 ; } t1013 = - ( X [ 263ULL ] * t1013 ) /
0.32 * 0.00031622776601683789 + t1025 ; t1018 = ( X [ 6ULL ] / ( X [ 39ULL ]
== 0.0 ? 1.0E-16 : X [ 39ULL ] ) - X [ 278ULL ] / ( X [ 279ULL ] == 0.0 ?
1.0E-16 : X [ 279ULL ] ) ) * X [ 277ULL ] * t1006 / 0.32 ; if ( X [ 278ULL ]
<= 216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [
278ULL ] >= 623.15 ? 623.15 : X [ 278ULL ] ; } t1027 = t833 * t833 ; t1022 =
( ( ( 1074.1165326382641 + t833 * - 0.2214565261064495 ) + t1027 *
0.00037212980109014541 ) * ( ( 1.0 - t1004 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t1027 * -
0.00038614513167823636 ) * t1004 ) + ( ( 12825.281119789837 + t833 *
6.9647057412840034 ) + t1027 * - 0.0070524868246844051 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked ; t1177 =
t1022 - t1006 ; t1004 = t1022 / ( t1177 == 0.0 ? 1.0E-16 : t1177 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = pmf_sqrt (
t1018 * t1018 * 9.999999999999999E-14 + fabs ( X [ 278ULL ] * t1004 * t1006 )
* 1.0E-9 ) ; t1178 = X [ 279ULL ] * X [ 279ULL ] * t1004 ; t1025 = - pmf_sqrt
( fabs ( t1178 / ( t1006 == 0.0 ? 1.0E-16 : t1006 ) / ( X [ 278ULL ] == 0.0 ?
1.0E-16 : X [ 278ULL ] ) ) ) * 0.32 ; if ( t1025 >= 0.0 ) { intrm_sf_mf_52 =
t1025 * 100000.0 ; } else { intrm_sf_mf_52 = - t1025 * 100000.0 ; } t1027 =
intrm_sf_mf_52 * 0.01 / ( t1162 == 0.0 ? 1.0E-16 : t1162 ) ; t1028 = t1025 *
t1016 * 2.9973120849090416 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; t1029 =
t1027 >= 1.0 ? t1027 : 1.0 ; t1185 = pmf_log10 ( 6.9 / ( t1029 == 0.0 ?
1.0E-16 : t1029 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1029 ==
0.0 ? 1.0E-16 : t1029 ) + 0.00017169489553429715 ) * 3.24 ; intrm_sf_mf_52 =
t1025 * intrm_sf_mf_52 * ( 1.0 / ( t1185 == 0.0 ? 1.0E-16 : t1185 ) ) *
0.046833001326703774 / ( intrm_sf_mf_1151 == 0.0 ? 1.0E-16 : intrm_sf_mf_1151
) ; t1030 = ( t1027 - 2000.0 ) / 2000.0 ; t1033 = t1030 * t1030 * 3.0 - t1030
* t1030 * t1030 * 2.0 ; if ( t1027 <= 2000.0 ) { t1030 = t1028 * 1.0E-5 ; }
else if ( t1027 >= 4000.0 ) { t1030 = intrm_sf_mf_52 * 1.0E-5 ; } else {
t1030 = ( ( 1.0 - t1033 ) * t1028 + intrm_sf_mf_52 * t1033 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked = X [ 277ULL ]
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked / 0.32 *
0.00031622776601683789 + t1030 ; if ( 1.0 - X [ 8ULL ] >= 0.01 ) { t1027 =
1.0 - X [ 8ULL ] ; } else if ( 1.0 - X [ 8ULL ] >= - 0.1 ) { t1027 = pmf_exp
( ( ( 1.0 - X [ 8ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1027 =
1.6701700790245661E-7 ; } t1028 = X [ 7ULL ] / ( t1027 == 0.0 ? 1.0E-16 :
t1027 ) * 3827.6794129126583 + 296.802103844292 ; t540 [ 0ULL ] = X [ 6ULL ]
; tlu2_linear_linear_prelookup ( & wc_efOut . mField0 [ 0ULL ] , & wc_efOut .
mField1 [ 0ULL ] , & wc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t49
= wc_efOut ; tlu2_1d_linear_linear_value ( & xc_efOut [ 0ULL ] , & t49 .
mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t425 [ 0 ] = xc_efOut [ 0
] ; t1030 = pmf_exp ( pmf_log ( X [ 39ULL ] * 100000.0 ) - t425 [ 0ULL ] ) ;
if ( t1030 >= 1.0 ) { t1192 = ( t1030 - 1.0 ) * 461.523 + t1028 ; t1033 =
t1028 / ( t1192 == 0.0 ? 1.0E-16 : t1192 ) ; } else { t1033 = 1.0 ; }
tlu2_1d_linear_nearest_value ( & yc_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = yc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ad_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ad_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bd_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = bd_efOut [ 0 ] ;
intrm_sf_mf_52 = ( ( ( 1.0 - t1014 ) - t1015 ) * t537_idx_0 + t542_idx_0 *
t1014 ) + t539_idx_0 * t1015 ; t1014 = ( - X [ 263ULL ] - X [ 277ULL ] ) /
2.0 ; t1194 = intrm_sf_mf_660 + t1016 ; t1196 = t1194 / 2.0 * 0.32 ;
intrm_sf_mf_660 = ( t1014 >= 0.0 ? t1014 : 0.0 ) * 0.01 / ( t1196 == 0.0 ?
1.0E-16 : t1196 ) ; t1015 = intrm_sf_mf_660 >= 0.0 ? intrm_sf_mf_660 : -
intrm_sf_mf_660 ; intrm_sf_mf_660 = t1015 > 1000.0 ? t1015 : 1000.0 ; t1197 =
pmf_log10 ( 6.9 / ( intrm_sf_mf_660 == 0.0 ? 1.0E-16 : intrm_sf_mf_660 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_660 == 0.0 ?
1.0E-16 : intrm_sf_mf_660 ) + 0.00017169489553429715 ) * 3.24 ; t1035 = 1.0 /
( t1197 == 0.0 ? 1.0E-16 : t1197 ) ; t1198 = t921 + intrm_sf_mf_52 ; if ( (
pmf_pow ( t1198 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1035 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1202 = ( pmf_pow ( ( t921 + intrm_sf_mf_52
) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1035 / 8.0 ) * 12.7 +
1.0 ; t1036 = ( intrm_sf_mf_660 - 1000.0 ) * ( t1035 / 8.0 ) * ( ( t921 +
intrm_sf_mf_52 ) / 2.0 ) / ( t1202 == 0.0 ? 1.0E-16 : t1202 ) ; } else {
t1036 = ( intrm_sf_mf_660 - 1000.0 ) * ( t1035 / 8.0 ) * ( ( t921 +
intrm_sf_mf_52 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_681 = ( t1015 - 2000.0 ) /
2000.0 ; t1038 = intrm_sf_mf_681 * intrm_sf_mf_681 * 3.0 - intrm_sf_mf_681 *
intrm_sf_mf_681 * intrm_sf_mf_681 * 2.0 ; if ( t1015 <= 2000.0 ) {
intrm_sf_mf_681 = 3.66 ; } else if ( t1015 >= 4000.0 ) { intrm_sf_mf_681 =
t1036 ; } else { intrm_sf_mf_681 = ( 1.0 - t1038 ) * 3.66 + t1036 * t1038 ; }
t1206 = intrm_sf_mf_681 * 10.709248339636167 ; t1209 = t1198 / 2.0 ; if (
t1015 > t1206 / 0.32 / ( t1209 == 0.0 ? 1.0E-16 : t1209 ) / 30.0 ) { t1215 =
( t921 + intrm_sf_mf_52 ) / 2.0 ; t1036 = intrm_sf_mf_681 *
10.709248339636167 / ( t1015 == 0.0 ? 1.0E-16 : t1015 ) / 0.32 / ( t1215 ==
0.0 ? 1.0E-16 : t1215 ) ; } else { t1036 = 30.0 ; } if ( X [ 67ULL ] <= 0.0 )
{ t921 = 0.0 ; } else { t921 = X [ 67ULL ] >= 1.0 ? 1.0 : X [ 67ULL ] ; } if
( X [ 66ULL ] <= 0.0 ) { intrm_sf_mf_681 = 0.0 ; } else { intrm_sf_mf_681 = X
[ 66ULL ] >= 1.0 ? 1.0 : X [ 66ULL ] ; } t1038 = ( ( ( 1.0 - t921 ) -
intrm_sf_mf_681 ) * 296.802103844292 + t921 * 461.523 ) + intrm_sf_mf_681 *
4124.48151675695 ; t921 = X [ 67ULL ] * 461.523 / ( t1038 == 0.0 ? 1.0E-16 :
t1038 ) ; if ( t921 <= 0.0 ) { intrm_sf_mf_681 = 0.0 ; } else {
intrm_sf_mf_681 = t921 >= 1.0 ? 1.0 : t921 ; } t921 = X [ 66ULL ] *
4124.48151675695 / ( t1038 == 0.0 ? 1.0E-16 : t1038 ) ; if ( t921 <= 0.0 ) {
t1039 = 0.0 ; } else { t1039 = t921 >= 1.0 ? 1.0 : t921 ; } t540 [ 0ULL ] = X
[ 64ULL ] ; tlu2_linear_nearest_prelookup ( & cd_efOut . mField0 [ 0ULL ] , &
cd_efOut . mField1 [ 0ULL ] , & cd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t55 = cd_efOut ; tlu2_1d_linear_nearest_value ( & dd_efOut
[ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = dd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ed_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = ed_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & fd_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = fd_efOut [ 0 ] ; t921 = ( ( ( 1.0 - intrm_sf_mf_681 ) - t1039
) * t537_idx_0 + t542_idx_0 * intrm_sf_mf_681 ) + t539_idx_0 * t1039 ; t1040
= t1014 <= 0.0 ? t1014 : 0.0 ; tlu2_1d_linear_nearest_value ( & gd_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = gd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hd_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = hd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & id_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = id_efOut [ 0 ] ; t1014 = ( ( ( 1.0 - intrm_sf_mf_681 ) - t1039
) * t537_idx_0 + t542_idx_0 * intrm_sf_mf_681 ) + t539_idx_0 * t1039 ; t1218
= t1016 + t1014 ; t1220 = t1218 / 2.0 * 0.32 ; intrm_sf_mf_681 = - t1040 *
0.01 / ( t1220 == 0.0 ? 1.0E-16 : t1220 ) ; t1039 = intrm_sf_mf_681 >= 0.0 ?
intrm_sf_mf_681 : - intrm_sf_mf_681 ; intrm_sf_mf_681 = t1039 > 1000.0 ?
t1039 : 1000.0 ; t1221 = pmf_log10 ( 6.9 / ( intrm_sf_mf_681 == 0.0 ? 1.0E-16
: intrm_sf_mf_681 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_681 == 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) + 0.00017169489553429715
) * 3.24 ; t1040 = 1.0 / ( t1221 == 0.0 ? 1.0E-16 : t1221 ) ; t1222 =
intrm_sf_mf_52 + t921 ; if ( ( pmf_pow ( t1222 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1040 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1226 = (
pmf_pow ( ( intrm_sf_mf_52 + t921 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1040 / 8.0 ) * 12.7 + 1.0 ; t1041 = ( intrm_sf_mf_681 - 1000.0 )
* ( t1040 / 8.0 ) * ( ( intrm_sf_mf_52 + t921 ) / 2.0 ) / ( t1226 == 0.0 ?
1.0E-16 : t1226 ) ; } else { t1041 = ( intrm_sf_mf_681 - 1000.0 ) * ( t1040 /
8.0 ) * ( ( intrm_sf_mf_52 + t921 ) / 2.0 ) / 1.0E-6 ; } t1042 = ( t1039 -
2000.0 ) / 2000.0 ; t1044 = t1042 * t1042 * 3.0 - t1042 * t1042 * t1042 * 2.0
; if ( t1039 <= 2000.0 ) { t1042 = 3.66 ; } else if ( t1039 >= 4000.0 ) {
t1042 = t1041 ; } else { t1042 = ( 1.0 - t1044 ) * 3.66 + t1041 * t1044 ; }
t1230 = t1042 * 10.709248339636167 ; t833 = t1222 / 2.0 ; if ( t1039 > t1230
/ 0.32 / ( t833 == 0.0 ? 1.0E-16 : t833 ) / 30.0 ) { t1239 = ( intrm_sf_mf_52
+ t921 ) / 2.0 ; t1041 = t1042 * 10.709248339636167 / ( t1039 == 0.0 ?
1.0E-16 : t1039 ) / 0.32 / ( t1239 == 0.0 ? 1.0E-16 : t1239 ) ; } else {
t1041 = 30.0 ; } if ( X [ 11ULL ] <= 0.0 ) { t1042 = 0.0 ; } else { t1042 = X
[ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if ( X [ 10ULL ] <= 0.0 ) { t1044 =
0.0 ; } else { t1044 = X [ 10ULL ] >= 1.0 ? 1.0 : X [ 10ULL ] ; } t1045 = ( (
( 1.0 - t1042 ) - t1044 ) * 296.802103844292 + t1042 * 461.523 ) + t1044 *
4124.48151675695 ; t1048 = - ( ( X [ 9ULL ] / ( X [ 40ULL ] == 0.0 ? 1.0E-16
: X [ 40ULL ] ) - X [ 289ULL ] / ( X [ 290ULL ] == 0.0 ? 1.0E-16 : X [ 290ULL
] ) ) * X [ 277ULL ] * t1045 ) / 0.32 ; if ( X [ 289ULL ] <=
216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [ 289ULL
] >= 623.15 ? 623.15 : X [ 289ULL ] ; } t1052 = t833 * t833 ; t1051 = ( ( (
1074.1165326382641 + t833 * - 0.2214565261064495 ) + t1052 *
0.00037212980109014541 ) * ( ( 1.0 - t1042 ) - t1044 ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t1052 * -
0.00038614513167823636 ) * t1042 ) + ( ( 12825.281119789837 + t833 *
6.9647057412840034 ) + t1052 * - 0.0070524868246844051 ) * t1044 ; t1245 =
t1051 - t1045 ; t1052 = t1051 / ( t1245 == 0.0 ? 1.0E-16 : t1245 ) ; t1053 =
pmf_sqrt ( t1048 * t1048 * 9.999999999999999E-14 + fabs ( X [ 289ULL ] *
t1052 * t1045 ) * 1.0E-9 ) ; if ( X [ 81ULL ] <= 0.0 ) { intrm_sf_mf_816 =
0.0 ; } else { intrm_sf_mf_816 = X [ 81ULL ] >= 1.0 ? 1.0 : X [ 81ULL ] ; }
if ( X [ 80ULL ] <= 0.0 ) { t1056 = 0.0 ; } else { t1056 = X [ 80ULL ] >= 1.0
? 1.0 : X [ 80ULL ] ; } t540 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_nearest_prelookup ( & jd_efOut . mField0 [ 0ULL ] , & jd_efOut .
mField1 [ 0ULL ] , & jd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t55
= jd_efOut ; tlu2_1d_linear_nearest_value ( & kd_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = kd_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ld_efOut [ 0ULL ] , & t55 . mField0 [
0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ld_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & md_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = md_efOut [ 0 ] ; t1058 = ( ( (
1.0 - intrm_sf_mf_816 ) - t1056 ) * t537_idx_0 + t542_idx_0 * intrm_sf_mf_816
) + t539_idx_0 * t1056 ; t1246 = X [ 290ULL ] * X [ 290ULL ] * t1052 ; t1059
= - pmf_sqrt ( fabs ( t1246 / ( t1045 == 0.0 ? 1.0E-16 : t1045 ) / ( X [
289ULL ] == 0.0 ? 1.0E-16 : X [ 289ULL ] ) ) ) * 0.32 ; if ( t1059 >= 0.0 ) {
t1060 = t1059 * 100000.0 ; } else { t1060 = - t1059 * 100000.0 ; } t1250 =
t1058 * 0.32 ; t833 = t1060 * 0.01 / ( t1250 == 0.0 ? 1.0E-16 : t1250 ) ;
U_idx_1 = X [ 9ULL ] * t1045 ; t1062 = X [ 40ULL ] / ( U_idx_1 == 0.0 ?
1.0E-16 : U_idx_1 ) ; t1254 = t1062 * 6.4000000000000011E-5 ; t1063 = t1059 *
t1058 * 2.9973120849090416 / ( t1254 == 0.0 ? 1.0E-16 : t1254 ) ; t1064 =
t833 >= 1.0 ? t833 : 1.0 ; t1255 = pmf_log10 ( 6.9 / ( t1064 == 0.0 ? 1.0E-16
: t1064 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1064 == 0.0 ?
1.0E-16 : t1064 ) + 0.00017169489553429715 ) * 3.24 ; U_idx_1 = t1062 *
0.0020480000000000003 ; t1060 = t1059 * t1060 * ( 1.0 / ( t1255 == 0.0 ?
1.0E-16 : t1255 ) ) * 0.046833001326703774 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; t1065 = ( t833 - 2000.0 ) / 2000.0 ; intrm_sf_mf_52 = t1065 *
t1065 * 3.0 - t1065 * t1065 * t1065 * 2.0 ; if ( t833 <= 2000.0 ) { t1065 =
t1063 * 1.0E-5 ; } else if ( t833 >= 4000.0 ) { t1065 = t1060 * 1.0E-5 ; }
else { t1065 = ( ( 1.0 - intrm_sf_mf_52 ) * t1063 + t1060 * intrm_sf_mf_52 )
* 1.0E-5 ; } t1053 = - ( X [ 277ULL ] * t1053 ) / 0.32 *
0.00031622776601683789 + t1065 ; t1060 = - ( ( X [ 9ULL ] / ( X [ 40ULL ] ==
0.0 ? 1.0E-16 : X [ 40ULL ] ) - X [ 291ULL ] / ( X [ 292ULL ] == 0.0 ?
1.0E-16 : X [ 292ULL ] ) ) * X [ 134ULL ] * t1045 ) / 0.32 ; if ( X [ 291ULL
] <= 216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [
291ULL ] >= 623.15 ? 623.15 : X [ 291ULL ] ; } t1068 = t833 * t833 ; t1063 =
( ( ( 1074.1165326382641 + t833 * - 0.2214565261064495 ) + t1068 *
0.00037212980109014541 ) * ( ( 1.0 - t1042 ) - t1044 ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t1068 * -
0.00038614513167823636 ) * t1042 ) + ( ( 12825.281119789837 + t833 *
6.9647057412840034 ) + t1068 * - 0.0070524868246844051 ) * t1044 ; t833 =
t1063 - t1045 ; t1042 = t1063 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; t1044 =
pmf_sqrt ( t1060 * t1060 * 9.999999999999999E-14 + fabs ( X [ 291ULL ] *
t1042 * t1045 ) * 1.0E-9 ) ; t1266 = X [ 292ULL ] * X [ 292ULL ] * t1042 ;
t1065 = - pmf_sqrt ( fabs ( t1266 / ( t1045 == 0.0 ? 1.0E-16 : t1045 ) / ( X
[ 291ULL ] == 0.0 ? 1.0E-16 : X [ 291ULL ] ) ) ) * 0.32 ; if ( t1065 >= 0.0 )
{ intrm_sf_mf_52 = t1065 * 100000.0 ; } else { intrm_sf_mf_52 = - t1065 *
100000.0 ; } t1068 = intrm_sf_mf_52 * 0.01 / ( t1250 == 0.0 ? 1.0E-16 : t1250
) ; t1069 = t1065 * t1058 * 2.9973120849090416 / ( t1254 == 0.0 ? 1.0E-16 :
t1254 ) ; t1071 = t1068 >= 1.0 ? t1068 : 1.0 ; t1273 = pmf_log10 ( 6.9 / (
t1071 == 0.0 ? 1.0E-16 : t1071 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t1071 == 0.0 ? 1.0E-16 : t1071 ) + 0.00017169489553429715 ) * 3.24 ;
intrm_sf_mf_52 = t1065 * intrm_sf_mf_52 * ( 1.0 / ( t1273 == 0.0 ? 1.0E-16 :
t1273 ) ) * 0.046833001326703774 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ;
t1073 = ( t1068 - 2000.0 ) / 2000.0 ; t1076 = t1073 * t1073 * 3.0 - t1073 *
t1073 * t1073 * 2.0 ; if ( t1068 <= 2000.0 ) { t1073 = t1069 * 1.0E-5 ; }
else if ( t1068 >= 4000.0 ) { t1073 = intrm_sf_mf_52 * 1.0E-5 ; } else {
t1073 = ( ( 1.0 - t1076 ) * t1069 + intrm_sf_mf_52 * t1076 ) * 1.0E-5 ; }
t1044 = - ( X [ 134ULL ] * t1044 ) / 0.32 * 0.00031622776601683789 + t1073 ;
if ( 1.0 - X [ 11ULL ] >= 0.01 ) { t1068 = 1.0 - X [ 11ULL ] ; } else if (
1.0 - X [ 11ULL ] >= - 0.1 ) { t1068 = pmf_exp ( ( ( 1.0 - X [ 11ULL ] ) -
0.01 ) / 0.01 ) * 0.01 ; } else { t1068 = 1.6701700790245661E-7 ; } t1069 = X
[ 10ULL ] / ( t1068 == 0.0 ? 1.0E-16 : t1068 ) * 3827.6794129126583 +
296.802103844292 ; t540 [ 0ULL ] = X [ 9ULL ] ; tlu2_linear_linear_prelookup
( & nd_efOut . mField0 [ 0ULL ] , & nd_efOut . mField1 [ 0ULL ] , & nd_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [
0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t49 = nd_efOut ;
tlu2_1d_linear_linear_value ( & od_efOut [ 0ULL ] , & t49 . mField0 [ 0ULL ]
, & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t424 [ 0 ] = od_efOut [ 0 ] ; t1073 =
pmf_exp ( pmf_log ( X [ 40ULL ] * 100000.0 ) - t424 [ 0ULL ] ) ; if ( t1073
>= 1.0 ) { t833 = ( t1073 - 1.0 ) * 461.523 + t1069 ; t1076 = t1069 / ( t833
== 0.0 ? 1.0E-16 : t833 ) ; } else { t1076 = 1.0 ; }
tlu2_1d_linear_nearest_value ( & pd_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = pd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qd_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = qd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & rd_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = rd_efOut [ 0 ] ; t1077 = ( (
( 1.0 - intrm_sf_mf_816 ) - t1056 ) * t537_idx_0 + t542_idx_0 *
intrm_sf_mf_816 ) + t539_idx_0 * t1056 ; intrm_sf_mf_816 = ( - X [ 277ULL ] -
( - X [ 134ULL ] ) ) / 2.0 ; t1282 = t1014 + t1058 ; t539_idx_0 = t1282 / 2.0
* 0.32 ; t1014 = ( intrm_sf_mf_816 >= 0.0 ? intrm_sf_mf_816 : 0.0 ) * 0.01 /
( t539_idx_0 == 0.0 ? 1.0E-16 : t539_idx_0 ) ; t1056 = t1014 >= 0.0 ? t1014 :
- t1014 ; t1014 = t1056 > 1000.0 ? t1056 : 1000.0 ; U_idx_2 = pmf_log10 ( 6.9
/ ( t1014 == 0.0 ? 1.0E-16 : t1014 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1014 == 0.0 ? 1.0E-16 : t1014 ) + 0.00017169489553429715 ) * 3.24 ;
t1078 = 1.0 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t1286 = t921 + t1077 ;
if ( ( pmf_pow ( t1286 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1078 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1316 = ( pmf_pow ( ( t921 + t1077 )
/ 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1078 / 8.0 ) * 12.7 + 1.0
; intrm_sf_mf_798 = ( t1014 - 1000.0 ) * ( t1078 / 8.0 ) * ( ( t921 + t1077 )
/ 2.0 ) / ( t1316 == 0.0 ? 1.0E-16 : t1316 ) ; } else { intrm_sf_mf_798 = (
t1014 - 1000.0 ) * ( t1078 / 8.0 ) * ( ( t921 + t1077 ) / 2.0 ) / 1.0E-6 ; }
t1080 = ( t1056 - 2000.0 ) / 2000.0 ; t1081 = t1080 * t1080 * 3.0 - t1080 *
t1080 * t1080 * 2.0 ; if ( t1056 <= 2000.0 ) { t1080 = 3.66 ; } else if (
t1056 >= 4000.0 ) { t1080 = intrm_sf_mf_798 ; } else { t1080 = ( 1.0 - t1081
) * 3.66 + intrm_sf_mf_798 * t1081 ; } t1294 = t1080 * 10.709248339636167 ;
t1308 = t1286 / 2.0 ; if ( t1056 > t1294 / 0.32 / ( t1308 == 0.0 ? 1.0E-16 :
t1308 ) / 30.0 ) { t833 = ( t921 + t1077 ) / 2.0 ; intrm_sf_mf_798 = t1080 *
10.709248339636167 / ( t1056 == 0.0 ? 1.0E-16 : t1056 ) / 0.32 / ( t833 ==
0.0 ? 1.0E-16 : t833 ) ; } else { intrm_sf_mf_798 = 30.0 ; } t1304 = t1058 +
t858 ; t1316 = t1304 / 2.0 * 0.32 ; t858 = - ( intrm_sf_mf_816 <= 0.0 ?
intrm_sf_mf_816 : 0.0 ) * 0.01 / ( t1316 == 0.0 ? 1.0E-16 : t1316 ) ; t921 =
t858 >= 0.0 ? t858 : - t858 ; t858 = t921 > 1000.0 ? t921 : 1000.0 ; t1308 =
pmf_log10 ( 6.9 / ( t858 == 0.0 ? 1.0E-16 : t858 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t858 == 0.0 ? 1.0E-16 : t858 ) + 0.00017169489553429715
) * 3.24 ; intrm_sf_mf_816 = 1.0 / ( t1308 == 0.0 ? 1.0E-16 : t1308 ) ; t1308
= intrm_sf_mf_829 + t1077 ; if ( ( pmf_pow ( t1308 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_816 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) { t833 = ( pmf_pow ( ( intrm_sf_mf_829 + t1077 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_816 / 8.0 ) * 12.7 +
1.0 ; t1080 = ( t858 - 1000.0 ) * ( intrm_sf_mf_816 / 8.0 ) * ( (
intrm_sf_mf_829 + t1077 ) / 2.0 ) / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else
{ t1080 = ( t858 - 1000.0 ) * ( intrm_sf_mf_816 / 8.0 ) * ( ( intrm_sf_mf_829
+ t1077 ) / 2.0 ) / 1.0E-6 ; } t1081 = ( t921 - 2000.0 ) / 2000.0 ; t1082 =
t1081 * t1081 * 3.0 - t1081 * t1081 * t1081 * 2.0 ; if ( t921 <= 2000.0 ) {
t1081 = 3.66 ; } else if ( t921 >= 4000.0 ) { t1081 = t1080 ; } else { t1081
= ( 1.0 - t1082 ) * 3.66 + t1080 * t1082 ; } t1316 = t1081 *
10.709248339636167 ; t1370 = t1308 / 2.0 ; if ( t921 > t1316 / 0.32 / ( t1370
== 0.0 ? 1.0E-16 : t1370 ) / 30.0 ) { t1336 = ( intrm_sf_mf_829 + t1077 ) /
2.0 ; t1080 = t1081 * 10.709248339636167 / ( t921 == 0.0 ? 1.0E-16 : t921 ) /
0.32 / ( t1336 == 0.0 ? 1.0E-16 : t1336 ) ; } else { t1080 = 30.0 ; } if ( X
[ 43ULL ] <= 0.0 ) { t1077 = 0.0 ; } else { t1077 = X [ 43ULL ] >= 1.0 ? 1.0
: X [ 43ULL ] ; } if ( X [ 42ULL ] <= 0.0 ) { t1081 = 0.0 ; } else { t1081 =
X [ 42ULL ] >= 1.0 ? 1.0 : X [ 42ULL ] ; } t1082 = ( ( ( 1.0 - t1077 ) -
t1081 ) * 296.802103844292 + t1077 * 461.523 ) + t1081 * 259.836612622973 ;
t1083 = - ( ( X [ 41ULL ] / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) -
X [ 310ULL ] / ( X [ 311ULL ] == 0.0 ? 1.0E-16 : X [ 311ULL ] ) ) * X [
244ULL ] * t1082 ) / 0.0019634954084936209 ; if ( X [ 310ULL ] <=
216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [ 310ULL
] >= 623.15 ? 623.15 : X [ 310ULL ] ; } t1089 = t833 * t833 ; t1088 = ( ( (
1074.1165326382641 + t833 * - 0.2214565261064495 ) + t1089 *
0.00037212980109014541 ) * ( ( 1.0 - t1077 ) - t1081 ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t1089 * -
0.00038614513167823636 ) * t1077 ) + ( ( 900.63941224838356 + t833 * -
0.044484923911382625 ) + t1089 * 0.00036936011832044979 ) * t1081 ; t1332 =
t1088 - t1082 ; t1089 = t1088 / ( t1332 == 0.0 ? 1.0E-16 : t1332 ) ; t1091 =
pmf_sqrt ( t1083 * t1083 * 9.999999999999999E-14 + fabs ( X [ 310ULL ] *
t1089 * t1082 ) * 1.0E-9 ) ; if ( X [ 308ULL ] <= 0.0 ) { intrm_sf_mf_1241 =
0.0 ; } else { intrm_sf_mf_1241 = X [ 308ULL ] >= 1.0 ? 1.0 : X [ 308ULL ] ;
} if ( X [ 307ULL ] <= 0.0 ) { intrm_sf_mf_923 = 0.0 ; } else {
intrm_sf_mf_923 = X [ 307ULL ] >= 1.0 ? 1.0 : X [ 307ULL ] ; } t540 [ 0ULL ]
= X [ 41ULL ] ; tlu2_linear_nearest_prelookup ( & sd_efOut . mField0 [ 0ULL ]
, & sd_efOut . mField1 [ 0ULL ] , & sd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t55 = sd_efOut ; tlu2_1d_linear_nearest_value ( & td_efOut
[ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = td_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ud_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = ud_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vd_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = vd_efOut [ 0 ] ; t1097 = ( ( ( 1.0 - intrm_sf_mf_1241 ) -
intrm_sf_mf_923 ) * t537_idx_0 + t542_idx_0 * intrm_sf_mf_1241 ) + t539_idx_0
* intrm_sf_mf_923 ; t1332 = X [ 311ULL ] * X [ 311ULL ] * t1089 ; t1098 = -
pmf_sqrt ( fabs ( t1332 / ( t1082 == 0.0 ? 1.0E-16 : t1082 ) / ( X [ 310ULL ]
== 0.0 ? 1.0E-16 : X [ 310ULL ] ) ) ) * 0.0019634954084936209 ; if ( t1098 >=
0.0 ) { t1100 = t1098 * 100000.0 ; } else { t1100 = - t1098 * 100000.0 ; }
t1336 = t1097 * 0.0019634954084936209 ; intrm_sf_mf_52 = t1100 * 0.05 / (
t1336 == 0.0 ? 1.0E-16 : t1336 ) ; t833 = X [ 41ULL ] * t1082 ; t1102 = X [
44ULL ] / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; t1373 = t1102 *
9.8174770424681068E-6 ; t1103 = t1098 * t1097 * 11.2 / ( t1373 == 0.0 ?
1.0E-16 : t1373 ) ; t1104 = intrm_sf_mf_52 >= 1.0 ? intrm_sf_mf_52 : 1.0 ;
t833 = pmf_log10 ( 6.9 / ( t1104 == 0.0 ? 1.0E-16 : t1104 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1104 == 0.0 ? 1.0E-16 : t1104
) + 2.8767404433520813E-5 ) * 3.24 ; t1382 = t1102 * 3.855314219175531E-7 ;
t1100 = t1098 * t1100 * ( 1.0 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ) * 0.175 /
( t1382 == 0.0 ? 1.0E-16 : t1382 ) ; t1105 = ( intrm_sf_mf_52 - 2000.0 ) /
2000.0 ; t833 = t1105 * t1105 * 3.0 - t1105 * t1105 * t1105 * 2.0 ; if (
intrm_sf_mf_52 <= 2000.0 ) { t1105 = t1103 * 1.0E-5 ; } else if (
intrm_sf_mf_52 >= 4000.0 ) { t1105 = t1100 * 1.0E-5 ; } else { t1105 = ( (
1.0 - t833 ) * t1103 + t1100 * t833 ) * 1.0E-5 ; } t1091 = - ( X [ 244ULL ] *
t1091 ) / 0.0019634954084936209 * 0.00031622776601683789 + t1105 ; t1100 = (
X [ 41ULL ] / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [ 313ULL ] /
( X [ 314ULL ] == 0.0 ? 1.0E-16 : X [ 314ULL ] ) ) * X [ 312ULL ] * t1082 /
0.0019634954084936209 ; if ( X [ 313ULL ] <= 216.59999999999997 ) {
intrm_sf_mf_52 = 216.59999999999997 ; } else { intrm_sf_mf_52 = X [ 313ULL ]
>= 623.15 ? 623.15 : X [ 313ULL ] ; } t809 = intrm_sf_mf_52 * intrm_sf_mf_52
; t1103 = ( ( ( 1074.1165326382641 + intrm_sf_mf_52 * - 0.2214565261064495 )
+ t809 * 0.00037212980109014541 ) * ( ( 1.0 - t1077 ) - t1081 ) + ( (
1479.6504774711011 + intrm_sf_mf_52 * 1.2002114337048222 ) + t809 * -
0.00038614513167823636 ) * t1077 ) + ( ( 900.63941224838356 + intrm_sf_mf_52
* - 0.044484923911382625 ) + t809 * 0.00036936011832044979 ) * t1081 ; t1352
= t1103 - t1082 ; t1077 = t1103 / ( t1352 == 0.0 ? 1.0E-16 : t1352 ) ; t1081
= pmf_sqrt ( t1100 * t1100 * 9.999999999999999E-14 + fabs ( X [ 313ULL ] *
t1077 * t1082 ) * 1.0E-9 ) ; t1352 = X [ 314ULL ] * X [ 314ULL ] * t1077 ;
t1105 = - pmf_sqrt ( fabs ( t1352 / ( t1082 == 0.0 ? 1.0E-16 : t1082 ) / ( X
[ 313ULL ] == 0.0 ? 1.0E-16 : X [ 313ULL ] ) ) ) * 0.0019634954084936209 ; if
( t1105 >= 0.0 ) { t833 = t1105 * 100000.0 ; } else { t833 = - t1105 *
100000.0 ; } t809 = t833 * 0.05 / ( t1336 == 0.0 ? 1.0E-16 : t1336 ) ; t1109
= t1105 * t1097 * 11.2 / ( t1373 == 0.0 ? 1.0E-16 : t1373 ) ; t1111 = t809 >=
1.0 ? t809 : 1.0 ; t1370 = pmf_log10 ( 6.9 / ( t1111 == 0.0 ? 1.0E-16 : t1111
) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1111 == 0.0 ? 1.0E-16 :
t1111 ) + 2.8767404433520813E-5 ) * 3.24 ; t833 = t1105 * t833 * ( 1.0 / (
t1370 == 0.0 ? 1.0E-16 : t1370 ) ) * 0.175 / ( t1382 == 0.0 ? 1.0E-16 : t1382
) ; t1112 = ( t809 - 2000.0 ) / 2000.0 ; t1113 = t1112 * t1112 * 3.0 - t1112
* t1112 * t1112 * 2.0 ; if ( t809 <= 2000.0 ) { t1112 = t1109 * 1.0E-5 ; }
else if ( t809 >= 4000.0 ) { t1112 = t833 * 1.0E-5 ; } else { t1112 = ( ( 1.0
- t1113 ) * t1109 + t833 * t1113 ) * 1.0E-5 ; } t1081 = X [ 312ULL ] * t1081
/ 0.0019634954084936209 * 0.00031622776601683789 + t1112 ; if ( 1.0 - X [
43ULL ] >= 0.01 ) { t809 = 1.0 - X [ 43ULL ] ; } else if ( 1.0 - X [ 43ULL ]
>= - 0.1 ) { t809 = pmf_exp ( ( ( 1.0 - X [ 43ULL ] ) - 0.01 ) / 0.01 ) *
0.01 ; } else { t809 = 1.6701700790245661E-7 ; } t1109 = X [ 42ULL ] / ( t809
== 0.0 ? 1.0E-16 : t809 ) * - 36.965491221318985 + 296.802103844292 ; t540 [
0ULL ] = X [ 41ULL ] ; tlu2_linear_linear_prelookup ( & wd_efOut . mField0 [
0ULL ] , & wd_efOut . mField1 [ 0ULL ] , & wd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t48 = wd_efOut ; tlu2_1d_linear_linear_value ( & xd_efOut
[ 0ULL ] , & t48 . mField0 [ 0ULL ] , & t48 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t67 [ 0 ] = xd_efOut [ 0 ] ; t1112 = pmf_exp ( pmf_log ( X [ 44ULL ] *
100000.0 ) - t67 [ 0ULL ] ) ; if ( t1112 >= 1.0 ) { t1370 = ( t1112 - 1.0 ) *
461.523 + t1109 ; t1113 = t1109 / ( t1370 == 0.0 ? 1.0E-16 : t1370 ) ; } else
{ t1113 = 1.0 ; } if ( X [ 234ULL ] <= 0.0 ) { t1114 = 0.0 ; } else { t1114 =
X [ 234ULL ] >= 1.0 ? 1.0 : X [ 234ULL ] ; } if ( X [ 233ULL ] <= 0.0 ) {
t1115 = 0.0 ; } else { t1115 = X [ 233ULL ] >= 1.0 ? 1.0 : X [ 233ULL ] ; }
t1116 = ( ( ( 1.0 - t1114 ) - t1115 ) * 296.802103844292 + t1114 * 461.523 )
+ t1115 * 259.836612622973 ; t1114 = X [ 234ULL ] * 461.523 / ( t1116 == 0.0
? 1.0E-16 : t1116 ) ; if ( t1114 <= 0.0 ) { t1115 = 0.0 ; } else { t1115 =
t1114 >= 1.0 ? 1.0 : t1114 ; } t1114 = X [ 233ULL ] * 259.836612622973 / (
t1116 == 0.0 ? 1.0E-16 : t1116 ) ; if ( t1114 <= 0.0 ) { t1117 = 0.0 ; } else
{ t1117 = t1114 >= 1.0 ? 1.0 : t1114 ; } t540 [ 0ULL ] = X [ 232ULL ] ;
tlu2_linear_nearest_prelookup ( & yd_efOut . mField0 [ 0ULL ] , & yd_efOut .
mField1 [ 0ULL ] , & yd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t51
= yd_efOut ; tlu2_1d_linear_nearest_value ( & ae_efOut [ 0ULL ] , & t51 .
mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = ae_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & be_efOut [ 0ULL ] , & t51 . mField0 [
0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = be_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ce_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = ce_efOut [ 0 ] ; t1114 = ( (
( 1.0 - t1115 ) - t1117 ) * t537_idx_0 + t542_idx_0 * t1115 ) + t539_idx_0 *
t1117 ; tlu2_1d_linear_nearest_value ( & de_efOut [ 0ULL ] , & t55 . mField0
[ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = de_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ee_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ee_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fe_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = fe_efOut [ 0 ] ;
intrm_sf_mf_52 = ( ( ( 1.0 - intrm_sf_mf_1241 ) - intrm_sf_mf_923 ) *
t537_idx_0 + t542_idx_0 * intrm_sf_mf_1241 ) + t539_idx_0 * intrm_sf_mf_923 ;
intrm_sf_mf_1241 = ( - X [ 244ULL ] - X [ 312ULL ] ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & ge_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = ge_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & he_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = he_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ie_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = ie_efOut [ 0 ] ; t1370 =
t1097 + ( ( ( ( 1.0 - t1115 ) - t1117 ) * t537_idx_0 + t542_idx_0 * t1115 ) +
t539_idx_0 * t1117 ) ; t1382 = t1370 / 2.0 * 0.0019634954084936209 ;
intrm_sf_mf_923 = ( intrm_sf_mf_1241 >= 0.0 ? intrm_sf_mf_1241 : 0.0 ) * 0.05
/ ( t1382 == 0.0 ? 1.0E-16 : t1382 ) ; t1115 = intrm_sf_mf_923 >= 0.0 ?
intrm_sf_mf_923 : - intrm_sf_mf_923 ; intrm_sf_mf_923 = t1115 > 1000.0 ?
t1115 : 1000.0 ; t1373 = pmf_log10 ( 6.9 / ( intrm_sf_mf_923 == 0.0 ? 1.0E-16
: intrm_sf_mf_923 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_923 == 0.0 ? 1.0E-16 : intrm_sf_mf_923 ) + 2.8767404433520813E-5
) * 3.24 ; t1117 = 1.0 / ( t1373 == 0.0 ? 1.0E-16 : t1373 ) ; t1373 = t1114 +
intrm_sf_mf_52 ; if ( ( pmf_pow ( t1373 / 2.0 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t1117 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1406 = ( pmf_pow ( (
t1114 + intrm_sf_mf_52 ) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1117 / 8.0 ) * 12.7 + 1.0 ; t1121 = ( intrm_sf_mf_923 - 1000.0 ) * ( t1117 /
8.0 ) * ( ( t1114 + intrm_sf_mf_52 ) / 2.0 ) / ( t1406 == 0.0 ? 1.0E-16 :
t1406 ) ; } else { t1121 = ( intrm_sf_mf_923 - 1000.0 ) * ( t1117 / 8.0 ) * (
( t1114 + intrm_sf_mf_52 ) / 2.0 ) / 1.0E-6 ; } t1122 = ( t1115 - 2000.0 ) /
2000.0 ; intrm_sf_mf_936 = t1122 * t1122 * 3.0 - t1122 * t1122 * t1122 * 2.0
; if ( t1115 <= 2000.0 ) { t1122 = 3.66 ; } else if ( t1115 >= 4000.0 ) {
t1122 = t1121 ; } else { t1122 = ( 1.0 - intrm_sf_mf_936 ) * 3.66 + t1121 *
intrm_sf_mf_936 ; } t1382 = t1122 * 0.039269908169872414 ; t1398 = t1373 /
2.0 ; if ( t1115 > t1382 / 0.0019634954084936209 / ( t1398 == 0.0 ? 1.0E-16 :
t1398 ) / 30.0 ) { t833 = ( t1114 + intrm_sf_mf_52 ) / 2.0 ; t1121 = t1122 *
0.039269908169872414 / ( t1115 == 0.0 ? 1.0E-16 : t1115 ) /
0.0019634954084936209 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else { t1121 =
30.0 ; } if ( X [ 302ULL ] <= 0.0 ) { t1114 = 0.0 ; } else { t1114 = X [
302ULL ] >= 1.0 ? 1.0 : X [ 302ULL ] ; } if ( X [ 301ULL ] <= 0.0 ) { t1122 =
0.0 ; } else { t1122 = X [ 301ULL ] >= 1.0 ? 1.0 : X [ 301ULL ] ; }
intrm_sf_mf_936 = ( ( ( 1.0 - t1114 ) - t1122 ) * 296.802103844292 + t1114 *
461.523 ) + t1122 * 259.836612622973 ; t1114 = X [ 302ULL ] * 461.523 / (
intrm_sf_mf_936 == 0.0 ? 1.0E-16 : intrm_sf_mf_936 ) ; if ( t1114 <= 0.0 ) {
t1122 = 0.0 ; } else { t1122 = t1114 >= 1.0 ? 1.0 : t1114 ; } t1114 = X [
301ULL ] * 259.836612622973 / ( intrm_sf_mf_936 == 0.0 ? 1.0E-16 :
intrm_sf_mf_936 ) ; if ( t1114 <= 0.0 ) { t1124 = 0.0 ; } else { t1124 =
t1114 >= 1.0 ? 1.0 : t1114 ; } t540 [ 0ULL ] = X [ 299ULL ] ;
tlu2_linear_nearest_prelookup ( & je_efOut . mField0 [ 0ULL ] , & je_efOut .
mField1 [ 0ULL ] , & je_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t50
= je_efOut ; tlu2_1d_linear_nearest_value ( & ke_efOut [ 0ULL ] , & t50 .
mField0 [ 0ULL ] , & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = ke_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & le_efOut [ 0ULL ] , & t50 . mField0 [
0ULL ] , & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = le_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & me_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = me_efOut [ 0 ] ; t1114 = ( (
( 1.0 - t1122 ) - t1124 ) * t537_idx_0 + t542_idx_0 * t1122 ) + t539_idx_0 *
t1124 ; intrm_sf_mf_949 = intrm_sf_mf_1241 <= 0.0 ? intrm_sf_mf_1241 : 0.0 ;
tlu2_1d_linear_nearest_value ( & ne_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = ne_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oe_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = oe_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pe_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = pe_efOut [ 0 ] ;
intrm_sf_mf_1241 = ( ( ( 1.0 - t1122 ) - t1124 ) * t537_idx_0 + t542_idx_0 *
t1122 ) + t539_idx_0 * t1124 ; t1394 = t1097 + intrm_sf_mf_1241 ; t1406 =
t1394 / 2.0 * 0.0019634954084936209 ; t1122 = - intrm_sf_mf_949 * 0.05 / (
t1406 == 0.0 ? 1.0E-16 : t1406 ) ; t1124 = t1122 >= 0.0 ? t1122 : - t1122 ;
t1122 = t1124 > 1000.0 ? t1124 : 1000.0 ; t1398 = pmf_log10 ( 6.9 / ( t1122
== 0.0 ? 1.0E-16 : t1122 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t1122 == 0.0 ? 1.0E-16 : t1122 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_949 = 1.0 / ( t1398 == 0.0 ? 1.0E-16 : t1398 ) ; t1398 =
intrm_sf_mf_52 + t1114 ; if ( ( pmf_pow ( t1398 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( intrm_sf_mf_949 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t833
= ( pmf_pow ( ( intrm_sf_mf_52 + t1114 ) / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( intrm_sf_mf_949 / 8.0 ) * 12.7 + 1.0 ; t1126 = ( t1122 -
1000.0 ) * ( intrm_sf_mf_949 / 8.0 ) * ( ( intrm_sf_mf_52 + t1114 ) / 2.0 ) /
( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else { t1126 = ( t1122 - 1000.0 ) * (
intrm_sf_mf_949 / 8.0 ) * ( ( intrm_sf_mf_52 + t1114 ) / 2.0 ) / 1.0E-6 ; }
t1127 = ( t1124 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = t1127 * t1127 *
3.0 - t1127 * t1127 * t1127 * 2.0 ; if ( t1124 <= 2000.0 ) { t1127 = 3.66 ; }
else if ( t1124 >= 4000.0 ) { t1127 = t1126 ; } else { t1127 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) * 3.66 + t1126 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; } t1406 = t1127
* 0.039269908169872414 ; t1460 = t1398 / 2.0 ; if ( t1124 > t1406 /
0.0019634954084936209 / ( t1460 == 0.0 ? 1.0E-16 : t1460 ) / 30.0 ) { t1725 =
( intrm_sf_mf_52 + t1114 ) / 2.0 ; t1126 = t1127 * 0.039269908169872414 / (
t1124 == 0.0 ? 1.0E-16 : t1124 ) / 0.0019634954084936209 / ( t1725 == 0.0 ?
1.0E-16 : t1725 ) ; } else { t1126 = 30.0 ; } if ( X [ 340ULL ] <= 0.0 ) {
t1127 = 0.0 ; } else { t1127 = X [ 340ULL ] >= 1.0 ? 1.0 : X [ 340ULL ] ; }
if ( X [ 341ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X [ 341ULL ] >=
1.0 ? 1.0 : X [ 341ULL ] ; } t1129 = ( ( ( 1.0 - t1127 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) *
296.802103844292 + t1127 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 259.836612622973
; t1127 = ( X [ 344ULL ] * 0.07812500122070315 + U_idx_8 * 10.0 ) -
7.8125001220703152E-10 ; if ( X [ 47ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X [ 47ULL ] >=
1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 48ULL ] <= 0.0 ) { t1131 = 0.0 ; } else
{ t1131 = X [ 48ULL ] >= 1.0 ? 1.0 : X [ 48ULL ] ; } t1132 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) - t1131 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI
* 461.523 ) + t1131 * 259.836612622973 ; t1133 = ( X [ 45ULL ] / ( X [ 46ULL
] == 0.0 ? 1.0E-16 : X [ 46ULL ] ) - X [ 348ULL ] / ( X [ 349ULL ] == 0.0 ?
1.0E-16 : X [ 349ULL ] ) ) * X [ 347ULL ] * t1132 / 0.0019634954084936209 ;
if ( X [ 348ULL ] <= 216.59999999999997 ) { t833 = 216.59999999999997 ; }
else { t833 = X [ 348ULL ] >= 623.15 ? 623.15 : X [ 348ULL ] ; } t1137 = t833
* t833 ; t1136 = ( ( ( 1074.1165326382641 + t833 * - 0.2214565261064495 ) +
t1137 * 0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) - t1131 ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t1137 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + t833 * - 0.044484923911382625 ) + t1137 *
0.00036936011832044979 ) * t1131 ; t1422 = t1136 - t1132 ; t1137 = t1136 / (
t1422 == 0.0 ? 1.0E-16 : t1422 ) ; t1138 = pmf_sqrt ( t1133 * t1133 *
9.999999999999999E-14 + fabs ( X [ 348ULL ] * t1137 * t1132 ) * 1.0E-9 ) ; if
( X [ 350ULL ] <= 0.0 ) { t1139 = 0.0 ; } else { t1139 = X [ 350ULL ] >= 1.0
? 1.0 : X [ 350ULL ] ; } if ( X [ 351ULL ] <= 0.0 ) { t1140 = 0.0 ; } else {
t1140 = X [ 351ULL ] >= 1.0 ? 1.0 : X [ 351ULL ] ; } t540 [ 0ULL ] = X [
45ULL ] ; tlu2_linear_nearest_prelookup ( & qe_efOut . mField0 [ 0ULL ] , &
qe_efOut . mField1 [ 0ULL ] , & qe_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t51 = qe_efOut ; tlu2_1d_linear_nearest_value ( & re_efOut
[ 0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = re_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & se_efOut [
0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = se_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & te_efOut [
0ULL ] , & t51 . mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = te_efOut [ 0 ] ; t1141 = ( ( ( 1.0 - t1139 ) - t1140 ) *
t537_idx_0 + t542_idx_0 * t1139 ) + t539_idx_0 * t1140 ; t1422 = X [ 349ULL ]
* X [ 349ULL ] * t1137 ; t1144 = - pmf_sqrt ( fabs ( t1422 / ( t1132 == 0.0 ?
1.0E-16 : t1132 ) / ( X [ 348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ] ) ) ) *
0.0019634954084936209 ; if ( t1144 >= 0.0 ) { t1145 = t1144 * 100000.0 ; }
else { t1145 = - t1144 * 100000.0 ; } t1725 = t1141 * 0.0019634954084936209 ;
intrm_sf_mf_52 = t1145 * 0.05 / ( t1725 == 0.0 ? 1.0E-16 : t1725 ) ; t833 = X
[ 45ULL ] * t1132 ; t1147 = X [ 46ULL ] / ( t833 == 0.0 ? 1.0E-16 : t833 ) ;
t1464 = t1147 * 9.8174770424681068E-6 ; t1148 = t1144 * t1141 * 35.2 / (
t1464 == 0.0 ? 1.0E-16 : t1464 ) ; t1149 = intrm_sf_mf_52 >= 1.0 ?
intrm_sf_mf_52 : 1.0 ; t833 = pmf_log10 ( 6.9 / ( t1149 == 0.0 ? 1.0E-16 :
t1149 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1149 == 0.0 ?
1.0E-16 : t1149 ) + 2.8767404433520813E-5 ) * 3.24 ; t1465 = t1147 *
3.855314219175531E-7 ; t1145 = t1144 * t1145 * ( 1.0 / ( t833 == 0.0 ?
1.0E-16 : t833 ) ) * 0.55 / ( t1465 == 0.0 ? 1.0E-16 : t1465 ) ; t1150 = (
intrm_sf_mf_52 - 2000.0 ) / 2000.0 ; t833 = t1150 * t1150 * 3.0 - t1150 *
t1150 * t1150 * 2.0 ; if ( intrm_sf_mf_52 <= 2000.0 ) { t1150 = t1148 *
1.0E-5 ; } else if ( intrm_sf_mf_52 >= 4000.0 ) { t1150 = t1145 * 1.0E-5 ; }
else { t1150 = ( ( 1.0 - t833 ) * t1148 + t1145 * t833 ) * 1.0E-5 ; } t1138 =
X [ 347ULL ] * t1138 / 0.0019634954084936209 * 0.00031622776601683789 + t1150
; t1145 = - ( ( X [ 45ULL ] / ( X [ 46ULL ] == 0.0 ? 1.0E-16 : X [ 46ULL ] )
- X [ 352ULL ] / ( X [ 353ULL ] == 0.0 ? 1.0E-16 : X [ 353ULL ] ) ) * X [
335ULL ] * t1132 ) / 0.0019634954084936209 ; if ( X [ 352ULL ] <=
216.59999999999997 ) { intrm_sf_mf_52 = 216.59999999999997 ; } else {
intrm_sf_mf_52 = X [ 352ULL ] >= 623.15 ? 623.15 : X [ 352ULL ] ; } t815 =
intrm_sf_mf_52 * intrm_sf_mf_52 ; t1148 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_52 * - 0.2214565261064495 ) + t815 * 0.00037212980109014541 ) * (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) - t1131
) + ( ( 1479.6504774711011 + intrm_sf_mf_52 * 1.2002114337048222 ) + t815 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + intrm_sf_mf_52 * - 0.044484923911382625 ) + t815 *
0.00036936011832044979 ) * t1131 ; t1442 = t1148 - t1132 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = t1148 / ( t1442
== 0.0 ? 1.0E-16 : t1442 ) ; t1131 = pmf_sqrt ( t1145 * t1145 *
9.999999999999999E-14 + fabs ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) * 1.0E-9
) ; t1442 = X [ 353ULL ] * X [ 353ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; t1150 = -
pmf_sqrt ( fabs ( t1442 / ( t1132 == 0.0 ? 1.0E-16 : t1132 ) / ( X [ 352ULL ]
== 0.0 ? 1.0E-16 : X [ 352ULL ] ) ) ) * 0.0019634954084936209 ; if ( t1150 >=
0.0 ) { t833 = t1150 * 100000.0 ; } else { t833 = - t1150 * 100000.0 ; } t815
= t833 * 0.05 / ( t1725 == 0.0 ? 1.0E-16 : t1725 ) ; t1153 = t1150 * t1141 *
35.2 / ( t1464 == 0.0 ? 1.0E-16 : t1464 ) ; t1155 = t815 >= 1.0 ? t815 : 1.0
; t1460 = pmf_log10 ( 6.9 / ( t1155 == 0.0 ? 1.0E-16 : t1155 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1155 == 0.0 ? 1.0E-16 : t1155
) + 2.8767404433520813E-5 ) * 3.24 ; t833 = t1150 * t833 * ( 1.0 / ( t1460 ==
0.0 ? 1.0E-16 : t1460 ) ) * 0.55 / ( t1465 == 0.0 ? 1.0E-16 : t1465 ) ; t1156
= ( t815 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I = t1156 * t1156 *
3.0 - t1156 * t1156 * t1156 * 2.0 ; if ( t815 <= 2000.0 ) { t1156 = t1153 *
1.0E-5 ; } else if ( t815 >= 4000.0 ) { t1156 = t833 * 1.0E-5 ; } else {
t1156 = ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I )
* t1153 + t833 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I ) *
1.0E-5 ; } t1131 = - ( X [ 335ULL ] * t1131 ) / 0.0019634954084936209 *
0.00031622776601683789 + t1156 ; if ( 1.0 - X [ 47ULL ] >= 0.01 ) { t815 =
1.0 - X [ 47ULL ] ; } else if ( 1.0 - X [ 47ULL ] >= - 0.1 ) { t815 = pmf_exp
( ( ( 1.0 - X [ 47ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t815 =
1.6701700790245661E-7 ; } t1153 = X [ 48ULL ] / ( t815 == 0.0 ? 1.0E-16 :
t815 ) * - 36.965491221318985 + 296.802103844292 ; t540 [ 0ULL ] = X [ 45ULL
] ; tlu2_linear_linear_prelookup ( & ue_efOut . mField0 [ 0ULL ] , & ue_efOut
. mField1 [ 0ULL ] , & ue_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ;
t49 = ue_efOut ; tlu2_1d_linear_linear_value ( & ve_efOut [ 0ULL ] , & t49 .
mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t426 [ 0 ] = ve_efOut [ 0
] ; t1156 = pmf_exp ( pmf_log ( X [ 46ULL ] * 100000.0 ) - t426 [ 0ULL ] ) ;
if ( t1156 >= 1.0 ) { t1460 = ( t1156 - 1.0 ) * 461.523 + t1153 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I = t1153 / ( t1460 ==
0.0 ? 1.0E-16 : t1460 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I = 1.0 ; } if ( X [
327ULL ] <= 0.0 ) { intrm_sf_mf_829 = 0.0 ; } else { intrm_sf_mf_829 = X [
327ULL ] >= 1.0 ? 1.0 : X [ 327ULL ] ; } if ( X [ 326ULL ] <= 0.0 ) {
intrm_sf_mf_1070 = 0.0 ; } else { intrm_sf_mf_1070 = X [ 326ULL ] >= 1.0 ?
1.0 : X [ 326ULL ] ; } t1164 = ( ( ( 1.0 - intrm_sf_mf_829 ) -
intrm_sf_mf_1070 ) * 296.802103844292 + intrm_sf_mf_829 * 461.523 ) +
intrm_sf_mf_1070 * 259.836612622973 ; intrm_sf_mf_829 = X [ 327ULL ] *
461.523 / ( t1164 == 0.0 ? 1.0E-16 : t1164 ) ; if ( intrm_sf_mf_829 <= 0.0 )
{ intrm_sf_mf_1070 = 0.0 ; } else { intrm_sf_mf_1070 = intrm_sf_mf_829 >= 1.0
? 1.0 : intrm_sf_mf_829 ; } intrm_sf_mf_829 = X [ 326ULL ] * 259.836612622973
/ ( t1164 == 0.0 ? 1.0E-16 : t1164 ) ; if ( intrm_sf_mf_829 <= 0.0 ) { t1165
= 0.0 ; } else { t1165 = intrm_sf_mf_829 >= 1.0 ? 1.0 : intrm_sf_mf_829 ; }
t540 [ 0ULL ] = X [ 324ULL ] ; tlu2_linear_nearest_prelookup ( & we_efOut .
mField0 [ 0ULL ] , & we_efOut . mField1 [ 0ULL ] , & we_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t55 = we_efOut ;
tlu2_1d_linear_nearest_value ( & xe_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = xe_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ye_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ye_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & af_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = af_efOut [ 0 ] ;
intrm_sf_mf_829 = ( ( ( 1.0 - intrm_sf_mf_1070 ) - t1165 ) * t537_idx_0 +
t542_idx_0 * intrm_sf_mf_1070 ) + t539_idx_0 * t1165 ;
tlu2_1d_linear_nearest_value ( & bf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = bf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & cf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = cf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & df_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = df_efOut [ 0 ] ; U_idx_1 = (
( ( 1.0 - t1139 ) - t1140 ) * t537_idx_0 + t542_idx_0 * t1139 ) + t539_idx_0
* t1140 ; t1139 = ( X [ 347ULL ] - ( - X [ 335ULL ] ) ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & ef_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = ef_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ff_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ff_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gf_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = gf_efOut [ 0 ] ; t1167 = ( (
( 1.0 - intrm_sf_mf_1070 ) - t1165 ) * t537_idx_0 + t542_idx_0 *
intrm_sf_mf_1070 ) + t539_idx_0 * t1165 ; t1460 = t1141 + t1167 ; t1465 =
t1460 / 2.0 * 0.0019634954084936209 ; t1140 = ( t1139 >= 0.0 ? t1139 : 0.0 )
* 0.05 / ( t1465 == 0.0 ? 1.0E-16 : t1465 ) ; intrm_sf_mf_1070 = t1140 >= 0.0
? t1140 : - t1140 ; t1140 = intrm_sf_mf_1070 > 1000.0 ? intrm_sf_mf_1070 :
1000.0 ; t1464 = pmf_log10 ( 6.9 / ( t1140 == 0.0 ? 1.0E-16 : t1140 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1140 == 0.0 ? 1.0E-16 : t1140
) + 2.8767404433520813E-5 ) * 3.24 ; t1165 = 1.0 / ( t1464 == 0.0 ? 1.0E-16 :
t1464 ) ; t1464 = intrm_sf_mf_829 + U_idx_1 ; if ( ( pmf_pow ( t1464 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1165 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) { t1495 = ( pmf_pow ( ( intrm_sf_mf_829 + U_idx_1 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1165 / 8.0 ) * 12.7 + 1.0 ;
intrm_sf_mf_1077 = ( t1140 - 1000.0 ) * ( t1165 / 8.0 ) * ( ( intrm_sf_mf_829
+ U_idx_1 ) / 2.0 ) / ( t1495 == 0.0 ? 1.0E-16 : t1495 ) ; } else {
intrm_sf_mf_1077 = ( t1140 - 1000.0 ) * ( t1165 / 8.0 ) * ( ( intrm_sf_mf_829
+ U_idx_1 ) / 2.0 ) / 1.0E-6 ; } intrm_sf_mf_1151 = ( intrm_sf_mf_1070 -
2000.0 ) / 2000.0 ; t1170 = intrm_sf_mf_1151 * intrm_sf_mf_1151 * 3.0 -
intrm_sf_mf_1151 * intrm_sf_mf_1151 * intrm_sf_mf_1151 * 2.0 ; if (
intrm_sf_mf_1070 <= 2000.0 ) { intrm_sf_mf_1151 = 3.66 ; } else if (
intrm_sf_mf_1070 >= 4000.0 ) { intrm_sf_mf_1151 = intrm_sf_mf_1077 ; } else {
intrm_sf_mf_1151 = ( 1.0 - t1170 ) * 3.66 + intrm_sf_mf_1077 * t1170 ; }
t1465 = intrm_sf_mf_1151 * 0.15707963267948966 ; t1488 = t1464 / 2.0 ; if (
intrm_sf_mf_1070 > t1465 / 0.0019634954084936209 / ( t1488 == 0.0 ? 1.0E-16 :
t1488 ) / 30.0 ) { t833 = ( intrm_sf_mf_829 + U_idx_1 ) / 2.0 ;
intrm_sf_mf_1077 = intrm_sf_mf_1151 * 0.15707963267948966 / (
intrm_sf_mf_1070 == 0.0 ? 1.0E-16 : intrm_sf_mf_1070 ) /
0.0019634954084936209 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else {
intrm_sf_mf_1077 = 30.0 ; } if ( X [ 346ULL ] <= 0.0 ) { intrm_sf_mf_1151 =
0.0 ; } else { intrm_sf_mf_1151 = X [ 346ULL ] >= 1.0 ? 1.0 : X [ 346ULL ] ;
} if ( X [ 345ULL ] <= 0.0 ) { t1170 = 0.0 ; } else { t1170 = X [ 345ULL ] >=
1.0 ? 1.0 : X [ 345ULL ] ; } t1171 = ( ( ( 1.0 - intrm_sf_mf_1151 ) - t1170 )
* 296.802103844292 + intrm_sf_mf_1151 * 461.523 ) + t1170 * 259.836612622973
; intrm_sf_mf_1151 = X [ 346ULL ] * 461.523 / ( t1171 == 0.0 ? 1.0E-16 :
t1171 ) ; if ( intrm_sf_mf_1151 <= 0.0 ) { t1170 = 0.0 ; } else { t1170 =
intrm_sf_mf_1151 >= 1.0 ? 1.0 : intrm_sf_mf_1151 ; } intrm_sf_mf_1151 = X [
345ULL ] * 259.836612622973 / ( t1171 == 0.0 ? 1.0E-16 : t1171 ) ; if (
intrm_sf_mf_1151 <= 0.0 ) { intrm_sf_mf_1095 = 0.0 ; } else {
intrm_sf_mf_1095 = intrm_sf_mf_1151 >= 1.0 ? 1.0 : intrm_sf_mf_1151 ; } t540
[ 0ULL ] = X [ 343ULL ] ; tlu2_linear_nearest_prelookup ( & hf_efOut .
mField0 [ 0ULL ] , & hf_efOut . mField1 [ 0ULL ] , & hf_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t51 = hf_efOut ;
tlu2_1d_linear_nearest_value ( & if_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = if_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = jf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = kf_efOut [ 0 ] ;
intrm_sf_mf_1151 = ( ( ( 1.0 - t1170 ) - intrm_sf_mf_1095 ) * t537_idx_0 +
t542_idx_0 * t1170 ) + t539_idx_0 * intrm_sf_mf_1095 ;
tlu2_1d_linear_nearest_value ( & lf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = lf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = mf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nf_efOut [ 0ULL ] , & t51 . mField0 [ 0ULL ]
, & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = nf_efOut [ 0 ] ; t1483 =
t1141 + ( ( ( ( 1.0 - t1170 ) - intrm_sf_mf_1095 ) * t537_idx_0 + t542_idx_0
* t1170 ) + t539_idx_0 * intrm_sf_mf_1095 ) ; t1495 = t1483 / 2.0 *
0.0019634954084936209 ; t1139 = - ( t1139 <= 0.0 ? t1139 : 0.0 ) * 0.05 / (
t1495 == 0.0 ? 1.0E-16 : t1495 ) ; t1170 = t1139 >= 0.0 ? t1139 : - t1139 ;
t1139 = t1170 > 1000.0 ? t1170 : 1000.0 ; t1488 = pmf_log10 ( 6.9 / ( t1139
== 0.0 ? 1.0E-16 : t1139 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t1139 == 0.0 ? 1.0E-16 : t1139 ) + 2.8767404433520813E-5 ) * 3.24 ;
intrm_sf_mf_1095 = 1.0 / ( t1488 == 0.0 ? 1.0E-16 : t1488 ) ; t1488 = U_idx_1
+ intrm_sf_mf_1151 ; if ( ( pmf_pow ( t1488 / 2.0 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( intrm_sf_mf_1095 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t833 =
( pmf_pow ( ( U_idx_1 + intrm_sf_mf_1151 ) / 2.0 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( intrm_sf_mf_1095 / 8.0 ) * 12.7 + 1.0 ; t1176 = ( t1139 -
1000.0 ) * ( intrm_sf_mf_1095 / 8.0 ) * ( ( U_idx_1 + intrm_sf_mf_1151 ) /
2.0 ) / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else { t1176 = ( t1139 - 1000.0
) * ( intrm_sf_mf_1095 / 8.0 ) * ( ( U_idx_1 + intrm_sf_mf_1151 ) / 2.0 ) /
1.0E-6 ; } t1177 = ( t1170 - 2000.0 ) / 2000.0 ; t1179 = t1177 * t1177 * 3.0
- t1177 * t1177 * t1177 * 2.0 ; if ( t1170 <= 2000.0 ) { t1177 = 3.66 ; }
else if ( t1170 >= 4000.0 ) { t1177 = t1176 ; } else { t1177 = ( 1.0 - t1179
) * 3.66 + t1176 * t1179 ; } t1495 = t1177 * 0.15707963267948966 ; t1547 =
t1488 / 2.0 ; if ( t1170 > t1495 / 0.0019634954084936209 / ( t1547 == 0.0 ?
1.0E-16 : t1547 ) / 30.0 ) { t1527 = ( U_idx_1 + intrm_sf_mf_1151 ) / 2.0 ;
t1176 = t1177 * 0.15707963267948966 / ( t1170 == 0.0 ? 1.0E-16 : t1170 ) /
0.0019634954084936209 / ( t1527 == 0.0 ? 1.0E-16 : t1527 ) ; } else { t1176 =
30.0 ; } if ( X [ 344ULL ] * 0.0019634954084936209 <= 1.9634954084936209E-11
) { intrm_sf_mf_1151 = 1.9634954084936209E-11 ; } else if ( X [ 344ULL ] *
0.0019634954084936209 >= 0.0012566370614359179 ) { intrm_sf_mf_1151 =
0.0012566370614359179 ; } else { intrm_sf_mf_1151 = X [ 344ULL ] *
0.0019634954084936209 ; } t1177 = intrm_sf_mf_1151 / 0.0019634954084936209 ;
if ( X [ 367ULL ] <= 0.0 ) { t1179 = 0.0 ; } else { t1179 = X [ 367ULL ] >=
1.0 ? 1.0 : X [ 367ULL ] ; } if ( X [ 368ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 368ULL ] >=
1.0 ? 1.0 : X [ 368ULL ] ; } t1183 = ( ( ( 1.0 - t1179 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) *
296.802103844292 + t1179 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 259.836612622973
; t1547 = X [ 365ULL ] * t1183 ; t1185 = X [ 366ULL ] / ( t1547 == 0.0 ?
1.0E-16 : t1547 ) ; t833 = X [ 366ULL ] / ( t1127 == 0.0 ? 1.0E-16 : t1127 )
* ( X [ 369ULL ] / ( X [ 365ULL ] == 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ;
intrm_sf_mf_1170 = X [ 366ULL ] / 1.01325 * ( X [ 370ULL ] / ( X [ 365ULL ]
== 0.0 ? 1.0E-16 : X [ 365ULL ] ) ) ; t1190 = ( t1127 + 1.01325 ) / 2.0 *
0.0010000000000000009 ; t1189 = ( 1.0 - t1177 ) * ( 1.0 - t1177 ) ; t1191 =
t1190 * t1189 ; t1192 = ( t1177 + 1.0 ) * ( 1.0 - t1177 * t833 ) - ( 1.0 -
t1177 * intrm_sf_mf_1170 ) * t1177 * 2.0 ; intrm_sf_mf_52 = ( t1127 - 1.01325
) * ( t1192 >= t1189 ? t1192 : t1189 ) ; t1192 = ( t1127 - 1.01325 ) / (
t1190 == 0.0 ? 1.0E-16 : t1190 ) ; t1195 = t1192 * t1192 * 3.0 - t1192 *
t1192 * t1192 * 2.0 ; if ( t1127 - 1.01325 <= 0.0 ) { t1192 = t1191 ; } else
if ( t1127 - 1.01325 >= t1190 ) { t1192 = intrm_sf_mf_52 ; } else { t1192 = (
1.0 - t1195 ) * t1191 + intrm_sf_mf_52 * t1195 ; } intrm_sf_mf_52 = ( t1177 +
1.0 ) * ( 1.0 - t1177 * intrm_sf_mf_1170 ) - ( 1.0 - t1177 * t833 ) * t1177 *
2.0 ; t1177 = ( 1.01325 - t1127 ) * ( intrm_sf_mf_52 >= t1189 ?
intrm_sf_mf_52 : t1189 ) ; t833 = ( 1.01325 - t1127 ) / ( t1190 == 0.0 ?
1.0E-16 : t1190 ) ; intrm_sf_mf_1170 = t833 * t833 * 3.0 - t833 * t833 * t833
* 2.0 ; if ( 1.01325 - t1127 <= 0.0 ) { t833 = t1191 ; } else if ( 1.01325 -
t1127 >= t1190 ) { t833 = t1177 ; } else { t833 = ( 1.0 - intrm_sf_mf_1170 )
* t1191 + t1177 * intrm_sf_mf_1170 ; } if ( t1127 > 1.01325 ) { t1177 = t1192
; } else { t1177 = t1127 < 1.01325 ? t833 : t1191 ; } if ( X [ 365ULL ] <=
216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [ 365ULL
] >= 623.15 ? 623.15 : X [ 365ULL ] ; } t1196 = t833 * t833 ;
intrm_sf_mf_1170 = ( ( ( 1074.1165326382641 + t833 * - 0.2214565261064495 ) +
t1196 * 0.00037212980109014541 ) * ( ( 1.0 - t1179 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t1196 * -
0.00038614513167823636 ) * t1179 ) + ( ( 900.63941224838356 + t833 * -
0.044484923911382625 ) + t1196 * 0.00036936011832044979 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; t1518 =
intrm_sf_mf_1170 - t1183 ; t1518 = X [ 366ULL ] * X [ 366ULL ] * (
intrm_sf_mf_1170 / ( t1518 == 0.0 ? 1.0E-16 : t1518 ) ) ; t1179 = pmf_sqrt (
fabs ( t1518 / ( t1183 == 0.0 ? 1.0E-16 : t1183 ) / ( X [ 365ULL ] == 0.0 ?
1.0E-16 : X [ 365ULL ] ) ) ) * intrm_sf_mf_1151 * 0.64 ; if ( X [ 14ULL ] <=
0.0 ) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X [ 14ULL
] >= 1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) { t1189 = 0.0 ; }
else { t1189 = X [ 13ULL ] >= 1.0 ? 1.0 : X [ 13ULL ] ; } t1191 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) - t1189 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
* 461.523 ) + t1189 * 259.836612622973 ; t1192 = - ( ( X [ 12ULL ] / ( X [
49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) - X [ 372ULL ] / ( X [ 373ULL ] ==
0.0 ? 1.0E-16 : X [ 373ULL ] ) ) * X [ 312ULL ] * t1191 ) / 0.32 ; if ( X [
372ULL ] <= 216.59999999999997 ) { intrm_sf_mf_52 = 216.59999999999997 ; }
else { intrm_sf_mf_52 = X [ 372ULL ] >= 623.15 ? 623.15 : X [ 372ULL ] ; }
t1197 = intrm_sf_mf_52 * intrm_sf_mf_52 ; t1195 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_52 * - 0.2214565261064495 ) + t1197 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) -
t1189 ) + ( ( 1479.6504774711011 + intrm_sf_mf_52 * 1.2002114337048222 ) +
t1197 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + intrm_sf_mf_52 * - 0.044484923911382625 ) + t1197 *
0.00036936011832044979 ) * t1189 ; t1527 = t1195 - t1191 ; t1196 = t1195 / (
t1527 == 0.0 ? 1.0E-16 : t1527 ) ; t1197 = pmf_sqrt ( t1192 * t1192 *
9.999999999999999E-14 + fabs ( X [ 372ULL ] * t1196 * t1191 ) * 1.0E-9 ) ; if
( X [ 86ULL ] <= 0.0 ) { t1199 = 0.0 ; } else { t1199 = X [ 86ULL ] >= 1.0 ?
1.0 : X [ 86ULL ] ; } if ( X [ 85ULL ] <= 0.0 ) { t1200 = 0.0 ; } else {
t1200 = X [ 85ULL ] >= 1.0 ? 1.0 : X [ 85ULL ] ; } t540 [ 0ULL ] = X [ 12ULL
] ; tlu2_linear_nearest_prelookup ( & of_efOut . mField0 [ 0ULL ] , &
of_efOut . mField1 [ 0ULL ] , & of_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t55 = of_efOut ; tlu2_1d_linear_nearest_value ( & pf_efOut
[ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = pf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qf_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = qf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rf_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = rf_efOut [ 0 ] ; t1201 = ( ( ( 1.0 - t1199 ) - t1200 ) *
t537_idx_0 + t542_idx_0 * t1199 ) + t539_idx_0 * t1200 ; t1527 = X [ 373ULL ]
* X [ 373ULL ] * t1196 ; t1202 = - pmf_sqrt ( fabs ( t1527 / ( t1191 == 0.0 ?
1.0E-16 : t1191 ) / ( X [ 372ULL ] == 0.0 ? 1.0E-16 : X [ 372ULL ] ) ) ) *
0.32 ; if ( t1202 >= 0.0 ) { t1203 = t1202 * 100000.0 ; } else { t1203 = -
t1202 * 100000.0 ; } U_idx_8 = t1201 * 0.32 ; intrm_sf_mf_52 = t1203 * 0.01 /
( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) ; t833 = X [ 12ULL ] * t1191 ; t1205 =
X [ 49ULL ] / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; t1566 = t1205 *
6.4000000000000011E-5 ; t1208 = t1202 * t1201 * 2.9973120849090416 / ( t1566
== 0.0 ? 1.0E-16 : t1566 ) ; t1209 = intrm_sf_mf_52 >= 1.0 ? intrm_sf_mf_52 :
1.0 ; t833 = pmf_log10 ( 6.9 / ( t1209 == 0.0 ? 1.0E-16 : t1209 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1209 == 0.0 ? 1.0E-16 : t1209
) + 0.00017169489553429715 ) * 3.24 ; t1575 = t1205 * 0.0020480000000000003 ;
t1203 = t1202 * t1203 * ( 1.0 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ) *
0.046833001326703774 / ( t1575 == 0.0 ? 1.0E-16 : t1575 ) ; t1210 = (
intrm_sf_mf_52 - 2000.0 ) / 2000.0 ; t833 = t1210 * t1210 * 3.0 - t1210 *
t1210 * t1210 * 2.0 ; if ( intrm_sf_mf_52 <= 2000.0 ) { t1210 = t1208 *
1.0E-5 ; } else if ( intrm_sf_mf_52 >= 4000.0 ) { t1210 = t1203 * 1.0E-5 ; }
else { t1210 = ( ( 1.0 - t833 ) * t1208 + t1203 * t833 ) * 1.0E-5 ; } t1197 =
- ( X [ 312ULL ] * t1197 ) / 0.32 * 0.00031622776601683789 + t1210 ; t1203 =
( X [ 12ULL ] / ( X [ 49ULL ] == 0.0 ? 1.0E-16 : X [ 49ULL ] ) - X [ 375ULL ]
/ ( X [ 376ULL ] == 0.0 ? 1.0E-16 : X [ 376ULL ] ) ) * X [ 374ULL ] * t1191 /
0.32 ; if ( X [ 375ULL ] <= 216.59999999999997 ) { intrm_sf_mf_52 =
216.59999999999997 ; } else { intrm_sf_mf_52 = X [ 375ULL ] >= 623.15 ?
623.15 : X [ 375ULL ] ; } t1212 = intrm_sf_mf_52 * intrm_sf_mf_52 ; t1208 = (
( ( 1074.1165326382641 + intrm_sf_mf_52 * - 0.2214565261064495 ) + t1212 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) - t1189 ) + ( (
1479.6504774711011 + intrm_sf_mf_52 * 1.2002114337048222 ) + t1212 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ) + ( (
900.63941224838356 + intrm_sf_mf_52 * - 0.044484923911382625 ) + t1212 *
0.00036936011832044979 ) * t1189 ; t1547 = t1208 - t1191 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t1208 / ( t1547
== 0.0 ? 1.0E-16 : t1547 ) ; t1189 = pmf_sqrt ( t1203 * t1203 *
9.999999999999999E-14 + fabs ( X [ 375ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t1191 ) * 1.0E-9
) ; t1547 = X [ 376ULL ] * X [ 376ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI ; t1210 = -
pmf_sqrt ( fabs ( t1547 / ( t1191 == 0.0 ? 1.0E-16 : t1191 ) / ( X [ 375ULL ]
== 0.0 ? 1.0E-16 : X [ 375ULL ] ) ) ) * 0.32 ; if ( t1210 >= 0.0 ) { t833 =
t1210 * 100000.0 ; } else { t833 = - t1210 * 100000.0 ; } t1212 = t833 * 0.01
/ ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) ; t1213 = t1210 * t1201 *
2.9973120849090416 / ( t1566 == 0.0 ? 1.0E-16 : t1566 ) ; t1214 = t1212 >=
1.0 ? t1212 : 1.0 ; t1563 = pmf_log10 ( 6.9 / ( t1214 == 0.0 ? 1.0E-16 :
t1214 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1214 == 0.0 ?
1.0E-16 : t1214 ) + 0.00017169489553429715 ) * 3.24 ; t833 = t1210 * t833 * (
1.0 / ( t1563 == 0.0 ? 1.0E-16 : t1563 ) ) * 0.046833001326703774 / ( t1575
== 0.0 ? 1.0E-16 : t1575 ) ; t1215 = ( t1212 - 2000.0 ) / 2000.0 ; t1216 =
t1215 * t1215 * 3.0 - t1215 * t1215 * t1215 * 2.0 ; if ( t1212 <= 2000.0 ) {
t1215 = t1213 * 1.0E-5 ; } else if ( t1212 >= 4000.0 ) { t1215 = t833 *
1.0E-5 ; } else { t1215 = ( ( 1.0 - t1216 ) * t1213 + t833 * t1216 ) * 1.0E-5
; } t1189 = X [ 374ULL ] * t1189 / 0.32 * 0.00031622776601683789 + t1215 ; if
( 1.0 - X [ 14ULL ] >= 0.01 ) { t1212 = 1.0 - X [ 14ULL ] ; } else if ( 1.0 -
X [ 14ULL ] >= - 0.1 ) { t1212 = pmf_exp ( ( ( 1.0 - X [ 14ULL ] ) - 0.01 ) /
0.01 ) * 0.01 ; } else { t1212 = 1.6701700790245661E-7 ; } t1213 = X [ 13ULL
] / ( t1212 == 0.0 ? 1.0E-16 : t1212 ) * - 36.965491221318985 +
296.802103844292 ; t540 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_linear_prelookup
( & sf_efOut . mField0 [ 0ULL ] , & sf_efOut . mField1 [ 0ULL ] , & sf_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [
0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t50 = sf_efOut ;
tlu2_1d_linear_linear_value ( & tf_efOut [ 0ULL ] , & t50 . mField0 [ 0ULL ]
, & t50 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t423 [ 0 ] = tf_efOut [ 0 ] ; t1215 =
pmf_exp ( pmf_log ( X [ 49ULL ] * 100000.0 ) - t423 [ 0ULL ] ) ; if ( t1215
>= 1.0 ) { t1563 = ( t1215 - 1.0 ) * 461.523 + t1213 ; t1216 = t1213 / (
t1563 == 0.0 ? 1.0E-16 : t1563 ) ; } else { t1216 = 1.0 ; }
tlu2_1d_linear_nearest_value ( & uf_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = uf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vf_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = vf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wf_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = wf_efOut [ 0 ] ;
intrm_sf_mf_52 = ( ( ( 1.0 - t1199 ) - t1200 ) * t537_idx_0 + t542_idx_0 *
t1199 ) + t539_idx_0 * t1200 ; t1199 = ( - X [ 312ULL ] - X [ 374ULL ] ) /
2.0 ; t1563 = t1201 + intrm_sf_mf_1241 ; t1575 = t1563 / 2.0 * 0.32 ;
intrm_sf_mf_1241 = ( t1199 >= 0.0 ? t1199 : 0.0 ) * 0.01 / ( t1575 == 0.0 ?
1.0E-16 : t1575 ) ; t1200 = intrm_sf_mf_1241 >= 0.0 ? intrm_sf_mf_1241 : -
intrm_sf_mf_1241 ; intrm_sf_mf_1241 = t1200 > 1000.0 ? t1200 : 1000.0 ; t1566
= pmf_log10 ( 6.9 / ( intrm_sf_mf_1241 == 0.0 ? 1.0E-16 : intrm_sf_mf_1241 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1241 == 0.0 ?
1.0E-16 : intrm_sf_mf_1241 ) + 0.00017169489553429715 ) * 3.24 ; t1219 = 1.0
/ ( t1566 == 0.0 ? 1.0E-16 : t1566 ) ; t1566 = intrm_sf_mf_52 + t1114 ; if (
( pmf_pow ( t1566 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1219 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1599 = ( pmf_pow ( ( intrm_sf_mf_52 + t1114
) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1219 / 8.0 ) * 12.7 +
1.0 ; t1220 = ( intrm_sf_mf_1241 - 1000.0 ) * ( t1219 / 8.0 ) * ( (
intrm_sf_mf_52 + t1114 ) / 2.0 ) / ( t1599 == 0.0 ? 1.0E-16 : t1599 ) ; }
else { t1220 = ( intrm_sf_mf_1241 - 1000.0 ) * ( t1219 / 8.0 ) * ( (
intrm_sf_mf_52 + t1114 ) / 2.0 ) / 1.0E-6 ; } t1221 = ( t1200 - 2000.0 ) /
2000.0 ; intrm_sf_mf_1252 = t1221 * t1221 * 3.0 - t1221 * t1221 * t1221 * 2.0
; if ( t1200 <= 2000.0 ) { t1221 = 3.66 ; } else if ( t1200 >= 4000.0 ) {
t1221 = t1220 ; } else { t1221 = ( 1.0 - intrm_sf_mf_1252 ) * 3.66 + t1220 *
intrm_sf_mf_1252 ; } t1575 = t1221 * 10.709248339636167 ; t1581 = t1566 / 2.0
; if ( t1200 > t1575 / 0.32 / ( t1581 == 0.0 ? 1.0E-16 : t1581 ) / 30.0 ) {
t833 = ( intrm_sf_mf_52 + t1114 ) / 2.0 ; t1220 = t1221 * 10.709248339636167
/ ( t1200 == 0.0 ? 1.0E-16 : t1200 ) / 0.32 / ( t833 == 0.0 ? 1.0E-16 : t833
) ; } else { t1220 = 30.0 ; } if ( X [ 71ULL ] <= 0.0 ) { t1114 = 0.0 ; }
else { t1114 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL ] <=
0.0 ) { t1221 = 0.0 ; } else { t1221 = X [ 70ULL ] >= 1.0 ? 1.0 : X [ 70ULL ]
; } intrm_sf_mf_1252 = ( ( ( 1.0 - t1114 ) - t1221 ) * 296.802103844292 +
t1114 * 461.523 ) + t1221 * 259.836612622973 ; t1114 = X [ 71ULL ] * 461.523
/ ( intrm_sf_mf_1252 == 0.0 ? 1.0E-16 : intrm_sf_mf_1252 ) ; if ( t1114 <=
0.0 ) { t1221 = 0.0 ; } else { t1221 = t1114 >= 1.0 ? 1.0 : t1114 ; } t1114 =
X [ 70ULL ] * 259.836612622973 / ( intrm_sf_mf_1252 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1252 ) ; if ( t1114 <= 0.0 ) { t1224 = 0.0 ; } else { t1224 =
t1114 >= 1.0 ? 1.0 : t1114 ; } t540 [ 0ULL ] = X [ 68ULL ] ;
tlu2_linear_nearest_prelookup ( & xf_efOut . mField0 [ 0ULL ] , & xf_efOut .
mField1 [ 0ULL ] , & xf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t55
= xf_efOut ; tlu2_1d_linear_nearest_value ( & yf_efOut [ 0ULL ] , & t55 .
mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = yf_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ag_efOut [ 0ULL ] , & t55 . mField0 [
0ULL ] , & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ag_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bg_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t539_idx_0 = bg_efOut [ 0 ] ; t1114 = ( (
( 1.0 - t1221 ) - t1224 ) * t537_idx_0 + t542_idx_0 * t1221 ) + t539_idx_0 *
t1224 ; t1225 = t1199 <= 0.0 ? t1199 : 0.0 ; tlu2_1d_linear_nearest_value ( &
cg_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = cg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & dg_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = dg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & eg_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = eg_efOut [ 0 ] ; t1199 = ( ( ( 1.0 - t1221 ) - t1224 ) *
t537_idx_0 + t542_idx_0 * t1221 ) + t539_idx_0 * t1224 ; t1580 = t1201 +
t1199 ; t1599 = t1580 / 2.0 * 0.32 ; t1221 = - t1225 * 0.01 / ( t1599 == 0.0
? 1.0E-16 : t1599 ) ; t1224 = t1221 >= 0.0 ? t1221 : - t1221 ; t1221 = t1224
> 1000.0 ? t1224 : 1000.0 ; t1581 = pmf_log10 ( 6.9 / ( t1221 == 0.0 ?
1.0E-16 : t1221 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1221 ==
0.0 ? 1.0E-16 : t1221 ) + 0.00017169489553429715 ) * 3.24 ; t1225 = 1.0 / (
t1581 == 0.0 ? 1.0E-16 : t1581 ) ; t1581 = intrm_sf_mf_52 + t1114 ; if ( (
pmf_pow ( t1581 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1225 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t833 = ( pmf_pow ( ( intrm_sf_mf_52 + t1114
) / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1225 / 8.0 ) * 12.7 +
1.0 ; t1226 = ( t1221 - 1000.0 ) * ( t1225 / 8.0 ) * ( ( intrm_sf_mf_52 +
t1114 ) / 2.0 ) / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else { t1226 = ( t1221
- 1000.0 ) * ( t1225 / 8.0 ) * ( ( intrm_sf_mf_52 + t1114 ) / 2.0 ) / 1.0E-6
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = ( t1224 -
2000.0 ) / 2000.0 ; t1228 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * 2.0 ; if (
t1224 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = 3.66 ; } else
if ( t1224 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = t1226 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = ( 1.0 - t1228
) * 3.66 + t1226 * t1228 ; } t1599 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
10.709248339636167 ; t1651 = t1581 / 2.0 ; if ( t1224 > t1599 / 0.32 / (
t1651 == 0.0 ? 1.0E-16 : t1651 ) / 30.0 ) { U_idx_2 = ( intrm_sf_mf_52 +
t1114 ) / 2.0 ; t1226 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
10.709248339636167 / ( t1224 == 0.0 ? 1.0E-16 : t1224 ) / 0.32 / ( U_idx_2 ==
0.0 ? 1.0E-16 : U_idx_2 ) ; } else { t1226 = 30.0 ; } if ( X [ 17ULL ] <= 0.0
) { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = X [
17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if ( X [ 16ULL ] <= 0.0 ) { t1228 =
0.0 ; } else { t1228 = X [ 16ULL ] >= 1.0 ? 1.0 : X [ 16ULL ] ; } t1229 = ( (
( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) - t1228
) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * 461.523 ) +
t1228 * 259.836612622973 ; t1232 = - ( ( X [ 15ULL ] / ( X [ 50ULL ] == 0.0 ?
1.0E-16 : X [ 50ULL ] ) - X [ 386ULL ] / ( X [ 387ULL ] == 0.0 ? 1.0E-16 : X
[ 387ULL ] ) ) * X [ 374ULL ] * t1229 ) / 0.32 ; if ( X [ 386ULL ] <=
216.59999999999997 ) { t833 = 216.59999999999997 ; } else { t833 = X [ 386ULL
] >= 623.15 ? 623.15 : X [ 386ULL ] ; } t1235 = t833 * t833 ; t1234 = ( ( (
1074.1165326382641 + t833 * - 0.2214565261064495 ) + t1235 *
0.00037212980109014541 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) - t1228 ) + ( (
1479.6504774711011 + t833 * 1.2002114337048222 ) + t1235 * -
0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) + ( (
900.63941224838356 + t833 * - 0.044484923911382625 ) + t1235 *
0.00036936011832044979 ) * t1228 ; t1615 = t1234 - t1229 ; t1235 = t1234 / (
t1615 == 0.0 ? 1.0E-16 : t1615 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_choked = pmf_sqrt (
t1232 * t1232 * 9.999999999999999E-14 + fabs ( X [ 386ULL ] * t1235 * t1229 )
* 1.0E-9 ) ; if ( X [ 91ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = X [ 91ULL ] >=
1.0 ? 1.0 : X [ 91ULL ] ; } if ( X [ 90ULL ] <= 0.0 ) { t1238 = 0.0 ; } else
{ t1238 = X [ 90ULL ] >= 1.0 ? 1.0 : X [ 90ULL ] ; } t540 [ 0ULL ] = X [
15ULL ] ; tlu2_linear_nearest_prelookup ( & fg_efOut . mField0 [ 0ULL ] , &
fg_efOut . mField1 [ 0ULL ] , & fg_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] ,
& t64 [ 0ULL ] ) ; t55 = fg_efOut ; tlu2_1d_linear_nearest_value ( & gg_efOut
[ 0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t537_idx_0 = gg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hg_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t542_idx_0 = hg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ig_efOut [
0ULL ] , & t55 . mField0 [ 0ULL ] , & t55 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t63 [ 0ULL ] , & t64 [ 0ULL ] )
; t539_idx_0 = ig_efOut [ 0 ] ; t1239 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) - t1238 ) *
t537_idx_0 + t542_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) + t539_idx_0 *
t1238 ; t1615 = X [ 387ULL ] * X [ 387ULL ] * t1235 ; t1240 = - pmf_sqrt (
fabs ( t1615 / ( t1229 == 0.0 ? 1.0E-16 : t1229 ) / ( X [ 386ULL ] == 0.0 ?
1.0E-16 : X [ 386ULL ] ) ) ) * 0.32 ; if ( t1240 >= 0.0 ) { t1241 = t1240 *
100000.0 ; } else { t1241 = - t1240 * 100000.0 ; } U_idx_2 = t1239 * 0.32 ;
intrm_sf_mf_52 = t1241 * 0.01 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t833
= X [ 15ULL ] * t1229 ; t1244 = X [ 50ULL ] / ( t833 == 0.0 ? 1.0E-16 : t833
) ; t1655 = t1244 * 6.4000000000000011E-5 ; t1245 = t1240 * t1239 *
2.9973120849090416 / ( t1655 == 0.0 ? 1.0E-16 : t1655 ) ; t1247 =
intrm_sf_mf_52 >= 1.0 ? intrm_sf_mf_52 : 1.0 ; t833 = pmf_log10 ( 6.9 / (
t1247 == 0.0 ? 1.0E-16 : t1247 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t1247 == 0.0 ? 1.0E-16 : t1247 ) + 0.00017169489553429715 ) * 3.24 ;
t1663 = t1244 * 0.0020480000000000003 ; t1241 = t1240 * t1241 * ( 1.0 / (
t833 == 0.0 ? 1.0E-16 : t833 ) ) * 0.046833001326703774 / ( t1663 == 0.0 ?
1.0E-16 : t1663 ) ; t1249 = ( intrm_sf_mf_52 - 2000.0 ) / 2000.0 ; U_idx_1 =
t1249 * t1249 * 3.0 - t1249 * t1249 * t1249 * 2.0 ; if ( intrm_sf_mf_52 <=
2000.0 ) { t1249 = t1245 * 1.0E-5 ; } else if ( intrm_sf_mf_52 >= 4000.0 ) {
t1249 = t1241 * 1.0E-5 ; } else { t1249 = ( ( 1.0 - U_idx_1 ) * t1245 + t1241
* U_idx_1 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_choked = - ( X [
374ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_choked )
/ 0.32 * 0.00031622776601683789 + t1249 ; t1241 = - ( ( X [ 15ULL ] / ( X [
50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) - X [ 388ULL ] / ( X [ 389ULL ] ==
0.0 ? 1.0E-16 : X [ 389ULL ] ) ) * X [ 347ULL ] * t1229 ) / 0.32 ; if ( X [
388ULL ] <= 216.59999999999997 ) { intrm_sf_mf_52 = 216.59999999999997 ; }
else { intrm_sf_mf_52 = X [ 388ULL ] >= 623.15 ? 623.15 : X [ 388ULL ] ; }
t1253 = intrm_sf_mf_52 * intrm_sf_mf_52 ; t1245 = ( ( ( 1074.1165326382641 +
intrm_sf_mf_52 * - 0.2214565261064495 ) + t1253 * 0.00037212980109014541 ) *
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) -
t1228 ) + ( ( 1479.6504774711011 + intrm_sf_mf_52 * 1.2002114337048222 ) +
t1253 * - 0.00038614513167823636 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ) + ( (
900.63941224838356 + intrm_sf_mf_52 * - 0.044484923911382625 ) + t1253 *
0.00036936011832044979 ) * t1228 ; t1635 = t1245 - t1229 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI = t1245 / ( t1635
== 0.0 ? 1.0E-16 : t1635 ) ; t1228 = pmf_sqrt ( t1241 * t1241 *
9.999999999999999E-14 + fabs ( X [ 388ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * t1229 ) *
1.0E-9 ) ; t1635 = X [ 389ULL ] * X [ 389ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI ; t1249 = -
pmf_sqrt ( fabs ( t1635 / ( t1229 == 0.0 ? 1.0E-16 : t1229 ) / ( X [ 388ULL ]
== 0.0 ? 1.0E-16 : X [ 388ULL ] ) ) ) * 0.32 ; if ( t1249 >= 0.0 ) { U_idx_1
= t1249 * 100000.0 ; } else { U_idx_1 = - t1249 * 100000.0 ; } t768 = U_idx_1
* 0.01 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t1253 = t1249 * t1239 *
2.9973120849090416 / ( t1655 == 0.0 ? 1.0E-16 : t1655 ) ; t1254 = t768 >= 1.0
? t768 : 1.0 ; t1651 = pmf_log10 ( 6.9 / ( t1254 == 0.0 ? 1.0E-16 : t1254 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1254 == 0.0 ? 1.0E-16 : t1254
) + 0.00017169489553429715 ) * 3.24 ; U_idx_1 = t1249 * U_idx_1 * ( 1.0 / (
t1651 == 0.0 ? 1.0E-16 : t1651 ) ) * 0.046833001326703774 / ( t1663 == 0.0 ?
1.0E-16 : t1663 ) ; t1255 = ( t768 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I = t1255 * t1255 *
3.0 - t1255 * t1255 * t1255 * 2.0 ; if ( t768 <= 2000.0 ) { t1255 = t1253 *
1.0E-5 ; } else if ( t768 >= 4000.0 ) { t1255 = U_idx_1 * 1.0E-5 ; } else {
t1255 = ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I )
* t1253 + U_idx_1 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I
) * 1.0E-5 ; } t1228 = - ( X [ 347ULL ] * t1228 ) / 0.32 *
0.00031622776601683789 + t1255 ; if ( 1.0 - X [ 17ULL ] >= 0.01 ) { t768 =
1.0 - X [ 17ULL ] ; } else if ( 1.0 - X [ 17ULL ] >= - 0.1 ) { t768 = pmf_exp
( ( ( 1.0 - X [ 17ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t768 =
1.6701700790245661E-7 ; } t1253 = X [ 16ULL ] / ( t768 == 0.0 ? 1.0E-16 :
t768 ) * - 36.965491221318985 + 296.802103844292 ; t540 [ 0ULL ] = X [ 15ULL
] ; tlu2_linear_linear_prelookup ( & jg_efOut . mField0 [ 0ULL ] , & jg_efOut
. mField1 [ 0ULL ] , & jg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t540 [ 0ULL ] , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ;
t51 = jg_efOut ; tlu2_1d_linear_linear_value ( & kg_efOut [ 0ULL ] , & t51 .
mField0 [ 0ULL ] , & t51 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t62 [ 0 ] = kg_efOut [ 0 ]
; t1255 = pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) - t62 [ 0ULL ] ) ; if
( t1255 >= 1.0 ) { t1651 = ( t1255 - 1.0 ) * 461.523 + t1253 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I = t1253 / ( t1651
== 0.0 ? 1.0E-16 : t1651 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I = 1.0 ; }
tlu2_1d_linear_nearest_value ( & lg_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t540 [ 0 ] = lg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mg_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t537_idx_0 = mg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ng_efOut [ 0ULL ] , & t55 . mField0 [ 0ULL ]
, & t55 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t63 [ 0ULL ] , & t64 [ 0ULL ] ) ; t542_idx_0 = ng_efOut [ 0 ] ; U_idx_1 = (
( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) -
t1238 ) * t540 [ 0ULL ] + t537_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg ) + t542_idx_0 *
t1238 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = ( - X [
374ULL ] - ( - X [ 347ULL ] ) ) / 2.0 ; t1651 = t1199 + t1239 ; t1663 = t1651
/ 2.0 * 0.32 ; t1199 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg : 0.0 ) * 0.01 /
( t1663 == 0.0 ? 1.0E-16 : t1663 ) ; t1238 = t1199 >= 0.0 ? t1199 : - t1199 ;
t1199 = t1238 > 1000.0 ? t1238 : 1000.0 ; t1655 = pmf_log10 ( 6.9 / ( t1199
== 0.0 ? 1.0E-16 : t1199 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t1199 == 0.0 ? 1.0E-16 : t1199 ) + 0.00017169489553429715 ) * 3.24 ; t1258 =
1.0 / ( t1655 == 0.0 ? 1.0E-16 : t1655 ) ; t1655 = t1114 + U_idx_1 ; if ( (
pmf_pow ( t1655 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1258 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) { t1684 = ( pmf_pow ( ( t1114 + U_idx_1 ) /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1258 / 8.0 ) * 12.7 + 1.0 ;
t1259 = ( t1199 - 1000.0 ) * ( t1258 / 8.0 ) * ( ( t1114 + U_idx_1 ) / 2.0 )
/ ( t1684 == 0.0 ? 1.0E-16 : t1684 ) ; } else { t1259 = ( t1199 - 1000.0 ) *
( t1258 / 8.0 ) * ( ( t1114 + U_idx_1 ) / 2.0 ) / 1.0E-6 ; } t1263 = ( t1238
- 2000.0 ) / 2000.0 ; t1264 = t1263 * t1263 * 3.0 - t1263 * t1263 * t1263 *
2.0 ; if ( t1238 <= 2000.0 ) { t1263 = 3.66 ; } else if ( t1238 >= 4000.0 ) {
t1263 = t1259 ; } else { t1263 = ( 1.0 - t1264 ) * 3.66 + t1259 * t1264 ; }
t1663 = t1263 * 10.709248339636167 ; t1677 = t1655 / 2.0 ; if ( t1238 > t1663
/ 0.32 / ( t1677 == 0.0 ? 1.0E-16 : t1677 ) / 30.0 ) { t833 = ( t1114 +
U_idx_1 ) / 2.0 ; t1259 = t1263 * 10.709248339636167 / ( t1238 == 0.0 ?
1.0E-16 : t1238 ) / 0.32 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else { t1259
= 30.0 ; } t1673 = t1167 + t1239 ; t1684 = t1673 / 2.0 * 0.32 ; t1114 = - (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg <= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg : 0.0 ) * 0.01 /
( t1684 == 0.0 ? 1.0E-16 : t1684 ) ; t1167 = t1114 >= 0.0 ? t1114 : - t1114 ;
t1114 = t1167 > 1000.0 ? t1167 : 1000.0 ; t1677 = pmf_log10 ( 6.9 / ( t1114
== 0.0 ? 1.0E-16 : t1114 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t1114 == 0.0 ? 1.0E-16 : t1114 ) + 0.00017169489553429715 ) * 3.24 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg = 1.0 / ( t1677
== 0.0 ? 1.0E-16 : t1677 ) ; t1677 = intrm_sf_mf_829 + U_idx_1 ; if ( (
pmf_pow ( t1677 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) { t833 = ( pmf_pow ( ( intrm_sf_mf_829 + U_idx_1 ) / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 ; t1263 = ( t1114 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * ( (
intrm_sf_mf_829 + U_idx_1 ) / 2.0 ) / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; }
else { t1263 = ( t1114 - 1000.0 ) * (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * ( (
intrm_sf_mf_829 + U_idx_1 ) / 2.0 ) / 1.0E-6 ; } t1264 = ( t1167 - 2000.0 ) /
2000.0 ; t833 = t1264 * t1264 * 3.0 - t1264 * t1264 * t1264 * 2.0 ; if (
t1167 <= 2000.0 ) { t1264 = 3.66 ; } else if ( t1167 >= 4000.0 ) { t1264 =
t1263 ; } else { t1264 = ( 1.0 - t833 ) * 3.66 + t1263 * t833 ; } t1684 =
t1264 * 10.709248339636167 ; t833 = t1677 / 2.0 ; if ( t1167 > t1684 / 0.32 /
( t833 == 0.0 ? 1.0E-16 : t833 ) / 30.0 ) { t833 = ( intrm_sf_mf_829 +
U_idx_1 ) / 2.0 ; t1263 = t1264 * 10.709248339636167 / ( t1167 == 0.0 ?
1.0E-16 : t1167 ) / 0.32 / ( t833 == 0.0 ? 1.0E-16 : t833 ) ; } else { t1263
= 30.0 ; } U_idx_1 = ( X [ 312ULL ] >= 0.0 ? X [ 312ULL ] : - X [ 312ULL ] )
* 0.05 / ( t1336 == 0.0 ? 1.0E-16 : t1336 ) ; t1264 = U_idx_1 >= 1.0 ?
U_idx_1 : 1.0 ; t833 = ( X [ 347ULL ] >= 0.0 ? X [ 347ULL ] : - X [ 347ULL ]
) * 0.05 / ( t1725 == 0.0 ? 1.0E-16 : t1725 ) ; t1267 = t833 >= 1.0 ? t833 :
1.0 ; if ( - X [ 335ULL ] >= 0.0 ) { t833 = - X [ 335ULL ] ; } else { t833 =
X [ 335ULL ] ; } t833 = t833 * 0.05 / ( t1725 == 0.0 ? 1.0E-16 : t1725 ) ;
t1725 = t833 >= 1.0 ? t833 : 1.0 ; if ( - X [ 312ULL ] >= 0.0 ) { t833 = - X
[ 312ULL ] ; } else { t833 = X [ 312ULL ] ; } t833 = t833 * 0.01 / ( U_idx_8
== 0.0 ? 1.0E-16 : U_idx_8 ) ; t1271 = t833 >= 1.0 ? t833 : 1.0 ; t833 = ( X
[ 374ULL ] >= 0.0 ? X [ 374ULL ] : - X [ 374ULL ] ) * 0.01 / ( U_idx_8 == 0.0
? 1.0E-16 : U_idx_8 ) ; t1273 = t833 >= 1.0 ? t833 : 1.0 ; if ( - X [ 374ULL
] >= 0.0 ) { t537_idx_0 = - X [ 374ULL ] ; } else { t537_idx_0 = X [ 374ULL ]
; } t537_idx_0 = t537_idx_0 * 0.01 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ;
t542_idx_0 = t537_idx_0 >= 1.0 ? t537_idx_0 : 1.0 ; t833 = ( X [ 134ULL ] >=
0.0 ? X [ 134ULL ] : - X [ 134ULL ] ) * 0.01 / ( t852 == 0.0 ? 1.0E-16 : t852
) ; if ( - X [ 347ULL ] >= 0.0 ) { t537_idx_0 = - X [ 347ULL ] ; } else {
t537_idx_0 = X [ 347ULL ] ; } t537_idx_0 = t537_idx_0 * 0.01 / ( U_idx_2 ==
0.0 ? 1.0E-16 : U_idx_2 ) ; U_idx_8 = t537_idx_0 >= 1.0 ? t537_idx_0 : 1.0 ;
t537_idx_0 = t833 >= 1.0 ? t833 : 1.0 ; if ( U_idx_9 >= 1.0 ) { t833 = 1.0 ;
} else { t833 = U_idx_9 <= 0.0 ? 0.0 : U_idx_9 ; } intrm_sf_mf_1457 = ( fabs
( t833 - U_idx_9 ) > 0.001 ) ; if ( - X [ 122ULL ] >= 0.0 ) { t833 = - X [
122ULL ] ; } else { t833 = X [ 122ULL ] ; } t833 = t833 * 0.01 / ( t852 ==
0.0 ? 1.0E-16 : t852 ) ; t852 = t833 >= 1.0 ? t833 : 1.0 ; if ( - X [ 172ULL
] >= 0.0 ) { t833 = - X [ 172ULL ] ; } else { t833 = X [ 172ULL ] ; } t833 =
t833 * 0.01 / ( t961 == 0.0 ? 1.0E-16 : t961 ) ; intrm_sf_mf_829 = t833 >=
1.0 ? t833 : 1.0 ; t833 = ( X [ 186ULL ] >= 0.0 ? X [ 186ULL ] : - X [ 186ULL
] ) * 0.01 / ( t961 == 0.0 ? 1.0E-16 : t961 ) ; t961 = t833 >= 1.0 ? t833 :
1.0 ; if ( - X [ 186ULL ] >= 0.0 ) { t833 = - X [ 186ULL ] ; } else { t833 =
X [ 186ULL ] ; } t833 = t833 * 0.05 / ( t1074 == 0.0 ? 1.0E-16 : t1074 ) ;
intrm_sf_mf_52 = t833 >= 1.0 ? t833 : 1.0 ; t833 = ( X [ 263ULL ] >= 0.0 ? X
[ 263ULL ] : - X [ 263ULL ] ) * 0.05 / ( t1074 == 0.0 ? 1.0E-16 : t1074 ) ;
t1074 = t833 >= 1.0 ? t833 : 1.0 ; if ( - X [ 263ULL ] >= 0.0 ) { t833 = - X
[ 263ULL ] ; } else { t833 = X [ 263ULL ] ; } t833 = t833 * 0.01 / ( t1162 ==
0.0 ? 1.0E-16 : t1162 ) ; U_idx_1 = t833 >= 1.0 ? t833 : 1.0 ; t833 = ( X [
277ULL ] >= 0.0 ? X [ 277ULL ] : - X [ 277ULL ] ) * 0.01 / ( t1162 == 0.0 ?
1.0E-16 : t1162 ) ; t1162 = t833 >= 1.0 ? t833 : 1.0 ; if ( - X [ 277ULL ] >=
0.0 ) { t833 = - X [ 277ULL ] ; } else { t833 = X [ 277ULL ] ; } t833 = t833
* 0.01 / ( t1250 == 0.0 ? 1.0E-16 : t1250 ) ; t539_idx_0 = t833 >= 1.0 ? t833
: 1.0 ; if ( - X [ 134ULL ] >= 0.0 ) { t833 = - X [ 134ULL ] ; } else { t833
= X [ 134ULL ] ; } t833 = t833 * 0.01 / ( t1250 == 0.0 ? 1.0E-16 : t1250 ) ;
t1250 = t833 >= 1.0 ? t833 : 1.0 ; if ( - X [ 244ULL ] >= 0.0 ) { t833 = - X
[ 244ULL ] ; } else { t833 = X [ 244ULL ] ; } t833 = t833 * 0.05 / ( t1336 ==
0.0 ? 1.0E-16 : t1336 ) ; U_idx_2 = t833 >= 1.0 ? t833 : 1.0 ; if ( U_idx_4
>= 0.0 ) { t56 = true ; } else { t56 = ( X [ 37ULL ] > 0.0 ) ; } if ( X [
104ULL ] >= 0.0 ) { t57 = true ; } else { t57 = ( X [ 11ULL ] > 0.0 ) ; } if
( X [ 98ULL ] >= 0.0 ) { t58 = true ; } else { t58 = ( X [ 10ULL ] > 0.0 ) ;
} if ( U_idx_6 >= 0.0 ) { t59 = true ; } else { t59 = ( X [ 43ULL ] > 0.0 ) ;
} if ( X [ 105ULL ] >= 0.0 ) { t60 = true ; } else { t60 = ( X [ 17ULL ] >
0.0 ) ; } if ( X [ 100ULL ] >= 0.0 ) { t61 = true ; } else { t61 = ( X [
16ULL ] > 0.0 ) ; } t422 [ 0ULL ] = ( int32_T ) ( t2179 >= 0.0 ) ; t422 [
1ULL ] = ( int32_T ) ( t2179 <= 1.0 ) ; t422 [ 2ULL ] = ( int32_T ) ( X [
55ULL ] >= 100.8 ) ; t422 [ 3ULL ] = ( int32_T ) ( X [ 55ULL ] <= 607.824 ) ;
t422 [ 4ULL ] = ( int32_T ) ( M [ 36ULL ] != 0 ) ; t422 [ 5ULL ] = ( int32_T
) ( M [ 37ULL ] != 0 ) ; t422 [ 6ULL ] = ( int32_T ) ! intrm_sf_mf_1457 ;
t422 [ 7ULL ] = ( int32_T ) ( M [ 38ULL ] != 0 ) ; t422 [ 8ULL ] = ( int32_T
) ( M [ 39ULL ] != 0 ) ; t422 [ 9ULL ] = 1 ; t422 [ 10ULL ] = 1 ; t422 [
11ULL ] = ( int32_T ) ( M [ 40ULL ] != 0 ) ; t422 [ 12ULL ] = ( int32_T ) ( M
[ 41ULL ] != 0 ) ; t422 [ 13ULL ] = ( int32_T ) ( M [ 42ULL ] != 0 ) ; t422 [
14ULL ] = ( int32_T ) ( M [ 43ULL ] != 0 ) ; t422 [ 15ULL ] = ( int32_T ) ( M
[ 44ULL ] != 0 ) ; t422 [ 16ULL ] = ( int32_T ) ( M [ 46ULL ] != 0 ) ; t422 [
17ULL ] = ( int32_T ) ( M [ 47ULL ] != 0 ) ; t422 [ 18ULL ] = ( int32_T ) ( M
[ 48ULL ] != 0 ) ; t422 [ 19ULL ] = ( int32_T ) ( M [ 49ULL ] != 0 ) ; t422 [
20ULL ] = ( int32_T ) ( M [ 50ULL ] != 0 ) ; t422 [ 21ULL ] = ( int32_T ) ( M
[ 51ULL ] != 0 ) ; t422 [ 22ULL ] = ( int32_T ) ( M [ 52ULL ] != 0 ) ; t422 [
23ULL ] = ( int32_T ) ( M [ 44ULL ] != 0 ) ; t422 [ 24ULL ] = ( int32_T ) ( M
[ 46ULL ] != 0 ) ; t422 [ 25ULL ] = ( int32_T ) ( M [ 47ULL ] != 0 ) ; t422 [
26ULL ] = ( int32_T ) ( M [ 48ULL ] != 0 ) ; t422 [ 27ULL ] = ( int32_T ) ( M
[ 53ULL ] != 0 ) ; t422 [ 28ULL ] = ( int32_T ) ( M [ 54ULL ] != 0 ) ; t422 [
29ULL ] = 1 ; t422 [ 30ULL ] = 1 ; t422 [ 31ULL ] = ( int32_T ) ( M [ 55ULL ]
!= 0 ) ; t422 [ 32ULL ] = ( int32_T ) ( M [ 57ULL ] != 0 ) ; t422 [ 33ULL ] =
( int32_T ) ( M [ 58ULL ] != 0 ) ; t422 [ 34ULL ] = ( int32_T ) ( M [ 59ULL ]
!= 0 ) ; t422 [ 35ULL ] = 1 ; t422 [ 36ULL ] = 1 ; t422 [ 37ULL ] = ( int32_T
) ( M [ 60ULL ] != 0 ) ; t422 [ 38ULL ] = ( int32_T ) ( M [ 61ULL ] != 0 ) ;
t422 [ 39ULL ] = ( int32_T ) ( M [ 62ULL ] != 0 ) ; t422 [ 40ULL ] = (
int32_T ) ( M [ 63ULL ] != 0 ) ; t422 [ 41ULL ] = ( int32_T ) ( M [ 64ULL ]
!= 0 ) ; t422 [ 42ULL ] = ( int32_T ) ( M [ 65ULL ] != 0 ) ; t422 [ 43ULL ] =
( int32_T ) ( M [ 66ULL ] != 0 ) ; t422 [ 44ULL ] = ( int32_T ) ( M [ 68ULL ]
!= 0 ) ; t422 [ 45ULL ] = ( int32_T ) ( M [ 69ULL ] != 0 ) ; t422 [ 46ULL ] =
( int32_T ) ( M [ 70ULL ] != 0 ) ; t422 [ 47ULL ] = ( int32_T ) ( M [ 71ULL ]
!= 0 ) ; t422 [ 48ULL ] = ( int32_T ) ( M [ 72ULL ] != 0 ) ; t422 [ 49ULL ] =
( int32_T ) ( M [ 55ULL ] != 0 ) ; t422 [ 50ULL ] = ( int32_T ) ( M [ 57ULL ]
!= 0 ) ; t422 [ 51ULL ] = ( int32_T ) ( M [ 73ULL ] != 0 ) ; t422 [ 52ULL ] =
( int32_T ) ( M [ 74ULL ] != 0 ) ; t422 [ 53ULL ] = ( int32_T ) ( M [ 60ULL ]
!= 0 ) ; t422 [ 54ULL ] = ( int32_T ) ( M [ 61ULL ] != 0 ) ; t422 [ 55ULL ] =
( int32_T ) ( M [ 62ULL ] != 0 ) ; t422 [ 56ULL ] = ( int32_T ) ( M [ 63ULL ]
!= 0 ) ; t422 [ 57ULL ] = ( int32_T ) ( M [ 75ULL ] != 0 ) ; t422 [ 58ULL ] =
( int32_T ) ( M [ 76ULL ] != 0 ) ; t422 [ 59ULL ] = ( int32_T ) ( M [ 77ULL ]
!= 0 ) ; t422 [ 60ULL ] = ( int32_T ) ( M [ 79ULL ] != 0 ) ; t422 [ 61ULL ] =
( int32_T ) ( M [ 80ULL ] != 0 ) ; t422 [ 62ULL ] = ( int32_T ) ( M [ 81ULL ]
!= 0 ) ; t422 [ 63ULL ] = ( int32_T ) ( M [ 82ULL ] != 0 ) ; t422 [ 64ULL ] =
1 ; t422 [ 65ULL ] = 1 ; t422 [ 66ULL ] = ( int32_T ) ( M [ 79ULL ] != 0 ) ;
t422 [ 67ULL ] = ( int32_T ) ( M [ 80ULL ] != 0 ) ; t422 [ 68ULL ] = (
int32_T ) ( M [ 83ULL ] != 0 ) ; t422 [ 69ULL ] = ( int32_T ) ( M [ 84ULL ]
!= 0 ) ; t422 [ 70ULL ] = ( int32_T ) t56 ; t422 [ 71ULL ] = 1 ; t422 [ 72ULL
] = ( int32_T ) ( M [ 64ULL ] != 0 ) ; t422 [ 73ULL ] = ( int32_T ) ( M [
65ULL ] != 0 ) ; t422 [ 74ULL ] = ( int32_T ) ( M [ 66ULL ] != 0 ) ; t422 [
75ULL ] = ( int32_T ) ( M [ 68ULL ] != 0 ) ; t422 [ 76ULL ] = ( int32_T ) ( M
[ 85ULL ] != 0 ) ; t422 [ 77ULL ] = ( int32_T ) ( M [ 86ULL ] != 0 ) ; t422 [
78ULL ] = ( int32_T ) ( M [ 87ULL ] != 0 ) ; t422 [ 79ULL ] = ( int32_T ) ( M
[ 88ULL ] != 0 ) ; t422 [ 80ULL ] = ( int32_T ) ( M [ 90ULL ] != 0 ) ; t422 [
81ULL ] = ( int32_T ) ( M [ 91ULL ] != 0 ) ; t422 [ 82ULL ] = ( int32_T ) ( M
[ 92ULL ] != 0 ) ; t422 [ 83ULL ] = ( int32_T ) ( M [ 93ULL ] != 0 ) ; t422 [
84ULL ] = 1 ; t422 [ 85ULL ] = 1 ; t422 [ 86ULL ] = ( int32_T ) ( M [ 85ULL ]
!= 0 ) ; t422 [ 87ULL ] = ( int32_T ) ( M [ 86ULL ] != 0 ) ; t422 [ 88ULL ] =
( int32_T ) ( M [ 87ULL ] != 0 ) ; t422 [ 89ULL ] = ( int32_T ) ( M [ 88ULL ]
!= 0 ) ; t422 [ 90ULL ] = ( int32_T ) ( M [ 94ULL ] != 0 ) ; t422 [ 91ULL ] =
( int32_T ) ( M [ 95ULL ] != 0 ) ; t422 [ 92ULL ] = ( int32_T ) ( M [ 96ULL ]
!= 0 ) ; t422 [ 93ULL ] = ( int32_T ) ( M [ 97ULL ] != 0 ) ; t422 [ 94ULL ] =
( int32_T ) ( M [ 98ULL ] != 0 ) ; t422 [ 95ULL ] = ( int32_T ) ( M [ 99ULL ]
!= 0 ) ; t422 [ 96ULL ] = ( int32_T ) ( M [ 101ULL ] != 0 ) ; t422 [ 97ULL ]
= ( int32_T ) ( M [ 102ULL ] != 0 ) ; t422 [ 98ULL ] = ( int32_T ) t57 ; t422
[ 99ULL ] = ( int32_T ) t58 ; t422 [ 100ULL ] = ( int32_T ) ( M [ 94ULL ] !=
0 ) ; t422 [ 101ULL ] = ( int32_T ) ( M [ 95ULL ] != 0 ) ; t422 [ 102ULL ] =
( int32_T ) ( M [ 96ULL ] != 0 ) ; t422 [ 103ULL ] = ( int32_T ) ( M [ 97ULL
] != 0 ) ; t422 [ 104ULL ] = ( int32_T ) ( M [ 40ULL ] != 0 ) ; t422 [ 105ULL
] = ( int32_T ) ( M [ 41ULL ] != 0 ) ; t422 [ 106ULL ] = ( int32_T ) ( M [
42ULL ] != 0 ) ; t422 [ 107ULL ] = ( int32_T ) ( M [ 43ULL ] != 0 ) ; t422 [
108ULL ] = ( int32_T ) ( M [ 103ULL ] != 0 ) ; t422 [ 109ULL ] = ( int32_T )
( M [ 104ULL ] != 0 ) ; t422 [ 110ULL ] = ( int32_T ) ( M [ 105ULL ] != 0 ) ;
t422 [ 111ULL ] = ( int32_T ) ( M [ 106ULL ] != 0 ) ; t422 [ 112ULL ] = (
int32_T ) t59 ; t422 [ 113ULL ] = 1 ; t422 [ 114ULL ] = ( int32_T ) ( M [
79ULL ] != 0 ) ; t422 [ 115ULL ] = ( int32_T ) ( M [ 80ULL ] != 0 ) ; t422 [
116ULL ] = ( int32_T ) ( M [ 107ULL ] != 0 ) ; t422 [ 117ULL ] = ( int32_T )
( M [ 108ULL ] != 0 ) ; t422 [ 118ULL ] = ( int32_T ) ( M [ 109ULL ] != 0 ) ;
t422 [ 119ULL ] = ( int32_T ) ( M [ 110ULL ] != 0 ) ; t422 [ 120ULL ] = (
int32_T ) ( M [ 113ULL ] != 0 ) ; t422 [ 121ULL ] = ( int32_T ) ( M [ 114ULL
] != 0 ) ; t422 [ 122ULL ] = ( int32_T ) ( M [ 115ULL ] != 0 ) ; t422 [
123ULL ] = ( int32_T ) ( M [ 116ULL ] != 0 ) ; t422 [ 124ULL ] = ( int32_T )
( M [ 117ULL ] != 0 ) ; t422 [ 125ULL ] = ( int32_T ) ( M [ 118ULL ] != 0 ) ;
t422 [ 126ULL ] = ( int32_T ) ( M [ 119ULL ] != 0 ) ; t422 [ 127ULL ] = 1 ;
t422 [ 128ULL ] = 1 ; t422 [ 129ULL ] = ( int32_T ) ( M [ 120ULL ] != 0 ) ;
t422 [ 130ULL ] = ( int32_T ) ( M [ 121ULL ] != 0 ) ; t422 [ 131ULL ] = (
int32_T ) ( M [ 122ULL ] != 0 ) ; t422 [ 132ULL ] = ( int32_T ) ( M [ 124ULL
] != 0 ) ; t422 [ 133ULL ] = ( int32_T ) ( M [ 125ULL ] != 0 ) ; t422 [
134ULL ] = ( int32_T ) ( M [ 126ULL ] != 0 ) ; t422 [ 135ULL ] = ( int32_T )
( M [ 127ULL ] != 0 ) ; t422 [ 136ULL ] = ( int32_T ) ( M [ 128ULL ] != 0 ) ;
t422 [ 137ULL ] = ( int32_T ) ( M [ 129ULL ] != 0 ) ; t422 [ 138ULL ] = (
int32_T ) ( M [ 130ULL ] != 0 ) ; t422 [ 139ULL ] = ( int32_T ) ( M [ 131ULL
] != 0 ) ; t422 [ 140ULL ] = ( int32_T ) ( M [ 132ULL ] != 0 ) ; t422 [
141ULL ] = ( int32_T ) ( M [ 125ULL ] != 0 ) ; t422 [ 142ULL ] = ( int32_T )
( M [ 126ULL ] != 0 ) ; t422 [ 143ULL ] = ( int32_T ) ( M [ 127ULL ] != 0 ) ;
t422 [ 144ULL ] = ( int32_T ) ( M [ 128ULL ] != 0 ) ; t422 [ 145ULL ] = (
int32_T ) ( M [ 133ULL ] != 0 ) ; t422 [ 146ULL ] = ( int32_T ) ( M [ 135ULL
] != 0 ) ; t422 [ 147ULL ] = 1 ; t422 [ 148ULL ] = 1 ; t422 [ 149ULL ] = (
int32_T ) ( M [ 109ULL ] != 0 ) ; t422 [ 150ULL ] = ( int32_T ) ( M [ 110ULL
] != 0 ) ; t422 [ 151ULL ] = ( int32_T ) ( M [ 113ULL ] != 0 ) ; t422 [
152ULL ] = ( int32_T ) ( M [ 114ULL ] != 0 ) ; t422 [ 153ULL ] = ( int32_T )
( M [ 136ULL ] != 0 ) ; t422 [ 154ULL ] = ( int32_T ) ( M [ 137ULL ] != 0 ) ;
t422 [ 155ULL ] = ( int32_T ) ( M [ 138ULL ] != 0 ) ; t422 [ 156ULL ] = (
int32_T ) ( M [ 139ULL ] != 0 ) ; t422 [ 157ULL ] = ( int32_T ) ( M [ 140ULL
] != 0 ) ; t422 [ 158ULL ] = ( int32_T ) ( M [ 141ULL ] != 0 ) ; t422 [
159ULL ] = ( int32_T ) ( M [ 142ULL ] != 0 ) ; t422 [ 160ULL ] = ( int32_T )
( M [ 143ULL ] != 0 ) ; t422 [ 161ULL ] = ( int32_T ) t60 ; t422 [ 162ULL ] =
( int32_T ) t61 ; t422 [ 163ULL ] = ( int32_T ) ( M [ 136ULL ] != 0 ) ; t422
[ 164ULL ] = ( int32_T ) ( M [ 137ULL ] != 0 ) ; t422 [ 165ULL ] = ( int32_T
) ( M [ 138ULL ] != 0 ) ; t422 [ 166ULL ] = ( int32_T ) ( M [ 139ULL ] != 0 )
; t422 [ 167ULL ] = ( int32_T ) ( M [ 120ULL ] != 0 ) ; t422 [ 168ULL ] = (
int32_T ) ( M [ 121ULL ] != 0 ) ; t422 [ 169ULL ] = ( int32_T ) ( M [ 122ULL
] != 0 ) ; t422 [ 170ULL ] = ( int32_T ) ( M [ 124ULL ] != 0 ) ; t422 [
171ULL ] = ( int32_T ) ( M [ 144ULL ] != 0 ) ; t422 [ 172ULL ] = ( int32_T )
( M [ 146ULL ] != 0 ) ; t422 [ 173ULL ] = ( int32_T ) ( M [ 147ULL ] != 0 ) ;
t422 [ 174ULL ] = ( int32_T ) ( M [ 148ULL ] != 0 ) ; t422 [ 175ULL ] = (
int32_T ) ( M [ 149ULL ] != 0 ) ; t422 [ 176ULL ] = 1 ; t422 [ 177ULL ] = 1 ;
t422 [ 178ULL ] = 1 ; t422 [ 179ULL ] = 1 ; t422 [ 180ULL ] = 1 ; t422 [
181ULL ] = 1 ; t422 [ 182ULL ] = 1 ; t422 [ 183ULL ] = 1 ; t422 [ 184ULL ] =
1 ; t422 [ 185ULL ] = 1 ; t422 [ 186ULL ] = 1 ; t422 [ 187ULL ] = 1 ; t422 [
188ULL ] = 1 ; t422 [ 189ULL ] = 1 ; t422 [ 190ULL ] = 1 ; t422 [ 191ULL ] =
1 ; t422 [ 192ULL ] = 1 ; t422 [ 193ULL ] = 1 ; t422 [ 194ULL ] = 1 ; t422 [
195ULL ] = 1 ; t422 [ 196ULL ] = 1 ; t422 [ 197ULL ] = 1 ; t422 [ 198ULL ] =
1 ; t422 [ 199ULL ] = 1 ; t422 [ 200ULL ] = 1 ; t422 [ 201ULL ] = 1 ; t422 [
202ULL ] = 1 ; t422 [ 203ULL ] = 1 ; t422 [ 204ULL ] = 1 ; t422 [ 205ULL ] =
( int32_T ) ( t736 > 0.0 ) ; t422 [ 206ULL ] = ( int32_T ) ( ( ! ( t736 > 0.0
) ) || ( pmf_log ( t736 ) - t43_idx_0 < 663.67513503334737 ) ) ; t422 [
207ULL ] = ( int32_T ) ( t752 != 0.0 ) ; t422 [ 208ULL ] = ( int32_T ) ( t744
> 0.0 ) ; t422 [ 209ULL ] = ( int32_T ) ( ( ! ( t744 > 0.0 ) ) || ( pmf_log (
t744 ) - t43_idx_0 < 663.67513503334737 ) ) ; t422 [ 210ULL ] = ( int32_T ) (
t760 != 0.0 ) ; t422 [ 211ULL ] = 1 ; t422 [ 212ULL ] = 1 ; t422 [ 213ULL ] =
( int32_T ) ( t2180 != 0.0 ) ; t422 [ 214ULL ] = 1 ; t422 [ 215ULL ] = (
int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 >= 1.0 ) ) ||
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 > 0.0 ) ) ;
t422 [ 216ULL ] = 1 ; t422 [ 217ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 <= 13986.0 )
) || ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15
/ 14000.0 > 0.0 ) ) ; t422 [ 218ULL ] = 1 ; t422 [ 219ULL ] = 1 ; t422 [
220ULL ] = 1 ; t422 [ 221ULL ] = 1 ; t422 [ 222ULL ] = ( int32_T ) ( t751 >=
0.0 ) ; t422 [ 223ULL ] = ( int32_T ) ( ( ! ( t751 >= 0.0 ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 != 0.0 ) ) ;
t833 = pmf_sqrt ( t751 ) * t743 ; t422 [ 224ULL ] = ( int32_T ) ( ( ! ( t751
>= 0.0 ) ) || ( ( t751 >= 0.0 ) && ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 != 0.0 ) ) )
|| ( t833 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ) > 0.0 ) ) ;
t422 [ 225ULL ] = ( int32_T ) ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 *
0.022577863652674921 / 192970.66424 * 241812.2160511087 /
0.0020158806832745466 * 0.001 + ( ( ( X [ 99ULL ] - X [ 98ULL ] * -
3931.85243448965 ) + ( X [ 101ULL ] - X [ 100ULL ] * - 271.011680699068 ) ) +
( X [ 97ULL ] - X [ 96ULL ] * - 2546.6190535198302 ) ) ) + ( X [ 102ULL ] + X
[ 103ULL ] ) != 0.0 ) ; t422 [ 226ULL ] = 1 ; t422 [ 227ULL ] = 1 ; t422 [
228ULL ] = 1 ; t422 [ 229ULL ] = 1 ; t422 [ 230ULL ] = 1 ; t422 [ 231ULL ] =
1 ; t422 [ 232ULL ] = 1 ; t422 [ 233ULL ] = 1 ; t422 [ 234ULL ] = 1 ; t422 [
235ULL ] = 1 ; t422 [ 236ULL ] = 1 ; t422 [ 237ULL ] = ( int32_T ) ( ( X [
122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 == X [ 122ULL ] * X [ 122ULL
] + 1.8324100759713822E-12 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 238ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 == X [ 122ULL
] * X [ 122ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t422 [ 239ULL ]
= 1 ; t422 [ 240ULL ] = 1 ; t422 [ 241ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 2.0914103314136477E-13 == X [ 122ULL ] * X [ 122ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 242ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 2.0914103314136477E-13 == X [ 122ULL
] * X [ 122ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t422 [ 243ULL ]
= 1 ; t422 [ 244ULL ] = 1 ; t422 [ 245ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 1.4768645655431171E-13 == X [ 122ULL ] * X [ 122ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 246ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 1.4768645655431171E-13 == X [ 122ULL
] * X [ 122ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t422 [ 247ULL ]
= ( int32_T ) ( t759 * 293.15 != 0.0 ) ; t422 [ 248ULL ] = ( int32_T ) ( X [
20ULL ] != 0.0 ) ; t422 [ 249ULL ] = ( int32_T ) ( X [ 136ULL ] != 0.0 ) ;
t422 [ 250ULL ] = 1 ; t422 [ 251ULL ] = 1 ; t422 [ 252ULL ] = 1 ; t422 [
253ULL ] = ( int32_T ) ( t834 - t767 != 0.0 ) ; t422 [ 254ULL ] = 1 ; t422 [
255ULL ] = 1 ; t422 [ 256ULL ] = ( int32_T ) ( ( t832 * t832 *
9.999999999999999E-14 + fabs ( X [ 135ULL ] * t835 * t767 ) * 1.0E-9 == t832
* t832 * 9.999999999999999E-14 + fabs ( X [ 135ULL ] * t835 * t767 ) * 1.0E-9
) && ( fabs ( t832 * t832 * 9.999999999999999E-14 + fabs ( X [ 135ULL ] *
t835 * t767 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 257ULL ] = ( int32_T
) ( ( ! ( t832 * t832 * 9.999999999999999E-14 + fabs ( X [ 135ULL ] * t835 *
t767 ) * 1.0E-9 == t832 * t832 * 9.999999999999999E-14 + fabs ( X [ 135ULL ]
* t835 * t767 ) * 1.0E-9 ) ) || ( ! ( fabs ( t832 * t832 *
9.999999999999999E-14 + fabs ( X [ 135ULL ] * t835 * t767 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t832 * t832 * 9.999999999999999E-14 + fabs ( X [
135ULL ] * t835 * t767 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 258ULL ] = 1 ; t422 [
259ULL ] = 1 ; t422 [ 260ULL ] = ( int32_T ) ( t767 != 0.0 ) ; t422 [ 261ULL
] = ( int32_T ) ( ( ! ( t767 != 0.0 ) ) || ( X [ 135ULL ] != 0.0 ) ) ; t422 [
262ULL ] = 1 ; t422 [ 263ULL ] = ( int32_T ) ( ( ! ( t767 != 0.0 ) ) || ( (
t767 != 0.0 ) && ( ! ( X [ 135ULL ] != 0.0 ) ) ) || ( fabs ( t848 / ( t767 ==
0.0 ? 1.0E-16 : t767 ) / ( X [ 135ULL ] == 0.0 ? 1.0E-16 : X [ 135ULL ] ) )
>= 0.0 ) ) ; t422 [ 264ULL ] = ( int32_T ) ( t839 * 7.8539816339744827E-5 !=
0.0 ) ; t422 [ 265ULL ] = ( int32_T ) ( X [ 19ULL ] * t767 != 0.0 ) ; t422 [
266ULL ] = ( int32_T ) ( t846 * 1.5707963267948965E-8 != 0.0 ) ; t422 [
267ULL ] = ( int32_T ) ( t849 != 0.0 ) ; t422 [ 268ULL ] = ( int32_T ) ( ( !
( t849 != 0.0 ) ) || ( 6.9 / ( t849 == 0.0 ? 1.0E-16 : t849 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 269ULL ] = 1 ; t422 [ 270ULL ] = 1
; t422 [ 271ULL ] = ( int32_T ) ( ( ! ( t849 != 0.0 ) ) || ( ( t849 != 0.0 )
&& ( ! ( 6.9 / ( t849 == 0.0 ? 1.0E-16 : t849 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t849 == 0.0 ? 1.0E-16 : t849 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t849 == 0.0 ? 1.0E-16 : t849 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 272ULL ] = ( int32_T )
( t846 * 1.2337005501361697E-10 != 0.0 ) ; t422 [ 273ULL ] = 1 ; t422 [
274ULL ] = 1 ; t422 [ 275ULL ] = 1 ; t422 [ 276ULL ] = 1 ; t422 [ 277ULL ] =
( int32_T ) ( X [ 20ULL ] != 0.0 ) ; t422 [ 278ULL ] = ( int32_T ) ( X [
140ULL ] != 0.0 ) ; t422 [ 279ULL ] = 1 ; t422 [ 280ULL ] = 1 ; t422 [ 281ULL
] = 1 ; t422 [ 282ULL ] = ( int32_T ) ( t847 - t767 != 0.0 ) ; t422 [ 283ULL
] = 1 ; t422 [ 284ULL ] = 1 ; t422 [ 285ULL ] = ( int32_T ) ( ( t841 * t841 *
9.999999999999999E-14 + fabs ( X [ 139ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * t767 ) *
1.0E-9 == t841 * t841 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * t767 ) *
1.0E-9 ) && ( fabs ( t841 * t841 * 9.999999999999999E-14 + fabs ( X [ 139ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * t767 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 286ULL ] = ( int32_T ) ( ( ! ( t841
* t841 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * t767 ) *
1.0E-9 == t841 * t841 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * t767 ) *
1.0E-9 ) ) || ( ! ( fabs ( t841 * t841 * 9.999999999999999E-14 + fabs ( X [
139ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI *
t767 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t841 * t841 *
9.999999999999999E-14 + fabs ( X [ 139ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_BI * t767 ) *
1.0E-9 >= 0.0 ) ) ; t422 [ 287ULL ] = 1 ; t422 [ 288ULL ] = 1 ; t422 [ 289ULL
] = ( int32_T ) ( t767 != 0.0 ) ; t422 [ 290ULL ] = ( int32_T ) ( ( ! ( t767
!= 0.0 ) ) || ( X [ 139ULL ] != 0.0 ) ) ; t422 [ 291ULL ] = 1 ; t422 [ 292ULL
] = ( int32_T ) ( ( ! ( t767 != 0.0 ) ) || ( ( t767 != 0.0 ) && ( ! ( X [
139ULL ] != 0.0 ) ) ) || ( fabs ( t868 / ( t767 == 0.0 ? 1.0E-16 : t767 ) / (
X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) >= 0.0 ) ) ; t422 [ 293ULL ]
= ( int32_T ) ( t839 * 7.8539816339744827E-5 != 0.0 ) ; t422 [ 294ULL ] = (
int32_T ) ( t846 * 1.5707963267948965E-8 != 0.0 ) ; t422 [ 295ULL ] = (
int32_T ) ( t855 != 0.0 ) ; t422 [ 296ULL ] = ( int32_T ) ( ( ! ( t855 != 0.0
) ) || ( 6.9 / ( t855 == 0.0 ? 1.0E-16 : t855 ) + 0.00017169489553429715 >
0.0 ) ) ; t422 [ 297ULL ] = 1 ; t422 [ 298ULL ] = 1 ; t422 [ 299ULL ] = (
int32_T ) ( ( ! ( t855 != 0.0 ) ) || ( ( t855 != 0.0 ) && ( ! ( 6.9 / ( t855
== 0.0 ? 1.0E-16 : t855 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10
( 6.9 / ( t855 == 0.0 ? 1.0E-16 : t855 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t855 == 0.0 ? 1.0E-16 : t855 ) + 0.00017169489553429715 )
* 3.24 != 0.0 ) ) ; t422 [ 300ULL ] = ( int32_T ) ( t846 *
1.2337005501361697E-10 != 0.0 ) ; t422 [ 301ULL ] = 1 ; t422 [ 302ULL ] = 1 ;
t422 [ 303ULL ] = 1 ; t422 [ 304ULL ] = 1 ; t422 [ 305ULL ] = ( int32_T ) ( (
! ( X [ 134ULL ] >= 0.0 ) ) || ( t840 != 0.0 ) ) ; t422 [ 306ULL ] = (
int32_T ) ( ( X [ 134ULL ] >= 0.0 ) || ( t840 != 0.0 ) ) ; t422 [ 307ULL ] =
( int32_T ) ( ( ! ( - X [ 122ULL ] >= 0.0 ) ) || ( intrm_sf_mf_47 != 0.0 ) )
; t422 [ 308ULL ] = ( int32_T ) ( ( - X [ 122ULL ] >= 0.0 ) || (
intrm_sf_mf_47 != 0.0 ) ) ; t422 [ 309ULL ] = 1 ; t422 [ 310ULL ] = ( int32_T
) ( ( ! ( 1.0 - X [ 21ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 21ULL ] ) - 0.01
) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 21ULL ] >= 0.01 ) ) ; t422 [
311ULL ] = 1 ; t422 [ 312ULL ] = ( int32_T ) ( t773 != 0.0 ) ; t422 [ 313ULL
] = ( int32_T ) ( X [ 20ULL ] * 100000.0 > 0.0 ) ; t422 [ 314ULL ] = (
int32_T ) ( ( ! ( X [ 20ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 20ULL ]
* 100000.0 ) - t35_idx_0 < 663.67513503334737 ) ) ; t422 [ 315ULL ] = 1 ;
t422 [ 316ULL ] = ( int32_T ) ( ( ! ( t856 >= 1.0 ) ) || ( ( t856 - 1.0 ) *
461.523 + t843 != 0.0 ) ) ; t422 [ 317ULL ] = ( int32_T ) ( t857 * 0.01 !=
0.0 ) ; t422 [ 318ULL ] = 1 ; t422 [ 319ULL ] = 1 ; t422 [ 320ULL ] = 1 ;
t422 [ 321ULL ] = 1 ; t422 [ 322ULL ] = ( int32_T ) ( t865 != 0.0 ) ; t422 [
323ULL ] = ( int32_T ) ( t886 / 2.0 * 7.8539816339744827E-5 != 0.0 ) ; t422 [
324ULL ] = ( int32_T ) ( intrm_sf_mf_104 != 0.0 ) ; t422 [ 325ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_104 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_104 ==
0.0 ? 1.0E-16 : intrm_sf_mf_104 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [
326ULL ] = 1 ; t422 [ 327ULL ] = 1 ; t422 [ 328ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_104 != 0.0 ) ) || ( ( intrm_sf_mf_104 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104 ) + 0.00017169489553429715
> 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_104 == 0.0 ? 1.0E-16 :
intrm_sf_mf_104 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104 ) + 0.00017169489553429715
) * 3.24 != 0.0 ) ) ; t422 [ 329ULL ] = ( int32_T ) ( ( t867 / 8.0 == t867 /
8.0 ) && ( fabs ( t867 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 330ULL ] = (
int32_T ) ( ( ! ( t867 / 8.0 == t867 / 8.0 ) ) || ( ! ( fabs ( t867 / 8.0 )
!= pmf_get_inf ( ) ) ) || ( t867 / 8.0 >= 0.0 ) ) ; t422 [ 331ULL ] = 1 ;
t422 [ 332ULL ] = ( int32_T ) ( t890 / 2.0 >= 0.0 ) ; t422 [ 333ULL ] = 1 ;
t422 [ 334ULL ] = 1 ; t422 [ 335ULL ] = 1 ; t422 [ 336ULL ] = ( int32_T ) ( (
! ( ( pmf_pow ( t890 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t867
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t867 / 8.0 == t867 / 8.0 ) && (
fabs ( t867 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 337ULL ] = ( int32_T )
( ( ! ( ( pmf_pow ( t890 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t867 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t867 / 8.0 == t867 / 8.0 )
) || ( ! ( fabs ( t867 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t867 / 8.0 >=
0.0 ) ) ; t422 [ 338ULL ] = 1 ; t422 [ 339ULL ] = 1 ; t422 [ 340ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t890 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t867 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t890 / 2.0 >= 0.0 ) )
; t422 [ 341ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t890 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t867 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t867 / 8.0 == t867 / 8.0 ) ) || ( ! ( fabs ( t867 / 8.0
) != pmf_get_inf ( ) ) ) ) || ( ( t867 / 8.0 == t867 / 8.0 ) && ( fabs ( t867
/ 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t867 / 8.0 >= 0.0 ) ) ) || ( ! ( t890 /
2.0 >= 0.0 ) ) || ( ( pmf_pow ( t890 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t867 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 342ULL ] = 1 ; t422
[ 343ULL ] = 1 ; t422 [ 344ULL ] = 1 ; t422 [ 345ULL ] = 1 ; t422 [ 346ULL ]
= 1 ; t422 [ 347ULL ] = 1 ; t422 [ 348ULL ] = 1 ; t422 [ 349ULL ] = ( int32_T
) ( t890 / 2.0 != 0.0 ) ; t422 [ 350ULL ] = 1 ; t2179 = t890 / 2.0 ; t422 [
351ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_103 > t898 / 7.8539816339744827E-5
/ ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( intrm_sf_mf_103 != 0.0 )
) ; t422 [ 352ULL ] = 1 ; t422 [ 353ULL ] = 1 ; t2179 = t890 / 2.0 ; t422 [
354ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_103 > t898 / 7.8539816339744827E-5
/ ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_103 !=
0.0 ) ) || ( t890 / 2.0 != 0.0 ) ) ; t422 [ 355ULL ] = ( int32_T ) ( - t838 <
663.67513503334737 ) ; t422 [ 356ULL ] = ( int32_T ) ( t866 != 0.0 ) ; t422 [
357ULL ] = ( int32_T ) ( t910 / 2.0 * 7.8539816339744827E-5 != 0.0 ) ; t422 [
358ULL ] = ( int32_T ) ( t861 != 0.0 ) ; t422 [ 359ULL ] = ( int32_T ) ( ( !
( t861 != 0.0 ) ) || ( 6.9 / ( t861 == 0.0 ? 1.0E-16 : t861 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 360ULL ] = 1 ; t422 [ 361ULL ] = 1
; t422 [ 362ULL ] = ( int32_T ) ( ( ! ( t861 != 0.0 ) ) || ( ( t861 != 0.0 )
&& ( ! ( 6.9 / ( t861 == 0.0 ? 1.0E-16 : t861 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t861 == 0.0 ? 1.0E-16 : t861 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t861 == 0.0 ? 1.0E-16 : t861 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 363ULL ] = ( int32_T )
( ( t873 / 8.0 == t873 / 8.0 ) && ( fabs ( t873 / 8.0 ) != pmf_get_inf ( ) )
) ; t422 [ 364ULL ] = ( int32_T ) ( ( ! ( t873 / 8.0 == t873 / 8.0 ) ) || ( !
( fabs ( t873 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t873 / 8.0 >= 0.0 ) ) ;
t422 [ 365ULL ] = 1 ; t422 [ 366ULL ] = ( int32_T ) ( t914 / 2.0 >= 0.0 ) ;
t422 [ 367ULL ] = 1 ; t422 [ 368ULL ] = 1 ; t422 [ 369ULL ] = 1 ; t422 [
370ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t914 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t873 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t873 /
8.0 == t873 / 8.0 ) && ( fabs ( t873 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422
[ 371ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t914 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t873 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
t873 / 8.0 == t873 / 8.0 ) ) || ( ! ( fabs ( t873 / 8.0 ) != pmf_get_inf ( )
) ) ) || ( t873 / 8.0 >= 0.0 ) ) ; t422 [ 372ULL ] = 1 ; t422 [ 373ULL ] = 1
; t422 [ 374ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t914 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t873 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( t914 / 2.0 >= 0.0 ) ) ; t422 [ 375ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t914 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t873 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t873 / 8.0 == t873 / 8.0 ) ) || (
! ( fabs ( t873 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t873 / 8.0 == t873 /
8.0 ) && ( fabs ( t873 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t873 / 8.0 >=
0.0 ) ) ) || ( ! ( t914 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t914 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t873 / 8.0 ) * 12.7 + 1.0 != 0.0 )
) ; t422 [ 376ULL ] = 1 ; t422 [ 377ULL ] = 1 ; t422 [ 378ULL ] = 1 ; t422 [
379ULL ] = 1 ; t422 [ 380ULL ] = 1 ; t422 [ 381ULL ] = 1 ; t422 [ 382ULL ] =
1 ; t422 [ 383ULL ] = ( int32_T ) ( t914 / 2.0 != 0.0 ) ; t422 [ 384ULL ] = 1
; t2179 = t914 / 2.0 ; t422 [ 385ULL ] = ( int32_T ) ( ( ! ( t871 > t922 /
7.8539816339744827E-5 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
t871 != 0.0 ) ) ; t422 [ 386ULL ] = 1 ; t422 [ 387ULL ] = 1 ; t2179 = t914 /
2.0 ; t422 [ 388ULL ] = ( int32_T ) ( ( ! ( t871 > t922 /
7.8539816339744827E-5 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( !
( t871 != 0.0 ) ) || ( t914 / 2.0 != 0.0 ) ) ; t422 [ 389ULL ] = ( int32_T )
( - t875 < 663.67513503334737 ) ; t422 [ 390ULL ] = 1 ; t422 [ 391ULL ] = 1 ;
t422 [ 392ULL ] = ( int32_T ) ( X [ 112ULL ] != 0.0 ) ; t422 [ 393ULL ] = 1 ;
t422 [ 394ULL ] = 1 ; t422 [ 395ULL ] = 1 ; t422 [ 396ULL ] = 1 ; t422 [
397ULL ] = 1 ; t422 [ 398ULL ] = ( int32_T ) ( ( X [ 134ULL ] * X [ 134ULL ]
+ 2.0360111955237585E-13 == X [ 134ULL ] * X [ 134ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 134ULL ] * X [ 134ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 399ULL ] = ( int32_T
) ( ( ! ( X [ 134ULL ] * X [ 134ULL ] + 2.0360111955237585E-13 == X [ 134ULL
] * X [ 134ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 134ULL ] *
X [ 134ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
134ULL ] * X [ 134ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t422 [ 400ULL ]
= 1 ; t422 [ 401ULL ] = 1 ; t422 [ 402ULL ] = ( int32_T ) ( ( X [ 134ULL ] *
X [ 134ULL ] + 2.3237892571262758E-14 == X [ 134ULL ] * X [ 134ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 134ULL ] * X [ 134ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 403ULL ] = ( int32_T
) ( ( ! ( X [ 134ULL ] * X [ 134ULL ] + 2.3237892571262758E-14 == X [ 134ULL
] * X [ 134ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 134ULL ] *
X [ 134ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
134ULL ] * X [ 134ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t422 [ 404ULL ]
= 1 ; t422 [ 405ULL ] = 1 ; t422 [ 406ULL ] = ( int32_T ) ( ( X [ 134ULL ] *
X [ 134ULL ] + 1.6409606283812411E-14 == X [ 134ULL ] * X [ 134ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 134ULL ] * X [ 134ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 407ULL ] = ( int32_T
) ( ( ! ( X [ 134ULL ] * X [ 134ULL ] + 1.6409606283812411E-14 == X [ 134ULL
] * X [ 134ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 134ULL ] *
X [ 134ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
134ULL ] * X [ 134ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t422 [ 408ULL ]
= ( int32_T ) ( X [ 131ULL ] != 0.0 ) ; t422 [ 409ULL ] = 1 ; t422 [ 410ULL ]
= 1 ; t422 [ 411ULL ] = 1 ; t422 [ 412ULL ] = 1 ; t422 [ 413ULL ] = 1 ; t422
[ 414ULL ] = ( int32_T ) ( ( X [ 122ULL ] * X [ 122ULL ] +
2.0360111955237585E-13 == X [ 122ULL ] * X [ 122ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 415ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 2.0360111955237585E-13 == X [ 122ULL
] * X [ 122ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t422 [ 416ULL ]
= 1 ; t422 [ 417ULL ] = 1 ; t422 [ 418ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 2.3237892571262758E-14 == X [ 122ULL ] * X [ 122ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 419ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 2.3237892571262758E-14 == X [ 122ULL
] * X [ 122ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t422 [ 420ULL ]
= 1 ; t422 [ 421ULL ] = 1 ; t422 [ 422ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 1.6409606283812411E-14 == X [ 122ULL ] * X [ 122ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 423ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 1.6409606283812411E-14 == X [ 122ULL
] * X [ 122ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t422 [ 424ULL ]
= ( int32_T ) ( X [ 152ULL ] * t881 != 0.0 ) ; t422 [ 425ULL ] = ( int32_T )
( X [ 131ULL ] != 0.0 ) ; t422 [ 426ULL ] = ( int32_T ) ( X [ 152ULL ] != 0.0
) ; t422 [ 427ULL ] = ( int32_T ) ( X [ 152ULL ] != 0.0 ) ; t422 [ 428ULL ] =
1 ; t422 [ 429ULL ] = ( int32_T ) ( ( ! ( X [ 122ULL ] > 0.0 ) ) || ( t878 !=
0.0 ) ) ; t422 [ 430ULL ] = 1 ; t422 [ 431ULL ] = 1 ; t422 [ 432ULL ] = 1 ;
t422 [ 433ULL ] = ( int32_T ) ( ( ! ( X [ 122ULL ] > 0.0 ) ) || ( ! ( t878 !=
0.0 ) ) || ( t882 != 0.0 ) ) ; t422 [ 434ULL ] = 1 ; t422 [ 435ULL ] = (
int32_T ) ( ( ! ( X [ 122ULL ] < 0.0 ) ) || ( X [ 122ULL ] > 0.0 ) || ( t878
!= 0.0 ) ) ; t422 [ 436ULL ] = 1 ; t422 [ 437ULL ] = 1 ; t422 [ 438ULL ] = 1
; t422 [ 439ULL ] = ( int32_T ) ( ( ! ( X [ 122ULL ] < 0.0 ) ) || ( ! ( t878
!= 0.0 ) ) || ( X [ 122ULL ] > 0.0 ) || ( t882 != 0.0 ) ) ; t422 [ 440ULL ] =
1 ; t422 [ 441ULL ] = 1 ; t422 [ 442ULL ] = ( int32_T ) ( t887 != 0.0 ) ;
t422 [ 443ULL ] = 1 ; t422 [ 444ULL ] = 1 ; t422 [ 445ULL ] = 1 ; t422 [
446ULL ] = 1 ; t422 [ 447ULL ] = 1 ; t422 [ 448ULL ] = 1 ; t422 [ 449ULL ] =
1 ; t422 [ 450ULL ] = 1 ; t422 [ 451ULL ] = 1 ; t422 [ 452ULL ] = 1 ; t422 [
453ULL ] = ( int32_T ) ( t884 - t881 != 0.0 ) ; t422 [ 454ULL ] = 1 ; t422 [
455ULL ] = 1 ; t422 [ 456ULL ] = ( int32_T ) ( t881 != 0.0 ) ; t422 [ 457ULL
] = ( int32_T ) ( ( ! ( t881 != 0.0 ) ) || ( X [ 152ULL ] != 0.0 ) ) ; t422 [
458ULL ] = 1 ; t422 [ 459ULL ] = ( int32_T ) ( ( ! ( t881 != 0.0 ) ) || ( (
t881 != 0.0 ) && ( ! ( X [ 152ULL ] != 0.0 ) ) ) || ( fabs ( t945 / ( t881 ==
0.0 ? 1.0E-16 : t881 ) / ( X [ 152ULL ] == 0.0 ? 1.0E-16 : X [ 152ULL ] ) )
>= 0.0 ) ) ; t422 [ 460ULL ] = ( int32_T ) ( ( ! ( X [ 122ULL ] >= 0.0 ) ) ||
( t879 != 0.0 ) ) ; t422 [ 461ULL ] = ( int32_T ) ( ( X [ 122ULL ] >= 0.0 )
|| ( t879 != 0.0 ) ) ; t422 [ 462ULL ] = ( int32_T ) ( X [ 131ULL ] != 0.0 )
; t422 [ 463ULL ] = 1 ; t422 [ 464ULL ] = 1 ; t422 [ 465ULL ] = 1 ; t422 [
466ULL ] = 1 ; t422 [ 467ULL ] = 1 ; t422 [ 468ULL ] = ( int32_T ) ( ( X [
122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 == X [ 122ULL ] * X [ 122ULL
] + 1.8324100759713822E-12 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 469ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 == X [ 122ULL
] * X [ 122ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t422 [ 470ULL ]
= 1 ; t422 [ 471ULL ] = 1 ; t422 [ 472ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 2.0914103314136477E-13 == X [ 122ULL ] * X [ 122ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 473ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 2.0914103314136477E-13 == X [ 122ULL
] * X [ 122ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t422 [ 474ULL ]
= 1 ; t422 [ 475ULL ] = 1 ; t422 [ 476ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 1.4768645655431171E-13 == X [ 122ULL ] * X [ 122ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 477ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 1.4768645655431171E-13 == X [ 122ULL
] * X [ 122ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t422 [ 478ULL ]
= 1 ; t422 [ 479ULL ] = 1 ; t422 [ 480ULL ] = 1 ; t422 [ 481ULL ] = 1 ; t422
[ 482ULL ] = 1 ; t422 [ 483ULL ] = ( int32_T ) ( ( X [ 122ULL ] * X [ 122ULL
] + 1.8324100759713822E-12 == X [ 122ULL ] * X [ 122ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 484ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 == X [ 122ULL
] * X [ 122ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t422 [ 485ULL ]
= 1 ; t422 [ 486ULL ] = 1 ; t422 [ 487ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 2.0914103314136477E-13 == X [ 122ULL ] * X [ 122ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 488ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 2.0914103314136477E-13 == X [ 122ULL
] * X [ 122ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t422 [ 489ULL ]
= 1 ; t422 [ 490ULL ] = 1 ; t422 [ 491ULL ] = ( int32_T ) ( ( X [ 122ULL ] *
X [ 122ULL ] + 1.4768645655431171E-13 == X [ 122ULL ] * X [ 122ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 122ULL ] * X [ 122ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 492ULL ] = ( int32_T
) ( ( ! ( X [ 122ULL ] * X [ 122ULL ] + 1.4768645655431171E-13 == X [ 122ULL
] * X [ 122ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 122ULL ] *
X [ 122ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
122ULL ] * X [ 122ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t422 [ 493ULL ]
= ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 != 0.0 ) ;
t422 [ 494ULL ] = 1 ; t422 [ 495ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 != 0.0 ) ) ||
( fabs ( t882 * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ) )
>= 0.0 ) ) ; t422 [ 496ULL ] = ( int32_T ) ( X [ 23ULL ] * t888 != 0.0 ) ;
t422 [ 497ULL ] = 1 ; t422 [ 498ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 26ULL ]
>= - 0.1 ) ) || ( ( ( 1.0 - X [ 26ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 26ULL ] >= 0.01 ) ) ; t422 [ 499ULL ] = 1
; t422 [ 500ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Tank_x_ag_I != 0.0 ) ; t422 [
501ULL ] = ( int32_T ) ( X [ 24ULL ] * 100000.0 > 0.0 ) ; t422 [ 502ULL ] = (
int32_T ) ( ( ! ( X [ 24ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 24ULL ]
* 100000.0 ) - t429_idx_0 < 663.67513503334737 ) ) ; t422 [ 503ULL ] = 1 ;
t422 [ 504ULL ] = ( int32_T ) ( ( ! ( t889 >= 1.0 ) ) || ( ( t889 - 1.0 ) *
461.523 + t885 != 0.0 ) ) ; t422 [ 505ULL ] = ( int32_T ) ( t891 * 0.01 !=
0.0 ) ; t422 [ 506ULL ] = 1 ; t422 [ 507ULL ] = 1 ; t422 [ 508ULL ] = 1 ;
t422 [ 509ULL ] = 1 ; t422 [ 510ULL ] = 1 ; t422 [ 511ULL ] = 1 ; t422 [
512ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t422 [ 513ULL ] = 1 ; t422 [
514ULL ] = 1 ; t422 [ 515ULL ] = 1 ; t422 [ 516ULL ] = 1 ; t422 [ 517ULL ] =
1 ; t422 [ 518ULL ] = ( int32_T ) ( ( X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 == X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 519ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 1.8324100759713822E-12 == X [ 172ULL
] * X [ 172ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t422 [ 520ULL ]
= 1 ; t422 [ 521ULL ] = 1 ; t422 [ 522ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 2.0914103314136477E-13 == X [ 172ULL ] * X [ 172ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 523ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 2.0914103314136477E-13 == X [ 172ULL
] * X [ 172ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t422 [ 524ULL ]
= 1 ; t422 [ 525ULL ] = 1 ; t422 [ 526ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 1.4768645655431171E-13 == X [ 172ULL ] * X [ 172ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 527ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 1.4768645655431171E-13 == X [ 172ULL
] * X [ 172ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t422 [ 528ULL ]
= ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t422 [ 529ULL ] = ( int32_T ) ( X [
183ULL ] != 0.0 ) ; t422 [ 530ULL ] = 1 ; t422 [ 531ULL ] = 1 ; t422 [ 532ULL
] = 1 ; t422 [ 533ULL ] = ( int32_T ) ( t900 - t895 != 0.0 ) ; t422 [ 534ULL
] = 1 ; t422 [ 535ULL ] = 1 ; t422 [ 536ULL ] = ( int32_T ) ( ( t896 * t896 *
9.999999999999999E-14 + fabs ( X [ 182ULL ] * t779 * t895 ) * 1.0E-9 == t896
* t896 * 9.999999999999999E-14 + fabs ( X [ 182ULL ] * t779 * t895 ) * 1.0E-9
) && ( fabs ( t896 * t896 * 9.999999999999999E-14 + fabs ( X [ 182ULL ] *
t779 * t895 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 537ULL ] = ( int32_T
) ( ( ! ( t896 * t896 * 9.999999999999999E-14 + fabs ( X [ 182ULL ] * t779 *
t895 ) * 1.0E-9 == t896 * t896 * 9.999999999999999E-14 + fabs ( X [ 182ULL ]
* t779 * t895 ) * 1.0E-9 ) ) || ( ! ( fabs ( t896 * t896 *
9.999999999999999E-14 + fabs ( X [ 182ULL ] * t779 * t895 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t896 * t896 * 9.999999999999999E-14 + fabs ( X [
182ULL ] * t779 * t895 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 538ULL ] = 1 ; t422 [
539ULL ] = 1 ; t422 [ 540ULL ] = ( int32_T ) ( t895 != 0.0 ) ; t422 [ 541ULL
] = ( int32_T ) ( ( ! ( t895 != 0.0 ) ) || ( X [ 182ULL ] != 0.0 ) ) ; t422 [
542ULL ] = 1 ; t422 [ 543ULL ] = ( int32_T ) ( ( ! ( t895 != 0.0 ) ) || ( (
t895 != 0.0 ) && ( ! ( X [ 182ULL ] != 0.0 ) ) ) || ( fabs ( t957 / ( t895 ==
0.0 ? 1.0E-16 : t895 ) / ( X [ 182ULL ] == 0.0 ? 1.0E-16 : X [ 182ULL ] ) )
>= 0.0 ) ) ; t422 [ 544ULL ] = ( int32_T ) ( t905 * 7.8539816339744827E-5 !=
0.0 ) ; t422 [ 545ULL ] = ( int32_T ) ( X [ 27ULL ] * t895 != 0.0 ) ; t422 [
546ULL ] = ( int32_T ) ( t909 * 1.5707963267948965E-8 != 0.0 ) ; t422 [
547ULL ] = ( int32_T ) ( t912 != 0.0 ) ; t422 [ 548ULL ] = ( int32_T ) ( ( !
( t912 != 0.0 ) ) || ( 6.9 / ( t912 == 0.0 ? 1.0E-16 : t912 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 549ULL ] = 1 ; t422 [ 550ULL ] = 1
; t422 [ 551ULL ] = ( int32_T ) ( ( ! ( t912 != 0.0 ) ) || ( ( t912 != 0.0 )
&& ( ! ( 6.9 / ( t912 == 0.0 ? 1.0E-16 : t912 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t912 == 0.0 ? 1.0E-16 : t912 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t912 == 0.0 ? 1.0E-16 : t912 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 552ULL ] = ( int32_T )
( t909 * 1.2337005501361697E-10 != 0.0 ) ; t422 [ 553ULL ] = 1 ; t422 [
554ULL ] = 1 ; t422 [ 555ULL ] = 1 ; t422 [ 556ULL ] = 1 ; t422 [ 557ULL ] =
( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t422 [ 558ULL ] = ( int32_T ) ( X [
188ULL ] != 0.0 ) ; t422 [ 559ULL ] = 1 ; t422 [ 560ULL ] = 1 ; t422 [ 561ULL
] = 1 ; t422 [ 562ULL ] = ( int32_T ) ( t911 - t895 != 0.0 ) ; t422 [ 563ULL
] = 1 ; t422 [ 564ULL ] = 1 ; t422 [ 565ULL ] = ( int32_T ) ( (
intrm_sf_mf_233 * intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [ 187ULL
] * t893 * t895 ) * 1.0E-9 == intrm_sf_mf_233 * intrm_sf_mf_233 *
9.999999999999999E-14 + fabs ( X [ 187ULL ] * t893 * t895 ) * 1.0E-9 ) && (
fabs ( intrm_sf_mf_233 * intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [
187ULL ] * t893 * t895 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 566ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_233 * intrm_sf_mf_233 *
9.999999999999999E-14 + fabs ( X [ 187ULL ] * t893 * t895 ) * 1.0E-9 ==
intrm_sf_mf_233 * intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [ 187ULL
] * t893 * t895 ) * 1.0E-9 ) ) || ( ! ( fabs ( intrm_sf_mf_233 *
intrm_sf_mf_233 * 9.999999999999999E-14 + fabs ( X [ 187ULL ] * t893 * t895 )
* 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( intrm_sf_mf_233 * intrm_sf_mf_233 *
9.999999999999999E-14 + fabs ( X [ 187ULL ] * t893 * t895 ) * 1.0E-9 >= 0.0 )
) ; t422 [ 567ULL ] = 1 ; t422 [ 568ULL ] = 1 ; t422 [ 569ULL ] = ( int32_T )
( t895 != 0.0 ) ; t422 [ 570ULL ] = ( int32_T ) ( ( ! ( t895 != 0.0 ) ) || (
X [ 187ULL ] != 0.0 ) ) ; t422 [ 571ULL ] = 1 ; t422 [ 572ULL ] = ( int32_T )
( ( ! ( t895 != 0.0 ) ) || ( ( t895 != 0.0 ) && ( ! ( X [ 187ULL ] != 0.0 ) )
) || ( fabs ( t977 / ( t895 == 0.0 ? 1.0E-16 : t895 ) / ( X [ 187ULL ] == 0.0
? 1.0E-16 : X [ 187ULL ] ) ) >= 0.0 ) ) ; t422 [ 573ULL ] = ( int32_T ) (
t905 * 7.8539816339744827E-5 != 0.0 ) ; t422 [ 574ULL ] = ( int32_T ) ( t909
* 1.5707963267948965E-8 != 0.0 ) ; t422 [ 575ULL ] = ( int32_T ) ( t918 !=
0.0 ) ; t422 [ 576ULL ] = ( int32_T ) ( ( ! ( t918 != 0.0 ) ) || ( 6.9 / (
t918 == 0.0 ? 1.0E-16 : t918 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [
577ULL ] = 1 ; t422 [ 578ULL ] = 1 ; t422 [ 579ULL ] = ( int32_T ) ( ( ! (
t918 != 0.0 ) ) || ( ( t918 != 0.0 ) && ( ! ( 6.9 / ( t918 == 0.0 ? 1.0E-16 :
t918 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t918 ==
0.0 ? 1.0E-16 : t918 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t918
== 0.0 ? 1.0E-16 : t918 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422
[ 580ULL ] = ( int32_T ) ( t909 * 1.2337005501361697E-10 != 0.0 ) ; t422 [
581ULL ] = 1 ; t422 [ 582ULL ] = 1 ; t422 [ 583ULL ] = 1 ; t422 [ 584ULL ] =
1 ; t422 [ 585ULL ] = ( int32_T ) ( ( ! ( - X [ 172ULL ] >= 0.0 ) ) || ( t906
!= 0.0 ) ) ; t422 [ 586ULL ] = ( int32_T ) ( ( - X [ 172ULL ] >= 0.0 ) || (
t906 != 0.0 ) ) ; t422 [ 587ULL ] = ( int32_T ) ( ( ! ( X [ 186ULL ] >= 0.0 )
) || ( t913 != 0.0 ) ) ; t422 [ 588ULL ] = ( int32_T ) ( ( X [ 186ULL ] >=
0.0 ) || ( t913 != 0.0 ) ) ; t422 [ 589ULL ] = 1 ; t422 [ 590ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 29ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 29ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 29ULL ] >= 0.01 ) ) ;
t422 [ 591ULL ] = 1 ; t422 [ 592ULL ] = ( int32_T ) ( t916 != 0.0 ) ; t422 [
593ULL ] = ( int32_T ) ( X [ 28ULL ] * 100000.0 > 0.0 ) ; t422 [ 594ULL ] = (
int32_T ) ( ( ! ( X [ 28ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 28ULL ]
* 100000.0 ) - t428 [ 0ULL ] < 663.67513503334737 ) ) ; t422 [ 595ULL ] = 1 ;
t422 [ 596ULL ] = ( int32_T ) ( ( ! ( t919 >= 1.0 ) ) || ( ( t919 - 1.0 ) *
461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pipe_MA_R_ag_I != 0.0 ) )
; t422 [ 597ULL ] = ( int32_T ) ( t920 * 0.01 != 0.0 ) ; t422 [ 598ULL ] = 1
; t422 [ 599ULL ] = 1 ; t422 [ 600ULL ] = 1 ; t422 [ 601ULL ] = 1 ; t422 [
602ULL ] = ( int32_T ) ( t925 != 0.0 ) ; t422 [ 603ULL ] = ( int32_T ) ( t995
/ 2.0 * 7.8539816339744827E-5 != 0.0 ) ; t422 [ 604ULL ] = ( int32_T ) ( t904
!= 0.0 ) ; t422 [ 605ULL ] = ( int32_T ) ( ( ! ( t904 != 0.0 ) ) || ( 6.9 / (
t904 == 0.0 ? 1.0E-16 : t904 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [
606ULL ] = 1 ; t422 [ 607ULL ] = 1 ; t422 [ 608ULL ] = ( int32_T ) ( ( ! (
t904 != 0.0 ) ) || ( ( t904 != 0.0 ) && ( ! ( 6.9 / ( t904 == 0.0 ? 1.0E-16 :
t904 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t904 ==
0.0 ? 1.0E-16 : t904 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t904
== 0.0 ? 1.0E-16 : t904 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422
[ 609ULL ] = ( int32_T ) ( ( intrm_sf_mf_271 / 8.0 == intrm_sf_mf_271 / 8.0 )
&& ( fabs ( intrm_sf_mf_271 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 610ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_271 / 8.0 == intrm_sf_mf_271 / 8.0 ) ) || (
! ( fabs ( intrm_sf_mf_271 / 8.0 ) != pmf_get_inf ( ) ) ) || (
intrm_sf_mf_271 / 8.0 >= 0.0 ) ) ; t422 [ 611ULL ] = 1 ; t422 [ 612ULL ] = (
int32_T ) ( t999 / 2.0 >= 0.0 ) ; t422 [ 613ULL ] = 1 ; t422 [ 614ULL ] = 1 ;
t422 [ 615ULL ] = 1 ; t422 [ 616ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t999
/ 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_271 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) ) || ( ( intrm_sf_mf_271 / 8.0 == intrm_sf_mf_271 /
8.0 ) && ( fabs ( intrm_sf_mf_271 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [
617ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t999 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( intrm_sf_mf_271 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || (
( ! ( intrm_sf_mf_271 / 8.0 == intrm_sf_mf_271 / 8.0 ) ) || ( ! ( fabs (
intrm_sf_mf_271 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( intrm_sf_mf_271 / 8.0
>= 0.0 ) ) ; t422 [ 618ULL ] = 1 ; t422 [ 619ULL ] = 1 ; t422 [ 620ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t999 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( intrm_sf_mf_271 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t999 / 2.0
>= 0.0 ) ) ; t422 [ 621ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t999 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_271 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! ( intrm_sf_mf_271 / 8.0 == intrm_sf_mf_271 / 8.0 )
) || ( ! ( fabs ( intrm_sf_mf_271 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( (
intrm_sf_mf_271 / 8.0 == intrm_sf_mf_271 / 8.0 ) && ( fabs ( intrm_sf_mf_271
/ 8.0 ) != pmf_get_inf ( ) ) && ( ! ( intrm_sf_mf_271 / 8.0 >= 0.0 ) ) ) || (
! ( t999 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t999 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( intrm_sf_mf_271 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [
622ULL ] = 1 ; t422 [ 623ULL ] = 1 ; t422 [ 624ULL ] = 1 ; t422 [ 625ULL ] =
1 ; t422 [ 626ULL ] = 1 ; t422 [ 627ULL ] = 1 ; t422 [ 628ULL ] = 1 ; t422 [
629ULL ] = ( int32_T ) ( t999 / 2.0 != 0.0 ) ; t422 [ 630ULL ] = 1 ; t2179 =
t999 / 2.0 ; t422 [ 631ULL ] = ( int32_T ) ( ( ! ( t924 > t1007 /
7.8539816339744827E-5 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
t924 != 0.0 ) ) ; t422 [ 632ULL ] = 1 ; t422 [ 633ULL ] = 1 ; t2179 = t999 /
2.0 ; t422 [ 634ULL ] = ( int32_T ) ( ( ! ( t924 > t1007 /
7.8539816339744827E-5 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( !
( t924 != 0.0 ) ) || ( t999 / 2.0 != 0.0 ) ) ; t422 [ 635ULL ] = ( int32_T )
( - t928 < 663.67513503334737 ) ; t422 [ 636ULL ] = ( int32_T ) ( t930 != 0.0
) ; t422 [ 637ULL ] = ( int32_T ) ( t1019 / 2.0 * 7.8539816339744827E-5 !=
0.0 ) ; t422 [ 638ULL ] = ( int32_T ) ( intrm_sf_mf_293 != 0.0 ) ; t422 [
639ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_293 != 0.0 ) ) || ( 6.9 / (
intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) + 0.00017169489553429715
> 0.0 ) ) ; t422 [ 640ULL ] = 1 ; t422 [ 641ULL ] = 1 ; t422 [ 642ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_293 != 0.0 ) ) || ( ( intrm_sf_mf_293 != 0.0 )
&& ( ! ( 6.9 / ( intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_293
== 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_293 == 0.0 ? 1.0E-16 : intrm_sf_mf_293 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 643ULL ] = ( int32_T ) (
( t932 / 8.0 == t932 / 8.0 ) && ( fabs ( t932 / 8.0 ) != pmf_get_inf ( ) ) )
; t422 [ 644ULL ] = ( int32_T ) ( ( ! ( t932 / 8.0 == t932 / 8.0 ) ) || ( ! (
fabs ( t932 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t932 / 8.0 >= 0.0 ) ) ; t422
[ 645ULL ] = 1 ; t422 [ 646ULL ] = ( int32_T ) ( t1023 / 2.0 >= 0.0 ) ; t422
[ 647ULL ] = 1 ; t422 [ 648ULL ] = 1 ; t422 [ 649ULL ] = 1 ; t422 [ 650ULL ]
= ( int32_T ) ( ( ! ( ( pmf_pow ( t1023 / 2.0 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t932 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t932 / 8.0 ==
t932 / 8.0 ) && ( fabs ( t932 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [
651ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1023 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t932 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
t932 / 8.0 == t932 / 8.0 ) ) || ( ! ( fabs ( t932 / 8.0 ) != pmf_get_inf ( )
) ) ) || ( t932 / 8.0 >= 0.0 ) ) ; t422 [ 652ULL ] = 1 ; t422 [ 653ULL ] = 1
; t422 [ 654ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1023 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t932 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( t1023 / 2.0 >= 0.0 ) ) ; t422 [ 655ULL ] = ( int32_T ) ( ( !
( ( pmf_pow ( t1023 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t932 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t932 / 8.0 == t932 / 8.0 ) ) || (
! ( fabs ( t932 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t932 / 8.0 == t932 /
8.0 ) && ( fabs ( t932 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t932 / 8.0 >=
0.0 ) ) ) || ( ! ( t1023 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1023 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t932 / 8.0 ) * 12.7 + 1.0 != 0.0 )
) ; t422 [ 656ULL ] = 1 ; t422 [ 657ULL ] = 1 ; t422 [ 658ULL ] = 1 ; t422 [
659ULL ] = 1 ; t422 [ 660ULL ] = 1 ; t422 [ 661ULL ] = 1 ; t422 [ 662ULL ] =
1 ; t422 [ 663ULL ] = ( int32_T ) ( t1023 / 2.0 != 0.0 ) ; t422 [ 664ULL ] =
1 ; t2179 = t1023 / 2.0 ; t422 [ 665ULL ] = ( int32_T ) ( ( ! ( t931 > t1031
/ 7.8539816339744827E-5 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
t931 != 0.0 ) ) ; t422 [ 666ULL ] = 1 ; t422 [ 667ULL ] = 1 ; t2179 = t1023 /
2.0 ; t422 [ 668ULL ] = ( int32_T ) ( ( ! ( t931 > t1031 /
7.8539816339744827E-5 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( !
( t931 != 0.0 ) ) || ( t1023 / 2.0 != 0.0 ) ) ; t422 [ 669ULL ] = ( int32_T )
( - intrm_sf_mf_299 < 663.67513503334737 ) ; t422 [ 670ULL ] = 1 ; t422 [
671ULL ] = 1 ; t422 [ 672ULL ] = ( int32_T ) ( X [ 179ULL ] != 0.0 ) ; t422 [
673ULL ] = 1 ; t422 [ 674ULL ] = 1 ; t422 [ 675ULL ] = 1 ; t422 [ 676ULL ] =
1 ; t422 [ 677ULL ] = 1 ; t422 [ 678ULL ] = ( int32_T ) ( ( X [ 172ULL ] * X
[ 172ULL ] + 2.0360111955237585E-13 == X [ 172ULL ] * X [ 172ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 679ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 2.0360111955237585E-13 == X [ 172ULL
] * X [ 172ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t422 [ 680ULL ]
= 1 ; t422 [ 681ULL ] = 1 ; t422 [ 682ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 2.3237892571262758E-14 == X [ 172ULL ] * X [ 172ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 683ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 2.3237892571262758E-14 == X [ 172ULL
] * X [ 172ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t422 [ 684ULL ]
= 1 ; t422 [ 685ULL ] = 1 ; t422 [ 686ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 1.6409606283812411E-14 == X [ 172ULL ] * X [ 172ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 687ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 1.6409606283812411E-14 == X [ 172ULL
] * X [ 172ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t422 [ 688ULL ]
= ( int32_T ) ( X [ 160ULL ] != 0.0 ) ; t422 [ 689ULL ] = 1 ; t422 [ 690ULL ]
= 1 ; t422 [ 691ULL ] = 1 ; t422 [ 692ULL ] = 1 ; t422 [ 693ULL ] = 1 ; t422
[ 694ULL ] = ( int32_T ) ( ( X [ 186ULL ] * X [ 186ULL ] +
2.0360111955237585E-13 == X [ 186ULL ] * X [ 186ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 186ULL ] * X [ 186ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 695ULL ] = ( int32_T
) ( ( ! ( X [ 186ULL ] * X [ 186ULL ] + 2.0360111955237585E-13 == X [ 186ULL
] * X [ 186ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 186ULL ] *
X [ 186ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
186ULL ] * X [ 186ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t422 [ 696ULL ]
= 1 ; t422 [ 697ULL ] = 1 ; t422 [ 698ULL ] = ( int32_T ) ( ( X [ 186ULL ] *
X [ 186ULL ] + 2.3237892571262758E-14 == X [ 186ULL ] * X [ 186ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 186ULL ] * X [ 186ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 699ULL ] = ( int32_T
) ( ( ! ( X [ 186ULL ] * X [ 186ULL ] + 2.3237892571262758E-14 == X [ 186ULL
] * X [ 186ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 186ULL ] *
X [ 186ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
186ULL ] * X [ 186ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t422 [ 700ULL ]
= 1 ; t422 [ 701ULL ] = 1 ; t422 [ 702ULL ] = ( int32_T ) ( ( X [ 186ULL ] *
X [ 186ULL ] + 1.6409606283812411E-14 == X [ 186ULL ] * X [ 186ULL ] +
1.6409606283812411E-14 ) && ( fabs ( X [ 186ULL ] * X [ 186ULL ] +
1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) ; t422 [ 703ULL ] = ( int32_T
) ( ( ! ( X [ 186ULL ] * X [ 186ULL ] + 1.6409606283812411E-14 == X [ 186ULL
] * X [ 186ULL ] + 1.6409606283812411E-14 ) ) || ( ! ( fabs ( X [ 186ULL ] *
X [ 186ULL ] + 1.6409606283812411E-14 ) != pmf_get_inf ( ) ) ) || ( X [
186ULL ] * X [ 186ULL ] + 1.6409606283812411E-14 >= 0.0 ) ) ; t422 [ 704ULL ]
= ( int32_T ) ( X [ 200ULL ] * t942 != 0.0 ) ; t422 [ 705ULL ] = ( int32_T )
( X [ 24ULL ] != 0.0 ) ; t422 [ 706ULL ] = ( int32_T ) ( X [ 200ULL ] != 0.0
) ; t422 [ 707ULL ] = ( int32_T ) ( X [ 179ULL ] != 0.0 ) ; t422 [ 708ULL ] =
( int32_T ) ( X [ 200ULL ] != 0.0 ) ; t422 [ 709ULL ] = 1 ; t422 [ 710ULL ] =
( int32_T ) ( ( ! ( - X [ 172ULL ] > 0.0 ) ) || ( t936 != 0.0 ) ) ; t422 [
711ULL ] = 1 ; t422 [ 712ULL ] = 1 ; t422 [ 713ULL ] = 1 ; t422 [ 714ULL ] =
( int32_T ) ( ( ! ( - X [ 172ULL ] > 0.0 ) ) || ( ! ( t936 != 0.0 ) ) || (
t943 != 0.0 ) ) ; t422 [ 715ULL ] = 1 ; t422 [ 716ULL ] = ( int32_T ) ( ( ! (
- X [ 172ULL ] < 0.0 ) ) || ( - X [ 172ULL ] > 0.0 ) || ( t936 != 0.0 ) ) ;
t422 [ 717ULL ] = 1 ; t422 [ 718ULL ] = 1 ; t422 [ 719ULL ] = 1 ; t422 [
720ULL ] = ( int32_T ) ( ( ! ( - X [ 172ULL ] < 0.0 ) ) || ( ! ( t936 != 0.0
) ) || ( - X [ 172ULL ] > 0.0 ) || ( t943 != 0.0 ) ) ; t422 [ 721ULL ] = 1 ;
t422 [ 722ULL ] = 1 ; t422 [ 723ULL ] = ( int32_T ) ( t949 != 0.0 ) ; t422 [
724ULL ] = 1 ; t422 [ 725ULL ] = 1 ; t422 [ 726ULL ] = 1 ; t422 [ 727ULL ] =
1 ; t422 [ 728ULL ] = 1 ; t422 [ 729ULL ] = 1 ; t422 [ 730ULL ] = 1 ; t422 [
731ULL ] = 1 ; t422 [ 732ULL ] = 1 ; t422 [ 733ULL ] = 1 ; t422 [ 734ULL ] =
( int32_T ) ( intrm_sf_mf_369 - t942 != 0.0 ) ; t422 [ 735ULL ] = 1 ; t422 [
736ULL ] = 1 ; t422 [ 737ULL ] = ( int32_T ) ( t942 != 0.0 ) ; t422 [ 738ULL
] = ( int32_T ) ( ( ! ( t942 != 0.0 ) ) || ( X [ 200ULL ] != 0.0 ) ) ; t422 [
739ULL ] = 1 ; t422 [ 740ULL ] = ( int32_T ) ( ( ! ( t942 != 0.0 ) ) || ( (
t942 != 0.0 ) && ( ! ( X [ 200ULL ] != 0.0 ) ) ) || ( fabs ( t1055 / ( t942
== 0.0 ? 1.0E-16 : t942 ) / ( X [ 200ULL ] == 0.0 ? 1.0E-16 : X [ 200ULL ] )
) >= 0.0 ) ) ; t422 [ 741ULL ] = ( int32_T ) ( ( ! ( - X [ 172ULL ] >= 0.0 )
) || ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 != 0.0
) ) ; t422 [ 742ULL ] = ( int32_T ) ( ( - X [ 172ULL ] >= 0.0 ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 != 0.0 ) ) ;
t422 [ 743ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t422 [ 744ULL ] = 1 ;
t422 [ 745ULL ] = 1 ; t422 [ 746ULL ] = 1 ; t422 [ 747ULL ] = 1 ; t422 [
748ULL ] = 1 ; t422 [ 749ULL ] = ( int32_T ) ( ( X [ 172ULL ] * X [ 172ULL ]
+ 1.8324100759713822E-12 == X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 750ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 1.8324100759713822E-12 == X [ 172ULL
] * X [ 172ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t422 [ 751ULL ]
= 1 ; t422 [ 752ULL ] = 1 ; t422 [ 753ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 2.0914103314136477E-13 == X [ 172ULL ] * X [ 172ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 754ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 2.0914103314136477E-13 == X [ 172ULL
] * X [ 172ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t422 [ 755ULL ]
= 1 ; t422 [ 756ULL ] = 1 ; t422 [ 757ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 1.4768645655431171E-13 == X [ 172ULL ] * X [ 172ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 758ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 1.4768645655431171E-13 == X [ 172ULL
] * X [ 172ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t422 [ 759ULL ]
= ( int32_T ) ( X [ 179ULL ] != 0.0 ) ; t422 [ 760ULL ] = 1 ; t422 [ 761ULL ]
= 1 ; t422 [ 762ULL ] = 1 ; t422 [ 763ULL ] = 1 ; t422 [ 764ULL ] = 1 ; t422
[ 765ULL ] = ( int32_T ) ( ( X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 == X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 766ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 1.8324100759713822E-12 == X [ 172ULL
] * X [ 172ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t422 [ 767ULL ]
= 1 ; t422 [ 768ULL ] = 1 ; t422 [ 769ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 2.0914103314136477E-13 == X [ 172ULL ] * X [ 172ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 770ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 2.0914103314136477E-13 == X [ 172ULL
] * X [ 172ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t422 [ 771ULL ]
= 1 ; t422 [ 772ULL ] = 1 ; t422 [ 773ULL ] = ( int32_T ) ( ( X [ 172ULL ] *
X [ 172ULL ] + 1.4768645655431171E-13 == X [ 172ULL ] * X [ 172ULL ] +
1.4768645655431171E-13 ) && ( fabs ( X [ 172ULL ] * X [ 172ULL ] +
1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 774ULL ] = ( int32_T
) ( ( ! ( X [ 172ULL ] * X [ 172ULL ] + 1.4768645655431171E-13 == X [ 172ULL
] * X [ 172ULL ] + 1.4768645655431171E-13 ) ) || ( ! ( fabs ( X [ 172ULL ] *
X [ 172ULL ] + 1.4768645655431171E-13 ) != pmf_get_inf ( ) ) ) || ( X [
172ULL ] * X [ 172ULL ] + 1.4768645655431171E-13 >= 0.0 ) ) ; t422 [ 775ULL ]
= ( int32_T ) ( t935 != 0.0 ) ; t422 [ 776ULL ] = 1 ; t422 [ 777ULL ] = (
int32_T ) ( ( ! ( t935 != 0.0 ) ) || ( fabs ( t943 * 2.0 / ( t935 == 0.0 ?
1.0E-16 : t935 ) ) >= 0.0 ) ) ; t422 [ 778ULL ] = 1 ; t422 [ 779ULL ] = 1 ;
t422 [ 780ULL ] = 1 ; t422 [ 781ULL ] = 1 ; t422 [ 782ULL ] = 1 ; t422 [
783ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 == X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 784ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 == X [ 213ULL
] * X [ 213ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [ 785ULL ]
= 1 ; t422 [ 786ULL ] = 1 ; t422 [ 787ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 788ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL
] * X [ 213ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [ 789ULL ]
= 1 ; t422 [ 790ULL ] = 1 ; t422 [ 791ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 792ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL
] * X [ 213ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [ 793ULL ]
= ( int32_T ) ( t950 * 293.15 != 0.0 ) ; t422 [ 794ULL ] = 1 ; t422 [ 795ULL
] = 1 ; t422 [ 796ULL ] = 1 ; t422 [ 797ULL ] = 1 ; t422 [ 798ULL ] = 1 ;
t422 [ 799ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 == X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 800ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 == X [ 213ULL
] * X [ 213ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [ 801ULL ]
= 1 ; t422 [ 802ULL ] = 1 ; t422 [ 803ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 804ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL
] * X [ 213ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [ 805ULL ]
= 1 ; t422 [ 806ULL ] = 1 ; t422 [ 807ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 808ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL
] * X [ 213ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [ 809ULL ]
= ( int32_T ) ( X [ 31ULL ] != 0.0 ) ; t422 [ 810ULL ] = 1 ; t422 [ 811ULL ]
= 1 ; t422 [ 812ULL ] = 1 ; t422 [ 813ULL ] = 1 ; t422 [ 814ULL ] = 1 ; t422
[ 815ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 == X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 816ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 == X [ 213ULL
] * X [ 213ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [ 817ULL ]
= 1 ; t422 [ 818ULL ] = 1 ; t422 [ 819ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 820ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL
] * X [ 213ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [ 821ULL ]
= 1 ; t422 [ 822ULL ] = 1 ; t422 [ 823ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 824ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL
] * X [ 213ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [ 825ULL ]
= 1 ; t422 [ 826ULL ] = 1 ; t422 [ 827ULL ] = 1 ; t422 [ 828ULL ] = ( int32_T
) ( X [ 31ULL ] != 0.0 ) ; t422 [ 829ULL ] = 1 ; t422 [ 830ULL ] = 1 ; t422 [
831ULL ] = 1 ; t422 [ 832ULL ] = ( int32_T ) ( X [ 31ULL ] != 0.0 ) ; t422 [
833ULL ] = 1 ; t422 [ 834ULL ] = 1 ; t422 [ 835ULL ] = 1 ; t422 [ 836ULL ] =
1 ; t422 [ 837ULL ] = 1 ; t422 [ 838ULL ] = 1 ; t422 [ 839ULL ] = ( int32_T )
( X [ 32ULL ] * t951 != 0.0 ) ; t422 [ 840ULL ] = 1 ; t422 [ 841ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 34ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 34ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 34ULL ] >= 0.01 ) ) ;
t422 [ 842ULL ] = 1 ; t422 [ 843ULL ] = ( int32_T ) ( intrm_sf_mf_450 != 0.0
) ; t422 [ 844ULL ] = ( int32_T ) ( X [ 31ULL ] * 100000.0 > 0.0 ) ; t422 [
845ULL ] = ( int32_T ) ( ( ! ( X [ 31ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log
( X [ 31ULL ] * 100000.0 ) - t430 [ 0ULL ] < 663.67513503334737 ) ) ; t422 [
846ULL ] = 1 ; t422 [ 847ULL ] = ( int32_T ) ( ( ! ( t952 >= 1.0 ) ) || ( (
t952 - 1.0 ) * 461.523 + t948 != 0.0 ) ) ; t422 [ 848ULL ] = ( int32_T ) (
t954 * 0.01 != 0.0 ) ; t422 [ 849ULL ] = 1 ; t422 [ 850ULL ] = 1 ; t422 [
851ULL ] = 1 ; t422 [ 852ULL ] = 1 ; t422 [ 853ULL ] = 1 ; t422 [ 854ULL ] =
1 ; t422 [ 855ULL ] = ( int32_T ) ( X [ 31ULL ] != 0.0 ) ; t422 [ 856ULL ] =
1 ; t422 [ 857ULL ] = 1 ; t422 [ 858ULL ] = 1 ; t422 [ 859ULL ] = 1 ; t422 [
860ULL ] = 1 ; t422 [ 861ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X [ 213ULL ]
+ 2.7104677895120892E-12 == X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 862ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 == X [ 213ULL
] * X [ 213ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [ 863ULL ]
= 1 ; t422 [ 864ULL ] = 1 ; t422 [ 865ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 866ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 == X [ 213ULL
] * X [ 213ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [ 867ULL ]
= 1 ; t422 [ 868ULL ] = 1 ; t422 [ 869ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 870ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 == X [ 213ULL
] * X [ 213ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [ 871ULL ]
= ( int32_T ) ( X [ 31ULL ] != 0.0 ) ; t422 [ 872ULL ] = 1 ; t422 [ 873ULL ]
= 1 ; t422 [ 874ULL ] = 1 ; t422 [ 875ULL ] = 1 ; t422 [ 876ULL ] = 1 ; t422
[ 877ULL ] = ( int32_T ) ( ( X [ 244ULL ] * X [ 244ULL ] +
2.7104677895120892E-12 == X [ 244ULL ] * X [ 244ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 244ULL ] * X [ 244ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 878ULL ] = ( int32_T
) ( ( ! ( X [ 244ULL ] * X [ 244ULL ] + 2.7104677895120892E-12 == X [ 244ULL
] * X [ 244ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 244ULL ] *
X [ 244ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
244ULL ] * X [ 244ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [ 879ULL ]
= 1 ; t422 [ 880ULL ] = 1 ; t422 [ 881ULL ] = ( int32_T ) ( ( X [ 244ULL ] *
X [ 244ULL ] + 5.2285258285341208E-12 == X [ 244ULL ] * X [ 244ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 244ULL ] * X [ 244ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 882ULL ] = ( int32_T
) ( ( ! ( X [ 244ULL ] * X [ 244ULL ] + 5.2285258285341208E-12 == X [ 244ULL
] * X [ 244ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 244ULL ] *
X [ 244ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
244ULL ] * X [ 244ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [ 883ULL ]
= 1 ; t422 [ 884ULL ] = 1 ; t422 [ 885ULL ] = ( int32_T ) ( ( X [ 244ULL ] *
X [ 244ULL ] + 3.6921614138577926E-12 == X [ 244ULL ] * X [ 244ULL ] +
3.6921614138577926E-12 ) && ( fabs ( X [ 244ULL ] * X [ 244ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 886ULL ] = ( int32_T
) ( ( ! ( X [ 244ULL ] * X [ 244ULL ] + 3.6921614138577926E-12 == X [ 244ULL
] * X [ 244ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [ 244ULL ] *
X [ 244ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) || ( X [
244ULL ] * X [ 244ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [ 887ULL ]
= ( int32_T ) ( t960 != 0.0 ) ; t422 [ 888ULL ] = ( int32_T ) ( ( ! ( t960 !=
0.0 ) ) || ( X [ 221ULL ] != 0.0 ) ) ; t422 [ 889ULL ] = ( int32_T ) ( X [
31ULL ] / ( t960 == 0.0 ? 1.0E-16 : t960 ) / ( X [ 221ULL ] == 0.0 ? 1.0E-16
: X [ 221ULL ] ) != 0.0 ) ; t422 [ 890ULL ] = ( int32_T ) ( X [ 38ULL ] !=
0.0 ) ; t422 [ 891ULL ] = ( int32_T ) ( X [ 262ULL ] != 0.0 ) ; t422 [ 892ULL
] = 1 ; t422 [ 893ULL ] = 1 ; t422 [ 894ULL ] = 1 ; t422 [ 895ULL ] = (
int32_T ) ( t967 - t964 != 0.0 ) ; t422 [ 896ULL ] = 1 ; t422 [ 897ULL ] = 1
; t422 [ 898ULL ] = ( int32_T ) ( ( t965 * t965 * 9.999999999999999E-14 +
fabs ( X [ 261ULL ] * t968 * t964 ) * 1.0E-9 == t965 * t965 *
9.999999999999999E-14 + fabs ( X [ 261ULL ] * t968 * t964 ) * 1.0E-9 ) && (
fabs ( t965 * t965 * 9.999999999999999E-14 + fabs ( X [ 261ULL ] * t968 *
t964 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 899ULL ] = ( int32_T ) ( (
! ( t965 * t965 * 9.999999999999999E-14 + fabs ( X [ 261ULL ] * t968 * t964 )
* 1.0E-9 == t965 * t965 * 9.999999999999999E-14 + fabs ( X [ 261ULL ] * t968
* t964 ) * 1.0E-9 ) ) || ( ! ( fabs ( t965 * t965 * 9.999999999999999E-14 +
fabs ( X [ 261ULL ] * t968 * t964 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || (
t965 * t965 * 9.999999999999999E-14 + fabs ( X [ 261ULL ] * t968 * t964 ) *
1.0E-9 >= 0.0 ) ) ; t422 [ 900ULL ] = 1 ; t422 [ 901ULL ] = 1 ; t422 [ 902ULL
] = ( int32_T ) ( t964 != 0.0 ) ; t422 [ 903ULL ] = ( int32_T ) ( ( ! ( t964
!= 0.0 ) ) || ( X [ 261ULL ] != 0.0 ) ) ; t422 [ 904ULL ] = 1 ; t422 [ 905ULL
] = ( int32_T ) ( ( ! ( t964 != 0.0 ) ) || ( ( t964 != 0.0 ) && ( ! ( X [
261ULL ] != 0.0 ) ) ) || ( fabs ( t1070 / ( t964 == 0.0 ? 1.0E-16 : t964 ) /
( X [ 261ULL ] == 0.0 ? 1.0E-16 : X [ 261ULL ] ) ) >= 0.0 ) ) ; t422 [ 906ULL
] = ( int32_T ) ( t975 * 0.0019634954084936209 != 0.0 ) ; t422 [ 907ULL ] = (
int32_T ) ( X [ 35ULL ] * t964 != 0.0 ) ; t422 [ 908ULL ] = ( int32_T ) (
t982 * 9.8174770424681068E-6 != 0.0 ) ; t422 [ 909ULL ] = ( int32_T ) ( t985
!= 0.0 ) ; t422 [ 910ULL ] = ( int32_T ) ( ( ! ( t985 != 0.0 ) ) || ( 6.9 / (
t985 == 0.0 ? 1.0E-16 : t985 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [
911ULL ] = 1 ; t422 [ 912ULL ] = 1 ; t422 [ 913ULL ] = ( int32_T ) ( ( ! (
t985 != 0.0 ) ) || ( ( t985 != 0.0 ) && ( ! ( 6.9 / ( t985 == 0.0 ? 1.0E-16 :
t985 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t985 ==
0.0 ? 1.0E-16 : t985 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t985
== 0.0 ? 1.0E-16 : t985 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422
[ 914ULL ] = ( int32_T ) ( t982 * 3.855314219175531E-7 != 0.0 ) ; t422 [
915ULL ] = 1 ; t422 [ 916ULL ] = 1 ; t422 [ 917ULL ] = 1 ; t422 [ 918ULL ] =
1 ; t422 [ 919ULL ] = ( int32_T ) ( X [ 38ULL ] != 0.0 ) ; t422 [ 920ULL ] =
( int32_T ) ( X [ 265ULL ] != 0.0 ) ; t422 [ 921ULL ] = 1 ; t422 [ 922ULL ] =
1 ; t422 [ 923ULL ] = 1 ; t422 [ 924ULL ] = ( int32_T ) ( t984 - t964 != 0.0
) ; t422 [ 925ULL ] = 1 ; t422 [ 926ULL ] = 1 ; t422 [ 927ULL ] = ( int32_T )
( ( t978 * t978 * 9.999999999999999E-14 + fabs ( X [ 264ULL ] * t958 * t964 )
* 1.0E-9 == t978 * t978 * 9.999999999999999E-14 + fabs ( X [ 264ULL ] * t958
* t964 ) * 1.0E-9 ) && ( fabs ( t978 * t978 * 9.999999999999999E-14 + fabs (
X [ 264ULL ] * t958 * t964 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [
928ULL ] = ( int32_T ) ( ( ! ( t978 * t978 * 9.999999999999999E-14 + fabs ( X
[ 264ULL ] * t958 * t964 ) * 1.0E-9 == t978 * t978 * 9.999999999999999E-14 +
fabs ( X [ 264ULL ] * t958 * t964 ) * 1.0E-9 ) ) || ( ! ( fabs ( t978 * t978
* 9.999999999999999E-14 + fabs ( X [ 264ULL ] * t958 * t964 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t978 * t978 * 9.999999999999999E-14 + fabs ( X [
264ULL ] * t958 * t964 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 929ULL ] = 1 ; t422 [
930ULL ] = 1 ; t422 [ 931ULL ] = ( int32_T ) ( t964 != 0.0 ) ; t422 [ 932ULL
] = ( int32_T ) ( ( ! ( t964 != 0.0 ) ) || ( X [ 264ULL ] != 0.0 ) ) ; t422 [
933ULL ] = 1 ; t422 [ 934ULL ] = ( int32_T ) ( ( ! ( t964 != 0.0 ) ) || ( (
t964 != 0.0 ) && ( ! ( X [ 264ULL ] != 0.0 ) ) ) || ( fabs ( t1090 / ( t964
== 0.0 ? 1.0E-16 : t964 ) / ( X [ 264ULL ] == 0.0 ? 1.0E-16 : X [ 264ULL ] )
) >= 0.0 ) ) ; t422 [ 935ULL ] = ( int32_T ) ( t975 * 0.0019634954084936209
!= 0.0 ) ; t422 [ 936ULL ] = ( int32_T ) ( t982 * 9.8174770424681068E-6 !=
0.0 ) ; t422 [ 937ULL ] = ( int32_T ) ( t991 != 0.0 ) ; t422 [ 938ULL ] = (
int32_T ) ( ( ! ( t991 != 0.0 ) ) || ( 6.9 / ( t991 == 0.0 ? 1.0E-16 : t991 )
+ 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 939ULL ] = 1 ; t422 [ 940ULL ] = 1
; t422 [ 941ULL ] = ( int32_T ) ( ( ! ( t991 != 0.0 ) ) || ( ( t991 != 0.0 )
&& ( ! ( 6.9 / ( t991 == 0.0 ? 1.0E-16 : t991 ) + 2.8767404433520813E-5 > 0.0
) ) ) || ( pmf_log10 ( 6.9 / ( t991 == 0.0 ? 1.0E-16 : t991 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t991 == 0.0 ? 1.0E-16 : t991 )
+ 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [ 942ULL ] = ( int32_T ) (
t982 * 3.855314219175531E-7 != 0.0 ) ; t422 [ 943ULL ] = 1 ; t422 [ 944ULL ]
= 1 ; t422 [ 945ULL ] = 1 ; t422 [ 946ULL ] = 1 ; t422 [ 947ULL ] = ( int32_T
) ( ( ! ( - X [ 186ULL ] >= 0.0 ) ) || ( t976 != 0.0 ) ) ; t422 [ 948ULL ] =
( int32_T ) ( ( - X [ 186ULL ] >= 0.0 ) || ( t976 != 0.0 ) ) ; t422 [ 949ULL
] = ( int32_T ) ( ( ! ( X [ 263ULL ] >= 0.0 ) ) || ( t987 != 0.0 ) ) ; t422 [
950ULL ] = ( int32_T ) ( ( X [ 263ULL ] >= 0.0 ) || ( t987 != 0.0 ) ) ; t422
[ 951ULL ] = 1 ; t422 [ 952ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 37ULL ] >= -
0.1 ) ) || ( ( ( 1.0 - X [ 37ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 )
|| ( 1.0 - X [ 37ULL ] >= 0.01 ) ) ; t422 [ 953ULL ] = 1 ; t422 [ 954ULL ] =
( int32_T ) ( t989 != 0.0 ) ; t422 [ 955ULL ] = ( int32_T ) ( X [ 38ULL ] *
100000.0 > 0.0 ) ; t422 [ 956ULL ] = ( int32_T ) ( ( ! ( X [ 38ULL ] *
100000.0 > 0.0 ) ) || ( pmf_log ( X [ 38ULL ] * 100000.0 ) - t122 [ 0ULL ] <
663.67513503334737 ) ) ; t422 [ 957ULL ] = 1 ; t422 [ 958ULL ] = ( int32_T )
( ( ! ( t992 >= 1.0 ) ) || ( ( t992 - 1.0 ) * 461.523 + t990 != 0.0 ) ) ;
t422 [ 959ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_x_ws_I * 0.01 != 0.0 ) ;
t422 [ 960ULL ] = 1 ; t422 [ 961ULL ] = 1 ; t422 [ 962ULL ] = 1 ; t422 [
963ULL ] = 1 ; t422 [ 964ULL ] = ( int32_T ) ( t930 != 0.0 ) ; t422 [ 965ULL
] = ( int32_T ) ( t1106 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t422 [
966ULL ] = ( int32_T ) ( intrm_sf_mf_528 != 0.0 ) ; t422 [ 967ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_528 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_528 ==
0.0 ? 1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [
968ULL ] = 1 ; t422 [ 969ULL ] = 1 ; t422 [ 970ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_528 != 0.0 ) ) || ( ( intrm_sf_mf_528 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_528 == 0.0 ? 1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5
> 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_528 == 0.0 ? 1.0E-16 :
intrm_sf_mf_528 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_528 == 0.0 ? 1.0E-16 : intrm_sf_mf_528 ) + 2.8767404433520813E-5
) * 3.24 != 0.0 ) ) ; t422 [ 971ULL ] = ( int32_T ) ( ( t996 / 8.0 == t996 /
8.0 ) && ( fabs ( t996 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 972ULL ] = (
int32_T ) ( ( ! ( t996 / 8.0 == t996 / 8.0 ) ) || ( ! ( fabs ( t996 / 8.0 )
!= pmf_get_inf ( ) ) ) || ( t996 / 8.0 >= 0.0 ) ) ; t422 [ 973ULL ] = 1 ;
t422 [ 974ULL ] = ( int32_T ) ( t1110 / 2.0 >= 0.0 ) ; t422 [ 975ULL ] = 1 ;
t422 [ 976ULL ] = 1 ; t422 [ 977ULL ] = 1 ; t422 [ 978ULL ] = ( int32_T ) ( (
! ( ( pmf_pow ( t1110 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t996
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t996 / 8.0 == t996 / 8.0 ) && (
fabs ( t996 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 979ULL ] = ( int32_T )
( ( ! ( ( pmf_pow ( t1110 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t996 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t996 / 8.0 == t996 / 8.0 )
) || ( ! ( fabs ( t996 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t996 / 8.0 >=
0.0 ) ) ; t422 [ 980ULL ] = 1 ; t422 [ 981ULL ] = 1 ; t422 [ 982ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1110 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t996 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1110 / 2.0 >= 0.0 )
) ; t422 [ 983ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1110 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t996 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t996 / 8.0 == t996 / 8.0 ) ) || ( ! ( fabs ( t996 / 8.0
) != pmf_get_inf ( ) ) ) ) || ( ( t996 / 8.0 == t996 / 8.0 ) && ( fabs ( t996
/ 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t996 / 8.0 >= 0.0 ) ) ) || ( ! ( t1110
/ 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1110 / 2.0 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t996 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 984ULL ] = 1 ;
t422 [ 985ULL ] = 1 ; t422 [ 986ULL ] = 1 ; t422 [ 987ULL ] = 1 ; t422 [
988ULL ] = 1 ; t422 [ 989ULL ] = 1 ; t422 [ 990ULL ] = 1 ; t422 [ 991ULL ] =
( int32_T ) ( t1110 / 2.0 != 0.0 ) ; t422 [ 992ULL ] = 1 ; t2179 = t1110 /
2.0 ; t422 [ 993ULL ] = ( int32_T ) ( ( ! ( t974 > t1118 /
0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
t974 != 0.0 ) ) ; t422 [ 994ULL ] = 1 ; t422 [ 995ULL ] = 1 ; t2179 = t1110 /
2.0 ; t422 [ 996ULL ] = ( int32_T ) ( ( ! ( t974 > t1118 /
0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( !
( t974 != 0.0 ) ) || ( t1110 / 2.0 != 0.0 ) ) ; t422 [ 997ULL ] = ( int32_T )
( - t997 < 663.67513503334737 ) ; t422 [ 998ULL ] = ( int32_T ) ( t1000 !=
0.0 ) ; t422 [ 999ULL ] = ( int32_T ) ( t1130 / 2.0 * 0.0019634954084936209
!= 0.0 ) ; t422 [ 1000ULL ] = ( int32_T ) ( intrm_sf_mf_551 != 0.0 ) ; t422 [
1001ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_551 != 0.0 ) ) || ( 6.9 / (
intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) + 2.8767404433520813E-5
> 0.0 ) ) ; t422 [ 1002ULL ] = 1 ; t422 [ 1003ULL ] = 1 ; t422 [ 1004ULL ] =
( int32_T ) ( ( ! ( intrm_sf_mf_551 != 0.0 ) ) || ( ( intrm_sf_mf_551 != 0.0
) && ( ! ( 6.9 / ( intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_551 ==
0.0 ? 1.0E-16 : intrm_sf_mf_551 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9
/ ( intrm_sf_mf_551 == 0.0 ? 1.0E-16 : intrm_sf_mf_551 ) +
2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [ 1005ULL ] = ( int32_T ) (
( t1002 / 8.0 == t1002 / 8.0 ) && ( fabs ( t1002 / 8.0 ) != pmf_get_inf ( ) )
) ; t422 [ 1006ULL ] = ( int32_T ) ( ( ! ( t1002 / 8.0 == t1002 / 8.0 ) ) ||
( ! ( fabs ( t1002 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1002 / 8.0 >= 0.0 ) )
; t422 [ 1007ULL ] = 1 ; t422 [ 1008ULL ] = ( int32_T ) ( t1134 / 2.0 >= 0.0
) ; t422 [ 1009ULL ] = 1 ; t422 [ 1010ULL ] = 1 ; t422 [ 1011ULL ] = 1 ; t422
[ 1012ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1134 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1002 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( t1002 / 8.0 == t1002 / 8.0 ) && ( fabs ( t1002 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t422 [ 1013ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1134 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1002 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1002 / 8.0 == t1002 / 8.0 ) ) || ( ! ( fabs (
t1002 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1002 / 8.0 >= 0.0 ) ) ; t422 [
1014ULL ] = 1 ; t422 [ 1015ULL ] = 1 ; t422 [ 1016ULL ] = ( int32_T ) ( ( ! (
( pmf_pow ( t1134 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1002 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1134 / 2.0 >= 0.0 ) ) ; t422 [ 1017ULL
] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1134 / 2.0 , 0.66666666666666663 ) - 1.0
) * pmf_sqrt ( t1002 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1002 /
8.0 == t1002 / 8.0 ) ) || ( ! ( fabs ( t1002 / 8.0 ) != pmf_get_inf ( ) ) ) )
|| ( ( t1002 / 8.0 == t1002 / 8.0 ) && ( fabs ( t1002 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1002 / 8.0 >= 0.0 ) ) ) || ( ! ( t1134 / 2.0 >= 0.0 ) ) || (
( pmf_pow ( t1134 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1002 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1018ULL ] = 1 ; t422 [ 1019ULL ] = 1 ;
t422 [ 1020ULL ] = 1 ; t422 [ 1021ULL ] = 1 ; t422 [ 1022ULL ] = 1 ; t422 [
1023ULL ] = 1 ; t422 [ 1024ULL ] = 1 ; t422 [ 1025ULL ] = ( int32_T ) ( t1134
/ 2.0 != 0.0 ) ; t422 [ 1026ULL ] = 1 ; t2179 = t1134 / 2.0 ; t422 [ 1027ULL
] = ( int32_T ) ( ( ! ( intrm_sf_mf_550 > t1142 / 0.0019634954084936209 / (
t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( intrm_sf_mf_550 != 0.0 ) ) ;
t422 [ 1028ULL ] = 1 ; t422 [ 1029ULL ] = 1 ; t2179 = t1134 / 2.0 ; t422 [
1030ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_550 > t1142 /
0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( !
( intrm_sf_mf_550 != 0.0 ) ) || ( t1134 / 2.0 != 0.0 ) ) ; t422 [ 1031ULL ] =
( int32_T ) ( - t1003 < 663.67513503334737 ) ; t422 [ 1032ULL ] = 1 ; t422 [
1033ULL ] = 1 ; t422 [ 1034ULL ] = ( int32_T ) ( X [ 160ULL ] != 0.0 ) ; t422
[ 1035ULL ] = 1 ; t422 [ 1036ULL ] = 1 ; t422 [ 1037ULL ] = 1 ; t422 [
1038ULL ] = 1 ; t422 [ 1039ULL ] = 1 ; t422 [ 1040ULL ] = ( int32_T ) ( ( X [
186ULL ] * X [ 186ULL ] + 5.0900279888093953E-12 == X [ 186ULL ] * X [ 186ULL
] + 5.0900279888093953E-12 ) && ( fabs ( X [ 186ULL ] * X [ 186ULL ] +
5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1041ULL ] = (
int32_T ) ( ( ! ( X [ 186ULL ] * X [ 186ULL ] + 5.0900279888093953E-12 == X [
186ULL ] * X [ 186ULL ] + 5.0900279888093953E-12 ) ) || ( ! ( fabs ( X [
186ULL ] * X [ 186ULL ] + 5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 186ULL ] * X [ 186ULL ] + 5.0900279888093953E-12 >= 0.0 ) ) ; t422 [
1042ULL ] = 1 ; t422 [ 1043ULL ] = 1 ; t422 [ 1044ULL ] = ( int32_T ) ( ( X [
186ULL ] * X [ 186ULL ] + 5.8094731428156895E-13 == X [ 186ULL ] * X [ 186ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 186ULL ] * X [ 186ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1045ULL ] = (
int32_T ) ( ( ! ( X [ 186ULL ] * X [ 186ULL ] + 5.8094731428156895E-13 == X [
186ULL ] * X [ 186ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
186ULL ] * X [ 186ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 186ULL ] * X [ 186ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t422 [
1046ULL ] = 1 ; t422 [ 1047ULL ] = 1 ; t422 [ 1048ULL ] = ( int32_T ) ( ( X [
186ULL ] * X [ 186ULL ] + 4.1024015709531014E-13 == X [ 186ULL ] * X [ 186ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 186ULL ] * X [ 186ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1049ULL ] = (
int32_T ) ( ( ! ( X [ 186ULL ] * X [ 186ULL ] + 4.1024015709531014E-13 == X [
186ULL ] * X [ 186ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
186ULL ] * X [ 186ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 186ULL ] * X [ 186ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t422 [
1050ULL ] = ( int32_T ) ( X [ 251ULL ] != 0.0 ) ; t422 [ 1051ULL ] = 1 ; t422
[ 1052ULL ] = 1 ; t422 [ 1053ULL ] = 1 ; t422 [ 1054ULL ] = 1 ; t422 [
1055ULL ] = 1 ; t422 [ 1056ULL ] = ( int32_T ) ( ( X [ 263ULL ] * X [ 263ULL
] + 5.0900279888093953E-12 == X [ 263ULL ] * X [ 263ULL ] +
5.0900279888093953E-12 ) && ( fabs ( X [ 263ULL ] * X [ 263ULL ] +
5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1057ULL ] = (
int32_T ) ( ( ! ( X [ 263ULL ] * X [ 263ULL ] + 5.0900279888093953E-12 == X [
263ULL ] * X [ 263ULL ] + 5.0900279888093953E-12 ) ) || ( ! ( fabs ( X [
263ULL ] * X [ 263ULL ] + 5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 263ULL ] * X [ 263ULL ] + 5.0900279888093953E-12 >= 0.0 ) ) ; t422 [
1058ULL ] = 1 ; t422 [ 1059ULL ] = 1 ; t422 [ 1060ULL ] = ( int32_T ) ( ( X [
263ULL ] * X [ 263ULL ] + 5.8094731428156895E-13 == X [ 263ULL ] * X [ 263ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 263ULL ] * X [ 263ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1061ULL ] = (
int32_T ) ( ( ! ( X [ 263ULL ] * X [ 263ULL ] + 5.8094731428156895E-13 == X [
263ULL ] * X [ 263ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
263ULL ] * X [ 263ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 263ULL ] * X [ 263ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t422 [
1062ULL ] = 1 ; t422 [ 1063ULL ] = 1 ; t422 [ 1064ULL ] = ( int32_T ) ( ( X [
263ULL ] * X [ 263ULL ] + 4.1024015709531014E-13 == X [ 263ULL ] * X [ 263ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 263ULL ] * X [ 263ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1065ULL ] = (
int32_T ) ( ( ! ( X [ 263ULL ] * X [ 263ULL ] + 4.1024015709531014E-13 == X [
263ULL ] * X [ 263ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
263ULL ] * X [ 263ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 263ULL ] * X [ 263ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t422 [
1066ULL ] = ( int32_T ) ( X [ 39ULL ] != 0.0 ) ; t422 [ 1067ULL ] = ( int32_T
) ( X [ 276ULL ] != 0.0 ) ; t422 [ 1068ULL ] = 1 ; t422 [ 1069ULL ] = 1 ;
t422 [ 1070ULL ] = 1 ; t422 [ 1071ULL ] = ( int32_T ) ( t1011 - t1006 != 0.0
) ; t422 [ 1072ULL ] = 1 ; t422 [ 1073ULL ] = 1 ; t422 [ 1074ULL ] = (
int32_T ) ( ( t1009 * t1009 * 9.999999999999999E-14 + fabs ( X [ 275ULL ] *
t1012 * t1006 ) * 1.0E-9 == t1009 * t1009 * 9.999999999999999E-14 + fabs ( X
[ 275ULL ] * t1012 * t1006 ) * 1.0E-9 ) && ( fabs ( t1009 * t1009 *
9.999999999999999E-14 + fabs ( X [ 275ULL ] * t1012 * t1006 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1075ULL ] = ( int32_T ) ( ( ! ( t1009 * t1009 *
9.999999999999999E-14 + fabs ( X [ 275ULL ] * t1012 * t1006 ) * 1.0E-9 ==
t1009 * t1009 * 9.999999999999999E-14 + fabs ( X [ 275ULL ] * t1012 * t1006 )
* 1.0E-9 ) ) || ( ! ( fabs ( t1009 * t1009 * 9.999999999999999E-14 + fabs ( X
[ 275ULL ] * t1012 * t1006 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1009 *
t1009 * 9.999999999999999E-14 + fabs ( X [ 275ULL ] * t1012 * t1006 ) *
1.0E-9 >= 0.0 ) ) ; t422 [ 1076ULL ] = 1 ; t422 [ 1077ULL ] = 1 ; t422 [
1078ULL ] = ( int32_T ) ( t1006 != 0.0 ) ; t422 [ 1079ULL ] = ( int32_T ) ( (
! ( t1006 != 0.0 ) ) || ( X [ 275ULL ] != 0.0 ) ) ; t422 [ 1080ULL ] = 1 ;
t422 [ 1081ULL ] = ( int32_T ) ( ( ! ( t1006 != 0.0 ) ) || ( ( t1006 != 0.0 )
&& ( ! ( X [ 275ULL ] != 0.0 ) ) ) || ( fabs ( t1158 / ( t1006 == 0.0 ?
1.0E-16 : t1006 ) / ( X [ 275ULL ] == 0.0 ? 1.0E-16 : X [ 275ULL ] ) ) >= 0.0
) ) ; t422 [ 1082ULL ] = ( int32_T ) ( t1016 * 0.32 != 0.0 ) ; t422 [ 1083ULL
] = ( int32_T ) ( X [ 6ULL ] * t1006 != 0.0 ) ; t422 [ 1084ULL ] = ( int32_T
) ( t1021 * 6.4000000000000011E-5 != 0.0 ) ; t422 [ 1085ULL ] = ( int32_T ) (
t1024 != 0.0 ) ; t422 [ 1086ULL ] = ( int32_T ) ( ( ! ( t1024 != 0.0 ) ) || (
6.9 / ( t1024 == 0.0 ? 1.0E-16 : t1024 ) + 0.00017169489553429715 > 0.0 ) ) ;
t422 [ 1087ULL ] = 1 ; t422 [ 1088ULL ] = 1 ; t422 [ 1089ULL ] = ( int32_T )
( ( ! ( t1024 != 0.0 ) ) || ( ( t1024 != 0.0 ) && ( ! ( 6.9 / ( t1024 == 0.0
? 1.0E-16 : t1024 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1024 == 0.0 ? 1.0E-16 : t1024 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1024 == 0.0 ? 1.0E-16 : t1024 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t422 [ 1090ULL ] = ( int32_T ) ( t1021 * 0.0020480000000000003 !=
0.0 ) ; t422 [ 1091ULL ] = 1 ; t422 [ 1092ULL ] = 1 ; t422 [ 1093ULL ] = 1 ;
t422 [ 1094ULL ] = 1 ; t422 [ 1095ULL ] = ( int32_T ) ( X [ 39ULL ] != 0.0 )
; t422 [ 1096ULL ] = ( int32_T ) ( X [ 279ULL ] != 0.0 ) ; t422 [ 1097ULL ] =
1 ; t422 [ 1098ULL ] = 1 ; t422 [ 1099ULL ] = 1 ; t422 [ 1100ULL ] = (
int32_T ) ( t1022 - t1006 != 0.0 ) ; t422 [ 1101ULL ] = 1 ; t422 [ 1102ULL ]
= 1 ; t422 [ 1103ULL ] = ( int32_T ) ( ( t1018 * t1018 *
9.999999999999999E-14 + fabs ( X [ 278ULL ] * t1004 * t1006 ) * 1.0E-9 ==
t1018 * t1018 * 9.999999999999999E-14 + fabs ( X [ 278ULL ] * t1004 * t1006 )
* 1.0E-9 ) && ( fabs ( t1018 * t1018 * 9.999999999999999E-14 + fabs ( X [
278ULL ] * t1004 * t1006 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 1104ULL
] = ( int32_T ) ( ( ! ( t1018 * t1018 * 9.999999999999999E-14 + fabs ( X [
278ULL ] * t1004 * t1006 ) * 1.0E-9 == t1018 * t1018 * 9.999999999999999E-14
+ fabs ( X [ 278ULL ] * t1004 * t1006 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1018 *
t1018 * 9.999999999999999E-14 + fabs ( X [ 278ULL ] * t1004 * t1006 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1018 * t1018 * 9.999999999999999E-14 +
fabs ( X [ 278ULL ] * t1004 * t1006 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 1105ULL ]
= 1 ; t422 [ 1106ULL ] = 1 ; t422 [ 1107ULL ] = ( int32_T ) ( t1006 != 0.0 )
; t422 [ 1108ULL ] = ( int32_T ) ( ( ! ( t1006 != 0.0 ) ) || ( X [ 278ULL ]
!= 0.0 ) ) ; t422 [ 1109ULL ] = 1 ; t422 [ 1110ULL ] = ( int32_T ) ( ( ! (
t1006 != 0.0 ) ) || ( ( t1006 != 0.0 ) && ( ! ( X [ 278ULL ] != 0.0 ) ) ) ||
( fabs ( t1178 / ( t1006 == 0.0 ? 1.0E-16 : t1006 ) / ( X [ 278ULL ] == 0.0 ?
1.0E-16 : X [ 278ULL ] ) ) >= 0.0 ) ) ; t422 [ 1111ULL ] = ( int32_T ) (
t1016 * 0.32 != 0.0 ) ; t422 [ 1112ULL ] = ( int32_T ) ( t1021 *
6.4000000000000011E-5 != 0.0 ) ; t422 [ 1113ULL ] = ( int32_T ) ( t1029 !=
0.0 ) ; t422 [ 1114ULL ] = ( int32_T ) ( ( ! ( t1029 != 0.0 ) ) || ( 6.9 / (
t1029 == 0.0 ? 1.0E-16 : t1029 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [
1115ULL ] = 1 ; t422 [ 1116ULL ] = 1 ; t422 [ 1117ULL ] = ( int32_T ) ( ( ! (
t1029 != 0.0 ) ) || ( ( t1029 != 0.0 ) && ( ! ( 6.9 / ( t1029 == 0.0 ?
1.0E-16 : t1029 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1029 == 0.0 ? 1.0E-16 : t1029 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1029 == 0.0 ? 1.0E-16 : t1029 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t422 [ 1118ULL ] = ( int32_T ) ( t1021 * 0.0020480000000000003 !=
0.0 ) ; t422 [ 1119ULL ] = 1 ; t422 [ 1120ULL ] = 1 ; t422 [ 1121ULL ] = 1 ;
t422 [ 1122ULL ] = 1 ; t422 [ 1123ULL ] = ( int32_T ) ( ( ! ( - X [ 263ULL ]
>= 0.0 ) ) || ( t1017 != 0.0 ) ) ; t422 [ 1124ULL ] = ( int32_T ) ( ( - X [
263ULL ] >= 0.0 ) || ( t1017 != 0.0 ) ) ; t422 [ 1125ULL ] = ( int32_T ) ( (
! ( X [ 277ULL ] >= 0.0 ) ) || ( t1025 != 0.0 ) ) ; t422 [ 1126ULL ] = (
int32_T ) ( ( X [ 277ULL ] >= 0.0 ) || ( t1025 != 0.0 ) ) ; t422 [ 1127ULL ]
= 1 ; t422 [ 1128ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 8ULL ] >= - 0.1 ) ) ||
( ( ( 1.0 - X [ 8ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X
[ 8ULL ] >= 0.01 ) ) ; t422 [ 1129ULL ] = 1 ; t422 [ 1130ULL ] = ( int32_T )
( t1027 != 0.0 ) ; t422 [ 1131ULL ] = ( int32_T ) ( X [ 39ULL ] * 100000.0 >
0.0 ) ; t422 [ 1132ULL ] = ( int32_T ) ( ( ! ( X [ 39ULL ] * 100000.0 > 0.0 )
) || ( pmf_log ( X [ 39ULL ] * 100000.0 ) - t425 [ 0ULL ] <
663.67513503334737 ) ) ; t422 [ 1133ULL ] = 1 ; t422 [ 1134ULL ] = ( int32_T
) ( ( ! ( t1030 >= 1.0 ) ) || ( ( t1030 - 1.0 ) * 461.523 + t1028 != 0.0 ) )
; t422 [ 1135ULL ] = ( int32_T ) ( t1033 * 0.01 != 0.0 ) ; t422 [ 1136ULL ] =
1 ; t422 [ 1137ULL ] = 1 ; t422 [ 1138ULL ] = 1 ; t422 [ 1139ULL ] = 1 ; t422
[ 1140ULL ] = ( int32_T ) ( t1000 != 0.0 ) ; t422 [ 1141ULL ] = ( int32_T ) (
t1194 / 2.0 * 0.32 != 0.0 ) ; t422 [ 1142ULL ] = ( int32_T ) (
intrm_sf_mf_660 != 0.0 ) ; t422 [ 1143ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_660 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_660 == 0.0 ? 1.0E-16 :
intrm_sf_mf_660 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 1144ULL ] = 1 ;
t422 [ 1145ULL ] = 1 ; t422 [ 1146ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_660
!= 0.0 ) ) || ( ( intrm_sf_mf_660 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_660
== 0.0 ? 1.0E-16 : intrm_sf_mf_660 ) + 0.00017169489553429715 > 0.0 ) ) ) ||
( pmf_log10 ( 6.9 / ( intrm_sf_mf_660 == 0.0 ? 1.0E-16 : intrm_sf_mf_660 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_660 == 0.0 ?
1.0E-16 : intrm_sf_mf_660 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t422 [ 1147ULL ] = ( int32_T ) ( ( t1035 / 8.0 == t1035 / 8.0 ) && ( fabs (
t1035 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1148ULL ] = ( int32_T ) ( ( ! (
t1035 / 8.0 == t1035 / 8.0 ) ) || ( ! ( fabs ( t1035 / 8.0 ) != pmf_get_inf (
) ) ) || ( t1035 / 8.0 >= 0.0 ) ) ; t422 [ 1149ULL ] = 1 ; t422 [ 1150ULL ] =
( int32_T ) ( t1198 / 2.0 >= 0.0 ) ; t422 [ 1151ULL ] = 1 ; t422 [ 1152ULL ]
= 1 ; t422 [ 1153ULL ] = 1 ; t422 [ 1154ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1198 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1035 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1035 / 8.0 == t1035 / 8.0 ) && ( fabs (
t1035 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1155ULL ] = ( int32_T ) ( ( !
( ( pmf_pow ( t1198 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1035
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1035 / 8.0 == t1035 / 8.0 ) )
|| ( ! ( fabs ( t1035 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1035 / 8.0 >=
0.0 ) ) ; t422 [ 1156ULL ] = 1 ; t422 [ 1157ULL ] = 1 ; t422 [ 1158ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1198 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1035 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1198 / 2.0 >= 0.0 )
) ; t422 [ 1159ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1198 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1035 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1035 / 8.0 == t1035 / 8.0 ) ) || ( ! ( fabs ( t1035 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1035 / 8.0 == t1035 / 8.0 ) && ( fabs
( t1035 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1035 / 8.0 >= 0.0 ) ) ) || ( !
( t1198 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1198 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1035 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1160ULL ]
= 1 ; t422 [ 1161ULL ] = 1 ; t422 [ 1162ULL ] = 1 ; t422 [ 1163ULL ] = 1 ;
t422 [ 1164ULL ] = 1 ; t422 [ 1165ULL ] = 1 ; t422 [ 1166ULL ] = 1 ; t422 [
1167ULL ] = ( int32_T ) ( t1198 / 2.0 != 0.0 ) ; t422 [ 1168ULL ] = 1 ; t2179
= t1198 / 2.0 ; t422 [ 1169ULL ] = ( int32_T ) ( ( ! ( t1015 > t1206 / 0.32 /
( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( t1015 != 0.0 ) ) ; t422 [
1170ULL ] = 1 ; t422 [ 1171ULL ] = 1 ; t2179 = t1198 / 2.0 ; t422 [ 1172ULL ]
= ( int32_T ) ( ( ! ( t1015 > t1206 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179
) / 30.0 ) ) || ( ! ( t1015 != 0.0 ) ) || ( t1198 / 2.0 != 0.0 ) ) ; t422 [
1173ULL ] = ( int32_T ) ( - t1036 < 663.67513503334737 ) ; t422 [ 1174ULL ] =
( int32_T ) ( t1038 != 0.0 ) ; t422 [ 1175ULL ] = ( int32_T ) ( t1218 / 2.0 *
0.32 != 0.0 ) ; t422 [ 1176ULL ] = ( int32_T ) ( intrm_sf_mf_681 != 0.0 ) ;
t422 [ 1177ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_681 != 0.0 ) ) || ( 6.9 /
( intrm_sf_mf_681 == 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 1178ULL ] = 1 ; t422 [ 1179ULL ] =
1 ; t422 [ 1180ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_681 != 0.0 ) ) || ( (
intrm_sf_mf_681 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_681 == 0.0 ? 1.0E-16 :
intrm_sf_mf_681 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( intrm_sf_mf_681 == 0.0 ? 1.0E-16 : intrm_sf_mf_681 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_681 == 0.0 ?
1.0E-16 : intrm_sf_mf_681 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t422 [ 1181ULL ] = ( int32_T ) ( ( t1040 / 8.0 == t1040 / 8.0 ) && ( fabs (
t1040 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1182ULL ] = ( int32_T ) ( ( ! (
t1040 / 8.0 == t1040 / 8.0 ) ) || ( ! ( fabs ( t1040 / 8.0 ) != pmf_get_inf (
) ) ) || ( t1040 / 8.0 >= 0.0 ) ) ; t422 [ 1183ULL ] = 1 ; t422 [ 1184ULL ] =
( int32_T ) ( t1222 / 2.0 >= 0.0 ) ; t422 [ 1185ULL ] = 1 ; t422 [ 1186ULL ]
= 1 ; t422 [ 1187ULL ] = 1 ; t422 [ 1188ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1222 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1040 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1040 / 8.0 == t1040 / 8.0 ) && ( fabs (
t1040 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1189ULL ] = ( int32_T ) ( ( !
( ( pmf_pow ( t1222 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1040
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1040 / 8.0 == t1040 / 8.0 ) )
|| ( ! ( fabs ( t1040 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1040 / 8.0 >=
0.0 ) ) ; t422 [ 1190ULL ] = 1 ; t422 [ 1191ULL ] = 1 ; t422 [ 1192ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1222 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1040 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1222 / 2.0 >= 0.0 )
) ; t422 [ 1193ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1222 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1040 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1040 / 8.0 == t1040 / 8.0 ) ) || ( ! ( fabs ( t1040 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1040 / 8.0 == t1040 / 8.0 ) && ( fabs
( t1040 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1040 / 8.0 >= 0.0 ) ) ) || ( !
( t1222 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1222 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1040 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1194ULL ]
= 1 ; t422 [ 1195ULL ] = 1 ; t422 [ 1196ULL ] = 1 ; t422 [ 1197ULL ] = 1 ;
t422 [ 1198ULL ] = 1 ; t422 [ 1199ULL ] = 1 ; t422 [ 1200ULL ] = 1 ; t422 [
1201ULL ] = ( int32_T ) ( t1222 / 2.0 != 0.0 ) ; t422 [ 1202ULL ] = 1 ; t2179
= t1222 / 2.0 ; t422 [ 1203ULL ] = ( int32_T ) ( ( ! ( t1039 > t1230 / 0.32 /
( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( t1039 != 0.0 ) ) ; t422 [
1204ULL ] = 1 ; t422 [ 1205ULL ] = 1 ; t2179 = t1222 / 2.0 ; t422 [ 1206ULL ]
= ( int32_T ) ( ( ! ( t1039 > t1230 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179
) / 30.0 ) ) || ( ! ( t1039 != 0.0 ) ) || ( t1222 / 2.0 != 0.0 ) ) ; t422 [
1207ULL ] = ( int32_T ) ( - t1041 < 663.67513503334737 ) ; t422 [ 1208ULL ] =
1 ; t422 [ 1209ULL ] = 1 ; t422 [ 1210ULL ] = ( int32_T ) ( X [ 251ULL ] !=
0.0 ) ; t422 [ 1211ULL ] = 1 ; t422 [ 1212ULL ] = 1 ; t422 [ 1213ULL ] = 1 ;
t422 [ 1214ULL ] = 1 ; t422 [ 1215ULL ] = 1 ; t422 [ 1216ULL ] = ( int32_T )
( ( X [ 263ULL ] * X [ 263ULL ] + 4.3455507383574884E-7 == X [ 263ULL ] * X [
263ULL ] + 4.3455507383574884E-7 ) && ( fabs ( X [ 263ULL ] * X [ 263ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) ; t422 [ 1217ULL ] = ( int32_T
) ( ( ! ( X [ 263ULL ] * X [ 263ULL ] + 4.3455507383574884E-7 == X [ 263ULL ]
* X [ 263ULL ] + 4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 263ULL ] * X [
263ULL ] + 4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 263ULL ] *
X [ 263ULL ] + 4.3455507383574884E-7 >= 0.0 ) ) ; t422 [ 1218ULL ] = 1 ; t422
[ 1219ULL ] = 1 ; t422 [ 1220ULL ] = ( int32_T ) ( ( X [ 263ULL ] * X [
263ULL ] + 4.9597684650720062E-8 == X [ 263ULL ] * X [ 263ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 263ULL ] * X [ 263ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 1221ULL ] = ( int32_T
) ( ( ! ( X [ 263ULL ] * X [ 263ULL ] + 4.9597684650720062E-8 == X [ 263ULL ]
* X [ 263ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 263ULL ] * X [
263ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 263ULL ] *
X [ 263ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 1222ULL ] = 1 ; t422
[ 1223ULL ] = 1 ; t422 [ 1224ULL ] = ( int32_T ) ( ( X [ 263ULL ] * X [
263ULL ] + 3.5023764535063242E-8 == X [ 263ULL ] * X [ 263ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 263ULL ] * X [ 263ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 1225ULL ] = ( int32_T
) ( ( ! ( X [ 263ULL ] * X [ 263ULL ] + 3.5023764535063242E-8 == X [ 263ULL ]
* X [ 263ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 263ULL ] * X [
263ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 263ULL ] *
X [ 263ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 1226ULL ] = (
int32_T ) ( X [ 65ULL ] != 0.0 ) ; t422 [ 1227ULL ] = 1 ; t422 [ 1228ULL ] =
1 ; t422 [ 1229ULL ] = 1 ; t422 [ 1230ULL ] = 1 ; t422 [ 1231ULL ] = 1 ; t422
[ 1232ULL ] = ( int32_T ) ( ( X [ 277ULL ] * X [ 277ULL ] +
4.3455507383574884E-7 == X [ 277ULL ] * X [ 277ULL ] + 4.3455507383574884E-7
) && ( fabs ( X [ 277ULL ] * X [ 277ULL ] + 4.3455507383574884E-7 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1233ULL ] = ( int32_T ) ( ( ! ( X [ 277ULL ] * X
[ 277ULL ] + 4.3455507383574884E-7 == X [ 277ULL ] * X [ 277ULL ] +
4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 277ULL ] * X [ 277ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 277ULL ] * X [ 277ULL
] + 4.3455507383574884E-7 >= 0.0 ) ) ; t422 [ 1234ULL ] = 1 ; t422 [ 1235ULL
] = 1 ; t422 [ 1236ULL ] = ( int32_T ) ( ( X [ 277ULL ] * X [ 277ULL ] +
4.9597684650720062E-8 == X [ 277ULL ] * X [ 277ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 277ULL ] * X [ 277ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1237ULL ] = ( int32_T ) ( ( ! ( X [ 277ULL ] * X
[ 277ULL ] + 4.9597684650720062E-8 == X [ 277ULL ] * X [ 277ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 277ULL ] * X [ 277ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 277ULL ] * X [ 277ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 1238ULL ] = 1 ; t422 [ 1239ULL
] = 1 ; t422 [ 1240ULL ] = ( int32_T ) ( ( X [ 277ULL ] * X [ 277ULL ] +
3.5023764535063242E-8 == X [ 277ULL ] * X [ 277ULL ] + 3.5023764535063242E-8
) && ( fabs ( X [ 277ULL ] * X [ 277ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1241ULL ] = ( int32_T ) ( ( ! ( X [ 277ULL ] * X
[ 277ULL ] + 3.5023764535063242E-8 == X [ 277ULL ] * X [ 277ULL ] +
3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 277ULL ] * X [ 277ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 277ULL ] * X [ 277ULL
] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 1242ULL ] = ( int32_T ) ( X [
40ULL ] != 0.0 ) ; t422 [ 1243ULL ] = ( int32_T ) ( X [ 290ULL ] != 0.0 ) ;
t422 [ 1244ULL ] = 1 ; t422 [ 1245ULL ] = 1 ; t422 [ 1246ULL ] = 1 ; t422 [
1247ULL ] = ( int32_T ) ( t1051 - t1045 != 0.0 ) ; t422 [ 1248ULL ] = 1 ;
t422 [ 1249ULL ] = 1 ; t422 [ 1250ULL ] = ( int32_T ) ( ( t1048 * t1048 *
9.999999999999999E-14 + fabs ( X [ 289ULL ] * t1052 * t1045 ) * 1.0E-9 ==
t1048 * t1048 * 9.999999999999999E-14 + fabs ( X [ 289ULL ] * t1052 * t1045 )
* 1.0E-9 ) && ( fabs ( t1048 * t1048 * 9.999999999999999E-14 + fabs ( X [
289ULL ] * t1052 * t1045 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 1251ULL
] = ( int32_T ) ( ( ! ( t1048 * t1048 * 9.999999999999999E-14 + fabs ( X [
289ULL ] * t1052 * t1045 ) * 1.0E-9 == t1048 * t1048 * 9.999999999999999E-14
+ fabs ( X [ 289ULL ] * t1052 * t1045 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1048 *
t1048 * 9.999999999999999E-14 + fabs ( X [ 289ULL ] * t1052 * t1045 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1048 * t1048 * 9.999999999999999E-14 +
fabs ( X [ 289ULL ] * t1052 * t1045 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 1252ULL ]
= 1 ; t422 [ 1253ULL ] = 1 ; t422 [ 1254ULL ] = ( int32_T ) ( t1045 != 0.0 )
; t422 [ 1255ULL ] = ( int32_T ) ( ( ! ( t1045 != 0.0 ) ) || ( X [ 289ULL ]
!= 0.0 ) ) ; t422 [ 1256ULL ] = 1 ; t422 [ 1257ULL ] = ( int32_T ) ( ( ! (
t1045 != 0.0 ) ) || ( ( t1045 != 0.0 ) && ( ! ( X [ 289ULL ] != 0.0 ) ) ) ||
( fabs ( t1246 / ( t1045 == 0.0 ? 1.0E-16 : t1045 ) / ( X [ 289ULL ] == 0.0 ?
1.0E-16 : X [ 289ULL ] ) ) >= 0.0 ) ) ; t422 [ 1258ULL ] = ( int32_T ) (
t1058 * 0.32 != 0.0 ) ; t422 [ 1259ULL ] = ( int32_T ) ( X [ 9ULL ] * t1045
!= 0.0 ) ; t422 [ 1260ULL ] = ( int32_T ) ( t1062 * 6.4000000000000011E-5 !=
0.0 ) ; t422 [ 1261ULL ] = ( int32_T ) ( t1064 != 0.0 ) ; t422 [ 1262ULL ] =
( int32_T ) ( ( ! ( t1064 != 0.0 ) ) || ( 6.9 / ( t1064 == 0.0 ? 1.0E-16 :
t1064 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 1263ULL ] = 1 ; t422 [
1264ULL ] = 1 ; t422 [ 1265ULL ] = ( int32_T ) ( ( ! ( t1064 != 0.0 ) ) || (
( t1064 != 0.0 ) && ( ! ( 6.9 / ( t1064 == 0.0 ? 1.0E-16 : t1064 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1064 == 0.0 ?
1.0E-16 : t1064 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1064 ==
0.0 ? 1.0E-16 : t1064 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
1266ULL ] = ( int32_T ) ( t1062 * 0.0020480000000000003 != 0.0 ) ; t422 [
1267ULL ] = 1 ; t422 [ 1268ULL ] = 1 ; t422 [ 1269ULL ] = 1 ; t422 [ 1270ULL
] = 1 ; t422 [ 1271ULL ] = ( int32_T ) ( X [ 40ULL ] != 0.0 ) ; t422 [
1272ULL ] = ( int32_T ) ( X [ 292ULL ] != 0.0 ) ; t422 [ 1273ULL ] = 1 ; t422
[ 1274ULL ] = 1 ; t422 [ 1275ULL ] = 1 ; t422 [ 1276ULL ] = ( int32_T ) (
t1063 - t1045 != 0.0 ) ; t422 [ 1277ULL ] = 1 ; t422 [ 1278ULL ] = 1 ; t422 [
1279ULL ] = ( int32_T ) ( ( t1060 * t1060 * 9.999999999999999E-14 + fabs ( X
[ 291ULL ] * t1042 * t1045 ) * 1.0E-9 == t1060 * t1060 *
9.999999999999999E-14 + fabs ( X [ 291ULL ] * t1042 * t1045 ) * 1.0E-9 ) && (
fabs ( t1060 * t1060 * 9.999999999999999E-14 + fabs ( X [ 291ULL ] * t1042 *
t1045 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 1280ULL ] = ( int32_T ) (
( ! ( t1060 * t1060 * 9.999999999999999E-14 + fabs ( X [ 291ULL ] * t1042 *
t1045 ) * 1.0E-9 == t1060 * t1060 * 9.999999999999999E-14 + fabs ( X [ 291ULL
] * t1042 * t1045 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1060 * t1060 *
9.999999999999999E-14 + fabs ( X [ 291ULL ] * t1042 * t1045 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t1060 * t1060 * 9.999999999999999E-14 + fabs ( X [
291ULL ] * t1042 * t1045 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 1281ULL ] = 1 ; t422
[ 1282ULL ] = 1 ; t422 [ 1283ULL ] = ( int32_T ) ( t1045 != 0.0 ) ; t422 [
1284ULL ] = ( int32_T ) ( ( ! ( t1045 != 0.0 ) ) || ( X [ 291ULL ] != 0.0 ) )
; t422 [ 1285ULL ] = 1 ; t422 [ 1286ULL ] = ( int32_T ) ( ( ! ( t1045 != 0.0
) ) || ( ( t1045 != 0.0 ) && ( ! ( X [ 291ULL ] != 0.0 ) ) ) || ( fabs (
t1266 / ( t1045 == 0.0 ? 1.0E-16 : t1045 ) / ( X [ 291ULL ] == 0.0 ? 1.0E-16
: X [ 291ULL ] ) ) >= 0.0 ) ) ; t422 [ 1287ULL ] = ( int32_T ) ( t1058 * 0.32
!= 0.0 ) ; t422 [ 1288ULL ] = ( int32_T ) ( t1062 * 6.4000000000000011E-5 !=
0.0 ) ; t422 [ 1289ULL ] = ( int32_T ) ( t1071 != 0.0 ) ; t422 [ 1290ULL ] =
( int32_T ) ( ( ! ( t1071 != 0.0 ) ) || ( 6.9 / ( t1071 == 0.0 ? 1.0E-16 :
t1071 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 1291ULL ] = 1 ; t422 [
1292ULL ] = 1 ; t422 [ 1293ULL ] = ( int32_T ) ( ( ! ( t1071 != 0.0 ) ) || (
( t1071 != 0.0 ) && ( ! ( 6.9 / ( t1071 == 0.0 ? 1.0E-16 : t1071 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1071 == 0.0 ?
1.0E-16 : t1071 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1071 ==
0.0 ? 1.0E-16 : t1071 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
1294ULL ] = ( int32_T ) ( t1062 * 0.0020480000000000003 != 0.0 ) ; t422 [
1295ULL ] = 1 ; t422 [ 1296ULL ] = 1 ; t422 [ 1297ULL ] = 1 ; t422 [ 1298ULL
] = 1 ; t422 [ 1299ULL ] = ( int32_T ) ( ( ! ( - X [ 277ULL ] >= 0.0 ) ) || (
t1059 != 0.0 ) ) ; t422 [ 1300ULL ] = ( int32_T ) ( ( - X [ 277ULL ] >= 0.0 )
|| ( t1059 != 0.0 ) ) ; t422 [ 1301ULL ] = ( int32_T ) ( ( ! ( - X [ 134ULL ]
>= 0.0 ) ) || ( t1065 != 0.0 ) ) ; t422 [ 1302ULL ] = ( int32_T ) ( ( - X [
134ULL ] >= 0.0 ) || ( t1065 != 0.0 ) ) ; t422 [ 1303ULL ] = 1 ; t422 [
1304ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 11ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 11ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 11ULL ]
>= 0.01 ) ) ; t422 [ 1305ULL ] = 1 ; t422 [ 1306ULL ] = ( int32_T ) ( t1068
!= 0.0 ) ; t422 [ 1307ULL ] = ( int32_T ) ( X [ 40ULL ] * 100000.0 > 0.0 ) ;
t422 [ 1308ULL ] = ( int32_T ) ( ( ! ( X [ 40ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 40ULL ] * 100000.0 ) - t424 [ 0ULL ] < 663.67513503334737 ) ) ;
t422 [ 1309ULL ] = 1 ; t422 [ 1310ULL ] = ( int32_T ) ( ( ! ( t1073 >= 1.0 )
) || ( ( t1073 - 1.0 ) * 461.523 + t1069 != 0.0 ) ) ; t422 [ 1311ULL ] = (
int32_T ) ( t1076 * 0.01 != 0.0 ) ; t422 [ 1312ULL ] = 1 ; t422 [ 1313ULL ] =
1 ; t422 [ 1314ULL ] = 1 ; t422 [ 1315ULL ] = 1 ; t422 [ 1316ULL ] = (
int32_T ) ( t1038 != 0.0 ) ; t422 [ 1317ULL ] = ( int32_T ) ( t1282 / 2.0 *
0.32 != 0.0 ) ; t422 [ 1318ULL ] = ( int32_T ) ( t1014 != 0.0 ) ; t422 [
1319ULL ] = ( int32_T ) ( ( ! ( t1014 != 0.0 ) ) || ( 6.9 / ( t1014 == 0.0 ?
1.0E-16 : t1014 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 1320ULL ] = 1 ;
t422 [ 1321ULL ] = 1 ; t422 [ 1322ULL ] = ( int32_T ) ( ( ! ( t1014 != 0.0 )
) || ( ( t1014 != 0.0 ) && ( ! ( 6.9 / ( t1014 == 0.0 ? 1.0E-16 : t1014 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1014 == 0.0 ?
1.0E-16 : t1014 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1014 ==
0.0 ? 1.0E-16 : t1014 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
1323ULL ] = ( int32_T ) ( ( t1078 / 8.0 == t1078 / 8.0 ) && ( fabs ( t1078 /
8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1324ULL ] = ( int32_T ) ( ( ! ( t1078 /
8.0 == t1078 / 8.0 ) ) || ( ! ( fabs ( t1078 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1078 / 8.0 >= 0.0 ) ) ; t422 [ 1325ULL ] = 1 ; t422 [ 1326ULL ] = (
int32_T ) ( t1286 / 2.0 >= 0.0 ) ; t422 [ 1327ULL ] = 1 ; t422 [ 1328ULL ] =
1 ; t422 [ 1329ULL ] = 1 ; t422 [ 1330ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1286 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1078 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( t1078 / 8.0 == t1078 / 8.0 ) && ( fabs ( t1078 /
8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1331ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1286 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1078 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1078 / 8.0 == t1078 / 8.0 ) ) ||
( ! ( fabs ( t1078 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1078 / 8.0 >= 0.0 )
) ; t422 [ 1332ULL ] = 1 ; t422 [ 1333ULL ] = 1 ; t422 [ 1334ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1286 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1078 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1286 / 2.0 >= 0.0 )
) ; t422 [ 1335ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1286 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1078 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1078 / 8.0 == t1078 / 8.0 ) ) || ( ! ( fabs ( t1078 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1078 / 8.0 == t1078 / 8.0 ) && ( fabs
( t1078 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1078 / 8.0 >= 0.0 ) ) ) || ( !
( t1286 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1286 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1078 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1336ULL ]
= 1 ; t422 [ 1337ULL ] = 1 ; t422 [ 1338ULL ] = 1 ; t422 [ 1339ULL ] = 1 ;
t422 [ 1340ULL ] = 1 ; t422 [ 1341ULL ] = 1 ; t422 [ 1342ULL ] = 1 ; t422 [
1343ULL ] = ( int32_T ) ( t1286 / 2.0 != 0.0 ) ; t422 [ 1344ULL ] = 1 ; t2179
= t1286 / 2.0 ; t422 [ 1345ULL ] = ( int32_T ) ( ( ! ( t1056 > t1294 / 0.32 /
( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( t1056 != 0.0 ) ) ; t422 [
1346ULL ] = 1 ; t422 [ 1347ULL ] = 1 ; t2179 = t1286 / 2.0 ; t422 [ 1348ULL ]
= ( int32_T ) ( ( ! ( t1056 > t1294 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179
) / 30.0 ) ) || ( ! ( t1056 != 0.0 ) ) || ( t1286 / 2.0 != 0.0 ) ) ; t422 [
1349ULL ] = ( int32_T ) ( - intrm_sf_mf_798 < 663.67513503334737 ) ; t422 [
1350ULL ] = ( int32_T ) ( t866 != 0.0 ) ; t422 [ 1351ULL ] = ( int32_T ) (
t1304 / 2.0 * 0.32 != 0.0 ) ; t422 [ 1352ULL ] = ( int32_T ) ( t858 != 0.0 )
; t422 [ 1353ULL ] = ( int32_T ) ( ( ! ( t858 != 0.0 ) ) || ( 6.9 / ( t858 ==
0.0 ? 1.0E-16 : t858 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 1354ULL ]
= 1 ; t422 [ 1355ULL ] = 1 ; t422 [ 1356ULL ] = ( int32_T ) ( ( ! ( t858 !=
0.0 ) ) || ( ( t858 != 0.0 ) && ( ! ( 6.9 / ( t858 == 0.0 ? 1.0E-16 : t858 )
+ 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t858 == 0.0 ?
1.0E-16 : t858 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t858 == 0.0
? 1.0E-16 : t858 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
1357ULL ] = ( int32_T ) ( ( intrm_sf_mf_816 / 8.0 == intrm_sf_mf_816 / 8.0 )
&& ( fabs ( intrm_sf_mf_816 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1358ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_816 / 8.0 == intrm_sf_mf_816 / 8.0 ) ) || (
! ( fabs ( intrm_sf_mf_816 / 8.0 ) != pmf_get_inf ( ) ) ) || (
intrm_sf_mf_816 / 8.0 >= 0.0 ) ) ; t422 [ 1359ULL ] = 1 ; t422 [ 1360ULL ] =
( int32_T ) ( t1308 / 2.0 >= 0.0 ) ; t422 [ 1361ULL ] = 1 ; t422 [ 1362ULL ]
= 1 ; t422 [ 1363ULL ] = 1 ; t422 [ 1364ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1308 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_816 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( intrm_sf_mf_816 / 8.0 ==
intrm_sf_mf_816 / 8.0 ) && ( fabs ( intrm_sf_mf_816 / 8.0 ) != pmf_get_inf (
) ) ) ) ; t422 [ 1365ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1308 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_816 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! ( intrm_sf_mf_816 / 8.0 == intrm_sf_mf_816 / 8.0 )
) || ( ! ( fabs ( intrm_sf_mf_816 / 8.0 ) != pmf_get_inf ( ) ) ) ) || (
intrm_sf_mf_816 / 8.0 >= 0.0 ) ) ; t422 [ 1366ULL ] = 1 ; t422 [ 1367ULL ] =
1 ; t422 [ 1368ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1308 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_816 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( t1308 / 2.0 >= 0.0 ) ) ; t422 [ 1369ULL ] = ( int32_T
) ( ( ! ( ( pmf_pow ( t1308 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt
( intrm_sf_mf_816 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
intrm_sf_mf_816 / 8.0 == intrm_sf_mf_816 / 8.0 ) ) || ( ! ( fabs (
intrm_sf_mf_816 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( intrm_sf_mf_816 / 8.0
== intrm_sf_mf_816 / 8.0 ) && ( fabs ( intrm_sf_mf_816 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( intrm_sf_mf_816 / 8.0 >= 0.0 ) ) ) || ( ! ( t1308 / 2.0 >= 0.0
) ) || ( ( pmf_pow ( t1308 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_816 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1370ULL ] = 1 ; t422
[ 1371ULL ] = 1 ; t422 [ 1372ULL ] = 1 ; t422 [ 1373ULL ] = 1 ; t422 [
1374ULL ] = 1 ; t422 [ 1375ULL ] = 1 ; t422 [ 1376ULL ] = 1 ; t422 [ 1377ULL
] = ( int32_T ) ( t1308 / 2.0 != 0.0 ) ; t422 [ 1378ULL ] = 1 ; t2179 = t1308
/ 2.0 ; t422 [ 1379ULL ] = ( int32_T ) ( ( ! ( t921 > t1316 / 0.32 / ( t2179
== 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( t921 != 0.0 ) ) ; t422 [ 1380ULL ]
= 1 ; t422 [ 1381ULL ] = 1 ; t2179 = t1308 / 2.0 ; t422 [ 1382ULL ] = (
int32_T ) ( ( ! ( t921 > t1316 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) /
30.0 ) ) || ( ! ( t921 != 0.0 ) ) || ( t1308 / 2.0 != 0.0 ) ) ; t422 [
1383ULL ] = ( int32_T ) ( - t1080 < 663.67513503334737 ) ; t422 [ 1384ULL ] =
1 ; t422 [ 1385ULL ] = 1 ; t422 [ 1386ULL ] = ( int32_T ) ( X [ 65ULL ] !=
0.0 ) ; t422 [ 1387ULL ] = 1 ; t422 [ 1388ULL ] = 1 ; t422 [ 1389ULL ] = 1 ;
t422 [ 1390ULL ] = 1 ; t422 [ 1391ULL ] = 1 ; t422 [ 1392ULL ] = ( int32_T )
( ( X [ 277ULL ] * X [ 277ULL ] + 4.3455507383574884E-7 == X [ 277ULL ] * X [
277ULL ] + 4.3455507383574884E-7 ) && ( fabs ( X [ 277ULL ] * X [ 277ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) ; t422 [ 1393ULL ] = ( int32_T
) ( ( ! ( X [ 277ULL ] * X [ 277ULL ] + 4.3455507383574884E-7 == X [ 277ULL ]
* X [ 277ULL ] + 4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 277ULL ] * X [
277ULL ] + 4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 277ULL ] *
X [ 277ULL ] + 4.3455507383574884E-7 >= 0.0 ) ) ; t422 [ 1394ULL ] = 1 ; t422
[ 1395ULL ] = 1 ; t422 [ 1396ULL ] = ( int32_T ) ( ( X [ 277ULL ] * X [
277ULL ] + 4.9597684650720062E-8 == X [ 277ULL ] * X [ 277ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 277ULL ] * X [ 277ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 1397ULL ] = ( int32_T
) ( ( ! ( X [ 277ULL ] * X [ 277ULL ] + 4.9597684650720062E-8 == X [ 277ULL ]
* X [ 277ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 277ULL ] * X [
277ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 277ULL ] *
X [ 277ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 1398ULL ] = 1 ; t422
[ 1399ULL ] = 1 ; t422 [ 1400ULL ] = ( int32_T ) ( ( X [ 277ULL ] * X [
277ULL ] + 3.5023764535063242E-8 == X [ 277ULL ] * X [ 277ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 277ULL ] * X [ 277ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 1401ULL ] = ( int32_T
) ( ( ! ( X [ 277ULL ] * X [ 277ULL ] + 3.5023764535063242E-8 == X [ 277ULL ]
* X [ 277ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 277ULL ] * X [
277ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 277ULL ] *
X [ 277ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 1402ULL ] = (
int32_T ) ( X [ 112ULL ] != 0.0 ) ; t422 [ 1403ULL ] = 1 ; t422 [ 1404ULL ] =
1 ; t422 [ 1405ULL ] = 1 ; t422 [ 1406ULL ] = 1 ; t422 [ 1407ULL ] = 1 ; t422
[ 1408ULL ] = ( int32_T ) ( ( X [ 134ULL ] * X [ 134ULL ] +
4.3455507383574884E-7 == X [ 134ULL ] * X [ 134ULL ] + 4.3455507383574884E-7
) && ( fabs ( X [ 134ULL ] * X [ 134ULL ] + 4.3455507383574884E-7 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1409ULL ] = ( int32_T ) ( ( ! ( X [ 134ULL ] * X
[ 134ULL ] + 4.3455507383574884E-7 == X [ 134ULL ] * X [ 134ULL ] +
4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 134ULL ] * X [ 134ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 134ULL ] * X [ 134ULL
] + 4.3455507383574884E-7 >= 0.0 ) ) ; t422 [ 1410ULL ] = 1 ; t422 [ 1411ULL
] = 1 ; t422 [ 1412ULL ] = ( int32_T ) ( ( X [ 134ULL ] * X [ 134ULL ] +
4.9597684650720062E-8 == X [ 134ULL ] * X [ 134ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 134ULL ] * X [ 134ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1413ULL ] = ( int32_T ) ( ( ! ( X [ 134ULL ] * X
[ 134ULL ] + 4.9597684650720062E-8 == X [ 134ULL ] * X [ 134ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 134ULL ] * X [ 134ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 134ULL ] * X [ 134ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 1414ULL ] = 1 ; t422 [ 1415ULL
] = 1 ; t422 [ 1416ULL ] = ( int32_T ) ( ( X [ 134ULL ] * X [ 134ULL ] +
3.5023764535063242E-8 == X [ 134ULL ] * X [ 134ULL ] + 3.5023764535063242E-8
) && ( fabs ( X [ 134ULL ] * X [ 134ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1417ULL ] = ( int32_T ) ( ( ! ( X [ 134ULL ] * X
[ 134ULL ] + 3.5023764535063242E-8 == X [ 134ULL ] * X [ 134ULL ] +
3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 134ULL ] * X [ 134ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 134ULL ] * X [ 134ULL
] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 1418ULL ] = ( int32_T ) ( X [
44ULL ] != 0.0 ) ; t422 [ 1419ULL ] = ( int32_T ) ( X [ 311ULL ] != 0.0 ) ;
t422 [ 1420ULL ] = 1 ; t422 [ 1421ULL ] = 1 ; t422 [ 1422ULL ] = 1 ; t422 [
1423ULL ] = ( int32_T ) ( t1088 - t1082 != 0.0 ) ; t422 [ 1424ULL ] = 1 ;
t422 [ 1425ULL ] = 1 ; t422 [ 1426ULL ] = ( int32_T ) ( ( t1083 * t1083 *
9.999999999999999E-14 + fabs ( X [ 310ULL ] * t1089 * t1082 ) * 1.0E-9 ==
t1083 * t1083 * 9.999999999999999E-14 + fabs ( X [ 310ULL ] * t1089 * t1082 )
* 1.0E-9 ) && ( fabs ( t1083 * t1083 * 9.999999999999999E-14 + fabs ( X [
310ULL ] * t1089 * t1082 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 1427ULL
] = ( int32_T ) ( ( ! ( t1083 * t1083 * 9.999999999999999E-14 + fabs ( X [
310ULL ] * t1089 * t1082 ) * 1.0E-9 == t1083 * t1083 * 9.999999999999999E-14
+ fabs ( X [ 310ULL ] * t1089 * t1082 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1083 *
t1083 * 9.999999999999999E-14 + fabs ( X [ 310ULL ] * t1089 * t1082 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1083 * t1083 * 9.999999999999999E-14 +
fabs ( X [ 310ULL ] * t1089 * t1082 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 1428ULL ]
= 1 ; t422 [ 1429ULL ] = 1 ; t422 [ 1430ULL ] = ( int32_T ) ( t1082 != 0.0 )
; t422 [ 1431ULL ] = ( int32_T ) ( ( ! ( t1082 != 0.0 ) ) || ( X [ 310ULL ]
!= 0.0 ) ) ; t422 [ 1432ULL ] = 1 ; t422 [ 1433ULL ] = ( int32_T ) ( ( ! (
t1082 != 0.0 ) ) || ( ( t1082 != 0.0 ) && ( ! ( X [ 310ULL ] != 0.0 ) ) ) ||
( fabs ( t1332 / ( t1082 == 0.0 ? 1.0E-16 : t1082 ) / ( X [ 310ULL ] == 0.0 ?
1.0E-16 : X [ 310ULL ] ) ) >= 0.0 ) ) ; t422 [ 1434ULL ] = ( int32_T ) (
t1097 * 0.0019634954084936209 != 0.0 ) ; t422 [ 1435ULL ] = ( int32_T ) ( X [
41ULL ] * t1082 != 0.0 ) ; t422 [ 1436ULL ] = ( int32_T ) ( t1102 *
9.8174770424681068E-6 != 0.0 ) ; t422 [ 1437ULL ] = ( int32_T ) ( t1104 !=
0.0 ) ; t422 [ 1438ULL ] = ( int32_T ) ( ( ! ( t1104 != 0.0 ) ) || ( 6.9 / (
t1104 == 0.0 ? 1.0E-16 : t1104 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [
1439ULL ] = 1 ; t422 [ 1440ULL ] = 1 ; t422 [ 1441ULL ] = ( int32_T ) ( ( ! (
t1104 != 0.0 ) ) || ( ( t1104 != 0.0 ) && ( ! ( 6.9 / ( t1104 == 0.0 ?
1.0E-16 : t1104 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1104 == 0.0 ? 1.0E-16 : t1104 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1104 == 0.0 ? 1.0E-16 : t1104 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t422 [ 1442ULL ] = ( int32_T ) ( t1102 * 3.855314219175531E-7 !=
0.0 ) ; t422 [ 1443ULL ] = 1 ; t422 [ 1444ULL ] = 1 ; t422 [ 1445ULL ] = 1 ;
t422 [ 1446ULL ] = 1 ; t422 [ 1447ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 )
; t422 [ 1448ULL ] = ( int32_T ) ( X [ 314ULL ] != 0.0 ) ; t422 [ 1449ULL ] =
1 ; t422 [ 1450ULL ] = 1 ; t422 [ 1451ULL ] = 1 ; t422 [ 1452ULL ] = (
int32_T ) ( t1103 - t1082 != 0.0 ) ; t422 [ 1453ULL ] = 1 ; t422 [ 1454ULL ]
= 1 ; t422 [ 1455ULL ] = ( int32_T ) ( ( t1100 * t1100 *
9.999999999999999E-14 + fabs ( X [ 313ULL ] * t1077 * t1082 ) * 1.0E-9 ==
t1100 * t1100 * 9.999999999999999E-14 + fabs ( X [ 313ULL ] * t1077 * t1082 )
* 1.0E-9 ) && ( fabs ( t1100 * t1100 * 9.999999999999999E-14 + fabs ( X [
313ULL ] * t1077 * t1082 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 1456ULL
] = ( int32_T ) ( ( ! ( t1100 * t1100 * 9.999999999999999E-14 + fabs ( X [
313ULL ] * t1077 * t1082 ) * 1.0E-9 == t1100 * t1100 * 9.999999999999999E-14
+ fabs ( X [ 313ULL ] * t1077 * t1082 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1100 *
t1100 * 9.999999999999999E-14 + fabs ( X [ 313ULL ] * t1077 * t1082 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1100 * t1100 * 9.999999999999999E-14 +
fabs ( X [ 313ULL ] * t1077 * t1082 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 1457ULL ]
= 1 ; t422 [ 1458ULL ] = 1 ; t422 [ 1459ULL ] = ( int32_T ) ( t1082 != 0.0 )
; t422 [ 1460ULL ] = ( int32_T ) ( ( ! ( t1082 != 0.0 ) ) || ( X [ 313ULL ]
!= 0.0 ) ) ; t422 [ 1461ULL ] = 1 ; t422 [ 1462ULL ] = ( int32_T ) ( ( ! (
t1082 != 0.0 ) ) || ( ( t1082 != 0.0 ) && ( ! ( X [ 313ULL ] != 0.0 ) ) ) ||
( fabs ( t1352 / ( t1082 == 0.0 ? 1.0E-16 : t1082 ) / ( X [ 313ULL ] == 0.0 ?
1.0E-16 : X [ 313ULL ] ) ) >= 0.0 ) ) ; t422 [ 1463ULL ] = ( int32_T ) (
t1097 * 0.0019634954084936209 != 0.0 ) ; t422 [ 1464ULL ] = ( int32_T ) (
t1102 * 9.8174770424681068E-6 != 0.0 ) ; t422 [ 1465ULL ] = ( int32_T ) (
t1111 != 0.0 ) ; t422 [ 1466ULL ] = ( int32_T ) ( ( ! ( t1111 != 0.0 ) ) || (
6.9 / ( t1111 == 0.0 ? 1.0E-16 : t1111 ) + 2.8767404433520813E-5 > 0.0 ) ) ;
t422 [ 1467ULL ] = 1 ; t422 [ 1468ULL ] = 1 ; t422 [ 1469ULL ] = ( int32_T )
( ( ! ( t1111 != 0.0 ) ) || ( ( t1111 != 0.0 ) && ( ! ( 6.9 / ( t1111 == 0.0
? 1.0E-16 : t1111 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1111 == 0.0 ? 1.0E-16 : t1111 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1111 == 0.0 ? 1.0E-16 : t1111 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t422 [ 1470ULL ] = ( int32_T ) ( t1102 * 3.855314219175531E-7 !=
0.0 ) ; t422 [ 1471ULL ] = 1 ; t422 [ 1472ULL ] = 1 ; t422 [ 1473ULL ] = 1 ;
t422 [ 1474ULL ] = 1 ; t422 [ 1475ULL ] = ( int32_T ) ( ( ! ( - X [ 244ULL ]
>= 0.0 ) ) || ( t1098 != 0.0 ) ) ; t422 [ 1476ULL ] = ( int32_T ) ( ( - X [
244ULL ] >= 0.0 ) || ( t1098 != 0.0 ) ) ; t422 [ 1477ULL ] = ( int32_T ) ( (
! ( X [ 312ULL ] >= 0.0 ) ) || ( t1105 != 0.0 ) ) ; t422 [ 1478ULL ] = (
int32_T ) ( ( X [ 312ULL ] >= 0.0 ) || ( t1105 != 0.0 ) ) ; t422 [ 1479ULL ]
= 1 ; t422 [ 1480ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 43ULL ] >= - 0.1 ) )
|| ( ( ( 1.0 - X [ 43ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0
- X [ 43ULL ] >= 0.01 ) ) ; t422 [ 1481ULL ] = 1 ; t422 [ 1482ULL ] = (
int32_T ) ( t809 != 0.0 ) ; t422 [ 1483ULL ] = ( int32_T ) ( X [ 44ULL ] *
100000.0 > 0.0 ) ; t422 [ 1484ULL ] = ( int32_T ) ( ( ! ( X [ 44ULL ] *
100000.0 > 0.0 ) ) || ( pmf_log ( X [ 44ULL ] * 100000.0 ) - t67 [ 0ULL ] <
663.67513503334737 ) ) ; t422 [ 1485ULL ] = 1 ; t422 [ 1486ULL ] = ( int32_T
) ( ( ! ( t1112 >= 1.0 ) ) || ( ( t1112 - 1.0 ) * 461.523 + t1109 != 0.0 ) )
; t422 [ 1487ULL ] = ( int32_T ) ( t1113 * 0.01 != 0.0 ) ; t422 [ 1488ULL ] =
1 ; t422 [ 1489ULL ] = 1 ; t422 [ 1490ULL ] = 1 ; t422 [ 1491ULL ] = 1 ; t422
[ 1492ULL ] = ( int32_T ) ( t1116 != 0.0 ) ; t422 [ 1493ULL ] = ( int32_T ) (
t1370 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t422 [ 1494ULL ] = ( int32_T )
( intrm_sf_mf_923 != 0.0 ) ; t422 [ 1495ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_923 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_923 == 0.0 ? 1.0E-16 :
intrm_sf_mf_923 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 1496ULL ] = 1 ;
t422 [ 1497ULL ] = 1 ; t422 [ 1498ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_923
!= 0.0 ) ) || ( ( intrm_sf_mf_923 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_923
== 0.0 ? 1.0E-16 : intrm_sf_mf_923 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( intrm_sf_mf_923 == 0.0 ? 1.0E-16 : intrm_sf_mf_923 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_923 == 0.0 ?
1.0E-16 : intrm_sf_mf_923 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ;
t422 [ 1499ULL ] = ( int32_T ) ( ( t1117 / 8.0 == t1117 / 8.0 ) && ( fabs (
t1117 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1500ULL ] = ( int32_T ) ( ( ! (
t1117 / 8.0 == t1117 / 8.0 ) ) || ( ! ( fabs ( t1117 / 8.0 ) != pmf_get_inf (
) ) ) || ( t1117 / 8.0 >= 0.0 ) ) ; t422 [ 1501ULL ] = 1 ; t422 [ 1502ULL ] =
( int32_T ) ( t1373 / 2.0 >= 0.0 ) ; t422 [ 1503ULL ] = 1 ; t422 [ 1504ULL ]
= 1 ; t422 [ 1505ULL ] = 1 ; t422 [ 1506ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1373 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1117 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1117 / 8.0 == t1117 / 8.0 ) && ( fabs (
t1117 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1507ULL ] = ( int32_T ) ( ( !
( ( pmf_pow ( t1373 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1117
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1117 / 8.0 == t1117 / 8.0 ) )
|| ( ! ( fabs ( t1117 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1117 / 8.0 >=
0.0 ) ) ; t422 [ 1508ULL ] = 1 ; t422 [ 1509ULL ] = 1 ; t422 [ 1510ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1373 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1117 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1373 / 2.0 >= 0.0 )
) ; t422 [ 1511ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1373 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1117 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1117 / 8.0 == t1117 / 8.0 ) ) || ( ! ( fabs ( t1117 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1117 / 8.0 == t1117 / 8.0 ) && ( fabs
( t1117 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1117 / 8.0 >= 0.0 ) ) ) || ( !
( t1373 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1373 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1117 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1512ULL ]
= 1 ; t422 [ 1513ULL ] = 1 ; t422 [ 1514ULL ] = 1 ; t422 [ 1515ULL ] = 1 ;
t422 [ 1516ULL ] = 1 ; t422 [ 1517ULL ] = 1 ; t422 [ 1518ULL ] = 1 ; t422 [
1519ULL ] = ( int32_T ) ( t1373 / 2.0 != 0.0 ) ; t422 [ 1520ULL ] = 1 ; t2179
= t1373 / 2.0 ; t422 [ 1521ULL ] = ( int32_T ) ( ( ! ( t1115 > t1382 /
0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
t1115 != 0.0 ) ) ; t422 [ 1522ULL ] = 1 ; t422 [ 1523ULL ] = 1 ; t2179 =
t1373 / 2.0 ; t422 [ 1524ULL ] = ( int32_T ) ( ( ! ( t1115 > t1382 /
0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( !
( t1115 != 0.0 ) ) || ( t1373 / 2.0 != 0.0 ) ) ; t422 [ 1525ULL ] = ( int32_T
) ( - t1121 < 663.67513503334737 ) ; t422 [ 1526ULL ] = ( int32_T ) (
intrm_sf_mf_936 != 0.0 ) ; t422 [ 1527ULL ] = ( int32_T ) ( t1394 / 2.0 *
0.0019634954084936209 != 0.0 ) ; t422 [ 1528ULL ] = ( int32_T ) ( t1122 !=
0.0 ) ; t422 [ 1529ULL ] = ( int32_T ) ( ( ! ( t1122 != 0.0 ) ) || ( 6.9 / (
t1122 == 0.0 ? 1.0E-16 : t1122 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [
1530ULL ] = 1 ; t422 [ 1531ULL ] = 1 ; t422 [ 1532ULL ] = ( int32_T ) ( ( ! (
t1122 != 0.0 ) ) || ( ( t1122 != 0.0 ) && ( ! ( 6.9 / ( t1122 == 0.0 ?
1.0E-16 : t1122 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1122 == 0.0 ? 1.0E-16 : t1122 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1122 == 0.0 ? 1.0E-16 : t1122 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t422 [ 1533ULL ] = ( int32_T ) ( ( intrm_sf_mf_949 / 8.0 ==
intrm_sf_mf_949 / 8.0 ) && ( fabs ( intrm_sf_mf_949 / 8.0 ) != pmf_get_inf (
) ) ) ; t422 [ 1534ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_949 / 8.0 ==
intrm_sf_mf_949 / 8.0 ) ) || ( ! ( fabs ( intrm_sf_mf_949 / 8.0 ) !=
pmf_get_inf ( ) ) ) || ( intrm_sf_mf_949 / 8.0 >= 0.0 ) ) ; t422 [ 1535ULL ]
= 1 ; t422 [ 1536ULL ] = ( int32_T ) ( t1398 / 2.0 >= 0.0 ) ; t422 [ 1537ULL
] = 1 ; t422 [ 1538ULL ] = 1 ; t422 [ 1539ULL ] = 1 ; t422 [ 1540ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1398 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( intrm_sf_mf_949 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( (
intrm_sf_mf_949 / 8.0 == intrm_sf_mf_949 / 8.0 ) && ( fabs ( intrm_sf_mf_949
/ 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1541ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1398 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_949 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( intrm_sf_mf_949
/ 8.0 == intrm_sf_mf_949 / 8.0 ) ) || ( ! ( fabs ( intrm_sf_mf_949 / 8.0 ) !=
pmf_get_inf ( ) ) ) ) || ( intrm_sf_mf_949 / 8.0 >= 0.0 ) ) ; t422 [ 1542ULL
] = 1 ; t422 [ 1543ULL ] = 1 ; t422 [ 1544ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1398 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
intrm_sf_mf_949 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1398 / 2.0 >= 0.0 )
) ; t422 [ 1545ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1398 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_949 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! ( intrm_sf_mf_949 / 8.0 == intrm_sf_mf_949 / 8.0 )
) || ( ! ( fabs ( intrm_sf_mf_949 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( (
intrm_sf_mf_949 / 8.0 == intrm_sf_mf_949 / 8.0 ) && ( fabs ( intrm_sf_mf_949
/ 8.0 ) != pmf_get_inf ( ) ) && ( ! ( intrm_sf_mf_949 / 8.0 >= 0.0 ) ) ) || (
! ( t1398 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1398 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_949 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422
[ 1546ULL ] = 1 ; t422 [ 1547ULL ] = 1 ; t422 [ 1548ULL ] = 1 ; t422 [
1549ULL ] = 1 ; t422 [ 1550ULL ] = 1 ; t422 [ 1551ULL ] = 1 ; t422 [ 1552ULL
] = 1 ; t422 [ 1553ULL ] = ( int32_T ) ( t1398 / 2.0 != 0.0 ) ; t422 [
1554ULL ] = 1 ; t2179 = t1398 / 2.0 ; t422 [ 1555ULL ] = ( int32_T ) ( ( ! (
t1124 > t1406 / 0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) /
30.0 ) ) || ( t1124 != 0.0 ) ) ; t422 [ 1556ULL ] = 1 ; t422 [ 1557ULL ] = 1
; t2179 = t1398 / 2.0 ; t422 [ 1558ULL ] = ( int32_T ) ( ( ! ( t1124 > t1406
/ 0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
! ( t1124 != 0.0 ) ) || ( t1398 / 2.0 != 0.0 ) ) ; t422 [ 1559ULL ] = (
int32_T ) ( - t1126 < 663.67513503334737 ) ; t422 [ 1560ULL ] = 1 ; t422 [
1561ULL ] = 1 ; t422 [ 1562ULL ] = ( int32_T ) ( X [ 31ULL ] != 0.0 ) ; t422
[ 1563ULL ] = 1 ; t422 [ 1564ULL ] = 1 ; t422 [ 1565ULL ] = 1 ; t422 [
1566ULL ] = 1 ; t422 [ 1567ULL ] = 1 ; t422 [ 1568ULL ] = ( int32_T ) ( ( X [
244ULL ] * X [ 244ULL ] + 3.0116308772356542E-13 == X [ 244ULL ] * X [ 244ULL
] + 3.0116308772356542E-13 ) && ( fabs ( X [ 244ULL ] * X [ 244ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1569ULL ] = (
int32_T ) ( ( ! ( X [ 244ULL ] * X [ 244ULL ] + 3.0116308772356542E-13 == X [
244ULL ] * X [ 244ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
244ULL ] * X [ 244ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 244ULL ] * X [ 244ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t422 [
1570ULL ] = 1 ; t422 [ 1571ULL ] = 1 ; t422 [ 1572ULL ] = ( int32_T ) ( ( X [
244ULL ] * X [ 244ULL ] + 5.8094731428156895E-13 == X [ 244ULL ] * X [ 244ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 244ULL ] * X [ 244ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1573ULL ] = (
int32_T ) ( ( ! ( X [ 244ULL ] * X [ 244ULL ] + 5.8094731428156895E-13 == X [
244ULL ] * X [ 244ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
244ULL ] * X [ 244ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 244ULL ] * X [ 244ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t422 [
1574ULL ] = 1 ; t422 [ 1575ULL ] = 1 ; t422 [ 1576ULL ] = ( int32_T ) ( ( X [
244ULL ] * X [ 244ULL ] + 4.1024015709531014E-13 == X [ 244ULL ] * X [ 244ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 244ULL ] * X [ 244ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1577ULL ] = (
int32_T ) ( ( ! ( X [ 244ULL ] * X [ 244ULL ] + 4.1024015709531014E-13 == X [
244ULL ] * X [ 244ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
244ULL ] * X [ 244ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 244ULL ] * X [ 244ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t422 [
1578ULL ] = ( int32_T ) ( X [ 300ULL ] != 0.0 ) ; t422 [ 1579ULL ] = 1 ; t422
[ 1580ULL ] = 1 ; t422 [ 1581ULL ] = 1 ; t422 [ 1582ULL ] = 1 ; t422 [
1583ULL ] = 1 ; t422 [ 1584ULL ] = ( int32_T ) ( ( X [ 312ULL ] * X [ 312ULL
] + 3.0116308772356542E-13 == X [ 312ULL ] * X [ 312ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 312ULL ] * X [ 312ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1585ULL ] = (
int32_T ) ( ( ! ( X [ 312ULL ] * X [ 312ULL ] + 3.0116308772356542E-13 == X [
312ULL ] * X [ 312ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
312ULL ] * X [ 312ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 312ULL ] * X [ 312ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t422 [
1586ULL ] = 1 ; t422 [ 1587ULL ] = 1 ; t422 [ 1588ULL ] = ( int32_T ) ( ( X [
312ULL ] * X [ 312ULL ] + 5.8094731428156895E-13 == X [ 312ULL ] * X [ 312ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 312ULL ] * X [ 312ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1589ULL ] = (
int32_T ) ( ( ! ( X [ 312ULL ] * X [ 312ULL ] + 5.8094731428156895E-13 == X [
312ULL ] * X [ 312ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
312ULL ] * X [ 312ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 312ULL ] * X [ 312ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t422 [
1590ULL ] = 1 ; t422 [ 1591ULL ] = 1 ; t422 [ 1592ULL ] = ( int32_T ) ( ( X [
312ULL ] * X [ 312ULL ] + 4.1024015709531014E-13 == X [ 312ULL ] * X [ 312ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 312ULL ] * X [ 312ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1593ULL ] = (
int32_T ) ( ( ! ( X [ 312ULL ] * X [ 312ULL ] + 4.1024015709531014E-13 == X [
312ULL ] * X [ 312ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
312ULL ] * X [ 312ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 312ULL ] * X [ 312ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t422 [
1594ULL ] = 1 ; t422 [ 1595ULL ] = 1 ; t422 [ 1596ULL ] = 1 ; t422 [ 1597ULL
] = 1 ; t422 [ 1598ULL ] = 1 ; t422 [ 1599ULL ] = ( int32_T ) ( ( X [ 335ULL
] * X [ 335ULL ] + 2.7104677895120892E-12 == X [ 335ULL ] * X [ 335ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1600ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 == X [
335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [
1601ULL ] = 1 ; t422 [ 1602ULL ] = 1 ; t422 [ 1603ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 == X [ 335ULL ] * X [ 335ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1604ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 == X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [
1605ULL ] = 1 ; t422 [ 1606ULL ] = 1 ; t422 [ 1607ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 == X [ 335ULL ] * X [ 335ULL
] + 3.6921614138577926E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1608ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 == X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [
1609ULL ] = ( int32_T ) ( t1129 * 293.15 != 0.0 ) ; t422 [ 1610ULL ] = (
int32_T ) ( X [ 46ULL ] != 0.0 ) ; t422 [ 1611ULL ] = ( int32_T ) ( X [
349ULL ] != 0.0 ) ; t422 [ 1612ULL ] = 1 ; t422 [ 1613ULL ] = 1 ; t422 [
1614ULL ] = 1 ; t422 [ 1615ULL ] = ( int32_T ) ( t1136 - t1132 != 0.0 ) ;
t422 [ 1616ULL ] = 1 ; t422 [ 1617ULL ] = 1 ; t422 [ 1618ULL ] = ( int32_T )
( ( t1133 * t1133 * 9.999999999999999E-14 + fabs ( X [ 348ULL ] * t1137 *
t1132 ) * 1.0E-9 == t1133 * t1133 * 9.999999999999999E-14 + fabs ( X [ 348ULL
] * t1137 * t1132 ) * 1.0E-9 ) && ( fabs ( t1133 * t1133 *
9.999999999999999E-14 + fabs ( X [ 348ULL ] * t1137 * t1132 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 1619ULL ] = ( int32_T ) ( ( ! ( t1133 * t1133 *
9.999999999999999E-14 + fabs ( X [ 348ULL ] * t1137 * t1132 ) * 1.0E-9 ==
t1133 * t1133 * 9.999999999999999E-14 + fabs ( X [ 348ULL ] * t1137 * t1132 )
* 1.0E-9 ) ) || ( ! ( fabs ( t1133 * t1133 * 9.999999999999999E-14 + fabs ( X
[ 348ULL ] * t1137 * t1132 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1133 *
t1133 * 9.999999999999999E-14 + fabs ( X [ 348ULL ] * t1137 * t1132 ) *
1.0E-9 >= 0.0 ) ) ; t422 [ 1620ULL ] = 1 ; t422 [ 1621ULL ] = 1 ; t422 [
1622ULL ] = ( int32_T ) ( t1132 != 0.0 ) ; t422 [ 1623ULL ] = ( int32_T ) ( (
! ( t1132 != 0.0 ) ) || ( X [ 348ULL ] != 0.0 ) ) ; t422 [ 1624ULL ] = 1 ;
t422 [ 1625ULL ] = ( int32_T ) ( ( ! ( t1132 != 0.0 ) ) || ( ( t1132 != 0.0 )
&& ( ! ( X [ 348ULL ] != 0.0 ) ) ) || ( fabs ( t1422 / ( t1132 == 0.0 ?
1.0E-16 : t1132 ) / ( X [ 348ULL ] == 0.0 ? 1.0E-16 : X [ 348ULL ] ) ) >= 0.0
) ) ; t422 [ 1626ULL ] = ( int32_T ) ( t1141 * 0.0019634954084936209 != 0.0 )
; t422 [ 1627ULL ] = ( int32_T ) ( X [ 45ULL ] * t1132 != 0.0 ) ; t422 [
1628ULL ] = ( int32_T ) ( t1147 * 9.8174770424681068E-6 != 0.0 ) ; t422 [
1629ULL ] = ( int32_T ) ( t1149 != 0.0 ) ; t422 [ 1630ULL ] = ( int32_T ) ( (
! ( t1149 != 0.0 ) ) || ( 6.9 / ( t1149 == 0.0 ? 1.0E-16 : t1149 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 1631ULL ] = 1 ; t422 [ 1632ULL ] = 1
; t422 [ 1633ULL ] = ( int32_T ) ( ( ! ( t1149 != 0.0 ) ) || ( ( t1149 != 0.0
) && ( ! ( 6.9 / ( t1149 == 0.0 ? 1.0E-16 : t1149 ) + 2.8767404433520813E-5 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1149 == 0.0 ? 1.0E-16 : t1149 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1149 == 0.0 ? 1.0E-16 : t1149
) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [ 1634ULL ] = ( int32_T
) ( t1147 * 3.855314219175531E-7 != 0.0 ) ; t422 [ 1635ULL ] = 1 ; t422 [
1636ULL ] = 1 ; t422 [ 1637ULL ] = 1 ; t422 [ 1638ULL ] = 1 ; t422 [ 1639ULL
] = ( int32_T ) ( X [ 46ULL ] != 0.0 ) ; t422 [ 1640ULL ] = ( int32_T ) ( X [
353ULL ] != 0.0 ) ; t422 [ 1641ULL ] = 1 ; t422 [ 1642ULL ] = 1 ; t422 [
1643ULL ] = 1 ; t422 [ 1644ULL ] = ( int32_T ) ( t1148 - t1132 != 0.0 ) ;
t422 [ 1645ULL ] = 1 ; t422 [ 1646ULL ] = 1 ; t422 [ 1647ULL ] = ( int32_T )
( ( t1145 * t1145 * 9.999999999999999E-14 + fabs ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) * 1.0E-9
== t1145 * t1145 * 9.999999999999999E-14 + fabs ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) * 1.0E-9
) && ( fabs ( t1145 * t1145 * 9.999999999999999E-14 + fabs ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) * 1.0E-9
) != pmf_get_inf ( ) ) ) ; t422 [ 1648ULL ] = ( int32_T ) ( ( ! ( t1145 *
t1145 * 9.999999999999999E-14 + fabs ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) * 1.0E-9
== t1145 * t1145 * 9.999999999999999E-14 + fabs ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) * 1.0E-9
) ) || ( ! ( fabs ( t1145 * t1145 * 9.999999999999999E-14 + fabs ( X [ 352ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1145 * t1145 * 9.999999999999999E-14 +
fabs ( X [ 352ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1132 ) * 1.0E-9
>= 0.0 ) ) ; t422 [ 1649ULL ] = 1 ; t422 [ 1650ULL ] = 1 ; t422 [ 1651ULL ] =
( int32_T ) ( t1132 != 0.0 ) ; t422 [ 1652ULL ] = ( int32_T ) ( ( ! ( t1132
!= 0.0 ) ) || ( X [ 352ULL ] != 0.0 ) ) ; t422 [ 1653ULL ] = 1 ; t422 [
1654ULL ] = ( int32_T ) ( ( ! ( t1132 != 0.0 ) ) || ( ( t1132 != 0.0 ) && ( !
( X [ 352ULL ] != 0.0 ) ) ) || ( fabs ( t1442 / ( t1132 == 0.0 ? 1.0E-16 :
t1132 ) / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X [ 352ULL ] ) ) >= 0.0 ) ) ;
t422 [ 1655ULL ] = ( int32_T ) ( t1141 * 0.0019634954084936209 != 0.0 ) ;
t422 [ 1656ULL ] = ( int32_T ) ( t1147 * 9.8174770424681068E-6 != 0.0 ) ;
t422 [ 1657ULL ] = ( int32_T ) ( t1155 != 0.0 ) ; t422 [ 1658ULL ] = (
int32_T ) ( ( ! ( t1155 != 0.0 ) ) || ( 6.9 / ( t1155 == 0.0 ? 1.0E-16 :
t1155 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 1659ULL ] = 1 ; t422 [
1660ULL ] = 1 ; t422 [ 1661ULL ] = ( int32_T ) ( ( ! ( t1155 != 0.0 ) ) || (
( t1155 != 0.0 ) && ( ! ( 6.9 / ( t1155 == 0.0 ? 1.0E-16 : t1155 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1155 == 0.0 ?
1.0E-16 : t1155 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1155 ==
0.0 ? 1.0E-16 : t1155 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [
1662ULL ] = ( int32_T ) ( t1147 * 3.855314219175531E-7 != 0.0 ) ; t422 [
1663ULL ] = 1 ; t422 [ 1664ULL ] = 1 ; t422 [ 1665ULL ] = 1 ; t422 [ 1666ULL
] = 1 ; t422 [ 1667ULL ] = ( int32_T ) ( ( ! ( X [ 347ULL ] >= 0.0 ) ) || (
t1144 != 0.0 ) ) ; t422 [ 1668ULL ] = ( int32_T ) ( ( X [ 347ULL ] >= 0.0 )
|| ( t1144 != 0.0 ) ) ; t422 [ 1669ULL ] = ( int32_T ) ( ( ! ( - X [ 335ULL ]
>= 0.0 ) ) || ( t1150 != 0.0 ) ) ; t422 [ 1670ULL ] = ( int32_T ) ( ( - X [
335ULL ] >= 0.0 ) || ( t1150 != 0.0 ) ) ; t422 [ 1671ULL ] = 1 ; t422 [
1672ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 47ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 47ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 47ULL ]
>= 0.01 ) ) ; t422 [ 1673ULL ] = 1 ; t422 [ 1674ULL ] = ( int32_T ) ( t815 !=
0.0 ) ; t422 [ 1675ULL ] = ( int32_T ) ( X [ 46ULL ] * 100000.0 > 0.0 ) ;
t422 [ 1676ULL ] = ( int32_T ) ( ( ! ( X [ 46ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 46ULL ] * 100000.0 ) - t426 [ 0ULL ] < 663.67513503334737 ) ) ;
t422 [ 1677ULL ] = 1 ; t422 [ 1678ULL ] = ( int32_T ) ( ( ! ( t1156 >= 1.0 )
) || ( ( t1156 - 1.0 ) * 461.523 + t1153 != 0.0 ) ) ; t422 [ 1679ULL ] = (
int32_T ) ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I * 0.01
!= 0.0 ) ; t422 [ 1680ULL ] = 1 ; t422 [ 1681ULL ] = 1 ; t422 [ 1682ULL ] = 1
; t422 [ 1683ULL ] = 1 ; t422 [ 1684ULL ] = ( int32_T ) ( t1164 != 0.0 ) ;
t422 [ 1685ULL ] = ( int32_T ) ( t1460 / 2.0 * 0.0019634954084936209 != 0.0 )
; t422 [ 1686ULL ] = ( int32_T ) ( t1140 != 0.0 ) ; t422 [ 1687ULL ] = (
int32_T ) ( ( ! ( t1140 != 0.0 ) ) || ( 6.9 / ( t1140 == 0.0 ? 1.0E-16 :
t1140 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 1688ULL ] = 1 ; t422 [
1689ULL ] = 1 ; t422 [ 1690ULL ] = ( int32_T ) ( ( ! ( t1140 != 0.0 ) ) || (
( t1140 != 0.0 ) && ( ! ( 6.9 / ( t1140 == 0.0 ? 1.0E-16 : t1140 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1140 == 0.0 ?
1.0E-16 : t1140 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1140 ==
0.0 ? 1.0E-16 : t1140 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [
1691ULL ] = ( int32_T ) ( ( t1165 / 8.0 == t1165 / 8.0 ) && ( fabs ( t1165 /
8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1692ULL ] = ( int32_T ) ( ( ! ( t1165 /
8.0 == t1165 / 8.0 ) ) || ( ! ( fabs ( t1165 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1165 / 8.0 >= 0.0 ) ) ; t422 [ 1693ULL ] = 1 ; t422 [ 1694ULL ] = (
int32_T ) ( t1464 / 2.0 >= 0.0 ) ; t422 [ 1695ULL ] = 1 ; t422 [ 1696ULL ] =
1 ; t422 [ 1697ULL ] = 1 ; t422 [ 1698ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1464 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1165 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( t1165 / 8.0 == t1165 / 8.0 ) && ( fabs ( t1165 /
8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1699ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1464 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1165 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1165 / 8.0 == t1165 / 8.0 ) ) ||
( ! ( fabs ( t1165 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1165 / 8.0 >= 0.0 )
) ; t422 [ 1700ULL ] = 1 ; t422 [ 1701ULL ] = 1 ; t422 [ 1702ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1464 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1165 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1464 / 2.0 >= 0.0 )
) ; t422 [ 1703ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1464 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1165 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1165 / 8.0 == t1165 / 8.0 ) ) || ( ! ( fabs ( t1165 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1165 / 8.0 == t1165 / 8.0 ) && ( fabs
( t1165 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1165 / 8.0 >= 0.0 ) ) ) || ( !
( t1464 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1464 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1165 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1704ULL ]
= 1 ; t422 [ 1705ULL ] = 1 ; t422 [ 1706ULL ] = 1 ; t422 [ 1707ULL ] = 1 ;
t422 [ 1708ULL ] = 1 ; t422 [ 1709ULL ] = 1 ; t422 [ 1710ULL ] = 1 ; t422 [
1711ULL ] = ( int32_T ) ( t1464 / 2.0 != 0.0 ) ; t422 [ 1712ULL ] = 1 ; t2179
= t1464 / 2.0 ; t422 [ 1713ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1070 >
t1465 / 0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) )
|| ( intrm_sf_mf_1070 != 0.0 ) ) ; t422 [ 1714ULL ] = 1 ; t422 [ 1715ULL ] =
1 ; t2179 = t1464 / 2.0 ; t422 [ 1716ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1070 > t1465 / 0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 :
t2179 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_1070 != 0.0 ) ) || ( t1464 / 2.0 !=
0.0 ) ) ; t422 [ 1717ULL ] = ( int32_T ) ( - intrm_sf_mf_1077 <
663.67513503334737 ) ; t422 [ 1718ULL ] = ( int32_T ) ( t1171 != 0.0 ) ; t422
[ 1719ULL ] = ( int32_T ) ( t1483 / 2.0 * 0.0019634954084936209 != 0.0 ) ;
t422 [ 1720ULL ] = ( int32_T ) ( t1139 != 0.0 ) ; t422 [ 1721ULL ] = (
int32_T ) ( ( ! ( t1139 != 0.0 ) ) || ( 6.9 / ( t1139 == 0.0 ? 1.0E-16 :
t1139 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 1722ULL ] = 1 ; t422 [
1723ULL ] = 1 ; t422 [ 1724ULL ] = ( int32_T ) ( ( ! ( t1139 != 0.0 ) ) || (
( t1139 != 0.0 ) && ( ! ( 6.9 / ( t1139 == 0.0 ? 1.0E-16 : t1139 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1139 == 0.0 ?
1.0E-16 : t1139 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1139 ==
0.0 ? 1.0E-16 : t1139 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [
1725ULL ] = ( int32_T ) ( ( intrm_sf_mf_1095 / 8.0 == intrm_sf_mf_1095 / 8.0
) && ( fabs ( intrm_sf_mf_1095 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [
1726ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1095 / 8.0 == intrm_sf_mf_1095 /
8.0 ) ) || ( ! ( fabs ( intrm_sf_mf_1095 / 8.0 ) != pmf_get_inf ( ) ) ) || (
intrm_sf_mf_1095 / 8.0 >= 0.0 ) ) ; t422 [ 1727ULL ] = 1 ; t422 [ 1728ULL ] =
( int32_T ) ( t1488 / 2.0 >= 0.0 ) ; t422 [ 1729ULL ] = 1 ; t422 [ 1730ULL ]
= 1 ; t422 [ 1731ULL ] = 1 ; t422 [ 1732ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1488 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_1095 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( intrm_sf_mf_1095 / 8.0 ==
intrm_sf_mf_1095 / 8.0 ) && ( fabs ( intrm_sf_mf_1095 / 8.0 ) != pmf_get_inf
( ) ) ) ) ; t422 [ 1733ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1488 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_1095 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! ( intrm_sf_mf_1095 / 8.0 == intrm_sf_mf_1095 / 8.0
) ) || ( ! ( fabs ( intrm_sf_mf_1095 / 8.0 ) != pmf_get_inf ( ) ) ) ) || (
intrm_sf_mf_1095 / 8.0 >= 0.0 ) ) ; t422 [ 1734ULL ] = 1 ; t422 [ 1735ULL ] =
1 ; t422 [ 1736ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1488 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( intrm_sf_mf_1095 / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( t1488 / 2.0 >= 0.0 ) ) ; t422 [ 1737ULL ] = ( int32_T
) ( ( ! ( ( pmf_pow ( t1488 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt
( intrm_sf_mf_1095 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! (
intrm_sf_mf_1095 / 8.0 == intrm_sf_mf_1095 / 8.0 ) ) || ( ! ( fabs (
intrm_sf_mf_1095 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( intrm_sf_mf_1095 /
8.0 == intrm_sf_mf_1095 / 8.0 ) && ( fabs ( intrm_sf_mf_1095 / 8.0 ) !=
pmf_get_inf ( ) ) && ( ! ( intrm_sf_mf_1095 / 8.0 >= 0.0 ) ) ) || ( ! ( t1488
/ 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1488 / 2.0 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( intrm_sf_mf_1095 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [
1738ULL ] = 1 ; t422 [ 1739ULL ] = 1 ; t422 [ 1740ULL ] = 1 ; t422 [ 1741ULL
] = 1 ; t422 [ 1742ULL ] = 1 ; t422 [ 1743ULL ] = 1 ; t422 [ 1744ULL ] = 1 ;
t422 [ 1745ULL ] = ( int32_T ) ( t1488 / 2.0 != 0.0 ) ; t422 [ 1746ULL ] = 1
; t2179 = t1488 / 2.0 ; t422 [ 1747ULL ] = ( int32_T ) ( ( ! ( t1170 > t1495
/ 0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
t1170 != 0.0 ) ) ; t422 [ 1748ULL ] = 1 ; t422 [ 1749ULL ] = 1 ; t2179 =
t1488 / 2.0 ; t422 [ 1750ULL ] = ( int32_T ) ( ( ! ( t1170 > t1495 /
0.0019634954084936209 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( !
( t1170 != 0.0 ) ) || ( t1488 / 2.0 != 0.0 ) ) ; t422 [ 1751ULL ] = ( int32_T
) ( - t1176 < 663.67513503334737 ) ; t422 [ 1752ULL ] = 1 ; t422 [ 1753ULL ]
= 1 ; t422 [ 1754ULL ] = ( int32_T ) ( X [ 325ULL ] != 0.0 ) ; t422 [ 1755ULL
] = 1 ; t422 [ 1756ULL ] = 1 ; t422 [ 1757ULL ] = 1 ; t422 [ 1758ULL ] = 1 ;
t422 [ 1759ULL ] = 1 ; t422 [ 1760ULL ] = ( int32_T ) ( ( X [ 347ULL ] * X [
347ULL ] + 3.0116308772356542E-13 == X [ 347ULL ] * X [ 347ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 347ULL ] * X [ 347ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1761ULL ] = (
int32_T ) ( ( ! ( X [ 347ULL ] * X [ 347ULL ] + 3.0116308772356542E-13 == X [
347ULL ] * X [ 347ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
347ULL ] * X [ 347ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 347ULL ] * X [ 347ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t422 [
1762ULL ] = 1 ; t422 [ 1763ULL ] = 1 ; t422 [ 1764ULL ] = ( int32_T ) ( ( X [
347ULL ] * X [ 347ULL ] + 5.8094731428156895E-13 == X [ 347ULL ] * X [ 347ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 347ULL ] * X [ 347ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1765ULL ] = (
int32_T ) ( ( ! ( X [ 347ULL ] * X [ 347ULL ] + 5.8094731428156895E-13 == X [
347ULL ] * X [ 347ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
347ULL ] * X [ 347ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 347ULL ] * X [ 347ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t422 [
1766ULL ] = 1 ; t422 [ 1767ULL ] = 1 ; t422 [ 1768ULL ] = ( int32_T ) ( ( X [
347ULL ] * X [ 347ULL ] + 4.1024015709531014E-13 == X [ 347ULL ] * X [ 347ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 347ULL ] * X [ 347ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1769ULL ] = (
int32_T ) ( ( ! ( X [ 347ULL ] * X [ 347ULL ] + 4.1024015709531014E-13 == X [
347ULL ] * X [ 347ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
347ULL ] * X [ 347ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 347ULL ] * X [ 347ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t422 [
1770ULL ] = ( int32_T ) ( t1127 != 0.0 ) ; t422 [ 1771ULL ] = 1 ; t422 [
1772ULL ] = 1 ; t422 [ 1773ULL ] = 1 ; t422 [ 1774ULL ] = 1 ; t422 [ 1775ULL
] = 1 ; t422 [ 1776ULL ] = ( int32_T ) ( ( X [ 335ULL ] * X [ 335ULL ] +
3.0116308772356542E-13 == X [ 335ULL ] * X [ 335ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1777ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 3.0116308772356542E-13 == X [
335ULL ] * X [ 335ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t422 [
1778ULL ] = 1 ; t422 [ 1779ULL ] = 1 ; t422 [ 1780ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 5.8094731428156895E-13 == X [ 335ULL ] * X [ 335ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1781ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 5.8094731428156895E-13 == X [
335ULL ] * X [ 335ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t422 [
1782ULL ] = 1 ; t422 [ 1783ULL ] = 1 ; t422 [ 1784ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 == X [ 335ULL ] * X [ 335ULL
] + 4.1024015709531014E-13 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ; t422 [ 1785ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 == X [
335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 4.1024015709531014E-13 >= 0.0 ) ) ; t422 [
1786ULL ] = ( int32_T ) ( X [ 365ULL ] * t1183 != 0.0 ) ; t422 [ 1787ULL ] =
( int32_T ) ( t1127 != 0.0 ) ; t422 [ 1788ULL ] = ( int32_T ) ( X [ 365ULL ]
!= 0.0 ) ; t422 [ 1789ULL ] = ( int32_T ) ( X [ 365ULL ] != 0.0 ) ; t422 [
1790ULL ] = 1 ; t422 [ 1791ULL ] = ( int32_T ) ( ( ! ( X [ 335ULL ] > 0.0 ) )
|| ( intrm_sf_mf_1151 != 0.0 ) ) ; t422 [ 1792ULL ] = 1 ; t422 [ 1793ULL ] =
1 ; t422 [ 1794ULL ] = 1 ; t422 [ 1795ULL ] = ( int32_T ) ( ( ! ( X [ 335ULL
] > 0.0 ) ) || ( ! ( intrm_sf_mf_1151 != 0.0 ) ) || ( t1185 != 0.0 ) ) ; t422
[ 1796ULL ] = 1 ; t422 [ 1797ULL ] = ( int32_T ) ( ( ! ( X [ 335ULL ] < 0.0 )
) || ( X [ 335ULL ] > 0.0 ) || ( intrm_sf_mf_1151 != 0.0 ) ) ; t422 [ 1798ULL
] = 1 ; t422 [ 1799ULL ] = 1 ; t422 [ 1800ULL ] = 1 ; t422 [ 1801ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] < 0.0 ) ) || ( ! ( intrm_sf_mf_1151 != 0.0 ) )
|| ( X [ 335ULL ] > 0.0 ) || ( t1185 != 0.0 ) ) ; t422 [ 1802ULL ] = 1 ; t422
[ 1803ULL ] = 1 ; t422 [ 1804ULL ] = ( int32_T ) ( t1190 != 0.0 ) ; t422 [
1805ULL ] = 1 ; t422 [ 1806ULL ] = 1 ; t422 [ 1807ULL ] = 1 ; t422 [ 1808ULL
] = 1 ; t422 [ 1809ULL ] = 1 ; t422 [ 1810ULL ] = 1 ; t422 [ 1811ULL ] = 1 ;
t422 [ 1812ULL ] = 1 ; t422 [ 1813ULL ] = 1 ; t422 [ 1814ULL ] = 1 ; t422 [
1815ULL ] = ( int32_T ) ( intrm_sf_mf_1170 - t1183 != 0.0 ) ; t422 [ 1816ULL
] = 1 ; t422 [ 1817ULL ] = 1 ; t422 [ 1818ULL ] = ( int32_T ) ( t1183 != 0.0
) ; t422 [ 1819ULL ] = ( int32_T ) ( ( ! ( t1183 != 0.0 ) ) || ( X [ 365ULL ]
!= 0.0 ) ) ; t422 [ 1820ULL ] = 1 ; t422 [ 1821ULL ] = ( int32_T ) ( ( ! (
t1183 != 0.0 ) ) || ( ( t1183 != 0.0 ) && ( ! ( X [ 365ULL ] != 0.0 ) ) ) ||
( fabs ( t1518 / ( t1183 == 0.0 ? 1.0E-16 : t1183 ) / ( X [ 365ULL ] == 0.0 ?
1.0E-16 : X [ 365ULL ] ) ) >= 0.0 ) ) ; t422 [ 1822ULL ] = ( int32_T ) ( ( !
( X [ 335ULL ] >= 0.0 ) ) || ( t1179 != 0.0 ) ) ; t422 [ 1823ULL ] = (
int32_T ) ( ( X [ 335ULL ] >= 0.0 ) || ( t1179 != 0.0 ) ) ; t422 [ 1824ULL ]
= ( int32_T ) ( t1127 != 0.0 ) ; t422 [ 1825ULL ] = 1 ; t422 [ 1826ULL ] = 1
; t422 [ 1827ULL ] = 1 ; t422 [ 1828ULL ] = 1 ; t422 [ 1829ULL ] = 1 ; t422 [
1830ULL ] = ( int32_T ) ( ( X [ 335ULL ] * X [ 335ULL ] +
2.7104677895120892E-12 == X [ 335ULL ] * X [ 335ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1831ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 == X [
335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [
1832ULL ] = 1 ; t422 [ 1833ULL ] = 1 ; t422 [ 1834ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 == X [ 335ULL ] * X [ 335ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1835ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 == X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [
1836ULL ] = 1 ; t422 [ 1837ULL ] = 1 ; t422 [ 1838ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 == X [ 335ULL ] * X [ 335ULL
] + 3.6921614138577926E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1839ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 == X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [
1840ULL ] = 1 ; t422 [ 1841ULL ] = 1 ; t422 [ 1842ULL ] = 1 ; t422 [ 1843ULL
] = 1 ; t422 [ 1844ULL ] = 1 ; t422 [ 1845ULL ] = ( int32_T ) ( ( X [ 335ULL
] * X [ 335ULL ] + 2.7104677895120892E-12 == X [ 335ULL ] * X [ 335ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1846ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 == X [
335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t422 [
1847ULL ] = 1 ; t422 [ 1848ULL ] = 1 ; t422 [ 1849ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 == X [ 335ULL ] * X [ 335ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1850ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 == X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t422 [
1851ULL ] = 1 ; t422 [ 1852ULL ] = 1 ; t422 [ 1853ULL ] = ( int32_T ) ( ( X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 == X [ 335ULL ] * X [ 335ULL
] + 3.6921614138577926E-12 ) && ( fabs ( X [ 335ULL ] * X [ 335ULL ] +
3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ; t422 [ 1854ULL ] = (
int32_T ) ( ( ! ( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 == X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) ) || ( ! ( fabs ( X [
335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 335ULL ] * X [ 335ULL ] + 3.6921614138577926E-12 >= 0.0 ) ) ; t422 [
1855ULL ] = ( int32_T ) ( t1177 != 0.0 ) ; t422 [ 1856ULL ] = 1 ; t422 [
1857ULL ] = ( int32_T ) ( ( ! ( t1177 != 0.0 ) ) || ( fabs ( t1185 * 2.0 / (
t1177 == 0.0 ? 1.0E-16 : t1177 ) ) >= 0.0 ) ) ; t422 [ 1858ULL ] = ( int32_T
) ( X [ 49ULL ] != 0.0 ) ; t422 [ 1859ULL ] = ( int32_T ) ( X [ 373ULL ] !=
0.0 ) ; t422 [ 1860ULL ] = 1 ; t422 [ 1861ULL ] = 1 ; t422 [ 1862ULL ] = 1 ;
t422 [ 1863ULL ] = ( int32_T ) ( t1195 - t1191 != 0.0 ) ; t422 [ 1864ULL ] =
1 ; t422 [ 1865ULL ] = 1 ; t422 [ 1866ULL ] = ( int32_T ) ( ( t1192 * t1192 *
9.999999999999999E-14 + fabs ( X [ 372ULL ] * t1196 * t1191 ) * 1.0E-9 ==
t1192 * t1192 * 9.999999999999999E-14 + fabs ( X [ 372ULL ] * t1196 * t1191 )
* 1.0E-9 ) && ( fabs ( t1192 * t1192 * 9.999999999999999E-14 + fabs ( X [
372ULL ] * t1196 * t1191 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 1867ULL
] = ( int32_T ) ( ( ! ( t1192 * t1192 * 9.999999999999999E-14 + fabs ( X [
372ULL ] * t1196 * t1191 ) * 1.0E-9 == t1192 * t1192 * 9.999999999999999E-14
+ fabs ( X [ 372ULL ] * t1196 * t1191 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1192 *
t1192 * 9.999999999999999E-14 + fabs ( X [ 372ULL ] * t1196 * t1191 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1192 * t1192 * 9.999999999999999E-14 +
fabs ( X [ 372ULL ] * t1196 * t1191 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 1868ULL ]
= 1 ; t422 [ 1869ULL ] = 1 ; t422 [ 1870ULL ] = ( int32_T ) ( t1191 != 0.0 )
; t422 [ 1871ULL ] = ( int32_T ) ( ( ! ( t1191 != 0.0 ) ) || ( X [ 372ULL ]
!= 0.0 ) ) ; t422 [ 1872ULL ] = 1 ; t422 [ 1873ULL ] = ( int32_T ) ( ( ! (
t1191 != 0.0 ) ) || ( ( t1191 != 0.0 ) && ( ! ( X [ 372ULL ] != 0.0 ) ) ) ||
( fabs ( t1527 / ( t1191 == 0.0 ? 1.0E-16 : t1191 ) / ( X [ 372ULL ] == 0.0 ?
1.0E-16 : X [ 372ULL ] ) ) >= 0.0 ) ) ; t422 [ 1874ULL ] = ( int32_T ) (
t1201 * 0.32 != 0.0 ) ; t422 [ 1875ULL ] = ( int32_T ) ( X [ 12ULL ] * t1191
!= 0.0 ) ; t422 [ 1876ULL ] = ( int32_T ) ( t1205 * 6.4000000000000011E-5 !=
0.0 ) ; t422 [ 1877ULL ] = ( int32_T ) ( t1209 != 0.0 ) ; t422 [ 1878ULL ] =
( int32_T ) ( ( ! ( t1209 != 0.0 ) ) || ( 6.9 / ( t1209 == 0.0 ? 1.0E-16 :
t1209 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 1879ULL ] = 1 ; t422 [
1880ULL ] = 1 ; t422 [ 1881ULL ] = ( int32_T ) ( ( ! ( t1209 != 0.0 ) ) || (
( t1209 != 0.0 ) && ( ! ( 6.9 / ( t1209 == 0.0 ? 1.0E-16 : t1209 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1209 == 0.0 ?
1.0E-16 : t1209 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1209 ==
0.0 ? 1.0E-16 : t1209 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
1882ULL ] = ( int32_T ) ( t1205 * 0.0020480000000000003 != 0.0 ) ; t422 [
1883ULL ] = 1 ; t422 [ 1884ULL ] = 1 ; t422 [ 1885ULL ] = 1 ; t422 [ 1886ULL
] = 1 ; t422 [ 1887ULL ] = ( int32_T ) ( X [ 49ULL ] != 0.0 ) ; t422 [
1888ULL ] = ( int32_T ) ( X [ 376ULL ] != 0.0 ) ; t422 [ 1889ULL ] = 1 ; t422
[ 1890ULL ] = 1 ; t422 [ 1891ULL ] = 1 ; t422 [ 1892ULL ] = ( int32_T ) (
t1208 - t1191 != 0.0 ) ; t422 [ 1893ULL ] = 1 ; t422 [ 1894ULL ] = 1 ; t422 [
1895ULL ] = ( int32_T ) ( ( t1203 * t1203 * 9.999999999999999E-14 + fabs ( X
[ 375ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
t1191 ) * 1.0E-9 == t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [ 375ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t1191 ) *
1.0E-9 ) && ( fabs ( t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [
375ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t1191
) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 1896ULL ] = ( int32_T ) ( ( ! (
t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [ 375ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t1191 ) * 1.0E-9
== t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [ 375ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t1191 ) * 1.0E-9
) ) || ( ! ( fabs ( t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [ 375ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t1191 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1203 * t1203 * 9.999999999999999E-14 +
fabs ( X [ 375ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t1191 ) * 1.0E-9
>= 0.0 ) ) ; t422 [ 1897ULL ] = 1 ; t422 [ 1898ULL ] = 1 ; t422 [ 1899ULL ] =
( int32_T ) ( t1191 != 0.0 ) ; t422 [ 1900ULL ] = ( int32_T ) ( ( ! ( t1191
!= 0.0 ) ) || ( X [ 375ULL ] != 0.0 ) ) ; t422 [ 1901ULL ] = 1 ; t422 [
1902ULL ] = ( int32_T ) ( ( ! ( t1191 != 0.0 ) ) || ( ( t1191 != 0.0 ) && ( !
( X [ 375ULL ] != 0.0 ) ) ) || ( fabs ( t1547 / ( t1191 == 0.0 ? 1.0E-16 :
t1191 ) / ( X [ 375ULL ] == 0.0 ? 1.0E-16 : X [ 375ULL ] ) ) >= 0.0 ) ) ;
t422 [ 1903ULL ] = ( int32_T ) ( t1201 * 0.32 != 0.0 ) ; t422 [ 1904ULL ] = (
int32_T ) ( t1205 * 6.4000000000000011E-5 != 0.0 ) ; t422 [ 1905ULL ] = (
int32_T ) ( t1214 != 0.0 ) ; t422 [ 1906ULL ] = ( int32_T ) ( ( ! ( t1214 !=
0.0 ) ) || ( 6.9 / ( t1214 == 0.0 ? 1.0E-16 : t1214 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 1907ULL ] = 1 ; t422 [ 1908ULL ] =
1 ; t422 [ 1909ULL ] = ( int32_T ) ( ( ! ( t1214 != 0.0 ) ) || ( ( t1214 !=
0.0 ) && ( ! ( 6.9 / ( t1214 == 0.0 ? 1.0E-16 : t1214 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1214 == 0.0 ?
1.0E-16 : t1214 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1214 ==
0.0 ? 1.0E-16 : t1214 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
1910ULL ] = ( int32_T ) ( t1205 * 0.0020480000000000003 != 0.0 ) ; t422 [
1911ULL ] = 1 ; t422 [ 1912ULL ] = 1 ; t422 [ 1913ULL ] = 1 ; t422 [ 1914ULL
] = 1 ; t422 [ 1915ULL ] = ( int32_T ) ( ( ! ( - X [ 312ULL ] >= 0.0 ) ) || (
t1202 != 0.0 ) ) ; t422 [ 1916ULL ] = ( int32_T ) ( ( - X [ 312ULL ] >= 0.0 )
|| ( t1202 != 0.0 ) ) ; t422 [ 1917ULL ] = ( int32_T ) ( ( ! ( X [ 374ULL ]
>= 0.0 ) ) || ( t1210 != 0.0 ) ) ; t422 [ 1918ULL ] = ( int32_T ) ( ( X [
374ULL ] >= 0.0 ) || ( t1210 != 0.0 ) ) ; t422 [ 1919ULL ] = 1 ; t422 [
1920ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 14ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 14ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 14ULL ]
>= 0.01 ) ) ; t422 [ 1921ULL ] = 1 ; t422 [ 1922ULL ] = ( int32_T ) ( t1212
!= 0.0 ) ; t422 [ 1923ULL ] = ( int32_T ) ( X [ 49ULL ] * 100000.0 > 0.0 ) ;
t422 [ 1924ULL ] = ( int32_T ) ( ( ! ( X [ 49ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 49ULL ] * 100000.0 ) - t423 [ 0ULL ] < 663.67513503334737 ) ) ;
t422 [ 1925ULL ] = 1 ; t422 [ 1926ULL ] = ( int32_T ) ( ( ! ( t1215 >= 1.0 )
) || ( ( t1215 - 1.0 ) * 461.523 + t1213 != 0.0 ) ) ; t422 [ 1927ULL ] = (
int32_T ) ( t1216 * 0.01 != 0.0 ) ; t422 [ 1928ULL ] = 1 ; t422 [ 1929ULL ] =
1 ; t422 [ 1930ULL ] = 1 ; t422 [ 1931ULL ] = 1 ; t422 [ 1932ULL ] = (
int32_T ) ( intrm_sf_mf_936 != 0.0 ) ; t422 [ 1933ULL ] = ( int32_T ) ( t1563
/ 2.0 * 0.32 != 0.0 ) ; t422 [ 1934ULL ] = ( int32_T ) ( intrm_sf_mf_1241 !=
0.0 ) ; t422 [ 1935ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1241 != 0.0 ) ) ||
( 6.9 / ( intrm_sf_mf_1241 == 0.0 ? 1.0E-16 : intrm_sf_mf_1241 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 1936ULL ] = 1 ; t422 [ 1937ULL ] =
1 ; t422 [ 1938ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1241 != 0.0 ) ) || ( (
intrm_sf_mf_1241 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_1241 == 0.0 ? 1.0E-16
: intrm_sf_mf_1241 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 (
6.9 / ( intrm_sf_mf_1241 == 0.0 ? 1.0E-16 : intrm_sf_mf_1241 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1241 == 0.0 ?
1.0E-16 : intrm_sf_mf_1241 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t422 [ 1939ULL ] = ( int32_T ) ( ( t1219 / 8.0 == t1219 / 8.0 ) && ( fabs (
t1219 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1940ULL ] = ( int32_T ) ( ( ! (
t1219 / 8.0 == t1219 / 8.0 ) ) || ( ! ( fabs ( t1219 / 8.0 ) != pmf_get_inf (
) ) ) || ( t1219 / 8.0 >= 0.0 ) ) ; t422 [ 1941ULL ] = 1 ; t422 [ 1942ULL ] =
( int32_T ) ( t1566 / 2.0 >= 0.0 ) ; t422 [ 1943ULL ] = 1 ; t422 [ 1944ULL ]
= 1 ; t422 [ 1945ULL ] = 1 ; t422 [ 1946ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow
( t1566 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1219 / 8.0 ) *
12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1219 / 8.0 == t1219 / 8.0 ) && ( fabs (
t1219 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1947ULL ] = ( int32_T ) ( ( !
( ( pmf_pow ( t1566 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1219
/ 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1219 / 8.0 == t1219 / 8.0 ) )
|| ( ! ( fabs ( t1219 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1219 / 8.0 >=
0.0 ) ) ; t422 [ 1948ULL ] = 1 ; t422 [ 1949ULL ] = 1 ; t422 [ 1950ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1566 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1219 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1566 / 2.0 >= 0.0 )
) ; t422 [ 1951ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1566 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1219 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1219 / 8.0 == t1219 / 8.0 ) ) || ( ! ( fabs ( t1219 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1219 / 8.0 == t1219 / 8.0 ) && ( fabs
( t1219 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1219 / 8.0 >= 0.0 ) ) ) || ( !
( t1566 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1566 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1219 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 1952ULL ]
= 1 ; t422 [ 1953ULL ] = 1 ; t422 [ 1954ULL ] = 1 ; t422 [ 1955ULL ] = 1 ;
t422 [ 1956ULL ] = 1 ; t422 [ 1957ULL ] = 1 ; t422 [ 1958ULL ] = 1 ; t422 [
1959ULL ] = ( int32_T ) ( t1566 / 2.0 != 0.0 ) ; t422 [ 1960ULL ] = 1 ; t2179
= t1566 / 2.0 ; t422 [ 1961ULL ] = ( int32_T ) ( ( ! ( t1200 > t1575 / 0.32 /
( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( t1200 != 0.0 ) ) ; t422 [
1962ULL ] = 1 ; t422 [ 1963ULL ] = 1 ; t2179 = t1566 / 2.0 ; t422 [ 1964ULL ]
= ( int32_T ) ( ( ! ( t1200 > t1575 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179
) / 30.0 ) ) || ( ! ( t1200 != 0.0 ) ) || ( t1566 / 2.0 != 0.0 ) ) ; t422 [
1965ULL ] = ( int32_T ) ( - t1220 < 663.67513503334737 ) ; t422 [ 1966ULL ] =
( int32_T ) ( intrm_sf_mf_1252 != 0.0 ) ; t422 [ 1967ULL ] = ( int32_T ) (
t1580 / 2.0 * 0.32 != 0.0 ) ; t422 [ 1968ULL ] = ( int32_T ) ( t1221 != 0.0 )
; t422 [ 1969ULL ] = ( int32_T ) ( ( ! ( t1221 != 0.0 ) ) || ( 6.9 / ( t1221
== 0.0 ? 1.0E-16 : t1221 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [
1970ULL ] = 1 ; t422 [ 1971ULL ] = 1 ; t422 [ 1972ULL ] = ( int32_T ) ( ( ! (
t1221 != 0.0 ) ) || ( ( t1221 != 0.0 ) && ( ! ( 6.9 / ( t1221 == 0.0 ?
1.0E-16 : t1221 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1221 == 0.0 ? 1.0E-16 : t1221 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1221 == 0.0 ? 1.0E-16 : t1221 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t422 [ 1973ULL ] = ( int32_T ) ( ( t1225 / 8.0 == t1225 / 8.0 ) &&
( fabs ( t1225 / 8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 1974ULL ] = ( int32_T
) ( ( ! ( t1225 / 8.0 == t1225 / 8.0 ) ) || ( ! ( fabs ( t1225 / 8.0 ) !=
pmf_get_inf ( ) ) ) || ( t1225 / 8.0 >= 0.0 ) ) ; t422 [ 1975ULL ] = 1 ; t422
[ 1976ULL ] = ( int32_T ) ( t1581 / 2.0 >= 0.0 ) ; t422 [ 1977ULL ] = 1 ;
t422 [ 1978ULL ] = 1 ; t422 [ 1979ULL ] = 1 ; t422 [ 1980ULL ] = ( int32_T )
( ( ! ( ( pmf_pow ( t1581 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
t1225 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( t1225 / 8.0 == t1225 / 8.0 )
&& ( fabs ( t1225 / 8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 1981ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1581 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1225 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1225 / 8.0 ==
t1225 / 8.0 ) ) || ( ! ( fabs ( t1225 / 8.0 ) != pmf_get_inf ( ) ) ) ) || (
t1225 / 8.0 >= 0.0 ) ) ; t422 [ 1982ULL ] = 1 ; t422 [ 1983ULL ] = 1 ; t422 [
1984ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1581 / 2.0 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1225 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1581 /
2.0 >= 0.0 ) ) ; t422 [ 1985ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1581 /
2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1225 / 8.0 ) * 12.7 + 1.0
>= 1.0E-6 ) ) || ( ( ! ( t1225 / 8.0 == t1225 / 8.0 ) ) || ( ! ( fabs ( t1225
/ 8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1225 / 8.0 == t1225 / 8.0 ) && (
fabs ( t1225 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1225 / 8.0 >= 0.0 ) ) )
|| ( ! ( t1581 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1581 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1225 / 8.0 ) * 12.7 + 1.0 != 0.0
) ) ; t422 [ 1986ULL ] = 1 ; t422 [ 1987ULL ] = 1 ; t422 [ 1988ULL ] = 1 ;
t422 [ 1989ULL ] = 1 ; t422 [ 1990ULL ] = 1 ; t422 [ 1991ULL ] = 1 ; t422 [
1992ULL ] = 1 ; t422 [ 1993ULL ] = ( int32_T ) ( t1581 / 2.0 != 0.0 ) ; t422
[ 1994ULL ] = 1 ; t2179 = t1581 / 2.0 ; t422 [ 1995ULL ] = ( int32_T ) ( ( !
( t1224 > t1599 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || (
t1224 != 0.0 ) ) ; t422 [ 1996ULL ] = 1 ; t422 [ 1997ULL ] = 1 ; t2179 =
t1581 / 2.0 ; t422 [ 1998ULL ] = ( int32_T ) ( ( ! ( t1224 > t1599 / 0.32 / (
t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( ! ( t1224 != 0.0 ) ) || (
t1581 / 2.0 != 0.0 ) ) ; t422 [ 1999ULL ] = ( int32_T ) ( - t1226 <
663.67513503334737 ) ; t422 [ 2000ULL ] = 1 ; t422 [ 2001ULL ] = 1 ; t422 [
2002ULL ] = ( int32_T ) ( X [ 300ULL ] != 0.0 ) ; t422 [ 2003ULL ] = 1 ; t422
[ 2004ULL ] = 1 ; t422 [ 2005ULL ] = 1 ; t422 [ 2006ULL ] = 1 ; t422 [
2007ULL ] = 1 ; t422 [ 2008ULL ] = ( int32_T ) ( ( X [ 312ULL ] * X [ 312ULL
] + 2.5711439722933289E-8 == X [ 312ULL ] * X [ 312ULL ] +
2.5711439722933289E-8 ) && ( fabs ( X [ 312ULL ] * X [ 312ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 2009ULL ] = ( int32_T
) ( ( ! ( X [ 312ULL ] * X [ 312ULL ] + 2.5711439722933289E-8 == X [ 312ULL ]
* X [ 312ULL ] + 2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 312ULL ] * X [
312ULL ] + 2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 312ULL ] *
X [ 312ULL ] + 2.5711439722933289E-8 >= 0.0 ) ) ; t422 [ 2010ULL ] = 1 ; t422
[ 2011ULL ] = 1 ; t422 [ 2012ULL ] = ( int32_T ) ( ( X [ 312ULL ] * X [
312ULL ] + 4.9597684650720062E-8 == X [ 312ULL ] * X [ 312ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 312ULL ] * X [ 312ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 2013ULL ] = ( int32_T
) ( ( ! ( X [ 312ULL ] * X [ 312ULL ] + 4.9597684650720062E-8 == X [ 312ULL ]
* X [ 312ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 312ULL ] * X [
312ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 312ULL ] *
X [ 312ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 2014ULL ] = 1 ; t422
[ 2015ULL ] = 1 ; t422 [ 2016ULL ] = ( int32_T ) ( ( X [ 312ULL ] * X [
312ULL ] + 3.5023764535063242E-8 == X [ 312ULL ] * X [ 312ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 312ULL ] * X [ 312ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 2017ULL ] = ( int32_T
) ( ( ! ( X [ 312ULL ] * X [ 312ULL ] + 3.5023764535063242E-8 == X [ 312ULL ]
* X [ 312ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 312ULL ] * X [
312ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 312ULL ] *
X [ 312ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 2018ULL ] = (
int32_T ) ( X [ 69ULL ] != 0.0 ) ; t422 [ 2019ULL ] = 1 ; t422 [ 2020ULL ] =
1 ; t422 [ 2021ULL ] = 1 ; t422 [ 2022ULL ] = 1 ; t422 [ 2023ULL ] = 1 ; t422
[ 2024ULL ] = ( int32_T ) ( ( X [ 374ULL ] * X [ 374ULL ] +
2.5711439722933289E-8 == X [ 374ULL ] * X [ 374ULL ] + 2.5711439722933289E-8
) && ( fabs ( X [ 374ULL ] * X [ 374ULL ] + 2.5711439722933289E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 2025ULL ] = ( int32_T ) ( ( ! ( X [ 374ULL ] * X
[ 374ULL ] + 2.5711439722933289E-8 == X [ 374ULL ] * X [ 374ULL ] +
2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 374ULL ] * X [ 374ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 374ULL ] * X [ 374ULL
] + 2.5711439722933289E-8 >= 0.0 ) ) ; t422 [ 2026ULL ] = 1 ; t422 [ 2027ULL
] = 1 ; t422 [ 2028ULL ] = ( int32_T ) ( ( X [ 374ULL ] * X [ 374ULL ] +
4.9597684650720062E-8 == X [ 374ULL ] * X [ 374ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 374ULL ] * X [ 374ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 2029ULL ] = ( int32_T ) ( ( ! ( X [ 374ULL ] * X
[ 374ULL ] + 4.9597684650720062E-8 == X [ 374ULL ] * X [ 374ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 374ULL ] * X [ 374ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 374ULL ] * X [ 374ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 2030ULL ] = 1 ; t422 [ 2031ULL
] = 1 ; t422 [ 2032ULL ] = ( int32_T ) ( ( X [ 374ULL ] * X [ 374ULL ] +
3.5023764535063242E-8 == X [ 374ULL ] * X [ 374ULL ] + 3.5023764535063242E-8
) && ( fabs ( X [ 374ULL ] * X [ 374ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 2033ULL ] = ( int32_T ) ( ( ! ( X [ 374ULL ] * X
[ 374ULL ] + 3.5023764535063242E-8 == X [ 374ULL ] * X [ 374ULL ] +
3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 374ULL ] * X [ 374ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 374ULL ] * X [ 374ULL
] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 2034ULL ] = ( int32_T ) ( X [
50ULL ] != 0.0 ) ; t422 [ 2035ULL ] = ( int32_T ) ( X [ 387ULL ] != 0.0 ) ;
t422 [ 2036ULL ] = 1 ; t422 [ 2037ULL ] = 1 ; t422 [ 2038ULL ] = 1 ; t422 [
2039ULL ] = ( int32_T ) ( t1234 - t1229 != 0.0 ) ; t422 [ 2040ULL ] = 1 ;
t422 [ 2041ULL ] = 1 ; t422 [ 2042ULL ] = ( int32_T ) ( ( t1232 * t1232 *
9.999999999999999E-14 + fabs ( X [ 386ULL ] * t1235 * t1229 ) * 1.0E-9 ==
t1232 * t1232 * 9.999999999999999E-14 + fabs ( X [ 386ULL ] * t1235 * t1229 )
* 1.0E-9 ) && ( fabs ( t1232 * t1232 * 9.999999999999999E-14 + fabs ( X [
386ULL ] * t1235 * t1229 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 2043ULL
] = ( int32_T ) ( ( ! ( t1232 * t1232 * 9.999999999999999E-14 + fabs ( X [
386ULL ] * t1235 * t1229 ) * 1.0E-9 == t1232 * t1232 * 9.999999999999999E-14
+ fabs ( X [ 386ULL ] * t1235 * t1229 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1232 *
t1232 * 9.999999999999999E-14 + fabs ( X [ 386ULL ] * t1235 * t1229 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1232 * t1232 * 9.999999999999999E-14 +
fabs ( X [ 386ULL ] * t1235 * t1229 ) * 1.0E-9 >= 0.0 ) ) ; t422 [ 2044ULL ]
= 1 ; t422 [ 2045ULL ] = 1 ; t422 [ 2046ULL ] = ( int32_T ) ( t1229 != 0.0 )
; t422 [ 2047ULL ] = ( int32_T ) ( ( ! ( t1229 != 0.0 ) ) || ( X [ 386ULL ]
!= 0.0 ) ) ; t422 [ 2048ULL ] = 1 ; t422 [ 2049ULL ] = ( int32_T ) ( ( ! (
t1229 != 0.0 ) ) || ( ( t1229 != 0.0 ) && ( ! ( X [ 386ULL ] != 0.0 ) ) ) ||
( fabs ( t1615 / ( t1229 == 0.0 ? 1.0E-16 : t1229 ) / ( X [ 386ULL ] == 0.0 ?
1.0E-16 : X [ 386ULL ] ) ) >= 0.0 ) ) ; t422 [ 2050ULL ] = ( int32_T ) (
t1239 * 0.32 != 0.0 ) ; t422 [ 2051ULL ] = ( int32_T ) ( X [ 15ULL ] * t1229
!= 0.0 ) ; t422 [ 2052ULL ] = ( int32_T ) ( t1244 * 6.4000000000000011E-5 !=
0.0 ) ; t422 [ 2053ULL ] = ( int32_T ) ( t1247 != 0.0 ) ; t422 [ 2054ULL ] =
( int32_T ) ( ( ! ( t1247 != 0.0 ) ) || ( 6.9 / ( t1247 == 0.0 ? 1.0E-16 :
t1247 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2055ULL ] = 1 ; t422 [
2056ULL ] = 1 ; t422 [ 2057ULL ] = ( int32_T ) ( ( ! ( t1247 != 0.0 ) ) || (
( t1247 != 0.0 ) && ( ! ( 6.9 / ( t1247 == 0.0 ? 1.0E-16 : t1247 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1247 == 0.0 ?
1.0E-16 : t1247 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1247 ==
0.0 ? 1.0E-16 : t1247 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2058ULL ] = ( int32_T ) ( t1244 * 0.0020480000000000003 != 0.0 ) ; t422 [
2059ULL ] = 1 ; t422 [ 2060ULL ] = 1 ; t422 [ 2061ULL ] = 1 ; t422 [ 2062ULL
] = 1 ; t422 [ 2063ULL ] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t422 [
2064ULL ] = ( int32_T ) ( X [ 389ULL ] != 0.0 ) ; t422 [ 2065ULL ] = 1 ; t422
[ 2066ULL ] = 1 ; t422 [ 2067ULL ] = 1 ; t422 [ 2068ULL ] = ( int32_T ) (
t1245 - t1229 != 0.0 ) ; t422 [ 2069ULL ] = 1 ; t422 [ 2070ULL ] = 1 ; t422 [
2071ULL ] = ( int32_T ) ( ( t1241 * t1241 * 9.999999999999999E-14 + fabs ( X
[ 388ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
t1229 ) * 1.0E-9 == t1241 * t1241 * 9.999999999999999E-14 + fabs ( X [ 388ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * t1229 ) *
1.0E-9 ) && ( fabs ( t1241 * t1241 * 9.999999999999999E-14 + fabs ( X [
388ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
t1229 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t422 [ 2072ULL ] = ( int32_T ) (
( ! ( t1241 * t1241 * 9.999999999999999E-14 + fabs ( X [ 388ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * t1229 ) *
1.0E-9 == t1241 * t1241 * 9.999999999999999E-14 + fabs ( X [ 388ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * t1229 ) *
1.0E-9 ) ) || ( ! ( fabs ( t1241 * t1241 * 9.999999999999999E-14 + fabs ( X [
388ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI *
t1229 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1241 * t1241 *
9.999999999999999E-14 + fabs ( X [ 388ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_gamma_BI * t1229 ) *
1.0E-9 >= 0.0 ) ) ; t422 [ 2073ULL ] = 1 ; t422 [ 2074ULL ] = 1 ; t422 [
2075ULL ] = ( int32_T ) ( t1229 != 0.0 ) ; t422 [ 2076ULL ] = ( int32_T ) ( (
! ( t1229 != 0.0 ) ) || ( X [ 388ULL ] != 0.0 ) ) ; t422 [ 2077ULL ] = 1 ;
t422 [ 2078ULL ] = ( int32_T ) ( ( ! ( t1229 != 0.0 ) ) || ( ( t1229 != 0.0 )
&& ( ! ( X [ 388ULL ] != 0.0 ) ) ) || ( fabs ( t1635 / ( t1229 == 0.0 ?
1.0E-16 : t1229 ) / ( X [ 388ULL ] == 0.0 ? 1.0E-16 : X [ 388ULL ] ) ) >= 0.0
) ) ; t422 [ 2079ULL ] = ( int32_T ) ( t1239 * 0.32 != 0.0 ) ; t422 [ 2080ULL
] = ( int32_T ) ( t1244 * 6.4000000000000011E-5 != 0.0 ) ; t422 [ 2081ULL ] =
( int32_T ) ( t1254 != 0.0 ) ; t422 [ 2082ULL ] = ( int32_T ) ( ( ! ( t1254
!= 0.0 ) ) || ( 6.9 / ( t1254 == 0.0 ? 1.0E-16 : t1254 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 2083ULL ] = 1 ; t422 [ 2084ULL ] =
1 ; t422 [ 2085ULL ] = ( int32_T ) ( ( ! ( t1254 != 0.0 ) ) || ( ( t1254 !=
0.0 ) && ( ! ( 6.9 / ( t1254 == 0.0 ? 1.0E-16 : t1254 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1254 == 0.0 ?
1.0E-16 : t1254 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1254 ==
0.0 ? 1.0E-16 : t1254 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2086ULL ] = ( int32_T ) ( t1244 * 0.0020480000000000003 != 0.0 ) ; t422 [
2087ULL ] = 1 ; t422 [ 2088ULL ] = 1 ; t422 [ 2089ULL ] = 1 ; t422 [ 2090ULL
] = 1 ; t422 [ 2091ULL ] = ( int32_T ) ( ( ! ( - X [ 374ULL ] >= 0.0 ) ) || (
t1240 != 0.0 ) ) ; t422 [ 2092ULL ] = ( int32_T ) ( ( - X [ 374ULL ] >= 0.0 )
|| ( t1240 != 0.0 ) ) ; t422 [ 2093ULL ] = ( int32_T ) ( ( ! ( - X [ 347ULL ]
>= 0.0 ) ) || ( t1249 != 0.0 ) ) ; t422 [ 2094ULL ] = ( int32_T ) ( ( - X [
347ULL ] >= 0.0 ) || ( t1249 != 0.0 ) ) ; t422 [ 2095ULL ] = 1 ; t422 [
2096ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 17ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 17ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 17ULL ]
>= 0.01 ) ) ; t422 [ 2097ULL ] = 1 ; t422 [ 2098ULL ] = ( int32_T ) ( t768 !=
0.0 ) ; t422 [ 2099ULL ] = ( int32_T ) ( X [ 50ULL ] * 100000.0 > 0.0 ) ;
t422 [ 2100ULL ] = ( int32_T ) ( ( ! ( X [ 50ULL ] * 100000.0 > 0.0 ) ) || (
pmf_log ( X [ 50ULL ] * 100000.0 ) - t62 [ 0ULL ] < 663.67513503334737 ) ) ;
t422 [ 2101ULL ] = 1 ; t422 [ 2102ULL ] = ( int32_T ) ( ( ! ( t1255 >= 1.0 )
) || ( ( t1255 - 1.0 ) * 461.523 + t1253 != 0.0 ) ) ; t422 [ 2103ULL ] = (
int32_T ) ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_x_ws_I * 0.01
!= 0.0 ) ; t422 [ 2104ULL ] = 1 ; t422 [ 2105ULL ] = 1 ; t422 [ 2106ULL ] = 1
; t422 [ 2107ULL ] = 1 ; t422 [ 2108ULL ] = ( int32_T ) ( intrm_sf_mf_1252 !=
0.0 ) ; t422 [ 2109ULL ] = ( int32_T ) ( t1651 / 2.0 * 0.32 != 0.0 ) ; t422 [
2110ULL ] = ( int32_T ) ( t1199 != 0.0 ) ; t422 [ 2111ULL ] = ( int32_T ) ( (
! ( t1199 != 0.0 ) ) || ( 6.9 / ( t1199 == 0.0 ? 1.0E-16 : t1199 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 2112ULL ] = 1 ; t422 [ 2113ULL ] =
1 ; t422 [ 2114ULL ] = ( int32_T ) ( ( ! ( t1199 != 0.0 ) ) || ( ( t1199 !=
0.0 ) && ( ! ( 6.9 / ( t1199 == 0.0 ? 1.0E-16 : t1199 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1199 == 0.0 ?
1.0E-16 : t1199 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1199 ==
0.0 ? 1.0E-16 : t1199 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2115ULL ] = ( int32_T ) ( ( t1258 / 8.0 == t1258 / 8.0 ) && ( fabs ( t1258 /
8.0 ) != pmf_get_inf ( ) ) ) ; t422 [ 2116ULL ] = ( int32_T ) ( ( ! ( t1258 /
8.0 == t1258 / 8.0 ) ) || ( ! ( fabs ( t1258 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1258 / 8.0 >= 0.0 ) ) ; t422 [ 2117ULL ] = 1 ; t422 [ 2118ULL ] = (
int32_T ) ( t1655 / 2.0 >= 0.0 ) ; t422 [ 2119ULL ] = 1 ; t422 [ 2120ULL ] =
1 ; t422 [ 2121ULL ] = 1 ; t422 [ 2122ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1655 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1258 / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( ( t1258 / 8.0 == t1258 / 8.0 ) && ( fabs ( t1258 /
8.0 ) != pmf_get_inf ( ) ) ) ) ; t422 [ 2123ULL ] = ( int32_T ) ( ( ! ( (
pmf_pow ( t1655 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1258 /
8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( ( ! ( t1258 / 8.0 == t1258 / 8.0 ) ) ||
( ! ( fabs ( t1258 / 8.0 ) != pmf_get_inf ( ) ) ) ) || ( t1258 / 8.0 >= 0.0 )
) ; t422 [ 2124ULL ] = 1 ; t422 [ 2125ULL ] = 1 ; t422 [ 2126ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1655 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1258 / 8.0 ) * 12.7 + 1.0 >= 1.0E-6 ) ) || ( t1655 / 2.0 >= 0.0 )
) ; t422 [ 2127ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1655 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1258 / 8.0 ) * 12.7 + 1.0 >=
1.0E-6 ) ) || ( ( ! ( t1258 / 8.0 == t1258 / 8.0 ) ) || ( ! ( fabs ( t1258 /
8.0 ) != pmf_get_inf ( ) ) ) ) || ( ( t1258 / 8.0 == t1258 / 8.0 ) && ( fabs
( t1258 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1258 / 8.0 >= 0.0 ) ) ) || ( !
( t1655 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1655 / 2.0 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t1258 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t422 [ 2128ULL ]
= 1 ; t422 [ 2129ULL ] = 1 ; t422 [ 2130ULL ] = 1 ; t422 [ 2131ULL ] = 1 ;
t422 [ 2132ULL ] = 1 ; t422 [ 2133ULL ] = 1 ; t422 [ 2134ULL ] = 1 ; t422 [
2135ULL ] = ( int32_T ) ( t1655 / 2.0 != 0.0 ) ; t422 [ 2136ULL ] = 1 ; t2179
= t1655 / 2.0 ; t422 [ 2137ULL ] = ( int32_T ) ( ( ! ( t1238 > t1663 / 0.32 /
( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( t1238 != 0.0 ) ) ; t422 [
2138ULL ] = 1 ; t422 [ 2139ULL ] = 1 ; t2179 = t1655 / 2.0 ; t422 [ 2140ULL ]
= ( int32_T ) ( ( ! ( t1238 > t1663 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179
) / 30.0 ) ) || ( ! ( t1238 != 0.0 ) ) || ( t1655 / 2.0 != 0.0 ) ) ; t422 [
2141ULL ] = ( int32_T ) ( - t1259 < 663.67513503334737 ) ; t422 [ 2142ULL ] =
( int32_T ) ( t1164 != 0.0 ) ; t422 [ 2143ULL ] = ( int32_T ) ( t1673 / 2.0 *
0.32 != 0.0 ) ; t422 [ 2144ULL ] = ( int32_T ) ( t1114 != 0.0 ) ; t422 [
2145ULL ] = ( int32_T ) ( ( ! ( t1114 != 0.0 ) ) || ( 6.9 / ( t1114 == 0.0 ?
1.0E-16 : t1114 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2146ULL ] = 1 ;
t422 [ 2147ULL ] = 1 ; t422 [ 2148ULL ] = ( int32_T ) ( ( ! ( t1114 != 0.0 )
) || ( ( t1114 != 0.0 ) && ( ! ( 6.9 / ( t1114 == 0.0 ? 1.0E-16 : t1114 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1114 == 0.0 ?
1.0E-16 : t1114 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1114 ==
0.0 ? 1.0E-16 : t1114 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2149ULL ] = ( int32_T ) ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) && ( fabs
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 2150ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) ) || ( !
( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 )
!= pmf_get_inf ( ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 >= 0.0 ) )
; t422 [ 2151ULL ] = 1 ; t422 [ 2152ULL ] = ( int32_T ) ( t1677 / 2.0 >= 0.0
) ; t422 [ 2153ULL ] = 1 ; t422 [ 2154ULL ] = 1 ; t422 [ 2155ULL ] = 1 ; t422
[ 2156ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow ( t1677 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) && ( fabs
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) !=
pmf_get_inf ( ) ) ) ) ; t422 [ 2157ULL ] = ( int32_T ) ( ( ! ( ( pmf_pow (
t1677 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 >= 1.0E-6 ) ) || ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) ) || ( !
( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 )
!= pmf_get_inf ( ) ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 >= 0.0 ) )
; t422 [ 2158ULL ] = 1 ; t422 [ 2159ULL ] = 1 ; t422 [ 2160ULL ] = ( int32_T
) ( ( ! ( ( pmf_pow ( t1677 / 2.0 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7
+ 1.0 >= 1.0E-6 ) ) || ( t1677 / 2.0 >= 0.0 ) ) ; t422 [ 2161ULL ] = (
int32_T ) ( ( ! ( ( pmf_pow ( t1677 / 2.0 , 0.66666666666666663 ) - 1.0 ) *
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
) || ( ! ( t1677 / 2.0 >= 0.0 ) ) || ( ( pmf_pow ( t1677 / 2.0 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_mdot_avg / 8.0 ) * 12.7 +
1.0 != 0.0 ) ) ; t422 [ 2162ULL ] = 1 ; t422 [ 2163ULL ] = 1 ; t422 [ 2164ULL
] = 1 ; t422 [ 2165ULL ] = 1 ; t422 [ 2166ULL ] = 1 ; t422 [ 2167ULL ] = 1 ;
t422 [ 2168ULL ] = 1 ; t422 [ 2169ULL ] = ( int32_T ) ( t1677 / 2.0 != 0.0 )
; t422 [ 2170ULL ] = 1 ; t2179 = t1677 / 2.0 ; t422 [ 2171ULL ] = ( int32_T )
( ( ! ( t1167 > t1684 / 0.32 / ( t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) )
|| ( t1167 != 0.0 ) ) ; t422 [ 2172ULL ] = 1 ; t422 [ 2173ULL ] = 1 ; t2179 =
t1677 / 2.0 ; t422 [ 2174ULL ] = ( int32_T ) ( ( ! ( t1167 > t1684 / 0.32 / (
t2179 == 0.0 ? 1.0E-16 : t2179 ) / 30.0 ) ) || ( ! ( t1167 != 0.0 ) ) || (
t1677 / 2.0 != 0.0 ) ) ; t422 [ 2175ULL ] = ( int32_T ) ( - t1263 <
663.67513503334737 ) ; t422 [ 2176ULL ] = 1 ; t422 [ 2177ULL ] = 1 ; t422 [
2178ULL ] = ( int32_T ) ( X [ 69ULL ] != 0.0 ) ; t422 [ 2179ULL ] = 1 ; t422
[ 2180ULL ] = 1 ; t422 [ 2181ULL ] = 1 ; t422 [ 2182ULL ] = 1 ; t422 [
2183ULL ] = 1 ; t422 [ 2184ULL ] = ( int32_T ) ( ( X [ 374ULL ] * X [ 374ULL
] + 2.5711439722933289E-8 == X [ 374ULL ] * X [ 374ULL ] +
2.5711439722933289E-8 ) && ( fabs ( X [ 374ULL ] * X [ 374ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 2185ULL ] = ( int32_T
) ( ( ! ( X [ 374ULL ] * X [ 374ULL ] + 2.5711439722933289E-8 == X [ 374ULL ]
* X [ 374ULL ] + 2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 374ULL ] * X [
374ULL ] + 2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 374ULL ] *
X [ 374ULL ] + 2.5711439722933289E-8 >= 0.0 ) ) ; t422 [ 2186ULL ] = 1 ; t422
[ 2187ULL ] = 1 ; t422 [ 2188ULL ] = ( int32_T ) ( ( X [ 374ULL ] * X [
374ULL ] + 4.9597684650720062E-8 == X [ 374ULL ] * X [ 374ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 374ULL ] * X [ 374ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 2189ULL ] = ( int32_T
) ( ( ! ( X [ 374ULL ] * X [ 374ULL ] + 4.9597684650720062E-8 == X [ 374ULL ]
* X [ 374ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 374ULL ] * X [
374ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 374ULL ] *
X [ 374ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 2190ULL ] = 1 ; t422
[ 2191ULL ] = 1 ; t422 [ 2192ULL ] = ( int32_T ) ( ( X [ 374ULL ] * X [
374ULL ] + 3.5023764535063242E-8 == X [ 374ULL ] * X [ 374ULL ] +
3.5023764535063242E-8 ) && ( fabs ( X [ 374ULL ] * X [ 374ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) ; t422 [ 2193ULL ] = ( int32_T
) ( ( ! ( X [ 374ULL ] * X [ 374ULL ] + 3.5023764535063242E-8 == X [ 374ULL ]
* X [ 374ULL ] + 3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 374ULL ] * X [
374ULL ] + 3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 374ULL ] *
X [ 374ULL ] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 2194ULL ] = (
int32_T ) ( X [ 325ULL ] != 0.0 ) ; t422 [ 2195ULL ] = 1 ; t422 [ 2196ULL ] =
1 ; t422 [ 2197ULL ] = 1 ; t422 [ 2198ULL ] = 1 ; t422 [ 2199ULL ] = 1 ; t422
[ 2200ULL ] = ( int32_T ) ( ( X [ 347ULL ] * X [ 347ULL ] +
2.5711439722933289E-8 == X [ 347ULL ] * X [ 347ULL ] + 2.5711439722933289E-8
) && ( fabs ( X [ 347ULL ] * X [ 347ULL ] + 2.5711439722933289E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 2201ULL ] = ( int32_T ) ( ( ! ( X [ 347ULL ] * X
[ 347ULL ] + 2.5711439722933289E-8 == X [ 347ULL ] * X [ 347ULL ] +
2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 347ULL ] * X [ 347ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 347ULL ] * X [ 347ULL
] + 2.5711439722933289E-8 >= 0.0 ) ) ; t422 [ 2202ULL ] = 1 ; t422 [ 2203ULL
] = 1 ; t422 [ 2204ULL ] = ( int32_T ) ( ( X [ 347ULL ] * X [ 347ULL ] +
4.9597684650720062E-8 == X [ 347ULL ] * X [ 347ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 347ULL ] * X [ 347ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 2205ULL ] = ( int32_T ) ( ( ! ( X [ 347ULL ] * X
[ 347ULL ] + 4.9597684650720062E-8 == X [ 347ULL ] * X [ 347ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 347ULL ] * X [ 347ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 347ULL ] * X [ 347ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t422 [ 2206ULL ] = 1 ; t422 [ 2207ULL
] = 1 ; t422 [ 2208ULL ] = ( int32_T ) ( ( X [ 347ULL ] * X [ 347ULL ] +
3.5023764535063242E-8 == X [ 347ULL ] * X [ 347ULL ] + 3.5023764535063242E-8
) && ( fabs ( X [ 347ULL ] * X [ 347ULL ] + 3.5023764535063242E-8 ) !=
pmf_get_inf ( ) ) ) ; t422 [ 2209ULL ] = ( int32_T ) ( ( ! ( X [ 347ULL ] * X
[ 347ULL ] + 3.5023764535063242E-8 == X [ 347ULL ] * X [ 347ULL ] +
3.5023764535063242E-8 ) ) || ( ! ( fabs ( X [ 347ULL ] * X [ 347ULL ] +
3.5023764535063242E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 347ULL ] * X [ 347ULL
] + 3.5023764535063242E-8 >= 0.0 ) ) ; t422 [ 2210ULL ] = 1 ; t422 [ 2211ULL
] = 1 ; t422 [ 2212ULL ] = ( int32_T ) ( t1102 * 9.8174770424681068E-6 != 0.0
) ; t422 [ 2213ULL ] = ( int32_T ) ( t1097 * 0.0019634954084936209 != 0.0 ) ;
t422 [ 2214ULL ] = ( int32_T ) ( t1264 != 0.0 ) ; t422 [ 2215ULL ] = (
int32_T ) ( ( ! ( t1264 != 0.0 ) ) || ( 6.9 / ( t1264 == 0.0 ? 1.0E-16 :
t1264 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 2216ULL ] = 1 ; t422 [
2217ULL ] = 1 ; t422 [ 2218ULL ] = ( int32_T ) ( ( ! ( t1264 != 0.0 ) ) || (
( t1264 != 0.0 ) && ( ! ( 6.9 / ( t1264 == 0.0 ? 1.0E-16 : t1264 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1264 == 0.0 ?
1.0E-16 : t1264 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1264 ==
0.0 ? 1.0E-16 : t1264 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [
2219ULL ] = ( int32_T ) ( t1102 * 3.855314219175531E-7 != 0.0 ) ; t422 [
2220ULL ] = 1 ; t422 [ 2221ULL ] = 1 ; t422 [ 2222ULL ] = 1 ; t422 [ 2223ULL
] = 1 ; t422 [ 2224ULL ] = 1 ; t422 [ 2225ULL ] = ( int32_T ) ( ( ! ( 1.0 - X
[ 340ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 340ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 340ULL ] >= 0.01 ) ) ; t422 [ 2226ULL ] =
1 ; t422 [ 2227ULL ] = ( int32_T ) ( t1141 * 0.0019634954084936209 != 0.0 ) ;
t422 [ 2228ULL ] = ( int32_T ) ( t1267 != 0.0 ) ; t422 [ 2229ULL ] = (
int32_T ) ( ( ! ( t1267 != 0.0 ) ) || ( 6.9 / ( t1267 == 0.0 ? 1.0E-16 :
t1267 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 2230ULL ] = 1 ; t422 [
2231ULL ] = 1 ; t422 [ 2232ULL ] = ( int32_T ) ( ( ! ( t1267 != 0.0 ) ) || (
( t1267 != 0.0 ) && ( ! ( 6.9 / ( t1267 == 0.0 ? 1.0E-16 : t1267 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1267 == 0.0 ?
1.0E-16 : t1267 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1267 ==
0.0 ? 1.0E-16 : t1267 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [
2233ULL ] = ( int32_T ) ( t1147 * 9.8174770424681068E-6 != 0.0 ) ; t422 [
2234ULL ] = ( int32_T ) ( t1147 * 3.855314219175531E-7 != 0.0 ) ; t422 [
2235ULL ] = 1 ; t422 [ 2236ULL ] = 1 ; t422 [ 2237ULL ] = 1 ; t422 [ 2238ULL
] = 1 ; t422 [ 2239ULL ] = ( int32_T ) ( t1141 * 0.0019634954084936209 != 0.0
) ; t422 [ 2240ULL ] = ( int32_T ) ( t1725 != 0.0 ) ; t422 [ 2241ULL ] = (
int32_T ) ( ( ! ( t1725 != 0.0 ) ) || ( 6.9 / ( t1725 == 0.0 ? 1.0E-16 :
t1725 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [ 2242ULL ] = 1 ; t422 [
2243ULL ] = 1 ; t422 [ 2244ULL ] = ( int32_T ) ( ( ! ( t1725 != 0.0 ) ) || (
( t1725 != 0.0 ) && ( ! ( 6.9 / ( t1725 == 0.0 ? 1.0E-16 : t1725 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1725 == 0.0 ?
1.0E-16 : t1725 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1725 ==
0.0 ? 1.0E-16 : t1725 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [
2245ULL ] = ( int32_T ) ( t1147 * 9.8174770424681068E-6 != 0.0 ) ; t422 [
2246ULL ] = ( int32_T ) ( t1147 * 3.855314219175531E-7 != 0.0 ) ; t422 [
2247ULL ] = 1 ; t422 [ 2248ULL ] = 1 ; t422 [ 2249ULL ] = 1 ; t422 [ 2250ULL
] = 1 ; t422 [ 2251ULL ] = ( int32_T ) ( t1190 - ( - t1190 ) != 0.0 ) ; t422
[ 2252ULL ] = 1 ; t422 [ 2253ULL ] = 1 ; t422 [ 2254ULL ] = 1 ; t422 [
2255ULL ] = 1 ; t422 [ 2256ULL ] = ( int32_T ) ( t1201 * 0.32 != 0.0 ) ; t422
[ 2257ULL ] = ( int32_T ) ( t1271 != 0.0 ) ; t422 [ 2258ULL ] = ( int32_T ) (
( ! ( t1271 != 0.0 ) ) || ( 6.9 / ( t1271 == 0.0 ? 1.0E-16 : t1271 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 2259ULL ] = 1 ; t422 [ 2260ULL ] =
1 ; t422 [ 2261ULL ] = ( int32_T ) ( ( ! ( t1271 != 0.0 ) ) || ( ( t1271 !=
0.0 ) && ( ! ( 6.9 / ( t1271 == 0.0 ? 1.0E-16 : t1271 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1271 == 0.0 ?
1.0E-16 : t1271 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1271 ==
0.0 ? 1.0E-16 : t1271 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2262ULL ] = ( int32_T ) ( t1205 * 6.4000000000000011E-5 != 0.0 ) ; t422 [
2263ULL ] = ( int32_T ) ( t1205 * 0.0020480000000000003 != 0.0 ) ; t422 [
2264ULL ] = 1 ; t422 [ 2265ULL ] = 1 ; t422 [ 2266ULL ] = 1 ; t422 [ 2267ULL
] = 1 ; t422 [ 2268ULL ] = ( int32_T ) ( t1201 * 0.32 != 0.0 ) ; t422 [
2269ULL ] = ( int32_T ) ( t1273 != 0.0 ) ; t422 [ 2270ULL ] = ( int32_T ) ( (
! ( t1273 != 0.0 ) ) || ( 6.9 / ( t1273 == 0.0 ? 1.0E-16 : t1273 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 2271ULL ] = 1 ; t422 [ 2272ULL ] =
1 ; t422 [ 2273ULL ] = ( int32_T ) ( ( ! ( t1273 != 0.0 ) ) || ( ( t1273 !=
0.0 ) && ( ! ( 6.9 / ( t1273 == 0.0 ? 1.0E-16 : t1273 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1273 == 0.0 ?
1.0E-16 : t1273 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1273 ==
0.0 ? 1.0E-16 : t1273 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2274ULL ] = ( int32_T ) ( t1205 * 6.4000000000000011E-5 != 0.0 ) ; t422 [
2275ULL ] = ( int32_T ) ( t1205 * 0.0020480000000000003 != 0.0 ) ; t422 [
2276ULL ] = 1 ; t422 [ 2277ULL ] = 1 ; t422 [ 2278ULL ] = 1 ; t422 [ 2279ULL
] = 1 ; t422 [ 2280ULL ] = ( int32_T ) ( t1239 * 0.32 != 0.0 ) ; t422 [
2281ULL ] = ( int32_T ) ( t542_idx_0 != 0.0 ) ; t422 [ 2282ULL ] = ( int32_T
) ( ( ! ( t542_idx_0 != 0.0 ) ) || ( 6.9 / ( t542_idx_0 == 0.0 ? 1.0E-16 :
t542_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2283ULL ] = 1 ; t422
[ 2284ULL ] = 1 ; t422 [ 2285ULL ] = ( int32_T ) ( ( ! ( t542_idx_0 != 0.0 )
) || ( ( t542_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t542_idx_0 == 0.0 ? 1.0E-16 :
t542_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / (
t542_idx_0 == 0.0 ? 1.0E-16 : t542_idx_0 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t542_idx_0 == 0.0 ? 1.0E-16 : t542_idx_0 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 2286ULL ] = ( int32_T ) (
t1244 * 6.4000000000000011E-5 != 0.0 ) ; t422 [ 2287ULL ] = ( int32_T ) (
t839 * 7.8539816339744827E-5 != 0.0 ) ; t422 [ 2288ULL ] = ( int32_T ) (
t1244 * 0.0020480000000000003 != 0.0 ) ; t422 [ 2289ULL ] = 1 ; t422 [
2290ULL ] = 1 ; t422 [ 2291ULL ] = 1 ; t422 [ 2292ULL ] = 1 ; t422 [ 2293ULL
] = ( int32_T ) ( t1239 * 0.32 != 0.0 ) ; t422 [ 2294ULL ] = ( int32_T ) (
U_idx_8 != 0.0 ) ; t422 [ 2295ULL ] = ( int32_T ) ( ( ! ( U_idx_8 != 0.0 ) )
|| ( 6.9 / ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) + 0.00017169489553429715 >
0.0 ) ) ; t422 [ 2296ULL ] = 1 ; t422 [ 2297ULL ] = 1 ; t422 [ 2298ULL ] = (
int32_T ) ( ( ! ( U_idx_8 != 0.0 ) ) || ( ( U_idx_8 != 0.0 ) && ( ! ( 6.9 / (
U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) + 0.00017169489553429715 > 0.0 ) ) ) ||
( pmf_log10 ( 6.9 / ( U_idx_8 == 0.0 ? 1.0E-16 : U_idx_8 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( U_idx_8 == 0.0 ? 1.0E-16 :
U_idx_8 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 2299ULL ] = (
int32_T ) ( t1244 * 6.4000000000000011E-5 != 0.0 ) ; t422 [ 2300ULL ] = (
int32_T ) ( t1244 * 0.0020480000000000003 != 0.0 ) ; t422 [ 2301ULL ] = 1 ;
t422 [ 2302ULL ] = 1 ; t422 [ 2303ULL ] = 1 ; t422 [ 2304ULL ] = 1 ; t422 [
2305ULL ] = ( int32_T ) ( t537_idx_0 != 0.0 ) ; t422 [ 2306ULL ] = ( int32_T
) ( ( ! ( t537_idx_0 != 0.0 ) ) || ( 6.9 / ( t537_idx_0 == 0.0 ? 1.0E-16 :
t537_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2307ULL ] = 1 ; t422
[ 2308ULL ] = 1 ; t422 [ 2309ULL ] = ( int32_T ) ( ( ! ( t537_idx_0 != 0.0 )
) || ( ( t537_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t537_idx_0 == 0.0 ? 1.0E-16 :
t537_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / (
t537_idx_0 == 0.0 ? 1.0E-16 : t537_idx_0 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t537_idx_0 == 0.0 ? 1.0E-16 : t537_idx_0 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 2310ULL ] = ( int32_T ) (
- t836 - t836 * - 0.95 != 0.0 ) ; t422 [ 2311ULL ] = 1 ; t422 [ 2312ULL ] = 1
; t422 [ 2313ULL ] = 1 ; t422 [ 2314ULL ] = 1 ; t422 [ 2315ULL ] = ( int32_T
) ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok * - 0.95 !=
0.0 ) ; t422 [ 2316ULL ] = 1 ; t422 [ 2317ULL ] = 1 ; t422 [ 2318ULL ] = 1 ;
t422 [ 2319ULL ] = 1 ; t422 [ 2320ULL ] = ( int32_T ) ( t846 *
1.5707963267948965E-8 != 0.0 ) ; t422 [ 2321ULL ] = ( int32_T ) ( t879 - t879
* 0.95 != 0.0 ) ; t422 [ 2322ULL ] = 1 ; t422 [ 2323ULL ] = 1 ; t422 [
2324ULL ] = 1 ; t422 [ 2325ULL ] = 1 ; t422 [ 2326ULL ] = 1 ; t422 [ 2327ULL
] = 1 ; t422 [ 2328ULL ] = 1 ; t422 [ 2329ULL ] = 1 ; t422 [ 2330ULL ] = (
int32_T ) ( - t902 - t902 * - 0.95 != 0.0 ) ; t422 [ 2331ULL ] = 1 ; t422 [
2332ULL ] = 1 ; t422 [ 2333ULL ] = 1 ; t422 [ 2334ULL ] = 1 ; t422 [ 2335ULL
] = ( int32_T ) ( t846 * 1.2337005501361697E-10 != 0.0 ) ; t422 [ 2336ULL ] =
( int32_T ) ( - t894 - t894 * - 0.95 != 0.0 ) ; t422 [ 2337ULL ] = 1 ; t422 [
2338ULL ] = 1 ; t422 [ 2339ULL ] = 1 ; t422 [ 2340ULL ] = 1 ; t422 [ 2341ULL
] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pressure_Reducing_V27 * 0.95 != 0.0
) ; t422 [ 2342ULL ] = 1 ; t422 [ 2343ULL ] = 1 ; t422 [ 2344ULL ] = 1 ; t422
[ 2345ULL ] = 1 ; t422 [ 2346ULL ] = 1 ; t422 [ 2347ULL ] = 1 ; t422 [
2348ULL ] = 1 ; t422 [ 2349ULL ] = 1 ; t422 [ 2350ULL ] = 1 ; t422 [ 2351ULL
] = 1 ; t422 [ 2352ULL ] = 1 ; t422 [ 2353ULL ] = 1 ; t422 [ 2354ULL ] = (
int32_T ) ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked * - 0.95 !=
0.0 ) ; t422 [ 2355ULL ] = 1 ; t422 [ 2356ULL ] = 1 ; t422 [ 2357ULL ] = 1 ;
t422 [ 2358ULL ] = 1 ; t422 [ 2359ULL ] = ( int32_T ) ( - t963 - t963 * -
0.95 != 0.0 ) ; t422 [ 2360ULL ] = 1 ; t422 [ 2361ULL ] = 1 ; t422 [ 2362ULL
] = 1 ; t422 [ 2363ULL ] = 1 ; t422 [ 2364ULL ] = ( int32_T ) ( - t1013 -
t1013 * - 0.95 != 0.0 ) ; t422 [ 2365ULL ] = 1 ; t422 [ 2366ULL ] = 1 ; t422
[ 2367ULL ] = 1 ; t422 [ 2368ULL ] = 1 ; t422 [ 2369ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_BI_choked * - 0.95 !=
0.0 ) ; t422 [ 2370ULL ] = 1 ; t422 [ 2371ULL ] = 1 ; t422 [ 2372ULL ] = 1 ;
t422 [ 2373ULL ] = 1 ; t422 [ 2374ULL ] = ( int32_T ) ( - t1053 - t1053 * -
0.95 != 0.0 ) ; t422 [ 2375ULL ] = 1 ; t422 [ 2376ULL ] = 1 ; t422 [ 2377ULL
] = 1 ; t422 [ 2378ULL ] = 1 ; t422 [ 2379ULL ] = ( int32_T ) ( - t1044 -
t1044 * - 0.95 != 0.0 ) ; t422 [ 2380ULL ] = 1 ; t422 [ 2381ULL ] = 1 ; t422
[ 2382ULL ] = 1 ; t422 [ 2383ULL ] = 1 ; t422 [ 2384ULL ] = ( int32_T ) (
t839 * 7.8539816339744827E-5 != 0.0 ) ; t422 [ 2385ULL ] = ( int32_T ) ( -
t1091 - t1091 * - 0.95 != 0.0 ) ; t422 [ 2386ULL ] = 1 ; t422 [ 2387ULL ] = 1
; t422 [ 2388ULL ] = 1 ; t422 [ 2389ULL ] = 1 ; t422 [ 2390ULL ] = ( int32_T
) ( - t1081 - t1081 * - 0.95 != 0.0 ) ; t422 [ 2391ULL ] = 1 ; t422 [ 2392ULL
] = 1 ; t422 [ 2393ULL ] = 1 ; t422 [ 2394ULL ] = 1 ; t422 [ 2395ULL ] = (
int32_T ) ( - t1138 - t1138 * - 0.95 != 0.0 ) ; t422 [ 2396ULL ] = 1 ; t422 [
2397ULL ] = 1 ; t422 [ 2398ULL ] = 1 ; t422 [ 2399ULL ] = 1 ; t422 [ 2400ULL
] = ( int32_T ) ( - t1131 - t1131 * - 0.95 != 0.0 ) ; t422 [ 2401ULL ] = (
int32_T ) ( t852 != 0.0 ) ; t422 [ 2402ULL ] = ( int32_T ) ( ( ! ( t852 !=
0.0 ) ) || ( 6.9 / ( t852 == 0.0 ? 1.0E-16 : t852 ) + 0.00017169489553429715
> 0.0 ) ) ; t422 [ 2403ULL ] = 1 ; t422 [ 2404ULL ] = 1 ; t422 [ 2405ULL ] =
( int32_T ) ( ( ! ( t852 != 0.0 ) ) || ( ( t852 != 0.0 ) && ( ! ( 6.9 / (
t852 == 0.0 ? 1.0E-16 : t852 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t852 == 0.0 ? 1.0E-16 : t852 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t852 == 0.0 ? 1.0E-16 : t852 ) + 0.00017169489553429715
) * 3.24 != 0.0 ) ) ; t422 [ 2406ULL ] = 1 ; t422 [ 2407ULL ] = 1 ; t422 [
2408ULL ] = 1 ; t422 [ 2409ULL ] = 1 ; t422 [ 2410ULL ] = ( int32_T ) ( t1179
- t1179 * 0.95 != 0.0 ) ; t422 [ 2411ULL ] = 1 ; t422 [ 2412ULL ] = 1 ; t422
[ 2413ULL ] = 1 ; t422 [ 2414ULL ] = 1 ; t422 [ 2415ULL ] = ( int32_T ) (
t846 * 1.5707963267948965E-8 != 0.0 ) ; t422 [ 2416ULL ] = 1 ; t422 [ 2417ULL
] = 1 ; t422 [ 2418ULL ] = 1 ; t422 [ 2419ULL ] = 1 ; t422 [ 2420ULL ] = (
int32_T ) ( - t1197 - t1197 * - 0.95 != 0.0 ) ; t422 [ 2421ULL ] = 1 ; t422 [
2422ULL ] = 1 ; t422 [ 2423ULL ] = 1 ; t422 [ 2424ULL ] = 1 ; t422 [ 2425ULL
] = ( int32_T ) ( - t1189 - t1189 * - 0.95 != 0.0 ) ; t422 [ 2426ULL ] = 1 ;
t422 [ 2427ULL ] = 1 ; t422 [ 2428ULL ] = 1 ; t422 [ 2429ULL ] = 1 ; t422 [
2430ULL ] = ( int32_T ) ( t846 * 1.2337005501361697E-10 != 0.0 ) ; t422 [
2431ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA1_Dp_AI_choked * - 0.95 !=
0.0 ) ; t422 [ 2432ULL ] = 1 ; t422 [ 2433ULL ] = 1 ; t422 [ 2434ULL ] = 1 ;
t422 [ 2435ULL ] = 1 ; t422 [ 2436ULL ] = ( int32_T ) ( - t1228 - t1228 * -
0.95 != 0.0 ) ; t422 [ 2437ULL ] = 1 ; t422 [ 2438ULL ] = 1 ; t422 [ 2439ULL
] = 1 ; t422 [ 2440ULL ] = 1 ; t422 [ 2441ULL ] = 1 ; t422 [ 2442ULL ] = 1 ;
t422 [ 2443ULL ] = 1 ; t422 [ 2444ULL ] = 1 ; t422 [ 2445ULL ] = 1 ; t422 [
2446ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 127ULL ] >= - 0.1 ) ) || ( ( ( 1.0
- X [ 127ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 127ULL
] >= 0.01 ) ) ; t422 [ 2447ULL ] = 1 ; t422 [ 2448ULL ] = ( int32_T ) ( t887
- ( - t887 ) != 0.0 ) ; t422 [ 2449ULL ] = 1 ; t422 [ 2450ULL ] = 1 ; t422 [
2451ULL ] = 1 ; t422 [ 2452ULL ] = 1 ; t422 [ 2453ULL ] = ( int32_T ) ( t905
* 7.8539816339744827E-5 != 0.0 ) ; t422 [ 2454ULL ] = ( int32_T ) (
intrm_sf_mf_829 != 0.0 ) ; t422 [ 2455ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_829 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_829 == 0.0 ? 1.0E-16 :
intrm_sf_mf_829 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2456ULL ] = 1 ;
t422 [ 2457ULL ] = 1 ; t422 [ 2458ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_829
!= 0.0 ) ) || ( ( intrm_sf_mf_829 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_829
== 0.0 ? 1.0E-16 : intrm_sf_mf_829 ) + 0.00017169489553429715 > 0.0 ) ) ) ||
( pmf_log10 ( 6.9 / ( intrm_sf_mf_829 == 0.0 ? 1.0E-16 : intrm_sf_mf_829 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_829 == 0.0 ?
1.0E-16 : intrm_sf_mf_829 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t422 [ 2459ULL ] = ( int32_T ) ( t909 * 1.5707963267948965E-8 != 0.0 ) ; t422
[ 2460ULL ] = ( int32_T ) ( t909 * 1.2337005501361697E-10 != 0.0 ) ; t422 [
2461ULL ] = 1 ; t422 [ 2462ULL ] = 1 ; t422 [ 2463ULL ] = 1 ; t422 [ 2464ULL
] = 1 ; t422 [ 2465ULL ] = ( int32_T ) ( t905 * 7.8539816339744827E-5 != 0.0
) ; t422 [ 2466ULL ] = ( int32_T ) ( t961 != 0.0 ) ; t422 [ 2467ULL ] = (
int32_T ) ( ( ! ( t961 != 0.0 ) ) || ( 6.9 / ( t961 == 0.0 ? 1.0E-16 : t961 )
+ 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2468ULL ] = 1 ; t422 [ 2469ULL ]
= 1 ; t422 [ 2470ULL ] = ( int32_T ) ( ( ! ( t961 != 0.0 ) ) || ( ( t961 !=
0.0 ) && ( ! ( 6.9 / ( t961 == 0.0 ? 1.0E-16 : t961 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t961 == 0.0 ?
1.0E-16 : t961 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t961 == 0.0
? 1.0E-16 : t961 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2471ULL ] = ( int32_T ) ( t909 * 1.5707963267948965E-8 != 0.0 ) ; t422 [
2472ULL ] = ( int32_T ) ( t909 * 1.2337005501361697E-10 != 0.0 ) ; t422 [
2473ULL ] = 1 ; t422 [ 2474ULL ] = 1 ; t422 [ 2475ULL ] = 1 ; t422 [ 2476ULL
] = 1 ; t422 [ 2477ULL ] = ( int32_T ) ( t949 - ( - t949 ) != 0.0 ) ; t422 [
2478ULL ] = 1 ; t422 [ 2479ULL ] = 1 ; t422 [ 2480ULL ] = 1 ; t422 [ 2481ULL
] = 1 ; t422 [ 2482ULL ] = 1 ; t422 [ 2483ULL ] = ( int32_T ) ( ( ! ( 1.0 - X
[ 218ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 218ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 218ULL ] >= 0.01 ) ) ; t422 [ 2484ULL ] =
1 ; t422 [ 2485ULL ] = 1 ; t422 [ 2486ULL ] = 1 ; t422 [ 2487ULL ] = 1 ; t422
[ 2488ULL ] = 1 ; t422 [ 2489ULL ] = ( int32_T ) ( X [ 31ULL ] * 100000.0 >
0.0 ) ; t422 [ 2490ULL ] = ( int32_T ) ( X [ 31ULL ] * 100000.0 > 0.0 ) ;
t422 [ 2491ULL ] = ( int32_T ) ( t975 * 0.0019634954084936209 != 0.0 ) ; t422
[ 2492ULL ] = ( int32_T ) ( intrm_sf_mf_52 != 0.0 ) ; t422 [ 2493ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_52 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_52 ==
0.0 ? 1.0E-16 : intrm_sf_mf_52 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t422 [
2494ULL ] = 1 ; t422 [ 2495ULL ] = 1 ; t422 [ 2496ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_52 != 0.0 ) ) || ( ( intrm_sf_mf_52 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_52 == 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) + 2.8767404433520813E-5 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_52 == 0.0 ? 1.0E-16 :
intrm_sf_mf_52 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_52 == 0.0 ? 1.0E-16 : intrm_sf_mf_52 ) + 2.8767404433520813E-5 )
* 3.24 != 0.0 ) ) ; t422 [ 2497ULL ] = ( int32_T ) ( t982 *
9.8174770424681068E-6 != 0.0 ) ; t422 [ 2498ULL ] = ( int32_T ) ( t982 *
3.855314219175531E-7 != 0.0 ) ; t422 [ 2499ULL ] = 1 ; t422 [ 2500ULL ] = 1 ;
t422 [ 2501ULL ] = 1 ; t422 [ 2502ULL ] = 1 ; t422 [ 2503ULL ] = ( int32_T )
( t975 * 0.0019634954084936209 != 0.0 ) ; t422 [ 2504ULL ] = ( int32_T ) (
t1074 != 0.0 ) ; t422 [ 2505ULL ] = ( int32_T ) ( ( ! ( t1074 != 0.0 ) ) || (
6.9 / ( t1074 == 0.0 ? 1.0E-16 : t1074 ) + 2.8767404433520813E-5 > 0.0 ) ) ;
t422 [ 2506ULL ] = 1 ; t422 [ 2507ULL ] = 1 ; t422 [ 2508ULL ] = ( int32_T )
( ( ! ( t1074 != 0.0 ) ) || ( ( t1074 != 0.0 ) && ( ! ( 6.9 / ( t1074 == 0.0
? 1.0E-16 : t1074 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1074 == 0.0 ? 1.0E-16 : t1074 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1074 == 0.0 ? 1.0E-16 : t1074 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t422 [ 2509ULL ] = ( int32_T ) ( t982 * 9.8174770424681068E-6 !=
0.0 ) ; t422 [ 2510ULL ] = ( int32_T ) ( t982 * 3.855314219175531E-7 != 0.0 )
; t422 [ 2511ULL ] = 1 ; t422 [ 2512ULL ] = 1 ; t422 [ 2513ULL ] = 1 ; t422 [
2514ULL ] = 1 ; t422 [ 2515ULL ] = ( int32_T ) ( t1016 * 0.32 != 0.0 ) ; t422
[ 2516ULL ] = ( int32_T ) ( U_idx_1 != 0.0 ) ; t422 [ 2517ULL ] = ( int32_T )
( ( ! ( U_idx_1 != 0.0 ) ) || ( 6.9 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 )
+ 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2518ULL ] = 1 ; t422 [ 2519ULL ]
= 1 ; t422 [ 2520ULL ] = ( int32_T ) ( ( ! ( U_idx_1 != 0.0 ) ) || ( (
U_idx_1 != 0.0 ) && ( ! ( 6.9 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( U_idx_1 == 0.0 ?
1.0E-16 : U_idx_1 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( U_idx_1
== 0.0 ? 1.0E-16 : U_idx_1 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t422 [ 2521ULL ] = ( int32_T ) ( t1021 * 6.4000000000000011E-5 != 0.0 ) ;
t422 [ 2522ULL ] = ( int32_T ) ( t1021 * 0.0020480000000000003 != 0.0 ) ;
t422 [ 2523ULL ] = 1 ; t422 [ 2524ULL ] = 1 ; t422 [ 2525ULL ] = 1 ; t422 [
2526ULL ] = 1 ; t422 [ 2527ULL ] = ( int32_T ) ( t1016 * 0.32 != 0.0 ) ; t422
[ 2528ULL ] = ( int32_T ) ( t1162 != 0.0 ) ; t422 [ 2529ULL ] = ( int32_T ) (
( ! ( t1162 != 0.0 ) ) || ( 6.9 / ( t1162 == 0.0 ? 1.0E-16 : t1162 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 2530ULL ] = 1 ; t422 [ 2531ULL ] =
1 ; t422 [ 2532ULL ] = ( int32_T ) ( ( ! ( t1162 != 0.0 ) ) || ( ( t1162 !=
0.0 ) && ( ! ( 6.9 / ( t1162 == 0.0 ? 1.0E-16 : t1162 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1162 == 0.0 ?
1.0E-16 : t1162 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1162 ==
0.0 ? 1.0E-16 : t1162 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2533ULL ] = ( int32_T ) ( t1021 * 6.4000000000000011E-5 != 0.0 ) ; t422 [
2534ULL ] = ( int32_T ) ( t1021 * 0.0020480000000000003 != 0.0 ) ; t422 [
2535ULL ] = 1 ; t422 [ 2536ULL ] = 1 ; t422 [ 2537ULL ] = 1 ; t422 [ 2538ULL
] = 1 ; t422 [ 2539ULL ] = 1 ; t422 [ 2540ULL ] = 1 ; t422 [ 2541ULL ] = 1 ;
t422 [ 2542ULL ] = 1 ; t422 [ 2543ULL ] = ( int32_T ) ( t1058 * 0.32 != 0.0 )
; t422 [ 2544ULL ] = ( int32_T ) ( t539_idx_0 != 0.0 ) ; t422 [ 2545ULL ] = (
int32_T ) ( ( ! ( t539_idx_0 != 0.0 ) ) || ( 6.9 / ( t539_idx_0 == 0.0 ?
1.0E-16 : t539_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ; t422 [ 2546ULL ]
= 1 ; t422 [ 2547ULL ] = 1 ; t422 [ 2548ULL ] = ( int32_T ) ( ( ! (
t539_idx_0 != 0.0 ) ) || ( ( t539_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t539_idx_0
== 0.0 ? 1.0E-16 : t539_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t539_idx_0 == 0.0 ? 1.0E-16 : t539_idx_0 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t539_idx_0 == 0.0 ? 1.0E-16 :
t539_idx_0 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [ 2549ULL ]
= ( int32_T ) ( t1062 * 6.4000000000000011E-5 != 0.0 ) ; t422 [ 2550ULL ] = (
int32_T ) ( t1062 * 0.0020480000000000003 != 0.0 ) ; t422 [ 2551ULL ] = 1 ;
t422 [ 2552ULL ] = 1 ; t422 [ 2553ULL ] = 1 ; t422 [ 2554ULL ] = 1 ; t422 [
2555ULL ] = ( int32_T ) ( t1058 * 0.32 != 0.0 ) ; t422 [ 2556ULL ] = (
int32_T ) ( t1250 != 0.0 ) ; t422 [ 2557ULL ] = ( int32_T ) ( ( ! ( t1250 !=
0.0 ) ) || ( 6.9 / ( t1250 == 0.0 ? 1.0E-16 : t1250 ) +
0.00017169489553429715 > 0.0 ) ) ; t422 [ 2558ULL ] = 1 ; t422 [ 2559ULL ] =
1 ; t422 [ 2560ULL ] = ( int32_T ) ( ( ! ( t1250 != 0.0 ) ) || ( ( t1250 !=
0.0 ) && ( ! ( 6.9 / ( t1250 == 0.0 ? 1.0E-16 : t1250 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1250 == 0.0 ?
1.0E-16 : t1250 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1250 ==
0.0 ? 1.0E-16 : t1250 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t422 [
2561ULL ] = ( int32_T ) ( t1062 * 6.4000000000000011E-5 != 0.0 ) ; t422 [
2562ULL ] = ( int32_T ) ( t1062 * 0.0020480000000000003 != 0.0 ) ; t422 [
2563ULL ] = 1 ; t422 [ 2564ULL ] = 1 ; t422 [ 2565ULL ] = 1 ; t422 [ 2566ULL
] = 1 ; t422 [ 2567ULL ] = 1 ; t422 [ 2568ULL ] = 1 ; t422 [ 2569ULL ] = 1 ;
t422 [ 2570ULL ] = 1 ; t422 [ 2571ULL ] = ( int32_T ) ( t1097 *
0.0019634954084936209 != 0.0 ) ; t422 [ 2572ULL ] = ( int32_T ) ( U_idx_2 !=
0.0 ) ; t422 [ 2573ULL ] = ( int32_T ) ( ( ! ( U_idx_2 != 0.0 ) ) || ( 6.9 /
( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) + 2.8767404433520813E-5 > 0.0 ) ) ;
t422 [ 2574ULL ] = 1 ; t422 [ 2575ULL ] = 1 ; t422 [ 2576ULL ] = ( int32_T )
( ( ! ( U_idx_2 != 0.0 ) ) || ( ( U_idx_2 != 0.0 ) && ( ! ( 6.9 / ( U_idx_2
== 0.0 ? 1.0E-16 : U_idx_2 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t422 [ 2577ULL ] = (
int32_T ) ( t1102 * 9.8174770424681068E-6 != 0.0 ) ; t422 [ 2578ULL ] = (
int32_T ) ( t1102 * 3.855314219175531E-7 != 0.0 ) ; t422 [ 2579ULL ] = 1 ;
t422 [ 2580ULL ] = 1 ; t422 [ 2581ULL ] = 1 ; t422 [ 2582ULL ] = 1 ; t422 [
2583ULL ] = ( int32_T ) ( X [ 20ULL ] != 0.0 ) ; t422 [ 2584ULL ] = ( int32_T
) ( X [ 19ULL ] != 0.0 ) ; t422 [ 2585ULL ] = ( int32_T ) ( t767 != 0.0 ) ;
t422 [ 2586ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t422 [ 2587ULL ] = (
int32_T ) ( X [ 23ULL ] != 0.0 ) ; t422 [ 2588ULL ] = ( int32_T ) ( t888 !=
0.0 ) ; t422 [ 2589ULL ] = ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t422 [
2590ULL ] = ( int32_T ) ( X [ 27ULL ] != 0.0 ) ; t422 [ 2591ULL ] = ( int32_T
) ( t895 != 0.0 ) ; t422 [ 2592ULL ] = ( int32_T ) ( X [ 31ULL ] != 0.0 ) ;
t422 [ 2593ULL ] = ( int32_T ) ( X [ 32ULL ] != 0.0 ) ; t422 [ 2594ULL ] = (
int32_T ) ( t951 != 0.0 ) ; t422 [ 2595ULL ] = ( int32_T ) ( X [ 38ULL ] !=
0.0 ) ; t422 [ 2596ULL ] = ( int32_T ) ( X [ 35ULL ] != 0.0 ) ; t422 [
2597ULL ] = ( int32_T ) ( t964 != 0.0 ) ; t422 [ 2598ULL ] = ( int32_T ) ( X
[ 39ULL ] != 0.0 ) ; t422 [ 2599ULL ] = ( int32_T ) ( X [ 6ULL ] != 0.0 ) ;
t422 [ 2600ULL ] = ( int32_T ) ( t1006 != 0.0 ) ; t422 [ 2601ULL ] = (
int32_T ) ( X [ 40ULL ] != 0.0 ) ; t422 [ 2602ULL ] = ( int32_T ) ( X [ 9ULL
] != 0.0 ) ; t422 [ 2603ULL ] = ( int32_T ) ( t1045 != 0.0 ) ; t422 [ 2604ULL
] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t422 [ 2605ULL ] = ( int32_T ) ( X [
41ULL ] != 0.0 ) ; t422 [ 2606ULL ] = ( int32_T ) ( t1082 != 0.0 ) ; t422 [
2607ULL ] = ( int32_T ) ( X [ 46ULL ] != 0.0 ) ; t422 [ 2608ULL ] = ( int32_T
) ( X [ 45ULL ] != 0.0 ) ; t422 [ 2609ULL ] = ( int32_T ) ( t1132 != 0.0 ) ;
t422 [ 2610ULL ] = ( int32_T ) ( X [ 49ULL ] != 0.0 ) ; t422 [ 2611ULL ] = (
int32_T ) ( X [ 12ULL ] != 0.0 ) ; t422 [ 2612ULL ] = ( int32_T ) ( t1191 !=
0.0 ) ; t422 [ 2613ULL ] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t422 [
2614ULL ] = ( int32_T ) ( X [ 15ULL ] != 0.0 ) ; t422 [ 2615ULL ] = ( int32_T
) ( t1229 != 0.0 ) ; t422 [ 2616ULL ] = ( int32_T ) ( ( X [ 55ULL ] > 0.9 ? X
[ 55ULL ] : 0.9 ) != 0.0 ) ; t422 [ 2617ULL ] = 1 ; t422 [ 2618ULL ] = 1 ;
t422 [ 2619ULL ] = 1 ; t422 [ 2620ULL ] = 1 ; t422 [ 2621ULL ] = 1 ; t422 [
2622ULL ] = 1 ; t422 [ 2623ULL ] = ( int32_T ) ( X [ 136ULL ] != 0.0 ) ; t422
[ 2624ULL ] = ( int32_T ) ( X [ 136ULL ] != 0.0 ) ; t422 [ 2625ULL ] = 1 ;
t422 [ 2626ULL ] = 1 ; t422 [ 2627ULL ] = 1 ; t422 [ 2628ULL ] = ( int32_T )
( X [ 140ULL ] != 0.0 ) ; t422 [ 2629ULL ] = ( int32_T ) ( X [ 140ULL ] !=
0.0 ) ; t422 [ 2630ULL ] = 1 ; t422 [ 2631ULL ] = 1 ; t422 [ 2632ULL ] = 1 ;
t422 [ 2633ULL ] = ( int32_T ) ( X [ 20ULL ] != 0.0 ) ; t422 [ 2634ULL ] = (
int32_T ) ( X [ 20ULL ] != 0.0 ) ; t422 [ 2635ULL ] = 1 ; t422 [ 2636ULL ] =
1 ; t422 [ 2637ULL ] = 1 ; t422 [ 2638ULL ] = ( int32_T ) ( X [ 20ULL ] !=
0.0 ) ; t422 [ 2639ULL ] = ( int32_T ) ( X [ 20ULL ] != 0.0 ) ; t422 [
2640ULL ] = 1 ; t422 [ 2641ULL ] = 1 ; t422 [ 2642ULL ] = 1 ; t422 [ 2643ULL
] = 1 ; t422 [ 2644ULL ] = 1 ; t422 [ 2645ULL ] = 1 ; t422 [ 2646ULL ] = 1 ;
t422 [ 2647ULL ] = 1 ; t422 [ 2648ULL ] = 1 ; t422 [ 2649ULL ] = ( int32_T )
( X [ 153ULL ] != 0.0 ) ; t422 [ 2650ULL ] = ( int32_T ) ( X [ 153ULL ] !=
0.0 ) ; t422 [ 2651ULL ] = ( int32_T ) ( t878 != 0.0 ) ; t422 [ 2652ULL ] = 1
; t422 [ 2653ULL ] = 1 ; t422 [ 2654ULL ] = 1 ; t422 [ 2655ULL ] = ( int32_T
) ( X [ 24ULL ] != 0.0 ) ; t422 [ 2656ULL ] = ( int32_T ) ( X [ 24ULL ] !=
0.0 ) ; t422 [ 2657ULL ] = 1 ; t422 [ 2658ULL ] = 1 ; t422 [ 2659ULL ] = 1 ;
t422 [ 2660ULL ] = ( int32_T ) ( X [ 183ULL ] != 0.0 ) ; t422 [ 2661ULL ] = (
int32_T ) ( X [ 183ULL ] != 0.0 ) ; t422 [ 2662ULL ] = 1 ; t422 [ 2663ULL ] =
1 ; t422 [ 2664ULL ] = 1 ; t422 [ 2665ULL ] = ( int32_T ) ( X [ 188ULL ] !=
0.0 ) ; t422 [ 2666ULL ] = ( int32_T ) ( X [ 188ULL ] != 0.0 ) ; t422 [
2667ULL ] = 1 ; t422 [ 2668ULL ] = 1 ; t422 [ 2669ULL ] = 1 ; t422 [ 2670ULL
] = ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t422 [ 2671ULL ] = ( int32_T ) ( X [
28ULL ] != 0.0 ) ; t422 [ 2672ULL ] = 1 ; t422 [ 2673ULL ] = 1 ; t422 [
2674ULL ] = 1 ; t422 [ 2675ULL ] = ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t422
[ 2676ULL ] = ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t422 [ 2677ULL ] = 1 ;
t422 [ 2678ULL ] = 1 ; t422 [ 2679ULL ] = 1 ; t422 [ 2680ULL ] = 1 ; t422 [
2681ULL ] = 1 ; t422 [ 2682ULL ] = 1 ; t422 [ 2683ULL ] = 1 ; t422 [ 2684ULL
] = 1 ; t422 [ 2685ULL ] = 1 ; t422 [ 2686ULL ] = ( int32_T ) ( X [ 201ULL ]
!= 0.0 ) ; t422 [ 2687ULL ] = ( int32_T ) ( X [ 201ULL ] != 0.0 ) ; t422 [
2688ULL ] = ( int32_T ) ( t936 != 0.0 ) ; t422 [ 2689ULL ] = 1 ; t422 [
2690ULL ] = 1 ; t422 [ 2691ULL ] = 1 ; t422 [ 2692ULL ] = 1 ; t422 [ 2693ULL
] = 1 ; t422 [ 2694ULL ] = 1 ; t422 [ 2695ULL ] = ( int32_T ) ( X [ 31ULL ]
!= 0.0 ) ; t422 [ 2696ULL ] = ( int32_T ) ( X [ 31ULL ] != 0.0 ) ; t422 [
2697ULL ] = 1 ; t422 [ 2698ULL ] = 1 ; t422 [ 2699ULL ] = 1 ; t422 [ 2700ULL
] = ( int32_T ) ( X [ 31ULL ] != 0.0 ) ; t422 [ 2701ULL ] = ( int32_T ) ( X [
31ULL ] != 0.0 ) ; t422 [ 2702ULL ] = 1 ; t422 [ 2703ULL ] = 1 ; t422 [
2704ULL ] = 1 ; t422 [ 2705ULL ] = ( int32_T ) ( X [ 262ULL ] != 0.0 ) ; t422
[ 2706ULL ] = ( int32_T ) ( X [ 262ULL ] != 0.0 ) ; t422 [ 2707ULL ] = 1 ;
t422 [ 2708ULL ] = 1 ; t422 [ 2709ULL ] = 1 ; t422 [ 2710ULL ] = ( int32_T )
( X [ 265ULL ] != 0.0 ) ; t422 [ 2711ULL ] = ( int32_T ) ( X [ 265ULL ] !=
0.0 ) ; t422 [ 2712ULL ] = 1 ; t422 [ 2713ULL ] = 1 ; t422 [ 2714ULL ] = 1 ;
t422 [ 2715ULL ] = ( int32_T ) ( X [ 38ULL ] != 0.0 ) ; t422 [ 2716ULL ] = (
int32_T ) ( X [ 38ULL ] != 0.0 ) ; t422 [ 2717ULL ] = 1 ; t422 [ 2718ULL ] =
1 ; t422 [ 2719ULL ] = 1 ; t422 [ 2720ULL ] = ( int32_T ) ( X [ 38ULL ] !=
0.0 ) ; t422 [ 2721ULL ] = ( int32_T ) ( X [ 38ULL ] != 0.0 ) ; t422 [
2722ULL ] = 1 ; t422 [ 2723ULL ] = 1 ; t422 [ 2724ULL ] = 1 ; t422 [ 2725ULL
] = ( int32_T ) ( X [ 276ULL ] != 0.0 ) ; t422 [ 2726ULL ] = ( int32_T ) ( X
[ 276ULL ] != 0.0 ) ; t422 [ 2727ULL ] = 1 ; t422 [ 2728ULL ] = 1 ; t422 [
2729ULL ] = 1 ; t422 [ 2730ULL ] = ( int32_T ) ( X [ 279ULL ] != 0.0 ) ; t422
[ 2731ULL ] = ( int32_T ) ( X [ 279ULL ] != 0.0 ) ; t422 [ 2732ULL ] = 1 ;
t422 [ 2733ULL ] = 1 ; t422 [ 2734ULL ] = 1 ; t422 [ 2735ULL ] = ( int32_T )
( X [ 39ULL ] != 0.0 ) ; t422 [ 2736ULL ] = ( int32_T ) ( X [ 39ULL ] != 0.0
) ; t422 [ 2737ULL ] = 1 ; t422 [ 2738ULL ] = 1 ; t422 [ 2739ULL ] = 1 ; t422
[ 2740ULL ] = ( int32_T ) ( X [ 39ULL ] != 0.0 ) ; t422 [ 2741ULL ] = (
int32_T ) ( X [ 39ULL ] != 0.0 ) ; t422 [ 2742ULL ] = 1 ; t422 [ 2743ULL ] =
1 ; t422 [ 2744ULL ] = 1 ; t422 [ 2745ULL ] = ( int32_T ) ( X [ 290ULL ] !=
0.0 ) ; t422 [ 2746ULL ] = ( int32_T ) ( X [ 290ULL ] != 0.0 ) ; t422 [
2747ULL ] = 1 ; t422 [ 2748ULL ] = 1 ; t422 [ 2749ULL ] = 1 ; t422 [ 2750ULL
] = ( int32_T ) ( X [ 292ULL ] != 0.0 ) ; t422 [ 2751ULL ] = ( int32_T ) ( X
[ 292ULL ] != 0.0 ) ; t422 [ 2752ULL ] = 1 ; t422 [ 2753ULL ] = 1 ; t422 [
2754ULL ] = 1 ; t422 [ 2755ULL ] = ( int32_T ) ( X [ 40ULL ] != 0.0 ) ; t422
[ 2756ULL ] = ( int32_T ) ( X [ 40ULL ] != 0.0 ) ; t422 [ 2757ULL ] = 1 ;
t422 [ 2758ULL ] = 1 ; t422 [ 2759ULL ] = 1 ; t422 [ 2760ULL ] = ( int32_T )
( X [ 40ULL ] != 0.0 ) ; t422 [ 2761ULL ] = ( int32_T ) ( X [ 40ULL ] != 0.0
) ; t422 [ 2762ULL ] = 1 ; t422 [ 2763ULL ] = 1 ; t422 [ 2764ULL ] = 1 ; t422
[ 2765ULL ] = ( int32_T ) ( X [ 311ULL ] != 0.0 ) ; t422 [ 2766ULL ] = (
int32_T ) ( X [ 311ULL ] != 0.0 ) ; t422 [ 2767ULL ] = 1 ; t422 [ 2768ULL ] =
1 ; t422 [ 2769ULL ] = 1 ; t422 [ 2770ULL ] = ( int32_T ) ( X [ 314ULL ] !=
0.0 ) ; t422 [ 2771ULL ] = ( int32_T ) ( X [ 314ULL ] != 0.0 ) ; t422 [
2772ULL ] = 1 ; t422 [ 2773ULL ] = 1 ; t422 [ 2774ULL ] = 1 ; t422 [ 2775ULL
] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t422 [ 2776ULL ] = ( int32_T ) ( X [
44ULL ] != 0.0 ) ; t422 [ 2777ULL ] = 1 ; t422 [ 2778ULL ] = 1 ; t422 [
2779ULL ] = 1 ; t422 [ 2780ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t422
[ 2781ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t422 [ 2782ULL ] = 1 ;
t422 [ 2783ULL ] = 1 ; t422 [ 2784ULL ] = 1 ; t422 [ 2785ULL ] = 1 ; t422 [
2786ULL ] = 1 ; t422 [ 2787ULL ] = 1 ; t422 [ 2788ULL ] = ( int32_T ) ( X [
349ULL ] != 0.0 ) ; t422 [ 2789ULL ] = ( int32_T ) ( X [ 349ULL ] != 0.0 ) ;
t422 [ 2790ULL ] = 1 ; t422 [ 2791ULL ] = 1 ; t422 [ 2792ULL ] = 1 ; t422 [
2793ULL ] = ( int32_T ) ( X [ 353ULL ] != 0.0 ) ; t422 [ 2794ULL ] = (
int32_T ) ( X [ 353ULL ] != 0.0 ) ; t422 [ 2795ULL ] = 1 ; t422 [ 2796ULL ] =
1 ; t422 [ 2797ULL ] = 1 ; t422 [ 2798ULL ] = ( int32_T ) ( X [ 46ULL ] !=
0.0 ) ; t422 [ 2799ULL ] = ( int32_T ) ( X [ 46ULL ] != 0.0 ) ; t422 [
2800ULL ] = 1 ; t422 [ 2801ULL ] = 1 ; t422 [ 2802ULL ] = 1 ; t422 [ 2803ULL
] = ( int32_T ) ( X [ 46ULL ] != 0.0 ) ; t422 [ 2804ULL ] = ( int32_T ) ( X [
46ULL ] != 0.0 ) ; t422 [ 2805ULL ] = 1 ; t422 [ 2806ULL ] = 1 ; t422 [
2807ULL ] = 1 ; t422 [ 2808ULL ] = 1 ; t422 [ 2809ULL ] = 1 ; t422 [ 2810ULL
] = 1 ; t422 [ 2811ULL ] = 1 ; t422 [ 2812ULL ] = 1 ; t422 [ 2813ULL ] = 1 ;
t422 [ 2814ULL ] = ( int32_T ) ( X [ 366ULL ] != 0.0 ) ; t422 [ 2815ULL ] = (
int32_T ) ( X [ 366ULL ] != 0.0 ) ; t422 [ 2816ULL ] = ( int32_T ) (
intrm_sf_mf_1151 != 0.0 ) ; t422 [ 2817ULL ] = 1 ; t422 [ 2818ULL ] = 1 ;
t422 [ 2819ULL ] = 1 ; t422 [ 2820ULL ] = ( int32_T ) ( X [ 373ULL ] != 0.0 )
; t422 [ 2821ULL ] = ( int32_T ) ( X [ 373ULL ] != 0.0 ) ; t422 [ 2822ULL ] =
1 ; t422 [ 2823ULL ] = 1 ; t422 [ 2824ULL ] = 1 ; t422 [ 2825ULL ] = (
int32_T ) ( X [ 376ULL ] != 0.0 ) ; t422 [ 2826ULL ] = ( int32_T ) ( X [
376ULL ] != 0.0 ) ; t422 [ 2827ULL ] = 1 ; t422 [ 2828ULL ] = 1 ; t422 [
2829ULL ] = 1 ; t422 [ 2830ULL ] = ( int32_T ) ( X [ 49ULL ] != 0.0 ) ; t422
[ 2831ULL ] = ( int32_T ) ( X [ 49ULL ] != 0.0 ) ; t422 [ 2832ULL ] = 1 ;
t422 [ 2833ULL ] = 1 ; t422 [ 2834ULL ] = 1 ; t422 [ 2835ULL ] = ( int32_T )
( X [ 49ULL ] != 0.0 ) ; t422 [ 2836ULL ] = ( int32_T ) ( X [ 49ULL ] != 0.0
) ; t422 [ 2837ULL ] = 1 ; t422 [ 2838ULL ] = 1 ; t422 [ 2839ULL ] = 1 ; t422
[ 2840ULL ] = ( int32_T ) ( X [ 387ULL ] != 0.0 ) ; t422 [ 2841ULL ] = (
int32_T ) ( X [ 387ULL ] != 0.0 ) ; t422 [ 2842ULL ] = 1 ; t422 [ 2843ULL ] =
1 ; t422 [ 2844ULL ] = 1 ; t422 [ 2845ULL ] = ( int32_T ) ( X [ 389ULL ] !=
0.0 ) ; t422 [ 2846ULL ] = ( int32_T ) ( X [ 389ULL ] != 0.0 ) ; t422 [
2847ULL ] = 1 ; t422 [ 2848ULL ] = 1 ; t422 [ 2849ULL ] = 1 ; t422 [ 2850ULL
] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t422 [ 2851ULL ] = ( int32_T ) ( X [
50ULL ] != 0.0 ) ; t422 [ 2852ULL ] = 1 ; t422 [ 2853ULL ] = 1 ; t422 [
2854ULL ] = 1 ; t422 [ 2855ULL ] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t422
[ 2856ULL ] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t422 [ 2857ULL ] = 1 ;
t422 [ 2858ULL ] = 1 ; t422 [ 2859ULL ] = 1 ; t422 [ 2860ULL ] = ( int32_T )
( X [ 58ULL ] != 0.0 ) ; for ( b = 0 ; b < 2861 ; b ++ ) { out . mX [ b ] =
t422 [ b ] ; } ( void ) LC ; ( void ) t2185 ; return 0 ; }
