#include "ne_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_sys_struct.h"
#include "FCElectricPlant_f9151c4e_1_ds_assert.h"
#include "FCElectricPlant_f9151c4e_1_ds.h"
#include "FCElectricPlant_f9151c4e_1_ds_externals.h"
#include "FCElectricPlant_f9151c4e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T FCElectricPlant_f9151c4e_1_ds_assert ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t2028 , NeDsMethodOutput * t2029 ) { ETTS0
ab_efOut ; ETTS0 af_efOut ; ETTS0 c_efOut ; ETTS0 cb_efOut ; ETTS0 cc_efOut ;
ETTS0 cd_efOut ; ETTS0 ce_efOut ; ETTS0 cg_efOut ; ETTS0 eb_efOut ; ETTS0
ec_efOut ; ETTS0 efOut ; ETTS0 ef_efOut ; ETTS0 g_efOut ; ETTS0 gd_efOut ;
ETTS0 ge_efOut ; ETTS0 gf_efOut ; ETTS0 hg_efOut ; ETTS0 i_efOut ; ETTS0
ib_efOut ; ETTS0 ic_efOut ; ETTS0 ie_efOut ; ETTS0 kb_efOut ; ETTS0 kc_efOut
; ETTS0 ld_efOut ; ETTS0 og_efOut ; ETTS0 qf_efOut ; ETTS0 s_efOut ; ETTS0
sd_efOut ; ETTS0 se_efOut ; ETTS0 sg_efOut ; ETTS0 t42 ; ETTS0 t47 ; ETTS0
t49 ; ETTS0 t57 ; ETTS0 t59 ; ETTS0 ub_efOut ; ETTS0 uc_efOut ; ETTS0
wd_efOut ; ETTS0 xf_efOut ; PmIntVector out ; real_T X [ 440 ] ; real_T
ac_efOut [ 1 ] ; real_T ad_efOut [ 1 ] ; real_T ae_efOut [ 1 ] ; real_T
ag_efOut [ 1 ] ; real_T b_efOut [ 1 ] ; real_T bb_efOut [ 1 ] ; real_T
bc_efOut [ 1 ] ; real_T bd_efOut [ 1 ] ; real_T be_efOut [ 1 ] ; real_T
bf_efOut [ 1 ] ; real_T bg_efOut [ 1 ] ; real_T cf_efOut [ 1 ] ; real_T
d_efOut [ 1 ] ; real_T db_efOut [ 1 ] ; real_T dc_efOut [ 1 ] ; real_T
dd_efOut [ 1 ] ; real_T de_efOut [ 1 ] ; real_T df_efOut [ 1 ] ; real_T
dg_efOut [ 1 ] ; real_T e_efOut [ 1 ] ; real_T ed_efOut [ 1 ] ; real_T
ee_efOut [ 1 ] ; real_T eg_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
fb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ; real_T fd_efOut [ 1 ] ; real_T
fe_efOut [ 1 ] ; real_T ff_efOut [ 1 ] ; real_T fg_efOut [ 1 ] ; real_T
gb_efOut [ 1 ] ; real_T gc_efOut [ 1 ] ; real_T gg_efOut [ 1 ] ; real_T
h_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T hc_efOut [ 1 ] ; real_T
hd_efOut [ 1 ] ; real_T he_efOut [ 1 ] ; real_T hf_efOut [ 1 ] ; real_T
id_efOut [ 1 ] ; real_T if_efOut [ 1 ] ; real_T ig_efOut [ 1 ] ; real_T
j_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T jc_efOut [ 1 ] ; real_T
jd_efOut [ 1 ] ; real_T je_efOut [ 1 ] ; real_T jf_efOut [ 1 ] ; real_T
jg_efOut [ 1 ] ; real_T k_efOut [ 1 ] ; real_T kd_efOut [ 1 ] ; real_T
ke_efOut [ 1 ] ; real_T kf_efOut [ 1 ] ; real_T kg_efOut [ 1 ] ; real_T
l_efOut [ 1 ] ; real_T lb_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T
le_efOut [ 1 ] ; real_T lf_efOut [ 1 ] ; real_T lg_efOut [ 1 ] ; real_T
m_efOut [ 1 ] ; real_T mb_efOut [ 1 ] ; real_T mc_efOut [ 1 ] ; real_T
md_efOut [ 1 ] ; real_T me_efOut [ 1 ] ; real_T mf_efOut [ 1 ] ; real_T
mg_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T nb_efOut [ 1 ] ; real_T
nc_efOut [ 1 ] ; real_T nd_efOut [ 1 ] ; real_T ne_efOut [ 1 ] ; real_T
nf_efOut [ 1 ] ; real_T ng_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T
ob_efOut [ 1 ] ; real_T oc_efOut [ 1 ] ; real_T od_efOut [ 1 ] ; real_T
oe_efOut [ 1 ] ; real_T of_efOut [ 1 ] ; real_T p_efOut [ 1 ] ; real_T
pb_efOut [ 1 ] ; real_T pc_efOut [ 1 ] ; real_T pd_efOut [ 1 ] ; real_T
pe_efOut [ 1 ] ; real_T pf_efOut [ 1 ] ; real_T pg_efOut [ 1 ] ; real_T
q_efOut [ 1 ] ; real_T qb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T
qd_efOut [ 1 ] ; real_T qe_efOut [ 1 ] ; real_T qg_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T rb_efOut [ 1 ] ; real_T rc_efOut [ 1 ] ; real_T
rd_efOut [ 1 ] ; real_T re_efOut [ 1 ] ; real_T rf_efOut [ 1 ] ; real_T
rg_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T sc_efOut [ 1 ] ; real_T
sf_efOut [ 1 ] ; real_T t447 [ 1 ] ; real_T t449 [ 1 ] ; real_T t450 [ 1 ] ;
real_T t451 [ 1 ] ; real_T t452 [ 1 ] ; real_T t454 [ 1 ] ; real_T t455 [ 1 ]
; real_T t570 [ 1 ] ; real_T t66 [ 1 ] ; real_T t71 [ 1 ] ; real_T t85 [ 1 ]
; real_T t_efOut [ 1 ] ; real_T tb_efOut [ 1 ] ; real_T tc_efOut [ 1 ] ;
real_T td_efOut [ 1 ] ; real_T te_efOut [ 1 ] ; real_T tf_efOut [ 1 ] ;
real_T tg_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T ud_efOut [ 1 ] ; real_T
ue_efOut [ 1 ] ; real_T uf_efOut [ 1 ] ; real_T ug_efOut [ 1 ] ; real_T
v_efOut [ 1 ] ; real_T vb_efOut [ 1 ] ; real_T vc_efOut [ 1 ] ; real_T
vd_efOut [ 1 ] ; real_T ve_efOut [ 1 ] ; real_T vf_efOut [ 1 ] ; real_T
vg_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T wb_efOut [ 1 ] ; real_T
wc_efOut [ 1 ] ; real_T we_efOut [ 1 ] ; real_T wf_efOut [ 1 ] ; real_T
wg_efOut [ 1 ] ; real_T x_efOut [ 1 ] ; real_T xb_efOut [ 1 ] ; real_T
xc_efOut [ 1 ] ; real_T xd_efOut [ 1 ] ; real_T xe_efOut [ 1 ] ; real_T
y_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ; real_T yc_efOut [ 1 ] ; real_T
yd_efOut [ 1 ] ; real_T ye_efOut [ 1 ] ; real_T yf_efOut [ 1 ] ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_x_w ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Dp_AI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked ; real_T
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ; real_T
U_idx_1 ; real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_5
; real_T U_idx_7 ; real_T U_idx_9 ; real_T intrm_sf_mf_105 ; real_T
intrm_sf_mf_1052 ; real_T intrm_sf_mf_1176 ; real_T intrm_sf_mf_1208 ; real_T
intrm_sf_mf_1259 ; real_T intrm_sf_mf_1278 ; real_T intrm_sf_mf_1297 ; real_T
intrm_sf_mf_1352 ; real_T intrm_sf_mf_1383 ; real_T intrm_sf_mf_1449 ; real_T
intrm_sf_mf_1520 ; real_T intrm_sf_mf_354 ; real_T intrm_sf_mf_362 ; real_T
intrm_sf_mf_386 ; real_T intrm_sf_mf_437 ; real_T intrm_sf_mf_456 ; real_T
intrm_sf_mf_535 ; real_T intrm_sf_mf_537 ; real_T intrm_sf_mf_58 ; real_T
intrm_sf_mf_616 ; real_T intrm_sf_mf_64 ; real_T intrm_sf_mf_640 ; real_T
intrm_sf_mf_698 ; real_T intrm_sf_mf_729 ; real_T intrm_sf_mf_753 ; real_T
intrm_sf_mf_80 ; real_T intrm_sf_mf_835 ; real_T intrm_sf_mf_889 ; real_T
intrm_sf_mf_915 ; real_T t1000 ; real_T t1005 ; real_T t1008 ; real_T t1011 ;
real_T t1013 ; real_T t1015 ; real_T t1016 ; real_T t1019 ; real_T t1024 ;
real_T t1025 ; real_T t1026 ; real_T t1029 ; real_T t1030 ; real_T t1031 ;
real_T t1032 ; real_T t1033 ; real_T t1035 ; real_T t1037 ; real_T t1038 ;
real_T t1039 ; real_T t1040 ; real_T t1042 ; real_T t1043 ; real_T t1044 ;
real_T t1045 ; real_T t1047 ; real_T t1048 ; real_T t1049 ; real_T t1050 ;
real_T t1052 ; real_T t1053 ; real_T t1054 ; real_T t1055 ; real_T t1056 ;
real_T t1058 ; real_T t1060 ; real_T t1061 ; real_T t1062 ; real_T t1064 ;
real_T t1066 ; real_T t1067 ; real_T t1069 ; real_T t1070 ; real_T t1073 ;
real_T t1074 ; real_T t1077 ; real_T t1078 ; real_T t1079 ; real_T t1080 ;
real_T t1081 ; real_T t1086 ; real_T t1091 ; real_T t1092 ; real_T t1093 ;
real_T t1095 ; real_T t1096 ; real_T t1098 ; real_T t1099 ; real_T t1100 ;
real_T t1101 ; real_T t1102 ; real_T t1103 ; real_T t1105 ; real_T t1109 ;
real_T t1110 ; real_T t1112 ; real_T t1113 ; real_T t1115 ; real_T t1122 ;
real_T t1123 ; real_T t1124 ; real_T t1126 ; real_T t1127 ; real_T t1128 ;
real_T t1129 ; real_T t1130 ; real_T t1132 ; real_T t1133 ; real_T t1134 ;
real_T t1135 ; real_T t1136 ; real_T t1137 ; real_T t1139 ; real_T t1141 ;
real_T t1142 ; real_T t1143 ; real_T t1144 ; real_T t1145 ; real_T t1147 ;
real_T t1148 ; real_T t1150 ; real_T t1151 ; real_T t1153 ; real_T t1154 ;
real_T t1157 ; real_T t1158 ; real_T t1159 ; real_T t1160 ; real_T t1163 ;
real_T t1164 ; real_T t1165 ; real_T t1166 ; real_T t1168 ; real_T t1169 ;
real_T t1170 ; real_T t1171 ; real_T t1174 ; real_T t1175 ; real_T t1176 ;
real_T t1177 ; real_T t1179 ; real_T t1180 ; real_T t1183 ; real_T t1184 ;
real_T t1186 ; real_T t1187 ; real_T t1188 ; real_T t1189 ; real_T t1193 ;
real_T t1194 ; real_T t1195 ; real_T t1196 ; real_T t1197 ; real_T t1201 ;
real_T t1203 ; real_T t1206 ; real_T t1207 ; real_T t1208 ; real_T t1209 ;
real_T t1210 ; real_T t1211 ; real_T t1212 ; real_T t1213 ; real_T t1215 ;
real_T t1217 ; real_T t1218 ; real_T t1219 ; real_T t1220 ; real_T t1221 ;
real_T t1224 ; real_T t1226 ; real_T t1227 ; real_T t1228 ; real_T t1231 ;
real_T t1232 ; real_T t1233 ; real_T t1235 ; real_T t1236 ; real_T t1237 ;
real_T t1238 ; real_T t1240 ; real_T t1241 ; real_T t1242 ; real_T t1244 ;
real_T t1245 ; real_T t1250 ; real_T t1251 ; real_T t1256 ; real_T t1257 ;
real_T t1258 ; real_T t1259 ; real_T t1262 ; real_T t1264 ; real_T t1266 ;
real_T t1267 ; real_T t1268 ; real_T t1269 ; real_T t1270 ; real_T t1271 ;
real_T t1276 ; real_T t1277 ; real_T t1278 ; real_T t1279 ; real_T t1281 ;
real_T t1285 ; real_T t1286 ; real_T t1288 ; real_T t1289 ; real_T t1290 ;
real_T t1292 ; real_T t1293 ; real_T t1294 ; real_T t1295 ; real_T t1296 ;
real_T t1297 ; real_T t1298 ; real_T t1299 ; real_T t1300 ; real_T t1301 ;
real_T t1303 ; real_T t1305 ; real_T t1306 ; real_T t1307 ; real_T t1308 ;
real_T t1310 ; real_T t1313 ; real_T t1314 ; real_T t1315 ; real_T t1316 ;
real_T t1317 ; real_T t1318 ; real_T t1321 ; real_T t1322 ; real_T t1324 ;
real_T t1325 ; real_T t1326 ; real_T t1328 ; real_T t1329 ; real_T t1330 ;
real_T t1331 ; real_T t1332 ; real_T t1333 ; real_T t1335 ; real_T t1336 ;
real_T t1337 ; real_T t1338 ; real_T t1341 ; real_T t1342 ; real_T t1344 ;
real_T t1346 ; real_T t1349 ; real_T t1358 ; real_T t1376 ; real_T t1379 ;
real_T t1385 ; real_T t1397 ; real_T t1400 ; real_T t1406 ; real_T t1422 ;
real_T t1442 ; real_T t1460 ; real_T t1461 ; real_T t1469 ; real_T t1481 ;
real_T t1484 ; real_T t1489 ; real_T t1512 ; real_T t1520 ; real_T t1541 ;
real_T t1557 ; real_T t1560 ; real_T t1566 ; real_T t1577 ; real_T t1581 ;
real_T t1586 ; real_T t1602 ; real_T t1623 ; real_T t1639 ; real_T t1642 ;
real_T t1647 ; real_T t1658 ; real_T t1661 ; real_T t1667 ; real_T t2013 ;
real_T t2027 ; real_T t40_idx_0 ; real_T t453_idx_0 ; real_T t45_idx_0 ;
real_T t569_idx_0 ; real_T t571_idx_0 ; real_T t572_idx_0 ; real_T t772 ;
real_T t779 ; real_T t780 ; real_T t787 ; real_T t788 ; real_T t792 ; real_T
t795 ; real_T t796 ; real_T t800 ; real_T t804 ; real_T t824 ; real_T t830 ;
real_T t833 ; real_T t842 ; real_T t854 ; real_T t863 ; real_T t867 ; real_T
t868 ; real_T t869 ; real_T t870 ; real_T t871 ; real_T t872 ; real_T t873 ;
real_T t874 ; real_T t875 ; real_T t876 ; real_T t877 ; real_T t879 ; real_T
t882 ; real_T t883 ; real_T t885 ; real_T t886 ; real_T t888 ; real_T t889 ;
real_T t890 ; real_T t891 ; real_T t893 ; real_T t894 ; real_T t895 ; real_T
t899 ; real_T t900 ; real_T t901 ; real_T t902 ; real_T t910 ; real_T t912 ;
real_T t913 ; real_T t914 ; real_T t916 ; real_T t917 ; real_T t918 ; real_T
t919 ; real_T t920 ; real_T t921 ; real_T t923 ; real_T t924 ; real_T t925 ;
real_T t926 ; real_T t927 ; real_T t928 ; real_T t929 ; real_T t931 ; real_T
t933 ; real_T t934 ; real_T t935 ; real_T t936 ; real_T t937 ; real_T t938 ;
real_T t940 ; real_T t941 ; real_T t942 ; real_T t943 ; real_T t944 ; real_T
t945 ; real_T t947 ; real_T t948 ; real_T t949 ; real_T t950 ; real_T t952 ;
real_T t953 ; real_T t954 ; real_T t955 ; real_T t958 ; real_T t959 ; real_T
t960 ; real_T t961 ; real_T t964 ; real_T t967 ; real_T t969 ; real_T t970 ;
real_T t971 ; real_T t973 ; real_T t976 ; real_T t977 ; real_T t979 ; real_T
t981 ; real_T t982 ; real_T t983 ; real_T t985 ; real_T t988 ; real_T t989 ;
real_T t992 ; real_T t994 ; real_T t995 ; real_T t998 ; real_T t999 ; size_t
t67 [ 1 ] ; size_t t68 [ 1 ] ; int32_T t446 [ 2857 ] ; int32_T M [ 231 ] ;
int32_T b ; boolean_T intrm_sf_mf_1575 ; boolean_T t60 ; boolean_T t61 ;
boolean_T t62 ; boolean_T t63 ; boolean_T t64 ; boolean_T t65 ; for ( b = 0 ;
b < 231 ; b ++ ) { M [ b ] = t2028 -> mM . mX [ b ] ; } U_idx_1 = t2028 -> mU
. mX [ 1 ] ; U_idx_2 = t2028 -> mU . mX [ 2 ] ; U_idx_3 = t2028 -> mU . mX [
3 ] ; U_idx_5 = t2028 -> mU . mX [ 5 ] ; U_idx_7 = t2028 -> mU . mX [ 7 ] ;
U_idx_9 = t2028 -> mU . mX [ 9 ] ; U_idx_10 = t2028 -> mU . mX [ 10 ] ; for (
b = 0 ; b < 440 ; b ++ ) { X [ b ] = t2028 -> mX . mX [ b ] ; } out = t2029
-> mASSERT ; t2013 = X [ 0ULL ] * 9.2592592592592591E-6 ; if ( X [ 96ULL ] <
0.0 ) { t2027 = X [ 96ULL ] * 17.81 + 0.043 ; } else if ( X [ 96ULL ] <= 1.0
) { t2027 = ( ( X [ 96ULL ] * 17.81 + 0.043 ) - X [ 96ULL ] * X [ 96ULL ] *
39.85 ) + X [ 96ULL ] * X [ 96ULL ] * X [ 96ULL ] * 36.0 ; } else { t2027 = (
X [ 96ULL ] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 97ULL ] < 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = X [ 97ULL ]
* 17.81 + 0.043 ; } else if ( X [ 97ULL ] <= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = ( ( X [
97ULL ] * 17.81 + 0.043 ) - X [ 97ULL ] * X [ 97ULL ] * 39.85 ) + X [ 97ULL ]
* X [ 97ULL ] * X [ 97ULL ] * 36.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = ( X [ 97ULL
] - 1.0 ) * 1.4 + 14.003 ; } if ( X [ 66ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = - X [ 66ULL
] / 0.028 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 = 0.0 ; }
t772 = ( X [ 78ULL ] + X [ 83ULL ] ) / 2.0 ; t780 = ( X [ 88ULL ] + X [ 93ULL
] ) / 2.0 ; t66 [ 0 ] = 323.15 ; t67 [ 0 ] = 52ULL ; t68 [ 0 ] = 1ULL ;
tlu2_linear_linear_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut . mField1
[ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField2 , & t66 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59 = efOut ;
tlu2_1d_linear_linear_value ( & b_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ] ,
& t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t45_idx_0 = b_efOut [ 0 ] ; t788 = pmf_exp
( pmf_log ( t772 ) - t45_idx_0 ) ; t796 = pmf_exp ( pmf_log ( t780 ) -
t45_idx_0 ) ; t2027 = ( t2027 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ) / 2.0 ; if (
t2027 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = t2027 *
0.005139 - 0.00326 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 =
0.0018790000000000005 ; } t2027 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 *
1.2954698564516058 ; t792 = t796 * ( ( X [ 87ULL ] + X [ 92ULL ] ) / 2.0 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = t792 >=
1.0E-9 ? t792 : 1.0E-6 ; t792 = t772 * ( ( X [ 76ULL ] + X [ 81ULL ] ) / 2.0
) / 1.01325 ; if ( t792 * 1.0E-5 >= 1.0E-9 ) { t779 = t792 * 1.0E-5 ; } else
{ t779 = 1.0E-6 ; } t792 = t780 * ( ( X [ 86ULL ] + X [ 91ULL ] ) / 2.0 ) /
1.01325 ; if ( t792 * 1.0E-5 >= 1.0E-9 ) { t787 = t792 * 1.0E-5 ; } else {
t787 = 1.0E-6 ; } if ( X [ 131ULL ] <= 0.0 ) { t792 = 0.0 ; } else { t792 = X
[ 131ULL ] >= 1.0 ? 1.0 : X [ 131ULL ] ; } if ( X [ 132ULL ] <= 0.0 ) { t795
= 0.0 ; } else { t795 = X [ 132ULL ] >= 1.0 ? 1.0 : X [ 132ULL ] ; } t800 = (
( ( 1.0 - t792 ) - t795 ) * 296.802103844292 + t792 * 461.523 ) + t795 *
4124.48151675695 ; t792 = - X [ 138ULL ] + U_idx_2 * - 0.01 ; if ( X [ 21ULL
] <= 0.0 ) { t795 = 0.0 ; } else { t795 = X [ 21ULL ] >= 1.0 ? 1.0 : X [
21ULL ] ; } if ( X [ 22ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = X [
22ULL ] >= 1.0 ? 1.0 : X [ 22ULL ] ; } t867 = ( ( ( 1.0 - t795 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ) *
296.802103844292 + t795 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok *
4124.48151675695 ; t868 = ( X [ 19ULL ] / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X
[ 20ULL ] ) - X [ 139ULL ] / ( X [ 140ULL ] == 0.0 ? 1.0E-16 : X [ 140ULL ] )
) * t792 * t867 / 7.8539816339744827E-5 ; if ( X [ 139ULL ] <=
216.59999999999997 ) { t869 = 216.59999999999997 ; } else { t869 = X [ 139ULL
] >= 623.15 ? 623.15 : X [ 139ULL ] ; } t871 = t869 * t869 ; t870 = ( ( (
1074.1165326382541 + t869 * - 0.2214565261064077 ) + t871 *
0.00037212980109010952 ) * ( ( 1.0 - t795 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t871 * -
0.00038614513167842338 ) * t795 ) + ( ( 12825.281119790017 + t869 *
6.9647057412830984 ) + t871 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ; t869 = t870
- t867 ; t871 = t870 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ; t872 = pmf_sqrt (
t868 * t868 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] * t871 * t867 ) *
1.0E-9 ) ; if ( X [ 141ULL ] <= 0.0 ) { t873 = 0.0 ; } else { t873 = X [
141ULL ] >= 1.0 ? 1.0 : X [ 141ULL ] ; } if ( X [ 142ULL ] <= 0.0 ) { t874 =
0.0 ; } else { t874 = X [ 142ULL ] >= 1.0 ? 1.0 : X [ 142ULL ] ; } t71 [ 0ULL
] = X [ 19ULL ] ; tlu2_linear_nearest_prelookup ( & c_efOut . mField0 [ 0ULL
] , & c_efOut . mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t71 [ 0ULL ] , & t67 [ 0ULL ] ,
& t68 [ 0ULL ] ) ; t42 = c_efOut ; tlu2_1d_linear_nearest_value ( & d_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t447 [ 0 ] = d_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & e_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t85 [ 0 ] = e_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & f_efOut [ 0ULL
] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t449 [ 0 ] = f_efOut [ 0 ] ; t875 = ( ( ( 1.0 - t873 ) - t874 ) * t447 [
0ULL ] + t85 [ 0ULL ] * t873 ) + t449 [ 0ULL ] * t874 ; t882 = X [ 140ULL ] *
X [ 140ULL ] * t871 ; t879 = - pmf_sqrt ( fabs ( t882 / ( t867 == 0.0 ?
1.0E-16 : t867 ) / ( X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t879 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = t879 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = - t879 *
100000.0 ; } t886 = t875 * 7.8539816339744827E-5 ; t869 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 * 0.01 / (
t886 == 0.0 ? 1.0E-16 : t886 ) ; t888 = X [ 19ULL ] * t867 ; t883 = X [ 20ULL
] / ( t888 == 0.0 ? 1.0E-16 : t888 ) ; t890 = t883 * 1.5707963267948965E-8 ;
t885 = t879 * t875 * 35.2 / ( t890 == 0.0 ? 1.0E-16 : t890 ) ; t888 = t869 >=
1.0 ? t869 : 1.0 ; t891 = pmf_log10 ( 6.9 / ( t888 == 0.0 ? 1.0E-16 : t888 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t888 == 0.0 ? 1.0E-16 : t888
) + 0.00017169489553429715 ) * 3.24 ; t893 = t883 * 1.2337005501361697E-10 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = t879 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 * ( 1.0 / (
t891 == 0.0 ? 1.0E-16 : t891 ) ) * 0.55 / ( t893 == 0.0 ? 1.0E-16 : t893 ) ;
t889 = ( t869 - 2000.0 ) / 2000.0 ; t891 = t889 * t889 * 3.0 - t889 * t889 *
t889 * 2.0 ; if ( t869 <= 2000.0 ) { t889 = t885 * 1.0E-5 ; } else if ( t869
>= 4000.0 ) { t889 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 * 1.0E-5 ; }
else { t889 = ( ( 1.0 - t891 ) * t885 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 * t891 ) *
1.0E-5 ; } t872 = t792 * t872 / 7.8539816339744827E-5 *
0.00031622776601683789 + t889 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = - ( ( X [
19ULL ] / ( X [ 20ULL ] == 0.0 ? 1.0E-16 : X [ 20ULL ] ) - X [ 143ULL ] / ( X
[ 144ULL ] == 0.0 ? 1.0E-16 : X [ 144ULL ] ) ) * X [ 126ULL ] * t867 ) /
7.8539816339744827E-5 ; if ( X [ 143ULL ] <= 216.59999999999997 ) { t869 =
216.59999999999997 ; } else { t869 = X [ 143ULL ] >= 623.15 ? 623.15 : X [
143ULL ] ; } t876 = t869 * t869 ; t885 = ( ( ( 1074.1165326382541 + t869 * -
0.2214565261064077 ) + t876 * 0.00037212980109010952 ) * ( ( 1.0 - t795 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t876 * -
0.00038614513167842338 ) * t795 ) + ( ( 12825.281119790017 + t869 *
6.9647057412830984 ) + t876 * - 0.007052486824683288 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok ; t901 = t885
- t867 ; t795 = t885 / ( t901 == 0.0 ? 1.0E-16 : t901 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 ) ; t902
= X [ 144ULL ] * X [ 144ULL ] * t795 ; t889 = - pmf_sqrt ( fabs ( t902 / (
t867 == 0.0 ? 1.0E-16 : t867 ) / ( X [ 143ULL ] == 0.0 ? 1.0E-16 : X [ 143ULL
] ) ) ) * 7.8539816339744827E-5 ; if ( t889 >= 0.0 ) { t891 = t889 * 100000.0
; } else { t891 = - t889 * 100000.0 ; } t876 = t891 * 0.01 / ( t886 == 0.0 ?
1.0E-16 : t886 ) ; t877 = t889 * t875 * 35.2 / ( t890 == 0.0 ? 1.0E-16 : t890
) ; t890 = t876 >= 1.0 ? t876 : 1.0 ; intrm_sf_mf_64 = pmf_log10 ( 6.9 / (
t890 == 0.0 ? 1.0E-16 : t890 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 /
( t890 == 0.0 ? 1.0E-16 : t890 ) + 0.00017169489553429715 ) * 3.24 ; t891 =
t889 * t891 * ( 1.0 / ( intrm_sf_mf_64 == 0.0 ? 1.0E-16 : intrm_sf_mf_64 ) )
* 0.55 / ( t893 == 0.0 ? 1.0E-16 : t893 ) ; intrm_sf_mf_58 = ( t876 - 2000.0
) / 2000.0 ; t893 = intrm_sf_mf_58 * intrm_sf_mf_58 * 3.0 - intrm_sf_mf_58 *
intrm_sf_mf_58 * intrm_sf_mf_58 * 2.0 ; if ( t876 <= 2000.0 ) {
intrm_sf_mf_58 = t877 * 1.0E-5 ; } else if ( t876 >= 4000.0 ) {
intrm_sf_mf_58 = t891 * 1.0E-5 ; } else { intrm_sf_mf_58 = ( ( 1.0 - t893 ) *
t877 + t891 * t893 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok = - ( X [
126ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok )
/ 7.8539816339744827E-5 * 0.00031622776601683789 + intrm_sf_mf_58 ; if ( 1.0
- X [ 21ULL ] >= 0.01 ) { t876 = 1.0 - X [ 21ULL ] ; } else if ( 1.0 - X [
21ULL ] >= - 0.1 ) { t876 = pmf_exp ( ( ( 1.0 - X [ 21ULL ] ) - 0.01 ) / 0.01
) * 0.01 ; } else { t876 = 1.6701700790245661E-7 ; } t877 = X [ 22ULL ] / (
t876 == 0.0 ? 1.0E-16 : t876 ) * 3827.6794129126583 + 296.802103844292 ; t447
[ 0ULL ] = X [ 19ULL ] ; tlu2_linear_linear_prelookup ( & g_efOut . mField0 [
0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t447 [ 0ULL ] , & t67 [ 0ULL ] ,
& t68 [ 0ULL ] ) ; t59 = g_efOut ; tlu2_1d_linear_linear_value ( & h_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t40_idx_0 = h_efOut [ 0 ] ; intrm_sf_mf_58 = pmf_exp ( pmf_log ( X [ 20ULL
] * 100000.0 ) - t40_idx_0 ) ; if ( intrm_sf_mf_58 >= 1.0 ) { t916 = (
intrm_sf_mf_58 - 1.0 ) * 461.523 + t877 ; t893 = t877 / ( t916 == 0.0 ?
1.0E-16 : t916 ) ; } else { t893 = 1.0 ; } if ( X [ 137ULL ] <= 0.0 ) { t894
= 0.0 ; } else { t894 = X [ 137ULL ] >= 1.0 ? 1.0 : X [ 137ULL ] ; } if ( X [
136ULL ] <= 0.0 ) { t895 = 0.0 ; } else { t895 = X [ 136ULL ] >= 1.0 ? 1.0 :
X [ 136ULL ] ; } t899 = ( ( ( 1.0 - t894 ) - t895 ) * 296.802103844292 + t894
* 461.523 ) + t895 * 4124.48151675695 ; t894 = X [ 137ULL ] * 461.523 / (
t899 == 0.0 ? 1.0E-16 : t899 ) ; if ( t894 <= 0.0 ) { t895 = 0.0 ; } else {
t895 = t894 >= 1.0 ? 1.0 : t894 ; } t894 = X [ 136ULL ] * 4124.48151675695 /
( t899 == 0.0 ? 1.0E-16 : t899 ) ; if ( t894 <= 0.0 ) { t900 = 0.0 ; } else {
t900 = t894 >= 1.0 ? 1.0 : t894 ; } t894 = ( t792 - ( - X [ 126ULL ] ) ) /
2.0 ; t85 [ 0ULL ] = X [ 134ULL ] ; tlu2_linear_nearest_prelookup ( & i_efOut
. mField0 [ 0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t85 [ 0ULL ] , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59 = i_efOut ;
tlu2_1d_linear_nearest_value ( & j_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t450 [ 0 ] = j_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & k_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t451 [ 0 ] = k_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t452 [ 0 ] = l_efOut [ 0 ] ;
intrm_sf_mf_105 = ( ( ( 1.0 - t895 ) - t900 ) * t450 [ 0ULL ] + t451 [ 0ULL ]
* t895 ) + t452 [ 0ULL ] * t900 ; t920 = intrm_sf_mf_105 + t875 ; t869 = t920
/ 2.0 * 7.8539816339744827E-5 ; t901 = - ( t894 <= 0.0 ? t894 : 0.0 ) * 0.01
/ ( t869 == 0.0 ? 1.0E-16 : t869 ) ; intrm_sf_mf_105 = t901 >= 0.0 ? t901 : -
t901 ; t901 = intrm_sf_mf_105 > 1000.0 ? intrm_sf_mf_105 : 1000.0 ;
tlu2_1d_linear_nearest_value ( & m_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t453_idx_0 = m_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t454 [ 0 ] = n_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t455 [ 0 ] = o_efOut [ 0 ] ; t869 = ( ( (
1.0 - t873 ) - t874 ) * t453_idx_0 + t454 [ 0ULL ] * t873 ) + t455 [ 0ULL ] *
t874 ; tlu2_1d_linear_nearest_value ( & p_efOut [ 0ULL ] , & t59 . mField0 [
0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t570 [ 0 ] = p_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & q_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = q_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = r_efOut [ 0 ] ; t873 = ( ( (
1.0 - t895 ) - t900 ) * t570 [ 0ULL ] + t571_idx_0 * t895 ) + t572_idx_0 *
t900 ; t923 = t869 + t873 ; if ( t923 / 2.0 > 0.5 ) { t874 = ( t869 + t873 )
/ 2.0 ; } else { t874 = 0.5 ; } t925 = pmf_log10 ( 6.9 / ( t901 == 0.0 ?
1.0E-16 : t901 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t901 == 0.0
? 1.0E-16 : t901 ) + 0.00017169489553429715 ) * 3.24 ; t895 = 1.0 / ( t925 ==
0.0 ? 1.0E-16 : t925 ) ; t927 = ( pmf_pow ( t874 , 0.66666666666666663 ) -
1.0 ) * pmf_sqrt ( t895 / 8.0 ) * 12.7 + 1.0 ; t900 = ( t901 - 1000.0 ) * (
t895 / 8.0 ) * t874 / ( t927 == 0.0 ? 1.0E-16 : t927 ) ; intrm_sf_mf_80 = (
intrm_sf_mf_105 - 2000.0 ) / 2000.0 ; intrm_sf_mf_64 = intrm_sf_mf_80 *
intrm_sf_mf_80 * 3.0 - intrm_sf_mf_80 * intrm_sf_mf_80 * intrm_sf_mf_80 * 2.0
; if ( intrm_sf_mf_105 <= 2000.0 ) { intrm_sf_mf_80 = 3.66 ; } else if (
intrm_sf_mf_105 >= 4000.0 ) { intrm_sf_mf_80 = t900 ; } else { intrm_sf_mf_80
= ( 1.0 - intrm_sf_mf_64 ) * 3.66 + t900 * intrm_sf_mf_64 ; } t929 =
intrm_sf_mf_80 * 0.031415926535897927 ; t891 = t923 / 2.0 ; if (
intrm_sf_mf_105 > t929 / 7.8539816339744827E-5 / ( t891 == 0.0 ? 1.0E-16 :
t891 ) / 30.0 ) { t938 = ( t869 + t873 ) / 2.0 ; t900 = intrm_sf_mf_80 *
0.031415926535897927 / ( intrm_sf_mf_105 == 0.0 ? 1.0E-16 : intrm_sf_mf_105 )
/ 7.8539816339744827E-5 / ( t938 == 0.0 ? 1.0E-16 : t938 ) ; } else { t900 =
30.0 ; } if ( X [ 118ULL ] <= 0.0 ) { t873 = 0.0 ; } else { t873 = X [ 118ULL
] >= 1.0 ? 1.0 : X [ 118ULL ] ; } if ( X [ 117ULL ] <= 0.0 ) { intrm_sf_mf_80
= 0.0 ; } else { intrm_sf_mf_80 = X [ 117ULL ] >= 1.0 ? 1.0 : X [ 117ULL ] ;
} intrm_sf_mf_64 = ( ( ( 1.0 - t873 ) - intrm_sf_mf_80 ) * 296.802103844292 +
t873 * 461.523 ) + intrm_sf_mf_80 * 4124.48151675695 ; t873 = X [ 118ULL ] *
461.523 / ( intrm_sf_mf_64 == 0.0 ? 1.0E-16 : intrm_sf_mf_64 ) ; if ( t873 <=
0.0 ) { intrm_sf_mf_80 = 0.0 ; } else { intrm_sf_mf_80 = t873 >= 1.0 ? 1.0 :
t873 ; } t873 = X [ 117ULL ] * 4124.48151675695 / ( intrm_sf_mf_64 == 0.0 ?
1.0E-16 : intrm_sf_mf_64 ) ; if ( t873 <= 0.0 ) { t910 = 0.0 ; } else { t910
= t873 >= 1.0 ? 1.0 : t873 ; } t449 [ 0ULL ] = X [ 115ULL ] ;
tlu2_linear_nearest_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t449 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59
= s_efOut ; tlu2_1d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = t_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t59 . mField0 [
0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = u_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & v_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = v_efOut [ 0 ] ; t873 = ( ( (
1.0 - intrm_sf_mf_80 ) - t910 ) * t571_idx_0 + t572_idx_0 * intrm_sf_mf_80 )
+ t569_idx_0 * t910 ; t912 = t894 >= 0.0 ? t894 : 0.0 ;
tlu2_1d_linear_nearest_value ( & w_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = w_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & x_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = x_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & y_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = y_efOut [ 0 ] ; t894 = ( ( (
1.0 - intrm_sf_mf_80 ) - t910 ) * t571_idx_0 + t572_idx_0 * intrm_sf_mf_80 )
+ t569_idx_0 * t910 ; t941 = t875 + t894 ; t943 = t941 / 2.0 *
7.8539816339744827E-5 ; intrm_sf_mf_80 = t912 * 0.01 / ( t943 == 0.0 ?
1.0E-16 : t943 ) ; t910 = intrm_sf_mf_80 >= 0.0 ? intrm_sf_mf_80 : -
intrm_sf_mf_80 ; intrm_sf_mf_80 = t910 > 1000.0 ? t910 : 1000.0 ; t944 = t873
+ t869 ; if ( t944 / 2.0 > 0.5 ) { t912 = ( t873 + t869 ) / 2.0 ; } else {
t912 = 0.5 ; } t891 = pmf_log10 ( 6.9 / ( intrm_sf_mf_80 == 0.0 ? 1.0E-16 :
intrm_sf_mf_80 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_80 == 0.0 ? 1.0E-16 : intrm_sf_mf_80 ) + 0.00017169489553429715 )
* 3.24 ; t913 = 1.0 / ( t891 == 0.0 ? 1.0E-16 : t891 ) ; t948 = ( pmf_pow (
t912 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t913 / 8.0 ) * 12.7 + 1.0 ;
t914 = ( intrm_sf_mf_80 - 1000.0 ) * ( t913 / 8.0 ) * t912 / ( t948 == 0.0 ?
1.0E-16 : t948 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = ( t910 -
2000.0 ) / 2000.0 ; t916 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 2.0 ; if (
t910 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = 3.66 ; }
else if ( t910 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t914 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = (
1.0 - t916 ) * 3.66 + t914 * t916 ; } t950 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
0.031415926535897927 ; t953 = t944 / 2.0 ; if ( t910 > t950 /
7.8539816339744827E-5 / ( t953 == 0.0 ? 1.0E-16 : t953 ) / 30.0 ) { t959 = (
t873 + t869 ) / 2.0 ; t914 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
0.031415926535897927 / ( t910 == 0.0 ? 1.0E-16 : t910 ) /
7.8539816339744827E-5 / ( t959 == 0.0 ? 1.0E-16 : t959 ) ; } else { t914 =
30.0 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 =
U_idx_1 * 0.031415926535897927 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 0.0001 <=
7.8539816339744857E-13 ) { t916 = 7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 0.0001 >=
3.1415926535897929E-6 ) { t916 = 3.1415926535897929E-6 ; } else { t916 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 0.0001 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t916 /
7.8539816339744827E-5 ; if ( X [ 161ULL ] <= 0.0 ) { t917 = 0.0 ; } else {
t917 = X [ 161ULL ] >= 1.0 ? 1.0 : X [ 161ULL ] ; } if ( X [ 162ULL ] <= 0.0
) { t918 = 0.0 ; } else { t918 = X [ 162ULL ] >= 1.0 ? 1.0 : X [ 162ULL ] ; }
t919 = ( ( ( 1.0 - t917 ) - t918 ) * 296.802103844292 + t917 * 461.523 ) +
t918 * 4124.48151675695 ; t961 = X [ 159ULL ] * t919 ; t921 = X [ 160ULL ] /
( t961 == 0.0 ? 1.0E-16 : t961 ) ; t869 = X [ 160ULL ] / ( X [ 135ULL ] ==
0.0 ? 1.0E-16 : X [ 135ULL ] ) * ( X [ 163ULL ] / ( X [ 159ULL ] == 0.0 ?
1.0E-16 : X [ 159ULL ] ) ) ; t924 = X [ 160ULL ] / 1.01325 * ( X [ 164ULL ] /
( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) ) ; t926 = ( X [ 135ULL ] +
1.01325 ) / 2.0 * 0.0010000000000000009 ; t925 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ) ; t927 =
t926 * t925 ; t928 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * t869
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
t924 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
2.0 ; t931 = ( X [ 135ULL ] - 1.01325 ) * ( t928 >= t925 ? t928 : t925 ) ;
t928 = ( X [ 135ULL ] - 1.01325 ) / ( t926 == 0.0 ? 1.0E-16 : t926 ) ; t891 =
t928 * t928 * 3.0 - t928 * t928 * t928 * 2.0 ; if ( X [ 135ULL ] - 1.01325 <=
0.0 ) { t928 = t927 ; } else if ( X [ 135ULL ] - 1.01325 >= t926 ) { t928 =
t931 ; } else { t928 = ( 1.0 - t891 ) * t927 + t931 * t891 ; } t931 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * t924
) - ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
t869 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
2.0 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = (
1.01325 - X [ 135ULL ] ) * ( t931 >= t925 ? t931 : t925 ) ; t869 = ( 1.01325
- X [ 135ULL ] ) / ( t926 == 0.0 ? 1.0E-16 : t926 ) ; t924 = t869 * t869 *
3.0 - t869 * t869 * t869 * 2.0 ; if ( 1.01325 - X [ 135ULL ] <= 0.0 ) { t869
= t927 ; } else if ( 1.01325 - X [ 135ULL ] >= t926 ) { t869 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ; } else {
t869 = ( 1.0 - t924 ) * t927 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * t924 ; } if
( X [ 135ULL ] > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t928 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = X [
135ULL ] < 1.01325 ? t869 : t927 ; } if ( X [ 159ULL ] <= 216.59999999999997
) { t869 = 216.59999999999997 ; } else { t869 = X [ 159ULL ] >= 623.15 ?
623.15 : X [ 159ULL ] ; } t933 = t869 * t869 ; t924 = ( ( (
1074.1165326382541 + t869 * - 0.2214565261064077 ) + t933 *
0.00037212980109010952 ) * ( ( 1.0 - t917 ) - t918 ) + ( ( 1479.6504774710445
+ t869 * 1.200211433705052 ) + t933 * - 0.00038614513167842338 ) * t917 ) + (
( 12825.281119790017 + t869 * 6.9647057412830984 ) + t933 * -
0.007052486824683288 ) * t918 ; t869 = t924 - t919 ; t973 = X [ 160ULL ] * X
[ 160ULL ] * ( t924 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ) ; t917 = pmf_sqrt (
fabs ( t973 / ( t919 == 0.0 ? 1.0E-16 : t919 ) / ( X [ 159ULL ] == 0.0 ?
1.0E-16 : X [ 159ULL ] ) ) ) * t916 * 0.64 ; if ( X [ 26ULL ] <= 0.0 ) { t918
= 0.0 ; } else { t918 = X [ 26ULL ] >= 1.0 ? 1.0 : X [ 26ULL ] ; } if ( X [
25ULL ] <= 0.0 ) { t925 = 0.0 ; } else { t925 = X [ 25ULL ] >= 1.0 ? 1.0 : X
[ 25ULL ] ; } t927 = ( ( ( 1.0 - t918 ) - t925 ) * 296.802103844292 + t918 *
461.523 ) + t925 * 4124.48151675695 ; if ( 1.0 - X [ 26ULL ] >= 0.01 ) { t918
= 1.0 - X [ 26ULL ] ; } else if ( 1.0 - X [ 26ULL ] >= - 0.1 ) { t918 =
pmf_exp ( ( ( 1.0 - X [ 26ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t918 =
1.6701700790245661E-7 ; } t925 = X [ 25ULL ] / ( t918 == 0.0 ? 1.0E-16 : t918
) * 3827.6794129126583 + 296.802103844292 ; t450 [ 0ULL ] = X [ 23ULL ] ;
tlu2_linear_linear_prelookup ( & ab_efOut . mField0 [ 0ULL ] , & ab_efOut .
mField1 [ 0ULL ] , & ab_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t450 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t47
= ab_efOut ; tlu2_1d_linear_linear_value ( & bb_efOut [ 0ULL ] , & t47 .
mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t453_idx_0 = bb_efOut [ 0
] ; t928 = pmf_exp ( pmf_log ( X [ 24ULL ] * 100000.0 ) - t453_idx_0 ) ; if (
t928 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( t928 -
1.0 ) * 461.523 + t925 ; t931 = t925 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) ;
} else { t931 = 1.0 ; } t933 = U_idx_2 * 0.01 ; if ( X [ 30ULL ] <= 0.0 ) {
t934 = 0.0 ; } else { t934 = X [ 30ULL ] >= 1.0 ? 1.0 : X [ 30ULL ] ; } if (
X [ 29ULL ] <= 0.0 ) { t935 = 0.0 ; } else { t935 = X [ 29ULL ] >= 1.0 ? 1.0
: X [ 29ULL ] ; } t936 = ( ( ( 1.0 - t934 ) - t935 ) * 296.802103844292 +
t934 * 461.523 ) + t935 * 4124.48151675695 ; if ( 1.0 - X [ 30ULL ] >= 0.01 )
{ t934 = 1.0 - X [ 30ULL ] ; } else if ( 1.0 - X [ 30ULL ] >= - 0.1 ) { t934
= pmf_exp ( ( ( 1.0 - X [ 30ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t934
= 1.6701700790245661E-7 ; } t935 = X [ 29ULL ] / ( t934 == 0.0 ? 1.0E-16 :
t934 ) * 3827.6794129126583 + 296.802103844292 ; t451 [ 0ULL ] = X [ 27ULL ]
; tlu2_linear_linear_prelookup ( & cb_efOut . mField0 [ 0ULL ] , & cb_efOut .
mField1 [ 0ULL ] , & cb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t451 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t47
= cb_efOut ; tlu2_1d_linear_linear_value ( & db_efOut [ 0ULL ] , & t47 .
mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t451 [ 0 ] = db_efOut [ 0
] ; t937 = pmf_exp ( pmf_log ( X [ 28ULL ] * 100000.0 ) - t451 [ 0ULL ] ) ;
if ( t937 >= 1.0 ) { t981 = ( t937 - 1.0 ) * 461.523 + t935 ; t938 = t935 / (
t981 == 0.0 ? 1.0E-16 : t981 ) ; } else { t938 = 1.0 ; } if ( X [ 33ULL ] <=
0.0 ) { t940 = 0.0 ; } else { t940 = X [ 33ULL ] >= 1.0 ? 1.0 : X [ 33ULL ] ;
} if ( X [ 34ULL ] <= 0.0 ) { t942 = 0.0 ; } else { t942 = X [ 34ULL ] >= 1.0
? 1.0 : X [ 34ULL ] ; } t943 = ( ( ( 1.0 - t940 ) - t942 ) * 296.802103844292
+ t940 * 461.523 ) + t942 * 4124.48151675695 ; t945 = - ( ( X [ 31ULL ] / ( X
[ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) - X [ 223ULL ] / ( X [ 224ULL ] ==
0.0 ? 1.0E-16 : X [ 224ULL ] ) ) * X [ 213ULL ] * t943 ) /
7.8539816339744827E-5 ; if ( X [ 223ULL ] <= 216.59999999999997 ) { t891 =
216.59999999999997 ; } else { t891 = X [ 223ULL ] >= 623.15 ? 623.15 : X [
223ULL ] ; } t948 = t891 * t891 ; t947 = ( ( ( 1074.1165326382541 + t891 * -
0.2214565261064077 ) + t948 * 0.00037212980109010952 ) * ( ( 1.0 - t940 ) -
t942 ) + ( ( 1479.6504774710445 + t891 * 1.200211433705052 ) + t948 * -
0.00038614513167842338 ) * t940 ) + ( ( 12825.281119790017 + t891 *
6.9647057412830984 ) + t948 * - 0.007052486824683288 ) * t942 ;
intrm_sf_mf_437 = t947 - t943 ; t948 = t947 / ( intrm_sf_mf_437 == 0.0 ?
1.0E-16 : intrm_sf_mf_437 ) ; t949 = pmf_sqrt ( t945 * t945 *
9.999999999999999E-14 + fabs ( X [ 223ULL ] * t948 * t943 ) * 1.0E-9 ) ; if (
X [ 225ULL ] <= 0.0 ) { t952 = 0.0 ; } else { t952 = X [ 225ULL ] >= 1.0 ?
1.0 : X [ 225ULL ] ; } if ( X [ 226ULL ] <= 0.0 ) { t953 = 0.0 ; } else {
t953 = X [ 226ULL ] >= 1.0 ? 1.0 : X [ 226ULL ] ; } t452 [ 0ULL ] = X [ 31ULL
] ; tlu2_linear_nearest_prelookup ( & eb_efOut . mField0 [ 0ULL ] , &
eb_efOut . mField1 [ 0ULL ] , & eb_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t452 [ 0ULL ] , & t67 [ 0ULL ] ,
& t68 [ 0ULL ] ) ; t47 = eb_efOut ; tlu2_1d_linear_nearest_value ( & fb_efOut
[ 0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = fb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & gb_efOut [
0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = gb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & hb_efOut [
0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = hb_efOut [ 0 ] ; t954 = ( ( ( 1.0 - t952 ) - t953 ) *
t571_idx_0 + t572_idx_0 * t952 ) + t569_idx_0 * t953 ; t988 = X [ 224ULL ] *
X [ 224ULL ] * t948 ; t955 = - pmf_sqrt ( fabs ( t988 / ( t943 == 0.0 ?
1.0E-16 : t943 ) / ( X [ 223ULL ] == 0.0 ? 1.0E-16 : X [ 223ULL ] ) ) ) *
7.8539816339744827E-5 ; if ( t955 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI = t955 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI = - t955 *
100000.0 ; } t992 = t954 * 7.8539816339744827E-5 ; t869 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI * 0.01 / (
t992 == 0.0 ? 1.0E-16 : t992 ) ; t994 = X [ 31ULL ] * t943 ; t958 = X [ 32ULL
] / ( t994 == 0.0 ? 1.0E-16 : t994 ) ; U_idx_1 = t958 * 1.5707963267948965E-8
; t959 = t955 * t954 * 35.2 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; t960 =
t869 >= 1.0 ? t869 : 1.0 ; intrm_sf_mf_456 = pmf_log10 ( 6.9 / ( t960 == 0.0
? 1.0E-16 : t960 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t960 ==
0.0 ? 1.0E-16 : t960 ) + 0.00017169489553429715 ) * 3.24 ; t999 = t958 *
1.2337005501361697E-10 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI = t955 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI * ( 1.0 / (
intrm_sf_mf_456 == 0.0 ? 1.0E-16 : intrm_sf_mf_456 ) ) * 0.55 / ( t999 == 0.0
? 1.0E-16 : t999 ) ; t961 = ( t869 - 2000.0 ) / 2000.0 ; t891 = t961 * t961 *
3.0 - t961 * t961 * t961 * 2.0 ; if ( t869 <= 2000.0 ) { t961 = t959 * 1.0E-5
; } else if ( t869 >= 4000.0 ) { t961 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI * 1.0E-5 ; }
else { t961 = ( ( 1.0 - t891 ) * t959 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI * t891 ) *
1.0E-5 ; } t949 = - ( X [ 213ULL ] * t949 ) / 7.8539816339744827E-5 *
0.00031622776601683789 + t961 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI = - ( ( X [
31ULL ] / ( X [ 32ULL ] == 0.0 ? 1.0E-16 : X [ 32ULL ] ) - X [ 227ULL ] / ( X
[ 228ULL ] == 0.0 ? 1.0E-16 : X [ 228ULL ] ) ) * X [ 183ULL ] * t943 ) /
7.8539816339744827E-5 ; if ( X [ 227ULL ] <= 216.59999999999997 ) { t869 =
216.59999999999997 ; } else { t869 = X [ 227ULL ] >= 623.15 ? 623.15 : X [
227ULL ] ; } t964 = t869 * t869 ; t959 = ( ( ( 1074.1165326382541 + t869 * -
0.2214565261064077 ) + t964 * 0.00037212980109010952 ) * ( ( 1.0 - t940 ) -
t942 ) + ( ( 1479.6504774710445 + t869 * 1.200211433705052 ) + t964 * -
0.00038614513167842338 ) * t940 ) + ( ( 12825.281119790017 + t869 *
6.9647057412830984 ) + t964 * - 0.007052486824683288 ) * t942 ; t869 = t959 -
t943 ; t940 = t959 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ; t942 = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 ) ;
t1008 = X [ 228ULL ] * X [ 228ULL ] * t940 ; t961 = - pmf_sqrt ( fabs ( t1008
/ ( t943 == 0.0 ? 1.0E-16 : t943 ) / ( X [ 227ULL ] == 0.0 ? 1.0E-16 : X [
227ULL ] ) ) ) * 7.8539816339744827E-5 ; if ( t961 >= 0.0 ) { t891 = t961 *
100000.0 ; } else { t891 = - t961 * 100000.0 ; } t964 = t891 * 0.01 / ( t992
== 0.0 ? 1.0E-16 : t992 ) ; t967 = t961 * t954 * 35.2 / ( U_idx_1 == 0.0 ?
1.0E-16 : U_idx_1 ) ; t969 = t964 >= 1.0 ? t964 : 1.0 ; t1015 = pmf_log10 (
6.9 / ( t969 == 0.0 ? 1.0E-16 : t969 ) + 0.00017169489553429715 ) * pmf_log10
( 6.9 / ( t969 == 0.0 ? 1.0E-16 : t969 ) + 0.00017169489553429715 ) * 3.24 ;
t891 = t961 * t891 * ( 1.0 / ( t1015 == 0.0 ? 1.0E-16 : t1015 ) ) * 0.55 / (
t999 == 0.0 ? 1.0E-16 : t999 ) ; t970 = ( t964 - 2000.0 ) / 2000.0 ; t971 =
t970 * t970 * 3.0 - t970 * t970 * t970 * 2.0 ; if ( t964 <= 2000.0 ) { t970 =
t967 * 1.0E-5 ; } else if ( t964 >= 4000.0 ) { t970 = t891 * 1.0E-5 ; } else
{ t970 = ( ( 1.0 - t971 ) * t967 + t891 * t971 ) * 1.0E-5 ; } t942 = - ( X [
183ULL ] * t942 ) / 7.8539816339744827E-5 * 0.00031622776601683789 + t970 ;
if ( 1.0 - X [ 33ULL ] >= 0.01 ) { t964 = 1.0 - X [ 33ULL ] ; } else if ( 1.0
- X [ 33ULL ] >= - 0.1 ) { t964 = pmf_exp ( ( ( 1.0 - X [ 33ULL ] ) - 0.01 )
/ 0.01 ) * 0.01 ; } else { t964 = 1.6701700790245661E-7 ; } t967 = X [ 34ULL
] / ( t964 == 0.0 ? 1.0E-16 : t964 ) * 3827.6794129126583 + 296.802103844292
; t454 [ 0ULL ] = X [ 31ULL ] ; tlu2_linear_linear_prelookup ( & ib_efOut .
mField0 [ 0ULL ] , & ib_efOut . mField1 [ 0ULL ] , & ib_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t454 [ 0ULL ] , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t57 = ib_efOut ;
tlu2_1d_linear_linear_value ( & jb_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t454 [ 0 ] = jb_efOut [ 0 ] ; t970 =
pmf_exp ( pmf_log ( X [ 32ULL ] * 100000.0 ) - t454 [ 0ULL ] ) ; if ( t970 >=
1.0 ) { intrm_sf_mf_753 = ( t970 - 1.0 ) * 461.523 + t967 ; t971 = t967 / (
intrm_sf_mf_753 == 0.0 ? 1.0E-16 : intrm_sf_mf_753 ) ; } else { t971 = 1.0 ;
} if ( X [ 222ULL ] <= 0.0 ) { t869 = 0.0 ; } else { t869 = X [ 222ULL ] >=
1.0 ? 1.0 : X [ 222ULL ] ; } if ( X [ 221ULL ] <= 0.0 ) { intrm_sf_mf_354 =
0.0 ; } else { intrm_sf_mf_354 = X [ 221ULL ] >= 1.0 ? 1.0 : X [ 221ULL ] ; }
t976 = ( ( ( 1.0 - t869 ) - intrm_sf_mf_354 ) * 296.802103844292 + t869 *
461.523 ) + intrm_sf_mf_354 * 4124.48151675695 ; t869 = X [ 222ULL ] *
461.523 / ( t976 == 0.0 ? 1.0E-16 : t976 ) ; if ( t869 <= 0.0 ) {
intrm_sf_mf_354 = 0.0 ; } else { intrm_sf_mf_354 = t869 >= 1.0 ? 1.0 : t869 ;
} t869 = X [ 221ULL ] * 4124.48151675695 / ( t976 == 0.0 ? 1.0E-16 : t976 ) ;
if ( t869 <= 0.0 ) { t977 = 0.0 ; } else { t977 = t869 >= 1.0 ? 1.0 : t869 ;
} t455 [ 0ULL ] = X [ 219ULL ] ; tlu2_linear_nearest_prelookup ( & kb_efOut .
mField0 [ 0ULL ] , & kb_efOut . mField1 [ 0ULL ] , & kb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t455 [ 0ULL ] , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59 = kb_efOut ;
tlu2_1d_linear_nearest_value ( & lb_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = lb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mb_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = mb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nb_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = nb_efOut [ 0 ] ; t869 = ( (
( 1.0 - intrm_sf_mf_354 ) - t977 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_354 ) + t569_idx_0 * t977 ; tlu2_1d_linear_nearest_value ( &
ob_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = ob_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & pb_efOut [
0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = pb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qb_efOut [
0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = qb_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( ( ( 1.0 -
t952 ) - t953 ) * t571_idx_0 + t572_idx_0 * t952 ) + t569_idx_0 * t953 ; t952
= ( - X [ 213ULL ] - ( - X [ 183ULL ] ) ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & rb_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = rb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & sb_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = sb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tb_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = tb_efOut [ 0 ] ; t1026 = t954
+ ( ( ( ( 1.0 - intrm_sf_mf_354 ) - t977 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_354 ) + t569_idx_0 * t977 ) ; t891 = t1026 / 2.0 *
7.8539816339744827E-5 ; t953 = ( t952 >= 0.0 ? t952 : 0.0 ) * 0.01 / ( t891
== 0.0 ? 1.0E-16 : t891 ) ; intrm_sf_mf_354 = t953 >= 0.0 ? t953 : - t953 ;
t953 = intrm_sf_mf_354 > 1000.0 ? intrm_sf_mf_354 : 1000.0 ; t1029 = t869 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; if ( t1029
/ 2.0 > 0.5 ) { t977 = ( t869 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) / 2.0 ; }
else { t977 = 0.5 ; } t1031 = pmf_log10 ( 6.9 / ( t953 == 0.0 ? 1.0E-16 :
t953 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t953 == 0.0 ? 1.0E-16
: t953 ) + 0.00017169489553429715 ) * 3.24 ; t979 = 1.0 / ( t1031 == 0.0 ?
1.0E-16 : t1031 ) ; t1033 = ( pmf_pow ( t977 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t979 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_362 = ( t953 - 1000.0 )
* ( t979 / 8.0 ) * t977 / ( t1033 == 0.0 ? 1.0E-16 : t1033 ) ; t981 = (
intrm_sf_mf_354 - 2000.0 ) / 2000.0 ; t982 = t981 * t981 * 3.0 - t981 * t981
* t981 * 2.0 ; if ( intrm_sf_mf_354 <= 2000.0 ) { t981 = 3.66 ; } else if (
intrm_sf_mf_354 >= 4000.0 ) { t981 = intrm_sf_mf_362 ; } else { t981 = ( 1.0
- t982 ) * 3.66 + intrm_sf_mf_362 * t982 ; } t1035 = t981 *
0.031415926535897927 ; t1038 = t1029 / 2.0 ; if ( intrm_sf_mf_354 > t1035 /
7.8539816339744827E-5 / ( t1038 == 0.0 ? 1.0E-16 : t1038 ) / 30.0 ) { t1044 =
( t869 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) /
2.0 ; intrm_sf_mf_362 = t981 * 0.031415926535897927 / ( intrm_sf_mf_354 ==
0.0 ? 1.0E-16 : intrm_sf_mf_354 ) / 7.8539816339744827E-5 / ( t1044 == 0.0 ?
1.0E-16 : t1044 ) ; } else { intrm_sf_mf_362 = 30.0 ; } if ( X [ 168ULL ] <=
0.0 ) { t869 = 0.0 ; } else { t869 = X [ 168ULL ] >= 1.0 ? 1.0 : X [ 168ULL ]
; } if ( X [ 167ULL ] <= 0.0 ) { t981 = 0.0 ; } else { t981 = X [ 167ULL ] >=
1.0 ? 1.0 : X [ 167ULL ] ; } t982 = ( ( ( 1.0 - t869 ) - t981 ) *
296.802103844292 + t869 * 461.523 ) + t981 * 4124.48151675695 ; t869 = X [
168ULL ] * 461.523 / ( t982 == 0.0 ? 1.0E-16 : t982 ) ; if ( t869 <= 0.0 ) {
t981 = 0.0 ; } else { t981 = t869 >= 1.0 ? 1.0 : t869 ; } t869 = X [ 167ULL ]
* 4124.48151675695 / ( t982 == 0.0 ? 1.0E-16 : t982 ) ; if ( t869 <= 0.0 ) {
t983 = 0.0 ; } else { t983 = t869 >= 1.0 ? 1.0 : t869 ; } t570 [ 0ULL ] = X [
166ULL ] ; tlu2_linear_nearest_prelookup ( & ub_efOut . mField0 [ 0ULL ] , &
ub_efOut . mField1 [ 0ULL ] , & ub_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] ,
& t68 [ 0ULL ] ) ; t59 = ub_efOut ; tlu2_1d_linear_nearest_value ( & vb_efOut
[ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = vb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & wb_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = wb_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xb_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField15 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = xb_efOut [ 0 ] ; t869 = ( ( ( 1.0 - t981 ) - t983 ) *
t571_idx_0 + t572_idx_0 * t981 ) + t569_idx_0 * t983 ;
tlu2_1d_linear_nearest_value ( & yb_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = yb_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ac_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ac_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bc_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = bc_efOut [ 0 ] ; t1047 = t954
+ ( ( ( ( 1.0 - t981 ) - t983 ) * t571_idx_0 + t572_idx_0 * t981 ) +
t569_idx_0 * t983 ) ; t1049 = t1047 / 2.0 * 7.8539816339744827E-5 ; t952 = -
( t952 <= 0.0 ? t952 : 0.0 ) * 0.01 / ( t1049 == 0.0 ? 1.0E-16 : t1049 ) ;
t981 = t952 >= 0.0 ? t952 : - t952 ; t952 = t981 > 1000.0 ? t981 : 1000.0 ;
t1050 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 +
t869 ; if ( t1050 / 2.0 > 0.5 ) { t983 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 + t869 ) /
2.0 ; } else { t983 = 0.5 ; } t1052 = pmf_log10 ( 6.9 / ( t952 == 0.0 ?
1.0E-16 : t952 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t952 == 0.0
? 1.0E-16 : t952 ) + 0.00017169489553429715 ) * 3.24 ; t985 = 1.0 / ( t1052
== 0.0 ? 1.0E-16 : t1052 ) ; t1054 = ( pmf_pow ( t983 , 0.66666666666666663 )
- 1.0 ) * pmf_sqrt ( t985 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_386 = ( t952 -
1000.0 ) * ( t985 / 8.0 ) * t983 / ( t1054 == 0.0 ? 1.0E-16 : t1054 ) ;
intrm_sf_mf_437 = ( t981 - 2000.0 ) / 2000.0 ; t989 = intrm_sf_mf_437 *
intrm_sf_mf_437 * 3.0 - intrm_sf_mf_437 * intrm_sf_mf_437 * intrm_sf_mf_437 *
2.0 ; if ( t981 <= 2000.0 ) { intrm_sf_mf_437 = 3.66 ; } else if ( t981 >=
4000.0 ) { intrm_sf_mf_437 = intrm_sf_mf_386 ; } else { intrm_sf_mf_437 = (
1.0 - t989 ) * 3.66 + intrm_sf_mf_386 * t989 ; } t1056 = intrm_sf_mf_437 *
0.031415926535897927 ; intrm_sf_mf_698 = t1050 / 2.0 ; if ( t981 > t1056 /
7.8539816339744827E-5 / ( intrm_sf_mf_698 == 0.0 ? 1.0E-16 : intrm_sf_mf_698
) / 30.0 ) { t830 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 + t869 ) /
2.0 ; intrm_sf_mf_386 = intrm_sf_mf_437 * 0.031415926535897927 / ( t981 ==
0.0 ? 1.0E-16 : t981 ) / 7.8539816339744827E-5 / ( t830 == 0.0 ? 1.0E-16 :
t830 ) ; } else { intrm_sf_mf_386 = 30.0 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( X [
220ULL ] * - 0.7999998 + U_idx_3 * 7.9999980000000006 ) +
9.9999999947364415E-9 ; if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
7.8539816339744827E-5 <= 7.8539816339744857E-13 ) { intrm_sf_mf_437 =
7.8539816339744857E-13 ; } else if (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
7.8539816339744827E-5 >= 3.1415926535897929E-6 ) { intrm_sf_mf_437 =
3.1415926535897929E-6 ; } else { intrm_sf_mf_437 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
7.8539816339744827E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
intrm_sf_mf_437 / 7.8539816339744827E-5 ; if ( X [ 239ULL ] <= 0.0 ) { t989 =
0.0 ; } else { t989 = X [ 239ULL ] >= 1.0 ? 1.0 : X [ 239ULL ] ; } if ( X [
240ULL ] <= 0.0 ) { intrm_sf_mf_535 = 0.0 ; } else { intrm_sf_mf_535 = X [
240ULL ] >= 1.0 ? 1.0 : X [ 240ULL ] ; } t994 = ( ( ( 1.0 - t989 ) -
intrm_sf_mf_535 ) * 296.802103844292 + t989 * 461.523 ) + intrm_sf_mf_535 *
4124.48151675695 ; t1067 = X [ 237ULL ] * t994 ; t995 = X [ 238ULL ] / (
t1067 == 0.0 ? 1.0E-16 : t1067 ) ; U_idx_1 = X [ 238ULL ] / ( X [ 28ULL ] ==
0.0 ? 1.0E-16 : X [ 28ULL ] ) * ( X [ 241ULL ] / ( X [ 237ULL ] == 0.0 ?
1.0E-16 : X [ 237ULL ] ) ) ; intrm_sf_mf_456 = X [ 238ULL ] / ( X [ 220ULL ]
== 0.0 ? 1.0E-16 : X [ 220ULL ] ) * ( X [ 242ULL ] / ( X [ 237ULL ] == 0.0 ?
1.0E-16 : X [ 237ULL ] ) ) ; t999 = ( X [ 28ULL ] + X [ 220ULL ] ) / 2.0 *
0.0010000000000000009 ; t998 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) ; t1000 =
t999 * t998 ; intrm_sf_mf_537 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
U_idx_1 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_456 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 2.0 ; t1005
= ( X [ 28ULL ] - X [ 220ULL ] ) * ( intrm_sf_mf_537 >= t998 ?
intrm_sf_mf_537 : t998 ) ; intrm_sf_mf_537 = ( X [ 28ULL ] - X [ 220ULL ] ) /
( t999 == 0.0 ? 1.0E-16 : t999 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_x_w =
intrm_sf_mf_537 * intrm_sf_mf_537 * 3.0 - intrm_sf_mf_537 * intrm_sf_mf_537 *
intrm_sf_mf_537 * 2.0 ; if ( X [ 28ULL ] - X [ 220ULL ] <= 0.0 ) {
intrm_sf_mf_537 = t1000 ; } else if ( X [ 28ULL ] - X [ 220ULL ] >= t999 ) {
intrm_sf_mf_537 = t1005 ; } else { intrm_sf_mf_537 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_x_w ) * t1000 +
t1005 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_x_w ; }
t1005 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 +
1.0 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_456 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * U_idx_1 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = ( X [
220ULL ] - X [ 28ULL ] ) * ( t1005 >= t998 ? t1005 : t998 ) ; U_idx_1 = ( X [
220ULL ] - X [ 28ULL ] ) / ( t999 == 0.0 ? 1.0E-16 : t999 ) ; intrm_sf_mf_456
= U_idx_1 * U_idx_1 * 3.0 - U_idx_1 * U_idx_1 * U_idx_1 * 2.0 ; if ( X [
220ULL ] - X [ 28ULL ] <= 0.0 ) { U_idx_1 = t1000 ; } else if ( X [ 220ULL ]
- X [ 28ULL ] >= t999 ) { U_idx_1 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ; } else {
U_idx_1 = ( 1.0 - intrm_sf_mf_456 ) * t1000 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 *
intrm_sf_mf_456 ; } if ( X [ 28ULL ] > X [ 220ULL ] ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 =
intrm_sf_mf_537 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 = X [ 28ULL ]
< X [ 220ULL ] ? U_idx_1 : t1000 ; } if ( X [ 237ULL ] <= 216.59999999999997
) { U_idx_1 = 216.59999999999997 ; } else { U_idx_1 = X [ 237ULL ] >= 623.15
? 623.15 : X [ 237ULL ] ; } t869 = U_idx_1 * U_idx_1 ; intrm_sf_mf_456 = ( (
( 1074.1165326382541 + U_idx_1 * - 0.2214565261064077 ) + t869 *
0.00037212980109010952 ) * ( ( 1.0 - t989 ) - intrm_sf_mf_535 ) + ( (
1479.6504774710445 + U_idx_1 * 1.200211433705052 ) + t869 * -
0.00038614513167842338 ) * t989 ) + ( ( 12825.281119790017 + U_idx_1 *
6.9647057412830984 ) + t869 * - 0.007052486824683288 ) * intrm_sf_mf_535 ;
t1079 = intrm_sf_mf_456 - t994 ; t1080 = X [ 238ULL ] * X [ 238ULL ] * (
intrm_sf_mf_456 / ( t1079 == 0.0 ? 1.0E-16 : t1079 ) ) ; t989 = pmf_sqrt (
fabs ( t1080 / ( t994 == 0.0 ? 1.0E-16 : t994 ) / ( X [ 237ULL ] == 0.0 ?
1.0E-16 : X [ 237ULL ] ) ) ) * intrm_sf_mf_437 * 0.64 ; if ( X [ 255ULL ] <=
0.0 ) { intrm_sf_mf_535 = 0.0 ; } else { intrm_sf_mf_535 = X [ 255ULL ] >=
1.0 ? 1.0 : X [ 255ULL ] ; } if ( X [ 256ULL ] <= 0.0 ) { t998 = 0.0 ; } else
{ t998 = X [ 256ULL ] >= 1.0 ? 1.0 : X [ 256ULL ] ; } t1000 = ( ( ( 1.0 -
intrm_sf_mf_535 ) - t998 ) * 296.802103844292 + intrm_sf_mf_535 * 461.523 ) +
t998 * 259.836612622973 ; if ( X [ 38ULL ] <= 0.0 ) { intrm_sf_mf_535 = 0.0 ;
} else { intrm_sf_mf_535 = X [ 38ULL ] >= 1.0 ? 1.0 : X [ 38ULL ] ; } if ( X
[ 37ULL ] <= 0.0 ) { t998 = 0.0 ; } else { t998 = X [ 37ULL ] >= 1.0 ? 1.0 :
X [ 37ULL ] ; } intrm_sf_mf_537 = ( ( ( 1.0 - intrm_sf_mf_535 ) - t998 ) *
296.802103844292 + intrm_sf_mf_535 * 461.523 ) + t998 * 259.836612622973 ; if
( 1.0 - X [ 38ULL ] >= 0.01 ) { intrm_sf_mf_535 = 1.0 - X [ 38ULL ] ; } else
if ( 1.0 - X [ 38ULL ] >= - 0.1 ) { intrm_sf_mf_535 = pmf_exp ( ( ( 1.0 - X [
38ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { intrm_sf_mf_535 =
1.6701700790245661E-7 ; } t998 = X [ 37ULL ] / ( intrm_sf_mf_535 == 0.0 ?
1.0E-16 : intrm_sf_mf_535 ) * - 36.965491221318985 + 296.802103844292 ; t570
[ 0ULL ] = X [ 36ULL ] ; tlu2_linear_linear_prelookup ( & cc_efOut . mField0
[ 0ULL ] , & cc_efOut . mField1 [ 0ULL ] , & cc_efOut . mField2 [ 0ULL ] , (
( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ]
, & t68 [ 0ULL ] ) ; t57 = cc_efOut ; tlu2_1d_linear_linear_value ( &
dc_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t455 [ 0 ] = dc_efOut [ 0 ] ; t1005 = pmf_exp ( pmf_log ( X [ 35ULL ] *
100000.0 ) - t455 [ 0ULL ] ) ; if ( t1005 >= 1.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I = ( t1005 - 1.0 ) *
461.523 + t998 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_x_w = t998 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I == 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_x_w = 1.0 ; } if
( X [ 41ULL ] <= 0.0 ) { t1011 = 0.0 ; } else { t1011 = X [ 41ULL ] >= 1.0 ?
1.0 : X [ 41ULL ] ; } if ( X [ 40ULL ] <= 0.0 ) { t1013 = 0.0 ; } else {
t1013 = X [ 40ULL ] >= 1.0 ? 1.0 : X [ 40ULL ] ; } t1015 = ( ( ( 1.0 - t1011
) - t1013 ) * 296.802103844292 + t1011 * 461.523 ) + t1013 * 4124.48151675695
; t1016 = - ( ( X [ 39ULL ] / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] )
- X [ 302ULL ] / ( X [ 303ULL ] == 0.0 ? 1.0E-16 : X [ 303ULL ] ) ) * X [
192ULL ] * t1015 ) / 0.0019634954084936209 ; if ( X [ 302ULL ] <=
216.59999999999997 ) { t869 = 216.59999999999997 ; } else { t869 = X [ 302ULL
] >= 623.15 ? 623.15 : X [ 302ULL ] ; } t824 = t869 * t869 ; t1019 = ( ( (
1074.1165326382541 + t869 * - 0.2214565261064077 ) + t824 *
0.00037212980109010952 ) * ( ( 1.0 - t1011 ) - t1013 ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t824 * -
0.00038614513167842338 ) * t1011 ) + ( ( 12825.281119790017 + t869 *
6.9647057412830984 ) + t824 * - 0.007052486824683288 ) * t1013 ; t1091 =
t1019 - t1015 ; t824 = t1019 / ( t1091 == 0.0 ? 1.0E-16 : t1091 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_choked = pmf_sqrt (
t1016 * t1016 * 9.999999999999999E-14 + fabs ( X [ 302ULL ] * t824 * t1015 )
* 1.0E-9 ) ; if ( X [ 299ULL ] <= 0.0 ) { intrm_sf_mf_753 = 0.0 ; } else {
intrm_sf_mf_753 = X [ 299ULL ] >= 1.0 ? 1.0 : X [ 299ULL ] ; } if ( X [
298ULL ] <= 0.0 ) { intrm_sf_mf_616 = 0.0 ; } else { intrm_sf_mf_616 = X [
298ULL ] >= 1.0 ? 1.0 : X [ 298ULL ] ; } t570 [ 0ULL ] = X [ 39ULL ] ;
tlu2_linear_nearest_prelookup ( & ec_efOut . mField0 [ 0ULL ] , & ec_efOut .
mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t47
= ec_efOut ; tlu2_1d_linear_nearest_value ( & fc_efOut [ 0ULL ] , & t47 .
mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = fc_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & gc_efOut [ 0ULL ] , & t47 . mField0 [
0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = gc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & hc_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = hc_efOut [ 0 ] ; t1024 = ( ( (
1.0 - intrm_sf_mf_753 ) - intrm_sf_mf_616 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_753 ) + t569_idx_0 * intrm_sf_mf_616 ; t1092 = X [ 303ULL ] * X [
303ULL ] * t824 ; t1025 = - pmf_sqrt ( fabs ( t1092 / ( t1015 == 0.0 ?
1.0E-16 : t1015 ) / ( X [ 302ULL ] == 0.0 ? 1.0E-16 : X [ 302ULL ] ) ) ) *
0.0019634954084936209 ; if ( t1025 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI = t1025 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI = - t1025 *
100000.0 ; } t1096 = t1024 * 0.0019634954084936209 ; t891 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI * 0.05 / (
t1096 == 0.0 ? 1.0E-16 : t1096 ) ; t1098 = X [ 39ULL ] * t1015 ; t1030 = X [
42ULL ] / ( t1098 == 0.0 ? 1.0E-16 : t1098 ) ; t1100 = t1030 *
9.8174770424681068E-6 ; t1031 = t1025 * t1024 * 11.2 / ( t1100 == 0.0 ?
1.0E-16 : t1100 ) ; t1032 = t891 >= 1.0 ? t891 : 1.0 ; t1101 = pmf_log10 (
6.9 / ( t1032 == 0.0 ? 1.0E-16 : t1032 ) + 2.8767404433520813E-5 ) *
pmf_log10 ( 6.9 / ( t1032 == 0.0 ? 1.0E-16 : t1032 ) + 2.8767404433520813E-5
) * 3.24 ; t1103 = t1030 * 3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI = t1025 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI * ( 1.0 / (
t1101 == 0.0 ? 1.0E-16 : t1101 ) ) * 0.175 / ( t1103 == 0.0 ? 1.0E-16 : t1103
) ; t1033 = ( t891 - 2000.0 ) / 2000.0 ; t869 = t1033 * t1033 * 3.0 - t1033 *
t1033 * t1033 * 2.0 ; if ( t891 <= 2000.0 ) { t1033 = t1031 * 1.0E-5 ; } else
if ( t891 >= 4000.0 ) { t1033 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI * 1.0E-5 ; }
else { t1033 = ( ( 1.0 - t869 ) * t1031 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI * t869 ) *
1.0E-5 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_choked = -
( X [ 192ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_choked ) /
0.0019634954084936209 * 0.00031622776601683789 + t1033 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI = ( X [ 39ULL
] / ( X [ 42ULL ] == 0.0 ? 1.0E-16 : X [ 42ULL ] ) - X [ 305ULL ] / ( X [
306ULL ] == 0.0 ? 1.0E-16 : X [ 306ULL ] ) ) * X [ 304ULL ] * t1015 /
0.0019634954084936209 ; if ( X [ 305ULL ] <= 216.59999999999997 ) { t891 =
216.59999999999997 ; } else { t891 = X [ 305ULL ] >= 623.15 ? 623.15 : X [
305ULL ] ; } t1037 = t891 * t891 ; t1031 = ( ( ( 1074.1165326382541 + t891 *
- 0.2214565261064077 ) + t1037 * 0.00037212980109010952 ) * ( ( 1.0 - t1011 )
- t1013 ) + ( ( 1479.6504774710445 + t891 * 1.200211433705052 ) + t1037 * -
0.00038614513167842338 ) * t1011 ) + ( ( 12825.281119790017 + t891 *
6.9647057412830984 ) + t1037 * - 0.007052486824683288 ) * t1013 ; t869 =
t1031 - t1015 ; t1011 = t1031 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ; t1013 =
pmf_sqrt ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 ) ;
t1112 = X [ 306ULL ] * X [ 306ULL ] * t1011 ; t1033 = - pmf_sqrt ( fabs (
t1112 / ( t1015 == 0.0 ? 1.0E-16 : t1015 ) / ( X [ 305ULL ] == 0.0 ? 1.0E-16
: X [ 305ULL ] ) ) ) * 0.0019634954084936209 ; if ( t1033 >= 0.0 ) { t869 =
t1033 * 100000.0 ; } else { t869 = - t1033 * 100000.0 ; } t1037 = t869 * 0.05
/ ( t1096 == 0.0 ? 1.0E-16 : t1096 ) ; t1038 = t1033 * t1024 * 11.2 / ( t1100
== 0.0 ? 1.0E-16 : t1100 ) ; t1039 = t1037 >= 1.0 ? t1037 : 1.0 ;
intrm_sf_mf_915 = pmf_log10 ( 6.9 / ( t1039 == 0.0 ? 1.0E-16 : t1039 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1039 == 0.0 ? 1.0E-16 : t1039
) + 2.8767404433520813E-5 ) * 3.24 ; t869 = t1033 * t869 * ( 1.0 / (
intrm_sf_mf_915 == 0.0 ? 1.0E-16 : intrm_sf_mf_915 ) ) * 0.175 / ( t1103 ==
0.0 ? 1.0E-16 : t1103 ) ; t1040 = ( t1037 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_x_ws_I = t1040 * t1040 *
3.0 - t1040 * t1040 * t1040 * 2.0 ; if ( t1037 <= 2000.0 ) { t1040 = t1038 *
1.0E-5 ; } else if ( t1037 >= 4000.0 ) { t1040 = t869 * 1.0E-5 ; } else {
t1040 = ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_x_ws_I )
* t1038 + t869 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_x_ws_I ) *
1.0E-5 ; } t1013 = X [ 304ULL ] * t1013 / 0.0019634954084936209 *
0.00031622776601683789 + t1040 ; if ( 1.0 - X [ 41ULL ] >= 0.01 ) { t1037 =
1.0 - X [ 41ULL ] ; } else if ( 1.0 - X [ 41ULL ] >= - 0.1 ) { t1037 =
pmf_exp ( ( ( 1.0 - X [ 41ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1037 =
1.6701700790245661E-7 ; } t1038 = X [ 40ULL ] / ( t1037 == 0.0 ? 1.0E-16 :
t1037 ) * 3827.6794129126583 + 296.802103844292 ; t570 [ 0ULL ] = X [ 39ULL ]
; tlu2_linear_linear_prelookup ( & ic_efOut . mField0 [ 0ULL ] , & ic_efOut .
mField1 [ 0ULL ] , & ic_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t57
= ic_efOut ; tlu2_1d_linear_linear_value ( & jc_efOut [ 0ULL ] , & t57 .
mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t452 [ 0 ] = jc_efOut [ 0
] ; t1040 = pmf_exp ( pmf_log ( X [ 42ULL ] * 100000.0 ) - t452 [ 0ULL ] ) ;
if ( t1040 >= 1.0 ) { t1126 = ( t1040 - 1.0 ) * 461.523 + t1038 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_x_ws_I = t1038 / ( t1126 ==
0.0 ? 1.0E-16 : t1126 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_x_ws_I = 1.0 ; } if ( X [
171ULL ] <= 0.0 ) { t1042 = 0.0 ; } else { t1042 = X [ 171ULL ] >= 1.0 ? 1.0
: X [ 171ULL ] ; } if ( X [ 170ULL ] <= 0.0 ) { t1043 = 0.0 ; } else { t1043
= X [ 170ULL ] >= 1.0 ? 1.0 : X [ 170ULL ] ; } t1044 = ( ( ( 1.0 - t1042 ) -
t1043 ) * 296.802103844292 + t1042 * 461.523 ) + t1043 * 4124.48151675695 ;
t1042 = X [ 171ULL ] * 461.523 / ( t1044 == 0.0 ? 1.0E-16 : t1044 ) ; if (
t1042 <= 0.0 ) { t1043 = 0.0 ; } else { t1043 = t1042 >= 1.0 ? 1.0 : t1042 ;
} t1042 = X [ 170ULL ] * 4124.48151675695 / ( t1044 == 0.0 ? 1.0E-16 : t1044
) ; if ( t1042 <= 0.0 ) { t1045 = 0.0 ; } else { t1045 = t1042 >= 1.0 ? 1.0 :
t1042 ; } t570 [ 0ULL ] = X [ 169ULL ] ; tlu2_linear_nearest_prelookup ( &
kc_efOut . mField0 [ 0ULL ] , & kc_efOut . mField1 [ 0ULL ] , & kc_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [
0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t42 = kc_efOut ;
tlu2_1d_linear_nearest_value ( & lc_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = lc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & mc_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = mc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & nc_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = nc_efOut [ 0 ] ; t1042 = ( (
( 1.0 - t1043 ) - t1045 ) * t571_idx_0 + t572_idx_0 * t1043 ) + t569_idx_0 *
t1045 ; tlu2_1d_linear_nearest_value ( & oc_efOut [ 0ULL ] , & t47 . mField0
[ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = oc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & pc_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = pc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qc_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = qc_efOut [ 0 ] ; t869 = ( (
( 1.0 - intrm_sf_mf_753 ) - intrm_sf_mf_616 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_753 ) + t569_idx_0 * intrm_sf_mf_616 ; intrm_sf_mf_753 = ( - X [
192ULL ] - X [ 304ULL ] ) / 2.0 ; tlu2_1d_linear_nearest_value ( & rc_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = rc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & sc_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = sc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & tc_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = tc_efOut [ 0 ] ; t1130 = t1024 + ( ( ( ( 1.0 - t1043 ) - t1045
) * t571_idx_0 + t572_idx_0 * t1043 ) + t569_idx_0 * t1045 ) ; t1132 = t1130
/ 2.0 * 0.0019634954084936209 ; intrm_sf_mf_616 = ( intrm_sf_mf_753 >= 0.0 ?
intrm_sf_mf_753 : 0.0 ) * 0.05 / ( t1132 == 0.0 ? 1.0E-16 : t1132 ) ; t1043 =
intrm_sf_mf_616 >= 0.0 ? intrm_sf_mf_616 : - intrm_sf_mf_616 ;
intrm_sf_mf_616 = t1043 > 1000.0 ? t1043 : 1000.0 ; t1133 = t1042 + t869 ; if
( t1133 / 2.0 > 0.5 ) { t1045 = ( t1042 + t869 ) / 2.0 ; } else { t1045 = 0.5
; } t1135 = pmf_log10 ( 6.9 / ( intrm_sf_mf_616 == 0.0 ? 1.0E-16 :
intrm_sf_mf_616 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_616 == 0.0 ? 1.0E-16 : intrm_sf_mf_616 ) + 2.8767404433520813E-5
) * 3.24 ; t1048 = 1.0 / ( t1135 == 0.0 ? 1.0E-16 : t1135 ) ; t1137 = (
pmf_pow ( t1045 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1048 / 8.0 ) *
12.7 + 1.0 ; t1049 = ( intrm_sf_mf_616 - 1000.0 ) * ( t1048 / 8.0 ) * t1045 /
( t1137 == 0.0 ? 1.0E-16 : t1137 ) ; intrm_sf_mf_640 = ( t1043 - 2000.0 ) /
2000.0 ; t1052 = intrm_sf_mf_640 * intrm_sf_mf_640 * 3.0 - intrm_sf_mf_640 *
intrm_sf_mf_640 * intrm_sf_mf_640 * 2.0 ; if ( t1043 <= 2000.0 ) {
intrm_sf_mf_640 = 3.66 ; } else if ( t1043 >= 4000.0 ) { intrm_sf_mf_640 =
t1049 ; } else { intrm_sf_mf_640 = ( 1.0 - t1052 ) * 3.66 + t1049 * t1052 ; }
t1139 = intrm_sf_mf_640 * 0.039269908169872414 ; t1142 = t1133 / 2.0 ; if (
t1043 > t1139 / 0.0019634954084936209 / ( t1142 == 0.0 ? 1.0E-16 : t1142 ) /
30.0 ) { t1148 = ( t1042 + t869 ) / 2.0 ; t1049 = intrm_sf_mf_640 *
0.039269908169872414 / ( t1043 == 0.0 ? 1.0E-16 : t1043 ) /
0.0019634954084936209 / ( t1148 == 0.0 ? 1.0E-16 : t1148 ) ; } else { t1049 =
30.0 ; } if ( X [ 294ULL ] <= 0.0 ) { t1042 = 0.0 ; } else { t1042 = X [
294ULL ] >= 1.0 ? 1.0 : X [ 294ULL ] ; } if ( X [ 293ULL ] <= 0.0 ) {
intrm_sf_mf_640 = 0.0 ; } else { intrm_sf_mf_640 = X [ 293ULL ] >= 1.0 ? 1.0
: X [ 293ULL ] ; } t1052 = ( ( ( 1.0 - t1042 ) - intrm_sf_mf_640 ) *
296.802103844292 + t1042 * 461.523 ) + intrm_sf_mf_640 * 4124.48151675695 ;
t1042 = X [ 294ULL ] * 461.523 / ( t1052 == 0.0 ? 1.0E-16 : t1052 ) ; if (
t1042 <= 0.0 ) { intrm_sf_mf_640 = 0.0 ; } else { intrm_sf_mf_640 = t1042 >=
1.0 ? 1.0 : t1042 ; } t1042 = X [ 293ULL ] * 4124.48151675695 / ( t1052 ==
0.0 ? 1.0E-16 : t1052 ) ; if ( t1042 <= 0.0 ) { t1053 = 0.0 ; } else { t1053
= t1042 >= 1.0 ? 1.0 : t1042 ; } t570 [ 0ULL ] = X [ 291ULL ] ;
tlu2_linear_nearest_prelookup ( & uc_efOut . mField0 [ 0ULL ] , & uc_efOut .
mField1 [ 0ULL ] , & uc_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t42
= uc_efOut ; tlu2_1d_linear_nearest_value ( & vc_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = vc_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & wc_efOut [ 0ULL ] , & t42 . mField0 [
0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = wc_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & xc_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = xc_efOut [ 0 ] ; t1042 = ( (
( 1.0 - intrm_sf_mf_640 ) - t1053 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_640 ) + t569_idx_0 * t1053 ; t1054 = intrm_sf_mf_753 <= 0.0 ?
intrm_sf_mf_753 : 0.0 ; tlu2_1d_linear_nearest_value ( & yc_efOut [ 0ULL ] ,
& t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 =
yc_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ad_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ad_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & bd_efOut [ 0ULL ] , & t42 . mField0 [
0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField8 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = bd_efOut [ 0 ] ;
intrm_sf_mf_753 = ( ( ( 1.0 - intrm_sf_mf_640 ) - t1053 ) * t571_idx_0 +
t572_idx_0 * intrm_sf_mf_640 ) + t569_idx_0 * t1053 ; t1151 = t1024 +
intrm_sf_mf_753 ; t1153 = t1151 / 2.0 * 0.0019634954084936209 ;
intrm_sf_mf_640 = - t1054 * 0.05 / ( t1153 == 0.0 ? 1.0E-16 : t1153 ) ; t1053
= intrm_sf_mf_640 >= 0.0 ? intrm_sf_mf_640 : - intrm_sf_mf_640 ;
intrm_sf_mf_640 = t1053 > 1000.0 ? t1053 : 1000.0 ; t1154 = t869 + t1042 ; if
( t1154 / 2.0 > 0.5 ) { t1054 = ( t869 + t1042 ) / 2.0 ; } else { t1054 = 0.5
; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos =
pmf_log10 ( 6.9 / ( intrm_sf_mf_640 == 0.0 ? 1.0E-16 : intrm_sf_mf_640 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_640 == 0.0 ?
1.0E-16 : intrm_sf_mf_640 ) + 2.8767404433520813E-5 ) * 3.24 ; t1055 = 1.0 /
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) ;
t1158 = ( pmf_pow ( t1054 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1055
/ 8.0 ) * 12.7 + 1.0 ; t1058 = ( intrm_sf_mf_640 - 1000.0 ) * ( t1055 / 8.0 )
* t1054 / ( t1158 == 0.0 ? 1.0E-16 : t1158 ) ; intrm_sf_mf_698 = ( t1053 -
2000.0 ) / 2000.0 ; t1060 = intrm_sf_mf_698 * intrm_sf_mf_698 * 3.0 -
intrm_sf_mf_698 * intrm_sf_mf_698 * intrm_sf_mf_698 * 2.0 ; if ( t1053 <=
2000.0 ) { intrm_sf_mf_698 = 3.66 ; } else if ( t1053 >= 4000.0 ) {
intrm_sf_mf_698 = t1058 ; } else { intrm_sf_mf_698 = ( 1.0 - t1060 ) * 3.66 +
t1058 * t1060 ; } t1160 = intrm_sf_mf_698 * 0.039269908169872414 ; t1163 =
t1154 / 2.0 ; if ( t1053 > t1160 / 0.0019634954084936209 / ( t1163 == 0.0 ?
1.0E-16 : t1163 ) / 30.0 ) { t1169 = ( t869 + t1042 ) / 2.0 ; t1058 =
intrm_sf_mf_698 * 0.039269908169872414 / ( t1053 == 0.0 ? 1.0E-16 : t1053 ) /
0.0019634954084936209 / ( t1169 == 0.0 ? 1.0E-16 : t1169 ) ; } else { t1058 =
30.0 ; } if ( X [ 8ULL ] <= 0.0 ) { intrm_sf_mf_698 = 0.0 ; } else {
intrm_sf_mf_698 = X [ 8ULL ] >= 1.0 ? 1.0 : X [ 8ULL ] ; } if ( X [ 7ULL ] <=
0.0 ) { t1060 = 0.0 ; } else { t1060 = X [ 7ULL ] >= 1.0 ? 1.0 : X [ 7ULL ] ;
} t1061 = ( ( ( 1.0 - intrm_sf_mf_698 ) - t1060 ) * 296.802103844292 +
intrm_sf_mf_698 * 461.523 ) + t1060 * 4124.48151675695 ; t1062 = - ( ( X [
6ULL ] / ( X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) - X [ 316ULL ] / ( X
[ 317ULL ] == 0.0 ? 1.0E-16 : X [ 317ULL ] ) ) * X [ 304ULL ] * t1061 ) /
0.32 ; if ( X [ 316ULL ] <= 216.59999999999997 ) { t869 = 216.59999999999997
; } else { t869 = X [ 316ULL ] >= 623.15 ? 623.15 : X [ 316ULL ] ; } t830 =
t869 * t869 ; t1064 = ( ( ( 1074.1165326382541 + t869 * - 0.2214565261064077
) + t830 * 0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_698 ) - t1060 ) +
( ( 1479.6504774710445 + t869 * 1.200211433705052 ) + t830 * -
0.00038614513167842338 ) * intrm_sf_mf_698 ) + ( ( 12825.281119790017 + t869
* 6.9647057412830984 ) + t830 * - 0.007052486824683288 ) * t1060 ; t1175 =
t1064 - t1061 ; t830 = t1064 / ( t1175 == 0.0 ? 1.0E-16 : t1175 ) ; t1066 =
pmf_sqrt ( t1062 * t1062 * 9.999999999999999E-14 + fabs ( X [ 316ULL ] * t830
* t1061 ) * 1.0E-9 ) ; if ( X [ 77ULL ] <= 0.0 ) { t1067 = 0.0 ; } else {
t1067 = X [ 77ULL ] >= 1.0 ? 1.0 : X [ 77ULL ] ; } if ( X [ 76ULL ] <= 0.0 )
{ t1069 = 0.0 ; } else { t1069 = X [ 76ULL ] >= 1.0 ? 1.0 : X [ 76ULL ] ; }
t570 [ 0ULL ] = X [ 6ULL ] ; tlu2_linear_nearest_prelookup ( & cd_efOut .
mField0 [ 0ULL ] , & cd_efOut . mField1 [ 0ULL ] , & cd_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59 = cd_efOut ;
tlu2_1d_linear_nearest_value ( & dd_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = dd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ed_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ed_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fd_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = fd_efOut [ 0 ] ; t1070 = ( ( (
1.0 - t1067 ) - t1069 ) * t571_idx_0 + t572_idx_0 * t1067 ) + t569_idx_0 *
t1069 ; t1176 = X [ 317ULL ] * X [ 317ULL ] * t830 ; t1073 = - pmf_sqrt (
fabs ( t1176 / ( t1061 == 0.0 ? 1.0E-16 : t1061 ) / ( X [ 316ULL ] == 0.0 ?
1.0E-16 : X [ 316ULL ] ) ) ) * 0.32 ; if ( t1073 >= 0.0 ) { t1074 = t1073 *
100000.0 ; } else { t1074 = - t1073 * 100000.0 ; } t1180 = t1070 * 0.32 ;
t869 = t1074 * 0.01 / ( t1180 == 0.0 ? 1.0E-16 : t1180 ) ; t891 = X [ 6ULL ]
* t1061 ; t1077 = X [ 43ULL ] / ( t891 == 0.0 ? 1.0E-16 : t891 ) ; t1184 =
t1077 * 6.4000000000000011E-5 ; t1078 = t1073 * t1070 * 2.9973120849090416 /
( t1184 == 0.0 ? 1.0E-16 : t1184 ) ; t1079 = t869 >= 1.0 ? t869 : 1.0 ;
intrm_sf_mf_1052 = pmf_log10 ( 6.9 / ( t1079 == 0.0 ? 1.0E-16 : t1079 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1079 == 0.0 ? 1.0E-16 : t1079
) + 0.00017169489553429715 ) * 3.24 ; t1187 = t1077 * 0.0020480000000000003 ;
t1074 = t1073 * t1074 * ( 1.0 / ( intrm_sf_mf_1052 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1052 ) ) * 0.046833001326703774 / ( t1187 == 0.0 ? 1.0E-16 :
t1187 ) ; t1081 = ( t869 - 2000.0 ) / 2000.0 ; t891 = t1081 * t1081 * 3.0 -
t1081 * t1081 * t1081 * 2.0 ; if ( t869 <= 2000.0 ) { t1081 = t1078 * 1.0E-5
; } else if ( t869 >= 4000.0 ) { t1081 = t1074 * 1.0E-5 ; } else { t1081 = (
( 1.0 - t891 ) * t1078 + t1074 * t891 ) * 1.0E-5 ; } t1066 = - ( X [ 304ULL ]
* t1066 ) / 0.32 * 0.00031622776601683789 + t1081 ; t1074 = ( X [ 6ULL ] / (
X [ 43ULL ] == 0.0 ? 1.0E-16 : X [ 43ULL ] ) - X [ 319ULL ] / ( X [ 320ULL ]
== 0.0 ? 1.0E-16 : X [ 320ULL ] ) ) * X [ 318ULL ] * t1061 / 0.32 ; if ( X [
319ULL ] <= 216.59999999999997 ) { t869 = 216.59999999999997 ; } else { t869
= X [ 319ULL ] >= 623.15 ? 623.15 : X [ 319ULL ] ; } t833 = t869 * t869 ;
t1078 = ( ( ( 1074.1165326382541 + t869 * - 0.2214565261064077 ) + t833 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_698 ) - t1060 ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t833 * -
0.00038614513167842338 ) * intrm_sf_mf_698 ) + ( ( 12825.281119790017 + t869
* 6.9647057412830984 ) + t833 * - 0.007052486824683288 ) * t1060 ; t1195 =
t1078 - t1061 ; intrm_sf_mf_698 = t1078 / ( t1195 == 0.0 ? 1.0E-16 : t1195 )
; t1060 = pmf_sqrt ( t1074 * t1074 * 9.999999999999999E-14 + fabs ( X [
319ULL ] * intrm_sf_mf_698 * t1061 ) * 1.0E-9 ) ; t1196 = X [ 320ULL ] * X [
320ULL ] * intrm_sf_mf_698 ; t1081 = - pmf_sqrt ( fabs ( t1196 / ( t1061 ==
0.0 ? 1.0E-16 : t1061 ) / ( X [ 319ULL ] == 0.0 ? 1.0E-16 : X [ 319ULL ] ) )
) * 0.32 ; if ( t1081 >= 0.0 ) { t891 = t1081 * 100000.0 ; } else { t891 = -
t1081 * 100000.0 ; } t833 = t891 * 0.01 / ( t1180 == 0.0 ? 1.0E-16 : t1180 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I = t1081 * t1070 *
2.9973120849090416 / ( t1184 == 0.0 ? 1.0E-16 : t1184 ) ; t1086 = t833 >= 1.0
? t833 : 1.0 ; t1203 = pmf_log10 ( 6.9 / ( t1086 == 0.0 ? 1.0E-16 : t1086 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1086 == 0.0 ? 1.0E-16 : t1086
) + 0.00017169489553429715 ) * 3.24 ; t891 = t1081 * t891 * ( 1.0 / ( t1203
== 0.0 ? 1.0E-16 : t1203 ) ) * 0.046833001326703774 / ( t1187 == 0.0 ?
1.0E-16 : t1187 ) ; intrm_sf_mf_729 = ( t833 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_x_ws_I = intrm_sf_mf_729 *
intrm_sf_mf_729 * 3.0 - intrm_sf_mf_729 * intrm_sf_mf_729 * intrm_sf_mf_729 *
2.0 ; if ( t833 <= 2000.0 ) { intrm_sf_mf_729 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I * 1.0E-5 ; } else if
( t833 >= 4000.0 ) { intrm_sf_mf_729 = t891 * 1.0E-5 ; } else {
intrm_sf_mf_729 = ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_x_ws_I ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I + t891 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_x_ws_I ) * 1.0E-5 ; } t1060
= X [ 318ULL ] * t1060 / 0.32 * 0.00031622776601683789 + intrm_sf_mf_729 ; if
( 1.0 - X [ 8ULL ] >= 0.01 ) { t833 = 1.0 - X [ 8ULL ] ; } else if ( 1.0 - X
[ 8ULL ] >= - 0.1 ) { t833 = pmf_exp ( ( ( 1.0 - X [ 8ULL ] ) - 0.01 ) / 0.01
) * 0.01 ; } else { t833 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I = X [ 7ULL ] / (
t833 == 0.0 ? 1.0E-16 : t833 ) * 3827.6794129126583 + 296.802103844292 ; t570
[ 0ULL ] = X [ 6ULL ] ; tlu2_linear_linear_prelookup ( & gd_efOut . mField0 [
0ULL ] , & gd_efOut . mField1 [ 0ULL ] , & gd_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] ,
& t68 [ 0ULL ] ) ; t57 = gd_efOut ; tlu2_1d_linear_linear_value ( & hd_efOut
[ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t449 [ 0 ] = hd_efOut [ 0 ] ; intrm_sf_mf_729 = pmf_exp ( pmf_log ( X [
43ULL ] * 100000.0 ) - t449 [ 0ULL ] ) ; if ( intrm_sf_mf_729 >= 1.0 ) {
t1210 = ( intrm_sf_mf_729 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_x_ws_I =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I / ( t1210 == 0.0 ?
1.0E-16 : t1210 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_x_ws_I = 1.0 ; }
tlu2_1d_linear_nearest_value ( & id_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = id_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jd_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = jd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kd_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = kd_efOut [ 0 ] ; t869 = ( (
( 1.0 - t1067 ) - t1069 ) * t571_idx_0 + t572_idx_0 * t1067 ) + t569_idx_0 *
t1069 ; t1067 = ( - X [ 304ULL ] - X [ 318ULL ] ) / 2.0 ; t1212 =
intrm_sf_mf_753 + t1070 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI = t1212 / 2.0
* 0.32 ; intrm_sf_mf_753 = ( t1067 >= 0.0 ? t1067 : 0.0 ) * 0.01 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI ) ;
t1069 = intrm_sf_mf_753 >= 0.0 ? intrm_sf_mf_753 : - intrm_sf_mf_753 ;
intrm_sf_mf_753 = t1069 > 1000.0 ? t1069 : 1000.0 ; t1215 = t1042 + t869 ; if
( t1215 / 2.0 > 0.5 ) { t1091 = ( t1042 + t869 ) / 2.0 ; } else { t1091 = 0.5
; } t1217 = pmf_log10 ( 6.9 / ( intrm_sf_mf_753 == 0.0 ? 1.0E-16 :
intrm_sf_mf_753 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_753 == 0.0 ? 1.0E-16 : intrm_sf_mf_753 ) + 0.00017169489553429715
) * 3.24 ; t1093 = 1.0 / ( t1217 == 0.0 ? 1.0E-16 : t1217 ) ; t1219 = (
pmf_pow ( t1091 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1093 / 8.0 ) *
12.7 + 1.0 ; t1095 = ( intrm_sf_mf_753 - 1000.0 ) * ( t1093 / 8.0 ) * t1091 /
( t1219 == 0.0 ? 1.0E-16 : t1219 ) ; t1098 = ( t1069 - 2000.0 ) / 2000.0 ;
t1099 = t1098 * t1098 * 3.0 - t1098 * t1098 * t1098 * 2.0 ; if ( t1069 <=
2000.0 ) { t1098 = 3.66 ; } else if ( t1069 >= 4000.0 ) { t1098 = t1095 ; }
else { t1098 = ( 1.0 - t1099 ) * 3.66 + t1095 * t1099 ; } t1221 = t1098 *
10.709248339636167 ; t1224 = t1215 / 2.0 ; if ( t1069 > t1221 / 0.32 / (
t1224 == 0.0 ? 1.0E-16 : t1224 ) / 30.0 ) { intrm_sf_mf_1176 = ( t1042 + t869
) / 2.0 ; t1095 = t1098 * 10.709248339636167 / ( t1069 == 0.0 ? 1.0E-16 :
t1069 ) / 0.32 / ( intrm_sf_mf_1176 == 0.0 ? 1.0E-16 : intrm_sf_mf_1176 ) ; }
else { t1095 = 30.0 ; } if ( X [ 71ULL ] <= 0.0 ) { t1042 = 0.0 ; } else {
t1042 = X [ 71ULL ] >= 1.0 ? 1.0 : X [ 71ULL ] ; } if ( X [ 70ULL ] <= 0.0 )
{ t1098 = 0.0 ; } else { t1098 = X [ 70ULL ] >= 1.0 ? 1.0 : X [ 70ULL ] ; }
t1099 = ( ( ( 1.0 - t1042 ) - t1098 ) * 296.802103844292 + t1042 * 461.523 )
+ t1098 * 4124.48151675695 ; t1042 = X [ 71ULL ] * 461.523 / ( t1099 == 0.0 ?
1.0E-16 : t1099 ) ; if ( t1042 <= 0.0 ) { t1098 = 0.0 ; } else { t1098 =
t1042 >= 1.0 ? 1.0 : t1042 ; } t1042 = X [ 70ULL ] * 4124.48151675695 / (
t1099 == 0.0 ? 1.0E-16 : t1099 ) ; if ( t1042 <= 0.0 ) { t1100 = 0.0 ; } else
{ t1100 = t1042 >= 1.0 ? 1.0 : t1042 ; } t570 [ 0ULL ] = X [ 68ULL ] ;
tlu2_linear_nearest_prelookup ( & ld_efOut . mField0 [ 0ULL ] , & ld_efOut .
mField1 [ 0ULL ] , & ld_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59
= ld_efOut ; tlu2_1d_linear_nearest_value ( & md_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = md_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & nd_efOut [ 0ULL ] , & t59 . mField0 [
0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = nd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & od_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = od_efOut [ 0 ] ; t1042 = ( (
( 1.0 - t1098 ) - t1100 ) * t571_idx_0 + t572_idx_0 * t1098 ) + t569_idx_0 *
t1100 ; t1101 = t1067 <= 0.0 ? t1067 : 0.0 ; tlu2_1d_linear_nearest_value ( &
pd_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = pd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qd_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = qd_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rd_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField8 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = rd_efOut [ 0 ] ; t1067 = ( ( ( 1.0 - t1098 ) - t1100 ) *
t571_idx_0 + t572_idx_0 * t1098 ) + t569_idx_0 * t1100 ; t1233 = t1070 +
t1067 ; t1235 = t1233 / 2.0 * 0.32 ; t1098 = - t1101 * 0.01 / ( t1235 == 0.0
? 1.0E-16 : t1235 ) ; t1100 = t1098 >= 0.0 ? t1098 : - t1098 ; t1098 = t1100
> 1000.0 ? t1100 : 1000.0 ; t1236 = t869 + t1042 ; if ( t1236 / 2.0 > 0.5 ) {
t1101 = ( t869 + t1042 ) / 2.0 ; } else { t1101 = 0.5 ; } t1238 = pmf_log10 (
6.9 / ( t1098 == 0.0 ? 1.0E-16 : t1098 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1098 == 0.0 ? 1.0E-16 : t1098 ) + 0.00017169489553429715
) * 3.24 ; t1102 = 1.0 / ( t1238 == 0.0 ? 1.0E-16 : t1238 ) ; t1240 = (
pmf_pow ( t1101 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1102 / 8.0 ) *
12.7 + 1.0 ; t1103 = ( t1098 - 1000.0 ) * ( t1102 / 8.0 ) * t1101 / ( t1240
== 0.0 ? 1.0E-16 : t1240 ) ; intrm_sf_mf_835 = ( t1100 - 2000.0 ) / 2000.0 ;
t1105 = intrm_sf_mf_835 * intrm_sf_mf_835 * 3.0 - intrm_sf_mf_835 *
intrm_sf_mf_835 * intrm_sf_mf_835 * 2.0 ; if ( t1100 <= 2000.0 ) {
intrm_sf_mf_835 = 3.66 ; } else if ( t1100 >= 4000.0 ) { intrm_sf_mf_835 =
t1103 ; } else { intrm_sf_mf_835 = ( 1.0 - t1105 ) * 3.66 + t1103 * t1105 ; }
t1242 = intrm_sf_mf_835 * 10.709248339636167 ; t1245 = t1236 / 2.0 ; if (
t1100 > t1242 / 0.32 / ( t1245 == 0.0 ? 1.0E-16 : t1245 ) / 30.0 ) { t1251 =
( t869 + t1042 ) / 2.0 ; t1103 = intrm_sf_mf_835 * 10.709248339636167 / (
t1100 == 0.0 ? 1.0E-16 : t1100 ) / 0.32 / ( t1251 == 0.0 ? 1.0E-16 : t1251 )
; } else { t1103 = 30.0 ; } if ( X [ 11ULL ] <= 0.0 ) { intrm_sf_mf_835 = 0.0
; } else { intrm_sf_mf_835 = X [ 11ULL ] >= 1.0 ? 1.0 : X [ 11ULL ] ; } if (
X [ 10ULL ] <= 0.0 ) { t1105 = 0.0 ; } else { t1105 = X [ 10ULL ] >= 1.0 ?
1.0 : X [ 10ULL ] ; } t1109 = ( ( ( 1.0 - intrm_sf_mf_835 ) - t1105 ) *
296.802103844292 + intrm_sf_mf_835 * 461.523 ) + t1105 * 4124.48151675695 ;
t1110 = - ( ( X [ 9ULL ] / ( X [ 44ULL ] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X
[ 330ULL ] / ( X [ 331ULL ] == 0.0 ? 1.0E-16 : X [ 331ULL ] ) ) * X [ 318ULL
] * t1109 ) / 0.32 ; if ( X [ 330ULL ] <= 216.59999999999997 ) { t869 =
216.59999999999997 ; } else { t869 = X [ 330ULL ] >= 623.15 ? 623.15 : X [
330ULL ] ; } t1115 = t869 * t869 ; t1113 = ( ( ( 1074.1165326382541 + t869 *
- 0.2214565261064077 ) + t1115 * 0.00037212980109010952 ) * ( ( 1.0 -
intrm_sf_mf_835 ) - t1105 ) + ( ( 1479.6504774710445 + t869 *
1.200211433705052 ) + t1115 * - 0.00038614513167842338 ) * intrm_sf_mf_835 )
+ ( ( 12825.281119790017 + t869 * 6.9647057412830984 ) + t1115 * -
0.007052486824683288 ) * t1105 ; t1257 = t1113 - t1109 ; t1115 = t1113 / (
t1257 == 0.0 ? 1.0E-16 : t1257 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Dp_AI_choked = pmf_sqrt (
t1110 * t1110 * 9.999999999999999E-14 + fabs ( X [ 330ULL ] * t1115 * t1109 )
* 1.0E-9 ) ; if ( X [ 82ULL ] <= 0.0 ) { intrm_sf_mf_915 = 0.0 ; } else {
intrm_sf_mf_915 = X [ 82ULL ] >= 1.0 ? 1.0 : X [ 82ULL ] ; } if ( X [ 81ULL ]
<= 0.0 ) { intrm_sf_mf_889 = 0.0 ; } else { intrm_sf_mf_889 = X [ 81ULL ] >=
1.0 ? 1.0 : X [ 81ULL ] ; } t570 [ 0ULL ] = X [ 9ULL ] ;
tlu2_linear_nearest_prelookup ( & sd_efOut . mField0 [ 0ULL ] , & sd_efOut .
mField1 [ 0ULL ] , & sd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t47
= sd_efOut ; tlu2_1d_linear_nearest_value ( & td_efOut [ 0ULL ] , & t47 .
mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = td_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ud_efOut [ 0ULL ] , & t47 . mField0 [
0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ud_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vd_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField8 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = vd_efOut [ 0 ] ; t1122 = ( ( (
1.0 - intrm_sf_mf_915 ) - intrm_sf_mf_889 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_915 ) + t569_idx_0 * intrm_sf_mf_889 ; t1258 = X [ 331ULL ] * X [
331ULL ] * t1115 ; t1123 = - pmf_sqrt ( fabs ( t1258 / ( t1109 == 0.0 ?
1.0E-16 : t1109 ) / ( X [ 330ULL ] == 0.0 ? 1.0E-16 : X [ 330ULL ] ) ) ) *
0.32 ; if ( t1123 >= 0.0 ) { t1124 = t1123 * 100000.0 ; } else { t1124 = -
t1123 * 100000.0 ; } t1262 = t1122 * 0.32 ; t869 = t1124 * 0.01 / ( t1262 ==
0.0 ? 1.0E-16 : t1262 ) ; t1264 = X [ 9ULL ] * t1109 ; t1126 = X [ 44ULL ] /
( t1264 == 0.0 ? 1.0E-16 : t1264 ) ; t1266 = t1126 * 6.4000000000000011E-5 ;
t1127 = t1123 * t1122 * 2.9973120849090416 / ( t1266 == 0.0 ? 1.0E-16 : t1266
) ; t1128 = t869 >= 1.0 ? t869 : 1.0 ; t1267 = pmf_log10 ( 6.9 / ( t1128 ==
0.0 ? 1.0E-16 : t1128 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t1128 == 0.0 ? 1.0E-16 : t1128 ) + 0.00017169489553429715 ) * 3.24 ; t1269 =
t1126 * 0.0020480000000000003 ; t1124 = t1123 * t1124 * ( 1.0 / ( t1267 ==
0.0 ? 1.0E-16 : t1267 ) ) * 0.046833001326703774 / ( t1269 == 0.0 ? 1.0E-16 :
t1269 ) ; t1129 = ( t869 - 2000.0 ) / 2000.0 ; t891 = t1129 * t1129 * 3.0 -
t1129 * t1129 * t1129 * 2.0 ; if ( t869 <= 2000.0 ) { t1129 = t1127 * 1.0E-5
; } else if ( t869 >= 4000.0 ) { t1129 = t1124 * 1.0E-5 ; } else { t1129 = (
( 1.0 - t891 ) * t1127 + t1124 * t891 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Dp_AI_choked = - ( X [
318ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Dp_AI_choked )
/ 0.32 * 0.00031622776601683789 + t1129 ; t1124 = ( X [ 9ULL ] / ( X [ 44ULL
] == 0.0 ? 1.0E-16 : X [ 44ULL ] ) - X [ 332ULL ] / ( X [ 333ULL ] == 0.0 ?
1.0E-16 : X [ 333ULL ] ) ) * X [ 138ULL ] * t1109 / 0.32 ; if ( X [ 332ULL ]
<= 216.59999999999997 ) { t869 = 216.59999999999997 ; } else { t869 = X [
332ULL ] >= 623.15 ? 623.15 : X [ 332ULL ] ; } t1132 = t869 * t869 ; t1127 =
( ( ( 1074.1165326382541 + t869 * - 0.2214565261064077 ) + t1132 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_835 ) - t1105 ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t1132 * -
0.00038614513167842338 ) * intrm_sf_mf_835 ) + ( ( 12825.281119790017 + t869
* 6.9647057412830984 ) + t1132 * - 0.007052486824683288 ) * t1105 ; t1277 =
t1127 - t1109 ; intrm_sf_mf_835 = t1127 / ( t1277 == 0.0 ? 1.0E-16 : t1277 )
; t1105 = pmf_sqrt ( t1124 * t1124 * 9.999999999999999E-14 + fabs ( X [
332ULL ] * intrm_sf_mf_835 * t1109 ) * 1.0E-9 ) ; t1278 = X [ 333ULL ] * X [
333ULL ] * intrm_sf_mf_835 ; t1129 = - pmf_sqrt ( fabs ( t1278 / ( t1109 ==
0.0 ? 1.0E-16 : t1109 ) / ( X [ 332ULL ] == 0.0 ? 1.0E-16 : X [ 332ULL ] ) )
) * 0.32 ; if ( t1129 >= 0.0 ) { t891 = t1129 * 100000.0 ; } else { t891 = -
t1129 * 100000.0 ; } t1132 = t891 * 0.01 / ( t1262 == 0.0 ? 1.0E-16 : t1262 )
; t1134 = t1129 * t1122 * 2.9973120849090416 / ( t1266 == 0.0 ? 1.0E-16 :
t1266 ) ; t1135 = t1132 >= 1.0 ? t1132 : 1.0 ; t1285 = pmf_log10 ( 6.9 / (
t1135 == 0.0 ? 1.0E-16 : t1135 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t1135 == 0.0 ? 1.0E-16 : t1135 ) + 0.00017169489553429715 ) * 3.24 ; t891
= t1129 * t891 * ( 1.0 / ( t1285 == 0.0 ? 1.0E-16 : t1285 ) ) *
0.046833001326703774 / ( t1269 == 0.0 ? 1.0E-16 : t1269 ) ; t1136 = ( t1132 -
2000.0 ) / 2000.0 ; t1137 = t1136 * t1136 * 3.0 - t1136 * t1136 * t1136 * 2.0
; if ( t1132 <= 2000.0 ) { t1136 = t1134 * 1.0E-5 ; } else if ( t1132 >=
4000.0 ) { t1136 = t891 * 1.0E-5 ; } else { t1136 = ( ( 1.0 - t1137 ) * t1134
+ t891 * t1137 ) * 1.0E-5 ; } t1105 = X [ 138ULL ] * t1105 / 0.32 *
0.00031622776601683789 + t1136 ; if ( 1.0 - X [ 11ULL ] >= 0.01 ) { t1132 =
1.0 - X [ 11ULL ] ; } else if ( 1.0 - X [ 11ULL ] >= - 0.1 ) { t1132 =
pmf_exp ( ( ( 1.0 - X [ 11ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1132 =
1.6701700790245661E-7 ; } t1134 = X [ 10ULL ] / ( t1132 == 0.0 ? 1.0E-16 :
t1132 ) * 3827.6794129126583 + 296.802103844292 ; t570 [ 0ULL ] = X [ 9ULL ]
; tlu2_linear_linear_prelookup ( & wd_efOut . mField0 [ 0ULL ] , & wd_efOut .
mField1 [ 0ULL ] , & wd_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t49
= wd_efOut ; tlu2_1d_linear_linear_value ( & xd_efOut [ 0ULL ] , & t49 .
mField0 [ 0ULL ] , & t49 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t85 [ 0 ] = xd_efOut [ 0 ]
; t1136 = pmf_exp ( pmf_log ( X [ 44ULL ] * 100000.0 ) - t85 [ 0ULL ] ) ; if
( t1136 >= 1.0 ) { t1292 = ( t1136 - 1.0 ) * 461.523 + t1134 ; t1137 = t1134
/ ( t1292 == 0.0 ? 1.0E-16 : t1292 ) ; } else { t1137 = 1.0 ; }
tlu2_1d_linear_nearest_value ( & yd_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = yd_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ae_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ae_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & be_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField15 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = be_efOut [ 0 ] ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = ( ( ( 1.0 -
intrm_sf_mf_915 ) - intrm_sf_mf_889 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_915 ) + t569_idx_0 * intrm_sf_mf_889 ; intrm_sf_mf_915 = ( - X [
318ULL ] - X [ 138ULL ] ) / 2.0 ; t1294 = t1067 + t1122 ; t1296 = t1294 / 2.0
* 0.32 ; t1067 = ( intrm_sf_mf_915 >= 0.0 ? intrm_sf_mf_915 : 0.0 ) * 0.01 /
( t1296 == 0.0 ? 1.0E-16 : t1296 ) ; intrm_sf_mf_889 = t1067 >= 0.0 ? t1067 :
- t1067 ; t1067 = intrm_sf_mf_889 > 1000.0 ? intrm_sf_mf_889 : 1000.0 ; t1297
= t1042 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; if (
t1297 / 2.0 > 0.5 ) { t1141 = ( t1042 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) / 2.0 ; } else {
t1141 = 0.5 ; } t1299 = pmf_log10 ( 6.9 / ( t1067 == 0.0 ? 1.0E-16 : t1067 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1067 == 0.0 ? 1.0E-16 :
t1067 ) + 0.00017169489553429715 ) * 3.24 ; t1142 = 1.0 / ( t1299 == 0.0 ?
1.0E-16 : t1299 ) ; t1301 = ( pmf_pow ( t1141 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t1142 / 8.0 ) * 12.7 + 1.0 ; t1143 = ( t1067 - 1000.0 ) * (
t1142 / 8.0 ) * t1141 / ( t1301 == 0.0 ? 1.0E-16 : t1301 ) ; t1144 = (
intrm_sf_mf_889 - 2000.0 ) / 2000.0 ; t1145 = t1144 * t1144 * 3.0 - t1144 *
t1144 * t1144 * 2.0 ; if ( intrm_sf_mf_889 <= 2000.0 ) { t1144 = 3.66 ; }
else if ( intrm_sf_mf_889 >= 4000.0 ) { t1144 = t1143 ; } else { t1144 = (
1.0 - t1145 ) * 3.66 + t1143 * t1145 ; } t1303 = t1144 * 10.709248339636167 ;
t1306 = t1297 / 2.0 ; if ( intrm_sf_mf_889 > t1303 / 0.32 / ( t1306 == 0.0 ?
1.0E-16 : t1306 ) / 30.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked = ( t1042 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) / 2.0 ; t1143 =
t1144 * 10.709248339636167 / ( intrm_sf_mf_889 == 0.0 ? 1.0E-16 :
intrm_sf_mf_889 ) / 0.32 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked ) ;
} else { t1143 = 30.0 ; } t1313 = t894 + t1122 ; t1315 = t1313 / 2.0 * 0.32 ;
t894 = - ( intrm_sf_mf_915 <= 0.0 ? intrm_sf_mf_915 : 0.0 ) * 0.01 / ( t1315
== 0.0 ? 1.0E-16 : t1315 ) ; t1042 = t894 >= 0.0 ? t894 : - t894 ; t894 =
t1042 > 1000.0 ? t1042 : 1000.0 ; t1316 = t873 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; if ( t1316 / 2.0
> 0.5 ) { intrm_sf_mf_915 = ( t873 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) / 2.0 ; } else {
intrm_sf_mf_915 = 0.5 ; } t1318 = pmf_log10 ( 6.9 / ( t894 == 0.0 ? 1.0E-16 :
t894 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t894 == 0.0 ? 1.0E-16
: t894 ) + 0.00017169489553429715 ) * 3.24 ; t1144 = 1.0 / ( t1318 == 0.0 ?
1.0E-16 : t1318 ) ; t891 = ( pmf_pow ( intrm_sf_mf_915 , 0.66666666666666663
) - 1.0 ) * pmf_sqrt ( t1144 / 8.0 ) * 12.7 + 1.0 ; t1145 = ( t894 - 1000.0 )
* ( t1144 / 8.0 ) * intrm_sf_mf_915 / ( t891 == 0.0 ? 1.0E-16 : t891 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = ( t1042 -
2000.0 ) / 2000.0 ; t1147 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 * 2.0 ; if (
t1042 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = 3.66 ; }
else if ( t1042 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = t1145 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = (
1.0 - t1147 ) * 3.66 + t1145 * t1147 ; } t1322 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 *
10.709248339636167 ; t1325 = t1316 / 2.0 ; if ( t1042 > t1322 / 0.32 / (
t1325 == 0.0 ? 1.0E-16 : t1325 ) / 30.0 ) { t1331 = ( t873 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) / 2.0 ; t1145 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 *
10.709248339636167 / ( t1042 == 0.0 ? 1.0E-16 : t1042 ) / 0.32 / ( t1331 ==
0.0 ? 1.0E-16 : t1331 ) ; } else { t1145 = 30.0 ; } if ( X [ 47ULL ] <= 0.0 )
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X [ 47ULL ] >=
1.0 ? 1.0 : X [ 47ULL ] ; } if ( X [ 46ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = X [
46ULL ] >= 1.0 ? 1.0 : X [ 46ULL ] ; } t1147 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) *
296.802103844292 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI
* 461.523 ) + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1
* 259.836612622973 ; t1148 = - ( ( X [ 45ULL ] / ( X [ 48ULL ] == 0.0 ?
1.0E-16 : X [ 48ULL ] ) - X [ 351ULL ] / ( X [ 352ULL ] == 0.0 ? 1.0E-16 : X
[ 352ULL ] ) ) * X [ 281ULL ] * t1147 ) / 0.0019634954084936209 ; if ( X [
351ULL ] <= 216.59999999999997 ) { t869 = 216.59999999999997 ; } else { t869
= X [ 351ULL ] >= 623.15 ? 623.15 : X [ 351ULL ] ; } t842 = t869 * t869 ;
t1150 = ( ( ( 1074.1165326382541 + t869 * - 0.2214565261064077 ) + t842 *
0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t842 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224837913 + t869 * - 0.044484923911364271 ) + t842 *
0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ; t1337 =
t1150 - t1147 ; t842 = t1150 / ( t1337 == 0.0 ? 1.0E-16 : t1337 ) ; t1153 =
pmf_sqrt ( t1148 * t1148 * 9.999999999999999E-14 + fabs ( X [ 351ULL ] * t842
* t1147 ) * 1.0E-9 ) ; if ( X [ 348ULL ] <= 0.0 ) { intrm_sf_mf_1352 = 0.0 ;
} else { intrm_sf_mf_1352 = X [ 348ULL ] >= 1.0 ? 1.0 : X [ 348ULL ] ; } if (
X [ 347ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos = X [ 347ULL
] >= 1.0 ? 1.0 : X [ 347ULL ] ; } t570 [ 0ULL ] = X [ 45ULL ] ;
tlu2_linear_nearest_prelookup ( & ce_efOut . mField0 [ 0ULL ] , & ce_efOut .
mField1 [ 0ULL ] , & ce_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59
= ce_efOut ; tlu2_1d_linear_nearest_value ( & de_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = de_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ee_efOut [ 0ULL ] , & t59 . mField0 [
0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ee_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fe_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = fe_efOut [ 0 ] ; t1157 = ( (
( 1.0 - intrm_sf_mf_1352 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) * t571_idx_0
+ t572_idx_0 * intrm_sf_mf_1352 ) + t569_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ; t1338 = X [
352ULL ] * X [ 352ULL ] * t842 ; t1158 = - pmf_sqrt ( fabs ( t1338 / ( t1147
== 0.0 ? 1.0E-16 : t1147 ) / ( X [ 351ULL ] == 0.0 ? 1.0E-16 : X [ 351ULL ] )
) ) * 0.0019634954084936209 ; if ( t1158 >= 0.0 ) { t1159 = t1158 * 100000.0
; } else { t1159 = - t1158 * 100000.0 ; } t1342 = t1157 *
0.0019634954084936209 ; t869 = t1159 * 0.05 / ( t1342 == 0.0 ? 1.0E-16 :
t1342 ) ; t1344 = X [ 45ULL ] * t1147 ; t1163 = X [ 48ULL ] / ( t1344 == 0.0
? 1.0E-16 : t1344 ) ; t1346 = t1163 * 9.8174770424681068E-6 ; t1164 = t1158 *
t1157 * 11.2 / ( t1346 == 0.0 ? 1.0E-16 : t1346 ) ; t1165 = t869 >= 1.0 ?
t869 : 1.0 ; t572_idx_0 = pmf_log10 ( 6.9 / ( t1165 == 0.0 ? 1.0E-16 : t1165
) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1165 == 0.0 ? 1.0E-16 :
t1165 ) + 2.8767404433520813E-5 ) * 3.24 ; t1349 = t1163 *
3.855314219175531E-7 ; t1159 = t1158 * t1159 * ( 1.0 / ( t572_idx_0 == 0.0 ?
1.0E-16 : t572_idx_0 ) ) * 0.175 / ( t1349 == 0.0 ? 1.0E-16 : t1349 ) ; t1166
= ( t869 - 2000.0 ) / 2000.0 ; t891 = t1166 * t1166 * 3.0 - t1166 * t1166 *
t1166 * 2.0 ; if ( t869 <= 2000.0 ) { t1166 = t1164 * 1.0E-5 ; } else if (
t869 >= 4000.0 ) { t1166 = t1159 * 1.0E-5 ; } else { t1166 = ( ( 1.0 - t891 )
* t1164 + t1159 * t891 ) * 1.0E-5 ; } t1153 = - ( X [ 281ULL ] * t1153 ) /
0.0019634954084936209 * 0.00031622776601683789 + t1166 ; t1159 = ( X [ 45ULL
] / ( X [ 48ULL ] == 0.0 ? 1.0E-16 : X [ 48ULL ] ) - X [ 354ULL ] / ( X [
355ULL ] == 0.0 ? 1.0E-16 : X [ 355ULL ] ) ) * X [ 353ULL ] * t1147 /
0.0019634954084936209 ; if ( X [ 354ULL ] <= 216.59999999999997 ) { t869 =
216.59999999999997 ; } else { t869 = X [ 354ULL ] >= 623.15 ? 623.15 : X [
354ULL ] ; } t1168 = t869 * t869 ; t1164 = ( ( ( 1074.1165326382541 + t869 *
- 0.2214565261064077 ) + t1168 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t1168 * -
0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ) + ( (
900.63941224837913 + t869 * - 0.044484923911364271 ) + t1168 *
0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 ; t873 =
t1164 - t1147 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI =
t1164 / ( t873 == 0.0 ? 1.0E-16 : t873 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 = pmf_sqrt (
t1159 * t1159 * 9.999999999999999E-14 + fabs ( X [ 354ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) * 1.0E-9
) ; t1358 = X [ 355ULL ] * X [ 355ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ; t1166 = -
pmf_sqrt ( fabs ( t1358 / ( t1147 == 0.0 ? 1.0E-16 : t1147 ) / ( X [ 354ULL ]
== 0.0 ? 1.0E-16 : X [ 354ULL ] ) ) ) * 0.0019634954084936209 ; t891 = t1166
* t1157 * 11.2 / ( t1346 == 0.0 ? 1.0E-16 : t1346 ) ; if ( t1166 >= 0.0 ) {
t1168 = t1166 * 100000.0 ; } else { t1168 = - t1166 * 100000.0 ; } t1169 =
t1168 * 0.05 / ( t1342 == 0.0 ? 1.0E-16 : t1342 ) ; t1170 = t1169 >= 1.0 ?
t1169 : 1.0 ; t1376 = pmf_log10 ( 6.9 / ( t1170 == 0.0 ? 1.0E-16 : t1170 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1170 == 0.0 ? 1.0E-16 : t1170
) + 2.8767404433520813E-5 ) * 3.24 ; t1168 = t1166 * t1168 * ( 1.0 / ( t1376
== 0.0 ? 1.0E-16 : t1376 ) ) * 0.175 / ( t1349 == 0.0 ? 1.0E-16 : t1349 ) ;
t1171 = ( t1169 - 2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I = t1171 * t1171 *
3.0 - t1171 * t1171 * t1171 * 2.0 ; if ( t1169 <= 2000.0 ) { t1171 = t891 *
1.0E-5 ; } else if ( t1169 >= 4000.0 ) { t1171 = t1168 * 1.0E-5 ; } else {
t1171 = ( ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I )
* t891 + t1168 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I ) *
1.0E-5 ; } Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 =
X [ 353ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 /
0.0019634954084936209 * 0.00031622776601683789 + t1171 ; if ( 1.0 - X [ 47ULL
] >= 0.01 ) { t1168 = 1.0 - X [ 47ULL ] ; } else if ( 1.0 - X [ 47ULL ] >= -
0.1 ) { t1168 = pmf_exp ( ( ( 1.0 - X [ 47ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ;
} else { t1168 = 1.6701700790245661E-7 ; } t1169 = X [ 46ULL ] / ( t1168 ==
0.0 ? 1.0E-16 : t1168 ) * - 36.965491221318985 + 296.802103844292 ; t570 [
0ULL ] = X [ 45ULL ] ; tlu2_linear_linear_prelookup ( & ge_efOut . mField0 [
0ULL ] , & ge_efOut . mField1 [ 0ULL ] , & ge_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] ,
& t68 [ 0ULL ] ) ; t57 = ge_efOut ; tlu2_1d_linear_linear_value ( & he_efOut
[ 0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t71 [ 0 ] = he_efOut [ 0 ] ; t1171 = pmf_exp ( pmf_log ( X [ 48ULL ] *
100000.0 ) - t71 [ 0ULL ] ) ; if ( t1171 >= 1.0 ) { t1376 = ( t1171 - 1.0 ) *
461.523 + t1169 ; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I =
t1169 / ( t1376 == 0.0 ? 1.0E-16 : t1376 ) ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I = 1.0 ; } if ( X [
271ULL ] <= 0.0 ) { t1174 = 0.0 ; } else { t1174 = X [ 271ULL ] >= 1.0 ? 1.0
: X [ 271ULL ] ; } if ( X [ 270ULL ] <= 0.0 ) { t1175 = 0.0 ; } else { t1175
= X [ 270ULL ] >= 1.0 ? 1.0 : X [ 270ULL ] ; } t1177 = ( ( ( 1.0 - t1174 ) -
t1175 ) * 296.802103844292 + t1174 * 461.523 ) + t1175 * 259.836612622973 ;
t1174 = X [ 271ULL ] * 461.523 / ( t1177 == 0.0 ? 1.0E-16 : t1177 ) ; if (
t1174 <= 0.0 ) { t1175 = 0.0 ; } else { t1175 = t1174 >= 1.0 ? 1.0 : t1174 ;
} t1174 = X [ 270ULL ] * 259.836612622973 / ( t1177 == 0.0 ? 1.0E-16 : t1177
) ; if ( t1174 <= 0.0 ) { t1179 = 0.0 ; } else { t1179 = t1174 >= 1.0 ? 1.0 :
t1174 ; } t570 [ 0ULL ] = X [ 269ULL ] ; tlu2_linear_nearest_prelookup ( &
ie_efOut . mField0 [ 0ULL ] , & ie_efOut . mField1 [ 0ULL ] , & ie_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [
0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t42 = ie_efOut ;
tlu2_1d_linear_nearest_value ( & je_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = je_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ke_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ke_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & le_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = le_efOut [ 0 ] ; t1174 = ( (
( 1.0 - t1175 ) - t1179 ) * t571_idx_0 + t572_idx_0 * t1175 ) + t569_idx_0 *
t1179 ; tlu2_1d_linear_nearest_value ( & me_efOut [ 0ULL ] , & t59 . mField0
[ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = me_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ne_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ne_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & oe_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = oe_efOut [ 0 ] ; t891 = ( (
( 1.0 - intrm_sf_mf_1352 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) * t571_idx_0
+ t572_idx_0 * intrm_sf_mf_1352 ) + t569_idx_0 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ;
intrm_sf_mf_1352 = ( - X [ 281ULL ] - X [ 353ULL ] ) / 2.0 ;
tlu2_1d_linear_nearest_value ( & pe_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = pe_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & qe_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = qe_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & re_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = re_efOut [ 0 ] ; t1376 = ( (
( ( 1.0 - t1175 ) - t1179 ) * t571_idx_0 + t572_idx_0 * t1175 ) + t569_idx_0
* t1179 ) + t1157 ; t1385 = t1376 / 2.0 * 0.0019634954084936209 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos = (
intrm_sf_mf_1352 >= 0.0 ? intrm_sf_mf_1352 : 0.0 ) * 0.05 / ( t1385 == 0.0 ?
1.0E-16 : t1385 ) ; t1175 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos >= 0.0 ?
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos : -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos = t1175 >
1000.0 ? t1175 : 1000.0 ; t1379 = t1174 + t891 ; if ( t1379 / 2.0 > 0.5 ) {
t1179 = ( t1174 + t891 ) / 2.0 ; } else { t1179 = 0.5 ; } t1385 = pmf_log10 (
6.9 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos == 0.0
? 1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos )
+ 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) +
2.8767404433520813E-5 ) * 3.24 ; t1183 = 1.0 / ( t1385 == 0.0 ? 1.0E-16 :
t1385 ) ; t1397 = ( pmf_pow ( t1179 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1183 / 8.0 ) * 12.7 + 1.0 ; t1184 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos - 1000.0 ) * (
t1183 / 8.0 ) * t1179 / ( t1397 == 0.0 ? 1.0E-16 : t1397 ) ; intrm_sf_mf_1052
= ( t1175 - 2000.0 ) / 2000.0 ; t1186 = intrm_sf_mf_1052 * intrm_sf_mf_1052 *
3.0 - intrm_sf_mf_1052 * intrm_sf_mf_1052 * intrm_sf_mf_1052 * 2.0 ; if (
t1175 <= 2000.0 ) { intrm_sf_mf_1052 = 3.66 ; } else if ( t1175 >= 4000.0 ) {
intrm_sf_mf_1052 = t1184 ; } else { intrm_sf_mf_1052 = ( 1.0 - t1186 ) * 3.66
+ t1184 * t1186 ; } t1385 = intrm_sf_mf_1052 * 0.039269908169872414 ; t1400 =
t1379 / 2.0 ; if ( t1175 > t1385 / 0.0019634954084936209 / ( t1400 == 0.0 ?
1.0E-16 : t1400 ) / 30.0 ) { t869 = ( t1174 + t891 ) / 2.0 ; t1184 =
intrm_sf_mf_1052 * 0.039269908169872414 / ( t1175 == 0.0 ? 1.0E-16 : t1175 )
/ 0.0019634954084936209 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ; } else { t1184 =
30.0 ; } if ( X [ 343ULL ] <= 0.0 ) { t1174 = 0.0 ; } else { t1174 = X [
343ULL ] >= 1.0 ? 1.0 : X [ 343ULL ] ; } if ( X [ 342ULL ] <= 0.0 ) {
intrm_sf_mf_1052 = 0.0 ; } else { intrm_sf_mf_1052 = X [ 342ULL ] >= 1.0 ?
1.0 : X [ 342ULL ] ; } t1186 = ( ( ( 1.0 - t1174 ) - intrm_sf_mf_1052 ) *
296.802103844292 + t1174 * 461.523 ) + intrm_sf_mf_1052 * 259.836612622973 ;
t1174 = X [ 343ULL ] * 461.523 / ( t1186 == 0.0 ? 1.0E-16 : t1186 ) ; if (
t1174 <= 0.0 ) { intrm_sf_mf_1052 = 0.0 ; } else { intrm_sf_mf_1052 = t1174
>= 1.0 ? 1.0 : t1174 ; } t1174 = X [ 342ULL ] * 259.836612622973 / ( t1186 ==
0.0 ? 1.0E-16 : t1186 ) ; if ( t1174 <= 0.0 ) { t1187 = 0.0 ; } else { t1187
= t1174 >= 1.0 ? 1.0 : t1174 ; } t570 [ 0ULL ] = X [ 340ULL ] ;
tlu2_linear_nearest_prelookup ( & se_efOut . mField0 [ 0ULL ] , & se_efOut .
mField1 [ 0ULL ] , & se_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59
= se_efOut ; tlu2_1d_linear_nearest_value ( & te_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = te_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ue_efOut [ 0ULL ] , & t59 . mField0 [
0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ue_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ve_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = ve_efOut [ 0 ] ; t1174 = ( (
( 1.0 - intrm_sf_mf_1052 ) - t1187 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_1052 ) + t569_idx_0 * t1187 ; t1188 = intrm_sf_mf_1352 <= 0.0 ?
intrm_sf_mf_1352 : 0.0 ; tlu2_1d_linear_nearest_value ( & we_efOut [ 0ULL ] ,
& t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem *
) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 =
we_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & xe_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = xe_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & ye_efOut [ 0ULL ] , & t59 . mField0 [
0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField17 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = ye_efOut [ 0 ] ;
intrm_sf_mf_1352 = ( ( ( 1.0 - intrm_sf_mf_1052 ) - t1187 ) * t571_idx_0 +
t572_idx_0 * intrm_sf_mf_1052 ) + t569_idx_0 * t1187 ; t1397 =
intrm_sf_mf_1352 + t1157 ; t1406 = t1397 / 2.0 * 0.0019634954084936209 ;
intrm_sf_mf_1052 = - t1188 * 0.05 / ( t1406 == 0.0 ? 1.0E-16 : t1406 ) ;
t1187 = intrm_sf_mf_1052 >= 0.0 ? intrm_sf_mf_1052 : - intrm_sf_mf_1052 ;
intrm_sf_mf_1052 = t1187 > 1000.0 ? t1187 : 1000.0 ; t1400 = t891 + t1174 ;
if ( t1400 / 2.0 > 0.5 ) { t1188 = ( t891 + t1174 ) / 2.0 ; } else { t1188 =
0.5 ; } t1406 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1052 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1052 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1052 == 0.0 ? 1.0E-16 : intrm_sf_mf_1052 ) +
2.8767404433520813E-5 ) * 3.24 ; t1189 = 1.0 / ( t1406 == 0.0 ? 1.0E-16 :
t1406 ) ; t1442 = ( pmf_pow ( t1188 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1189 / 8.0 ) * 12.7 + 1.0 ; t1193 = ( intrm_sf_mf_1052 - 1000.0 )
* ( t1189 / 8.0 ) * t1188 / ( t1442 == 0.0 ? 1.0E-16 : t1442 ) ; t1194 = (
t1187 - 2000.0 ) / 2000.0 ; t1195 = t1194 * t1194 * 3.0 - t1194 * t1194 *
t1194 * 2.0 ; if ( t1187 <= 2000.0 ) { t1194 = 3.66 ; } else if ( t1187 >=
4000.0 ) { t1194 = t1193 ; } else { t1194 = ( 1.0 - t1195 ) * 3.66 + t1193 *
t1195 ; } t1406 = t1194 * 0.039269908169872414 ; t1460 = t1400 / 2.0 ; if (
t1187 > t1406 / 0.0019634954084936209 / ( t1460 == 0.0 ? 1.0E-16 : t1460 ) /
30.0 ) { t873 = ( t891 + t1174 ) / 2.0 ; t1193 = t1194 * 0.039269908169872414
/ ( t1187 == 0.0 ? 1.0E-16 : t1187 ) / 0.0019634954084936209 / ( t873 == 0.0
? 1.0E-16 : t873 ) ; } else { t1193 = 30.0 ; } if ( X [ 381ULL ] <= 0.0 ) {
t1194 = 0.0 ; } else { t1194 = X [ 381ULL ] >= 1.0 ? 1.0 : X [ 381ULL ] ; }
if ( X [ 382ULL ] <= 0.0 ) { t1195 = 0.0 ; } else { t1195 = X [ 382ULL ] >=
1.0 ? 1.0 : X [ 382ULL ] ; } t1197 = ( ( ( 1.0 - t1194 ) - t1195 ) *
296.802103844292 + t1194 * 461.523 ) + t1195 * 259.836612622973 ; t1194 = ( X
[ 385ULL ] * 0.07812500122070315 + U_idx_9 * 10.0 ) - 7.8125001220703152E-10
; if ( X [ 51ULL ] <= 0.0 ) { t1195 = 0.0 ; } else { t1195 = X [ 51ULL ] >=
1.0 ? 1.0 : X [ 51ULL ] ; } if ( X [ 52ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = X [ 52ULL
] >= 1.0 ? 1.0 : X [ 52ULL ] ; } t1201 = ( ( ( 1.0 - t1195 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) *
296.802103844292 + t1195 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked *
259.836612622973 ; t1203 = ( X [ 49ULL ] / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X
[ 50ULL ] ) - X [ 389ULL ] / ( X [ 390ULL ] == 0.0 ? 1.0E-16 : X [ 390ULL ] )
) * X [ 388ULL ] * t1201 / 0.0019634954084936209 ; if ( X [ 389ULL ] <=
216.59999999999997 ) { t869 = 216.59999999999997 ; } else { t869 = X [ 389ULL
] >= 623.15 ? 623.15 : X [ 389ULL ] ; } t1207 = t869 * t869 ; t1206 = ( ( (
1074.1165326382541 + t869 * - 0.2214565261064077 ) + t1207 *
0.00037212980109010952 ) * ( ( 1.0 - t1195 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774710445 + t869 * 1.200211433705052 ) + t1207 * -
0.00038614513167842338 ) * t1195 ) + ( ( 900.63941224837913 + t869 * -
0.044484923911364271 ) + t1207 * 0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ; t1422 =
t1206 - t1201 ; t1207 = t1206 / ( t1422 == 0.0 ? 1.0E-16 : t1422 ) ; t1208 =
pmf_sqrt ( t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [ 389ULL ] *
t1207 * t1201 ) * 1.0E-9 ) ; if ( X [ 391ULL ] <= 0.0 ) { t1209 = 0.0 ; }
else { t1209 = X [ 391ULL ] >= 1.0 ? 1.0 : X [ 391ULL ] ; } if ( X [ 392ULL ]
<= 0.0 ) { t1210 = 0.0 ; } else { t1210 = X [ 392ULL ] >= 1.0 ? 1.0 : X [
392ULL ] ; } t570 [ 0ULL ] = X [ 49ULL ] ; tlu2_linear_nearest_prelookup ( &
af_efOut . mField0 [ 0ULL ] , & af_efOut . mField1 [ 0ULL ] , & af_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [
0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t47 = af_efOut ;
tlu2_1d_linear_nearest_value ( & bf_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = bf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & cf_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = cf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & df_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ]
, & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = df_efOut [ 0 ] ; t1211 = ( (
( 1.0 - t1209 ) - t1210 ) * t571_idx_0 + t572_idx_0 * t1209 ) + t569_idx_0 *
t1210 ; t1422 = X [ 390ULL ] * X [ 390ULL ] * t1207 ; t1213 = - pmf_sqrt (
fabs ( t1422 / ( t1201 == 0.0 ? 1.0E-16 : t1201 ) / ( X [ 389ULL ] == 0.0 ?
1.0E-16 : X [ 389ULL ] ) ) ) * 0.0019634954084936209 ; if ( t1213 >= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI = t1213 *
100000.0 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI = - t1213 *
100000.0 ; } t873 = t1211 * 0.0019634954084936209 ; t891 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI * 0.05 / (
t873 == 0.0 ? 1.0E-16 : t873 ) ; t869 = X [ 49ULL ] * t1201 ; t1217 = X [
50ULL ] / ( t869 == 0.0 ? 1.0E-16 : t869 ) ; t1461 = t1217 *
9.8174770424681068E-6 ; t1218 = t1213 * t1211 * 35.2 / ( t1461 == 0.0 ?
1.0E-16 : t1461 ) ; t1219 = t891 >= 1.0 ? t891 : 1.0 ; t869 = pmf_log10 ( 6.9
/ ( t1219 == 0.0 ? 1.0E-16 : t1219 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1219 == 0.0 ? 1.0E-16 : t1219 ) + 2.8767404433520813E-5 ) * 3.24 ;
t1469 = t1217 * 3.855314219175531E-7 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI = t1213 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI * ( 1.0 / (
t869 == 0.0 ? 1.0E-16 : t869 ) ) * 0.55 / ( t1469 == 0.0 ? 1.0E-16 : t1469 )
; t1220 = ( t891 - 2000.0 ) / 2000.0 ; t869 = t1220 * t1220 * 3.0 - t1220 *
t1220 * t1220 * 2.0 ; if ( t891 <= 2000.0 ) { t1220 = t1218 * 1.0E-5 ; } else
if ( t891 >= 4000.0 ) { t1220 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI * 1.0E-5 ; }
else { t1220 = ( ( 1.0 - t869 ) * t1218 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI * t869 ) *
1.0E-5 ; } t1208 = X [ 388ULL ] * t1208 / 0.0019634954084936209 *
0.00031622776601683789 + t1220 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI = - ( ( X [
49ULL ] / ( X [ 50ULL ] == 0.0 ? 1.0E-16 : X [ 50ULL ] ) - X [ 393ULL ] / ( X
[ 394ULL ] == 0.0 ? 1.0E-16 : X [ 394ULL ] ) ) * X [ 376ULL ] * t1201 ) /
0.0019634954084936209 ; if ( X [ 393ULL ] <= 216.59999999999997 ) { t891 =
216.59999999999997 ; } else { t891 = X [ 393ULL ] >= 623.15 ? 623.15 : X [
393ULL ] ; } t1224 = t891 * t891 ; t1218 = ( ( ( 1074.1165326382541 + t891 *
- 0.2214565261064077 ) + t1224 * 0.00037212980109010952 ) * ( ( 1.0 - t1195 )
- Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774710445 + t891 * 1.200211433705052 ) + t1224 * -
0.00038614513167842338 ) * t1195 ) + ( ( 900.63941224837913 + t891 * -
0.044484923911364271 ) + t1224 * 0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ; t1442 =
t1218 - t1201 ; t1195 = t1218 / ( t1442 == 0.0 ? 1.0E-16 : t1442 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = pmf_sqrt (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 ) ;
t1442 = X [ 394ULL ] * X [ 394ULL ] * t1195 ; t1220 = - pmf_sqrt ( fabs (
t1442 / ( t1201 == 0.0 ? 1.0E-16 : t1201 ) / ( X [ 393ULL ] == 0.0 ? 1.0E-16
: X [ 393ULL ] ) ) ) * 0.0019634954084936209 ; if ( t1220 >= 0.0 ) { t869 =
t1220 * 100000.0 ; } else { t869 = - t1220 * 100000.0 ; } t1224 = t869 * 0.05
/ ( t873 == 0.0 ? 1.0E-16 : t873 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I = t1220 * t1211 *
35.2 / ( t1461 == 0.0 ? 1.0E-16 : t1461 ) ; t1226 = t1224 >= 1.0 ? t1224 :
1.0 ; t1460 = pmf_log10 ( 6.9 / ( t1226 == 0.0 ? 1.0E-16 : t1226 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1226 == 0.0 ? 1.0E-16 : t1226
) + 2.8767404433520813E-5 ) * 3.24 ; t869 = t1220 * t869 * ( 1.0 / ( t1460 ==
0.0 ? 1.0E-16 : t1460 ) ) * 0.55 / ( t1469 == 0.0 ? 1.0E-16 : t1469 ) ; t1227
= ( t1224 - 2000.0 ) / 2000.0 ; t1228 = t1227 * t1227 * 3.0 - t1227 * t1227 *
t1227 * 2.0 ; if ( t1224 <= 2000.0 ) { t1227 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I * 1.0E-5 ; } else if
( t1224 >= 4000.0 ) { t1227 = t869 * 1.0E-5 ; } else { t1227 = ( ( 1.0 -
t1228 ) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I + t869 *
t1228 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked = - ( X [
376ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked ) /
0.0019634954084936209 * 0.00031622776601683789 + t1227 ; if ( 1.0 - X [ 51ULL
] >= 0.01 ) { t1224 = 1.0 - X [ 51ULL ] ; } else if ( 1.0 - X [ 51ULL ] >= -
0.1 ) { t1224 = pmf_exp ( ( ( 1.0 - X [ 51ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ;
} else { t1224 = 1.6701700790245661E-7 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I = X [ 52ULL ] / (
t1224 == 0.0 ? 1.0E-16 : t1224 ) * - 36.965491221318985 + 296.802103844292 ;
t570 [ 0ULL ] = X [ 49ULL ] ; tlu2_linear_linear_prelookup ( & ef_efOut .
mField0 [ 0ULL ] , & ef_efOut . mField1 [ 0ULL ] , & ef_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t57 = ef_efOut ;
tlu2_1d_linear_linear_value ( & ff_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t450 [ 0 ] = ff_efOut [ 0 ] ; t1227 =
pmf_exp ( pmf_log ( X [ 50ULL ] * 100000.0 ) - t450 [ 0ULL ] ) ; if ( t1227
>= 1.0 ) { t1460 = ( t1227 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I ; t1228 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I / ( t1460 == 0.0 ?
1.0E-16 : t1460 ) ; } else { t1228 = 1.0 ; } if ( X [ 368ULL ] <= 0.0 ) {
U_idx_3 = 0.0 ; } else { U_idx_3 = X [ 368ULL ] >= 1.0 ? 1.0 : X [ 368ULL ] ;
} if ( X [ 367ULL ] <= 0.0 ) { intrm_sf_mf_1176 = 0.0 ; } else {
intrm_sf_mf_1176 = X [ 367ULL ] >= 1.0 ? 1.0 : X [ 367ULL ] ; } t1231 = ( ( (
1.0 - U_idx_3 ) - intrm_sf_mf_1176 ) * 296.802103844292 + U_idx_3 * 461.523 )
+ intrm_sf_mf_1176 * 259.836612622973 ; U_idx_3 = X [ 368ULL ] * 461.523 / (
t1231 == 0.0 ? 1.0E-16 : t1231 ) ; if ( U_idx_3 <= 0.0 ) { intrm_sf_mf_1176 =
0.0 ; } else { intrm_sf_mf_1176 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3 ; } U_idx_3
= X [ 367ULL ] * 259.836612622973 / ( t1231 == 0.0 ? 1.0E-16 : t1231 ) ; if (
U_idx_3 <= 0.0 ) { t1232 = 0.0 ; } else { t1232 = U_idx_3 >= 1.0 ? 1.0 :
U_idx_3 ; } t570 [ 0ULL ] = X [ 365ULL ] ; tlu2_linear_nearest_prelookup ( &
gf_efOut . mField0 [ 0ULL ] , & gf_efOut . mField1 [ 0ULL ] , & gf_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [
0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t57 = gf_efOut ;
tlu2_1d_linear_nearest_value ( & hf_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = hf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & if_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = if_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & jf_efOut [ 0ULL ] , & t57 . mField0 [ 0ULL ]
, & t57 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = jf_efOut [ 0 ] ; U_idx_3 = (
( ( 1.0 - intrm_sf_mf_1176 ) - t1232 ) * t571_idx_0 + t572_idx_0 *
intrm_sf_mf_1176 ) + t569_idx_0 * t1232 ; tlu2_1d_linear_nearest_value ( &
kf_efOut [ 0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = kf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & lf_efOut [
0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = lf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & mf_efOut [
0ULL ] , & t47 . mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField19 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = mf_efOut [ 0 ] ; t891 = ( ( ( 1.0 - t1209 ) - t1210 ) *
t571_idx_0 + t572_idx_0 * t1209 ) + t569_idx_0 * t1210 ; t1209 = ( X [ 388ULL
] - ( - X [ 376ULL ] ) ) / 2.0 ; tlu2_1d_linear_nearest_value ( & nf_efOut [
0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = nf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & of_efOut [
0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = of_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & pf_efOut [
0ULL ] , & t57 . mField0 [ 0ULL ] , & t57 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = pf_efOut [ 0 ] ; t1235 = ( ( ( 1.0 - intrm_sf_mf_1176 ) -
t1232 ) * t571_idx_0 + t572_idx_0 * intrm_sf_mf_1176 ) + t569_idx_0 * t1232 ;
t1460 = t1211 + t1235 ; t1469 = t1460 / 2.0 * 0.0019634954084936209 ; t1210 =
( t1209 >= 0.0 ? t1209 : 0.0 ) * 0.05 / ( t1469 == 0.0 ? 1.0E-16 : t1469 ) ;
intrm_sf_mf_1176 = t1210 >= 0.0 ? t1210 : - t1210 ; t1210 = intrm_sf_mf_1176
> 1000.0 ? intrm_sf_mf_1176 : 1000.0 ; t1461 = U_idx_3 + t891 ; if ( t1461 /
2.0 > 0.5 ) { t1232 = ( U_idx_3 + t891 ) / 2.0 ; } else { t1232 = 0.5 ; }
t1469 = pmf_log10 ( 6.9 / ( t1210 == 0.0 ? 1.0E-16 : t1210 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1210 == 0.0 ? 1.0E-16 : t1210
) + 2.8767404433520813E-5 ) * 3.24 ; t1237 = 1.0 / ( t1469 == 0.0 ? 1.0E-16 :
t1469 ) ; t1481 = ( pmf_pow ( t1232 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1237 / 8.0 ) * 12.7 + 1.0 ; t1238 = ( t1210 - 1000.0 ) * ( t1237
/ 8.0 ) * t1232 / ( t1481 == 0.0 ? 1.0E-16 : t1481 ) ; intrm_sf_mf_1259 = (
intrm_sf_mf_1176 - 2000.0 ) / 2000.0 ; t1240 = intrm_sf_mf_1259 *
intrm_sf_mf_1259 * 3.0 - intrm_sf_mf_1259 * intrm_sf_mf_1259 *
intrm_sf_mf_1259 * 2.0 ; if ( intrm_sf_mf_1176 <= 2000.0 ) { intrm_sf_mf_1259
= 3.66 ; } else if ( intrm_sf_mf_1176 >= 4000.0 ) { intrm_sf_mf_1259 = t1238
; } else { intrm_sf_mf_1259 = ( 1.0 - t1240 ) * 3.66 + t1238 * t1240 ; }
t1469 = intrm_sf_mf_1259 * 0.15707963267948966 ; t1484 = t1461 / 2.0 ; if (
intrm_sf_mf_1176 > t1469 / 0.0019634954084936209 / ( t1484 == 0.0 ? 1.0E-16 :
t1484 ) / 30.0 ) { t869 = ( U_idx_3 + t891 ) / 2.0 ; t1238 = intrm_sf_mf_1259
* 0.15707963267948966 / ( intrm_sf_mf_1176 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1176 ) / 0.0019634954084936209 / ( t869 == 0.0 ? 1.0E-16 : t869 )
; } else { t1238 = 30.0 ; } if ( X [ 387ULL ] <= 0.0 ) { intrm_sf_mf_1259 =
0.0 ; } else { intrm_sf_mf_1259 = X [ 387ULL ] >= 1.0 ? 1.0 : X [ 387ULL ] ;
} if ( X [ 386ULL ] <= 0.0 ) { t1240 = 0.0 ; } else { t1240 = X [ 386ULL ] >=
1.0 ? 1.0 : X [ 386ULL ] ; } t1241 = ( ( ( 1.0 - intrm_sf_mf_1259 ) - t1240 )
* 296.802103844292 + intrm_sf_mf_1259 * 461.523 ) + t1240 * 259.836612622973
; intrm_sf_mf_1259 = X [ 387ULL ] * 461.523 / ( t1241 == 0.0 ? 1.0E-16 :
t1241 ) ; if ( intrm_sf_mf_1259 <= 0.0 ) { t1240 = 0.0 ; } else { t1240 =
intrm_sf_mf_1259 >= 1.0 ? 1.0 : intrm_sf_mf_1259 ; } intrm_sf_mf_1259 = X [
386ULL ] * 259.836612622973 / ( t1241 == 0.0 ? 1.0E-16 : t1241 ) ; if (
intrm_sf_mf_1259 <= 0.0 ) { t1244 = 0.0 ; } else { t1244 = intrm_sf_mf_1259
>= 1.0 ? 1.0 : intrm_sf_mf_1259 ; } t570 [ 0ULL ] = X [ 384ULL ] ;
tlu2_linear_nearest_prelookup ( & qf_efOut . mField0 [ 0ULL ] , & qf_efOut .
mField1 [ 0ULL ] , & qf_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t42
= qf_efOut ; tlu2_1d_linear_nearest_value ( & rf_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = rf_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & sf_efOut [ 0ULL ] , & t42 . mField0 [
0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = sf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & tf_efOut [ 0ULL ] , & t42 . mField0 [ 0ULL ]
, & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = tf_efOut [ 0 ] ;
intrm_sf_mf_1259 = ( ( ( 1.0 - t1240 ) - t1244 ) * t571_idx_0 + t572_idx_0 *
t1240 ) + t569_idx_0 * t1244 ; tlu2_1d_linear_nearest_value ( & uf_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = uf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & vf_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = vf_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & wf_efOut [
0ULL ] , & t42 . mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = wf_efOut [ 0 ] ; t1481 = t1211 + ( ( ( ( 1.0 - t1240 ) - t1244
) * t571_idx_0 + t572_idx_0 * t1240 ) + t569_idx_0 * t1244 ) ; t1489 = t1481
/ 2.0 * 0.0019634954084936209 ; t1209 = - ( t1209 <= 0.0 ? t1209 : 0.0 ) *
0.05 / ( t1489 == 0.0 ? 1.0E-16 : t1489 ) ; t1240 = t1209 >= 0.0 ? t1209 : -
t1209 ; t1209 = t1240 > 1000.0 ? t1240 : 1000.0 ; t1484 = t891 +
intrm_sf_mf_1259 ; if ( t1484 / 2.0 > 0.5 ) { t1244 = ( t891 +
intrm_sf_mf_1259 ) / 2.0 ; } else { t1244 = 0.5 ; } t1489 = pmf_log10 ( 6.9 /
( t1209 == 0.0 ? 1.0E-16 : t1209 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1209 == 0.0 ? 1.0E-16 : t1209 ) + 2.8767404433520813E-5 ) * 3.24 ;
t1245 = 1.0 / ( t1489 == 0.0 ? 1.0E-16 : t1489 ) ; t1512 = ( pmf_pow ( t1244
, 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1245 / 8.0 ) * 12.7 + 1.0 ;
intrm_sf_mf_1208 = ( t1209 - 1000.0 ) * ( t1245 / 8.0 ) * t1244 / ( t1512 ==
0.0 ? 1.0E-16 : t1512 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 = ( t1240 -
2000.0 ) / 2000.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 * 3.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 * 2.0 ; if (
t1240 <= 2000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 = 3.66 ; }
else if ( t1240 >= 4000.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 =
intrm_sf_mf_1208 ; } else {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) * 3.66 +
intrm_sf_mf_1208 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ; } t1489 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
0.15707963267948966 ; t1541 = t1484 / 2.0 ; if ( t1240 > t1489 /
0.0019634954084936209 / ( t1541 == 0.0 ? 1.0E-16 : t1541 ) / 30.0 ) { t1520 =
( t891 + intrm_sf_mf_1259 ) / 2.0 ; intrm_sf_mf_1208 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
0.15707963267948966 / ( t1240 == 0.0 ? 1.0E-16 : t1240 ) /
0.0019634954084936209 / ( t1520 == 0.0 ? 1.0E-16 : t1520 ) ; } else {
intrm_sf_mf_1208 = 30.0 ; } if ( X [ 385ULL ] * 0.0019634954084936209 <=
1.9634954084936209E-11 ) { intrm_sf_mf_1259 = 1.9634954084936209E-11 ; } else
if ( X [ 385ULL ] * 0.0019634954084936209 >= 0.0012566370614359179 ) {
intrm_sf_mf_1259 = 0.0012566370614359179 ; } else { intrm_sf_mf_1259 = X [
385ULL ] * 0.0019634954084936209 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 =
intrm_sf_mf_1259 / 0.0019634954084936209 ; if ( X [ 408ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = 0.0 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = X [
408ULL ] >= 1.0 ? 1.0 : X [ 408ULL ] ; } if ( X [ 409ULL ] <= 0.0 ) {
intrm_sf_mf_1297 = 0.0 ; } else { intrm_sf_mf_1297 = X [ 409ULL ] >= 1.0 ?
1.0 : X [ 409ULL ] ; } t1250 = ( ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) -
intrm_sf_mf_1297 ) * 296.802103844292 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * 461.523 ) +
intrm_sf_mf_1297 * 259.836612622973 ; t1541 = X [ 406ULL ] * t1250 ; t1251 =
X [ 407ULL ] / ( t1541 == 0.0 ? 1.0E-16 : t1541 ) ; t869 = X [ 407ULL ] / (
t1194 == 0.0 ? 1.0E-16 : t1194 ) * ( X [ 410ULL ] / ( X [ 406ULL ] == 0.0 ?
1.0E-16 : X [ 406ULL ] ) ) ; intrm_sf_mf_1278 = X [ 407ULL ] / 1.01325 * ( X
[ 411ULL ] / ( X [ 406ULL ] == 0.0 ? 1.0E-16 : X [ 406ULL ] ) ) ; t1256 = (
t1194 + 1.01325 ) / 2.0 * 0.0010000000000000009 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ) ; t1257 =
t1256 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ;
t1259 = ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 +
1.0 ) * ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 * t869 ) - (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
intrm_sf_mf_1278 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 * 2.0 ; t891 =
( t1194 - 1.01325 ) * ( t1259 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ? t1259 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) ; t1259 = (
t1194 - 1.01325 ) / ( t1256 == 0.0 ? 1.0E-16 : t1256 ) ; t1264 = t1259 *
t1259 * 3.0 - t1259 * t1259 * t1259 * 2.0 ; if ( t1194 - 1.01325 <= 0.0 ) {
t1259 = t1257 ; } else if ( t1194 - 1.01325 >= t1256 ) { t1259 = t891 ; }
else { t1259 = ( 1.0 - t1264 ) * t1257 + t891 * t1264 ; } t891 = (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 + 1.0 ) * (
1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
intrm_sf_mf_1278 ) - ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 * t869 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 * 2.0 ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 = ( 1.01325 -
t1194 ) * ( t891 >=
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ? t891 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) ; t869 = (
1.01325 - t1194 ) / ( t1256 == 0.0 ? 1.0E-16 : t1256 ) ; intrm_sf_mf_1278 =
t869 * t869 * 3.0 - t869 * t869 * t869 * 2.0 ; if ( 1.01325 - t1194 <= 0.0 )
{ t869 = t1257 ; } else if ( 1.01325 - t1194 >= t1256 ) { t869 =
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ; } else {
t869 = ( 1.0 - intrm_sf_mf_1278 ) * t1257 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 *
intrm_sf_mf_1278 ; } if ( t1194 > 1.01325 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 = t1259 ; }
else { Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 = t1194
< 1.01325 ? t869 : t1257 ; } if ( X [ 406ULL ] <= 216.59999999999997 ) { t869
= 216.59999999999997 ; } else { t869 = X [ 406ULL ] >= 623.15 ? 623.15 : X [
406ULL ] ; } t854 = t869 * t869 ; intrm_sf_mf_1278 = ( ( ( 1074.1165326382541
+ t869 * - 0.2214565261064077 ) + t854 * 0.00037212980109010952 ) * ( ( 1.0 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) -
intrm_sf_mf_1297 ) + ( ( 1479.6504774710445 + t869 * 1.200211433705052 ) +
t854 * - 0.00038614513167842338 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 ) + ( (
900.63941224837913 + t869 * - 0.044484923911364271 ) + t854 *
0.00036936011832043369 ) * intrm_sf_mf_1297 ; t1512 = intrm_sf_mf_1278 -
t1250 ; t1512 = X [ 407ULL ] * X [ 407ULL ] * ( intrm_sf_mf_1278 / ( t1512 ==
0.0 ? 1.0E-16 : t1512 ) ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 = pmf_sqrt (
fabs ( t1512 / ( t1250 == 0.0 ? 1.0E-16 : t1250 ) / ( X [ 406ULL ] == 0.0 ?
1.0E-16 : X [ 406ULL ] ) ) ) * intrm_sf_mf_1259 * 0.64 ; if ( X [ 14ULL ] <=
0.0 ) { intrm_sf_mf_1297 = 0.0 ; } else { intrm_sf_mf_1297 = X [ 14ULL ] >=
1.0 ? 1.0 : X [ 14ULL ] ; } if ( X [ 13ULL ] <= 0.0 ) {
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = 0.0 ; } else
{ Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = X [ 13ULL
] >= 1.0 ? 1.0 : X [ 13ULL ] ; } t1257 = ( ( ( 1.0 - intrm_sf_mf_1297 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) *
296.802103844292 + intrm_sf_mf_1297 * 461.523 ) +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked *
259.836612622973 ; t1259 = - ( ( X [ 12ULL ] / ( X [ 53ULL ] == 0.0 ? 1.0E-16
: X [ 53ULL ] ) - X [ 413ULL ] / ( X [ 414ULL ] == 0.0 ? 1.0E-16 : X [ 414ULL
] ) ) * X [ 353ULL ] * t1257 ) / 0.32 ; if ( X [ 413ULL ] <=
216.59999999999997 ) { t891 = 216.59999999999997 ; } else { t891 = X [ 413ULL
] >= 623.15 ? 623.15 : X [ 413ULL ] ; } t1266 = t891 * t891 ; t1264 = ( ( (
1074.1165326382541 + t891 * - 0.2214565261064077 ) + t1266 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_1297 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774710445 + t891 * 1.200211433705052 ) + t1266 * -
0.00038614513167842338 ) * intrm_sf_mf_1297 ) + ( ( 900.63941224837913 + t891
* - 0.044484923911364271 ) + t1266 * 0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ; t1520 =
t1264 - t1257 ; t854 = t1264 / ( t1520 == 0.0 ? 1.0E-16 : t1520 ) ; t1266 =
pmf_sqrt ( t1259 * t1259 * 9.999999999999999E-14 + fabs ( X [ 413ULL ] * t854
* t1257 ) * 1.0E-9 ) ; if ( X [ 87ULL ] <= 0.0 ) { t1267 = 0.0 ; } else {
t1267 = X [ 87ULL ] >= 1.0 ? 1.0 : X [ 87ULL ] ; } if ( X [ 86ULL ] <= 0.0 )
{ t1268 = 0.0 ; } else { t1268 = X [ 86ULL ] >= 1.0 ? 1.0 : X [ 86ULL ] ; }
t570 [ 0ULL ] = X [ 12ULL ] ; tlu2_linear_nearest_prelookup ( & xf_efOut .
mField0 [ 0ULL ] , & xf_efOut . mField1 [ 0ULL ] , & xf_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59 = xf_efOut ;
tlu2_1d_linear_nearest_value ( & yf_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField7 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = yf_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & ag_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , &
t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = ag_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & bg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField17 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = bg_efOut [ 0 ] ; t1269 = ( (
( 1.0 - t1267 ) - t1268 ) * t571_idx_0 + t572_idx_0 * t1267 ) + t569_idx_0 *
t1268 ; t1520 = X [ 414ULL ] * X [ 414ULL ] * t854 ; t1270 = - pmf_sqrt (
fabs ( t1520 / ( t1257 == 0.0 ? 1.0E-16 : t1257 ) / ( X [ 413ULL ] == 0.0 ?
1.0E-16 : X [ 413ULL ] ) ) ) * 0.32 ; if ( t1270 >= 0.0 ) { t1271 = t1270 *
100000.0 ; } else { t1271 = - t1270 * 100000.0 ; } U_idx_2 = t1269 * 0.32 ;
t891 = t1271 * 0.01 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t869 = X [
12ULL ] * t1257 ; t1276 = X [ 53ULL ] / ( t869 == 0.0 ? 1.0E-16 : t869 ) ;
t1560 = t1276 * 6.4000000000000011E-5 ; t1277 = t1270 * t1269 *
2.9973120849090416 / ( t1560 == 0.0 ? 1.0E-16 : t1560 ) ; t1279 = t891 >= 1.0
? t891 : 1.0 ; t869 = pmf_log10 ( 6.9 / ( t1279 == 0.0 ? 1.0E-16 : t1279 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1279 == 0.0 ? 1.0E-16 : t1279
) + 0.00017169489553429715 ) * 3.24 ; t1566 = t1276 * 0.0020480000000000003 ;
t1271 = t1270 * t1271 * ( 1.0 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ) *
0.046833001326703774 / ( t1566 == 0.0 ? 1.0E-16 : t1566 ) ; t1281 = ( t891 -
2000.0 ) / 2000.0 ; t869 = t1281 * t1281 * 3.0 - t1281 * t1281 * t1281 * 2.0
; if ( t891 <= 2000.0 ) { t1281 = t1277 * 1.0E-5 ; } else if ( t891 >= 4000.0
) { t1281 = t1271 * 1.0E-5 ; } else { t1281 = ( ( 1.0 - t869 ) * t1277 +
t1271 * t869 ) * 1.0E-5 ; } t1266 = - ( X [ 353ULL ] * t1266 ) / 0.32 *
0.00031622776601683789 + t1281 ; t1271 = ( X [ 12ULL ] / ( X [ 53ULL ] == 0.0
? 1.0E-16 : X [ 53ULL ] ) - X [ 416ULL ] / ( X [ 417ULL ] == 0.0 ? 1.0E-16 :
X [ 417ULL ] ) ) * X [ 415ULL ] * t1257 / 0.32 ; if ( X [ 416ULL ] <=
216.59999999999997 ) { t891 = 216.59999999999997 ; } else { t891 = X [ 416ULL
] >= 623.15 ? 623.15 : X [ 416ULL ] ; } t1285 = t891 * t891 ; t1277 = ( ( (
1074.1165326382541 + t891 * - 0.2214565261064077 ) + t1285 *
0.00037212980109010952 ) * ( ( 1.0 - intrm_sf_mf_1297 ) -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ) + ( (
1479.6504774710445 + t891 * 1.200211433705052 ) + t1285 * -
0.00038614513167842338 ) * intrm_sf_mf_1297 ) + ( ( 900.63941224837913 + t891
* - 0.044484923911364271 ) + t1285 * 0.00036936011832043369 ) *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked ; t1541 =
t1277 - t1257 ; intrm_sf_mf_1297 = t1277 / ( t1541 == 0.0 ? 1.0E-16 : t1541 )
; Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = pmf_sqrt (
t1271 * t1271 * 9.999999999999999E-14 + fabs ( X [ 416ULL ] *
intrm_sf_mf_1297 * t1257 ) * 1.0E-9 ) ; t1541 = X [ 417ULL ] * X [ 417ULL ] *
intrm_sf_mf_1297 ; t1281 = - pmf_sqrt ( fabs ( t1541 / ( t1257 == 0.0 ?
1.0E-16 : t1257 ) / ( X [ 416ULL ] == 0.0 ? 1.0E-16 : X [ 416ULL ] ) ) ) *
0.32 ; if ( t1281 >= 0.0 ) { t869 = t1281 * 100000.0 ; } else { t869 = -
t1281 * 100000.0 ; } t1285 = t869 * 0.01 / ( U_idx_2 == 0.0 ? 1.0E-16 :
U_idx_2 ) ; t1286 = t1281 * t1269 * 2.9973120849090416 / ( t1560 == 0.0 ?
1.0E-16 : t1560 ) ; t1288 = t1285 >= 1.0 ? t1285 : 1.0 ; t1557 = pmf_log10 (
6.9 / ( t1288 == 0.0 ? 1.0E-16 : t1288 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1288 == 0.0 ? 1.0E-16 : t1288 ) + 0.00017169489553429715
) * 3.24 ; t869 = t1281 * t869 * ( 1.0 / ( t1557 == 0.0 ? 1.0E-16 : t1557 ) )
* 0.046833001326703774 / ( t1566 == 0.0 ? 1.0E-16 : t1566 ) ; t1289 = ( t1285
- 2000.0 ) / 2000.0 ; t1290 = t1289 * t1289 * 3.0 - t1289 * t1289 * t1289 *
2.0 ; if ( t1285 <= 2000.0 ) { t1289 = t1286 * 1.0E-5 ; } else if ( t1285 >=
4000.0 ) { t1289 = t869 * 1.0E-5 ; } else { t1289 = ( ( 1.0 - t1290 ) * t1286
+ t869 * t1290 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked = X [ 415ULL ]
* Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked / 0.32 *
0.00031622776601683789 + t1289 ; if ( 1.0 - X [ 14ULL ] >= 0.01 ) { t1285 =
1.0 - X [ 14ULL ] ; } else if ( 1.0 - X [ 14ULL ] >= - 0.1 ) { t1285 =
pmf_exp ( ( ( 1.0 - X [ 14ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t1285 =
1.6701700790245661E-7 ; } t1286 = X [ 13ULL ] / ( t1285 == 0.0 ? 1.0E-16 :
t1285 ) * - 36.965491221318985 + 296.802103844292 ; t570 [ 0ULL ] = X [ 12ULL
] ; tlu2_linear_linear_prelookup ( & cg_efOut . mField0 [ 0ULL ] , & cg_efOut
. mField1 [ 0ULL ] , & cg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ;
t47 = cg_efOut ; tlu2_1d_linear_linear_value ( & dg_efOut [ 0ULL ] , & t47 .
mField0 [ 0ULL ] , & t47 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t447 [ 0 ] = dg_efOut [ 0
] ; t1289 = pmf_exp ( pmf_log ( X [ 53ULL ] * 100000.0 ) - t447 [ 0ULL ] ) ;
if ( t1289 >= 1.0 ) { t1557 = ( t1289 - 1.0 ) * 461.523 + t1286 ; t1290 =
t1286 / ( t1557 == 0.0 ? 1.0E-16 : t1557 ) ; } else { t1290 = 1.0 ; }
tlu2_1d_linear_nearest_value ( & eg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = eg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & fg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = fg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & gg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = gg_efOut [ 0 ] ; t891 = ( (
( 1.0 - t1267 ) - t1268 ) * t571_idx_0 + t572_idx_0 * t1267 ) + t569_idx_0 *
t1268 ; t1267 = ( - X [ 353ULL ] - X [ 415ULL ] ) / 2.0 ; t1557 =
intrm_sf_mf_1352 + t1269 ; t1566 = t1557 / 2.0 * 0.32 ; intrm_sf_mf_1352 = (
t1267 >= 0.0 ? t1267 : 0.0 ) * 0.01 / ( t1566 == 0.0 ? 1.0E-16 : t1566 ) ;
t1268 = intrm_sf_mf_1352 >= 0.0 ? intrm_sf_mf_1352 : - intrm_sf_mf_1352 ;
intrm_sf_mf_1352 = t1268 > 1000.0 ? t1268 : 1000.0 ; t1560 = t1174 + t891 ;
if ( t1560 / 2.0 > 0.5 ) { t1292 = ( t1174 + t891 ) / 2.0 ; } else { t1292 =
0.5 ; } t1566 = pmf_log10 ( 6.9 / ( intrm_sf_mf_1352 == 0.0 ? 1.0E-16 :
intrm_sf_mf_1352 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_1352 == 0.0 ? 1.0E-16 : intrm_sf_mf_1352 ) +
0.00017169489553429715 ) * 3.24 ; t1293 = 1.0 / ( t1566 == 0.0 ? 1.0E-16 :
t1566 ) ; t1577 = ( pmf_pow ( t1292 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1293 / 8.0 ) * 12.7 + 1.0 ; t1295 = ( intrm_sf_mf_1352 - 1000.0 )
* ( t1293 / 8.0 ) * t1292 / ( t1577 == 0.0 ? 1.0E-16 : t1577 ) ; t1296 = (
t1268 - 2000.0 ) / 2000.0 ; t1298 = t1296 * t1296 * 3.0 - t1296 * t1296 *
t1296 * 2.0 ; if ( t1268 <= 2000.0 ) { t1296 = 3.66 ; } else if ( t1268 >=
4000.0 ) { t1296 = t1295 ; } else { t1296 = ( 1.0 - t1298 ) * 3.66 + t1295 *
t1298 ; } t1566 = t1296 * 10.709248339636167 ; t1581 = t1560 / 2.0 ; if (
t1268 > t1566 / 0.32 / ( t1581 == 0.0 ? 1.0E-16 : t1581 ) / 30.0 ) { t869 = (
t1174 + t891 ) / 2.0 ; t1295 = t1296 * 10.709248339636167 / ( t1268 == 0.0 ?
1.0E-16 : t1268 ) / 0.32 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ; } else { t1295
= 30.0 ; } if ( X [ 75ULL ] <= 0.0 ) { t1174 = 0.0 ; } else { t1174 = X [
75ULL ] >= 1.0 ? 1.0 : X [ 75ULL ] ; } if ( X [ 74ULL ] <= 0.0 ) { t1296 =
0.0 ; } else { t1296 = X [ 74ULL ] >= 1.0 ? 1.0 : X [ 74ULL ] ; } t1298 = ( (
( 1.0 - t1174 ) - t1296 ) * 296.802103844292 + t1174 * 461.523 ) + t1296 *
259.836612622973 ; t1174 = X [ 75ULL ] * 461.523 / ( t1298 == 0.0 ? 1.0E-16 :
t1298 ) ; if ( t1174 <= 0.0 ) { t1296 = 0.0 ; } else { t1296 = t1174 >= 1.0 ?
1.0 : t1174 ; } t1174 = X [ 74ULL ] * 259.836612622973 / ( t1298 == 0.0 ?
1.0E-16 : t1298 ) ; if ( t1174 <= 0.0 ) { t1299 = 0.0 ; } else { t1299 =
t1174 >= 1.0 ? 1.0 : t1174 ; } t570 [ 0ULL ] = X [ 72ULL ] ;
tlu2_linear_nearest_prelookup ( & hg_efOut . mField0 [ 0ULL ] , & hg_efOut .
mField1 [ 0ULL ] , & hg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t59
= hg_efOut ; tlu2_1d_linear_nearest_value ( & ig_efOut [ 0ULL ] , & t59 .
mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField13 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = ig_efOut [ 0
] ; tlu2_1d_linear_nearest_value ( & jg_efOut [ 0ULL ] , & t59 . mField0 [
0ULL ] , & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField14 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = jg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & kg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t569_idx_0 = kg_efOut [ 0 ] ; t1174 = ( (
( 1.0 - t1296 ) - t1299 ) * t571_idx_0 + t572_idx_0 * t1296 ) + t569_idx_0 *
t1299 ; t1300 = t1267 <= 0.0 ? t1267 : 0.0 ; tlu2_1d_linear_nearest_value ( &
lg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = lg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & mg_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = mg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & ng_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = ng_efOut [ 0 ] ; t1267 = ( ( ( 1.0 - t1296 ) - t1299 ) *
t571_idx_0 + t572_idx_0 * t1296 ) + t569_idx_0 * t1299 ; t1577 = t1269 +
t1267 ; t1586 = t1577 / 2.0 * 0.32 ; t1296 = - t1300 * 0.01 / ( t1586 == 0.0
? 1.0E-16 : t1586 ) ; t1299 = t1296 >= 0.0 ? t1296 : - t1296 ; t1296 = t1299
> 1000.0 ? t1299 : 1000.0 ; t1581 = t891 + t1174 ; if ( t1581 / 2.0 > 0.5 ) {
t1300 = ( t891 + t1174 ) / 2.0 ; } else { t1300 = 0.5 ; } t1586 = pmf_log10 (
6.9 / ( t1296 == 0.0 ? 1.0E-16 : t1296 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1296 == 0.0 ? 1.0E-16 : t1296 ) + 0.00017169489553429715
) * 3.24 ; t1301 = 1.0 / ( t1586 == 0.0 ? 1.0E-16 : t1586 ) ; t1623 = (
pmf_pow ( t1300 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1301 / 8.0 ) *
12.7 + 1.0 ; intrm_sf_mf_1383 = ( t1296 - 1000.0 ) * ( t1301 / 8.0 ) * t1300
/ ( t1623 == 0.0 ? 1.0E-16 : t1623 ) ; t1305 = ( t1299 - 2000.0 ) / 2000.0 ;
t1306 = t1305 * t1305 * 3.0 - t1305 * t1305 * t1305 * 2.0 ; if ( t1299 <=
2000.0 ) { t1305 = 3.66 ; } else if ( t1299 >= 4000.0 ) { t1305 =
intrm_sf_mf_1383 ; } else { t1305 = ( 1.0 - t1306 ) * 3.66 + intrm_sf_mf_1383
* t1306 ; } t1586 = t1305 * 10.709248339636167 ; t1639 = t1581 / 2.0 ; if (
t1299 > t1586 / 0.32 / ( t1639 == 0.0 ? 1.0E-16 : t1639 ) / 30.0 ) { U_idx_1
= ( t891 + t1174 ) / 2.0 ; intrm_sf_mf_1383 = t1305 * 10.709248339636167 / (
t1299 == 0.0 ? 1.0E-16 : t1299 ) / 0.32 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; } else { intrm_sf_mf_1383 = 30.0 ; } if ( X [ 17ULL ] <= 0.0 ) {
t1305 = 0.0 ; } else { t1305 = X [ 17ULL ] >= 1.0 ? 1.0 : X [ 17ULL ] ; } if
( X [ 16ULL ] <= 0.0 ) { t1306 = 0.0 ; } else { t1306 = X [ 16ULL ] >= 1.0 ?
1.0 : X [ 16ULL ] ; } t1307 = ( ( ( 1.0 - t1305 ) - t1306 ) *
296.802103844292 + t1305 * 461.523 ) + t1306 * 259.836612622973 ; t1308 = - (
( X [ 15ULL ] / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) - X [ 427ULL ]
/ ( X [ 428ULL ] == 0.0 ? 1.0E-16 : X [ 428ULL ] ) ) * X [ 415ULL ] * t1307 )
/ 0.32 ; if ( X [ 427ULL ] <= 216.59999999999997 ) { t869 =
216.59999999999997 ; } else { t869 = X [ 427ULL ] >= 623.15 ? 623.15 : X [
427ULL ] ; } t863 = t869 * t869 ; t1310 = ( ( ( 1074.1165326382541 + t869 * -
0.2214565261064077 ) + t863 * 0.00037212980109010952 ) * ( ( 1.0 - t1305 ) -
t1306 ) + ( ( 1479.6504774710445 + t869 * 1.200211433705052 ) + t863 * -
0.00038614513167842338 ) * t1305 ) + ( ( 900.63941224837913 + t869 * -
0.044484923911364271 ) + t863 * 0.00036936011832043369 ) * t1306 ; t1602 =
t1310 - t1307 ; t863 = t1310 / ( t1602 == 0.0 ? 1.0E-16 : t1602 ) ;
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked = pmf_sqrt (
t1308 * t1308 * 9.999999999999999E-14 + fabs ( X [ 427ULL ] * t863 * t1307 )
* 1.0E-9 ) ; if ( X [ 92ULL ] <= 0.0 ) { t1314 = 0.0 ; } else { t1314 = X [
92ULL ] >= 1.0 ? 1.0 : X [ 92ULL ] ; } if ( X [ 91ULL ] <= 0.0 ) { t1315 =
0.0 ; } else { t1315 = X [ 91ULL ] >= 1.0 ? 1.0 : X [ 91ULL ] ; } t570 [ 0ULL
] = X [ 15ULL ] ; tlu2_linear_nearest_prelookup ( & og_efOut . mField0 [ 0ULL
] , & og_efOut . mField1 [ 0ULL ] , & og_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] ,
& t68 [ 0ULL ] ) ; t59 = og_efOut ; tlu2_1d_linear_nearest_value ( & pg_efOut
[ 0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField7 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t571_idx_0 = pg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & qg_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t572_idx_0 = qg_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & rg_efOut [
0ULL ] , & t59 . mField0 [ 0ULL ] , & t59 . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField17 , & t67 [ 0ULL ] , & t68 [ 0ULL ] )
; t569_idx_0 = rg_efOut [ 0 ] ; t1317 = ( ( ( 1.0 - t1314 ) - t1315 ) *
t571_idx_0 + t572_idx_0 * t1314 ) + t569_idx_0 * t1315 ; t1602 = X [ 428ULL ]
* X [ 428ULL ] * t863 ; t1318 = - pmf_sqrt ( fabs ( t1602 / ( t1307 == 0.0 ?
1.0E-16 : t1307 ) / ( X [ 427ULL ] == 0.0 ? 1.0E-16 : X [ 427ULL ] ) ) ) *
0.32 ; if ( t1318 >= 0.0 ) { intrm_sf_mf_1449 = t1318 * 100000.0 ; } else {
intrm_sf_mf_1449 = - t1318 * 100000.0 ; } U_idx_1 = t1317 * 0.32 ; t891 =
intrm_sf_mf_1449 * 0.01 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ; t869 = X [
15ULL ] * t1307 ; t1321 = X [ 54ULL ] / ( t869 == 0.0 ? 1.0E-16 : t869 ) ;
t1642 = t1321 * 6.4000000000000011E-5 ; t1324 = t1318 * t1317 *
2.9973120849090416 / ( t1642 == 0.0 ? 1.0E-16 : t1642 ) ; t1325 = t891 >= 1.0
? t891 : 1.0 ; t869 = pmf_log10 ( 6.9 / ( t1325 == 0.0 ? 1.0E-16 : t1325 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1325 == 0.0 ? 1.0E-16 : t1325
) + 0.00017169489553429715 ) * 3.24 ; t1647 = t1321 * 0.0020480000000000003 ;
intrm_sf_mf_1449 = t1318 * intrm_sf_mf_1449 * ( 1.0 / ( t869 == 0.0 ? 1.0E-16
: t869 ) ) * 0.046833001326703774 / ( t1647 == 0.0 ? 1.0E-16 : t1647 ) ;
t1326 = ( t891 - 2000.0 ) / 2000.0 ; t869 = t1326 * t1326 * 3.0 - t1326 *
t1326 * t1326 * 2.0 ; if ( t891 <= 2000.0 ) { t1326 = t1324 * 1.0E-5 ; } else
if ( t891 >= 4000.0 ) { t1326 = intrm_sf_mf_1449 * 1.0E-5 ; } else { t1326 =
( ( 1.0 - t869 ) * t1324 + intrm_sf_mf_1449 * t869 ) * 1.0E-5 ; }
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked = - ( X [
415ULL ] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked )
/ 0.32 * 0.00031622776601683789 + t1326 ; intrm_sf_mf_1449 = - ( ( X [ 15ULL
] / ( X [ 54ULL ] == 0.0 ? 1.0E-16 : X [ 54ULL ] ) - X [ 429ULL ] / ( X [
430ULL ] == 0.0 ? 1.0E-16 : X [ 430ULL ] ) ) * X [ 388ULL ] * t1307 ) / 0.32
; if ( X [ 429ULL ] <= 216.59999999999997 ) { t891 = 216.59999999999997 ; }
else { t891 = X [ 429ULL ] >= 623.15 ? 623.15 : X [ 429ULL ] ; } t1328 = t891
* t891 ; t1324 = ( ( ( 1074.1165326382541 + t891 * - 0.2214565261064077 ) +
t1328 * 0.00037212980109010952 ) * ( ( 1.0 - t1305 ) - t1306 ) + ( (
1479.6504774710445 + t891 * 1.200211433705052 ) + t1328 * -
0.00038614513167842338 ) * t1305 ) + ( ( 900.63941224837913 + t891 * -
0.044484923911364271 ) + t1328 * 0.00036936011832043369 ) * t1306 ; t1623 =
t1324 - t1307 ; t1305 = t1324 / ( t1623 == 0.0 ? 1.0E-16 : t1623 ) ; t1306 =
pmf_sqrt ( intrm_sf_mf_1449 * intrm_sf_mf_1449 * 9.999999999999999E-14 + fabs
( X [ 429ULL ] * t1305 * t1307 ) * 1.0E-9 ) ; t1623 = X [ 430ULL ] * X [
430ULL ] * t1305 ; t1326 = - pmf_sqrt ( fabs ( t1623 / ( t1307 == 0.0 ?
1.0E-16 : t1307 ) / ( X [ 429ULL ] == 0.0 ? 1.0E-16 : X [ 429ULL ] ) ) ) *
0.32 ; if ( t1326 >= 0.0 ) { t869 = t1326 * 100000.0 ; } else { t869 = -
t1326 * 100000.0 ; } t804 = t869 * 0.01 / ( U_idx_1 == 0.0 ? 1.0E-16 :
U_idx_1 ) ; t1328 = t1326 * t1317 * 2.9973120849090416 / ( t1642 == 0.0 ?
1.0E-16 : t1642 ) ; t1329 = t804 >= 1.0 ? t804 : 1.0 ; t1639 = pmf_log10 (
6.9 / ( t1329 == 0.0 ? 1.0E-16 : t1329 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t1329 == 0.0 ? 1.0E-16 : t1329 ) + 0.00017169489553429715
) * 3.24 ; t869 = t1326 * t869 * ( 1.0 / ( t1639 == 0.0 ? 1.0E-16 : t1639 ) )
* 0.046833001326703774 / ( t1647 == 0.0 ? 1.0E-16 : t1647 ) ; t1330 = ( t804
- 2000.0 ) / 2000.0 ; t1331 = t1330 * t1330 * 3.0 - t1330 * t1330 * t1330 *
2.0 ; if ( t804 <= 2000.0 ) { t1330 = t1328 * 1.0E-5 ; } else if ( t804 >=
4000.0 ) { t1330 = t869 * 1.0E-5 ; } else { t1330 = ( ( 1.0 - t1331 ) * t1328
+ t869 * t1331 ) * 1.0E-5 ; } t1306 = - ( X [ 388ULL ] * t1306 ) / 0.32 *
0.00031622776601683789 + t1330 ; if ( 1.0 - X [ 17ULL ] >= 0.01 ) { t804 =
1.0 - X [ 17ULL ] ; } else if ( 1.0 - X [ 17ULL ] >= - 0.1 ) { t804 = pmf_exp
( ( ( 1.0 - X [ 17ULL ] ) - 0.01 ) / 0.01 ) * 0.01 ; } else { t804 =
1.6701700790245661E-7 ; } t1328 = X [ 16ULL ] / ( t804 == 0.0 ? 1.0E-16 :
t804 ) * - 36.965491221318985 + 296.802103844292 ; t570 [ 0ULL ] = X [ 15ULL
] ; tlu2_linear_linear_prelookup ( & sg_efOut . mField0 [ 0ULL ] , & sg_efOut
. mField1 [ 0ULL ] , & sg_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t570 [ 0ULL ] , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ;
t42 = sg_efOut ; tlu2_1d_linear_linear_value ( & tg_efOut [ 0ULL ] , & t42 .
mField0 [ 0ULL ] , & t42 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField3 , & t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t66 [ 0 ] = tg_efOut [ 0 ]
; t1330 = pmf_exp ( pmf_log ( X [ 54ULL ] * 100000.0 ) - t66 [ 0ULL ] ) ; if
( t1330 >= 1.0 ) { t1639 = ( t1330 - 1.0 ) * 461.523 + t1328 ; t1331 = t1328
/ ( t1639 == 0.0 ? 1.0E-16 : t1639 ) ; } else { t1331 = 1.0 ; }
tlu2_1d_linear_nearest_value ( & ug_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField13 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t570 [ 0 ] = ug_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & vg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField14 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t571_idx_0 = vg_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & wg_efOut [ 0ULL ] , & t59 . mField0 [ 0ULL ]
, & t59 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField19 ,
& t67 [ 0ULL ] , & t68 [ 0ULL ] ) ; t572_idx_0 = wg_efOut [ 0 ] ; t1332 = ( (
( 1.0 - t1314 ) - t1315 ) * t570 [ 0ULL ] + t571_idx_0 * t1314 ) + t572_idx_0
* t1315 ; t1314 = ( - X [ 415ULL ] - ( - X [ 388ULL ] ) ) / 2.0 ; t1639 =
t1267 + t1317 ; t1647 = t1639 / 2.0 * 0.32 ; t1267 = ( t1314 >= 0.0 ? t1314 :
0.0 ) * 0.01 / ( t1647 == 0.0 ? 1.0E-16 : t1647 ) ; t1315 = t1267 >= 0.0 ?
t1267 : - t1267 ; t1267 = t1315 > 1000.0 ? t1315 : 1000.0 ; t1642 = t1174 +
t1332 ; if ( t1642 / 2.0 > 0.5 ) { t1333 = ( t1174 + t1332 ) / 2.0 ; } else {
t1333 = 0.5 ; } t1647 = pmf_log10 ( 6.9 / ( t1267 == 0.0 ? 1.0E-16 : t1267 )
+ 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1267 == 0.0 ? 1.0E-16 :
t1267 ) + 0.00017169489553429715 ) * 3.24 ; t1335 = 1.0 / ( t1647 == 0.0 ?
1.0E-16 : t1647 ) ; t1658 = ( pmf_pow ( t1333 , 0.66666666666666663 ) - 1.0 )
* pmf_sqrt ( t1335 / 8.0 ) * 12.7 + 1.0 ; t1336 = ( t1267 - 1000.0 ) * (
t1335 / 8.0 ) * t1333 / ( t1658 == 0.0 ? 1.0E-16 : t1658 ) ; t1337 = ( t1315
- 2000.0 ) / 2000.0 ; intrm_sf_mf_1520 = t1337 * t1337 * 3.0 - t1337 * t1337
* t1337 * 2.0 ; if ( t1315 <= 2000.0 ) { t1337 = 3.66 ; } else if ( t1315 >=
4000.0 ) { t1337 = t1336 ; } else { t1337 = ( 1.0 - intrm_sf_mf_1520 ) * 3.66
+ t1336 * intrm_sf_mf_1520 ; } t1647 = t1337 * 10.709248339636167 ; t1661 =
t1642 / 2.0 ; if ( t1315 > t1647 / 0.32 / ( t1661 == 0.0 ? 1.0E-16 : t1661 )
/ 30.0 ) { t869 = ( t1174 + t1332 ) / 2.0 ; t1336 = t1337 *
10.709248339636167 / ( t1315 == 0.0 ? 1.0E-16 : t1315 ) / 0.32 / ( t869 ==
0.0 ? 1.0E-16 : t869 ) ; } else { t1336 = 30.0 ; } t1658 = t1235 + t1317 ;
t1667 = t1658 / 2.0 * 0.32 ; t1174 = - ( t1314 <= 0.0 ? t1314 : 0.0 ) * 0.01
/ ( t1667 == 0.0 ? 1.0E-16 : t1667 ) ; t1235 = t1174 >= 0.0 ? t1174 : - t1174
; t1174 = t1235 > 1000.0 ? t1235 : 1000.0 ; t1661 = U_idx_3 + t1332 ; if (
t1661 / 2.0 > 0.5 ) { t1314 = ( U_idx_3 + t1332 ) / 2.0 ; } else { t1314 =
0.5 ; } t1667 = pmf_log10 ( 6.9 / ( t1174 == 0.0 ? 1.0E-16 : t1174 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1174 == 0.0 ? 1.0E-16 : t1174
) + 0.00017169489553429715 ) * 3.24 ; t1337 = 1.0 / ( t1667 == 0.0 ? 1.0E-16
: t1667 ) ; t869 = ( pmf_pow ( t1314 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1337 / 8.0 ) * 12.7 + 1.0 ; intrm_sf_mf_1520 = ( t1174 - 1000.0 )
* ( t1337 / 8.0 ) * t1314 / ( t869 == 0.0 ? 1.0E-16 : t869 ) ; t1341 = (
t1235 - 2000.0 ) / 2000.0 ; t1344 = t1341 * t1341 * 3.0 - t1341 * t1341 *
t1341 * 2.0 ; if ( t1235 <= 2000.0 ) { t1341 = 3.66 ; } else if ( t1235 >=
4000.0 ) { t1341 = intrm_sf_mf_1520 ; } else { t1341 = ( 1.0 - t1344 ) * 3.66
+ intrm_sf_mf_1520 * t1344 ; } t1667 = t1341 * 10.709248339636167 ; t869 =
t1661 / 2.0 ; if ( t1235 > t1667 / 0.32 / ( t869 == 0.0 ? 1.0E-16 : t869 ) /
30.0 ) { t869 = ( U_idx_3 + t1332 ) / 2.0 ; intrm_sf_mf_1520 = t1341 *
10.709248339636167 / ( t1235 == 0.0 ? 1.0E-16 : t1235 ) / 0.32 / ( t869 ==
0.0 ? 1.0E-16 : t869 ) ; } else { intrm_sf_mf_1520 = 30.0 ; } if ( - X [
281ULL ] >= 0.0 ) { t1332 = - X [ 281ULL ] ; } else { t1332 = X [ 281ULL ] ;
} t1332 = t1332 * 0.05 / ( t1342 == 0.0 ? 1.0E-16 : t1342 ) ; t1341 = t1332
>= 1.0 ? t1332 : 1.0 ; t1332 = ( X [ 353ULL ] >= 0.0 ? X [ 353ULL ] : - X [
353ULL ] ) * 0.05 / ( t1342 == 0.0 ? 1.0E-16 : t1342 ) ; t1344 = t1332 >= 1.0
? t1332 : 1.0 ; t1332 = ( X [ 388ULL ] >= 0.0 ? X [ 388ULL ] : - X [ 388ULL ]
) * 0.05 / ( t873 == 0.0 ? 1.0E-16 : t873 ) ; t1342 = t1332 >= 1.0 ? t1332 :
1.0 ; if ( - X [ 376ULL ] >= 0.0 ) { t1332 = - X [ 376ULL ] ; } else { t1332
= X [ 376ULL ] ; } t1332 = t1332 * 0.05 / ( t873 == 0.0 ? 1.0E-16 : t873 ) ;
t571_idx_0 = t1332 >= 1.0 ? t1332 : 1.0 ; if ( - X [ 353ULL ] >= 0.0 ) {
t1332 = - X [ 353ULL ] ; } else { t1332 = X [ 353ULL ] ; } t1332 = t1332 *
0.01 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t1346 = t1332 >= 1.0 ? t1332
: 1.0 ; t1332 = ( X [ 415ULL ] >= 0.0 ? X [ 415ULL ] : - X [ 415ULL ] ) *
0.01 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) ; t572_idx_0 = t1332 >= 1.0 ?
t1332 : 1.0 ; t1332 = ( t792 >= 0.0 ? t792 : - t792 ) * 0.01 / ( t886 == 0.0
? 1.0E-16 : t886 ) ; U_idx_9 = t1332 >= 1.0 ? t1332 : 1.0 ; if ( - X [ 126ULL
] >= 0.0 ) { t1332 = - X [ 126ULL ] ; } else { t1332 = X [ 126ULL ] ; } if (
- X [ 415ULL ] >= 0.0 ) { t1349 = - X [ 415ULL ] ; } else { t1349 = X [
415ULL ] ; } t1349 = t1349 * 0.01 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1 ) ;
t569_idx_0 = t1349 >= 1.0 ? t1349 : 1.0 ; t1332 = t1332 * 0.01 / ( t886 ==
0.0 ? 1.0E-16 : t886 ) ; if ( - X [ 388ULL ] >= 0.0 ) { t1349 = - X [ 388ULL
] ; } else { t1349 = X [ 388ULL ] ; } t1349 = t1349 * 0.01 / ( U_idx_1 == 0.0
? 1.0E-16 : U_idx_1 ) ; t886 = t1349 >= 1.0 ? t1349 : 1.0 ; t1349 = t1332 >=
1.0 ? t1332 : 1.0 ; if ( U_idx_10 >= 1.0 ) { t1332 = 1.0 ; } else { t1332 =
U_idx_10 <= 0.0 ? 0.0 : U_idx_10 ; } intrm_sf_mf_1575 = ( fabs ( t1332 -
U_idx_10 ) > 0.001 ) ; if ( X [ 260ULL ] <= 0.0 ) { t1332 = 0.0 ; } else {
t1332 = X [ 260ULL ] >= 1.0 ? 1.0 : X [ 260ULL ] ; } if ( X [ 259ULL ] <= 0.0
) { t891 = 0.0 ; } else { t891 = X [ 259ULL ] >= 1.0 ? 1.0 : X [ 259ULL ] ; }
U_idx_1 = ( ( ( 1.0 - t1332 ) - t891 ) * 296.802103844292 + t1332 * 461.523 )
+ t891 * 259.836612622973 ; if ( - X [ 213ULL ] >= 0.0 ) { t1332 = - X [
213ULL ] ; } else { t1332 = X [ 213ULL ] ; } t1332 = t1332 * 0.01 / ( t992 ==
0.0 ? 1.0E-16 : t992 ) ; t891 = t1332 >= 1.0 ? t1332 : 1.0 ; if ( - X [
183ULL ] >= 0.0 ) { t1332 = - X [ 183ULL ] ; } else { t1332 = X [ 183ULL ] ;
} t1332 = t1332 * 0.01 / ( t992 == 0.0 ? 1.0E-16 : t992 ) ; t992 = t1332 >=
1.0 ? t1332 : 1.0 ; if ( - X [ 192ULL ] >= 0.0 ) { t1332 = - X [ 192ULL ] ; }
else { t1332 = X [ 192ULL ] ; } t1332 = t1332 * 0.05 / ( t1096 == 0.0 ?
1.0E-16 : t1096 ) ; U_idx_2 = t1332 >= 1.0 ? t1332 : 1.0 ; t1332 = ( X [
304ULL ] >= 0.0 ? X [ 304ULL ] : - X [ 304ULL ] ) * 0.05 / ( t1096 == 0.0 ?
1.0E-16 : t1096 ) ; t1096 = t1332 >= 1.0 ? t1332 : 1.0 ; if ( - X [ 304ULL ]
>= 0.0 ) { t1332 = - X [ 304ULL ] ; } else { t1332 = X [ 304ULL ] ; } t1332 =
t1332 * 0.01 / ( t1180 == 0.0 ? 1.0E-16 : t1180 ) ; t873 = t1332 >= 1.0 ?
t1332 : 1.0 ; t1332 = ( X [ 318ULL ] >= 0.0 ? X [ 318ULL ] : - X [ 318ULL ] )
* 0.01 / ( t1180 == 0.0 ? 1.0E-16 : t1180 ) ; t1180 = t1332 >= 1.0 ? t1332 :
1.0 ; if ( - X [ 318ULL ] >= 0.0 ) { t1332 = - X [ 318ULL ] ; } else { t1332
= X [ 318ULL ] ; } t1332 = t1332 * 0.01 / ( t1262 == 0.0 ? 1.0E-16 : t1262 )
; U_idx_3 = t1332 >= 1.0 ? t1332 : 1.0 ; t1332 = ( X [ 138ULL ] >= 0.0 ? X [
138ULL ] : - X [ 138ULL ] ) * 0.01 / ( t1262 == 0.0 ? 1.0E-16 : t1262 ) ;
t1262 = t1332 >= 1.0 ? t1332 : 1.0 ; if ( U_idx_5 >= 0.0 ) { t60 = true ; }
else { t60 = ( X [ 41ULL ] > 0.0 ) ; } if ( X [ 108ULL ] >= 0.0 ) { t61 =
true ; } else { t61 = ( X [ 11ULL ] > 0.0 ) ; } if ( X [ 102ULL ] >= 0.0 ) {
t62 = true ; } else { t62 = ( X [ 10ULL ] > 0.0 ) ; } if ( U_idx_7 >= 0.0 ) {
t63 = true ; } else { t63 = ( X [ 47ULL ] > 0.0 ) ; } if ( X [ 109ULL ] >=
0.0 ) { t64 = true ; } else { t64 = ( X [ 17ULL ] > 0.0 ) ; } if ( X [ 104ULL
] >= 0.0 ) { t65 = true ; } else { t65 = ( X [ 16ULL ] > 0.0 ) ; } t446 [
0ULL ] = ( int32_T ) ( t2013 >= 0.0 ) ; t446 [ 1ULL ] = ( int32_T ) ( t2013
<= 1.0 ) ; t446 [ 2ULL ] = ( int32_T ) ( X [ 59ULL ] >= 100.8 ) ; t446 [ 3ULL
] = ( int32_T ) ( X [ 59ULL ] <= 607.824 ) ; t446 [ 4ULL ] = ( int32_T ) ( M
[ 44ULL ] != 0 ) ; t446 [ 5ULL ] = ( int32_T ) ( M [ 45ULL ] != 0 ) ; t446 [
6ULL ] = ( int32_T ) ! intrm_sf_mf_1575 ; t446 [ 7ULL ] = ( int32_T ) ( M [
46ULL ] != 0 ) ; t446 [ 8ULL ] = ( int32_T ) ( M [ 47ULL ] != 0 ) ; t446 [
9ULL ] = 1 ; t446 [ 10ULL ] = 1 ; t446 [ 11ULL ] = ( int32_T ) ( M [ 48ULL ]
!= 0 ) ; t446 [ 12ULL ] = ( int32_T ) ( M [ 49ULL ] != 0 ) ; t446 [ 13ULL ] =
( int32_T ) ( M [ 50ULL ] != 0 ) ; t446 [ 14ULL ] = ( int32_T ) ( M [ 51ULL ]
!= 0 ) ; t446 [ 15ULL ] = ( int32_T ) ( M [ 52ULL ] != 0 ) ; t446 [ 16ULL ] =
( int32_T ) ( M [ 54ULL ] != 0 ) ; t446 [ 17ULL ] = ( int32_T ) ( M [ 55ULL ]
!= 0 ) ; t446 [ 18ULL ] = ( int32_T ) ( M [ 56ULL ] != 0 ) ; t446 [ 19ULL ] =
( int32_T ) ( M [ 57ULL ] != 0 ) ; t446 [ 20ULL ] = ( int32_T ) ( M [ 58ULL ]
!= 0 ) ; t446 [ 21ULL ] = ( int32_T ) ( M [ 59ULL ] != 0 ) ; t446 [ 22ULL ] =
( int32_T ) ( M [ 60ULL ] != 0 ) ; t446 [ 23ULL ] = ( int32_T ) ( M [ 52ULL ]
!= 0 ) ; t446 [ 24ULL ] = ( int32_T ) ( M [ 54ULL ] != 0 ) ; t446 [ 25ULL ] =
( int32_T ) ( M [ 55ULL ] != 0 ) ; t446 [ 26ULL ] = ( int32_T ) ( M [ 56ULL ]
!= 0 ) ; t446 [ 27ULL ] = ( int32_T ) ( M [ 61ULL ] != 0 ) ; t446 [ 28ULL ] =
( int32_T ) ( M [ 62ULL ] != 0 ) ; t446 [ 29ULL ] = 1 ; t446 [ 30ULL ] = 1 ;
t446 [ 31ULL ] = ( int32_T ) ( M [ 63ULL ] != 0 ) ; t446 [ 32ULL ] = (
int32_T ) ( M [ 65ULL ] != 0 ) ; t446 [ 33ULL ] = ( int32_T ) ( M [ 66ULL ]
!= 0 ) ; t446 [ 34ULL ] = ( int32_T ) ( M [ 67ULL ] != 0 ) ; t446 [ 35ULL ] =
( int32_T ) ( M [ 48ULL ] != 0 ) ; t446 [ 36ULL ] = ( int32_T ) ( M [ 49ULL ]
!= 0 ) ; t446 [ 37ULL ] = ( int32_T ) ( M [ 50ULL ] != 0 ) ; t446 [ 38ULL ] =
( int32_T ) ( M [ 51ULL ] != 0 ) ; t446 [ 39ULL ] = ( int32_T ) ( M [ 63ULL ]
!= 0 ) ; t446 [ 40ULL ] = ( int32_T ) ( M [ 65ULL ] != 0 ) ; t446 [ 41ULL ] =
( int32_T ) ( M [ 68ULL ] != 0 ) ; t446 [ 42ULL ] = ( int32_T ) ( M [ 69ULL ]
!= 0 ) ; t446 [ 43ULL ] = 1 ; t446 [ 44ULL ] = 1 ; t446 [ 45ULL ] = ( int32_T
) ( M [ 70ULL ] != 0 ) ; t446 [ 46ULL ] = ( int32_T ) ( M [ 71ULL ] != 0 ) ;
t446 [ 47ULL ] = ( int32_T ) ( M [ 72ULL ] != 0 ) ; t446 [ 48ULL ] = (
int32_T ) ( M [ 73ULL ] != 0 ) ; t446 [ 49ULL ] = 1 ; t446 [ 50ULL ] = 1 ;
t446 [ 51ULL ] = ( int32_T ) ( M [ 74ULL ] != 0 ) ; t446 [ 52ULL ] = (
int32_T ) ( M [ 76ULL ] != 0 ) ; t446 [ 53ULL ] = ( int32_T ) ( M [ 77ULL ]
!= 0 ) ; t446 [ 54ULL ] = ( int32_T ) ( M [ 78ULL ] != 0 ) ; t446 [ 55ULL ] =
( int32_T ) ( M [ 63ULL ] != 0 ) ; t446 [ 56ULL ] = ( int32_T ) ( M [ 65ULL ]
!= 0 ) ; t446 [ 57ULL ] = ( int32_T ) ( M [ 79ULL ] != 0 ) ; t446 [ 58ULL ] =
( int32_T ) ( M [ 80ULL ] != 0 ) ; t446 [ 59ULL ] = ( int32_T ) ( M [ 81ULL ]
!= 0 ) ; t446 [ 60ULL ] = ( int32_T ) ( M [ 82ULL ] != 0 ) ; t446 [ 61ULL ] =
( int32_T ) ( M [ 83ULL ] != 0 ) ; t446 [ 62ULL ] = ( int32_T ) ( M [ 84ULL ]
!= 0 ) ; t446 [ 63ULL ] = ( int32_T ) ( M [ 70ULL ] != 0 ) ; t446 [ 64ULL ] =
( int32_T ) ( M [ 71ULL ] != 0 ) ; t446 [ 65ULL ] = ( int32_T ) ( M [ 85ULL ]
!= 0 ) ; t446 [ 66ULL ] = ( int32_T ) ( M [ 87ULL ] != 0 ) ; t446 [ 67ULL ] =
( int32_T ) ( M [ 74ULL ] != 0 ) ; t446 [ 68ULL ] = ( int32_T ) ( M [ 76ULL ]
!= 0 ) ; t446 [ 69ULL ] = ( int32_T ) ( M [ 77ULL ] != 0 ) ; t446 [ 70ULL ] =
( int32_T ) ( M [ 78ULL ] != 0 ) ; t446 [ 71ULL ] = ( int32_T ) ( M [ 88ULL ]
!= 0 ) ; t446 [ 72ULL ] = ( int32_T ) ( M [ 89ULL ] != 0 ) ; t446 [ 73ULL ] =
( int32_T ) ( M [ 90ULL ] != 0 ) ; t446 [ 74ULL ] = ( int32_T ) ( M [ 91ULL ]
!= 0 ) ; t446 [ 75ULL ] = ( int32_T ) ( M [ 92ULL ] != 0 ) ; t446 [ 76ULL ] =
( int32_T ) ( M [ 93ULL ] != 0 ) ; t446 [ 77ULL ] = ( int32_T ) ( M [ 94ULL ]
!= 0 ) ; t446 [ 78ULL ] = 1 ; t446 [ 79ULL ] = 1 ; t446 [ 80ULL ] = ( int32_T
) ( M [ 91ULL ] != 0 ) ; t446 [ 81ULL ] = ( int32_T ) ( M [ 92ULL ] != 0 ) ;
t446 [ 82ULL ] = ( int32_T ) ( M [ 95ULL ] != 0 ) ; t446 [ 83ULL ] = (
int32_T ) ( M [ 96ULL ] != 0 ) ; t446 [ 84ULL ] = ( int32_T ) t60 ; t446 [
85ULL ] = 1 ; t446 [ 86ULL ] = ( int32_T ) ( M [ 63ULL ] != 0 ) ; t446 [
87ULL ] = ( int32_T ) ( M [ 65ULL ] != 0 ) ; t446 [ 88ULL ] = ( int32_T ) ( M
[ 98ULL ] != 0 ) ; t446 [ 89ULL ] = ( int32_T ) ( M [ 99ULL ] != 0 ) ; t446 [
90ULL ] = ( int32_T ) ( M [ 100ULL ] != 0 ) ; t446 [ 91ULL ] = ( int32_T ) (
M [ 101ULL ] != 0 ) ; t446 [ 92ULL ] = ( int32_T ) ( M [ 102ULL ] != 0 ) ;
t446 [ 93ULL ] = ( int32_T ) ( M [ 103ULL ] != 0 ) ; t446 [ 94ULL ] = (
int32_T ) ( M [ 104ULL ] != 0 ) ; t446 [ 95ULL ] = ( int32_T ) ( M [ 105ULL ]
!= 0 ) ; t446 [ 96ULL ] = ( int32_T ) ( M [ 106ULL ] != 0 ) ; t446 [ 97ULL ]
= ( int32_T ) ( M [ 107ULL ] != 0 ) ; t446 [ 98ULL ] = 1 ; t446 [ 99ULL ] = 1
; t446 [ 100ULL ] = ( int32_T ) ( M [ 100ULL ] != 0 ) ; t446 [ 101ULL ] = (
int32_T ) ( M [ 101ULL ] != 0 ) ; t446 [ 102ULL ] = ( int32_T ) ( M [ 102ULL
] != 0 ) ; t446 [ 103ULL ] = ( int32_T ) ( M [ 103ULL ] != 0 ) ; t446 [
104ULL ] = ( int32_T ) ( M [ 110ULL ] != 0 ) ; t446 [ 105ULL ] = ( int32_T )
( M [ 111ULL ] != 0 ) ; t446 [ 106ULL ] = ( int32_T ) ( M [ 112ULL ] != 0 ) ;
t446 [ 107ULL ] = ( int32_T ) ( M [ 113ULL ] != 0 ) ; t446 [ 108ULL ] = (
int32_T ) ( M [ 114ULL ] != 0 ) ; t446 [ 109ULL ] = ( int32_T ) ( M [ 115ULL
] != 0 ) ; t446 [ 110ULL ] = ( int32_T ) ( M [ 116ULL ] != 0 ) ; t446 [
111ULL ] = ( int32_T ) ( M [ 117ULL ] != 0 ) ; t446 [ 112ULL ] = ( int32_T )
t61 ; t446 [ 113ULL ] = ( int32_T ) t62 ; t446 [ 114ULL ] = ( int32_T ) ( M [
110ULL ] != 0 ) ; t446 [ 115ULL ] = ( int32_T ) ( M [ 111ULL ] != 0 ) ; t446
[ 116ULL ] = ( int32_T ) ( M [ 112ULL ] != 0 ) ; t446 [ 117ULL ] = ( int32_T
) ( M [ 113ULL ] != 0 ) ; t446 [ 118ULL ] = ( int32_T ) ( M [ 48ULL ] != 0 )
; t446 [ 119ULL ] = ( int32_T ) ( M [ 49ULL ] != 0 ) ; t446 [ 120ULL ] = (
int32_T ) ( M [ 50ULL ] != 0 ) ; t446 [ 121ULL ] = ( int32_T ) ( M [ 51ULL ]
!= 0 ) ; t446 [ 122ULL ] = ( int32_T ) ( M [ 118ULL ] != 0 ) ; t446 [ 123ULL
] = ( int32_T ) ( M [ 119ULL ] != 0 ) ; t446 [ 124ULL ] = ( int32_T ) ( M [
121ULL ] != 0 ) ; t446 [ 125ULL ] = ( int32_T ) ( M [ 122ULL ] != 0 ) ; t446
[ 126ULL ] = ( int32_T ) t63 ; t446 [ 127ULL ] = 1 ; t446 [ 128ULL ] = (
int32_T ) ( M [ 91ULL ] != 0 ) ; t446 [ 129ULL ] = ( int32_T ) ( M [ 92ULL ]
!= 0 ) ; t446 [ 130ULL ] = ( int32_T ) ( M [ 123ULL ] != 0 ) ; t446 [ 131ULL
] = ( int32_T ) ( M [ 124ULL ] != 0 ) ; t446 [ 132ULL ] = ( int32_T ) ( M [
125ULL ] != 0 ) ; t446 [ 133ULL ] = ( int32_T ) ( M [ 126ULL ] != 0 ) ; t446
[ 134ULL ] = ( int32_T ) ( M [ 127ULL ] != 0 ) ; t446 [ 135ULL ] = ( int32_T
) ( M [ 128ULL ] != 0 ) ; t446 [ 136ULL ] = ( int32_T ) ( M [ 129ULL ] != 0 )
; t446 [ 137ULL ] = ( int32_T ) ( M [ 130ULL ] != 0 ) ; t446 [ 138ULL ] = (
int32_T ) ( M [ 132ULL ] != 0 ) ; t446 [ 139ULL ] = ( int32_T ) ( M [ 133ULL
] != 0 ) ; t446 [ 140ULL ] = ( int32_T ) ( M [ 134ULL ] != 0 ) ; t446 [
141ULL ] = 1 ; t446 [ 142ULL ] = 1 ; t446 [ 143ULL ] = ( int32_T ) ( M [
135ULL ] != 0 ) ; t446 [ 144ULL ] = ( int32_T ) ( M [ 136ULL ] != 0 ) ; t446
[ 145ULL ] = ( int32_T ) ( M [ 137ULL ] != 0 ) ; t446 [ 146ULL ] = ( int32_T
) ( M [ 138ULL ] != 0 ) ; t446 [ 147ULL ] = ( int32_T ) ( M [ 139ULL ] != 0 )
; t446 [ 148ULL ] = ( int32_T ) ( M [ 140ULL ] != 0 ) ; t446 [ 149ULL ] = (
int32_T ) ( M [ 141ULL ] != 0 ) ; t446 [ 150ULL ] = ( int32_T ) ( M [ 143ULL
] != 0 ) ; t446 [ 151ULL ] = ( int32_T ) ( M [ 144ULL ] != 0 ) ; t446 [
152ULL ] = ( int32_T ) ( M [ 145ULL ] != 0 ) ; t446 [ 153ULL ] = ( int32_T )
( M [ 146ULL ] != 0 ) ; t446 [ 154ULL ] = ( int32_T ) ( M [ 147ULL ] != 0 ) ;
t446 [ 155ULL ] = ( int32_T ) ( M [ 139ULL ] != 0 ) ; t446 [ 156ULL ] = (
int32_T ) ( M [ 140ULL ] != 0 ) ; t446 [ 157ULL ] = ( int32_T ) ( M [ 141ULL
] != 0 ) ; t446 [ 158ULL ] = ( int32_T ) ( M [ 143ULL ] != 0 ) ; t446 [
159ULL ] = ( int32_T ) ( M [ 148ULL ] != 0 ) ; t446 [ 160ULL ] = ( int32_T )
( M [ 149ULL ] != 0 ) ; t446 [ 161ULL ] = 1 ; t446 [ 162ULL ] = 1 ; t446 [
163ULL ] = ( int32_T ) ( M [ 125ULL ] != 0 ) ; t446 [ 164ULL ] = ( int32_T )
( M [ 126ULL ] != 0 ) ; t446 [ 165ULL ] = ( int32_T ) ( M [ 127ULL ] != 0 ) ;
t446 [ 166ULL ] = ( int32_T ) ( M [ 128ULL ] != 0 ) ; t446 [ 167ULL ] = (
int32_T ) ( M [ 150ULL ] != 0 ) ; t446 [ 168ULL ] = ( int32_T ) ( M [ 151ULL
] != 0 ) ; t446 [ 169ULL ] = ( int32_T ) ( M [ 152ULL ] != 0 ) ; t446 [
170ULL ] = ( int32_T ) ( M [ 154ULL ] != 0 ) ; t446 [ 171ULL ] = ( int32_T )
( M [ 155ULL ] != 0 ) ; t446 [ 172ULL ] = ( int32_T ) ( M [ 156ULL ] != 0 ) ;
t446 [ 173ULL ] = ( int32_T ) ( M [ 157ULL ] != 0 ) ; t446 [ 174ULL ] = (
int32_T ) ( M [ 158ULL ] != 0 ) ; t446 [ 175ULL ] = ( int32_T ) t64 ; t446 [
176ULL ] = ( int32_T ) t65 ; t446 [ 177ULL ] = ( int32_T ) ( M [ 150ULL ] !=
0 ) ; t446 [ 178ULL ] = ( int32_T ) ( M [ 151ULL ] != 0 ) ; t446 [ 179ULL ] =
( int32_T ) ( M [ 152ULL ] != 0 ) ; t446 [ 180ULL ] = ( int32_T ) ( M [
154ULL ] != 0 ) ; t446 [ 181ULL ] = ( int32_T ) ( M [ 135ULL ] != 0 ) ; t446
[ 182ULL ] = ( int32_T ) ( M [ 136ULL ] != 0 ) ; t446 [ 183ULL ] = ( int32_T
) ( M [ 137ULL ] != 0 ) ; t446 [ 184ULL ] = ( int32_T ) ( M [ 138ULL ] != 0 )
; t446 [ 185ULL ] = ( int32_T ) ( M [ 159ULL ] != 0 ) ; t446 [ 186ULL ] = (
int32_T ) ( M [ 160ULL ] != 0 ) ; t446 [ 187ULL ] = ( int32_T ) ( M [ 161ULL
] != 0 ) ; t446 [ 188ULL ] = ( int32_T ) ( M [ 162ULL ] != 0 ) ; t446 [
189ULL ] = ( int32_T ) ( M [ 163ULL ] != 0 ) ; t446 [ 190ULL ] = 1 ; t446 [
191ULL ] = 1 ; t446 [ 192ULL ] = 1 ; t446 [ 193ULL ] = 1 ; t446 [ 194ULL ] =
1 ; t446 [ 195ULL ] = 1 ; t446 [ 196ULL ] = 1 ; t446 [ 197ULL ] = 1 ; t446 [
198ULL ] = 1 ; t446 [ 199ULL ] = 1 ; t446 [ 200ULL ] = 1 ; t446 [ 201ULL ] =
1 ; t446 [ 202ULL ] = 1 ; t446 [ 203ULL ] = 1 ; t446 [ 204ULL ] = 1 ; t446 [
205ULL ] = 1 ; t446 [ 206ULL ] = 1 ; t446 [ 207ULL ] = 1 ; t446 [ 208ULL ] =
1 ; t446 [ 209ULL ] = 1 ; t446 [ 210ULL ] = 1 ; t446 [ 211ULL ] = 1 ; t446 [
212ULL ] = 1 ; t446 [ 213ULL ] = 1 ; t446 [ 214ULL ] = 1 ; t446 [ 215ULL ] =
1 ; t446 [ 216ULL ] = 1 ; t446 [ 217ULL ] = 1 ; t446 [ 218ULL ] = 1 ; t446 [
219ULL ] = ( int32_T ) ( t772 > 0.0 ) ; t446 [ 220ULL ] = ( int32_T ) ( ( ! (
t772 > 0.0 ) ) || ( pmf_log ( t772 ) - t45_idx_0 < 663.67513503334737 ) ) ;
t446 [ 221ULL ] = ( int32_T ) ( t788 != 0.0 ) ; t446 [ 222ULL ] = ( int32_T )
( t780 > 0.0 ) ; t446 [ 223ULL ] = ( int32_T ) ( ( ! ( t780 > 0.0 ) ) || (
pmf_log ( t780 ) - t45_idx_0 < 663.67513503334737 ) ) ; t446 [ 224ULL ] = (
int32_T ) ( t796 != 0.0 ) ; t446 [ 225ULL ] = 1 ; t446 [ 226ULL ] = 1 ; t446
[ 227ULL ] = ( int32_T ) ( t2027 != 0.0 ) ; t446 [ 228ULL ] = 1 ; t446 [
229ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 >= 1.0 ) ) ||
( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 > 0.0 ) ) ;
t446 [ 230ULL ] = 1 ; t446 [ 231ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15 <= 13986.0 )
) || ( 1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra15
/ 14000.0 > 0.0 ) ) ; t446 [ 232ULL ] = 1 ; t446 [ 233ULL ] = 1 ; t446 [
234ULL ] = 1 ; t446 [ 235ULL ] = 1 ; t446 [ 236ULL ] = ( int32_T ) ( t787 >=
0.0 ) ; t446 [ 237ULL ] = ( int32_T ) ( ( ! ( t787 >= 0.0 ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 != 0.0 ) ) ;
t869 = pmf_sqrt ( t787 ) * t779 ; t446 [ 238ULL ] = ( int32_T ) ( ( ! ( t787
>= 0.0 ) ) || ( ( t787 >= 0.0 ) && ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 != 0.0 ) ) )
|| ( t869 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8
== 0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 ) > 0.0 ) ) ;
t446 [ 239ULL ] = 1 ; t446 [ 240ULL ] = 1 ; t446 [ 241ULL ] = 1 ; t446 [
242ULL ] = 1 ; t446 [ 243ULL ] = 1 ; t446 [ 244ULL ] = 1 ; t446 [ 245ULL ] =
1 ; t446 [ 246ULL ] = 1 ; t446 [ 247ULL ] = 1 ; t446 [ 248ULL ] = 1 ; t446 [
249ULL ] = 1 ; t446 [ 250ULL ] = ( int32_T ) ( ( X [ 126ULL ] * X [ 126ULL ]
+ 1.8324100759713822E-12 == X [ 126ULL ] * X [ 126ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 251ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 == X [ 126ULL
] * X [ 126ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 252ULL ]
= 1 ; t446 [ 253ULL ] = 1 ; t446 [ 254ULL ] = ( int32_T ) ( ( X [ 126ULL ] *
X [ 126ULL ] + 2.0914103314136477E-13 == X [ 126ULL ] * X [ 126ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 255ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 2.0914103314136477E-13 == X [ 126ULL
] * X [ 126ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 256ULL ]
= 1 ; t446 [ 257ULL ] = 1 ; t446 [ 258ULL ] = ( int32_T ) ( ( X [ 126ULL ] *
X [ 126ULL ] + 1.4768645655431184E-13 == X [ 126ULL ] * X [ 126ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 259ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 1.4768645655431184E-13 == X [ 126ULL
] * X [ 126ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 260ULL ]
= ( int32_T ) ( t800 * 293.15 != 0.0 ) ; t446 [ 261ULL ] = 1 ; t446 [ 262ULL
] = ( int32_T ) ( ( ! ( 1.0 - X [ 131ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [
131ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 131ULL ] >=
0.01 ) ) ; t446 [ 263ULL ] = 1 ; t446 [ 264ULL ] = ( int32_T ) ( X [ 20ULL ]
!= 0.0 ) ; t446 [ 265ULL ] = ( int32_T ) ( X [ 140ULL ] != 0.0 ) ; t446 [
266ULL ] = 1 ; t446 [ 267ULL ] = 1 ; t446 [ 268ULL ] = 1 ; t446 [ 269ULL ] =
( int32_T ) ( t870 - t867 != 0.0 ) ; t446 [ 270ULL ] = 1 ; t446 [ 271ULL ] =
1 ; t446 [ 272ULL ] = ( int32_T ) ( ( t868 * t868 * 9.999999999999999E-14 +
fabs ( X [ 139ULL ] * t871 * t867 ) * 1.0E-9 == t868 * t868 *
9.999999999999999E-14 + fabs ( X [ 139ULL ] * t871 * t867 ) * 1.0E-9 ) && (
fabs ( t868 * t868 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] * t871 *
t867 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 273ULL ] = ( int32_T ) ( (
! ( t868 * t868 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] * t871 * t867 )
* 1.0E-9 == t868 * t868 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] * t871
* t867 ) * 1.0E-9 ) ) || ( ! ( fabs ( t868 * t868 * 9.999999999999999E-14 +
fabs ( X [ 139ULL ] * t871 * t867 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || (
t868 * t868 * 9.999999999999999E-14 + fabs ( X [ 139ULL ] * t871 * t867 ) *
1.0E-9 >= 0.0 ) ) ; t446 [ 274ULL ] = 1 ; t446 [ 275ULL ] = 1 ; t446 [ 276ULL
] = ( int32_T ) ( t867 != 0.0 ) ; t446 [ 277ULL ] = ( int32_T ) ( ( ! ( t867
!= 0.0 ) ) || ( X [ 139ULL ] != 0.0 ) ) ; t446 [ 278ULL ] = 1 ; t446 [ 279ULL
] = ( int32_T ) ( ( ! ( t867 != 0.0 ) ) || ( ( t867 != 0.0 ) && ( ! ( X [
139ULL ] != 0.0 ) ) ) || ( fabs ( t882 / ( t867 == 0.0 ? 1.0E-16 : t867 ) / (
X [ 139ULL ] == 0.0 ? 1.0E-16 : X [ 139ULL ] ) ) >= 0.0 ) ) ; t446 [ 280ULL ]
= ( int32_T ) ( t875 * 7.8539816339744827E-5 != 0.0 ) ; t446 [ 281ULL ] = (
int32_T ) ( X [ 19ULL ] * t867 != 0.0 ) ; t446 [ 282ULL ] = ( int32_T ) (
t883 * 1.5707963267948965E-8 != 0.0 ) ; t446 [ 283ULL ] = ( int32_T ) ( t888
!= 0.0 ) ; t446 [ 284ULL ] = ( int32_T ) ( ( ! ( t888 != 0.0 ) ) || ( 6.9 / (
t888 == 0.0 ? 1.0E-16 : t888 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [
285ULL ] = 1 ; t446 [ 286ULL ] = 1 ; t446 [ 287ULL ] = ( int32_T ) ( ( ! (
t888 != 0.0 ) ) || ( ( t888 != 0.0 ) && ( ! ( 6.9 / ( t888 == 0.0 ? 1.0E-16 :
t888 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t888 ==
0.0 ? 1.0E-16 : t888 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t888
== 0.0 ? 1.0E-16 : t888 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446
[ 288ULL ] = ( int32_T ) ( t883 * 1.2337005501361697E-10 != 0.0 ) ; t446 [
289ULL ] = 1 ; t446 [ 290ULL ] = 1 ; t446 [ 291ULL ] = 1 ; t446 [ 292ULL ] =
1 ; t446 [ 293ULL ] = ( int32_T ) ( X [ 20ULL ] != 0.0 ) ; t446 [ 294ULL ] =
( int32_T ) ( X [ 144ULL ] != 0.0 ) ; t446 [ 295ULL ] = 1 ; t446 [ 296ULL ] =
1 ; t446 [ 297ULL ] = 1 ; t446 [ 298ULL ] = ( int32_T ) ( t885 - t867 != 0.0
) ; t446 [ 299ULL ] = 1 ; t446 [ 300ULL ] = 1 ; t446 [ 301ULL ] = ( int32_T )
( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 ) && (
fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 302ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 ) ) || (
! ( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
9.999999999999999E-14 + fabs ( X [ 143ULL ] * t795 * t867 ) * 1.0E-9 >= 0.0 )
) ; t446 [ 303ULL ] = 1 ; t446 [ 304ULL ] = 1 ; t446 [ 305ULL ] = ( int32_T )
( t867 != 0.0 ) ; t446 [ 306ULL ] = ( int32_T ) ( ( ! ( t867 != 0.0 ) ) || (
X [ 143ULL ] != 0.0 ) ) ; t446 [ 307ULL ] = 1 ; t446 [ 308ULL ] = ( int32_T )
( ( ! ( t867 != 0.0 ) ) || ( ( t867 != 0.0 ) && ( ! ( X [ 143ULL ] != 0.0 ) )
) || ( fabs ( t902 / ( t867 == 0.0 ? 1.0E-16 : t867 ) / ( X [ 143ULL ] == 0.0
? 1.0E-16 : X [ 143ULL ] ) ) >= 0.0 ) ) ; t446 [ 309ULL ] = ( int32_T ) (
t875 * 7.8539816339744827E-5 != 0.0 ) ; t446 [ 310ULL ] = ( int32_T ) ( t883
* 1.5707963267948965E-8 != 0.0 ) ; t446 [ 311ULL ] = ( int32_T ) ( t890 !=
0.0 ) ; t446 [ 312ULL ] = ( int32_T ) ( ( ! ( t890 != 0.0 ) ) || ( 6.9 / (
t890 == 0.0 ? 1.0E-16 : t890 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [
313ULL ] = 1 ; t446 [ 314ULL ] = 1 ; t446 [ 315ULL ] = ( int32_T ) ( ( ! (
t890 != 0.0 ) ) || ( ( t890 != 0.0 ) && ( ! ( 6.9 / ( t890 == 0.0 ? 1.0E-16 :
t890 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t890 ==
0.0 ? 1.0E-16 : t890 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t890
== 0.0 ? 1.0E-16 : t890 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446
[ 316ULL ] = ( int32_T ) ( t883 * 1.2337005501361697E-10 != 0.0 ) ; t446 [
317ULL ] = 1 ; t446 [ 318ULL ] = 1 ; t446 [ 319ULL ] = 1 ; t446 [ 320ULL ] =
1 ; t446 [ 321ULL ] = ( int32_T ) ( t879 != 0.0 ) ; t446 [ 322ULL ] = (
int32_T ) ( t889 != 0.0 ) ; t446 [ 323ULL ] = 1 ; t446 [ 324ULL ] = ( int32_T
) ( ( ! ( 1.0 - X [ 21ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 21ULL ] ) - 0.01
) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 21ULL ] >= 0.01 ) ) ; t446 [
325ULL ] = 1 ; t446 [ 326ULL ] = ( int32_T ) ( t876 != 0.0 ) ; t446 [ 327ULL
] = ( int32_T ) ( X [ 20ULL ] * 100000.0 > 0.0 ) ; t446 [ 328ULL ] = (
int32_T ) ( ( ! ( X [ 20ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 20ULL ]
* 100000.0 ) - t40_idx_0 < 663.67513503334737 ) ) ; t446 [ 329ULL ] = 1 ;
t446 [ 330ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_58 >= 1.0 ) ) || ( (
intrm_sf_mf_58 - 1.0 ) * 461.523 + t877 != 0.0 ) ) ; t446 [ 331ULL ] = (
int32_T ) ( t893 * 0.01 != 0.0 ) ; t446 [ 332ULL ] = 1 ; t446 [ 333ULL ] = 1
; t446 [ 334ULL ] = 1 ; t446 [ 335ULL ] = 1 ; t446 [ 336ULL ] = ( int32_T ) (
t899 != 0.0 ) ; t446 [ 337ULL ] = ( int32_T ) ( t920 / 2.0 *
7.8539816339744827E-5 != 0.0 ) ; t446 [ 338ULL ] = 1 ; t446 [ 339ULL ] = (
int32_T ) ( t901 != 0.0 ) ; t446 [ 340ULL ] = ( int32_T ) ( ( ! ( t901 != 0.0
) ) || ( 6.9 / ( t901 == 0.0 ? 1.0E-16 : t901 ) + 0.00017169489553429715 >
0.0 ) ) ; t446 [ 341ULL ] = 1 ; t446 [ 342ULL ] = 1 ; t446 [ 343ULL ] = (
int32_T ) ( ( ! ( t901 != 0.0 ) ) || ( ( t901 != 0.0 ) && ( ! ( 6.9 / ( t901
== 0.0 ? 1.0E-16 : t901 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10
( 6.9 / ( t901 == 0.0 ? 1.0E-16 : t901 ) + 0.00017169489553429715 ) *
pmf_log10 ( 6.9 / ( t901 == 0.0 ? 1.0E-16 : t901 ) + 0.00017169489553429715 )
* 3.24 != 0.0 ) ) ; t446 [ 344ULL ] = ( int32_T ) ( ( t895 / 8.0 == t895 /
8.0 ) && ( fabs ( t895 / 8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 345ULL ] = (
int32_T ) ( ( ! ( t895 / 8.0 == t895 / 8.0 ) ) || ( ! ( fabs ( t895 / 8.0 )
!= pmf_get_inf ( ) ) ) || ( t895 / 8.0 >= 0.0 ) ) ; t446 [ 346ULL ] = 1 ;
t446 [ 347ULL ] = ( int32_T ) ( t874 >= 0.0 ) ; t446 [ 348ULL ] = ( int32_T )
( ( ! ( t895 / 8.0 == t895 / 8.0 ) ) || ( ! ( fabs ( t895 / 8.0 ) !=
pmf_get_inf ( ) ) ) || ( ( t895 / 8.0 == t895 / 8.0 ) && ( fabs ( t895 / 8.0
) != pmf_get_inf ( ) ) && ( ! ( t895 / 8.0 >= 0.0 ) ) ) || ( ! ( t874 >= 0.0
) ) || ( ( pmf_pow ( t874 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t895 /
8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t446 [ 349ULL ] = 1 ; t446 [ 350ULL ] = 1 ;
t446 [ 351ULL ] = 1 ; t446 [ 352ULL ] = 1 ; t446 [ 353ULL ] = ( int32_T ) (
t923 / 2.0 != 0.0 ) ; t446 [ 354ULL ] = 1 ; t2013 = t923 / 2.0 ; t446 [
355ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_105 > t929 / 7.8539816339744827E-5
/ ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( intrm_sf_mf_105 != 0.0 )
) ; t446 [ 356ULL ] = 1 ; t446 [ 357ULL ] = 1 ; t2013 = t923 / 2.0 ; t446 [
358ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_105 > t929 / 7.8539816339744827E-5
/ ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_105 !=
0.0 ) ) || ( t923 / 2.0 != 0.0 ) ) ; t446 [ 359ULL ] = ( int32_T ) ( - t900 <
663.67513503334737 ) ; t446 [ 360ULL ] = ( int32_T ) ( intrm_sf_mf_64 != 0.0
) ; t446 [ 361ULL ] = ( int32_T ) ( t941 / 2.0 * 7.8539816339744827E-5 != 0.0
) ; t446 [ 362ULL ] = 1 ; t446 [ 363ULL ] = ( int32_T ) ( intrm_sf_mf_80 !=
0.0 ) ; t446 [ 364ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_80 != 0.0 ) ) || (
6.9 / ( intrm_sf_mf_80 == 0.0 ? 1.0E-16 : intrm_sf_mf_80 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 365ULL ] = 1 ; t446 [ 366ULL ] = 1
; t446 [ 367ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_80 != 0.0 ) ) || ( (
intrm_sf_mf_80 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_80 == 0.0 ? 1.0E-16 :
intrm_sf_mf_80 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( intrm_sf_mf_80 == 0.0 ? 1.0E-16 : intrm_sf_mf_80 ) + 0.00017169489553429715
) * pmf_log10 ( 6.9 / ( intrm_sf_mf_80 == 0.0 ? 1.0E-16 : intrm_sf_mf_80 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 368ULL ] = ( int32_T ) (
( t913 / 8.0 == t913 / 8.0 ) && ( fabs ( t913 / 8.0 ) != pmf_get_inf ( ) ) )
; t446 [ 369ULL ] = ( int32_T ) ( ( ! ( t913 / 8.0 == t913 / 8.0 ) ) || ( ! (
fabs ( t913 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t913 / 8.0 >= 0.0 ) ) ; t446
[ 370ULL ] = 1 ; t446 [ 371ULL ] = ( int32_T ) ( t912 >= 0.0 ) ; t446 [
372ULL ] = ( int32_T ) ( ( ! ( t913 / 8.0 == t913 / 8.0 ) ) || ( ! ( fabs (
t913 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t913 / 8.0 == t913 / 8.0 ) && (
fabs ( t913 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t913 / 8.0 >= 0.0 ) ) ) ||
( ! ( t912 >= 0.0 ) ) || ( ( pmf_pow ( t912 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t913 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t446 [ 373ULL ] = 1 ; t446
[ 374ULL ] = 1 ; t446 [ 375ULL ] = 1 ; t446 [ 376ULL ] = 1 ; t446 [ 377ULL ]
= ( int32_T ) ( t944 / 2.0 != 0.0 ) ; t446 [ 378ULL ] = 1 ; t2013 = t944 /
2.0 ; t446 [ 379ULL ] = ( int32_T ) ( ( ! ( t910 > t950 /
7.8539816339744827E-5 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || (
t910 != 0.0 ) ) ; t446 [ 380ULL ] = 1 ; t446 [ 381ULL ] = 1 ; t2013 = t944 /
2.0 ; t446 [ 382ULL ] = ( int32_T ) ( ( ! ( t910 > t950 /
7.8539816339744827E-5 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( !
( t910 != 0.0 ) ) || ( t944 / 2.0 != 0.0 ) ) ; t446 [ 383ULL ] = ( int32_T )
( - t914 < 663.67513503334737 ) ; t446 [ 384ULL ] = 1 ; t446 [ 385ULL ] = 1 ;
t446 [ 386ULL ] = ( int32_T ) ( X [ 116ULL ] != 0.0 ) ; t446 [ 387ULL ] = 1 ;
t446 [ 388ULL ] = 1 ; t446 [ 389ULL ] = 1 ; t446 [ 390ULL ] = 1 ; t446 [
391ULL ] = 1 ; t446 [ 392ULL ] = ( int32_T ) ( ( t792 * t792 +
2.0360111955237585E-13 == t792 * t792 + 2.0360111955237585E-13 ) && ( fabs (
t792 * t792 + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 393ULL
] = ( int32_T ) ( ( ! ( t792 * t792 + 2.0360111955237585E-13 == t792 * t792 +
2.0360111955237585E-13 ) ) || ( ! ( fabs ( t792 * t792 +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( t792 * t792 +
2.0360111955237585E-13 >= 0.0 ) ) ; t446 [ 394ULL ] = 1 ; t446 [ 395ULL ] = 1
; t446 [ 396ULL ] = ( int32_T ) ( ( t792 * t792 + 2.3237892571262758E-14 ==
t792 * t792 + 2.3237892571262758E-14 ) && ( fabs ( t792 * t792 +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 397ULL ] = ( int32_T
) ( ( ! ( t792 * t792 + 2.3237892571262758E-14 == t792 * t792 +
2.3237892571262758E-14 ) ) || ( ! ( fabs ( t792 * t792 +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( t792 * t792 +
2.3237892571262758E-14 >= 0.0 ) ) ; t446 [ 398ULL ] = 1 ; t446 [ 399ULL ] = 1
; t446 [ 400ULL ] = ( int32_T ) ( ( t792 * t792 + 1.6409606283812424E-14 ==
t792 * t792 + 1.6409606283812424E-14 ) && ( fabs ( t792 * t792 +
1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 401ULL ] = ( int32_T
) ( ( ! ( t792 * t792 + 1.6409606283812424E-14 == t792 * t792 +
1.6409606283812424E-14 ) ) || ( ! ( fabs ( t792 * t792 +
1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) || ( t792 * t792 +
1.6409606283812424E-14 >= 0.0 ) ) ; t446 [ 402ULL ] = ( int32_T ) ( X [
135ULL ] != 0.0 ) ; t446 [ 403ULL ] = 1 ; t446 [ 404ULL ] = 1 ; t446 [ 405ULL
] = 1 ; t446 [ 406ULL ] = 1 ; t446 [ 407ULL ] = 1 ; t446 [ 408ULL ] = (
int32_T ) ( ( X [ 126ULL ] * X [ 126ULL ] + 2.0360111955237585E-13 == X [
126ULL ] * X [ 126ULL ] + 2.0360111955237585E-13 ) && ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t446 [
409ULL ] = ( int32_T ) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] +
2.0360111955237585E-13 == X [ 126ULL ] * X [ 126ULL ] +
2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [ 126ULL ] * X [
126ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t446 [ 410ULL ] = 1 ; t446 [
411ULL ] = 1 ; t446 [ 412ULL ] = ( int32_T ) ( ( X [ 126ULL ] * X [ 126ULL ]
+ 2.3237892571262758E-14 == X [ 126ULL ] * X [ 126ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 413ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 2.3237892571262758E-14 == X [ 126ULL
] * X [ 126ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t446 [ 414ULL ]
= 1 ; t446 [ 415ULL ] = 1 ; t446 [ 416ULL ] = ( int32_T ) ( ( X [ 126ULL ] *
X [ 126ULL ] + 1.6409606283812424E-14 == X [ 126ULL ] * X [ 126ULL ] +
1.6409606283812424E-14 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 417ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 1.6409606283812424E-14 == X [ 126ULL
] * X [ 126ULL ] + 1.6409606283812424E-14 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 1.6409606283812424E-14 >= 0.0 ) ) ; t446 [ 418ULL ]
= ( int32_T ) ( X [ 159ULL ] * t919 != 0.0 ) ; t446 [ 419ULL ] = ( int32_T )
( X [ 135ULL ] != 0.0 ) ; t446 [ 420ULL ] = ( int32_T ) ( X [ 159ULL ] != 0.0
) ; t446 [ 421ULL ] = ( int32_T ) ( X [ 159ULL ] != 0.0 ) ; t446 [ 422ULL ] =
1 ; t446 [ 423ULL ] = ( int32_T ) ( ( ! ( X [ 126ULL ] > 0.0 ) ) || ( t916 !=
0.0 ) ) ; t446 [ 424ULL ] = 1 ; t446 [ 425ULL ] = 1 ; t446 [ 426ULL ] = 1 ;
t446 [ 427ULL ] = ( int32_T ) ( ( ! ( X [ 126ULL ] > 0.0 ) ) || ( ! ( t916 !=
0.0 ) ) || ( t921 != 0.0 ) ) ; t446 [ 428ULL ] = 1 ; t446 [ 429ULL ] = (
int32_T ) ( ( ! ( X [ 126ULL ] < 0.0 ) ) || ( X [ 126ULL ] > 0.0 ) || ( t916
!= 0.0 ) ) ; t446 [ 430ULL ] = 1 ; t446 [ 431ULL ] = 1 ; t446 [ 432ULL ] = 1
; t446 [ 433ULL ] = ( int32_T ) ( ( ! ( X [ 126ULL ] < 0.0 ) ) || ( ! ( t916
!= 0.0 ) ) || ( X [ 126ULL ] > 0.0 ) || ( t921 != 0.0 ) ) ; t446 [ 434ULL ] =
1 ; t446 [ 435ULL ] = 1 ; t446 [ 436ULL ] = ( int32_T ) ( t926 != 0.0 ) ;
t446 [ 437ULL ] = 1 ; t446 [ 438ULL ] = 1 ; t446 [ 439ULL ] = 1 ; t446 [
440ULL ] = 1 ; t446 [ 441ULL ] = 1 ; t446 [ 442ULL ] = 1 ; t446 [ 443ULL ] =
1 ; t446 [ 444ULL ] = 1 ; t446 [ 445ULL ] = 1 ; t446 [ 446ULL ] = 1 ; t446 [
447ULL ] = ( int32_T ) ( t924 - t919 != 0.0 ) ; t446 [ 448ULL ] = 1 ; t446 [
449ULL ] = 1 ; t446 [ 450ULL ] = ( int32_T ) ( t919 != 0.0 ) ; t446 [ 451ULL
] = ( int32_T ) ( ( ! ( t919 != 0.0 ) ) || ( X [ 159ULL ] != 0.0 ) ) ; t446 [
452ULL ] = 1 ; t446 [ 453ULL ] = ( int32_T ) ( ( ! ( t919 != 0.0 ) ) || ( (
t919 != 0.0 ) && ( ! ( X [ 159ULL ] != 0.0 ) ) ) || ( fabs ( t973 / ( t919 ==
0.0 ? 1.0E-16 : t919 ) / ( X [ 159ULL ] == 0.0 ? 1.0E-16 : X [ 159ULL ] ) )
>= 0.0 ) ) ; t446 [ 454ULL ] = ( int32_T ) ( ( ! ( X [ 126ULL ] >= 0.0 ) ) ||
( t917 != 0.0 ) ) ; t446 [ 455ULL ] = ( int32_T ) ( ( X [ 126ULL ] >= 0.0 )
|| ( t917 != 0.0 ) ) ; t446 [ 456ULL ] = ( int32_T ) ( X [ 135ULL ] != 0.0 )
; t446 [ 457ULL ] = 1 ; t446 [ 458ULL ] = 1 ; t446 [ 459ULL ] = 1 ; t446 [
460ULL ] = 1 ; t446 [ 461ULL ] = 1 ; t446 [ 462ULL ] = ( int32_T ) ( ( X [
126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 == X [ 126ULL ] * X [ 126ULL
] + 1.8324100759713822E-12 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 463ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 == X [ 126ULL
] * X [ 126ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 464ULL ]
= 1 ; t446 [ 465ULL ] = 1 ; t446 [ 466ULL ] = ( int32_T ) ( ( X [ 126ULL ] *
X [ 126ULL ] + 2.0914103314136477E-13 == X [ 126ULL ] * X [ 126ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 467ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 2.0914103314136477E-13 == X [ 126ULL
] * X [ 126ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 468ULL ]
= 1 ; t446 [ 469ULL ] = 1 ; t446 [ 470ULL ] = ( int32_T ) ( ( X [ 126ULL ] *
X [ 126ULL ] + 1.4768645655431184E-13 == X [ 126ULL ] * X [ 126ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 471ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 1.4768645655431184E-13 == X [ 126ULL
] * X [ 126ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 472ULL ]
= 1 ; t446 [ 473ULL ] = 1 ; t446 [ 474ULL ] = 1 ; t446 [ 475ULL ] = 1 ; t446
[ 476ULL ] = 1 ; t446 [ 477ULL ] = ( int32_T ) ( ( X [ 126ULL ] * X [ 126ULL
] + 1.8324100759713822E-12 == X [ 126ULL ] * X [ 126ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 478ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 == X [ 126ULL
] * X [ 126ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 479ULL ]
= 1 ; t446 [ 480ULL ] = 1 ; t446 [ 481ULL ] = ( int32_T ) ( ( X [ 126ULL ] *
X [ 126ULL ] + 2.0914103314136477E-13 == X [ 126ULL ] * X [ 126ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 482ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 2.0914103314136477E-13 == X [ 126ULL
] * X [ 126ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 483ULL ]
= 1 ; t446 [ 484ULL ] = 1 ; t446 [ 485ULL ] = ( int32_T ) ( ( X [ 126ULL ] *
X [ 126ULL ] + 1.4768645655431184E-13 == X [ 126ULL ] * X [ 126ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 126ULL ] * X [ 126ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 486ULL ] = ( int32_T
) ( ( ! ( X [ 126ULL ] * X [ 126ULL ] + 1.4768645655431184E-13 == X [ 126ULL
] * X [ 126ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 126ULL ] *
X [ 126ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
126ULL ] * X [ 126ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 487ULL ]
= ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 != 0.0 ) ;
t446 [ 488ULL ] = 1 ; t446 [ 489ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 != 0.0 ) ) ||
( fabs ( t921 * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ) )
>= 0.0 ) ) ; t446 [ 490ULL ] = ( int32_T ) ( X [ 23ULL ] * t927 != 0.0 ) ;
t446 [ 491ULL ] = 1 ; t446 [ 492ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 26ULL ]
>= - 0.1 ) ) || ( ( ( 1.0 - X [ 26ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 26ULL ] >= 0.01 ) ) ; t446 [ 493ULL ] = 1
; t446 [ 494ULL ] = ( int32_T ) ( t918 != 0.0 ) ; t446 [ 495ULL ] = ( int32_T
) ( X [ 24ULL ] * 100000.0 > 0.0 ) ; t446 [ 496ULL ] = ( int32_T ) ( ( ! ( X
[ 24ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 24ULL ] * 100000.0 ) -
t453_idx_0 < 663.67513503334737 ) ) ; t446 [ 497ULL ] = 1 ; t446 [ 498ULL ] =
( int32_T ) ( ( ! ( t928 >= 1.0 ) ) || ( ( t928 - 1.0 ) * 461.523 + t925 !=
0.0 ) ) ; t446 [ 499ULL ] = ( int32_T ) ( t931 * 0.01 != 0.0 ) ; t446 [
500ULL ] = 1 ; t446 [ 501ULL ] = 1 ; t446 [ 502ULL ] = 1 ; t446 [ 503ULL ] =
1 ; t446 [ 504ULL ] = 1 ; t446 [ 505ULL ] = 1 ; t446 [ 506ULL ] = ( int32_T )
( X [ 24ULL ] != 0.0 ) ; t446 [ 507ULL ] = 1 ; t446 [ 508ULL ] = 1 ; t446 [
509ULL ] = 1 ; t446 [ 510ULL ] = 1 ; t446 [ 511ULL ] = 1 ; t446 [ 512ULL ] =
( int32_T ) ( ( X [ 183ULL ] * X [ 183ULL ] + 1.8324100759713822E-12 == X [
183ULL ] * X [ 183ULL ] + 1.8324100759713822E-12 ) && ( fabs ( X [ 183ULL ] *
X [ 183ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [
513ULL ] = ( int32_T ) ( ( ! ( X [ 183ULL ] * X [ 183ULL ] +
1.8324100759713822E-12 == X [ 183ULL ] * X [ 183ULL ] +
1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 183ULL ] * X [ 183ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [ 183ULL ] * X [
183ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 514ULL ] = 1 ; t446 [
515ULL ] = 1 ; t446 [ 516ULL ] = ( int32_T ) ( ( X [ 183ULL ] * X [ 183ULL ]
+ 2.0914103314136477E-13 == X [ 183ULL ] * X [ 183ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 183ULL ] * X [ 183ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 517ULL ] = ( int32_T
) ( ( ! ( X [ 183ULL ] * X [ 183ULL ] + 2.0914103314136477E-13 == X [ 183ULL
] * X [ 183ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 183ULL ] *
X [ 183ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
183ULL ] * X [ 183ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 518ULL ]
= 1 ; t446 [ 519ULL ] = 1 ; t446 [ 520ULL ] = ( int32_T ) ( ( X [ 183ULL ] *
X [ 183ULL ] + 1.4768645655431184E-13 == X [ 183ULL ] * X [ 183ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 183ULL ] * X [ 183ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 521ULL ] = ( int32_T
) ( ( ! ( X [ 183ULL ] * X [ 183ULL ] + 1.4768645655431184E-13 == X [ 183ULL
] * X [ 183ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 183ULL ] *
X [ 183ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
183ULL ] * X [ 183ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 522ULL ]
= ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 523ULL ] = 1 ; t446 [ 524ULL ]
= 1 ; t446 [ 525ULL ] = 1 ; t446 [ 526ULL ] = 1 ; t446 [ 527ULL ] = 1 ; t446
[ 528ULL ] = ( int32_T ) ( ( t933 * t933 + 1.8324100759713822E-12 == t933 *
t933 + 1.8324100759713822E-12 ) && ( fabs ( t933 * t933 +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 529ULL ] = ( int32_T
) ( ( ! ( t933 * t933 + 1.8324100759713822E-12 == t933 * t933 +
1.8324100759713822E-12 ) ) || ( ! ( fabs ( t933 * t933 +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 530ULL ] = 1 ; t446 [ 531ULL ] = 1
; t446 [ 532ULL ] = ( int32_T ) ( ( t933 * t933 + 2.0914103314136477E-13 ==
t933 * t933 + 2.0914103314136477E-13 ) && ( fabs ( t933 * t933 +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 533ULL ] = ( int32_T
) ( ( ! ( t933 * t933 + 2.0914103314136477E-13 == t933 * t933 +
2.0914103314136477E-13 ) ) || ( ! ( fabs ( t933 * t933 +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 534ULL ] = 1 ; t446 [ 535ULL ] = 1
; t446 [ 536ULL ] = ( int32_T ) ( ( t933 * t933 + 1.4768645655431184E-13 ==
t933 * t933 + 1.4768645655431184E-13 ) && ( fabs ( t933 * t933 +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 537ULL ] = ( int32_T
) ( ( ! ( t933 * t933 + 1.4768645655431184E-13 == t933 * t933 +
1.4768645655431184E-13 ) ) || ( ! ( fabs ( t933 * t933 +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 538ULL ] = ( int32_T ) ( X [ 24ULL
] != 0.0 ) ; t446 [ 539ULL ] = 1 ; t446 [ 540ULL ] = 1 ; t446 [ 541ULL ] = 1
; t446 [ 542ULL ] = 1 ; t446 [ 543ULL ] = 1 ; t446 [ 544ULL ] = ( int32_T ) (
( X [ 192ULL ] * X [ 192ULL ] + 1.8324100759713822E-12 == X [ 192ULL ] * X [
192ULL ] + 1.8324100759713822E-12 ) && ( fabs ( X [ 192ULL ] * X [ 192ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 545ULL ] = ( int32_T
) ( ( ! ( X [ 192ULL ] * X [ 192ULL ] + 1.8324100759713822E-12 == X [ 192ULL
] * X [ 192ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 192ULL ] *
X [ 192ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
192ULL ] * X [ 192ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 546ULL ]
= 1 ; t446 [ 547ULL ] = 1 ; t446 [ 548ULL ] = ( int32_T ) ( ( X [ 192ULL ] *
X [ 192ULL ] + 2.0914103314136477E-13 == X [ 192ULL ] * X [ 192ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 192ULL ] * X [ 192ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 549ULL ] = ( int32_T
) ( ( ! ( X [ 192ULL ] * X [ 192ULL ] + 2.0914103314136477E-13 == X [ 192ULL
] * X [ 192ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 192ULL ] *
X [ 192ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
192ULL ] * X [ 192ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 550ULL ]
= 1 ; t446 [ 551ULL ] = 1 ; t446 [ 552ULL ] = ( int32_T ) ( ( X [ 192ULL ] *
X [ 192ULL ] + 1.4768645655431184E-13 == X [ 192ULL ] * X [ 192ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 192ULL ] * X [ 192ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 553ULL ] = ( int32_T
) ( ( ! ( X [ 192ULL ] * X [ 192ULL ] + 1.4768645655431184E-13 == X [ 192ULL
] * X [ 192ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 192ULL ] *
X [ 192ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
192ULL ] * X [ 192ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 554ULL ]
= ( int32_T ) ( X [ 116ULL ] != 0.0 ) ; t446 [ 555ULL ] = 1 ; t446 [ 556ULL ]
= 1 ; t446 [ 557ULL ] = 1 ; t446 [ 558ULL ] = 1 ; t446 [ 559ULL ] = 1 ; t446
[ 560ULL ] = ( int32_T ) ( ( t933 * t933 + 1.8324100759713822E-12 == t933 *
t933 + 1.8324100759713822E-12 ) && ( fabs ( t933 * t933 +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 561ULL ] = ( int32_T
) ( ( ! ( t933 * t933 + 1.8324100759713822E-12 == t933 * t933 +
1.8324100759713822E-12 ) ) || ( ! ( fabs ( t933 * t933 +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 562ULL ] = 1 ; t446 [ 563ULL ] = 1
; t446 [ 564ULL ] = ( int32_T ) ( ( t933 * t933 + 2.0914103314136477E-13 ==
t933 * t933 + 2.0914103314136477E-13 ) && ( fabs ( t933 * t933 +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 565ULL ] = ( int32_T
) ( ( ! ( t933 * t933 + 2.0914103314136477E-13 == t933 * t933 +
2.0914103314136477E-13 ) ) || ( ! ( fabs ( t933 * t933 +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 566ULL ] = 1 ; t446 [ 567ULL ] = 1
; t446 [ 568ULL ] = ( int32_T ) ( ( t933 * t933 + 1.4768645655431184E-13 ==
t933 * t933 + 1.4768645655431184E-13 ) && ( fabs ( t933 * t933 +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 569ULL ] = ( int32_T
) ( ( ! ( t933 * t933 + 1.4768645655431184E-13 == t933 * t933 +
1.4768645655431184E-13 ) ) || ( ! ( fabs ( t933 * t933 +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 570ULL ] = ( int32_T ) ( X [ 24ULL
] != 0.0 ) ; t446 [ 571ULL ] = 1 ; t446 [ 572ULL ] = 1 ; t446 [ 573ULL ] = 1
; t446 [ 574ULL ] = 1 ; t446 [ 575ULL ] = 1 ; t446 [ 576ULL ] = ( int32_T ) (
( t933 * t933 + 1.8324100759713822E-12 == t933 * t933 +
1.8324100759713822E-12 ) && ( fabs ( t933 * t933 + 1.8324100759713822E-12 )
!= pmf_get_inf ( ) ) ) ; t446 [ 577ULL ] = ( int32_T ) ( ( ! ( t933 * t933 +
1.8324100759713822E-12 == t933 * t933 + 1.8324100759713822E-12 ) ) || ( ! (
fabs ( t933 * t933 + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || (
t933 * t933 + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 578ULL ] = 1 ; t446
[ 579ULL ] = 1 ; t446 [ 580ULL ] = ( int32_T ) ( ( t933 * t933 +
2.0914103314136477E-13 == t933 * t933 + 2.0914103314136477E-13 ) && ( fabs (
t933 * t933 + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 581ULL
] = ( int32_T ) ( ( ! ( t933 * t933 + 2.0914103314136477E-13 == t933 * t933 +
2.0914103314136477E-13 ) ) || ( ! ( fabs ( t933 * t933 +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 582ULL ] = 1 ; t446 [ 583ULL ] = 1
; t446 [ 584ULL ] = ( int32_T ) ( ( t933 * t933 + 1.4768645655431184E-13 ==
t933 * t933 + 1.4768645655431184E-13 ) && ( fabs ( t933 * t933 +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 585ULL ] = ( int32_T
) ( ( ! ( t933 * t933 + 1.4768645655431184E-13 == t933 * t933 +
1.4768645655431184E-13 ) ) || ( ! ( fabs ( t933 * t933 +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( t933 * t933 +
1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 586ULL ] = ( int32_T ) ( X [
116ULL ] != 0.0 ) ; t446 [ 587ULL ] = 1 ; t446 [ 588ULL ] = 1 ; t446 [ 589ULL
] = 1 ; t446 [ 590ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 591ULL
] = 1 ; t446 [ 592ULL ] = 1 ; t446 [ 593ULL ] = 1 ; t446 [ 594ULL ] = (
int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 595ULL ] = 1 ; t446 [ 596ULL ] = 1
; t446 [ 597ULL ] = 1 ; t446 [ 598ULL ] = ( int32_T ) ( X [ 116ULL ] != 0.0 )
; t446 [ 599ULL ] = 1 ; t446 [ 600ULL ] = 1 ; t446 [ 601ULL ] = 1 ; t446 [
602ULL ] = ( int32_T ) ( X [ 27ULL ] * t936 != 0.0 ) ; t446 [ 603ULL ] = 1 ;
t446 [ 604ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 30ULL ] >= - 0.1 ) ) || ( ( (
1.0 - X [ 30ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [
30ULL ] >= 0.01 ) ) ; t446 [ 605ULL ] = 1 ; t446 [ 606ULL ] = ( int32_T ) (
t934 != 0.0 ) ; t446 [ 607ULL ] = ( int32_T ) ( X [ 28ULL ] * 100000.0 > 0.0
) ; t446 [ 608ULL ] = ( int32_T ) ( ( ! ( X [ 28ULL ] * 100000.0 > 0.0 ) ) ||
( pmf_log ( X [ 28ULL ] * 100000.0 ) - t451 [ 0ULL ] < 663.67513503334737 ) )
; t446 [ 609ULL ] = 1 ; t446 [ 610ULL ] = ( int32_T ) ( ( ! ( t937 >= 1.0 ) )
|| ( ( t937 - 1.0 ) * 461.523 + t935 != 0.0 ) ) ; t446 [ 611ULL ] = ( int32_T
) ( t938 * 0.01 != 0.0 ) ; t446 [ 612ULL ] = 1 ; t446 [ 613ULL ] = 1 ; t446 [
614ULL ] = 1 ; t446 [ 615ULL ] = 1 ; t446 [ 616ULL ] = 1 ; t446 [ 617ULL ] =
1 ; t446 [ 618ULL ] = ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t446 [ 619ULL ] =
1 ; t446 [ 620ULL ] = 1 ; t446 [ 621ULL ] = 1 ; t446 [ 622ULL ] = 1 ; t446 [
623ULL ] = 1 ; t446 [ 624ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X [ 213ULL ]
+ 1.8324100759713822E-12 == X [ 213ULL ] * X [ 213ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 625ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 1.8324100759713822E-12 == X [ 213ULL
] * X [ 213ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 626ULL ]
= 1 ; t446 [ 627ULL ] = 1 ; t446 [ 628ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 2.0914103314136477E-13 == X [ 213ULL ] * X [ 213ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 629ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.0914103314136477E-13 == X [ 213ULL
] * X [ 213ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 630ULL ]
= 1 ; t446 [ 631ULL ] = 1 ; t446 [ 632ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 1.4768645655431184E-13 == X [ 213ULL ] * X [ 213ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 633ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 1.4768645655431184E-13 == X [ 213ULL
] * X [ 213ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 634ULL ]
= ( int32_T ) ( X [ 32ULL ] != 0.0 ) ; t446 [ 635ULL ] = ( int32_T ) ( X [
224ULL ] != 0.0 ) ; t446 [ 636ULL ] = 1 ; t446 [ 637ULL ] = 1 ; t446 [ 638ULL
] = 1 ; t446 [ 639ULL ] = ( int32_T ) ( t947 - t943 != 0.0 ) ; t446 [ 640ULL
] = 1 ; t446 [ 641ULL ] = 1 ; t446 [ 642ULL ] = ( int32_T ) ( ( t945 * t945 *
9.999999999999999E-14 + fabs ( X [ 223ULL ] * t948 * t943 ) * 1.0E-9 == t945
* t945 * 9.999999999999999E-14 + fabs ( X [ 223ULL ] * t948 * t943 ) * 1.0E-9
) && ( fabs ( t945 * t945 * 9.999999999999999E-14 + fabs ( X [ 223ULL ] *
t948 * t943 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 643ULL ] = ( int32_T
) ( ( ! ( t945 * t945 * 9.999999999999999E-14 + fabs ( X [ 223ULL ] * t948 *
t943 ) * 1.0E-9 == t945 * t945 * 9.999999999999999E-14 + fabs ( X [ 223ULL ]
* t948 * t943 ) * 1.0E-9 ) ) || ( ! ( fabs ( t945 * t945 *
9.999999999999999E-14 + fabs ( X [ 223ULL ] * t948 * t943 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || ( t945 * t945 * 9.999999999999999E-14 + fabs ( X [
223ULL ] * t948 * t943 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 644ULL ] = 1 ; t446 [
645ULL ] = 1 ; t446 [ 646ULL ] = ( int32_T ) ( t943 != 0.0 ) ; t446 [ 647ULL
] = ( int32_T ) ( ( ! ( t943 != 0.0 ) ) || ( X [ 223ULL ] != 0.0 ) ) ; t446 [
648ULL ] = 1 ; t446 [ 649ULL ] = ( int32_T ) ( ( ! ( t943 != 0.0 ) ) || ( (
t943 != 0.0 ) && ( ! ( X [ 223ULL ] != 0.0 ) ) ) || ( fabs ( t988 / ( t943 ==
0.0 ? 1.0E-16 : t943 ) / ( X [ 223ULL ] == 0.0 ? 1.0E-16 : X [ 223ULL ] ) )
>= 0.0 ) ) ; t446 [ 650ULL ] = ( int32_T ) ( t954 * 7.8539816339744827E-5 !=
0.0 ) ; t446 [ 651ULL ] = ( int32_T ) ( X [ 31ULL ] * t943 != 0.0 ) ; t446 [
652ULL ] = ( int32_T ) ( t958 * 1.5707963267948965E-8 != 0.0 ) ; t446 [
653ULL ] = ( int32_T ) ( t960 != 0.0 ) ; t446 [ 654ULL ] = ( int32_T ) ( ( !
( t960 != 0.0 ) ) || ( 6.9 / ( t960 == 0.0 ? 1.0E-16 : t960 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 655ULL ] = 1 ; t446 [ 656ULL ] = 1
; t446 [ 657ULL ] = ( int32_T ) ( ( ! ( t960 != 0.0 ) ) || ( ( t960 != 0.0 )
&& ( ! ( 6.9 / ( t960 == 0.0 ? 1.0E-16 : t960 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t960 == 0.0 ? 1.0E-16 : t960 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t960 == 0.0 ? 1.0E-16 : t960 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 658ULL ] = ( int32_T )
( t958 * 1.2337005501361697E-10 != 0.0 ) ; t446 [ 659ULL ] = 1 ; t446 [
660ULL ] = 1 ; t446 [ 661ULL ] = 1 ; t446 [ 662ULL ] = 1 ; t446 [ 663ULL ] =
( int32_T ) ( X [ 32ULL ] != 0.0 ) ; t446 [ 664ULL ] = ( int32_T ) ( X [
228ULL ] != 0.0 ) ; t446 [ 665ULL ] = 1 ; t446 [ 666ULL ] = 1 ; t446 [ 667ULL
] = 1 ; t446 [ 668ULL ] = ( int32_T ) ( t959 - t943 != 0.0 ) ; t446 [ 669ULL
] = 1 ; t446 [ 670ULL ] = 1 ; t446 [ 671ULL ] = ( int32_T ) ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 ) && (
fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 672ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 ) ) || (
! ( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 227ULL ] * t940 * t943 ) * 1.0E-9 >= 0.0 )
) ; t446 [ 673ULL ] = 1 ; t446 [ 674ULL ] = 1 ; t446 [ 675ULL ] = ( int32_T )
( t943 != 0.0 ) ; t446 [ 676ULL ] = ( int32_T ) ( ( ! ( t943 != 0.0 ) ) || (
X [ 227ULL ] != 0.0 ) ) ; t446 [ 677ULL ] = 1 ; t446 [ 678ULL ] = ( int32_T )
( ( ! ( t943 != 0.0 ) ) || ( ( t943 != 0.0 ) && ( ! ( X [ 227ULL ] != 0.0 ) )
) || ( fabs ( t1008 / ( t943 == 0.0 ? 1.0E-16 : t943 ) / ( X [ 227ULL ] ==
0.0 ? 1.0E-16 : X [ 227ULL ] ) ) >= 0.0 ) ) ; t446 [ 679ULL ] = ( int32_T ) (
t954 * 7.8539816339744827E-5 != 0.0 ) ; t446 [ 680ULL ] = ( int32_T ) ( t958
* 1.5707963267948965E-8 != 0.0 ) ; t446 [ 681ULL ] = ( int32_T ) ( t969 !=
0.0 ) ; t446 [ 682ULL ] = ( int32_T ) ( ( ! ( t969 != 0.0 ) ) || ( 6.9 / (
t969 == 0.0 ? 1.0E-16 : t969 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [
683ULL ] = 1 ; t446 [ 684ULL ] = 1 ; t446 [ 685ULL ] = ( int32_T ) ( ( ! (
t969 != 0.0 ) ) || ( ( t969 != 0.0 ) && ( ! ( 6.9 / ( t969 == 0.0 ? 1.0E-16 :
t969 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t969 ==
0.0 ? 1.0E-16 : t969 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t969
== 0.0 ? 1.0E-16 : t969 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446
[ 686ULL ] = ( int32_T ) ( t958 * 1.2337005501361697E-10 != 0.0 ) ; t446 [
687ULL ] = 1 ; t446 [ 688ULL ] = 1 ; t446 [ 689ULL ] = 1 ; t446 [ 690ULL ] =
1 ; t446 [ 691ULL ] = ( int32_T ) ( t955 != 0.0 ) ; t446 [ 692ULL ] = (
int32_T ) ( t961 != 0.0 ) ; t446 [ 693ULL ] = 1 ; t446 [ 694ULL ] = ( int32_T
) ( ( ! ( 1.0 - X [ 33ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 33ULL ] ) - 0.01
) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 33ULL ] >= 0.01 ) ) ; t446 [
695ULL ] = 1 ; t446 [ 696ULL ] = ( int32_T ) ( t964 != 0.0 ) ; t446 [ 697ULL
] = ( int32_T ) ( X [ 32ULL ] * 100000.0 > 0.0 ) ; t446 [ 698ULL ] = (
int32_T ) ( ( ! ( X [ 32ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 32ULL ]
* 100000.0 ) - t454 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [ 699ULL ] = 1 ;
t446 [ 700ULL ] = ( int32_T ) ( ( ! ( t970 >= 1.0 ) ) || ( ( t970 - 1.0 ) *
461.523 + t967 != 0.0 ) ) ; t446 [ 701ULL ] = ( int32_T ) ( t971 * 0.01 !=
0.0 ) ; t446 [ 702ULL ] = 1 ; t446 [ 703ULL ] = 1 ; t446 [ 704ULL ] = 1 ;
t446 [ 705ULL ] = 1 ; t446 [ 706ULL ] = ( int32_T ) ( t976 != 0.0 ) ; t446 [
707ULL ] = ( int32_T ) ( t1026 / 2.0 * 7.8539816339744827E-5 != 0.0 ) ; t446
[ 708ULL ] = 1 ; t446 [ 709ULL ] = ( int32_T ) ( t953 != 0.0 ) ; t446 [
710ULL ] = ( int32_T ) ( ( ! ( t953 != 0.0 ) ) || ( 6.9 / ( t953 == 0.0 ?
1.0E-16 : t953 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 711ULL ] = 1 ;
t446 [ 712ULL ] = 1 ; t446 [ 713ULL ] = ( int32_T ) ( ( ! ( t953 != 0.0 ) )
|| ( ( t953 != 0.0 ) && ( ! ( 6.9 / ( t953 == 0.0 ? 1.0E-16 : t953 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t953 == 0.0 ?
1.0E-16 : t953 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t953 == 0.0
? 1.0E-16 : t953 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
714ULL ] = ( int32_T ) ( ( t979 / 8.0 == t979 / 8.0 ) && ( fabs ( t979 / 8.0
) != pmf_get_inf ( ) ) ) ; t446 [ 715ULL ] = ( int32_T ) ( ( ! ( t979 / 8.0
== t979 / 8.0 ) ) || ( ! ( fabs ( t979 / 8.0 ) != pmf_get_inf ( ) ) ) || (
t979 / 8.0 >= 0.0 ) ) ; t446 [ 716ULL ] = 1 ; t446 [ 717ULL ] = ( int32_T ) (
t977 >= 0.0 ) ; t446 [ 718ULL ] = ( int32_T ) ( ( ! ( t979 / 8.0 == t979 /
8.0 ) ) || ( ! ( fabs ( t979 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t979 / 8.0
== t979 / 8.0 ) && ( fabs ( t979 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t979 /
8.0 >= 0.0 ) ) ) || ( ! ( t977 >= 0.0 ) ) || ( ( pmf_pow ( t977 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t979 / 8.0 ) * 12.7 + 1.0 != 0.0 )
) ; t446 [ 719ULL ] = 1 ; t446 [ 720ULL ] = 1 ; t446 [ 721ULL ] = 1 ; t446 [
722ULL ] = 1 ; t446 [ 723ULL ] = ( int32_T ) ( t1029 / 2.0 != 0.0 ) ; t446 [
724ULL ] = 1 ; t2013 = t1029 / 2.0 ; t446 [ 725ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_354 > t1035 / 7.8539816339744827E-5 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( intrm_sf_mf_354 != 0.0 ) ) ; t446 [ 726ULL ] = 1 ;
t446 [ 727ULL ] = 1 ; t2013 = t1029 / 2.0 ; t446 [ 728ULL ] = ( int32_T ) ( (
! ( intrm_sf_mf_354 > t1035 / 7.8539816339744827E-5 / ( t2013 == 0.0 ?
1.0E-16 : t2013 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_354 != 0.0 ) ) || ( t1029 /
2.0 != 0.0 ) ) ; t446 [ 729ULL ] = ( int32_T ) ( - intrm_sf_mf_362 <
663.67513503334737 ) ; t446 [ 730ULL ] = ( int32_T ) ( t982 != 0.0 ) ; t446 [
731ULL ] = ( int32_T ) ( t1047 / 2.0 * 7.8539816339744827E-5 != 0.0 ) ; t446
[ 732ULL ] = 1 ; t446 [ 733ULL ] = ( int32_T ) ( t952 != 0.0 ) ; t446 [
734ULL ] = ( int32_T ) ( ( ! ( t952 != 0.0 ) ) || ( 6.9 / ( t952 == 0.0 ?
1.0E-16 : t952 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 735ULL ] = 1 ;
t446 [ 736ULL ] = 1 ; t446 [ 737ULL ] = ( int32_T ) ( ( ! ( t952 != 0.0 ) )
|| ( ( t952 != 0.0 ) && ( ! ( 6.9 / ( t952 == 0.0 ? 1.0E-16 : t952 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t952 == 0.0 ?
1.0E-16 : t952 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t952 == 0.0
? 1.0E-16 : t952 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
738ULL ] = ( int32_T ) ( ( t985 / 8.0 == t985 / 8.0 ) && ( fabs ( t985 / 8.0
) != pmf_get_inf ( ) ) ) ; t446 [ 739ULL ] = ( int32_T ) ( ( ! ( t985 / 8.0
== t985 / 8.0 ) ) || ( ! ( fabs ( t985 / 8.0 ) != pmf_get_inf ( ) ) ) || (
t985 / 8.0 >= 0.0 ) ) ; t446 [ 740ULL ] = 1 ; t446 [ 741ULL ] = ( int32_T ) (
t983 >= 0.0 ) ; t446 [ 742ULL ] = ( int32_T ) ( ( ! ( t985 / 8.0 == t985 /
8.0 ) ) || ( ! ( fabs ( t985 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t985 / 8.0
== t985 / 8.0 ) && ( fabs ( t985 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t985 /
8.0 >= 0.0 ) ) ) || ( ! ( t983 >= 0.0 ) ) || ( ( pmf_pow ( t983 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t985 / 8.0 ) * 12.7 + 1.0 != 0.0 )
) ; t446 [ 743ULL ] = 1 ; t446 [ 744ULL ] = 1 ; t446 [ 745ULL ] = 1 ; t446 [
746ULL ] = 1 ; t446 [ 747ULL ] = ( int32_T ) ( t1050 / 2.0 != 0.0 ) ; t446 [
748ULL ] = 1 ; t2013 = t1050 / 2.0 ; t446 [ 749ULL ] = ( int32_T ) ( ( ! (
t981 > t1056 / 7.8539816339744827E-5 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) /
30.0 ) ) || ( t981 != 0.0 ) ) ; t446 [ 750ULL ] = 1 ; t446 [ 751ULL ] = 1 ;
t2013 = t1050 / 2.0 ; t446 [ 752ULL ] = ( int32_T ) ( ( ! ( t981 > t1056 /
7.8539816339744827E-5 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( !
( t981 != 0.0 ) ) || ( t1050 / 2.0 != 0.0 ) ) ; t446 [ 753ULL ] = ( int32_T )
( - intrm_sf_mf_386 < 663.67513503334737 ) ; t446 [ 754ULL ] = 1 ; t446 [
755ULL ] = 1 ; t446 [ 756ULL ] = ( int32_T ) ( X [ 220ULL ] != 0.0 ) ; t446 [
757ULL ] = 1 ; t446 [ 758ULL ] = 1 ; t446 [ 759ULL ] = 1 ; t446 [ 760ULL ] =
1 ; t446 [ 761ULL ] = 1 ; t446 [ 762ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X
[ 213ULL ] + 2.0360111955237585E-13 == X [ 213ULL ] * X [ 213ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 763ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.0360111955237585E-13 == X [ 213ULL
] * X [ 213ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t446 [ 764ULL ]
= 1 ; t446 [ 765ULL ] = 1 ; t446 [ 766ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 2.3237892571262758E-14 == X [ 213ULL ] * X [ 213ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 767ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.3237892571262758E-14 == X [ 213ULL
] * X [ 213ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t446 [ 768ULL ]
= 1 ; t446 [ 769ULL ] = 1 ; t446 [ 770ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 1.6409606283812424E-14 == X [ 213ULL ] * X [ 213ULL ] +
1.6409606283812424E-14 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 771ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 1.6409606283812424E-14 == X [ 213ULL
] * X [ 213ULL ] + 1.6409606283812424E-14 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 1.6409606283812424E-14 >= 0.0 ) ) ; t446 [ 772ULL ]
= ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 773ULL ] = 1 ; t446 [ 774ULL ]
= 1 ; t446 [ 775ULL ] = 1 ; t446 [ 776ULL ] = 1 ; t446 [ 777ULL ] = 1 ; t446
[ 778ULL ] = ( int32_T ) ( ( X [ 183ULL ] * X [ 183ULL ] +
2.0360111955237585E-13 == X [ 183ULL ] * X [ 183ULL ] +
2.0360111955237585E-13 ) && ( fabs ( X [ 183ULL ] * X [ 183ULL ] +
2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 779ULL ] = ( int32_T
) ( ( ! ( X [ 183ULL ] * X [ 183ULL ] + 2.0360111955237585E-13 == X [ 183ULL
] * X [ 183ULL ] + 2.0360111955237585E-13 ) ) || ( ! ( fabs ( X [ 183ULL ] *
X [ 183ULL ] + 2.0360111955237585E-13 ) != pmf_get_inf ( ) ) ) || ( X [
183ULL ] * X [ 183ULL ] + 2.0360111955237585E-13 >= 0.0 ) ) ; t446 [ 780ULL ]
= 1 ; t446 [ 781ULL ] = 1 ; t446 [ 782ULL ] = ( int32_T ) ( ( X [ 183ULL ] *
X [ 183ULL ] + 2.3237892571262758E-14 == X [ 183ULL ] * X [ 183ULL ] +
2.3237892571262758E-14 ) && ( fabs ( X [ 183ULL ] * X [ 183ULL ] +
2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 783ULL ] = ( int32_T
) ( ( ! ( X [ 183ULL ] * X [ 183ULL ] + 2.3237892571262758E-14 == X [ 183ULL
] * X [ 183ULL ] + 2.3237892571262758E-14 ) ) || ( ! ( fabs ( X [ 183ULL ] *
X [ 183ULL ] + 2.3237892571262758E-14 ) != pmf_get_inf ( ) ) ) || ( X [
183ULL ] * X [ 183ULL ] + 2.3237892571262758E-14 >= 0.0 ) ) ; t446 [ 784ULL ]
= 1 ; t446 [ 785ULL ] = 1 ; t446 [ 786ULL ] = ( int32_T ) ( ( X [ 183ULL ] *
X [ 183ULL ] + 1.6409606283812424E-14 == X [ 183ULL ] * X [ 183ULL ] +
1.6409606283812424E-14 ) && ( fabs ( X [ 183ULL ] * X [ 183ULL ] +
1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) ; t446 [ 787ULL ] = ( int32_T
) ( ( ! ( X [ 183ULL ] * X [ 183ULL ] + 1.6409606283812424E-14 == X [ 183ULL
] * X [ 183ULL ] + 1.6409606283812424E-14 ) ) || ( ! ( fabs ( X [ 183ULL ] *
X [ 183ULL ] + 1.6409606283812424E-14 ) != pmf_get_inf ( ) ) ) || ( X [
183ULL ] * X [ 183ULL ] + 1.6409606283812424E-14 >= 0.0 ) ) ; t446 [ 788ULL ]
= ( int32_T ) ( X [ 237ULL ] * t994 != 0.0 ) ; t446 [ 789ULL ] = ( int32_T )
( X [ 28ULL ] != 0.0 ) ; t446 [ 790ULL ] = ( int32_T ) ( X [ 237ULL ] != 0.0
) ; t446 [ 791ULL ] = ( int32_T ) ( X [ 220ULL ] != 0.0 ) ; t446 [ 792ULL ] =
( int32_T ) ( X [ 237ULL ] != 0.0 ) ; t446 [ 793ULL ] = 1 ; t446 [ 794ULL ] =
( int32_T ) ( ( ! ( - X [ 213ULL ] > 0.0 ) ) || ( intrm_sf_mf_437 != 0.0 ) )
; t446 [ 795ULL ] = 1 ; t446 [ 796ULL ] = 1 ; t446 [ 797ULL ] = 1 ; t446 [
798ULL ] = ( int32_T ) ( ( ! ( - X [ 213ULL ] > 0.0 ) ) || ( ! (
intrm_sf_mf_437 != 0.0 ) ) || ( t995 != 0.0 ) ) ; t446 [ 799ULL ] = 1 ; t446
[ 800ULL ] = ( int32_T ) ( ( ! ( - X [ 213ULL ] < 0.0 ) ) || ( - X [ 213ULL ]
> 0.0 ) || ( intrm_sf_mf_437 != 0.0 ) ) ; t446 [ 801ULL ] = 1 ; t446 [ 802ULL
] = 1 ; t446 [ 803ULL ] = 1 ; t446 [ 804ULL ] = ( int32_T ) ( ( ! ( - X [
213ULL ] < 0.0 ) ) || ( ! ( intrm_sf_mf_437 != 0.0 ) ) || ( - X [ 213ULL ] >
0.0 ) || ( t995 != 0.0 ) ) ; t446 [ 805ULL ] = 1 ; t446 [ 806ULL ] = 1 ; t446
[ 807ULL ] = ( int32_T ) ( t999 != 0.0 ) ; t446 [ 808ULL ] = 1 ; t446 [
809ULL ] = 1 ; t446 [ 810ULL ] = 1 ; t446 [ 811ULL ] = 1 ; t446 [ 812ULL ] =
1 ; t446 [ 813ULL ] = 1 ; t446 [ 814ULL ] = 1 ; t446 [ 815ULL ] = 1 ; t446 [
816ULL ] = 1 ; t446 [ 817ULL ] = 1 ; t446 [ 818ULL ] = ( int32_T ) (
intrm_sf_mf_456 - t994 != 0.0 ) ; t446 [ 819ULL ] = 1 ; t446 [ 820ULL ] = 1 ;
t446 [ 821ULL ] = ( int32_T ) ( t994 != 0.0 ) ; t446 [ 822ULL ] = ( int32_T )
( ( ! ( t994 != 0.0 ) ) || ( X [ 237ULL ] != 0.0 ) ) ; t446 [ 823ULL ] = 1 ;
t446 [ 824ULL ] = ( int32_T ) ( ( ! ( t994 != 0.0 ) ) || ( ( t994 != 0.0 ) &&
( ! ( X [ 237ULL ] != 0.0 ) ) ) || ( fabs ( t1080 / ( t994 == 0.0 ? 1.0E-16 :
t994 ) / ( X [ 237ULL ] == 0.0 ? 1.0E-16 : X [ 237ULL ] ) ) >= 0.0 ) ) ; t446
[ 825ULL ] = ( int32_T ) ( ( ! ( - X [ 213ULL ] >= 0.0 ) ) || ( t989 != 0.0 )
) ; t446 [ 826ULL ] = ( int32_T ) ( ( - X [ 213ULL ] >= 0.0 ) || ( t989 !=
0.0 ) ) ; t446 [ 827ULL ] = ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t446 [
828ULL ] = 1 ; t446 [ 829ULL ] = 1 ; t446 [ 830ULL ] = 1 ; t446 [ 831ULL ] =
1 ; t446 [ 832ULL ] = 1 ; t446 [ 833ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X
[ 213ULL ] + 1.8324100759713822E-12 == X [ 213ULL ] * X [ 213ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 834ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 1.8324100759713822E-12 == X [ 213ULL
] * X [ 213ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 835ULL ]
= 1 ; t446 [ 836ULL ] = 1 ; t446 [ 837ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 2.0914103314136477E-13 == X [ 213ULL ] * X [ 213ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 838ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.0914103314136477E-13 == X [ 213ULL
] * X [ 213ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 839ULL ]
= 1 ; t446 [ 840ULL ] = 1 ; t446 [ 841ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 1.4768645655431184E-13 == X [ 213ULL ] * X [ 213ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 842ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 1.4768645655431184E-13 == X [ 213ULL
] * X [ 213ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 843ULL ]
= ( int32_T ) ( X [ 220ULL ] != 0.0 ) ; t446 [ 844ULL ] = 1 ; t446 [ 845ULL ]
= 1 ; t446 [ 846ULL ] = 1 ; t446 [ 847ULL ] = 1 ; t446 [ 848ULL ] = 1 ; t446
[ 849ULL ] = ( int32_T ) ( ( X [ 213ULL ] * X [ 213ULL ] +
1.8324100759713822E-12 == X [ 213ULL ] * X [ 213ULL ] +
1.8324100759713822E-12 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 850ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 1.8324100759713822E-12 == X [ 213ULL
] * X [ 213ULL ] + 1.8324100759713822E-12 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 1.8324100759713822E-12 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 1.8324100759713822E-12 >= 0.0 ) ) ; t446 [ 851ULL ]
= 1 ; t446 [ 852ULL ] = 1 ; t446 [ 853ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 2.0914103314136477E-13 == X [ 213ULL ] * X [ 213ULL ] +
2.0914103314136477E-13 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 854ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 2.0914103314136477E-13 == X [ 213ULL
] * X [ 213ULL ] + 2.0914103314136477E-13 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 2.0914103314136477E-13 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 2.0914103314136477E-13 >= 0.0 ) ) ; t446 [ 855ULL ]
= 1 ; t446 [ 856ULL ] = 1 ; t446 [ 857ULL ] = ( int32_T ) ( ( X [ 213ULL ] *
X [ 213ULL ] + 1.4768645655431184E-13 == X [ 213ULL ] * X [ 213ULL ] +
1.4768645655431184E-13 ) && ( fabs ( X [ 213ULL ] * X [ 213ULL ] +
1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 858ULL ] = ( int32_T
) ( ( ! ( X [ 213ULL ] * X [ 213ULL ] + 1.4768645655431184E-13 == X [ 213ULL
] * X [ 213ULL ] + 1.4768645655431184E-13 ) ) || ( ! ( fabs ( X [ 213ULL ] *
X [ 213ULL ] + 1.4768645655431184E-13 ) != pmf_get_inf ( ) ) ) || ( X [
213ULL ] * X [ 213ULL ] + 1.4768645655431184E-13 >= 0.0 ) ) ; t446 [ 859ULL ]
= ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 != 0.0 ) ;
t446 [ 860ULL ] = 1 ; t446 [ 861ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 != 0.0 ) ) ||
( fabs ( t995 * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Pressure_Reducing_V12 ) )
>= 0.0 ) ) ; t446 [ 862ULL ] = 1 ; t446 [ 863ULL ] = 1 ; t446 [ 864ULL ] = 1
; t446 [ 865ULL ] = 1 ; t446 [ 866ULL ] = 1 ; t446 [ 867ULL ] = ( int32_T ) (
( X [ 250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 == X [ 250ULL ] * X [
250ULL ] + 2.7104677895120892E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 868ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 == X [ 250ULL
] * X [ 250ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [ 869ULL ]
= 1 ; t446 [ 870ULL ] = 1 ; t446 [ 871ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 872ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL
] * X [ 250ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [ 873ULL ]
= 1 ; t446 [ 874ULL ] = 1 ; t446 [ 875ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 876ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL
] * X [ 250ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [ 877ULL ]
= ( int32_T ) ( t1000 * 293.15 != 0.0 ) ; t446 [ 878ULL ] = 1 ; t446 [ 879ULL
] = ( int32_T ) ( ( ! ( 1.0 - X [ 255ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [
255ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 255ULL ] >=
0.01 ) ) ; t446 [ 880ULL ] = 1 ; t446 [ 881ULL ] = 1 ; t446 [ 882ULL ] = 1 ;
t446 [ 883ULL ] = 1 ; t446 [ 884ULL ] = 1 ; t446 [ 885ULL ] = 1 ; t446 [
886ULL ] = ( int32_T ) ( ( X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 == X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 887ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 == X [ 250ULL
] * X [ 250ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [ 888ULL ]
= 1 ; t446 [ 889ULL ] = 1 ; t446 [ 890ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 891ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL
] * X [ 250ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [ 892ULL ]
= 1 ; t446 [ 893ULL ] = 1 ; t446 [ 894ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 895ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL
] * X [ 250ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [ 896ULL ]
= ( int32_T ) ( X [ 35ULL ] != 0.0 ) ; t446 [ 897ULL ] = 1 ; t446 [ 898ULL ]
= 1 ; t446 [ 899ULL ] = 1 ; t446 [ 900ULL ] = 1 ; t446 [ 901ULL ] = 1 ; t446
[ 902ULL ] = ( int32_T ) ( ( X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 == X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 903ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 == X [ 250ULL
] * X [ 250ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [ 904ULL ]
= 1 ; t446 [ 905ULL ] = 1 ; t446 [ 906ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 907ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL
] * X [ 250ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [ 908ULL ]
= 1 ; t446 [ 909ULL ] = 1 ; t446 [ 910ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 911ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL
] * X [ 250ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [ 912ULL ]
= 1 ; t446 [ 913ULL ] = 1 ; t446 [ 914ULL ] = 1 ; t446 [ 915ULL ] = ( int32_T
) ( X [ 35ULL ] != 0.0 ) ; t446 [ 916ULL ] = 1 ; t446 [ 917ULL ] = 1 ; t446 [
918ULL ] = 1 ; t446 [ 919ULL ] = ( int32_T ) ( X [ 35ULL ] != 0.0 ) ; t446 [
920ULL ] = 1 ; t446 [ 921ULL ] = 1 ; t446 [ 922ULL ] = 1 ; t446 [ 923ULL ] =
1 ; t446 [ 924ULL ] = 1 ; t446 [ 925ULL ] = 1 ; t446 [ 926ULL ] = ( int32_T )
( X [ 36ULL ] * intrm_sf_mf_537 != 0.0 ) ; t446 [ 927ULL ] = 1 ; t446 [
928ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 38ULL ] >= - 0.1 ) ) || ( ( ( 1.0 -
X [ 38ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 38ULL ]
>= 0.01 ) ) ; t446 [ 929ULL ] = 1 ; t446 [ 930ULL ] = ( int32_T ) (
intrm_sf_mf_535 != 0.0 ) ; t446 [ 931ULL ] = ( int32_T ) ( X [ 35ULL ] *
100000.0 > 0.0 ) ; t446 [ 932ULL ] = ( int32_T ) ( ( ! ( X [ 35ULL ] *
100000.0 > 0.0 ) ) || ( pmf_log ( X [ 35ULL ] * 100000.0 ) - t455 [ 0ULL ] <
663.67513503334737 ) ) ; t446 [ 933ULL ] = 1 ; t446 [ 934ULL ] = ( int32_T )
( ( ! ( t1005 >= 1.0 ) ) || ( ( t1005 - 1.0 ) * 461.523 + t998 != 0.0 ) ) ;
t446 [ 935ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Compressor_Volume_x_w * 0.01 != 0.0
) ; t446 [ 936ULL ] = 1 ; t446 [ 937ULL ] = 1 ; t446 [ 938ULL ] = 1 ; t446 [
939ULL ] = 1 ; t446 [ 940ULL ] = 1 ; t446 [ 941ULL ] = 1 ; t446 [ 942ULL ] =
( int32_T ) ( X [ 35ULL ] != 0.0 ) ; t446 [ 943ULL ] = 1 ; t446 [ 944ULL ] =
1 ; t446 [ 945ULL ] = 1 ; t446 [ 946ULL ] = 1 ; t446 [ 947ULL ] = 1 ; t446 [
948ULL ] = ( int32_T ) ( ( X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 == X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 949ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 == X [ 250ULL
] * X [ 250ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [ 950ULL ]
= 1 ; t446 [ 951ULL ] = 1 ; t446 [ 952ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 953ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 == X [ 250ULL
] * X [ 250ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [ 954ULL ]
= 1 ; t446 [ 955ULL ] = 1 ; t446 [ 956ULL ] = ( int32_T ) ( ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) && ( fabs ( X [ 250ULL ] * X [ 250ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 957ULL ] = ( int32_T
) ( ( ! ( X [ 250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 == X [ 250ULL
] * X [ 250ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [ 250ULL ] *
X [ 250ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) || ( X [
250ULL ] * X [ 250ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [ 958ULL ]
= ( int32_T ) ( X [ 35ULL ] != 0.0 ) ; t446 [ 959ULL ] = 1 ; t446 [ 960ULL ]
= 1 ; t446 [ 961ULL ] = 1 ; t446 [ 962ULL ] = 1 ; t446 [ 963ULL ] = 1 ; t446
[ 964ULL ] = ( int32_T ) ( ( X [ 281ULL ] * X [ 281ULL ] +
2.7104677895120892E-12 == X [ 281ULL ] * X [ 281ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 281ULL ] * X [ 281ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 965ULL ] = ( int32_T
) ( ( ! ( X [ 281ULL ] * X [ 281ULL ] + 2.7104677895120892E-12 == X [ 281ULL
] * X [ 281ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [ 281ULL ] *
X [ 281ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) || ( X [
281ULL ] * X [ 281ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [ 966ULL ]
= 1 ; t446 [ 967ULL ] = 1 ; t446 [ 968ULL ] = ( int32_T ) ( ( X [ 281ULL ] *
X [ 281ULL ] + 5.2285258285341208E-12 == X [ 281ULL ] * X [ 281ULL ] +
5.2285258285341208E-12 ) && ( fabs ( X [ 281ULL ] * X [ 281ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 969ULL ] = ( int32_T
) ( ( ! ( X [ 281ULL ] * X [ 281ULL ] + 5.2285258285341208E-12 == X [ 281ULL
] * X [ 281ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [ 281ULL ] *
X [ 281ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) || ( X [
281ULL ] * X [ 281ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [ 970ULL ]
= 1 ; t446 [ 971ULL ] = 1 ; t446 [ 972ULL ] = ( int32_T ) ( ( X [ 281ULL ] *
X [ 281ULL ] + 3.6921614138577959E-12 == X [ 281ULL ] * X [ 281ULL ] +
3.6921614138577959E-12 ) && ( fabs ( X [ 281ULL ] * X [ 281ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 973ULL ] = ( int32_T
) ( ( ! ( X [ 281ULL ] * X [ 281ULL ] + 3.6921614138577959E-12 == X [ 281ULL
] * X [ 281ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [ 281ULL ] *
X [ 281ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) || ( X [
281ULL ] * X [ 281ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [ 974ULL ]
= ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t446 [ 975ULL ] = ( int32_T ) ( X [
303ULL ] != 0.0 ) ; t446 [ 976ULL ] = 1 ; t446 [ 977ULL ] = 1 ; t446 [ 978ULL
] = 1 ; t446 [ 979ULL ] = ( int32_T ) ( t1019 - t1015 != 0.0 ) ; t446 [
980ULL ] = 1 ; t446 [ 981ULL ] = 1 ; t446 [ 982ULL ] = ( int32_T ) ( ( t1016
* t1016 * 9.999999999999999E-14 + fabs ( X [ 302ULL ] * t824 * t1015 ) *
1.0E-9 == t1016 * t1016 * 9.999999999999999E-14 + fabs ( X [ 302ULL ] * t824
* t1015 ) * 1.0E-9 ) && ( fabs ( t1016 * t1016 * 9.999999999999999E-14 + fabs
( X [ 302ULL ] * t824 * t1015 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [
983ULL ] = ( int32_T ) ( ( ! ( t1016 * t1016 * 9.999999999999999E-14 + fabs (
X [ 302ULL ] * t824 * t1015 ) * 1.0E-9 == t1016 * t1016 *
9.999999999999999E-14 + fabs ( X [ 302ULL ] * t824 * t1015 ) * 1.0E-9 ) ) ||
( ! ( fabs ( t1016 * t1016 * 9.999999999999999E-14 + fabs ( X [ 302ULL ] *
t824 * t1015 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1016 * t1016 *
9.999999999999999E-14 + fabs ( X [ 302ULL ] * t824 * t1015 ) * 1.0E-9 >= 0.0
) ) ; t446 [ 984ULL ] = 1 ; t446 [ 985ULL ] = 1 ; t446 [ 986ULL ] = ( int32_T
) ( t1015 != 0.0 ) ; t446 [ 987ULL ] = ( int32_T ) ( ( ! ( t1015 != 0.0 ) )
|| ( X [ 302ULL ] != 0.0 ) ) ; t446 [ 988ULL ] = 1 ; t446 [ 989ULL ] = (
int32_T ) ( ( ! ( t1015 != 0.0 ) ) || ( ( t1015 != 0.0 ) && ( ! ( X [ 302ULL
] != 0.0 ) ) ) || ( fabs ( t1092 / ( t1015 == 0.0 ? 1.0E-16 : t1015 ) / ( X [
302ULL ] == 0.0 ? 1.0E-16 : X [ 302ULL ] ) ) >= 0.0 ) ) ; t446 [ 990ULL ] = (
int32_T ) ( t1024 * 0.0019634954084936209 != 0.0 ) ; t446 [ 991ULL ] = (
int32_T ) ( X [ 39ULL ] * t1015 != 0.0 ) ; t446 [ 992ULL ] = ( int32_T ) (
t1030 * 9.8174770424681068E-6 != 0.0 ) ; t446 [ 993ULL ] = ( int32_T ) (
t1032 != 0.0 ) ; t446 [ 994ULL ] = ( int32_T ) ( ( ! ( t1032 != 0.0 ) ) || (
6.9 / ( t1032 == 0.0 ? 1.0E-16 : t1032 ) + 2.8767404433520813E-5 > 0.0 ) ) ;
t446 [ 995ULL ] = 1 ; t446 [ 996ULL ] = 1 ; t446 [ 997ULL ] = ( int32_T ) ( (
! ( t1032 != 0.0 ) ) || ( ( t1032 != 0.0 ) && ( ! ( 6.9 / ( t1032 == 0.0 ?
1.0E-16 : t1032 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1032 == 0.0 ? 1.0E-16 : t1032 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1032 == 0.0 ? 1.0E-16 : t1032 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t446 [ 998ULL ] = ( int32_T ) ( t1030 * 3.855314219175531E-7 != 0.0
) ; t446 [ 999ULL ] = 1 ; t446 [ 1000ULL ] = 1 ; t446 [ 1001ULL ] = 1 ; t446
[ 1002ULL ] = 1 ; t446 [ 1003ULL ] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ;
t446 [ 1004ULL ] = ( int32_T ) ( X [ 306ULL ] != 0.0 ) ; t446 [ 1005ULL ] = 1
; t446 [ 1006ULL ] = 1 ; t446 [ 1007ULL ] = 1 ; t446 [ 1008ULL ] = ( int32_T
) ( t1031 - t1015 != 0.0 ) ; t446 [ 1009ULL ] = 1 ; t446 [ 1010ULL ] = 1 ;
t446 [ 1011ULL ] = ( int32_T ) ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 ) && (
fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1012ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 ) ) ||
( ! ( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 305ULL ] * t1011 * t1015 ) * 1.0E-9 >= 0.0
) ) ; t446 [ 1013ULL ] = 1 ; t446 [ 1014ULL ] = 1 ; t446 [ 1015ULL ] = (
int32_T ) ( t1015 != 0.0 ) ; t446 [ 1016ULL ] = ( int32_T ) ( ( ! ( t1015 !=
0.0 ) ) || ( X [ 305ULL ] != 0.0 ) ) ; t446 [ 1017ULL ] = 1 ; t446 [ 1018ULL
] = ( int32_T ) ( ( ! ( t1015 != 0.0 ) ) || ( ( t1015 != 0.0 ) && ( ! ( X [
305ULL ] != 0.0 ) ) ) || ( fabs ( t1112 / ( t1015 == 0.0 ? 1.0E-16 : t1015 )
/ ( X [ 305ULL ] == 0.0 ? 1.0E-16 : X [ 305ULL ] ) ) >= 0.0 ) ) ; t446 [
1019ULL ] = ( int32_T ) ( t1024 * 0.0019634954084936209 != 0.0 ) ; t446 [
1020ULL ] = ( int32_T ) ( t1030 * 9.8174770424681068E-6 != 0.0 ) ; t446 [
1021ULL ] = ( int32_T ) ( t1039 != 0.0 ) ; t446 [ 1022ULL ] = ( int32_T ) ( (
! ( t1039 != 0.0 ) ) || ( 6.9 / ( t1039 == 0.0 ? 1.0E-16 : t1039 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1023ULL ] = 1 ; t446 [ 1024ULL ] = 1
; t446 [ 1025ULL ] = ( int32_T ) ( ( ! ( t1039 != 0.0 ) ) || ( ( t1039 != 0.0
) && ( ! ( 6.9 / ( t1039 == 0.0 ? 1.0E-16 : t1039 ) + 2.8767404433520813E-5 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1039 == 0.0 ? 1.0E-16 : t1039 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1039 == 0.0 ? 1.0E-16 : t1039
) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [ 1026ULL ] = ( int32_T
) ( t1030 * 3.855314219175531E-7 != 0.0 ) ; t446 [ 1027ULL ] = 1 ; t446 [
1028ULL ] = 1 ; t446 [ 1029ULL ] = 1 ; t446 [ 1030ULL ] = 1 ; t446 [ 1031ULL
] = ( int32_T ) ( t1025 != 0.0 ) ; t446 [ 1032ULL ] = ( int32_T ) ( t1033 !=
0.0 ) ; t446 [ 1033ULL ] = 1 ; t446 [ 1034ULL ] = ( int32_T ) ( ( ! ( 1.0 - X
[ 41ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 41ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 41ULL ] >= 0.01 ) ) ; t446 [ 1035ULL ] =
1 ; t446 [ 1036ULL ] = ( int32_T ) ( t1037 != 0.0 ) ; t446 [ 1037ULL ] = (
int32_T ) ( X [ 42ULL ] * 100000.0 > 0.0 ) ; t446 [ 1038ULL ] = ( int32_T ) (
( ! ( X [ 42ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 42ULL ] * 100000.0
) - t452 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [ 1039ULL ] = 1 ; t446 [
1040ULL ] = ( int32_T ) ( ( ! ( t1040 >= 1.0 ) ) || ( ( t1040 - 1.0 ) *
461.523 + t1038 != 0.0 ) ) ; t446 [ 1041ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_x_ws_I * 0.01 != 0.0 ) ;
t446 [ 1042ULL ] = 1 ; t446 [ 1043ULL ] = 1 ; t446 [ 1044ULL ] = 1 ; t446 [
1045ULL ] = 1 ; t446 [ 1046ULL ] = ( int32_T ) ( t1044 != 0.0 ) ; t446 [
1047ULL ] = ( int32_T ) ( t1130 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t446
[ 1048ULL ] = 1 ; t446 [ 1049ULL ] = ( int32_T ) ( intrm_sf_mf_616 != 0.0 ) ;
t446 [ 1050ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_616 != 0.0 ) ) || ( 6.9 /
( intrm_sf_mf_616 == 0.0 ? 1.0E-16 : intrm_sf_mf_616 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1051ULL ] = 1 ; t446 [ 1052ULL ] = 1
; t446 [ 1053ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_616 != 0.0 ) ) || ( (
intrm_sf_mf_616 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_616 == 0.0 ? 1.0E-16 :
intrm_sf_mf_616 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( intrm_sf_mf_616 == 0.0 ? 1.0E-16 : intrm_sf_mf_616 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_616 == 0.0 ?
1.0E-16 : intrm_sf_mf_616 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ;
t446 [ 1054ULL ] = ( int32_T ) ( ( t1048 / 8.0 == t1048 / 8.0 ) && ( fabs (
t1048 / 8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 1055ULL ] = ( int32_T ) ( ( ! (
t1048 / 8.0 == t1048 / 8.0 ) ) || ( ! ( fabs ( t1048 / 8.0 ) != pmf_get_inf (
) ) ) || ( t1048 / 8.0 >= 0.0 ) ) ; t446 [ 1056ULL ] = 1 ; t446 [ 1057ULL ] =
( int32_T ) ( t1045 >= 0.0 ) ; t446 [ 1058ULL ] = ( int32_T ) ( ( ! ( t1048 /
8.0 == t1048 / 8.0 ) ) || ( ! ( fabs ( t1048 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1048 / 8.0 == t1048 / 8.0 ) && ( fabs ( t1048 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1048 / 8.0 >= 0.0 ) ) ) || ( ! ( t1045 >= 0.0 ) ) || ( (
pmf_pow ( t1045 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1048 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 1059ULL ] = 1 ; t446 [ 1060ULL ] = 1 ; t446 [
1061ULL ] = 1 ; t446 [ 1062ULL ] = 1 ; t446 [ 1063ULL ] = ( int32_T ) ( t1133
/ 2.0 != 0.0 ) ; t446 [ 1064ULL ] = 1 ; t2013 = t1133 / 2.0 ; t446 [ 1065ULL
] = ( int32_T ) ( ( ! ( t1043 > t1139 / 0.0019634954084936209 / ( t2013 ==
0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( t1043 != 0.0 ) ) ; t446 [ 1066ULL ] =
1 ; t446 [ 1067ULL ] = 1 ; t2013 = t1133 / 2.0 ; t446 [ 1068ULL ] = ( int32_T
) ( ( ! ( t1043 > t1139 / 0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( ! ( t1043 != 0.0 ) ) || ( t1133 / 2.0 != 0.0 ) ) ;
t446 [ 1069ULL ] = ( int32_T ) ( - t1049 < 663.67513503334737 ) ; t446 [
1070ULL ] = ( int32_T ) ( t1052 != 0.0 ) ; t446 [ 1071ULL ] = ( int32_T ) (
t1151 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t446 [ 1072ULL ] = 1 ; t446 [
1073ULL ] = ( int32_T ) ( intrm_sf_mf_640 != 0.0 ) ; t446 [ 1074ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_640 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_640 ==
0.0 ? 1.0E-16 : intrm_sf_mf_640 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [
1075ULL ] = 1 ; t446 [ 1076ULL ] = 1 ; t446 [ 1077ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_640 != 0.0 ) ) || ( ( intrm_sf_mf_640 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_640 == 0.0 ? 1.0E-16 : intrm_sf_mf_640 ) + 2.8767404433520813E-5
> 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_640 == 0.0 ? 1.0E-16 :
intrm_sf_mf_640 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
intrm_sf_mf_640 == 0.0 ? 1.0E-16 : intrm_sf_mf_640 ) + 2.8767404433520813E-5
) * 3.24 != 0.0 ) ) ; t446 [ 1078ULL ] = ( int32_T ) ( ( t1055 / 8.0 == t1055
/ 8.0 ) && ( fabs ( t1055 / 8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 1079ULL ] =
( int32_T ) ( ( ! ( t1055 / 8.0 == t1055 / 8.0 ) ) || ( ! ( fabs ( t1055 /
8.0 ) != pmf_get_inf ( ) ) ) || ( t1055 / 8.0 >= 0.0 ) ) ; t446 [ 1080ULL ] =
1 ; t446 [ 1081ULL ] = ( int32_T ) ( t1054 >= 0.0 ) ; t446 [ 1082ULL ] = (
int32_T ) ( ( ! ( t1055 / 8.0 == t1055 / 8.0 ) ) || ( ! ( fabs ( t1055 / 8.0
) != pmf_get_inf ( ) ) ) || ( ( t1055 / 8.0 == t1055 / 8.0 ) && ( fabs (
t1055 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1055 / 8.0 >= 0.0 ) ) ) || ( ! (
t1054 >= 0.0 ) ) || ( ( pmf_pow ( t1054 , 0.66666666666666663 ) - 1.0 ) *
pmf_sqrt ( t1055 / 8.0 ) * 12.7 + 1.0 != 0.0 ) ) ; t446 [ 1083ULL ] = 1 ;
t446 [ 1084ULL ] = 1 ; t446 [ 1085ULL ] = 1 ; t446 [ 1086ULL ] = 1 ; t446 [
1087ULL ] = ( int32_T ) ( t1154 / 2.0 != 0.0 ) ; t446 [ 1088ULL ] = 1 ; t2013
= t1154 / 2.0 ; t446 [ 1089ULL ] = ( int32_T ) ( ( ! ( t1053 > t1160 /
0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || (
t1053 != 0.0 ) ) ; t446 [ 1090ULL ] = 1 ; t446 [ 1091ULL ] = 1 ; t2013 =
t1154 / 2.0 ; t446 [ 1092ULL ] = ( int32_T ) ( ( ! ( t1053 > t1160 /
0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( !
( t1053 != 0.0 ) ) || ( t1154 / 2.0 != 0.0 ) ) ; t446 [ 1093ULL ] = ( int32_T
) ( - t1058 < 663.67513503334737 ) ; t446 [ 1094ULL ] = 1 ; t446 [ 1095ULL ]
= 1 ; t446 [ 1096ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 1097ULL
] = 1 ; t446 [ 1098ULL ] = 1 ; t446 [ 1099ULL ] = 1 ; t446 [ 1100ULL ] = 1 ;
t446 [ 1101ULL ] = 1 ; t446 [ 1102ULL ] = ( int32_T ) ( ( X [ 192ULL ] * X [
192ULL ] + 5.0900279888093953E-12 == X [ 192ULL ] * X [ 192ULL ] +
5.0900279888093953E-12 ) && ( fabs ( X [ 192ULL ] * X [ 192ULL ] +
5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1103ULL ] = (
int32_T ) ( ( ! ( X [ 192ULL ] * X [ 192ULL ] + 5.0900279888093953E-12 == X [
192ULL ] * X [ 192ULL ] + 5.0900279888093953E-12 ) ) || ( ! ( fabs ( X [
192ULL ] * X [ 192ULL ] + 5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 192ULL ] * X [ 192ULL ] + 5.0900279888093953E-12 >= 0.0 ) ) ; t446 [
1104ULL ] = 1 ; t446 [ 1105ULL ] = 1 ; t446 [ 1106ULL ] = ( int32_T ) ( ( X [
192ULL ] * X [ 192ULL ] + 5.8094731428156895E-13 == X [ 192ULL ] * X [ 192ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 192ULL ] * X [ 192ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1107ULL ] = (
int32_T ) ( ( ! ( X [ 192ULL ] * X [ 192ULL ] + 5.8094731428156895E-13 == X [
192ULL ] * X [ 192ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
192ULL ] * X [ 192ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 192ULL ] * X [ 192ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t446 [
1108ULL ] = 1 ; t446 [ 1109ULL ] = 1 ; t446 [ 1110ULL ] = ( int32_T ) ( ( X [
192ULL ] * X [ 192ULL ] + 4.1024015709531055E-13 == X [ 192ULL ] * X [ 192ULL
] + 4.1024015709531055E-13 ) && ( fabs ( X [ 192ULL ] * X [ 192ULL ] +
4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1111ULL ] = (
int32_T ) ( ( ! ( X [ 192ULL ] * X [ 192ULL ] + 4.1024015709531055E-13 == X [
192ULL ] * X [ 192ULL ] + 4.1024015709531055E-13 ) ) || ( ! ( fabs ( X [
192ULL ] * X [ 192ULL ] + 4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 192ULL ] * X [ 192ULL ] + 4.1024015709531055E-13 >= 0.0 ) ) ; t446 [
1112ULL ] = ( int32_T ) ( X [ 292ULL ] != 0.0 ) ; t446 [ 1113ULL ] = 1 ; t446
[ 1114ULL ] = 1 ; t446 [ 1115ULL ] = 1 ; t446 [ 1116ULL ] = 1 ; t446 [
1117ULL ] = 1 ; t446 [ 1118ULL ] = ( int32_T ) ( ( X [ 304ULL ] * X [ 304ULL
] + 5.0900279888093953E-12 == X [ 304ULL ] * X [ 304ULL ] +
5.0900279888093953E-12 ) && ( fabs ( X [ 304ULL ] * X [ 304ULL ] +
5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1119ULL ] = (
int32_T ) ( ( ! ( X [ 304ULL ] * X [ 304ULL ] + 5.0900279888093953E-12 == X [
304ULL ] * X [ 304ULL ] + 5.0900279888093953E-12 ) ) || ( ! ( fabs ( X [
304ULL ] * X [ 304ULL ] + 5.0900279888093953E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 304ULL ] * X [ 304ULL ] + 5.0900279888093953E-12 >= 0.0 ) ) ; t446 [
1120ULL ] = 1 ; t446 [ 1121ULL ] = 1 ; t446 [ 1122ULL ] = ( int32_T ) ( ( X [
304ULL ] * X [ 304ULL ] + 5.8094731428156895E-13 == X [ 304ULL ] * X [ 304ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 304ULL ] * X [ 304ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1123ULL ] = (
int32_T ) ( ( ! ( X [ 304ULL ] * X [ 304ULL ] + 5.8094731428156895E-13 == X [
304ULL ] * X [ 304ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
304ULL ] * X [ 304ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 304ULL ] * X [ 304ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t446 [
1124ULL ] = 1 ; t446 [ 1125ULL ] = 1 ; t446 [ 1126ULL ] = ( int32_T ) ( ( X [
304ULL ] * X [ 304ULL ] + 4.1024015709531055E-13 == X [ 304ULL ] * X [ 304ULL
] + 4.1024015709531055E-13 ) && ( fabs ( X [ 304ULL ] * X [ 304ULL ] +
4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1127ULL ] = (
int32_T ) ( ( ! ( X [ 304ULL ] * X [ 304ULL ] + 4.1024015709531055E-13 == X [
304ULL ] * X [ 304ULL ] + 4.1024015709531055E-13 ) ) || ( ! ( fabs ( X [
304ULL ] * X [ 304ULL ] + 4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 304ULL ] * X [ 304ULL ] + 4.1024015709531055E-13 >= 0.0 ) ) ; t446 [
1128ULL ] = ( int32_T ) ( X [ 43ULL ] != 0.0 ) ; t446 [ 1129ULL ] = ( int32_T
) ( X [ 317ULL ] != 0.0 ) ; t446 [ 1130ULL ] = 1 ; t446 [ 1131ULL ] = 1 ;
t446 [ 1132ULL ] = 1 ; t446 [ 1133ULL ] = ( int32_T ) ( t1064 - t1061 != 0.0
) ; t446 [ 1134ULL ] = 1 ; t446 [ 1135ULL ] = 1 ; t446 [ 1136ULL ] = (
int32_T ) ( ( t1062 * t1062 * 9.999999999999999E-14 + fabs ( X [ 316ULL ] *
t830 * t1061 ) * 1.0E-9 == t1062 * t1062 * 9.999999999999999E-14 + fabs ( X [
316ULL ] * t830 * t1061 ) * 1.0E-9 ) && ( fabs ( t1062 * t1062 *
9.999999999999999E-14 + fabs ( X [ 316ULL ] * t830 * t1061 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1137ULL ] = ( int32_T ) ( ( ! ( t1062 * t1062 *
9.999999999999999E-14 + fabs ( X [ 316ULL ] * t830 * t1061 ) * 1.0E-9 ==
t1062 * t1062 * 9.999999999999999E-14 + fabs ( X [ 316ULL ] * t830 * t1061 )
* 1.0E-9 ) ) || ( ! ( fabs ( t1062 * t1062 * 9.999999999999999E-14 + fabs ( X
[ 316ULL ] * t830 * t1061 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1062 *
t1062 * 9.999999999999999E-14 + fabs ( X [ 316ULL ] * t830 * t1061 ) * 1.0E-9
>= 0.0 ) ) ; t446 [ 1138ULL ] = 1 ; t446 [ 1139ULL ] = 1 ; t446 [ 1140ULL ] =
( int32_T ) ( t1061 != 0.0 ) ; t446 [ 1141ULL ] = ( int32_T ) ( ( ! ( t1061
!= 0.0 ) ) || ( X [ 316ULL ] != 0.0 ) ) ; t446 [ 1142ULL ] = 1 ; t446 [
1143ULL ] = ( int32_T ) ( ( ! ( t1061 != 0.0 ) ) || ( ( t1061 != 0.0 ) && ( !
( X [ 316ULL ] != 0.0 ) ) ) || ( fabs ( t1176 / ( t1061 == 0.0 ? 1.0E-16 :
t1061 ) / ( X [ 316ULL ] == 0.0 ? 1.0E-16 : X [ 316ULL ] ) ) >= 0.0 ) ) ;
t446 [ 1144ULL ] = ( int32_T ) ( t1070 * 0.32 != 0.0 ) ; t446 [ 1145ULL ] = (
int32_T ) ( X [ 6ULL ] * t1061 != 0.0 ) ; t446 [ 1146ULL ] = ( int32_T ) (
t1077 * 6.4000000000000011E-5 != 0.0 ) ; t446 [ 1147ULL ] = ( int32_T ) (
t1079 != 0.0 ) ; t446 [ 1148ULL ] = ( int32_T ) ( ( ! ( t1079 != 0.0 ) ) || (
6.9 / ( t1079 == 0.0 ? 1.0E-16 : t1079 ) + 0.00017169489553429715 > 0.0 ) ) ;
t446 [ 1149ULL ] = 1 ; t446 [ 1150ULL ] = 1 ; t446 [ 1151ULL ] = ( int32_T )
( ( ! ( t1079 != 0.0 ) ) || ( ( t1079 != 0.0 ) && ( ! ( 6.9 / ( t1079 == 0.0
? 1.0E-16 : t1079 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1079 == 0.0 ? 1.0E-16 : t1079 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1079 == 0.0 ? 1.0E-16 : t1079 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t446 [ 1152ULL ] = ( int32_T ) ( t1077 * 0.0020480000000000003 !=
0.0 ) ; t446 [ 1153ULL ] = 1 ; t446 [ 1154ULL ] = 1 ; t446 [ 1155ULL ] = 1 ;
t446 [ 1156ULL ] = 1 ; t446 [ 1157ULL ] = ( int32_T ) ( X [ 43ULL ] != 0.0 )
; t446 [ 1158ULL ] = ( int32_T ) ( X [ 320ULL ] != 0.0 ) ; t446 [ 1159ULL ] =
1 ; t446 [ 1160ULL ] = 1 ; t446 [ 1161ULL ] = 1 ; t446 [ 1162ULL ] = (
int32_T ) ( t1078 - t1061 != 0.0 ) ; t446 [ 1163ULL ] = 1 ; t446 [ 1164ULL ]
= 1 ; t446 [ 1165ULL ] = ( int32_T ) ( ( t1074 * t1074 *
9.999999999999999E-14 + fabs ( X [ 319ULL ] * intrm_sf_mf_698 * t1061 ) *
1.0E-9 == t1074 * t1074 * 9.999999999999999E-14 + fabs ( X [ 319ULL ] *
intrm_sf_mf_698 * t1061 ) * 1.0E-9 ) && ( fabs ( t1074 * t1074 *
9.999999999999999E-14 + fabs ( X [ 319ULL ] * intrm_sf_mf_698 * t1061 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 1166ULL ] = ( int32_T ) ( ( ! (
t1074 * t1074 * 9.999999999999999E-14 + fabs ( X [ 319ULL ] * intrm_sf_mf_698
* t1061 ) * 1.0E-9 == t1074 * t1074 * 9.999999999999999E-14 + fabs ( X [
319ULL ] * intrm_sf_mf_698 * t1061 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1074 *
t1074 * 9.999999999999999E-14 + fabs ( X [ 319ULL ] * intrm_sf_mf_698 * t1061
) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1074 * t1074 *
9.999999999999999E-14 + fabs ( X [ 319ULL ] * intrm_sf_mf_698 * t1061 ) *
1.0E-9 >= 0.0 ) ) ; t446 [ 1167ULL ] = 1 ; t446 [ 1168ULL ] = 1 ; t446 [
1169ULL ] = ( int32_T ) ( t1061 != 0.0 ) ; t446 [ 1170ULL ] = ( int32_T ) ( (
! ( t1061 != 0.0 ) ) || ( X [ 319ULL ] != 0.0 ) ) ; t446 [ 1171ULL ] = 1 ;
t446 [ 1172ULL ] = ( int32_T ) ( ( ! ( t1061 != 0.0 ) ) || ( ( t1061 != 0.0 )
&& ( ! ( X [ 319ULL ] != 0.0 ) ) ) || ( fabs ( t1196 / ( t1061 == 0.0 ?
1.0E-16 : t1061 ) / ( X [ 319ULL ] == 0.0 ? 1.0E-16 : X [ 319ULL ] ) ) >= 0.0
) ) ; t446 [ 1173ULL ] = ( int32_T ) ( t1070 * 0.32 != 0.0 ) ; t446 [ 1174ULL
] = ( int32_T ) ( t1077 * 6.4000000000000011E-5 != 0.0 ) ; t446 [ 1175ULL ] =
( int32_T ) ( t1086 != 0.0 ) ; t446 [ 1176ULL ] = ( int32_T ) ( ( ! ( t1086
!= 0.0 ) ) || ( 6.9 / ( t1086 == 0.0 ? 1.0E-16 : t1086 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 1177ULL ] = 1 ; t446 [ 1178ULL ] =
1 ; t446 [ 1179ULL ] = ( int32_T ) ( ( ! ( t1086 != 0.0 ) ) || ( ( t1086 !=
0.0 ) && ( ! ( 6.9 / ( t1086 == 0.0 ? 1.0E-16 : t1086 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1086 == 0.0 ?
1.0E-16 : t1086 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1086 ==
0.0 ? 1.0E-16 : t1086 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
1180ULL ] = ( int32_T ) ( t1077 * 0.0020480000000000003 != 0.0 ) ; t446 [
1181ULL ] = 1 ; t446 [ 1182ULL ] = 1 ; t446 [ 1183ULL ] = 1 ; t446 [ 1184ULL
] = 1 ; t446 [ 1185ULL ] = ( int32_T ) ( t1073 != 0.0 ) ; t446 [ 1186ULL ] =
( int32_T ) ( t1081 != 0.0 ) ; t446 [ 1187ULL ] = 1 ; t446 [ 1188ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 8ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 8ULL ] ) -
0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 8ULL ] >= 0.01 ) ) ; t446
[ 1189ULL ] = 1 ; t446 [ 1190ULL ] = ( int32_T ) ( t833 != 0.0 ) ; t446 [
1191ULL ] = ( int32_T ) ( X [ 43ULL ] * 100000.0 > 0.0 ) ; t446 [ 1192ULL ] =
( int32_T ) ( ( ! ( X [ 43ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 43ULL
] * 100000.0 ) - t449 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [ 1193ULL ] =
1 ; t446 [ 1194ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_729 >= 1.0 ) ) || ( (
intrm_sf_mf_729 - 1.0 ) * 461.523 +
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_R_ag_I != 0.0 ) ) ; t446 [
1195ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_x_ws_I * 0.01 != 0.0 ) ;
t446 [ 1196ULL ] = 1 ; t446 [ 1197ULL ] = 1 ; t446 [ 1198ULL ] = 1 ; t446 [
1199ULL ] = 1 ; t446 [ 1200ULL ] = ( int32_T ) ( t1052 != 0.0 ) ; t446 [
1201ULL ] = ( int32_T ) ( t1212 / 2.0 * 0.32 != 0.0 ) ; t446 [ 1202ULL ] = 1
; t446 [ 1203ULL ] = ( int32_T ) ( intrm_sf_mf_753 != 0.0 ) ; t446 [ 1204ULL
] = ( int32_T ) ( ( ! ( intrm_sf_mf_753 != 0.0 ) ) || ( 6.9 / (
intrm_sf_mf_753 == 0.0 ? 1.0E-16 : intrm_sf_mf_753 ) + 0.00017169489553429715
> 0.0 ) ) ; t446 [ 1205ULL ] = 1 ; t446 [ 1206ULL ] = 1 ; t446 [ 1207ULL ] =
( int32_T ) ( ( ! ( intrm_sf_mf_753 != 0.0 ) ) || ( ( intrm_sf_mf_753 != 0.0
) && ( ! ( 6.9 / ( intrm_sf_mf_753 == 0.0 ? 1.0E-16 : intrm_sf_mf_753 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_753
== 0.0 ? 1.0E-16 : intrm_sf_mf_753 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_753 == 0.0 ? 1.0E-16 : intrm_sf_mf_753 ) +
0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 1208ULL ] = ( int32_T ) (
( t1093 / 8.0 == t1093 / 8.0 ) && ( fabs ( t1093 / 8.0 ) != pmf_get_inf ( ) )
) ; t446 [ 1209ULL ] = ( int32_T ) ( ( ! ( t1093 / 8.0 == t1093 / 8.0 ) ) ||
( ! ( fabs ( t1093 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1093 / 8.0 >= 0.0 ) )
; t446 [ 1210ULL ] = 1 ; t446 [ 1211ULL ] = ( int32_T ) ( t1091 >= 0.0 ) ;
t446 [ 1212ULL ] = ( int32_T ) ( ( ! ( t1093 / 8.0 == t1093 / 8.0 ) ) || ( !
( fabs ( t1093 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t1093 / 8.0 == t1093 /
8.0 ) && ( fabs ( t1093 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1093 / 8.0 >=
0.0 ) ) ) || ( ! ( t1091 >= 0.0 ) ) || ( ( pmf_pow ( t1091 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1093 / 8.0 ) * 12.7 + 1.0 != 0.0
) ) ; t446 [ 1213ULL ] = 1 ; t446 [ 1214ULL ] = 1 ; t446 [ 1215ULL ] = 1 ;
t446 [ 1216ULL ] = 1 ; t446 [ 1217ULL ] = ( int32_T ) ( t1215 / 2.0 != 0.0 )
; t446 [ 1218ULL ] = 1 ; t2013 = t1215 / 2.0 ; t446 [ 1219ULL ] = ( int32_T )
( ( ! ( t1069 > t1221 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) )
|| ( t1069 != 0.0 ) ) ; t446 [ 1220ULL ] = 1 ; t446 [ 1221ULL ] = 1 ; t2013 =
t1215 / 2.0 ; t446 [ 1222ULL ] = ( int32_T ) ( ( ! ( t1069 > t1221 / 0.32 / (
t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! ( t1069 != 0.0 ) ) || (
t1215 / 2.0 != 0.0 ) ) ; t446 [ 1223ULL ] = ( int32_T ) ( - t1095 <
663.67513503334737 ) ; t446 [ 1224ULL ] = ( int32_T ) ( t1099 != 0.0 ) ; t446
[ 1225ULL ] = ( int32_T ) ( t1233 / 2.0 * 0.32 != 0.0 ) ; t446 [ 1226ULL ] =
1 ; t446 [ 1227ULL ] = ( int32_T ) ( t1098 != 0.0 ) ; t446 [ 1228ULL ] = (
int32_T ) ( ( ! ( t1098 != 0.0 ) ) || ( 6.9 / ( t1098 == 0.0 ? 1.0E-16 :
t1098 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 1229ULL ] = 1 ; t446 [
1230ULL ] = 1 ; t446 [ 1231ULL ] = ( int32_T ) ( ( ! ( t1098 != 0.0 ) ) || (
( t1098 != 0.0 ) && ( ! ( 6.9 / ( t1098 == 0.0 ? 1.0E-16 : t1098 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1098 == 0.0 ?
1.0E-16 : t1098 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1098 ==
0.0 ? 1.0E-16 : t1098 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
1232ULL ] = ( int32_T ) ( ( t1102 / 8.0 == t1102 / 8.0 ) && ( fabs ( t1102 /
8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 1233ULL ] = ( int32_T ) ( ( ! ( t1102 /
8.0 == t1102 / 8.0 ) ) || ( ! ( fabs ( t1102 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1102 / 8.0 >= 0.0 ) ) ; t446 [ 1234ULL ] = 1 ; t446 [ 1235ULL ] = (
int32_T ) ( t1101 >= 0.0 ) ; t446 [ 1236ULL ] = ( int32_T ) ( ( ! ( t1102 /
8.0 == t1102 / 8.0 ) ) || ( ! ( fabs ( t1102 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1102 / 8.0 == t1102 / 8.0 ) && ( fabs ( t1102 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1102 / 8.0 >= 0.0 ) ) ) || ( ! ( t1101 >= 0.0 ) ) || ( (
pmf_pow ( t1101 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1102 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 1237ULL ] = 1 ; t446 [ 1238ULL ] = 1 ; t446 [
1239ULL ] = 1 ; t446 [ 1240ULL ] = 1 ; t446 [ 1241ULL ] = ( int32_T ) ( t1236
/ 2.0 != 0.0 ) ; t446 [ 1242ULL ] = 1 ; t2013 = t1236 / 2.0 ; t446 [ 1243ULL
] = ( int32_T ) ( ( ! ( t1100 > t1242 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1100 != 0.0 ) ) ; t446 [ 1244ULL ] = 1 ; t446 [
1245ULL ] = 1 ; t2013 = t1236 / 2.0 ; t446 [ 1246ULL ] = ( int32_T ) ( ( ! (
t1100 > t1242 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! (
t1100 != 0.0 ) ) || ( t1236 / 2.0 != 0.0 ) ) ; t446 [ 1247ULL ] = ( int32_T )
( - t1103 < 663.67513503334737 ) ; t446 [ 1248ULL ] = 1 ; t446 [ 1249ULL ] =
1 ; t446 [ 1250ULL ] = ( int32_T ) ( X [ 292ULL ] != 0.0 ) ; t446 [ 1251ULL ]
= 1 ; t446 [ 1252ULL ] = 1 ; t446 [ 1253ULL ] = 1 ; t446 [ 1254ULL ] = 1 ;
t446 [ 1255ULL ] = 1 ; t446 [ 1256ULL ] = ( int32_T ) ( ( X [ 304ULL ] * X [
304ULL ] + 4.3455507383574884E-7 == X [ 304ULL ] * X [ 304ULL ] +
4.3455507383574884E-7 ) && ( fabs ( X [ 304ULL ] * X [ 304ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) ; t446 [ 1257ULL ] = ( int32_T
) ( ( ! ( X [ 304ULL ] * X [ 304ULL ] + 4.3455507383574884E-7 == X [ 304ULL ]
* X [ 304ULL ] + 4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 304ULL ] * X [
304ULL ] + 4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 304ULL ] *
X [ 304ULL ] + 4.3455507383574884E-7 >= 0.0 ) ) ; t446 [ 1258ULL ] = 1 ; t446
[ 1259ULL ] = 1 ; t446 [ 1260ULL ] = ( int32_T ) ( ( X [ 304ULL ] * X [
304ULL ] + 4.9597684650720062E-8 == X [ 304ULL ] * X [ 304ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 304ULL ] * X [ 304ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 1261ULL ] = ( int32_T
) ( ( ! ( X [ 304ULL ] * X [ 304ULL ] + 4.9597684650720062E-8 == X [ 304ULL ]
* X [ 304ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 304ULL ] * X [
304ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 304ULL ] *
X [ 304ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 1262ULL ] = 1 ; t446
[ 1263ULL ] = 1 ; t446 [ 1264ULL ] = ( int32_T ) ( ( X [ 304ULL ] * X [
304ULL ] + 3.5023764535063275E-8 == X [ 304ULL ] * X [ 304ULL ] +
3.5023764535063275E-8 ) && ( fabs ( X [ 304ULL ] * X [ 304ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 1265ULL ] = ( int32_T
) ( ( ! ( X [ 304ULL ] * X [ 304ULL ] + 3.5023764535063275E-8 == X [ 304ULL ]
* X [ 304ULL ] + 3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 304ULL ] * X [
304ULL ] + 3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 304ULL ] *
X [ 304ULL ] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 1266ULL ] = (
int32_T ) ( X [ 69ULL ] != 0.0 ) ; t446 [ 1267ULL ] = 1 ; t446 [ 1268ULL ] =
1 ; t446 [ 1269ULL ] = 1 ; t446 [ 1270ULL ] = 1 ; t446 [ 1271ULL ] = 1 ; t446
[ 1272ULL ] = ( int32_T ) ( ( X [ 318ULL ] * X [ 318ULL ] +
4.3455507383574884E-7 == X [ 318ULL ] * X [ 318ULL ] + 4.3455507383574884E-7
) && ( fabs ( X [ 318ULL ] * X [ 318ULL ] + 4.3455507383574884E-7 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1273ULL ] = ( int32_T ) ( ( ! ( X [ 318ULL ] * X
[ 318ULL ] + 4.3455507383574884E-7 == X [ 318ULL ] * X [ 318ULL ] +
4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 318ULL ] * X [ 318ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 318ULL ] * X [ 318ULL
] + 4.3455507383574884E-7 >= 0.0 ) ) ; t446 [ 1274ULL ] = 1 ; t446 [ 1275ULL
] = 1 ; t446 [ 1276ULL ] = ( int32_T ) ( ( X [ 318ULL ] * X [ 318ULL ] +
4.9597684650720062E-8 == X [ 318ULL ] * X [ 318ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 318ULL ] * X [ 318ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1277ULL ] = ( int32_T ) ( ( ! ( X [ 318ULL ] * X
[ 318ULL ] + 4.9597684650720062E-8 == X [ 318ULL ] * X [ 318ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 318ULL ] * X [ 318ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 318ULL ] * X [ 318ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 1278ULL ] = 1 ; t446 [ 1279ULL
] = 1 ; t446 [ 1280ULL ] = ( int32_T ) ( ( X [ 318ULL ] * X [ 318ULL ] +
3.5023764535063275E-8 == X [ 318ULL ] * X [ 318ULL ] + 3.5023764535063275E-8
) && ( fabs ( X [ 318ULL ] * X [ 318ULL ] + 3.5023764535063275E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1281ULL ] = ( int32_T ) ( ( ! ( X [ 318ULL ] * X
[ 318ULL ] + 3.5023764535063275E-8 == X [ 318ULL ] * X [ 318ULL ] +
3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 318ULL ] * X [ 318ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 318ULL ] * X [ 318ULL
] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 1282ULL ] = ( int32_T ) ( X [
44ULL ] != 0.0 ) ; t446 [ 1283ULL ] = ( int32_T ) ( X [ 331ULL ] != 0.0 ) ;
t446 [ 1284ULL ] = 1 ; t446 [ 1285ULL ] = 1 ; t446 [ 1286ULL ] = 1 ; t446 [
1287ULL ] = ( int32_T ) ( t1113 - t1109 != 0.0 ) ; t446 [ 1288ULL ] = 1 ;
t446 [ 1289ULL ] = 1 ; t446 [ 1290ULL ] = ( int32_T ) ( ( t1110 * t1110 *
9.999999999999999E-14 + fabs ( X [ 330ULL ] * t1115 * t1109 ) * 1.0E-9 ==
t1110 * t1110 * 9.999999999999999E-14 + fabs ( X [ 330ULL ] * t1115 * t1109 )
* 1.0E-9 ) && ( fabs ( t1110 * t1110 * 9.999999999999999E-14 + fabs ( X [
330ULL ] * t1115 * t1109 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 1291ULL
] = ( int32_T ) ( ( ! ( t1110 * t1110 * 9.999999999999999E-14 + fabs ( X [
330ULL ] * t1115 * t1109 ) * 1.0E-9 == t1110 * t1110 * 9.999999999999999E-14
+ fabs ( X [ 330ULL ] * t1115 * t1109 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1110 *
t1110 * 9.999999999999999E-14 + fabs ( X [ 330ULL ] * t1115 * t1109 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1110 * t1110 * 9.999999999999999E-14 +
fabs ( X [ 330ULL ] * t1115 * t1109 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 1292ULL ]
= 1 ; t446 [ 1293ULL ] = 1 ; t446 [ 1294ULL ] = ( int32_T ) ( t1109 != 0.0 )
; t446 [ 1295ULL ] = ( int32_T ) ( ( ! ( t1109 != 0.0 ) ) || ( X [ 330ULL ]
!= 0.0 ) ) ; t446 [ 1296ULL ] = 1 ; t446 [ 1297ULL ] = ( int32_T ) ( ( ! (
t1109 != 0.0 ) ) || ( ( t1109 != 0.0 ) && ( ! ( X [ 330ULL ] != 0.0 ) ) ) ||
( fabs ( t1258 / ( t1109 == 0.0 ? 1.0E-16 : t1109 ) / ( X [ 330ULL ] == 0.0 ?
1.0E-16 : X [ 330ULL ] ) ) >= 0.0 ) ) ; t446 [ 1298ULL ] = ( int32_T ) (
t1122 * 0.32 != 0.0 ) ; t446 [ 1299ULL ] = ( int32_T ) ( X [ 9ULL ] * t1109
!= 0.0 ) ; t446 [ 1300ULL ] = ( int32_T ) ( t1126 * 6.4000000000000011E-5 !=
0.0 ) ; t446 [ 1301ULL ] = ( int32_T ) ( t1128 != 0.0 ) ; t446 [ 1302ULL ] =
( int32_T ) ( ( ! ( t1128 != 0.0 ) ) || ( 6.9 / ( t1128 == 0.0 ? 1.0E-16 :
t1128 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 1303ULL ] = 1 ; t446 [
1304ULL ] = 1 ; t446 [ 1305ULL ] = ( int32_T ) ( ( ! ( t1128 != 0.0 ) ) || (
( t1128 != 0.0 ) && ( ! ( 6.9 / ( t1128 == 0.0 ? 1.0E-16 : t1128 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1128 == 0.0 ?
1.0E-16 : t1128 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1128 ==
0.0 ? 1.0E-16 : t1128 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
1306ULL ] = ( int32_T ) ( t1126 * 0.0020480000000000003 != 0.0 ) ; t446 [
1307ULL ] = 1 ; t446 [ 1308ULL ] = 1 ; t446 [ 1309ULL ] = 1 ; t446 [ 1310ULL
] = 1 ; t446 [ 1311ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t446 [
1312ULL ] = ( int32_T ) ( X [ 333ULL ] != 0.0 ) ; t446 [ 1313ULL ] = 1 ; t446
[ 1314ULL ] = 1 ; t446 [ 1315ULL ] = 1 ; t446 [ 1316ULL ] = ( int32_T ) (
t1127 - t1109 != 0.0 ) ; t446 [ 1317ULL ] = 1 ; t446 [ 1318ULL ] = 1 ; t446 [
1319ULL ] = ( int32_T ) ( ( t1124 * t1124 * 9.999999999999999E-14 + fabs ( X
[ 332ULL ] * intrm_sf_mf_835 * t1109 ) * 1.0E-9 == t1124 * t1124 *
9.999999999999999E-14 + fabs ( X [ 332ULL ] * intrm_sf_mf_835 * t1109 ) *
1.0E-9 ) && ( fabs ( t1124 * t1124 * 9.999999999999999E-14 + fabs ( X [
332ULL ] * intrm_sf_mf_835 * t1109 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446
[ 1320ULL ] = ( int32_T ) ( ( ! ( t1124 * t1124 * 9.999999999999999E-14 +
fabs ( X [ 332ULL ] * intrm_sf_mf_835 * t1109 ) * 1.0E-9 == t1124 * t1124 *
9.999999999999999E-14 + fabs ( X [ 332ULL ] * intrm_sf_mf_835 * t1109 ) *
1.0E-9 ) ) || ( ! ( fabs ( t1124 * t1124 * 9.999999999999999E-14 + fabs ( X [
332ULL ] * intrm_sf_mf_835 * t1109 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || (
t1124 * t1124 * 9.999999999999999E-14 + fabs ( X [ 332ULL ] * intrm_sf_mf_835
* t1109 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 1321ULL ] = 1 ; t446 [ 1322ULL ] = 1 ;
t446 [ 1323ULL ] = ( int32_T ) ( t1109 != 0.0 ) ; t446 [ 1324ULL ] = (
int32_T ) ( ( ! ( t1109 != 0.0 ) ) || ( X [ 332ULL ] != 0.0 ) ) ; t446 [
1325ULL ] = 1 ; t446 [ 1326ULL ] = ( int32_T ) ( ( ! ( t1109 != 0.0 ) ) || (
( t1109 != 0.0 ) && ( ! ( X [ 332ULL ] != 0.0 ) ) ) || ( fabs ( t1278 / (
t1109 == 0.0 ? 1.0E-16 : t1109 ) / ( X [ 332ULL ] == 0.0 ? 1.0E-16 : X [
332ULL ] ) ) >= 0.0 ) ) ; t446 [ 1327ULL ] = ( int32_T ) ( t1122 * 0.32 !=
0.0 ) ; t446 [ 1328ULL ] = ( int32_T ) ( t1126 * 6.4000000000000011E-5 != 0.0
) ; t446 [ 1329ULL ] = ( int32_T ) ( t1135 != 0.0 ) ; t446 [ 1330ULL ] = (
int32_T ) ( ( ! ( t1135 != 0.0 ) ) || ( 6.9 / ( t1135 == 0.0 ? 1.0E-16 :
t1135 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 1331ULL ] = 1 ; t446 [
1332ULL ] = 1 ; t446 [ 1333ULL ] = ( int32_T ) ( ( ! ( t1135 != 0.0 ) ) || (
( t1135 != 0.0 ) && ( ! ( 6.9 / ( t1135 == 0.0 ? 1.0E-16 : t1135 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1135 == 0.0 ?
1.0E-16 : t1135 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1135 ==
0.0 ? 1.0E-16 : t1135 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
1334ULL ] = ( int32_T ) ( t1126 * 0.0020480000000000003 != 0.0 ) ; t446 [
1335ULL ] = 1 ; t446 [ 1336ULL ] = 1 ; t446 [ 1337ULL ] = 1 ; t446 [ 1338ULL
] = 1 ; t446 [ 1339ULL ] = ( int32_T ) ( t1123 != 0.0 ) ; t446 [ 1340ULL ] =
( int32_T ) ( t1129 != 0.0 ) ; t446 [ 1341ULL ] = 1 ; t446 [ 1342ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 11ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 11ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 11ULL ] >= 0.01 ) ) ;
t446 [ 1343ULL ] = 1 ; t446 [ 1344ULL ] = ( int32_T ) ( t1132 != 0.0 ) ; t446
[ 1345ULL ] = ( int32_T ) ( X [ 44ULL ] * 100000.0 > 0.0 ) ; t446 [ 1346ULL ]
= ( int32_T ) ( ( ! ( X [ 44ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [
44ULL ] * 100000.0 ) - t85 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [ 1347ULL
] = 1 ; t446 [ 1348ULL ] = ( int32_T ) ( ( ! ( t1136 >= 1.0 ) ) || ( ( t1136
- 1.0 ) * 461.523 + t1134 != 0.0 ) ) ; t446 [ 1349ULL ] = ( int32_T ) ( t1137
* 0.01 != 0.0 ) ; t446 [ 1350ULL ] = 1 ; t446 [ 1351ULL ] = 1 ; t446 [
1352ULL ] = 1 ; t446 [ 1353ULL ] = 1 ; t446 [ 1354ULL ] = ( int32_T ) ( t1099
!= 0.0 ) ; t446 [ 1355ULL ] = ( int32_T ) ( t1294 / 2.0 * 0.32 != 0.0 ) ;
t446 [ 1356ULL ] = 1 ; t446 [ 1357ULL ] = ( int32_T ) ( t1067 != 0.0 ) ; t446
[ 1358ULL ] = ( int32_T ) ( ( ! ( t1067 != 0.0 ) ) || ( 6.9 / ( t1067 == 0.0
? 1.0E-16 : t1067 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 1359ULL ] = 1
; t446 [ 1360ULL ] = 1 ; t446 [ 1361ULL ] = ( int32_T ) ( ( ! ( t1067 != 0.0
) ) || ( ( t1067 != 0.0 ) && ( ! ( 6.9 / ( t1067 == 0.0 ? 1.0E-16 : t1067 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1067 == 0.0 ?
1.0E-16 : t1067 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1067 ==
0.0 ? 1.0E-16 : t1067 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
1362ULL ] = ( int32_T ) ( ( t1142 / 8.0 == t1142 / 8.0 ) && ( fabs ( t1142 /
8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 1363ULL ] = ( int32_T ) ( ( ! ( t1142 /
8.0 == t1142 / 8.0 ) ) || ( ! ( fabs ( t1142 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1142 / 8.0 >= 0.0 ) ) ; t446 [ 1364ULL ] = 1 ; t446 [ 1365ULL ] = (
int32_T ) ( t1141 >= 0.0 ) ; t446 [ 1366ULL ] = ( int32_T ) ( ( ! ( t1142 /
8.0 == t1142 / 8.0 ) ) || ( ! ( fabs ( t1142 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1142 / 8.0 == t1142 / 8.0 ) && ( fabs ( t1142 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1142 / 8.0 >= 0.0 ) ) ) || ( ! ( t1141 >= 0.0 ) ) || ( (
pmf_pow ( t1141 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1142 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 1367ULL ] = 1 ; t446 [ 1368ULL ] = 1 ; t446 [
1369ULL ] = 1 ; t446 [ 1370ULL ] = 1 ; t446 [ 1371ULL ] = ( int32_T ) ( t1297
/ 2.0 != 0.0 ) ; t446 [ 1372ULL ] = 1 ; t2013 = t1297 / 2.0 ; t446 [ 1373ULL
] = ( int32_T ) ( ( ! ( intrm_sf_mf_889 > t1303 / 0.32 / ( t2013 == 0.0 ?
1.0E-16 : t2013 ) / 30.0 ) ) || ( intrm_sf_mf_889 != 0.0 ) ) ; t446 [ 1374ULL
] = 1 ; t446 [ 1375ULL ] = 1 ; t2013 = t1297 / 2.0 ; t446 [ 1376ULL ] = (
int32_T ) ( ( ! ( intrm_sf_mf_889 > t1303 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_889 != 0.0 ) ) || ( t1297 / 2.0 !=
0.0 ) ) ; t446 [ 1377ULL ] = ( int32_T ) ( - t1143 < 663.67513503334737 ) ;
t446 [ 1378ULL ] = ( int32_T ) ( intrm_sf_mf_64 != 0.0 ) ; t446 [ 1379ULL ] =
( int32_T ) ( t1313 / 2.0 * 0.32 != 0.0 ) ; t446 [ 1380ULL ] = 1 ; t446 [
1381ULL ] = ( int32_T ) ( t894 != 0.0 ) ; t446 [ 1382ULL ] = ( int32_T ) ( (
! ( t894 != 0.0 ) ) || ( 6.9 / ( t894 == 0.0 ? 1.0E-16 : t894 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 1383ULL ] = 1 ; t446 [ 1384ULL ] =
1 ; t446 [ 1385ULL ] = ( int32_T ) ( ( ! ( t894 != 0.0 ) ) || ( ( t894 != 0.0
) && ( ! ( 6.9 / ( t894 == 0.0 ? 1.0E-16 : t894 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t894 == 0.0 ? 1.0E-16 : t894 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t894 == 0.0 ? 1.0E-16 : t894 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 1386ULL ] = ( int32_T )
( ( t1144 / 8.0 == t1144 / 8.0 ) && ( fabs ( t1144 / 8.0 ) != pmf_get_inf ( )
) ) ; t446 [ 1387ULL ] = ( int32_T ) ( ( ! ( t1144 / 8.0 == t1144 / 8.0 ) )
|| ( ! ( fabs ( t1144 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1144 / 8.0 >= 0.0
) ) ; t446 [ 1388ULL ] = 1 ; t446 [ 1389ULL ] = ( int32_T ) ( intrm_sf_mf_915
>= 0.0 ) ; t446 [ 1390ULL ] = ( int32_T ) ( ( ! ( t1144 / 8.0 == t1144 / 8.0
) ) || ( ! ( fabs ( t1144 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t1144 / 8.0
== t1144 / 8.0 ) && ( fabs ( t1144 / 8.0 ) != pmf_get_inf ( ) ) && ( ! (
t1144 / 8.0 >= 0.0 ) ) ) || ( ! ( intrm_sf_mf_915 >= 0.0 ) ) || ( ( pmf_pow (
intrm_sf_mf_915 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1144 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 1391ULL ] = 1 ; t446 [ 1392ULL ] = 1 ; t446 [
1393ULL ] = 1 ; t446 [ 1394ULL ] = 1 ; t446 [ 1395ULL ] = ( int32_T ) ( t1316
/ 2.0 != 0.0 ) ; t446 [ 1396ULL ] = 1 ; t2013 = t1316 / 2.0 ; t446 [ 1397ULL
] = ( int32_T ) ( ( ! ( t1042 > t1322 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1042 != 0.0 ) ) ; t446 [ 1398ULL ] = 1 ; t446 [
1399ULL ] = 1 ; t2013 = t1316 / 2.0 ; t446 [ 1400ULL ] = ( int32_T ) ( ( ! (
t1042 > t1322 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! (
t1042 != 0.0 ) ) || ( t1316 / 2.0 != 0.0 ) ) ; t446 [ 1401ULL ] = ( int32_T )
( - t1145 < 663.67513503334737 ) ; t446 [ 1402ULL ] = 1 ; t446 [ 1403ULL ] =
1 ; t446 [ 1404ULL ] = ( int32_T ) ( X [ 69ULL ] != 0.0 ) ; t446 [ 1405ULL ]
= 1 ; t446 [ 1406ULL ] = 1 ; t446 [ 1407ULL ] = 1 ; t446 [ 1408ULL ] = 1 ;
t446 [ 1409ULL ] = 1 ; t446 [ 1410ULL ] = ( int32_T ) ( ( X [ 318ULL ] * X [
318ULL ] + 4.3455507383574884E-7 == X [ 318ULL ] * X [ 318ULL ] +
4.3455507383574884E-7 ) && ( fabs ( X [ 318ULL ] * X [ 318ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) ; t446 [ 1411ULL ] = ( int32_T
) ( ( ! ( X [ 318ULL ] * X [ 318ULL ] + 4.3455507383574884E-7 == X [ 318ULL ]
* X [ 318ULL ] + 4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 318ULL ] * X [
318ULL ] + 4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 318ULL ] *
X [ 318ULL ] + 4.3455507383574884E-7 >= 0.0 ) ) ; t446 [ 1412ULL ] = 1 ; t446
[ 1413ULL ] = 1 ; t446 [ 1414ULL ] = ( int32_T ) ( ( X [ 318ULL ] * X [
318ULL ] + 4.9597684650720062E-8 == X [ 318ULL ] * X [ 318ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 318ULL ] * X [ 318ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 1415ULL ] = ( int32_T
) ( ( ! ( X [ 318ULL ] * X [ 318ULL ] + 4.9597684650720062E-8 == X [ 318ULL ]
* X [ 318ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 318ULL ] * X [
318ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 318ULL ] *
X [ 318ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 1416ULL ] = 1 ; t446
[ 1417ULL ] = 1 ; t446 [ 1418ULL ] = ( int32_T ) ( ( X [ 318ULL ] * X [
318ULL ] + 3.5023764535063275E-8 == X [ 318ULL ] * X [ 318ULL ] +
3.5023764535063275E-8 ) && ( fabs ( X [ 318ULL ] * X [ 318ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 1419ULL ] = ( int32_T
) ( ( ! ( X [ 318ULL ] * X [ 318ULL ] + 3.5023764535063275E-8 == X [ 318ULL ]
* X [ 318ULL ] + 3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 318ULL ] * X [
318ULL ] + 3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 318ULL ] *
X [ 318ULL ] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 1420ULL ] = (
int32_T ) ( X [ 116ULL ] != 0.0 ) ; t446 [ 1421ULL ] = 1 ; t446 [ 1422ULL ] =
1 ; t446 [ 1423ULL ] = 1 ; t446 [ 1424ULL ] = 1 ; t446 [ 1425ULL ] = 1 ; t446
[ 1426ULL ] = ( int32_T ) ( ( X [ 138ULL ] * X [ 138ULL ] +
4.3455507383574884E-7 == X [ 138ULL ] * X [ 138ULL ] + 4.3455507383574884E-7
) && ( fabs ( X [ 138ULL ] * X [ 138ULL ] + 4.3455507383574884E-7 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1427ULL ] = ( int32_T ) ( ( ! ( X [ 138ULL ] * X
[ 138ULL ] + 4.3455507383574884E-7 == X [ 138ULL ] * X [ 138ULL ] +
4.3455507383574884E-7 ) ) || ( ! ( fabs ( X [ 138ULL ] * X [ 138ULL ] +
4.3455507383574884E-7 ) != pmf_get_inf ( ) ) ) || ( X [ 138ULL ] * X [ 138ULL
] + 4.3455507383574884E-7 >= 0.0 ) ) ; t446 [ 1428ULL ] = 1 ; t446 [ 1429ULL
] = 1 ; t446 [ 1430ULL ] = ( int32_T ) ( ( X [ 138ULL ] * X [ 138ULL ] +
4.9597684650720062E-8 == X [ 138ULL ] * X [ 138ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 138ULL ] * X [ 138ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1431ULL ] = ( int32_T ) ( ( ! ( X [ 138ULL ] * X
[ 138ULL ] + 4.9597684650720062E-8 == X [ 138ULL ] * X [ 138ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 138ULL ] * X [ 138ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 138ULL ] * X [ 138ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 1432ULL ] = 1 ; t446 [ 1433ULL
] = 1 ; t446 [ 1434ULL ] = ( int32_T ) ( ( X [ 138ULL ] * X [ 138ULL ] +
3.5023764535063275E-8 == X [ 138ULL ] * X [ 138ULL ] + 3.5023764535063275E-8
) && ( fabs ( X [ 138ULL ] * X [ 138ULL ] + 3.5023764535063275E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1435ULL ] = ( int32_T ) ( ( ! ( X [ 138ULL ] * X
[ 138ULL ] + 3.5023764535063275E-8 == X [ 138ULL ] * X [ 138ULL ] +
3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 138ULL ] * X [ 138ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 138ULL ] * X [ 138ULL
] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 1436ULL ] = ( int32_T ) ( X [
48ULL ] != 0.0 ) ; t446 [ 1437ULL ] = ( int32_T ) ( X [ 352ULL ] != 0.0 ) ;
t446 [ 1438ULL ] = 1 ; t446 [ 1439ULL ] = 1 ; t446 [ 1440ULL ] = 1 ; t446 [
1441ULL ] = ( int32_T ) ( t1150 - t1147 != 0.0 ) ; t446 [ 1442ULL ] = 1 ;
t446 [ 1443ULL ] = 1 ; t446 [ 1444ULL ] = ( int32_T ) ( ( t1148 * t1148 *
9.999999999999999E-14 + fabs ( X [ 351ULL ] * t842 * t1147 ) * 1.0E-9 ==
t1148 * t1148 * 9.999999999999999E-14 + fabs ( X [ 351ULL ] * t842 * t1147 )
* 1.0E-9 ) && ( fabs ( t1148 * t1148 * 9.999999999999999E-14 + fabs ( X [
351ULL ] * t842 * t1147 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 1445ULL
] = ( int32_T ) ( ( ! ( t1148 * t1148 * 9.999999999999999E-14 + fabs ( X [
351ULL ] * t842 * t1147 ) * 1.0E-9 == t1148 * t1148 * 9.999999999999999E-14 +
fabs ( X [ 351ULL ] * t842 * t1147 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1148 *
t1148 * 9.999999999999999E-14 + fabs ( X [ 351ULL ] * t842 * t1147 ) * 1.0E-9
) != pmf_get_inf ( ) ) ) || ( t1148 * t1148 * 9.999999999999999E-14 + fabs (
X [ 351ULL ] * t842 * t1147 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 1446ULL ] = 1 ;
t446 [ 1447ULL ] = 1 ; t446 [ 1448ULL ] = ( int32_T ) ( t1147 != 0.0 ) ; t446
[ 1449ULL ] = ( int32_T ) ( ( ! ( t1147 != 0.0 ) ) || ( X [ 351ULL ] != 0.0 )
) ; t446 [ 1450ULL ] = 1 ; t446 [ 1451ULL ] = ( int32_T ) ( ( ! ( t1147 !=
0.0 ) ) || ( ( t1147 != 0.0 ) && ( ! ( X [ 351ULL ] != 0.0 ) ) ) || ( fabs (
t1338 / ( t1147 == 0.0 ? 1.0E-16 : t1147 ) / ( X [ 351ULL ] == 0.0 ? 1.0E-16
: X [ 351ULL ] ) ) >= 0.0 ) ) ; t446 [ 1452ULL ] = ( int32_T ) ( t1157 *
0.0019634954084936209 != 0.0 ) ; t446 [ 1453ULL ] = ( int32_T ) ( X [ 45ULL ]
* t1147 != 0.0 ) ; t446 [ 1454ULL ] = ( int32_T ) ( t1163 *
9.8174770424681068E-6 != 0.0 ) ; t446 [ 1455ULL ] = ( int32_T ) ( t1165 !=
0.0 ) ; t446 [ 1456ULL ] = ( int32_T ) ( ( ! ( t1165 != 0.0 ) ) || ( 6.9 / (
t1165 == 0.0 ? 1.0E-16 : t1165 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [
1457ULL ] = 1 ; t446 [ 1458ULL ] = 1 ; t446 [ 1459ULL ] = ( int32_T ) ( ( ! (
t1165 != 0.0 ) ) || ( ( t1165 != 0.0 ) && ( ! ( 6.9 / ( t1165 == 0.0 ?
1.0E-16 : t1165 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1165 == 0.0 ? 1.0E-16 : t1165 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1165 == 0.0 ? 1.0E-16 : t1165 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t446 [ 1460ULL ] = ( int32_T ) ( t1163 * 3.855314219175531E-7 !=
0.0 ) ; t446 [ 1461ULL ] = 1 ; t446 [ 1462ULL ] = 1 ; t446 [ 1463ULL ] = 1 ;
t446 [ 1464ULL ] = 1 ; t446 [ 1465ULL ] = ( int32_T ) ( X [ 48ULL ] != 0.0 )
; t446 [ 1466ULL ] = ( int32_T ) ( X [ 355ULL ] != 0.0 ) ; t446 [ 1467ULL ] =
1 ; t446 [ 1468ULL ] = 1 ; t446 [ 1469ULL ] = 1 ; t446 [ 1470ULL ] = (
int32_T ) ( t1164 - t1147 != 0.0 ) ; t446 [ 1471ULL ] = 1 ; t446 [ 1472ULL ]
= 1 ; t446 [ 1473ULL ] = ( int32_T ) ( ( t1159 * t1159 *
9.999999999999999E-14 + fabs ( X [ 354ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) * 1.0E-9
== t1159 * t1159 * 9.999999999999999E-14 + fabs ( X [ 354ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) * 1.0E-9
) && ( fabs ( t1159 * t1159 * 9.999999999999999E-14 + fabs ( X [ 354ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) * 1.0E-9
) != pmf_get_inf ( ) ) ) ; t446 [ 1474ULL ] = ( int32_T ) ( ( ! ( t1159 *
t1159 * 9.999999999999999E-14 + fabs ( X [ 354ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) * 1.0E-9
== t1159 * t1159 * 9.999999999999999E-14 + fabs ( X [ 354ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) * 1.0E-9
) ) || ( ! ( fabs ( t1159 * t1159 * 9.999999999999999E-14 + fabs ( X [ 354ULL
] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1159 * t1159 * 9.999999999999999E-14 +
fabs ( X [ 354ULL ] *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1147 ) * 1.0E-9
>= 0.0 ) ) ; t446 [ 1475ULL ] = 1 ; t446 [ 1476ULL ] = 1 ; t446 [ 1477ULL ] =
( int32_T ) ( t1147 != 0.0 ) ; t446 [ 1478ULL ] = ( int32_T ) ( ( ! ( t1147
!= 0.0 ) ) || ( X [ 354ULL ] != 0.0 ) ) ; t446 [ 1479ULL ] = 1 ; t446 [
1480ULL ] = ( int32_T ) ( ( ! ( t1147 != 0.0 ) ) || ( ( t1147 != 0.0 ) && ( !
( X [ 354ULL ] != 0.0 ) ) ) || ( fabs ( t1358 / ( t1147 == 0.0 ? 1.0E-16 :
t1147 ) / ( X [ 354ULL ] == 0.0 ? 1.0E-16 : X [ 354ULL ] ) ) >= 0.0 ) ) ;
t446 [ 1481ULL ] = ( int32_T ) ( t1163 * 9.8174770424681068E-6 != 0.0 ) ;
t446 [ 1482ULL ] = ( int32_T ) ( t1157 * 0.0019634954084936209 != 0.0 ) ;
t446 [ 1483ULL ] = ( int32_T ) ( t1170 != 0.0 ) ; t446 [ 1484ULL ] = (
int32_T ) ( ( ! ( t1170 != 0.0 ) ) || ( 6.9 / ( t1170 == 0.0 ? 1.0E-16 :
t1170 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1485ULL ] = 1 ; t446 [
1486ULL ] = 1 ; t446 [ 1487ULL ] = ( int32_T ) ( ( ! ( t1170 != 0.0 ) ) || (
( t1170 != 0.0 ) && ( ! ( 6.9 / ( t1170 == 0.0 ? 1.0E-16 : t1170 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1170 == 0.0 ?
1.0E-16 : t1170 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1170 ==
0.0 ? 1.0E-16 : t1170 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [
1488ULL ] = ( int32_T ) ( t1163 * 3.855314219175531E-7 != 0.0 ) ; t446 [
1489ULL ] = 1 ; t446 [ 1490ULL ] = 1 ; t446 [ 1491ULL ] = 1 ; t446 [ 1492ULL
] = 1 ; t446 [ 1493ULL ] = ( int32_T ) ( t1158 != 0.0 ) ; t446 [ 1494ULL ] =
( int32_T ) ( t1166 != 0.0 ) ; t446 [ 1495ULL ] = 1 ; t446 [ 1496ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 47ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 47ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 47ULL ] >= 0.01 ) ) ;
t446 [ 1497ULL ] = 1 ; t446 [ 1498ULL ] = ( int32_T ) ( t1168 != 0.0 ) ; t446
[ 1499ULL ] = ( int32_T ) ( X [ 48ULL ] * 100000.0 > 0.0 ) ; t446 [ 1500ULL ]
= ( int32_T ) ( ( ! ( X [ 48ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [
48ULL ] * 100000.0 ) - t71 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [ 1501ULL
] = 1 ; t446 [ 1502ULL ] = ( int32_T ) ( ( ! ( t1171 >= 1.0 ) ) || ( ( t1171
- 1.0 ) * 461.523 + t1169 != 0.0 ) ) ; t446 [ 1503ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_x_ws_I * 0.01 != 0.0 ) ;
t446 [ 1504ULL ] = 1 ; t446 [ 1505ULL ] = 1 ; t446 [ 1506ULL ] = 1 ; t446 [
1507ULL ] = 1 ; t446 [ 1508ULL ] = ( int32_T ) ( t1177 != 0.0 ) ; t446 [
1509ULL ] = ( int32_T ) ( t1376 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t446
[ 1510ULL ] = 1 ; t446 [ 1511ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos != 0.0 ) ;
t446 [ 1512ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos != 0.0 ) ) ||
( 6.9 / ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ==
0.0 ? 1.0E-16 :
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) +
2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1513ULL ] = 1 ; t446 [ 1514ULL ] = 1
; t446 [ 1515ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos != 0.0 ) ) ||
( ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos != 0.0 )
&& ( ! ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_mdot_avg_pos ) +
2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [ 1516ULL ] = ( int32_T ) (
( t1183 / 8.0 == t1183 / 8.0 ) && ( fabs ( t1183 / 8.0 ) != pmf_get_inf ( ) )
) ; t446 [ 1517ULL ] = ( int32_T ) ( ( ! ( t1183 / 8.0 == t1183 / 8.0 ) ) ||
( ! ( fabs ( t1183 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1183 / 8.0 >= 0.0 ) )
; t446 [ 1518ULL ] = 1 ; t446 [ 1519ULL ] = ( int32_T ) ( t1179 >= 0.0 ) ;
t446 [ 1520ULL ] = ( int32_T ) ( ( ! ( t1183 / 8.0 == t1183 / 8.0 ) ) || ( !
( fabs ( t1183 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t1183 / 8.0 == t1183 /
8.0 ) && ( fabs ( t1183 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1183 / 8.0 >=
0.0 ) ) ) || ( ! ( t1179 >= 0.0 ) ) || ( ( pmf_pow ( t1179 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1183 / 8.0 ) * 12.7 + 1.0 != 0.0
) ) ; t446 [ 1521ULL ] = 1 ; t446 [ 1522ULL ] = 1 ; t446 [ 1523ULL ] = 1 ;
t446 [ 1524ULL ] = 1 ; t446 [ 1525ULL ] = ( int32_T ) ( t1379 / 2.0 != 0.0 )
; t446 [ 1526ULL ] = 1 ; t2013 = t1379 / 2.0 ; t446 [ 1527ULL ] = ( int32_T )
( ( ! ( t1175 > t1385 / 0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1175 != 0.0 ) ) ; t446 [ 1528ULL ] = 1 ; t446 [
1529ULL ] = 1 ; t2013 = t1379 / 2.0 ; t446 [ 1530ULL ] = ( int32_T ) ( ( ! (
t1175 > t1385 / 0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) /
30.0 ) ) || ( ! ( t1175 != 0.0 ) ) || ( t1379 / 2.0 != 0.0 ) ) ; t446 [
1531ULL ] = ( int32_T ) ( - t1184 < 663.67513503334737 ) ; t446 [ 1532ULL ] =
( int32_T ) ( t1186 != 0.0 ) ; t446 [ 1533ULL ] = ( int32_T ) ( t1397 / 2.0 *
0.0019634954084936209 != 0.0 ) ; t446 [ 1534ULL ] = 1 ; t446 [ 1535ULL ] = (
int32_T ) ( intrm_sf_mf_1052 != 0.0 ) ; t446 [ 1536ULL ] = ( int32_T ) ( ( !
( intrm_sf_mf_1052 != 0.0 ) ) || ( 6.9 / ( intrm_sf_mf_1052 == 0.0 ? 1.0E-16
: intrm_sf_mf_1052 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1537ULL ] = 1
; t446 [ 1538ULL ] = 1 ; t446 [ 1539ULL ] = ( int32_T ) ( ( ! (
intrm_sf_mf_1052 != 0.0 ) ) || ( ( intrm_sf_mf_1052 != 0.0 ) && ( ! ( 6.9 / (
intrm_sf_mf_1052 == 0.0 ? 1.0E-16 : intrm_sf_mf_1052 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( intrm_sf_mf_1052
== 0.0 ? 1.0E-16 : intrm_sf_mf_1052 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( intrm_sf_mf_1052 == 0.0 ? 1.0E-16 : intrm_sf_mf_1052 ) +
2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [ 1540ULL ] = ( int32_T ) (
( t1189 / 8.0 == t1189 / 8.0 ) && ( fabs ( t1189 / 8.0 ) != pmf_get_inf ( ) )
) ; t446 [ 1541ULL ] = ( int32_T ) ( ( ! ( t1189 / 8.0 == t1189 / 8.0 ) ) ||
( ! ( fabs ( t1189 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1189 / 8.0 >= 0.0 ) )
; t446 [ 1542ULL ] = 1 ; t446 [ 1543ULL ] = ( int32_T ) ( t1188 >= 0.0 ) ;
t446 [ 1544ULL ] = ( int32_T ) ( ( ! ( t1189 / 8.0 == t1189 / 8.0 ) ) || ( !
( fabs ( t1189 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t1189 / 8.0 == t1189 /
8.0 ) && ( fabs ( t1189 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1189 / 8.0 >=
0.0 ) ) ) || ( ! ( t1188 >= 0.0 ) ) || ( ( pmf_pow ( t1188 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1189 / 8.0 ) * 12.7 + 1.0 != 0.0
) ) ; t446 [ 1545ULL ] = 1 ; t446 [ 1546ULL ] = 1 ; t446 [ 1547ULL ] = 1 ;
t446 [ 1548ULL ] = 1 ; t446 [ 1549ULL ] = ( int32_T ) ( t1400 / 2.0 != 0.0 )
; t446 [ 1550ULL ] = 1 ; t2013 = t1400 / 2.0 ; t446 [ 1551ULL ] = ( int32_T )
( ( ! ( t1187 > t1406 / 0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1187 != 0.0 ) ) ; t446 [ 1552ULL ] = 1 ; t446 [
1553ULL ] = 1 ; t2013 = t1400 / 2.0 ; t446 [ 1554ULL ] = ( int32_T ) ( ( ! (
t1187 > t1406 / 0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) /
30.0 ) ) || ( ! ( t1187 != 0.0 ) ) || ( t1400 / 2.0 != 0.0 ) ) ; t446 [
1555ULL ] = ( int32_T ) ( - t1193 < 663.67513503334737 ) ; t446 [ 1556ULL ] =
1 ; t446 [ 1557ULL ] = 1 ; t446 [ 1558ULL ] = ( int32_T ) ( X [ 35ULL ] !=
0.0 ) ; t446 [ 1559ULL ] = 1 ; t446 [ 1560ULL ] = 1 ; t446 [ 1561ULL ] = 1 ;
t446 [ 1562ULL ] = 1 ; t446 [ 1563ULL ] = 1 ; t446 [ 1564ULL ] = ( int32_T )
( ( X [ 281ULL ] * X [ 281ULL ] + 3.0116308772356542E-13 == X [ 281ULL ] * X
[ 281ULL ] + 3.0116308772356542E-13 ) && ( fabs ( X [ 281ULL ] * X [ 281ULL ]
+ 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1565ULL ] = (
int32_T ) ( ( ! ( X [ 281ULL ] * X [ 281ULL ] + 3.0116308772356542E-13 == X [
281ULL ] * X [ 281ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
281ULL ] * X [ 281ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 281ULL ] * X [ 281ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t446 [
1566ULL ] = 1 ; t446 [ 1567ULL ] = 1 ; t446 [ 1568ULL ] = ( int32_T ) ( ( X [
281ULL ] * X [ 281ULL ] + 5.8094731428156895E-13 == X [ 281ULL ] * X [ 281ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 281ULL ] * X [ 281ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1569ULL ] = (
int32_T ) ( ( ! ( X [ 281ULL ] * X [ 281ULL ] + 5.8094731428156895E-13 == X [
281ULL ] * X [ 281ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
281ULL ] * X [ 281ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 281ULL ] * X [ 281ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t446 [
1570ULL ] = 1 ; t446 [ 1571ULL ] = 1 ; t446 [ 1572ULL ] = ( int32_T ) ( ( X [
281ULL ] * X [ 281ULL ] + 4.1024015709531055E-13 == X [ 281ULL ] * X [ 281ULL
] + 4.1024015709531055E-13 ) && ( fabs ( X [ 281ULL ] * X [ 281ULL ] +
4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1573ULL ] = (
int32_T ) ( ( ! ( X [ 281ULL ] * X [ 281ULL ] + 4.1024015709531055E-13 == X [
281ULL ] * X [ 281ULL ] + 4.1024015709531055E-13 ) ) || ( ! ( fabs ( X [
281ULL ] * X [ 281ULL ] + 4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 281ULL ] * X [ 281ULL ] + 4.1024015709531055E-13 >= 0.0 ) ) ; t446 [
1574ULL ] = ( int32_T ) ( X [ 341ULL ] != 0.0 ) ; t446 [ 1575ULL ] = 1 ; t446
[ 1576ULL ] = 1 ; t446 [ 1577ULL ] = 1 ; t446 [ 1578ULL ] = 1 ; t446 [
1579ULL ] = 1 ; t446 [ 1580ULL ] = ( int32_T ) ( ( X [ 353ULL ] * X [ 353ULL
] + 3.0116308772356542E-13 == X [ 353ULL ] * X [ 353ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 353ULL ] * X [ 353ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1581ULL ] = (
int32_T ) ( ( ! ( X [ 353ULL ] * X [ 353ULL ] + 3.0116308772356542E-13 == X [
353ULL ] * X [ 353ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
353ULL ] * X [ 353ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 353ULL ] * X [ 353ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t446 [
1582ULL ] = 1 ; t446 [ 1583ULL ] = 1 ; t446 [ 1584ULL ] = ( int32_T ) ( ( X [
353ULL ] * X [ 353ULL ] + 5.8094731428156895E-13 == X [ 353ULL ] * X [ 353ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 353ULL ] * X [ 353ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1585ULL ] = (
int32_T ) ( ( ! ( X [ 353ULL ] * X [ 353ULL ] + 5.8094731428156895E-13 == X [
353ULL ] * X [ 353ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
353ULL ] * X [ 353ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 353ULL ] * X [ 353ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t446 [
1586ULL ] = 1 ; t446 [ 1587ULL ] = 1 ; t446 [ 1588ULL ] = ( int32_T ) ( ( X [
353ULL ] * X [ 353ULL ] + 4.1024015709531055E-13 == X [ 353ULL ] * X [ 353ULL
] + 4.1024015709531055E-13 ) && ( fabs ( X [ 353ULL ] * X [ 353ULL ] +
4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1589ULL ] = (
int32_T ) ( ( ! ( X [ 353ULL ] * X [ 353ULL ] + 4.1024015709531055E-13 == X [
353ULL ] * X [ 353ULL ] + 4.1024015709531055E-13 ) ) || ( ! ( fabs ( X [
353ULL ] * X [ 353ULL ] + 4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 353ULL ] * X [ 353ULL ] + 4.1024015709531055E-13 >= 0.0 ) ) ; t446 [
1590ULL ] = 1 ; t446 [ 1591ULL ] = 1 ; t446 [ 1592ULL ] = 1 ; t446 [ 1593ULL
] = 1 ; t446 [ 1594ULL ] = 1 ; t446 [ 1595ULL ] = ( int32_T ) ( ( X [ 376ULL
] * X [ 376ULL ] + 2.7104677895120892E-12 == X [ 376ULL ] * X [ 376ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1596ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 == X [
376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [
1597ULL ] = 1 ; t446 [ 1598ULL ] = 1 ; t446 [ 1599ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 == X [ 376ULL ] * X [ 376ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1600ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 == X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [
1601ULL ] = 1 ; t446 [ 1602ULL ] = 1 ; t446 [ 1603ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 == X [ 376ULL ] * X [ 376ULL
] + 3.6921614138577959E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1604ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 == X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [
1605ULL ] = ( int32_T ) ( t1197 * 293.15 != 0.0 ) ; t446 [ 1606ULL ] = 1 ;
t446 [ 1607ULL ] = ( int32_T ) ( ( ! ( 1.0 - X [ 381ULL ] >= - 0.1 ) ) || ( (
( 1.0 - X [ 381ULL ] ) - 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [
381ULL ] >= 0.01 ) ) ; t446 [ 1608ULL ] = 1 ; t446 [ 1609ULL ] = ( int32_T )
( X [ 50ULL ] != 0.0 ) ; t446 [ 1610ULL ] = ( int32_T ) ( X [ 390ULL ] != 0.0
) ; t446 [ 1611ULL ] = 1 ; t446 [ 1612ULL ] = 1 ; t446 [ 1613ULL ] = 1 ; t446
[ 1614ULL ] = ( int32_T ) ( t1206 - t1201 != 0.0 ) ; t446 [ 1615ULL ] = 1 ;
t446 [ 1616ULL ] = 1 ; t446 [ 1617ULL ] = ( int32_T ) ( ( t1203 * t1203 *
9.999999999999999E-14 + fabs ( X [ 389ULL ] * t1207 * t1201 ) * 1.0E-9 ==
t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [ 389ULL ] * t1207 * t1201 )
* 1.0E-9 ) && ( fabs ( t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [
389ULL ] * t1207 * t1201 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 1618ULL
] = ( int32_T ) ( ( ! ( t1203 * t1203 * 9.999999999999999E-14 + fabs ( X [
389ULL ] * t1207 * t1201 ) * 1.0E-9 == t1203 * t1203 * 9.999999999999999E-14
+ fabs ( X [ 389ULL ] * t1207 * t1201 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1203 *
t1203 * 9.999999999999999E-14 + fabs ( X [ 389ULL ] * t1207 * t1201 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1203 * t1203 * 9.999999999999999E-14 +
fabs ( X [ 389ULL ] * t1207 * t1201 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 1619ULL ]
= 1 ; t446 [ 1620ULL ] = 1 ; t446 [ 1621ULL ] = ( int32_T ) ( t1201 != 0.0 )
; t446 [ 1622ULL ] = ( int32_T ) ( ( ! ( t1201 != 0.0 ) ) || ( X [ 389ULL ]
!= 0.0 ) ) ; t446 [ 1623ULL ] = 1 ; t446 [ 1624ULL ] = ( int32_T ) ( ( ! (
t1201 != 0.0 ) ) || ( ( t1201 != 0.0 ) && ( ! ( X [ 389ULL ] != 0.0 ) ) ) ||
( fabs ( t1422 / ( t1201 == 0.0 ? 1.0E-16 : t1201 ) / ( X [ 389ULL ] == 0.0 ?
1.0E-16 : X [ 389ULL ] ) ) >= 0.0 ) ) ; t446 [ 1625ULL ] = ( int32_T ) (
t1211 * 0.0019634954084936209 != 0.0 ) ; t446 [ 1626ULL ] = ( int32_T ) ( X [
49ULL ] * t1201 != 0.0 ) ; t446 [ 1627ULL ] = ( int32_T ) ( t1217 *
9.8174770424681068E-6 != 0.0 ) ; t446 [ 1628ULL ] = ( int32_T ) ( t1219 !=
0.0 ) ; t446 [ 1629ULL ] = ( int32_T ) ( ( ! ( t1219 != 0.0 ) ) || ( 6.9 / (
t1219 == 0.0 ? 1.0E-16 : t1219 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [
1630ULL ] = 1 ; t446 [ 1631ULL ] = 1 ; t446 [ 1632ULL ] = ( int32_T ) ( ( ! (
t1219 != 0.0 ) ) || ( ( t1219 != 0.0 ) && ( ! ( 6.9 / ( t1219 == 0.0 ?
1.0E-16 : t1219 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1219 == 0.0 ? 1.0E-16 : t1219 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1219 == 0.0 ? 1.0E-16 : t1219 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t446 [ 1633ULL ] = ( int32_T ) ( t1217 * 3.855314219175531E-7 !=
0.0 ) ; t446 [ 1634ULL ] = 1 ; t446 [ 1635ULL ] = 1 ; t446 [ 1636ULL ] = 1 ;
t446 [ 1637ULL ] = 1 ; t446 [ 1638ULL ] = ( int32_T ) ( X [ 50ULL ] != 0.0 )
; t446 [ 1639ULL ] = ( int32_T ) ( X [ 394ULL ] != 0.0 ) ; t446 [ 1640ULL ] =
1 ; t446 [ 1641ULL ] = 1 ; t446 [ 1642ULL ] = 1 ; t446 [ 1643ULL ] = (
int32_T ) ( t1218 - t1201 != 0.0 ) ; t446 [ 1644ULL ] = 1 ; t446 [ 1645ULL ]
= 1 ; t446 [ 1646ULL ] = ( int32_T ) ( (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 ) && (
fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1647ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 ==
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 ) ) ||
( ! ( fabs ( Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_delta_vel_BI *
9.999999999999999E-14 + fabs ( X [ 393ULL ] * t1195 * t1201 ) * 1.0E-9 >= 0.0
) ) ; t446 [ 1648ULL ] = 1 ; t446 [ 1649ULL ] = 1 ; t446 [ 1650ULL ] = (
int32_T ) ( t1201 != 0.0 ) ; t446 [ 1651ULL ] = ( int32_T ) ( ( ! ( t1201 !=
0.0 ) ) || ( X [ 393ULL ] != 0.0 ) ) ; t446 [ 1652ULL ] = 1 ; t446 [ 1653ULL
] = ( int32_T ) ( ( ! ( t1201 != 0.0 ) ) || ( ( t1201 != 0.0 ) && ( ! ( X [
393ULL ] != 0.0 ) ) ) || ( fabs ( t1442 / ( t1201 == 0.0 ? 1.0E-16 : t1201 )
/ ( X [ 393ULL ] == 0.0 ? 1.0E-16 : X [ 393ULL ] ) ) >= 0.0 ) ) ; t446 [
1654ULL ] = ( int32_T ) ( t1211 * 0.0019634954084936209 != 0.0 ) ; t446 [
1655ULL ] = ( int32_T ) ( t1217 * 9.8174770424681068E-6 != 0.0 ) ; t446 [
1656ULL ] = ( int32_T ) ( t1226 != 0.0 ) ; t446 [ 1657ULL ] = ( int32_T ) ( (
! ( t1226 != 0.0 ) ) || ( 6.9 / ( t1226 == 0.0 ? 1.0E-16 : t1226 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1658ULL ] = 1 ; t446 [ 1659ULL ] = 1
; t446 [ 1660ULL ] = ( int32_T ) ( ( ! ( t1226 != 0.0 ) ) || ( ( t1226 != 0.0
) && ( ! ( 6.9 / ( t1226 == 0.0 ? 1.0E-16 : t1226 ) + 2.8767404433520813E-5 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1226 == 0.0 ? 1.0E-16 : t1226 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1226 == 0.0 ? 1.0E-16 : t1226
) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [ 1661ULL ] = ( int32_T
) ( t1217 * 3.855314219175531E-7 != 0.0 ) ; t446 [ 1662ULL ] = 1 ; t446 [
1663ULL ] = 1 ; t446 [ 1664ULL ] = 1 ; t446 [ 1665ULL ] = 1 ; t446 [ 1666ULL
] = ( int32_T ) ( t1213 != 0.0 ) ; t446 [ 1667ULL ] = ( int32_T ) ( t1220 !=
0.0 ) ; t446 [ 1668ULL ] = 1 ; t446 [ 1669ULL ] = ( int32_T ) ( ( ! ( 1.0 - X
[ 51ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 51ULL ] ) - 0.01 ) / 0.01 <
663.67513503334737 ) || ( 1.0 - X [ 51ULL ] >= 0.01 ) ) ; t446 [ 1670ULL ] =
1 ; t446 [ 1671ULL ] = ( int32_T ) ( t1224 != 0.0 ) ; t446 [ 1672ULL ] = (
int32_T ) ( X [ 50ULL ] * 100000.0 > 0.0 ) ; t446 [ 1673ULL ] = ( int32_T ) (
( ! ( X [ 50ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [ 50ULL ] * 100000.0
) - t450 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [ 1674ULL ] = 1 ; t446 [
1675ULL ] = ( int32_T ) ( ( ! ( t1227 >= 1.0 ) ) || ( ( t1227 - 1.0 ) *
461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_R_ag_I != 0.0 ) )
; t446 [ 1676ULL ] = ( int32_T ) ( t1228 * 0.01 != 0.0 ) ; t446 [ 1677ULL ] =
1 ; t446 [ 1678ULL ] = 1 ; t446 [ 1679ULL ] = 1 ; t446 [ 1680ULL ] = 1 ; t446
[ 1681ULL ] = ( int32_T ) ( t1231 != 0.0 ) ; t446 [ 1682ULL ] = ( int32_T ) (
t1460 / 2.0 * 0.0019634954084936209 != 0.0 ) ; t446 [ 1683ULL ] = 1 ; t446 [
1684ULL ] = ( int32_T ) ( t1210 != 0.0 ) ; t446 [ 1685ULL ] = ( int32_T ) ( (
! ( t1210 != 0.0 ) ) || ( 6.9 / ( t1210 == 0.0 ? 1.0E-16 : t1210 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1686ULL ] = 1 ; t446 [ 1687ULL ] = 1
; t446 [ 1688ULL ] = ( int32_T ) ( ( ! ( t1210 != 0.0 ) ) || ( ( t1210 != 0.0
) && ( ! ( 6.9 / ( t1210 == 0.0 ? 1.0E-16 : t1210 ) + 2.8767404433520813E-5 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1210 == 0.0 ? 1.0E-16 : t1210 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1210 == 0.0 ? 1.0E-16 : t1210
) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [ 1689ULL ] = ( int32_T
) ( ( t1237 / 8.0 == t1237 / 8.0 ) && ( fabs ( t1237 / 8.0 ) != pmf_get_inf (
) ) ) ; t446 [ 1690ULL ] = ( int32_T ) ( ( ! ( t1237 / 8.0 == t1237 / 8.0 ) )
|| ( ! ( fabs ( t1237 / 8.0 ) != pmf_get_inf ( ) ) ) || ( t1237 / 8.0 >= 0.0
) ) ; t446 [ 1691ULL ] = 1 ; t446 [ 1692ULL ] = ( int32_T ) ( t1232 >= 0.0 )
; t446 [ 1693ULL ] = ( int32_T ) ( ( ! ( t1237 / 8.0 == t1237 / 8.0 ) ) || (
! ( fabs ( t1237 / 8.0 ) != pmf_get_inf ( ) ) ) || ( ( t1237 / 8.0 == t1237 /
8.0 ) && ( fabs ( t1237 / 8.0 ) != pmf_get_inf ( ) ) && ( ! ( t1237 / 8.0 >=
0.0 ) ) ) || ( ! ( t1232 >= 0.0 ) ) || ( ( pmf_pow ( t1232 ,
0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1237 / 8.0 ) * 12.7 + 1.0 != 0.0
) ) ; t446 [ 1694ULL ] = 1 ; t446 [ 1695ULL ] = 1 ; t446 [ 1696ULL ] = 1 ;
t446 [ 1697ULL ] = 1 ; t446 [ 1698ULL ] = ( int32_T ) ( t1461 / 2.0 != 0.0 )
; t446 [ 1699ULL ] = 1 ; t2013 = t1461 / 2.0 ; t446 [ 1700ULL ] = ( int32_T )
( ( ! ( intrm_sf_mf_1176 > t1469 / 0.0019634954084936209 / ( t2013 == 0.0 ?
1.0E-16 : t2013 ) / 30.0 ) ) || ( intrm_sf_mf_1176 != 0.0 ) ) ; t446 [
1701ULL ] = 1 ; t446 [ 1702ULL ] = 1 ; t2013 = t1461 / 2.0 ; t446 [ 1703ULL ]
= ( int32_T ) ( ( ! ( intrm_sf_mf_1176 > t1469 / 0.0019634954084936209 / (
t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! ( intrm_sf_mf_1176 != 0.0
) ) || ( t1461 / 2.0 != 0.0 ) ) ; t446 [ 1704ULL ] = ( int32_T ) ( - t1238 <
663.67513503334737 ) ; t446 [ 1705ULL ] = ( int32_T ) ( t1241 != 0.0 ) ; t446
[ 1706ULL ] = ( int32_T ) ( t1481 / 2.0 * 0.0019634954084936209 != 0.0 ) ;
t446 [ 1707ULL ] = 1 ; t446 [ 1708ULL ] = ( int32_T ) ( t1209 != 0.0 ) ; t446
[ 1709ULL ] = ( int32_T ) ( ( ! ( t1209 != 0.0 ) ) || ( 6.9 / ( t1209 == 0.0
? 1.0E-16 : t1209 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 1710ULL ] = 1
; t446 [ 1711ULL ] = 1 ; t446 [ 1712ULL ] = ( int32_T ) ( ( ! ( t1209 != 0.0
) ) || ( ( t1209 != 0.0 ) && ( ! ( 6.9 / ( t1209 == 0.0 ? 1.0E-16 : t1209 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1209 == 0.0 ?
1.0E-16 : t1209 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1209 ==
0.0 ? 1.0E-16 : t1209 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [
1713ULL ] = ( int32_T ) ( ( t1245 / 8.0 == t1245 / 8.0 ) && ( fabs ( t1245 /
8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 1714ULL ] = ( int32_T ) ( ( ! ( t1245 /
8.0 == t1245 / 8.0 ) ) || ( ! ( fabs ( t1245 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1245 / 8.0 >= 0.0 ) ) ; t446 [ 1715ULL ] = 1 ; t446 [ 1716ULL ] = (
int32_T ) ( t1244 >= 0.0 ) ; t446 [ 1717ULL ] = ( int32_T ) ( ( ! ( t1245 /
8.0 == t1245 / 8.0 ) ) || ( ! ( fabs ( t1245 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1245 / 8.0 == t1245 / 8.0 ) && ( fabs ( t1245 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1245 / 8.0 >= 0.0 ) ) ) || ( ! ( t1244 >= 0.0 ) ) || ( (
pmf_pow ( t1244 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1245 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 1718ULL ] = 1 ; t446 [ 1719ULL ] = 1 ; t446 [
1720ULL ] = 1 ; t446 [ 1721ULL ] = 1 ; t446 [ 1722ULL ] = ( int32_T ) ( t1484
/ 2.0 != 0.0 ) ; t446 [ 1723ULL ] = 1 ; t2013 = t1484 / 2.0 ; t446 [ 1724ULL
] = ( int32_T ) ( ( ! ( t1240 > t1489 / 0.0019634954084936209 / ( t2013 ==
0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( t1240 != 0.0 ) ) ; t446 [ 1725ULL ] =
1 ; t446 [ 1726ULL ] = 1 ; t2013 = t1484 / 2.0 ; t446 [ 1727ULL ] = ( int32_T
) ( ( ! ( t1240 > t1489 / 0.0019634954084936209 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( ! ( t1240 != 0.0 ) ) || ( t1484 / 2.0 != 0.0 ) ) ;
t446 [ 1728ULL ] = ( int32_T ) ( - intrm_sf_mf_1208 < 663.67513503334737 ) ;
t446 [ 1729ULL ] = 1 ; t446 [ 1730ULL ] = 1 ; t446 [ 1731ULL ] = ( int32_T )
( X [ 366ULL ] != 0.0 ) ; t446 [ 1732ULL ] = 1 ; t446 [ 1733ULL ] = 1 ; t446
[ 1734ULL ] = 1 ; t446 [ 1735ULL ] = 1 ; t446 [ 1736ULL ] = 1 ; t446 [
1737ULL ] = ( int32_T ) ( ( X [ 388ULL ] * X [ 388ULL ] +
3.0116308772356542E-13 == X [ 388ULL ] * X [ 388ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 388ULL ] * X [ 388ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1738ULL ] = (
int32_T ) ( ( ! ( X [ 388ULL ] * X [ 388ULL ] + 3.0116308772356542E-13 == X [
388ULL ] * X [ 388ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
388ULL ] * X [ 388ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 388ULL ] * X [ 388ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t446 [
1739ULL ] = 1 ; t446 [ 1740ULL ] = 1 ; t446 [ 1741ULL ] = ( int32_T ) ( ( X [
388ULL ] * X [ 388ULL ] + 5.8094731428156895E-13 == X [ 388ULL ] * X [ 388ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 388ULL ] * X [ 388ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1742ULL ] = (
int32_T ) ( ( ! ( X [ 388ULL ] * X [ 388ULL ] + 5.8094731428156895E-13 == X [
388ULL ] * X [ 388ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
388ULL ] * X [ 388ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 388ULL ] * X [ 388ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t446 [
1743ULL ] = 1 ; t446 [ 1744ULL ] = 1 ; t446 [ 1745ULL ] = ( int32_T ) ( ( X [
388ULL ] * X [ 388ULL ] + 4.1024015709531055E-13 == X [ 388ULL ] * X [ 388ULL
] + 4.1024015709531055E-13 ) && ( fabs ( X [ 388ULL ] * X [ 388ULL ] +
4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1746ULL ] = (
int32_T ) ( ( ! ( X [ 388ULL ] * X [ 388ULL ] + 4.1024015709531055E-13 == X [
388ULL ] * X [ 388ULL ] + 4.1024015709531055E-13 ) ) || ( ! ( fabs ( X [
388ULL ] * X [ 388ULL ] + 4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 388ULL ] * X [ 388ULL ] + 4.1024015709531055E-13 >= 0.0 ) ) ; t446 [
1747ULL ] = ( int32_T ) ( t1194 != 0.0 ) ; t446 [ 1748ULL ] = 1 ; t446 [
1749ULL ] = 1 ; t446 [ 1750ULL ] = 1 ; t446 [ 1751ULL ] = 1 ; t446 [ 1752ULL
] = 1 ; t446 [ 1753ULL ] = ( int32_T ) ( ( X [ 376ULL ] * X [ 376ULL ] +
3.0116308772356542E-13 == X [ 376ULL ] * X [ 376ULL ] +
3.0116308772356542E-13 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1754ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 3.0116308772356542E-13 == X [
376ULL ] * X [ 376ULL ] + 3.0116308772356542E-13 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 3.0116308772356542E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 3.0116308772356542E-13 >= 0.0 ) ) ; t446 [
1755ULL ] = 1 ; t446 [ 1756ULL ] = 1 ; t446 [ 1757ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 5.8094731428156895E-13 == X [ 376ULL ] * X [ 376ULL
] + 5.8094731428156895E-13 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1758ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 5.8094731428156895E-13 == X [
376ULL ] * X [ 376ULL ] + 5.8094731428156895E-13 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 5.8094731428156895E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 5.8094731428156895E-13 >= 0.0 ) ) ; t446 [
1759ULL ] = 1 ; t446 [ 1760ULL ] = 1 ; t446 [ 1761ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 4.1024015709531055E-13 == X [ 376ULL ] * X [ 376ULL
] + 4.1024015709531055E-13 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ; t446 [ 1762ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 4.1024015709531055E-13 == X [
376ULL ] * X [ 376ULL ] + 4.1024015709531055E-13 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 4.1024015709531055E-13 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 4.1024015709531055E-13 >= 0.0 ) ) ; t446 [
1763ULL ] = ( int32_T ) ( X [ 406ULL ] * t1250 != 0.0 ) ; t446 [ 1764ULL ] =
( int32_T ) ( t1194 != 0.0 ) ; t446 [ 1765ULL ] = ( int32_T ) ( X [ 406ULL ]
!= 0.0 ) ; t446 [ 1766ULL ] = ( int32_T ) ( X [ 406ULL ] != 0.0 ) ; t446 [
1767ULL ] = 1 ; t446 [ 1768ULL ] = ( int32_T ) ( ( ! ( X [ 376ULL ] > 0.0 ) )
|| ( intrm_sf_mf_1259 != 0.0 ) ) ; t446 [ 1769ULL ] = 1 ; t446 [ 1770ULL ] =
1 ; t446 [ 1771ULL ] = 1 ; t446 [ 1772ULL ] = ( int32_T ) ( ( ! ( X [ 376ULL
] > 0.0 ) ) || ( ! ( intrm_sf_mf_1259 != 0.0 ) ) || ( t1251 != 0.0 ) ) ; t446
[ 1773ULL ] = 1 ; t446 [ 1774ULL ] = ( int32_T ) ( ( ! ( X [ 376ULL ] < 0.0 )
) || ( X [ 376ULL ] > 0.0 ) || ( intrm_sf_mf_1259 != 0.0 ) ) ; t446 [ 1775ULL
] = 1 ; t446 [ 1776ULL ] = 1 ; t446 [ 1777ULL ] = 1 ; t446 [ 1778ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] < 0.0 ) ) || ( ! ( intrm_sf_mf_1259 != 0.0 ) )
|| ( X [ 376ULL ] > 0.0 ) || ( t1251 != 0.0 ) ) ; t446 [ 1779ULL ] = 1 ; t446
[ 1780ULL ] = 1 ; t446 [ 1781ULL ] = ( int32_T ) ( t1256 != 0.0 ) ; t446 [
1782ULL ] = 1 ; t446 [ 1783ULL ] = 1 ; t446 [ 1784ULL ] = 1 ; t446 [ 1785ULL
] = 1 ; t446 [ 1786ULL ] = 1 ; t446 [ 1787ULL ] = 1 ; t446 [ 1788ULL ] = 1 ;
t446 [ 1789ULL ] = 1 ; t446 [ 1790ULL ] = 1 ; t446 [ 1791ULL ] = 1 ; t446 [
1792ULL ] = ( int32_T ) ( intrm_sf_mf_1278 - t1250 != 0.0 ) ; t446 [ 1793ULL
] = 1 ; t446 [ 1794ULL ] = 1 ; t446 [ 1795ULL ] = ( int32_T ) ( t1250 != 0.0
) ; t446 [ 1796ULL ] = ( int32_T ) ( ( ! ( t1250 != 0.0 ) ) || ( X [ 406ULL ]
!= 0.0 ) ) ; t446 [ 1797ULL ] = 1 ; t446 [ 1798ULL ] = ( int32_T ) ( ( ! (
t1250 != 0.0 ) ) || ( ( t1250 != 0.0 ) && ( ! ( X [ 406ULL ] != 0.0 ) ) ) ||
( fabs ( t1512 / ( t1250 == 0.0 ? 1.0E-16 : t1250 ) / ( X [ 406ULL ] == 0.0 ?
1.0E-16 : X [ 406ULL ] ) ) >= 0.0 ) ) ; t446 [ 1799ULL ] = ( int32_T ) ( ( !
( X [ 376ULL ] >= 0.0 ) ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 != 0.0 ) ) ;
t446 [ 1800ULL ] = ( int32_T ) ( ( X [ 376ULL ] >= 0.0 ) || (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 != 0.0 ) ) ;
t446 [ 1801ULL ] = ( int32_T ) ( t1194 != 0.0 ) ; t446 [ 1802ULL ] = 1 ; t446
[ 1803ULL ] = 1 ; t446 [ 1804ULL ] = 1 ; t446 [ 1805ULL ] = 1 ; t446 [
1806ULL ] = 1 ; t446 [ 1807ULL ] = ( int32_T ) ( ( X [ 376ULL ] * X [ 376ULL
] + 2.7104677895120892E-12 == X [ 376ULL ] * X [ 376ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1808ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 == X [
376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [
1809ULL ] = 1 ; t446 [ 1810ULL ] = 1 ; t446 [ 1811ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 == X [ 376ULL ] * X [ 376ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1812ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 == X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [
1813ULL ] = 1 ; t446 [ 1814ULL ] = 1 ; t446 [ 1815ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 == X [ 376ULL ] * X [ 376ULL
] + 3.6921614138577959E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1816ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 == X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [
1817ULL ] = 1 ; t446 [ 1818ULL ] = 1 ; t446 [ 1819ULL ] = 1 ; t446 [ 1820ULL
] = 1 ; t446 [ 1821ULL ] = 1 ; t446 [ 1822ULL ] = ( int32_T ) ( ( X [ 376ULL
] * X [ 376ULL ] + 2.7104677895120892E-12 == X [ 376ULL ] * X [ 376ULL ] +
2.7104677895120892E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1823ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 == X [
376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 2.7104677895120892E-12 >= 0.0 ) ) ; t446 [
1824ULL ] = 1 ; t446 [ 1825ULL ] = 1 ; t446 [ 1826ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 == X [ 376ULL ] * X [ 376ULL
] + 5.2285258285341208E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1827ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 == X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 5.2285258285341208E-12 >= 0.0 ) ) ; t446 [
1828ULL ] = 1 ; t446 [ 1829ULL ] = 1 ; t446 [ 1830ULL ] = ( int32_T ) ( ( X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 == X [ 376ULL ] * X [ 376ULL
] + 3.6921614138577959E-12 ) && ( fabs ( X [ 376ULL ] * X [ 376ULL ] +
3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ; t446 [ 1831ULL ] = (
int32_T ) ( ( ! ( X [ 376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 == X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 ) ) || ( ! ( fabs ( X [
376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 ) != pmf_get_inf ( ) ) ) ||
( X [ 376ULL ] * X [ 376ULL ] + 3.6921614138577959E-12 >= 0.0 ) ) ; t446 [
1832ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 != 0.0 ) ;
t446 [ 1833ULL ] = 1 ; t446 [ 1834ULL ] = ( int32_T ) ( ( ! (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 != 0.0 ) ) ||
( fabs ( t1251 * 2.0 / (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 == 0.0 ?
1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val6 ) )
>= 0.0 ) ) ; t446 [ 1835ULL ] = ( int32_T ) ( X [ 53ULL ] != 0.0 ) ; t446 [
1836ULL ] = ( int32_T ) ( X [ 414ULL ] != 0.0 ) ; t446 [ 1837ULL ] = 1 ; t446
[ 1838ULL ] = 1 ; t446 [ 1839ULL ] = 1 ; t446 [ 1840ULL ] = ( int32_T ) (
t1264 - t1257 != 0.0 ) ; t446 [ 1841ULL ] = 1 ; t446 [ 1842ULL ] = 1 ; t446 [
1843ULL ] = ( int32_T ) ( ( t1259 * t1259 * 9.999999999999999E-14 + fabs ( X
[ 413ULL ] * t854 * t1257 ) * 1.0E-9 == t1259 * t1259 * 9.999999999999999E-14
+ fabs ( X [ 413ULL ] * t854 * t1257 ) * 1.0E-9 ) && ( fabs ( t1259 * t1259 *
9.999999999999999E-14 + fabs ( X [ 413ULL ] * t854 * t1257 ) * 1.0E-9 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1844ULL ] = ( int32_T ) ( ( ! ( t1259 * t1259 *
9.999999999999999E-14 + fabs ( X [ 413ULL ] * t854 * t1257 ) * 1.0E-9 ==
t1259 * t1259 * 9.999999999999999E-14 + fabs ( X [ 413ULL ] * t854 * t1257 )
* 1.0E-9 ) ) || ( ! ( fabs ( t1259 * t1259 * 9.999999999999999E-14 + fabs ( X
[ 413ULL ] * t854 * t1257 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1259 *
t1259 * 9.999999999999999E-14 + fabs ( X [ 413ULL ] * t854 * t1257 ) * 1.0E-9
>= 0.0 ) ) ; t446 [ 1845ULL ] = 1 ; t446 [ 1846ULL ] = 1 ; t446 [ 1847ULL ] =
( int32_T ) ( t1257 != 0.0 ) ; t446 [ 1848ULL ] = ( int32_T ) ( ( ! ( t1257
!= 0.0 ) ) || ( X [ 413ULL ] != 0.0 ) ) ; t446 [ 1849ULL ] = 1 ; t446 [
1850ULL ] = ( int32_T ) ( ( ! ( t1257 != 0.0 ) ) || ( ( t1257 != 0.0 ) && ( !
( X [ 413ULL ] != 0.0 ) ) ) || ( fabs ( t1520 / ( t1257 == 0.0 ? 1.0E-16 :
t1257 ) / ( X [ 413ULL ] == 0.0 ? 1.0E-16 : X [ 413ULL ] ) ) >= 0.0 ) ) ;
t446 [ 1851ULL ] = ( int32_T ) ( t1269 * 0.32 != 0.0 ) ; t446 [ 1852ULL ] = (
int32_T ) ( X [ 12ULL ] * t1257 != 0.0 ) ; t446 [ 1853ULL ] = ( int32_T ) (
t1276 * 6.4000000000000011E-5 != 0.0 ) ; t446 [ 1854ULL ] = ( int32_T ) (
t1279 != 0.0 ) ; t446 [ 1855ULL ] = ( int32_T ) ( ( ! ( t1279 != 0.0 ) ) || (
6.9 / ( t1279 == 0.0 ? 1.0E-16 : t1279 ) + 0.00017169489553429715 > 0.0 ) ) ;
t446 [ 1856ULL ] = 1 ; t446 [ 1857ULL ] = 1 ; t446 [ 1858ULL ] = ( int32_T )
( ( ! ( t1279 != 0.0 ) ) || ( ( t1279 != 0.0 ) && ( ! ( 6.9 / ( t1279 == 0.0
? 1.0E-16 : t1279 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1279 == 0.0 ? 1.0E-16 : t1279 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1279 == 0.0 ? 1.0E-16 : t1279 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t446 [ 1859ULL ] = ( int32_T ) ( t1276 * 0.0020480000000000003 !=
0.0 ) ; t446 [ 1860ULL ] = 1 ; t446 [ 1861ULL ] = 1 ; t446 [ 1862ULL ] = 1 ;
t446 [ 1863ULL ] = 1 ; t446 [ 1864ULL ] = ( int32_T ) ( X [ 53ULL ] != 0.0 )
; t446 [ 1865ULL ] = ( int32_T ) ( X [ 417ULL ] != 0.0 ) ; t446 [ 1866ULL ] =
1 ; t446 [ 1867ULL ] = 1 ; t446 [ 1868ULL ] = 1 ; t446 [ 1869ULL ] = (
int32_T ) ( t1277 - t1257 != 0.0 ) ; t446 [ 1870ULL ] = 1 ; t446 [ 1871ULL ]
= 1 ; t446 [ 1872ULL ] = ( int32_T ) ( ( t1271 * t1271 *
9.999999999999999E-14 + fabs ( X [ 416ULL ] * intrm_sf_mf_1297 * t1257 ) *
1.0E-9 == t1271 * t1271 * 9.999999999999999E-14 + fabs ( X [ 416ULL ] *
intrm_sf_mf_1297 * t1257 ) * 1.0E-9 ) && ( fabs ( t1271 * t1271 *
9.999999999999999E-14 + fabs ( X [ 416ULL ] * intrm_sf_mf_1297 * t1257 ) *
1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 1873ULL ] = ( int32_T ) ( ( ! (
t1271 * t1271 * 9.999999999999999E-14 + fabs ( X [ 416ULL ] *
intrm_sf_mf_1297 * t1257 ) * 1.0E-9 == t1271 * t1271 * 9.999999999999999E-14
+ fabs ( X [ 416ULL ] * intrm_sf_mf_1297 * t1257 ) * 1.0E-9 ) ) || ( ! ( fabs
( t1271 * t1271 * 9.999999999999999E-14 + fabs ( X [ 416ULL ] *
intrm_sf_mf_1297 * t1257 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || ( t1271 *
t1271 * 9.999999999999999E-14 + fabs ( X [ 416ULL ] * intrm_sf_mf_1297 *
t1257 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 1874ULL ] = 1 ; t446 [ 1875ULL ] = 1 ;
t446 [ 1876ULL ] = ( int32_T ) ( t1257 != 0.0 ) ; t446 [ 1877ULL ] = (
int32_T ) ( ( ! ( t1257 != 0.0 ) ) || ( X [ 416ULL ] != 0.0 ) ) ; t446 [
1878ULL ] = 1 ; t446 [ 1879ULL ] = ( int32_T ) ( ( ! ( t1257 != 0.0 ) ) || (
( t1257 != 0.0 ) && ( ! ( X [ 416ULL ] != 0.0 ) ) ) || ( fabs ( t1541 / (
t1257 == 0.0 ? 1.0E-16 : t1257 ) / ( X [ 416ULL ] == 0.0 ? 1.0E-16 : X [
416ULL ] ) ) >= 0.0 ) ) ; t446 [ 1880ULL ] = ( int32_T ) ( t1269 * 0.32 !=
0.0 ) ; t446 [ 1881ULL ] = ( int32_T ) ( t1276 * 6.4000000000000011E-5 != 0.0
) ; t446 [ 1882ULL ] = ( int32_T ) ( t1288 != 0.0 ) ; t446 [ 1883ULL ] = (
int32_T ) ( ( ! ( t1288 != 0.0 ) ) || ( 6.9 / ( t1288 == 0.0 ? 1.0E-16 :
t1288 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 1884ULL ] = 1 ; t446 [
1885ULL ] = 1 ; t446 [ 1886ULL ] = ( int32_T ) ( ( ! ( t1288 != 0.0 ) ) || (
( t1288 != 0.0 ) && ( ! ( 6.9 / ( t1288 == 0.0 ? 1.0E-16 : t1288 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1288 == 0.0 ?
1.0E-16 : t1288 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1288 ==
0.0 ? 1.0E-16 : t1288 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
1887ULL ] = ( int32_T ) ( t1276 * 0.0020480000000000003 != 0.0 ) ; t446 [
1888ULL ] = 1 ; t446 [ 1889ULL ] = 1 ; t446 [ 1890ULL ] = 1 ; t446 [ 1891ULL
] = 1 ; t446 [ 1892ULL ] = ( int32_T ) ( t1270 != 0.0 ) ; t446 [ 1893ULL ] =
( int32_T ) ( t1281 != 0.0 ) ; t446 [ 1894ULL ] = 1 ; t446 [ 1895ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 14ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 14ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 14ULL ] >= 0.01 ) ) ;
t446 [ 1896ULL ] = 1 ; t446 [ 1897ULL ] = ( int32_T ) ( t1285 != 0.0 ) ; t446
[ 1898ULL ] = ( int32_T ) ( X [ 53ULL ] * 100000.0 > 0.0 ) ; t446 [ 1899ULL ]
= ( int32_T ) ( ( ! ( X [ 53ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [
53ULL ] * 100000.0 ) - t447 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [
1900ULL ] = 1 ; t446 [ 1901ULL ] = ( int32_T ) ( ( ! ( t1289 >= 1.0 ) ) || (
( t1289 - 1.0 ) * 461.523 + t1286 != 0.0 ) ) ; t446 [ 1902ULL ] = ( int32_T )
( t1290 * 0.01 != 0.0 ) ; t446 [ 1903ULL ] = 1 ; t446 [ 1904ULL ] = 1 ; t446
[ 1905ULL ] = 1 ; t446 [ 1906ULL ] = 1 ; t446 [ 1907ULL ] = ( int32_T ) (
t1186 != 0.0 ) ; t446 [ 1908ULL ] = ( int32_T ) ( t1557 / 2.0 * 0.32 != 0.0 )
; t446 [ 1909ULL ] = 1 ; t446 [ 1910ULL ] = ( int32_T ) ( intrm_sf_mf_1352 !=
0.0 ) ; t446 [ 1911ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1352 != 0.0 ) ) ||
( 6.9 / ( intrm_sf_mf_1352 == 0.0 ? 1.0E-16 : intrm_sf_mf_1352 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 1912ULL ] = 1 ; t446 [ 1913ULL ] =
1 ; t446 [ 1914ULL ] = ( int32_T ) ( ( ! ( intrm_sf_mf_1352 != 0.0 ) ) || ( (
intrm_sf_mf_1352 != 0.0 ) && ( ! ( 6.9 / ( intrm_sf_mf_1352 == 0.0 ? 1.0E-16
: intrm_sf_mf_1352 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 (
6.9 / ( intrm_sf_mf_1352 == 0.0 ? 1.0E-16 : intrm_sf_mf_1352 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( intrm_sf_mf_1352 == 0.0 ?
1.0E-16 : intrm_sf_mf_1352 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ;
t446 [ 1915ULL ] = ( int32_T ) ( ( t1293 / 8.0 == t1293 / 8.0 ) && ( fabs (
t1293 / 8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 1916ULL ] = ( int32_T ) ( ( ! (
t1293 / 8.0 == t1293 / 8.0 ) ) || ( ! ( fabs ( t1293 / 8.0 ) != pmf_get_inf (
) ) ) || ( t1293 / 8.0 >= 0.0 ) ) ; t446 [ 1917ULL ] = 1 ; t446 [ 1918ULL ] =
( int32_T ) ( t1292 >= 0.0 ) ; t446 [ 1919ULL ] = ( int32_T ) ( ( ! ( t1293 /
8.0 == t1293 / 8.0 ) ) || ( ! ( fabs ( t1293 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1293 / 8.0 == t1293 / 8.0 ) && ( fabs ( t1293 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1293 / 8.0 >= 0.0 ) ) ) || ( ! ( t1292 >= 0.0 ) ) || ( (
pmf_pow ( t1292 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1293 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 1920ULL ] = 1 ; t446 [ 1921ULL ] = 1 ; t446 [
1922ULL ] = 1 ; t446 [ 1923ULL ] = 1 ; t446 [ 1924ULL ] = ( int32_T ) ( t1560
/ 2.0 != 0.0 ) ; t446 [ 1925ULL ] = 1 ; t2013 = t1560 / 2.0 ; t446 [ 1926ULL
] = ( int32_T ) ( ( ! ( t1268 > t1566 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1268 != 0.0 ) ) ; t446 [ 1927ULL ] = 1 ; t446 [
1928ULL ] = 1 ; t2013 = t1560 / 2.0 ; t446 [ 1929ULL ] = ( int32_T ) ( ( ! (
t1268 > t1566 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! (
t1268 != 0.0 ) ) || ( t1560 / 2.0 != 0.0 ) ) ; t446 [ 1930ULL ] = ( int32_T )
( - t1295 < 663.67513503334737 ) ; t446 [ 1931ULL ] = ( int32_T ) ( t1298 !=
0.0 ) ; t446 [ 1932ULL ] = ( int32_T ) ( t1577 / 2.0 * 0.32 != 0.0 ) ; t446 [
1933ULL ] = 1 ; t446 [ 1934ULL ] = ( int32_T ) ( t1296 != 0.0 ) ; t446 [
1935ULL ] = ( int32_T ) ( ( ! ( t1296 != 0.0 ) ) || ( 6.9 / ( t1296 == 0.0 ?
1.0E-16 : t1296 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 1936ULL ] = 1 ;
t446 [ 1937ULL ] = 1 ; t446 [ 1938ULL ] = ( int32_T ) ( ( ! ( t1296 != 0.0 )
) || ( ( t1296 != 0.0 ) && ( ! ( 6.9 / ( t1296 == 0.0 ? 1.0E-16 : t1296 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1296 == 0.0 ?
1.0E-16 : t1296 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1296 ==
0.0 ? 1.0E-16 : t1296 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
1939ULL ] = ( int32_T ) ( ( t1301 / 8.0 == t1301 / 8.0 ) && ( fabs ( t1301 /
8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 1940ULL ] = ( int32_T ) ( ( ! ( t1301 /
8.0 == t1301 / 8.0 ) ) || ( ! ( fabs ( t1301 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1301 / 8.0 >= 0.0 ) ) ; t446 [ 1941ULL ] = 1 ; t446 [ 1942ULL ] = (
int32_T ) ( t1300 >= 0.0 ) ; t446 [ 1943ULL ] = ( int32_T ) ( ( ! ( t1301 /
8.0 == t1301 / 8.0 ) ) || ( ! ( fabs ( t1301 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1301 / 8.0 == t1301 / 8.0 ) && ( fabs ( t1301 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1301 / 8.0 >= 0.0 ) ) ) || ( ! ( t1300 >= 0.0 ) ) || ( (
pmf_pow ( t1300 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1301 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 1944ULL ] = 1 ; t446 [ 1945ULL ] = 1 ; t446 [
1946ULL ] = 1 ; t446 [ 1947ULL ] = 1 ; t446 [ 1948ULL ] = ( int32_T ) ( t1581
/ 2.0 != 0.0 ) ; t446 [ 1949ULL ] = 1 ; t2013 = t1581 / 2.0 ; t446 [ 1950ULL
] = ( int32_T ) ( ( ! ( t1299 > t1586 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1299 != 0.0 ) ) ; t446 [ 1951ULL ] = 1 ; t446 [
1952ULL ] = 1 ; t2013 = t1581 / 2.0 ; t446 [ 1953ULL ] = ( int32_T ) ( ( ! (
t1299 > t1586 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! (
t1299 != 0.0 ) ) || ( t1581 / 2.0 != 0.0 ) ) ; t446 [ 1954ULL ] = ( int32_T )
( - intrm_sf_mf_1383 < 663.67513503334737 ) ; t446 [ 1955ULL ] = 1 ; t446 [
1956ULL ] = 1 ; t446 [ 1957ULL ] = ( int32_T ) ( X [ 341ULL ] != 0.0 ) ; t446
[ 1958ULL ] = 1 ; t446 [ 1959ULL ] = 1 ; t446 [ 1960ULL ] = 1 ; t446 [
1961ULL ] = 1 ; t446 [ 1962ULL ] = 1 ; t446 [ 1963ULL ] = ( int32_T ) ( ( X [
353ULL ] * X [ 353ULL ] + 2.5711439722933289E-8 == X [ 353ULL ] * X [ 353ULL
] + 2.5711439722933289E-8 ) && ( fabs ( X [ 353ULL ] * X [ 353ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 1964ULL ] = ( int32_T
) ( ( ! ( X [ 353ULL ] * X [ 353ULL ] + 2.5711439722933289E-8 == X [ 353ULL ]
* X [ 353ULL ] + 2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 353ULL ] * X [
353ULL ] + 2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 353ULL ] *
X [ 353ULL ] + 2.5711439722933289E-8 >= 0.0 ) ) ; t446 [ 1965ULL ] = 1 ; t446
[ 1966ULL ] = 1 ; t446 [ 1967ULL ] = ( int32_T ) ( ( X [ 353ULL ] * X [
353ULL ] + 4.9597684650720062E-8 == X [ 353ULL ] * X [ 353ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 353ULL ] * X [ 353ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 1968ULL ] = ( int32_T
) ( ( ! ( X [ 353ULL ] * X [ 353ULL ] + 4.9597684650720062E-8 == X [ 353ULL ]
* X [ 353ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 353ULL ] * X [
353ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 353ULL ] *
X [ 353ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 1969ULL ] = 1 ; t446
[ 1970ULL ] = 1 ; t446 [ 1971ULL ] = ( int32_T ) ( ( X [ 353ULL ] * X [
353ULL ] + 3.5023764535063275E-8 == X [ 353ULL ] * X [ 353ULL ] +
3.5023764535063275E-8 ) && ( fabs ( X [ 353ULL ] * X [ 353ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 1972ULL ] = ( int32_T
) ( ( ! ( X [ 353ULL ] * X [ 353ULL ] + 3.5023764535063275E-8 == X [ 353ULL ]
* X [ 353ULL ] + 3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 353ULL ] * X [
353ULL ] + 3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 353ULL ] *
X [ 353ULL ] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 1973ULL ] = (
int32_T ) ( X [ 73ULL ] != 0.0 ) ; t446 [ 1974ULL ] = 1 ; t446 [ 1975ULL ] =
1 ; t446 [ 1976ULL ] = 1 ; t446 [ 1977ULL ] = 1 ; t446 [ 1978ULL ] = 1 ; t446
[ 1979ULL ] = ( int32_T ) ( ( X [ 415ULL ] * X [ 415ULL ] +
2.5711439722933289E-8 == X [ 415ULL ] * X [ 415ULL ] + 2.5711439722933289E-8
) && ( fabs ( X [ 415ULL ] * X [ 415ULL ] + 2.5711439722933289E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1980ULL ] = ( int32_T ) ( ( ! ( X [ 415ULL ] * X
[ 415ULL ] + 2.5711439722933289E-8 == X [ 415ULL ] * X [ 415ULL ] +
2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 415ULL ] * X [ 415ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 415ULL ] * X [ 415ULL
] + 2.5711439722933289E-8 >= 0.0 ) ) ; t446 [ 1981ULL ] = 1 ; t446 [ 1982ULL
] = 1 ; t446 [ 1983ULL ] = ( int32_T ) ( ( X [ 415ULL ] * X [ 415ULL ] +
4.9597684650720062E-8 == X [ 415ULL ] * X [ 415ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 415ULL ] * X [ 415ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1984ULL ] = ( int32_T ) ( ( ! ( X [ 415ULL ] * X
[ 415ULL ] + 4.9597684650720062E-8 == X [ 415ULL ] * X [ 415ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 415ULL ] * X [ 415ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 415ULL ] * X [ 415ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 1985ULL ] = 1 ; t446 [ 1986ULL
] = 1 ; t446 [ 1987ULL ] = ( int32_T ) ( ( X [ 415ULL ] * X [ 415ULL ] +
3.5023764535063275E-8 == X [ 415ULL ] * X [ 415ULL ] + 3.5023764535063275E-8
) && ( fabs ( X [ 415ULL ] * X [ 415ULL ] + 3.5023764535063275E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 1988ULL ] = ( int32_T ) ( ( ! ( X [ 415ULL ] * X
[ 415ULL ] + 3.5023764535063275E-8 == X [ 415ULL ] * X [ 415ULL ] +
3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 415ULL ] * X [ 415ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 415ULL ] * X [ 415ULL
] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 1989ULL ] = ( int32_T ) ( X [
54ULL ] != 0.0 ) ; t446 [ 1990ULL ] = ( int32_T ) ( X [ 428ULL ] != 0.0 ) ;
t446 [ 1991ULL ] = 1 ; t446 [ 1992ULL ] = 1 ; t446 [ 1993ULL ] = 1 ; t446 [
1994ULL ] = ( int32_T ) ( t1310 - t1307 != 0.0 ) ; t446 [ 1995ULL ] = 1 ;
t446 [ 1996ULL ] = 1 ; t446 [ 1997ULL ] = ( int32_T ) ( ( t1308 * t1308 *
9.999999999999999E-14 + fabs ( X [ 427ULL ] * t863 * t1307 ) * 1.0E-9 ==
t1308 * t1308 * 9.999999999999999E-14 + fabs ( X [ 427ULL ] * t863 * t1307 )
* 1.0E-9 ) && ( fabs ( t1308 * t1308 * 9.999999999999999E-14 + fabs ( X [
427ULL ] * t863 * t1307 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 1998ULL
] = ( int32_T ) ( ( ! ( t1308 * t1308 * 9.999999999999999E-14 + fabs ( X [
427ULL ] * t863 * t1307 ) * 1.0E-9 == t1308 * t1308 * 9.999999999999999E-14 +
fabs ( X [ 427ULL ] * t863 * t1307 ) * 1.0E-9 ) ) || ( ! ( fabs ( t1308 *
t1308 * 9.999999999999999E-14 + fabs ( X [ 427ULL ] * t863 * t1307 ) * 1.0E-9
) != pmf_get_inf ( ) ) ) || ( t1308 * t1308 * 9.999999999999999E-14 + fabs (
X [ 427ULL ] * t863 * t1307 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 1999ULL ] = 1 ;
t446 [ 2000ULL ] = 1 ; t446 [ 2001ULL ] = ( int32_T ) ( t1307 != 0.0 ) ; t446
[ 2002ULL ] = ( int32_T ) ( ( ! ( t1307 != 0.0 ) ) || ( X [ 427ULL ] != 0.0 )
) ; t446 [ 2003ULL ] = 1 ; t446 [ 2004ULL ] = ( int32_T ) ( ( ! ( t1307 !=
0.0 ) ) || ( ( t1307 != 0.0 ) && ( ! ( X [ 427ULL ] != 0.0 ) ) ) || ( fabs (
t1602 / ( t1307 == 0.0 ? 1.0E-16 : t1307 ) / ( X [ 427ULL ] == 0.0 ? 1.0E-16
: X [ 427ULL ] ) ) >= 0.0 ) ) ; t446 [ 2005ULL ] = ( int32_T ) ( t1317 * 0.32
!= 0.0 ) ; t446 [ 2006ULL ] = ( int32_T ) ( X [ 15ULL ] * t1307 != 0.0 ) ;
t446 [ 2007ULL ] = ( int32_T ) ( t1321 * 6.4000000000000011E-5 != 0.0 ) ;
t446 [ 2008ULL ] = ( int32_T ) ( t1325 != 0.0 ) ; t446 [ 2009ULL ] = (
int32_T ) ( ( ! ( t1325 != 0.0 ) ) || ( 6.9 / ( t1325 == 0.0 ? 1.0E-16 :
t1325 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 2010ULL ] = 1 ; t446 [
2011ULL ] = 1 ; t446 [ 2012ULL ] = ( int32_T ) ( ( ! ( t1325 != 0.0 ) ) || (
( t1325 != 0.0 ) && ( ! ( 6.9 / ( t1325 == 0.0 ? 1.0E-16 : t1325 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1325 == 0.0 ?
1.0E-16 : t1325 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1325 ==
0.0 ? 1.0E-16 : t1325 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
2013ULL ] = ( int32_T ) ( t1321 * 0.0020480000000000003 != 0.0 ) ; t446 [
2014ULL ] = 1 ; t446 [ 2015ULL ] = 1 ; t446 [ 2016ULL ] = 1 ; t446 [ 2017ULL
] = 1 ; t446 [ 2018ULL ] = ( int32_T ) ( X [ 54ULL ] != 0.0 ) ; t446 [
2019ULL ] = ( int32_T ) ( X [ 430ULL ] != 0.0 ) ; t446 [ 2020ULL ] = 1 ; t446
[ 2021ULL ] = 1 ; t446 [ 2022ULL ] = 1 ; t446 [ 2023ULL ] = ( int32_T ) (
t1324 - t1307 != 0.0 ) ; t446 [ 2024ULL ] = 1 ; t446 [ 2025ULL ] = 1 ; t446 [
2026ULL ] = ( int32_T ) ( ( intrm_sf_mf_1449 * intrm_sf_mf_1449 *
9.999999999999999E-14 + fabs ( X [ 429ULL ] * t1305 * t1307 ) * 1.0E-9 ==
intrm_sf_mf_1449 * intrm_sf_mf_1449 * 9.999999999999999E-14 + fabs ( X [
429ULL ] * t1305 * t1307 ) * 1.0E-9 ) && ( fabs ( intrm_sf_mf_1449 *
intrm_sf_mf_1449 * 9.999999999999999E-14 + fabs ( X [ 429ULL ] * t1305 *
t1307 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) ; t446 [ 2027ULL ] = ( int32_T ) (
( ! ( intrm_sf_mf_1449 * intrm_sf_mf_1449 * 9.999999999999999E-14 + fabs ( X
[ 429ULL ] * t1305 * t1307 ) * 1.0E-9 == intrm_sf_mf_1449 * intrm_sf_mf_1449
* 9.999999999999999E-14 + fabs ( X [ 429ULL ] * t1305 * t1307 ) * 1.0E-9 ) )
|| ( ! ( fabs ( intrm_sf_mf_1449 * intrm_sf_mf_1449 * 9.999999999999999E-14 +
fabs ( X [ 429ULL ] * t1305 * t1307 ) * 1.0E-9 ) != pmf_get_inf ( ) ) ) || (
intrm_sf_mf_1449 * intrm_sf_mf_1449 * 9.999999999999999E-14 + fabs ( X [
429ULL ] * t1305 * t1307 ) * 1.0E-9 >= 0.0 ) ) ; t446 [ 2028ULL ] = 1 ; t446
[ 2029ULL ] = 1 ; t446 [ 2030ULL ] = ( int32_T ) ( t1307 != 0.0 ) ; t446 [
2031ULL ] = ( int32_T ) ( ( ! ( t1307 != 0.0 ) ) || ( X [ 429ULL ] != 0.0 ) )
; t446 [ 2032ULL ] = 1 ; t446 [ 2033ULL ] = ( int32_T ) ( ( ! ( t1307 != 0.0
) ) || ( ( t1307 != 0.0 ) && ( ! ( X [ 429ULL ] != 0.0 ) ) ) || ( fabs (
t1623 / ( t1307 == 0.0 ? 1.0E-16 : t1307 ) / ( X [ 429ULL ] == 0.0 ? 1.0E-16
: X [ 429ULL ] ) ) >= 0.0 ) ) ; t446 [ 2034ULL ] = ( int32_T ) ( t1317 * 0.32
!= 0.0 ) ; t446 [ 2035ULL ] = ( int32_T ) ( t1321 * 6.4000000000000011E-5 !=
0.0 ) ; t446 [ 2036ULL ] = ( int32_T ) ( t1329 != 0.0 ) ; t446 [ 2037ULL ] =
( int32_T ) ( ( ! ( t1329 != 0.0 ) ) || ( 6.9 / ( t1329 == 0.0 ? 1.0E-16 :
t1329 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 2038ULL ] = 1 ; t446 [
2039ULL ] = 1 ; t446 [ 2040ULL ] = ( int32_T ) ( ( ! ( t1329 != 0.0 ) ) || (
( t1329 != 0.0 ) && ( ! ( 6.9 / ( t1329 == 0.0 ? 1.0E-16 : t1329 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1329 == 0.0 ?
1.0E-16 : t1329 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1329 ==
0.0 ? 1.0E-16 : t1329 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
2041ULL ] = ( int32_T ) ( t1321 * 0.0020480000000000003 != 0.0 ) ; t446 [
2042ULL ] = 1 ; t446 [ 2043ULL ] = 1 ; t446 [ 2044ULL ] = 1 ; t446 [ 2045ULL
] = 1 ; t446 [ 2046ULL ] = ( int32_T ) ( t1318 != 0.0 ) ; t446 [ 2047ULL ] =
( int32_T ) ( t1326 != 0.0 ) ; t446 [ 2048ULL ] = 1 ; t446 [ 2049ULL ] = (
int32_T ) ( ( ! ( 1.0 - X [ 17ULL ] >= - 0.1 ) ) || ( ( ( 1.0 - X [ 17ULL ] )
- 0.01 ) / 0.01 < 663.67513503334737 ) || ( 1.0 - X [ 17ULL ] >= 0.01 ) ) ;
t446 [ 2050ULL ] = 1 ; t446 [ 2051ULL ] = ( int32_T ) ( t804 != 0.0 ) ; t446
[ 2052ULL ] = ( int32_T ) ( X [ 54ULL ] * 100000.0 > 0.0 ) ; t446 [ 2053ULL ]
= ( int32_T ) ( ( ! ( X [ 54ULL ] * 100000.0 > 0.0 ) ) || ( pmf_log ( X [
54ULL ] * 100000.0 ) - t66 [ 0ULL ] < 663.67513503334737 ) ) ; t446 [ 2054ULL
] = 1 ; t446 [ 2055ULL ] = ( int32_T ) ( ( ! ( t1330 >= 1.0 ) ) || ( ( t1330
- 1.0 ) * 461.523 + t1328 != 0.0 ) ) ; t446 [ 2056ULL ] = ( int32_T ) ( t1331
* 0.01 != 0.0 ) ; t446 [ 2057ULL ] = 1 ; t446 [ 2058ULL ] = 1 ; t446 [
2059ULL ] = 1 ; t446 [ 2060ULL ] = 1 ; t446 [ 2061ULL ] = ( int32_T ) ( t1298
!= 0.0 ) ; t446 [ 2062ULL ] = ( int32_T ) ( t1639 / 2.0 * 0.32 != 0.0 ) ;
t446 [ 2063ULL ] = 1 ; t446 [ 2064ULL ] = ( int32_T ) ( t1267 != 0.0 ) ; t446
[ 2065ULL ] = ( int32_T ) ( ( ! ( t1267 != 0.0 ) ) || ( 6.9 / ( t1267 == 0.0
? 1.0E-16 : t1267 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 2066ULL ] = 1
; t446 [ 2067ULL ] = 1 ; t446 [ 2068ULL ] = ( int32_T ) ( ( ! ( t1267 != 0.0
) ) || ( ( t1267 != 0.0 ) && ( ! ( 6.9 / ( t1267 == 0.0 ? 1.0E-16 : t1267 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1267 == 0.0 ?
1.0E-16 : t1267 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1267 ==
0.0 ? 1.0E-16 : t1267 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
2069ULL ] = ( int32_T ) ( ( t1335 / 8.0 == t1335 / 8.0 ) && ( fabs ( t1335 /
8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 2070ULL ] = ( int32_T ) ( ( ! ( t1335 /
8.0 == t1335 / 8.0 ) ) || ( ! ( fabs ( t1335 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1335 / 8.0 >= 0.0 ) ) ; t446 [ 2071ULL ] = 1 ; t446 [ 2072ULL ] = (
int32_T ) ( t1333 >= 0.0 ) ; t446 [ 2073ULL ] = ( int32_T ) ( ( ! ( t1335 /
8.0 == t1335 / 8.0 ) ) || ( ! ( fabs ( t1335 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1335 / 8.0 == t1335 / 8.0 ) && ( fabs ( t1335 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1335 / 8.0 >= 0.0 ) ) ) || ( ! ( t1333 >= 0.0 ) ) || ( (
pmf_pow ( t1333 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1335 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 2074ULL ] = 1 ; t446 [ 2075ULL ] = 1 ; t446 [
2076ULL ] = 1 ; t446 [ 2077ULL ] = 1 ; t446 [ 2078ULL ] = ( int32_T ) ( t1642
/ 2.0 != 0.0 ) ; t446 [ 2079ULL ] = 1 ; t2013 = t1642 / 2.0 ; t446 [ 2080ULL
] = ( int32_T ) ( ( ! ( t1315 > t1647 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1315 != 0.0 ) ) ; t446 [ 2081ULL ] = 1 ; t446 [
2082ULL ] = 1 ; t2013 = t1642 / 2.0 ; t446 [ 2083ULL ] = ( int32_T ) ( ( ! (
t1315 > t1647 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! (
t1315 != 0.0 ) ) || ( t1642 / 2.0 != 0.0 ) ) ; t446 [ 2084ULL ] = ( int32_T )
( - t1336 < 663.67513503334737 ) ; t446 [ 2085ULL ] = ( int32_T ) ( t1231 !=
0.0 ) ; t446 [ 2086ULL ] = ( int32_T ) ( t1658 / 2.0 * 0.32 != 0.0 ) ; t446 [
2087ULL ] = 1 ; t446 [ 2088ULL ] = ( int32_T ) ( t1174 != 0.0 ) ; t446 [
2089ULL ] = ( int32_T ) ( ( ! ( t1174 != 0.0 ) ) || ( 6.9 / ( t1174 == 0.0 ?
1.0E-16 : t1174 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 2090ULL ] = 1 ;
t446 [ 2091ULL ] = 1 ; t446 [ 2092ULL ] = ( int32_T ) ( ( ! ( t1174 != 0.0 )
) || ( ( t1174 != 0.0 ) && ( ! ( 6.9 / ( t1174 == 0.0 ? 1.0E-16 : t1174 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1174 == 0.0 ?
1.0E-16 : t1174 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1174 ==
0.0 ? 1.0E-16 : t1174 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
2093ULL ] = ( int32_T ) ( ( t1337 / 8.0 == t1337 / 8.0 ) && ( fabs ( t1337 /
8.0 ) != pmf_get_inf ( ) ) ) ; t446 [ 2094ULL ] = ( int32_T ) ( ( ! ( t1337 /
8.0 == t1337 / 8.0 ) ) || ( ! ( fabs ( t1337 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( t1337 / 8.0 >= 0.0 ) ) ; t446 [ 2095ULL ] = 1 ; t446 [ 2096ULL ] = (
int32_T ) ( t1314 >= 0.0 ) ; t446 [ 2097ULL ] = ( int32_T ) ( ( ! ( t1337 /
8.0 == t1337 / 8.0 ) ) || ( ! ( fabs ( t1337 / 8.0 ) != pmf_get_inf ( ) ) )
|| ( ( t1337 / 8.0 == t1337 / 8.0 ) && ( fabs ( t1337 / 8.0 ) != pmf_get_inf
( ) ) && ( ! ( t1337 / 8.0 >= 0.0 ) ) ) || ( ! ( t1314 >= 0.0 ) ) || ( (
pmf_pow ( t1314 , 0.66666666666666663 ) - 1.0 ) * pmf_sqrt ( t1337 / 8.0 ) *
12.7 + 1.0 != 0.0 ) ) ; t446 [ 2098ULL ] = 1 ; t446 [ 2099ULL ] = 1 ; t446 [
2100ULL ] = 1 ; t446 [ 2101ULL ] = 1 ; t446 [ 2102ULL ] = ( int32_T ) ( t1661
/ 2.0 != 0.0 ) ; t446 [ 2103ULL ] = 1 ; t2013 = t1661 / 2.0 ; t446 [ 2104ULL
] = ( int32_T ) ( ( ! ( t1235 > t1667 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 :
t2013 ) / 30.0 ) ) || ( t1235 != 0.0 ) ) ; t446 [ 2105ULL ] = 1 ; t446 [
2106ULL ] = 1 ; t2013 = t1661 / 2.0 ; t446 [ 2107ULL ] = ( int32_T ) ( ( ! (
t1235 > t1667 / 0.32 / ( t2013 == 0.0 ? 1.0E-16 : t2013 ) / 30.0 ) ) || ( ! (
t1235 != 0.0 ) ) || ( t1661 / 2.0 != 0.0 ) ) ; t446 [ 2108ULL ] = ( int32_T )
( - intrm_sf_mf_1520 < 663.67513503334737 ) ; t446 [ 2109ULL ] = 1 ; t446 [
2110ULL ] = 1 ; t446 [ 2111ULL ] = ( int32_T ) ( X [ 73ULL ] != 0.0 ) ; t446
[ 2112ULL ] = 1 ; t446 [ 2113ULL ] = 1 ; t446 [ 2114ULL ] = 1 ; t446 [
2115ULL ] = 1 ; t446 [ 2116ULL ] = 1 ; t446 [ 2117ULL ] = ( int32_T ) ( ( X [
415ULL ] * X [ 415ULL ] + 2.5711439722933289E-8 == X [ 415ULL ] * X [ 415ULL
] + 2.5711439722933289E-8 ) && ( fabs ( X [ 415ULL ] * X [ 415ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 2118ULL ] = ( int32_T
) ( ( ! ( X [ 415ULL ] * X [ 415ULL ] + 2.5711439722933289E-8 == X [ 415ULL ]
* X [ 415ULL ] + 2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 415ULL ] * X [
415ULL ] + 2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 415ULL ] *
X [ 415ULL ] + 2.5711439722933289E-8 >= 0.0 ) ) ; t446 [ 2119ULL ] = 1 ; t446
[ 2120ULL ] = 1 ; t446 [ 2121ULL ] = ( int32_T ) ( ( X [ 415ULL ] * X [
415ULL ] + 4.9597684650720062E-8 == X [ 415ULL ] * X [ 415ULL ] +
4.9597684650720062E-8 ) && ( fabs ( X [ 415ULL ] * X [ 415ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 2122ULL ] = ( int32_T
) ( ( ! ( X [ 415ULL ] * X [ 415ULL ] + 4.9597684650720062E-8 == X [ 415ULL ]
* X [ 415ULL ] + 4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 415ULL ] * X [
415ULL ] + 4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 415ULL ] *
X [ 415ULL ] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 2123ULL ] = 1 ; t446
[ 2124ULL ] = 1 ; t446 [ 2125ULL ] = ( int32_T ) ( ( X [ 415ULL ] * X [
415ULL ] + 3.5023764535063275E-8 == X [ 415ULL ] * X [ 415ULL ] +
3.5023764535063275E-8 ) && ( fabs ( X [ 415ULL ] * X [ 415ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) ; t446 [ 2126ULL ] = ( int32_T
) ( ( ! ( X [ 415ULL ] * X [ 415ULL ] + 3.5023764535063275E-8 == X [ 415ULL ]
* X [ 415ULL ] + 3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 415ULL ] * X [
415ULL ] + 3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 415ULL ] *
X [ 415ULL ] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 2127ULL ] = (
int32_T ) ( X [ 366ULL ] != 0.0 ) ; t446 [ 2128ULL ] = 1 ; t446 [ 2129ULL ] =
1 ; t446 [ 2130ULL ] = 1 ; t446 [ 2131ULL ] = 1 ; t446 [ 2132ULL ] = 1 ; t446
[ 2133ULL ] = ( int32_T ) ( ( X [ 388ULL ] * X [ 388ULL ] +
2.5711439722933289E-8 == X [ 388ULL ] * X [ 388ULL ] + 2.5711439722933289E-8
) && ( fabs ( X [ 388ULL ] * X [ 388ULL ] + 2.5711439722933289E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 2134ULL ] = ( int32_T ) ( ( ! ( X [ 388ULL ] * X
[ 388ULL ] + 2.5711439722933289E-8 == X [ 388ULL ] * X [ 388ULL ] +
2.5711439722933289E-8 ) ) || ( ! ( fabs ( X [ 388ULL ] * X [ 388ULL ] +
2.5711439722933289E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 388ULL ] * X [ 388ULL
] + 2.5711439722933289E-8 >= 0.0 ) ) ; t446 [ 2135ULL ] = 1 ; t446 [ 2136ULL
] = 1 ; t446 [ 2137ULL ] = ( int32_T ) ( ( X [ 388ULL ] * X [ 388ULL ] +
4.9597684650720062E-8 == X [ 388ULL ] * X [ 388ULL ] + 4.9597684650720062E-8
) && ( fabs ( X [ 388ULL ] * X [ 388ULL ] + 4.9597684650720062E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 2138ULL ] = ( int32_T ) ( ( ! ( X [ 388ULL ] * X
[ 388ULL ] + 4.9597684650720062E-8 == X [ 388ULL ] * X [ 388ULL ] +
4.9597684650720062E-8 ) ) || ( ! ( fabs ( X [ 388ULL ] * X [ 388ULL ] +
4.9597684650720062E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 388ULL ] * X [ 388ULL
] + 4.9597684650720062E-8 >= 0.0 ) ) ; t446 [ 2139ULL ] = 1 ; t446 [ 2140ULL
] = 1 ; t446 [ 2141ULL ] = ( int32_T ) ( ( X [ 388ULL ] * X [ 388ULL ] +
3.5023764535063275E-8 == X [ 388ULL ] * X [ 388ULL ] + 3.5023764535063275E-8
) && ( fabs ( X [ 388ULL ] * X [ 388ULL ] + 3.5023764535063275E-8 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 2142ULL ] = ( int32_T ) ( ( ! ( X [ 388ULL ] * X
[ 388ULL ] + 3.5023764535063275E-8 == X [ 388ULL ] * X [ 388ULL ] +
3.5023764535063275E-8 ) ) || ( ! ( fabs ( X [ 388ULL ] * X [ 388ULL ] +
3.5023764535063275E-8 ) != pmf_get_inf ( ) ) ) || ( X [ 388ULL ] * X [ 388ULL
] + 3.5023764535063275E-8 >= 0.0 ) ) ; t446 [ 2143ULL ] = 1 ; t446 [ 2144ULL
] = 1 ; t446 [ 2145ULL ] = 1 ; t446 [ 2146ULL ] = 1 ; t446 [ 2147ULL ] = 1 ;
t446 [ 2148ULL ] = 1 ; t446 [ 2149ULL ] = 1 ; t446 [ 2150ULL ] = ( int32_T )
( t1157 * 0.0019634954084936209 != 0.0 ) ; t446 [ 2151ULL ] = ( int32_T ) (
t1341 != 0.0 ) ; t446 [ 2152ULL ] = ( int32_T ) ( ( ! ( t1341 != 0.0 ) ) || (
6.9 / ( t1341 == 0.0 ? 1.0E-16 : t1341 ) + 2.8767404433520813E-5 > 0.0 ) ) ;
t446 [ 2153ULL ] = 1 ; t446 [ 2154ULL ] = 1 ; t446 [ 2155ULL ] = ( int32_T )
( ( ! ( t1341 != 0.0 ) ) || ( ( t1341 != 0.0 ) && ( ! ( 6.9 / ( t1341 == 0.0
? 1.0E-16 : t1341 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1341 == 0.0 ? 1.0E-16 : t1341 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1341 == 0.0 ? 1.0E-16 : t1341 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t446 [ 2156ULL ] = ( int32_T ) ( t1163 * 9.8174770424681068E-6 !=
0.0 ) ; t446 [ 2157ULL ] = ( int32_T ) ( t1163 * 3.855314219175531E-7 != 0.0
) ; t446 [ 2158ULL ] = 1 ; t446 [ 2159ULL ] = 1 ; t446 [ 2160ULL ] = 1 ; t446
[ 2161ULL ] = 1 ; t446 [ 2162ULL ] = ( int32_T ) ( t1157 *
0.0019634954084936209 != 0.0 ) ; t446 [ 2163ULL ] = ( int32_T ) ( t1344 !=
0.0 ) ; t446 [ 2164ULL ] = ( int32_T ) ( ( ! ( t1344 != 0.0 ) ) || ( 6.9 / (
t1344 == 0.0 ? 1.0E-16 : t1344 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [
2165ULL ] = 1 ; t446 [ 2166ULL ] = 1 ; t446 [ 2167ULL ] = ( int32_T ) ( ( ! (
t1344 != 0.0 ) ) || ( ( t1344 != 0.0 ) && ( ! ( 6.9 / ( t1344 == 0.0 ?
1.0E-16 : t1344 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1344 == 0.0 ? 1.0E-16 : t1344 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1344 == 0.0 ? 1.0E-16 : t1344 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t446 [ 2168ULL ] = ( int32_T ) ( t1163 * 9.8174770424681068E-6 !=
0.0 ) ; t446 [ 2169ULL ] = ( int32_T ) ( t1163 * 3.855314219175531E-7 != 0.0
) ; t446 [ 2170ULL ] = 1 ; t446 [ 2171ULL ] = 1 ; t446 [ 2172ULL ] = 1 ; t446
[ 2173ULL ] = 1 ; t446 [ 2174ULL ] = 1 ; t446 [ 2175ULL ] = 1 ; t446 [
2176ULL ] = 1 ; t446 [ 2177ULL ] = 1 ; t446 [ 2178ULL ] = 1 ; t446 [ 2179ULL
] = ( int32_T ) ( t1211 * 0.0019634954084936209 != 0.0 ) ; t446 [ 2180ULL ] =
( int32_T ) ( t1342 != 0.0 ) ; t446 [ 2181ULL ] = ( int32_T ) ( ( ! ( t1342
!= 0.0 ) ) || ( 6.9 / ( t1342 == 0.0 ? 1.0E-16 : t1342 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 2182ULL ] = 1 ; t446 [ 2183ULL ] = 1
; t446 [ 2184ULL ] = ( int32_T ) ( ( ! ( t1342 != 0.0 ) ) || ( ( t1342 != 0.0
) && ( ! ( 6.9 / ( t1342 == 0.0 ? 1.0E-16 : t1342 ) + 2.8767404433520813E-5 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1342 == 0.0 ? 1.0E-16 : t1342 ) +
2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( t1342 == 0.0 ? 1.0E-16 : t1342
) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ; t446 [ 2185ULL ] = ( int32_T
) ( t1217 * 9.8174770424681068E-6 != 0.0 ) ; t446 [ 2186ULL ] = ( int32_T ) (
t1217 * 3.855314219175531E-7 != 0.0 ) ; t446 [ 2187ULL ] = 1 ; t446 [ 2188ULL
] = 1 ; t446 [ 2189ULL ] = 1 ; t446 [ 2190ULL ] = 1 ; t446 [ 2191ULL ] = (
int32_T ) ( t1211 * 0.0019634954084936209 != 0.0 ) ; t446 [ 2192ULL ] = (
int32_T ) ( t571_idx_0 != 0.0 ) ; t446 [ 2193ULL ] = ( int32_T ) ( ( ! (
t571_idx_0 != 0.0 ) ) || ( 6.9 / ( t571_idx_0 == 0.0 ? 1.0E-16 : t571_idx_0 )
+ 2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 2194ULL ] = 1 ; t446 [ 2195ULL ] =
1 ; t446 [ 2196ULL ] = ( int32_T ) ( ( ! ( t571_idx_0 != 0.0 ) ) || ( (
t571_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t571_idx_0 == 0.0 ? 1.0E-16 : t571_idx_0
) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t571_idx_0 ==
0.0 ? 1.0E-16 : t571_idx_0 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / (
t571_idx_0 == 0.0 ? 1.0E-16 : t571_idx_0 ) + 2.8767404433520813E-5 ) * 3.24
!= 0.0 ) ) ; t446 [ 2197ULL ] = ( int32_T ) ( t1217 * 9.8174770424681068E-6
!= 0.0 ) ; t446 [ 2198ULL ] = ( int32_T ) ( t1217 * 3.855314219175531E-7 !=
0.0 ) ; t446 [ 2199ULL ] = 1 ; t446 [ 2200ULL ] = 1 ; t446 [ 2201ULL ] = 1 ;
t446 [ 2202ULL ] = 1 ; t446 [ 2203ULL ] = ( int32_T ) ( t1256 - ( - t1256 )
!= 0.0 ) ; t446 [ 2204ULL ] = 1 ; t446 [ 2205ULL ] = 1 ; t446 [ 2206ULL ] = 1
; t446 [ 2207ULL ] = 1 ; t446 [ 2208ULL ] = 1 ; t446 [ 2209ULL ] = 1 ; t446 [
2210ULL ] = 1 ; t446 [ 2211ULL ] = 1 ; t446 [ 2212ULL ] = 1 ; t446 [ 2213ULL
] = ( int32_T ) ( t1269 * 0.32 != 0.0 ) ; t446 [ 2214ULL ] = ( int32_T ) (
t1346 != 0.0 ) ; t446 [ 2215ULL ] = ( int32_T ) ( ( ! ( t1346 != 0.0 ) ) || (
6.9 / ( t1346 == 0.0 ? 1.0E-16 : t1346 ) + 0.00017169489553429715 > 0.0 ) ) ;
t446 [ 2216ULL ] = 1 ; t446 [ 2217ULL ] = 1 ; t446 [ 2218ULL ] = ( int32_T )
( ( ! ( t1346 != 0.0 ) ) || ( ( t1346 != 0.0 ) && ( ! ( 6.9 / ( t1346 == 0.0
? 1.0E-16 : t1346 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9
/ ( t1346 == 0.0 ? 1.0E-16 : t1346 ) + 0.00017169489553429715 ) * pmf_log10 (
6.9 / ( t1346 == 0.0 ? 1.0E-16 : t1346 ) + 0.00017169489553429715 ) * 3.24 !=
0.0 ) ) ; t446 [ 2219ULL ] = ( int32_T ) ( t1276 * 6.4000000000000011E-5 !=
0.0 ) ; t446 [ 2220ULL ] = ( int32_T ) ( t1276 * 0.0020480000000000003 != 0.0
) ; t446 [ 2221ULL ] = 1 ; t446 [ 2222ULL ] = 1 ; t446 [ 2223ULL ] = 1 ; t446
[ 2224ULL ] = 1 ; t446 [ 2225ULL ] = ( int32_T ) ( t1269 * 0.32 != 0.0 ) ;
t446 [ 2226ULL ] = ( int32_T ) ( t572_idx_0 != 0.0 ) ; t446 [ 2227ULL ] = (
int32_T ) ( ( ! ( t572_idx_0 != 0.0 ) ) || ( 6.9 / ( t572_idx_0 == 0.0 ?
1.0E-16 : t572_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 2228ULL ]
= 1 ; t446 [ 2229ULL ] = 1 ; t446 [ 2230ULL ] = ( int32_T ) ( ( ! (
t572_idx_0 != 0.0 ) ) || ( ( t572_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t572_idx_0
== 0.0 ? 1.0E-16 : t572_idx_0 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t572_idx_0 == 0.0 ? 1.0E-16 : t572_idx_0 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t572_idx_0 == 0.0 ? 1.0E-16 :
t572_idx_0 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 2231ULL ]
= ( int32_T ) ( t1276 * 6.4000000000000011E-5 != 0.0 ) ; t446 [ 2232ULL ] = (
int32_T ) ( t1276 * 0.0020480000000000003 != 0.0 ) ; t446 [ 2233ULL ] = 1 ;
t446 [ 2234ULL ] = 1 ; t446 [ 2235ULL ] = 1 ; t446 [ 2236ULL ] = 1 ; t446 [
2237ULL ] = 1 ; t446 [ 2238ULL ] = 1 ; t446 [ 2239ULL ] = 1 ; t446 [ 2240ULL
] = 1 ; t446 [ 2241ULL ] = 1 ; t446 [ 2242ULL ] = ( int32_T ) ( t875 *
7.8539816339744827E-5 != 0.0 ) ; t446 [ 2243ULL ] = ( int32_T ) ( U_idx_9 !=
0.0 ) ; t446 [ 2244ULL ] = ( int32_T ) ( ( ! ( U_idx_9 != 0.0 ) ) || ( 6.9 /
( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) + 0.00017169489553429715 > 0.0 ) ) ;
t446 [ 2245ULL ] = 1 ; t446 [ 2246ULL ] = 1 ; t446 [ 2247ULL ] = ( int32_T )
( ( ! ( U_idx_9 != 0.0 ) ) || ( ( U_idx_9 != 0.0 ) && ( ! ( 6.9 / ( U_idx_9
== 0.0 ? 1.0E-16 : U_idx_9 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( U_idx_9 == 0.0 ? 1.0E-16 :
U_idx_9 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 2248ULL ] = (
int32_T ) ( t883 * 1.5707963267948965E-8 != 0.0 ) ; t446 [ 2249ULL ] = (
int32_T ) ( t883 * 1.2337005501361697E-10 != 0.0 ) ; t446 [ 2250ULL ] = 1 ;
t446 [ 2251ULL ] = 1 ; t446 [ 2252ULL ] = 1 ; t446 [ 2253ULL ] = 1 ; t446 [
2254ULL ] = ( int32_T ) ( t1317 * 0.32 != 0.0 ) ; t446 [ 2255ULL ] = (
int32_T ) ( t569_idx_0 != 0.0 ) ; t446 [ 2256ULL ] = ( int32_T ) ( ( ! (
t569_idx_0 != 0.0 ) ) || ( 6.9 / ( t569_idx_0 == 0.0 ? 1.0E-16 : t569_idx_0 )
+ 0.00017169489553429715 > 0.0 ) ) ; t446 [ 2257ULL ] = 1 ; t446 [ 2258ULL ]
= 1 ; t446 [ 2259ULL ] = ( int32_T ) ( ( ! ( t569_idx_0 != 0.0 ) ) || ( (
t569_idx_0 != 0.0 ) && ( ! ( 6.9 / ( t569_idx_0 == 0.0 ? 1.0E-16 : t569_idx_0
) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t569_idx_0 ==
0.0 ? 1.0E-16 : t569_idx_0 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / (
t569_idx_0 == 0.0 ? 1.0E-16 : t569_idx_0 ) + 0.00017169489553429715 ) * 3.24
!= 0.0 ) ) ; t446 [ 2260ULL ] = ( int32_T ) ( t1321 * 6.4000000000000011E-5
!= 0.0 ) ; t446 [ 2261ULL ] = ( int32_T ) ( t1321 * 0.0020480000000000003 !=
0.0 ) ; t446 [ 2262ULL ] = ( int32_T ) ( t875 * 7.8539816339744827E-5 != 0.0
) ; t446 [ 2263ULL ] = 1 ; t446 [ 2264ULL ] = 1 ; t446 [ 2265ULL ] = 1 ; t446
[ 2266ULL ] = 1 ; t446 [ 2267ULL ] = ( int32_T ) ( t1317 * 0.32 != 0.0 ) ;
t446 [ 2268ULL ] = ( int32_T ) ( t886 != 0.0 ) ; t446 [ 2269ULL ] = ( int32_T
) ( ( ! ( t886 != 0.0 ) ) || ( 6.9 / ( t886 == 0.0 ? 1.0E-16 : t886 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 2270ULL ] = 1 ; t446 [ 2271ULL ] =
1 ; t446 [ 2272ULL ] = ( int32_T ) ( ( ! ( t886 != 0.0 ) ) || ( ( t886 != 0.0
) && ( ! ( 6.9 / ( t886 == 0.0 ? 1.0E-16 : t886 ) + 0.00017169489553429715 >
0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t886 == 0.0 ? 1.0E-16 : t886 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t886 == 0.0 ? 1.0E-16 : t886 )
+ 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 2273ULL ] = ( int32_T )
( t1321 * 6.4000000000000011E-5 != 0.0 ) ; t446 [ 2274ULL ] = ( int32_T ) (
t1321 * 0.0020480000000000003 != 0.0 ) ; t446 [ 2275ULL ] = 1 ; t446 [
2276ULL ] = 1 ; t446 [ 2277ULL ] = 1 ; t446 [ 2278ULL ] = 1 ; t446 [ 2279ULL
] = ( int32_T ) ( - t872 - t872 * - 0.95 != 0.0 ) ; t446 [ 2280ULL ] = 1 ;
t446 [ 2281ULL ] = 1 ; t446 [ 2282ULL ] = 1 ; t446 [ 2283ULL ] = 1 ; t446 [
2284ULL ] = ( int32_T ) ( t1349 != 0.0 ) ; t446 [ 2285ULL ] = ( int32_T ) ( (
! ( t1349 != 0.0 ) ) || ( 6.9 / ( t1349 == 0.0 ? 1.0E-16 : t1349 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 2286ULL ] = 1 ; t446 [ 2287ULL ] =
1 ; t446 [ 2288ULL ] = ( int32_T ) ( ( ! ( t1349 != 0.0 ) ) || ( ( t1349 !=
0.0 ) && ( ! ( 6.9 / ( t1349 == 0.0 ? 1.0E-16 : t1349 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1349 == 0.0 ?
1.0E-16 : t1349 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1349 ==
0.0 ? 1.0E-16 : t1349 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
2289ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Dp_BI_chok * - 0.95 !=
0.0 ) ; t446 [ 2290ULL ] = 1 ; t446 [ 2291ULL ] = 1 ; t446 [ 2292ULL ] = 1 ;
t446 [ 2293ULL ] = 1 ; t446 [ 2294ULL ] = ( int32_T ) ( t917 - t917 * 0.95 !=
0.0 ) ; t446 [ 2295ULL ] = 1 ; t446 [ 2296ULL ] = 1 ; t446 [ 2297ULL ] = 1 ;
t446 [ 2298ULL ] = 1 ; t446 [ 2299ULL ] = ( int32_T ) ( t883 *
1.5707963267948965E-8 != 0.0 ) ; t446 [ 2300ULL ] = 1 ; t446 [ 2301ULL ] = 1
; t446 [ 2302ULL ] = 1 ; t446 [ 2303ULL ] = 1 ; t446 [ 2304ULL ] = ( int32_T
) ( t883 * 1.2337005501361697E-10 != 0.0 ) ; t446 [ 2305ULL ] = ( int32_T ) (
- t949 - t949 * - 0.95 != 0.0 ) ; t446 [ 2306ULL ] = 1 ; t446 [ 2307ULL ] = 1
; t446 [ 2308ULL ] = 1 ; t446 [ 2309ULL ] = 1 ; t446 [ 2310ULL ] = ( int32_T
) ( - t942 - t942 * - 0.95 != 0.0 ) ; t446 [ 2311ULL ] = 1 ; t446 [ 2312ULL ]
= 1 ; t446 [ 2313ULL ] = 1 ; t446 [ 2314ULL ] = 1 ; t446 [ 2315ULL ] = (
int32_T ) ( t989 - t989 * 0.95 != 0.0 ) ; t446 [ 2316ULL ] = 1 ; t446 [
2317ULL ] = 1 ; t446 [ 2318ULL ] = 1 ; t446 [ 2319ULL ] = 1 ; t446 [ 2320ULL
] = 1 ; t446 [ 2321ULL ] = 1 ; t446 [ 2322ULL ] = 1 ; t446 [ 2323ULL ] = 1 ;
t446 [ 2324ULL ] = 1 ; t446 [ 2325ULL ] = 1 ; t446 [ 2326ULL ] = 1 ; t446 [
2327ULL ] = 1 ; t446 [ 2328ULL ] = ( int32_T ) ( U_idx_1 != 0.0 ) ; t446 [
2329ULL ] = ( int32_T ) ( ( ! ( U_idx_1 != 0.0 ) ) || ( X [ 258ULL ] != 0.0 )
) ; t446 [ 2330ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Pipe_MA_Dp_AI_choked * - 0.95 !=
0.0 ) ; t446 [ 2331ULL ] = 1 ; t446 [ 2332ULL ] = 1 ; t446 [ 2333ULL ] = 1 ;
t446 [ 2334ULL ] = 1 ; t446 [ 2335ULL ] = ( int32_T ) ( - t1013 - t1013 * -
0.95 != 0.0 ) ; t446 [ 2336ULL ] = 1 ; t446 [ 2337ULL ] = 1 ; t446 [ 2338ULL
] = 1 ; t446 [ 2339ULL ] = 1 ; t446 [ 2340ULL ] = ( int32_T ) ( - t1066 -
t1066 * - 0.95 != 0.0 ) ; t446 [ 2341ULL ] = 1 ; t446 [ 2342ULL ] = 1 ; t446
[ 2343ULL ] = 1 ; t446 [ 2344ULL ] = 1 ; t446 [ 2345ULL ] = ( int32_T ) ( -
t1060 - t1060 * - 0.95 != 0.0 ) ; t446 [ 2346ULL ] = 1 ; t446 [ 2347ULL ] = 1
; t446 [ 2348ULL ] = 1 ; t446 [ 2349ULL ] = 1 ; t446 [ 2350ULL ] = ( int32_T
) ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Dp_AI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA1_Dp_AI_choked * - 0.95 !=
0.0 ) ; t446 [ 2351ULL ] = 1 ; t446 [ 2352ULL ] = 1 ; t446 [ 2353ULL ] = 1 ;
t446 [ 2354ULL ] = 1 ; t446 [ 2355ULL ] = ( int32_T ) ( - t1105 - t1105 * -
0.95 != 0.0 ) ; t446 [ 2356ULL ] = 1 ; t446 [ 2357ULL ] = 1 ; t446 [ 2358ULL
] = 1 ; t446 [ 2359ULL ] = 1 ; t446 [ 2360ULL ] = ( int32_T ) ( - t1153 -
t1153 * - 0.95 != 0.0 ) ; t446 [ 2361ULL ] = 1 ; t446 [ 2362ULL ] = 1 ; t446
[ 2363ULL ] = 1 ; t446 [ 2364ULL ] = 1 ; t446 [ 2365ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_delta_vel_po1 * - 0.95 !=
0.0 ) ; t446 [ 2366ULL ] = 1 ; t446 [ 2367ULL ] = 1 ; t446 [ 2368ULL ] = 1 ;
t446 [ 2369ULL ] = 1 ; t446 [ 2370ULL ] = ( int32_T ) ( - t1208 - t1208 * -
0.95 != 0.0 ) ; t446 [ 2371ULL ] = 1 ; t446 [ 2372ULL ] = 1 ; t446 [ 2373ULL
] = 1 ; t446 [ 2374ULL ] = 1 ; t446 [ 2375ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_Dp_BI_choked * - 0.95 !=
0.0 ) ; t446 [ 2376ULL ] = 1 ; t446 [ 2377ULL ] = 1 ; t446 [ 2378ULL ] = 1 ;
t446 [ 2379ULL ] = 1 ; t446 [ 2380ULL ] = ( int32_T ) (
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pressure_Relief_Val19 * 0.95 != 0.0
) ; t446 [ 2381ULL ] = 1 ; t446 [ 2382ULL ] = 1 ; t446 [ 2383ULL ] = 1 ; t446
[ 2384ULL ] = 1 ; t446 [ 2385ULL ] = 1 ; t446 [ 2386ULL ] = 1 ; t446 [
2387ULL ] = 1 ; t446 [ 2388ULL ] = 1 ; t446 [ 2389ULL ] = ( int32_T ) ( -
t1266 - t1266 * - 0.95 != 0.0 ) ; t446 [ 2390ULL ] = 1 ; t446 [ 2391ULL ] = 1
; t446 [ 2392ULL ] = 1 ; t446 [ 2393ULL ] = 1 ; t446 [ 2394ULL ] = ( int32_T
) ( - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_Dp_BI_choked * - 0.95 !=
0.0 ) ; t446 [ 2395ULL ] = 1 ; t446 [ 2396ULL ] = 1 ; t446 [ 2397ULL ] = 1 ;
t446 [ 2398ULL ] = 1 ; t446 [ 2399ULL ] = ( int32_T ) ( -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked -
Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA1_Dp_AI_choked * - 0.95 !=
0.0 ) ; t446 [ 2400ULL ] = 1 ; t446 [ 2401ULL ] = 1 ; t446 [ 2402ULL ] = 1 ;
t446 [ 2403ULL ] = 1 ; t446 [ 2404ULL ] = ( int32_T ) ( - t1306 - t1306 * -
0.95 != 0.0 ) ; t446 [ 2405ULL ] = 1 ; t446 [ 2406ULL ] = 1 ; t446 [ 2407ULL
] = 1 ; t446 [ 2408ULL ] = 1 ; t446 [ 2409ULL ] = ( int32_T ) ( t926 - ( -
t926 ) != 0.0 ) ; t446 [ 2410ULL ] = 1 ; t446 [ 2411ULL ] = 1 ; t446 [
2412ULL ] = 1 ; t446 [ 2413ULL ] = 1 ; t446 [ 2414ULL ] = ( int32_T ) ( X [
24ULL ] * 100000.0 > 0.0 ) ; t446 [ 2415ULL ] = ( int32_T ) ( X [ 116ULL ] *
100000.0 > 0.0 ) ; t446 [ 2416ULL ] = ( int32_T ) ( X [ 116ULL ] * 100000.0 >
0.0 ) ; t446 [ 2417ULL ] = ( int32_T ) ( X [ 24ULL ] * 100000.0 > 0.0 ) ;
t446 [ 2418ULL ] = 1 ; t446 [ 2419ULL ] = 1 ; t446 [ 2420ULL ] = 1 ; t446 [
2421ULL ] = 1 ; t446 [ 2422ULL ] = 1 ; t446 [ 2423ULL ] = 1 ; t446 [ 2424ULL
] = 1 ; t446 [ 2425ULL ] = 1 ; t446 [ 2426ULL ] = 1 ; t446 [ 2427ULL ] = (
int32_T ) ( t954 * 7.8539816339744827E-5 != 0.0 ) ; t446 [ 2428ULL ] = (
int32_T ) ( t891 != 0.0 ) ; t446 [ 2429ULL ] = ( int32_T ) ( ( ! ( t891 !=
0.0 ) ) || ( 6.9 / ( t891 == 0.0 ? 1.0E-16 : t891 ) + 0.00017169489553429715
> 0.0 ) ) ; t446 [ 2430ULL ] = 1 ; t446 [ 2431ULL ] = 1 ; t446 [ 2432ULL ] =
( int32_T ) ( ( ! ( t891 != 0.0 ) ) || ( ( t891 != 0.0 ) && ( ! ( 6.9 / (
t891 == 0.0 ? 1.0E-16 : t891 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t891 == 0.0 ? 1.0E-16 : t891 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t891 == 0.0 ? 1.0E-16 : t891 ) + 0.00017169489553429715
) * 3.24 != 0.0 ) ) ; t446 [ 2433ULL ] = ( int32_T ) ( t958 *
1.5707963267948965E-8 != 0.0 ) ; t446 [ 2434ULL ] = ( int32_T ) ( t958 *
1.2337005501361697E-10 != 0.0 ) ; t446 [ 2435ULL ] = 1 ; t446 [ 2436ULL ] = 1
; t446 [ 2437ULL ] = 1 ; t446 [ 2438ULL ] = 1 ; t446 [ 2439ULL ] = ( int32_T
) ( t954 * 7.8539816339744827E-5 != 0.0 ) ; t446 [ 2440ULL ] = ( int32_T ) (
t992 != 0.0 ) ; t446 [ 2441ULL ] = ( int32_T ) ( ( ! ( t992 != 0.0 ) ) || (
6.9 / ( t992 == 0.0 ? 1.0E-16 : t992 ) + 0.00017169489553429715 > 0.0 ) ) ;
t446 [ 2442ULL ] = 1 ; t446 [ 2443ULL ] = 1 ; t446 [ 2444ULL ] = ( int32_T )
( ( ! ( t992 != 0.0 ) ) || ( ( t992 != 0.0 ) && ( ! ( 6.9 / ( t992 == 0.0 ?
1.0E-16 : t992 ) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t992 == 0.0 ? 1.0E-16 : t992 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9
/ ( t992 == 0.0 ? 1.0E-16 : t992 ) + 0.00017169489553429715 ) * 3.24 != 0.0 )
) ; t446 [ 2445ULL ] = ( int32_T ) ( t958 * 1.5707963267948965E-8 != 0.0 ) ;
t446 [ 2446ULL ] = ( int32_T ) ( t958 * 1.2337005501361697E-10 != 0.0 ) ;
t446 [ 2447ULL ] = 1 ; t446 [ 2448ULL ] = 1 ; t446 [ 2449ULL ] = 1 ; t446 [
2450ULL ] = 1 ; t446 [ 2451ULL ] = ( int32_T ) ( t999 - ( - t999 ) != 0.0 ) ;
t446 [ 2452ULL ] = 1 ; t446 [ 2453ULL ] = 1 ; t446 [ 2454ULL ] = 1 ; t446 [
2455ULL ] = 1 ; t446 [ 2456ULL ] = ( int32_T ) ( X [ 35ULL ] * 100000.0 > 0.0
) ; t446 [ 2457ULL ] = ( int32_T ) ( X [ 35ULL ] * 100000.0 > 0.0 ) ; t446 [
2458ULL ] = 1 ; t446 [ 2459ULL ] = 1 ; t446 [ 2460ULL ] = 1 ; t446 [ 2461ULL
] = 1 ; t446 [ 2462ULL ] = 1 ; t446 [ 2463ULL ] = 1 ; t446 [ 2464ULL ] = 1 ;
t446 [ 2465ULL ] = 1 ; t446 [ 2466ULL ] = 1 ; t446 [ 2467ULL ] = 1 ; t446 [
2468ULL ] = ( int32_T ) ( t1024 * 0.0019634954084936209 != 0.0 ) ; t446 [
2469ULL ] = ( int32_T ) ( U_idx_2 != 0.0 ) ; t446 [ 2470ULL ] = ( int32_T ) (
( ! ( U_idx_2 != 0.0 ) ) || ( 6.9 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) +
2.8767404433520813E-5 > 0.0 ) ) ; t446 [ 2471ULL ] = 1 ; t446 [ 2472ULL ] = 1
; t446 [ 2473ULL ] = ( int32_T ) ( ( ! ( U_idx_2 != 0.0 ) ) || ( ( U_idx_2 !=
0.0 ) && ( ! ( 6.9 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) +
2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( U_idx_2 == 0.0 ?
1.0E-16 : U_idx_2 ) + 2.8767404433520813E-5 ) * pmf_log10 ( 6.9 / ( U_idx_2
== 0.0 ? 1.0E-16 : U_idx_2 ) + 2.8767404433520813E-5 ) * 3.24 != 0.0 ) ) ;
t446 [ 2474ULL ] = ( int32_T ) ( t1030 * 9.8174770424681068E-6 != 0.0 ) ;
t446 [ 2475ULL ] = ( int32_T ) ( t1030 * 3.855314219175531E-7 != 0.0 ) ; t446
[ 2476ULL ] = 1 ; t446 [ 2477ULL ] = 1 ; t446 [ 2478ULL ] = 1 ; t446 [
2479ULL ] = 1 ; t446 [ 2480ULL ] = ( int32_T ) ( t1024 *
0.0019634954084936209 != 0.0 ) ; t446 [ 2481ULL ] = ( int32_T ) ( t1096 !=
0.0 ) ; t446 [ 2482ULL ] = ( int32_T ) ( ( ! ( t1096 != 0.0 ) ) || ( 6.9 / (
t1096 == 0.0 ? 1.0E-16 : t1096 ) + 2.8767404433520813E-5 > 0.0 ) ) ; t446 [
2483ULL ] = 1 ; t446 [ 2484ULL ] = 1 ; t446 [ 2485ULL ] = ( int32_T ) ( ( ! (
t1096 != 0.0 ) ) || ( ( t1096 != 0.0 ) && ( ! ( 6.9 / ( t1096 == 0.0 ?
1.0E-16 : t1096 ) + 2.8767404433520813E-5 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 /
( t1096 == 0.0 ? 1.0E-16 : t1096 ) + 2.8767404433520813E-5 ) * pmf_log10 (
6.9 / ( t1096 == 0.0 ? 1.0E-16 : t1096 ) + 2.8767404433520813E-5 ) * 3.24 !=
0.0 ) ) ; t446 [ 2486ULL ] = ( int32_T ) ( t1030 * 9.8174770424681068E-6 !=
0.0 ) ; t446 [ 2487ULL ] = ( int32_T ) ( t1030 * 3.855314219175531E-7 != 0.0
) ; t446 [ 2488ULL ] = 1 ; t446 [ 2489ULL ] = 1 ; t446 [ 2490ULL ] = 1 ; t446
[ 2491ULL ] = 1 ; t446 [ 2492ULL ] = 1 ; t446 [ 2493ULL ] = 1 ; t446 [
2494ULL ] = 1 ; t446 [ 2495ULL ] = 1 ; t446 [ 2496ULL ] = 1 ; t446 [ 2497ULL
] = 1 ; t446 [ 2498ULL ] = 1 ; t446 [ 2499ULL ] = 1 ; t446 [ 2500ULL ] = 1 ;
t446 [ 2501ULL ] = ( int32_T ) ( t1070 * 0.32 != 0.0 ) ; t446 [ 2502ULL ] = (
int32_T ) ( t873 != 0.0 ) ; t446 [ 2503ULL ] = ( int32_T ) ( ( ! ( t873 !=
0.0 ) ) || ( 6.9 / ( t873 == 0.0 ? 1.0E-16 : t873 ) + 0.00017169489553429715
> 0.0 ) ) ; t446 [ 2504ULL ] = 1 ; t446 [ 2505ULL ] = 1 ; t446 [ 2506ULL ] =
( int32_T ) ( ( ! ( t873 != 0.0 ) ) || ( ( t873 != 0.0 ) && ( ! ( 6.9 / (
t873 == 0.0 ? 1.0E-16 : t873 ) + 0.00017169489553429715 > 0.0 ) ) ) || (
pmf_log10 ( 6.9 / ( t873 == 0.0 ? 1.0E-16 : t873 ) + 0.00017169489553429715 )
* pmf_log10 ( 6.9 / ( t873 == 0.0 ? 1.0E-16 : t873 ) + 0.00017169489553429715
) * 3.24 != 0.0 ) ) ; t446 [ 2507ULL ] = ( int32_T ) ( t1077 *
6.4000000000000011E-5 != 0.0 ) ; t446 [ 2508ULL ] = ( int32_T ) ( t1077 *
0.0020480000000000003 != 0.0 ) ; t446 [ 2509ULL ] = 1 ; t446 [ 2510ULL ] = 1
; t446 [ 2511ULL ] = 1 ; t446 [ 2512ULL ] = 1 ; t446 [ 2513ULL ] = ( int32_T
) ( t1070 * 0.32 != 0.0 ) ; t446 [ 2514ULL ] = ( int32_T ) ( t1180 != 0.0 ) ;
t446 [ 2515ULL ] = ( int32_T ) ( ( ! ( t1180 != 0.0 ) ) || ( 6.9 / ( t1180 ==
0.0 ? 1.0E-16 : t1180 ) + 0.00017169489553429715 > 0.0 ) ) ; t446 [ 2516ULL ]
= 1 ; t446 [ 2517ULL ] = 1 ; t446 [ 2518ULL ] = ( int32_T ) ( ( ! ( t1180 !=
0.0 ) ) || ( ( t1180 != 0.0 ) && ( ! ( 6.9 / ( t1180 == 0.0 ? 1.0E-16 : t1180
) + 0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1180 == 0.0
? 1.0E-16 : t1180 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1180 ==
0.0 ? 1.0E-16 : t1180 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
2519ULL ] = ( int32_T ) ( t1077 * 6.4000000000000011E-5 != 0.0 ) ; t446 [
2520ULL ] = ( int32_T ) ( t1077 * 0.0020480000000000003 != 0.0 ) ; t446 [
2521ULL ] = 1 ; t446 [ 2522ULL ] = 1 ; t446 [ 2523ULL ] = 1 ; t446 [ 2524ULL
] = 1 ; t446 [ 2525ULL ] = 1 ; t446 [ 2526ULL ] = 1 ; t446 [ 2527ULL ] = 1 ;
t446 [ 2528ULL ] = 1 ; t446 [ 2529ULL ] = 1 ; t446 [ 2530ULL ] = 1 ; t446 [
2531ULL ] = 1 ; t446 [ 2532ULL ] = 1 ; t446 [ 2533ULL ] = 1 ; t446 [ 2534ULL
] = ( int32_T ) ( t1122 * 0.32 != 0.0 ) ; t446 [ 2535ULL ] = ( int32_T ) (
U_idx_3 != 0.0 ) ; t446 [ 2536ULL ] = ( int32_T ) ( ( ! ( U_idx_3 != 0.0 ) )
|| ( 6.9 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) + 0.00017169489553429715 >
0.0 ) ) ; t446 [ 2537ULL ] = 1 ; t446 [ 2538ULL ] = 1 ; t446 [ 2539ULL ] = (
int32_T ) ( ( ! ( U_idx_3 != 0.0 ) ) || ( ( U_idx_3 != 0.0 ) && ( ! ( 6.9 / (
U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) + 0.00017169489553429715 > 0.0 ) ) ) ||
( pmf_log10 ( 6.9 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) +
0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( U_idx_3 == 0.0 ? 1.0E-16 :
U_idx_3 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [ 2540ULL ] = (
int32_T ) ( t1126 * 6.4000000000000011E-5 != 0.0 ) ; t446 [ 2541ULL ] = (
int32_T ) ( t1126 * 0.0020480000000000003 != 0.0 ) ; t446 [ 2542ULL ] = 1 ;
t446 [ 2543ULL ] = 1 ; t446 [ 2544ULL ] = 1 ; t446 [ 2545ULL ] = 1 ; t446 [
2546ULL ] = ( int32_T ) ( t1122 * 0.32 != 0.0 ) ; t446 [ 2547ULL ] = (
int32_T ) ( t1262 != 0.0 ) ; t446 [ 2548ULL ] = ( int32_T ) ( ( ! ( t1262 !=
0.0 ) ) || ( 6.9 / ( t1262 == 0.0 ? 1.0E-16 : t1262 ) +
0.00017169489553429715 > 0.0 ) ) ; t446 [ 2549ULL ] = 1 ; t446 [ 2550ULL ] =
1 ; t446 [ 2551ULL ] = ( int32_T ) ( ( ! ( t1262 != 0.0 ) ) || ( ( t1262 !=
0.0 ) && ( ! ( 6.9 / ( t1262 == 0.0 ? 1.0E-16 : t1262 ) +
0.00017169489553429715 > 0.0 ) ) ) || ( pmf_log10 ( 6.9 / ( t1262 == 0.0 ?
1.0E-16 : t1262 ) + 0.00017169489553429715 ) * pmf_log10 ( 6.9 / ( t1262 ==
0.0 ? 1.0E-16 : t1262 ) + 0.00017169489553429715 ) * 3.24 != 0.0 ) ) ; t446 [
2552ULL ] = ( int32_T ) ( t1126 * 6.4000000000000011E-5 != 0.0 ) ; t446 [
2553ULL ] = ( int32_T ) ( t1126 * 0.0020480000000000003 != 0.0 ) ; t446 [
2554ULL ] = 1 ; t446 [ 2555ULL ] = 1 ; t446 [ 2556ULL ] = 1 ; t446 [ 2557ULL
] = 1 ; t446 [ 2558ULL ] = ( int32_T ) ( X [ 20ULL ] != 0.0 ) ; t446 [
2559ULL ] = ( int32_T ) ( X [ 19ULL ] != 0.0 ) ; t446 [ 2560ULL ] = ( int32_T
) ( t867 != 0.0 ) ; t446 [ 2561ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ;
t446 [ 2562ULL ] = ( int32_T ) ( X [ 23ULL ] != 0.0 ) ; t446 [ 2563ULL ] = (
int32_T ) ( t927 != 0.0 ) ; t446 [ 2564ULL ] = ( int32_T ) ( X [ 28ULL ] !=
0.0 ) ; t446 [ 2565ULL ] = ( int32_T ) ( X [ 27ULL ] != 0.0 ) ; t446 [
2566ULL ] = ( int32_T ) ( t936 != 0.0 ) ; t446 [ 2567ULL ] = ( int32_T ) ( X
[ 32ULL ] != 0.0 ) ; t446 [ 2568ULL ] = ( int32_T ) ( X [ 31ULL ] != 0.0 ) ;
t446 [ 2569ULL ] = ( int32_T ) ( t943 != 0.0 ) ; t446 [ 2570ULL ] = ( int32_T
) ( X [ 35ULL ] != 0.0 ) ; t446 [ 2571ULL ] = ( int32_T ) ( X [ 36ULL ] !=
0.0 ) ; t446 [ 2572ULL ] = ( int32_T ) ( intrm_sf_mf_537 != 0.0 ) ; t446 [
2573ULL ] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t446 [ 2574ULL ] = ( int32_T
) ( X [ 39ULL ] != 0.0 ) ; t446 [ 2575ULL ] = ( int32_T ) ( t1015 != 0.0 ) ;
t446 [ 2576ULL ] = ( int32_T ) ( X [ 43ULL ] != 0.0 ) ; t446 [ 2577ULL ] = (
int32_T ) ( X [ 6ULL ] != 0.0 ) ; t446 [ 2578ULL ] = ( int32_T ) ( t1061 !=
0.0 ) ; t446 [ 2579ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t446 [
2580ULL ] = ( int32_T ) ( X [ 9ULL ] != 0.0 ) ; t446 [ 2581ULL ] = ( int32_T
) ( t1109 != 0.0 ) ; t446 [ 2582ULL ] = ( int32_T ) ( X [ 48ULL ] != 0.0 ) ;
t446 [ 2583ULL ] = ( int32_T ) ( X [ 45ULL ] != 0.0 ) ; t446 [ 2584ULL ] = (
int32_T ) ( t1147 != 0.0 ) ; t446 [ 2585ULL ] = ( int32_T ) ( X [ 50ULL ] !=
0.0 ) ; t446 [ 2586ULL ] = ( int32_T ) ( X [ 49ULL ] != 0.0 ) ; t446 [
2587ULL ] = ( int32_T ) ( t1201 != 0.0 ) ; t446 [ 2588ULL ] = ( int32_T ) ( X
[ 53ULL ] != 0.0 ) ; t446 [ 2589ULL ] = ( int32_T ) ( X [ 12ULL ] != 0.0 ) ;
t446 [ 2590ULL ] = ( int32_T ) ( t1257 != 0.0 ) ; t446 [ 2591ULL ] = (
int32_T ) ( X [ 54ULL ] != 0.0 ) ; t446 [ 2592ULL ] = ( int32_T ) ( X [ 15ULL
] != 0.0 ) ; t446 [ 2593ULL ] = ( int32_T ) ( t1307 != 0.0 ) ; t446 [ 2594ULL
] = ( int32_T ) ( ( X [ 59ULL ] > 0.9 ? X [ 59ULL ] : 0.9 ) != 0.0 ) ; t446 [
2595ULL ] = 1 ; t446 [ 2596ULL ] = 1 ; t446 [ 2597ULL ] = 1 ; t446 [ 2598ULL
] = 1 ; t446 [ 2599ULL ] = 1 ; t446 [ 2600ULL ] = 1 ; t446 [ 2601ULL ] = (
int32_T ) ( X [ 140ULL ] != 0.0 ) ; t446 [ 2602ULL ] = ( int32_T ) ( X [
140ULL ] != 0.0 ) ; t446 [ 2603ULL ] = 1 ; t446 [ 2604ULL ] = 1 ; t446 [
2605ULL ] = 1 ; t446 [ 2606ULL ] = ( int32_T ) ( X [ 144ULL ] != 0.0 ) ; t446
[ 2607ULL ] = ( int32_T ) ( X [ 144ULL ] != 0.0 ) ; t446 [ 2608ULL ] = 1 ;
t446 [ 2609ULL ] = 1 ; t446 [ 2610ULL ] = 1 ; t446 [ 2611ULL ] = ( int32_T )
( X [ 20ULL ] != 0.0 ) ; t446 [ 2612ULL ] = ( int32_T ) ( X [ 20ULL ] != 0.0
) ; t446 [ 2613ULL ] = 1 ; t446 [ 2614ULL ] = 1 ; t446 [ 2615ULL ] = 1 ; t446
[ 2616ULL ] = ( int32_T ) ( X [ 20ULL ] != 0.0 ) ; t446 [ 2617ULL ] = (
int32_T ) ( X [ 20ULL ] != 0.0 ) ; t446 [ 2618ULL ] = 1 ; t446 [ 2619ULL ] =
1 ; t446 [ 2620ULL ] = 1 ; t446 [ 2621ULL ] = 1 ; t446 [ 2622ULL ] = 1 ; t446
[ 2623ULL ] = 1 ; t446 [ 2624ULL ] = 1 ; t446 [ 2625ULL ] = 1 ; t446 [
2626ULL ] = 1 ; t446 [ 2627ULL ] = ( int32_T ) ( X [ 160ULL ] != 0.0 ) ; t446
[ 2628ULL ] = ( int32_T ) ( X [ 160ULL ] != 0.0 ) ; t446 [ 2629ULL ] = (
int32_T ) ( t916 != 0.0 ) ; t446 [ 2630ULL ] = 1 ; t446 [ 2631ULL ] = 1 ;
t446 [ 2632ULL ] = 1 ; t446 [ 2633ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 )
; t446 [ 2634ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 2635ULL ] =
1 ; t446 [ 2636ULL ] = 1 ; t446 [ 2637ULL ] = 1 ; t446 [ 2638ULL ] = (
int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 2639ULL ] = ( int32_T ) ( X [ 24ULL
] != 0.0 ) ; t446 [ 2640ULL ] = 1 ; t446 [ 2641ULL ] = 1 ; t446 [ 2642ULL ] =
1 ; t446 [ 2643ULL ] = ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 2644ULL ]
= ( int32_T ) ( X [ 24ULL ] != 0.0 ) ; t446 [ 2645ULL ] = 1 ; t446 [ 2646ULL
] = 1 ; t446 [ 2647ULL ] = 1 ; t446 [ 2648ULL ] = ( int32_T ) ( X [ 28ULL ]
!= 0.0 ) ; t446 [ 2649ULL ] = ( int32_T ) ( X [ 28ULL ] != 0.0 ) ; t446 [
2650ULL ] = 1 ; t446 [ 2651ULL ] = 1 ; t446 [ 2652ULL ] = 1 ; t446 [ 2653ULL
] = ( int32_T ) ( X [ 224ULL ] != 0.0 ) ; t446 [ 2654ULL ] = ( int32_T ) ( X
[ 224ULL ] != 0.0 ) ; t446 [ 2655ULL ] = 1 ; t446 [ 2656ULL ] = 1 ; t446 [
2657ULL ] = 1 ; t446 [ 2658ULL ] = ( int32_T ) ( X [ 228ULL ] != 0.0 ) ; t446
[ 2659ULL ] = ( int32_T ) ( X [ 228ULL ] != 0.0 ) ; t446 [ 2660ULL ] = 1 ;
t446 [ 2661ULL ] = 1 ; t446 [ 2662ULL ] = 1 ; t446 [ 2663ULL ] = ( int32_T )
( X [ 32ULL ] != 0.0 ) ; t446 [ 2664ULL ] = ( int32_T ) ( X [ 32ULL ] != 0.0
) ; t446 [ 2665ULL ] = 1 ; t446 [ 2666ULL ] = 1 ; t446 [ 2667ULL ] = 1 ; t446
[ 2668ULL ] = ( int32_T ) ( X [ 32ULL ] != 0.0 ) ; t446 [ 2669ULL ] = (
int32_T ) ( X [ 32ULL ] != 0.0 ) ; t446 [ 2670ULL ] = 1 ; t446 [ 2671ULL ] =
1 ; t446 [ 2672ULL ] = 1 ; t446 [ 2673ULL ] = 1 ; t446 [ 2674ULL ] = 1 ; t446
[ 2675ULL ] = 1 ; t446 [ 2676ULL ] = 1 ; t446 [ 2677ULL ] = 1 ; t446 [
2678ULL ] = 1 ; t446 [ 2679ULL ] = ( int32_T ) ( X [ 238ULL ] != 0.0 ) ; t446
[ 2680ULL ] = ( int32_T ) ( X [ 238ULL ] != 0.0 ) ; t446 [ 2681ULL ] = (
int32_T ) ( intrm_sf_mf_437 != 0.0 ) ; t446 [ 2682ULL ] = 1 ; t446 [ 2683ULL
] = 1 ; t446 [ 2684ULL ] = 1 ; t446 [ 2685ULL ] = 1 ; t446 [ 2686ULL ] = 1 ;
t446 [ 2687ULL ] = 1 ; t446 [ 2688ULL ] = ( int32_T ) ( X [ 35ULL ] != 0.0 )
; t446 [ 2689ULL ] = ( int32_T ) ( X [ 35ULL ] != 0.0 ) ; t446 [ 2690ULL ] =
1 ; t446 [ 2691ULL ] = 1 ; t446 [ 2692ULL ] = 1 ; t446 [ 2693ULL ] = (
int32_T ) ( X [ 35ULL ] != 0.0 ) ; t446 [ 2694ULL ] = ( int32_T ) ( X [ 35ULL
] != 0.0 ) ; t446 [ 2695ULL ] = 1 ; t446 [ 2696ULL ] = 1 ; t446 [ 2697ULL ] =
1 ; t446 [ 2698ULL ] = ( int32_T ) ( X [ 290ULL ] != 0.0 ) ; t446 [ 2699ULL ]
= ( int32_T ) ( ( X [ 244ULL ] * 0.00347041471455839 == X [ 244ULL ] *
0.00347041471455839 ) && ( fabs ( X [ 244ULL ] * 0.00347041471455839 ) !=
pmf_get_inf ( ) ) ) ; t446 [ 2700ULL ] = ( int32_T ) ( ( ! ( X [ 244ULL ] *
0.00347041471455839 == X [ 244ULL ] * 0.00347041471455839 ) ) || ( ! ( fabs (
X [ 244ULL ] * 0.00347041471455839 ) != pmf_get_inf ( ) ) ) || ( X [ 244ULL ]
* 0.00347041471455839 >= 0.0 ) ) ; t446 [ 2701ULL ] = ( int32_T ) ( X [
303ULL ] != 0.0 ) ; t446 [ 2702ULL ] = ( int32_T ) ( X [ 303ULL ] != 0.0 ) ;
t446 [ 2703ULL ] = 1 ; t446 [ 2704ULL ] = 1 ; t446 [ 2705ULL ] = 1 ; t446 [
2706ULL ] = ( int32_T ) ( X [ 306ULL ] != 0.0 ) ; t446 [ 2707ULL ] = (
int32_T ) ( X [ 306ULL ] != 0.0 ) ; t446 [ 2708ULL ] = 1 ; t446 [ 2709ULL ] =
1 ; t446 [ 2710ULL ] = 1 ; t446 [ 2711ULL ] = ( int32_T ) ( X [ 42ULL ] !=
0.0 ) ; t446 [ 2712ULL ] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t446 [
2713ULL ] = 1 ; t446 [ 2714ULL ] = 1 ; t446 [ 2715ULL ] = 1 ; t446 [ 2716ULL
] = ( int32_T ) ( X [ 42ULL ] != 0.0 ) ; t446 [ 2717ULL ] = ( int32_T ) ( X [
42ULL ] != 0.0 ) ; t446 [ 2718ULL ] = 1 ; t446 [ 2719ULL ] = 1 ; t446 [
2720ULL ] = 1 ; t446 [ 2721ULL ] = ( int32_T ) ( X [ 317ULL ] != 0.0 ) ; t446
[ 2722ULL ] = ( int32_T ) ( X [ 317ULL ] != 0.0 ) ; t446 [ 2723ULL ] = 1 ;
t446 [ 2724ULL ] = 1 ; t446 [ 2725ULL ] = 1 ; t446 [ 2726ULL ] = ( int32_T )
( X [ 320ULL ] != 0.0 ) ; t446 [ 2727ULL ] = ( int32_T ) ( X [ 320ULL ] !=
0.0 ) ; t446 [ 2728ULL ] = 1 ; t446 [ 2729ULL ] = 1 ; t446 [ 2730ULL ] = 1 ;
t446 [ 2731ULL ] = ( int32_T ) ( X [ 43ULL ] != 0.0 ) ; t446 [ 2732ULL ] = (
int32_T ) ( X [ 43ULL ] != 0.0 ) ; t446 [ 2733ULL ] = 1 ; t446 [ 2734ULL ] =
1 ; t446 [ 2735ULL ] = 1 ; t446 [ 2736ULL ] = ( int32_T ) ( X [ 43ULL ] !=
0.0 ) ; t446 [ 2737ULL ] = ( int32_T ) ( X [ 43ULL ] != 0.0 ) ; t446 [
2738ULL ] = 1 ; t446 [ 2739ULL ] = 1 ; t446 [ 2740ULL ] = 1 ; t446 [ 2741ULL
] = ( int32_T ) ( X [ 331ULL ] != 0.0 ) ; t446 [ 2742ULL ] = ( int32_T ) ( X
[ 331ULL ] != 0.0 ) ; t446 [ 2743ULL ] = 1 ; t446 [ 2744ULL ] = 1 ; t446 [
2745ULL ] = 1 ; t446 [ 2746ULL ] = ( int32_T ) ( X [ 333ULL ] != 0.0 ) ; t446
[ 2747ULL ] = ( int32_T ) ( X [ 333ULL ] != 0.0 ) ; t446 [ 2748ULL ] = 1 ;
t446 [ 2749ULL ] = 1 ; t446 [ 2750ULL ] = 1 ; t446 [ 2751ULL ] = ( int32_T )
( X [ 44ULL ] != 0.0 ) ; t446 [ 2752ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0
) ; t446 [ 2753ULL ] = 1 ; t446 [ 2754ULL ] = 1 ; t446 [ 2755ULL ] = 1 ; t446
[ 2756ULL ] = ( int32_T ) ( X [ 44ULL ] != 0.0 ) ; t446 [ 2757ULL ] = (
int32_T ) ( X [ 44ULL ] != 0.0 ) ; t446 [ 2758ULL ] = 1 ; t446 [ 2759ULL ] =
1 ; t446 [ 2760ULL ] = 1 ; t446 [ 2761ULL ] = ( int32_T ) ( X [ 352ULL ] !=
0.0 ) ; t446 [ 2762ULL ] = ( int32_T ) ( X [ 352ULL ] != 0.0 ) ; t446 [
2763ULL ] = 1 ; t446 [ 2764ULL ] = 1 ; t446 [ 2765ULL ] = 1 ; t446 [ 2766ULL
] = ( int32_T ) ( X [ 355ULL ] != 0.0 ) ; t446 [ 2767ULL ] = ( int32_T ) ( X
[ 355ULL ] != 0.0 ) ; t446 [ 2768ULL ] = 1 ; t446 [ 2769ULL ] = 1 ; t446 [
2770ULL ] = 1 ; t446 [ 2771ULL ] = ( int32_T ) ( X [ 48ULL ] != 0.0 ) ; t446
[ 2772ULL ] = ( int32_T ) ( X [ 48ULL ] != 0.0 ) ; t446 [ 2773ULL ] = 1 ;
t446 [ 2774ULL ] = 1 ; t446 [ 2775ULL ] = 1 ; t446 [ 2776ULL ] = ( int32_T )
( X [ 48ULL ] != 0.0 ) ; t446 [ 2777ULL ] = ( int32_T ) ( X [ 48ULL ] != 0.0
) ; t446 [ 2778ULL ] = 1 ; t446 [ 2779ULL ] = 1 ; t446 [ 2780ULL ] = 1 ; t446
[ 2781ULL ] = 1 ; t446 [ 2782ULL ] = 1 ; t446 [ 2783ULL ] = 1 ; t446 [
2784ULL ] = ( int32_T ) ( X [ 390ULL ] != 0.0 ) ; t446 [ 2785ULL ] = (
int32_T ) ( X [ 390ULL ] != 0.0 ) ; t446 [ 2786ULL ] = 1 ; t446 [ 2787ULL ] =
1 ; t446 [ 2788ULL ] = 1 ; t446 [ 2789ULL ] = ( int32_T ) ( X [ 394ULL ] !=
0.0 ) ; t446 [ 2790ULL ] = ( int32_T ) ( X [ 394ULL ] != 0.0 ) ; t446 [
2791ULL ] = 1 ; t446 [ 2792ULL ] = 1 ; t446 [ 2793ULL ] = 1 ; t446 [ 2794ULL
] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t446 [ 2795ULL ] = ( int32_T ) ( X [
50ULL ] != 0.0 ) ; t446 [ 2796ULL ] = 1 ; t446 [ 2797ULL ] = 1 ; t446 [
2798ULL ] = 1 ; t446 [ 2799ULL ] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t446
[ 2800ULL ] = ( int32_T ) ( X [ 50ULL ] != 0.0 ) ; t446 [ 2801ULL ] = 1 ;
t446 [ 2802ULL ] = 1 ; t446 [ 2803ULL ] = 1 ; t446 [ 2804ULL ] = 1 ; t446 [
2805ULL ] = 1 ; t446 [ 2806ULL ] = 1 ; t446 [ 2807ULL ] = 1 ; t446 [ 2808ULL
] = 1 ; t446 [ 2809ULL ] = 1 ; t446 [ 2810ULL ] = ( int32_T ) ( X [ 407ULL ]
!= 0.0 ) ; t446 [ 2811ULL ] = ( int32_T ) ( X [ 407ULL ] != 0.0 ) ; t446 [
2812ULL ] = ( int32_T ) ( intrm_sf_mf_1259 != 0.0 ) ; t446 [ 2813ULL ] = 1 ;
t446 [ 2814ULL ] = 1 ; t446 [ 2815ULL ] = 1 ; t446 [ 2816ULL ] = ( int32_T )
( X [ 414ULL ] != 0.0 ) ; t446 [ 2817ULL ] = ( int32_T ) ( X [ 414ULL ] !=
0.0 ) ; t446 [ 2818ULL ] = 1 ; t446 [ 2819ULL ] = 1 ; t446 [ 2820ULL ] = 1 ;
t446 [ 2821ULL ] = ( int32_T ) ( X [ 417ULL ] != 0.0 ) ; t446 [ 2822ULL ] = (
int32_T ) ( X [ 417ULL ] != 0.0 ) ; t446 [ 2823ULL ] = 1 ; t446 [ 2824ULL ] =
1 ; t446 [ 2825ULL ] = 1 ; t446 [ 2826ULL ] = ( int32_T ) ( X [ 53ULL ] !=
0.0 ) ; t446 [ 2827ULL ] = ( int32_T ) ( X [ 53ULL ] != 0.0 ) ; t446 [
2828ULL ] = 1 ; t446 [ 2829ULL ] = 1 ; t446 [ 2830ULL ] = 1 ; t446 [ 2831ULL
] = ( int32_T ) ( X [ 53ULL ] != 0.0 ) ; t446 [ 2832ULL ] = ( int32_T ) ( X [
53ULL ] != 0.0 ) ; t446 [ 2833ULL ] = 1 ; t446 [ 2834ULL ] = 1 ; t446 [
2835ULL ] = 1 ; t446 [ 2836ULL ] = ( int32_T ) ( X [ 428ULL ] != 0.0 ) ; t446
[ 2837ULL ] = ( int32_T ) ( X [ 428ULL ] != 0.0 ) ; t446 [ 2838ULL ] = 1 ;
t446 [ 2839ULL ] = 1 ; t446 [ 2840ULL ] = 1 ; t446 [ 2841ULL ] = ( int32_T )
( X [ 430ULL ] != 0.0 ) ; t446 [ 2842ULL ] = ( int32_T ) ( X [ 430ULL ] !=
0.0 ) ; t446 [ 2843ULL ] = 1 ; t446 [ 2844ULL ] = 1 ; t446 [ 2845ULL ] = 1 ;
t446 [ 2846ULL ] = ( int32_T ) ( X [ 54ULL ] != 0.0 ) ; t446 [ 2847ULL ] = (
int32_T ) ( X [ 54ULL ] != 0.0 ) ; t446 [ 2848ULL ] = 1 ; t446 [ 2849ULL ] =
1 ; t446 [ 2850ULL ] = 1 ; t446 [ 2851ULL ] = ( int32_T ) ( X [ 54ULL ] !=
0.0 ) ; t446 [ 2852ULL ] = ( int32_T ) ( X [ 54ULL ] != 0.0 ) ; t446 [
2853ULL ] = 1 ; t446 [ 2854ULL ] = 1 ; t446 [ 2855ULL ] = 1 ; t446 [ 2856ULL
] = ( int32_T ) ( X [ 62ULL ] != 0.0 ) ; for ( b = 0 ; b < 2857 ; b ++ ) {
out . mX [ b ] = t446 [ b ] ; } ( void ) LC ; ( void ) t2029 ; return 0 ; }
