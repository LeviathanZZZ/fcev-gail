/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_assert.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_assert(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t2372, NeDsMethodOutput *t2373)
{
  ETTS0 ac_efOut;
  ETTS0 ad_efOut;
  ETTS0 ae_efOut;
  ETTS0 be_efOut;
  ETTS0 bf_efOut;
  ETTS0 bg_efOut;
  ETTS0 bi_efOut;
  ETTS0 c_efOut;
  ETTS0 cb_efOut;
  ETTS0 cd_efOut;
  ETTS0 dd_efOut;
  ETTS0 de_efOut;
  ETTS0 df_efOut;
  ETTS0 dg_efOut;
  ETTS0 e_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 eh_efOut;
  ETTS0 fd_efOut;
  ETTS0 fe_efOut;
  ETTS0 gb_efOut;
  ETTS0 hd_efOut;
  ETTS0 i_efOut;
  ETTS0 ib_efOut;
  ETTS0 ie_efOut;
  ETTS0 jc_efOut;
  ETTS0 je_efOut;
  ETTS0 k_efOut;
  ETTS0 kd_efOut;
  ETTS0 ld_efOut;
  ETTS0 le_efOut;
  ETTS0 lh_efOut;
  ETTS0 li_efOut;
  ETTS0 nd_efOut;
  ETTS0 ne_efOut;
  ETTS0 nf_efOut;
  ETTS0 ng_efOut;
  ETTS0 pd_efOut;
  ETTS0 ph_efOut;
  ETTS0 pi_efOut;
  ETTS0 qc_efOut;
  ETTS0 rc_efOut;
  ETTS0 sb_efOut;
  ETTS0 se_efOut;
  ETTS0 t55;
  ETTS0 t61;
  ETTS0 t74;
  ETTS0 t75;
  ETTS0 t77;
  ETTS0 t78;
  ETTS0 t79;
  ETTS0 t81;
  ETTS0 t82;
  ETTS0 t84;
  ETTS0 tc_efOut;
  ETTS0 u_efOut;
  ETTS0 ud_efOut;
  ETTS0 ue_efOut;
  ETTS0 uf_efOut;
  ETTS0 ug_efOut;
  ETTS0 uh_efOut;
  ETTS0 ui_efOut;
  ETTS0 vc_efOut;
  ETTS0 wc_efOut;
  ETTS0 wd_efOut;
  ETTS0 we_efOut;
  ETTS0 wf_efOut;
  ETTS0 xd_efOut;
  ETTS0 yc_efOut;
  ETTS0 yg_efOut;
  ETTS0 yh_efOut;
  PmIntVector out;
  real_T X[480];
  real_T ab_efOut[1];
  real_T af_efOut[1];
  real_T ag_efOut[1];
  real_T ah_efOut[1];
  real_T ai_efOut[1];
  real_T aj_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T bh_efOut[1];
  real_T bj_efOut[1];
  real_T cc_efOut[1];
  real_T ce_efOut[1];
  real_T cf_efOut[1];
  real_T cg_efOut[1];
  real_T ch_efOut[1];
  real_T ci_efOut[1];
  real_T d_efOut[1];
  real_T db_efOut[1];
  real_T dc_efOut[1];
  real_T dh_efOut[1];
  real_T di_efOut[1];
  real_T eb_efOut[1];
  real_T ed_efOut[1];
  real_T ee_efOut[1];
  real_T ef_efOut[1];
  real_T eg_efOut[1];
  real_T ei_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T fc_efOut[1];
  real_T ff_efOut[1];
  real_T fg_efOut[1];
  real_T fh_efOut[1];
  real_T fi_efOut[1];
  real_T g_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T ge_efOut[1];
  real_T gf_efOut[1];
  real_T gg_efOut[1];
  real_T gh_efOut[1];
  real_T gi_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T he_efOut[1];
  real_T hf_efOut[1];
  real_T hg_efOut[1];
  real_T hh_efOut[1];
  real_T hi_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T if_efOut[1];
  real_T ig_efOut[1];
  real_T ih_efOut[1];
  real_T ii_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T jd_efOut[1];
  real_T jf_efOut[1];
  real_T jg_efOut[1];
  real_T jh_efOut[1];
  real_T ji_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T ke_efOut[1];
  real_T kf_efOut[1];
  real_T kg_efOut[1];
  real_T kh_efOut[1];
  real_T ki_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T lf_efOut[1];
  real_T lg_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T me_efOut[1];
  real_T mf_efOut[1];
  real_T mg_efOut[1];
  real_T mh_efOut[1];
  real_T mi_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T nh_efOut[1];
  real_T ni_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T od_efOut[1];
  real_T oe_efOut[1];
  real_T of_efOut[1];
  real_T og_efOut[1];
  real_T oh_efOut[1];
  real_T oi_efOut[1];
  real_T p_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T pe_efOut[1];
  real_T pf_efOut[1];
  real_T pg_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qd_efOut[1];
  real_T qe_efOut[1];
  real_T qf_efOut[1];
  real_T qg_efOut[1];
  real_T qh_efOut[1];
  real_T qi_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rd_efOut[1];
  real_T re_efOut[1];
  real_T rf_efOut[1];
  real_T rg_efOut[1];
  real_T rh_efOut[1];
  real_T ri_efOut[1];
  real_T s_efOut[1];
  real_T sc_efOut[1];
  real_T sd_efOut[1];
  real_T sf_efOut[1];
  real_T sg_efOut[1];
  real_T sh_efOut[1];
  real_T si_efOut[1];
  real_T t103[1];
  real_T t636[1];
  real_T t637[1];
  real_T t638[1];
  real_T t639[1];
  real_T t640[1];
  real_T t641[1];
  real_T t643[1];
  real_T t782[1];
  real_T t93[1];
  real_T t98[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T td_efOut[1];
  real_T te_efOut[1];
  real_T tf_efOut[1];
  real_T tg_efOut[1];
  real_T th_efOut[1];
  real_T ti_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vd_efOut[1];
  real_T ve_efOut[1];
  real_T vf_efOut[1];
  real_T vg_efOut[1];
  real_T vh_efOut[1];
  real_T vi_efOut[1];
  real_T w_efOut[1];
  real_T wb_efOut[1];
  real_T wg_efOut[1];
  real_T wh_efOut[1];
  real_T wi_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xe_efOut[1];
  real_T xf_efOut[1];
  real_T xg_efOut[1];
  real_T xh_efOut[1];
  real_T xi_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yd_efOut[1];
  real_T ye_efOut[1];
  real_T yf_efOut[1];
  real_T yi_efOut[1];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_x_ws_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12;
  real_T U_idx_1;
  real_T U_idx_10;
  real_T U_idx_11;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_6;
  real_T U_idx_8;
  real_T intrm_sf_mf_1011;
  real_T intrm_sf_mf_104;
  real_T intrm_sf_mf_1117;
  real_T intrm_sf_mf_1124;
  real_T intrm_sf_mf_1138;
  real_T intrm_sf_mf_1141;
  real_T intrm_sf_mf_116;
  real_T intrm_sf_mf_1278;
  real_T intrm_sf_mf_1279;
  real_T intrm_sf_mf_1320;
  real_T intrm_sf_mf_1338;
  real_T intrm_sf_mf_148;
  real_T intrm_sf_mf_1517;
  real_T intrm_sf_mf_1564;
  real_T intrm_sf_mf_1567;
  real_T intrm_sf_mf_1572;
  real_T intrm_sf_mf_1576;
  real_T intrm_sf_mf_1580;
  real_T intrm_sf_mf_1642;
  real_T intrm_sf_mf_183;
  real_T intrm_sf_mf_204;
  real_T intrm_sf_mf_255;
  real_T intrm_sf_mf_256;
  real_T intrm_sf_mf_357;
  real_T intrm_sf_mf_393;
  real_T intrm_sf_mf_394;
  real_T intrm_sf_mf_417;
  real_T intrm_sf_mf_418;
  real_T intrm_sf_mf_45;
  real_T intrm_sf_mf_492;
  real_T intrm_sf_mf_514;
  real_T intrm_sf_mf_521;
  real_T intrm_sf_mf_537;
  real_T intrm_sf_mf_550;
  real_T intrm_sf_mf_720;
  real_T intrm_sf_mf_83;
  real_T t1002;
  real_T t1003;
  real_T t1007;
  real_T t1010;
  real_T t1011;
  real_T t1015;
  real_T t1018;
  real_T t1019;
  real_T t1024;
  real_T t1033;
  real_T t1036;
  real_T t1039;
  real_T t1051;
  real_T t1054;
  real_T t1066;
  real_T t1072;
  real_T t1081;
  real_T t1082;
  real_T t1083;
  real_T t1084;
  real_T t1085;
  real_T t1087;
  real_T t1088;
  real_T t1089;
  real_T t1090;
  real_T t1091;
  real_T t1093;
  real_T t1095;
  real_T t1096;
  real_T t1098;
  real_T t1101;
  real_T t1102;
  real_T t1104;
  real_T t1105;
  real_T t1106;
  real_T t1108;
  real_T t1111;
  real_T t1115;
  real_T t1116;
  real_T t1118;
  real_T t1119;
  real_T t1123;
  real_T t1125;
  real_T t1126;
  real_T t1129;
  real_T t1130;
  real_T t1132;
  real_T t1133;
  real_T t1134;
  real_T t1135;
  real_T t1136;
  real_T t1137;
  real_T t1139;
  real_T t1141;
  real_T t1142;
  real_T t1144;
  real_T t1145;
  real_T t1148;
  real_T t1149;
  real_T t1150;
  real_T t1153;
  real_T t1154;
  real_T t1155;
  real_T t1157;
  real_T t1158;
  real_T t1159;
  real_T t1160;
  real_T t1161;
  real_T t1162;
  real_T t1165;
  real_T t1166;
  real_T t1168;
  real_T t1169;
  real_T t1170;
  real_T t1171;
  real_T t1173;
  real_T t1174;
  real_T t1176;
  real_T t1177;
  real_T t1179;
  real_T t1183;
  real_T t1185;
  real_T t1186;
  real_T t1187;
  real_T t1188;
  real_T t1189;
  real_T t1190;
  real_T t1192;
  real_T t1193;
  real_T t1195;
  real_T t1196;
  real_T t1198;
  real_T t1199;
  real_T t1202;
  real_T t1205;
  real_T t1207;
  real_T t1208;
  real_T t1209;
  real_T t1211;
  real_T t1215;
  real_T t1216;
  real_T t1218;
  real_T t1223;
  real_T t1225;
  real_T t1226;
  real_T t1228;
  real_T t1230;
  real_T t1231;
  real_T t1232;
  real_T t1234;
  real_T t1236;
  real_T t1237;
  real_T t1238;
  real_T t1239;
  real_T t1240;
  real_T t1242;
  real_T t1243;
  real_T t1244;
  real_T t1245;
  real_T t1247;
  real_T t1248;
  real_T t1249;
  real_T t1251;
  real_T t1252;
  real_T t1253;
  real_T t1254;
  real_T t1255;
  real_T t1256;
  real_T t1257;
  real_T t1258;
  real_T t1259;
  real_T t1260;
  real_T t1261;
  real_T t1262;
  real_T t1263;
  real_T t1264;
  real_T t1265;
  real_T t1266;
  real_T t1268;
  real_T t1269;
  real_T t1270;
  real_T t1271;
  real_T t1272;
  real_T t1274;
  real_T t1275;
  real_T t1276;
  real_T t1277;
  real_T t1279;
  real_T t1280;
  real_T t1281;
  real_T t1282;
  real_T t1283;
  real_T t1285;
  real_T t1286;
  real_T t1288;
  real_T t1289;
  real_T t1290;
  real_T t1291;
  real_T t1292;
  real_T t1293;
  real_T t1295;
  real_T t1299;
  real_T t1300;
  real_T t1301;
  real_T t1302;
  real_T t1303;
  real_T t1305;
  real_T t1309;
  real_T t1310;
  real_T t1312;
  real_T t1313;
  real_T t1315;
  real_T t1316;
  real_T t1318;
  real_T t1319;
  real_T t1320;
  real_T t1321;
  real_T t1322;
  real_T t1323;
  real_T t1326;
  real_T t1327;
  real_T t1329;
  real_T t1330;
  real_T t1333;
  real_T t1334;
  real_T t1335;
  real_T t1336;
  real_T t1337;
  real_T t1339;
  real_T t1340;
  real_T t1341;
  real_T t1342;
  real_T t1345;
  real_T t1346;
  real_T t1347;
  real_T t1348;
  real_T t1350;
  real_T t1351;
  real_T t1352;
  real_T t1353;
  real_T t1354;
  real_T t1355;
  real_T t1357;
  real_T t1358;
  real_T t1360;
  real_T t1361;
  real_T t1362;
  real_T t1363;
  real_T t1364;
  real_T t1366;
  real_T t1371;
  real_T t1372;
  real_T t1373;
  real_T t1374;
  real_T t1377;
  real_T t1379;
  real_T t1381;
  real_T t1382;
  real_T t1383;
  real_T t1384;
  real_T t1385;
  real_T t1391;
  real_T t1392;
  real_T t1393;
  real_T t1394;
  real_T t1396;
  real_T t1401;
  real_T t1403;
  real_T t1404;
  real_T t1405;
  real_T t1406;
  real_T t1407;
  real_T t1409;
  real_T t1410;
  real_T t1411;
  real_T t1413;
  real_T t1414;
  real_T t1417;
  real_T t1418;
  real_T t1419;
  real_T t1420;
  real_T t1422;
  real_T t1423;
  real_T t1425;
  real_T t1426;
  real_T t1428;
  real_T t1429;
  real_T t1430;
  real_T t1432;
  real_T t1433;
  real_T t1434;
  real_T t1435;
  real_T t1436;
  real_T t1437;
  real_T t1439;
  real_T t1440;
  real_T t1441;
  real_T t1443;
  real_T t1444;
  real_T t1446;
  real_T t1447;
  real_T t1448;
  real_T t1449;
  real_T t1450;
  real_T t1452;
  real_T t1454;
  real_T t1459;
  real_T t1461;
  real_T t1462;
  real_T t1463;
  real_T t1464;
  real_T t1465;
  real_T t1468;
  real_T t1469;
  real_T t1470;
  real_T t1472;
  real_T t1474;
  real_T t1475;
  real_T t1477;
  real_T t1478;
  real_T t1480;
  real_T t1483;
  real_T t1484;
  real_T t1486;
  real_T t1487;
  real_T t1488;
  real_T t1489;
  real_T t1495;
  real_T t1496;
  real_T t1497;
  real_T t1500;
  real_T t1502;
  real_T t1504;
  real_T t1505;
  real_T t1507;
  real_T t1508;
  real_T t1509;
  real_T t1511;
  real_T t1512;
  real_T t1514;
  real_T t1515;
  real_T t1516;
  real_T t1517;
  real_T t1518;
  real_T t1519;
  real_T t1520;
  real_T t1521;
  real_T t1522;
  real_T t1523;
  real_T t1524;
  real_T t1527;
  real_T t1528;
  real_T t1529;
  real_T t1530;
  real_T t1533;
  real_T t1534;
  real_T t1535;
  real_T t1536;
  real_T t1537;
  real_T t1538;
  real_T t1539;
  real_T t1540;
  real_T t1541;
  real_T t1542;
  real_T t1544;
  real_T t1545;
  real_T t1547;
  real_T t1548;
  real_T t1549;
  real_T t1550;
  real_T t1551;
  real_T t1552;
  real_T t1553;
  real_T t1554;
  real_T t1556;
  real_T t1558;
  real_T t1559;
  real_T t1560;
  real_T t1561;
  real_T t1562;
  real_T t1564;
  real_T t1565;
  real_T t1567;
  real_T t1570;
  real_T t1571;
  real_T t1572;
  real_T t1573;
  real_T t1580;
  real_T t1581;
  real_T t1586;
  real_T t1588;
  real_T t1589;
  real_T t1591;
  real_T t1593;
  real_T t1594;
  real_T t1597;
  real_T t1598;
  real_T t1599;
  real_T t1600;
  real_T t1601;
  real_T t1602;
  real_T t1603;
  real_T t1606;
  real_T t1608;
  real_T t1609;
  real_T t1610;
  real_T t1611;
  real_T t1615;
  real_T t1616;
  real_T t1618;
  real_T t1620;
  real_T t1621;
  real_T t1623;
  real_T t1627;
  real_T t1630;
  real_T t1631;
  real_T t1643;
  real_T t1662;
  real_T t1678;
  real_T t1682;
  real_T t1687;
  real_T t1698;
  real_T t1701;
  real_T t1706;
  real_T t1723;
  real_T t1743;
  real_T t1760;
  real_T t1764;
  real_T t1770;
  real_T t1775;
  real_T t1776;
  real_T t1789;
  real_T t1805;
  real_T t1825;
  real_T t1839;
  real_T t1844;
  real_T t1850;
  real_T t1861;
  real_T t1863;
  real_T t1868;
  real_T t1892;
  real_T t1926;
  real_T t1929;
  real_T t1937;
  real_T t1947;
  real_T t1955;
  real_T t1970;
  real_T t1973;
  real_T t1976;
  real_T t2121;
  real_T t2338;
  real_T t2357;
  real_T t2371;
  real_T t60_idx_0;
  real_T t642_idx_0;
  real_T t70_idx_0;
  real_T t780_idx_0;
  real_T t786_idx_0;
  real_T t987;
  real_T t994;
  real_T t995;
  size_t t239[1];
  size_t t242[1];
  size_t t94[1];
  size_t t95[1];
  int32_T t634[3170];
  int32_T M[259];
  int32_T b;
  boolean_T intrm_sf_mf_1665;
  boolean_T t87;
  boolean_T t88;
  boolean_T t89;
  boolean_T t90;
  boolean_T t91;
  boolean_T t92;
  for (b = 0; b < 259; b++) {
    M[b] = t2372->mM.mX[b];
  }

  U_idx_1 = t2372->mU.mX[1];
  U_idx_2 = t2372->mU.mX[2];
  U_idx_3 = t2372->mU.mX[3];
  U_idx_4 = t2372->mU.mX[4];
  U_idx_6 = t2372->mU.mX[6];
  U_idx_8 = t2372->mU.mX[8];
  U_idx_10 = t2372->mU.mX[10];
  U_idx_11 = t2372->mU.mX[11];
  for (b = 0; b < 480; b++) {
    X[b] = t2372->mX.mX[b];
  }

  out = t2373->mASSERT;
  t2357 = X[0ULL] * 5.2410901467505238E-5;
  if (X[103ULL] < 0.0) {
    t2371 = X[103ULL] * 17.81 + 0.043;
  } else if (X[103ULL] <= 1.0) {
    t2371 = ((X[103ULL] * 17.81 + 0.043) - X[103ULL] * X[103ULL] * 39.85) + X
      [103ULL] * X[103ULL] * X[103ULL] * 36.0;
  } else {
    t2371 = (X[103ULL] - 1.0) * 1.4 + 14.003;
  }

  if (X[104ULL] < 0.0) {
    t2121 = X[104ULL] * 17.81 + 0.043;
  } else if (X[104ULL] <= 1.0) {
    t2121 = ((X[104ULL] * 17.81 + 0.043) - X[104ULL] * X[104ULL] * 39.85) + X
      [104ULL] * X[104ULL] * X[104ULL] * 36.0;
  } else {
    t2121 = (X[104ULL] - 1.0) * 1.4 + 14.003;
  }

  if (X[73ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 = -X[73ULL] /
      0.028;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 = 0.0;
  }

  t93[0ULL] = X[18ULL];
  t94[0] = 52ULL;
  t95[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t93[0ULL], &t94
    [0ULL], &t95[0ULL]);
  t55 = efOut;
  tlu2_1d_linear_nearest_value(&b_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95[0ULL]);
  t98[0] = b_efOut[0];
  t1082 = t98[0ULL];
  t987 = (X[85ULL] + X[91ULL]) / 2.0;
  t995 = (X[95ULL] + X[100ULL]) / 2.0;
  t98[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&c_efOut.mField0[0ULL], &c_efOut.mField1[0ULL],
    &c_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t98[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t61 = c_efOut;
  tlu2_1d_linear_linear_value(&d_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t70_idx_0 = d_efOut[0];
  t1003 = pmf_exp(pmf_log(t987) - t70_idx_0);
  t1011 = pmf_exp(pmf_log(t995) - t70_idx_0);
  t2371 = (t2371 + t2121) / 2.0;
  if (t2371 >= 1.0) {
    t2121 = t2371 * 0.005139 - 0.00326;
  } else {
    t2121 = 0.0018790000000000005;
  }

  t2371 = pmf_exp((0.003298697014679202 - 1.0 / (X[18ULL] == 0.0 ? 1.0E-16 : X
    [18ULL])) * 1268.0) * t2121;
  t1007 = t1011 * ((X[94ULL] + X[99ULL]) / 2.0);
  t2121 = t1007 >= 1.0E-9 ? t1007 : 1.0E-6;
  t1007 = t987 * ((X[83ULL] + X[88ULL]) / 2.0) / 1.01325;
  if (t1007 * 1.0E-5 >= 1.0E-9) {
    t994 = t1007 * 1.0E-5;
  } else {
    t994 = 1.0E-6;
  }

  t1007 = t995 * ((X[93ULL] + X[98ULL]) / 2.0) / 1.01325;
  if (t1007 * 1.0E-5 >= 1.0E-9) {
    t1002 = t1007 * 1.0E-5;
  } else {
    t1002 = 1.0E-6;
  }

  if (X[138ULL] <= 0.0) {
    t1007 = 0.0;
  } else {
    t1007 = X[138ULL] >= 1.0 ? 1.0 : X[138ULL];
  }

  if (X[139ULL] <= 0.0) {
    t1010 = 0.0;
  } else {
    t1010 = X[139ULL] >= 1.0 ? 1.0 : X[139ULL];
  }

  t1015 = (((1.0 - t1007) - t1010) * 296.802103844292 + t1007 * 461.523) + t1010
    * 4124.48151675695;
  t1007 = -X[145ULL] + U_idx_2 * -0.01;
  if (X[21ULL] <= 0.0) {
    t1010 = 0.0;
  } else {
    t1010 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    t1018 = 0.0;
  } else {
    t1018 = X[22ULL] >= 1.0 ? 1.0 : X[22ULL];
  }

  t1083 = (((1.0 - t1010) - t1018) * 296.802103844292 + t1010 * 461.523) + t1018
    * 4124.48151675695;
  t1084 = (X[19ULL] / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) - X[146ULL] / (X
            [147ULL] == 0.0 ? 1.0E-16 : X[147ULL])) * t1007 * t1083 /
    7.8539816339744827E-5;
  if (X[146ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[146ULL] >= 623.15 ? 623.15 : X[146ULL];
  }

  t1088 = t1085 * t1085;
  t1087 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1088 *
            0.00037212980109010952) * ((1.0 - t1010) - t1018) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1088 *
            -0.00038614513167842338) * t1010) + ((12825.281119790017 + t1085 *
    6.9647057412830984) + t1088 * -0.007052486824683288) * t1018;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = t1087 -
    t1083;
  t1088 = t1087 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1);
  t1089 = pmf_sqrt(t1084 * t1084 * 9.999999999999999E-14 + fabs(X[146ULL] *
    t1088 * t1083) * 1.0E-9);
  if (X[148ULL] <= 0.0) {
    t1090 = 0.0;
  } else {
    t1090 = X[148ULL] >= 1.0 ? 1.0 : X[148ULL];
  }

  if (X[149ULL] <= 0.0) {
    t1091 = 0.0;
  } else {
    t1091 = X[149ULL] >= 1.0 ? 1.0 : X[149ULL];
  }

  t103[0ULL] = X[19ULL];
  tlu2_linear_nearest_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t103[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t61 = e_efOut;
  tlu2_1d_linear_nearest_value(&f_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95[0ULL]);
  t636[0] = f_efOut[0];
  tlu2_1d_linear_nearest_value(&g_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95[0ULL]);
  t637[0] = g_efOut[0];
  tlu2_1d_linear_nearest_value(&h_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95[0ULL]);
  t638[0] = h_efOut[0];
  t1095 = (((1.0 - t1090) - t1091) * t636[0ULL] + t637[0ULL] * t1090) + t638
    [0ULL] * t1091;
  t1098 = X[147ULL] * X[147ULL] * t1088;
  t1096 = -pmf_sqrt(fabs(t1098 / (t1083 == 0.0 ? 1.0E-16 : t1083) / (X[146ULL] ==
    0.0 ? 1.0E-16 : X[146ULL]))) * 7.8539816339744827E-5;
  if (t1096 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = t1096 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = -t1096 *
      100000.0;
  }

  t1102 = t1095 * 7.8539816339744827E-5;
  t1085 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 * 0.01
    / (t1102 == 0.0 ? 1.0E-16 : t1102);
  t1104 = X[19ULL] * t1083;
  t1101 = X[20ULL] / (t1104 == 0.0 ? 1.0E-16 : t1104);
  t1106 = t1101 * 1.5707963267948965E-8;
  t1104 = t1096 * t1095 * 35.2 / (t1106 == 0.0 ? 1.0E-16 : t1106);
  t1105 = t1085 >= 1.0 ? t1085 : 1.0;
  intrm_sf_mf_116 = pmf_log10(6.9 / (t1105 == 0.0 ? 1.0E-16 : t1105) +
    0.00017169489553429715) * pmf_log10(6.9 / (t1105 == 0.0 ? 1.0E-16 : t1105) +
    0.00017169489553429715) * 3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I = t1101 *
    1.2337005501361697E-10;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = t1096 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 * (1.0 /
    (intrm_sf_mf_116 == 0.0 ? 1.0E-16 : intrm_sf_mf_116)) * 0.55 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I);
  intrm_sf_mf_45 = (t1085 - 2000.0) / 2000.0;
  intrm_sf_mf_116 = intrm_sf_mf_45 * intrm_sf_mf_45 * 3.0 - intrm_sf_mf_45 *
    intrm_sf_mf_45 * intrm_sf_mf_45 * 2.0;
  if (t1085 <= 2000.0) {
    intrm_sf_mf_45 = t1104 * 1.0E-5;
  } else if (t1085 >= 4000.0) {
    intrm_sf_mf_45 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 * 1.0E-5;
  } else {
    intrm_sf_mf_45 = ((1.0 - intrm_sf_mf_116) * t1104 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1
                      * intrm_sf_mf_116) * 1.0E-5;
  }

  t1089 = t1007 * t1089 / 7.8539816339744827E-5 * 0.00031622776601683789 +
    intrm_sf_mf_45;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 = -((X[19ULL] /
    (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) - X[150ULL] / (X[151ULL] == 0.0 ?
    1.0E-16 : X[151ULL])) * X[133ULL] * t1083) / 7.8539816339744827E-5;
  if (X[150ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[150ULL] >= 623.15 ? 623.15 : X[150ULL];
  }

  t1024 = t1085 * t1085;
  t1104 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1024 *
            0.00037212980109010952) * ((1.0 - t1010) - t1018) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1024 *
            -0.00038614513167842338) * t1010) + ((12825.281119790017 + t1085 *
    6.9647057412830984) + t1024 * -0.007052486824683288) * t1018;
  intrm_sf_mf_104 = t1104 - t1083;
  t1010 = t1104 / (intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104);
  t1018 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
     9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9);
  t1118 = X[151ULL] * X[151ULL] * t1010;
  intrm_sf_mf_45 = -pmf_sqrt(fabs(t1118 / (t1083 == 0.0 ? 1.0E-16 : t1083) / (X
    [150ULL] == 0.0 ? 1.0E-16 : X[150ULL]))) * 7.8539816339744827E-5;
  if (intrm_sf_mf_45 >= 0.0) {
    intrm_sf_mf_116 = intrm_sf_mf_45 * 100000.0;
  } else {
    intrm_sf_mf_116 = -intrm_sf_mf_45 * 100000.0;
  }

  t1024 = intrm_sf_mf_116 * 0.01 / (t1102 == 0.0 ? 1.0E-16 : t1102);
  t1093 = intrm_sf_mf_45 * t1095 * 35.2 / (t1106 == 0.0 ? 1.0E-16 : t1106);
  t1106 = t1024 >= 1.0 ? t1024 : 1.0;
  t1125 = pmf_log10(6.9 / (t1106 == 0.0 ? 1.0E-16 : t1106) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1106 == 0.0 ?
    1.0E-16 : t1106) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_116 = intrm_sf_mf_45 * intrm_sf_mf_116 * (1.0 / (t1125 == 0.0 ?
    1.0E-16 : t1125)) * 0.55 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I);
  t1108 = (t1024 - 2000.0) / 2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I = t1108 * t1108 *
    3.0 - t1108 * t1108 * t1108 * 2.0;
  if (t1024 <= 2000.0) {
    t1108 = t1093 * 1.0E-5;
  } else if (t1024 >= 4000.0) {
    t1108 = intrm_sf_mf_116 * 1.0E-5;
  } else {
    t1108 = ((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I)
             * t1093 + intrm_sf_mf_116 *
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I) *
      1.0E-5;
  }

  t1018 = -(X[133ULL] * t1018) / 7.8539816339744827E-5 * 0.00031622776601683789
    + t1108;
  if (1.0 - X[21ULL] >= 0.01) {
    t1024 = 1.0 - X[21ULL];
  } else if (1.0 - X[21ULL] >= -0.1) {
    t1024 = pmf_exp(((1.0 - X[21ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1024 = 1.6701700790245661E-7;
  }

  t1093 = X[22ULL] / (t1024 == 0.0 ? 1.0E-16 : t1024) * 3827.6794129126583 +
    296.802103844292;
  t636[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t636[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t74 = i_efOut;
  tlu2_1d_linear_linear_value(&j_efOut[0ULL], &t74.mField0[0ULL], &t74.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t60_idx_0 = j_efOut[0];
  t1108 = pmf_exp(pmf_log(X[20ULL] * 100000.0) - t60_idx_0);
  if (t1108 >= 1.0) {
    t1132 = (t1108 - 1.0) * 461.523 + t1093;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I = t1093 / (t1132
      == 0.0 ? 1.0E-16 : t1132);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I = 1.0;
  }

  if (X[144ULL] <= 0.0) {
    intrm_sf_mf_1278 = 0.0;
  } else {
    intrm_sf_mf_1278 = X[144ULL] >= 1.0 ? 1.0 : X[144ULL];
  }

  if (X[143ULL] <= 0.0) {
    t1111 = 0.0;
  } else {
    t1111 = X[143ULL] >= 1.0 ? 1.0 : X[143ULL];
  }

  t1115 = (((1.0 - intrm_sf_mf_1278) - t1111) * 296.802103844292 +
           intrm_sf_mf_1278 * 461.523) + t1111 * 4124.48151675695;
  intrm_sf_mf_1278 = X[144ULL] * 461.523 / (t1115 == 0.0 ? 1.0E-16 : t1115);
  if (intrm_sf_mf_1278 <= 0.0) {
    t1111 = 0.0;
  } else {
    t1111 = intrm_sf_mf_1278 >= 1.0 ? 1.0 : intrm_sf_mf_1278;
  }

  intrm_sf_mf_1278 = X[143ULL] * 4124.48151675695 / (t1115 == 0.0 ? 1.0E-16 :
    t1115);
  if (intrm_sf_mf_1278 <= 0.0) {
    t1116 = 0.0;
  } else {
    t1116 = intrm_sf_mf_1278 >= 1.0 ? 1.0 : intrm_sf_mf_1278;
  }

  intrm_sf_mf_1278 = (t1007 - (-X[133ULL])) / 2.0;
  t637[0ULL] = X[141ULL];
  tlu2_linear_nearest_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t637[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = k_efOut;
  tlu2_1d_linear_nearest_value(&l_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95[0ULL]);
  t639[0] = l_efOut[0];
  tlu2_1d_linear_nearest_value(&m_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95[0ULL]);
  t640[0] = m_efOut[0];
  tlu2_1d_linear_nearest_value(&n_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95[0ULL]);
  t641[0] = n_efOut[0];
  t1119 = (((1.0 - t1111) - t1116) * t639[0ULL] + t640[0ULL] * t1111) + t641
    [0ULL] * t1116;
  t1136 = t1119 + t1095;
  t1085 = t1136 / 2.0 * 7.8539816339744827E-5;
  intrm_sf_mf_104 = -(intrm_sf_mf_1278 <= 0.0 ? intrm_sf_mf_1278 : 0.0) * 0.01 /
    (t1085 == 0.0 ? 1.0E-16 : t1085);
  t1119 = intrm_sf_mf_104 >= 0.0 ? intrm_sf_mf_104 : -intrm_sf_mf_104;
  intrm_sf_mf_104 = t1119 > 1000.0 ? t1119 : 1000.0;
  tlu2_1d_linear_nearest_value(&o_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95[0ULL]);
  t642_idx_0 = o_efOut[0];
  tlu2_1d_linear_nearest_value(&p_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95[0ULL]);
  t643[0] = p_efOut[0];
  tlu2_1d_linear_nearest_value(&q_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95[0ULL]);
  t782[0] = q_efOut[0];
  t1085 = (((1.0 - t1090) - t1091) * t642_idx_0 + t643[0ULL] * t1090) + t782
    [0ULL] * t1091;
  tlu2_1d_linear_nearest_value(&r_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95[0ULL]);
  t786_idx_0 = r_efOut[0];
  tlu2_1d_linear_nearest_value(&s_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95[0ULL]);
  t780_idx_0 = s_efOut[0];
  tlu2_1d_linear_nearest_value(&t_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95[0ULL]);
  intrm_sf_mf_116 = t_efOut[0];
  t1090 = (((1.0 - t1111) - t1116) * t786_idx_0 + t780_idx_0 * t1111) +
    intrm_sf_mf_116 * t1116;
  t1139 = t1085 + t1090;
  if (t1139 / 2.0 > 0.5) {
    t1091 = (t1085 + t1090) / 2.0;
  } else {
    t1091 = 0.5;
  }

  t1141 = pmf_log10(6.9 / (intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104) +
                    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_104 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_104) + 0.00017169489553429715) * 3.24;
  t1111 = 1.0 / (t1141 == 0.0 ? 1.0E-16 : t1141);
  intrm_sf_mf_204 = (pmf_pow(t1091, 0.66666666666666663) - 1.0) * pmf_sqrt(t1111
    / 8.0) * 12.7 + 1.0;
  t1116 = (intrm_sf_mf_104 - 1000.0) * (t1111 / 8.0) * t1091 / (intrm_sf_mf_204 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_204);
  t1123 = (t1119 - 2000.0) / 2000.0;
  t1125 = t1123 * t1123 * 3.0 - t1123 * t1123 * t1123 * 2.0;
  if (t1119 <= 2000.0) {
    t1123 = 3.66;
  } else if (t1119 >= 4000.0) {
    t1123 = t1116;
  } else {
    t1123 = (1.0 - t1125) * 3.66 + t1116 * t1125;
  }

  t1145 = t1123 * 0.031415926535897927;
  t1148 = t1139 / 2.0;
  if (t1119 > t1145 / 7.8539816339744827E-5 / (t1148 == 0.0 ? 1.0E-16 : t1148) /
      30.0) {
    t1154 = (t1085 + t1090) / 2.0;
    t1116 = t1123 * 0.031415926535897927 / (t1119 == 0.0 ? 1.0E-16 : t1119) /
      7.8539816339744827E-5 / (t1154 == 0.0 ? 1.0E-16 : t1154);
  } else {
    t1116 = 30.0;
  }

  if (X[125ULL] <= 0.0) {
    t1090 = 0.0;
  } else {
    t1090 = X[125ULL] >= 1.0 ? 1.0 : X[125ULL];
  }

  if (X[124ULL] <= 0.0) {
    t1123 = 0.0;
  } else {
    t1123 = X[124ULL] >= 1.0 ? 1.0 : X[124ULL];
  }

  t1125 = (((1.0 - t1090) - t1123) * 296.802103844292 + t1090 * 461.523) + t1123
    * 4124.48151675695;
  t1090 = X[125ULL] * 461.523 / (t1125 == 0.0 ? 1.0E-16 : t1125);
  if (t1090 <= 0.0) {
    t1123 = 0.0;
  } else {
    t1123 = t1090 >= 1.0 ? 1.0 : t1090;
  }

  t1090 = X[124ULL] * 4124.48151675695 / (t1125 == 0.0 ? 1.0E-16 : t1125);
  if (t1090 <= 0.0) {
    t1126 = 0.0;
  } else {
    t1126 = t1090 >= 1.0 ? 1.0 : t1090;
  }

  t638[0ULL] = X[122ULL];
  tlu2_linear_nearest_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t638[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t74 = u_efOut;
  tlu2_1d_linear_nearest_value(&v_efOut[0ULL], &t74.mField0[0ULL], &t74.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95[0ULL]);
  t786_idx_0 = v_efOut[0];
  tlu2_1d_linear_nearest_value(&w_efOut[0ULL], &t74.mField0[0ULL], &t74.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95[0ULL]);
  t780_idx_0 = w_efOut[0];
  tlu2_1d_linear_nearest_value(&x_efOut[0ULL], &t74.mField0[0ULL], &t74.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95[0ULL]);
  intrm_sf_mf_116 = x_efOut[0];
  t1090 = (((1.0 - t1123) - t1126) * t786_idx_0 + t780_idx_0 * t1123) +
    intrm_sf_mf_116 * t1126;
  intrm_sf_mf_83 = intrm_sf_mf_1278 >= 0.0 ? intrm_sf_mf_1278 : 0.0;
  tlu2_1d_linear_nearest_value(&y_efOut[0ULL], &t74.mField0[0ULL], &t74.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95[0ULL]);
  t786_idx_0 = y_efOut[0];
  tlu2_1d_linear_nearest_value(&ab_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ab_efOut[0];
  tlu2_1d_linear_nearest_value(&bb_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = bb_efOut[0];
  intrm_sf_mf_1278 = (((1.0 - t1123) - t1126) * t786_idx_0 + t780_idx_0 * t1123)
    + intrm_sf_mf_116 * t1126;
  t1157 = t1095 + intrm_sf_mf_1278;
  t1159 = t1157 / 2.0 * 7.8539816339744827E-5;
  t1123 = intrm_sf_mf_83 * 0.01 / (t1159 == 0.0 ? 1.0E-16 : t1159);
  t1126 = t1123 >= 0.0 ? t1123 : -t1123;
  t1123 = t1126 > 1000.0 ? t1126 : 1000.0;
  t1160 = t1090 + t1085;
  if (t1160 / 2.0 > 0.5) {
    intrm_sf_mf_83 = (t1090 + t1085) / 2.0;
  } else {
    intrm_sf_mf_83 = 0.5;
  }

  t1162 = pmf_log10(6.9 / (t1123 == 0.0 ? 1.0E-16 : t1123) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1123 == 0.0 ?
    1.0E-16 : t1123) + 0.00017169489553429715) * 3.24;
  t1129 = 1.0 / (t1162 == 0.0 ? 1.0E-16 : t1162);
  t1033 = (pmf_pow(intrm_sf_mf_83, 0.66666666666666663) - 1.0) * pmf_sqrt(t1129 /
    8.0) * 12.7 + 1.0;
  t1130 = (t1123 - 1000.0) * (t1129 / 8.0) * intrm_sf_mf_83 / (t1033 == 0.0 ?
    1.0E-16 : t1033);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = (t1126 -
    2000.0) / 2000.0;
  t1132 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 2.0;
  if (t1126 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = 3.66;
  } else if (t1126 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t1130;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = (1.0 -
      t1132) * 3.66 + t1130 * t1132;
  }

  t1166 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
    0.031415926535897927;
  t1169 = t1160 / 2.0;
  if (t1126 > t1166 / 7.8539816339744827E-5 / (t1169 == 0.0 ? 1.0E-16 : t1169) /
      30.0) {
    t1085 = (t1090 + t1085) / 2.0;
    t1130 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
      0.031415926535897927 / (t1126 == 0.0 ? 1.0E-16 : t1126) /
      7.8539816339744827E-5 / (t1085 == 0.0 ? 1.0E-16 : t1085);
  } else {
    t1130 = 30.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = U_idx_1 *
    0.031415926535897927;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 0.0001 <=
      7.8539816339744857E-13) {
    t1132 = 7.8539816339744857E-13;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
             0.0001 >= 3.1415926535897929E-6) {
    t1132 = 3.1415926535897929E-6;
  } else {
    t1132 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
      0.0001;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t1132 /
    7.8539816339744827E-5;
  if (X[168ULL] <= 0.0) {
    t1133 = 0.0;
  } else {
    t1133 = X[168ULL] >= 1.0 ? 1.0 : X[168ULL];
  }

  if (X[169ULL] <= 0.0) {
    t1134 = 0.0;
  } else {
    t1134 = X[169ULL] >= 1.0 ? 1.0 : X[169ULL];
  }

  t1135 = (((1.0 - t1133) - t1134) * 296.802103844292 + t1133 * 461.523) + t1134
    * 4124.48151675695;
  t1177 = X[166ULL] * t1135;
  t1137 = X[167ULL] / (t1177 == 0.0 ? 1.0E-16 : t1177);
  t1085 = X[167ULL] / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL]) * (X[170ULL] /
    (X[166ULL] == 0.0 ? 1.0E-16 : X[166ULL]));
  intrm_sf_mf_183 = X[167ULL] / 1.01325 * (X[171ULL] / (X[166ULL] == 0.0 ?
    1.0E-16 : X[166ULL]));
  t1142 = (X[142ULL] + 1.01325) / 2.0 * 0.0010000000000000009;
  t1141 = (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1)
    * (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1);
  intrm_sf_mf_204 = t1142 * t1141;
  t1144 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 + 1.0)
    * (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
       t1085) - (1.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1
                 * intrm_sf_mf_183) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 2.0;
  intrm_sf_mf_116 = (X[142ULL] - 1.01325) * (t1144 >= t1141 ? t1144 : t1141);
  t1144 = (X[142ULL] - 1.01325) / (t1142 == 0.0 ? 1.0E-16 : t1142);
  t1148 = t1144 * t1144 * 3.0 - t1144 * t1144 * t1144 * 2.0;
  if (X[142ULL] - 1.01325 <= 0.0) {
    t1144 = intrm_sf_mf_204;
  } else if (X[142ULL] - 1.01325 >= t1142) {
    t1144 = intrm_sf_mf_116;
  } else {
    t1144 = (1.0 - t1148) * intrm_sf_mf_204 + intrm_sf_mf_116 * t1148;
  }

  intrm_sf_mf_116 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
     intrm_sf_mf_183) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * t1085) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = (1.01325 -
    X[142ULL]) * (intrm_sf_mf_116 >= t1141 ? intrm_sf_mf_116 : t1141);
  t1085 = (1.01325 - X[142ULL]) / (t1142 == 0.0 ? 1.0E-16 : t1142);
  intrm_sf_mf_183 = t1085 * t1085 * 3.0 - t1085 * t1085 * t1085 * 2.0;
  if (1.01325 - X[142ULL] <= 0.0) {
    t1085 = intrm_sf_mf_204;
  } else if (1.01325 - X[142ULL] >= t1142) {
    t1085 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1;
  } else {
    t1085 = (1.0 - intrm_sf_mf_183) * intrm_sf_mf_204 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 *
      intrm_sf_mf_183;
  }

  if (X[142ULL] > 1.01325) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = t1144;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 = X[142ULL] <
      1.01325 ? t1085 : intrm_sf_mf_204;
  }

  if (X[166ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[166ULL] >= 623.15 ? 623.15 : X[166ULL];
  }

  t1149 = t1085 * t1085;
  intrm_sf_mf_183 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1149
                      * 0.00037212980109010952) * ((1.0 - t1133) - t1134) +
                     ((1479.6504774710445 + t1085 * 1.200211433705052) + t1149 *
                      -0.00038614513167842338) * t1133) + ((12825.281119790017 +
    t1085 * 6.9647057412830984) + t1149 * -0.007052486824683288) * t1134;
  t1188 = intrm_sf_mf_183 - t1135;
  t1189 = X[167ULL] * X[167ULL] * (intrm_sf_mf_183 / (t1188 == 0.0 ? 1.0E-16 :
    t1188));
  t1133 = pmf_sqrt(fabs(t1189 / (t1135 == 0.0 ? 1.0E-16 : t1135) / (X[166ULL] ==
    0.0 ? 1.0E-16 : X[166ULL]))) * t1132 * 0.64;
  if (X[14ULL] <= 0.0) {
    t1134 = 0.0;
  } else {
    t1134 = X[14ULL] >= 1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    t1141 = 0.0;
  } else {
    t1141 = X[13ULL] >= 1.0 ? 1.0 : X[13ULL];
  }

  intrm_sf_mf_204 = (((1.0 - t1134) - t1141) * 296.802103844292 + t1134 *
                     461.523) + t1141 * 259.836612622973;
  t1144 = (X[12ULL] / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) - X[178ULL] / (X
            [179ULL] == 0.0 ? 1.0E-16 : X[179ULL])) * X[177ULL] *
    intrm_sf_mf_204 / 0.32;
  if (X[178ULL] <= 216.59999999999997) {
    intrm_sf_mf_116 = 216.59999999999997;
  } else {
    intrm_sf_mf_116 = X[178ULL] >= 623.15 ? 623.15 : X[178ULL];
  }

  t1150 = intrm_sf_mf_116 * intrm_sf_mf_116;
  t1148 = (((1074.1165326382541 + intrm_sf_mf_116 * -0.2214565261064077) + t1150
            * 0.00037212980109010952) * ((1.0 - t1134) - t1141) +
           ((1479.6504774710445 + intrm_sf_mf_116 * 1.200211433705052) + t1150 *
            -0.00038614513167842338) * t1134) + ((900.63941224837913 +
    intrm_sf_mf_116 * -0.044484923911364271) + t1150 * 0.00036936011832043369) *
    t1141;
  t1085 = t1148 - intrm_sf_mf_204;
  t1149 = t1148 / (t1085 == 0.0 ? 1.0E-16 : t1085);
  t1150 = pmf_sqrt(t1144 * t1144 * 9.999999999999999E-14 + fabs(X[178ULL] *
    t1149 * intrm_sf_mf_204) * 1.0E-9);
  if (X[94ULL] <= 0.0) {
    intrm_sf_mf_394 = 0.0;
  } else {
    intrm_sf_mf_394 = X[94ULL] >= 1.0 ? 1.0 : X[94ULL];
  }

  if (X[93ULL] <= 0.0) {
    intrm_sf_mf_255 = 0.0;
  } else {
    intrm_sf_mf_255 = X[93ULL] >= 1.0 ? 1.0 : X[93ULL];
  }

  t639[0ULL] = X[12ULL];
  tlu2_linear_nearest_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t639[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = cb_efOut;
  tlu2_1d_linear_nearest_value(&db_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = db_efOut[0];
  tlu2_1d_linear_nearest_value(&eb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = eb_efOut[0];
  tlu2_1d_linear_nearest_value(&fb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = fb_efOut[0];
  t1153 = (((1.0 - intrm_sf_mf_394) - intrm_sf_mf_255) * t786_idx_0 + t780_idx_0
           * intrm_sf_mf_394) + intrm_sf_mf_116 * intrm_sf_mf_255;
  t1198 = X[179ULL] * X[179ULL] * t1149;
  t1154 = -pmf_sqrt(fabs(t1198 / (intrm_sf_mf_204 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_204) / (X[178ULL] == 0.0 ? 1.0E-16 : X[178ULL]))) * 0.32;
  if (t1154 >= 0.0) {
    t1155 = t1154 * 100000.0;
  } else {
    t1155 = -t1154 * 100000.0;
  }

  t1202 = t1153 * 0.32;
  t1085 = t1155 * 0.01 / (t1202 == 0.0 ? 1.0E-16 : t1202);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke = X[12ULL] *
    intrm_sf_mf_204;
  t1158 = X[23ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke);
  intrm_sf_mf_393 = t1158 * 6.4000000000000011E-5;
  t1159 = t1154 * t1153 * 2.9973120849090416 / (intrm_sf_mf_393 == 0.0 ? 1.0E-16
    : intrm_sf_mf_393);
  t1161 = t1085 >= 1.0 ? t1085 : 1.0;
  t1207 = pmf_log10(6.9 / (t1161 == 0.0 ? 1.0E-16 : t1161) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1161 == 0.0 ?
    1.0E-16 : t1161) + 0.00017169489553429715) * 3.24;
  t1209 = t1158 * 0.0020480000000000003;
  t1155 = t1154 * t1155 * (1.0 / (t1207 == 0.0 ? 1.0E-16 : t1207)) *
    0.046833001326703774 / (t1209 == 0.0 ? 1.0E-16 : t1209);
  t1162 = (t1085 - 2000.0) / 2000.0;
  intrm_sf_mf_116 = t1162 * t1162 * 3.0 - t1162 * t1162 * t1162 * 2.0;
  if (t1085 <= 2000.0) {
    t1162 = t1159 * 1.0E-5;
  } else if (t1085 >= 4000.0) {
    t1162 = t1155 * 1.0E-5;
  } else {
    t1162 = ((1.0 - intrm_sf_mf_116) * t1159 + t1155 * intrm_sf_mf_116) * 1.0E-5;
  }

  t1150 = X[177ULL] * t1150 / 0.32 * 0.00031622776601683789 + t1162;
  t1155 = (X[12ULL] / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) - X[181ULL] / (X
            [182ULL] == 0.0 ? 1.0E-16 : X[182ULL])) * X[180ULL] *
    intrm_sf_mf_204 / 0.32;
  if (X[181ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[181ULL] >= 623.15 ? 623.15 : X[181ULL];
  }

  t1033 = t1085 * t1085;
  t1159 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1033 *
            0.00037212980109010952) * ((1.0 - t1134) - t1141) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1033 *
            -0.00038614513167842338) * t1134) + ((900.63941224837913 + t1085 *
    -0.044484923911364271) + t1033 * 0.00036936011832043369) * t1141;
  intrm_sf_mf_357 = t1159 - intrm_sf_mf_204;
  t1134 = t1159 / (intrm_sf_mf_357 == 0.0 ? 1.0E-16 : intrm_sf_mf_357);
  t1141 = pmf_sqrt(t1155 * t1155 * 9.999999999999999E-14 + fabs(X[181ULL] *
    t1134 * intrm_sf_mf_204) * 1.0E-9);
  t1218 = X[182ULL] * X[182ULL] * t1134;
  t1162 = -pmf_sqrt(fabs(t1218 / (intrm_sf_mf_204 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_204) / (X[181ULL] == 0.0 ? 1.0E-16 : X[181ULL]))) * 0.32;
  if (t1162 >= 0.0) {
    intrm_sf_mf_116 = t1162 * 100000.0;
  } else {
    intrm_sf_mf_116 = -t1162 * 100000.0;
  }

  t1033 = intrm_sf_mf_116 * 0.01 / (t1202 == 0.0 ? 1.0E-16 : t1202);
  t1165 = t1162 * t1153 * 2.9973120849090416 / (intrm_sf_mf_393 == 0.0 ? 1.0E-16
    : intrm_sf_mf_393);
  t1168 = t1033 >= 1.0 ? t1033 : 1.0;
  t1225 = pmf_log10(6.9 / (t1168 == 0.0 ? 1.0E-16 : t1168) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1168 == 0.0 ?
    1.0E-16 : t1168) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_116 = t1162 * intrm_sf_mf_116 * (1.0 / (t1225 == 0.0 ? 1.0E-16 :
    t1225)) * 0.046833001326703774 / (t1209 == 0.0 ? 1.0E-16 : t1209);
  t1169 = (t1033 - 2000.0) / 2000.0;
  t1170 = t1169 * t1169 * 3.0 - t1169 * t1169 * t1169 * 2.0;
  if (t1033 <= 2000.0) {
    t1169 = t1165 * 1.0E-5;
  } else if (t1033 >= 4000.0) {
    t1169 = intrm_sf_mf_116 * 1.0E-5;
  } else {
    t1169 = ((1.0 - t1170) * t1165 + intrm_sf_mf_116 * t1170) * 1.0E-5;
  }

  t1141 = X[180ULL] * t1141 / 0.32 * 0.00031622776601683789 + t1169;
  if (1.0 - X[14ULL] >= 0.01) {
    t1033 = 1.0 - X[14ULL];
  } else if (1.0 - X[14ULL] >= -0.1) {
    t1033 = pmf_exp(((1.0 - X[14ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1033 = 1.6701700790245661E-7;
  }

  t1165 = X[13ULL] / (t1033 == 0.0 ? 1.0E-16 : t1033) * -36.965491221318985 +
    296.802103844292;
  t640[0ULL] = X[12ULL];
  tlu2_linear_linear_prelookup(&gb_efOut.mField0[0ULL], &gb_efOut.mField1[0ULL],
    &gb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t640[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t84 = gb_efOut;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t84.mField0[0ULL], &t84.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t642_idx_0 = hb_efOut[0];
  t1169 = pmf_exp(pmf_log(X[23ULL] * 100000.0) - t642_idx_0);
  if (t1169 >= 1.0) {
    t1232 = (t1169 - 1.0) * 461.523 + t1165;
    t1170 = t1165 / (t1232 == 0.0 ? 1.0E-16 : t1232);
  } else {
    t1170 = 1.0;
  }

  if (X[176ULL] <= 0.0) {
    t1171 = 0.0;
  } else {
    t1171 = X[176ULL] >= 1.0 ? 1.0 : X[176ULL];
  }

  if (X[175ULL] <= 0.0) {
    intrm_sf_mf_256 = 0.0;
  } else {
    intrm_sf_mf_256 = X[175ULL] >= 1.0 ? 1.0 : X[175ULL];
  }

  t1173 = (((1.0 - t1171) - intrm_sf_mf_256) * 296.802103844292 + t1171 *
           461.523) + intrm_sf_mf_256 * 259.836612622973;
  t1171 = X[176ULL] * 461.523 / (t1173 == 0.0 ? 1.0E-16 : t1173);
  if (t1171 <= 0.0) {
    intrm_sf_mf_256 = 0.0;
  } else {
    intrm_sf_mf_256 = t1171 >= 1.0 ? 1.0 : t1171;
  }

  t1171 = X[175ULL] * 259.836612622973 / (t1173 == 0.0 ? 1.0E-16 : t1173);
  if (t1171 <= 0.0) {
    t1174 = 0.0;
  } else {
    t1174 = t1171 >= 1.0 ? 1.0 : t1171;
  }

  t641[0ULL] = X[173ULL];
  tlu2_linear_nearest_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t641[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t61 = ib_efOut;
  tlu2_1d_linear_nearest_value(&jb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = jb_efOut[0];
  tlu2_1d_linear_nearest_value(&kb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = kb_efOut[0];
  tlu2_1d_linear_nearest_value(&lb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = lb_efOut[0];
  t1171 = (((1.0 - intrm_sf_mf_256) - t1174) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_256) + intrm_sf_mf_116 * t1174;
  tlu2_1d_linear_nearest_value(&mb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = mb_efOut[0];
  tlu2_1d_linear_nearest_value(&nb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = nb_efOut[0];
  tlu2_1d_linear_nearest_value(&ob_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = ob_efOut[0];
  t1085 = (((1.0 - intrm_sf_mf_394) - intrm_sf_mf_255) * t786_idx_0 + t780_idx_0
           * intrm_sf_mf_394) + intrm_sf_mf_116 * intrm_sf_mf_255;
  intrm_sf_mf_394 = (X[177ULL] - X[180ULL]) / 2.0;
  tlu2_1d_linear_nearest_value(&pb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = pb_efOut[0];
  tlu2_1d_linear_nearest_value(&qb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = qb_efOut[0];
  tlu2_1d_linear_nearest_value(&rb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = rb_efOut[0];
  t1176 = (((1.0 - intrm_sf_mf_256) - t1174) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_256) + intrm_sf_mf_116 * t1174;
  t1236 = t1153 + t1176;
  t1238 = t1236 / 2.0 * 0.32;
  intrm_sf_mf_255 = (intrm_sf_mf_394 >= 0.0 ? intrm_sf_mf_394 : 0.0) * 0.01 /
    (t1238 == 0.0 ? 1.0E-16 : t1238);
  intrm_sf_mf_256 = intrm_sf_mf_255 >= 0.0 ? intrm_sf_mf_255 : -intrm_sf_mf_255;
  intrm_sf_mf_255 = intrm_sf_mf_256 > 1000.0 ? intrm_sf_mf_256 : 1000.0;
  t1239 = t1171 + t1085;
  if (t1239 / 2.0 > 0.5) {
    t1174 = (t1171 + t1085) / 2.0;
  } else {
    t1174 = 0.5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 = pmf_log10(6.9
    / (intrm_sf_mf_255 == 0.0 ? 1.0E-16 : intrm_sf_mf_255) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_255 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_255) + 0.00017169489553429715) * 3.24;
  t1177 = 1.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 ==
                 0.0 ? 1.0E-16 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3);
  t1243 = (pmf_pow(t1174, 0.66666666666666663) - 1.0) * pmf_sqrt(t1177 / 8.0) *
    12.7 + 1.0;
  t1179 = (intrm_sf_mf_255 - 1000.0) * (t1177 / 8.0) * t1174 / (t1243 == 0.0 ?
    1.0E-16 : t1243);
  intrm_sf_mf_1580 = (intrm_sf_mf_256 - 2000.0) / 2000.0;
  t1183 = intrm_sf_mf_1580 * intrm_sf_mf_1580 * 3.0 - intrm_sf_mf_1580 *
    intrm_sf_mf_1580 * intrm_sf_mf_1580 * 2.0;
  if (intrm_sf_mf_256 <= 2000.0) {
    intrm_sf_mf_1580 = 3.66;
  } else if (intrm_sf_mf_256 >= 4000.0) {
    intrm_sf_mf_1580 = t1179;
  } else {
    intrm_sf_mf_1580 = (1.0 - t1183) * 3.66 + t1179 * t1183;
  }

  t1245 = intrm_sf_mf_1580 * 10.709248339636167;
  t1248 = t1239 / 2.0;
  if (intrm_sf_mf_256 > t1245 / 0.32 / (t1248 == 0.0 ? 1.0E-16 : t1248) / 30.0)
  {
    t1254 = (t1171 + t1085) / 2.0;
    t1179 = intrm_sf_mf_1580 * 10.709248339636167 / (intrm_sf_mf_256 == 0.0 ?
      1.0E-16 : intrm_sf_mf_256) / 0.32 / (t1254 == 0.0 ? 1.0E-16 : t1254);
  } else {
    t1179 = 30.0;
  }

  if (X[82ULL] <= 0.0) {
    intrm_sf_mf_1580 = 0.0;
  } else {
    intrm_sf_mf_1580 = X[82ULL] >= 1.0 ? 1.0 : X[82ULL];
  }

  if (X[81ULL] <= 0.0) {
    t1183 = 0.0;
  } else {
    t1183 = X[81ULL] >= 1.0 ? 1.0 : X[81ULL];
  }

  t1185 = (((1.0 - intrm_sf_mf_1580) - t1183) * 296.802103844292 +
           intrm_sf_mf_1580 * 461.523) + t1183 * 259.836612622973;
  intrm_sf_mf_1580 = X[82ULL] * 461.523 / (t1185 == 0.0 ? 1.0E-16 : t1185);
  if (intrm_sf_mf_1580 <= 0.0) {
    t1183 = 0.0;
  } else {
    t1183 = intrm_sf_mf_1580 >= 1.0 ? 1.0 : intrm_sf_mf_1580;
  }

  intrm_sf_mf_1580 = X[81ULL] * 259.836612622973 / (t1185 == 0.0 ? 1.0E-16 :
    t1185);
  if (intrm_sf_mf_1580 <= 0.0) {
    t1186 = 0.0;
  } else {
    t1186 = intrm_sf_mf_1580 >= 1.0 ? 1.0 : intrm_sf_mf_1580;
  }

  t643[0ULL] = X[79ULL];
  tlu2_linear_nearest_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t643[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = sb_efOut;
  tlu2_1d_linear_nearest_value(&tb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = tb_efOut[0];
  tlu2_1d_linear_nearest_value(&ub_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ub_efOut[0];
  tlu2_1d_linear_nearest_value(&vb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = vb_efOut[0];
  intrm_sf_mf_1580 = (((1.0 - t1183) - t1186) * t786_idx_0 + t780_idx_0 * t1183)
    + intrm_sf_mf_116 * t1186;
  t1187 = intrm_sf_mf_394 <= 0.0 ? intrm_sf_mf_394 : 0.0;
  tlu2_1d_linear_nearest_value(&wb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = wb_efOut[0];
  tlu2_1d_linear_nearest_value(&xb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = xb_efOut[0];
  tlu2_1d_linear_nearest_value(&yb_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = yb_efOut[0];
  intrm_sf_mf_394 = (((1.0 - t1183) - t1186) * t786_idx_0 + t780_idx_0 * t1183)
    + intrm_sf_mf_116 * t1186;
  t1257 = t1153 + intrm_sf_mf_394;
  t1259 = t1257 / 2.0 * 0.32;
  t1183 = -t1187 * 0.01 / (t1259 == 0.0 ? 1.0E-16 : t1259);
  t1186 = t1183 >= 0.0 ? t1183 : -t1183;
  t1183 = t1186 > 1000.0 ? t1186 : 1000.0;
  t1260 = t1085 + intrm_sf_mf_1580;
  if (t1260 / 2.0 > 0.5) {
    t1187 = (t1085 + intrm_sf_mf_1580) / 2.0;
  } else {
    t1187 = 0.5;
  }

  t1262 = pmf_log10(6.9 / (t1183 == 0.0 ? 1.0E-16 : t1183) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1183 == 0.0 ?
    1.0E-16 : t1183) + 0.00017169489553429715) * 3.24;
  t1188 = 1.0 / (t1262 == 0.0 ? 1.0E-16 : t1262);
  t1264 = (pmf_pow(t1187, 0.66666666666666663) - 1.0) * pmf_sqrt(t1188 / 8.0) *
    12.7 + 1.0;
  t1190 = (t1183 - 1000.0) * (t1188 / 8.0) * t1187 / (t1264 == 0.0 ? 1.0E-16 :
    t1264);
  t1192 = (t1186 - 2000.0) / 2000.0;
  t1193 = t1192 * t1192 * 3.0 - t1192 * t1192 * t1192 * 2.0;
  if (t1186 <= 2000.0) {
    t1192 = 3.66;
  } else if (t1186 >= 4000.0) {
    t1192 = t1190;
  } else {
    t1192 = (1.0 - t1193) * 3.66 + t1190 * t1193;
  }

  t1266 = t1192 * 10.709248339636167;
  t1269 = t1260 / 2.0;
  if (t1186 > t1266 / 0.32 / (t1269 == 0.0 ? 1.0E-16 : t1269) / 30.0) {
    t1275 = (t1085 + intrm_sf_mf_1580) / 2.0;
    t1190 = t1192 * 10.709248339636167 / (t1186 == 0.0 ? 1.0E-16 : t1186) / 0.32
      / (t1275 == 0.0 ? 1.0E-16 : t1275);
  } else {
    t1190 = 30.0;
  }

  if (X[17ULL] <= 0.0) {
    t1192 = 0.0;
  } else {
    t1192 = X[17ULL] >= 1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    t1193 = 0.0;
  } else {
    t1193 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  t1195 = (((1.0 - t1192) - t1193) * 296.802103844292 + t1192 * 461.523) + t1193
    * 259.836612622973;
  t1196 = -((X[15ULL] / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) - X[199ULL] / (X
              [200ULL] == 0.0 ? 1.0E-16 : X[200ULL])) * X[180ULL] * t1195) /
    0.32;
  if (X[199ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[199ULL] >= 623.15 ? 623.15 : X[199ULL];
  }

  t1036 = t1085 * t1085;
  t1199 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1036 *
            0.00037212980109010952) * ((1.0 - t1192) - t1193) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1036 *
            -0.00038614513167842338) * t1192) + ((900.63941224837913 + t1085 *
    -0.044484923911364271) + t1036 * 0.00036936011832043369) * t1193;
  t1281 = t1199 - t1195;
  t1036 = t1199 / (t1281 == 0.0 ? 1.0E-16 : t1281);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke = pmf_sqrt
    (t1196 * t1196 * 9.999999999999999E-14 + fabs(X[199ULL] * t1036 * t1195) *
     1.0E-9);
  if (X[99ULL] <= 0.0) {
    t1205 = 0.0;
  } else {
    t1205 = X[99ULL] >= 1.0 ? 1.0 : X[99ULL];
  }

  if (X[98ULL] <= 0.0) {
    intrm_sf_mf_393 = 0.0;
  } else {
    intrm_sf_mf_393 = X[98ULL] >= 1.0 ? 1.0 : X[98ULL];
  }

  t782[0ULL] = X[15ULL];
  tlu2_linear_nearest_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t74 = ac_efOut;
  tlu2_1d_linear_nearest_value(&bc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = bc_efOut[0];
  tlu2_1d_linear_nearest_value(&cc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = cc_efOut[0];
  tlu2_1d_linear_nearest_value(&dc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = dc_efOut[0];
  t1207 = (((1.0 - t1205) - intrm_sf_mf_393) * t786_idx_0 + t780_idx_0 * t1205)
    + intrm_sf_mf_116 * intrm_sf_mf_393;
  t1282 = X[200ULL] * X[200ULL] * t1036;
  t1208 = -pmf_sqrt(fabs(t1282 / (t1195 == 0.0 ? 1.0E-16 : t1195) / (X[199ULL] ==
    0.0 ? 1.0E-16 : X[199ULL]))) * 0.32;
  if (t1208 >= 0.0) {
    t1209 = t1208 * 100000.0;
  } else {
    t1209 = -t1208 * 100000.0;
  }

  t1286 = t1207 * 0.32;
  t1085 = t1209 * 0.01 / (t1286 == 0.0 ? 1.0E-16 : t1286);
  t1288 = X[15ULL] * t1195;
  t1211 = X[24ULL] / (t1288 == 0.0 ? 1.0E-16 : t1288);
  t1290 = t1211 * 6.4000000000000011E-5;
  t1215 = t1208 * t1207 * 2.9973120849090416 / (t1290 == 0.0 ? 1.0E-16 : t1290);
  t1216 = t1085 >= 1.0 ? t1085 : 1.0;
  t1291 = pmf_log10(6.9 / (t1216 == 0.0 ? 1.0E-16 : t1216) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1216 == 0.0 ?
    1.0E-16 : t1216) + 0.00017169489553429715) * 3.24;
  t1293 = t1211 * 0.0020480000000000003;
  t1209 = t1208 * t1209 * (1.0 / (t1291 == 0.0 ? 1.0E-16 : t1291)) *
    0.046833001326703774 / (t1293 == 0.0 ? 1.0E-16 : t1293);
  intrm_sf_mf_357 = (t1085 - 2000.0) / 2000.0;
  intrm_sf_mf_116 = intrm_sf_mf_357 * intrm_sf_mf_357 * 3.0 - intrm_sf_mf_357 *
    intrm_sf_mf_357 * intrm_sf_mf_357 * 2.0;
  if (t1085 <= 2000.0) {
    intrm_sf_mf_357 = t1215 * 1.0E-5;
  } else if (t1085 >= 4000.0) {
    intrm_sf_mf_357 = t1209 * 1.0E-5;
  } else {
    intrm_sf_mf_357 = ((1.0 - intrm_sf_mf_116) * t1215 + t1209 * intrm_sf_mf_116)
      * 1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke = -(X[180ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke) / 0.32 *
    0.00031622776601683789 + intrm_sf_mf_357;
  t1209 = (X[15ULL] / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) - X[202ULL] / (X
            [203ULL] == 0.0 ? 1.0E-16 : X[203ULL])) * X[201ULL] * t1195 / 0.32;
  if (X[202ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[202ULL] >= 623.15 ? 623.15 : X[202ULL];
  }

  t1039 = t1085 * t1085;
  t1215 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1039 *
            0.00037212980109010952) * ((1.0 - t1192) - t1193) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1039 *
            -0.00038614513167842338) * t1192) + ((900.63941224837913 + t1085 *
    -0.044484923911364271) + t1039 * 0.00036936011832043369) * t1193;
  t1301 = t1215 - t1195;
  t1192 = t1215 / (t1301 == 0.0 ? 1.0E-16 : t1301);
  t1193 = pmf_sqrt(t1209 * t1209 * 9.999999999999999E-14 + fabs(X[202ULL] *
    t1192 * t1195) * 1.0E-9);
  t1302 = X[203ULL] * X[203ULL] * t1192;
  intrm_sf_mf_357 = -pmf_sqrt(fabs(t1302 / (t1195 == 0.0 ? 1.0E-16 : t1195) /
    (X[202ULL] == 0.0 ? 1.0E-16 : X[202ULL]))) * 0.32;
  if (intrm_sf_mf_357 >= 0.0) {
    intrm_sf_mf_116 = intrm_sf_mf_357 * 100000.0;
  } else {
    intrm_sf_mf_116 = -intrm_sf_mf_357 * 100000.0;
  }

  t1039 = intrm_sf_mf_116 * 0.01 / (t1286 == 0.0 ? 1.0E-16 : t1286);
  t1223 = intrm_sf_mf_357 * t1207 * 2.9973120849090416 / (t1290 == 0.0 ? 1.0E-16
    : t1290);
  t1225 = t1039 >= 1.0 ? t1039 : 1.0;
  t1309 = pmf_log10(6.9 / (t1225 == 0.0 ? 1.0E-16 : t1225) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1225 == 0.0 ?
    1.0E-16 : t1225) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_116 = intrm_sf_mf_357 * intrm_sf_mf_116 * (1.0 / (t1309 == 0.0 ?
    1.0E-16 : t1309)) * 0.046833001326703774 / (t1293 == 0.0 ? 1.0E-16 : t1293);
  t1226 = (t1039 - 2000.0) / 2000.0;
  t1228 = t1226 * t1226 * 3.0 - t1226 * t1226 * t1226 * 2.0;
  if (t1039 <= 2000.0) {
    t1226 = t1223 * 1.0E-5;
  } else if (t1039 >= 4000.0) {
    t1226 = intrm_sf_mf_116 * 1.0E-5;
  } else {
    t1226 = ((1.0 - t1228) * t1223 + intrm_sf_mf_116 * t1228) * 1.0E-5;
  }

  t1193 = X[201ULL] * t1193 / 0.32 * 0.00031622776601683789 + t1226;
  if (1.0 - X[17ULL] >= 0.01) {
    t1039 = 1.0 - X[17ULL];
  } else if (1.0 - X[17ULL] >= -0.1) {
    t1039 = pmf_exp(((1.0 - X[17ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1039 = 1.6701700790245661E-7;
  }

  t1223 = X[16ULL] / (t1039 == 0.0 ? 1.0E-16 : t1039) * -36.965491221318985 +
    296.802103844292;
  t782[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t84 = ec_efOut;
  tlu2_1d_linear_linear_value(&fc_efOut[0ULL], &t84.mField0[0ULL], &t84.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t640[0] = fc_efOut[0];
  t1226 = pmf_exp(pmf_log(X[24ULL] * 100000.0) - t640[0ULL]);
  if (t1226 >= 1.0) {
    t1316 = (t1226 - 1.0) * 461.523 + t1223;
    t1228 = t1223 / (t1316 == 0.0 ? 1.0E-16 : t1316);
  } else {
    t1228 = 1.0;
  }

  tlu2_1d_linear_nearest_value(&gc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = gc_efOut[0];
  tlu2_1d_linear_nearest_value(&hc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = hc_efOut[0];
  tlu2_1d_linear_nearest_value(&ic_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = ic_efOut[0];
  t1085 = (((1.0 - t1205) - intrm_sf_mf_393) * t786_idx_0 + t780_idx_0 * t1205)
    + intrm_sf_mf_116 * intrm_sf_mf_393;
  t1205 = (-X[180ULL] - X[201ULL]) / 2.0;
  t1318 = intrm_sf_mf_394 + t1207;
  t1320 = t1318 / 2.0 * 0.32;
  intrm_sf_mf_394 = (t1205 >= 0.0 ? t1205 : 0.0) * 0.01 / (t1320 == 0.0 ?
    1.0E-16 : t1320);
  intrm_sf_mf_393 = intrm_sf_mf_394 >= 0.0 ? intrm_sf_mf_394 : -intrm_sf_mf_394;
  intrm_sf_mf_394 = intrm_sf_mf_393 > 1000.0 ? intrm_sf_mf_393 : 1000.0;
  t1321 = intrm_sf_mf_1580 + t1085;
  if (t1321 / 2.0 > 0.5) {
    t1230 = (intrm_sf_mf_1580 + t1085) / 2.0;
  } else {
    t1230 = 0.5;
  }

  t1323 = pmf_log10(6.9 / (intrm_sf_mf_394 == 0.0 ? 1.0E-16 : intrm_sf_mf_394) +
                    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_394 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_394) + 0.00017169489553429715) * 3.24;
  t1231 = 1.0 / (t1323 == 0.0 ? 1.0E-16 : t1323);
  intrm_sf_mf_116 = (pmf_pow(t1230, 0.66666666666666663) - 1.0) * pmf_sqrt(t1231
    / 8.0) * 12.7 + 1.0;
  t1232 = (intrm_sf_mf_394 - 1000.0) * (t1231 / 8.0) * t1230 / (intrm_sf_mf_116 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_116);
  intrm_sf_mf_418 = (intrm_sf_mf_393 - 2000.0) / 2000.0;
  t1234 = intrm_sf_mf_418 * intrm_sf_mf_418 * 3.0 - intrm_sf_mf_418 *
    intrm_sf_mf_418 * intrm_sf_mf_418 * 2.0;
  if (intrm_sf_mf_393 <= 2000.0) {
    intrm_sf_mf_418 = 3.66;
  } else if (intrm_sf_mf_393 >= 4000.0) {
    intrm_sf_mf_418 = t1232;
  } else {
    intrm_sf_mf_418 = (1.0 - t1234) * 3.66 + t1232 * t1234;
  }

  t1327 = intrm_sf_mf_418 * 10.709248339636167;
  t1330 = t1321 / 2.0;
  if (intrm_sf_mf_393 > t1327 / 0.32 / (t1330 == 0.0 ? 1.0E-16 : t1330) / 30.0)
  {
    t1336 = (intrm_sf_mf_1580 + t1085) / 2.0;
    t1232 = intrm_sf_mf_418 * 10.709248339636167 / (intrm_sf_mf_393 == 0.0 ?
      1.0E-16 : intrm_sf_mf_393) / 0.32 / (t1336 == 0.0 ? 1.0E-16 : t1336);
  } else {
    t1232 = 30.0;
  }

  if (X[198ULL] <= 0.0) {
    intrm_sf_mf_1580 = 0.0;
  } else {
    intrm_sf_mf_1580 = X[198ULL] >= 1.0 ? 1.0 : X[198ULL];
  }

  if (X[197ULL] <= 0.0) {
    intrm_sf_mf_418 = 0.0;
  } else {
    intrm_sf_mf_418 = X[197ULL] >= 1.0 ? 1.0 : X[197ULL];
  }

  t1234 = (((1.0 - intrm_sf_mf_1580) - intrm_sf_mf_418) * 296.802103844292 +
           intrm_sf_mf_1580 * 461.523) + intrm_sf_mf_418 * 259.836612622973;
  intrm_sf_mf_1580 = X[198ULL] * 461.523 / (t1234 == 0.0 ? 1.0E-16 : t1234);
  if (intrm_sf_mf_1580 <= 0.0) {
    intrm_sf_mf_418 = 0.0;
  } else {
    intrm_sf_mf_418 = intrm_sf_mf_1580 >= 1.0 ? 1.0 : intrm_sf_mf_1580;
  }

  intrm_sf_mf_1580 = X[197ULL] * 259.836612622973 / (t1234 == 0.0 ? 1.0E-16 :
    t1234);
  if (intrm_sf_mf_1580 <= 0.0) {
    intrm_sf_mf_417 = 0.0;
  } else {
    intrm_sf_mf_417 = intrm_sf_mf_1580 >= 1.0 ? 1.0 : intrm_sf_mf_1580;
  }

  t782[0ULL] = X[195ULL];
  tlu2_linear_nearest_prelookup(&jc_efOut.mField0[0ULL], &jc_efOut.mField1[0ULL],
    &jc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t74 = jc_efOut;
  tlu2_1d_linear_nearest_value(&kc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = kc_efOut[0];
  tlu2_1d_linear_nearest_value(&lc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = lc_efOut[0];
  tlu2_1d_linear_nearest_value(&mc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = mc_efOut[0];
  intrm_sf_mf_1580 = (((1.0 - intrm_sf_mf_418) - intrm_sf_mf_417) * t786_idx_0 +
                      t780_idx_0 * intrm_sf_mf_418) + intrm_sf_mf_116 *
    intrm_sf_mf_417;
  t1237 = t1205 <= 0.0 ? t1205 : 0.0;
  tlu2_1d_linear_nearest_value(&nc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = nc_efOut[0];
  tlu2_1d_linear_nearest_value(&oc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = oc_efOut[0];
  tlu2_1d_linear_nearest_value(&pc_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = pc_efOut[0];
  t1205 = (((1.0 - intrm_sf_mf_418) - intrm_sf_mf_417) * t786_idx_0 + t780_idx_0
           * intrm_sf_mf_418) + intrm_sf_mf_116 * intrm_sf_mf_417;
  t1339 = t1207 + t1205;
  t1341 = t1339 / 2.0 * 0.32;
  intrm_sf_mf_418 = -t1237 * 0.01 / (t1341 == 0.0 ? 1.0E-16 : t1341);
  intrm_sf_mf_417 = intrm_sf_mf_418 >= 0.0 ? intrm_sf_mf_418 : -intrm_sf_mf_418;
  intrm_sf_mf_418 = intrm_sf_mf_417 > 1000.0 ? intrm_sf_mf_417 : 1000.0;
  t1342 = t1085 + intrm_sf_mf_1580;
  if (t1342 / 2.0 > 0.5) {
    t1237 = (t1085 + intrm_sf_mf_1580) / 2.0;
  } else {
    t1237 = 0.5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = pmf_log10
    (6.9 / (intrm_sf_mf_418 == 0.0 ? 1.0E-16 : intrm_sf_mf_418) +
     0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_418 == 0.0 ? 1.0E-16
    : intrm_sf_mf_418) + 0.00017169489553429715) * 3.24;
  t1238 = 1.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12
                 == 0.0 ? 1.0E-16 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12);
  t1346 = (pmf_pow(t1237, 0.66666666666666663) - 1.0) * pmf_sqrt(t1238 / 8.0) *
    12.7 + 1.0;
  t1240 = (intrm_sf_mf_418 - 1000.0) * (t1238 / 8.0) * t1237 / (t1346 == 0.0 ?
    1.0E-16 : t1346);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 =
    (intrm_sf_mf_417 - 2000.0) / 2000.0;
  t1242 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 * 2.0;
  if (intrm_sf_mf_417 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 = 3.66;
  } else if (intrm_sf_mf_417 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 = t1240;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 = (1.0 -
      t1242) * 3.66 + t1240 * t1242;
  }

  t1348 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
    10.709248339636167;
  t1351 = t1342 / 2.0;
  if (intrm_sf_mf_417 > t1348 / 0.32 / (t1351 == 0.0 ? 1.0E-16 : t1351) / 30.0)
  {
    t1357 = (t1085 + intrm_sf_mf_1580) / 2.0;
    t1240 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
      10.709248339636167 / (intrm_sf_mf_417 == 0.0 ? 1.0E-16 : intrm_sf_mf_417) /
      0.32 / (t1357 == 0.0 ? 1.0E-16 : t1357);
  } else {
    t1240 = 30.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 = -X[220ULL] +
    U_idx_3 * -2.0;
  t1242 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
     6.4274470286298274E-9);
  t782[0ULL] = X[219ULL];
  t239[0] = 11ULL;
  tlu2_linear_linear_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t84 = qc_efOut;
  t782[0ULL] = 1.01325;
  t242[0] = 12ULL;
  tlu2_linear_linear_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t81 = rc_efOut;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t84.mField0[0ULL], &t84.mField2
    [0ULL], &t81.mField0[0ULL], &t81.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = sc_efOut[0];
  t2338 = t786_idx_0;
  t782[0ULL] = X[25ULL];
  tlu2_linear_linear_prelookup(&tc_efOut.mField0[0ULL], &tc_efOut.mField1[0ULL],
    &tc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t55 = tc_efOut;
  tlu2_2d_linear_linear_value(&uc_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t81.mField0[0ULL], &t81.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = uc_efOut[0];
  t1243 = t786_idx_0;
  t1244 = pmf_sqrt(X[228ULL] * X[228ULL] + 1.2620262729050631E-10);
  t782[0ULL] = X[227ULL];
  tlu2_linear_linear_prelookup(&vc_efOut.mField0[0ULL], &vc_efOut.mField1[0ULL],
    &vc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t55 = vc_efOut;
  t782[0ULL] = X[223ULL];
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t78 = wc_efOut;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = xc_efOut[0];
  t1247 = t786_idx_0;
  t782[0ULL] = X[230ULL];
  tlu2_linear_linear_prelookup(&yc_efOut.mField0[0ULL], &yc_efOut.mField1[0ULL],
    &yc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t55 = yc_efOut;
  t782[0ULL] = X[225ULL];
  tlu2_linear_linear_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t77 = ad_efOut;
  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = bd_efOut[0];
  t1248 = t786_idx_0;
  t782[0ULL] = X[224ULL];
  tlu2_linear_nearest_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t74 = cd_efOut;
  t782[0ULL] = X[27ULL];
  tlu2_linear_nearest_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t75 = dd_efOut;
  tlu2_2d_linear_nearest_value(&ed_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = ed_efOut[0];
  t1249 = t786_idx_0;
  t782[0ULL] = X[215ULL];
  tlu2_linear_nearest_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t79 = fd_efOut;
  tlu2_2d_linear_nearest_value(&gd_efOut[0ULL], &t79.mField0[0ULL],
    &t79.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = gd_efOut[0];
  intrm_sf_mf_521 = t786_idx_0;
  t782[0ULL] = X[28ULL];
  tlu2_linear_nearest_prelookup(&hd_efOut.mField0[0ULL], &hd_efOut.mField1[0ULL],
    &hd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t55 = hd_efOut;
  tlu2_2d_linear_nearest_value(&id_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = id_efOut[0];
  t1251 = t786_idx_0;
  t1252 = (X[228ULL] - X[220ULL]) / 2.0;
  tlu2_2d_linear_nearest_value(&jd_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = jd_efOut[0];
  t1253 = t786_idx_0;
  t782[0ULL] = X[28ULL];
  tlu2_linear_linear_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t84 = kd_efOut;
  t782[0ULL] = X[27ULL];
  tlu2_linear_linear_prelookup(&ld_efOut.mField0[0ULL], &ld_efOut.mField1[0ULL],
    &ld_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t61 = ld_efOut;
  tlu2_2d_linear_linear_value(&md_efOut[0ULL], &t84.mField0[0ULL], &t84.mField2
    [0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = md_efOut[0];
  t1254 = t786_idx_0;
  t1255 = pmf_sqrt(X[228ULL] * X[228ULL] + 5.1419576229038592E-12);
  t782[0ULL] = X[231ULL];
  tlu2_linear_linear_prelookup(&nd_efOut.mField0[0ULL], &nd_efOut.mField1[0ULL],
    &nd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t82 = nd_efOut;
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = od_efOut[0];
  t1256 = t786_idx_0;
  t1258 = pmf_sqrt(X[220ULL] * X[220ULL] + 5.1419576229038592E-12);
  t782[0ULL] = X[233ULL];
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t55 = pd_efOut;
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t81.mField0[0ULL], &t81.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = qd_efOut[0];
  t1259 = t786_idx_0;
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t84.mField0[0ULL], &t84.mField2
    [0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = rd_efOut[0];
  t1261 = t786_idx_0;
  tlu2_2d_linear_nearest_value(&sd_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = sd_efOut[0];
  t1262 = t786_idx_0;
  tlu2_2d_linear_nearest_value(&td_efOut[0ULL], &t79.mField0[0ULL],
    &t79.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = td_efOut[0];
  t1263 = t786_idx_0;
  t1264 = U_idx_3 * 2.0;
  t1265 = pmf_sqrt(t1264 * t1264 + 1.2620262729050631E-10);
  t782[0ULL] = X[238ULL];
  tlu2_linear_linear_prelookup(&ud_efOut.mField0[0ULL], &ud_efOut.mField1[0ULL],
    &ud_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t55 = ud_efOut;
  tlu2_2d_linear_linear_value(&vd_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t81.mField0[0ULL], &t81.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = vd_efOut[0];
  t1268 = t786_idx_0;
  t782[0ULL] = X[240ULL];
  tlu2_linear_linear_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t74 = wd_efOut;
  t782[0ULL] = X[236ULL];
  tlu2_linear_linear_prelookup(&xd_efOut.mField0[0ULL], &xd_efOut.mField1[0ULL],
    &xd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t77 = xd_efOut;
  tlu2_2d_linear_linear_value(&yd_efOut[0ULL], &t74.mField0[0ULL], &t74.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = yd_efOut[0];
  t1269 = t786_idx_0;
  t1270 = (t1268 + t786_idx_0) / 2.0;
  t782[0ULL] = X[235ULL];
  tlu2_linear_nearest_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t75 = ae_efOut;
  t782[0ULL] = X[29ULL];
  tlu2_linear_nearest_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t84 = be_efOut;
  tlu2_2d_linear_nearest_value(&ce_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], &t84.mField0[0ULL], &t84.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = ce_efOut[0];
  t1271 = t786_idx_0;
  t782[0ULL] = X[222ULL];
  tlu2_linear_nearest_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t74 = de_efOut;
  tlu2_2d_linear_nearest_value(&ee_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], &t84.mField0[0ULL], &t84.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = ee_efOut[0];
  t1272 = t786_idx_0;
  t782[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t82 = fe_efOut;
  tlu2_2d_linear_nearest_value(&ge_efOut[0ULL], &t82.mField0[0ULL],
    &t82.mField2[0ULL], &t84.mField0[0ULL], &t84.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = ge_efOut[0];
  intrm_sf_mf_550 = t786_idx_0;
  t1274 = (t1264 - (-X[228ULL])) / 2.0;
  tlu2_2d_linear_nearest_value(&he_efOut[0ULL], &t82.mField0[0ULL],
    &t82.mField2[0ULL], &t84.mField0[0ULL], &t84.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = he_efOut[0];
  t1275 = t786_idx_0;
  t782[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t82 = ie_efOut;
  t782[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t782[0ULL],
    &t242[0ULL], &t95[0ULL]);
  t61 = je_efOut;
  tlu2_2d_linear_linear_value(&ke_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = ke_efOut[0];
  t1276 = t786_idx_0;
  t1277 = pmf_sqrt(t1264 * t1264 + 2.4102926357361849E-12);
  t782[0ULL] = X[241ULL];
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t55 = le_efOut;
  tlu2_2d_linear_linear_value(&me_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = me_efOut[0];
  t1279 = t786_idx_0;
  t1280 = pmf_sqrt(X[228ULL] * X[228ULL] + 2.4102926357361849E-12);
  t782[0ULL] = X[243ULL];
  tlu2_linear_linear_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t782[0ULL],
    &t239[0ULL], &t95[0ULL]);
  t77 = ne_efOut;
  tlu2_2d_linear_linear_value(&oe_efOut[0ULL], &t77.mField0[0ULL], &t77.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = oe_efOut[0];
  t1281 = t786_idx_0;
  tlu2_2d_linear_linear_value(&pe_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = pe_efOut[0];
  t1283 = t786_idx_0;
  tlu2_2d_linear_nearest_value(&qe_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], &t84.mField0[0ULL], &t84.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = qe_efOut[0];
  t1285 = t786_idx_0;
  tlu2_2d_linear_nearest_value(&re_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], &t84.mField0[0ULL], &t84.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t239[0ULL], &t242[0ULL], &t95[0ULL]);
  t786_idx_0 = re_efOut[0];
  t1288 = t786_idx_0;
  if (X[35ULL] <= 0.0) {
    t1289 = 0.0;
  } else {
    t1289 = X[35ULL] >= 1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    t1290 = 0.0;
  } else {
    t1290 = X[34ULL] >= 1.0 ? 1.0 : X[34ULL];
  }

  t1291 = (((1.0 - t1289) - t1290) * 296.802103844292 + t1289 * 461.523) + t1290
    * 4124.48151675695;
  if (1.0 - X[35ULL] >= 0.01) {
    t1289 = 1.0 - X[35ULL];
  } else if (1.0 - X[35ULL] >= -0.1) {
    t1289 = pmf_exp(((1.0 - X[35ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1289 = 1.6701700790245661E-7;
  }

  t1290 = X[34ULL] / (t1289 == 0.0 ? 1.0E-16 : t1289) * 3827.6794129126583 +
    296.802103844292;
  t782[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&se_efOut.mField0[0ULL], &se_efOut.mField1[0ULL],
    &se_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t81 = se_efOut;
  tlu2_1d_linear_linear_value(&te_efOut[0ULL], &t81.mField0[0ULL], &t81.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t639[0] = te_efOut[0];
  t1292 = pmf_exp(pmf_log(X[33ULL] * 100000.0) - t639[0ULL]);
  if (t1292 >= 1.0) {
    t1363 = (t1292 - 1.0) * 461.523 + t1290;
    t1293 = t1290 / (t1363 == 0.0 ? 1.0E-16 : t1363);
  } else {
    t1293 = 1.0;
  }

  t1295 = U_idx_2 * 0.01;
  if (X[39ULL] <= 0.0) {
    t1299 = 0.0;
  } else {
    t1299 = X[39ULL] >= 1.0 ? 1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    t1300 = 0.0;
  } else {
    t1300 = X[38ULL] >= 1.0 ? 1.0 : X[38ULL];
  }

  t1301 = (((1.0 - t1299) - t1300) * 296.802103844292 + t1299 * 461.523) + t1300
    * 4124.48151675695;
  if (1.0 - X[39ULL] >= 0.01) {
    t1299 = 1.0 - X[39ULL];
  } else if (1.0 - X[39ULL] >= -0.1) {
    t1299 = pmf_exp(((1.0 - X[39ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1299 = 1.6701700790245661E-7;
  }

  t1300 = X[38ULL] / (t1299 == 0.0 ? 1.0E-16 : t1299) * 3827.6794129126583 +
    296.802103844292;
  t782[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t81 = ue_efOut;
  tlu2_1d_linear_linear_value(&ve_efOut[0ULL], &t81.mField0[0ULL], &t81.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t638[0] = ve_efOut[0];
  t1303 = pmf_exp(pmf_log(X[37ULL] * 100000.0) - t638[0ULL]);
  if (t1303 >= 1.0) {
    t1366 = (t1303 - 1.0) * 461.523 + t1300;
    t1305 = t1300 / (t1366 == 0.0 ? 1.0E-16 : t1366);
  } else {
    t1305 = 1.0;
  }

  if (X[42ULL] <= 0.0) {
    t1309 = 0.0;
  } else {
    t1309 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    t1310 = 0.0;
  } else {
    t1310 = X[43ULL] >= 1.0 ? 1.0 : X[43ULL];
  }

  t1312 = (((1.0 - t1309) - t1310) * 296.802103844292 + t1309 * 461.523) + t1310
    * 4124.48151675695;
  t1313 = -((X[40ULL] / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) - X[303ULL] / (X
              [304ULL] == 0.0 ? 1.0E-16 : X[304ULL])) * X[293ULL] * t1312) /
    7.8539816339744827E-5;
  if (X[303ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[303ULL] >= 623.15 ? 623.15 : X[303ULL];
  }

  t1316 = t1085 * t1085;
  t1315 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1316 *
            0.00037212980109010952) * ((1.0 - t1309) - t1310) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1316 *
            -0.00038614513167842338) * t1309) + ((12825.281119790017 + t1085 *
    6.9647057412830984) + t1316 * -0.007052486824683288) * t1310;
  t1372 = t1315 - t1312;
  t1316 = t1315 / (t1372 == 0.0 ? 1.0E-16 : t1372);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked = pmf_sqrt
    (t1313 * t1313 * 9.999999999999999E-14 + fabs(X[303ULL] * t1316 * t1312) *
     1.0E-9);
  if (X[305ULL] <= 0.0) {
    t1319 = 0.0;
  } else {
    t1319 = X[305ULL] >= 1.0 ? 1.0 : X[305ULL];
  }

  if (X[306ULL] <= 0.0) {
    t1320 = 0.0;
  } else {
    t1320 = X[306ULL] >= 1.0 ? 1.0 : X[306ULL];
  }

  t782[0ULL] = X[40ULL];
  tlu2_linear_nearest_prelookup(&we_efOut.mField0[0ULL], &we_efOut.mField1[0ULL],
    &we_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = we_efOut;
  tlu2_1d_linear_nearest_value(&xe_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = xe_efOut[0];
  tlu2_1d_linear_nearest_value(&ye_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ye_efOut[0];
  tlu2_1d_linear_nearest_value(&af_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = af_efOut[0];
  t1322 = (((1.0 - t1319) - t1320) * t786_idx_0 + t780_idx_0 * t1319) +
    intrm_sf_mf_116 * t1320;
  t1373 = X[304ULL] * X[304ULL] * t1316;
  t1323 = -pmf_sqrt(fabs(t1373 / (t1312 == 0.0 ? 1.0E-16 : t1312) / (X[303ULL] ==
    0.0 ? 1.0E-16 : X[303ULL]))) * 7.8539816339744827E-5;
  if (t1323 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI = t1323 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI = -t1323 *
      100000.0;
  }

  t1377 = t1322 * 7.8539816339744827E-5;
  intrm_sf_mf_116 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI * 0.01 /
    (t1377 == 0.0 ? 1.0E-16 : t1377);
  t1379 = X[40ULL] * t1312;
  t1326 = X[41ULL] / (t1379 == 0.0 ? 1.0E-16 : t1379);
  t1381 = t1326 * 1.5707963267948965E-8;
  t1329 = t1323 * t1322 * 35.2 / (t1381 == 0.0 ? 1.0E-16 : t1381);
  t1330 = intrm_sf_mf_116 >= 1.0 ? intrm_sf_mf_116 : 1.0;
  t1382 = pmf_log10(6.9 / (t1330 == 0.0 ? 1.0E-16 : t1330) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1330 == 0.0 ?
    1.0E-16 : t1330) + 0.00017169489553429715) * 3.24;
  t1384 = t1326 * 1.2337005501361697E-10;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI = t1323 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI * (1.0 /
    (t1382 == 0.0 ? 1.0E-16 : t1382)) * 0.55 / (t1384 == 0.0 ? 1.0E-16 : t1384);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked =
    (intrm_sf_mf_116 - 2000.0) / 2000.0;
  t1085 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked * 2.0;
  if (intrm_sf_mf_116 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked = t1329 *
      1.0E-5;
  } else if (intrm_sf_mf_116 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI * 1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked = ((1.0 -
      t1085) * t1329 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI * t1085) *
      1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked = -(X[293ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked) /
    7.8539816339744827E-5 * 0.00031622776601683789 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI = -((X[40ULL] /
    (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) - X[307ULL] / (X[308ULL] == 0.0 ?
    1.0E-16 : X[308ULL])) * X[263ULL] * t1312) / 7.8539816339744827E-5;
  if (X[307ULL] <= 216.59999999999997) {
    intrm_sf_mf_116 = 216.59999999999997;
  } else {
    intrm_sf_mf_116 = X[307ULL] >= 623.15 ? 623.15 : X[307ULL];
  }

  t1333 = intrm_sf_mf_116 * intrm_sf_mf_116;
  t1329 = (((1074.1165326382541 + intrm_sf_mf_116 * -0.2214565261064077) + t1333
            * 0.00037212980109010952) * ((1.0 - t1309) - t1310) +
           ((1479.6504774710445 + intrm_sf_mf_116 * 1.200211433705052) + t1333 *
            -0.00038614513167842338) * t1309) + ((12825.281119790017 +
    intrm_sf_mf_116 * 6.9647057412830984) + t1333 * -0.007052486824683288) *
    t1310;
  t1392 = t1329 - t1312;
  t1309 = t1329 / (t1392 == 0.0 ? 1.0E-16 : t1392);
  t1310 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
     9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9);
  t1393 = X[308ULL] * X[308ULL] * t1309;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked = -pmf_sqrt
    (fabs(t1393 / (t1312 == 0.0 ? 1.0E-16 : t1312) / (X[307ULL] == 0.0 ? 1.0E-16
       : X[307ULL]))) * 7.8539816339744827E-5;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked >= 0.0) {
    t1085 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked *
      100000.0;
  } else {
    t1085 = -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked *
      100000.0;
  }

  t1333 = t1085 * 0.01 / (t1377 == 0.0 ? 1.0E-16 : t1377);
  t1334 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked *
    t1322 * 35.2 / (t1381 == 0.0 ? 1.0E-16 : t1381);
  t1335 = t1333 >= 1.0 ? t1333 : 1.0;
  t1054 = pmf_log10(6.9 / (t1335 == 0.0 ? 1.0E-16 : t1335) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1335 == 0.0 ?
    1.0E-16 : t1335) + 0.00017169489553429715) * 3.24;
  t1085 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked *
    t1085 * (1.0 / (t1054 == 0.0 ? 1.0E-16 : t1054)) * 0.55 / (t1384 == 0.0 ?
    1.0E-16 : t1384);
  t1336 = (t1333 - 2000.0) / 2000.0;
  t1337 = t1336 * t1336 * 3.0 - t1336 * t1336 * t1336 * 2.0;
  if (t1333 <= 2000.0) {
    t1336 = t1334 * 1.0E-5;
  } else if (t1333 >= 4000.0) {
    t1336 = t1085 * 1.0E-5;
  } else {
    t1336 = ((1.0 - t1337) * t1334 + t1085 * t1337) * 1.0E-5;
  }

  t1310 = -(X[263ULL] * t1310) / 7.8539816339744827E-5 * 0.00031622776601683789
    + t1336;
  if (1.0 - X[42ULL] >= 0.01) {
    t1333 = 1.0 - X[42ULL];
  } else if (1.0 - X[42ULL] >= -0.1) {
    t1333 = pmf_exp(((1.0 - X[42ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1333 = 1.6701700790245661E-7;
  }

  t1334 = X[43ULL] / (t1333 == 0.0 ? 1.0E-16 : t1333) * 3827.6794129126583 +
    296.802103844292;
  t782[0ULL] = X[40ULL];
  tlu2_linear_linear_prelookup(&bf_efOut.mField0[0ULL], &bf_efOut.mField1[0ULL],
    &bf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t79 = bf_efOut;
  tlu2_1d_linear_linear_value(&cf_efOut[0ULL], &t79.mField0[0ULL], &t79.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t637[0] = cf_efOut[0];
  t1336 = pmf_exp(pmf_log(X[41ULL] * 100000.0) - t637[0ULL]);
  if (t1336 >= 1.0) {
    t1407 = (t1336 - 1.0) * 461.523 + t1334;
    t1337 = t1334 / (t1407 == 0.0 ? 1.0E-16 : t1407);
  } else {
    t1337 = 1.0;
  }

  if (X[302ULL] <= 0.0) {
    t1085 = 0.0;
  } else {
    t1085 = X[302ULL] >= 1.0 ? 1.0 : X[302ULL];
  }

  if (X[301ULL] <= 0.0) {
    t1340 = 0.0;
  } else {
    t1340 = X[301ULL] >= 1.0 ? 1.0 : X[301ULL];
  }

  t1341 = (((1.0 - t1085) - t1340) * 296.802103844292 + t1085 * 461.523) + t1340
    * 4124.48151675695;
  t1085 = X[302ULL] * 461.523 / (t1341 == 0.0 ? 1.0E-16 : t1341);
  if (t1085 <= 0.0) {
    t1340 = 0.0;
  } else {
    t1340 = t1085 >= 1.0 ? 1.0 : t1085;
  }

  t1085 = X[301ULL] * 4124.48151675695 / (t1341 == 0.0 ? 1.0E-16 : t1341);
  if (t1085 <= 0.0) {
    intrm_sf_mf_720 = 0.0;
  } else {
    intrm_sf_mf_720 = t1085 >= 1.0 ? 1.0 : t1085;
  }

  t782[0ULL] = X[299ULL];
  tlu2_linear_nearest_prelookup(&df_efOut.mField0[0ULL], &df_efOut.mField1[0ULL],
    &df_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t74 = df_efOut;
  tlu2_1d_linear_nearest_value(&ef_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = ef_efOut[0];
  tlu2_1d_linear_nearest_value(&ff_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ff_efOut[0];
  tlu2_1d_linear_nearest_value(&gf_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = gf_efOut[0];
  t1085 = (((1.0 - t1340) - intrm_sf_mf_720) * t786_idx_0 + t780_idx_0 * t1340)
    + intrm_sf_mf_116 * intrm_sf_mf_720;
  tlu2_1d_linear_nearest_value(&hf_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = hf_efOut[0];
  tlu2_1d_linear_nearest_value(&if_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = if_efOut[0];
  tlu2_1d_linear_nearest_value(&jf_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = jf_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = (((1.0 -
    t1319) - t1320) * t786_idx_0 + t780_idx_0 * t1319) + intrm_sf_mf_116 * t1320;
  t1319 = (-X[293ULL] - (-X[263ULL])) / 2.0;
  tlu2_1d_linear_nearest_value(&kf_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = kf_efOut[0];
  tlu2_1d_linear_nearest_value(&lf_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = lf_efOut[0];
  tlu2_1d_linear_nearest_value(&mf_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = mf_efOut[0];
  t1411 = t1322 + ((((1.0 - t1340) - intrm_sf_mf_720) * t786_idx_0 + t780_idx_0 *
                    t1340) + intrm_sf_mf_116 * intrm_sf_mf_720);
  t1413 = t1411 / 2.0 * 7.8539816339744827E-5;
  t1320 = (t1319 >= 0.0 ? t1319 : 0.0) * 0.01 / (t1413 == 0.0 ? 1.0E-16 : t1413);
  t1340 = t1320 >= 0.0 ? t1320 : -t1320;
  t1320 = t1340 > 1000.0 ? t1340 : 1000.0;
  t1414 = t1085 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12;
  if (t1414 / 2.0 > 0.5) {
    intrm_sf_mf_720 = (t1085 +
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12)
      / 2.0;
  } else {
    intrm_sf_mf_720 = 0.5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = pmf_log10(6.9 /
    (t1320 == 0.0 ? 1.0E-16 : t1320) + 0.00017169489553429715) * pmf_log10(6.9 /
    (t1320 == 0.0 ? 1.0E-16 : t1320) + 0.00017169489553429715) * 3.24;
  t1345 = 1.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ==
                 0.0 ? 1.0E-16 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI);
  t1418 = (pmf_pow(intrm_sf_mf_720, 0.66666666666666663) - 1.0) * pmf_sqrt(t1345
    / 8.0) * 12.7 + 1.0;
  t1346 = (t1320 - 1000.0) * (t1345 / 8.0) * intrm_sf_mf_720 / (t1418 == 0.0 ?
    1.0E-16 : t1418);
  t1347 = (t1340 - 2000.0) / 2000.0;
  t1350 = t1347 * t1347 * 3.0 - t1347 * t1347 * t1347 * 2.0;
  if (t1340 <= 2000.0) {
    t1347 = 3.66;
  } else if (t1340 >= 4000.0) {
    t1347 = t1346;
  } else {
    t1347 = (1.0 - t1350) * 3.66 + t1346 * t1350;
  }

  t1420 = t1347 * 0.031415926535897927;
  t1423 = t1414 / 2.0;
  if (t1340 > t1420 / 7.8539816339744827E-5 / (t1423 == 0.0 ? 1.0E-16 : t1423) /
      30.0) {
    t1429 = (t1085 +
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12) /
      2.0;
    t1346 = t1347 * 0.031415926535897927 / (t1340 == 0.0 ? 1.0E-16 : t1340) /
      7.8539816339744827E-5 / (t1429 == 0.0 ? 1.0E-16 : t1429);
  } else {
    t1346 = 30.0;
  }

  if (X[248ULL] <= 0.0) {
    t1085 = 0.0;
  } else {
    t1085 = X[248ULL] >= 1.0 ? 1.0 : X[248ULL];
  }

  if (X[247ULL] <= 0.0) {
    t1347 = 0.0;
  } else {
    t1347 = X[247ULL] >= 1.0 ? 1.0 : X[247ULL];
  }

  t1350 = (((1.0 - t1085) - t1347) * 296.802103844292 + t1085 * 461.523) + t1347
    * 4124.48151675695;
  t1085 = X[248ULL] * 461.523 / (t1350 == 0.0 ? 1.0E-16 : t1350);
  if (t1085 <= 0.0) {
    t1347 = 0.0;
  } else {
    t1347 = t1085 >= 1.0 ? 1.0 : t1085;
  }

  t1085 = X[247ULL] * 4124.48151675695 / (t1350 == 0.0 ? 1.0E-16 : t1350);
  if (t1085 <= 0.0) {
    t1351 = 0.0;
  } else {
    t1351 = t1085 >= 1.0 ? 1.0 : t1085;
  }

  t782[0ULL] = X[246ULL];
  tlu2_linear_nearest_prelookup(&nf_efOut.mField0[0ULL], &nf_efOut.mField1[0ULL],
    &nf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = nf_efOut;
  tlu2_1d_linear_nearest_value(&of_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = of_efOut[0];
  tlu2_1d_linear_nearest_value(&pf_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = pf_efOut[0];
  tlu2_1d_linear_nearest_value(&qf_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = qf_efOut[0];
  t1085 = (((1.0 - t1347) - t1351) * t786_idx_0 + t780_idx_0 * t1347) +
    intrm_sf_mf_116 * t1351;
  tlu2_1d_linear_nearest_value(&rf_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = rf_efOut[0];
  tlu2_1d_linear_nearest_value(&sf_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = sf_efOut[0];
  tlu2_1d_linear_nearest_value(&tf_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = tf_efOut[0];
  t1432 = t1322 + ((((1.0 - t1347) - t1351) * t786_idx_0 + t780_idx_0 * t1347) +
                   intrm_sf_mf_116 * t1351);
  t1434 = t1432 / 2.0 * 7.8539816339744827E-5;
  t1319 = -(t1319 <= 0.0 ? t1319 : 0.0) * 0.01 / (t1434 == 0.0 ? 1.0E-16 : t1434);
  t1347 = t1319 >= 0.0 ? t1319 : -t1319;
  t1319 = t1347 > 1000.0 ? t1347 : 1000.0;
  t1435 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 +
    t1085;
  if (t1435 / 2.0 > 0.5) {
    t1351 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 +
             t1085) / 2.0;
  } else {
    t1351 = 0.5;
  }

  t1437 = pmf_log10(6.9 / (t1319 == 0.0 ? 1.0E-16 : t1319) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1319 == 0.0 ?
    1.0E-16 : t1319) + 0.00017169489553429715) * 3.24;
  t1352 = 1.0 / (t1437 == 0.0 ? 1.0E-16 : t1437);
  t1439 = (pmf_pow(t1351, 0.66666666666666663) - 1.0) * pmf_sqrt(t1352 / 8.0) *
    12.7 + 1.0;
  t1353 = (t1319 - 1000.0) * (t1352 / 8.0) * t1351 / (t1439 == 0.0 ? 1.0E-16 :
    t1439);
  t1354 = (t1347 - 2000.0) / 2000.0;
  t1355 = t1354 * t1354 * 3.0 - t1354 * t1354 * t1354 * 2.0;
  if (t1347 <= 2000.0) {
    t1354 = 3.66;
  } else if (t1347 >= 4000.0) {
    t1354 = t1353;
  } else {
    t1354 = (1.0 - t1355) * 3.66 + t1353 * t1355;
  }

  t1441 = t1354 * 0.031415926535897927;
  t1444 = t1435 / 2.0;
  if (t1347 > t1441 / 7.8539816339744827E-5 / (t1444 == 0.0 ? 1.0E-16 : t1444) /
      30.0) {
    t1450 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 +
             t1085) / 2.0;
    t1353 = t1354 * 0.031415926535897927 / (t1347 == 0.0 ? 1.0E-16 : t1347) /
      7.8539816339744827E-5 / (t1450 == 0.0 ? 1.0E-16 : t1450);
  } else {
    t1353 = 30.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = (X[300ULL] *
    -0.7999998 + U_idx_4 * 7.9999980000000006) + 9.9999999947364415E-9;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
      7.8539816339744827E-5 <= 7.8539816339744857E-13) {
    t1354 = 7.8539816339744857E-13;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
             7.8539816339744827E-5 >= 3.1415926535897929E-6) {
    t1354 = 3.1415926535897929E-6;
  } else {
    t1354 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
      7.8539816339744827E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = t1354 /
    7.8539816339744827E-5;
  if (X[319ULL] <= 0.0) {
    t1355 = 0.0;
  } else {
    t1355 = X[319ULL] >= 1.0 ? 1.0 : X[319ULL];
  }

  if (X[320ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = X[320ULL] >=
      1.0 ? 1.0 : X[320ULL];
  }

  t1357 = (((1.0 - t1355) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1) *
           296.802103844292 + t1355 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 *
    4124.48151675695;
  t1452 = X[317ULL] * t1357;
  t1358 = X[318ULL] / (t1452 == 0.0 ? 1.0E-16 : t1452);
  intrm_sf_mf_116 = X[318ULL] / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) * (X
    [321ULL] / (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t1360 = X[318ULL] / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL]) * (X[322ULL] /
    (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t1362 = (X[37ULL] + X[300ULL]) / 2.0 * 0.0010000000000000009;
  t1361 = (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12)
    * (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12);
  t1363 = t1362 * t1361;
  t1364 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 + 1.0)
    * (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
       intrm_sf_mf_116) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 * t1360) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w = (X[37ULL] -
    X[300ULL]) * (t1364 >= t1361 ? t1364 : t1361);
  t1364 = (X[37ULL] - X[300ULL]) / (t1362 == 0.0 ? 1.0E-16 : t1362);
  t1366 = t1364 * t1364 * 3.0 - t1364 * t1364 * t1364 * 2.0;
  if (X[37ULL] - X[300ULL] <= 0.0) {
    t1364 = t1363;
  } else if (X[37ULL] - X[300ULL] >= t1362) {
    t1364 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w;
  } else {
    t1364 = (1.0 - t1366) * t1363 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w * t1366;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
     t1360) - (1.0 -
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
               intrm_sf_mf_116) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = (X[300ULL] -
    X[37ULL]) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w
                 >= t1361 ?
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w
                 : t1361);
  intrm_sf_mf_116 = (X[300ULL] - X[37ULL]) / (t1362 == 0.0 ? 1.0E-16 : t1362);
  t1360 = intrm_sf_mf_116 * intrm_sf_mf_116 * 3.0 - intrm_sf_mf_116 *
    intrm_sf_mf_116 * intrm_sf_mf_116 * 2.0;
  if (X[300ULL] - X[37ULL] <= 0.0) {
    intrm_sf_mf_116 = t1363;
  } else if (X[300ULL] - X[37ULL] >= t1362) {
    intrm_sf_mf_116 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12;
  } else {
    intrm_sf_mf_116 = (1.0 - t1360) * t1363 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 * t1360;
  }

  if (X[37ULL] > X[300ULL]) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = t1364;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = X[37ULL] <
      X[300ULL] ? intrm_sf_mf_116 : t1363;
  }

  if (X[317ULL] <= 216.59999999999997) {
    intrm_sf_mf_116 = 216.59999999999997;
  } else {
    intrm_sf_mf_116 = X[317ULL] >= 623.15 ? 623.15 : X[317ULL];
  }

  t1085 = intrm_sf_mf_116 * intrm_sf_mf_116;
  t1360 = (((1074.1165326382541 + intrm_sf_mf_116 * -0.2214565261064077) + t1085
            * 0.00037212980109010952) * ((1.0 - t1355) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1) +
           ((1479.6504774710445 + intrm_sf_mf_116 * 1.200211433705052) + t1085 *
            -0.00038614513167842338) * t1355) + ((12825.281119790017 +
    intrm_sf_mf_116 * 6.9647057412830984) + t1085 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1;
  t1464 = t1360 - t1357;
  t1465 = X[318ULL] * X[318ULL] * (t1360 / (t1464 == 0.0 ? 1.0E-16 : t1464));
  t1355 = pmf_sqrt(fabs(t1465 / (t1357 == 0.0 ? 1.0E-16 : t1357) / (X[317ULL] ==
    0.0 ? 1.0E-16 : X[317ULL]))) * t1354 * 0.64;
  if (X[335ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = X[335ULL] >=
      1.0 ? 1.0 : X[335ULL];
  }

  if (X[336ULL] <= 0.0) {
    t1361 = 0.0;
  } else {
    t1361 = X[336ULL] >= 1.0 ? 1.0 : X[336ULL];
  }

  t1363 = (((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1) -
            t1361) * 296.802103844292 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 *
           461.523) + t1361 * 259.836612622973;
  if (X[47ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = X[47ULL] >=
      1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    t1361 = 0.0;
  } else {
    t1361 = X[46ULL] >= 1.0 ? 1.0 : X[46ULL];
  }

  t1364 = (((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1) -
            t1361) * 296.802103844292 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 *
           461.523) + t1361 * 259.836612622973;
  if (1.0 - X[47ULL] >= 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = 1.0 - X
      [47ULL];
  } else if (1.0 - X[47ULL] >= -0.1) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 = pmf_exp
      (((1.0 - X[47ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 =
      1.6701700790245661E-7;
  }

  t1361 = X[46ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1) *
    -36.965491221318985 + 296.802103844292;
  t782[0ULL] = X[45ULL];
  tlu2_linear_linear_prelookup(&uf_efOut.mField0[0ULL], &uf_efOut.mField1[0ULL],
    &uf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t78 = uf_efOut;
  tlu2_1d_linear_linear_value(&vf_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t636[0] = vf_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w = pmf_exp
    (pmf_log(X[44ULL] * 100000.0) - t636[0ULL]);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w >= 1.0) {
    t1470 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w -
             1.0) * 461.523 + t1361;
    t1366 = t1361 / (t1470 == 0.0 ? 1.0E-16 : t1470);
  } else {
    t1366 = 1.0;
  }

  if (X[50ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = X[50ULL] >= 1.0
      ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    t1371 = 0.0;
  } else {
    t1371 = X[49ULL] >= 1.0 ? 1.0 : X[49ULL];
  }

  t1372 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI) -
            t1371) * 296.802103844292 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * 461.523)
    + t1371 * 4124.48151675695;
  t1374 = -((X[48ULL] / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) - X[382ULL] / (X
              [383ULL] == 0.0 ? 1.0E-16 : X[383ULL])) * X[272ULL] * t1372) /
    0.0019634954084936209;
  if (X[382ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[382ULL] >= 623.15 ? 623.15 : X[382ULL];
  }

  t1051 = t1085 * t1085;
  t1379 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1051 *
            0.00037212980109010952) * ((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI) - t1371)
           + ((1479.6504774710445 + t1085 * 1.200211433705052) + t1051 *
              -0.00038614513167842338) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI) +
    ((12825.281119790017 + t1085 * 6.9647057412830984) + t1051 *
     -0.007052486824683288) * t1371;
  intrm_sf_mf_1279 = t1379 - t1372;
  t1051 = t1379 / (intrm_sf_mf_1279 == 0.0 ? 1.0E-16 : intrm_sf_mf_1279);
  t1381 = pmf_sqrt(t1374 * t1374 * 9.999999999999999E-14 + fabs(X[382ULL] *
    t1051 * t1372) * 1.0E-9);
  if (X[379ULL] <= 0.0) {
    t1382 = 0.0;
  } else {
    t1382 = X[379ULL] >= 1.0 ? 1.0 : X[379ULL];
  }

  if (X[378ULL] <= 0.0) {
    t1383 = 0.0;
  } else {
    t1383 = X[378ULL] >= 1.0 ? 1.0 : X[378ULL];
  }

  t782[0ULL] = X[48ULL];
  tlu2_linear_nearest_prelookup(&wf_efOut.mField0[0ULL], &wf_efOut.mField1[0ULL],
    &wf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t77 = wf_efOut;
  tlu2_1d_linear_nearest_value(&xf_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = xf_efOut[0];
  tlu2_1d_linear_nearest_value(&yf_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = yf_efOut[0];
  tlu2_1d_linear_nearest_value(&ag_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = ag_efOut[0];
  t1384 = (((1.0 - t1382) - t1383) * t786_idx_0 + t780_idx_0 * t1382) +
    intrm_sf_mf_116 * t1383;
  t1477 = X[383ULL] * X[383ULL] * t1051;
  t1385 = -pmf_sqrt(fabs(t1477 / (t1372 == 0.0 ? 1.0E-16 : t1372) / (X[382ULL] ==
    0.0 ? 1.0E-16 : X[382ULL]))) * 0.0019634954084936209;
  if (t1385 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI = t1385 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI = -t1385 *
      100000.0;
  }

  intrm_sf_mf_148 = t1384 * 0.0019634954084936209;
  t1085 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI * 0.05 /
    (intrm_sf_mf_148 == 0.0 ? 1.0E-16 : intrm_sf_mf_148);
  t1483 = X[48ULL] * t1372;
  t1391 = X[51ULL] / (t1483 == 0.0 ? 1.0E-16 : t1483);
  U_idx_1 = t1391 * 9.8174770424681068E-6;
  t1392 = t1385 * t1384 * 11.2 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  t1394 = t1085 >= 1.0 ? t1085 : 1.0;
  t1486 = pmf_log10(6.9 / (t1394 == 0.0 ? 1.0E-16 : t1394) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1394 == 0.0 ?
    1.0E-16 : t1394) + 2.8767404433520813E-5) * 3.24;
  t1488 = t1391 * 3.855314219175531E-7;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI = t1385 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI * (1.0 /
    (t1486 == 0.0 ? 1.0E-16 : t1486)) * 0.175 / (t1488 == 0.0 ? 1.0E-16 : t1488);
  t1396 = (t1085 - 2000.0) / 2000.0;
  intrm_sf_mf_116 = t1396 * t1396 * 3.0 - t1396 * t1396 * t1396 * 2.0;
  if (t1085 <= 2000.0) {
    t1396 = t1392 * 1.0E-5;
  } else if (t1085 >= 4000.0) {
    t1396 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
      1.0E-5;
  } else {
    t1396 = ((1.0 - intrm_sf_mf_116) * t1392 +
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
             intrm_sf_mf_116) * 1.0E-5;
  }

  t1381 = -(X[272ULL] * t1381) / 0.0019634954084936209 * 0.00031622776601683789
    + t1396;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI = (X[48ULL] /
    (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) - X[385ULL] / (X[386ULL] == 0.0 ?
    1.0E-16 : X[386ULL])) * X[384ULL] * t1372 / 0.0019634954084936209;
  if (X[385ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[385ULL] >= 623.15 ? 623.15 : X[385ULL];
  }

  t1054 = t1085 * t1085;
  t1392 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1054 *
            0.00037212980109010952) * ((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI) - t1371)
           + ((1479.6504774710445 + t1085 * 1.200211433705052) + t1054 *
              -0.00038614513167842338) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI) +
    ((12825.281119790017 + t1085 * 6.9647057412830984) + t1054 *
     -0.007052486824683288) * t1371;
  t1496 = t1392 - t1372;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI = t1392 / (t1496 ==
    0.0 ? 1.0E-16 : t1496);
  t1371 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
     9.999999999999999E-14 + fabs(X[385ULL] *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
     1.0E-9);
  t1497 = X[386ULL] * X[386ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI;
  t1396 = -pmf_sqrt(fabs(t1497 / (t1372 == 0.0 ? 1.0E-16 : t1372) / (X[385ULL] ==
    0.0 ? 1.0E-16 : X[385ULL]))) * 0.0019634954084936209;
  if (t1396 >= 0.0) {
    intrm_sf_mf_116 = t1396 * 100000.0;
  } else {
    intrm_sf_mf_116 = -t1396 * 100000.0;
  }

  t1054 = intrm_sf_mf_116 * 0.05 / (intrm_sf_mf_148 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_148);
  t1401 = t1396 * t1384 * 11.2 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  t1403 = t1054 >= 1.0 ? t1054 : 1.0;
  t1504 = pmf_log10(6.9 / (t1403 == 0.0 ? 1.0E-16 : t1403) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1403 == 0.0 ?
    1.0E-16 : t1403) + 2.8767404433520813E-5) * 3.24;
  intrm_sf_mf_116 = t1396 * intrm_sf_mf_116 * (1.0 / (t1504 == 0.0 ? 1.0E-16 :
    t1504)) * 0.175 / (t1488 == 0.0 ? 1.0E-16 : t1488);
  t1404 = (t1054 - 2000.0) / 2000.0;
  t1405 = t1404 * t1404 * 3.0 - t1404 * t1404 * t1404 * 2.0;
  if (t1054 <= 2000.0) {
    t1404 = t1401 * 1.0E-5;
  } else if (t1054 >= 4000.0) {
    t1404 = intrm_sf_mf_116 * 1.0E-5;
  } else {
    t1404 = ((1.0 - t1405) * t1401 + intrm_sf_mf_116 * t1405) * 1.0E-5;
  }

  t1371 = X[384ULL] * t1371 / 0.0019634954084936209 * 0.00031622776601683789 +
    t1404;
  if (1.0 - X[50ULL] >= 0.01) {
    t1054 = 1.0 - X[50ULL];
  } else if (1.0 - X[50ULL] >= -0.1) {
    t1054 = pmf_exp(((1.0 - X[50ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1054 = 1.6701700790245661E-7;
  }

  t1401 = X[49ULL] / (t1054 == 0.0 ? 1.0E-16 : t1054) * 3827.6794129126583 +
    296.802103844292;
  t782[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&bg_efOut.mField0[0ULL], &bg_efOut.mField1[0ULL],
    &bg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t82 = bg_efOut;
  tlu2_1d_linear_linear_value(&cg_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t641[0] = cg_efOut[0];
  t1404 = pmf_exp(pmf_log(X[51ULL] * 100000.0) - t641[0ULL]);
  if (t1404 >= 1.0) {
    t1511 = (t1404 - 1.0) * 461.523 + t1401;
    t1405 = t1401 / (t1511 == 0.0 ? 1.0E-16 : t1511);
  } else {
    t1405 = 1.0;
  }

  t1406 = (-X[272ULL] - X[384ULL]) / 2.0;
  if (X[374ULL] <= 0.0) {
    intrm_sf_mf_1117 = 0.0;
  } else {
    intrm_sf_mf_1117 = X[374ULL] >= 1.0 ? 1.0 : X[374ULL];
  }

  if (X[373ULL] <= 0.0) {
    t1409 = 0.0;
  } else {
    t1409 = X[373ULL] >= 1.0 ? 1.0 : X[373ULL];
  }

  t1410 = (((1.0 - intrm_sf_mf_1117) - t1409) * 296.802103844292 +
           intrm_sf_mf_1117 * 461.523) + t1409 * 4124.48151675695;
  intrm_sf_mf_1117 = X[373ULL] * 4124.48151675695 / (t1410 == 0.0 ? 1.0E-16 :
    t1410);
  if (intrm_sf_mf_1117 <= 0.0) {
    t1409 = 0.0;
  } else {
    t1409 = intrm_sf_mf_1117 >= 1.0 ? 1.0 : intrm_sf_mf_1117;
  }

  intrm_sf_mf_1117 = X[374ULL] * 461.523 / (t1410 == 0.0 ? 1.0E-16 : t1410);
  if (intrm_sf_mf_1117 <= 0.0) {
    intrm_sf_mf_1011 = 0.0;
  } else {
    intrm_sf_mf_1011 = intrm_sf_mf_1117 >= 1.0 ? 1.0 : intrm_sf_mf_1117;
  }

  t782[0ULL] = X[371ULL];
  tlu2_linear_nearest_prelookup(&dg_efOut.mField0[0ULL], &dg_efOut.mField1[0ULL],
    &dg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = dg_efOut;
  tlu2_1d_linear_nearest_value(&eg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = eg_efOut[0];
  tlu2_1d_linear_nearest_value(&fg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = fg_efOut[0];
  tlu2_1d_linear_nearest_value(&gg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = gg_efOut[0];
  intrm_sf_mf_1117 = (((1.0 - intrm_sf_mf_1011) - t1409) * t786_idx_0 +
                      t780_idx_0 * intrm_sf_mf_1011) + intrm_sf_mf_116 * t1409;
  t1515 = intrm_sf_mf_1117 + t1384;
  t1517 = t1515 / 2.0 * 0.0019634954084936209;
  t1407 = -(t1406 <= 0.0 ? t1406 : 0.0) * 0.05 / (t1517 == 0.0 ? 1.0E-16 : t1517);
  t1413 = t1407 >= 0.0 ? t1407 : -t1407;
  t1407 = t1413 > 1000.0 ? t1413 : 1000.0;
  tlu2_1d_linear_nearest_value(&hg_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = hg_efOut[0];
  tlu2_1d_linear_nearest_value(&ig_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ig_efOut[0];
  tlu2_1d_linear_nearest_value(&jg_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = jg_efOut[0];
  t1085 = (((1.0 - t1382) - t1383) * t786_idx_0 + t780_idx_0 * t1382) +
    intrm_sf_mf_116 * t1383;
  tlu2_1d_linear_nearest_value(&kg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = kg_efOut[0];
  tlu2_1d_linear_nearest_value(&lg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = lg_efOut[0];
  tlu2_1d_linear_nearest_value(&mg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = mg_efOut[0];
  t1382 = (((1.0 - intrm_sf_mf_1011) - t1409) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_1011) + intrm_sf_mf_116 * t1409;
  t1518 = t1085 + t1382;
  if (t1518 / 2.0 > 0.5) {
    t1383 = (t1085 + t1382) / 2.0;
  } else {
    t1383 = 0.5;
  }

  t1520 = pmf_log10(6.9 / (t1407 == 0.0 ? 1.0E-16 : t1407) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1407 == 0.0 ?
    1.0E-16 : t1407) + 2.8767404433520813E-5) * 3.24;
  t1409 = 1.0 / (t1520 == 0.0 ? 1.0E-16 : t1520);
  t1522 = (pmf_pow(t1383, 0.66666666666666663) - 1.0) * pmf_sqrt(t1409 / 8.0) *
    12.7 + 1.0;
  intrm_sf_mf_1011 = (t1407 - 1000.0) * (t1409 / 8.0) * t1383 / (t1522 == 0.0 ?
    1.0E-16 : t1522);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = (t1413 - 2000.0) /
    2000.0;
  t1417 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 2.0;
  if (t1413 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 3.66;
  } else if (t1413 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI =
      intrm_sf_mf_1011;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = (1.0 - t1417) *
      3.66 + intrm_sf_mf_1011 * t1417;
  }

  t1524 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    0.039269908169872414;
  t1527 = t1518 / 2.0;
  if (t1413 > t1524 / 0.0019634954084936209 / (t1527 == 0.0 ? 1.0E-16 : t1527) /
      30.0) {
    t1533 = (t1085 + t1382) / 2.0;
    intrm_sf_mf_1011 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
      0.039269908169872414 / (t1413 == 0.0 ? 1.0E-16 : t1413) /
      0.0019634954084936209 / (t1533 == 0.0 ? 1.0E-16 : t1533);
  } else {
    intrm_sf_mf_1011 = 30.0;
  }

  if (X[251ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[251ULL] >=
      1.0 ? 1.0 : X[251ULL];
  }

  if (X[250ULL] <= 0.0) {
    t1417 = 0.0;
  } else {
    t1417 = X[250ULL] >= 1.0 ? 1.0 : X[250ULL];
  }

  t1418 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) -
            t1417) * 296.802103844292 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 461.523)
    + t1417 * 4124.48151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[251ULL] *
    461.523 / (t1418 == 0.0 ? 1.0E-16 : t1418);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI <= 0.0) {
    t1417 = 0.0;
  } else {
    t1417 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI >= 1.0 ?
      1.0 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[250ULL] *
    4124.48151675695 / (t1418 == 0.0 ? 1.0E-16 : t1418);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI <= 0.0) {
    t1419 = 0.0;
  } else {
    t1419 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI >= 1.0 ?
      1.0 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  }

  t782[0ULL] = X[249ULL];
  tlu2_linear_nearest_prelookup(&ng_efOut.mField0[0ULL], &ng_efOut.mField1[0ULL],
    &ng_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = ng_efOut;
  tlu2_1d_linear_nearest_value(&og_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = og_efOut[0];
  tlu2_1d_linear_nearest_value(&pg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = pg_efOut[0];
  tlu2_1d_linear_nearest_value(&qg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = qg_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = (((1.0 - t1417) -
    t1419) * t786_idx_0 + t780_idx_0 * t1417) + intrm_sf_mf_116 * t1419;
  tlu2_1d_linear_nearest_value(&rg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = rg_efOut[0];
  tlu2_1d_linear_nearest_value(&sg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = sg_efOut[0];
  tlu2_1d_linear_nearest_value(&tg_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = tg_efOut[0];
  t1536 = t1384 + ((((1.0 - t1417) - t1419) * t786_idx_0 + t780_idx_0 * t1417) +
                   intrm_sf_mf_116 * t1419);
  t1538 = t1536 / 2.0 * 0.0019634954084936209;
  t1406 = (t1406 >= 0.0 ? t1406 : 0.0) * 0.05 / (t1538 == 0.0 ? 1.0E-16 : t1538);
  t1417 = t1406 >= 0.0 ? t1406 : -t1406;
  t1406 = t1417 > 1000.0 ? t1417 : 1000.0;
  t1539 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI + t1085;
  if (t1539 / 2.0 > 0.5) {
    t1419 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI + t1085)
      / 2.0;
  } else {
    t1419 = 0.5;
  }

  t1541 = pmf_log10(6.9 / (t1406 == 0.0 ? 1.0E-16 : t1406) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1406 == 0.0 ?
    1.0E-16 : t1406) + 2.8767404433520813E-5) * 3.24;
  t1422 = 1.0 / (t1541 == 0.0 ? 1.0E-16 : t1541);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = (pmf_pow(t1419,
    0.66666666666666663) - 1.0) * pmf_sqrt(t1422 / 8.0) * 12.7 + 1.0;
  t1423 = (t1406 - 1000.0) * (t1422 / 8.0) * t1419 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = (t1417 -
    2000.0) / 2000.0;
  t1425 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked * 2.0;
  if (t1417 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = 3.66;
  } else if (t1417 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = t1423;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = (1.0 -
      t1425) * 3.66 + t1423 * t1425;
  }

  t1545 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked *
    0.039269908169872414;
  t1548 = t1539 / 2.0;
  if (t1417 > t1545 / 0.0019634954084936209 / (t1548 == 0.0 ? 1.0E-16 : t1548) /
      30.0) {
    t1554 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI + t1085)
      / 2.0;
    t1423 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked *
      0.039269908169872414 / (t1417 == 0.0 ? 1.0E-16 : t1417) /
      0.0019634954084936209 / (t1554 == 0.0 ? 1.0E-16 : t1554);
  } else {
    t1423 = 30.0;
  }

  if (X[8ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[8ULL] >= 1.0 ?
      1.0 : X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = X[7ULL] >=
      1.0 ? 1.0 : X[7ULL];
  }

  t1425 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked) *
           296.802103844292 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 461.523)
    + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked *
    4124.48151675695;
  t1426 = -((X[6ULL] / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) - X[396ULL] / (X
              [397ULL] == 0.0 ? 1.0E-16 : X[397ULL])) * X[384ULL] * t1425) /
    0.32;
  if (X[396ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[396ULL] >= 623.15 ? 623.15 : X[396ULL];
  }

  t1429 = t1085 * t1085;
  t1428 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1429 *
            0.00037212980109010952) * ((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1429 *
            -0.00038614513167842338) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) +
    ((12825.281119790017 + t1085 * 6.9647057412830984) + t1429 *
     -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked;
  t1560 = t1428 - t1425;
  t1429 = t1428 / (t1560 == 0.0 ? 1.0E-16 : t1560);
  t1430 = pmf_sqrt(t1426 * t1426 * 9.999999999999999E-14 + fabs(X[396ULL] *
    t1429 * t1425) * 1.0E-9);
  if (X[84ULL] <= 0.0) {
    intrm_sf_mf_1138 = 0.0;
  } else {
    intrm_sf_mf_1138 = X[84ULL] >= 1.0 ? 1.0 : X[84ULL];
  }

  if (X[83ULL] <= 0.0) {
    t1433 = 0.0;
  } else {
    t1433 = X[83ULL] >= 1.0 ? 1.0 : X[83ULL];
  }

  t782[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&ug_efOut.mField0[0ULL], &ug_efOut.mField1[0ULL],
    &ug_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t75 = ug_efOut;
  tlu2_1d_linear_nearest_value(&vg_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = vg_efOut[0];
  tlu2_1d_linear_nearest_value(&wg_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = wg_efOut[0];
  tlu2_1d_linear_nearest_value(&xg_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = xg_efOut[0];
  t1434 = (((1.0 - intrm_sf_mf_1138) - t1433) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_1138) + intrm_sf_mf_116 * t1433;
  t1561 = X[397ULL] * X[397ULL] * t1429;
  t1436 = -pmf_sqrt(fabs(t1561 / (t1425 == 0.0 ? 1.0E-16 : t1425) / (X[396ULL] ==
    0.0 ? 1.0E-16 : X[396ULL]))) * 0.32;
  if (t1436 >= 0.0) {
    t1437 = t1436 * 100000.0;
  } else {
    t1437 = -t1436 * 100000.0;
  }

  t1565 = t1434 * 0.32;
  t1085 = t1437 * 0.01 / (t1565 == 0.0 ? 1.0E-16 : t1565);
  t1567 = X[6ULL] * t1425;
  t1439 = X[52ULL] / (t1567 == 0.0 ? 1.0E-16 : t1567);
  U_idx_1 = t1439 * 6.4000000000000011E-5;
  t1440 = t1436 * t1434 * 2.9973120849090416 / (U_idx_1 == 0.0 ? 1.0E-16 :
    U_idx_1);
  t1443 = t1085 >= 1.0 ? t1085 : 1.0;
  t1570 = pmf_log10(6.9 / (t1443 == 0.0 ? 1.0E-16 : t1443) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1443 == 0.0 ?
    1.0E-16 : t1443) + 0.00017169489553429715) * 3.24;
  t1572 = t1439 * 0.0020480000000000003;
  t1437 = t1436 * t1437 * (1.0 / (t1570 == 0.0 ? 1.0E-16 : t1570)) *
    0.046833001326703774 / (t1572 == 0.0 ? 1.0E-16 : t1572);
  t1444 = (t1085 - 2000.0) / 2000.0;
  intrm_sf_mf_116 = t1444 * t1444 * 3.0 - t1444 * t1444 * t1444 * 2.0;
  if (t1085 <= 2000.0) {
    t1444 = t1440 * 1.0E-5;
  } else if (t1085 >= 4000.0) {
    t1444 = t1437 * 1.0E-5;
  } else {
    t1444 = ((1.0 - intrm_sf_mf_116) * t1440 + t1437 * intrm_sf_mf_116) * 1.0E-5;
  }

  t1430 = -(X[384ULL] * t1430) / 0.32 * 0.00031622776601683789 + t1444;
  t1437 = (X[6ULL] / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) - X[399ULL] / (X
            [400ULL] == 0.0 ? 1.0E-16 : X[400ULL])) * X[398ULL] * t1425 / 0.32;
  if (X[399ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[399ULL] >= 623.15 ? 623.15 : X[399ULL];
  }

  t1446 = t1085 * t1085;
  t1440 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1446 *
            0.00037212980109010952) * ((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1446 *
            -0.00038614513167842338) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) +
    ((12825.281119790017 + t1085 * 6.9647057412830984) + t1446 *
     -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked;
  t1580 = t1440 - t1425;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = t1440 / (t1580 ==
    0.0 ? 1.0E-16 : t1580);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = pmf_sqrt
    (t1437 * t1437 * 9.999999999999999E-14 + fabs(X[399ULL] *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1425) *
     1.0E-9);
  t1581 = X[400ULL] * X[400ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  t1444 = -pmf_sqrt(fabs(t1581 / (t1425 == 0.0 ? 1.0E-16 : t1425) / (X[399ULL] ==
    0.0 ? 1.0E-16 : X[399ULL]))) * 0.32;
  if (t1444 >= 0.0) {
    intrm_sf_mf_116 = t1444 * 100000.0;
  } else {
    intrm_sf_mf_116 = -t1444 * 100000.0;
  }

  t1446 = intrm_sf_mf_116 * 0.01 / (t1565 == 0.0 ? 1.0E-16 : t1565);
  t1447 = t1444 * t1434 * 2.9973120849090416 / (U_idx_1 == 0.0 ? 1.0E-16 :
    U_idx_1);
  t1448 = t1446 >= 1.0 ? t1446 : 1.0;
  t1588 = pmf_log10(6.9 / (t1448 == 0.0 ? 1.0E-16 : t1448) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1448 == 0.0 ?
    1.0E-16 : t1448) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_116 = t1444 * intrm_sf_mf_116 * (1.0 / (t1588 == 0.0 ? 1.0E-16 :
    t1588)) * 0.046833001326703774 / (t1572 == 0.0 ? 1.0E-16 : t1572);
  t1449 = (t1446 - 2000.0) / 2000.0;
  t1450 = t1449 * t1449 * 3.0 - t1449 * t1449 * t1449 * 2.0;
  if (t1446 <= 2000.0) {
    t1449 = t1447 * 1.0E-5;
  } else if (t1446 >= 4000.0) {
    t1449 = intrm_sf_mf_116 * 1.0E-5;
  } else {
    t1449 = ((1.0 - t1450) * t1447 + intrm_sf_mf_116 * t1450) * 1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked = X[398ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked / 0.32 *
    0.00031622776601683789 + t1449;
  if (1.0 - X[8ULL] >= 0.01) {
    t1446 = 1.0 - X[8ULL];
  } else if (1.0 - X[8ULL] >= -0.1) {
    t1446 = pmf_exp(((1.0 - X[8ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1446 = 1.6701700790245661E-7;
  }

  t1447 = X[7ULL] / (t1446 == 0.0 ? 1.0E-16 : t1446) * 3827.6794129126583 +
    296.802103844292;
  t782[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&yg_efOut.mField0[0ULL], &yg_efOut.mField1[0ULL],
    &yg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t77 = yg_efOut;
  tlu2_1d_linear_linear_value(&ah_efOut[0ULL], &t77.mField0[0ULL], &t77.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t98[0] = ah_efOut[0];
  t1449 = pmf_exp(pmf_log(X[52ULL] * 100000.0) - t98[0ULL]);
  if (t1449 >= 1.0) {
    intrm_sf_mf_1567 = (t1449 - 1.0) * 461.523 + t1447;
    t1450 = t1447 / (intrm_sf_mf_1567 == 0.0 ? 1.0E-16 : intrm_sf_mf_1567);
  } else {
    t1450 = 1.0;
  }

  tlu2_1d_linear_nearest_value(&bh_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = bh_efOut[0];
  tlu2_1d_linear_nearest_value(&ch_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ch_efOut[0];
  tlu2_1d_linear_nearest_value(&dh_efOut[0ULL], &t75.mField0[0ULL],
    &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = dh_efOut[0];
  t1085 = (((1.0 - intrm_sf_mf_1138) - t1433) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_1138) + intrm_sf_mf_116 * t1433;
  intrm_sf_mf_1138 = (-X[384ULL] - X[398ULL]) / 2.0;
  t1597 = intrm_sf_mf_1117 + t1434;
  t1599 = t1597 / 2.0 * 0.32;
  intrm_sf_mf_1117 = (intrm_sf_mf_1138 >= 0.0 ? intrm_sf_mf_1138 : 0.0) * 0.01 /
    (t1599 == 0.0 ? 1.0E-16 : t1599);
  t1433 = intrm_sf_mf_1117 >= 0.0 ? intrm_sf_mf_1117 : -intrm_sf_mf_1117;
  intrm_sf_mf_1117 = t1433 > 1000.0 ? t1433 : 1000.0;
  t1600 = t1085 + t1382;
  if (t1600 / 2.0 > 0.5) {
    t1452 = (t1085 + t1382) / 2.0;
  } else {
    t1452 = 0.5;
  }

  t1602 = pmf_log10(6.9 / (intrm_sf_mf_1117 == 0.0 ? 1.0E-16 : intrm_sf_mf_1117)
                    + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_1117 == 0.0 ? 1.0E-16 : intrm_sf_mf_1117) +
    0.00017169489553429715) * 3.24;
  t1454 = 1.0 / (t1602 == 0.0 ? 1.0E-16 : t1602);
  intrm_sf_mf_116 = (pmf_pow(t1452, 0.66666666666666663) - 1.0) * pmf_sqrt(t1454
    / 8.0) * 12.7 + 1.0;
  intrm_sf_mf_1124 = (intrm_sf_mf_1117 - 1000.0) * (t1454 / 8.0) * t1452 /
    (intrm_sf_mf_116 == 0.0 ? 1.0E-16 : intrm_sf_mf_116);
  intrm_sf_mf_1141 = (t1433 - 2000.0) / 2000.0;
  t1459 = intrm_sf_mf_1141 * intrm_sf_mf_1141 * 3.0 - intrm_sf_mf_1141 *
    intrm_sf_mf_1141 * intrm_sf_mf_1141 * 2.0;
  if (t1433 <= 2000.0) {
    intrm_sf_mf_1141 = 3.66;
  } else if (t1433 >= 4000.0) {
    intrm_sf_mf_1141 = intrm_sf_mf_1124;
  } else {
    intrm_sf_mf_1141 = (1.0 - t1459) * 3.66 + intrm_sf_mf_1124 * t1459;
  }

  t1606 = intrm_sf_mf_1141 * 10.709248339636167;
  t1609 = t1600 / 2.0;
  if (t1433 > t1606 / 0.32 / (t1609 == 0.0 ? 1.0E-16 : t1609) / 30.0) {
    t1615 = (t1085 + t1382) / 2.0;
    intrm_sf_mf_1124 = intrm_sf_mf_1141 * 10.709248339636167 / (t1433 == 0.0 ?
      1.0E-16 : t1433) / 0.32 / (t1615 == 0.0 ? 1.0E-16 : t1615);
  } else {
    intrm_sf_mf_1124 = 30.0;
  }

  if (X[78ULL] <= 0.0) {
    t1382 = 0.0;
  } else {
    t1382 = X[78ULL] >= 1.0 ? 1.0 : X[78ULL];
  }

  if (X[77ULL] <= 0.0) {
    intrm_sf_mf_1141 = 0.0;
  } else {
    intrm_sf_mf_1141 = X[77ULL] >= 1.0 ? 1.0 : X[77ULL];
  }

  t1459 = (((1.0 - t1382) - intrm_sf_mf_1141) * 296.802103844292 + t1382 *
           461.523) + intrm_sf_mf_1141 * 4124.48151675695;
  t1382 = X[78ULL] * 461.523 / (t1459 == 0.0 ? 1.0E-16 : t1459);
  if (t1382 <= 0.0) {
    intrm_sf_mf_1141 = 0.0;
  } else {
    intrm_sf_mf_1141 = t1382 >= 1.0 ? 1.0 : t1382;
  }

  t1382 = X[77ULL] * 4124.48151675695 / (t1459 == 0.0 ? 1.0E-16 : t1459);
  if (t1382 <= 0.0) {
    t1461 = 0.0;
  } else {
    t1461 = t1382 >= 1.0 ? 1.0 : t1382;
  }

  t782[0ULL] = X[75ULL];
  tlu2_linear_nearest_prelookup(&eh_efOut.mField0[0ULL], &eh_efOut.mField1[0ULL],
    &eh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = eh_efOut;
  tlu2_1d_linear_nearest_value(&fh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = fh_efOut[0];
  tlu2_1d_linear_nearest_value(&gh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = gh_efOut[0];
  tlu2_1d_linear_nearest_value(&hh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = hh_efOut[0];
  t1382 = (((1.0 - intrm_sf_mf_1141) - t1461) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_1141) + intrm_sf_mf_116 * t1461;
  t1462 = intrm_sf_mf_1138 <= 0.0 ? intrm_sf_mf_1138 : 0.0;
  tlu2_1d_linear_nearest_value(&ih_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = ih_efOut[0];
  tlu2_1d_linear_nearest_value(&jh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = jh_efOut[0];
  tlu2_1d_linear_nearest_value(&kh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = kh_efOut[0];
  intrm_sf_mf_1138 = (((1.0 - intrm_sf_mf_1141) - t1461) * t786_idx_0 +
                      t780_idx_0 * intrm_sf_mf_1141) + intrm_sf_mf_116 * t1461;
  t1618 = t1434 + intrm_sf_mf_1138;
  t1620 = t1618 / 2.0 * 0.32;
  intrm_sf_mf_1141 = -t1462 * 0.01 / (t1620 == 0.0 ? 1.0E-16 : t1620);
  t1461 = intrm_sf_mf_1141 >= 0.0 ? intrm_sf_mf_1141 : -intrm_sf_mf_1141;
  intrm_sf_mf_1141 = t1461 > 1000.0 ? t1461 : 1000.0;
  t1621 = t1085 + t1382;
  if (t1621 / 2.0 > 0.5) {
    t1462 = (t1085 + t1382) / 2.0;
  } else {
    t1462 = 0.5;
  }

  t1623 = pmf_log10(6.9 / (intrm_sf_mf_1141 == 0.0 ? 1.0E-16 : intrm_sf_mf_1141)
                    + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_1141 == 0.0 ? 1.0E-16 : intrm_sf_mf_1141) +
    0.00017169489553429715) * 3.24;
  t1463 = 1.0 / (t1623 == 0.0 ? 1.0E-16 : t1623);
  intrm_sf_mf_492 = (pmf_pow(t1462, 0.66666666666666663) - 1.0) * pmf_sqrt(t1463
    / 8.0) * 12.7 + 1.0;
  t1464 = (intrm_sf_mf_1141 - 1000.0) * (t1463 / 8.0) * t1462 / (intrm_sf_mf_492
    == 0.0 ? 1.0E-16 : intrm_sf_mf_492);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI = (t1461 - 2000.0)
    / 2000.0;
  t1468 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * 2.0;
  if (t1461 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI = 3.66;
  } else if (t1461 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI = t1464;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI = (1.0 - t1468) *
      3.66 + t1464 * t1468;
  }

  t1627 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI *
    10.709248339636167;
  t1630 = t1621 / 2.0;
  if (t1461 > t1627 / 0.32 / (t1630 == 0.0 ? 1.0E-16 : t1630) / 30.0) {
    t1085 = (t1085 + t1382) / 2.0;
    t1464 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI *
      10.709248339636167 / (t1461 == 0.0 ? 1.0E-16 : t1461) / 0.32 / (t1085 ==
      0.0 ? 1.0E-16 : t1085);
  } else {
    t1464 = 30.0;
  }

  if (X[11ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI = X[11ULL] >=
      1.0 ? 1.0 : X[11ULL];
  }

  if (X[10ULL] <= 0.0) {
    t1468 = 0.0;
  } else {
    t1468 = X[10ULL] >= 1.0 ? 1.0 : X[10ULL];
  }

  t1469 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI)
            - t1468) * 296.802103844292 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * 461.523)
    + t1468 * 4124.48151675695;
  t1470 = -((X[9ULL] / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) - X[410ULL] / (X
              [411ULL] == 0.0 ? 1.0E-16 : X[411ULL])) * X[398ULL] * t1469) /
    0.32;
  if (X[410ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[410ULL] >= 623.15 ? 623.15 : X[410ULL];
  }

  t1474 = t1085 * t1085;
  t1472 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1474 *
            0.00037212980109010952) * ((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI) -
            t1468) + ((1479.6504774710445 + t1085 * 1.200211433705052) + t1474 *
                      -0.00038614513167842338) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI) +
    ((12825.281119790017 + t1085 * 6.9647057412830984) + t1474 *
     -0.007052486824683288) * t1468;
  t1643 = t1472 - t1469;
  t1474 = t1472 / (t1643 == 0.0 ? 1.0E-16 : t1643);
  t1475 = pmf_sqrt(t1470 * t1470 * 9.999999999999999E-14 + fabs(X[410ULL] *
    t1474 * t1469) * 1.0E-9);
  if (X[89ULL] <= 0.0) {
    intrm_sf_mf_1279 = 0.0;
  } else {
    intrm_sf_mf_1279 = X[89ULL] >= 1.0 ? 1.0 : X[89ULL];
  }

  if (X[88ULL] <= 0.0) {
    t1478 = 0.0;
  } else {
    t1478 = X[88ULL] >= 1.0 ? 1.0 : X[88ULL];
  }

  t782[0ULL] = X[9ULL];
  tlu2_linear_nearest_prelookup(&lh_efOut.mField0[0ULL], &lh_efOut.mField1[0ULL],
    &lh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = lh_efOut;
  tlu2_1d_linear_nearest_value(&mh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = mh_efOut[0];
  tlu2_1d_linear_nearest_value(&nh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = nh_efOut[0];
  tlu2_1d_linear_nearest_value(&oh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = oh_efOut[0];
  t1480 = (((1.0 - intrm_sf_mf_1279) - t1478) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_1279) + intrm_sf_mf_116 * t1478;
  t1643 = X[411ULL] * X[411ULL] * t1474;
  t1483 = -pmf_sqrt(fabs(t1643 / (t1469 == 0.0 ? 1.0E-16 : t1469) / (X[410ULL] ==
    0.0 ? 1.0E-16 : X[410ULL]))) * 0.32;
  if (t1483 >= 0.0) {
    t1484 = t1483 * 100000.0;
  } else {
    t1484 = -t1483 * 100000.0;
  }

  t1926 = t1480 * 0.32;
  U_idx_1 = t1484 * 0.01 / (t1926 == 0.0 ? 1.0E-16 : t1926);
  t1085 = X[9ULL] * t1469;
  t1486 = X[53ULL] / (t1085 == 0.0 ? 1.0E-16 : t1085);
  t1682 = t1486 * 6.4000000000000011E-5;
  t1487 = t1483 * t1480 * 2.9973120849090416 / (t1682 == 0.0 ? 1.0E-16 : t1682);
  t1488 = U_idx_1 >= 1.0 ? U_idx_1 : 1.0;
  t1085 = pmf_log10(6.9 / (t1488 == 0.0 ? 1.0E-16 : t1488) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1488 == 0.0 ?
    1.0E-16 : t1488) + 0.00017169489553429715) * 3.24;
  t1687 = t1486 * 0.0020480000000000003;
  t1484 = t1483 * t1484 * (1.0 / (t1085 == 0.0 ? 1.0E-16 : t1085)) *
    0.046833001326703774 / (t1687 == 0.0 ? 1.0E-16 : t1687);
  t1489 = (U_idx_1 - 2000.0) / 2000.0;
  t1085 = t1489 * t1489 * 3.0 - t1489 * t1489 * t1489 * 2.0;
  if (U_idx_1 <= 2000.0) {
    t1489 = t1487 * 1.0E-5;
  } else if (U_idx_1 >= 4000.0) {
    t1489 = t1484 * 1.0E-5;
  } else {
    t1489 = ((1.0 - t1085) * t1487 + t1484 * t1085) * 1.0E-5;
  }

  t1475 = -(X[398ULL] * t1475) / 0.32 * 0.00031622776601683789 + t1489;
  t1484 = (X[9ULL] / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) - X[412ULL] / (X
            [413ULL] == 0.0 ? 1.0E-16 : X[413ULL])) * X[145ULL] * t1469 / 0.32;
  if (X[412ULL] <= 216.59999999999997) {
    U_idx_1 = 216.59999999999997;
  } else {
    U_idx_1 = X[412ULL] >= 623.15 ? 623.15 : X[412ULL];
  }

  t1066 = U_idx_1 * U_idx_1;
  t1487 = (((1074.1165326382541 + U_idx_1 * -0.2214565261064077) + t1066 *
            0.00037212980109010952) * ((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI) -
            t1468) + ((1479.6504774710445 + U_idx_1 * 1.200211433705052) + t1066
                      * -0.00038614513167842338) *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI) +
    ((12825.281119790017 + U_idx_1 * 6.9647057412830984) + t1066 *
     -0.007052486824683288) * t1468;
  t1662 = t1487 - t1469;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI = t1487 / (t1662 ==
    0.0 ? 1.0E-16 : t1662);
  t1468 = pmf_sqrt(t1484 * t1484 * 9.999999999999999E-14 + fabs(X[412ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * t1469) *
                   1.0E-9);
  t1662 = X[413ULL] * X[413ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI;
  t1489 = -pmf_sqrt(fabs(t1662 / (t1469 == 0.0 ? 1.0E-16 : t1469) / (X[412ULL] ==
    0.0 ? 1.0E-16 : X[412ULL]))) * 0.32;
  if (t1489 >= 0.0) {
    t1085 = t1489 * 100000.0;
  } else {
    t1085 = -t1489 * 100000.0;
  }

  t1066 = t1085 * 0.01 / (t1926 == 0.0 ? 1.0E-16 : t1926);
  t1495 = t1489 * t1480 * 2.9973120849090416 / (t1682 == 0.0 ? 1.0E-16 : t1682);
  t1496 = t1066 >= 1.0 ? t1066 : 1.0;
  t1678 = pmf_log10(6.9 / (t1496 == 0.0 ? 1.0E-16 : t1496) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1496 == 0.0 ?
    1.0E-16 : t1496) + 0.00017169489553429715) * 3.24;
  t1085 = t1489 * t1085 * (1.0 / (t1678 == 0.0 ? 1.0E-16 : t1678)) *
    0.046833001326703774 / (t1687 == 0.0 ? 1.0E-16 : t1687);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I = (t1066 -
    2000.0) / 2000.0;
  t1500 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I * 2.0;
  if (t1066 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I = t1495 *
      1.0E-5;
  } else if (t1066 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I = t1085 *
      1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I = ((1.0 -
      t1500) * t1495 + t1085 * t1500) * 1.0E-5;
  }

  t1468 = X[145ULL] * t1468 / 0.32 * 0.00031622776601683789 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I;
  if (1.0 - X[11ULL] >= 0.01) {
    t1066 = 1.0 - X[11ULL];
  } else if (1.0 - X[11ULL] >= -0.1) {
    t1066 = pmf_exp(((1.0 - X[11ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1066 = 1.6701700790245661E-7;
  }

  t1495 = X[10ULL] / (t1066 == 0.0 ? 1.0E-16 : t1066) * 3827.6794129126583 +
    296.802103844292;
  t782[0ULL] = X[9ULL];
  tlu2_linear_linear_prelookup(&ph_efOut.mField0[0ULL], &ph_efOut.mField1[0ULL],
    &ph_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t75 = ph_efOut;
  tlu2_1d_linear_linear_value(&qh_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t643[0] = qh_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I = pmf_exp
    (pmf_log(X[53ULL] * 100000.0) - t643[0ULL]);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I >= 1.0) {
    t1678 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I -
             1.0) * 461.523 + t1495;
    t1500 = t1495 / (t1678 == 0.0 ? 1.0E-16 : t1678);
  } else {
    t1500 = 1.0;
  }

  tlu2_1d_linear_nearest_value(&rh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = rh_efOut[0];
  tlu2_1d_linear_nearest_value(&sh_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = sh_efOut[0];
  tlu2_1d_linear_nearest_value(&th_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = th_efOut[0];
  t1502 = (((1.0 - intrm_sf_mf_1279) - t1478) * t786_idx_0 + t780_idx_0 *
           intrm_sf_mf_1279) + intrm_sf_mf_116 * t1478;
  intrm_sf_mf_1279 = (-X[398ULL] - X[145ULL]) / 2.0;
  t1678 = intrm_sf_mf_1138 + t1480;
  t1687 = t1678 / 2.0 * 0.32;
  intrm_sf_mf_1138 = (intrm_sf_mf_1279 >= 0.0 ? intrm_sf_mf_1279 : 0.0) * 0.01 /
    (t1687 == 0.0 ? 1.0E-16 : t1687);
  t1478 = intrm_sf_mf_1138 >= 0.0 ? intrm_sf_mf_1138 : -intrm_sf_mf_1138;
  intrm_sf_mf_1138 = t1478 > 1000.0 ? t1478 : 1000.0;
  t1682 = t1382 + t1502;
  if (t1682 / 2.0 > 0.5) {
    t1504 = (t1382 + t1502) / 2.0;
  } else {
    t1504 = 0.5;
  }

  t1687 = pmf_log10(6.9 / (intrm_sf_mf_1138 == 0.0 ? 1.0E-16 : intrm_sf_mf_1138)
                    + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_1138 == 0.0 ? 1.0E-16 : intrm_sf_mf_1138) +
    0.00017169489553429715) * 3.24;
  t1505 = 1.0 / (t1687 == 0.0 ? 1.0E-16 : t1687);
  t1698 = (pmf_pow(t1504, 0.66666666666666663) - 1.0) * pmf_sqrt(t1505 / 8.0) *
    12.7 + 1.0;
  t1507 = (intrm_sf_mf_1138 - 1000.0) * (t1505 / 8.0) * t1504 / (t1698 == 0.0 ?
    1.0E-16 : t1698);
  t1508 = (t1478 - 2000.0) / 2000.0;
  t1509 = t1508 * t1508 * 3.0 - t1508 * t1508 * t1508 * 2.0;
  if (t1478 <= 2000.0) {
    t1508 = 3.66;
  } else if (t1478 >= 4000.0) {
    t1508 = t1507;
  } else {
    t1508 = (1.0 - t1509) * 3.66 + t1507 * t1509;
  }

  t1687 = t1508 * 10.709248339636167;
  t1701 = t1682 / 2.0;
  if (t1478 > t1687 / 0.32 / (t1701 == 0.0 ? 1.0E-16 : t1701) / 30.0) {
    t1085 = (t1382 + t1502) / 2.0;
    t1507 = t1508 * 10.709248339636167 / (t1478 == 0.0 ? 1.0E-16 : t1478) / 0.32
      / (t1085 == 0.0 ? 1.0E-16 : t1085);
  } else {
    t1507 = 30.0;
  }

  t1698 = t1480 + intrm_sf_mf_1278;
  t1706 = t1698 / 2.0 * 0.32;
  intrm_sf_mf_1278 = -(intrm_sf_mf_1279 <= 0.0 ? intrm_sf_mf_1279 : 0.0) * 0.01 /
    (t1706 == 0.0 ? 1.0E-16 : t1706);
  t1382 = intrm_sf_mf_1278 >= 0.0 ? intrm_sf_mf_1278 : -intrm_sf_mf_1278;
  intrm_sf_mf_1278 = t1382 > 1000.0 ? t1382 : 1000.0;
  t1701 = t1502 + t1090;
  if (t1701 / 2.0 > 0.5) {
    intrm_sf_mf_1279 = (t1502 + t1090) / 2.0;
  } else {
    intrm_sf_mf_1279 = 0.5;
  }

  t1706 = pmf_log10(6.9 / (intrm_sf_mf_1278 == 0.0 ? 1.0E-16 : intrm_sf_mf_1278)
                    + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_1278 == 0.0 ? 1.0E-16 : intrm_sf_mf_1278) +
    0.00017169489553429715) * 3.24;
  t1508 = 1.0 / (t1706 == 0.0 ? 1.0E-16 : t1706);
  t1743 = (pmf_pow(intrm_sf_mf_1279, 0.66666666666666663) - 1.0) * pmf_sqrt
    (t1508 / 8.0) * 12.7 + 1.0;
  t1509 = (intrm_sf_mf_1278 - 1000.0) * (t1508 / 8.0) * intrm_sf_mf_1279 /
    (t1743 == 0.0 ? 1.0E-16 : t1743);
  intrm_sf_mf_1338 = (t1382 - 2000.0) / 2000.0;
  t1511 = intrm_sf_mf_1338 * intrm_sf_mf_1338 * 3.0 - intrm_sf_mf_1338 *
    intrm_sf_mf_1338 * intrm_sf_mf_1338 * 2.0;
  if (t1382 <= 2000.0) {
    intrm_sf_mf_1338 = 3.66;
  } else if (t1382 >= 4000.0) {
    intrm_sf_mf_1338 = t1509;
  } else {
    intrm_sf_mf_1338 = (1.0 - t1511) * 3.66 + t1509 * t1511;
  }

  t1706 = intrm_sf_mf_1338 * 10.709248339636167;
  t1760 = t1701 / 2.0;
  if (t1382 > t1706 / 0.32 / (t1760 == 0.0 ? 1.0E-16 : t1760) / 30.0) {
    t1929 = (t1502 + t1090) / 2.0;
    t1509 = intrm_sf_mf_1338 * 10.709248339636167 / (t1382 == 0.0 ? 1.0E-16 :
      t1382) / 0.32 / (t1929 == 0.0 ? 1.0E-16 : t1929);
  } else {
    t1509 = 30.0;
  }

  if (X[56ULL] <= 0.0) {
    t1502 = 0.0;
  } else {
    t1502 = X[56ULL] >= 1.0 ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    intrm_sf_mf_1338 = 0.0;
  } else {
    intrm_sf_mf_1338 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  t1511 = (((1.0 - t1502) - intrm_sf_mf_1338) * 296.802103844292 + t1502 *
           461.523) + intrm_sf_mf_1338 * 259.836612622973;
  t1512 = -((X[54ULL] / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) - X[427ULL] / (X
              [428ULL] == 0.0 ? 1.0E-16 : X[428ULL])) * X[361ULL] * t1511) /
    0.0019634954084936209;
  if (X[427ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[427ULL] >= 623.15 ? 623.15 : X[427ULL];
  }

  t1516 = t1085 * t1085;
  t1514 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1516 *
            0.00037212980109010952) * ((1.0 - t1502) - intrm_sf_mf_1338) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1516 *
            -0.00038614513167842338) * t1502) + ((900.63941224837913 + t1085 *
    -0.044484923911364271) + t1516 * 0.00036936011832043369) * intrm_sf_mf_1338;
  t1723 = t1514 - t1511;
  t1516 = t1514 / (t1723 == 0.0 ? 1.0E-16 : t1723);
  t1517 = pmf_sqrt(t1512 * t1512 * 9.999999999999999E-14 + fabs(X[427ULL] *
    t1516 * t1511) * 1.0E-9);
  if (X[424ULL] <= 0.0) {
    t1519 = 0.0;
  } else {
    t1519 = X[424ULL] >= 1.0 ? 1.0 : X[424ULL];
  }

  if (X[423ULL] <= 0.0) {
    t1520 = 0.0;
  } else {
    t1520 = X[423ULL] >= 1.0 ? 1.0 : X[423ULL];
  }

  t782[0ULL] = X[54ULL];
  tlu2_linear_nearest_prelookup(&uh_efOut.mField0[0ULL], &uh_efOut.mField1[0ULL],
    &uh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t74 = uh_efOut;
  tlu2_1d_linear_nearest_value(&vh_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = vh_efOut[0];
  tlu2_1d_linear_nearest_value(&wh_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = wh_efOut[0];
  tlu2_1d_linear_nearest_value(&xh_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = xh_efOut[0];
  t1521 = (((1.0 - t1519) - t1520) * t786_idx_0 + t780_idx_0 * t1519) +
    intrm_sf_mf_116 * t1520;
  t1723 = X[428ULL] * X[428ULL] * t1516;
  t1522 = -pmf_sqrt(fabs(t1723 / (t1511 == 0.0 ? 1.0E-16 : t1511) / (X[427ULL] ==
    0.0 ? 1.0E-16 : X[427ULL]))) * 0.0019634954084936209;
  if (t1522 >= 0.0) {
    t1523 = t1522 * 100000.0;
  } else {
    t1523 = -t1522 * 100000.0;
  }

  t1929 = t1521 * 0.0019634954084936209;
  intrm_sf_mf_116 = t1523 * 0.05 / (t1929 == 0.0 ? 1.0E-16 : t1929);
  t1085 = X[54ULL] * t1511;
  t1527 = X[57ULL] / (t1085 == 0.0 ? 1.0E-16 : t1085);
  t1764 = t1527 * 9.8174770424681068E-6;
  t1528 = t1522 * t1521 * 11.2 / (t1764 == 0.0 ? 1.0E-16 : t1764);
  t1529 = intrm_sf_mf_116 >= 1.0 ? intrm_sf_mf_116 : 1.0;
  t1085 = pmf_log10(6.9 / (t1529 == 0.0 ? 1.0E-16 : t1529) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1529 == 0.0 ?
    1.0E-16 : t1529) + 2.8767404433520813E-5) * 3.24;
  t1770 = t1527 * 3.855314219175531E-7;
  t1523 = t1522 * t1523 * (1.0 / (t1085 == 0.0 ? 1.0E-16 : t1085)) * 0.175 /
    (t1770 == 0.0 ? 1.0E-16 : t1770);
  t1530 = (intrm_sf_mf_116 - 2000.0) / 2000.0;
  t1085 = t1530 * t1530 * 3.0 - t1530 * t1530 * t1530 * 2.0;
  if (intrm_sf_mf_116 <= 2000.0) {
    t1530 = t1528 * 1.0E-5;
  } else if (intrm_sf_mf_116 >= 4000.0) {
    t1530 = t1523 * 1.0E-5;
  } else {
    t1530 = ((1.0 - t1085) * t1528 + t1523 * t1085) * 1.0E-5;
  }

  t1517 = -(X[361ULL] * t1517) / 0.0019634954084936209 * 0.00031622776601683789
    + t1530;
  t1523 = -((X[54ULL] / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) - X[429ULL] / (X
              [430ULL] == 0.0 ? 1.0E-16 : X[430ULL])) * X[177ULL] * t1511) /
    0.0019634954084936209;
  if (X[429ULL] <= 216.59999999999997) {
    intrm_sf_mf_116 = 216.59999999999997;
  } else {
    intrm_sf_mf_116 = X[429ULL] >= 623.15 ? 623.15 : X[429ULL];
  }

  t1072 = intrm_sf_mf_116 * intrm_sf_mf_116;
  t1528 = (((1074.1165326382541 + intrm_sf_mf_116 * -0.2214565261064077) + t1072
            * 0.00037212980109010952) * ((1.0 - t1502) - intrm_sf_mf_1338) +
           ((1479.6504774710445 + intrm_sf_mf_116 * 1.200211433705052) + t1072 *
            -0.00038614513167842338) * t1502) + ((900.63941224837913 +
    intrm_sf_mf_116 * -0.044484923911364271) + t1072 * 0.00036936011832043369) *
    intrm_sf_mf_1338;
  t1743 = t1528 - t1511;
  t1502 = t1528 / (t1743 == 0.0 ? 1.0E-16 : t1743);
  intrm_sf_mf_1338 = pmf_sqrt(t1523 * t1523 * 9.999999999999999E-14 + fabs(X
    [429ULL] * t1502 * t1511) * 1.0E-9);
  t1743 = X[430ULL] * X[430ULL] * t1502;
  t1530 = -pmf_sqrt(fabs(t1743 / (t1511 == 0.0 ? 1.0E-16 : t1511) / (X[429ULL] ==
    0.0 ? 1.0E-16 : X[429ULL]))) * 0.0019634954084936209;
  if (t1530 >= 0.0) {
    t1085 = t1530 * 100000.0;
  } else {
    t1085 = -t1530 * 100000.0;
  }

  t1072 = t1085 * 0.05 / (t1929 == 0.0 ? 1.0E-16 : t1929);
  t1533 = t1530 * t1521 * 11.2 / (t1764 == 0.0 ? 1.0E-16 : t1764);
  t1534 = t1072 >= 1.0 ? t1072 : 1.0;
  t1760 = pmf_log10(6.9 / (t1534 == 0.0 ? 1.0E-16 : t1534) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1534 == 0.0 ?
    1.0E-16 : t1534) + 2.8767404433520813E-5) * 3.24;
  t1085 = t1530 * t1085 * (1.0 / (t1760 == 0.0 ? 1.0E-16 : t1760)) * 0.175 /
    (t1770 == 0.0 ? 1.0E-16 : t1770);
  t1535 = (t1072 - 2000.0) / 2000.0;
  t1537 = t1535 * t1535 * 3.0 - t1535 * t1535 * t1535 * 2.0;
  if (t1072 <= 2000.0) {
    t1535 = t1533 * 1.0E-5;
  } else if (t1072 >= 4000.0) {
    t1535 = t1085 * 1.0E-5;
  } else {
    t1535 = ((1.0 - t1537) * t1533 + t1085 * t1537) * 1.0E-5;
  }

  intrm_sf_mf_1338 = -(X[177ULL] * intrm_sf_mf_1338) / 0.0019634954084936209 *
    0.00031622776601683789 + t1535;
  if (1.0 - X[56ULL] >= 0.01) {
    t1072 = 1.0 - X[56ULL];
  } else if (1.0 - X[56ULL] >= -0.1) {
    t1072 = pmf_exp(((1.0 - X[56ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t1072 = 1.6701700790245661E-7;
  }

  t1533 = X[55ULL] / (t1072 == 0.0 ? 1.0E-16 : t1072) * -36.965491221318985 +
    296.802103844292;
  t782[0ULL] = X[54ULL];
  tlu2_linear_linear_prelookup(&yh_efOut.mField0[0ULL], &yh_efOut.mField1[0ULL],
    &yh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t75 = yh_efOut;
  tlu2_1d_linear_linear_value(&ai_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t93[0] = ai_efOut[0];
  t1535 = pmf_exp(pmf_log(X[57ULL] * 100000.0) - t93[0ULL]);
  if (t1535 >= 1.0) {
    t1760 = (t1535 - 1.0) * 461.523 + t1533;
    t1537 = t1533 / (t1760 == 0.0 ? 1.0E-16 : t1760);
  } else {
    t1537 = 1.0;
  }

  if (X[351ULL] <= 0.0) {
    t1538 = 0.0;
  } else {
    t1538 = X[351ULL] >= 1.0 ? 1.0 : X[351ULL];
  }

  if (X[350ULL] <= 0.0) {
    t1540 = 0.0;
  } else {
    t1540 = X[350ULL] >= 1.0 ? 1.0 : X[350ULL];
  }

  t1541 = (((1.0 - t1538) - t1540) * 296.802103844292 + t1538 * 461.523) + t1540
    * 259.836612622973;
  t1538 = X[351ULL] * 461.523 / (t1541 == 0.0 ? 1.0E-16 : t1541);
  if (t1538 <= 0.0) {
    t1540 = 0.0;
  } else {
    t1540 = t1538 >= 1.0 ? 1.0 : t1538;
  }

  t1538 = X[350ULL] * 259.836612622973 / (t1541 == 0.0 ? 1.0E-16 : t1541);
  if (t1538 <= 0.0) {
    t1542 = 0.0;
  } else {
    t1542 = t1538 >= 1.0 ? 1.0 : t1538;
  }

  t782[0ULL] = X[349ULL];
  tlu2_linear_nearest_prelookup(&bi_efOut.mField0[0ULL], &bi_efOut.mField1[0ULL],
    &bi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t84 = bi_efOut;
  tlu2_1d_linear_nearest_value(&ci_efOut[0ULL], &t84.mField0[0ULL],
    &t84.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = ci_efOut[0];
  tlu2_1d_linear_nearest_value(&di_efOut[0ULL], &t84.mField0[0ULL],
    &t84.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = di_efOut[0];
  tlu2_1d_linear_nearest_value(&ei_efOut[0ULL], &t84.mField0[0ULL],
    &t84.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = ei_efOut[0];
  t1538 = (((1.0 - t1540) - t1542) * t786_idx_0 + t780_idx_0 * t1540) +
    intrm_sf_mf_116 * t1542;
  tlu2_1d_linear_nearest_value(&fi_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = fi_efOut[0];
  tlu2_1d_linear_nearest_value(&gi_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = gi_efOut[0];
  tlu2_1d_linear_nearest_value(&hi_efOut[0ULL], &t74.mField0[0ULL],
    &t74.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = hi_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = (((1.0 - t1519) -
    t1520) * t786_idx_0 + t780_idx_0 * t1519) + intrm_sf_mf_116 * t1520;
  t1519 = (-X[361ULL] - (-X[177ULL])) / 2.0;
  tlu2_1d_linear_nearest_value(&ii_efOut[0ULL], &t84.mField0[0ULL],
    &t84.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = ii_efOut[0];
  tlu2_1d_linear_nearest_value(&ji_efOut[0ULL], &t84.mField0[0ULL],
    &t84.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ji_efOut[0];
  tlu2_1d_linear_nearest_value(&ki_efOut[0ULL], &t84.mField0[0ULL],
    &t84.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = ki_efOut[0];
  t1760 = t1521 + ((((1.0 - t1540) - t1542) * t786_idx_0 + t780_idx_0 * t1540) +
                   intrm_sf_mf_116 * t1542);
  t1770 = t1760 / 2.0 * 0.0019634954084936209;
  t1520 = (t1519 >= 0.0 ? t1519 : 0.0) * 0.05 / (t1770 == 0.0 ? 1.0E-16 : t1770);
  t1540 = t1520 >= 0.0 ? t1520 : -t1520;
  t1520 = t1540 > 1000.0 ? t1540 : 1000.0;
  t1764 = t1538 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p;
  if (t1764 / 2.0 > 0.5) {
    t1542 = (t1538 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) /
      2.0;
  } else {
    t1542 = 0.5;
  }

  t1770 = pmf_log10(6.9 / (t1520 == 0.0 ? 1.0E-16 : t1520) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1520 == 0.0 ?
    1.0E-16 : t1520) + 2.8767404433520813E-5) * 3.24;
  t1544 = 1.0 / (t1770 == 0.0 ? 1.0E-16 : t1770);
  t1775 = (pmf_pow(t1542, 0.66666666666666663) - 1.0) * pmf_sqrt(t1544 / 8.0) *
    12.7 + 1.0;
  t1547 = (t1520 - 1000.0) * (t1544 / 8.0) * t1542 / (t1775 == 0.0 ? 1.0E-16 :
    t1775);
  t1548 = (t1540 - 2000.0) / 2000.0;
  t1549 = t1548 * t1548 * 3.0 - t1548 * t1548 * t1548 * 2.0;
  if (t1540 <= 2000.0) {
    t1548 = 3.66;
  } else if (t1540 >= 4000.0) {
    t1548 = t1547;
  } else {
    t1548 = (1.0 - t1549) * 3.66 + t1547 * t1549;
  }

  t1770 = t1548 * 0.039269908169872414;
  t1776 = t1764 / 2.0;
  if (t1540 > t1770 / 0.0019634954084936209 / (t1776 == 0.0 ? 1.0E-16 : t1776) /
      30.0) {
    t1085 = (t1538 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) /
      2.0;
    t1547 = t1548 * 0.039269908169872414 / (t1540 == 0.0 ? 1.0E-16 : t1540) /
      0.0019634954084936209 / (t1085 == 0.0 ? 1.0E-16 : t1085);
  } else {
    t1547 = 30.0;
  }

  t1775 = t1521 + t1176;
  t1789 = t1775 / 2.0 * 0.0019634954084936209;
  t1176 = -(t1519 <= 0.0 ? t1519 : 0.0) * 0.05 / (t1789 == 0.0 ? 1.0E-16 : t1789);
  t1519 = t1176 >= 0.0 ? t1176 : -t1176;
  t1176 = t1519 > 1000.0 ? t1519 : 1000.0;
  t1776 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p + t1171;
  if (t1776 / 2.0 > 0.5) {
    t1538 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p + t1171) /
      2.0;
  } else {
    t1538 = 0.5;
  }

  t1789 = pmf_log10(6.9 / (t1176 == 0.0 ? 1.0E-16 : t1176) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1176 == 0.0 ?
    1.0E-16 : t1176) + 2.8767404433520813E-5) * 3.24;
  t1548 = 1.0 / (t1789 == 0.0 ? 1.0E-16 : t1789);
  t1825 = (pmf_pow(t1538, 0.66666666666666663) - 1.0) * pmf_sqrt(t1548 / 8.0) *
    12.7 + 1.0;
  t1549 = (t1176 - 1000.0) * (t1548 / 8.0) * t1538 / (t1825 == 0.0 ? 1.0E-16 :
    t1825);
  t1550 = (t1519 - 2000.0) / 2000.0;
  t1551 = t1550 * t1550 * 3.0 - t1550 * t1550 * t1550 * 2.0;
  if (t1519 <= 2000.0) {
    t1550 = 3.66;
  } else if (t1519 >= 4000.0) {
    t1550 = t1549;
  } else {
    t1550 = (1.0 - t1551) * 3.66 + t1549 * t1551;
  }

  t1789 = t1550 * 0.039269908169872414;
  t1839 = t1776 / 2.0;
  if (t1519 > t1789 / 0.0019634954084936209 / (t1839 == 0.0 ? 1.0E-16 : t1839) /
      30.0) {
    t1937 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p + t1171) /
      2.0;
    t1549 = t1550 * 0.039269908169872414 / (t1519 == 0.0 ? 1.0E-16 : t1519) /
      0.0019634954084936209 / (t1937 == 0.0 ? 1.0E-16 : t1937);
  } else {
    t1549 = 30.0;
  }

  if (X[449ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = X[449ULL] >= 1.0 ?
      1.0 : X[449ULL];
  }

  if (X[450ULL] <= 0.0) {
    t1550 = 0.0;
  } else {
    t1550 = X[450ULL] >= 1.0 ? 1.0 : X[450ULL];
  }

  t1551 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) -
            t1550) * 296.802103844292 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p * 461.523) +
    t1550 * 259.836612622973;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = (X[453ULL] *
    0.07812500122070315 + U_idx_10 * 10.0) - 7.8125001220703152E-10;
  if (X[60ULL] <= 0.0) {
    t1550 = 0.0;
  } else {
    t1550 = X[60ULL] >= 1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    t1552 = 0.0;
  } else {
    t1552 = X[61ULL] >= 1.0 ? 1.0 : X[61ULL];
  }

  t1553 = (((1.0 - t1550) - t1552) * 296.802103844292 + t1550 * 461.523) + t1552
    * 259.836612622973;
  t1554 = -((X[58ULL] / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) - X[456ULL] / (X
              [457ULL] == 0.0 ? 1.0E-16 : X[457ULL])) * X[201ULL] * t1553) /
    0.0019634954084936209;
  if (X[456ULL] <= 216.59999999999997) {
    t1085 = 216.59999999999997;
  } else {
    t1085 = X[456ULL] >= 623.15 ? 623.15 : X[456ULL];
  }

  t1558 = t1085 * t1085;
  t1556 = (((1074.1165326382541 + t1085 * -0.2214565261064077) + t1558 *
            0.00037212980109010952) * ((1.0 - t1550) - t1552) +
           ((1479.6504774710445 + t1085 * 1.200211433705052) + t1558 *
            -0.00038614513167842338) * t1550) + ((900.63941224837913 + t1085 *
    -0.044484923911364271) + t1558 * 0.00036936011832043369) * t1552;
  t1805 = t1556 - t1553;
  t1558 = t1556 / (t1805 == 0.0 ? 1.0E-16 : t1805);
  t1559 = pmf_sqrt(t1554 * t1554 * 9.999999999999999E-14 + fabs(X[456ULL] *
    t1558 * t1553) * 1.0E-9);
  if (X[458ULL] <= 0.0) {
    t1560 = 0.0;
  } else {
    t1560 = X[458ULL] >= 1.0 ? 1.0 : X[458ULL];
  }

  if (X[459ULL] <= 0.0) {
    t1562 = 0.0;
  } else {
    t1562 = X[459ULL] >= 1.0 ? 1.0 : X[459ULL];
  }

  t782[0ULL] = X[58ULL];
  tlu2_linear_nearest_prelookup(&li_efOut.mField0[0ULL], &li_efOut.mField1[0ULL],
    &li_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t61 = li_efOut;
  tlu2_1d_linear_nearest_value(&mi_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = mi_efOut[0];
  tlu2_1d_linear_nearest_value(&ni_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = ni_efOut[0];
  tlu2_1d_linear_nearest_value(&oi_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = oi_efOut[0];
  t1564 = (((1.0 - t1560) - t1562) * t786_idx_0 + t780_idx_0 * t1560) +
    intrm_sf_mf_116 * t1562;
  t1805 = X[457ULL] * X[457ULL] * t1558;
  t1567 = -pmf_sqrt(fabs(t1805 / (t1553 == 0.0 ? 1.0E-16 : t1553) / (X[456ULL] ==
    0.0 ? 1.0E-16 : X[456ULL]))) * 0.0019634954084936209;
  if (t1567 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI = t1567 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI = -t1567 *
      100000.0;
  }

  t1937 = t1564 * 0.0019634954084936209;
  U_idx_1 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
    0.05 / (t1937 == 0.0 ? 1.0E-16 : t1937);
  t1085 = X[58ULL] * t1553;
  t1570 = X[59ULL] / (t1085 == 0.0 ? 1.0E-16 : t1085);
  t1844 = t1570 * 9.8174770424681068E-6;
  t1571 = t1567 * t1564 * 35.2 / (t1844 == 0.0 ? 1.0E-16 : t1844);
  t1572 = U_idx_1 >= 1.0 ? U_idx_1 : 1.0;
  t1085 = pmf_log10(6.9 / (t1572 == 0.0 ? 1.0E-16 : t1572) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1572 == 0.0 ?
    1.0E-16 : t1572) + 2.8767404433520813E-5) * 3.24;
  t1850 = t1570 * 3.855314219175531E-7;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI = t1567 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI * (1.0 /
    (t1085 == 0.0 ? 1.0E-16 : t1085)) * 0.55 / (t1850 == 0.0 ? 1.0E-16 : t1850);
  t1573 = (U_idx_1 - 2000.0) / 2000.0;
  t1085 = t1573 * t1573 * 3.0 - t1573 * t1573 * t1573 * 2.0;
  if (U_idx_1 <= 2000.0) {
    t1573 = t1571 * 1.0E-5;
  } else if (U_idx_1 >= 4000.0) {
    t1573 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
      1.0E-5;
  } else {
    t1573 = ((1.0 - t1085) * t1571 +
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
             t1085) * 1.0E-5;
  }

  t1559 = -(X[201ULL] * t1559) / 0.0019634954084936209 * 0.00031622776601683789
    + t1573;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI = -((X[58ULL] /
    (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) - X[460ULL] / (X[461ULL] == 0.0 ?
    1.0E-16 : X[461ULL])) * X[444ULL] * t1553) / 0.0019634954084936209;
  if (X[460ULL] <= 216.59999999999997) {
    U_idx_1 = 216.59999999999997;
  } else {
    U_idx_1 = X[460ULL] >= 623.15 ? 623.15 : X[460ULL];
  }

  intrm_sf_mf_1576 = U_idx_1 * U_idx_1;
  t1571 = (((1074.1165326382541 + U_idx_1 * -0.2214565261064077) +
            intrm_sf_mf_1576 * 0.00037212980109010952) * ((1.0 - t1550) - t1552)
           + ((1479.6504774710445 + U_idx_1 * 1.200211433705052) +
              intrm_sf_mf_1576 * -0.00038614513167842338) * t1550) +
    ((900.63941224837913 + U_idx_1 * -0.044484923911364271) + intrm_sf_mf_1576 *
     0.00036936011832043369) * t1552;
  t1825 = t1571 - t1553;
  t1550 = t1571 / (t1825 == 0.0 ? 1.0E-16 : t1825);
  t1552 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
     9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9);
  t1825 = X[461ULL] * X[461ULL] * t1550;
  t1573 = -pmf_sqrt(fabs(t1825 / (t1553 == 0.0 ? 1.0E-16 : t1553) / (X[460ULL] ==
    0.0 ? 1.0E-16 : X[460ULL]))) * 0.0019634954084936209;
  if (t1573 >= 0.0) {
    t1085 = t1573 * 100000.0;
  } else {
    t1085 = -t1573 * 100000.0;
  }

  intrm_sf_mf_1576 = t1085 * 0.05 / (t1937 == 0.0 ? 1.0E-16 : t1937);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I = t1573 * t1564 *
    35.2 / (t1844 == 0.0 ? 1.0E-16 : t1844);
  t1580 = intrm_sf_mf_1576 >= 1.0 ? intrm_sf_mf_1576 : 1.0;
  t1839 = pmf_log10(6.9 / (t1580 == 0.0 ? 1.0E-16 : t1580) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1580 == 0.0 ?
    1.0E-16 : t1580) + 2.8767404433520813E-5) * 3.24;
  t1085 = t1573 * t1085 * (1.0 / (t1839 == 0.0 ? 1.0E-16 : t1839)) * 0.55 /
    (t1850 == 0.0 ? 1.0E-16 : t1850);
  intrm_sf_mf_1517 = (intrm_sf_mf_1576 - 2000.0) / 2000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_x_ws_I = intrm_sf_mf_1517 *
    intrm_sf_mf_1517 * 3.0 - intrm_sf_mf_1517 * intrm_sf_mf_1517 *
    intrm_sf_mf_1517 * 2.0;
  if (intrm_sf_mf_1576 <= 2000.0) {
    intrm_sf_mf_1517 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I *
      1.0E-5;
  } else if (intrm_sf_mf_1576 >= 4000.0) {
    intrm_sf_mf_1517 = t1085 * 1.0E-5;
  } else {
    intrm_sf_mf_1517 = ((1.0 -
                         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_x_ws_I)
                        * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I
                        + t1085 *
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_x_ws_I)
      * 1.0E-5;
  }

  t1552 = -(X[444ULL] * t1552) / 0.0019634954084936209 * 0.00031622776601683789
    + intrm_sf_mf_1517;
  if (1.0 - X[60ULL] >= 0.01) {
    intrm_sf_mf_1576 = 1.0 - X[60ULL];
  } else if (1.0 - X[60ULL] >= -0.1) {
    intrm_sf_mf_1576 = pmf_exp(((1.0 - X[60ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    intrm_sf_mf_1576 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I = X[61ULL] /
    (intrm_sf_mf_1576 == 0.0 ? 1.0E-16 : intrm_sf_mf_1576) * -36.965491221318985
    + 296.802103844292;
  t782[0ULL] = X[58ULL];
  tlu2_linear_linear_prelookup(&pi_efOut.mField0[0ULL], &pi_efOut.mField1[0ULL],
    &pi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t74 = pi_efOut;
  tlu2_1d_linear_linear_value(&qi_efOut[0ULL], &t74.mField0[0ULL], &t74.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t94[0ULL], &t95[0ULL]);
  t103[0] = qi_efOut[0];
  intrm_sf_mf_1517 = pmf_exp(pmf_log(X[59ULL] * 100000.0) - t103[0ULL]);
  if (intrm_sf_mf_1517 >= 1.0) {
    t1839 = (intrm_sf_mf_1517 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_x_ws_I =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I / (t1839 == 0.0 ?
      1.0E-16 : t1839);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_x_ws_I = 1.0;
  }

  tlu2_1d_linear_nearest_value(&ri_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = ri_efOut[0];
  tlu2_1d_linear_nearest_value(&si_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = si_efOut[0];
  tlu2_1d_linear_nearest_value(&ti_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  intrm_sf_mf_116 = ti_efOut[0];
  t1586 = (((1.0 - t1560) - t1562) * t786_idx_0 + t780_idx_0 * t1560) +
    intrm_sf_mf_116 * t1562;
  t1560 = (-X[201ULL] - (-X[444ULL])) / 2.0;
  t1839 = t1564 + t1205;
  t1850 = t1839 / 2.0 * 0.0019634954084936209;
  t1205 = (t1560 >= 0.0 ? t1560 : 0.0) * 0.05 / (t1850 == 0.0 ? 1.0E-16 : t1850);
  t1562 = t1205 >= 0.0 ? t1205 : -t1205;
  t1205 = t1562 > 1000.0 ? t1562 : 1000.0;
  t1844 = t1586 + intrm_sf_mf_1580;
  if (t1844 / 2.0 > 0.5) {
    t1588 = (t1586 + intrm_sf_mf_1580) / 2.0;
  } else {
    t1588 = 0.5;
  }

  t1850 = pmf_log10(6.9 / (t1205 == 0.0 ? 1.0E-16 : t1205) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1205 == 0.0 ?
    1.0E-16 : t1205) + 2.8767404433520813E-5) * 3.24;
  t1589 = 1.0 / (t1850 == 0.0 ? 1.0E-16 : t1850);
  t1861 = (pmf_pow(t1588, 0.66666666666666663) - 1.0) * pmf_sqrt(t1589 / 8.0) *
    12.7 + 1.0;
  t1591 = (t1205 - 1000.0) * (t1589 / 8.0) * t1588 / (t1861 == 0.0 ? 1.0E-16 :
    t1861);
  intrm_sf_mf_1564 = (t1562 - 2000.0) / 2000.0;
  t1593 = intrm_sf_mf_1564 * intrm_sf_mf_1564 * 3.0 - intrm_sf_mf_1564 *
    intrm_sf_mf_1564 * intrm_sf_mf_1564 * 2.0;
  if (t1562 <= 2000.0) {
    intrm_sf_mf_1564 = 3.66;
  } else if (t1562 >= 4000.0) {
    intrm_sf_mf_1564 = t1591;
  } else {
    intrm_sf_mf_1564 = (1.0 - t1593) * 3.66 + t1591 * t1593;
  }

  t1850 = intrm_sf_mf_1564 * 0.15707963267948966;
  t1863 = t1844 / 2.0;
  if (t1562 > t1850 / 0.0019634954084936209 / (t1863 == 0.0 ? 1.0E-16 : t1863) /
      30.0) {
    t1085 = (t1586 + intrm_sf_mf_1580) / 2.0;
    t1591 = intrm_sf_mf_1564 * 0.15707963267948966 / (t1562 == 0.0 ? 1.0E-16 :
      t1562) / 0.0019634954084936209 / (t1085 == 0.0 ? 1.0E-16 : t1085);
  } else {
    t1591 = 30.0;
  }

  if (X[455ULL] <= 0.0) {
    intrm_sf_mf_1580 = 0.0;
  } else {
    intrm_sf_mf_1580 = X[455ULL] >= 1.0 ? 1.0 : X[455ULL];
  }

  if (X[454ULL] <= 0.0) {
    intrm_sf_mf_1564 = 0.0;
  } else {
    intrm_sf_mf_1564 = X[454ULL] >= 1.0 ? 1.0 : X[454ULL];
  }

  t1593 = (((1.0 - intrm_sf_mf_1580) - intrm_sf_mf_1564) * 296.802103844292 +
           intrm_sf_mf_1580 * 461.523) + intrm_sf_mf_1564 * 259.836612622973;
  intrm_sf_mf_1580 = X[455ULL] * 461.523 / (t1593 == 0.0 ? 1.0E-16 : t1593);
  if (intrm_sf_mf_1580 <= 0.0) {
    intrm_sf_mf_1564 = 0.0;
  } else {
    intrm_sf_mf_1564 = intrm_sf_mf_1580 >= 1.0 ? 1.0 : intrm_sf_mf_1580;
  }

  intrm_sf_mf_1580 = X[454ULL] * 259.836612622973 / (t1593 == 0.0 ? 1.0E-16 :
    t1593);
  if (intrm_sf_mf_1580 <= 0.0) {
    t1594 = 0.0;
  } else {
    t1594 = intrm_sf_mf_1580 >= 1.0 ? 1.0 : intrm_sf_mf_1580;
  }

  t782[0ULL] = X[452ULL];
  tlu2_linear_nearest_prelookup(&ui_efOut.mField0[0ULL], &ui_efOut.mField1[0ULL],
    &ui_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t782[0ULL],
    &t94[0ULL], &t95[0ULL]);
  t55 = ui_efOut;
  tlu2_1d_linear_nearest_value(&vi_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t94[0ULL], &t95
    [0ULL]);
  t782[0] = vi_efOut[0];
  tlu2_1d_linear_nearest_value(&wi_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = wi_efOut[0];
  tlu2_1d_linear_nearest_value(&xi_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField18, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = xi_efOut[0];
  intrm_sf_mf_1580 = (((1.0 - intrm_sf_mf_1564) - t1594) * t782[0ULL] +
                      t786_idx_0 * intrm_sf_mf_1564) + t780_idx_0 * t1594;
  intrm_sf_mf_1567 = t1560 <= 0.0 ? t1560 : 0.0;
  tlu2_1d_linear_nearest_value(&yi_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t95
    [0ULL]);
  t782[0] = yi_efOut[0];
  tlu2_1d_linear_nearest_value(&aj_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t94[0ULL], &t95
    [0ULL]);
  t786_idx_0 = aj_efOut[0];
  tlu2_1d_linear_nearest_value(&bj_efOut[0ULL], &t55.mField0[0ULL],
    &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t95
    [0ULL]);
  t780_idx_0 = bj_efOut[0];
  t1560 = (((1.0 - intrm_sf_mf_1564) - t1594) * t782[0ULL] + t786_idx_0 *
           intrm_sf_mf_1564) + t780_idx_0 * t1594;
  t1861 = t1564 + t1560;
  t1868 = t1861 / 2.0 * 0.0019634954084936209;
  t1560 = -intrm_sf_mf_1567 * 0.05 / (t1868 == 0.0 ? 1.0E-16 : t1868);
  intrm_sf_mf_1564 = t1560 >= 0.0 ? t1560 : -t1560;
  t1560 = intrm_sf_mf_1564 > 1000.0 ? intrm_sf_mf_1564 : 1000.0;
  t1863 = t1586 + intrm_sf_mf_1580;
  if (t1863 / 2.0 > 0.5) {
    t1594 = (t1586 + intrm_sf_mf_1580) / 2.0;
  } else {
    t1594 = 0.5;
  }

  t1868 = pmf_log10(6.9 / (t1560 == 0.0 ? 1.0E-16 : t1560) +
                    2.8767404433520813E-5) * pmf_log10(6.9 / (t1560 == 0.0 ?
    1.0E-16 : t1560) + 2.8767404433520813E-5) * 3.24;
  intrm_sf_mf_1567 = 1.0 / (t1868 == 0.0 ? 1.0E-16 : t1868);
  t1892 = (pmf_pow(t1594, 0.66666666666666663) - 1.0) * pmf_sqrt
    (intrm_sf_mf_1567 / 8.0) * 12.7 + 1.0;
  intrm_sf_mf_1572 = (t1560 - 1000.0) * (intrm_sf_mf_1567 / 8.0) * t1594 /
    (t1892 == 0.0 ? 1.0E-16 : t1892);
  t1598 = (intrm_sf_mf_1564 - 2000.0) / 2000.0;
  t1599 = t1598 * t1598 * 3.0 - t1598 * t1598 * t1598 * 2.0;
  if (intrm_sf_mf_1564 <= 2000.0) {
    t1598 = 3.66;
  } else if (intrm_sf_mf_1564 >= 4000.0) {
    t1598 = intrm_sf_mf_1572;
  } else {
    t1598 = (1.0 - t1599) * 3.66 + intrm_sf_mf_1572 * t1599;
  }

  t1868 = t1598 * 0.15707963267948966;
  t1947 = t1863 / 2.0;
  if (intrm_sf_mf_1564 > t1868 / 0.0019634954084936209 / (t1947 == 0.0 ? 1.0E-16
       : t1947) / 30.0) {
    t1970 = (t1586 + intrm_sf_mf_1580) / 2.0;
    intrm_sf_mf_1572 = t1598 * 0.15707963267948966 / (intrm_sf_mf_1564 == 0.0 ?
      1.0E-16 : intrm_sf_mf_1564) / 0.0019634954084936209 / (t1970 == 0.0 ?
      1.0E-16 : t1970);
  } else {
    intrm_sf_mf_1572 = 30.0;
  }

  if (X[453ULL] * 0.0019634954084936209 <= 1.9634954084936209E-11) {
    t1586 = 1.9634954084936209E-11;
  } else if (X[453ULL] * 0.0019634954084936209 >= 0.0012566370614359179) {
    t1586 = 0.0012566370614359179;
  } else {
    t1586 = X[453ULL] * 0.0019634954084936209;
  }

  t1598 = t1586 / 0.0019634954084936209;
  if (X[472ULL] <= 0.0) {
    t1599 = 0.0;
  } else {
    t1599 = X[472ULL] >= 1.0 ? 1.0 : X[472ULL];
  }

  if (X[473ULL] <= 0.0) {
    t1601 = 0.0;
  } else {
    t1601 = X[473ULL] >= 1.0 ? 1.0 : X[473ULL];
  }

  t1602 = (((1.0 - t1599) - t1601) * 296.802103844292 + t1599 * 461.523) + t1601
    * 259.836612622973;
  t1947 = X[470ULL] * t1602;
  t1603 = X[471ULL] / (t1947 == 0.0 ? 1.0E-16 : t1947);
  intrm_sf_mf_116 = X[471ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) * (X[474ULL] / (X
    [470ULL] == 0.0 ? 1.0E-16 : X[470ULL]));
  intrm_sf_mf_1642 = X[471ULL] / 1.01325 * (X[475ULL] / (X[470ULL] == 0.0 ?
    1.0E-16 : X[470ULL]));
  t1609 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p + 1.01325) /
    2.0 * 0.0010000000000000009;
  t1608 = (1.0 - t1598) * (1.0 - t1598);
  t1610 = t1609 * t1608;
  t1611 = (t1598 + 1.0) * (1.0 - t1598 * intrm_sf_mf_116) - (1.0 - t1598 *
    intrm_sf_mf_1642) * t1598 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) * (t1611 >=
    t1608 ? t1611 : t1608);
  t1611 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) /
    (t1609 == 0.0 ? 1.0E-16 : t1609);
  intrm_sf_mf_1320 = t1611 * t1611 * 3.0 - t1611 * t1611 * t1611 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 <= 0.0) {
    t1611 = t1610;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 >=
             t1609) {
    t1611 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12;
  } else {
    t1611 = (1.0 - intrm_sf_mf_1320) * t1610 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 *
      intrm_sf_mf_1320;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 = (t1598 + 1.0)
    * (1.0 - t1598 * intrm_sf_mf_1642) - (1.0 - t1598 * intrm_sf_mf_116) * t1598
    * 2.0;
  t1598 = (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 >= t1608 ?
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 : t1608);
  intrm_sf_mf_116 = (1.01325 -
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) /
    (t1609 == 0.0 ? 1.0E-16 : t1609);
  intrm_sf_mf_1642 = intrm_sf_mf_116 * intrm_sf_mf_116 * 3.0 - intrm_sf_mf_116 *
    intrm_sf_mf_116 * intrm_sf_mf_116 * 2.0;
  if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p <= 0.0) {
    intrm_sf_mf_116 = t1610;
  } else if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p >=
             t1609) {
    intrm_sf_mf_116 = t1598;
  } else {
    intrm_sf_mf_116 = (1.0 - intrm_sf_mf_1642) * t1610 + t1598 *
      intrm_sf_mf_1642;
  }

  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p > 1.01325) {
    t1598 = t1611;
  } else {
    t1598 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p < 1.01325 ?
      intrm_sf_mf_116 : t1610;
  }

  if (X[470ULL] <= 216.59999999999997) {
    intrm_sf_mf_116 = 216.59999999999997;
  } else {
    intrm_sf_mf_116 = X[470ULL] >= 623.15 ? 623.15 : X[470ULL];
  }

  t1081 = intrm_sf_mf_116 * intrm_sf_mf_116;
  intrm_sf_mf_1642 = (((1074.1165326382541 + intrm_sf_mf_116 *
                        -0.2214565261064077) + t1081 * 0.00037212980109010952) *
                      ((1.0 - t1599) - t1601) + ((1479.6504774710445 +
    intrm_sf_mf_116 * 1.200211433705052) + t1081 * -0.00038614513167842338) *
                      t1599) + ((900.63941224837913 + intrm_sf_mf_116 *
    -0.044484923911364271) + t1081 * 0.00036936011832043369) * t1601;
  t1892 = intrm_sf_mf_1642 - t1602;
  t1892 = X[471ULL] * X[471ULL] * (intrm_sf_mf_1642 / (t1892 == 0.0 ? 1.0E-16 :
    t1892));
  t1599 = pmf_sqrt(fabs(t1892 / (t1602 == 0.0 ? 1.0E-16 : t1602) / (X[470ULL] ==
    0.0 ? 1.0E-16 : X[470ULL]))) * t1586 * 0.64;
  if (-X[272ULL] >= 0.0) {
    t1601 = -X[272ULL];
  } else {
    t1601 = X[272ULL];
  }

  t1601 = t1601 * 0.05 / (intrm_sf_mf_148 == 0.0 ? 1.0E-16 : intrm_sf_mf_148);
  t1608 = t1601 >= 1.0 ? t1601 : 1.0;
  t1601 = (X[384ULL] >= 0.0 ? X[384ULL] : -X[384ULL]) * 0.05 / (intrm_sf_mf_148 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_148);
  t1610 = t1601 >= 1.0 ? t1601 : 1.0;
  if (-X[384ULL] >= 0.0) {
    t1601 = -X[384ULL];
  } else {
    t1601 = X[384ULL];
  }

  t1601 = t1601 * 0.01 / (t1565 == 0.0 ? 1.0E-16 : t1565);
  t1611 = t1601 >= 1.0 ? t1601 : 1.0;
  t1601 = (X[398ULL] >= 0.0 ? X[398ULL] : -X[398ULL]) * 0.01 / (t1565 == 0.0 ?
    1.0E-16 : t1565);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 = t1601 >= 1.0
    ? t1601 : 1.0;
  if (-X[398ULL] >= 0.0) {
    t1601 = -X[398ULL];
  } else {
    t1601 = X[398ULL];
  }

  t1601 = t1601 * 0.01 / (t1926 == 0.0 ? 1.0E-16 : t1926);
  intrm_sf_mf_1320 = t1601 >= 1.0 ? t1601 : 1.0;
  t1601 = (X[145ULL] >= 0.0 ? X[145ULL] : -X[145ULL]) * 0.01 / (t1926 == 0.0 ?
    1.0E-16 : t1926);
  t1019 = t1601 >= 1.0 ? t1601 : 1.0;
  if (-X[361ULL] >= 0.0) {
    t1601 = -X[361ULL];
  } else {
    t1601 = X[361ULL];
  }

  t1601 = t1601 * 0.05 / (t1929 == 0.0 ? 1.0E-16 : t1929);
  t1081 = t1601 >= 1.0 ? t1601 : 1.0;
  if (-X[177ULL] >= 0.0) {
    intrm_sf_mf_148 = -X[177ULL];
  } else {
    intrm_sf_mf_148 = X[177ULL];
  }

  intrm_sf_mf_148 = intrm_sf_mf_148 * 0.05 / (t1929 == 0.0 ? 1.0E-16 : t1929);
  t1565 = intrm_sf_mf_148 >= 1.0 ? intrm_sf_mf_148 : 1.0;
  t1601 = (t1007 >= 0.0 ? t1007 : -t1007) * 0.01 / (t1102 == 0.0 ? 1.0E-16 :
    t1102);
  intrm_sf_mf_148 = t1601 >= 1.0 ? t1601 : 1.0;
  if (-X[133ULL] >= 0.0) {
    t1601 = -X[133ULL];
  } else {
    t1601 = X[133ULL];
  }

  t1601 = t1601 * 0.01 / (t1102 == 0.0 ? 1.0E-16 : t1102);
  t1102 = t1601 >= 1.0 ? t1601 : 1.0;
  if (-X[201ULL] >= 0.0) {
    t1601 = -X[201ULL];
  } else {
    t1601 = X[201ULL];
  }

  t1601 = t1601 * 0.05 / (t1937 == 0.0 ? 1.0E-16 : t1937);
  t1615 = t1601 >= 1.0 ? t1601 : 1.0;
  if (-X[444ULL] >= 0.0) {
    t1601 = -X[444ULL];
  } else {
    t1601 = X[444ULL];
  }

  t1601 = t1601 * 0.05 / (t1937 == 0.0 ? 1.0E-16 : t1937);
  t1616 = t1601 >= 1.0 ? t1601 : 1.0;
  if (U_idx_11 >= 1.0) {
    t1601 = 1.0;
  } else {
    t1601 = U_idx_11 <= 0.0 ? 0.0 : U_idx_11;
  }

  intrm_sf_mf_1665 = (fabs(t1601 - U_idx_11) > 0.001);
  if (X[340ULL] <= 0.0) {
    t1601 = 0.0;
  } else {
    t1601 = X[340ULL] >= 1.0 ? 1.0 : X[340ULL];
  }

  if (X[339ULL] <= 0.0) {
    t786_idx_0 = 0.0;
  } else {
    t786_idx_0 = X[339ULL] >= 1.0 ? 1.0 : X[339ULL];
  }

  t780_idx_0 = (((1.0 - t1601) - t786_idx_0) * 296.802103844292 + t1601 *
                461.523) + t786_idx_0 * 259.836612622973;
  t1601 = (X[177ULL] >= 0.0 ? X[177ULL] : -X[177ULL]) * 0.01 / (t1202 == 0.0 ?
    1.0E-16 : t1202);
  t786_idx_0 = t1601 >= 1.0 ? t1601 : 1.0;
  t1601 = (X[180ULL] >= 0.0 ? X[180ULL] : -X[180ULL]) * 0.01 / (t1202 == 0.0 ?
    1.0E-16 : t1202);
  t1202 = t1601 >= 1.0 ? t1601 : 1.0;
  if (-X[180ULL] >= 0.0) {
    t1601 = -X[180ULL];
  } else {
    t1601 = X[180ULL];
  }

  t1601 = t1601 * 0.01 / (t1286 == 0.0 ? 1.0E-16 : t1286);
  t1620 = t1601 >= 1.0 ? t1601 : 1.0;
  t1601 = (X[201ULL] >= 0.0 ? X[201ULL] : -X[201ULL]) * 0.01 / (t1286 == 0.0 ?
    1.0E-16 : t1286);
  t1286 = t1601 >= 1.0 ? t1601 : 1.0;
  t1926 = t1262 + t1253;
  t1937 = t1926 / 2.0 * 0.002;
  t1262 = t1252 * 0.01 / (t1937 == 0.0 ? 1.0E-16 : t1937);
  t1601 = t1262 >= 0.0 ? t1262 : -t1262;
  t1262 = t1601 > 1000.0 ? t1601 : 1000.0;
  t1929 = t1249 + t1251;
  if (t1929 / 2.0 > 0.5) {
    t1171 = (t1249 + t1251) / 2.0;
  } else {
    t1171 = 0.5;
  }

  t1937 = pmf_log10(6.9 / (t1262 == 0.0 ? 1.0E-16 : t1262) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1262 == 0.0 ?
    1.0E-16 : t1262) + 0.00017169489553429715) * 3.24;
  t1623 = 1.0 / (t1937 == 0.0 ? 1.0E-16 : t1937);
  t1947 = (pmf_pow(t1171, 0.66666666666666663) - 1.0) * pmf_sqrt(t1623 / 8.0) *
    12.7 + 1.0;
  U_idx_10 = (t1262 - 1000.0) * (t1623 / 8.0) * t1171 / (t1947 == 0.0 ? 1.0E-16 :
    t1947);
  intrm_sf_mf_492 = (t1601 - 2000.0) / 2000.0;
  intrm_sf_mf_1580 = intrm_sf_mf_492 * intrm_sf_mf_492 * 3.0 - intrm_sf_mf_492 *
    intrm_sf_mf_492 * intrm_sf_mf_492 * 2.0;
  if (t1601 <= 2000.0) {
    intrm_sf_mf_492 = 3.66;
  } else if (t1601 >= 4000.0) {
    intrm_sf_mf_492 = U_idx_10;
  } else {
    intrm_sf_mf_492 = (1.0 - intrm_sf_mf_1580) * 3.66 + U_idx_10 *
      intrm_sf_mf_1580;
  }

  t1937 = intrm_sf_mf_492 * 1.6063872509454251;
  U_idx_11 = t1929 / 2.0;
  if (t1601 > t1937 / 0.002 / (U_idx_11 == 0.0 ? 1.0E-16 : U_idx_11) / 30.0) {
    t1976 = (t1249 + t1251) / 2.0;
    U_idx_10 = intrm_sf_mf_492 * 1.6063872509454251 / (t1601 == 0.0 ? 1.0E-16 :
      t1601) / 0.002 / (t1976 == 0.0 ? 1.0E-16 : t1976);
  } else {
    U_idx_10 = 30.0;
  }

  t1947 = t1263 + t1253;
  t1955 = t1947 / 2.0 * 0.002;
  t1249 = -t1252 * 0.01 / (t1955 == 0.0 ? 1.0E-16 : t1955);
  t1252 = t1249 >= 0.0 ? t1249 : -t1249;
  t1249 = t1252 > 1000.0 ? t1252 : 1000.0;
  U_idx_11 = intrm_sf_mf_521 + t1251;
  if (U_idx_11 / 2.0 > 0.5) {
    t1263 = (intrm_sf_mf_521 + t1251) / 2.0;
  } else {
    t1263 = 0.5;
  }

  t1955 = pmf_log10(6.9 / (t1249 == 0.0 ? 1.0E-16 : t1249) +
                    0.00017169489553429715) * pmf_log10(6.9 / (t1249 == 0.0 ?
    1.0E-16 : t1249) + 0.00017169489553429715) * 3.24;
  intrm_sf_mf_492 = 1.0 / (t1955 == 0.0 ? 1.0E-16 : t1955);
  t1970 = (pmf_pow(t1263, 0.66666666666666663) - 1.0) * pmf_sqrt(intrm_sf_mf_492
    / 8.0) * 12.7 + 1.0;
  intrm_sf_mf_1580 = (t1249 - 1000.0) * (intrm_sf_mf_492 / 8.0) * t1263 / (t1970
    == 0.0 ? 1.0E-16 : t1970);
  intrm_sf_mf_514 = (t1252 - 2000.0) / 2000.0;
  t1630 = intrm_sf_mf_514 * intrm_sf_mf_514 * 3.0 - intrm_sf_mf_514 *
    intrm_sf_mf_514 * intrm_sf_mf_514 * 2.0;
  if (t1252 <= 2000.0) {
    intrm_sf_mf_514 = 3.66;
  } else if (t1252 >= 4000.0) {
    intrm_sf_mf_514 = intrm_sf_mf_1580;
  } else {
    intrm_sf_mf_514 = (1.0 - t1630) * 3.66 + intrm_sf_mf_1580 * t1630;
  }

  t1955 = intrm_sf_mf_514 * 1.6063872509454251;
  t1973 = U_idx_11 / 2.0;
  if (t1252 > t1955 / 0.002 / (t1973 == 0.0 ? 1.0E-16 : t1973) / 30.0) {
    U_idx_1 = (intrm_sf_mf_521 + t1251) / 2.0;
    intrm_sf_mf_1580 = intrm_sf_mf_514 * 1.6063872509454251 / (t1252 == 0.0 ?
      1.0E-16 : t1252) / 0.002 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  } else {
    intrm_sf_mf_1580 = 30.0;
  }

  t1973 = t1253 * 0.002;
  intrm_sf_mf_521 = (X[228ULL] >= 0.0 ? X[228ULL] : -X[228ULL]) * 0.01 / (t1973 ==
    0.0 ? 1.0E-16 : t1973);
  t1251 = intrm_sf_mf_521 >= 1.0 ? intrm_sf_mf_521 : 1.0;
  intrm_sf_mf_521 = (X[220ULL] >= 0.0 ? X[220ULL] : -X[220ULL]) * 0.01 / (t1973 ==
    0.0 ? 1.0E-16 : t1973);
  intrm_sf_mf_514 = intrm_sf_mf_521 >= 1.0 ? intrm_sf_mf_521 : 1.0;
  t1970 = t1285 + t1275;
  t1976 = t1970 / 2.0 * 0.00093750000000000007;
  intrm_sf_mf_521 = t1274 * 0.0028301886792452828 / (t1976 == 0.0 ? 1.0E-16 :
    t1976);
  t1285 = intrm_sf_mf_521 >= 0.0 ? intrm_sf_mf_521 : -intrm_sf_mf_521;
  intrm_sf_mf_521 = t1285 > 1000.0 ? t1285 : 1000.0;
  t1973 = t1271 + intrm_sf_mf_550;
  if (t1973 / 2.0 > 0.5) {
    t1630 = (t1271 + intrm_sf_mf_550) / 2.0;
  } else {
    t1630 = 0.5;
  }

  t1976 = pmf_log10(6.9 / (intrm_sf_mf_521 == 0.0 ? 1.0E-16 : intrm_sf_mf_521) +
                    0.00069701528436089772) * pmf_log10(6.9 / (intrm_sf_mf_521 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_521) + 0.00069701528436089772) * 3.24;
  t1631 = 1.0 / (t1976 == 0.0 ? 1.0E-16 : t1976);
  U_idx_2 = (pmf_pow(t1630, 0.66666666666666663) - 1.0) * pmf_sqrt(t1631 / 8.0) *
    12.7 + 1.0;
  U_idx_4 = (intrm_sf_mf_521 - 1000.0) * (t1631 / 8.0) * t1630 / (U_idx_2 == 0.0
    ? 1.0E-16 : U_idx_2);
  intrm_sf_mf_537 = (t1285 - 2000.0) / 2000.0;
  intrm_sf_mf_116 = intrm_sf_mf_537 * intrm_sf_mf_537 * 3.0 - intrm_sf_mf_537 *
    intrm_sf_mf_537 * intrm_sf_mf_537 * 2.0;
  if (t1285 <= 2000.0) {
    intrm_sf_mf_537 = 3.66;
  } else if (t1285 >= 4000.0) {
    intrm_sf_mf_537 = U_idx_4;
  } else {
    intrm_sf_mf_537 = (1.0 - intrm_sf_mf_116) * 3.66 + U_idx_4 * intrm_sf_mf_116;
  }

  t1976 = intrm_sf_mf_537 * 1.3250000000000002;
  t1090 = t1973 / 2.0;
  if (t1285 > t1976 / 0.00093750000000000007 / (t1090 == 0.0 ? 1.0E-16 : t1090) /
      30.0) {
    t1085 = (t1271 + intrm_sf_mf_550) / 2.0;
    U_idx_4 = intrm_sf_mf_537 * 1.3250000000000002 / (t1285 == 0.0 ? 1.0E-16 :
      t1285) / 0.00093750000000000007 / (t1085 == 0.0 ? 1.0E-16 : t1085);
  } else {
    U_idx_4 = 30.0;
  }

  U_idx_2 = t1288 + t1275;
  U_idx_1 = U_idx_2 / 2.0 * 0.00093750000000000007;
  t1271 = -t1274 * 0.0028301886792452828 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  t1274 = t1271 >= 0.0 ? t1271 : -t1271;
  t1271 = t1274 > 1000.0 ? t1274 : 1000.0;
  t1090 = t1272 + intrm_sf_mf_550;
  if (t1090 / 2.0 > 0.5) {
    t1288 = (t1272 + intrm_sf_mf_550) / 2.0;
  } else {
    t1288 = 0.5;
  }

  U_idx_1 = pmf_log10(6.9 / (t1271 == 0.0 ? 1.0E-16 : t1271) +
                      0.00069701528436089772) * pmf_log10(6.9 / (t1271 == 0.0 ?
    1.0E-16 : t1271) + 0.00069701528436089772) * 3.24;
  intrm_sf_mf_537 = 1.0 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1);
  t1085 = (pmf_pow(t1288, 0.66666666666666663) - 1.0) * pmf_sqrt(intrm_sf_mf_537
    / 8.0) * 12.7 + 1.0;
  intrm_sf_mf_116 = (t1271 - 1000.0) * (intrm_sf_mf_537 / 8.0) * t1288 / (t1085 ==
    0.0 ? 1.0E-16 : t1085);
  U_idx_3 = (t1274 - 2000.0) / 2000.0;
  t1085 = U_idx_3 * U_idx_3 * 3.0 - U_idx_3 * U_idx_3 * U_idx_3 * 2.0;
  if (t1274 <= 2000.0) {
    U_idx_3 = 3.66;
  } else if (t1274 >= 4000.0) {
    U_idx_3 = intrm_sf_mf_116;
  } else {
    U_idx_3 = (1.0 - t1085) * 3.66 + intrm_sf_mf_116 * t1085;
  }

  U_idx_1 = U_idx_3 * 1.3250000000000002;
  t1085 = t1090 / 2.0;
  if (t1274 > U_idx_1 / 0.00093750000000000007 / (t1085 == 0.0 ? 1.0E-16 : t1085)
      / 30.0) {
    t1085 = (t1272 + intrm_sf_mf_550) / 2.0;
    intrm_sf_mf_116 = U_idx_3 * 1.3250000000000002 / (t1274 == 0.0 ? 1.0E-16 :
      t1274) / 0.00093750000000000007 / (t1085 == 0.0 ? 1.0E-16 : t1085);
  } else {
    intrm_sf_mf_116 = 30.0;
  }

  t1085 = t1275 * 0.00093750000000000007;
  t1272 = (t1264 >= 0.0 ? t1264 : -t1264) * 0.0028301886792452828 / (t1085 ==
    0.0 ? 1.0E-16 : t1085);
  intrm_sf_mf_550 = t1272 >= 1.0 ? t1272 : 1.0;
  if (-X[228ULL] >= 0.0) {
    t1272 = -X[228ULL];
  } else {
    t1272 = X[228ULL];
  }

  t1272 = t1272 * 0.0028301886792452828 / (t1085 == 0.0 ? 1.0E-16 : t1085);
  U_idx_3 = t1272 >= 1.0 ? t1272 : 1.0;
  if (-X[293ULL] >= 0.0) {
    t1272 = -X[293ULL];
  } else {
    t1272 = X[293ULL];
  }

  t1272 = t1272 * 0.01 / (t1377 == 0.0 ? 1.0E-16 : t1377);
  t1085 = t1272 >= 1.0 ? t1272 : 1.0;
  if (-X[263ULL] >= 0.0) {
    t1272 = -X[263ULL];
  } else {
    t1272 = X[263ULL];
  }

  t1272 = t1272 * 0.01 / (t1377 == 0.0 ? 1.0E-16 : t1377);
  t1377 = t1272 >= 1.0 ? t1272 : 1.0;
  if (X[121ULL] >= 0.0) {
    t87 = true;
  } else {
    t87 = (X[17ULL] > 0.0);
  }

  if (X[116ULL] >= 0.0) {
    t88 = true;
  } else {
    t88 = (X[16ULL] > 0.0);
  }

  if (U_idx_6 >= 0.0) {
    t89 = true;
  } else {
    t89 = (X[50ULL] > 0.0);
  }

  if (X[120ULL] >= 0.0) {
    t90 = true;
  } else {
    t90 = (X[11ULL] > 0.0);
  }

  if (X[114ULL] >= 0.0) {
    t91 = true;
  } else {
    t91 = (X[10ULL] > 0.0);
  }

  if (U_idx_8 >= 0.0) {
    t92 = true;
  } else {
    t92 = (X[56ULL] > 0.0);
  }

  t634[0ULL] = (int32_T)(t2357 >= 0.0);
  t634[1ULL] = (int32_T)(t2357 <= 1.0);
  t634[2ULL] = (int32_T)(X[66ULL] >= 100.8);
  t634[3ULL] = (int32_T)(X[66ULL] <= 607.824);
  t634[4ULL] = (int32_T)(M[47ULL] != 0);
  t634[5ULL] = (int32_T)(M[48ULL] != 0);
  t634[6ULL] = (int32_T)!intrm_sf_mf_1665;
  t634[7ULL] = (int32_T)(M[49ULL] != 0);
  t634[8ULL] = (int32_T)(M[50ULL] != 0);
  t634[9ULL] = 1;
  t634[10ULL] = 1;
  t634[11ULL] = (int32_T)(M[51ULL] != 0);
  t634[12ULL] = (int32_T)(M[52ULL] != 0);
  t634[13ULL] = (int32_T)(M[53ULL] != 0);
  t634[14ULL] = (int32_T)(M[55ULL] != 0);
  t634[15ULL] = (int32_T)(M[56ULL] != 0);
  t634[16ULL] = (int32_T)(M[57ULL] != 0);
  t634[17ULL] = (int32_T)(M[58ULL] != 0);
  t634[18ULL] = (int32_T)(M[59ULL] != 0);
  t634[19ULL] = (int32_T)(M[60ULL] != 0);
  t634[20ULL] = (int32_T)(M[61ULL] != 0);
  t634[21ULL] = (int32_T)(M[62ULL] != 0);
  t634[22ULL] = (int32_T)(M[63ULL] != 0);
  t634[23ULL] = (int32_T)(M[56ULL] != 0);
  t634[24ULL] = (int32_T)(M[57ULL] != 0);
  t634[25ULL] = (int32_T)(M[58ULL] != 0);
  t634[26ULL] = (int32_T)(M[59ULL] != 0);
  t634[27ULL] = (int32_T)(M[64ULL] != 0);
  t634[28ULL] = (int32_T)(M[66ULL] != 0);
  t634[29ULL] = 1;
  t634[30ULL] = 1;
  t634[31ULL] = (int32_T)(M[67ULL] != 0);
  t634[32ULL] = (int32_T)(M[68ULL] != 0);
  t634[33ULL] = (int32_T)(M[69ULL] != 0);
  t634[34ULL] = (int32_T)(M[70ULL] != 0);
  t634[35ULL] = (int32_T)(M[71ULL] != 0);
  t634[36ULL] = (int32_T)(M[72ULL] != 0);
  t634[37ULL] = (int32_T)(M[73ULL] != 0);
  t634[38ULL] = (int32_T)(M[74ULL] != 0);
  t634[39ULL] = (int32_T)(M[75ULL] != 0);
  t634[40ULL] = (int32_T)(M[77ULL] != 0);
  t634[41ULL] = (int32_T)(M[78ULL] != 0);
  t634[42ULL] = (int32_T)(M[79ULL] != 0);
  t634[43ULL] = (int32_T)t87;
  t634[44ULL] = (int32_T)t88;
  t634[45ULL] = (int32_T)(M[71ULL] != 0);
  t634[46ULL] = (int32_T)(M[72ULL] != 0);
  t634[47ULL] = (int32_T)(M[73ULL] != 0);
  t634[48ULL] = (int32_T)(M[74ULL] != 0);
  t634[49ULL] = (int32_T)(M[80ULL] != 0);
  t634[50ULL] = (int32_T)(M[81ULL] != 0);
  t634[51ULL] = (int32_T)(M[82ULL] != 0);
  t634[52ULL] = (int32_T)(M[83ULL] != 0);
  t634[53ULL] = (int32_T)(M[84ULL] != 0);
  t634[54ULL] = (int32_T)(M[85ULL] != 0);
  t634[55ULL] = (int32_T)(M[86ULL] != 0);
  t634[56ULL] = (int32_T)(M[88ULL] != 0);
  t634[57ULL] = (int32_T)(M[89ULL] != 0);
  t634[58ULL] = (int32_T)(M[90ULL] != 0);
  t634[59ULL] = (int32_T)(M[91ULL] != 0);
  t634[60ULL] = (int32_T)(M[92ULL] != 0);
  t634[61ULL] = (int32_T)(M[93ULL] != 0);
  t634[62ULL] = (int32_T)(M[94ULL] != 0);
  t634[63ULL] = (int32_T)(M[95ULL] != 0);
  t634[64ULL] = (int32_T)(M[96ULL] != 0);
  t634[65ULL] = (int32_T)(M[97ULL] != 0);
  t634[66ULL] = (int32_T)(M[98ULL] != 0);
  t634[67ULL] = (int32_T)(M[99ULL] != 0);
  t634[68ULL] = (int32_T)(M[96ULL] != 0);
  t634[69ULL] = (int32_T)(M[97ULL] != 0);
  t634[70ULL] = (int32_T)(M[98ULL] != 0);
  t634[71ULL] = (int32_T)(M[99ULL] != 0);
  t634[72ULL] = (int32_T)(M[100ULL] != 0);
  t634[73ULL] = (int32_T)(M[101ULL] != 0);
  t634[74ULL] = (int32_T)(M[102ULL] != 0);
  t634[75ULL] = (int32_T)(M[103ULL] != 0);
  t634[76ULL] = (int32_T)(M[104ULL] != 0);
  t634[77ULL] = (int32_T)(M[105ULL] != 0);
  t634[78ULL] = (int32_T)(M[100ULL] != 0);
  t634[79ULL] = (int32_T)(M[101ULL] != 0);
  t634[80ULL] = (int32_T)(M[106ULL] != 0);
  t634[81ULL] = (int32_T)(M[107ULL] != 0);
  t634[82ULL] = (int32_T)(M[110ULL] != 0);
  t634[83ULL] = (int32_T)(M[111ULL] != 0);
  t634[84ULL] = (int32_T)(M[106ULL] != 0);
  t634[85ULL] = (int32_T)(M[107ULL] != 0);
  t634[86ULL] = (int32_T)(M[110ULL] != 0);
  t634[87ULL] = (int32_T)(M[111ULL] != 0);
  t634[88ULL] = (int32_T)(M[92ULL] != 0);
  t634[89ULL] = (int32_T)(M[93ULL] != 0);
  t634[90ULL] = (int32_T)(M[94ULL] != 0);
  t634[91ULL] = (int32_T)(M[95ULL] != 0);
  t634[92ULL] = (int32_T)(M[112ULL] != 0);
  t634[93ULL] = (int32_T)(M[113ULL] != 0);
  t634[94ULL] = (int32_T)(M[114ULL] != 0);
  t634[95ULL] = (int32_T)(M[115ULL] != 0);
  t634[96ULL] = (int32_T)(M[116ULL] != 0);
  t634[97ULL] = 1;
  t634[98ULL] = 1;
  t634[99ULL] = (int32_T)(M[117ULL] != 0);
  t634[100ULL] = (int32_T)(M[118ULL] != 0);
  t634[101ULL] = (int32_T)(M[119ULL] != 0);
  t634[102ULL] = (int32_T)(M[121ULL] != 0);
  t634[103ULL] = (int32_T)(M[51ULL] != 0);
  t634[104ULL] = (int32_T)(M[52ULL] != 0);
  t634[105ULL] = (int32_T)(M[53ULL] != 0);
  t634[106ULL] = (int32_T)(M[55ULL] != 0);
  t634[107ULL] = (int32_T)(M[117ULL] != 0);
  t634[108ULL] = (int32_T)(M[118ULL] != 0);
  t634[109ULL] = (int32_T)(M[122ULL] != 0);
  t634[110ULL] = (int32_T)(M[123ULL] != 0);
  t634[111ULL] = 1;
  t634[112ULL] = 1;
  t634[113ULL] = (int32_T)(M[124ULL] != 0);
  t634[114ULL] = (int32_T)(M[125ULL] != 0);
  t634[115ULL] = (int32_T)(M[126ULL] != 0);
  t634[116ULL] = (int32_T)(M[127ULL] != 0);
  t634[117ULL] = 1;
  t634[118ULL] = 1;
  t634[119ULL] = (int32_T)(M[128ULL] != 0);
  t634[120ULL] = (int32_T)(M[129ULL] != 0);
  t634[121ULL] = (int32_T)(M[130ULL] != 0);
  t634[122ULL] = (int32_T)(M[132ULL] != 0);
  t634[123ULL] = (int32_T)(M[117ULL] != 0);
  t634[124ULL] = (int32_T)(M[118ULL] != 0);
  t634[125ULL] = (int32_T)(M[133ULL] != 0);
  t634[126ULL] = (int32_T)(M[134ULL] != 0);
  t634[127ULL] = (int32_T)(M[135ULL] != 0);
  t634[128ULL] = (int32_T)(M[136ULL] != 0);
  t634[129ULL] = (int32_T)(M[137ULL] != 0);
  t634[130ULL] = (int32_T)(M[138ULL] != 0);
  t634[131ULL] = (int32_T)(M[124ULL] != 0);
  t634[132ULL] = (int32_T)(M[125ULL] != 0);
  t634[133ULL] = (int32_T)(M[139ULL] != 0);
  t634[134ULL] = (int32_T)(M[140ULL] != 0);
  t634[135ULL] = (int32_T)(M[128ULL] != 0);
  t634[136ULL] = (int32_T)(M[129ULL] != 0);
  t634[137ULL] = (int32_T)(M[130ULL] != 0);
  t634[138ULL] = (int32_T)(M[132ULL] != 0);
  t634[139ULL] = (int32_T)(M[141ULL] != 0);
  t634[140ULL] = (int32_T)(M[143ULL] != 0);
  t634[141ULL] = (int32_T)(M[144ULL] != 0);
  t634[142ULL] = (int32_T)(M[145ULL] != 0);
  t634[143ULL] = (int32_T)(M[146ULL] != 0);
  t634[144ULL] = (int32_T)(M[147ULL] != 0);
  t634[145ULL] = (int32_T)(M[148ULL] != 0);
  t634[146ULL] = 1;
  t634[147ULL] = 1;
  t634[148ULL] = (int32_T)(M[145ULL] != 0);
  t634[149ULL] = (int32_T)(M[146ULL] != 0);
  t634[150ULL] = (int32_T)(M[149ULL] != 0);
  t634[151ULL] = (int32_T)(M[150ULL] != 0);
  t634[152ULL] = (int32_T)t89;
  t634[153ULL] = 1;
  t634[154ULL] = (int32_T)(M[117ULL] != 0);
  t634[155ULL] = (int32_T)(M[118ULL] != 0);
  t634[156ULL] = (int32_T)(M[151ULL] != 0);
  t634[157ULL] = (int32_T)(M[152ULL] != 0);
  t634[158ULL] = (int32_T)(M[154ULL] != 0);
  t634[159ULL] = (int32_T)(M[155ULL] != 0);
  t634[160ULL] = (int32_T)(M[156ULL] != 0);
  t634[161ULL] = (int32_T)(M[157ULL] != 0);
  t634[162ULL] = (int32_T)(M[158ULL] != 0);
  t634[163ULL] = (int32_T)(M[159ULL] != 0);
  t634[164ULL] = (int32_T)(M[160ULL] != 0);
  t634[165ULL] = (int32_T)(M[161ULL] != 0);
  t634[166ULL] = 1;
  t634[167ULL] = 1;
  t634[168ULL] = (int32_T)(M[154ULL] != 0);
  t634[169ULL] = (int32_T)(M[155ULL] != 0);
  t634[170ULL] = (int32_T)(M[156ULL] != 0);
  t634[171ULL] = (int32_T)(M[157ULL] != 0);
  t634[172ULL] = (int32_T)(M[162ULL] != 0);
  t634[173ULL] = (int32_T)(M[163ULL] != 0);
  t634[174ULL] = (int32_T)(M[165ULL] != 0);
  t634[175ULL] = (int32_T)(M[166ULL] != 0);
  t634[176ULL] = (int32_T)(M[167ULL] != 0);
  t634[177ULL] = (int32_T)(M[168ULL] != 0);
  t634[178ULL] = (int32_T)(M[169ULL] != 0);
  t634[179ULL] = (int32_T)(M[170ULL] != 0);
  t634[180ULL] = (int32_T)t90;
  t634[181ULL] = (int32_T)t91;
  t634[182ULL] = (int32_T)(M[162ULL] != 0);
  t634[183ULL] = (int32_T)(M[163ULL] != 0);
  t634[184ULL] = (int32_T)(M[165ULL] != 0);
  t634[185ULL] = (int32_T)(M[166ULL] != 0);
  t634[186ULL] = (int32_T)(M[51ULL] != 0);
  t634[187ULL] = (int32_T)(M[52ULL] != 0);
  t634[188ULL] = (int32_T)(M[53ULL] != 0);
  t634[189ULL] = (int32_T)(M[55ULL] != 0);
  t634[190ULL] = (int32_T)(M[171ULL] != 0);
  t634[191ULL] = (int32_T)(M[172ULL] != 0);
  t634[192ULL] = (int32_T)(M[173ULL] != 0);
  t634[193ULL] = (int32_T)(M[174ULL] != 0);
  t634[194ULL] = (int32_T)t92;
  t634[195ULL] = 1;
  t634[196ULL] = (int32_T)(M[145ULL] != 0);
  t634[197ULL] = (int32_T)(M[146ULL] != 0);
  t634[198ULL] = (int32_T)(M[175ULL] != 0);
  t634[199ULL] = (int32_T)(M[176ULL] != 0);
  t634[200ULL] = (int32_T)(M[67ULL] != 0);
  t634[201ULL] = (int32_T)(M[68ULL] != 0);
  t634[202ULL] = (int32_T)(M[69ULL] != 0);
  t634[203ULL] = (int32_T)(M[70ULL] != 0);
  t634[204ULL] = (int32_T)(M[177ULL] != 0);
  t634[205ULL] = (int32_T)(M[178ULL] != 0);
  t634[206ULL] = (int32_T)(M[179ULL] != 0);
  t634[207ULL] = (int32_T)(M[180ULL] != 0);
  t634[208ULL] = (int32_T)(M[181ULL] != 0);
  t634[209ULL] = 1;
  t634[210ULL] = 1;
  t634[211ULL] = (int32_T)(M[80ULL] != 0);
  t634[212ULL] = (int32_T)(M[81ULL] != 0);
  t634[213ULL] = (int32_T)(M[82ULL] != 0);
  t634[214ULL] = (int32_T)(M[83ULL] != 0);
  t634[215ULL] = (int32_T)(M[182ULL] != 0);
  t634[216ULL] = (int32_T)(M[183ULL] != 0);
  t634[217ULL] = (int32_T)(M[184ULL] != 0);
  t634[218ULL] = (int32_T)(M[186ULL] != 0);
  t634[219ULL] = (int32_T)(M[187ULL] != 0);
  t634[220ULL] = (int32_T)(M[188ULL] != 0);
  t634[221ULL] = (int32_T)(M[189ULL] != 0);
  t634[222ULL] = (int32_T)(M[190ULL] != 0);
  t634[223ULL] = (int32_T)(M[182ULL] != 0);
  t634[224ULL] = (int32_T)(M[183ULL] != 0);
  t634[225ULL] = (int32_T)(M[184ULL] != 0);
  t634[226ULL] = (int32_T)(M[186ULL] != 0);
  t634[227ULL] = (int32_T)(M[191ULL] != 0);
  t634[228ULL] = (int32_T)(M[192ULL] != 0);
  t634[229ULL] = (int32_T)(M[193ULL] != 0);
  t634[230ULL] = 1;
  t634[231ULL] = 1;
  t634[232ULL] = 1;
  t634[233ULL] = 1;
  t634[234ULL] = 1;
  t634[235ULL] = 1;
  t634[236ULL] = 1;
  t634[237ULL] = 1;
  t634[238ULL] = 1;
  t634[239ULL] = 1;
  t634[240ULL] = 1;
  t634[241ULL] = 1;
  t634[242ULL] = 1;
  t634[243ULL] = 1;
  t634[244ULL] = 1;
  t634[245ULL] = 1;
  t634[246ULL] = 1;
  t634[247ULL] = 1;
  t634[248ULL] = 1;
  t634[249ULL] = 1;
  t634[250ULL] = 1;
  t634[251ULL] = 1;
  t634[252ULL] = 1;
  t634[253ULL] = 1;
  t634[254ULL] = 1;
  t634[255ULL] = 1;
  t634[256ULL] = (int32_T)(X[18ULL] != 0.0);
  t634[257ULL] = (int32_T)((!(X[18ULL] != 0.0)) || ((0.003298697014679202 - 1.0 /
    (X[18ULL] == 0.0 ? 1.0E-16 : X[18ULL])) * 2416.0 < 663.67513503334737));
  t634[258ULL] = 1;
  t634[259ULL] = 1;
  t634[260ULL] = 1;
  t634[261ULL] = (int32_T)(t987 > 0.0);
  t634[262ULL] = (int32_T)((!(t987 > 0.0)) || (pmf_log(t987) - t70_idx_0 <
    663.67513503334737));
  t634[263ULL] = (int32_T)(t1003 != 0.0);
  t634[264ULL] = (int32_T)(t995 > 0.0);
  t634[265ULL] = (int32_T)((!(t995 > 0.0)) || (pmf_log(t995) - t70_idx_0 <
    663.67513503334737));
  t634[266ULL] = (int32_T)(t1011 != 0.0);
  t634[267ULL] = (int32_T)((!(t987 > t995)) || (t1082 * X[18ULL] *
    0.001039307827269155 != 0.0));
  t634[268ULL] = (int32_T)((t987 > t995) || (t1082 * X[18ULL] *
    0.001039307827269155 != 0.0));
  t634[269ULL] = (int32_T)((!(X[18ULL] != 0.0)) || ((0.003298697014679202 - 1.0 /
    (X[18ULL] == 0.0 ? 1.0E-16 : X[18ULL])) * 1268.0 < 663.67513503334737));
  t634[270ULL] = (int32_T)(t2371 != 0.0);
  t634[271ULL] = (int32_T)(X[18ULL] * 8.31446261815324 != 0.0);
  t634[272ULL] = 1;
  t634[273ULL] = (int32_T)(X[18ULL] * 8.31446261815324 != 0.0);
  t634[274ULL] = 1;
  t634[275ULL] = 1;
  t634[276ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 >= 1.0))
     || (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 > 0.0));
  t634[277ULL] = 1;
  t634[278ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 <=
        13986.0)) || (1.0 -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16
                      / 14000.0 > 0.0));
  t634[279ULL] = 1;
  t634[280ULL] = 1;
  t634[281ULL] = 1;
  t634[282ULL] = 1;
  t634[283ULL] = (int32_T)(t1002 >= 0.0);
  t634[284ULL] = (int32_T)((!(t1002 >= 0.0)) || (t2121 != 0.0));
  t2357 = pmf_sqrt(t1002) * t994;
  t634[285ULL] = (int32_T)((!(t1002 >= 0.0)) || ((t1002 >= 0.0) && (!(t2121 !=
    0.0))) || (t2357 / (t2121 == 0.0 ? 1.0E-16 : t2121) > 0.0));
  t634[286ULL] = 1;
  t634[287ULL] = 1;
  t634[288ULL] = 1;
  t634[289ULL] = 1;
  t634[290ULL] = 1;
  t634[291ULL] = 1;
  t634[292ULL] = 1;
  t634[293ULL] = 1;
  t634[294ULL] = 1;
  t634[295ULL] = 1;
  t634[296ULL] = 1;
  t634[297ULL] = (int32_T)((X[133ULL] * X[133ULL] + 1.8324100759713822E-12 == X
    [133ULL] * X[133ULL] + 1.8324100759713822E-12) && (fabs(X[133ULL] * X[133ULL]
    + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[298ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 1.8324100759713822E-12 ==
    X[133ULL] * X[133ULL] + 1.8324100759713822E-12)) || (!(fabs(X[133ULL] * X
    [133ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[299ULL] = 1;
  t634[300ULL] = 1;
  t634[301ULL] = (int32_T)((X[133ULL] * X[133ULL] + 2.0914103314136477E-13 == X
    [133ULL] * X[133ULL] + 2.0914103314136477E-13) && (fabs(X[133ULL] * X[133ULL]
    + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[302ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 2.0914103314136477E-13 ==
    X[133ULL] * X[133ULL] + 2.0914103314136477E-13)) || (!(fabs(X[133ULL] * X
    [133ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[303ULL] = 1;
  t634[304ULL] = 1;
  t634[305ULL] = (int32_T)((X[133ULL] * X[133ULL] + 1.4768645655431184E-13 == X
    [133ULL] * X[133ULL] + 1.4768645655431184E-13) && (fabs(X[133ULL] * X[133ULL]
    + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[306ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 1.4768645655431184E-13 ==
    X[133ULL] * X[133ULL] + 1.4768645655431184E-13)) || (!(fabs(X[133ULL] * X
    [133ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[307ULL] = (int32_T)(t1015 * 293.15 != 0.0);
  t634[308ULL] = 1;
  t634[309ULL] = (int32_T)((!(1.0 - X[138ULL] >= -0.1)) || (((1.0 - X[138ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[138ULL] >= 0.01));
  t634[310ULL] = 1;
  t634[311ULL] = (int32_T)(X[20ULL] != 0.0);
  t634[312ULL] = (int32_T)(X[147ULL] != 0.0);
  t634[313ULL] = 1;
  t634[314ULL] = 1;
  t634[315ULL] = 1;
  t634[316ULL] = (int32_T)(t1087 - t1083 != 0.0);
  t634[317ULL] = 1;
  t634[318ULL] = 1;
  t634[319ULL] = (int32_T)((t1084 * t1084 * 9.999999999999999E-14 + fabs(X
    [146ULL] * t1088 * t1083) * 1.0E-9 == t1084 * t1084 * 9.999999999999999E-14
    + fabs(X[146ULL] * t1088 * t1083) * 1.0E-9) && (fabs(t1084 * t1084 *
    9.999999999999999E-14 + fabs(X[146ULL] * t1088 * t1083) * 1.0E-9) !=
    pmf_get_inf()));
  t634[320ULL] = (int32_T)((!(t1084 * t1084 * 9.999999999999999E-14 + fabs(X
    [146ULL] * t1088 * t1083) * 1.0E-9 == t1084 * t1084 * 9.999999999999999E-14
    + fabs(X[146ULL] * t1088 * t1083) * 1.0E-9)) || (!(fabs(t1084 * t1084 *
    9.999999999999999E-14 + fabs(X[146ULL] * t1088 * t1083) * 1.0E-9) !=
    pmf_get_inf())) || (t1084 * t1084 * 9.999999999999999E-14 + fabs(X[146ULL] *
    t1088 * t1083) * 1.0E-9 >= 0.0));
  t634[321ULL] = 1;
  t634[322ULL] = 1;
  t634[323ULL] = (int32_T)(t1083 != 0.0);
  t634[324ULL] = (int32_T)((!(t1083 != 0.0)) || (X[146ULL] != 0.0));
  t634[325ULL] = 1;
  t634[326ULL] = (int32_T)((!(t1083 != 0.0)) || ((t1083 != 0.0) && (!(X[146ULL]
    != 0.0))) || (fabs(t1098 / (t1083 == 0.0 ? 1.0E-16 : t1083) / (X[146ULL] ==
    0.0 ? 1.0E-16 : X[146ULL])) >= 0.0));
  t634[327ULL] = (int32_T)(t1095 * 7.8539816339744827E-5 != 0.0);
  t634[328ULL] = (int32_T)(X[19ULL] * t1083 != 0.0);
  t634[329ULL] = (int32_T)(t1101 * 1.5707963267948965E-8 != 0.0);
  t634[330ULL] = (int32_T)(t1105 != 0.0);
  t634[331ULL] = (int32_T)((!(t1105 != 0.0)) || (6.9 / (t1105 == 0.0 ? 1.0E-16 :
    t1105) + 0.00017169489553429715 > 0.0));
  t634[332ULL] = 1;
  t634[333ULL] = 1;
  t634[334ULL] = (int32_T)((!(t1105 != 0.0)) || ((t1105 != 0.0) && (!(6.9 /
    (t1105 == 0.0 ? 1.0E-16 : t1105) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1105 == 0.0 ? 1.0E-16 : t1105) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1105 == 0.0 ? 1.0E-16 : t1105) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[335ULL] = (int32_T)(t1101 * 1.2337005501361697E-10 != 0.0);
  t634[336ULL] = 1;
  t634[337ULL] = 1;
  t634[338ULL] = 1;
  t634[339ULL] = 1;
  t634[340ULL] = (int32_T)(X[20ULL] != 0.0);
  t634[341ULL] = (int32_T)(X[151ULL] != 0.0);
  t634[342ULL] = 1;
  t634[343ULL] = 1;
  t634[344ULL] = 1;
  t634[345ULL] = (int32_T)(t1104 - t1083 != 0.0);
  t634[346ULL] = 1;
  t634[347ULL] = 1;
  t634[348ULL] = (int32_T)
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
      9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9 ==
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
      9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9) && (fabs
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
       9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9) !=
      pmf_get_inf()));
  t634[349ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
        9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9 ==
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
        9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9)) ||
     (!(fabs(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
             9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9)
        != pmf_get_inf())) ||
     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_delta_vel1 *
      9.999999999999999E-14 + fabs(X[150ULL] * t1010 * t1083) * 1.0E-9 >= 0.0));
  t634[350ULL] = 1;
  t634[351ULL] = 1;
  t634[352ULL] = (int32_T)(t1083 != 0.0);
  t634[353ULL] = (int32_T)((!(t1083 != 0.0)) || (X[150ULL] != 0.0));
  t634[354ULL] = 1;
  t634[355ULL] = (int32_T)((!(t1083 != 0.0)) || ((t1083 != 0.0) && (!(X[150ULL]
    != 0.0))) || (fabs(t1118 / (t1083 == 0.0 ? 1.0E-16 : t1083) / (X[150ULL] ==
    0.0 ? 1.0E-16 : X[150ULL])) >= 0.0));
  t634[356ULL] = (int32_T)(t1095 * 7.8539816339744827E-5 != 0.0);
  t634[357ULL] = (int32_T)(t1101 * 1.5707963267948965E-8 != 0.0);
  t634[358ULL] = (int32_T)(t1106 != 0.0);
  t634[359ULL] = (int32_T)((!(t1106 != 0.0)) || (6.9 / (t1106 == 0.0 ? 1.0E-16 :
    t1106) + 0.00017169489553429715 > 0.0));
  t634[360ULL] = 1;
  t634[361ULL] = 1;
  t634[362ULL] = (int32_T)((!(t1106 != 0.0)) || ((t1106 != 0.0) && (!(6.9 /
    (t1106 == 0.0 ? 1.0E-16 : t1106) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1106 == 0.0 ? 1.0E-16 : t1106) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1106 == 0.0 ? 1.0E-16 : t1106) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[363ULL] = (int32_T)(t1101 * 1.2337005501361697E-10 != 0.0);
  t634[364ULL] = 1;
  t634[365ULL] = 1;
  t634[366ULL] = 1;
  t634[367ULL] = 1;
  t634[368ULL] = (int32_T)(t1096 != 0.0);
  t634[369ULL] = (int32_T)(intrm_sf_mf_45 != 0.0);
  t634[370ULL] = 1;
  t634[371ULL] = (int32_T)((!(1.0 - X[21ULL] >= -0.1)) || (((1.0 - X[21ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[21ULL] >= 0.01));
  t634[372ULL] = 1;
  t634[373ULL] = (int32_T)(t1024 != 0.0);
  t634[374ULL] = (int32_T)(X[20ULL] * 100000.0 > 0.0);
  t634[375ULL] = (int32_T)((!(X[20ULL] * 100000.0 > 0.0)) || (pmf_log(X[20ULL] *
    100000.0) - t60_idx_0 < 663.67513503334737));
  t634[376ULL] = 1;
  t634[377ULL] = (int32_T)((!(t1108 >= 1.0)) || ((t1108 - 1.0) * 461.523 + t1093
    != 0.0));
  t634[378ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_x_ws_I * 0.01 != 0.0);
  t634[379ULL] = 1;
  t634[380ULL] = 1;
  t634[381ULL] = 1;
  t634[382ULL] = 1;
  t634[383ULL] = (int32_T)(t1115 != 0.0);
  t634[384ULL] = (int32_T)(t1136 / 2.0 * 7.8539816339744827E-5 != 0.0);
  t634[385ULL] = 1;
  t634[386ULL] = (int32_T)(intrm_sf_mf_104 != 0.0);
  t634[387ULL] = (int32_T)((!(intrm_sf_mf_104 != 0.0)) || (6.9 /
    (intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104) +
    0.00017169489553429715 > 0.0));
  t634[388ULL] = 1;
  t634[389ULL] = 1;
  t634[390ULL] = (int32_T)((!(intrm_sf_mf_104 != 0.0)) || ((intrm_sf_mf_104 !=
    0.0) && (!(6.9 / (intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104) +
               0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_104 == 0.0 ? 1.0E-16 : intrm_sf_mf_104) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_104 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_104) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[391ULL] = (int32_T)((t1111 / 8.0 == t1111 / 8.0) && (fabs(t1111 / 8.0) !=
    pmf_get_inf()));
  t634[392ULL] = (int32_T)((!(t1111 / 8.0 == t1111 / 8.0)) || (!(fabs(t1111 /
    8.0) != pmf_get_inf())) || (t1111 / 8.0 >= 0.0));
  t634[393ULL] = 1;
  t634[394ULL] = (int32_T)(t1091 >= 0.0);
  t634[395ULL] = (int32_T)((!(t1111 / 8.0 == t1111 / 8.0)) || (!(fabs(t1111 /
    8.0) != pmf_get_inf())) || ((t1111 / 8.0 == t1111 / 8.0) && (fabs(t1111 /
    8.0) != pmf_get_inf()) && (!(t1111 / 8.0 >= 0.0))) || (!(t1091 >= 0.0)) ||
    ((pmf_pow(t1091, 0.66666666666666663) - 1.0) * pmf_sqrt(t1111 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[396ULL] = 1;
  t634[397ULL] = 1;
  t634[398ULL] = 1;
  t634[399ULL] = 1;
  t634[400ULL] = (int32_T)(t1139 / 2.0 != 0.0);
  t634[401ULL] = 1;
  t2371 = t1139 / 2.0;
  t634[402ULL] = (int32_T)((!(t1119 > t1145 / 7.8539816339744827E-5 / (t2371 ==
    0.0 ? 1.0E-16 : t2371) / 30.0)) || (t1119 != 0.0));
  t634[403ULL] = 1;
  t634[404ULL] = 1;
  t2371 = t1139 / 2.0;
  t634[405ULL] = (int32_T)((!(t1119 > t1145 / 7.8539816339744827E-5 / (t2371 ==
    0.0 ? 1.0E-16 : t2371) / 30.0)) || (!(t1119 != 0.0)) || (t1139 / 2.0 != 0.0));
  t634[406ULL] = (int32_T)(-t1116 < 663.67513503334737);
  t634[407ULL] = (int32_T)(t1125 != 0.0);
  t634[408ULL] = (int32_T)(t1157 / 2.0 * 7.8539816339744827E-5 != 0.0);
  t634[409ULL] = 1;
  t634[410ULL] = (int32_T)(t1123 != 0.0);
  t634[411ULL] = (int32_T)((!(t1123 != 0.0)) || (6.9 / (t1123 == 0.0 ? 1.0E-16 :
    t1123) + 0.00017169489553429715 > 0.0));
  t634[412ULL] = 1;
  t634[413ULL] = 1;
  t634[414ULL] = (int32_T)((!(t1123 != 0.0)) || ((t1123 != 0.0) && (!(6.9 /
    (t1123 == 0.0 ? 1.0E-16 : t1123) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1123 == 0.0 ? 1.0E-16 : t1123) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1123 == 0.0 ? 1.0E-16 : t1123) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[415ULL] = (int32_T)((t1129 / 8.0 == t1129 / 8.0) && (fabs(t1129 / 8.0) !=
    pmf_get_inf()));
  t634[416ULL] = (int32_T)((!(t1129 / 8.0 == t1129 / 8.0)) || (!(fabs(t1129 /
    8.0) != pmf_get_inf())) || (t1129 / 8.0 >= 0.0));
  t634[417ULL] = 1;
  t634[418ULL] = (int32_T)(intrm_sf_mf_83 >= 0.0);
  t634[419ULL] = (int32_T)((!(t1129 / 8.0 == t1129 / 8.0)) || (!(fabs(t1129 /
    8.0) != pmf_get_inf())) || ((t1129 / 8.0 == t1129 / 8.0) && (fabs(t1129 /
    8.0) != pmf_get_inf()) && (!(t1129 / 8.0 >= 0.0))) || (!(intrm_sf_mf_83 >=
    0.0)) || ((pmf_pow(intrm_sf_mf_83, 0.66666666666666663) - 1.0) * pmf_sqrt
              (t1129 / 8.0) * 12.7 + 1.0 != 0.0));
  t634[420ULL] = 1;
  t634[421ULL] = 1;
  t634[422ULL] = 1;
  t634[423ULL] = 1;
  t634[424ULL] = (int32_T)(t1160 / 2.0 != 0.0);
  t634[425ULL] = 1;
  t2371 = t1160 / 2.0;
  t634[426ULL] = (int32_T)((!(t1126 > t1166 / 7.8539816339744827E-5 / (t2371 ==
    0.0 ? 1.0E-16 : t2371) / 30.0)) || (t1126 != 0.0));
  t634[427ULL] = 1;
  t634[428ULL] = 1;
  t2371 = t1160 / 2.0;
  t634[429ULL] = (int32_T)((!(t1126 > t1166 / 7.8539816339744827E-5 / (t2371 ==
    0.0 ? 1.0E-16 : t2371) / 30.0)) || (!(t1126 != 0.0)) || (t1160 / 2.0 != 0.0));
  t634[430ULL] = (int32_T)(-t1130 < 663.67513503334737);
  t634[431ULL] = 1;
  t634[432ULL] = 1;
  t634[433ULL] = (int32_T)(X[123ULL] != 0.0);
  t634[434ULL] = 1;
  t634[435ULL] = 1;
  t634[436ULL] = 1;
  t634[437ULL] = 1;
  t634[438ULL] = 1;
  t634[439ULL] = (int32_T)((t1007 * t1007 + 2.0360111955237585E-13 == t1007 *
    t1007 + 2.0360111955237585E-13) && (fabs(t1007 * t1007 +
    2.0360111955237585E-13) != pmf_get_inf()));
  t634[440ULL] = (int32_T)((!(t1007 * t1007 + 2.0360111955237585E-13 == t1007 *
    t1007 + 2.0360111955237585E-13)) || (!(fabs(t1007 * t1007 +
    2.0360111955237585E-13) != pmf_get_inf())) || (t1007 * t1007 +
    2.0360111955237585E-13 >= 0.0));
  t634[441ULL] = 1;
  t634[442ULL] = 1;
  t634[443ULL] = (int32_T)((t1007 * t1007 + 2.3237892571262758E-14 == t1007 *
    t1007 + 2.3237892571262758E-14) && (fabs(t1007 * t1007 +
    2.3237892571262758E-14) != pmf_get_inf()));
  t634[444ULL] = (int32_T)((!(t1007 * t1007 + 2.3237892571262758E-14 == t1007 *
    t1007 + 2.3237892571262758E-14)) || (!(fabs(t1007 * t1007 +
    2.3237892571262758E-14) != pmf_get_inf())) || (t1007 * t1007 +
    2.3237892571262758E-14 >= 0.0));
  t634[445ULL] = 1;
  t634[446ULL] = 1;
  t634[447ULL] = (int32_T)((t1007 * t1007 + 1.6409606283812424E-14 == t1007 *
    t1007 + 1.6409606283812424E-14) && (fabs(t1007 * t1007 +
    1.6409606283812424E-14) != pmf_get_inf()));
  t634[448ULL] = (int32_T)((!(t1007 * t1007 + 1.6409606283812424E-14 == t1007 *
    t1007 + 1.6409606283812424E-14)) || (!(fabs(t1007 * t1007 +
    1.6409606283812424E-14) != pmf_get_inf())) || (t1007 * t1007 +
    1.6409606283812424E-14 >= 0.0));
  t634[449ULL] = (int32_T)(X[142ULL] != 0.0);
  t634[450ULL] = 1;
  t634[451ULL] = 1;
  t634[452ULL] = 1;
  t634[453ULL] = 1;
  t634[454ULL] = 1;
  t634[455ULL] = (int32_T)((X[133ULL] * X[133ULL] + 2.0360111955237585E-13 == X
    [133ULL] * X[133ULL] + 2.0360111955237585E-13) && (fabs(X[133ULL] * X[133ULL]
    + 2.0360111955237585E-13) != pmf_get_inf()));
  t634[456ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 2.0360111955237585E-13 ==
    X[133ULL] * X[133ULL] + 2.0360111955237585E-13)) || (!(fabs(X[133ULL] * X
    [133ULL] + 2.0360111955237585E-13) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 2.0360111955237585E-13 >= 0.0));
  t634[457ULL] = 1;
  t634[458ULL] = 1;
  t634[459ULL] = (int32_T)((X[133ULL] * X[133ULL] + 2.3237892571262758E-14 == X
    [133ULL] * X[133ULL] + 2.3237892571262758E-14) && (fabs(X[133ULL] * X[133ULL]
    + 2.3237892571262758E-14) != pmf_get_inf()));
  t634[460ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 2.3237892571262758E-14 ==
    X[133ULL] * X[133ULL] + 2.3237892571262758E-14)) || (!(fabs(X[133ULL] * X
    [133ULL] + 2.3237892571262758E-14) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 2.3237892571262758E-14 >= 0.0));
  t634[461ULL] = 1;
  t634[462ULL] = 1;
  t634[463ULL] = (int32_T)((X[133ULL] * X[133ULL] + 1.6409606283812424E-14 == X
    [133ULL] * X[133ULL] + 1.6409606283812424E-14) && (fabs(X[133ULL] * X[133ULL]
    + 1.6409606283812424E-14) != pmf_get_inf()));
  t634[464ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 1.6409606283812424E-14 ==
    X[133ULL] * X[133ULL] + 1.6409606283812424E-14)) || (!(fabs(X[133ULL] * X
    [133ULL] + 1.6409606283812424E-14) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 1.6409606283812424E-14 >= 0.0));
  t634[465ULL] = (int32_T)(X[166ULL] * t1135 != 0.0);
  t634[466ULL] = (int32_T)(X[142ULL] != 0.0);
  t634[467ULL] = (int32_T)(X[166ULL] != 0.0);
  t634[468ULL] = (int32_T)(X[166ULL] != 0.0);
  t634[469ULL] = 1;
  t634[470ULL] = (int32_T)((!(X[133ULL] > 0.0)) || (t1132 != 0.0));
  t634[471ULL] = 1;
  t634[472ULL] = 1;
  t634[473ULL] = 1;
  t634[474ULL] = (int32_T)((!(X[133ULL] > 0.0)) || (!(t1132 != 0.0)) || (t1137
    != 0.0));
  t634[475ULL] = 1;
  t634[476ULL] = (int32_T)((!(X[133ULL] < 0.0)) || (X[133ULL] > 0.0) || (t1132
    != 0.0));
  t634[477ULL] = 1;
  t634[478ULL] = 1;
  t634[479ULL] = 1;
  t634[480ULL] = (int32_T)((!(X[133ULL] < 0.0)) || (!(t1132 != 0.0)) || (X
    [133ULL] > 0.0) || (t1137 != 0.0));
  t634[481ULL] = 1;
  t634[482ULL] = 1;
  t634[483ULL] = (int32_T)(t1142 != 0.0);
  t634[484ULL] = 1;
  t634[485ULL] = 1;
  t634[486ULL] = 1;
  t634[487ULL] = 1;
  t634[488ULL] = 1;
  t634[489ULL] = 1;
  t634[490ULL] = 1;
  t634[491ULL] = 1;
  t634[492ULL] = 1;
  t634[493ULL] = 1;
  t634[494ULL] = (int32_T)(intrm_sf_mf_183 - t1135 != 0.0);
  t634[495ULL] = 1;
  t634[496ULL] = 1;
  t634[497ULL] = (int32_T)(t1135 != 0.0);
  t634[498ULL] = (int32_T)((!(t1135 != 0.0)) || (X[166ULL] != 0.0));
  t634[499ULL] = 1;
  t634[500ULL] = (int32_T)((!(t1135 != 0.0)) || ((t1135 != 0.0) && (!(X[166ULL]
    != 0.0))) || (fabs(t1189 / (t1135 == 0.0 ? 1.0E-16 : t1135) / (X[166ULL] ==
    0.0 ? 1.0E-16 : X[166ULL])) >= 0.0));
  t634[501ULL] = (int32_T)((!(X[133ULL] >= 0.0)) || (t1133 != 0.0));
  t634[502ULL] = (int32_T)((X[133ULL] >= 0.0) || (t1133 != 0.0));
  t634[503ULL] = (int32_T)(X[142ULL] != 0.0);
  t634[504ULL] = 1;
  t634[505ULL] = 1;
  t634[506ULL] = 1;
  t634[507ULL] = 1;
  t634[508ULL] = 1;
  t634[509ULL] = (int32_T)((X[133ULL] * X[133ULL] + 1.8324100759713822E-12 == X
    [133ULL] * X[133ULL] + 1.8324100759713822E-12) && (fabs(X[133ULL] * X[133ULL]
    + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[510ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 1.8324100759713822E-12 ==
    X[133ULL] * X[133ULL] + 1.8324100759713822E-12)) || (!(fabs(X[133ULL] * X
    [133ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[511ULL] = 1;
  t634[512ULL] = 1;
  t634[513ULL] = (int32_T)((X[133ULL] * X[133ULL] + 2.0914103314136477E-13 == X
    [133ULL] * X[133ULL] + 2.0914103314136477E-13) && (fabs(X[133ULL] * X[133ULL]
    + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[514ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 2.0914103314136477E-13 ==
    X[133ULL] * X[133ULL] + 2.0914103314136477E-13)) || (!(fabs(X[133ULL] * X
    [133ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[515ULL] = 1;
  t634[516ULL] = 1;
  t634[517ULL] = (int32_T)((X[133ULL] * X[133ULL] + 1.4768645655431184E-13 == X
    [133ULL] * X[133ULL] + 1.4768645655431184E-13) && (fabs(X[133ULL] * X[133ULL]
    + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[518ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 1.4768645655431184E-13 ==
    X[133ULL] * X[133ULL] + 1.4768645655431184E-13)) || (!(fabs(X[133ULL] * X
    [133ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[519ULL] = 1;
  t634[520ULL] = 1;
  t634[521ULL] = 1;
  t634[522ULL] = 1;
  t634[523ULL] = 1;
  t634[524ULL] = (int32_T)((X[133ULL] * X[133ULL] + 1.8324100759713822E-12 == X
    [133ULL] * X[133ULL] + 1.8324100759713822E-12) && (fabs(X[133ULL] * X[133ULL]
    + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[525ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 1.8324100759713822E-12 ==
    X[133ULL] * X[133ULL] + 1.8324100759713822E-12)) || (!(fabs(X[133ULL] * X
    [133ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[526ULL] = 1;
  t634[527ULL] = 1;
  t634[528ULL] = (int32_T)((X[133ULL] * X[133ULL] + 2.0914103314136477E-13 == X
    [133ULL] * X[133ULL] + 2.0914103314136477E-13) && (fabs(X[133ULL] * X[133ULL]
    + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[529ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 2.0914103314136477E-13 ==
    X[133ULL] * X[133ULL] + 2.0914103314136477E-13)) || (!(fabs(X[133ULL] * X
    [133ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[530ULL] = 1;
  t634[531ULL] = 1;
  t634[532ULL] = (int32_T)((X[133ULL] * X[133ULL] + 1.4768645655431184E-13 == X
    [133ULL] * X[133ULL] + 1.4768645655431184E-13) && (fabs(X[133ULL] * X[133ULL]
    + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[533ULL] = (int32_T)((!(X[133ULL] * X[133ULL] + 1.4768645655431184E-13 ==
    X[133ULL] * X[133ULL] + 1.4768645655431184E-13)) || (!(fabs(X[133ULL] * X
    [133ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[133ULL] * X
    [133ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[534ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 != 0.0);
  t634[535ULL] = 1;
  t634[536ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 != 0.0))
     || (fabs(t1137 * 2.0 /
              (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1 ==
               0.0 ? 1.0E-16 :
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp_1))
         >= 0.0));
  t634[537ULL] = (int32_T)(X[23ULL] != 0.0);
  t634[538ULL] = (int32_T)(X[179ULL] != 0.0);
  t634[539ULL] = 1;
  t634[540ULL] = 1;
  t634[541ULL] = 1;
  t634[542ULL] = (int32_T)(t1148 - intrm_sf_mf_204 != 0.0);
  t634[543ULL] = 1;
  t634[544ULL] = 1;
  t634[545ULL] = (int32_T)((t1144 * t1144 * 9.999999999999999E-14 + fabs(X
    [178ULL] * t1149 * intrm_sf_mf_204) * 1.0E-9 == t1144 * t1144 *
    9.999999999999999E-14 + fabs(X[178ULL] * t1149 * intrm_sf_mf_204) * 1.0E-9) &&
    (fabs(t1144 * t1144 * 9.999999999999999E-14 + fabs(X[178ULL] * t1149 *
    intrm_sf_mf_204) * 1.0E-9) != pmf_get_inf()));
  t634[546ULL] = (int32_T)((!(t1144 * t1144 * 9.999999999999999E-14 + fabs(X
    [178ULL] * t1149 * intrm_sf_mf_204) * 1.0E-9 == t1144 * t1144 *
    9.999999999999999E-14 + fabs(X[178ULL] * t1149 * intrm_sf_mf_204) * 1.0E-9))
    || (!(fabs(t1144 * t1144 * 9.999999999999999E-14 + fabs(X[178ULL] * t1149 *
    intrm_sf_mf_204) * 1.0E-9) != pmf_get_inf())) || (t1144 * t1144 *
    9.999999999999999E-14 + fabs(X[178ULL] * t1149 * intrm_sf_mf_204) * 1.0E-9 >=
    0.0));
  t634[547ULL] = 1;
  t634[548ULL] = 1;
  t634[549ULL] = (int32_T)(intrm_sf_mf_204 != 0.0);
  t634[550ULL] = (int32_T)((!(intrm_sf_mf_204 != 0.0)) || (X[178ULL] != 0.0));
  t634[551ULL] = 1;
  t634[552ULL] = (int32_T)((!(intrm_sf_mf_204 != 0.0)) || ((intrm_sf_mf_204 !=
    0.0) && (!(X[178ULL] != 0.0))) || (fabs(t1198 / (intrm_sf_mf_204 == 0.0 ?
    1.0E-16 : intrm_sf_mf_204) / (X[178ULL] == 0.0 ? 1.0E-16 : X[178ULL])) >=
    0.0));
  t634[553ULL] = (int32_T)(t1153 * 0.32 != 0.0);
  t634[554ULL] = (int32_T)(X[12ULL] * intrm_sf_mf_204 != 0.0);
  t634[555ULL] = (int32_T)(t1158 * 6.4000000000000011E-5 != 0.0);
  t634[556ULL] = (int32_T)(t1161 != 0.0);
  t634[557ULL] = (int32_T)((!(t1161 != 0.0)) || (6.9 / (t1161 == 0.0 ? 1.0E-16 :
    t1161) + 0.00017169489553429715 > 0.0));
  t634[558ULL] = 1;
  t634[559ULL] = 1;
  t634[560ULL] = (int32_T)((!(t1161 != 0.0)) || ((t1161 != 0.0) && (!(6.9 /
    (t1161 == 0.0 ? 1.0E-16 : t1161) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1161 == 0.0 ? 1.0E-16 : t1161) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1161 == 0.0 ? 1.0E-16 : t1161) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[561ULL] = (int32_T)(t1158 * 0.0020480000000000003 != 0.0);
  t634[562ULL] = 1;
  t634[563ULL] = 1;
  t634[564ULL] = 1;
  t634[565ULL] = 1;
  t634[566ULL] = (int32_T)(X[23ULL] != 0.0);
  t634[567ULL] = (int32_T)(X[182ULL] != 0.0);
  t634[568ULL] = 1;
  t634[569ULL] = 1;
  t634[570ULL] = 1;
  t634[571ULL] = (int32_T)(t1159 - intrm_sf_mf_204 != 0.0);
  t634[572ULL] = 1;
  t634[573ULL] = 1;
  t634[574ULL] = (int32_T)((t1155 * t1155 * 9.999999999999999E-14 + fabs(X
    [181ULL] * t1134 * intrm_sf_mf_204) * 1.0E-9 == t1155 * t1155 *
    9.999999999999999E-14 + fabs(X[181ULL] * t1134 * intrm_sf_mf_204) * 1.0E-9) &&
    (fabs(t1155 * t1155 * 9.999999999999999E-14 + fabs(X[181ULL] * t1134 *
    intrm_sf_mf_204) * 1.0E-9) != pmf_get_inf()));
  t634[575ULL] = (int32_T)((!(t1155 * t1155 * 9.999999999999999E-14 + fabs(X
    [181ULL] * t1134 * intrm_sf_mf_204) * 1.0E-9 == t1155 * t1155 *
    9.999999999999999E-14 + fabs(X[181ULL] * t1134 * intrm_sf_mf_204) * 1.0E-9))
    || (!(fabs(t1155 * t1155 * 9.999999999999999E-14 + fabs(X[181ULL] * t1134 *
    intrm_sf_mf_204) * 1.0E-9) != pmf_get_inf())) || (t1155 * t1155 *
    9.999999999999999E-14 + fabs(X[181ULL] * t1134 * intrm_sf_mf_204) * 1.0E-9 >=
    0.0));
  t634[576ULL] = 1;
  t634[577ULL] = 1;
  t634[578ULL] = (int32_T)(intrm_sf_mf_204 != 0.0);
  t634[579ULL] = (int32_T)((!(intrm_sf_mf_204 != 0.0)) || (X[181ULL] != 0.0));
  t634[580ULL] = 1;
  t634[581ULL] = (int32_T)((!(intrm_sf_mf_204 != 0.0)) || ((intrm_sf_mf_204 !=
    0.0) && (!(X[181ULL] != 0.0))) || (fabs(t1218 / (intrm_sf_mf_204 == 0.0 ?
    1.0E-16 : intrm_sf_mf_204) / (X[181ULL] == 0.0 ? 1.0E-16 : X[181ULL])) >=
    0.0));
  t634[582ULL] = (int32_T)(t1153 * 0.32 != 0.0);
  t634[583ULL] = (int32_T)(t1158 * 6.4000000000000011E-5 != 0.0);
  t634[584ULL] = (int32_T)(t1168 != 0.0);
  t634[585ULL] = (int32_T)((!(t1168 != 0.0)) || (6.9 / (t1168 == 0.0 ? 1.0E-16 :
    t1168) + 0.00017169489553429715 > 0.0));
  t634[586ULL] = 1;
  t634[587ULL] = 1;
  t634[588ULL] = (int32_T)((!(t1168 != 0.0)) || ((t1168 != 0.0) && (!(6.9 /
    (t1168 == 0.0 ? 1.0E-16 : t1168) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1168 == 0.0 ? 1.0E-16 : t1168) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1168 == 0.0 ? 1.0E-16 : t1168) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[589ULL] = (int32_T)(t1158 * 0.0020480000000000003 != 0.0);
  t634[590ULL] = 1;
  t634[591ULL] = 1;
  t634[592ULL] = 1;
  t634[593ULL] = 1;
  t634[594ULL] = (int32_T)(t1154 != 0.0);
  t634[595ULL] = (int32_T)(t1162 != 0.0);
  t634[596ULL] = 1;
  t634[597ULL] = (int32_T)((!(1.0 - X[14ULL] >= -0.1)) || (((1.0 - X[14ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[14ULL] >= 0.01));
  t634[598ULL] = 1;
  t634[599ULL] = (int32_T)(t1033 != 0.0);
  t634[600ULL] = (int32_T)(X[23ULL] * 100000.0 > 0.0);
  t634[601ULL] = (int32_T)((!(X[23ULL] * 100000.0 > 0.0)) || (pmf_log(X[23ULL] *
    100000.0) - t642_idx_0 < 663.67513503334737));
  t634[602ULL] = 1;
  t634[603ULL] = (int32_T)((!(t1169 >= 1.0)) || ((t1169 - 1.0) * 461.523 + t1165
    != 0.0));
  t634[604ULL] = (int32_T)(t1170 * 0.01 != 0.0);
  t634[605ULL] = 1;
  t634[606ULL] = 1;
  t634[607ULL] = 1;
  t634[608ULL] = 1;
  t634[609ULL] = (int32_T)(t1173 != 0.0);
  t634[610ULL] = (int32_T)(t1236 / 2.0 * 0.32 != 0.0);
  t634[611ULL] = 1;
  t634[612ULL] = (int32_T)(intrm_sf_mf_255 != 0.0);
  t634[613ULL] = (int32_T)((!(intrm_sf_mf_255 != 0.0)) || (6.9 /
    (intrm_sf_mf_255 == 0.0 ? 1.0E-16 : intrm_sf_mf_255) +
    0.00017169489553429715 > 0.0));
  t634[614ULL] = 1;
  t634[615ULL] = 1;
  t634[616ULL] = (int32_T)((!(intrm_sf_mf_255 != 0.0)) || ((intrm_sf_mf_255 !=
    0.0) && (!(6.9 / (intrm_sf_mf_255 == 0.0 ? 1.0E-16 : intrm_sf_mf_255) +
               0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_255 == 0.0 ? 1.0E-16 : intrm_sf_mf_255) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_255 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_255) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[617ULL] = (int32_T)((t1177 / 8.0 == t1177 / 8.0) && (fabs(t1177 / 8.0) !=
    pmf_get_inf()));
  t634[618ULL] = (int32_T)((!(t1177 / 8.0 == t1177 / 8.0)) || (!(fabs(t1177 /
    8.0) != pmf_get_inf())) || (t1177 / 8.0 >= 0.0));
  t634[619ULL] = 1;
  t634[620ULL] = (int32_T)(t1174 >= 0.0);
  t634[621ULL] = (int32_T)((!(t1177 / 8.0 == t1177 / 8.0)) || (!(fabs(t1177 /
    8.0) != pmf_get_inf())) || ((t1177 / 8.0 == t1177 / 8.0) && (fabs(t1177 /
    8.0) != pmf_get_inf()) && (!(t1177 / 8.0 >= 0.0))) || (!(t1174 >= 0.0)) ||
    ((pmf_pow(t1174, 0.66666666666666663) - 1.0) * pmf_sqrt(t1177 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[622ULL] = 1;
  t634[623ULL] = 1;
  t634[624ULL] = 1;
  t634[625ULL] = 1;
  t634[626ULL] = (int32_T)(t1239 / 2.0 != 0.0);
  t634[627ULL] = 1;
  t2371 = t1239 / 2.0;
  t634[628ULL] = (int32_T)((!(intrm_sf_mf_256 > t1245 / 0.32 / (t2371 == 0.0 ?
    1.0E-16 : t2371) / 30.0)) || (intrm_sf_mf_256 != 0.0));
  t634[629ULL] = 1;
  t634[630ULL] = 1;
  t2371 = t1239 / 2.0;
  t634[631ULL] = (int32_T)((!(intrm_sf_mf_256 > t1245 / 0.32 / (t2371 == 0.0 ?
    1.0E-16 : t2371) / 30.0)) || (!(intrm_sf_mf_256 != 0.0)) || (t1239 / 2.0 !=
    0.0));
  t634[632ULL] = (int32_T)(-t1179 < 663.67513503334737);
  t634[633ULL] = (int32_T)(t1185 != 0.0);
  t634[634ULL] = (int32_T)(t1257 / 2.0 * 0.32 != 0.0);
  t634[635ULL] = 1;
  t634[636ULL] = (int32_T)(t1183 != 0.0);
  t634[637ULL] = (int32_T)((!(t1183 != 0.0)) || (6.9 / (t1183 == 0.0 ? 1.0E-16 :
    t1183) + 0.00017169489553429715 > 0.0));
  t634[638ULL] = 1;
  t634[639ULL] = 1;
  t634[640ULL] = (int32_T)((!(t1183 != 0.0)) || ((t1183 != 0.0) && (!(6.9 /
    (t1183 == 0.0 ? 1.0E-16 : t1183) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1183 == 0.0 ? 1.0E-16 : t1183) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1183 == 0.0 ? 1.0E-16 : t1183) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[641ULL] = (int32_T)((t1188 / 8.0 == t1188 / 8.0) && (fabs(t1188 / 8.0) !=
    pmf_get_inf()));
  t634[642ULL] = (int32_T)((!(t1188 / 8.0 == t1188 / 8.0)) || (!(fabs(t1188 /
    8.0) != pmf_get_inf())) || (t1188 / 8.0 >= 0.0));
  t634[643ULL] = 1;
  t634[644ULL] = (int32_T)(t1187 >= 0.0);
  t634[645ULL] = (int32_T)((!(t1188 / 8.0 == t1188 / 8.0)) || (!(fabs(t1188 /
    8.0) != pmf_get_inf())) || ((t1188 / 8.0 == t1188 / 8.0) && (fabs(t1188 /
    8.0) != pmf_get_inf()) && (!(t1188 / 8.0 >= 0.0))) || (!(t1187 >= 0.0)) ||
    ((pmf_pow(t1187, 0.66666666666666663) - 1.0) * pmf_sqrt(t1188 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[646ULL] = 1;
  t634[647ULL] = 1;
  t634[648ULL] = 1;
  t634[649ULL] = 1;
  t634[650ULL] = (int32_T)(t1260 / 2.0 != 0.0);
  t634[651ULL] = 1;
  t2371 = t1260 / 2.0;
  t634[652ULL] = (int32_T)((!(t1186 > t1266 / 0.32 / (t2371 == 0.0 ? 1.0E-16 :
    t2371) / 30.0)) || (t1186 != 0.0));
  t634[653ULL] = 1;
  t634[654ULL] = 1;
  t2371 = t1260 / 2.0;
  t634[655ULL] = (int32_T)((!(t1186 > t1266 / 0.32 / (t2371 == 0.0 ? 1.0E-16 :
    t2371) / 30.0)) || (!(t1186 != 0.0)) || (t1260 / 2.0 != 0.0));
  t634[656ULL] = (int32_T)(-t1190 < 663.67513503334737);
  t634[657ULL] = 1;
  t634[658ULL] = 1;
  t634[659ULL] = (int32_T)(X[174ULL] != 0.0);
  t634[660ULL] = 1;
  t634[661ULL] = 1;
  t634[662ULL] = 1;
  t634[663ULL] = 1;
  t634[664ULL] = 1;
  t634[665ULL] = (int32_T)((X[177ULL] * X[177ULL] + 2.5711439722933289E-8 == X
    [177ULL] * X[177ULL] + 2.5711439722933289E-8) && (fabs(X[177ULL] * X[177ULL]
    + 2.5711439722933289E-8) != pmf_get_inf()));
  t634[666ULL] = (int32_T)((!(X[177ULL] * X[177ULL] + 2.5711439722933289E-8 ==
    X[177ULL] * X[177ULL] + 2.5711439722933289E-8)) || (!(fabs(X[177ULL] * X
    [177ULL] + 2.5711439722933289E-8) != pmf_get_inf())) || (X[177ULL] * X
    [177ULL] + 2.5711439722933289E-8 >= 0.0));
  t634[667ULL] = 1;
  t634[668ULL] = 1;
  t634[669ULL] = (int32_T)((X[177ULL] * X[177ULL] + 4.9597684650720062E-8 == X
    [177ULL] * X[177ULL] + 4.9597684650720062E-8) && (fabs(X[177ULL] * X[177ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[670ULL] = (int32_T)((!(X[177ULL] * X[177ULL] + 4.9597684650720062E-8 ==
    X[177ULL] * X[177ULL] + 4.9597684650720062E-8)) || (!(fabs(X[177ULL] * X
    [177ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[177ULL] * X
    [177ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[671ULL] = 1;
  t634[672ULL] = 1;
  t634[673ULL] = (int32_T)((X[177ULL] * X[177ULL] + 3.5023764535063275E-8 == X
    [177ULL] * X[177ULL] + 3.5023764535063275E-8) && (fabs(X[177ULL] * X[177ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[674ULL] = (int32_T)((!(X[177ULL] * X[177ULL] + 3.5023764535063275E-8 ==
    X[177ULL] * X[177ULL] + 3.5023764535063275E-8)) || (!(fabs(X[177ULL] * X
    [177ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[177ULL] * X
    [177ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[675ULL] = (int32_T)(X[80ULL] != 0.0);
  t634[676ULL] = 1;
  t634[677ULL] = 1;
  t634[678ULL] = 1;
  t634[679ULL] = 1;
  t634[680ULL] = 1;
  t634[681ULL] = (int32_T)((X[180ULL] * X[180ULL] + 2.5711439722933289E-8 == X
    [180ULL] * X[180ULL] + 2.5711439722933289E-8) && (fabs(X[180ULL] * X[180ULL]
    + 2.5711439722933289E-8) != pmf_get_inf()));
  t634[682ULL] = (int32_T)((!(X[180ULL] * X[180ULL] + 2.5711439722933289E-8 ==
    X[180ULL] * X[180ULL] + 2.5711439722933289E-8)) || (!(fabs(X[180ULL] * X
    [180ULL] + 2.5711439722933289E-8) != pmf_get_inf())) || (X[180ULL] * X
    [180ULL] + 2.5711439722933289E-8 >= 0.0));
  t634[683ULL] = 1;
  t634[684ULL] = 1;
  t634[685ULL] = (int32_T)((X[180ULL] * X[180ULL] + 4.9597684650720062E-8 == X
    [180ULL] * X[180ULL] + 4.9597684650720062E-8) && (fabs(X[180ULL] * X[180ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[686ULL] = (int32_T)((!(X[180ULL] * X[180ULL] + 4.9597684650720062E-8 ==
    X[180ULL] * X[180ULL] + 4.9597684650720062E-8)) || (!(fabs(X[180ULL] * X
    [180ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[180ULL] * X
    [180ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[687ULL] = 1;
  t634[688ULL] = 1;
  t634[689ULL] = (int32_T)((X[180ULL] * X[180ULL] + 3.5023764535063275E-8 == X
    [180ULL] * X[180ULL] + 3.5023764535063275E-8) && (fabs(X[180ULL] * X[180ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[690ULL] = (int32_T)((!(X[180ULL] * X[180ULL] + 3.5023764535063275E-8 ==
    X[180ULL] * X[180ULL] + 3.5023764535063275E-8)) || (!(fabs(X[180ULL] * X
    [180ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[180ULL] * X
    [180ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[691ULL] = (int32_T)(X[24ULL] != 0.0);
  t634[692ULL] = (int32_T)(X[200ULL] != 0.0);
  t634[693ULL] = 1;
  t634[694ULL] = 1;
  t634[695ULL] = 1;
  t634[696ULL] = (int32_T)(t1199 - t1195 != 0.0);
  t634[697ULL] = 1;
  t634[698ULL] = 1;
  t634[699ULL] = (int32_T)((t1196 * t1196 * 9.999999999999999E-14 + fabs(X
    [199ULL] * t1036 * t1195) * 1.0E-9 == t1196 * t1196 * 9.999999999999999E-14
    + fabs(X[199ULL] * t1036 * t1195) * 1.0E-9) && (fabs(t1196 * t1196 *
    9.999999999999999E-14 + fabs(X[199ULL] * t1036 * t1195) * 1.0E-9) !=
    pmf_get_inf()));
  t634[700ULL] = (int32_T)((!(t1196 * t1196 * 9.999999999999999E-14 + fabs(X
    [199ULL] * t1036 * t1195) * 1.0E-9 == t1196 * t1196 * 9.999999999999999E-14
    + fabs(X[199ULL] * t1036 * t1195) * 1.0E-9)) || (!(fabs(t1196 * t1196 *
    9.999999999999999E-14 + fabs(X[199ULL] * t1036 * t1195) * 1.0E-9) !=
    pmf_get_inf())) || (t1196 * t1196 * 9.999999999999999E-14 + fabs(X[199ULL] *
    t1036 * t1195) * 1.0E-9 >= 0.0));
  t634[701ULL] = 1;
  t634[702ULL] = 1;
  t634[703ULL] = (int32_T)(t1195 != 0.0);
  t634[704ULL] = (int32_T)((!(t1195 != 0.0)) || (X[199ULL] != 0.0));
  t634[705ULL] = 1;
  t634[706ULL] = (int32_T)((!(t1195 != 0.0)) || ((t1195 != 0.0) && (!(X[199ULL]
    != 0.0))) || (fabs(t1282 / (t1195 == 0.0 ? 1.0E-16 : t1195) / (X[199ULL] ==
    0.0 ? 1.0E-16 : X[199ULL])) >= 0.0));
  t634[707ULL] = (int32_T)(t1207 * 0.32 != 0.0);
  t634[708ULL] = (int32_T)(X[15ULL] * t1195 != 0.0);
  t634[709ULL] = (int32_T)(t1211 * 6.4000000000000011E-5 != 0.0);
  t634[710ULL] = (int32_T)(t1216 != 0.0);
  t634[711ULL] = (int32_T)((!(t1216 != 0.0)) || (6.9 / (t1216 == 0.0 ? 1.0E-16 :
    t1216) + 0.00017169489553429715 > 0.0));
  t634[712ULL] = 1;
  t634[713ULL] = 1;
  t634[714ULL] = (int32_T)((!(t1216 != 0.0)) || ((t1216 != 0.0) && (!(6.9 /
    (t1216 == 0.0 ? 1.0E-16 : t1216) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1216 == 0.0 ? 1.0E-16 : t1216) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1216 == 0.0 ? 1.0E-16 : t1216) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[715ULL] = (int32_T)(t1211 * 0.0020480000000000003 != 0.0);
  t634[716ULL] = 1;
  t634[717ULL] = 1;
  t634[718ULL] = 1;
  t634[719ULL] = 1;
  t634[720ULL] = (int32_T)(X[24ULL] != 0.0);
  t634[721ULL] = (int32_T)(X[203ULL] != 0.0);
  t634[722ULL] = 1;
  t634[723ULL] = 1;
  t634[724ULL] = 1;
  t634[725ULL] = (int32_T)(t1215 - t1195 != 0.0);
  t634[726ULL] = 1;
  t634[727ULL] = 1;
  t634[728ULL] = (int32_T)((t1209 * t1209 * 9.999999999999999E-14 + fabs(X
    [202ULL] * t1192 * t1195) * 1.0E-9 == t1209 * t1209 * 9.999999999999999E-14
    + fabs(X[202ULL] * t1192 * t1195) * 1.0E-9) && (fabs(t1209 * t1209 *
    9.999999999999999E-14 + fabs(X[202ULL] * t1192 * t1195) * 1.0E-9) !=
    pmf_get_inf()));
  t634[729ULL] = (int32_T)((!(t1209 * t1209 * 9.999999999999999E-14 + fabs(X
    [202ULL] * t1192 * t1195) * 1.0E-9 == t1209 * t1209 * 9.999999999999999E-14
    + fabs(X[202ULL] * t1192 * t1195) * 1.0E-9)) || (!(fabs(t1209 * t1209 *
    9.999999999999999E-14 + fabs(X[202ULL] * t1192 * t1195) * 1.0E-9) !=
    pmf_get_inf())) || (t1209 * t1209 * 9.999999999999999E-14 + fabs(X[202ULL] *
    t1192 * t1195) * 1.0E-9 >= 0.0));
  t634[730ULL] = 1;
  t634[731ULL] = 1;
  t634[732ULL] = (int32_T)(t1195 != 0.0);
  t634[733ULL] = (int32_T)((!(t1195 != 0.0)) || (X[202ULL] != 0.0));
  t634[734ULL] = 1;
  t634[735ULL] = (int32_T)((!(t1195 != 0.0)) || ((t1195 != 0.0) && (!(X[202ULL]
    != 0.0))) || (fabs(t1302 / (t1195 == 0.0 ? 1.0E-16 : t1195) / (X[202ULL] ==
    0.0 ? 1.0E-16 : X[202ULL])) >= 0.0));
  t634[736ULL] = (int32_T)(t1207 * 0.32 != 0.0);
  t634[737ULL] = (int32_T)(t1211 * 6.4000000000000011E-5 != 0.0);
  t634[738ULL] = (int32_T)(t1225 != 0.0);
  t634[739ULL] = (int32_T)((!(t1225 != 0.0)) || (6.9 / (t1225 == 0.0 ? 1.0E-16 :
    t1225) + 0.00017169489553429715 > 0.0));
  t634[740ULL] = 1;
  t634[741ULL] = 1;
  t634[742ULL] = (int32_T)((!(t1225 != 0.0)) || ((t1225 != 0.0) && (!(6.9 /
    (t1225 == 0.0 ? 1.0E-16 : t1225) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1225 == 0.0 ? 1.0E-16 : t1225) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1225 == 0.0 ? 1.0E-16 : t1225) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[743ULL] = (int32_T)(t1211 * 0.0020480000000000003 != 0.0);
  t634[744ULL] = 1;
  t634[745ULL] = 1;
  t634[746ULL] = 1;
  t634[747ULL] = 1;
  t634[748ULL] = (int32_T)(t1208 != 0.0);
  t634[749ULL] = (int32_T)(intrm_sf_mf_357 != 0.0);
  t634[750ULL] = 1;
  t634[751ULL] = (int32_T)((!(1.0 - X[17ULL] >= -0.1)) || (((1.0 - X[17ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[17ULL] >= 0.01));
  t634[752ULL] = 1;
  t634[753ULL] = (int32_T)(t1039 != 0.0);
  t634[754ULL] = (int32_T)(X[24ULL] * 100000.0 > 0.0);
  t634[755ULL] = (int32_T)((!(X[24ULL] * 100000.0 > 0.0)) || (pmf_log(X[24ULL] *
    100000.0) - t640[0ULL] < 663.67513503334737));
  t634[756ULL] = 1;
  t634[757ULL] = (int32_T)((!(t1226 >= 1.0)) || ((t1226 - 1.0) * 461.523 + t1223
    != 0.0));
  t634[758ULL] = (int32_T)(t1228 * 0.01 != 0.0);
  t634[759ULL] = 1;
  t634[760ULL] = 1;
  t634[761ULL] = 1;
  t634[762ULL] = 1;
  t634[763ULL] = (int32_T)(t1185 != 0.0);
  t634[764ULL] = (int32_T)(t1318 / 2.0 * 0.32 != 0.0);
  t634[765ULL] = 1;
  t634[766ULL] = (int32_T)(intrm_sf_mf_394 != 0.0);
  t634[767ULL] = (int32_T)((!(intrm_sf_mf_394 != 0.0)) || (6.9 /
    (intrm_sf_mf_394 == 0.0 ? 1.0E-16 : intrm_sf_mf_394) +
    0.00017169489553429715 > 0.0));
  t634[768ULL] = 1;
  t634[769ULL] = 1;
  t634[770ULL] = (int32_T)((!(intrm_sf_mf_394 != 0.0)) || ((intrm_sf_mf_394 !=
    0.0) && (!(6.9 / (intrm_sf_mf_394 == 0.0 ? 1.0E-16 : intrm_sf_mf_394) +
               0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_394 == 0.0 ? 1.0E-16 : intrm_sf_mf_394) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_394 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_394) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[771ULL] = (int32_T)((t1231 / 8.0 == t1231 / 8.0) && (fabs(t1231 / 8.0) !=
    pmf_get_inf()));
  t634[772ULL] = (int32_T)((!(t1231 / 8.0 == t1231 / 8.0)) || (!(fabs(t1231 /
    8.0) != pmf_get_inf())) || (t1231 / 8.0 >= 0.0));
  t634[773ULL] = 1;
  t634[774ULL] = (int32_T)(t1230 >= 0.0);
  t634[775ULL] = (int32_T)((!(t1231 / 8.0 == t1231 / 8.0)) || (!(fabs(t1231 /
    8.0) != pmf_get_inf())) || ((t1231 / 8.0 == t1231 / 8.0) && (fabs(t1231 /
    8.0) != pmf_get_inf()) && (!(t1231 / 8.0 >= 0.0))) || (!(t1230 >= 0.0)) ||
    ((pmf_pow(t1230, 0.66666666666666663) - 1.0) * pmf_sqrt(t1231 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[776ULL] = 1;
  t634[777ULL] = 1;
  t634[778ULL] = 1;
  t634[779ULL] = 1;
  t634[780ULL] = (int32_T)(t1321 / 2.0 != 0.0);
  t634[781ULL] = 1;
  t2371 = t1321 / 2.0;
  t634[782ULL] = (int32_T)((!(intrm_sf_mf_393 > t1327 / 0.32 / (t2371 == 0.0 ?
    1.0E-16 : t2371) / 30.0)) || (intrm_sf_mf_393 != 0.0));
  t634[783ULL] = 1;
  t634[784ULL] = 1;
  t2371 = t1321 / 2.0;
  t634[785ULL] = (int32_T)((!(intrm_sf_mf_393 > t1327 / 0.32 / (t2371 == 0.0 ?
    1.0E-16 : t2371) / 30.0)) || (!(intrm_sf_mf_393 != 0.0)) || (t1321 / 2.0 !=
    0.0));
  t634[786ULL] = (int32_T)(-t1232 < 663.67513503334737);
  t634[787ULL] = (int32_T)(t1234 != 0.0);
  t634[788ULL] = (int32_T)(t1339 / 2.0 * 0.32 != 0.0);
  t634[789ULL] = 1;
  t634[790ULL] = (int32_T)(intrm_sf_mf_418 != 0.0);
  t634[791ULL] = (int32_T)((!(intrm_sf_mf_418 != 0.0)) || (6.9 /
    (intrm_sf_mf_418 == 0.0 ? 1.0E-16 : intrm_sf_mf_418) +
    0.00017169489553429715 > 0.0));
  t634[792ULL] = 1;
  t634[793ULL] = 1;
  t634[794ULL] = (int32_T)((!(intrm_sf_mf_418 != 0.0)) || ((intrm_sf_mf_418 !=
    0.0) && (!(6.9 / (intrm_sf_mf_418 == 0.0 ? 1.0E-16 : intrm_sf_mf_418) +
               0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_418 == 0.0 ? 1.0E-16 : intrm_sf_mf_418) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_418 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_418) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[795ULL] = (int32_T)((t1238 / 8.0 == t1238 / 8.0) && (fabs(t1238 / 8.0) !=
    pmf_get_inf()));
  t634[796ULL] = (int32_T)((!(t1238 / 8.0 == t1238 / 8.0)) || (!(fabs(t1238 /
    8.0) != pmf_get_inf())) || (t1238 / 8.0 >= 0.0));
  t634[797ULL] = 1;
  t634[798ULL] = (int32_T)(t1237 >= 0.0);
  t634[799ULL] = (int32_T)((!(t1238 / 8.0 == t1238 / 8.0)) || (!(fabs(t1238 /
    8.0) != pmf_get_inf())) || ((t1238 / 8.0 == t1238 / 8.0) && (fabs(t1238 /
    8.0) != pmf_get_inf()) && (!(t1238 / 8.0 >= 0.0))) || (!(t1237 >= 0.0)) ||
    ((pmf_pow(t1237, 0.66666666666666663) - 1.0) * pmf_sqrt(t1238 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[800ULL] = 1;
  t634[801ULL] = 1;
  t634[802ULL] = 1;
  t634[803ULL] = 1;
  t634[804ULL] = (int32_T)(t1342 / 2.0 != 0.0);
  t634[805ULL] = 1;
  t2371 = t1342 / 2.0;
  t634[806ULL] = (int32_T)((!(intrm_sf_mf_417 > t1348 / 0.32 / (t2371 == 0.0 ?
    1.0E-16 : t2371) / 30.0)) || (intrm_sf_mf_417 != 0.0));
  t634[807ULL] = 1;
  t634[808ULL] = 1;
  t2371 = t1342 / 2.0;
  t634[809ULL] = (int32_T)((!(intrm_sf_mf_417 > t1348 / 0.32 / (t2371 == 0.0 ?
    1.0E-16 : t2371) / 30.0)) || (!(intrm_sf_mf_417 != 0.0)) || (t1342 / 2.0 !=
    0.0));
  t634[810ULL] = (int32_T)(-t1240 < 663.67513503334737);
  t634[811ULL] = 1;
  t634[812ULL] = 1;
  t634[813ULL] = (int32_T)(X[80ULL] != 0.0);
  t634[814ULL] = 1;
  t634[815ULL] = 1;
  t634[816ULL] = 1;
  t634[817ULL] = 1;
  t634[818ULL] = 1;
  t634[819ULL] = (int32_T)((X[180ULL] * X[180ULL] + 2.5711439722933289E-8 == X
    [180ULL] * X[180ULL] + 2.5711439722933289E-8) && (fabs(X[180ULL] * X[180ULL]
    + 2.5711439722933289E-8) != pmf_get_inf()));
  t634[820ULL] = (int32_T)((!(X[180ULL] * X[180ULL] + 2.5711439722933289E-8 ==
    X[180ULL] * X[180ULL] + 2.5711439722933289E-8)) || (!(fabs(X[180ULL] * X
    [180ULL] + 2.5711439722933289E-8) != pmf_get_inf())) || (X[180ULL] * X
    [180ULL] + 2.5711439722933289E-8 >= 0.0));
  t634[821ULL] = 1;
  t634[822ULL] = 1;
  t634[823ULL] = (int32_T)((X[180ULL] * X[180ULL] + 4.9597684650720062E-8 == X
    [180ULL] * X[180ULL] + 4.9597684650720062E-8) && (fabs(X[180ULL] * X[180ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[824ULL] = (int32_T)((!(X[180ULL] * X[180ULL] + 4.9597684650720062E-8 ==
    X[180ULL] * X[180ULL] + 4.9597684650720062E-8)) || (!(fabs(X[180ULL] * X
    [180ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[180ULL] * X
    [180ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[825ULL] = 1;
  t634[826ULL] = 1;
  t634[827ULL] = (int32_T)((X[180ULL] * X[180ULL] + 3.5023764535063275E-8 == X
    [180ULL] * X[180ULL] + 3.5023764535063275E-8) && (fabs(X[180ULL] * X[180ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[828ULL] = (int32_T)((!(X[180ULL] * X[180ULL] + 3.5023764535063275E-8 ==
    X[180ULL] * X[180ULL] + 3.5023764535063275E-8)) || (!(fabs(X[180ULL] * X
    [180ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[180ULL] * X
    [180ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[829ULL] = (int32_T)(X[196ULL] != 0.0);
  t634[830ULL] = 1;
  t634[831ULL] = 1;
  t634[832ULL] = 1;
  t634[833ULL] = 1;
  t634[834ULL] = 1;
  t634[835ULL] = (int32_T)((X[201ULL] * X[201ULL] + 2.5711439722933289E-8 == X
    [201ULL] * X[201ULL] + 2.5711439722933289E-8) && (fabs(X[201ULL] * X[201ULL]
    + 2.5711439722933289E-8) != pmf_get_inf()));
  t634[836ULL] = (int32_T)((!(X[201ULL] * X[201ULL] + 2.5711439722933289E-8 ==
    X[201ULL] * X[201ULL] + 2.5711439722933289E-8)) || (!(fabs(X[201ULL] * X
    [201ULL] + 2.5711439722933289E-8) != pmf_get_inf())) || (X[201ULL] * X
    [201ULL] + 2.5711439722933289E-8 >= 0.0));
  t634[837ULL] = 1;
  t634[838ULL] = 1;
  t634[839ULL] = (int32_T)((X[201ULL] * X[201ULL] + 4.9597684650720062E-8 == X
    [201ULL] * X[201ULL] + 4.9597684650720062E-8) && (fabs(X[201ULL] * X[201ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[840ULL] = (int32_T)((!(X[201ULL] * X[201ULL] + 4.9597684650720062E-8 ==
    X[201ULL] * X[201ULL] + 4.9597684650720062E-8)) || (!(fabs(X[201ULL] * X
    [201ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[201ULL] * X
    [201ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[841ULL] = 1;
  t634[842ULL] = 1;
  t634[843ULL] = (int32_T)((X[201ULL] * X[201ULL] + 3.5023764535063275E-8 == X
    [201ULL] * X[201ULL] + 3.5023764535063275E-8) && (fabs(X[201ULL] * X[201ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[844ULL] = (int32_T)((!(X[201ULL] * X[201ULL] + 3.5023764535063275E-8 ==
    X[201ULL] * X[201ULL] + 3.5023764535063275E-8)) || (!(fabs(X[201ULL] * X
    [201ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[201ULL] * X
    [201ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[845ULL] = 1;
  t634[846ULL] = 1;
  t634[847ULL] = (int32_T)
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
      6.4274470286298274E-9 ==
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
      6.4274470286298274E-9) && (fabs
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
       6.4274470286298274E-9) != pmf_get_inf()));
  t634[848ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
        6.4274470286298274E-9 ==
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
        6.4274470286298274E-9)) || (!(fabs
       (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
        6.4274470286298274E-9) != pmf_get_inf())) ||
     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan3 +
      6.4274470286298274E-9 >= 0.0));
  t634[849ULL] = (int32_T)(t1242 != 0.0);
  t634[850ULL] = (int32_T)((!(t1242 != 0.0)) || (t2338 != 0.0));
  t634[851ULL] = (int32_T)(t1242 != 0.0);
  t634[852ULL] = 1;
  t634[853ULL] = (int32_T)(t1242 != 0.0);
  t634[854ULL] = 1;
  t634[855ULL] = 1;
  t634[856ULL] = 1;
  t634[857ULL] = (int32_T)(t1243 != 0.0);
  t634[858ULL] = (int32_T)(t1243 != 0.0);
  t634[859ULL] = 1;
  t634[860ULL] = 1;
  t634[861ULL] = (int32_T)((X[228ULL] * X[228ULL] + 1.2620262729050631E-10 == X
    [228ULL] * X[228ULL] + 1.2620262729050631E-10) && (fabs(X[228ULL] * X[228ULL]
    + 1.2620262729050631E-10) != pmf_get_inf()));
  t634[862ULL] = (int32_T)((!(X[228ULL] * X[228ULL] + 1.2620262729050631E-10 ==
    X[228ULL] * X[228ULL] + 1.2620262729050631E-10)) || (!(fabs(X[228ULL] * X
    [228ULL] + 1.2620262729050631E-10) != pmf_get_inf())) || (X[228ULL] * X
    [228ULL] + 1.2620262729050631E-10 >= 0.0));
  t634[863ULL] = (int32_T)(t1244 != 0.0);
  t634[864ULL] = (int32_T)((!(t1244 != 0.0)) || (t1247 != 0.0));
  t634[865ULL] = (int32_T)(t1244 != 0.0);
  t634[866ULL] = 1;
  t634[867ULL] = (int32_T)(t1244 != 0.0);
  t634[868ULL] = 1;
  t634[869ULL] = 1;
  t634[870ULL] = 1;
  t634[871ULL] = (int32_T)((X[228ULL] * X[228ULL] + 1.2620262729050631E-10 == X
    [228ULL] * X[228ULL] + 1.2620262729050631E-10) && (fabs(X[228ULL] * X[228ULL]
    + 1.2620262729050631E-10) != pmf_get_inf()));
  t634[872ULL] = (int32_T)((!(X[228ULL] * X[228ULL] + 1.2620262729050631E-10 ==
    X[228ULL] * X[228ULL] + 1.2620262729050631E-10)) || (!(fabs(X[228ULL] * X
    [228ULL] + 1.2620262729050631E-10) != pmf_get_inf())) || (X[228ULL] * X
    [228ULL] + 1.2620262729050631E-10 >= 0.0));
  t634[873ULL] = (int32_T)(t1244 != 0.0);
  t634[874ULL] = (int32_T)((!(t1244 != 0.0)) || (t1248 != 0.0));
  t634[875ULL] = (int32_T)(t1244 != 0.0);
  t634[876ULL] = 1;
  t634[877ULL] = (int32_T)(t1244 != 0.0);
  t634[878ULL] = 1;
  t634[879ULL] = (int32_T)(t1253 * 0.002 != 0.0);
  t634[880ULL] = 1;
  t634[881ULL] = 1;
  t634[882ULL] = (int32_T)((X[228ULL] * X[228ULL] + 5.1419576229038592E-12 == X
    [228ULL] * X[228ULL] + 5.1419576229038592E-12) && (fabs(X[228ULL] * X[228ULL]
    + 5.1419576229038592E-12) != pmf_get_inf()));
  t634[883ULL] = (int32_T)((!(X[228ULL] * X[228ULL] + 5.1419576229038592E-12 ==
    X[228ULL] * X[228ULL] + 5.1419576229038592E-12)) || (!(fabs(X[228ULL] * X
    [228ULL] + 5.1419576229038592E-12) != pmf_get_inf())) || (X[228ULL] * X
    [228ULL] + 5.1419576229038592E-12 >= 0.0));
  t634[884ULL] = (int32_T)(t1255 != 0.0);
  t634[885ULL] = (int32_T)((!(t1255 != 0.0)) || (t1256 != 0.0));
  t634[886ULL] = (int32_T)(t1255 != 0.0);
  t634[887ULL] = 1;
  t634[888ULL] = (int32_T)(t1255 != 0.0);
  t634[889ULL] = 1;
  t634[890ULL] = 1;
  t634[891ULL] = 1;
  t634[892ULL] = (int32_T)((X[220ULL] * X[220ULL] + 5.1419576229038592E-12 == X
    [220ULL] * X[220ULL] + 5.1419576229038592E-12) && (fabs(X[220ULL] * X[220ULL]
    + 5.1419576229038592E-12) != pmf_get_inf()));
  t634[893ULL] = (int32_T)((!(X[220ULL] * X[220ULL] + 5.1419576229038592E-12 ==
    X[220ULL] * X[220ULL] + 5.1419576229038592E-12)) || (!(fabs(X[220ULL] * X
    [220ULL] + 5.1419576229038592E-12) != pmf_get_inf())) || (X[220ULL] * X
    [220ULL] + 5.1419576229038592E-12 >= 0.0));
  t634[894ULL] = (int32_T)(t1258 != 0.0);
  t634[895ULL] = (int32_T)((!(t1258 != 0.0)) || (t1259 != 0.0));
  t634[896ULL] = (int32_T)(t1258 != 0.0);
  t634[897ULL] = 1;
  t634[898ULL] = (int32_T)(t1258 != 0.0);
  t634[899ULL] = 1;
  t634[900ULL] = (int32_T)(t1261 != 0.0);
  t634[901ULL] = (int32_T)(t1254 != 0.0);
  t634[902ULL] = 1;
  t634[903ULL] = 1;
  t634[904ULL] = (int32_T)((t1264 * t1264 + 1.2620262729050631E-10 == t1264 *
    t1264 + 1.2620262729050631E-10) && (fabs(t1264 * t1264 +
    1.2620262729050631E-10) != pmf_get_inf()));
  t634[905ULL] = (int32_T)((!(t1264 * t1264 + 1.2620262729050631E-10 == t1264 *
    t1264 + 1.2620262729050631E-10)) || (!(fabs(t1264 * t1264 +
    1.2620262729050631E-10) != pmf_get_inf())) || (t1264 * t1264 +
    1.2620262729050631E-10 >= 0.0));
  t634[906ULL] = (int32_T)(t1265 != 0.0);
  t634[907ULL] = (int32_T)((!(t1265 != 0.0)) || (t1268 != 0.0));
  t634[908ULL] = (int32_T)(t1265 != 0.0);
  t634[909ULL] = 1;
  t634[910ULL] = (int32_T)(t1265 != 0.0);
  t634[911ULL] = 1;
  t634[912ULL] = 1;
  t634[913ULL] = 1;
  t634[914ULL] = (int32_T)((t1264 * t1264 + 1.2620262729050631E-10 == t1264 *
    t1264 + 1.2620262729050631E-10) && (fabs(t1264 * t1264 +
    1.2620262729050631E-10) != pmf_get_inf()));
  t634[915ULL] = (int32_T)((!(t1264 * t1264 + 1.2620262729050631E-10 == t1264 *
    t1264 + 1.2620262729050631E-10)) || (!(fabs(t1264 * t1264 +
    1.2620262729050631E-10) != pmf_get_inf())) || (t1264 * t1264 +
    1.2620262729050631E-10 >= 0.0));
  t634[916ULL] = (int32_T)(t1265 != 0.0);
  t634[917ULL] = (int32_T)((!(t1265 != 0.0)) || (t1269 != 0.0));
  t634[918ULL] = (int32_T)(t1265 != 0.0);
  t634[919ULL] = 1;
  t634[920ULL] = (int32_T)(t1265 != 0.0);
  t634[921ULL] = 1;
  t634[922ULL] = (int32_T)(t1270 != 0.0);
  t634[923ULL] = (int32_T)(t1275 * 0.00093750000000000007 != 0.0);
  t634[924ULL] = 1;
  t634[925ULL] = 1;
  t634[926ULL] = (int32_T)((t1264 * t1264 + 2.4102926357361849E-12 == t1264 *
    t1264 + 2.4102926357361849E-12) && (fabs(t1264 * t1264 +
    2.4102926357361849E-12) != pmf_get_inf()));
  t634[927ULL] = (int32_T)((!(t1264 * t1264 + 2.4102926357361849E-12 == t1264 *
    t1264 + 2.4102926357361849E-12)) || (!(fabs(t1264 * t1264 +
    2.4102926357361849E-12) != pmf_get_inf())) || (t1264 * t1264 +
    2.4102926357361849E-12 >= 0.0));
  t634[928ULL] = (int32_T)(t1277 != 0.0);
  t634[929ULL] = (int32_T)((!(t1277 != 0.0)) || (t1279 != 0.0));
  t634[930ULL] = (int32_T)(t1277 != 0.0);
  t634[931ULL] = 1;
  t634[932ULL] = (int32_T)(t1277 != 0.0);
  t634[933ULL] = 1;
  t634[934ULL] = 1;
  t634[935ULL] = 1;
  t634[936ULL] = (int32_T)((X[228ULL] * X[228ULL] + 2.4102926357361849E-12 == X
    [228ULL] * X[228ULL] + 2.4102926357361849E-12) && (fabs(X[228ULL] * X[228ULL]
    + 2.4102926357361849E-12) != pmf_get_inf()));
  t634[937ULL] = (int32_T)((!(X[228ULL] * X[228ULL] + 2.4102926357361849E-12 ==
    X[228ULL] * X[228ULL] + 2.4102926357361849E-12)) || (!(fabs(X[228ULL] * X
    [228ULL] + 2.4102926357361849E-12) != pmf_get_inf())) || (X[228ULL] * X
    [228ULL] + 2.4102926357361849E-12 >= 0.0));
  t634[938ULL] = (int32_T)(t1280 != 0.0);
  t634[939ULL] = (int32_T)((!(t1280 != 0.0)) || (t1281 != 0.0));
  t634[940ULL] = (int32_T)(t1280 != 0.0);
  t634[941ULL] = 1;
  t634[942ULL] = (int32_T)(t1280 != 0.0);
  t634[943ULL] = 1;
  t634[944ULL] = (int32_T)(t1283 != 0.0);
  t634[945ULL] = (int32_T)(t1276 != 0.0);
  t634[946ULL] = (int32_T)(X[32ULL] * t1291 != 0.0);
  t634[947ULL] = 1;
  t634[948ULL] = (int32_T)((!(1.0 - X[35ULL] >= -0.1)) || (((1.0 - X[35ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[35ULL] >= 0.01));
  t634[949ULL] = 1;
  t634[950ULL] = (int32_T)(t1289 != 0.0);
  t634[951ULL] = (int32_T)(X[33ULL] * 100000.0 > 0.0);
  t634[952ULL] = (int32_T)((!(X[33ULL] * 100000.0 > 0.0)) || (pmf_log(X[33ULL] *
    100000.0) - t639[0ULL] < 663.67513503334737));
  t634[953ULL] = 1;
  t634[954ULL] = (int32_T)((!(t1292 >= 1.0)) || ((t1292 - 1.0) * 461.523 + t1290
    != 0.0));
  t634[955ULL] = (int32_T)(t1293 * 0.01 != 0.0);
  t634[956ULL] = 1;
  t634[957ULL] = 1;
  t634[958ULL] = 1;
  t634[959ULL] = 1;
  t634[960ULL] = 1;
  t634[961ULL] = 1;
  t634[962ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[963ULL] = 1;
  t634[964ULL] = 1;
  t634[965ULL] = 1;
  t634[966ULL] = 1;
  t634[967ULL] = 1;
  t634[968ULL] = (int32_T)((X[263ULL] * X[263ULL] + 1.8324100759713822E-12 == X
    [263ULL] * X[263ULL] + 1.8324100759713822E-12) && (fabs(X[263ULL] * X[263ULL]
    + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[969ULL] = (int32_T)((!(X[263ULL] * X[263ULL] + 1.8324100759713822E-12 ==
    X[263ULL] * X[263ULL] + 1.8324100759713822E-12)) || (!(fabs(X[263ULL] * X
    [263ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[263ULL] * X
    [263ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[970ULL] = 1;
  t634[971ULL] = 1;
  t634[972ULL] = (int32_T)((X[263ULL] * X[263ULL] + 2.0914103314136477E-13 == X
    [263ULL] * X[263ULL] + 2.0914103314136477E-13) && (fabs(X[263ULL] * X[263ULL]
    + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[973ULL] = (int32_T)((!(X[263ULL] * X[263ULL] + 2.0914103314136477E-13 ==
    X[263ULL] * X[263ULL] + 2.0914103314136477E-13)) || (!(fabs(X[263ULL] * X
    [263ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[263ULL] * X
    [263ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[974ULL] = 1;
  t634[975ULL] = 1;
  t634[976ULL] = (int32_T)((X[263ULL] * X[263ULL] + 1.4768645655431184E-13 == X
    [263ULL] * X[263ULL] + 1.4768645655431184E-13) && (fabs(X[263ULL] * X[263ULL]
    + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[977ULL] = (int32_T)((!(X[263ULL] * X[263ULL] + 1.4768645655431184E-13 ==
    X[263ULL] * X[263ULL] + 1.4768645655431184E-13)) || (!(fabs(X[263ULL] * X
    [263ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[263ULL] * X
    [263ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[978ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[979ULL] = 1;
  t634[980ULL] = 1;
  t634[981ULL] = 1;
  t634[982ULL] = 1;
  t634[983ULL] = 1;
  t634[984ULL] = (int32_T)((t1295 * t1295 + 1.8324100759713822E-12 == t1295 *
    t1295 + 1.8324100759713822E-12) && (fabs(t1295 * t1295 +
    1.8324100759713822E-12) != pmf_get_inf()));
  t634[985ULL] = (int32_T)((!(t1295 * t1295 + 1.8324100759713822E-12 == t1295 *
    t1295 + 1.8324100759713822E-12)) || (!(fabs(t1295 * t1295 +
    1.8324100759713822E-12) != pmf_get_inf())) || (t1295 * t1295 +
    1.8324100759713822E-12 >= 0.0));
  t634[986ULL] = 1;
  t634[987ULL] = 1;
  t634[988ULL] = (int32_T)((t1295 * t1295 + 2.0914103314136477E-13 == t1295 *
    t1295 + 2.0914103314136477E-13) && (fabs(t1295 * t1295 +
    2.0914103314136477E-13) != pmf_get_inf()));
  t634[989ULL] = (int32_T)((!(t1295 * t1295 + 2.0914103314136477E-13 == t1295 *
    t1295 + 2.0914103314136477E-13)) || (!(fabs(t1295 * t1295 +
    2.0914103314136477E-13) != pmf_get_inf())) || (t1295 * t1295 +
    2.0914103314136477E-13 >= 0.0));
  t634[990ULL] = 1;
  t634[991ULL] = 1;
  t634[992ULL] = (int32_T)((t1295 * t1295 + 1.4768645655431184E-13 == t1295 *
    t1295 + 1.4768645655431184E-13) && (fabs(t1295 * t1295 +
    1.4768645655431184E-13) != pmf_get_inf()));
  t634[993ULL] = (int32_T)((!(t1295 * t1295 + 1.4768645655431184E-13 == t1295 *
    t1295 + 1.4768645655431184E-13)) || (!(fabs(t1295 * t1295 +
    1.4768645655431184E-13) != pmf_get_inf())) || (t1295 * t1295 +
    1.4768645655431184E-13 >= 0.0));
  t634[994ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[995ULL] = 1;
  t634[996ULL] = 1;
  t634[997ULL] = 1;
  t634[998ULL] = 1;
  t634[999ULL] = 1;
  t634[1000ULL] = (int32_T)((X[272ULL] * X[272ULL] + 1.8324100759713822E-12 ==
    X[272ULL] * X[272ULL] + 1.8324100759713822E-12) && (fabs(X[272ULL] * X
    [272ULL] + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[1001ULL] = (int32_T)((!(X[272ULL] * X[272ULL] + 1.8324100759713822E-12 ==
    X[272ULL] * X[272ULL] + 1.8324100759713822E-12)) || (!(fabs(X[272ULL] * X
    [272ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[272ULL] * X
    [272ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[1002ULL] = 1;
  t634[1003ULL] = 1;
  t634[1004ULL] = (int32_T)((X[272ULL] * X[272ULL] + 2.0914103314136477E-13 ==
    X[272ULL] * X[272ULL] + 2.0914103314136477E-13) && (fabs(X[272ULL] * X
    [272ULL] + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[1005ULL] = (int32_T)((!(X[272ULL] * X[272ULL] + 2.0914103314136477E-13 ==
    X[272ULL] * X[272ULL] + 2.0914103314136477E-13)) || (!(fabs(X[272ULL] * X
    [272ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[272ULL] * X
    [272ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[1006ULL] = 1;
  t634[1007ULL] = 1;
  t634[1008ULL] = (int32_T)((X[272ULL] * X[272ULL] + 1.4768645655431184E-13 ==
    X[272ULL] * X[272ULL] + 1.4768645655431184E-13) && (fabs(X[272ULL] * X
    [272ULL] + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[1009ULL] = (int32_T)((!(X[272ULL] * X[272ULL] + 1.4768645655431184E-13 ==
    X[272ULL] * X[272ULL] + 1.4768645655431184E-13)) || (!(fabs(X[272ULL] * X
    [272ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[272ULL] * X
    [272ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[1010ULL] = (int32_T)(X[123ULL] != 0.0);
  t634[1011ULL] = 1;
  t634[1012ULL] = 1;
  t634[1013ULL] = 1;
  t634[1014ULL] = 1;
  t634[1015ULL] = 1;
  t634[1016ULL] = (int32_T)((t1295 * t1295 + 1.8324100759713822E-12 == t1295 *
    t1295 + 1.8324100759713822E-12) && (fabs(t1295 * t1295 +
    1.8324100759713822E-12) != pmf_get_inf()));
  t634[1017ULL] = (int32_T)((!(t1295 * t1295 + 1.8324100759713822E-12 == t1295 *
    t1295 + 1.8324100759713822E-12)) || (!(fabs(t1295 * t1295 +
    1.8324100759713822E-12) != pmf_get_inf())) || (t1295 * t1295 +
    1.8324100759713822E-12 >= 0.0));
  t634[1018ULL] = 1;
  t634[1019ULL] = 1;
  t634[1020ULL] = (int32_T)((t1295 * t1295 + 2.0914103314136477E-13 == t1295 *
    t1295 + 2.0914103314136477E-13) && (fabs(t1295 * t1295 +
    2.0914103314136477E-13) != pmf_get_inf()));
  t634[1021ULL] = (int32_T)((!(t1295 * t1295 + 2.0914103314136477E-13 == t1295 *
    t1295 + 2.0914103314136477E-13)) || (!(fabs(t1295 * t1295 +
    2.0914103314136477E-13) != pmf_get_inf())) || (t1295 * t1295 +
    2.0914103314136477E-13 >= 0.0));
  t634[1022ULL] = 1;
  t634[1023ULL] = 1;
  t634[1024ULL] = (int32_T)((t1295 * t1295 + 1.4768645655431184E-13 == t1295 *
    t1295 + 1.4768645655431184E-13) && (fabs(t1295 * t1295 +
    1.4768645655431184E-13) != pmf_get_inf()));
  t634[1025ULL] = (int32_T)((!(t1295 * t1295 + 1.4768645655431184E-13 == t1295 *
    t1295 + 1.4768645655431184E-13)) || (!(fabs(t1295 * t1295 +
    1.4768645655431184E-13) != pmf_get_inf())) || (t1295 * t1295 +
    1.4768645655431184E-13 >= 0.0));
  t634[1026ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[1027ULL] = 1;
  t634[1028ULL] = 1;
  t634[1029ULL] = 1;
  t634[1030ULL] = 1;
  t634[1031ULL] = 1;
  t634[1032ULL] = (int32_T)((t1295 * t1295 + 1.8324100759713822E-12 == t1295 *
    t1295 + 1.8324100759713822E-12) && (fabs(t1295 * t1295 +
    1.8324100759713822E-12) != pmf_get_inf()));
  t634[1033ULL] = (int32_T)((!(t1295 * t1295 + 1.8324100759713822E-12 == t1295 *
    t1295 + 1.8324100759713822E-12)) || (!(fabs(t1295 * t1295 +
    1.8324100759713822E-12) != pmf_get_inf())) || (t1295 * t1295 +
    1.8324100759713822E-12 >= 0.0));
  t634[1034ULL] = 1;
  t634[1035ULL] = 1;
  t634[1036ULL] = (int32_T)((t1295 * t1295 + 2.0914103314136477E-13 == t1295 *
    t1295 + 2.0914103314136477E-13) && (fabs(t1295 * t1295 +
    2.0914103314136477E-13) != pmf_get_inf()));
  t634[1037ULL] = (int32_T)((!(t1295 * t1295 + 2.0914103314136477E-13 == t1295 *
    t1295 + 2.0914103314136477E-13)) || (!(fabs(t1295 * t1295 +
    2.0914103314136477E-13) != pmf_get_inf())) || (t1295 * t1295 +
    2.0914103314136477E-13 >= 0.0));
  t634[1038ULL] = 1;
  t634[1039ULL] = 1;
  t634[1040ULL] = (int32_T)((t1295 * t1295 + 1.4768645655431184E-13 == t1295 *
    t1295 + 1.4768645655431184E-13) && (fabs(t1295 * t1295 +
    1.4768645655431184E-13) != pmf_get_inf()));
  t634[1041ULL] = (int32_T)((!(t1295 * t1295 + 1.4768645655431184E-13 == t1295 *
    t1295 + 1.4768645655431184E-13)) || (!(fabs(t1295 * t1295 +
    1.4768645655431184E-13) != pmf_get_inf())) || (t1295 * t1295 +
    1.4768645655431184E-13 >= 0.0));
  t634[1042ULL] = (int32_T)(X[123ULL] != 0.0);
  t634[1043ULL] = 1;
  t634[1044ULL] = 1;
  t634[1045ULL] = 1;
  t634[1046ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[1047ULL] = 1;
  t634[1048ULL] = 1;
  t634[1049ULL] = 1;
  t634[1050ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[1051ULL] = 1;
  t634[1052ULL] = 1;
  t634[1053ULL] = 1;
  t634[1054ULL] = (int32_T)(X[123ULL] != 0.0);
  t634[1055ULL] = 1;
  t634[1056ULL] = 1;
  t634[1057ULL] = 1;
  t634[1058ULL] = (int32_T)(X[36ULL] * t1301 != 0.0);
  t634[1059ULL] = 1;
  t634[1060ULL] = (int32_T)((!(1.0 - X[39ULL] >= -0.1)) || (((1.0 - X[39ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[39ULL] >= 0.01));
  t634[1061ULL] = 1;
  t634[1062ULL] = (int32_T)(t1299 != 0.0);
  t634[1063ULL] = (int32_T)(X[37ULL] * 100000.0 > 0.0);
  t634[1064ULL] = (int32_T)((!(X[37ULL] * 100000.0 > 0.0)) || (pmf_log(X[37ULL] *
    100000.0) - t638[0ULL] < 663.67513503334737));
  t634[1065ULL] = 1;
  t634[1066ULL] = (int32_T)((!(t1303 >= 1.0)) || ((t1303 - 1.0) * 461.523 +
    t1300 != 0.0));
  t634[1067ULL] = (int32_T)(t1305 * 0.01 != 0.0);
  t634[1068ULL] = 1;
  t634[1069ULL] = 1;
  t634[1070ULL] = 1;
  t634[1071ULL] = 1;
  t634[1072ULL] = 1;
  t634[1073ULL] = 1;
  t634[1074ULL] = (int32_T)(X[37ULL] != 0.0);
  t634[1075ULL] = 1;
  t634[1076ULL] = 1;
  t634[1077ULL] = 1;
  t634[1078ULL] = 1;
  t634[1079ULL] = 1;
  t634[1080ULL] = (int32_T)((X[293ULL] * X[293ULL] + 1.8324100759713822E-12 ==
    X[293ULL] * X[293ULL] + 1.8324100759713822E-12) && (fabs(X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[1081ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 1.8324100759713822E-12 ==
    X[293ULL] * X[293ULL] + 1.8324100759713822E-12)) || (!(fabs(X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[1082ULL] = 1;
  t634[1083ULL] = 1;
  t634[1084ULL] = (int32_T)((X[293ULL] * X[293ULL] + 2.0914103314136477E-13 ==
    X[293ULL] * X[293ULL] + 2.0914103314136477E-13) && (fabs(X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[1085ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 2.0914103314136477E-13 ==
    X[293ULL] * X[293ULL] + 2.0914103314136477E-13)) || (!(fabs(X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[1086ULL] = 1;
  t634[1087ULL] = 1;
  t634[1088ULL] = (int32_T)((X[293ULL] * X[293ULL] + 1.4768645655431184E-13 ==
    X[293ULL] * X[293ULL] + 1.4768645655431184E-13) && (fabs(X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[1089ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 1.4768645655431184E-13 ==
    X[293ULL] * X[293ULL] + 1.4768645655431184E-13)) || (!(fabs(X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[1090ULL] = (int32_T)(X[41ULL] != 0.0);
  t634[1091ULL] = (int32_T)(X[304ULL] != 0.0);
  t634[1092ULL] = 1;
  t634[1093ULL] = 1;
  t634[1094ULL] = 1;
  t634[1095ULL] = (int32_T)(t1315 - t1312 != 0.0);
  t634[1096ULL] = 1;
  t634[1097ULL] = 1;
  t634[1098ULL] = (int32_T)((t1313 * t1313 * 9.999999999999999E-14 + fabs(X
    [303ULL] * t1316 * t1312) * 1.0E-9 == t1313 * t1313 * 9.999999999999999E-14
    + fabs(X[303ULL] * t1316 * t1312) * 1.0E-9) && (fabs(t1313 * t1313 *
    9.999999999999999E-14 + fabs(X[303ULL] * t1316 * t1312) * 1.0E-9) !=
    pmf_get_inf()));
  t634[1099ULL] = (int32_T)((!(t1313 * t1313 * 9.999999999999999E-14 + fabs(X
    [303ULL] * t1316 * t1312) * 1.0E-9 == t1313 * t1313 * 9.999999999999999E-14
    + fabs(X[303ULL] * t1316 * t1312) * 1.0E-9)) || (!(fabs(t1313 * t1313 *
    9.999999999999999E-14 + fabs(X[303ULL] * t1316 * t1312) * 1.0E-9) !=
    pmf_get_inf())) || (t1313 * t1313 * 9.999999999999999E-14 + fabs(X[303ULL] *
    t1316 * t1312) * 1.0E-9 >= 0.0));
  t634[1100ULL] = 1;
  t634[1101ULL] = 1;
  t634[1102ULL] = (int32_T)(t1312 != 0.0);
  t634[1103ULL] = (int32_T)((!(t1312 != 0.0)) || (X[303ULL] != 0.0));
  t634[1104ULL] = 1;
  t634[1105ULL] = (int32_T)((!(t1312 != 0.0)) || ((t1312 != 0.0) && (!(X[303ULL]
    != 0.0))) || (fabs(t1373 / (t1312 == 0.0 ? 1.0E-16 : t1312) / (X[303ULL] ==
    0.0 ? 1.0E-16 : X[303ULL])) >= 0.0));
  t634[1106ULL] = (int32_T)(t1322 * 7.8539816339744827E-5 != 0.0);
  t634[1107ULL] = (int32_T)(X[40ULL] * t1312 != 0.0);
  t634[1108ULL] = (int32_T)(t1326 * 1.5707963267948965E-8 != 0.0);
  t634[1109ULL] = (int32_T)(t1330 != 0.0);
  t634[1110ULL] = (int32_T)((!(t1330 != 0.0)) || (6.9 / (t1330 == 0.0 ? 1.0E-16 :
    t1330) + 0.00017169489553429715 > 0.0));
  t634[1111ULL] = 1;
  t634[1112ULL] = 1;
  t634[1113ULL] = (int32_T)((!(t1330 != 0.0)) || ((t1330 != 0.0) && (!(6.9 /
    (t1330 == 0.0 ? 1.0E-16 : t1330) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1330 == 0.0 ? 1.0E-16 : t1330) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1330 == 0.0 ? 1.0E-16 : t1330) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1114ULL] = (int32_T)(t1326 * 1.2337005501361697E-10 != 0.0);
  t634[1115ULL] = 1;
  t634[1116ULL] = 1;
  t634[1117ULL] = 1;
  t634[1118ULL] = 1;
  t634[1119ULL] = (int32_T)(X[41ULL] != 0.0);
  t634[1120ULL] = (int32_T)(X[308ULL] != 0.0);
  t634[1121ULL] = 1;
  t634[1122ULL] = 1;
  t634[1123ULL] = 1;
  t634[1124ULL] = (int32_T)(t1329 - t1312 != 0.0);
  t634[1125ULL] = 1;
  t634[1126ULL] = 1;
  t634[1127ULL] = (int32_T)
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9 ==
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9) && (fabs
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
       9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9) !=
      pmf_get_inf()));
  t634[1128ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
        9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9 ==
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
        9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9)) ||
     (!(fabs(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
             9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9)
        != pmf_get_inf())) ||
     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[307ULL] * t1309 * t1312) * 1.0E-9 >= 0.0));
  t634[1129ULL] = 1;
  t634[1130ULL] = 1;
  t634[1131ULL] = (int32_T)(t1312 != 0.0);
  t634[1132ULL] = (int32_T)((!(t1312 != 0.0)) || (X[307ULL] != 0.0));
  t634[1133ULL] = 1;
  t634[1134ULL] = (int32_T)((!(t1312 != 0.0)) || ((t1312 != 0.0) && (!(X[307ULL]
    != 0.0))) || (fabs(t1393 / (t1312 == 0.0 ? 1.0E-16 : t1312) / (X[307ULL] ==
    0.0 ? 1.0E-16 : X[307ULL])) >= 0.0));
  t634[1135ULL] = (int32_T)(t1322 * 7.8539816339744827E-5 != 0.0);
  t634[1136ULL] = (int32_T)(t1326 * 1.5707963267948965E-8 != 0.0);
  t634[1137ULL] = (int32_T)(t1335 != 0.0);
  t634[1138ULL] = (int32_T)((!(t1335 != 0.0)) || (6.9 / (t1335 == 0.0 ? 1.0E-16 :
    t1335) + 0.00017169489553429715 > 0.0));
  t634[1139ULL] = 1;
  t634[1140ULL] = 1;
  t634[1141ULL] = (int32_T)((!(t1335 != 0.0)) || ((t1335 != 0.0) && (!(6.9 /
    (t1335 == 0.0 ? 1.0E-16 : t1335) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1335 == 0.0 ? 1.0E-16 : t1335) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1335 == 0.0 ? 1.0E-16 : t1335) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1142ULL] = (int32_T)(t1326 * 1.2337005501361697E-10 != 0.0);
  t634[1143ULL] = 1;
  t634[1144ULL] = 1;
  t634[1145ULL] = 1;
  t634[1146ULL] = 1;
  t634[1147ULL] = (int32_T)(t1323 != 0.0);
  t634[1148ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_mdot_B_choked != 0.0);
  t634[1149ULL] = 1;
  t634[1150ULL] = (int32_T)((!(1.0 - X[42ULL] >= -0.1)) || (((1.0 - X[42ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[42ULL] >= 0.01));
  t634[1151ULL] = 1;
  t634[1152ULL] = (int32_T)(t1333 != 0.0);
  t634[1153ULL] = (int32_T)(X[41ULL] * 100000.0 > 0.0);
  t634[1154ULL] = (int32_T)((!(X[41ULL] * 100000.0 > 0.0)) || (pmf_log(X[41ULL] *
    100000.0) - t637[0ULL] < 663.67513503334737));
  t634[1155ULL] = 1;
  t634[1156ULL] = (int32_T)((!(t1336 >= 1.0)) || ((t1336 - 1.0) * 461.523 +
    t1334 != 0.0));
  t634[1157ULL] = (int32_T)(t1337 * 0.01 != 0.0);
  t634[1158ULL] = 1;
  t634[1159ULL] = 1;
  t634[1160ULL] = 1;
  t634[1161ULL] = 1;
  t634[1162ULL] = (int32_T)(t1341 != 0.0);
  t634[1163ULL] = (int32_T)(t1411 / 2.0 * 7.8539816339744827E-5 != 0.0);
  t634[1164ULL] = 1;
  t634[1165ULL] = (int32_T)(t1320 != 0.0);
  t634[1166ULL] = (int32_T)((!(t1320 != 0.0)) || (6.9 / (t1320 == 0.0 ? 1.0E-16 :
    t1320) + 0.00017169489553429715 > 0.0));
  t634[1167ULL] = 1;
  t634[1168ULL] = 1;
  t634[1169ULL] = (int32_T)((!(t1320 != 0.0)) || ((t1320 != 0.0) && (!(6.9 /
    (t1320 == 0.0 ? 1.0E-16 : t1320) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1320 == 0.0 ? 1.0E-16 : t1320) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1320 == 0.0 ? 1.0E-16 : t1320) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1170ULL] = (int32_T)((t1345 / 8.0 == t1345 / 8.0) && (fabs(t1345 / 8.0)
    != pmf_get_inf()));
  t634[1171ULL] = (int32_T)((!(t1345 / 8.0 == t1345 / 8.0)) || (!(fabs(t1345 /
    8.0) != pmf_get_inf())) || (t1345 / 8.0 >= 0.0));
  t634[1172ULL] = 1;
  t634[1173ULL] = (int32_T)(intrm_sf_mf_720 >= 0.0);
  t634[1174ULL] = (int32_T)((!(t1345 / 8.0 == t1345 / 8.0)) || (!(fabs(t1345 /
    8.0) != pmf_get_inf())) || ((t1345 / 8.0 == t1345 / 8.0) && (fabs(t1345 /
    8.0) != pmf_get_inf()) && (!(t1345 / 8.0 >= 0.0))) || (!(intrm_sf_mf_720 >=
    0.0)) || ((pmf_pow(intrm_sf_mf_720, 0.66666666666666663) - 1.0) * pmf_sqrt
              (t1345 / 8.0) * 12.7 + 1.0 != 0.0));
  t634[1175ULL] = 1;
  t634[1176ULL] = 1;
  t634[1177ULL] = 1;
  t634[1178ULL] = 1;
  t634[1179ULL] = (int32_T)(t1414 / 2.0 != 0.0);
  t634[1180ULL] = 1;
  t2357 = t1414 / 2.0;
  t634[1181ULL] = (int32_T)((!(t1340 > t1420 / 7.8539816339744827E-5 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1340 != 0.0));
  t634[1182ULL] = 1;
  t634[1183ULL] = 1;
  t2357 = t1414 / 2.0;
  t634[1184ULL] = (int32_T)((!(t1340 > t1420 / 7.8539816339744827E-5 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1340 != 0.0)) || (t1414 / 2.0 != 0.0));
  t634[1185ULL] = (int32_T)(-t1346 < 663.67513503334737);
  t634[1186ULL] = (int32_T)(t1350 != 0.0);
  t634[1187ULL] = (int32_T)(t1432 / 2.0 * 7.8539816339744827E-5 != 0.0);
  t634[1188ULL] = 1;
  t634[1189ULL] = (int32_T)(t1319 != 0.0);
  t634[1190ULL] = (int32_T)((!(t1319 != 0.0)) || (6.9 / (t1319 == 0.0 ? 1.0E-16 :
    t1319) + 0.00017169489553429715 > 0.0));
  t634[1191ULL] = 1;
  t634[1192ULL] = 1;
  t634[1193ULL] = (int32_T)((!(t1319 != 0.0)) || ((t1319 != 0.0) && (!(6.9 /
    (t1319 == 0.0 ? 1.0E-16 : t1319) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1319 == 0.0 ? 1.0E-16 : t1319) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1319 == 0.0 ? 1.0E-16 : t1319) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1194ULL] = (int32_T)((t1352 / 8.0 == t1352 / 8.0) && (fabs(t1352 / 8.0)
    != pmf_get_inf()));
  t634[1195ULL] = (int32_T)((!(t1352 / 8.0 == t1352 / 8.0)) || (!(fabs(t1352 /
    8.0) != pmf_get_inf())) || (t1352 / 8.0 >= 0.0));
  t634[1196ULL] = 1;
  t634[1197ULL] = (int32_T)(t1351 >= 0.0);
  t634[1198ULL] = (int32_T)((!(t1352 / 8.0 == t1352 / 8.0)) || (!(fabs(t1352 /
    8.0) != pmf_get_inf())) || ((t1352 / 8.0 == t1352 / 8.0) && (fabs(t1352 /
    8.0) != pmf_get_inf()) && (!(t1352 / 8.0 >= 0.0))) || (!(t1351 >= 0.0)) ||
    ((pmf_pow(t1351, 0.66666666666666663) - 1.0) * pmf_sqrt(t1352 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[1199ULL] = 1;
  t634[1200ULL] = 1;
  t634[1201ULL] = 1;
  t634[1202ULL] = 1;
  t634[1203ULL] = (int32_T)(t1435 / 2.0 != 0.0);
  t634[1204ULL] = 1;
  t2357 = t1435 / 2.0;
  t634[1205ULL] = (int32_T)((!(t1347 > t1441 / 7.8539816339744827E-5 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1347 != 0.0));
  t634[1206ULL] = 1;
  t634[1207ULL] = 1;
  t2357 = t1435 / 2.0;
  t634[1208ULL] = (int32_T)((!(t1347 > t1441 / 7.8539816339744827E-5 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1347 != 0.0)) || (t1435 / 2.0 != 0.0));
  t634[1209ULL] = (int32_T)(-t1353 < 663.67513503334737);
  t634[1210ULL] = 1;
  t634[1211ULL] = 1;
  t634[1212ULL] = (int32_T)(X[300ULL] != 0.0);
  t634[1213ULL] = 1;
  t634[1214ULL] = 1;
  t634[1215ULL] = 1;
  t634[1216ULL] = 1;
  t634[1217ULL] = 1;
  t634[1218ULL] = (int32_T)((X[293ULL] * X[293ULL] + 2.0360111955237585E-13 ==
    X[293ULL] * X[293ULL] + 2.0360111955237585E-13) && (fabs(X[293ULL] * X
    [293ULL] + 2.0360111955237585E-13) != pmf_get_inf()));
  t634[1219ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 2.0360111955237585E-13 ==
    X[293ULL] * X[293ULL] + 2.0360111955237585E-13)) || (!(fabs(X[293ULL] * X
    [293ULL] + 2.0360111955237585E-13) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 2.0360111955237585E-13 >= 0.0));
  t634[1220ULL] = 1;
  t634[1221ULL] = 1;
  t634[1222ULL] = (int32_T)((X[293ULL] * X[293ULL] + 2.3237892571262758E-14 ==
    X[293ULL] * X[293ULL] + 2.3237892571262758E-14) && (fabs(X[293ULL] * X
    [293ULL] + 2.3237892571262758E-14) != pmf_get_inf()));
  t634[1223ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 2.3237892571262758E-14 ==
    X[293ULL] * X[293ULL] + 2.3237892571262758E-14)) || (!(fabs(X[293ULL] * X
    [293ULL] + 2.3237892571262758E-14) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 2.3237892571262758E-14 >= 0.0));
  t634[1224ULL] = 1;
  t634[1225ULL] = 1;
  t634[1226ULL] = (int32_T)((X[293ULL] * X[293ULL] + 1.6409606283812424E-14 ==
    X[293ULL] * X[293ULL] + 1.6409606283812424E-14) && (fabs(X[293ULL] * X
    [293ULL] + 1.6409606283812424E-14) != pmf_get_inf()));
  t634[1227ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 1.6409606283812424E-14 ==
    X[293ULL] * X[293ULL] + 1.6409606283812424E-14)) || (!(fabs(X[293ULL] * X
    [293ULL] + 1.6409606283812424E-14) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 1.6409606283812424E-14 >= 0.0));
  t634[1228ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[1229ULL] = 1;
  t634[1230ULL] = 1;
  t634[1231ULL] = 1;
  t634[1232ULL] = 1;
  t634[1233ULL] = 1;
  t634[1234ULL] = (int32_T)((X[263ULL] * X[263ULL] + 2.0360111955237585E-13 ==
    X[263ULL] * X[263ULL] + 2.0360111955237585E-13) && (fabs(X[263ULL] * X
    [263ULL] + 2.0360111955237585E-13) != pmf_get_inf()));
  t634[1235ULL] = (int32_T)((!(X[263ULL] * X[263ULL] + 2.0360111955237585E-13 ==
    X[263ULL] * X[263ULL] + 2.0360111955237585E-13)) || (!(fabs(X[263ULL] * X
    [263ULL] + 2.0360111955237585E-13) != pmf_get_inf())) || (X[263ULL] * X
    [263ULL] + 2.0360111955237585E-13 >= 0.0));
  t634[1236ULL] = 1;
  t634[1237ULL] = 1;
  t634[1238ULL] = (int32_T)((X[263ULL] * X[263ULL] + 2.3237892571262758E-14 ==
    X[263ULL] * X[263ULL] + 2.3237892571262758E-14) && (fabs(X[263ULL] * X
    [263ULL] + 2.3237892571262758E-14) != pmf_get_inf()));
  t634[1239ULL] = (int32_T)((!(X[263ULL] * X[263ULL] + 2.3237892571262758E-14 ==
    X[263ULL] * X[263ULL] + 2.3237892571262758E-14)) || (!(fabs(X[263ULL] * X
    [263ULL] + 2.3237892571262758E-14) != pmf_get_inf())) || (X[263ULL] * X
    [263ULL] + 2.3237892571262758E-14 >= 0.0));
  t634[1240ULL] = 1;
  t634[1241ULL] = 1;
  t634[1242ULL] = (int32_T)((X[263ULL] * X[263ULL] + 1.6409606283812424E-14 ==
    X[263ULL] * X[263ULL] + 1.6409606283812424E-14) && (fabs(X[263ULL] * X
    [263ULL] + 1.6409606283812424E-14) != pmf_get_inf()));
  t634[1243ULL] = (int32_T)((!(X[263ULL] * X[263ULL] + 1.6409606283812424E-14 ==
    X[263ULL] * X[263ULL] + 1.6409606283812424E-14)) || (!(fabs(X[263ULL] * X
    [263ULL] + 1.6409606283812424E-14) != pmf_get_inf())) || (X[263ULL] * X
    [263ULL] + 1.6409606283812424E-14 >= 0.0));
  t634[1244ULL] = (int32_T)(X[317ULL] * t1357 != 0.0);
  t634[1245ULL] = (int32_T)(X[37ULL] != 0.0);
  t634[1246ULL] = (int32_T)(X[317ULL] != 0.0);
  t634[1247ULL] = (int32_T)(X[300ULL] != 0.0);
  t634[1248ULL] = (int32_T)(X[317ULL] != 0.0);
  t634[1249ULL] = 1;
  t634[1250ULL] = (int32_T)((!(-X[293ULL] > 0.0)) || (t1354 != 0.0));
  t634[1251ULL] = 1;
  t634[1252ULL] = 1;
  t634[1253ULL] = 1;
  t634[1254ULL] = (int32_T)((!(-X[293ULL] > 0.0)) || (!(t1354 != 0.0)) || (t1358
    != 0.0));
  t634[1255ULL] = 1;
  t634[1256ULL] = (int32_T)((!(-X[293ULL] < 0.0)) || (-X[293ULL] > 0.0) ||
    (t1354 != 0.0));
  t634[1257ULL] = 1;
  t634[1258ULL] = 1;
  t634[1259ULL] = 1;
  t634[1260ULL] = (int32_T)((!(-X[293ULL] < 0.0)) || (!(t1354 != 0.0)) || (-X
    [293ULL] > 0.0) || (t1358 != 0.0));
  t634[1261ULL] = 1;
  t634[1262ULL] = 1;
  t634[1263ULL] = (int32_T)(t1362 != 0.0);
  t634[1264ULL] = 1;
  t634[1265ULL] = 1;
  t634[1266ULL] = 1;
  t634[1267ULL] = 1;
  t634[1268ULL] = 1;
  t634[1269ULL] = 1;
  t634[1270ULL] = 1;
  t634[1271ULL] = 1;
  t634[1272ULL] = 1;
  t634[1273ULL] = 1;
  t634[1274ULL] = (int32_T)(t1360 - t1357 != 0.0);
  t634[1275ULL] = 1;
  t634[1276ULL] = 1;
  t634[1277ULL] = (int32_T)(t1357 != 0.0);
  t634[1278ULL] = (int32_T)((!(t1357 != 0.0)) || (X[317ULL] != 0.0));
  t634[1279ULL] = 1;
  t634[1280ULL] = (int32_T)((!(t1357 != 0.0)) || ((t1357 != 0.0) && (!(X[317ULL]
    != 0.0))) || (fabs(t1465 / (t1357 == 0.0 ? 1.0E-16 : t1357) / (X[317ULL] ==
    0.0 ? 1.0E-16 : X[317ULL])) >= 0.0));
  t634[1281ULL] = (int32_T)((!(-X[293ULL] >= 0.0)) || (t1355 != 0.0));
  t634[1282ULL] = (int32_T)((-X[293ULL] >= 0.0) || (t1355 != 0.0));
  t634[1283ULL] = (int32_T)(X[37ULL] != 0.0);
  t634[1284ULL] = 1;
  t634[1285ULL] = 1;
  t634[1286ULL] = 1;
  t634[1287ULL] = 1;
  t634[1288ULL] = 1;
  t634[1289ULL] = (int32_T)((X[293ULL] * X[293ULL] + 1.8324100759713822E-12 ==
    X[293ULL] * X[293ULL] + 1.8324100759713822E-12) && (fabs(X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[1290ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 1.8324100759713822E-12 ==
    X[293ULL] * X[293ULL] + 1.8324100759713822E-12)) || (!(fabs(X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[1291ULL] = 1;
  t634[1292ULL] = 1;
  t634[1293ULL] = (int32_T)((X[293ULL] * X[293ULL] + 2.0914103314136477E-13 ==
    X[293ULL] * X[293ULL] + 2.0914103314136477E-13) && (fabs(X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[1294ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 2.0914103314136477E-13 ==
    X[293ULL] * X[293ULL] + 2.0914103314136477E-13)) || (!(fabs(X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[1295ULL] = 1;
  t634[1296ULL] = 1;
  t634[1297ULL] = (int32_T)((X[293ULL] * X[293ULL] + 1.4768645655431184E-13 ==
    X[293ULL] * X[293ULL] + 1.4768645655431184E-13) && (fabs(X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[1298ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 1.4768645655431184E-13 ==
    X[293ULL] * X[293ULL] + 1.4768645655431184E-13)) || (!(fabs(X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[1299ULL] = (int32_T)(X[300ULL] != 0.0);
  t634[1300ULL] = 1;
  t634[1301ULL] = 1;
  t634[1302ULL] = 1;
  t634[1303ULL] = 1;
  t634[1304ULL] = 1;
  t634[1305ULL] = (int32_T)((X[293ULL] * X[293ULL] + 1.8324100759713822E-12 ==
    X[293ULL] * X[293ULL] + 1.8324100759713822E-12) && (fabs(X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12) != pmf_get_inf()));
  t634[1306ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 1.8324100759713822E-12 ==
    X[293ULL] * X[293ULL] + 1.8324100759713822E-12)) || (!(fabs(X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 1.8324100759713822E-12 >= 0.0));
  t634[1307ULL] = 1;
  t634[1308ULL] = 1;
  t634[1309ULL] = (int32_T)((X[293ULL] * X[293ULL] + 2.0914103314136477E-13 ==
    X[293ULL] * X[293ULL] + 2.0914103314136477E-13) && (fabs(X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13) != pmf_get_inf()));
  t634[1310ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 2.0914103314136477E-13 ==
    X[293ULL] * X[293ULL] + 2.0914103314136477E-13)) || (!(fabs(X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 2.0914103314136477E-13 >= 0.0));
  t634[1311ULL] = 1;
  t634[1312ULL] = 1;
  t634[1313ULL] = (int32_T)((X[293ULL] * X[293ULL] + 1.4768645655431184E-13 ==
    X[293ULL] * X[293ULL] + 1.4768645655431184E-13) && (fabs(X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13) != pmf_get_inf()));
  t634[1314ULL] = (int32_T)((!(X[293ULL] * X[293ULL] + 1.4768645655431184E-13 ==
    X[293ULL] * X[293ULL] + 1.4768645655431184E-13)) || (!(fabs(X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13) != pmf_get_inf())) || (X[293ULL] * X
    [293ULL] + 1.4768645655431184E-13 >= 0.0));
  t634[1315ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 != 0.0);
  t634[1316ULL] = 1;
  t634[1317ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 != 0.0))
     || (fabs(t1358 * 2.0 /
              (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 ==
               0.0 ? 1.0E-16 :
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12))
         >= 0.0));
  t634[1318ULL] = 1;
  t634[1319ULL] = 1;
  t634[1320ULL] = 1;
  t634[1321ULL] = 1;
  t634[1322ULL] = 1;
  t634[1323ULL] = (int32_T)((X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12) && (fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[1324ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[1325ULL] = 1;
  t634[1326ULL] = 1;
  t634[1327ULL] = (int32_T)((X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12) && (fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[1328ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[1329ULL] = 1;
  t634[1330ULL] = 1;
  t634[1331ULL] = (int32_T)((X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12) && (fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[1332ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[1333ULL] = (int32_T)(t1363 * 293.15 != 0.0);
  t634[1334ULL] = 1;
  t634[1335ULL] = (int32_T)((!(1.0 - X[335ULL] >= -0.1)) || (((1.0 - X[335ULL])
    - 0.01) / 0.01 < 663.67513503334737) || (1.0 - X[335ULL] >= 0.01));
  t634[1336ULL] = 1;
  t634[1337ULL] = 1;
  t634[1338ULL] = 1;
  t634[1339ULL] = 1;
  t634[1340ULL] = 1;
  t634[1341ULL] = 1;
  t634[1342ULL] = (int32_T)((X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12) && (fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[1343ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[1344ULL] = 1;
  t634[1345ULL] = 1;
  t634[1346ULL] = (int32_T)((X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12) && (fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[1347ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[1348ULL] = 1;
  t634[1349ULL] = 1;
  t634[1350ULL] = (int32_T)((X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12) && (fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[1351ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[1352ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[1353ULL] = 1;
  t634[1354ULL] = 1;
  t634[1355ULL] = 1;
  t634[1356ULL] = 1;
  t634[1357ULL] = 1;
  t634[1358ULL] = (int32_T)((X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12) && (fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[1359ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[1360ULL] = 1;
  t634[1361ULL] = 1;
  t634[1362ULL] = (int32_T)((X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12) && (fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[1363ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[1364ULL] = 1;
  t634[1365ULL] = 1;
  t634[1366ULL] = (int32_T)((X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12) && (fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[1367ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[1368ULL] = 1;
  t634[1369ULL] = 1;
  t634[1370ULL] = 1;
  t634[1371ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[1372ULL] = 1;
  t634[1373ULL] = 1;
  t634[1374ULL] = 1;
  t634[1375ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[1376ULL] = 1;
  t634[1377ULL] = 1;
  t634[1378ULL] = 1;
  t634[1379ULL] = 1;
  t634[1380ULL] = 1;
  t634[1381ULL] = 1;
  t634[1382ULL] = (int32_T)(X[45ULL] * t1364 != 0.0);
  t634[1383ULL] = 1;
  t634[1384ULL] = (int32_T)((!(1.0 - X[47ULL] >= -0.1)) || (((1.0 - X[47ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[47ULL] >= 0.01));
  t634[1385ULL] = 1;
  t634[1386ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_x_1 != 0.0);
  t634[1387ULL] = (int32_T)(X[44ULL] * 100000.0 > 0.0);
  t634[1388ULL] = (int32_T)((!(X[44ULL] * 100000.0 > 0.0)) || (pmf_log(X[44ULL] *
    100000.0) - t636[0ULL] < 663.67513503334737));
  t634[1389ULL] = 1;
  t634[1390ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w >= 1.0))
     || ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_p_w - 1.0)
         * 461.523 + t1361 != 0.0));
  t634[1391ULL] = (int32_T)(t1366 * 0.01 != 0.0);
  t634[1392ULL] = 1;
  t634[1393ULL] = 1;
  t634[1394ULL] = 1;
  t634[1395ULL] = 1;
  t634[1396ULL] = 1;
  t634[1397ULL] = 1;
  t634[1398ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[1399ULL] = 1;
  t634[1400ULL] = 1;
  t634[1401ULL] = 1;
  t634[1402ULL] = 1;
  t634[1403ULL] = 1;
  t634[1404ULL] = (int32_T)((X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12) && (fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[1405ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 2.7104677895120892E-12 ==
    X[330ULL] * X[330ULL] + 2.7104677895120892E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[1406ULL] = 1;
  t634[1407ULL] = 1;
  t634[1408ULL] = (int32_T)((X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12) && (fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[1409ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 5.2285258285341208E-12 ==
    X[330ULL] * X[330ULL] + 5.2285258285341208E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[1410ULL] = 1;
  t634[1411ULL] = 1;
  t634[1412ULL] = (int32_T)((X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12) && (fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[1413ULL] = (int32_T)((!(X[330ULL] * X[330ULL] + 3.6921614138577959E-12 ==
    X[330ULL] * X[330ULL] + 3.6921614138577959E-12)) || (!(fabs(X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[330ULL] * X
    [330ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[1414ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[1415ULL] = 1;
  t634[1416ULL] = 1;
  t634[1417ULL] = 1;
  t634[1418ULL] = 1;
  t634[1419ULL] = 1;
  t634[1420ULL] = (int32_T)((X[361ULL] * X[361ULL] + 2.7104677895120892E-12 ==
    X[361ULL] * X[361ULL] + 2.7104677895120892E-12) && (fabs(X[361ULL] * X
    [361ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[1421ULL] = (int32_T)((!(X[361ULL] * X[361ULL] + 2.7104677895120892E-12 ==
    X[361ULL] * X[361ULL] + 2.7104677895120892E-12)) || (!(fabs(X[361ULL] * X
    [361ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[361ULL] * X
    [361ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[1422ULL] = 1;
  t634[1423ULL] = 1;
  t634[1424ULL] = (int32_T)((X[361ULL] * X[361ULL] + 5.2285258285341208E-12 ==
    X[361ULL] * X[361ULL] + 5.2285258285341208E-12) && (fabs(X[361ULL] * X
    [361ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[1425ULL] = (int32_T)((!(X[361ULL] * X[361ULL] + 5.2285258285341208E-12 ==
    X[361ULL] * X[361ULL] + 5.2285258285341208E-12)) || (!(fabs(X[361ULL] * X
    [361ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[361ULL] * X
    [361ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[1426ULL] = 1;
  t634[1427ULL] = 1;
  t634[1428ULL] = (int32_T)((X[361ULL] * X[361ULL] + 3.6921614138577959E-12 ==
    X[361ULL] * X[361ULL] + 3.6921614138577959E-12) && (fabs(X[361ULL] * X
    [361ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[1429ULL] = (int32_T)((!(X[361ULL] * X[361ULL] + 3.6921614138577959E-12 ==
    X[361ULL] * X[361ULL] + 3.6921614138577959E-12)) || (!(fabs(X[361ULL] * X
    [361ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[361ULL] * X
    [361ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[1430ULL] = (int32_T)(X[51ULL] != 0.0);
  t634[1431ULL] = (int32_T)(X[383ULL] != 0.0);
  t634[1432ULL] = 1;
  t634[1433ULL] = 1;
  t634[1434ULL] = 1;
  t634[1435ULL] = (int32_T)(t1379 - t1372 != 0.0);
  t634[1436ULL] = 1;
  t634[1437ULL] = 1;
  t634[1438ULL] = (int32_T)((t1374 * t1374 * 9.999999999999999E-14 + fabs(X
    [382ULL] * t1051 * t1372) * 1.0E-9 == t1374 * t1374 * 9.999999999999999E-14
    + fabs(X[382ULL] * t1051 * t1372) * 1.0E-9) && (fabs(t1374 * t1374 *
    9.999999999999999E-14 + fabs(X[382ULL] * t1051 * t1372) * 1.0E-9) !=
    pmf_get_inf()));
  t634[1439ULL] = (int32_T)((!(t1374 * t1374 * 9.999999999999999E-14 + fabs(X
    [382ULL] * t1051 * t1372) * 1.0E-9 == t1374 * t1374 * 9.999999999999999E-14
    + fabs(X[382ULL] * t1051 * t1372) * 1.0E-9)) || (!(fabs(t1374 * t1374 *
    9.999999999999999E-14 + fabs(X[382ULL] * t1051 * t1372) * 1.0E-9) !=
    pmf_get_inf())) || (t1374 * t1374 * 9.999999999999999E-14 + fabs(X[382ULL] *
    t1051 * t1372) * 1.0E-9 >= 0.0));
  t634[1440ULL] = 1;
  t634[1441ULL] = 1;
  t634[1442ULL] = (int32_T)(t1372 != 0.0);
  t634[1443ULL] = (int32_T)((!(t1372 != 0.0)) || (X[382ULL] != 0.0));
  t634[1444ULL] = 1;
  t634[1445ULL] = (int32_T)((!(t1372 != 0.0)) || ((t1372 != 0.0) && (!(X[382ULL]
    != 0.0))) || (fabs(t1477 / (t1372 == 0.0 ? 1.0E-16 : t1372) / (X[382ULL] ==
    0.0 ? 1.0E-16 : X[382ULL])) >= 0.0));
  t634[1446ULL] = (int32_T)(t1384 * 0.0019634954084936209 != 0.0);
  t634[1447ULL] = (int32_T)(X[48ULL] * t1372 != 0.0);
  t634[1448ULL] = (int32_T)(t1391 * 9.8174770424681068E-6 != 0.0);
  t634[1449ULL] = (int32_T)(t1394 != 0.0);
  t634[1450ULL] = (int32_T)((!(t1394 != 0.0)) || (6.9 / (t1394 == 0.0 ? 1.0E-16 :
    t1394) + 2.8767404433520813E-5 > 0.0));
  t634[1451ULL] = 1;
  t634[1452ULL] = 1;
  t634[1453ULL] = (int32_T)((!(t1394 != 0.0)) || ((t1394 != 0.0) && (!(6.9 /
    (t1394 == 0.0 ? 1.0E-16 : t1394) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1394 == 0.0 ? 1.0E-16 : t1394) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1394 == 0.0 ? 1.0E-16 : t1394) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1454ULL] = (int32_T)(t1391 * 3.855314219175531E-7 != 0.0);
  t634[1455ULL] = 1;
  t634[1456ULL] = 1;
  t634[1457ULL] = 1;
  t634[1458ULL] = 1;
  t634[1459ULL] = (int32_T)(X[51ULL] != 0.0);
  t634[1460ULL] = (int32_T)(X[386ULL] != 0.0);
  t634[1461ULL] = 1;
  t634[1462ULL] = 1;
  t634[1463ULL] = 1;
  t634[1464ULL] = (int32_T)(t1392 - t1372 != 0.0);
  t634[1465ULL] = 1;
  t634[1466ULL] = 1;
  t634[1467ULL] = (int32_T)
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[385ULL] *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
      1.0E-9 == Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[385ULL] *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
      1.0E-9) && (fabs
                  (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI
                   * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI
                   * 9.999999999999999E-14 + fabs(X[385ULL] *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
                   1.0E-9) != pmf_get_inf()));
  t634[1468ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
        9.999999999999999E-14 + fabs(X[385ULL] *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
        1.0E-9 == Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI
        * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
        9.999999999999999E-14 + fabs(X[385ULL] *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
        1.0E-9)) || (!(fabs
                       (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI
                        * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI
                        * 9.999999999999999E-14 + fabs(X[385ULL] *
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
                        1.0E-9) != pmf_get_inf())) ||
     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[385ULL] *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_BI * t1372) *
      1.0E-9 >= 0.0));
  t634[1469ULL] = 1;
  t634[1470ULL] = 1;
  t634[1471ULL] = (int32_T)(t1372 != 0.0);
  t634[1472ULL] = (int32_T)((!(t1372 != 0.0)) || (X[385ULL] != 0.0));
  t634[1473ULL] = 1;
  t634[1474ULL] = (int32_T)((!(t1372 != 0.0)) || ((t1372 != 0.0) && (!(X[385ULL]
    != 0.0))) || (fabs(t1497 / (t1372 == 0.0 ? 1.0E-16 : t1372) / (X[385ULL] ==
    0.0 ? 1.0E-16 : X[385ULL])) >= 0.0));
  t634[1475ULL] = (int32_T)(t1384 * 0.0019634954084936209 != 0.0);
  t634[1476ULL] = (int32_T)(t1391 * 9.8174770424681068E-6 != 0.0);
  t634[1477ULL] = (int32_T)(t1403 != 0.0);
  t634[1478ULL] = (int32_T)((!(t1403 != 0.0)) || (6.9 / (t1403 == 0.0 ? 1.0E-16 :
    t1403) + 2.8767404433520813E-5 > 0.0));
  t634[1479ULL] = 1;
  t634[1480ULL] = 1;
  t634[1481ULL] = (int32_T)((!(t1403 != 0.0)) || ((t1403 != 0.0) && (!(6.9 /
    (t1403 == 0.0 ? 1.0E-16 : t1403) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1403 == 0.0 ? 1.0E-16 : t1403) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1403 == 0.0 ? 1.0E-16 : t1403) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1482ULL] = (int32_T)(t1391 * 3.855314219175531E-7 != 0.0);
  t634[1483ULL] = 1;
  t634[1484ULL] = 1;
  t634[1485ULL] = 1;
  t634[1486ULL] = 1;
  t634[1487ULL] = (int32_T)(t1385 != 0.0);
  t634[1488ULL] = (int32_T)(t1396 != 0.0);
  t634[1489ULL] = 1;
  t634[1490ULL] = (int32_T)((!(1.0 - X[50ULL] >= -0.1)) || (((1.0 - X[50ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[50ULL] >= 0.01));
  t634[1491ULL] = 1;
  t634[1492ULL] = (int32_T)(t1054 != 0.0);
  t634[1493ULL] = (int32_T)(X[51ULL] * 100000.0 > 0.0);
  t634[1494ULL] = (int32_T)((!(X[51ULL] * 100000.0 > 0.0)) || (pmf_log(X[51ULL] *
    100000.0) - t641[0ULL] < 663.67513503334737));
  t634[1495ULL] = 1;
  t634[1496ULL] = (int32_T)((!(t1404 >= 1.0)) || ((t1404 - 1.0) * 461.523 +
    t1401 != 0.0));
  t634[1497ULL] = (int32_T)(t1405 * 0.01 != 0.0);
  t634[1498ULL] = 1;
  t634[1499ULL] = 1;
  t634[1500ULL] = 1;
  t634[1501ULL] = 1;
  t634[1502ULL] = (int32_T)(t1410 != 0.0);
  t634[1503ULL] = (int32_T)(t1515 / 2.0 * 0.0019634954084936209 != 0.0);
  t634[1504ULL] = 1;
  t634[1505ULL] = (int32_T)(t1407 != 0.0);
  t634[1506ULL] = (int32_T)((!(t1407 != 0.0)) || (6.9 / (t1407 == 0.0 ? 1.0E-16 :
    t1407) + 2.8767404433520813E-5 > 0.0));
  t634[1507ULL] = 1;
  t634[1508ULL] = 1;
  t634[1509ULL] = (int32_T)((!(t1407 != 0.0)) || ((t1407 != 0.0) && (!(6.9 /
    (t1407 == 0.0 ? 1.0E-16 : t1407) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1407 == 0.0 ? 1.0E-16 : t1407) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1407 == 0.0 ? 1.0E-16 : t1407) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1510ULL] = (int32_T)((t1409 / 8.0 == t1409 / 8.0) && (fabs(t1409 / 8.0)
    != pmf_get_inf()));
  t634[1511ULL] = (int32_T)((!(t1409 / 8.0 == t1409 / 8.0)) || (!(fabs(t1409 /
    8.0) != pmf_get_inf())) || (t1409 / 8.0 >= 0.0));
  t634[1512ULL] = 1;
  t634[1513ULL] = (int32_T)(t1383 >= 0.0);
  t634[1514ULL] = (int32_T)((!(t1409 / 8.0 == t1409 / 8.0)) || (!(fabs(t1409 /
    8.0) != pmf_get_inf())) || ((t1409 / 8.0 == t1409 / 8.0) && (fabs(t1409 /
    8.0) != pmf_get_inf()) && (!(t1409 / 8.0 >= 0.0))) || (!(t1383 >= 0.0)) ||
    ((pmf_pow(t1383, 0.66666666666666663) - 1.0) * pmf_sqrt(t1409 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[1515ULL] = 1;
  t634[1516ULL] = 1;
  t634[1517ULL] = 1;
  t634[1518ULL] = 1;
  t634[1519ULL] = (int32_T)(t1518 / 2.0 != 0.0);
  t634[1520ULL] = 1;
  t2357 = t1518 / 2.0;
  t634[1521ULL] = (int32_T)((!(t1413 > t1524 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1413 != 0.0));
  t634[1522ULL] = 1;
  t634[1523ULL] = 1;
  t2357 = t1518 / 2.0;
  t634[1524ULL] = (int32_T)((!(t1413 > t1524 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1413 != 0.0)) || (t1518 / 2.0 != 0.0));
  t634[1525ULL] = (int32_T)(-intrm_sf_mf_1011 < 663.67513503334737);
  t634[1526ULL] = (int32_T)(t1418 != 0.0);
  t634[1527ULL] = (int32_T)(t1536 / 2.0 * 0.0019634954084936209 != 0.0);
  t634[1528ULL] = 1;
  t634[1529ULL] = (int32_T)(t1406 != 0.0);
  t634[1530ULL] = (int32_T)((!(t1406 != 0.0)) || (6.9 / (t1406 == 0.0 ? 1.0E-16 :
    t1406) + 2.8767404433520813E-5 > 0.0));
  t634[1531ULL] = 1;
  t634[1532ULL] = 1;
  t634[1533ULL] = (int32_T)((!(t1406 != 0.0)) || ((t1406 != 0.0) && (!(6.9 /
    (t1406 == 0.0 ? 1.0E-16 : t1406) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1406 == 0.0 ? 1.0E-16 : t1406) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1406 == 0.0 ? 1.0E-16 : t1406) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1534ULL] = (int32_T)((t1422 / 8.0 == t1422 / 8.0) && (fabs(t1422 / 8.0)
    != pmf_get_inf()));
  t634[1535ULL] = (int32_T)((!(t1422 / 8.0 == t1422 / 8.0)) || (!(fabs(t1422 /
    8.0) != pmf_get_inf())) || (t1422 / 8.0 >= 0.0));
  t634[1536ULL] = 1;
  t634[1537ULL] = (int32_T)(t1419 >= 0.0);
  t634[1538ULL] = (int32_T)((!(t1422 / 8.0 == t1422 / 8.0)) || (!(fabs(t1422 /
    8.0) != pmf_get_inf())) || ((t1422 / 8.0 == t1422 / 8.0) && (fabs(t1422 /
    8.0) != pmf_get_inf()) && (!(t1422 / 8.0 >= 0.0))) || (!(t1419 >= 0.0)) ||
    ((pmf_pow(t1419, 0.66666666666666663) - 1.0) * pmf_sqrt(t1422 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[1539ULL] = 1;
  t634[1540ULL] = 1;
  t634[1541ULL] = 1;
  t634[1542ULL] = 1;
  t634[1543ULL] = (int32_T)(t1539 / 2.0 != 0.0);
  t634[1544ULL] = 1;
  t2357 = t1539 / 2.0;
  t634[1545ULL] = (int32_T)((!(t1417 > t1545 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1417 != 0.0));
  t634[1546ULL] = 1;
  t634[1547ULL] = 1;
  t2357 = t1539 / 2.0;
  t634[1548ULL] = (int32_T)((!(t1417 > t1545 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1417 != 0.0)) || (t1539 / 2.0 != 0.0));
  t634[1549ULL] = (int32_T)(-t1423 < 663.67513503334737);
  t634[1550ULL] = 1;
  t634[1551ULL] = 1;
  t634[1552ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[1553ULL] = 1;
  t634[1554ULL] = 1;
  t634[1555ULL] = 1;
  t634[1556ULL] = 1;
  t634[1557ULL] = 1;
  t634[1558ULL] = (int32_T)((X[272ULL] * X[272ULL] + 5.0900279888093953E-12 ==
    X[272ULL] * X[272ULL] + 5.0900279888093953E-12) && (fabs(X[272ULL] * X
    [272ULL] + 5.0900279888093953E-12) != pmf_get_inf()));
  t634[1559ULL] = (int32_T)((!(X[272ULL] * X[272ULL] + 5.0900279888093953E-12 ==
    X[272ULL] * X[272ULL] + 5.0900279888093953E-12)) || (!(fabs(X[272ULL] * X
    [272ULL] + 5.0900279888093953E-12) != pmf_get_inf())) || (X[272ULL] * X
    [272ULL] + 5.0900279888093953E-12 >= 0.0));
  t634[1560ULL] = 1;
  t634[1561ULL] = 1;
  t634[1562ULL] = (int32_T)((X[272ULL] * X[272ULL] + 5.8094731428156895E-13 ==
    X[272ULL] * X[272ULL] + 5.8094731428156895E-13) && (fabs(X[272ULL] * X
    [272ULL] + 5.8094731428156895E-13) != pmf_get_inf()));
  t634[1563ULL] = (int32_T)((!(X[272ULL] * X[272ULL] + 5.8094731428156895E-13 ==
    X[272ULL] * X[272ULL] + 5.8094731428156895E-13)) || (!(fabs(X[272ULL] * X
    [272ULL] + 5.8094731428156895E-13) != pmf_get_inf())) || (X[272ULL] * X
    [272ULL] + 5.8094731428156895E-13 >= 0.0));
  t634[1564ULL] = 1;
  t634[1565ULL] = 1;
  t634[1566ULL] = (int32_T)((X[272ULL] * X[272ULL] + 4.1024015709531055E-13 ==
    X[272ULL] * X[272ULL] + 4.1024015709531055E-13) && (fabs(X[272ULL] * X
    [272ULL] + 4.1024015709531055E-13) != pmf_get_inf()));
  t634[1567ULL] = (int32_T)((!(X[272ULL] * X[272ULL] + 4.1024015709531055E-13 ==
    X[272ULL] * X[272ULL] + 4.1024015709531055E-13)) || (!(fabs(X[272ULL] * X
    [272ULL] + 4.1024015709531055E-13) != pmf_get_inf())) || (X[272ULL] * X
    [272ULL] + 4.1024015709531055E-13 >= 0.0));
  t634[1568ULL] = (int32_T)(X[372ULL] != 0.0);
  t634[1569ULL] = 1;
  t634[1570ULL] = 1;
  t634[1571ULL] = 1;
  t634[1572ULL] = 1;
  t634[1573ULL] = 1;
  t634[1574ULL] = (int32_T)((X[384ULL] * X[384ULL] + 5.0900279888093953E-12 ==
    X[384ULL] * X[384ULL] + 5.0900279888093953E-12) && (fabs(X[384ULL] * X
    [384ULL] + 5.0900279888093953E-12) != pmf_get_inf()));
  t634[1575ULL] = (int32_T)((!(X[384ULL] * X[384ULL] + 5.0900279888093953E-12 ==
    X[384ULL] * X[384ULL] + 5.0900279888093953E-12)) || (!(fabs(X[384ULL] * X
    [384ULL] + 5.0900279888093953E-12) != pmf_get_inf())) || (X[384ULL] * X
    [384ULL] + 5.0900279888093953E-12 >= 0.0));
  t634[1576ULL] = 1;
  t634[1577ULL] = 1;
  t634[1578ULL] = (int32_T)((X[384ULL] * X[384ULL] + 5.8094731428156895E-13 ==
    X[384ULL] * X[384ULL] + 5.8094731428156895E-13) && (fabs(X[384ULL] * X
    [384ULL] + 5.8094731428156895E-13) != pmf_get_inf()));
  t634[1579ULL] = (int32_T)((!(X[384ULL] * X[384ULL] + 5.8094731428156895E-13 ==
    X[384ULL] * X[384ULL] + 5.8094731428156895E-13)) || (!(fabs(X[384ULL] * X
    [384ULL] + 5.8094731428156895E-13) != pmf_get_inf())) || (X[384ULL] * X
    [384ULL] + 5.8094731428156895E-13 >= 0.0));
  t634[1580ULL] = 1;
  t634[1581ULL] = 1;
  t634[1582ULL] = (int32_T)((X[384ULL] * X[384ULL] + 4.1024015709531055E-13 ==
    X[384ULL] * X[384ULL] + 4.1024015709531055E-13) && (fabs(X[384ULL] * X
    [384ULL] + 4.1024015709531055E-13) != pmf_get_inf()));
  t634[1583ULL] = (int32_T)((!(X[384ULL] * X[384ULL] + 4.1024015709531055E-13 ==
    X[384ULL] * X[384ULL] + 4.1024015709531055E-13)) || (!(fabs(X[384ULL] * X
    [384ULL] + 4.1024015709531055E-13) != pmf_get_inf())) || (X[384ULL] * X
    [384ULL] + 4.1024015709531055E-13 >= 0.0));
  t634[1584ULL] = (int32_T)(X[52ULL] != 0.0);
  t634[1585ULL] = (int32_T)(X[397ULL] != 0.0);
  t634[1586ULL] = 1;
  t634[1587ULL] = 1;
  t634[1588ULL] = 1;
  t634[1589ULL] = (int32_T)(t1428 - t1425 != 0.0);
  t634[1590ULL] = 1;
  t634[1591ULL] = 1;
  t634[1592ULL] = (int32_T)((t1426 * t1426 * 9.999999999999999E-14 + fabs(X
    [396ULL] * t1429 * t1425) * 1.0E-9 == t1426 * t1426 * 9.999999999999999E-14
    + fabs(X[396ULL] * t1429 * t1425) * 1.0E-9) && (fabs(t1426 * t1426 *
    9.999999999999999E-14 + fabs(X[396ULL] * t1429 * t1425) * 1.0E-9) !=
    pmf_get_inf()));
  t634[1593ULL] = (int32_T)((!(t1426 * t1426 * 9.999999999999999E-14 + fabs(X
    [396ULL] * t1429 * t1425) * 1.0E-9 == t1426 * t1426 * 9.999999999999999E-14
    + fabs(X[396ULL] * t1429 * t1425) * 1.0E-9)) || (!(fabs(t1426 * t1426 *
    9.999999999999999E-14 + fabs(X[396ULL] * t1429 * t1425) * 1.0E-9) !=
    pmf_get_inf())) || (t1426 * t1426 * 9.999999999999999E-14 + fabs(X[396ULL] *
    t1429 * t1425) * 1.0E-9 >= 0.0));
  t634[1594ULL] = 1;
  t634[1595ULL] = 1;
  t634[1596ULL] = (int32_T)(t1425 != 0.0);
  t634[1597ULL] = (int32_T)((!(t1425 != 0.0)) || (X[396ULL] != 0.0));
  t634[1598ULL] = 1;
  t634[1599ULL] = (int32_T)((!(t1425 != 0.0)) || ((t1425 != 0.0) && (!(X[396ULL]
    != 0.0))) || (fabs(t1561 / (t1425 == 0.0 ? 1.0E-16 : t1425) / (X[396ULL] ==
    0.0 ? 1.0E-16 : X[396ULL])) >= 0.0));
  t634[1600ULL] = (int32_T)(t1434 * 0.32 != 0.0);
  t634[1601ULL] = (int32_T)(X[6ULL] * t1425 != 0.0);
  t634[1602ULL] = (int32_T)(t1439 * 6.4000000000000011E-5 != 0.0);
  t634[1603ULL] = (int32_T)(t1443 != 0.0);
  t634[1604ULL] = (int32_T)((!(t1443 != 0.0)) || (6.9 / (t1443 == 0.0 ? 1.0E-16 :
    t1443) + 0.00017169489553429715 > 0.0));
  t634[1605ULL] = 1;
  t634[1606ULL] = 1;
  t634[1607ULL] = (int32_T)((!(t1443 != 0.0)) || ((t1443 != 0.0) && (!(6.9 /
    (t1443 == 0.0 ? 1.0E-16 : t1443) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1443 == 0.0 ? 1.0E-16 : t1443) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1443 == 0.0 ? 1.0E-16 : t1443) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1608ULL] = (int32_T)(t1439 * 0.0020480000000000003 != 0.0);
  t634[1609ULL] = 1;
  t634[1610ULL] = 1;
  t634[1611ULL] = 1;
  t634[1612ULL] = 1;
  t634[1613ULL] = (int32_T)(X[52ULL] != 0.0);
  t634[1614ULL] = (int32_T)(X[400ULL] != 0.0);
  t634[1615ULL] = 1;
  t634[1616ULL] = 1;
  t634[1617ULL] = 1;
  t634[1618ULL] = (int32_T)(t1440 - t1425 != 0.0);
  t634[1619ULL] = 1;
  t634[1620ULL] = 1;
  t634[1621ULL] = (int32_T)((t1437 * t1437 * 9.999999999999999E-14 + fabs(X
    [399ULL] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    t1425) * 1.0E-9 == t1437 * t1437 * 9.999999999999999E-14 + fabs(X[399ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1425) * 1.0E-9)
    && (fabs(t1437 * t1437 * 9.999999999999999E-14 + fabs(X[399ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1425) * 1.0E-9)
        != pmf_get_inf()));
  t634[1622ULL] = (int32_T)((!(t1437 * t1437 * 9.999999999999999E-14 + fabs(X
    [399ULL] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    t1425) * 1.0E-9 == t1437 * t1437 * 9.999999999999999E-14 + fabs(X[399ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1425) * 1.0E-9))
    || (!(fabs(t1437 * t1437 * 9.999999999999999E-14 + fabs(X[399ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t1425) * 1.0E-9)
          != pmf_get_inf())) || (t1437 * t1437 * 9.999999999999999E-14 + fabs(X
    [399ULL] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    t1425) * 1.0E-9 >= 0.0));
  t634[1623ULL] = 1;
  t634[1624ULL] = 1;
  t634[1625ULL] = (int32_T)(t1425 != 0.0);
  t634[1626ULL] = (int32_T)((!(t1425 != 0.0)) || (X[399ULL] != 0.0));
  t634[1627ULL] = 1;
  t634[1628ULL] = (int32_T)((!(t1425 != 0.0)) || ((t1425 != 0.0) && (!(X[399ULL]
    != 0.0))) || (fabs(t1581 / (t1425 == 0.0 ? 1.0E-16 : t1425) / (X[399ULL] ==
    0.0 ? 1.0E-16 : X[399ULL])) >= 0.0));
  t634[1629ULL] = (int32_T)(t1434 * 0.32 != 0.0);
  t634[1630ULL] = (int32_T)(t1439 * 6.4000000000000011E-5 != 0.0);
  t634[1631ULL] = (int32_T)(t1448 != 0.0);
  t634[1632ULL] = (int32_T)((!(t1448 != 0.0)) || (6.9 / (t1448 == 0.0 ? 1.0E-16 :
    t1448) + 0.00017169489553429715 > 0.0));
  t634[1633ULL] = 1;
  t634[1634ULL] = 1;
  t634[1635ULL] = (int32_T)((!(t1448 != 0.0)) || ((t1448 != 0.0) && (!(6.9 /
    (t1448 == 0.0 ? 1.0E-16 : t1448) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1448 == 0.0 ? 1.0E-16 : t1448) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1448 == 0.0 ? 1.0E-16 : t1448) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1636ULL] = (int32_T)(t1439 * 0.0020480000000000003 != 0.0);
  t634[1637ULL] = 1;
  t634[1638ULL] = 1;
  t634[1639ULL] = 1;
  t634[1640ULL] = 1;
  t634[1641ULL] = (int32_T)(t1436 != 0.0);
  t634[1642ULL] = (int32_T)(t1444 != 0.0);
  t634[1643ULL] = 1;
  t634[1644ULL] = (int32_T)((!(1.0 - X[8ULL] >= -0.1)) || (((1.0 - X[8ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[8ULL] >= 0.01));
  t634[1645ULL] = 1;
  t634[1646ULL] = (int32_T)(t1446 != 0.0);
  t634[1647ULL] = (int32_T)(X[52ULL] * 100000.0 > 0.0);
  t634[1648ULL] = (int32_T)((!(X[52ULL] * 100000.0 > 0.0)) || (pmf_log(X[52ULL] *
    100000.0) - t98[0ULL] < 663.67513503334737));
  t634[1649ULL] = 1;
  t634[1650ULL] = (int32_T)((!(t1449 >= 1.0)) || ((t1449 - 1.0) * 461.523 +
    t1447 != 0.0));
  t634[1651ULL] = (int32_T)(t1450 * 0.01 != 0.0);
  t634[1652ULL] = 1;
  t634[1653ULL] = 1;
  t634[1654ULL] = 1;
  t634[1655ULL] = 1;
  t634[1656ULL] = (int32_T)(t1410 != 0.0);
  t634[1657ULL] = (int32_T)(t1597 / 2.0 * 0.32 != 0.0);
  t634[1658ULL] = 1;
  t634[1659ULL] = (int32_T)(intrm_sf_mf_1117 != 0.0);
  t634[1660ULL] = (int32_T)((!(intrm_sf_mf_1117 != 0.0)) || (6.9 /
    (intrm_sf_mf_1117 == 0.0 ? 1.0E-16 : intrm_sf_mf_1117) +
    0.00017169489553429715 > 0.0));
  t634[1661ULL] = 1;
  t634[1662ULL] = 1;
  t634[1663ULL] = (int32_T)((!(intrm_sf_mf_1117 != 0.0)) || ((intrm_sf_mf_1117
    != 0.0) && (!(6.9 / (intrm_sf_mf_1117 == 0.0 ? 1.0E-16 : intrm_sf_mf_1117) +
                  0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_1117 == 0.0 ? 1.0E-16 : intrm_sf_mf_1117) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_1117 == 0.0 ? 1.0E-16
    : intrm_sf_mf_1117) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[1664ULL] = (int32_T)((t1454 / 8.0 == t1454 / 8.0) && (fabs(t1454 / 8.0)
    != pmf_get_inf()));
  t634[1665ULL] = (int32_T)((!(t1454 / 8.0 == t1454 / 8.0)) || (!(fabs(t1454 /
    8.0) != pmf_get_inf())) || (t1454 / 8.0 >= 0.0));
  t634[1666ULL] = 1;
  t634[1667ULL] = (int32_T)(t1452 >= 0.0);
  t634[1668ULL] = (int32_T)((!(t1454 / 8.0 == t1454 / 8.0)) || (!(fabs(t1454 /
    8.0) != pmf_get_inf())) || ((t1454 / 8.0 == t1454 / 8.0) && (fabs(t1454 /
    8.0) != pmf_get_inf()) && (!(t1454 / 8.0 >= 0.0))) || (!(t1452 >= 0.0)) ||
    ((pmf_pow(t1452, 0.66666666666666663) - 1.0) * pmf_sqrt(t1454 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[1669ULL] = 1;
  t634[1670ULL] = 1;
  t634[1671ULL] = 1;
  t634[1672ULL] = 1;
  t634[1673ULL] = (int32_T)(t1600 / 2.0 != 0.0);
  t634[1674ULL] = 1;
  t2357 = t1600 / 2.0;
  t634[1675ULL] = (int32_T)((!(t1433 > t1606 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (t1433 != 0.0));
  t634[1676ULL] = 1;
  t634[1677ULL] = 1;
  t2357 = t1600 / 2.0;
  t634[1678ULL] = (int32_T)((!(t1433 > t1606 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (!(t1433 != 0.0)) || (t1600 / 2.0 != 0.0));
  t634[1679ULL] = (int32_T)(-intrm_sf_mf_1124 < 663.67513503334737);
  t634[1680ULL] = (int32_T)(t1459 != 0.0);
  t634[1681ULL] = (int32_T)(t1618 / 2.0 * 0.32 != 0.0);
  t634[1682ULL] = 1;
  t634[1683ULL] = (int32_T)(intrm_sf_mf_1141 != 0.0);
  t634[1684ULL] = (int32_T)((!(intrm_sf_mf_1141 != 0.0)) || (6.9 /
    (intrm_sf_mf_1141 == 0.0 ? 1.0E-16 : intrm_sf_mf_1141) +
    0.00017169489553429715 > 0.0));
  t634[1685ULL] = 1;
  t634[1686ULL] = 1;
  t634[1687ULL] = (int32_T)((!(intrm_sf_mf_1141 != 0.0)) || ((intrm_sf_mf_1141
    != 0.0) && (!(6.9 / (intrm_sf_mf_1141 == 0.0 ? 1.0E-16 : intrm_sf_mf_1141) +
                  0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_1141 == 0.0 ? 1.0E-16 : intrm_sf_mf_1141) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_1141 == 0.0 ? 1.0E-16
    : intrm_sf_mf_1141) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[1688ULL] = (int32_T)((t1463 / 8.0 == t1463 / 8.0) && (fabs(t1463 / 8.0)
    != pmf_get_inf()));
  t634[1689ULL] = (int32_T)((!(t1463 / 8.0 == t1463 / 8.0)) || (!(fabs(t1463 /
    8.0) != pmf_get_inf())) || (t1463 / 8.0 >= 0.0));
  t634[1690ULL] = 1;
  t634[1691ULL] = (int32_T)(t1462 >= 0.0);
  t634[1692ULL] = (int32_T)((!(t1463 / 8.0 == t1463 / 8.0)) || (!(fabs(t1463 /
    8.0) != pmf_get_inf())) || ((t1463 / 8.0 == t1463 / 8.0) && (fabs(t1463 /
    8.0) != pmf_get_inf()) && (!(t1463 / 8.0 >= 0.0))) || (!(t1462 >= 0.0)) ||
    ((pmf_pow(t1462, 0.66666666666666663) - 1.0) * pmf_sqrt(t1463 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[1693ULL] = 1;
  t634[1694ULL] = 1;
  t634[1695ULL] = 1;
  t634[1696ULL] = 1;
  t634[1697ULL] = (int32_T)(t1621 / 2.0 != 0.0);
  t634[1698ULL] = 1;
  t2357 = t1621 / 2.0;
  t634[1699ULL] = (int32_T)((!(t1461 > t1627 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (t1461 != 0.0));
  t634[1700ULL] = 1;
  t634[1701ULL] = 1;
  t2357 = t1621 / 2.0;
  t634[1702ULL] = (int32_T)((!(t1461 > t1627 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (!(t1461 != 0.0)) || (t1621 / 2.0 != 0.0));
  t634[1703ULL] = (int32_T)(-t1464 < 663.67513503334737);
  t634[1704ULL] = 1;
  t634[1705ULL] = 1;
  t634[1706ULL] = (int32_T)(X[372ULL] != 0.0);
  t634[1707ULL] = 1;
  t634[1708ULL] = 1;
  t634[1709ULL] = 1;
  t634[1710ULL] = 1;
  t634[1711ULL] = 1;
  t634[1712ULL] = (int32_T)((X[384ULL] * X[384ULL] + 4.3455507383574884E-7 == X
    [384ULL] * X[384ULL] + 4.3455507383574884E-7) && (fabs(X[384ULL] * X[384ULL]
    + 4.3455507383574884E-7) != pmf_get_inf()));
  t634[1713ULL] = (int32_T)((!(X[384ULL] * X[384ULL] + 4.3455507383574884E-7 ==
    X[384ULL] * X[384ULL] + 4.3455507383574884E-7)) || (!(fabs(X[384ULL] * X
    [384ULL] + 4.3455507383574884E-7) != pmf_get_inf())) || (X[384ULL] * X
    [384ULL] + 4.3455507383574884E-7 >= 0.0));
  t634[1714ULL] = 1;
  t634[1715ULL] = 1;
  t634[1716ULL] = (int32_T)((X[384ULL] * X[384ULL] + 4.9597684650720062E-8 == X
    [384ULL] * X[384ULL] + 4.9597684650720062E-8) && (fabs(X[384ULL] * X[384ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[1717ULL] = (int32_T)((!(X[384ULL] * X[384ULL] + 4.9597684650720062E-8 ==
    X[384ULL] * X[384ULL] + 4.9597684650720062E-8)) || (!(fabs(X[384ULL] * X
    [384ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[384ULL] * X
    [384ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[1718ULL] = 1;
  t634[1719ULL] = 1;
  t634[1720ULL] = (int32_T)((X[384ULL] * X[384ULL] + 3.5023764535063275E-8 == X
    [384ULL] * X[384ULL] + 3.5023764535063275E-8) && (fabs(X[384ULL] * X[384ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[1721ULL] = (int32_T)((!(X[384ULL] * X[384ULL] + 3.5023764535063275E-8 ==
    X[384ULL] * X[384ULL] + 3.5023764535063275E-8)) || (!(fabs(X[384ULL] * X
    [384ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[384ULL] * X
    [384ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[1722ULL] = (int32_T)(X[76ULL] != 0.0);
  t634[1723ULL] = 1;
  t634[1724ULL] = 1;
  t634[1725ULL] = 1;
  t634[1726ULL] = 1;
  t634[1727ULL] = 1;
  t634[1728ULL] = (int32_T)((X[398ULL] * X[398ULL] + 4.3455507383574884E-7 == X
    [398ULL] * X[398ULL] + 4.3455507383574884E-7) && (fabs(X[398ULL] * X[398ULL]
    + 4.3455507383574884E-7) != pmf_get_inf()));
  t634[1729ULL] = (int32_T)((!(X[398ULL] * X[398ULL] + 4.3455507383574884E-7 ==
    X[398ULL] * X[398ULL] + 4.3455507383574884E-7)) || (!(fabs(X[398ULL] * X
    [398ULL] + 4.3455507383574884E-7) != pmf_get_inf())) || (X[398ULL] * X
    [398ULL] + 4.3455507383574884E-7 >= 0.0));
  t634[1730ULL] = 1;
  t634[1731ULL] = 1;
  t634[1732ULL] = (int32_T)((X[398ULL] * X[398ULL] + 4.9597684650720062E-8 == X
    [398ULL] * X[398ULL] + 4.9597684650720062E-8) && (fabs(X[398ULL] * X[398ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[1733ULL] = (int32_T)((!(X[398ULL] * X[398ULL] + 4.9597684650720062E-8 ==
    X[398ULL] * X[398ULL] + 4.9597684650720062E-8)) || (!(fabs(X[398ULL] * X
    [398ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[398ULL] * X
    [398ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[1734ULL] = 1;
  t634[1735ULL] = 1;
  t634[1736ULL] = (int32_T)((X[398ULL] * X[398ULL] + 3.5023764535063275E-8 == X
    [398ULL] * X[398ULL] + 3.5023764535063275E-8) && (fabs(X[398ULL] * X[398ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[1737ULL] = (int32_T)((!(X[398ULL] * X[398ULL] + 3.5023764535063275E-8 ==
    X[398ULL] * X[398ULL] + 3.5023764535063275E-8)) || (!(fabs(X[398ULL] * X
    [398ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[398ULL] * X
    [398ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[1738ULL] = (int32_T)(X[53ULL] != 0.0);
  t634[1739ULL] = (int32_T)(X[411ULL] != 0.0);
  t634[1740ULL] = 1;
  t634[1741ULL] = 1;
  t634[1742ULL] = 1;
  t634[1743ULL] = (int32_T)(t1472 - t1469 != 0.0);
  t634[1744ULL] = 1;
  t634[1745ULL] = 1;
  t634[1746ULL] = (int32_T)((t1470 * t1470 * 9.999999999999999E-14 + fabs(X
    [410ULL] * t1474 * t1469) * 1.0E-9 == t1470 * t1470 * 9.999999999999999E-14
    + fabs(X[410ULL] * t1474 * t1469) * 1.0E-9) && (fabs(t1470 * t1470 *
    9.999999999999999E-14 + fabs(X[410ULL] * t1474 * t1469) * 1.0E-9) !=
    pmf_get_inf()));
  t634[1747ULL] = (int32_T)((!(t1470 * t1470 * 9.999999999999999E-14 + fabs(X
    [410ULL] * t1474 * t1469) * 1.0E-9 == t1470 * t1470 * 9.999999999999999E-14
    + fabs(X[410ULL] * t1474 * t1469) * 1.0E-9)) || (!(fabs(t1470 * t1470 *
    9.999999999999999E-14 + fabs(X[410ULL] * t1474 * t1469) * 1.0E-9) !=
    pmf_get_inf())) || (t1470 * t1470 * 9.999999999999999E-14 + fabs(X[410ULL] *
    t1474 * t1469) * 1.0E-9 >= 0.0));
  t634[1748ULL] = 1;
  t634[1749ULL] = 1;
  t634[1750ULL] = (int32_T)(t1469 != 0.0);
  t634[1751ULL] = (int32_T)((!(t1469 != 0.0)) || (X[410ULL] != 0.0));
  t634[1752ULL] = 1;
  t634[1753ULL] = (int32_T)((!(t1469 != 0.0)) || ((t1469 != 0.0) && (!(X[410ULL]
    != 0.0))) || (fabs(t1643 / (t1469 == 0.0 ? 1.0E-16 : t1469) / (X[410ULL] ==
    0.0 ? 1.0E-16 : X[410ULL])) >= 0.0));
  t634[1754ULL] = (int32_T)(t1480 * 0.32 != 0.0);
  t634[1755ULL] = (int32_T)(X[9ULL] * t1469 != 0.0);
  t634[1756ULL] = (int32_T)(t1486 * 6.4000000000000011E-5 != 0.0);
  t634[1757ULL] = (int32_T)(t1488 != 0.0);
  t634[1758ULL] = (int32_T)((!(t1488 != 0.0)) || (6.9 / (t1488 == 0.0 ? 1.0E-16 :
    t1488) + 0.00017169489553429715 > 0.0));
  t634[1759ULL] = 1;
  t634[1760ULL] = 1;
  t634[1761ULL] = (int32_T)((!(t1488 != 0.0)) || ((t1488 != 0.0) && (!(6.9 /
    (t1488 == 0.0 ? 1.0E-16 : t1488) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1488 == 0.0 ? 1.0E-16 : t1488) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1488 == 0.0 ? 1.0E-16 : t1488) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1762ULL] = (int32_T)(t1486 * 0.0020480000000000003 != 0.0);
  t634[1763ULL] = 1;
  t634[1764ULL] = 1;
  t634[1765ULL] = 1;
  t634[1766ULL] = 1;
  t634[1767ULL] = (int32_T)(X[53ULL] != 0.0);
  t634[1768ULL] = (int32_T)(X[413ULL] != 0.0);
  t634[1769ULL] = 1;
  t634[1770ULL] = 1;
  t634[1771ULL] = 1;
  t634[1772ULL] = (int32_T)(t1487 - t1469 != 0.0);
  t634[1773ULL] = 1;
  t634[1774ULL] = 1;
  t634[1775ULL] = (int32_T)((t1484 * t1484 * 9.999999999999999E-14 + fabs(X
    [412ULL] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI *
    t1469) * 1.0E-9 == t1484 * t1484 * 9.999999999999999E-14 + fabs(X[412ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * t1469) *
    1.0E-9) && (fabs(t1484 * t1484 * 9.999999999999999E-14 + fabs(X[412ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * t1469) *
                     1.0E-9) != pmf_get_inf()));
  t634[1776ULL] = (int32_T)((!(t1484 * t1484 * 9.999999999999999E-14 + fabs(X
    [412ULL] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI *
    t1469) * 1.0E-9 == t1484 * t1484 * 9.999999999999999E-14 + fabs(X[412ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * t1469) *
    1.0E-9)) || (!(fabs(t1484 * t1484 * 9.999999999999999E-14 + fabs(X[412ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * t1469) *
                        1.0E-9) != pmf_get_inf())) || (t1484 * t1484 *
    9.999999999999999E-14 + fabs(X[412ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_gamma_BI * t1469) *
    1.0E-9 >= 0.0));
  t634[1777ULL] = 1;
  t634[1778ULL] = 1;
  t634[1779ULL] = (int32_T)(t1469 != 0.0);
  t634[1780ULL] = (int32_T)((!(t1469 != 0.0)) || (X[412ULL] != 0.0));
  t634[1781ULL] = 1;
  t634[1782ULL] = (int32_T)((!(t1469 != 0.0)) || ((t1469 != 0.0) && (!(X[412ULL]
    != 0.0))) || (fabs(t1662 / (t1469 == 0.0 ? 1.0E-16 : t1469) / (X[412ULL] ==
    0.0 ? 1.0E-16 : X[412ULL])) >= 0.0));
  t634[1783ULL] = (int32_T)(t1480 * 0.32 != 0.0);
  t634[1784ULL] = (int32_T)(t1486 * 6.4000000000000011E-5 != 0.0);
  t634[1785ULL] = (int32_T)(t1496 != 0.0);
  t634[1786ULL] = (int32_T)((!(t1496 != 0.0)) || (6.9 / (t1496 == 0.0 ? 1.0E-16 :
    t1496) + 0.00017169489553429715 > 0.0));
  t634[1787ULL] = 1;
  t634[1788ULL] = 1;
  t634[1789ULL] = (int32_T)((!(t1496 != 0.0)) || ((t1496 != 0.0) && (!(6.9 /
    (t1496 == 0.0 ? 1.0E-16 : t1496) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1496 == 0.0 ? 1.0E-16 : t1496) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1496 == 0.0 ? 1.0E-16 : t1496) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[1790ULL] = (int32_T)(t1486 * 0.0020480000000000003 != 0.0);
  t634[1791ULL] = 1;
  t634[1792ULL] = 1;
  t634[1793ULL] = 1;
  t634[1794ULL] = 1;
  t634[1795ULL] = (int32_T)(t1483 != 0.0);
  t634[1796ULL] = (int32_T)(t1489 != 0.0);
  t634[1797ULL] = 1;
  t634[1798ULL] = (int32_T)((!(1.0 - X[11ULL] >= -0.1)) || (((1.0 - X[11ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[11ULL] >= 0.01));
  t634[1799ULL] = 1;
  t634[1800ULL] = (int32_T)(t1066 != 0.0);
  t634[1801ULL] = (int32_T)(X[53ULL] * 100000.0 > 0.0);
  t634[1802ULL] = (int32_T)((!(X[53ULL] * 100000.0 > 0.0)) || (pmf_log(X[53ULL] *
    100000.0) - t643[0ULL] < 663.67513503334737));
  t634[1803ULL] = 1;
  t634[1804ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I >= 1.0))
     || ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_p_ws_ratio_I - 1.0)
         * 461.523 + t1495 != 0.0));
  t634[1805ULL] = (int32_T)(t1500 * 0.01 != 0.0);
  t634[1806ULL] = 1;
  t634[1807ULL] = 1;
  t634[1808ULL] = 1;
  t634[1809ULL] = 1;
  t634[1810ULL] = (int32_T)(t1459 != 0.0);
  t634[1811ULL] = (int32_T)(t1678 / 2.0 * 0.32 != 0.0);
  t634[1812ULL] = 1;
  t634[1813ULL] = (int32_T)(intrm_sf_mf_1138 != 0.0);
  t634[1814ULL] = (int32_T)((!(intrm_sf_mf_1138 != 0.0)) || (6.9 /
    (intrm_sf_mf_1138 == 0.0 ? 1.0E-16 : intrm_sf_mf_1138) +
    0.00017169489553429715 > 0.0));
  t634[1815ULL] = 1;
  t634[1816ULL] = 1;
  t634[1817ULL] = (int32_T)((!(intrm_sf_mf_1138 != 0.0)) || ((intrm_sf_mf_1138
    != 0.0) && (!(6.9 / (intrm_sf_mf_1138 == 0.0 ? 1.0E-16 : intrm_sf_mf_1138) +
                  0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_1138 == 0.0 ? 1.0E-16 : intrm_sf_mf_1138) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_1138 == 0.0 ? 1.0E-16
    : intrm_sf_mf_1138) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[1818ULL] = (int32_T)((t1505 / 8.0 == t1505 / 8.0) && (fabs(t1505 / 8.0)
    != pmf_get_inf()));
  t634[1819ULL] = (int32_T)((!(t1505 / 8.0 == t1505 / 8.0)) || (!(fabs(t1505 /
    8.0) != pmf_get_inf())) || (t1505 / 8.0 >= 0.0));
  t634[1820ULL] = 1;
  t634[1821ULL] = (int32_T)(t1504 >= 0.0);
  t634[1822ULL] = (int32_T)((!(t1505 / 8.0 == t1505 / 8.0)) || (!(fabs(t1505 /
    8.0) != pmf_get_inf())) || ((t1505 / 8.0 == t1505 / 8.0) && (fabs(t1505 /
    8.0) != pmf_get_inf()) && (!(t1505 / 8.0 >= 0.0))) || (!(t1504 >= 0.0)) ||
    ((pmf_pow(t1504, 0.66666666666666663) - 1.0) * pmf_sqrt(t1505 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[1823ULL] = 1;
  t634[1824ULL] = 1;
  t634[1825ULL] = 1;
  t634[1826ULL] = 1;
  t634[1827ULL] = (int32_T)(t1682 / 2.0 != 0.0);
  t634[1828ULL] = 1;
  t2357 = t1682 / 2.0;
  t634[1829ULL] = (int32_T)((!(t1478 > t1687 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (t1478 != 0.0));
  t634[1830ULL] = 1;
  t634[1831ULL] = 1;
  t2357 = t1682 / 2.0;
  t634[1832ULL] = (int32_T)((!(t1478 > t1687 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (!(t1478 != 0.0)) || (t1682 / 2.0 != 0.0));
  t634[1833ULL] = (int32_T)(-t1507 < 663.67513503334737);
  t634[1834ULL] = (int32_T)(t1125 != 0.0);
  t634[1835ULL] = (int32_T)(t1698 / 2.0 * 0.32 != 0.0);
  t634[1836ULL] = 1;
  t634[1837ULL] = (int32_T)(intrm_sf_mf_1278 != 0.0);
  t634[1838ULL] = (int32_T)((!(intrm_sf_mf_1278 != 0.0)) || (6.9 /
    (intrm_sf_mf_1278 == 0.0 ? 1.0E-16 : intrm_sf_mf_1278) +
    0.00017169489553429715 > 0.0));
  t634[1839ULL] = 1;
  t634[1840ULL] = 1;
  t634[1841ULL] = (int32_T)((!(intrm_sf_mf_1278 != 0.0)) || ((intrm_sf_mf_1278
    != 0.0) && (!(6.9 / (intrm_sf_mf_1278 == 0.0 ? 1.0E-16 : intrm_sf_mf_1278) +
                  0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_1278 == 0.0 ? 1.0E-16 : intrm_sf_mf_1278) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_1278 == 0.0 ? 1.0E-16
    : intrm_sf_mf_1278) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[1842ULL] = (int32_T)((t1508 / 8.0 == t1508 / 8.0) && (fabs(t1508 / 8.0)
    != pmf_get_inf()));
  t634[1843ULL] = (int32_T)((!(t1508 / 8.0 == t1508 / 8.0)) || (!(fabs(t1508 /
    8.0) != pmf_get_inf())) || (t1508 / 8.0 >= 0.0));
  t634[1844ULL] = 1;
  t634[1845ULL] = (int32_T)(intrm_sf_mf_1279 >= 0.0);
  t634[1846ULL] = (int32_T)((!(t1508 / 8.0 == t1508 / 8.0)) || (!(fabs(t1508 /
    8.0) != pmf_get_inf())) || ((t1508 / 8.0 == t1508 / 8.0) && (fabs(t1508 /
    8.0) != pmf_get_inf()) && (!(t1508 / 8.0 >= 0.0))) || (!(intrm_sf_mf_1279 >=
    0.0)) || ((pmf_pow(intrm_sf_mf_1279, 0.66666666666666663) - 1.0) * pmf_sqrt
              (t1508 / 8.0) * 12.7 + 1.0 != 0.0));
  t634[1847ULL] = 1;
  t634[1848ULL] = 1;
  t634[1849ULL] = 1;
  t634[1850ULL] = 1;
  t634[1851ULL] = (int32_T)(t1701 / 2.0 != 0.0);
  t634[1852ULL] = 1;
  t2357 = t1701 / 2.0;
  t634[1853ULL] = (int32_T)((!(t1382 > t1706 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (t1382 != 0.0));
  t634[1854ULL] = 1;
  t634[1855ULL] = 1;
  t2357 = t1701 / 2.0;
  t634[1856ULL] = (int32_T)((!(t1382 > t1706 / 0.32 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (!(t1382 != 0.0)) || (t1701 / 2.0 != 0.0));
  t634[1857ULL] = (int32_T)(-t1509 < 663.67513503334737);
  t634[1858ULL] = 1;
  t634[1859ULL] = 1;
  t634[1860ULL] = (int32_T)(X[76ULL] != 0.0);
  t634[1861ULL] = 1;
  t634[1862ULL] = 1;
  t634[1863ULL] = 1;
  t634[1864ULL] = 1;
  t634[1865ULL] = 1;
  t634[1866ULL] = (int32_T)((X[398ULL] * X[398ULL] + 4.3455507383574884E-7 == X
    [398ULL] * X[398ULL] + 4.3455507383574884E-7) && (fabs(X[398ULL] * X[398ULL]
    + 4.3455507383574884E-7) != pmf_get_inf()));
  t634[1867ULL] = (int32_T)((!(X[398ULL] * X[398ULL] + 4.3455507383574884E-7 ==
    X[398ULL] * X[398ULL] + 4.3455507383574884E-7)) || (!(fabs(X[398ULL] * X
    [398ULL] + 4.3455507383574884E-7) != pmf_get_inf())) || (X[398ULL] * X
    [398ULL] + 4.3455507383574884E-7 >= 0.0));
  t634[1868ULL] = 1;
  t634[1869ULL] = 1;
  t634[1870ULL] = (int32_T)((X[398ULL] * X[398ULL] + 4.9597684650720062E-8 == X
    [398ULL] * X[398ULL] + 4.9597684650720062E-8) && (fabs(X[398ULL] * X[398ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[1871ULL] = (int32_T)((!(X[398ULL] * X[398ULL] + 4.9597684650720062E-8 ==
    X[398ULL] * X[398ULL] + 4.9597684650720062E-8)) || (!(fabs(X[398ULL] * X
    [398ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[398ULL] * X
    [398ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[1872ULL] = 1;
  t634[1873ULL] = 1;
  t634[1874ULL] = (int32_T)((X[398ULL] * X[398ULL] + 3.5023764535063275E-8 == X
    [398ULL] * X[398ULL] + 3.5023764535063275E-8) && (fabs(X[398ULL] * X[398ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[1875ULL] = (int32_T)((!(X[398ULL] * X[398ULL] + 3.5023764535063275E-8 ==
    X[398ULL] * X[398ULL] + 3.5023764535063275E-8)) || (!(fabs(X[398ULL] * X
    [398ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[398ULL] * X
    [398ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[1876ULL] = (int32_T)(X[123ULL] != 0.0);
  t634[1877ULL] = 1;
  t634[1878ULL] = 1;
  t634[1879ULL] = 1;
  t634[1880ULL] = 1;
  t634[1881ULL] = 1;
  t634[1882ULL] = (int32_T)((X[145ULL] * X[145ULL] + 4.3455507383574884E-7 == X
    [145ULL] * X[145ULL] + 4.3455507383574884E-7) && (fabs(X[145ULL] * X[145ULL]
    + 4.3455507383574884E-7) != pmf_get_inf()));
  t634[1883ULL] = (int32_T)((!(X[145ULL] * X[145ULL] + 4.3455507383574884E-7 ==
    X[145ULL] * X[145ULL] + 4.3455507383574884E-7)) || (!(fabs(X[145ULL] * X
    [145ULL] + 4.3455507383574884E-7) != pmf_get_inf())) || (X[145ULL] * X
    [145ULL] + 4.3455507383574884E-7 >= 0.0));
  t634[1884ULL] = 1;
  t634[1885ULL] = 1;
  t634[1886ULL] = (int32_T)((X[145ULL] * X[145ULL] + 4.9597684650720062E-8 == X
    [145ULL] * X[145ULL] + 4.9597684650720062E-8) && (fabs(X[145ULL] * X[145ULL]
    + 4.9597684650720062E-8) != pmf_get_inf()));
  t634[1887ULL] = (int32_T)((!(X[145ULL] * X[145ULL] + 4.9597684650720062E-8 ==
    X[145ULL] * X[145ULL] + 4.9597684650720062E-8)) || (!(fabs(X[145ULL] * X
    [145ULL] + 4.9597684650720062E-8) != pmf_get_inf())) || (X[145ULL] * X
    [145ULL] + 4.9597684650720062E-8 >= 0.0));
  t634[1888ULL] = 1;
  t634[1889ULL] = 1;
  t634[1890ULL] = (int32_T)((X[145ULL] * X[145ULL] + 3.5023764535063275E-8 == X
    [145ULL] * X[145ULL] + 3.5023764535063275E-8) && (fabs(X[145ULL] * X[145ULL]
    + 3.5023764535063275E-8) != pmf_get_inf()));
  t634[1891ULL] = (int32_T)((!(X[145ULL] * X[145ULL] + 3.5023764535063275E-8 ==
    X[145ULL] * X[145ULL] + 3.5023764535063275E-8)) || (!(fabs(X[145ULL] * X
    [145ULL] + 3.5023764535063275E-8) != pmf_get_inf())) || (X[145ULL] * X
    [145ULL] + 3.5023764535063275E-8 >= 0.0));
  t634[1892ULL] = (int32_T)(X[57ULL] != 0.0);
  t634[1893ULL] = (int32_T)(X[428ULL] != 0.0);
  t634[1894ULL] = 1;
  t634[1895ULL] = 1;
  t634[1896ULL] = 1;
  t634[1897ULL] = (int32_T)(t1514 - t1511 != 0.0);
  t634[1898ULL] = 1;
  t634[1899ULL] = 1;
  t634[1900ULL] = (int32_T)((t1512 * t1512 * 9.999999999999999E-14 + fabs(X
    [427ULL] * t1516 * t1511) * 1.0E-9 == t1512 * t1512 * 9.999999999999999E-14
    + fabs(X[427ULL] * t1516 * t1511) * 1.0E-9) && (fabs(t1512 * t1512 *
    9.999999999999999E-14 + fabs(X[427ULL] * t1516 * t1511) * 1.0E-9) !=
    pmf_get_inf()));
  t634[1901ULL] = (int32_T)((!(t1512 * t1512 * 9.999999999999999E-14 + fabs(X
    [427ULL] * t1516 * t1511) * 1.0E-9 == t1512 * t1512 * 9.999999999999999E-14
    + fabs(X[427ULL] * t1516 * t1511) * 1.0E-9)) || (!(fabs(t1512 * t1512 *
    9.999999999999999E-14 + fabs(X[427ULL] * t1516 * t1511) * 1.0E-9) !=
    pmf_get_inf())) || (t1512 * t1512 * 9.999999999999999E-14 + fabs(X[427ULL] *
    t1516 * t1511) * 1.0E-9 >= 0.0));
  t634[1902ULL] = 1;
  t634[1903ULL] = 1;
  t634[1904ULL] = (int32_T)(t1511 != 0.0);
  t634[1905ULL] = (int32_T)((!(t1511 != 0.0)) || (X[427ULL] != 0.0));
  t634[1906ULL] = 1;
  t634[1907ULL] = (int32_T)((!(t1511 != 0.0)) || ((t1511 != 0.0) && (!(X[427ULL]
    != 0.0))) || (fabs(t1723 / (t1511 == 0.0 ? 1.0E-16 : t1511) / (X[427ULL] ==
    0.0 ? 1.0E-16 : X[427ULL])) >= 0.0));
  t634[1908ULL] = (int32_T)(t1521 * 0.0019634954084936209 != 0.0);
  t634[1909ULL] = (int32_T)(X[54ULL] * t1511 != 0.0);
  t634[1910ULL] = (int32_T)(t1527 * 9.8174770424681068E-6 != 0.0);
  t634[1911ULL] = (int32_T)(t1529 != 0.0);
  t634[1912ULL] = (int32_T)((!(t1529 != 0.0)) || (6.9 / (t1529 == 0.0 ? 1.0E-16 :
    t1529) + 2.8767404433520813E-5 > 0.0));
  t634[1913ULL] = 1;
  t634[1914ULL] = 1;
  t634[1915ULL] = (int32_T)((!(t1529 != 0.0)) || ((t1529 != 0.0) && (!(6.9 /
    (t1529 == 0.0 ? 1.0E-16 : t1529) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1529 == 0.0 ? 1.0E-16 : t1529) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1529 == 0.0 ? 1.0E-16 : t1529) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1916ULL] = (int32_T)(t1527 * 3.855314219175531E-7 != 0.0);
  t634[1917ULL] = 1;
  t634[1918ULL] = 1;
  t634[1919ULL] = 1;
  t634[1920ULL] = 1;
  t634[1921ULL] = (int32_T)(X[57ULL] != 0.0);
  t634[1922ULL] = (int32_T)(X[430ULL] != 0.0);
  t634[1923ULL] = 1;
  t634[1924ULL] = 1;
  t634[1925ULL] = 1;
  t634[1926ULL] = (int32_T)(t1528 - t1511 != 0.0);
  t634[1927ULL] = 1;
  t634[1928ULL] = 1;
  t634[1929ULL] = (int32_T)((t1523 * t1523 * 9.999999999999999E-14 + fabs(X
    [429ULL] * t1502 * t1511) * 1.0E-9 == t1523 * t1523 * 9.999999999999999E-14
    + fabs(X[429ULL] * t1502 * t1511) * 1.0E-9) && (fabs(t1523 * t1523 *
    9.999999999999999E-14 + fabs(X[429ULL] * t1502 * t1511) * 1.0E-9) !=
    pmf_get_inf()));
  t634[1930ULL] = (int32_T)((!(t1523 * t1523 * 9.999999999999999E-14 + fabs(X
    [429ULL] * t1502 * t1511) * 1.0E-9 == t1523 * t1523 * 9.999999999999999E-14
    + fabs(X[429ULL] * t1502 * t1511) * 1.0E-9)) || (!(fabs(t1523 * t1523 *
    9.999999999999999E-14 + fabs(X[429ULL] * t1502 * t1511) * 1.0E-9) !=
    pmf_get_inf())) || (t1523 * t1523 * 9.999999999999999E-14 + fabs(X[429ULL] *
    t1502 * t1511) * 1.0E-9 >= 0.0));
  t634[1931ULL] = 1;
  t634[1932ULL] = 1;
  t634[1933ULL] = (int32_T)(t1511 != 0.0);
  t634[1934ULL] = (int32_T)((!(t1511 != 0.0)) || (X[429ULL] != 0.0));
  t634[1935ULL] = 1;
  t634[1936ULL] = (int32_T)((!(t1511 != 0.0)) || ((t1511 != 0.0) && (!(X[429ULL]
    != 0.0))) || (fabs(t1743 / (t1511 == 0.0 ? 1.0E-16 : t1511) / (X[429ULL] ==
    0.0 ? 1.0E-16 : X[429ULL])) >= 0.0));
  t634[1937ULL] = (int32_T)(t1521 * 0.0019634954084936209 != 0.0);
  t634[1938ULL] = (int32_T)(t1527 * 9.8174770424681068E-6 != 0.0);
  t634[1939ULL] = (int32_T)(t1534 != 0.0);
  t634[1940ULL] = (int32_T)((!(t1534 != 0.0)) || (6.9 / (t1534 == 0.0 ? 1.0E-16 :
    t1534) + 2.8767404433520813E-5 > 0.0));
  t634[1941ULL] = 1;
  t634[1942ULL] = 1;
  t634[1943ULL] = (int32_T)((!(t1534 != 0.0)) || ((t1534 != 0.0) && (!(6.9 /
    (t1534 == 0.0 ? 1.0E-16 : t1534) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1534 == 0.0 ? 1.0E-16 : t1534) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1534 == 0.0 ? 1.0E-16 : t1534) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1944ULL] = (int32_T)(t1527 * 3.855314219175531E-7 != 0.0);
  t634[1945ULL] = 1;
  t634[1946ULL] = 1;
  t634[1947ULL] = 1;
  t634[1948ULL] = 1;
  t634[1949ULL] = (int32_T)(t1522 != 0.0);
  t634[1950ULL] = (int32_T)(t1530 != 0.0);
  t634[1951ULL] = 1;
  t634[1952ULL] = (int32_T)((!(1.0 - X[56ULL] >= -0.1)) || (((1.0 - X[56ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[56ULL] >= 0.01));
  t634[1953ULL] = 1;
  t634[1954ULL] = (int32_T)(t1072 != 0.0);
  t634[1955ULL] = (int32_T)(X[57ULL] * 100000.0 > 0.0);
  t634[1956ULL] = (int32_T)((!(X[57ULL] * 100000.0 > 0.0)) || (pmf_log(X[57ULL] *
    100000.0) - t93[0ULL] < 663.67513503334737));
  t634[1957ULL] = 1;
  t634[1958ULL] = (int32_T)((!(t1535 >= 1.0)) || ((t1535 - 1.0) * 461.523 +
    t1533 != 0.0));
  t634[1959ULL] = (int32_T)(t1537 * 0.01 != 0.0);
  t634[1960ULL] = 1;
  t634[1961ULL] = 1;
  t634[1962ULL] = 1;
  t634[1963ULL] = 1;
  t634[1964ULL] = (int32_T)(t1541 != 0.0);
  t634[1965ULL] = (int32_T)(t1760 / 2.0 * 0.0019634954084936209 != 0.0);
  t634[1966ULL] = 1;
  t634[1967ULL] = (int32_T)(t1520 != 0.0);
  t634[1968ULL] = (int32_T)((!(t1520 != 0.0)) || (6.9 / (t1520 == 0.0 ? 1.0E-16 :
    t1520) + 2.8767404433520813E-5 > 0.0));
  t634[1969ULL] = 1;
  t634[1970ULL] = 1;
  t634[1971ULL] = (int32_T)((!(t1520 != 0.0)) || ((t1520 != 0.0) && (!(6.9 /
    (t1520 == 0.0 ? 1.0E-16 : t1520) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1520 == 0.0 ? 1.0E-16 : t1520) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1520 == 0.0 ? 1.0E-16 : t1520) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1972ULL] = (int32_T)((t1544 / 8.0 == t1544 / 8.0) && (fabs(t1544 / 8.0)
    != pmf_get_inf()));
  t634[1973ULL] = (int32_T)((!(t1544 / 8.0 == t1544 / 8.0)) || (!(fabs(t1544 /
    8.0) != pmf_get_inf())) || (t1544 / 8.0 >= 0.0));
  t634[1974ULL] = 1;
  t634[1975ULL] = (int32_T)(t1542 >= 0.0);
  t634[1976ULL] = (int32_T)((!(t1544 / 8.0 == t1544 / 8.0)) || (!(fabs(t1544 /
    8.0) != pmf_get_inf())) || ((t1544 / 8.0 == t1544 / 8.0) && (fabs(t1544 /
    8.0) != pmf_get_inf()) && (!(t1544 / 8.0 >= 0.0))) || (!(t1542 >= 0.0)) ||
    ((pmf_pow(t1542, 0.66666666666666663) - 1.0) * pmf_sqrt(t1544 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[1977ULL] = 1;
  t634[1978ULL] = 1;
  t634[1979ULL] = 1;
  t634[1980ULL] = 1;
  t634[1981ULL] = (int32_T)(t1764 / 2.0 != 0.0);
  t634[1982ULL] = 1;
  t2357 = t1764 / 2.0;
  t634[1983ULL] = (int32_T)((!(t1540 > t1770 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1540 != 0.0));
  t634[1984ULL] = 1;
  t634[1985ULL] = 1;
  t2357 = t1764 / 2.0;
  t634[1986ULL] = (int32_T)((!(t1540 > t1770 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1540 != 0.0)) || (t1764 / 2.0 != 0.0));
  t634[1987ULL] = (int32_T)(-t1547 < 663.67513503334737);
  t634[1988ULL] = (int32_T)(t1173 != 0.0);
  t634[1989ULL] = (int32_T)(t1775 / 2.0 * 0.0019634954084936209 != 0.0);
  t634[1990ULL] = 1;
  t634[1991ULL] = (int32_T)(t1176 != 0.0);
  t634[1992ULL] = (int32_T)((!(t1176 != 0.0)) || (6.9 / (t1176 == 0.0 ? 1.0E-16 :
    t1176) + 2.8767404433520813E-5 > 0.0));
  t634[1993ULL] = 1;
  t634[1994ULL] = 1;
  t634[1995ULL] = (int32_T)((!(t1176 != 0.0)) || ((t1176 != 0.0) && (!(6.9 /
    (t1176 == 0.0 ? 1.0E-16 : t1176) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1176 == 0.0 ? 1.0E-16 : t1176) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1176 == 0.0 ? 1.0E-16 : t1176) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[1996ULL] = (int32_T)((t1548 / 8.0 == t1548 / 8.0) && (fabs(t1548 / 8.0)
    != pmf_get_inf()));
  t634[1997ULL] = (int32_T)((!(t1548 / 8.0 == t1548 / 8.0)) || (!(fabs(t1548 /
    8.0) != pmf_get_inf())) || (t1548 / 8.0 >= 0.0));
  t634[1998ULL] = 1;
  t634[1999ULL] = (int32_T)(t1538 >= 0.0);
  t634[2000ULL] = (int32_T)((!(t1548 / 8.0 == t1548 / 8.0)) || (!(fabs(t1548 /
    8.0) != pmf_get_inf())) || ((t1548 / 8.0 == t1548 / 8.0) && (fabs(t1548 /
    8.0) != pmf_get_inf()) && (!(t1548 / 8.0 >= 0.0))) || (!(t1538 >= 0.0)) ||
    ((pmf_pow(t1538, 0.66666666666666663) - 1.0) * pmf_sqrt(t1548 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[2001ULL] = 1;
  t634[2002ULL] = 1;
  t634[2003ULL] = 1;
  t634[2004ULL] = 1;
  t634[2005ULL] = (int32_T)(t1776 / 2.0 != 0.0);
  t634[2006ULL] = 1;
  t2357 = t1776 / 2.0;
  t634[2007ULL] = (int32_T)((!(t1519 > t1789 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1519 != 0.0));
  t634[2008ULL] = 1;
  t634[2009ULL] = 1;
  t2357 = t1776 / 2.0;
  t634[2010ULL] = (int32_T)((!(t1519 > t1789 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1519 != 0.0)) || (t1776 / 2.0 != 0.0));
  t634[2011ULL] = (int32_T)(-t1549 < 663.67513503334737);
  t634[2012ULL] = 1;
  t634[2013ULL] = 1;
  t634[2014ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[2015ULL] = 1;
  t634[2016ULL] = 1;
  t634[2017ULL] = 1;
  t634[2018ULL] = 1;
  t634[2019ULL] = 1;
  t634[2020ULL] = (int32_T)((X[361ULL] * X[361ULL] + 3.0116308772356542E-13 ==
    X[361ULL] * X[361ULL] + 3.0116308772356542E-13) && (fabs(X[361ULL] * X
    [361ULL] + 3.0116308772356542E-13) != pmf_get_inf()));
  t634[2021ULL] = (int32_T)((!(X[361ULL] * X[361ULL] + 3.0116308772356542E-13 ==
    X[361ULL] * X[361ULL] + 3.0116308772356542E-13)) || (!(fabs(X[361ULL] * X
    [361ULL] + 3.0116308772356542E-13) != pmf_get_inf())) || (X[361ULL] * X
    [361ULL] + 3.0116308772356542E-13 >= 0.0));
  t634[2022ULL] = 1;
  t634[2023ULL] = 1;
  t634[2024ULL] = (int32_T)((X[361ULL] * X[361ULL] + 5.8094731428156895E-13 ==
    X[361ULL] * X[361ULL] + 5.8094731428156895E-13) && (fabs(X[361ULL] * X
    [361ULL] + 5.8094731428156895E-13) != pmf_get_inf()));
  t634[2025ULL] = (int32_T)((!(X[361ULL] * X[361ULL] + 5.8094731428156895E-13 ==
    X[361ULL] * X[361ULL] + 5.8094731428156895E-13)) || (!(fabs(X[361ULL] * X
    [361ULL] + 5.8094731428156895E-13) != pmf_get_inf())) || (X[361ULL] * X
    [361ULL] + 5.8094731428156895E-13 >= 0.0));
  t634[2026ULL] = 1;
  t634[2027ULL] = 1;
  t634[2028ULL] = (int32_T)((X[361ULL] * X[361ULL] + 4.1024015709531055E-13 ==
    X[361ULL] * X[361ULL] + 4.1024015709531055E-13) && (fabs(X[361ULL] * X
    [361ULL] + 4.1024015709531055E-13) != pmf_get_inf()));
  t634[2029ULL] = (int32_T)((!(X[361ULL] * X[361ULL] + 4.1024015709531055E-13 ==
    X[361ULL] * X[361ULL] + 4.1024015709531055E-13)) || (!(fabs(X[361ULL] * X
    [361ULL] + 4.1024015709531055E-13) != pmf_get_inf())) || (X[361ULL] * X
    [361ULL] + 4.1024015709531055E-13 >= 0.0));
  t634[2030ULL] = (int32_T)(X[174ULL] != 0.0);
  t634[2031ULL] = 1;
  t634[2032ULL] = 1;
  t634[2033ULL] = 1;
  t634[2034ULL] = 1;
  t634[2035ULL] = 1;
  t634[2036ULL] = (int32_T)((X[177ULL] * X[177ULL] + 3.0116308772356542E-13 ==
    X[177ULL] * X[177ULL] + 3.0116308772356542E-13) && (fabs(X[177ULL] * X
    [177ULL] + 3.0116308772356542E-13) != pmf_get_inf()));
  t634[2037ULL] = (int32_T)((!(X[177ULL] * X[177ULL] + 3.0116308772356542E-13 ==
    X[177ULL] * X[177ULL] + 3.0116308772356542E-13)) || (!(fabs(X[177ULL] * X
    [177ULL] + 3.0116308772356542E-13) != pmf_get_inf())) || (X[177ULL] * X
    [177ULL] + 3.0116308772356542E-13 >= 0.0));
  t634[2038ULL] = 1;
  t634[2039ULL] = 1;
  t634[2040ULL] = (int32_T)((X[177ULL] * X[177ULL] + 5.8094731428156895E-13 ==
    X[177ULL] * X[177ULL] + 5.8094731428156895E-13) && (fabs(X[177ULL] * X
    [177ULL] + 5.8094731428156895E-13) != pmf_get_inf()));
  t634[2041ULL] = (int32_T)((!(X[177ULL] * X[177ULL] + 5.8094731428156895E-13 ==
    X[177ULL] * X[177ULL] + 5.8094731428156895E-13)) || (!(fabs(X[177ULL] * X
    [177ULL] + 5.8094731428156895E-13) != pmf_get_inf())) || (X[177ULL] * X
    [177ULL] + 5.8094731428156895E-13 >= 0.0));
  t634[2042ULL] = 1;
  t634[2043ULL] = 1;
  t634[2044ULL] = (int32_T)((X[177ULL] * X[177ULL] + 4.1024015709531055E-13 ==
    X[177ULL] * X[177ULL] + 4.1024015709531055E-13) && (fabs(X[177ULL] * X
    [177ULL] + 4.1024015709531055E-13) != pmf_get_inf()));
  t634[2045ULL] = (int32_T)((!(X[177ULL] * X[177ULL] + 4.1024015709531055E-13 ==
    X[177ULL] * X[177ULL] + 4.1024015709531055E-13)) || (!(fabs(X[177ULL] * X
    [177ULL] + 4.1024015709531055E-13) != pmf_get_inf())) || (X[177ULL] * X
    [177ULL] + 4.1024015709531055E-13 >= 0.0));
  t634[2046ULL] = 1;
  t634[2047ULL] = 1;
  t634[2048ULL] = 1;
  t634[2049ULL] = 1;
  t634[2050ULL] = 1;
  t634[2051ULL] = (int32_T)((X[444ULL] * X[444ULL] + 2.7104677895120892E-12 ==
    X[444ULL] * X[444ULL] + 2.7104677895120892E-12) && (fabs(X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[2052ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 2.7104677895120892E-12 ==
    X[444ULL] * X[444ULL] + 2.7104677895120892E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[2053ULL] = 1;
  t634[2054ULL] = 1;
  t634[2055ULL] = (int32_T)((X[444ULL] * X[444ULL] + 5.2285258285341208E-12 ==
    X[444ULL] * X[444ULL] + 5.2285258285341208E-12) && (fabs(X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[2056ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 5.2285258285341208E-12 ==
    X[444ULL] * X[444ULL] + 5.2285258285341208E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[2057ULL] = 1;
  t634[2058ULL] = 1;
  t634[2059ULL] = (int32_T)((X[444ULL] * X[444ULL] + 3.6921614138577959E-12 ==
    X[444ULL] * X[444ULL] + 3.6921614138577959E-12) && (fabs(X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[2060ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 3.6921614138577959E-12 ==
    X[444ULL] * X[444ULL] + 3.6921614138577959E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[2061ULL] = (int32_T)(t1551 * 293.15 != 0.0);
  t634[2062ULL] = 1;
  t634[2063ULL] = (int32_T)((!(1.0 - X[449ULL] >= -0.1)) || (((1.0 - X[449ULL])
    - 0.01) / 0.01 < 663.67513503334737) || (1.0 - X[449ULL] >= 0.01));
  t634[2064ULL] = 1;
  t634[2065ULL] = (int32_T)(X[59ULL] != 0.0);
  t634[2066ULL] = (int32_T)(X[457ULL] != 0.0);
  t634[2067ULL] = 1;
  t634[2068ULL] = 1;
  t634[2069ULL] = 1;
  t634[2070ULL] = (int32_T)(t1556 - t1553 != 0.0);
  t634[2071ULL] = 1;
  t634[2072ULL] = 1;
  t634[2073ULL] = (int32_T)((t1554 * t1554 * 9.999999999999999E-14 + fabs(X
    [456ULL] * t1558 * t1553) * 1.0E-9 == t1554 * t1554 * 9.999999999999999E-14
    + fabs(X[456ULL] * t1558 * t1553) * 1.0E-9) && (fabs(t1554 * t1554 *
    9.999999999999999E-14 + fabs(X[456ULL] * t1558 * t1553) * 1.0E-9) !=
    pmf_get_inf()));
  t634[2074ULL] = (int32_T)((!(t1554 * t1554 * 9.999999999999999E-14 + fabs(X
    [456ULL] * t1558 * t1553) * 1.0E-9 == t1554 * t1554 * 9.999999999999999E-14
    + fabs(X[456ULL] * t1558 * t1553) * 1.0E-9)) || (!(fabs(t1554 * t1554 *
    9.999999999999999E-14 + fabs(X[456ULL] * t1558 * t1553) * 1.0E-9) !=
    pmf_get_inf())) || (t1554 * t1554 * 9.999999999999999E-14 + fabs(X[456ULL] *
    t1558 * t1553) * 1.0E-9 >= 0.0));
  t634[2075ULL] = 1;
  t634[2076ULL] = 1;
  t634[2077ULL] = (int32_T)(t1553 != 0.0);
  t634[2078ULL] = (int32_T)((!(t1553 != 0.0)) || (X[456ULL] != 0.0));
  t634[2079ULL] = 1;
  t634[2080ULL] = (int32_T)((!(t1553 != 0.0)) || ((t1553 != 0.0) && (!(X[456ULL]
    != 0.0))) || (fabs(t1805 / (t1553 == 0.0 ? 1.0E-16 : t1553) / (X[456ULL] ==
    0.0 ? 1.0E-16 : X[456ULL])) >= 0.0));
  t634[2081ULL] = (int32_T)(t1564 * 0.0019634954084936209 != 0.0);
  t634[2082ULL] = (int32_T)(X[58ULL] * t1553 != 0.0);
  t634[2083ULL] = (int32_T)(t1570 * 9.8174770424681068E-6 != 0.0);
  t634[2084ULL] = (int32_T)(t1572 != 0.0);
  t634[2085ULL] = (int32_T)((!(t1572 != 0.0)) || (6.9 / (t1572 == 0.0 ? 1.0E-16 :
    t1572) + 2.8767404433520813E-5 > 0.0));
  t634[2086ULL] = 1;
  t634[2087ULL] = 1;
  t634[2088ULL] = (int32_T)((!(t1572 != 0.0)) || ((t1572 != 0.0) && (!(6.9 /
    (t1572 == 0.0 ? 1.0E-16 : t1572) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1572 == 0.0 ? 1.0E-16 : t1572) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1572 == 0.0 ? 1.0E-16 : t1572) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2089ULL] = (int32_T)(t1570 * 3.855314219175531E-7 != 0.0);
  t634[2090ULL] = 1;
  t634[2091ULL] = 1;
  t634[2092ULL] = 1;
  t634[2093ULL] = 1;
  t634[2094ULL] = (int32_T)(X[59ULL] != 0.0);
  t634[2095ULL] = (int32_T)(X[461ULL] != 0.0);
  t634[2096ULL] = 1;
  t634[2097ULL] = 1;
  t634[2098ULL] = 1;
  t634[2099ULL] = (int32_T)(t1571 - t1553 != 0.0);
  t634[2100ULL] = 1;
  t634[2101ULL] = 1;
  t634[2102ULL] = (int32_T)
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9 ==
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9) && (fabs
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
       9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9) !=
      pmf_get_inf()));
  t634[2103ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
        9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9 ==
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
        9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9)) ||
     (!(fabs(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
             9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9)
        != pmf_get_inf())) ||
     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_BI *
      9.999999999999999E-14 + fabs(X[460ULL] * t1550 * t1553) * 1.0E-9 >= 0.0));
  t634[2104ULL] = 1;
  t634[2105ULL] = 1;
  t634[2106ULL] = (int32_T)(t1553 != 0.0);
  t634[2107ULL] = (int32_T)((!(t1553 != 0.0)) || (X[460ULL] != 0.0));
  t634[2108ULL] = 1;
  t634[2109ULL] = (int32_T)((!(t1553 != 0.0)) || ((t1553 != 0.0) && (!(X[460ULL]
    != 0.0))) || (fabs(t1825 / (t1553 == 0.0 ? 1.0E-16 : t1553) / (X[460ULL] ==
    0.0 ? 1.0E-16 : X[460ULL])) >= 0.0));
  t634[2110ULL] = (int32_T)(t1564 * 0.0019634954084936209 != 0.0);
  t634[2111ULL] = (int32_T)(t1570 * 9.8174770424681068E-6 != 0.0);
  t634[2112ULL] = (int32_T)(t1580 != 0.0);
  t634[2113ULL] = (int32_T)((!(t1580 != 0.0)) || (6.9 / (t1580 == 0.0 ? 1.0E-16 :
    t1580) + 2.8767404433520813E-5 > 0.0));
  t634[2114ULL] = 1;
  t634[2115ULL] = 1;
  t634[2116ULL] = (int32_T)((!(t1580 != 0.0)) || ((t1580 != 0.0) && (!(6.9 /
    (t1580 == 0.0 ? 1.0E-16 : t1580) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1580 == 0.0 ? 1.0E-16 : t1580) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1580 == 0.0 ? 1.0E-16 : t1580) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2117ULL] = (int32_T)(t1570 * 3.855314219175531E-7 != 0.0);
  t634[2118ULL] = 1;
  t634[2119ULL] = 1;
  t634[2120ULL] = 1;
  t634[2121ULL] = 1;
  t634[2122ULL] = (int32_T)(t1567 != 0.0);
  t634[2123ULL] = (int32_T)(t1573 != 0.0);
  t634[2124ULL] = 1;
  t634[2125ULL] = (int32_T)((!(1.0 - X[60ULL] >= -0.1)) || (((1.0 - X[60ULL]) -
    0.01) / 0.01 < 663.67513503334737) || (1.0 - X[60ULL] >= 0.01));
  t634[2126ULL] = 1;
  t634[2127ULL] = (int32_T)(intrm_sf_mf_1576 != 0.0);
  t634[2128ULL] = (int32_T)(X[59ULL] * 100000.0 > 0.0);
  t634[2129ULL] = (int32_T)((!(X[59ULL] * 100000.0 > 0.0)) || (pmf_log(X[59ULL] *
    100000.0) - t103[0ULL] < 663.67513503334737));
  t634[2130ULL] = 1;
  t634[2131ULL] = (int32_T)((!(intrm_sf_mf_1517 >= 1.0)) || ((intrm_sf_mf_1517 -
    1.0) * 461.523 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_R_ag_I !=
    0.0));
  t634[2132ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_x_ws_I * 0.01 != 0.0);
  t634[2133ULL] = 1;
  t634[2134ULL] = 1;
  t634[2135ULL] = 1;
  t634[2136ULL] = 1;
  t634[2137ULL] = (int32_T)(t1234 != 0.0);
  t634[2138ULL] = (int32_T)(t1839 / 2.0 * 0.0019634954084936209 != 0.0);
  t634[2139ULL] = 1;
  t634[2140ULL] = (int32_T)(t1205 != 0.0);
  t634[2141ULL] = (int32_T)((!(t1205 != 0.0)) || (6.9 / (t1205 == 0.0 ? 1.0E-16 :
    t1205) + 2.8767404433520813E-5 > 0.0));
  t634[2142ULL] = 1;
  t634[2143ULL] = 1;
  t634[2144ULL] = (int32_T)((!(t1205 != 0.0)) || ((t1205 != 0.0) && (!(6.9 /
    (t1205 == 0.0 ? 1.0E-16 : t1205) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1205 == 0.0 ? 1.0E-16 : t1205) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1205 == 0.0 ? 1.0E-16 : t1205) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2145ULL] = (int32_T)((t1589 / 8.0 == t1589 / 8.0) && (fabs(t1589 / 8.0)
    != pmf_get_inf()));
  t634[2146ULL] = (int32_T)((!(t1589 / 8.0 == t1589 / 8.0)) || (!(fabs(t1589 /
    8.0) != pmf_get_inf())) || (t1589 / 8.0 >= 0.0));
  t634[2147ULL] = 1;
  t634[2148ULL] = (int32_T)(t1588 >= 0.0);
  t634[2149ULL] = (int32_T)((!(t1589 / 8.0 == t1589 / 8.0)) || (!(fabs(t1589 /
    8.0) != pmf_get_inf())) || ((t1589 / 8.0 == t1589 / 8.0) && (fabs(t1589 /
    8.0) != pmf_get_inf()) && (!(t1589 / 8.0 >= 0.0))) || (!(t1588 >= 0.0)) ||
    ((pmf_pow(t1588, 0.66666666666666663) - 1.0) * pmf_sqrt(t1589 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[2150ULL] = 1;
  t634[2151ULL] = 1;
  t634[2152ULL] = 1;
  t634[2153ULL] = 1;
  t634[2154ULL] = (int32_T)(t1844 / 2.0 != 0.0);
  t634[2155ULL] = 1;
  t2357 = t1844 / 2.0;
  t634[2156ULL] = (int32_T)((!(t1562 > t1850 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1562 != 0.0));
  t634[2157ULL] = 1;
  t634[2158ULL] = 1;
  t2357 = t1844 / 2.0;
  t634[2159ULL] = (int32_T)((!(t1562 > t1850 / 0.0019634954084936209 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1562 != 0.0)) || (t1844 / 2.0 != 0.0));
  t634[2160ULL] = (int32_T)(-t1591 < 663.67513503334737);
  t634[2161ULL] = (int32_T)(t1593 != 0.0);
  t634[2162ULL] = (int32_T)(t1861 / 2.0 * 0.0019634954084936209 != 0.0);
  t634[2163ULL] = 1;
  t634[2164ULL] = (int32_T)(t1560 != 0.0);
  t634[2165ULL] = (int32_T)((!(t1560 != 0.0)) || (6.9 / (t1560 == 0.0 ? 1.0E-16 :
    t1560) + 2.8767404433520813E-5 > 0.0));
  t634[2166ULL] = 1;
  t634[2167ULL] = 1;
  t634[2168ULL] = (int32_T)((!(t1560 != 0.0)) || ((t1560 != 0.0) && (!(6.9 /
    (t1560 == 0.0 ? 1.0E-16 : t1560) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1560 == 0.0 ? 1.0E-16 : t1560) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1560 == 0.0 ? 1.0E-16 : t1560) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2169ULL] = (int32_T)((intrm_sf_mf_1567 / 8.0 == intrm_sf_mf_1567 / 8.0) &&
    (fabs(intrm_sf_mf_1567 / 8.0) != pmf_get_inf()));
  t634[2170ULL] = (int32_T)((!(intrm_sf_mf_1567 / 8.0 == intrm_sf_mf_1567 / 8.0))
    || (!(fabs(intrm_sf_mf_1567 / 8.0) != pmf_get_inf())) || (intrm_sf_mf_1567 /
    8.0 >= 0.0));
  t634[2171ULL] = 1;
  t634[2172ULL] = (int32_T)(t1594 >= 0.0);
  t634[2173ULL] = (int32_T)((!(intrm_sf_mf_1567 / 8.0 == intrm_sf_mf_1567 / 8.0))
    || (!(fabs(intrm_sf_mf_1567 / 8.0) != pmf_get_inf())) || ((intrm_sf_mf_1567 /
    8.0 == intrm_sf_mf_1567 / 8.0) && (fabs(intrm_sf_mf_1567 / 8.0) !=
    pmf_get_inf()) && (!(intrm_sf_mf_1567 / 8.0 >= 0.0))) || (!(t1594 >= 0.0)) ||
    ((pmf_pow(t1594, 0.66666666666666663) - 1.0) * pmf_sqrt(intrm_sf_mf_1567 /
    8.0) * 12.7 + 1.0 != 0.0));
  t634[2174ULL] = 1;
  t634[2175ULL] = 1;
  t634[2176ULL] = 1;
  t634[2177ULL] = 1;
  t634[2178ULL] = (int32_T)(t1863 / 2.0 != 0.0);
  t634[2179ULL] = 1;
  t2357 = t1863 / 2.0;
  t634[2180ULL] = (int32_T)((!(intrm_sf_mf_1564 > t1868 / 0.0019634954084936209 /
    (t2357 == 0.0 ? 1.0E-16 : t2357) / 30.0)) || (intrm_sf_mf_1564 != 0.0));
  t634[2181ULL] = 1;
  t634[2182ULL] = 1;
  t2357 = t1863 / 2.0;
  t634[2183ULL] = (int32_T)((!(intrm_sf_mf_1564 > t1868 / 0.0019634954084936209 /
    (t2357 == 0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(intrm_sf_mf_1564 != 0.0)) ||
    (t1863 / 2.0 != 0.0));
  t634[2184ULL] = (int32_T)(-intrm_sf_mf_1572 < 663.67513503334737);
  t634[2185ULL] = 1;
  t634[2186ULL] = 1;
  t634[2187ULL] = (int32_T)(X[196ULL] != 0.0);
  t634[2188ULL] = 1;
  t634[2189ULL] = 1;
  t634[2190ULL] = 1;
  t634[2191ULL] = 1;
  t634[2192ULL] = 1;
  t634[2193ULL] = (int32_T)((X[201ULL] * X[201ULL] + 3.0116308772356542E-13 ==
    X[201ULL] * X[201ULL] + 3.0116308772356542E-13) && (fabs(X[201ULL] * X
    [201ULL] + 3.0116308772356542E-13) != pmf_get_inf()));
  t634[2194ULL] = (int32_T)((!(X[201ULL] * X[201ULL] + 3.0116308772356542E-13 ==
    X[201ULL] * X[201ULL] + 3.0116308772356542E-13)) || (!(fabs(X[201ULL] * X
    [201ULL] + 3.0116308772356542E-13) != pmf_get_inf())) || (X[201ULL] * X
    [201ULL] + 3.0116308772356542E-13 >= 0.0));
  t634[2195ULL] = 1;
  t634[2196ULL] = 1;
  t634[2197ULL] = (int32_T)((X[201ULL] * X[201ULL] + 5.8094731428156895E-13 ==
    X[201ULL] * X[201ULL] + 5.8094731428156895E-13) && (fabs(X[201ULL] * X
    [201ULL] + 5.8094731428156895E-13) != pmf_get_inf()));
  t634[2198ULL] = (int32_T)((!(X[201ULL] * X[201ULL] + 5.8094731428156895E-13 ==
    X[201ULL] * X[201ULL] + 5.8094731428156895E-13)) || (!(fabs(X[201ULL] * X
    [201ULL] + 5.8094731428156895E-13) != pmf_get_inf())) || (X[201ULL] * X
    [201ULL] + 5.8094731428156895E-13 >= 0.0));
  t634[2199ULL] = 1;
  t634[2200ULL] = 1;
  t634[2201ULL] = (int32_T)((X[201ULL] * X[201ULL] + 4.1024015709531055E-13 ==
    X[201ULL] * X[201ULL] + 4.1024015709531055E-13) && (fabs(X[201ULL] * X
    [201ULL] + 4.1024015709531055E-13) != pmf_get_inf()));
  t634[2202ULL] = (int32_T)((!(X[201ULL] * X[201ULL] + 4.1024015709531055E-13 ==
    X[201ULL] * X[201ULL] + 4.1024015709531055E-13)) || (!(fabs(X[201ULL] * X
    [201ULL] + 4.1024015709531055E-13) != pmf_get_inf())) || (X[201ULL] * X
    [201ULL] + 4.1024015709531055E-13 >= 0.0));
  t634[2203ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p != 0.0);
  t634[2204ULL] = 1;
  t634[2205ULL] = 1;
  t634[2206ULL] = 1;
  t634[2207ULL] = 1;
  t634[2208ULL] = 1;
  t634[2209ULL] = (int32_T)((X[444ULL] * X[444ULL] + 3.0116308772356542E-13 ==
    X[444ULL] * X[444ULL] + 3.0116308772356542E-13) && (fabs(X[444ULL] * X
    [444ULL] + 3.0116308772356542E-13) != pmf_get_inf()));
  t634[2210ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 3.0116308772356542E-13 ==
    X[444ULL] * X[444ULL] + 3.0116308772356542E-13)) || (!(fabs(X[444ULL] * X
    [444ULL] + 3.0116308772356542E-13) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 3.0116308772356542E-13 >= 0.0));
  t634[2211ULL] = 1;
  t634[2212ULL] = 1;
  t634[2213ULL] = (int32_T)((X[444ULL] * X[444ULL] + 5.8094731428156895E-13 ==
    X[444ULL] * X[444ULL] + 5.8094731428156895E-13) && (fabs(X[444ULL] * X
    [444ULL] + 5.8094731428156895E-13) != pmf_get_inf()));
  t634[2214ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 5.8094731428156895E-13 ==
    X[444ULL] * X[444ULL] + 5.8094731428156895E-13)) || (!(fabs(X[444ULL] * X
    [444ULL] + 5.8094731428156895E-13) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 5.8094731428156895E-13 >= 0.0));
  t634[2215ULL] = 1;
  t634[2216ULL] = 1;
  t634[2217ULL] = (int32_T)((X[444ULL] * X[444ULL] + 4.1024015709531055E-13 ==
    X[444ULL] * X[444ULL] + 4.1024015709531055E-13) && (fabs(X[444ULL] * X
    [444ULL] + 4.1024015709531055E-13) != pmf_get_inf()));
  t634[2218ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 4.1024015709531055E-13 ==
    X[444ULL] * X[444ULL] + 4.1024015709531055E-13)) || (!(fabs(X[444ULL] * X
    [444ULL] + 4.1024015709531055E-13) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 4.1024015709531055E-13 >= 0.0));
  t634[2219ULL] = (int32_T)(X[470ULL] * t1602 != 0.0);
  t634[2220ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p != 0.0);
  t634[2221ULL] = (int32_T)(X[470ULL] != 0.0);
  t634[2222ULL] = (int32_T)(X[470ULL] != 0.0);
  t634[2223ULL] = 1;
  t634[2224ULL] = (int32_T)((!(X[444ULL] > 0.0)) || (t1586 != 0.0));
  t634[2225ULL] = 1;
  t634[2226ULL] = 1;
  t634[2227ULL] = 1;
  t634[2228ULL] = (int32_T)((!(X[444ULL] > 0.0)) || (!(t1586 != 0.0)) || (t1603
    != 0.0));
  t634[2229ULL] = 1;
  t634[2230ULL] = (int32_T)((!(X[444ULL] < 0.0)) || (X[444ULL] > 0.0) || (t1586
    != 0.0));
  t634[2231ULL] = 1;
  t634[2232ULL] = 1;
  t634[2233ULL] = 1;
  t634[2234ULL] = (int32_T)((!(X[444ULL] < 0.0)) || (!(t1586 != 0.0)) || (X
    [444ULL] > 0.0) || (t1603 != 0.0));
  t634[2235ULL] = 1;
  t634[2236ULL] = 1;
  t634[2237ULL] = (int32_T)(t1609 != 0.0);
  t634[2238ULL] = 1;
  t634[2239ULL] = 1;
  t634[2240ULL] = 1;
  t634[2241ULL] = 1;
  t634[2242ULL] = 1;
  t634[2243ULL] = 1;
  t634[2244ULL] = 1;
  t634[2245ULL] = 1;
  t634[2246ULL] = 1;
  t634[2247ULL] = 1;
  t634[2248ULL] = (int32_T)(intrm_sf_mf_1642 - t1602 != 0.0);
  t634[2249ULL] = 1;
  t634[2250ULL] = 1;
  t634[2251ULL] = (int32_T)(t1602 != 0.0);
  t634[2252ULL] = (int32_T)((!(t1602 != 0.0)) || (X[470ULL] != 0.0));
  t634[2253ULL] = 1;
  t634[2254ULL] = (int32_T)((!(t1602 != 0.0)) || ((t1602 != 0.0) && (!(X[470ULL]
    != 0.0))) || (fabs(t1892 / (t1602 == 0.0 ? 1.0E-16 : t1602) / (X[470ULL] ==
    0.0 ? 1.0E-16 : X[470ULL])) >= 0.0));
  t634[2255ULL] = (int32_T)((!(X[444ULL] >= 0.0)) || (t1599 != 0.0));
  t634[2256ULL] = (int32_T)((X[444ULL] >= 0.0) || (t1599 != 0.0));
  t634[2257ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p != 0.0);
  t634[2258ULL] = 1;
  t634[2259ULL] = 1;
  t634[2260ULL] = 1;
  t634[2261ULL] = 1;
  t634[2262ULL] = 1;
  t634[2263ULL] = (int32_T)((X[444ULL] * X[444ULL] + 2.7104677895120892E-12 ==
    X[444ULL] * X[444ULL] + 2.7104677895120892E-12) && (fabs(X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[2264ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 2.7104677895120892E-12 ==
    X[444ULL] * X[444ULL] + 2.7104677895120892E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[2265ULL] = 1;
  t634[2266ULL] = 1;
  t634[2267ULL] = (int32_T)((X[444ULL] * X[444ULL] + 5.2285258285341208E-12 ==
    X[444ULL] * X[444ULL] + 5.2285258285341208E-12) && (fabs(X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[2268ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 5.2285258285341208E-12 ==
    X[444ULL] * X[444ULL] + 5.2285258285341208E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[2269ULL] = 1;
  t634[2270ULL] = 1;
  t634[2271ULL] = (int32_T)((X[444ULL] * X[444ULL] + 3.6921614138577959E-12 ==
    X[444ULL] * X[444ULL] + 3.6921614138577959E-12) && (fabs(X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[2272ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 3.6921614138577959E-12 ==
    X[444ULL] * X[444ULL] + 3.6921614138577959E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[2273ULL] = 1;
  t634[2274ULL] = 1;
  t634[2275ULL] = 1;
  t634[2276ULL] = 1;
  t634[2277ULL] = 1;
  t634[2278ULL] = (int32_T)((X[444ULL] * X[444ULL] + 2.7104677895120892E-12 ==
    X[444ULL] * X[444ULL] + 2.7104677895120892E-12) && (fabs(X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12) != pmf_get_inf()));
  t634[2279ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 2.7104677895120892E-12 ==
    X[444ULL] * X[444ULL] + 2.7104677895120892E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 2.7104677895120892E-12 >= 0.0));
  t634[2280ULL] = 1;
  t634[2281ULL] = 1;
  t634[2282ULL] = (int32_T)((X[444ULL] * X[444ULL] + 5.2285258285341208E-12 ==
    X[444ULL] * X[444ULL] + 5.2285258285341208E-12) && (fabs(X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12) != pmf_get_inf()));
  t634[2283ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 5.2285258285341208E-12 ==
    X[444ULL] * X[444ULL] + 5.2285258285341208E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 5.2285258285341208E-12 >= 0.0));
  t634[2284ULL] = 1;
  t634[2285ULL] = 1;
  t634[2286ULL] = (int32_T)((X[444ULL] * X[444ULL] + 3.6921614138577959E-12 ==
    X[444ULL] * X[444ULL] + 3.6921614138577959E-12) && (fabs(X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12) != pmf_get_inf()));
  t634[2287ULL] = (int32_T)((!(X[444ULL] * X[444ULL] + 3.6921614138577959E-12 ==
    X[444ULL] * X[444ULL] + 3.6921614138577959E-12)) || (!(fabs(X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12) != pmf_get_inf())) || (X[444ULL] * X
    [444ULL] + 3.6921614138577959E-12 >= 0.0));
  t634[2288ULL] = (int32_T)(t1598 != 0.0);
  t634[2289ULL] = 1;
  t634[2290ULL] = (int32_T)((!(t1598 != 0.0)) || (fabs(t1603 * 2.0 / (t1598 ==
    0.0 ? 1.0E-16 : t1598)) >= 0.0));
  t634[2291ULL] = 1;
  t634[2292ULL] = 1;
  t634[2293ULL] = (int32_T)(t1384 * 0.0019634954084936209 != 0.0);
  t634[2294ULL] = (int32_T)(t1608 != 0.0);
  t634[2295ULL] = (int32_T)((!(t1608 != 0.0)) || (6.9 / (t1608 == 0.0 ? 1.0E-16 :
    t1608) + 2.8767404433520813E-5 > 0.0));
  t634[2296ULL] = 1;
  t634[2297ULL] = 1;
  t634[2298ULL] = (int32_T)((!(t1608 != 0.0)) || ((t1608 != 0.0) && (!(6.9 /
    (t1608 == 0.0 ? 1.0E-16 : t1608) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1608 == 0.0 ? 1.0E-16 : t1608) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1608 == 0.0 ? 1.0E-16 : t1608) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2299ULL] = (int32_T)(t1391 * 9.8174770424681068E-6 != 0.0);
  t634[2300ULL] = (int32_T)(t1391 * 3.855314219175531E-7 != 0.0);
  t634[2301ULL] = 1;
  t634[2302ULL] = 1;
  t634[2303ULL] = 1;
  t634[2304ULL] = 1;
  t634[2305ULL] = (int32_T)(t1384 * 0.0019634954084936209 != 0.0);
  t634[2306ULL] = (int32_T)(t1610 != 0.0);
  t634[2307ULL] = (int32_T)((!(t1610 != 0.0)) || (6.9 / (t1610 == 0.0 ? 1.0E-16 :
    t1610) + 2.8767404433520813E-5 > 0.0));
  t634[2308ULL] = 1;
  t634[2309ULL] = 1;
  t634[2310ULL] = (int32_T)((!(t1610 != 0.0)) || ((t1610 != 0.0) && (!(6.9 /
    (t1610 == 0.0 ? 1.0E-16 : t1610) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1610 == 0.0 ? 1.0E-16 : t1610) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1610 == 0.0 ? 1.0E-16 : t1610) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2311ULL] = (int32_T)(t1391 * 9.8174770424681068E-6 != 0.0);
  t634[2312ULL] = (int32_T)(t1391 * 3.855314219175531E-7 != 0.0);
  t634[2313ULL] = 1;
  t634[2314ULL] = 1;
  t634[2315ULL] = 1;
  t634[2316ULL] = 1;
  t634[2317ULL] = 1;
  t634[2318ULL] = 1;
  t634[2319ULL] = 1;
  t634[2320ULL] = 1;
  t634[2321ULL] = 1;
  t634[2322ULL] = (int32_T)(t1434 * 0.32 != 0.0);
  t634[2323ULL] = (int32_T)(t1611 != 0.0);
  t634[2324ULL] = (int32_T)((!(t1611 != 0.0)) || (6.9 / (t1611 == 0.0 ? 1.0E-16 :
    t1611) + 0.00017169489553429715 > 0.0));
  t634[2325ULL] = 1;
  t634[2326ULL] = 1;
  t634[2327ULL] = (int32_T)((!(t1611 != 0.0)) || ((t1611 != 0.0) && (!(6.9 /
    (t1611 == 0.0 ? 1.0E-16 : t1611) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1611 == 0.0 ? 1.0E-16 : t1611) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1611 == 0.0 ? 1.0E-16 : t1611) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2328ULL] = (int32_T)(t1439 * 6.4000000000000011E-5 != 0.0);
  t634[2329ULL] = (int32_T)(t1439 * 0.0020480000000000003 != 0.0);
  t634[2330ULL] = 1;
  t634[2331ULL] = 1;
  t634[2332ULL] = 1;
  t634[2333ULL] = 1;
  t634[2334ULL] = (int32_T)(t1434 * 0.32 != 0.0);
  t634[2335ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 != 0.0);
  t634[2336ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 != 0.0))
     || (6.9 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 ==
                0.0 ? 1.0E-16 :
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12)
         + 0.00017169489553429715 > 0.0));
  t634[2337ULL] = 1;
  t634[2338ULL] = 1;
  t634[2339ULL] = (int32_T)
    ((!(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 != 0.0))
     || ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 != 0.0)
         && (!(6.9 /
               (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 ==
                0.0 ? 1.0E-16 :
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12)
               + 0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
       (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 == 0.0 ?
        1.0E-16 :
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12) +
       0.00017169489553429715) * pmf_log10(6.9 /
       (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 == 0.0 ?
        1.0E-16 :
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12) +
       0.00017169489553429715) * 3.24 != 0.0));
  t634[2340ULL] = (int32_T)(t1439 * 6.4000000000000011E-5 != 0.0);
  t634[2341ULL] = (int32_T)(t1439 * 0.0020480000000000003 != 0.0);
  t634[2342ULL] = 1;
  t634[2343ULL] = 1;
  t634[2344ULL] = 1;
  t634[2345ULL] = 1;
  t634[2346ULL] = 1;
  t634[2347ULL] = 1;
  t634[2348ULL] = 1;
  t634[2349ULL] = 1;
  t634[2350ULL] = 1;
  t634[2351ULL] = (int32_T)(t1480 * 0.32 != 0.0);
  t634[2352ULL] = (int32_T)(intrm_sf_mf_1320 != 0.0);
  t634[2353ULL] = (int32_T)((!(intrm_sf_mf_1320 != 0.0)) || (6.9 /
    (intrm_sf_mf_1320 == 0.0 ? 1.0E-16 : intrm_sf_mf_1320) +
    0.00017169489553429715 > 0.0));
  t634[2354ULL] = 1;
  t634[2355ULL] = 1;
  t634[2356ULL] = (int32_T)((!(intrm_sf_mf_1320 != 0.0)) || ((intrm_sf_mf_1320
    != 0.0) && (!(6.9 / (intrm_sf_mf_1320 == 0.0 ? 1.0E-16 : intrm_sf_mf_1320) +
                  0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_1320 == 0.0 ? 1.0E-16 : intrm_sf_mf_1320) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_1320 == 0.0 ? 1.0E-16
    : intrm_sf_mf_1320) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[2357ULL] = (int32_T)(t1486 * 6.4000000000000011E-5 != 0.0);
  t634[2358ULL] = (int32_T)(t1486 * 0.0020480000000000003 != 0.0);
  t634[2359ULL] = 1;
  t634[2360ULL] = 1;
  t634[2361ULL] = 1;
  t634[2362ULL] = 1;
  t634[2363ULL] = (int32_T)(t1480 * 0.32 != 0.0);
  t634[2364ULL] = (int32_T)(t1019 != 0.0);
  t634[2365ULL] = (int32_T)((!(t1019 != 0.0)) || (6.9 / (t1019 == 0.0 ? 1.0E-16 :
    t1019) + 0.00017169489553429715 > 0.0));
  t634[2366ULL] = 1;
  t634[2367ULL] = 1;
  t634[2368ULL] = (int32_T)((!(t1019 != 0.0)) || ((t1019 != 0.0) && (!(6.9 /
    (t1019 == 0.0 ? 1.0E-16 : t1019) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1019 == 0.0 ? 1.0E-16 : t1019) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1019 == 0.0 ? 1.0E-16 : t1019) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2369ULL] = (int32_T)(t1486 * 6.4000000000000011E-5 != 0.0);
  t634[2370ULL] = (int32_T)(t1486 * 0.0020480000000000003 != 0.0);
  t634[2371ULL] = 1;
  t634[2372ULL] = 1;
  t634[2373ULL] = 1;
  t634[2374ULL] = 1;
  t634[2375ULL] = 1;
  t634[2376ULL] = 1;
  t634[2377ULL] = 1;
  t634[2378ULL] = 1;
  t634[2379ULL] = 1;
  t634[2380ULL] = (int32_T)(t1521 * 0.0019634954084936209 != 0.0);
  t634[2381ULL] = (int32_T)(t1081 != 0.0);
  t634[2382ULL] = (int32_T)((!(t1081 != 0.0)) || (6.9 / (t1081 == 0.0 ? 1.0E-16 :
    t1081) + 2.8767404433520813E-5 > 0.0));
  t634[2383ULL] = 1;
  t634[2384ULL] = 1;
  t634[2385ULL] = (int32_T)((!(t1081 != 0.0)) || ((t1081 != 0.0) && (!(6.9 /
    (t1081 == 0.0 ? 1.0E-16 : t1081) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1081 == 0.0 ? 1.0E-16 : t1081) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1081 == 0.0 ? 1.0E-16 : t1081) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2386ULL] = (int32_T)(t1527 * 9.8174770424681068E-6 != 0.0);
  t634[2387ULL] = (int32_T)(t1527 * 3.855314219175531E-7 != 0.0);
  t634[2388ULL] = 1;
  t634[2389ULL] = 1;
  t634[2390ULL] = 1;
  t634[2391ULL] = 1;
  t634[2392ULL] = (int32_T)(t1521 * 0.0019634954084936209 != 0.0);
  t634[2393ULL] = (int32_T)(t1565 != 0.0);
  t634[2394ULL] = (int32_T)((!(t1565 != 0.0)) || (6.9 / (t1565 == 0.0 ? 1.0E-16 :
    t1565) + 2.8767404433520813E-5 > 0.0));
  t634[2395ULL] = 1;
  t634[2396ULL] = 1;
  t634[2397ULL] = (int32_T)((!(t1565 != 0.0)) || ((t1565 != 0.0) && (!(6.9 /
    (t1565 == 0.0 ? 1.0E-16 : t1565) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1565 == 0.0 ? 1.0E-16 : t1565) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1565 == 0.0 ? 1.0E-16 : t1565) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2398ULL] = (int32_T)(t1527 * 9.8174770424681068E-6 != 0.0);
  t634[2399ULL] = (int32_T)(t1095 * 7.8539816339744827E-5 != 0.0);
  t634[2400ULL] = (int32_T)(t1527 * 3.855314219175531E-7 != 0.0);
  t634[2401ULL] = 1;
  t634[2402ULL] = 1;
  t634[2403ULL] = 1;
  t634[2404ULL] = 1;
  t634[2405ULL] = (int32_T)(intrm_sf_mf_148 != 0.0);
  t634[2406ULL] = (int32_T)((!(intrm_sf_mf_148 != 0.0)) || (6.9 /
    (intrm_sf_mf_148 == 0.0 ? 1.0E-16 : intrm_sf_mf_148) +
    0.00017169489553429715 > 0.0));
  t634[2407ULL] = 1;
  t634[2408ULL] = 1;
  t634[2409ULL] = (int32_T)((!(intrm_sf_mf_148 != 0.0)) || ((intrm_sf_mf_148 !=
    0.0) && (!(6.9 / (intrm_sf_mf_148 == 0.0 ? 1.0E-16 : intrm_sf_mf_148) +
               0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_148 == 0.0 ? 1.0E-16 : intrm_sf_mf_148) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_148 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_148) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[2410ULL] = (int32_T)(t1101 * 1.5707963267948965E-8 != 0.0);
  t634[2411ULL] = (int32_T)(t1101 * 1.2337005501361697E-10 != 0.0);
  t634[2412ULL] = 1;
  t634[2413ULL] = 1;
  t634[2414ULL] = 1;
  t634[2415ULL] = 1;
  t634[2416ULL] = 1;
  t634[2417ULL] = 1;
  t634[2418ULL] = 1;
  t634[2419ULL] = 1;
  t634[2420ULL] = 1;
  t634[2421ULL] = (int32_T)(t1095 * 7.8539816339744827E-5 != 0.0);
  t634[2422ULL] = (int32_T)(t1102 != 0.0);
  t634[2423ULL] = (int32_T)((!(t1102 != 0.0)) || (6.9 / (t1102 == 0.0 ? 1.0E-16 :
    t1102) + 0.00017169489553429715 > 0.0));
  t634[2424ULL] = 1;
  t634[2425ULL] = 1;
  t634[2426ULL] = (int32_T)((!(t1102 != 0.0)) || ((t1102 != 0.0) && (!(6.9 /
    (t1102 == 0.0 ? 1.0E-16 : t1102) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1102 == 0.0 ? 1.0E-16 : t1102) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1102 == 0.0 ? 1.0E-16 : t1102) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2427ULL] = (int32_T)(t1101 * 1.5707963267948965E-8 != 0.0);
  t634[2428ULL] = (int32_T)(t1101 * 1.2337005501361697E-10 != 0.0);
  t634[2429ULL] = (int32_T)(t1564 * 0.0019634954084936209 != 0.0);
  t634[2430ULL] = (int32_T)(t1615 != 0.0);
  t634[2431ULL] = (int32_T)((!(t1615 != 0.0)) || (6.9 / (t1615 == 0.0 ? 1.0E-16 :
    t1615) + 2.8767404433520813E-5 > 0.0));
  t634[2432ULL] = 1;
  t634[2433ULL] = 1;
  t634[2434ULL] = (int32_T)((!(t1615 != 0.0)) || ((t1615 != 0.0) && (!(6.9 /
    (t1615 == 0.0 ? 1.0E-16 : t1615) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1615 == 0.0 ? 1.0E-16 : t1615) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1615 == 0.0 ? 1.0E-16 : t1615) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2435ULL] = (int32_T)(t1570 * 9.8174770424681068E-6 != 0.0);
  t634[2436ULL] = (int32_T)(t1570 * 3.855314219175531E-7 != 0.0);
  t634[2437ULL] = 1;
  t634[2438ULL] = 1;
  t634[2439ULL] = 1;
  t634[2440ULL] = 1;
  t634[2441ULL] = (int32_T)(t1564 * 0.0019634954084936209 != 0.0);
  t634[2442ULL] = (int32_T)(t1616 != 0.0);
  t634[2443ULL] = (int32_T)((!(t1616 != 0.0)) || (6.9 / (t1616 == 0.0 ? 1.0E-16 :
    t1616) + 2.8767404433520813E-5 > 0.0));
  t634[2444ULL] = 1;
  t634[2445ULL] = 1;
  t634[2446ULL] = (int32_T)((!(t1616 != 0.0)) || ((t1616 != 0.0) && (!(6.9 /
    (t1616 == 0.0 ? 1.0E-16 : t1616) + 2.8767404433520813E-5 > 0.0))) ||
    (pmf_log10(6.9 / (t1616 == 0.0 ? 1.0E-16 : t1616) + 2.8767404433520813E-5) *
     pmf_log10(6.9 / (t1616 == 0.0 ? 1.0E-16 : t1616) + 2.8767404433520813E-5) *
     3.24 != 0.0));
  t634[2447ULL] = (int32_T)(t1570 * 9.8174770424681068E-6 != 0.0);
  t634[2448ULL] = (int32_T)(t1570 * 3.855314219175531E-7 != 0.0);
  t634[2449ULL] = 1;
  t634[2450ULL] = 1;
  t634[2451ULL] = 1;
  t634[2452ULL] = 1;
  t634[2453ULL] = 1;
  t634[2454ULL] = 1;
  t634[2455ULL] = 1;
  t634[2456ULL] = 1;
  t634[2457ULL] = (int32_T)(t1609 - (-t1609) != 0.0);
  t634[2458ULL] = 1;
  t634[2459ULL] = 1;
  t634[2460ULL] = 1;
  t634[2461ULL] = 1;
  t634[2462ULL] = (int32_T)(-t1089 - t1089 * -0.95 != 0.0);
  t634[2463ULL] = 1;
  t634[2464ULL] = 1;
  t634[2465ULL] = 1;
  t634[2466ULL] = 1;
  t634[2467ULL] = (int32_T)(-t1018 - t1018 * -0.95 != 0.0);
  t634[2468ULL] = 1;
  t634[2469ULL] = 1;
  t634[2470ULL] = 1;
  t634[2471ULL] = 1;
  t634[2472ULL] = (int32_T)(t1133 - t1133 * 0.95 != 0.0);
  t634[2473ULL] = 1;
  t634[2474ULL] = 1;
  t634[2475ULL] = 1;
  t634[2476ULL] = 1;
  t634[2477ULL] = 1;
  t634[2478ULL] = 1;
  t634[2479ULL] = 1;
  t634[2480ULL] = 1;
  t634[2481ULL] = (int32_T)(-t1150 - t1150 * -0.95 != 0.0);
  t634[2482ULL] = 1;
  t634[2483ULL] = 1;
  t634[2484ULL] = 1;
  t634[2485ULL] = 1;
  t634[2486ULL] = (int32_T)(-t1141 - t1141 * -0.95 != 0.0);
  t634[2487ULL] = 1;
  t634[2488ULL] = 1;
  t634[2489ULL] = 1;
  t634[2490ULL] = 1;
  t634[2491ULL] = (int32_T)
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke -
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_Dp_AI_choke * -0.95 !=
     0.0);
  t634[2492ULL] = 1;
  t634[2493ULL] = 1;
  t634[2494ULL] = 1;
  t634[2495ULL] = 1;
  t634[2496ULL] = (int32_T)(-t1193 - t1193 * -0.95 != 0.0);
  t634[2497ULL] = 1;
  t634[2498ULL] = 1;
  t634[2499ULL] = 1;
  t634[2500ULL] = 1;
  t634[2501ULL] = (int32_T)
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked -
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_Dp_AI_choked * -0.95 !=
     0.0);
  t634[2502ULL] = 1;
  t634[2503ULL] = 1;
  t634[2504ULL] = 1;
  t634[2505ULL] = 1;
  t634[2506ULL] = (int32_T)(-t1310 - t1310 * -0.95 != 0.0);
  t634[2507ULL] = 1;
  t634[2508ULL] = 1;
  t634[2509ULL] = 1;
  t634[2510ULL] = 1;
  t634[2511ULL] = (int32_T)(t1355 - t1355 * 0.95 != 0.0);
  t634[2512ULL] = 1;
  t634[2513ULL] = 1;
  t634[2514ULL] = 1;
  t634[2515ULL] = 1;
  t634[2516ULL] = 1;
  t634[2517ULL] = 1;
  t634[2518ULL] = 1;
  t634[2519ULL] = 1;
  t634[2520ULL] = (int32_T)(t780_idx_0 != 0.0);
  t634[2521ULL] = (int32_T)((!(t780_idx_0 != 0.0)) || (X[338ULL] != 0.0));
  t634[2522ULL] = (int32_T)(-t1381 - t1381 * -0.95 != 0.0);
  t634[2523ULL] = 1;
  t634[2524ULL] = 1;
  t634[2525ULL] = 1;
  t634[2526ULL] = 1;
  t634[2527ULL] = (int32_T)(-t1371 - t1371 * -0.95 != 0.0);
  t634[2528ULL] = 1;
  t634[2529ULL] = 1;
  t634[2530ULL] = 1;
  t634[2531ULL] = 1;
  t634[2532ULL] = (int32_T)(-t1430 - t1430 * -0.95 != 0.0);
  t634[2533ULL] = 1;
  t634[2534ULL] = 1;
  t634[2535ULL] = 1;
  t634[2536ULL] = 1;
  t634[2537ULL] = (int32_T)
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked -
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_Dp_BI_choked * -0.95 !=
     0.0);
  t634[2538ULL] = 1;
  t634[2539ULL] = 1;
  t634[2540ULL] = 1;
  t634[2541ULL] = 1;
  t634[2542ULL] = (int32_T)(-t1475 - t1475 * -0.95 != 0.0);
  t634[2543ULL] = 1;
  t634[2544ULL] = 1;
  t634[2545ULL] = 1;
  t634[2546ULL] = 1;
  t634[2547ULL] = (int32_T)(-t1468 - t1468 * -0.95 != 0.0);
  t634[2548ULL] = 1;
  t634[2549ULL] = 1;
  t634[2550ULL] = 1;
  t634[2551ULL] = 1;
  t634[2552ULL] = (int32_T)(-t1517 - t1517 * -0.95 != 0.0);
  t634[2553ULL] = 1;
  t634[2554ULL] = 1;
  t634[2555ULL] = 1;
  t634[2556ULL] = 1;
  t634[2557ULL] = (int32_T)(-intrm_sf_mf_1338 - intrm_sf_mf_1338 * -0.95 != 0.0);
  t634[2558ULL] = 1;
  t634[2559ULL] = 1;
  t634[2560ULL] = 1;
  t634[2561ULL] = 1;
  t634[2562ULL] = (int32_T)(-t1559 - t1559 * -0.95 != 0.0);
  t634[2563ULL] = 1;
  t634[2564ULL] = 1;
  t634[2565ULL] = 1;
  t634[2566ULL] = 1;
  t634[2567ULL] = (int32_T)(-t1552 - t1552 * -0.95 != 0.0);
  t634[2568ULL] = 1;
  t634[2569ULL] = 1;
  t634[2570ULL] = 1;
  t634[2571ULL] = 1;
  t634[2572ULL] = (int32_T)(t1599 - t1599 * 0.95 != 0.0);
  t634[2573ULL] = 1;
  t634[2574ULL] = 1;
  t634[2575ULL] = 1;
  t634[2576ULL] = 1;
  t634[2577ULL] = 1;
  t634[2578ULL] = 1;
  t634[2579ULL] = 1;
  t634[2580ULL] = 1;
  t634[2581ULL] = (int32_T)(t1142 - (-t1142) != 0.0);
  t634[2582ULL] = 1;
  t634[2583ULL] = 1;
  t634[2584ULL] = 1;
  t634[2585ULL] = 1;
  t634[2586ULL] = 1;
  t634[2587ULL] = 1;
  t634[2588ULL] = 1;
  t634[2589ULL] = 1;
  t634[2590ULL] = 1;
  t634[2591ULL] = (int32_T)(t1153 * 0.32 != 0.0);
  t634[2592ULL] = (int32_T)(t786_idx_0 != 0.0);
  t634[2593ULL] = (int32_T)((!(t786_idx_0 != 0.0)) || (6.9 / (t786_idx_0 == 0.0 ?
    1.0E-16 : t786_idx_0) + 0.00017169489553429715 > 0.0));
  t634[2594ULL] = 1;
  t634[2595ULL] = 1;
  t634[2596ULL] = (int32_T)((!(t786_idx_0 != 0.0)) || ((t786_idx_0 != 0.0) &&
    (!(6.9 / (t786_idx_0 == 0.0 ? 1.0E-16 : t786_idx_0) + 0.00017169489553429715
       > 0.0))) || (pmf_log10(6.9 / (t786_idx_0 == 0.0 ? 1.0E-16 : t786_idx_0) +
    0.00017169489553429715) * pmf_log10(6.9 / (t786_idx_0 == 0.0 ? 1.0E-16 :
    t786_idx_0) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[2597ULL] = (int32_T)(t1158 * 6.4000000000000011E-5 != 0.0);
  t634[2598ULL] = (int32_T)(t1158 * 0.0020480000000000003 != 0.0);
  t634[2599ULL] = 1;
  t634[2600ULL] = 1;
  t634[2601ULL] = 1;
  t634[2602ULL] = 1;
  t634[2603ULL] = (int32_T)(t1153 * 0.32 != 0.0);
  t634[2604ULL] = (int32_T)(t1202 != 0.0);
  t634[2605ULL] = (int32_T)((!(t1202 != 0.0)) || (6.9 / (t1202 == 0.0 ? 1.0E-16 :
    t1202) + 0.00017169489553429715 > 0.0));
  t634[2606ULL] = 1;
  t634[2607ULL] = 1;
  t634[2608ULL] = (int32_T)((!(t1202 != 0.0)) || ((t1202 != 0.0) && (!(6.9 /
    (t1202 == 0.0 ? 1.0E-16 : t1202) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1202 == 0.0 ? 1.0E-16 : t1202) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1202 == 0.0 ? 1.0E-16 : t1202) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2609ULL] = (int32_T)(t1158 * 6.4000000000000011E-5 != 0.0);
  t634[2610ULL] = (int32_T)(t1158 * 0.0020480000000000003 != 0.0);
  t634[2611ULL] = 1;
  t634[2612ULL] = 1;
  t634[2613ULL] = 1;
  t634[2614ULL] = 1;
  t634[2615ULL] = 1;
  t634[2616ULL] = 1;
  t634[2617ULL] = 1;
  t634[2618ULL] = 1;
  t634[2619ULL] = 1;
  t634[2620ULL] = 1;
  t634[2621ULL] = 1;
  t634[2622ULL] = 1;
  t634[2623ULL] = 1;
  t634[2624ULL] = (int32_T)(t1207 * 0.32 != 0.0);
  t634[2625ULL] = (int32_T)(t1620 != 0.0);
  t634[2626ULL] = (int32_T)((!(t1620 != 0.0)) || (6.9 / (t1620 == 0.0 ? 1.0E-16 :
    t1620) + 0.00017169489553429715 > 0.0));
  t634[2627ULL] = 1;
  t634[2628ULL] = 1;
  t634[2629ULL] = (int32_T)((!(t1620 != 0.0)) || ((t1620 != 0.0) && (!(6.9 /
    (t1620 == 0.0 ? 1.0E-16 : t1620) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1620 == 0.0 ? 1.0E-16 : t1620) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1620 == 0.0 ? 1.0E-16 : t1620) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2630ULL] = (int32_T)(t1211 * 6.4000000000000011E-5 != 0.0);
  t634[2631ULL] = (int32_T)(t1211 * 0.0020480000000000003 != 0.0);
  t634[2632ULL] = 1;
  t634[2633ULL] = 1;
  t634[2634ULL] = 1;
  t634[2635ULL] = 1;
  t634[2636ULL] = (int32_T)(t1207 * 0.32 != 0.0);
  t634[2637ULL] = (int32_T)(t1286 != 0.0);
  t634[2638ULL] = (int32_T)((!(t1286 != 0.0)) || (6.9 / (t1286 == 0.0 ? 1.0E-16 :
    t1286) + 0.00017169489553429715 > 0.0));
  t634[2639ULL] = 1;
  t634[2640ULL] = 1;
  t634[2641ULL] = (int32_T)((!(t1286 != 0.0)) || ((t1286 != 0.0) && (!(6.9 /
    (t1286 == 0.0 ? 1.0E-16 : t1286) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1286 == 0.0 ? 1.0E-16 : t1286) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1286 == 0.0 ? 1.0E-16 : t1286) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2642ULL] = (int32_T)(t1211 * 6.4000000000000011E-5 != 0.0);
  t634[2643ULL] = (int32_T)(t1211 * 0.0020480000000000003 != 0.0);
  t634[2644ULL] = 1;
  t634[2645ULL] = 1;
  t634[2646ULL] = 1;
  t634[2647ULL] = 1;
  t634[2648ULL] = (int32_T)(t1926 / 2.0 * 0.002 != 0.0);
  t634[2649ULL] = 1;
  t634[2650ULL] = (int32_T)(t1262 != 0.0);
  t634[2651ULL] = (int32_T)((!(t1262 != 0.0)) || (6.9 / (t1262 == 0.0 ? 1.0E-16 :
    t1262) + 0.00017169489553429715 > 0.0));
  t634[2652ULL] = 1;
  t634[2653ULL] = 1;
  t634[2654ULL] = (int32_T)((!(t1262 != 0.0)) || ((t1262 != 0.0) && (!(6.9 /
    (t1262 == 0.0 ? 1.0E-16 : t1262) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1262 == 0.0 ? 1.0E-16 : t1262) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1262 == 0.0 ? 1.0E-16 : t1262) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2655ULL] = (int32_T)((t1623 / 8.0 == t1623 / 8.0) && (fabs(t1623 / 8.0)
    != pmf_get_inf()));
  t634[2656ULL] = (int32_T)((!(t1623 / 8.0 == t1623 / 8.0)) || (!(fabs(t1623 /
    8.0) != pmf_get_inf())) || (t1623 / 8.0 >= 0.0));
  t634[2657ULL] = 1;
  t634[2658ULL] = (int32_T)(t1171 >= 0.0);
  t634[2659ULL] = (int32_T)((!(t1623 / 8.0 == t1623 / 8.0)) || (!(fabs(t1623 /
    8.0) != pmf_get_inf())) || ((t1623 / 8.0 == t1623 / 8.0) && (fabs(t1623 /
    8.0) != pmf_get_inf()) && (!(t1623 / 8.0 >= 0.0))) || (!(t1171 >= 0.0)) ||
    ((pmf_pow(t1171, 0.66666666666666663) - 1.0) * pmf_sqrt(t1623 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[2660ULL] = 1;
  t634[2661ULL] = 1;
  t634[2662ULL] = 1;
  t634[2663ULL] = 1;
  t634[2664ULL] = (int32_T)(t1929 / 2.0 != 0.0);
  t634[2665ULL] = 1;
  t2357 = t1929 / 2.0;
  t634[2666ULL] = (int32_T)((!(t1601 > t1937 / 0.002 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (t1601 != 0.0));
  t634[2667ULL] = 1;
  t634[2668ULL] = 1;
  t2357 = t1929 / 2.0;
  t634[2669ULL] = (int32_T)((!(t1601 > t1937 / 0.002 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (!(t1601 != 0.0)) || (t1929 / 2.0 != 0.0));
  t634[2670ULL] = (int32_T)(-U_idx_10 < 663.67513503334737);
  t634[2671ULL] = (int32_T)(t1947 / 2.0 * 0.002 != 0.0);
  t634[2672ULL] = 1;
  t634[2673ULL] = (int32_T)(t1249 != 0.0);
  t634[2674ULL] = (int32_T)((!(t1249 != 0.0)) || (6.9 / (t1249 == 0.0 ? 1.0E-16 :
    t1249) + 0.00017169489553429715 > 0.0));
  t634[2675ULL] = 1;
  t634[2676ULL] = 1;
  t634[2677ULL] = (int32_T)((!(t1249 != 0.0)) || ((t1249 != 0.0) && (!(6.9 /
    (t1249 == 0.0 ? 1.0E-16 : t1249) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1249 == 0.0 ? 1.0E-16 : t1249) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1249 == 0.0 ? 1.0E-16 : t1249) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2678ULL] = (int32_T)((intrm_sf_mf_492 / 8.0 == intrm_sf_mf_492 / 8.0) &&
    (fabs(intrm_sf_mf_492 / 8.0) != pmf_get_inf()));
  t634[2679ULL] = (int32_T)((!(intrm_sf_mf_492 / 8.0 == intrm_sf_mf_492 / 8.0)) ||
    (!(fabs(intrm_sf_mf_492 / 8.0) != pmf_get_inf())) || (intrm_sf_mf_492 / 8.0 >=
    0.0));
  t634[2680ULL] = 1;
  t634[2681ULL] = (int32_T)(t1263 >= 0.0);
  t634[2682ULL] = (int32_T)((!(intrm_sf_mf_492 / 8.0 == intrm_sf_mf_492 / 8.0)) ||
    (!(fabs(intrm_sf_mf_492 / 8.0) != pmf_get_inf())) || ((intrm_sf_mf_492 / 8.0
    == intrm_sf_mf_492 / 8.0) && (fabs(intrm_sf_mf_492 / 8.0) != pmf_get_inf()) &&
    (!(intrm_sf_mf_492 / 8.0 >= 0.0))) || (!(t1263 >= 0.0)) || ((pmf_pow(t1263,
    0.66666666666666663) - 1.0) * pmf_sqrt(intrm_sf_mf_492 / 8.0) * 12.7 + 1.0
    != 0.0));
  t634[2683ULL] = 1;
  t634[2684ULL] = 1;
  t634[2685ULL] = 1;
  t634[2686ULL] = 1;
  t634[2687ULL] = (int32_T)(U_idx_11 / 2.0 != 0.0);
  t634[2688ULL] = 1;
  t2357 = U_idx_11 / 2.0;
  t634[2689ULL] = (int32_T)((!(t1252 > t1955 / 0.002 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (t1252 != 0.0));
  t634[2690ULL] = 1;
  t634[2691ULL] = 1;
  t2357 = U_idx_11 / 2.0;
  t634[2692ULL] = (int32_T)((!(t1252 > t1955 / 0.002 / (t2357 == 0.0 ? 1.0E-16 :
    t2357) / 30.0)) || (!(t1252 != 0.0)) || (U_idx_11 / 2.0 != 0.0));
  t634[2693ULL] = (int32_T)(-intrm_sf_mf_1580 < 663.67513503334737);
  t634[2694ULL] = 1;
  t634[2695ULL] = 1;
  t634[2696ULL] = 1;
  t634[2697ULL] = 1;
  t634[2698ULL] = 1;
  t634[2699ULL] = (int32_T)(t1253 * 0.002 != 0.0);
  t634[2700ULL] = (int32_T)(t1251 != 0.0);
  t634[2701ULL] = (int32_T)((!(t1251 != 0.0)) || (6.9 / (t1251 == 0.0 ? 1.0E-16 :
    t1251) + 0.00017169489553429715 > 0.0));
  t634[2702ULL] = 1;
  t634[2703ULL] = 1;
  t634[2704ULL] = (int32_T)((!(t1251 != 0.0)) || ((t1251 != 0.0) && (!(6.9 /
    (t1251 == 0.0 ? 1.0E-16 : t1251) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1251 == 0.0 ? 1.0E-16 : t1251) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1251 == 0.0 ? 1.0E-16 : t1251) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2705ULL] = (int32_T)(t1261 * 4.0000000000000003E-7 != 0.0);
  t634[2706ULL] = (int32_T)(t1261 * 8.0E-8 != 0.0);
  t634[2707ULL] = 1;
  t634[2708ULL] = 1;
  t634[2709ULL] = 1;
  t634[2710ULL] = 1;
  t634[2711ULL] = (int32_T)(t1253 * 0.002 != 0.0);
  t634[2712ULL] = (int32_T)(intrm_sf_mf_514 != 0.0);
  t634[2713ULL] = (int32_T)((!(intrm_sf_mf_514 != 0.0)) || (6.9 /
    (intrm_sf_mf_514 == 0.0 ? 1.0E-16 : intrm_sf_mf_514) +
    0.00017169489553429715 > 0.0));
  t634[2714ULL] = 1;
  t634[2715ULL] = 1;
  t634[2716ULL] = (int32_T)((!(intrm_sf_mf_514 != 0.0)) || ((intrm_sf_mf_514 !=
    0.0) && (!(6.9 / (intrm_sf_mf_514 == 0.0 ? 1.0E-16 : intrm_sf_mf_514) +
               0.00017169489553429715 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_514 == 0.0 ? 1.0E-16 : intrm_sf_mf_514) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_514 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_514) + 0.00017169489553429715) * 3.24 != 0.0));
  t634[2717ULL] = (int32_T)(t1261 * 4.0000000000000003E-7 != 0.0);
  t634[2718ULL] = (int32_T)(t1261 * 8.0E-8 != 0.0);
  t634[2719ULL] = 1;
  t634[2720ULL] = 1;
  t634[2721ULL] = 1;
  t634[2722ULL] = 1;
  t634[2723ULL] = (int32_T)(t1970 / 2.0 * 0.00093750000000000007 != 0.0);
  t634[2724ULL] = 1;
  t634[2725ULL] = (int32_T)(intrm_sf_mf_521 != 0.0);
  t634[2726ULL] = (int32_T)((!(intrm_sf_mf_521 != 0.0)) || (6.9 /
    (intrm_sf_mf_521 == 0.0 ? 1.0E-16 : intrm_sf_mf_521) +
    0.00069701528436089772 > 0.0));
  t634[2727ULL] = 1;
  t634[2728ULL] = 1;
  t634[2729ULL] = (int32_T)((!(intrm_sf_mf_521 != 0.0)) || ((intrm_sf_mf_521 !=
    0.0) && (!(6.9 / (intrm_sf_mf_521 == 0.0 ? 1.0E-16 : intrm_sf_mf_521) +
               0.00069701528436089772 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_521 == 0.0 ? 1.0E-16 : intrm_sf_mf_521) +
    0.00069701528436089772) * pmf_log10(6.9 / (intrm_sf_mf_521 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_521) + 0.00069701528436089772) * 3.24 != 0.0));
  t634[2730ULL] = (int32_T)((t1631 / 8.0 == t1631 / 8.0) && (fabs(t1631 / 8.0)
    != pmf_get_inf()));
  t634[2731ULL] = (int32_T)((!(t1631 / 8.0 == t1631 / 8.0)) || (!(fabs(t1631 /
    8.0) != pmf_get_inf())) || (t1631 / 8.0 >= 0.0));
  t634[2732ULL] = 1;
  t634[2733ULL] = (int32_T)(t1630 >= 0.0);
  t634[2734ULL] = (int32_T)((!(t1631 / 8.0 == t1631 / 8.0)) || (!(fabs(t1631 /
    8.0) != pmf_get_inf())) || ((t1631 / 8.0 == t1631 / 8.0) && (fabs(t1631 /
    8.0) != pmf_get_inf()) && (!(t1631 / 8.0 >= 0.0))) || (!(t1630 >= 0.0)) ||
    ((pmf_pow(t1630, 0.66666666666666663) - 1.0) * pmf_sqrt(t1631 / 8.0) * 12.7
     + 1.0 != 0.0));
  t634[2735ULL] = 1;
  t634[2736ULL] = 1;
  t634[2737ULL] = 1;
  t634[2738ULL] = 1;
  t634[2739ULL] = (int32_T)(t1973 / 2.0 != 0.0);
  t634[2740ULL] = 1;
  t2357 = t1973 / 2.0;
  t634[2741ULL] = (int32_T)((!(t1285 > t1976 / 0.00093750000000000007 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1285 != 0.0));
  t634[2742ULL] = 1;
  t634[2743ULL] = 1;
  t2357 = t1973 / 2.0;
  t634[2744ULL] = (int32_T)((!(t1285 > t1976 / 0.00093750000000000007 / (t2357 ==
    0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1285 != 0.0)) || (t1973 / 2.0 != 0.0));
  t634[2745ULL] = (int32_T)(-U_idx_4 < 663.67513503334737);
  t634[2746ULL] = (int32_T)(U_idx_2 / 2.0 * 0.00093750000000000007 != 0.0);
  t634[2747ULL] = 1;
  t634[2748ULL] = (int32_T)(t1271 != 0.0);
  t634[2749ULL] = (int32_T)((!(t1271 != 0.0)) || (6.9 / (t1271 == 0.0 ? 1.0E-16 :
    t1271) + 0.00069701528436089772 > 0.0));
  t634[2750ULL] = 1;
  t634[2751ULL] = 1;
  t634[2752ULL] = (int32_T)((!(t1271 != 0.0)) || ((t1271 != 0.0) && (!(6.9 /
    (t1271 == 0.0 ? 1.0E-16 : t1271) + 0.00069701528436089772 > 0.0))) ||
    (pmf_log10(6.9 / (t1271 == 0.0 ? 1.0E-16 : t1271) + 0.00069701528436089772) *
     pmf_log10(6.9 / (t1271 == 0.0 ? 1.0E-16 : t1271) + 0.00069701528436089772) *
     3.24 != 0.0));
  t634[2753ULL] = (int32_T)((intrm_sf_mf_537 / 8.0 == intrm_sf_mf_537 / 8.0) &&
    (fabs(intrm_sf_mf_537 / 8.0) != pmf_get_inf()));
  t634[2754ULL] = (int32_T)((!(intrm_sf_mf_537 / 8.0 == intrm_sf_mf_537 / 8.0)) ||
    (!(fabs(intrm_sf_mf_537 / 8.0) != pmf_get_inf())) || (intrm_sf_mf_537 / 8.0 >=
    0.0));
  t634[2755ULL] = 1;
  t634[2756ULL] = (int32_T)(t1288 >= 0.0);
  t634[2757ULL] = (int32_T)((!(intrm_sf_mf_537 / 8.0 == intrm_sf_mf_537 / 8.0)) ||
    (!(fabs(intrm_sf_mf_537 / 8.0) != pmf_get_inf())) || ((intrm_sf_mf_537 / 8.0
    == intrm_sf_mf_537 / 8.0) && (fabs(intrm_sf_mf_537 / 8.0) != pmf_get_inf()) &&
    (!(intrm_sf_mf_537 / 8.0 >= 0.0))) || (!(t1288 >= 0.0)) || ((pmf_pow(t1288,
    0.66666666666666663) - 1.0) * pmf_sqrt(intrm_sf_mf_537 / 8.0) * 12.7 + 1.0
    != 0.0));
  t634[2758ULL] = 1;
  t634[2759ULL] = 1;
  t634[2760ULL] = 1;
  t634[2761ULL] = 1;
  t634[2762ULL] = (int32_T)(t1090 / 2.0 != 0.0);
  t634[2763ULL] = 1;
  t2357 = t1090 / 2.0;
  t634[2764ULL] = (int32_T)((!(t1274 > U_idx_1 / 0.00093750000000000007 / (t2357
    == 0.0 ? 1.0E-16 : t2357) / 30.0)) || (t1274 != 0.0));
  t634[2765ULL] = 1;
  t634[2766ULL] = 1;
  t2357 = t1090 / 2.0;
  t634[2767ULL] = (int32_T)((!(t1274 > U_idx_1 / 0.00093750000000000007 / (t2357
    == 0.0 ? 1.0E-16 : t2357) / 30.0)) || (!(t1274 != 0.0)) || (t1090 / 2.0 !=
    0.0));
  t634[2768ULL] = (int32_T)(-intrm_sf_mf_116 < 663.67513503334737);
  t634[2769ULL] = 1;
  t634[2770ULL] = 1;
  t634[2771ULL] = 1;
  t634[2772ULL] = 1;
  t634[2773ULL] = 1;
  t634[2774ULL] = (int32_T)(t1275 * 0.00093750000000000007 != 0.0);
  t634[2775ULL] = (int32_T)(intrm_sf_mf_550 != 0.0);
  t634[2776ULL] = (int32_T)((!(intrm_sf_mf_550 != 0.0)) || (6.9 /
    (intrm_sf_mf_550 == 0.0 ? 1.0E-16 : intrm_sf_mf_550) +
    0.00069701528436089772 > 0.0));
  t634[2777ULL] = 1;
  t634[2778ULL] = 1;
  t634[2779ULL] = (int32_T)((!(intrm_sf_mf_550 != 0.0)) || ((intrm_sf_mf_550 !=
    0.0) && (!(6.9 / (intrm_sf_mf_550 == 0.0 ? 1.0E-16 : intrm_sf_mf_550) +
               0.00069701528436089772 > 0.0))) || (pmf_log10(6.9 /
    (intrm_sf_mf_550 == 0.0 ? 1.0E-16 : intrm_sf_mf_550) +
    0.00069701528436089772) * pmf_log10(6.9 / (intrm_sf_mf_550 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_550) + 0.00069701528436089772) * 3.24 != 0.0));
  t634[2780ULL] = (int32_T)(t1283 * 1.50186899252403E-8 != 0.0);
  t634[2781ULL] = (int32_T)(t1283 * 4.97494103773585E-9 != 0.0);
  t634[2782ULL] = 1;
  t634[2783ULL] = 1;
  t634[2784ULL] = 1;
  t634[2785ULL] = 1;
  t634[2786ULL] = (int32_T)(t1275 * 0.00093750000000000007 != 0.0);
  t634[2787ULL] = (int32_T)(U_idx_3 != 0.0);
  t634[2788ULL] = (int32_T)((!(U_idx_3 != 0.0)) || (6.9 / (U_idx_3 == 0.0 ?
    1.0E-16 : U_idx_3) + 0.00069701528436089772 > 0.0));
  t634[2789ULL] = 1;
  t634[2790ULL] = 1;
  t634[2791ULL] = (int32_T)((!(U_idx_3 != 0.0)) || ((U_idx_3 != 0.0) && (!(6.9 /
    (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) + 0.00069701528436089772 > 0.0))) ||
    (pmf_log10(6.9 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) +
               0.00069701528436089772) * pmf_log10(6.9 / (U_idx_3 == 0.0 ?
    1.0E-16 : U_idx_3) + 0.00069701528436089772) * 3.24 != 0.0));
  t634[2792ULL] = (int32_T)(t1283 * 1.50186899252403E-8 != 0.0);
  t634[2793ULL] = (int32_T)(t1283 * 4.97494103773585E-9 != 0.0);
  t634[2794ULL] = 1;
  t634[2795ULL] = 1;
  t634[2796ULL] = 1;
  t634[2797ULL] = 1;
  t634[2798ULL] = 1;
  t634[2799ULL] = 1;
  t634[2800ULL] = 1;
  t634[2801ULL] = 1;
  t634[2802ULL] = 1;
  t634[2803ULL] = (int32_T)(X[33ULL] * 100000.0 > 0.0);
  t634[2804ULL] = (int32_T)(X[123ULL] * 100000.0 > 0.0);
  t634[2805ULL] = (int32_T)(X[123ULL] * 100000.0 > 0.0);
  t634[2806ULL] = (int32_T)(X[33ULL] * 100000.0 > 0.0);
  t634[2807ULL] = 1;
  t634[2808ULL] = 1;
  t634[2809ULL] = 1;
  t634[2810ULL] = 1;
  t634[2811ULL] = 1;
  t634[2812ULL] = (int32_T)(t1322 * 7.8539816339744827E-5 != 0.0);
  t634[2813ULL] = (int32_T)(t1085 != 0.0);
  t634[2814ULL] = (int32_T)((!(t1085 != 0.0)) || (6.9 / (t1085 == 0.0 ? 1.0E-16 :
    t1085) + 0.00017169489553429715 > 0.0));
  t634[2815ULL] = 1;
  t634[2816ULL] = 1;
  t634[2817ULL] = (int32_T)((!(t1085 != 0.0)) || ((t1085 != 0.0) && (!(6.9 /
    (t1085 == 0.0 ? 1.0E-16 : t1085) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1085 == 0.0 ? 1.0E-16 : t1085) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1085 == 0.0 ? 1.0E-16 : t1085) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2818ULL] = (int32_T)(t1326 * 1.5707963267948965E-8 != 0.0);
  t634[2819ULL] = (int32_T)(t1326 * 1.2337005501361697E-10 != 0.0);
  t634[2820ULL] = 1;
  t634[2821ULL] = 1;
  t634[2822ULL] = 1;
  t634[2823ULL] = 1;
  t634[2824ULL] = (int32_T)(t1322 * 7.8539816339744827E-5 != 0.0);
  t634[2825ULL] = (int32_T)(t1377 != 0.0);
  t634[2826ULL] = (int32_T)((!(t1377 != 0.0)) || (6.9 / (t1377 == 0.0 ? 1.0E-16 :
    t1377) + 0.00017169489553429715 > 0.0));
  t634[2827ULL] = 1;
  t634[2828ULL] = 1;
  t634[2829ULL] = (int32_T)((!(t1377 != 0.0)) || ((t1377 != 0.0) && (!(6.9 /
    (t1377 == 0.0 ? 1.0E-16 : t1377) + 0.00017169489553429715 > 0.0))) ||
    (pmf_log10(6.9 / (t1377 == 0.0 ? 1.0E-16 : t1377) + 0.00017169489553429715) *
     pmf_log10(6.9 / (t1377 == 0.0 ? 1.0E-16 : t1377) + 0.00017169489553429715) *
     3.24 != 0.0));
  t634[2830ULL] = (int32_T)(t1326 * 1.5707963267948965E-8 != 0.0);
  t634[2831ULL] = (int32_T)(t1326 * 1.2337005501361697E-10 != 0.0);
  t634[2832ULL] = 1;
  t634[2833ULL] = 1;
  t634[2834ULL] = 1;
  t634[2835ULL] = 1;
  t634[2836ULL] = 1;
  t634[2837ULL] = 1;
  t634[2838ULL] = 1;
  t634[2839ULL] = 1;
  t634[2840ULL] = (int32_T)(t1362 - (-t1362) != 0.0);
  t634[2841ULL] = 1;
  t634[2842ULL] = 1;
  t634[2843ULL] = 1;
  t634[2844ULL] = 1;
  t634[2845ULL] = (int32_T)(X[44ULL] * 100000.0 > 0.0);
  t634[2846ULL] = (int32_T)(X[44ULL] * 100000.0 > 0.0);
  t634[2847ULL] = 1;
  t634[2848ULL] = 1;
  t634[2849ULL] = 1;
  t634[2850ULL] = 1;
  t634[2851ULL] = 1;
  t634[2852ULL] = 1;
  t634[2853ULL] = 1;
  t634[2854ULL] = 1;
  t634[2855ULL] = 1;
  t634[2856ULL] = (int32_T)(X[20ULL] != 0.0);
  t634[2857ULL] = (int32_T)(X[19ULL] != 0.0);
  t634[2858ULL] = (int32_T)(t1083 != 0.0);
  t634[2859ULL] = (int32_T)(X[23ULL] != 0.0);
  t634[2860ULL] = (int32_T)(X[12ULL] != 0.0);
  t634[2861ULL] = (int32_T)(intrm_sf_mf_204 != 0.0);
  t634[2862ULL] = (int32_T)(X[24ULL] != 0.0);
  t634[2863ULL] = (int32_T)(X[15ULL] != 0.0);
  t634[2864ULL] = (int32_T)(t1195 != 0.0);
  t634[2865ULL] = (int32_T)(t1254 != 0.0);
  t634[2866ULL] = (int32_T)(t1276 != 0.0);
  t634[2867ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[2868ULL] = (int32_T)(X[32ULL] != 0.0);
  t634[2869ULL] = (int32_T)(t1291 != 0.0);
  t634[2870ULL] = (int32_T)(X[37ULL] != 0.0);
  t634[2871ULL] = (int32_T)(X[36ULL] != 0.0);
  t634[2872ULL] = (int32_T)(t1301 != 0.0);
  t634[2873ULL] = (int32_T)(X[41ULL] != 0.0);
  t634[2874ULL] = (int32_T)(X[40ULL] != 0.0);
  t634[2875ULL] = (int32_T)(t1312 != 0.0);
  t634[2876ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[2877ULL] = (int32_T)(X[45ULL] != 0.0);
  t634[2878ULL] = (int32_T)(t1364 != 0.0);
  t634[2879ULL] = (int32_T)(X[51ULL] != 0.0);
  t634[2880ULL] = (int32_T)(X[48ULL] != 0.0);
  t634[2881ULL] = (int32_T)(t1372 != 0.0);
  t634[2882ULL] = (int32_T)(X[52ULL] != 0.0);
  t634[2883ULL] = (int32_T)(X[6ULL] != 0.0);
  t634[2884ULL] = (int32_T)(t1425 != 0.0);
  t634[2885ULL] = (int32_T)(X[53ULL] != 0.0);
  t634[2886ULL] = (int32_T)(X[9ULL] != 0.0);
  t634[2887ULL] = (int32_T)(t1469 != 0.0);
  t634[2888ULL] = (int32_T)(X[57ULL] != 0.0);
  t634[2889ULL] = (int32_T)(X[54ULL] != 0.0);
  t634[2890ULL] = (int32_T)(t1511 != 0.0);
  t634[2891ULL] = (int32_T)(X[59ULL] != 0.0);
  t634[2892ULL] = (int32_T)(X[58ULL] != 0.0);
  t634[2893ULL] = (int32_T)(t1553 != 0.0);
  t634[2894ULL] = (int32_T)((X[66ULL] > 0.9 ? X[66ULL] : 0.9) != 0.0);
  t634[2895ULL] = 1;
  t634[2896ULL] = 1;
  t634[2897ULL] = 1;
  t634[2898ULL] = 1;
  t634[2899ULL] = 1;
  t634[2900ULL] = 1;
  t634[2901ULL] = (int32_T)(X[147ULL] != 0.0);
  t634[2902ULL] = (int32_T)(X[147ULL] != 0.0);
  t634[2903ULL] = 1;
  t634[2904ULL] = 1;
  t634[2905ULL] = 1;
  t634[2906ULL] = (int32_T)(X[151ULL] != 0.0);
  t634[2907ULL] = (int32_T)(X[151ULL] != 0.0);
  t634[2908ULL] = 1;
  t634[2909ULL] = 1;
  t634[2910ULL] = 1;
  t634[2911ULL] = (int32_T)(X[20ULL] != 0.0);
  t634[2912ULL] = (int32_T)(X[20ULL] != 0.0);
  t634[2913ULL] = 1;
  t634[2914ULL] = 1;
  t634[2915ULL] = 1;
  t634[2916ULL] = (int32_T)(X[20ULL] != 0.0);
  t634[2917ULL] = (int32_T)(X[20ULL] != 0.0);
  t634[2918ULL] = 1;
  t634[2919ULL] = 1;
  t634[2920ULL] = 1;
  t634[2921ULL] = 1;
  t634[2922ULL] = 1;
  t634[2923ULL] = 1;
  t634[2924ULL] = 1;
  t634[2925ULL] = 1;
  t634[2926ULL] = 1;
  t634[2927ULL] = (int32_T)(X[167ULL] != 0.0);
  t634[2928ULL] = (int32_T)(X[167ULL] != 0.0);
  t634[2929ULL] = (int32_T)(t1132 != 0.0);
  t634[2930ULL] = 1;
  t634[2931ULL] = 1;
  t634[2932ULL] = 1;
  t634[2933ULL] = (int32_T)(X[179ULL] != 0.0);
  t634[2934ULL] = (int32_T)(X[179ULL] != 0.0);
  t634[2935ULL] = 1;
  t634[2936ULL] = 1;
  t634[2937ULL] = 1;
  t634[2938ULL] = (int32_T)(X[182ULL] != 0.0);
  t634[2939ULL] = (int32_T)(X[182ULL] != 0.0);
  t634[2940ULL] = 1;
  t634[2941ULL] = 1;
  t634[2942ULL] = 1;
  t634[2943ULL] = (int32_T)(X[23ULL] != 0.0);
  t634[2944ULL] = (int32_T)(X[23ULL] != 0.0);
  t634[2945ULL] = 1;
  t634[2946ULL] = 1;
  t634[2947ULL] = 1;
  t634[2948ULL] = (int32_T)(X[23ULL] != 0.0);
  t634[2949ULL] = (int32_T)(X[23ULL] != 0.0);
  t634[2950ULL] = 1;
  t634[2951ULL] = 1;
  t634[2952ULL] = 1;
  t634[2953ULL] = (int32_T)(X[200ULL] != 0.0);
  t634[2954ULL] = (int32_T)(X[200ULL] != 0.0);
  t634[2955ULL] = 1;
  t634[2956ULL] = 1;
  t634[2957ULL] = 1;
  t634[2958ULL] = (int32_T)(X[203ULL] != 0.0);
  t634[2959ULL] = (int32_T)(X[203ULL] != 0.0);
  t634[2960ULL] = 1;
  t634[2961ULL] = 1;
  t634[2962ULL] = 1;
  t634[2963ULL] = (int32_T)(X[24ULL] != 0.0);
  t634[2964ULL] = (int32_T)(X[24ULL] != 0.0);
  t634[2965ULL] = 1;
  t634[2966ULL] = 1;
  t634[2967ULL] = 1;
  t634[2968ULL] = (int32_T)(X[24ULL] != 0.0);
  t634[2969ULL] = (int32_T)(X[24ULL] != 0.0);
  t634[2970ULL] = 1;
  t634[2971ULL] = 1;
  t634[2972ULL] = 1;
  t634[2973ULL] = (int32_T)(t1242 != 0.0);
  t634[2974ULL] = (int32_T)(t1244 != 0.0);
  t634[2975ULL] = (int32_T)(t1244 != 0.0);
  t634[2976ULL] = 1;
  t634[2977ULL] = 1;
  t634[2978ULL] = (int32_T)((X[228ULL] * X[228ULL] + 1.0E-8 == X[228ULL] * X
    [228ULL] + 1.0E-8) && (fabs(X[228ULL] * X[228ULL] + 1.0E-8) != pmf_get_inf()));
  t634[2979ULL] = (int32_T)((!(X[228ULL] * X[228ULL] + 1.0E-8 == X[228ULL] * X
    [228ULL] + 1.0E-8)) || (!(fabs(X[228ULL] * X[228ULL] + 1.0E-8) !=
    pmf_get_inf())) || (X[228ULL] * X[228ULL] + 1.0E-8 >= 0.0));
  t634[2980ULL] = (int32_T)(t1255 != 0.0);
  t634[2981ULL] = (int32_T)(t1258 != 0.0);
  t634[2982ULL] = (int32_T)(t1265 != 0.0);
  t634[2983ULL] = (int32_T)(t1265 != 0.0);
  t634[2984ULL] = (int32_T)(t1277 != 0.0);
  t634[2985ULL] = (int32_T)(t1280 != 0.0);
  t634[2986ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[2987ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[2988ULL] = 1;
  t634[2989ULL] = 1;
  t634[2990ULL] = 1;
  t634[2991ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[2992ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[2993ULL] = 1;
  t634[2994ULL] = 1;
  t634[2995ULL] = 1;
  t634[2996ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[2997ULL] = (int32_T)(X[33ULL] != 0.0);
  t634[2998ULL] = 1;
  t634[2999ULL] = 1;
  t634[3000ULL] = 1;
  t634[3001ULL] = (int32_T)(X[37ULL] != 0.0);
  t634[3002ULL] = (int32_T)(X[37ULL] != 0.0);
  t634[3003ULL] = 1;
  t634[3004ULL] = 1;
  t634[3005ULL] = 1;
  t634[3006ULL] = (int32_T)(X[304ULL] != 0.0);
  t634[3007ULL] = (int32_T)(X[304ULL] != 0.0);
  t634[3008ULL] = 1;
  t634[3009ULL] = 1;
  t634[3010ULL] = 1;
  t634[3011ULL] = (int32_T)(X[308ULL] != 0.0);
  t634[3012ULL] = (int32_T)(X[308ULL] != 0.0);
  t634[3013ULL] = 1;
  t634[3014ULL] = 1;
  t634[3015ULL] = 1;
  t634[3016ULL] = (int32_T)(X[41ULL] != 0.0);
  t634[3017ULL] = (int32_T)(X[41ULL] != 0.0);
  t634[3018ULL] = 1;
  t634[3019ULL] = 1;
  t634[3020ULL] = 1;
  t634[3021ULL] = (int32_T)(X[41ULL] != 0.0);
  t634[3022ULL] = (int32_T)(X[41ULL] != 0.0);
  t634[3023ULL] = 1;
  t634[3024ULL] = 1;
  t634[3025ULL] = 1;
  t634[3026ULL] = 1;
  t634[3027ULL] = 1;
  t634[3028ULL] = 1;
  t634[3029ULL] = 1;
  t634[3030ULL] = 1;
  t634[3031ULL] = 1;
  t634[3032ULL] = (int32_T)(X[318ULL] != 0.0);
  t634[3033ULL] = (int32_T)(X[318ULL] != 0.0);
  t634[3034ULL] = (int32_T)(t1354 != 0.0);
  t634[3035ULL] = 1;
  t634[3036ULL] = 1;
  t634[3037ULL] = 1;
  t634[3038ULL] = 1;
  t634[3039ULL] = 1;
  t634[3040ULL] = 1;
  t634[3041ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[3042ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[3043ULL] = 1;
  t634[3044ULL] = 1;
  t634[3045ULL] = 1;
  t634[3046ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[3047ULL] = (int32_T)(X[44ULL] != 0.0);
  t634[3048ULL] = 1;
  t634[3049ULL] = 1;
  t634[3050ULL] = 1;
  t634[3051ULL] = (int32_T)(X[370ULL] != 0.0);
  t634[3052ULL] = (int32_T)((X[324ULL] * 0.00347041471455839 == X[324ULL] *
    0.00347041471455839) && (fabs(X[324ULL] * 0.00347041471455839) !=
    pmf_get_inf()));
  t634[3053ULL] = (int32_T)((!(X[324ULL] * 0.00347041471455839 == X[324ULL] *
    0.00347041471455839)) || (!(fabs(X[324ULL] * 0.00347041471455839) !=
    pmf_get_inf())) || (X[324ULL] * 0.00347041471455839 >= 0.0));
  t634[3054ULL] = (int32_T)(X[383ULL] != 0.0);
  t634[3055ULL] = (int32_T)(X[383ULL] != 0.0);
  t634[3056ULL] = 1;
  t634[3057ULL] = 1;
  t634[3058ULL] = 1;
  t634[3059ULL] = (int32_T)(X[386ULL] != 0.0);
  t634[3060ULL] = (int32_T)(X[386ULL] != 0.0);
  t634[3061ULL] = 1;
  t634[3062ULL] = 1;
  t634[3063ULL] = 1;
  t634[3064ULL] = (int32_T)(X[51ULL] != 0.0);
  t634[3065ULL] = (int32_T)(X[51ULL] != 0.0);
  t634[3066ULL] = 1;
  t634[3067ULL] = 1;
  t634[3068ULL] = 1;
  t634[3069ULL] = (int32_T)(X[51ULL] != 0.0);
  t634[3070ULL] = (int32_T)(X[51ULL] != 0.0);
  t634[3071ULL] = 1;
  t634[3072ULL] = 1;
  t634[3073ULL] = 1;
  t634[3074ULL] = (int32_T)(X[397ULL] != 0.0);
  t634[3075ULL] = (int32_T)(X[397ULL] != 0.0);
  t634[3076ULL] = 1;
  t634[3077ULL] = 1;
  t634[3078ULL] = 1;
  t634[3079ULL] = (int32_T)(X[400ULL] != 0.0);
  t634[3080ULL] = (int32_T)(X[400ULL] != 0.0);
  t634[3081ULL] = 1;
  t634[3082ULL] = 1;
  t634[3083ULL] = 1;
  t634[3084ULL] = (int32_T)(X[52ULL] != 0.0);
  t634[3085ULL] = (int32_T)(X[52ULL] != 0.0);
  t634[3086ULL] = 1;
  t634[3087ULL] = 1;
  t634[3088ULL] = 1;
  t634[3089ULL] = (int32_T)(X[52ULL] != 0.0);
  t634[3090ULL] = (int32_T)(X[52ULL] != 0.0);
  t634[3091ULL] = 1;
  t634[3092ULL] = 1;
  t634[3093ULL] = 1;
  t634[3094ULL] = (int32_T)(X[411ULL] != 0.0);
  t634[3095ULL] = (int32_T)(X[411ULL] != 0.0);
  t634[3096ULL] = 1;
  t634[3097ULL] = 1;
  t634[3098ULL] = 1;
  t634[3099ULL] = (int32_T)(X[413ULL] != 0.0);
  t634[3100ULL] = (int32_T)(X[413ULL] != 0.0);
  t634[3101ULL] = 1;
  t634[3102ULL] = 1;
  t634[3103ULL] = 1;
  t634[3104ULL] = (int32_T)(X[53ULL] != 0.0);
  t634[3105ULL] = (int32_T)(X[53ULL] != 0.0);
  t634[3106ULL] = 1;
  t634[3107ULL] = 1;
  t634[3108ULL] = 1;
  t634[3109ULL] = (int32_T)(X[53ULL] != 0.0);
  t634[3110ULL] = (int32_T)(X[53ULL] != 0.0);
  t634[3111ULL] = 1;
  t634[3112ULL] = 1;
  t634[3113ULL] = 1;
  t634[3114ULL] = (int32_T)(X[428ULL] != 0.0);
  t634[3115ULL] = (int32_T)(X[428ULL] != 0.0);
  t634[3116ULL] = 1;
  t634[3117ULL] = 1;
  t634[3118ULL] = 1;
  t634[3119ULL] = (int32_T)(X[430ULL] != 0.0);
  t634[3120ULL] = (int32_T)(X[430ULL] != 0.0);
  t634[3121ULL] = 1;
  t634[3122ULL] = 1;
  t634[3123ULL] = 1;
  t634[3124ULL] = (int32_T)(X[57ULL] != 0.0);
  t634[3125ULL] = (int32_T)(X[57ULL] != 0.0);
  t634[3126ULL] = 1;
  t634[3127ULL] = 1;
  t634[3128ULL] = 1;
  t634[3129ULL] = (int32_T)(X[57ULL] != 0.0);
  t634[3130ULL] = (int32_T)(X[57ULL] != 0.0);
  t634[3131ULL] = 1;
  t634[3132ULL] = 1;
  t634[3133ULL] = 1;
  t634[3134ULL] = 1;
  t634[3135ULL] = 1;
  t634[3136ULL] = 1;
  t634[3137ULL] = (int32_T)(X[457ULL] != 0.0);
  t634[3138ULL] = (int32_T)(X[457ULL] != 0.0);
  t634[3139ULL] = 1;
  t634[3140ULL] = 1;
  t634[3141ULL] = 1;
  t634[3142ULL] = (int32_T)(X[461ULL] != 0.0);
  t634[3143ULL] = (int32_T)(X[461ULL] != 0.0);
  t634[3144ULL] = 1;
  t634[3145ULL] = 1;
  t634[3146ULL] = 1;
  t634[3147ULL] = (int32_T)(X[59ULL] != 0.0);
  t634[3148ULL] = (int32_T)(X[59ULL] != 0.0);
  t634[3149ULL] = 1;
  t634[3150ULL] = 1;
  t634[3151ULL] = 1;
  t634[3152ULL] = (int32_T)(X[59ULL] != 0.0);
  t634[3153ULL] = (int32_T)(X[59ULL] != 0.0);
  t634[3154ULL] = 1;
  t634[3155ULL] = 1;
  t634[3156ULL] = 1;
  t634[3157ULL] = 1;
  t634[3158ULL] = 1;
  t634[3159ULL] = 1;
  t634[3160ULL] = 1;
  t634[3161ULL] = 1;
  t634[3162ULL] = 1;
  t634[3163ULL] = (int32_T)(X[471ULL] != 0.0);
  t634[3164ULL] = (int32_T)(X[471ULL] != 0.0);
  t634[3165ULL] = (int32_T)(t1586 != 0.0);
  t634[3166ULL] = 1;
  t634[3167ULL] = 1;
  t634[3168ULL] = 1;
  t634[3169ULL] = (int32_T)(X[69ULL] != 0.0);
  for (b = 0; b < 3170; b++) {
    out.mX[b] = t634[b];
  }

  (void)LC;
  (void)t2373;
  return 0;
}
