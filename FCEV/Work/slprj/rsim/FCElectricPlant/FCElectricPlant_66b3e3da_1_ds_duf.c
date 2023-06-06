/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_duf.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1239, NeDsMethodOutput *t1240)
{
  ETTS0 ae_efOut;
  ETTS0 bc_efOut;
  ETTS0 bd_efOut;
  ETTS0 e_efOut;
  ETTS0 ee_efOut;
  ETTS0 efOut;
  ETTS0 fc_efOut;
  ETTS0 fd_efOut;
  ETTS0 ge_efOut;
  ETTS0 hc_efOut;
  ETTS0 ic_efOut;
  ETTS0 j_efOut;
  ETTS0 jb_efOut;
  ETTS0 jd_efOut;
  ETTS0 kb_efOut;
  ETTS0 ke_efOut;
  ETTS0 le_efOut;
  ETTS0 mb_efOut;
  ETTS0 nd_efOut;
  ETTS0 ob_efOut;
  ETTS0 oc_efOut;
  ETTS0 qb_efOut;
  ETTS0 rb_efOut;
  ETTS0 rd_efOut;
  ETTS0 sc_efOut;
  ETTS0 t21;
  ETTS0 t23;
  ETTS0 t26;
  ETTS0 t27;
  ETTS0 t28;
  ETTS0 t29;
  ETTS0 tb_efOut;
  ETTS0 vb_efOut;
  ETTS0 vd_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 wc_efOut;
  ETTS0 yb_efOut;
  PmRealVector out;
  real_T X[480];
  real_T t309[68];
  real_T t391[29];
  real_T t392[11];
  real_T t397[6];
  real_T t395[5];
  real_T t396[5];
  real_T nonscalar49[3];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T be_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T ce_efOut[1];
  real_T d_efOut[1];
  real_T db_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T de_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T ed_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T fe_efOut[1];
  real_T g_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T jc_efOut[1];
  real_T je_efOut[1];
  real_T k_efOut[1];
  real_T kc_efOut[1];
  real_T kd_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T m_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T me_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T o_efOut[1];
  real_T od_efOut[1];
  real_T p_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T pd_efOut[1];
  real_T q_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T r_efOut[1];
  real_T rc_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T sd_efOut[1];
  real_T t286[1];
  real_T t_efOut[1];
  real_T tc_efOut[1];
  real_T td_efOut[1];
  real_T u_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T ud_efOut[1];
  real_T v_efOut[1];
  real_T vc_efOut[1];
  real_T wd_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T y_efOut[1];
  real_T yc_efOut[1];
  real_T yd_efOut[1];
  real_T Fuel_Cell_Boost_Converter_L_i;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_B_u_i;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha12;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha29;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_g_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_w_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_convecti2;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_10;
  real_T U_idx_11;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T U_idx_8;
  real_T U_idx_9;
  real_T intermediate_der10142;
  real_T intermediate_der10415;
  real_T intermediate_der10530;
  real_T intermediate_der10679;
  real_T intermediate_der10698;
  real_T intermediate_der10732;
  real_T intermediate_der10757;
  real_T intermediate_der1320;
  real_T intermediate_der1321;
  real_T intermediate_der2693;
  real_T intermediate_der2829;
  real_T intermediate_der3568;
  real_T intermediate_der3823;
  real_T intermediate_der6080;
  real_T intermediate_der6653;
  real_T intermediate_der722;
  real_T intermediate_der7469;
  real_T intermediate_der8255;
  real_T intermediate_der8290;
  real_T intermediate_der8324;
  real_T intermediate_der8944;
  real_T intermediate_der8975;
  real_T intermediate_der9276;
  real_T intermediate_der9303;
  real_T intermediate_der9361;
  real_T intrm_sf_mf_1339;
  real_T intrm_sf_mf_1514;
  real_T intrm_sf_mf_1623;
  real_T intrm_sf_mf_1633;
  real_T intrm_sf_mf_1642;
  real_T intrm_sf_mf_568;
  real_T intrm_sf_mf_604;
  real_T intrm_sf_mf_81;
  real_T intrm_sf_mf_810;
  real_T t1006;
  real_T t1009;
  real_T t1010;
  real_T t1011;
  real_T t1012;
  real_T t1088;
  real_T t1099;
  real_T t1101;
  real_T t1113;
  real_T t1117;
  real_T t1119;
  real_T t1123;
  real_T t1129;
  real_T t1132;
  real_T t1137;
  real_T t1176;
  real_T t1177;
  real_T t1178;
  real_T t1182;
  real_T t1207;
  real_T t1228;
  real_T t1235;
  real_T t1237;
  real_T t1238;
  real_T t33;
  real_T t385_idx_0;
  real_T t388_idx_0;
  real_T t439;
  real_T t442;
  real_T t448;
  real_T t451;
  real_T t454;
  real_T t456;
  real_T t464;
  real_T t468;
  real_T t470;
  real_T t471;
  real_T t472;
  real_T t475;
  real_T t476;
  real_T t477;
  real_T t478;
  real_T t479;
  real_T t480;
  real_T t483;
  real_T t485;
  real_T t486;
  real_T t487;
  real_T t489;
  real_T t493;
  real_T t494;
  real_T t495;
  real_T t497;
  real_T t499;
  real_T t500;
  real_T t501;
  real_T t504;
  real_T t506;
  real_T t507;
  real_T t508;
  real_T t510;
  real_T t513;
  real_T t515;
  real_T t516;
  real_T t518;
  real_T t522;
  real_T t524;
  real_T t525;
  real_T t528;
  real_T t532;
  real_T t533;
  real_T t534;
  real_T t535;
  real_T t537;
  real_T t539;
  real_T t540;
  real_T t541;
  real_T t543;
  real_T t553;
  real_T t554;
  real_T t556;
  real_T t559;
  real_T t560;
  real_T t561;
  real_T t566;
  real_T t568;
  real_T t569;
  real_T t570;
  real_T t571;
  real_T t574;
  real_T t575;
  real_T t576;
  real_T t577;
  real_T t579;
  real_T t580;
  real_T t581;
  real_T t582;
  real_T t583;
  real_T t588;
  real_T t590;
  real_T t591;
  real_T t592;
  real_T t593;
  real_T t595;
  real_T t597;
  real_T t598;
  real_T t600;
  real_T t601;
  real_T t605;
  real_T t606;
  real_T t607;
  real_T t608;
  real_T t610;
  real_T t611;
  real_T t612;
  real_T t613;
  real_T t614;
  real_T t615;
  real_T t616;
  real_T t617;
  real_T t619;
  real_T t620;
  real_T t621;
  real_T t622;
  real_T t623;
  real_T t624;
  real_T t625;
  real_T t626;
  real_T t627;
  real_T t629;
  real_T t630;
  real_T t631;
  real_T t632;
  real_T t633;
  real_T t634;
  real_T t635;
  real_T t636;
  real_T t637;
  real_T t638;
  real_T t639;
  real_T t641;
  real_T t642;
  real_T t644;
  real_T t645;
  real_T t646;
  real_T t648;
  real_T t649;
  real_T t651;
  real_T t652;
  real_T t653;
  real_T t655;
  real_T t656;
  real_T t657;
  real_T t658;
  real_T t659;
  real_T t660;
  real_T t661;
  real_T t666;
  real_T t670;
  real_T t682;
  real_T t683;
  real_T t687;
  real_T t688;
  real_T t695;
  real_T t707;
  real_T t739;
  real_T t748;
  real_T t756;
  real_T t824;
  real_T t867;
  real_T t898;
  real_T t904;
  real_T t905;
  real_T t906;
  real_T t907;
  real_T t908;
  real_T t986;
  real_T zc_int130;
  real_T zc_int132;
  real_T zc_int133;
  real_T zc_int134;
  real_T zc_int171;
  real_T zc_int172;
  real_T zc_int22;
  real_T zc_int345;
  real_T zc_int353;
  real_T zc_int358;
  real_T zc_int359;
  size_t t110[1];
  size_t t301[1];
  size_t t304[1];
  size_t t36[1];
  size_t t405;
  int32_T M[259];
  int32_T b;
  for (b = 0; b < 259; b++) {
    M[b] = t1239->mM.mX[b];
  }

  U_idx_0 = t1239->mU.mX[0];
  U_idx_1 = t1239->mU.mX[1];
  U_idx_2 = t1239->mU.mX[2];
  U_idx_3 = t1239->mU.mX[3];
  U_idx_4 = t1239->mU.mX[4];
  U_idx_5 = t1239->mU.mX[5];
  U_idx_6 = t1239->mU.mX[6];
  U_idx_7 = t1239->mU.mX[7];
  U_idx_8 = t1239->mU.mX[8];
  U_idx_9 = t1239->mU.mX[9];
  U_idx_10 = t1239->mU.mX[10];
  U_idx_11 = t1239->mU.mX[11];
  for (b = 0; b < 480; b++) {
    X[b] = t1239->mX.mX[b];
  }

  out = t1240->mDUF;
  t395[0] = 1.0;
  t395[1] = 1.25;
  t395[2] = 1.5;
  t395[3] = 1.75;
  t395[4] = 2.0;
  nonscalar49[0] = 0.0;
  nonscalar49[1] = 188.49555921538757;
  nonscalar49[2] = 376.99111843077515;
  t454 = -X[64ULL] - U_idx_0;
  t33 = (((real_T)(t454 >= 0.0) * t454 * 1000.0 + (real_T)(t454 < 0.0) * X[66ULL])
         - 0.9) / 0.099999999999999978;
  Fuel_Cell_Boost_Converter_L_i = X[72ULL] * 1.0E-9 + X[4ULL];
  t456 = -X[145ULL] + U_idx_2 * -0.01;
  if (X[21ULL] <= 0.0) {
    t1228 = 0.0;
  } else {
    t1228 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    t1207 = 0.0;
  } else {
    t1207 = X[22ULL] >= 1.0 ? 1.0 : X[22ULL];
  }

  t1235 = (((1.0 - t1228) - t1207) * 296.802103844292 + t1228 * 461.523) + t1207
    * 4124.48151675695;
  intermediate_der10142 = (X[19ULL] / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) -
    X[146ULL] / (X[147ULL] == 0.0 ? 1.0E-16 : X[147ULL])) * t456 * t1235 /
    7.8539816339744827E-5;
  if (X[146ULL] <= 216.59999999999997) {
    intermediate_der10530 = 216.59999999999997;
  } else {
    intermediate_der10530 = X[146ULL] >= 623.15 ? 623.15 : X[146ULL];
  }

  t1237 = intermediate_der10530 * intermediate_der10530;
  t451 = (((1074.1165326382541 + intermediate_der10530 * -0.2214565261064077) +
           t1237 * 0.00037212980109010952) * ((1.0 - t1228) - t1207) +
          ((1479.6504774710445 + intermediate_der10530 * 1.200211433705052) +
           t1237 * -0.00038614513167842338) * t1228) + ((12825.281119790017 +
    intermediate_der10530 * 6.9647057412830984) + t1237 * -0.007052486824683288)
    * t1207;
  t1238 = t451 - t1235;
  intermediate_der10530 = t451 / (t1238 == 0.0 ? 1.0E-16 : t1238);
  t451 = pmf_sqrt(intermediate_der10142 * intermediate_der10142 *
                  9.999999999999999E-14 + fabs(X[146ULL] * intermediate_der10530
    * t1235) * 1.0E-9);
  if (X[148ULL] <= 0.0) {
    t1237 = 0.0;
  } else {
    t1237 = X[148ULL] >= 1.0 ? 1.0 : X[148ULL];
  }

  if (X[149ULL] <= 0.0) {
    t1238 = 0.0;
  } else {
    t1238 = X[149ULL] >= 1.0 ? 1.0 : X[149ULL];
  }

  t286[0ULL] = X[19ULL];
  t301[0] = 52ULL;
  t36[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t29 = efOut;
  tlu2_1d_linear_nearest_value(&b_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = b_efOut[0];
  tlu2_1d_linear_nearest_value(&c_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = c_efOut[0];
  tlu2_1d_linear_nearest_value(&d_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = d_efOut[0];
  intermediate_der7469 = (((1.0 - t1237) - t1238) * t388_idx_0 + U_idx_0 * t1237)
    + t385_idx_0 * t1238;
  t464 = X[147ULL] * X[147ULL] * intermediate_der10530;
  intermediate_der10679 = -pmf_sqrt(fabs(t464 / (t1235 == 0.0 ? 1.0E-16 : t1235)
    / (X[146ULL] == 0.0 ? 1.0E-16 : X[146ULL]))) * 7.8539816339744827E-5;
  if (intermediate_der10679 >= 0.0) {
    t1176 = intermediate_der10679 * 100000.0;
  } else {
    t1176 = -intermediate_der10679 * 100000.0;
  }

  t468 = intermediate_der7469 * 7.8539816339744827E-5;
  t1177 = t1176 * 0.01 / (t468 == 0.0 ? 1.0E-16 : t468);
  t470 = X[19ULL] * t1235;
  t1178 = X[20ULL] / (t470 == 0.0 ? 1.0E-16 : t470);
  t472 = t1178 * 1.5707963267948965E-8;
  t1182 = intermediate_der10679 * intermediate_der7469 * 35.2 / (t472 == 0.0 ?
    1.0E-16 : t472);
  t471 = t1177 >= 1.0 ? t1177 : 1.0;
  intermediate_der1320 = pmf_log10(6.9 / (t471 == 0.0 ? 1.0E-16 : t471) +
    0.00017169489553429715) * pmf_log10(6.9 / (t471 == 0.0 ? 1.0E-16 : t471) +
    0.00017169489553429715) * 3.24;
  t475 = t1178 * 1.2337005501361697E-10;
  t1176 = intermediate_der10679 * t1176 * (1.0 / (intermediate_der1320 == 0.0 ?
    1.0E-16 : intermediate_der1320)) * 0.55 / (t475 == 0.0 ? 1.0E-16 : t475);
  t1178 = (t1177 - 2000.0) / 2000.0;
  t471 = t1178 * t1178 * 3.0 - t1178 * t1178 * t1178 * 2.0;
  if (t1177 <= 2000.0) {
    t1178 = t1182 * 1.0E-5;
  } else if (t1177 >= 4000.0) {
    t1178 = t1176 * 1.0E-5;
  } else {
    t1178 = ((1.0 - t471) * t1182 + t1176 * t471) * 1.0E-5;
  }

  t451 = t456 * t451 / 7.8539816339744827E-5 * 0.00031622776601683789 + t1178;
  t1176 = X[123ULL] - X[20ULL];
  t286[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t28 = e_efOut;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = f_efOut[0];
  t1178 = t388_idx_0;
  tlu2_1d_linear_nearest_value(&g_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = g_efOut[0];
  tlu2_1d_linear_nearest_value(&h_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = h_efOut[0];
  tlu2_1d_linear_nearest_value(&i_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = i_efOut[0];
  t1182 = (((1.0 - t1237) - t1238) * t388_idx_0 + U_idx_0 * t1237) + t385_idx_0 *
    t1238;
  if (X[144ULL] <= 0.0) {
    t471 = 0.0;
  } else {
    t471 = X[144ULL] >= 1.0 ? 1.0 : X[144ULL];
  }

  if (X[143ULL] <= 0.0) {
    intermediate_der1320 = 0.0;
  } else {
    intermediate_der1320 = X[143ULL] >= 1.0 ? 1.0 : X[143ULL];
  }

  intermediate_der1321 = (((1.0 - t471) - intermediate_der1320) *
    296.802103844292 + t471 * 461.523) + intermediate_der1320 * 4124.48151675695;
  t471 = X[144ULL] * 461.523 / (intermediate_der1321 == 0.0 ? 1.0E-16 :
    intermediate_der1321);
  if (t471 <= 0.0) {
    intermediate_der1320 = 0.0;
  } else {
    intermediate_der1320 = t471 >= 1.0 ? 1.0 : t471;
  }

  t471 = X[143ULL] * 4124.48151675695 / (intermediate_der1321 == 0.0 ? 1.0E-16 :
    intermediate_der1321);
  if (t471 <= 0.0) {
    intermediate_der1321 = 0.0;
  } else {
    intermediate_der1321 = t471 >= 1.0 ? 1.0 : t471;
  }

  t286[0ULL] = X[141ULL];
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = j_efOut;
  tlu2_1d_linear_nearest_value(&k_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = k_efOut[0];
  tlu2_1d_linear_nearest_value(&l_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = l_efOut[0];
  tlu2_1d_linear_nearest_value(&m_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = m_efOut[0];
  t471 = (((1.0 - intermediate_der1320) - intermediate_der1321) * t388_idx_0 +
          U_idx_0 * intermediate_der1320) + t385_idx_0 * intermediate_der1321;
  t476 = (t456 - (-X[133ULL])) / 2.0;
  tlu2_1d_linear_nearest_value(&n_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = n_efOut[0];
  tlu2_1d_linear_nearest_value(&o_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = o_efOut[0];
  tlu2_1d_linear_nearest_value(&p_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = p_efOut[0];
  t867 = ((((1.0 - intermediate_der1320) - intermediate_der1321) * t388_idx_0 +
           U_idx_0 * intermediate_der1320) + t385_idx_0 * intermediate_der1321)
    + intermediate_der7469;
  t483 = t867 / 2.0 * 7.8539816339744827E-5;
  t477 = -(t476 <= 0.0 ? t476 : 0.0) * 0.01 / (t483 == 0.0 ? 1.0E-16 : t483);
  t478 = t477 >= 0.0 ? t477 : -t477;
  t479 = t478 > 1000.0 ? t478 : 1000.0;
  tlu2_1d_linear_nearest_value(&q_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = q_efOut[0];
  tlu2_1d_linear_nearest_value(&r_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = r_efOut[0];
  tlu2_1d_linear_nearest_value(&s_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = s_efOut[0];
  t480 = (((1.0 - t1237) - t1238) * t388_idx_0 + U_idx_0 * t1237) + t385_idx_0 *
    t1238;
  tlu2_1d_linear_nearest_value(&t_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = t_efOut[0];
  tlu2_1d_linear_nearest_value(&u_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = u_efOut[0];
  tlu2_1d_linear_nearest_value(&v_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = v_efOut[0];
  t1237 = (((1.0 - intermediate_der1320) - intermediate_der1321) * t388_idx_0 +
           U_idx_0 * intermediate_der1320) + t385_idx_0 * intermediate_der1321;
  t824 = t480 + t1237;
  if (t824 / 2.0 > 0.5) {
    t1238 = (t480 + t1237) / 2.0;
  } else {
    t1238 = 0.5;
  }

  t486 = pmf_log10(6.9 / (t479 == 0.0 ? 1.0E-16 : t479) + 0.00017169489553429715)
    * pmf_log10(6.9 / (t479 == 0.0 ? 1.0E-16 : t479) + 0.00017169489553429715) *
    3.24;
  intermediate_der1320 = 1.0 / (t486 == 0.0 ? 1.0E-16 : t486);
  t898 = (pmf_pow(t1238, 0.66666666666666663) - 1.0) * pmf_sqrt
    (intermediate_der1320 / 8.0) * 12.7 + 1.0;
  intermediate_der1321 = (t479 - 1000.0) * (intermediate_der1320 / 8.0) * t1238 /
    (t898 == 0.0 ? 1.0E-16 : t898);
  intermediate_der8324 = (t478 - 2000.0) / 2000.0;
  t483 = intermediate_der8324 * intermediate_der8324 * 3.0 -
    intermediate_der8324 * intermediate_der8324 * intermediate_der8324 * 2.0;
  if (t478 <= 2000.0) {
    t485 = 3.66;
  } else if (t478 >= 4000.0) {
    t485 = intermediate_der1321;
  } else {
    t485 = (1.0 - t483) * 3.66 + intermediate_der1321 * t483;
  }

  t904 = t485 * 0.031415926535897927;
  t493 = t824 / 2.0;
  if (t478 > t904 / 7.8539816339744827E-5 / (t493 == 0.0 ? 1.0E-16 : t493) /
      30.0) {
    t499 = (t480 + t1237) / 2.0;
    t486 = t485 * 0.031415926535897927 / (t478 == 0.0 ? 1.0E-16 : t478) /
      7.8539816339744827E-5 / (t499 == 0.0 ? 1.0E-16 : t499);
  } else {
    t486 = 30.0;
  }

  t487 = (X[126ULL] - X[141ULL]) * (1.0 - pmf_exp(-t486));
  if (X[125ULL] <= 0.0) {
    t489 = 0.0;
  } else {
    t489 = X[125ULL] >= 1.0 ? 1.0 : X[125ULL];
  }

  if (X[124ULL] <= 0.0) {
    intermediate_der8944 = 0.0;
  } else {
    intermediate_der8944 = X[124ULL] >= 1.0 ? 1.0 : X[124ULL];
  }

  t493 = (((1.0 - t489) - intermediate_der8944) * 296.802103844292 + t489 *
          461.523) + intermediate_der8944 * 4124.48151675695;
  t494 = X[125ULL] * 461.523 / (t493 == 0.0 ? 1.0E-16 : t493);
  if (t494 <= 0.0) {
    t495 = 0.0;
  } else {
    t495 = t494 >= 1.0 ? 1.0 : t494;
  }

  t494 = X[124ULL] * 4124.48151675695 / (t493 == 0.0 ? 1.0E-16 : t493);
  if (t494 <= 0.0) {
    intrm_sf_mf_81 = 0.0;
  } else {
    intrm_sf_mf_81 = t494 >= 1.0 ? 1.0 : t494;
  }

  t286[0ULL] = X[122ULL];
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t29 = w_efOut;
  tlu2_1d_linear_nearest_value(&x_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField11, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = x_efOut[0];
  tlu2_1d_linear_nearest_value(&y_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField12, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = y_efOut[0];
  tlu2_1d_linear_nearest_value(&ab_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField13, &t301[0ULL], &t36
    [0ULL]);
  t385_idx_0 = ab_efOut[0];
  t494 = (((1.0 - t495) - intrm_sf_mf_81) * t388_idx_0 + U_idx_0 * t495) +
    t385_idx_0 * intrm_sf_mf_81;
  tlu2_1d_linear_nearest_value(&bb_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t301[0ULL], &t36
    [0ULL]);
  t388_idx_0 = bb_efOut[0];
  tlu2_1d_linear_nearest_value(&cb_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField9, &t301[0ULL], &t36
    [0ULL]);
  U_idx_0 = cb_efOut[0];
  tlu2_1d_linear_nearest_value(&db_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField10, &t301[0ULL], &t36
    [0ULL]);
  t385_idx_0 = db_efOut[0];
  t497 = (((1.0 - t495) - intrm_sf_mf_81) * t388_idx_0 + U_idx_0 * t495) +
    t385_idx_0 * intrm_sf_mf_81;
  tlu2_1d_linear_nearest_value(&eb_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t301[0ULL], &t36
    [0ULL]);
  t388_idx_0 = eb_efOut[0];
  tlu2_1d_linear_nearest_value(&fb_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t301[0ULL], &t36
    [0ULL]);
  U_idx_0 = fb_efOut[0];
  tlu2_1d_linear_nearest_value(&gb_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t301[0ULL], &t36
    [0ULL]);
  t385_idx_0 = gb_efOut[0];
  t905 = intermediate_der7469 + ((((1.0 - t495) - intrm_sf_mf_81) * t388_idx_0 +
    U_idx_0 * t495) + t385_idx_0 * intrm_sf_mf_81);
  t504 = t905 / 2.0 * 7.8539816339744827E-5;
  t495 = (t476 >= 0.0 ? t476 : 0.0) * 0.01 / (t504 == 0.0 ? 1.0E-16 : t504);
  intrm_sf_mf_81 = t495 >= 0.0 ? t495 : -t495;
  intermediate_der8290 = intrm_sf_mf_81 > 1000.0 ? intrm_sf_mf_81 : 1000.0;
  t906 = t494 + t480;
  if (t906 / 2.0 > 0.5) {
    t499 = (t494 + t480) / 2.0;
  } else {
    t499 = 0.5;
  }

  t507 = pmf_log10(6.9 / (intermediate_der8290 == 0.0 ? 1.0E-16 :
    intermediate_der8290) + 0.00017169489553429715) * pmf_log10(6.9 /
    (intermediate_der8290 == 0.0 ? 1.0E-16 : intermediate_der8290) +
    0.00017169489553429715) * 3.24;
  t500 = 1.0 / (t507 == 0.0 ? 1.0E-16 : t507);
  t907 = (pmf_pow(t499, 0.66666666666666663) - 1.0) * pmf_sqrt(t500 / 8.0) *
    12.7 + 1.0;
  t501 = (intermediate_der8290 - 1000.0) * (t500 / 8.0) * t499 / (t907 == 0.0 ?
    1.0E-16 : t907);
  intermediate_der2693 = (intrm_sf_mf_81 - 2000.0) / 2000.0;
  t504 = intermediate_der2693 * intermediate_der2693 * 3.0 -
    intermediate_der2693 * intermediate_der2693 * intermediate_der2693 * 2.0;
  if (intrm_sf_mf_81 <= 2000.0) {
    t506 = 3.66;
  } else if (intrm_sf_mf_81 >= 4000.0) {
    t506 = t501;
  } else {
    t506 = (1.0 - t504) * 3.66 + t501 * t504;
  }

  t908 = t506 * 0.031415926535897927;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I = t906 / 2.0;
  if (intrm_sf_mf_81 > t908 / 7.8539816339744827E-5 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I) /
      30.0) {
    t1129 = (t494 + t480) / 2.0;
    t507 = t506 * 0.031415926535897927 / (intrm_sf_mf_81 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_81) / 7.8539816339744827E-5 / (t1129 == 0.0 ? 1.0E-16 : t1129);
  } else {
    t507 = 30.0;
  }

  t508 = (X[126ULL] - X[122ULL]) * (1.0 - pmf_exp(-t507));
  t510 = pmf_sqrt(t456 * t456 + 1.6409606283812424E-14);
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = hb_efOut[0];
  t513 = t388_idx_0;
  tlu2_1d_linear_linear_value(&ib_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = ib_efOut[0];
  t1228 = ((((1.0 - t1228) - t1207) * t513 + t1178 * t1228) + t388_idx_0 * t1207)
    - X[19ULL] * t1235 * 0.001;
  t1207 = t513 - X[19ULL] * 0.296802103844292;
  t513 = t388_idx_0 - X[19ULL] * 4.12448151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I = t1178 - X[19ULL] *
    0.461523;
  t1178 = U_idx_1 * 0.031415926535897927;
  if (t1178 * 0.0001 <= 7.8539816339744857E-13) {
    t515 = 7.8539816339744857E-13;
  } else if (t1178 * 0.0001 >= 3.1415926535897929E-6) {
    t515 = 3.1415926535897929E-6;
  } else {
    t515 = t1178 * 0.0001;
  }

  t516 = t515 / 7.8539816339744827E-5;
  if (X[168ULL] <= 0.0) {
    t1137 = 0.0;
  } else {
    t1137 = X[168ULL] >= 1.0 ? 1.0 : X[168ULL];
  }

  if (X[169ULL] <= 0.0) {
    t518 = 0.0;
  } else {
    t518 = X[169ULL] >= 1.0 ? 1.0 : X[169ULL];
  }

  t1132 = (((1.0 - t1137) - t518) * 296.802103844292 + t1137 * 461.523) + t518 *
    4124.48151675695;
  t522 = X[166ULL] * t1132;
  t1129 = X[167ULL] / (t522 == 0.0 ? 1.0E-16 : t522);
  intermediate_der2829 = X[167ULL] / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL]) *
    (X[170ULL] / (X[166ULL] == 0.0 ? 1.0E-16 : X[166ULL]));
  t524 = X[167ULL] / 1.01325 * (X[171ULL] / (X[166ULL] == 0.0 ? 1.0E-16 : X
    [166ULL]));
  t528 = (X[142ULL] + 1.01325) / 2.0 * 0.0010000000000000009;
  t525 = (1.0 - t516) * (1.0 - t516);
  U_idx_0 = t528 * t525;
  intermediate_der3568 = (t516 + 1.0) * (1.0 - t516 * intermediate_der2829) -
    (1.0 - t516 * t524) * t516 * 2.0;
  intermediate_der3823 = (X[142ULL] - 1.01325) * (intermediate_der3568 >= t525 ?
    intermediate_der3568 : t525);
  intermediate_der6080 = (X[142ULL] - 1.01325) / (t528 == 0.0 ? 1.0E-16 : t528);
  intermediate_der10698 = intermediate_der6080 * intermediate_der6080 * 3.0 -
    intermediate_der6080 * intermediate_der6080 * intermediate_der6080 * 2.0;
  if (X[142ULL] - 1.01325 <= 0.0) {
    intermediate_der6080 = U_idx_0;
  } else if (X[142ULL] - 1.01325 >= t528) {
    intermediate_der6080 = intermediate_der3823;
  } else {
    intermediate_der6080 = (1.0 - intermediate_der10698) * U_idx_0 +
      intermediate_der3823 * intermediate_der10698;
  }

  intermediate_der3823 = (t516 + 1.0) * (1.0 - t516 * t524) - (1.0 - t516 *
    intermediate_der2829) * t516 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = (1.01325 - X
    [142ULL]) * (intermediate_der3823 >= t525 ? intermediate_der3823 : t525);
  intermediate_der6653 = (1.01325 - X[142ULL]) / (t528 == 0.0 ? 1.0E-16 : t528);
  t532 = intermediate_der6653 * intermediate_der6653 * 3.0 -
    intermediate_der6653 * intermediate_der6653 * intermediate_der6653 * 2.0;
  if (1.01325 - X[142ULL] <= 0.0) {
    intermediate_der6653 = U_idx_0;
  } else if (1.01325 - X[142ULL] >= t528) {
    intermediate_der6653 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  } else {
    intermediate_der6653 = (1.0 - t532) * U_idx_0 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t532;
  }

  if (X[142ULL] > 1.01325) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
      intermediate_der6080;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[142ULL] <
      1.01325 ? intermediate_der6653 : U_idx_0;
  }

  if (X[166ULL] <= 216.59999999999997) {
    U_idx_0 = 216.59999999999997;
  } else {
    U_idx_0 = X[166ULL] >= 623.15 ? 623.15 : X[166ULL];
  }

  t439 = U_idx_0 * U_idx_0;
  intermediate_der6080 = (((1074.1165326382541 + U_idx_0 * -0.2214565261064077)
    + t439 * 0.00037212980109010952) * ((1.0 - t1137) - t518) +
    ((1479.6504774710445 + U_idx_0 * 1.200211433705052) + t439 *
     -0.00038614513167842338) * t1137) + ((12825.281119790017 + U_idx_0 *
    6.9647057412830984) + t439 * -0.007052486824683288) * t518;
  t533 = intermediate_der6080 - t1132;
  t534 = X[167ULL] * X[167ULL] * (intermediate_der6080 / (t533 == 0.0 ? 1.0E-16 :
    t533));
  t1137 = pmf_sqrt(fabs(t534 / (t1132 == 0.0 ? 1.0E-16 : t1132) / (X[166ULL] ==
    0.0 ? 1.0E-16 : X[166ULL]))) * t515 * 0.64;
  t537 = t1129 * 2.0;
  t518 = (X[142ULL] - 1.01325) * pmf_sqrt(fabs(t537 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp))) *
    t515 * 0.64;
  intermediate_der6080 = -X[220ULL] + U_idx_3 * -2.0;
  intermediate_der6653 = pmf_sqrt(intermediate_der6080 * intermediate_der6080 +
    6.4274470286298274E-9);
  t286[0ULL] = X[219ULL];
  t304[0] = 11ULL;
  tlu2_linear_linear_prelookup(&jb_efOut.mField0[0ULL], &jb_efOut.mField1[0ULL],
    &jb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t26 = jb_efOut;
  t286[0ULL] = 1.01325;
  t110[0] = 12ULL;
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t286[0ULL],
    &t110[0ULL], &t36[0ULL]);
  t23 = kb_efOut;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = lb_efOut[0];
  t439 = t388_idx_0;
  t286[0ULL] = X[215ULL];
  tlu2_linear_linear_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t28 = mb_efOut;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = nb_efOut[0];
  t533 = t388_idx_0;
  t535 = U_idx_3 * 2.0;
  intermediate_der9361 = pmf_sqrt(t535 * t535 + 1.2620262729050631E-10);
  t286[0ULL] = X[238ULL];
  tlu2_linear_linear_prelookup(&ob_efOut.mField0[0ULL], &ob_efOut.mField1[0ULL],
    &ob_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t26 = ob_efOut;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = pb_efOut[0];
  intermediate_der8255 = t388_idx_0;
  t286[0ULL] = X[240ULL];
  tlu2_linear_linear_prelookup(&qb_efOut.mField0[0ULL], &qb_efOut.mField1[0ULL],
    &qb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t26 = qb_efOut;
  t286[0ULL] = X[236ULL];
  tlu2_linear_linear_prelookup(&rb_efOut.mField0[0ULL], &rb_efOut.mField1[0ULL],
    &rb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t286[0ULL],
    &t110[0ULL], &t36[0ULL]);
  t28 = rb_efOut;
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = sb_efOut[0];
  intermediate_der9276 = t388_idx_0;
  t286[0ULL] = X[235ULL];
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t26 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = ub_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_B_u_i = t388_idx_0;
  intermediate_der8975 = (intermediate_der8255 + intermediate_der9276) / 2.0;
  t286[0ULL] = X[235ULL];
  tlu2_linear_nearest_prelookup(&vb_efOut.mField0[0ULL], &vb_efOut.mField1[0ULL],
    &vb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t23 = vb_efOut;
  t286[0ULL] = X[29ULL];
  tlu2_linear_nearest_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t286[0ULL],
    &t110[0ULL], &t36[0ULL]);
  t29 = wb_efOut;
  tlu2_2d_linear_nearest_value(&xb_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = xb_efOut[0];
  intermediate_der9303 = t388_idx_0;
  t286[0ULL] = X[222ULL];
  tlu2_linear_nearest_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t21 = yb_efOut;
  tlu2_2d_linear_nearest_value(&ac_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = ac_efOut[0];
  intermediate_der10415 = t388_idx_0;
  t286[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t27 = bc_efOut;
  tlu2_2d_linear_nearest_value(&cc_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField27, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = cc_efOut[0];
  intermediate_der10732 = t388_idx_0;
  tlu2_2d_linear_nearest_value(&dc_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = dc_efOut[0];
  U_idx_1 = t388_idx_0;
  intermediate_der10757 = (t535 - (-X[228ULL])) / 2.0;
  tlu2_2d_linear_nearest_value(&ec_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = ec_efOut[0];
  t539 = t388_idx_0;
  t540 = intermediate_der10757 * 0.0028301886792452828;
  t541 = t388_idx_0 * 0.00093750000000000007;
  t1123 = t540 / (t541 == 0.0 ? 1.0E-16 : t541);
  t1119 = pmf_sqrt(t535 * t535 + 2.4102926357361849E-12);
  t286[0ULL] = X[241ULL];
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t27 = fc_efOut;
  tlu2_2d_linear_linear_value(&gc_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = gc_efOut[0];
  t1088 = t388_idx_0;
  t286[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t286[0ULL],
    &t304[0ULL], &t36[0ULL]);
  t28 = hc_efOut;
  t286[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t286[0ULL],
    &t110[0ULL], &t36[0ULL]);
  t26 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = jc_efOut[0];
  t1117 = t388_idx_0;
  tlu2_2d_linear_nearest_value(&kc_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = kc_efOut[0];
  U_idx_3 = t388_idx_0;
  tlu2_2d_linear_nearest_value(&lc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField28, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = lc_efOut[0];
  t1099 = t388_idx_0;
  tlu2_2d_linear_nearest_value(&mc_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = mc_efOut[0];
  t1113 = t388_idx_0;
  tlu2_2d_linear_nearest_value(&nc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t304[0ULL], &t110[0ULL], &t36[0ULL]);
  t388_idx_0 = nc_efOut[0];
  t1101 = t388_idx_0;
  t286[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&oc_efOut.mField0[0ULL], &oc_efOut.mField1[0ULL],
    &oc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = oc_efOut;
  tlu2_1d_linear_linear_value(&pc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = pc_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 = t388_idx_0;
  if (X[35ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26 = X[35ULL] >=
      1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27 = X[34ULL] >=
      1.0 ? 1.0 : X[34ULL];
  }

  intrm_sf_mf_568 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26)
                      - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27)
                     * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26
                     * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27 *
    4124.48151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 = U_idx_2 *
    0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha12 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 +
     1.4768645655431184E-13);
  tlu2_1d_linear_linear_value(&qc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = qc_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 = t388_idx_0;
  tlu2_1d_linear_linear_value(&rc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = rc_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26 = ((((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26) +
    t388_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27)
    - X[32ULL] * intrm_sf_mf_568 * 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 - X[32ULL] *
    0.296802103844292;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28 = t388_idx_0 -
    X[32ULL] * 4.12448151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha29 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 - X[32ULL] *
    0.461523;
  if (X[283ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 = X[283ULL] >=
      1.0 ? 1.0 : X[283ULL];
  }

  if (X[282ULL] <= 0.0) {
    intrm_sf_mf_604 = 0.0;
  } else {
    intrm_sf_mf_604 = X[282ULL] >= 1.0 ? 1.0 : X[282ULL];
  }

  zc_int134 = (((1.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)
                - intrm_sf_mf_604) * 296.802103844292 +
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 *
               461.523) + intrm_sf_mf_604 * 4124.48151675695;
  t286[0ULL] = X[277ULL];
  tlu2_linear_linear_prelookup(&sc_efOut.mField0[0ULL], &sc_efOut.mField1[0ULL],
    &sc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = sc_efOut;
  tlu2_1d_linear_linear_value(&tc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = tc_efOut[0];
  tlu2_1d_linear_linear_value(&uc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = uc_efOut[0];
  tlu2_1d_linear_linear_value(&vc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = vc_efOut[0];
  zc_int133 = (((1.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)
                - intrm_sf_mf_604) * t388_idx_0 + U_idx_0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1) +
    t385_idx_0 * intrm_sf_mf_604;
  t286[0ULL] = X[280ULL];
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = wc_efOut;
  tlu2_1d_linear_linear_value(&xc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = xc_efOut[0];
  tlu2_1d_linear_linear_value(&yc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = yc_efOut[0];
  tlu2_1d_linear_linear_value(&ad_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = ad_efOut[0];
  zc_int132 = (((1.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)
                - intrm_sf_mf_604) * t388_idx_0 + U_idx_0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1) +
    t385_idx_0 * intrm_sf_mf_604;
  t286[0ULL] = X[278ULL];
  tlu2_linear_linear_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t23 = bd_efOut;
  tlu2_1d_linear_linear_value(&cd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = cd_efOut[0];
  tlu2_1d_linear_linear_value(&dd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = dd_efOut[0];
  tlu2_1d_linear_linear_value(&ed_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = ed_efOut[0];
  zc_int171 = (((1.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)
                - intrm_sf_mf_604) * t388_idx_0 + U_idx_0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1) +
    t385_idx_0 * intrm_sf_mf_604;
  t286[0ULL] = X[279ULL];
  tlu2_linear_linear_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = fd_efOut;
  tlu2_1d_linear_linear_value(&gd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = gd_efOut[0];
  tlu2_1d_linear_linear_value(&hd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = hd_efOut[0];
  tlu2_1d_linear_linear_value(&id_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = id_efOut[0];
  zc_int172 = (((1.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)
                - intrm_sf_mf_604) * t388_idx_0 + U_idx_0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1) +
    t385_idx_0 * intrm_sf_mf_604;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 = (X[300ULL] *
    -0.7999998 + U_idx_4 * 7.9999980000000006) + 9.9999999947364415E-9;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 *
      7.8539816339744827E-5 <= 7.8539816339744857E-13) {
    intrm_sf_mf_604 = 7.8539816339744857E-13;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 *
             7.8539816339744827E-5 >= 3.1415926535897929E-6) {
    intrm_sf_mf_604 = 3.1415926535897929E-6;
  } else {
    intrm_sf_mf_604 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 *
      7.8539816339744827E-5;
  }

  t1006 = intrm_sf_mf_604 / 7.8539816339744827E-5;
  if (X[319ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26 = X[319ULL] >=
      1.0 ? 1.0 : X[319ULL];
  }

  if (X[320ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 = X[320ULL] >=
      1.0 ? 1.0 : X[320ULL];
  }

  intrm_sf_mf_810 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26)
                      - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27)
                     * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26
                     * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 *
    4124.48151675695;
  t543 = X[317ULL] * intrm_sf_mf_810;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 = X[318ULL] /
    (t543 == 0.0 ? 1.0E-16 : t543);
  t1009 = X[318ULL] / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) * (X[321ULL] / (X
    [317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t1010 = X[318ULL] / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL]) * (X[322ULL] /
    (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t1012 = (X[37ULL] + X[300ULL]) / 2.0 * 0.0010000000000000009;
  t1011 = (1.0 - t1006) * (1.0 - t1006);
  U_idx_0 = t1012 * t1011;
  t986 = (t1006 + 1.0) * (1.0 - t1006 * t1009) - (1.0 - t1006 * t1010) * t1006 *
    2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 = (X[37ULL] -
    X[300ULL]) * (t986 >= t1011 ? t986 : t1011);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = (X[37ULL] - X[300ULL])
    / (t1012 == 0.0 ? 1.0E-16 : t1012);
  t553 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I * 2.0;
  if (X[37ULL] - X[300ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = U_idx_0;
  } else if (X[37ULL] - X[300ULL] >= t1012) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = (1.0 - t553) *
      U_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 *
      t553;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 = (t1006 + 1.0)
    * (1.0 - t1006 * t1010) - (1.0 - t1006 * t1009) * t1006 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = (X[300ULL] -
    X[37ULL]) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18
                 >= t1011 ?
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18
                 : t1011);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I = (X[300ULL] - X[37ULL])
    / (t1012 == 0.0 ? 1.0E-16 : t1012);
  t554 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I * 2.0;
  if (X[300ULL] - X[37ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I = U_idx_0;
  } else if (X[300ULL] - X[37ULL] >= t1012) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I = (1.0 - t554) *
      U_idx_0 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
      t554;
  }

  if (X[37ULL] > X[300ULL]) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 = X[37ULL] <
      X[300ULL] ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I :
      U_idx_0;
  }

  if (X[317ULL] <= 216.59999999999997) {
    U_idx_0 = 216.59999999999997;
  } else {
    U_idx_0 = X[317ULL] >= 623.15 ? 623.15 : X[317ULL];
  }

  t442 = U_idx_0 * U_idx_0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = (((1074.1165326382541
    + U_idx_0 * -0.2214565261064077) + t442 * 0.00037212980109010952) * ((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27) +
    ((1479.6504774710445 + U_idx_0 * 1.200211433705052) + t442 *
     -0.00038614513167842338) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26) +
    ((12825.281119790017 + U_idx_0 * 6.9647057412830984) + t442 *
     -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I - intrm_sf_mf_810;
  t556 = X[318ULL] * X[318ULL] *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I /
     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I == 0.0 ? 1.0E-16 :
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I));
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26 = pmf_sqrt
    (fabs(t556 / (intrm_sf_mf_810 == 0.0 ? 1.0E-16 : intrm_sf_mf_810) / (X
       [317ULL] == 0.0 ? 1.0E-16 : X[317ULL]))) * intrm_sf_mf_604 * 0.64;
  t559 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 = (X[37ULL] -
    X[300ULL]) * pmf_sqrt(fabs(t559 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12)))
    * intrm_sf_mf_604 * 0.64;
  if (X[50ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = X[50ULL] >= 1.0 ?
      1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I = X[49ULL] >= 1.0 ?
      1.0 : X[49ULL];
  }

  t442 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I) *
          296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I * 4124.48151675695;
  t286[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t28 = jd_efOut;
  tlu2_1d_linear_linear_value(&kd_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = kd_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I = t388_idx_0;
  tlu2_1d_linear_linear_value(&ld_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = ld_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = t388_idx_0;
  tlu2_1d_linear_linear_value(&md_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = md_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I = ((((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I) + t388_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I) - X[48ULL] * t442 *
    0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I - X[48ULL] *
    0.296802103844292;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I = t388_idx_0 - X[48ULL]
    * 4.12448151675695;
  t560 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I - X[48ULL] *
    0.461523;
  if (X[56ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I = X[56ULL] >= 1.0 ?
      1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    t561 = 0.0;
  } else {
    t561 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  intrm_sf_mf_1339 = (((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I) -
                       t561) * 296.802103844292 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I *
                      461.523) + t561 * 259.836612622973;
  t286[0ULL] = X[54ULL];
  tlu2_linear_linear_prelookup(&nd_efOut.mField0[0ULL], &nd_efOut.mField1[0ULL],
    &nd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = nd_efOut;
  tlu2_1d_linear_linear_value(&od_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = od_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_convecti2 = t388_idx_0;
  tlu2_1d_linear_linear_value(&pd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = pd_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_g_I = t388_idx_0;
  tlu2_1d_linear_linear_value(&qd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = qd_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I = ((((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I) - t561) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_g_I +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_convecti2 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I) + t388_idx_0 * t561)
    - X[54ULL] * intrm_sf_mf_1339 * 0.001;
  t561 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_g_I - X[54ULL] *
    0.296802103844292;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_g_I = t388_idx_0 - X[54ULL]
    * 0.25983661262297303;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_w_I =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_convecti2 - X[54ULL] *
    0.461523;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_convecti2 = pmf_sqrt(X
    [444ULL] * X[444ULL] + 3.6921614138577959E-12);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = (X[453ULL] *
    0.07812500122070315 + U_idx_10 * 10.0) - 7.8125001220703152E-10;
  if (X[60ULL] <= 0.0) {
    zc_int353 = 0.0;
  } else {
    zc_int353 = X[60ULL] >= 1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1 = X[61ULL] >=
      1.0 ? 1.0 : X[61ULL];
  }

  U_idx_2 = (((1.0 - zc_int353) -
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1) *
             296.802103844292 + zc_int353 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1 *
    259.836612622973;
  if (X[458ULL] <= 0.0) {
    intrm_sf_mf_1514 = 0.0;
  } else {
    intrm_sf_mf_1514 = X[458ULL] >= 1.0 ? 1.0 : X[458ULL];
  }

  if (X[459ULL] <= 0.0) {
    zc_int358 = 0.0;
  } else {
    zc_int358 = X[459ULL] >= 1.0 ? 1.0 : X[459ULL];
  }

  t286[0ULL] = X[58ULL];
  tlu2_linear_nearest_prelookup(&rd_efOut.mField0[0ULL], &rd_efOut.mField1[0ULL],
    &rd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t29 = rd_efOut;
  tlu2_1d_linear_nearest_value(&sd_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t301[0ULL], &t36
    [0ULL]);
  t388_idx_0 = sd_efOut[0];
  tlu2_1d_linear_nearest_value(&td_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t301[0ULL], &t36
    [0ULL]);
  U_idx_0 = td_efOut[0];
  tlu2_1d_linear_nearest_value(&ud_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t301[0ULL], &t36
    [0ULL]);
  t385_idx_0 = ud_efOut[0];
  zc_int345 = (((1.0 - intrm_sf_mf_1514) - zc_int358) * t388_idx_0 + U_idx_0 *
               intrm_sf_mf_1514) + t385_idx_0 * zc_int358;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = X[58ULL] *
    U_idx_2;
  intrm_sf_mf_1514 = X[59ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2);
  zc_int358 = -((X[58ULL] / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) - X[460ULL] /
                 (X[461ULL] == 0.0 ? 1.0E-16 : X[461ULL])) * X[444ULL] * U_idx_2)
    / 0.0019634954084936209;
  if (X[460ULL] <= 216.59999999999997) {
    zc_int359 = 216.59999999999997;
  } else {
    zc_int359 = X[460ULL] >= 623.15 ? 623.15 : X[460ULL];
  }

  U_idx_4 = zc_int359 * zc_int359;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 =
    (((1074.1165326382541 + zc_int359 * -0.2214565261064077) + U_idx_4 *
      0.00037212980109010952) * ((1.0 - zc_int353) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1) +
     ((1479.6504774710445 + zc_int359 * 1.200211433705052) + U_idx_4 *
      -0.00038614513167842338) * zc_int353) + ((900.63941224837913 + zc_int359 *
    -0.044484923911364271) + U_idx_4 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1;
  t569 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 -
    U_idx_2;
  zc_int353 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 /
    (t569 == 0.0 ? 1.0E-16 : t569);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1 = pmf_sqrt
    (zc_int358 * zc_int358 * 9.999999999999999E-14 + fabs(X[460ULL] * zc_int353 *
      U_idx_2) * 1.0E-9);
  t570 = X[461ULL] * X[461ULL] * zc_int353;
  zc_int359 = -pmf_sqrt(fabs(t570 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) / (X
    [460ULL] == 0.0 ? 1.0E-16 : X[460ULL]))) * 0.0019634954084936209;
  if (zc_int359 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = zc_int359 *
      100000.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = -zc_int359
      * 100000.0;
  }

  t574 = zc_int345 * 0.0019634954084936209;
  U_idx_4 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 *
    0.05 / (t574 == 0.0 ? 1.0E-16 : t574);
  t576 = intrm_sf_mf_1514 * 9.8174770424681068E-6;
  intrm_sf_mf_1623 = zc_int359 * zc_int345 * 35.2 / (t576 == 0.0 ? 1.0E-16 :
    t576);
  t568 = U_idx_4 >= 1.0 ? U_idx_4 : 1.0;
  t577 = pmf_log10(6.9 / (t568 == 0.0 ? 1.0E-16 : t568) + 2.8767404433520813E-5)
    * pmf_log10(6.9 / (t568 == 0.0 ? 1.0E-16 : t568) + 2.8767404433520813E-5) *
    3.24;
  t579 = intrm_sf_mf_1514 * 3.855314219175531E-7;
  intrm_sf_mf_1514 = zc_int359 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 * (1.0 /
    (t577 == 0.0 ? 1.0E-16 : t577)) * 0.55 / (t579 == 0.0 ? 1.0E-16 : t579);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = (U_idx_4 -
    2000.0) / 2000.0;
  t568 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 * 2.0;
  if (U_idx_4 <= 2000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 =
      intrm_sf_mf_1623 * 1.0E-5;
  } else if (U_idx_4 >= 4000.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 =
      intrm_sf_mf_1514 * 1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = ((1.0 -
      t568) * intrm_sf_mf_1623 + intrm_sf_mf_1514 * t568) * 1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1 = -(X[444ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1) /
    0.0019634954084936209 * 0.00031622776601683789 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2;
  intrm_sf_mf_1514 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - X
    [59ULL];
  if (X[455ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = X[455ULL] >=
      1.0 ? 1.0 : X[455ULL];
  }

  if (X[454ULL] <= 0.0) {
    intrm_sf_mf_1623 = 0.0;
  } else {
    intrm_sf_mf_1623 = X[454ULL] >= 1.0 ? 1.0 : X[454ULL];
  }

  t568 = (((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2) -
           intrm_sf_mf_1623) * 296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 *
          461.523) + intrm_sf_mf_1623 * 259.836612622973;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2 = pmf_sqrt(X
    [444ULL] * X[444ULL] + 4.1024015709531055E-13);
  if (X[453ULL] * 0.0019634954084936209 <= 1.9634954084936209E-11) {
    intrm_sf_mf_1623 = 1.9634954084936209E-11;
  } else if (X[453ULL] * 0.0019634954084936209 >= 0.0012566370614359179) {
    intrm_sf_mf_1623 = 0.0012566370614359179;
  } else {
    intrm_sf_mf_1623 = X[453ULL] * 0.0019634954084936209;
  }

  t569 = intrm_sf_mf_1623 / 0.0019634954084936209;
  if (X[472ULL] <= 0.0) {
    t571 = 0.0;
  } else {
    t571 = X[472ULL] >= 1.0 ? 1.0 : X[472ULL];
  }

  if (X[473ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 = X[473ULL] >=
      1.0 ? 1.0 : X[473ULL];
  }

  t575 = (((1.0 - t571) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21) *
          296.802103844292 + t571 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 *
    259.836612622973;
  t583 = X[470ULL] * t575;
  t577 = X[471ULL] / (t583 == 0.0 ? 1.0E-16 : t583);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9 = X[471ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) * (X[474ULL] / (X
    [470ULL] == 0.0 ? 1.0E-16 : X[470ULL]));
  t580 = X[471ULL] / 1.01325 * (X[475ULL] / (X[470ULL] == 0.0 ? 1.0E-16 : X
    [470ULL]));
  t582 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p + 1.01325) / 2.0
    * 0.0010000000000000009;
  t581 = (1.0 - t569) * (1.0 - t569);
  t583 = t582 * t581;
  t588 = (t569 + 1.0) * (1.0 - t569 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9) - (1.0 -
    t569 * t580) * t569 * 2.0;
  t590 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) *
    (t588 >= t581 ? t588 : t581);
  intrm_sf_mf_1633 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p -
                      1.01325) / (t582 == 0.0 ? 1.0E-16 : t582);
  t591 = intrm_sf_mf_1633 * intrm_sf_mf_1633 * 3.0 - intrm_sf_mf_1633 *
    intrm_sf_mf_1633 * intrm_sf_mf_1633 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 <= 0.0) {
    zc_int22 = t583;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 >=
             t582) {
    zc_int22 = t590;
  } else {
    zc_int22 = (1.0 - t591) * t583 + t590 * t591;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 = (t569 + 1.0)
    * (1.0 - t569 * t580) - (1.0 - t569 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9) * t569 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9 = (1.01325 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 >= t581 ?
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 : t581);
  t580 = (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) /
    (t582 == 0.0 ? 1.0E-16 : t582);
  t592 = t580 * t580 * 3.0 - t580 * t580 * t580 * 2.0;
  if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p <= 0.0) {
    intrm_sf_mf_1642 = t583;
  } else if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p >=
             t582) {
    intrm_sf_mf_1642 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9;
  } else {
    intrm_sf_mf_1642 = (1.0 - t592) * t583 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9 * t592;
  }

  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p > 1.01325) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = zc_int22;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p < 1.01325 ?
      intrm_sf_mf_1642 : t583;
  }

  if (X[470ULL] <= 216.59999999999997) {
    zc_int22 = 216.59999999999997;
  } else {
    zc_int22 = X[470ULL] >= 623.15 ? 623.15 : X[470ULL];
  }

  t448 = zc_int22 * zc_int22;
  intrm_sf_mf_1642 = (((1074.1165326382541 + zc_int22 * -0.2214565261064077) +
                       t448 * 0.00037212980109010952) * ((1.0 - t571) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21) +
                      ((1479.6504774710445 + zc_int22 * 1.200211433705052) +
                       t448 * -0.00038614513167842338) * t571) +
    ((900.63941224837913 + zc_int22 * -0.044484923911364271) + t448 *
     0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21;
  t593 = intrm_sf_mf_1642 - t575;
  intermediate_der722 = X[471ULL] * X[471ULL] * (intrm_sf_mf_1642 / (t593 == 0.0
    ? 1.0E-16 : t593));
  t571 = pmf_sqrt(fabs(intermediate_der722 / (t575 == 0.0 ? 1.0E-16 : t575) /
                       (X[470ULL] == 0.0 ? 1.0E-16 : X[470ULL]))) *
    intrm_sf_mf_1623 * 0.64;
  t597 = t577 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) * pmf_sqrt
    (fabs(t597 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6
                  == 0.0 ? 1.0E-16 :
                  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6)))
    * intrm_sf_mf_1623 * 0.64;
  t286[0ULL] = X[122ULL];
  tlu2_linear_linear_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = vd_efOut;
  tlu2_1d_linear_linear_value(&wd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = wd_efOut[0];
  tlu2_1d_linear_linear_value(&xd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = xd_efOut[0];
  tlu2_1d_linear_linear_value(&yd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = yd_efOut[0];
  zc_int22 = (((1.0 - t489) - intermediate_der8944) * t388_idx_0 + U_idx_0 *
              t489) + t385_idx_0 * intermediate_der8944;
  t489 = t456 >= 0.0 ? t456 : -t456;
  intermediate_der8944 = t489 * 0.01 / (t468 == 0.0 ? 1.0E-16 : t468);
  intrm_sf_mf_1642 = intermediate_der8944 >= 1.0 ? intermediate_der8944 : 1.0;
  t600 = pmf_log10(6.9 / (intrm_sf_mf_1642 == 0.0 ? 1.0E-16 : intrm_sf_mf_1642)
                   + 0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_1642
    == 0.0 ? 1.0E-16 : intrm_sf_mf_1642) + 0.00017169489553429715) * 3.24;
  t448 = 1.0 / (t600 == 0.0 ? 1.0E-16 : t600);
  t593 = t456 * intermediate_der7469 * 35.2 / (t472 == 0.0 ? 1.0E-16 : t472);
  t595 = t456 * t489 * t448 * 0.55 / (t475 == 0.0 ? 1.0E-16 : t475);
  t598 = (intermediate_der8944 - 2000.0) / 2000.0;
  t600 = t598 * t598 * 3.0 - t598 * t598 * t598 * 2.0;
  t607 = t582 - (-t582);
  t601 = ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) -
          (-t582)) / (t607 == 0.0 ? 1.0E-16 : t607);
  t608 = t1113 + t539;
  t610 = t608 / 2.0 * 0.00093750000000000007;
  t1113 = t540 / (t610 == 0.0 ? 1.0E-16 : t610);
  t540 = t1113 >= 0.0 ? t1113 : -t1113;
  t605 = t540 > 1000.0 ? t540 : 1000.0;
  t611 = intermediate_der9303 + intermediate_der10732;
  if (t611 / 2.0 > 0.5) {
    t606 = (intermediate_der9303 + intermediate_der10732) / 2.0;
  } else {
    t606 = 0.5;
  }

  t613 = pmf_log10(6.9 / (t605 == 0.0 ? 1.0E-16 : t605) + 0.00069701528436089772)
    * pmf_log10(6.9 / (t605 == 0.0 ? 1.0E-16 : t605) + 0.00069701528436089772) *
    3.24;
  t610 = 1.0 / (t613 == 0.0 ? 1.0E-16 : t613);
  t615 = (pmf_pow(t606, 0.66666666666666663) - 1.0) * pmf_sqrt(t610 / 8.0) *
    12.7 + 1.0;
  t612 = (t605 - 1000.0) * (t610 / 8.0) * t606 / (t615 == 0.0 ? 1.0E-16 : t615);
  t613 = (t540 - 2000.0) / 2000.0;
  t614 = t613 * t613 * 3.0 - t613 * t613 * t613 * 2.0;
  if (t540 <= 2000.0) {
    t616 = 3.66;
  } else if (t540 >= 4000.0) {
    t616 = t612;
  } else {
    t616 = (1.0 - t614) * 3.66 + t612 * t614;
  }

  t617 = t616 * 1.3250000000000002;
  t620 = t611 / 2.0;
  if (t540 > t617 / 0.00093750000000000007 / (t620 == 0.0 ? 1.0E-16 : t620) /
      30.0) {
    t626 = (intermediate_der9303 + intermediate_der10732) / 2.0;
    t619 = t616 * 1.3250000000000002 / (t540 == 0.0 ? 1.0E-16 : t540) /
      0.00093750000000000007 / (t626 == 0.0 ? 1.0E-16 : t626);
  } else {
    t619 = 30.0;
  }

  t620 = (X[31ULL] - X[235ULL]) * (1.0 - pmf_exp(-t619));
  t627 = t1113 * 0.00093750000000000007;
  t629 = U_idx_3 + U_idx_1;
  t630 = t1101 + t539;
  t632 = t630 / 2.0 * 0.00093750000000000007;
  intermediate_der10757 = -intermediate_der10757 * 0.0028301886792452828 / (t632
    == 0.0 ? 1.0E-16 : t632);
  t1101 = intermediate_der10757 >= 0.0 ? intermediate_der10757 :
    -intermediate_der10757;
  t621 = t1101 > 1000.0 ? t1101 : 1000.0;
  t633 = intermediate_der10415 + intermediate_der10732;
  if (t633 / 2.0 > 0.5) {
    t622 = (intermediate_der10415 + intermediate_der10732) / 2.0;
  } else {
    t622 = 0.5;
  }

  t635 = pmf_log10(6.9 / (t621 == 0.0 ? 1.0E-16 : t621) + 0.00069701528436089772)
    * pmf_log10(6.9 / (t621 == 0.0 ? 1.0E-16 : t621) + 0.00069701528436089772) *
    3.24;
  t623 = 1.0 / (t635 == 0.0 ? 1.0E-16 : t635);
  t637 = (pmf_pow(t622, 0.66666666666666663) - 1.0) * pmf_sqrt(t623 / 8.0) *
    12.7 + 1.0;
  t624 = (t621 - 1000.0) * (t623 / 8.0) * t622 / (t637 == 0.0 ? 1.0E-16 : t637);
  t625 = (t1101 - 2000.0) / 2000.0;
  t626 = t625 * t625 * 3.0 - t625 * t625 * t625 * 2.0;
  if (t1101 <= 2000.0) {
    t631 = 3.66;
  } else if (t1101 >= 4000.0) {
    t631 = t624;
  } else {
    t631 = (1.0 - t626) * 3.66 + t624 * t626;
  }

  t639 = t631 * 1.3250000000000002;
  t642 = t633 / 2.0;
  if (t1101 > t639 / 0.00093750000000000007 / (t642 == 0.0 ? 1.0E-16 : t642) /
      30.0) {
    t648 = (intermediate_der10415 + intermediate_der10732) / 2.0;
    t632 = t631 * 1.3250000000000002 / (t1101 == 0.0 ? 1.0E-16 : t1101) /
      0.00093750000000000007 / (t648 == 0.0 ? 1.0E-16 : t648);
  } else {
    t632 = 30.0;
  }

  t634 = (X[31ULL] - X[222ULL]) * (1.0 - pmf_exp(-t632));
  t649 = intermediate_der10757 * 0.00093750000000000007;
  t651 = t1099 + U_idx_1;
  t1099 = (t1123 - -20.0) / 40.0;
  t635 = t1099 * t1099 * 3.0 - t1099 * t1099 * t1099 * 2.0;
  t636 = t535 >= 0.0 ? t535 : -t535;
  t638 = t636 * 0.0028301886792452828 / (t541 == 0.0 ? 1.0E-16 : t541);
  t641 = t638 >= 1.0 ? t638 : 1.0;
  t655 = pmf_log10(6.9 / (t641 == 0.0 ? 1.0E-16 : t641) + 0.00069701528436089772)
    * pmf_log10(6.9 / (t641 == 0.0 ? 1.0E-16 : t641) + 0.00069701528436089772) *
    3.24;
  t642 = 1.0 / (t655 == 0.0 ? 1.0E-16 : t655);
  t657 = t1117 * 1.50186899252403E-8;
  t659 = t1117 * 4.97494103773585E-9;
  t644 = (t638 - 2000.0) / 2000.0;
  t645 = t644 * t644 * 3.0 - t644 * t644 * t644 * 2.0;
  if (X[254ULL] <= 0.0) {
    t646 = 0.0;
  } else {
    t646 = X[254ULL] >= 1.0 ? 1.0 : X[254ULL];
  }

  if (X[253ULL] <= 0.0) {
    zc_int130 = 0.0;
  } else {
    zc_int130 = X[253ULL] >= 1.0 ? 1.0 : X[253ULL];
  }

  t286[0ULL] = X[252ULL];
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = ae_efOut;
  tlu2_1d_linear_linear_value(&be_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = be_efOut[0];
  tlu2_1d_linear_linear_value(&ce_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  U_idx_0 = ce_efOut[0];
  tlu2_1d_linear_linear_value(&de_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t301[0ULL], &t36[0ULL]);
  t385_idx_0 = de_efOut[0];
  t652 = (((1.0 - t646) - zc_int130) * t388_idx_0 + U_idx_0 * t646) + t385_idx_0
    * zc_int130;
  t661 = X[252ULL] * ((((1.0 - t646) - zc_int130) * 296.802103844292 + t646 *
                       461.523) + zc_int130 * 4124.48151675695);
  t646 = ((real_T)(M[211ULL] != 0) * 2.0 - 1.0) * (t661 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (t661 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t652;
  t666 = X[122ULL] * t493;
  t493 = ((real_T)(M[2ULL] != 0) * 2.0 - 1.0) * (t666 / (X[123ULL] == 0.0 ?
    1.0E-16 : X[123ULL])) * (t666 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int22;
  zc_int130 = ((real_T)(M[211ULL] != 0) * 2.0 - 1.0) * (t661 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (t661 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + t652;
  t1117 = X[280ULL] * zc_int134;
  t648 = ((real_T)(M[215ULL] != 0) * 2.0 - 1.0) * (t1117 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (t1117 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int132;
  t683 = X[277ULL] * zc_int134;
  zc_int132 = ((real_T)(M[216ULL] != 0) * 2.0 - 1.0) * (t683 / (X[123ULL] == 0.0
    ? 1.0E-16 : X[123ULL])) * (t683 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int133;
  t688 = X[279ULL] * zc_int134;
  zc_int133 = ((real_T)(M[217ULL] != 0) * 2.0 - 1.0) * (t688 / (X[123ULL] == 0.0
    ? 1.0E-16 : X[123ULL])) * (t688 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int172;
  t695 = X[278ULL] * zc_int134;
  zc_int134 = ((real_T)(M[218ULL] != 0) * 2.0 - 1.0) * (t695 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (t695 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) / 2.0 * 9.999999999999999E-14 + zc_int171;
  zc_int171 = (X[37ULL] - X[300ULL]) * pmf_sqrt(((real_T)(M[230ULL] != 0) * 2.0
    - 1.0) * (t559 /
              (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 ==
               0.0 ? 1.0E-16 :
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12)))
    * intrm_sf_mf_604 * 0.64;
  zc_int172 = pmf_sqrt(((real_T)(M[231ULL] != 0) * 2.0 - 1.0) * (t556 /
    (intrm_sf_mf_810 == 0.0 ? 1.0E-16 : intrm_sf_mf_810) / (X[317ULL] == 0.0 ?
    1.0E-16 : X[317ULL]))) * intrm_sf_mf_604 * 0.64;
  t707 = zc_int172 - zc_int172 * 0.95;
  t652 = (zc_int171 - zc_int172 * 0.95) / (t707 == 0.0 ? 1.0E-16 : t707);
  t653 = t652 * t652 * 3.0 - t652 * t652 * t652 * 2.0;
  t655 = (-zc_int171 - zc_int172 * 0.95) / (t707 == 0.0 ? 1.0E-16 : t707);
  t656 = t655 * t655 * 3.0 - t655 * t655 * t655 * 2.0;
  if (M[244ULL] != 0) {
    t658 = 216.59999999999997;
  } else {
    t658 = M[245ULL] != 0 ? 623.15 : U_idx_7;
  }

  t286[0ULL] = U_idx_6 >= 0.0 ? t658 : X[48ULL];
  tlu2_linear_linear_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t29 = ee_efOut;
  tlu2_1d_linear_linear_value(&fe_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = fe_efOut[0];
  t658 = t388_idx_0;
  t660 = ((real_T)(M[2ULL] != 0) * 2.0 - 1.0) * (t666 / (X[123ULL] == 0.0 ?
    1.0E-16 : X[123ULL])) * (t666 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) *
    (t456 / 7.8539816339744827E-5) * (t456 / 7.8539816339744827E-5) / 2.0 *
    9.999999999999999E-14 + zc_int22;
  zc_int22 = pmf_sqrt(intermediate_der10142 * intermediate_der10142 *
                      9.999999999999999E-14 + ((real_T)(M[23ULL] != 0) * 2.0 -
    1.0) * X[146ULL] * intermediate_der10530 * t1235 * 1.0E-9);
  t464 = -pmf_sqrt(((real_T)(M[43ULL] != 0) * 2.0 - 1.0) * (t464 / (t1235 == 0.0
    ? 1.0E-16 : t1235) / (X[146ULL] == 0.0 ? 1.0E-16 : X[146ULL]))) *
    7.8539816339744827E-5;
  U_idx_1 = intermediate_der7469 * t464 * 35.2 / (t472 == 0.0 ? 1.0E-16 : t472);
  if (intermediate_der10679 >= 0.0) {
    t670 = t464 * 100000.0;
  } else {
    t670 = -t464 * 100000.0;
  }

  intermediate_der10679 = t670 * 0.01 / (t468 == 0.0 ? 1.0E-16 : t468);
  U_idx_0 = t1177 >= 1.0 ? intermediate_der10679 : 1.0;
  if (M[15ULL] != 0) {
    t682 = 216.59999999999997;
  } else {
    t682 = M[16ULL] != 0 ? 623.15 : U_idx_9;
  }

  U_idx_10 = pmf_log10(6.9 / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0) +
                       0.00017169489553429715) * pmf_log10(6.9 / (U_idx_0 == 0.0
    ? 1.0E-16 : U_idx_0) + 0.00017169489553429715) * 3.24;
  t286[0ULL] = U_idx_8 >= 0.0 ? t682 : X[54ULL];
  tlu2_linear_linear_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t286[0ULL],
    &t301[0ULL], &t36[0ULL]);
  t26 = ge_efOut;
  tlu2_1d_linear_linear_value(&he_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = he_efOut[0];
  t682 = t388_idx_0;
  t464 = t464 * t670 * (1.0 / (U_idx_10 == 0.0 ? 1.0E-16 : U_idx_10)) * 0.55 /
    (t475 == 0.0 ? 1.0E-16 : t475);
  intermediate_der10679 = (intermediate_der10679 - 2000.0) / 2000.0;
  t670 = intermediate_der10679 * intermediate_der10679 * 3.0 -
    intermediate_der10679 * intermediate_der10679 * intermediate_der10679 * 2.0;
  intermediate_der10679 = pmf_sqrt(zc_int358 * zc_int358 * 9.999999999999999E-14
    + ((real_T)(M[32ULL] != 0) * 2.0 - 1.0) * X[460ULL] * zc_int353 * U_idx_2 *
    1.0E-9);
  if (t1177 <= 2000.0) {
    zc_int353 = U_idx_1 * 1.0E-5;
  } else if (t1177 >= 4000.0) {
    zc_int353 = t464 * 1.0E-5;
  } else {
    zc_int353 = ((1.0 - t670) * U_idx_1 + t464 * t670) * 1.0E-5;
  }

  t1177 = t456 * zc_int22 / 7.8539816339744827E-5 * 0.00031622776601683789 +
    zc_int353;
  zc_int353 = -pmf_sqrt(((real_T)(M[35ULL] != 0) * 2.0 - 1.0) * (t570 / (U_idx_2
    == 0.0 ? 1.0E-16 : U_idx_2) / (X[460ULL] == 0.0 ? 1.0E-16 : X[460ULL]))) *
    0.0019634954084936209;
  U_idx_2 = zc_int345 * zc_int353 * 35.2 / (t576 == 0.0 ? 1.0E-16 : t576);
  if (zc_int359 >= 0.0) {
    zc_int358 = zc_int353 * 100000.0;
  } else {
    zc_int358 = -zc_int353 * 100000.0;
  }

  zc_int345 = zc_int358 * 0.05 / (t574 == 0.0 ? 1.0E-16 : t574);
  zc_int359 = U_idx_4 >= 1.0 ? zc_int345 : 1.0;
  U_idx_10 = pmf_log10(6.9 / (zc_int359 == 0.0 ? 1.0E-16 : zc_int359) +
                       2.8767404433520813E-5) * pmf_log10(6.9 / (zc_int359 ==
    0.0 ? 1.0E-16 : zc_int359) + 2.8767404433520813E-5) * 3.24;
  zc_int353 = zc_int353 * zc_int358 * (1.0 / (U_idx_10 == 0.0 ? 1.0E-16 :
    U_idx_10)) * 0.55 / (t579 == 0.0 ? 1.0E-16 : t579);
  zc_int358 = (zc_int345 - 2000.0) / 2000.0;
  t739 = -t1177 - t1177 * -0.95;
  zc_int345 = (-t1176 - t1177 * -0.95) / (t739 == 0.0 ? 1.0E-16 : t739);
  zc_int359 = zc_int358 * zc_int358 * 3.0 - zc_int358 * zc_int358 * zc_int358 *
    2.0;
  if (U_idx_4 <= 2000.0) {
    zc_int358 = U_idx_2 * 1.0E-5;
  } else if (U_idx_4 >= 4000.0) {
    zc_int358 = zc_int353 * 1.0E-5;
  } else {
    zc_int358 = ((1.0 - zc_int359) * U_idx_2 + zc_int353 * zc_int359) * 1.0E-5;
  }

  intermediate_der10679 = -(X[444ULL] * intermediate_der10679) /
    0.0019634954084936209 * 0.00031622776601683789 + zc_int358;
  U_idx_9 = -intermediate_der10679 - intermediate_der10679 * -0.95;
  zc_int353 = (-intrm_sf_mf_1514 - intermediate_der10679 * -0.95) / (U_idx_9 ==
    0.0 ? 1.0E-16 : U_idx_9);
  zc_int358 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) *
    pmf_sqrt(((real_T)(M[39ULL] != 0) * 2.0 - 1.0) * (t597 /
              (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 ==
               0.0 ? 1.0E-16 :
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6)))
    * intrm_sf_mf_1623 * 0.64;
  zc_int359 = pmf_sqrt(((real_T)(M[40ULL] != 0) * 2.0 - 1.0) *
                       (intermediate_der722 / (t575 == 0.0 ? 1.0E-16 : t575) /
                        (X[470ULL] == 0.0 ? 1.0E-16 : X[470ULL]))) *
    intrm_sf_mf_1623 * 0.64;
  t748 = zc_int359 - zc_int359 * 0.95;
  t464 = (zc_int358 - zc_int359 * 0.95) / (t748 == 0.0 ? 1.0E-16 : t748);
  t670 = (-zc_int358 - zc_int359 * 0.95) / (t748 == 0.0 ? 1.0E-16 : t748);
  t687 = (X[142ULL] - 1.01325) * pmf_sqrt(((real_T)(M[120ULL] != 0) * 2.0 - 1.0)
    * (t537 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ==
               0.0 ? 1.0E-16 :
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp))) *
    t515 * 0.64;
  t566 = pmf_sqrt(((real_T)(M[131ULL] != 0) * 2.0 - 1.0) * (t534 / (t1132 == 0.0
    ? 1.0E-16 : t1132) / (X[166ULL] == 0.0 ? 1.0E-16 : X[166ULL]))) * t515 *
    0.64;
  t756 = t566 - t566 * 0.95;
  t570 = (t687 - t566 * 0.95) / (t756 == 0.0 ? 1.0E-16 : t756);
  t574 = t570 * t570 * 3.0 - t570 * t570 * t570 * 2.0;
  t576 = (-t687 - t566 * 0.95) / (t756 == 0.0 ? 1.0E-16 : t756);
  t579 = t576 * t576 * 3.0 - t576 * t576 * t576 * 2.0;
  intermediate_der722 = -(real_T)(t454 >= 0.0) * 1000.0 / 0.099999999999999978;
  if ((real_T)(t454 >= 0.0) * t454 * 1000.0 + (real_T)(t454 < 0.0) * X[66ULL] <=
      0.9) {
    t33 = 0.0;
  } else {
    t33 = (real_T)(t454 >= 0.0) * t454 * 1000.0 + (real_T)(t454 < 0.0) * X[66ULL]
      >= 1.0 ? 0.0 : intermediate_der722 * t33 * 6.0 - t33 * t33 *
      intermediate_der722 * 6.0;
  }

  U_idx_3 = -0.005;
  U_idx_0 = t867 / 2.0 * 7.8539816339744827E-5;
  U_idx_1 = -(t476 <= 0.0 ? U_idx_3 : 0.0) * 0.01 / (U_idx_0 == 0.0 ? 1.0E-16 :
    U_idx_0);
  U_idx_7 = t477 >= 0.0 ? U_idx_1 : -U_idx_1;
  t867 = t478 > 1000.0 ? U_idx_7 : 0.0;
  t385_idx_0 = (6.9 / (t479 == 0.0 ? 1.0E-16 : t479) + 0.00017169489553429715) *
    2.3025850929940459;
  U_idx_10 = pmf_log10(6.9 / (t479 == 0.0 ? 1.0E-16 : t479) +
                       0.00017169489553429715) * pmf_log10(6.9 / (t479 == 0.0 ?
    1.0E-16 : t479) + 0.00017169489553429715) * pmf_log10(6.9 / (t479 == 0.0 ?
    1.0E-16 : t479) + 0.00017169489553429715) * pmf_log10(6.9 / (t479 == 0.0 ?
    1.0E-16 : t479) + 0.00017169489553429715) * 10.497600000000002;
  U_idx_0 = t479 * t479;
  U_idx_4 = -1.0 / (U_idx_10 == 0.0 ? 1.0E-16 : U_idx_10) * (-6.9 / (U_idx_0 ==
    0.0 ? 1.0E-16 : U_idx_0)) * (1.0 / (t385_idx_0 == 0.0 ? 1.0E-16 : t385_idx_0))
    * pmf_log10(6.9 / (t479 == 0.0 ? 1.0E-16 : t479) + 0.00017169489553429715) *
    t867 * 6.48;
  t385_idx_0 = pmf_sqrt(intermediate_der1320 / 8.0) * 2.0;
  U_idx_0 = ((pmf_pow(t1238, 0.66666666666666663) - 1.0) * pmf_sqrt
             (intermediate_der1320 / 8.0) * 12.7 + 1.0) * ((pmf_pow(t1238,
    0.66666666666666663) - 1.0) * pmf_sqrt(intermediate_der1320 / 8.0) * 12.7 +
    1.0);
  intermediate_der1320 = (pmf_pow(t1238, 0.66666666666666663) - 1.0) * (-((t479
    - 1000.0) * (intermediate_der1320 / 8.0) * t1238) / (U_idx_0 == 0.0 ?
    1.0E-16 : U_idx_0)) * (U_idx_4 / 8.0) * (1.0 / (t385_idx_0 == 0.0 ? 1.0E-16 :
    t385_idx_0)) * 12.7 + ((t479 - 1000.0) * (U_idx_4 / 8.0) +
    intermediate_der1320 / 8.0 * t867) * t1238 / (t898 == 0.0 ? 1.0E-16 : t898);
  t1238 = U_idx_7 / 2000.0;
  t479 = t1238 * intermediate_der8324 * 6.0 - intermediate_der8324 *
    intermediate_der8324 * t1238 * 6.0;
  if (t478 <= 2000.0) {
    t1238 = 0.0;
  } else if (t478 >= 4000.0) {
    t1238 = intermediate_der1320;
  } else {
    t1238 = (-t479 * 3.66 + t479 * intermediate_der1321) + intermediate_der1320 *
      t483;
  }

  U_idx_4 = t824 / 2.0;
  if (t478 > t904 / 7.8539816339744827E-5 / (U_idx_4 == 0.0 ? 1.0E-16 : U_idx_4)
      / 30.0) {
    U_idx_4 = t478 * t478;
    U_idx_0 = (t480 + t1237) / 2.0;
    intermediate_der1320 = (-(t485 * 0.031415926535897927) / (U_idx_4 == 0.0 ?
      1.0E-16 : U_idx_4) * U_idx_7 + t1238 * 0.031415926535897927 / (t478 == 0.0
      ? 1.0E-16 : t478)) / 7.8539816339744827E-5 / (U_idx_0 == 0.0 ? 1.0E-16 :
      U_idx_0);
  } else {
    intermediate_der1320 = 0.0;
  }

  t1237 = -(-intermediate_der1320 * pmf_exp(-t486)) * (X[126ULL] - X[141ULL]);
  U_idx_7 = t471 + t1182;
  t1238 = U_idx_7 / 2.0 * (t824 / 2.0) * (U_idx_1 * 7.8539816339744827E-5 / 0.01)
    * t487 + t477 * 7.8539816339744827E-5 / 0.01 * (t824 / 2.0) * (U_idx_7 / 2.0)
    * t1237;
  U_idx_7 = t905 / 2.0 * 7.8539816339744827E-5;
  t1237 = (t476 >= 0.0 ? U_idx_3 : 0.0) * 0.01 / (U_idx_7 == 0.0 ? 1.0E-16 :
    U_idx_7);
  t471 = t495 >= 0.0 ? t1237 : -t1237;
  intermediate_der1320 = intrm_sf_mf_81 > 1000.0 ? t471 : 0.0;
  U_idx_3 = (6.9 / (intermediate_der8290 == 0.0 ? 1.0E-16 : intermediate_der8290)
             + 0.00017169489553429715) * 2.3025850929940459;
  U_idx_1 = pmf_log10(6.9 / (intermediate_der8290 == 0.0 ? 1.0E-16 :
    intermediate_der8290) + 0.00017169489553429715) * pmf_log10(6.9 /
    (intermediate_der8290 == 0.0 ? 1.0E-16 : intermediate_der8290) +
    0.00017169489553429715) * pmf_log10(6.9 / (intermediate_der8290 == 0.0 ?
    1.0E-16 : intermediate_der8290) + 0.00017169489553429715) * pmf_log10(6.9 /
    (intermediate_der8290 == 0.0 ? 1.0E-16 : intermediate_der8290) +
    0.00017169489553429715) * 10.497600000000002;
  U_idx_7 = intermediate_der8290 * intermediate_der8290;
  intermediate_der1321 = -1.0 / (U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1) * (-6.9 /
    (U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7)) * (1.0 / (U_idx_3 == 0.0 ? 1.0E-16 :
    U_idx_3)) * pmf_log10(6.9 / (intermediate_der8290 == 0.0 ? 1.0E-16 :
    intermediate_der8290) + 0.00017169489553429715) * intermediate_der1320 *
    6.48;
  U_idx_3 = pmf_sqrt(t500 / 8.0) * 2.0;
  U_idx_7 = ((pmf_pow(t499, 0.66666666666666663) - 1.0) * pmf_sqrt(t500 / 8.0) *
             12.7 + 1.0) * ((pmf_pow(t499, 0.66666666666666663) - 1.0) *
    pmf_sqrt(t500 / 8.0) * 12.7 + 1.0);
  intermediate_der1320 = (pmf_pow(t499, 0.66666666666666663) - 1.0) *
    (-((intermediate_der8290 - 1000.0) * (t500 / 8.0) * t499) / (U_idx_7 == 0.0 ?
      1.0E-16 : U_idx_7)) * (intermediate_der1321 / 8.0) * (1.0 / (U_idx_3 ==
    0.0 ? 1.0E-16 : U_idx_3)) * 12.7 + ((intermediate_der8290 - 1000.0) *
    (intermediate_der1321 / 8.0) + t500 / 8.0 * intermediate_der1320) * t499 /
    (t907 == 0.0 ? 1.0E-16 : t907);
  intermediate_der1321 = t471 / 2000.0;
  t476 = intermediate_der1321 * intermediate_der2693 * 6.0 -
    intermediate_der2693 * intermediate_der2693 * intermediate_der1321 * 6.0;
  if (intrm_sf_mf_81 <= 2000.0) {
    intermediate_der1321 = 0.0;
  } else if (intrm_sf_mf_81 >= 4000.0) {
    intermediate_der1321 = intermediate_der1320;
  } else {
    intermediate_der1321 = (-t476 * 3.66 + t476 * t501) + intermediate_der1320 *
      t504;
  }

  U_idx_7 = t906 / 2.0;
  if (intrm_sf_mf_81 > t908 / 7.8539816339744827E-5 / (U_idx_7 == 0.0 ? 1.0E-16 :
       U_idx_7) / 30.0) {
    U_idx_7 = intrm_sf_mf_81 * intrm_sf_mf_81;
    t904 = (t494 + t480) / 2.0;
    intermediate_der1320 = (-(t506 * 0.031415926535897927) / (U_idx_7 == 0.0 ?
      1.0E-16 : U_idx_7) * t471 + intermediate_der1321 * 0.031415926535897927 /
      (intrm_sf_mf_81 == 0.0 ? 1.0E-16 : intrm_sf_mf_81)) /
      7.8539816339744827E-5 / (t904 == 0.0 ? 1.0E-16 : t904);
  } else {
    intermediate_der1320 = 0.0;
  }

  t471 = -(-intermediate_der1320 * pmf_exp(-t507)) * (X[126ULL] - X[122ULL]);
  U_idx_1 = t497 + t1182;
  t1182 = t1238 + (U_idx_1 / 2.0 * (t906 / 2.0) * (t1237 * 7.8539816339744827E-5
    / 0.01) * t508 + t495 * 7.8539816339744827E-5 / 0.01 * (t906 / 2.0) *
                   (U_idx_1 / 2.0) * t471);
  U_idx_3 = pmf_sqrt(t456 * t456 + 2.0360111955237585E-13) * 2.0;
  t1237 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t456 * -0.01 * 2.0;
  U_idx_3 = pmf_sqrt(t456 * t456 + 2.3237892571262758E-14) * 2.0;
  t1238 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t456 * -0.01 * 2.0;
  U_idx_3 = pmf_sqrt(t456 * t456 + 1.6409606283812424E-14) * 2.0;
  t471 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t456 * -0.01 * 2.0;
  if (t1178 * 0.0001 <= 7.8539816339744857E-13) {
    intermediate_der1321 = 0.0;
  } else if (t1178 * 0.0001 >= 3.1415926535897929E-6) {
    intermediate_der1321 = 0.0;
  } else {
    intermediate_der1321 = 3.1415926535897929E-6;
  }

  t1178 = intermediate_der1321 / 7.8539816339744827E-5;
  if (X[133ULL] > 0.0) {
    t385_idx_0 = t515 * t515;
    intermediate_der1320 = (((t516 + 1.0) * (X[133ULL] / 0.64 / (t515 == 0.0 ?
      1.0E-16 : t515) * (-(X[133ULL] / 0.64) / (t385_idx_0 == 0.0 ? 1.0E-16 :
      t385_idx_0)) * intermediate_der1321 * 2.0 / 2.0 / (t1129 == 0.0 ? 1.0E-16 :
      t1129)) + X[133ULL] / 0.64 / (t515 == 0.0 ? 1.0E-16 : t515) * (X[133ULL] /
      0.64 / (t515 == 0.0 ? 1.0E-16 : t515)) / 2.0 / (t1129 == 0.0 ? 1.0E-16 :
      t1129) * t1178) * (1.0 - t516 * intermediate_der2829) +
      -(intermediate_der2829 * t1178) * (t516 + 1.0) * (X[133ULL] / 0.64 / (t515
      == 0.0 ? 1.0E-16 : t515) * (X[133ULL] / 0.64 / (t515 == 0.0 ? 1.0E-16 :
      t515)) / 2.0 / (t1129 == 0.0 ? 1.0E-16 : t1129))) * 9.9999999999999991E-11;
  } else if (X[133ULL] < 0.0) {
    U_idx_0 = t515 * t515;
    intermediate_der1320 = (((t516 + 1.0) * (X[133ULL] / 0.64 / (t515 == 0.0 ?
      1.0E-16 : t515) * (-(X[133ULL] / 0.64) / (U_idx_0 == 0.0 ? 1.0E-16 :
      U_idx_0)) * intermediate_der1321 * 2.0 / 2.0 / (t1129 == 0.0 ? 1.0E-16 :
      t1129)) + X[133ULL] / 0.64 / (t515 == 0.0 ? 1.0E-16 : t515) * (X[133ULL] /
      0.64 / (t515 == 0.0 ? 1.0E-16 : t515)) / 2.0 / (t1129 == 0.0 ? 1.0E-16 :
      t1129) * t1178) * (1.0 - t516 * t524) + -(t524 * t1178) * (t516 + 1.0) *
      (X[133ULL] / 0.64 / (t515 == 0.0 ? 1.0E-16 : t515) * (X[133ULL] / 0.64 /
      (t515 == 0.0 ? 1.0E-16 : t515)) / 2.0 / (t1129 == 0.0 ? 1.0E-16 : t1129)))
      * 9.9999999999999991E-11;
  } else {
    intermediate_der1320 = 0.0;
  }

  t476 = -t1178 * (1.0 - t516) * 2.0;
  t477 = t528 * t476;
  t479 = (X[142ULL] - 1.01325) * (intermediate_der3568 >= t525 ? ((1.0 - t516 *
    intermediate_der2829) * t1178 + -(intermediate_der2829 * t1178) * (t516 +
    1.0)) - ((1.0 - t516 * t524) * t1178 * 2.0 + -(t524 * t1178) * t516 * 2.0) :
    t476);
  if (X[142ULL] - 1.01325 <= 0.0) {
    t478 = t477;
  } else if (X[142ULL] - 1.01325 >= t528) {
    t478 = t479;
  } else {
    t478 = (1.0 - intermediate_der10698) * t477 + t479 * intermediate_der10698;
  }

  t1178 = (1.01325 - X[142ULL]) * (intermediate_der3823 >= t525 ? ((1.0 - t516 *
    t524) * t1178 + -(t524 * t1178) * (t516 + 1.0)) - ((1.0 - t516 *
    intermediate_der2829) * t1178 * 2.0 + -(intermediate_der2829 * t1178) * t516
    * 2.0) : t476);
  if (1.01325 - X[142ULL] <= 0.0) {
    t476 = t477;
  } else if (1.01325 - X[142ULL] >= t528) {
    t476 = t1178;
  } else {
    t476 = (1.0 - t532) * t477 + t1178 * t532;
  }

  if (X[142ULL] > 1.01325) {
    t1178 = t478;
  } else {
    t1178 = X[142ULL] < 1.01325 ? t476 : t477;
  }

  U_idx_3 = pmf_sqrt(intermediate_der6080 * intermediate_der6080 +
                     6.4274470286298274E-9) * 2.0;
  t477 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * intermediate_der6080 *
    -2.0 * 2.0;
  U_idx_7 = intermediate_der6653 * intermediate_der6653;
  t478 = (-intermediate_der6080 / (U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7) * t477 +
          -2.0 / (intermediate_der6653 == 0.0 ? 1.0E-16 : intermediate_der6653))
    * 1.01325 / (t439 == 0.0 ? 1.0E-16 : t439);
  t479 = -(-intermediate_der6080 / (U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7) * t477 +
           -2.0 / (intermediate_der6653 == 0.0 ? 1.0E-16 : intermediate_der6653))
    / 2.0;
  t476 = (-intermediate_der6080 / (U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7) * t477 +
          -2.0 / (intermediate_der6653 == 0.0 ? 1.0E-16 : intermediate_der6653))
    / 2.0;
  U_idx_3 = pmf_sqrt(t535 * t535 + 1.2620262729050631E-10) * 2.0;
  t483 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t535 * 2.0 * 2.0;
  t867 = intermediate_der9361 * intermediate_der9361;
  t485 = (-t535 / (t867 == 0.0 ? 1.0E-16 : t867) * t483 + 2.0 /
          (intermediate_der9361 == 0.0 ? 1.0E-16 : intermediate_der9361)) *
    1.01325 / (intermediate_der8255 == 0.0 ? 1.0E-16 : intermediate_der8255);
  t486 = -(-t535 / (t867 == 0.0 ? 1.0E-16 : t867) * t483 + 2.0 /
           (intermediate_der9361 == 0.0 ? 1.0E-16 : intermediate_der9361)) / 2.0;
  t487 = (-t535 / (t867 == 0.0 ? 1.0E-16 : t867) * t483 + 2.0 /
          (intermediate_der9361 == 0.0 ? 1.0E-16 : intermediate_der9361)) / 2.0;
  t494 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t535 * 2.0 * 2.0;
  t385_idx_0 = intermediate_der9361 * intermediate_der9361;
  t495 = (t535 / (t385_idx_0 == 0.0 ? 1.0E-16 : t385_idx_0) * t494 + -2.0 /
          (intermediate_der9361 == 0.0 ? 1.0E-16 : intermediate_der9361)) * X
    [236ULL] / (intermediate_der9276 == 0.0 ? 1.0E-16 : intermediate_der9276);
  intrm_sf_mf_81 = -(t535 / (t385_idx_0 == 0.0 ? 1.0E-16 : t385_idx_0) * t494 +
                     -2.0 / (intermediate_der9361 == 0.0 ? 1.0E-16 :
    intermediate_der9361)) / 2.0;
  t497 = (t535 / (t385_idx_0 == 0.0 ? 1.0E-16 : t385_idx_0) * t494 + -2.0 /
          (intermediate_der9361 == 0.0 ? 1.0E-16 : intermediate_der9361)) / 2.0;
  U_idx_2 = (X[236ULL] - 1.01325) * 2.0 / (intermediate_der8975 == 0.0 ? 1.0E-16
    : intermediate_der8975);
  t480 = 1.0;
  U_idx_4 = t480 * 0.0028301886792452828;
  U_idx_3 = pmf_sqrt(t535 * t535 + 2.4102926357361849E-12) * 2.0;
  t499 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t535 * 2.0 * 2.0;
  t824 = t1119 * t1119;
  t500 = (-t535 / (t824 == 0.0 ? 1.0E-16 : t824) * t499 + 2.0 / (t1119 == 0.0 ?
           1.0E-16 : t1119)) * X[236ULL] / (t1088 == 0.0 ? 1.0E-16 : t1088);
  t501 = -(-t535 / (t824 == 0.0 ? 1.0E-16 : t824) * t499 + 2.0 / (t1119 == 0.0 ?
            1.0E-16 : t1119)) / 2.0;
  intermediate_der2693 = (-t535 / (t824 == 0.0 ? 1.0E-16 : t824) * t499 + 2.0 /
    (t1119 == 0.0 ? 1.0E-16 : t1119)) / 2.0;
  t1119 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 +
     1.8324100759713822E-12) * 2.0;
  t506 = 1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 * 0.01 * 2.0;
  t1088 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 +
     2.0914103314136477E-13) * 2.0;
  t507 = 1.0 / (t1088 == 0.0 ? 1.0E-16 : t1088) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 * 0.01 * 2.0;
  U_idx_3 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 +
     1.4768645655431184E-13) * 2.0;
  t508 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 * 0.01 * 2.0;
  t516 = 1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 * 0.01 * 2.0;
  intermediate_der2829 = 1.0 / (t1088 == 0.0 ? 1.0E-16 : t1088) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 * 0.01 * 2.0;
  t524 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 * 0.01 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 *
      7.8539816339744827E-5 <= 7.8539816339744857E-13) {
    t528 = 0.0;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 *
             7.8539816339744827E-5 >= 3.1415926535897929E-6) {
    t528 = 0.0;
  } else {
    t528 = 0.000628318373638326;
  }

  t525 = t528 / 7.8539816339744827E-5;
  if (-X[293ULL] > 0.0) {
    t898 = intrm_sf_mf_604 * intrm_sf_mf_604;
    intermediate_der3568 = (((t1006 + 1.0) * (-X[293ULL] / 0.64 /
      (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604) * (-(-X[293ULL] /
      0.64) / (t898 == 0.0 ? 1.0E-16 : t898)) * t528 * 2.0 / 2.0 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29))
      + -X[293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604)
      * (-X[293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604))
      / 2.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 ==
               0.0 ? 1.0E-16 :
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29) *
      t525) * (1.0 - t1006 * t1009) + -(t1009 * t525) * (t1006 + 1.0) * (-X
      [293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604) * (
      -X[293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604)) /
      2.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 ==
             0.0 ? 1.0E-16 :
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29))) *
      9.9999999999999991E-11;
  } else if (-X[293ULL] < 0.0) {
    U_idx_0 = intrm_sf_mf_604 * intrm_sf_mf_604;
    intermediate_der3568 = (((t1006 + 1.0) * (-X[293ULL] / 0.64 /
      (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604) * (-(-X[293ULL] /
      0.64) / (U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0)) * t528 * 2.0 / 2.0 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29))
      + -X[293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604)
      * (-X[293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604))
      / 2.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 ==
               0.0 ? 1.0E-16 :
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29) *
      t525) * (1.0 - t1006 * t1010) + -(t1010 * t525) * (t1006 + 1.0) * (-X
      [293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604) * (
      -X[293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16 : intrm_sf_mf_604)) /
      2.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 ==
             0.0 ? 1.0E-16 :
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29))) *
      9.9999999999999991E-11;
  } else {
    intermediate_der3568 = 0.0;
  }

  intermediate_der3823 = -t525 * (1.0 - t1006) * 2.0;
  intermediate_der6080 = t1012 * intermediate_der3823;
  intermediate_der6653 = (X[37ULL] - X[300ULL]) * (t986 >= t1011 ? ((1.0 - t1006
    * t1009) * t525 + -(t1009 * t525) * (t1006 + 1.0)) - ((1.0 - t1006 * t1010) *
    t525 * 2.0 + -(t1010 * t525) * t1006 * 2.0) : intermediate_der3823);
  if (X[37ULL] - X[300ULL] <= 0.0) {
    intermediate_der10698 = intermediate_der6080;
  } else if (X[37ULL] - X[300ULL] >= t1012) {
    intermediate_der10698 = intermediate_der6653;
  } else {
    intermediate_der10698 = (1.0 - t553) * intermediate_der6080 +
      intermediate_der6653 * t553;
  }

  t525 = (X[300ULL] - X[37ULL]) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V18 >= t1011 ?
     ((1.0 - t1006 * t1010) * t525 + -(t1010 * t525) * (t1006 + 1.0)) - ((1.0 -
       t1006 * t1009) * t525 * 2.0 + -(t1009 * t525) * t1006 * 2.0) :
     intermediate_der3823);
  if (X[300ULL] - X[37ULL] <= 0.0) {
    intermediate_der3823 = intermediate_der6080;
  } else if (X[300ULL] - X[37ULL] >= t1012) {
    intermediate_der3823 = t525;
  } else {
    intermediate_der3823 = (1.0 - t554) * intermediate_der6080 + t525 * t554;
  }

  if (X[37ULL] > X[300ULL]) {
    t525 = intermediate_der10698;
  } else {
    t525 = X[37ULL] < X[300ULL] ? intermediate_der3823 : intermediate_der6080;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p;
  intermediate_der10698 = X[474ULL] / (X[470ULL] == 0.0 ? 1.0E-16 : X[470ULL]) *
    (-X[471ULL] /
     (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 == 0.0 ?
      1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1))
    * 10.0;
  if (X[444ULL] > 0.0) {
    intermediate_der6653 = -(t569 * intermediate_der10698) * (t569 + 1.0) * (X
      [444ULL] / 0.64 / (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 : intrm_sf_mf_1623) *
      (X[444ULL] / 0.64 / (intrm_sf_mf_1623 == 0.0 ? 1.0E-16 : intrm_sf_mf_1623))
      / 2.0 / (t577 == 0.0 ? 1.0E-16 : t577)) * 9.9999999999999991E-11;
  } else {
    intermediate_der6653 = 0.0;
  }

  t439 = 0.0050000000000000044;
  t532 = t581 * t439;
  intermediate_der8255 = (t588 >= t581 ? t588 : t581) * 10.0 +
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) * (t588 >=
    t581 ? -(t569 * intermediate_der10698) * (t569 + 1.0) : 0.0);
  t1006 = t582 * t582;
  intermediate_der9361 = -(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p
    - 1.01325) / (t1006 == 0.0 ? 1.0E-16 : t1006) * t439 + 10.0 / (t582 == 0.0 ?
    1.0E-16 : t582);
  intermediate_der9276 = intermediate_der9361 * intrm_sf_mf_1633 * 6.0 -
    intrm_sf_mf_1633 * intrm_sf_mf_1633 * intermediate_der9361 * 6.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 <= 0.0) {
    intermediate_der9361 = t532;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 >=
             t582) {
    intermediate_der9361 = intermediate_der8255;
  } else {
    intermediate_der9361 = ((-intermediate_der9276 * t583 + (1.0 - t591) * t532)
      + t590 * intermediate_der9276) + intermediate_der8255 * t591;
  }

  intermediate_der10698 = -10.0 *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 >= t581 ?
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 : t581) +
    (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 >= t581 ?
     -(-(t569 * intermediate_der10698) * t569 * 2.0) : 0.0);
  intermediate_der8255 = -(1.01325 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) / (t1006 == 0.0 ?
    1.0E-16 : t1006) * t439 + -10.0 / (t582 == 0.0 ? 1.0E-16 : t582);
  intermediate_der9276 = intermediate_der8255 * t580 * 6.0 - t580 * t580 *
    intermediate_der8255 * 6.0;
  if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p <= 0.0) {
    intermediate_der8255 = t532;
  } else if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p >=
             t582) {
    intermediate_der8255 = intermediate_der10698;
  } else {
    intermediate_der8255 = ((-intermediate_der9276 * t583 + (1.0 - t592) * t532)
      + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val9 *
      intermediate_der9276) + intermediate_der10698 * t592;
  }

  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p > 1.01325) {
    intermediate_der10698 = intermediate_der9361;
  } else {
    intermediate_der10698 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p < 1.01325 ?
      intermediate_der8255 : t532;
  }

  t532 = t456 >= 0.0 ? -0.01 : 0.01;
  intermediate_der9361 = t532 * 0.01 / (t468 == 0.0 ? 1.0E-16 : t468);
  t1119 = (6.9 / (intrm_sf_mf_1642 == 0.0 ? 1.0E-16 : intrm_sf_mf_1642) +
           0.00017169489553429715) * 2.3025850929940459;
  t1088 = pmf_log10(6.9 / (intrm_sf_mf_1642 == 0.0 ? 1.0E-16 : intrm_sf_mf_1642)
                    + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_1642 == 0.0 ? 1.0E-16 : intrm_sf_mf_1642) +
    0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_1642 == 0.0 ? 1.0E-16
    : intrm_sf_mf_1642) + 0.00017169489553429715) * pmf_log10(6.9 /
    (intrm_sf_mf_1642 == 0.0 ? 1.0E-16 : intrm_sf_mf_1642) +
    0.00017169489553429715) * 10.497600000000002;
  t1006 = intrm_sf_mf_1642 * intrm_sf_mf_1642;
  intermediate_der9276 = -1.0 / (t1088 == 0.0 ? 1.0E-16 : t1088) * (-6.9 /
    (t1006 == 0.0 ? 1.0E-16 : t1006)) * (1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119))
    * pmf_log10(6.9 / (intrm_sf_mf_1642 == 0.0 ? 1.0E-16 : intrm_sf_mf_1642) +
                0.00017169489553429715) * (intermediate_der8944 >= 1.0 ?
    intermediate_der9361 : 0.0) * 6.48;
  intermediate_der7469 = -0.01 * intermediate_der7469 * 35.2 / (t472 == 0.0 ?
    1.0E-16 : t472);
  t489 = ((-0.01 * t489 + t456 * t532) * t448 + t456 * intermediate_der9276 *
          t489) * 0.55 / (t475 == 0.0 ? 1.0E-16 : t475);
  t532 = intermediate_der9361 / 2000.0;
  intermediate_der9361 = t532 * t598 * 6.0 - t598 * t598 * t532 * 6.0;
  if (intermediate_der8944 <= 2000.0) {
    t532 = intermediate_der7469 * 9.9999999999999991E-11;
  } else if (intermediate_der8944 >= 4000.0) {
    t532 = t489 * 9.9999999999999991E-11;
  } else {
    t532 = (((-intermediate_der9361 * t593 + (1.0 - t600) * intermediate_der7469)
             + intermediate_der9361 * t595) + t489 * t600) *
      9.9999999999999991E-11;
  }

  t1006 = (t582 - (-t582)) * (t582 - (-t582));
  intermediate_der7469 = (t439 - (-t439)) *
    (-((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) -
       (-t582)) / (t1006 == 0.0 ? 1.0E-16 : t1006)) + (10.0 - (-t439)) / (t607 ==
    0.0 ? 1.0E-16 : t607);
  t489 = intermediate_der7469 * t601 * 6.0 - t601 * t601 * intermediate_der7469 *
    6.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 <= -t582)
  {
    intermediate_der7469 = 0.0;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 >=
             t582) {
    intermediate_der7469 = 10.0;
  } else {
    intermediate_der7469 = (-t489 * 1.01325 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p * t489) + 10.0 *
      (t601 * t601 * 3.0 - t601 * t601 * t601 * 2.0);
  }

  if (U_idx_11 >= 1.0) {
    t489 = 0.0;
  } else {
    t489 = (real_T)!(U_idx_11 <= 0.0);
  }

  t1088 = t608 / 2.0 * 0.00093750000000000007;
  intermediate_der8944 = U_idx_4 / (t1088 == 0.0 ? 1.0E-16 : t1088);
  t439 = t1113 >= 0.0 ? intermediate_der8944 : -intermediate_der8944;
  intermediate_der9361 = t540 > 1000.0 ? t439 : 0.0;
  t1119 = (6.9 / (t605 == 0.0 ? 1.0E-16 : t605) + 0.00069701528436089772) *
    2.3025850929940459;
  t1088 = pmf_log10(6.9 / (t605 == 0.0 ? 1.0E-16 : t605) +
                    0.00069701528436089772) * pmf_log10(6.9 / (t605 == 0.0 ?
    1.0E-16 : t605) + 0.00069701528436089772) * pmf_log10(6.9 / (t605 == 0.0 ?
    1.0E-16 : t605) + 0.00069701528436089772) * pmf_log10(6.9 / (t605 == 0.0 ?
    1.0E-16 : t605) + 0.00069701528436089772) * 10.497600000000002;
  t1113 = t605 * t605;
  intermediate_der8255 = -1.0 / (t1088 == 0.0 ? 1.0E-16 : t1088) * (-6.9 /
    (t1113 == 0.0 ? 1.0E-16 : t1113)) * (1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119))
    * pmf_log10(6.9 / (t605 == 0.0 ? 1.0E-16 : t605) + 0.00069701528436089772) *
    intermediate_der9361 * 6.48;
  t1119 = pmf_sqrt(t610 / 8.0) * 2.0;
  t1113 = ((pmf_pow(t606, 0.66666666666666663) - 1.0) * pmf_sqrt(t610 / 8.0) *
           12.7 + 1.0) * ((pmf_pow(t606, 0.66666666666666663) - 1.0) * pmf_sqrt
    (t610 / 8.0) * 12.7 + 1.0);
  intermediate_der9361 = (pmf_pow(t606, 0.66666666666666663) - 1.0) * (-((t605 -
    1000.0) * (t610 / 8.0) * t606) / (t1113 == 0.0 ? 1.0E-16 : t1113)) *
    (intermediate_der8255 / 8.0) * (1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119)) *
    12.7 + ((t605 - 1000.0) * (intermediate_der8255 / 8.0) + t610 / 8.0 *
            intermediate_der9361) * t606 / (t615 == 0.0 ? 1.0E-16 : t615);
  intermediate_der8255 = t439 / 2000.0;
  intermediate_der9276 = intermediate_der8255 * t613 * 6.0 - t613 * t613 *
    intermediate_der8255 * 6.0;
  if (t540 <= 2000.0) {
    intermediate_der8255 = 0.0;
  } else if (t540 >= 4000.0) {
    intermediate_der8255 = intermediate_der9361;
  } else {
    intermediate_der8255 = (-intermediate_der9276 * 3.66 + intermediate_der9276 *
      t612) + intermediate_der9361 * t614;
  }

  t1113 = t611 / 2.0;
  if (t540 > t617 / 0.00093750000000000007 / (t1113 == 0.0 ? 1.0E-16 : t1113) /
      30.0) {
    t1113 = t540 * t540;
    t986 = (intermediate_der9303 + intermediate_der10732) / 2.0;
    intermediate_der9361 = (-(t616 * 1.3250000000000002) / (t1113 == 0.0 ?
      1.0E-16 : t1113) * t439 + intermediate_der8255 * 1.3250000000000002 /
      (t540 == 0.0 ? 1.0E-16 : t540)) / 0.00093750000000000007 / (t986 == 0.0 ?
      1.0E-16 : t986);
  } else {
    intermediate_der9361 = 0.0;
  }

  t439 = -(-intermediate_der9361 * pmf_exp(-t619)) * (X[31ULL] - X[235ULL]);
  intermediate_der8944 = t629 / 2.0 * (t611 / 2.0) * (intermediate_der8944 *
    0.00093750000000000007 / 0.0028301886792452828) * t620 + t627 /
    0.0028301886792452828 * (t611 / 2.0) * (t629 / 2.0) * t439;
  t1113 = t630 / 2.0 * 0.00093750000000000007;
  t480 = -t480 * 0.0028301886792452828 / (t1113 == 0.0 ? 1.0E-16 : t1113);
  t439 = intermediate_der10757 >= 0.0 ? t480 : -t480;
  intermediate_der9361 = t1101 > 1000.0 ? t439 : 0.0;
  t1119 = (6.9 / (t621 == 0.0 ? 1.0E-16 : t621) + 0.00069701528436089772) *
    2.3025850929940459;
  t1088 = pmf_log10(6.9 / (t621 == 0.0 ? 1.0E-16 : t621) +
                    0.00069701528436089772) * pmf_log10(6.9 / (t621 == 0.0 ?
    1.0E-16 : t621) + 0.00069701528436089772) * pmf_log10(6.9 / (t621 == 0.0 ?
    1.0E-16 : t621) + 0.00069701528436089772) * pmf_log10(6.9 / (t621 == 0.0 ?
    1.0E-16 : t621) + 0.00069701528436089772) * 10.497600000000002;
  t1113 = t621 * t621;
  intermediate_der8255 = -1.0 / (t1088 == 0.0 ? 1.0E-16 : t1088) * (-6.9 /
    (t1113 == 0.0 ? 1.0E-16 : t1113)) * (1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119))
    * pmf_log10(6.9 / (t621 == 0.0 ? 1.0E-16 : t621) + 0.00069701528436089772) *
    intermediate_der9361 * 6.48;
  t1119 = pmf_sqrt(t623 / 8.0) * 2.0;
  t1113 = ((pmf_pow(t622, 0.66666666666666663) - 1.0) * pmf_sqrt(t623 / 8.0) *
           12.7 + 1.0) * ((pmf_pow(t622, 0.66666666666666663) - 1.0) * pmf_sqrt
    (t623 / 8.0) * 12.7 + 1.0);
  intermediate_der9361 = (pmf_pow(t622, 0.66666666666666663) - 1.0) * (-((t621 -
    1000.0) * (t623 / 8.0) * t622) / (t1113 == 0.0 ? 1.0E-16 : t1113)) *
    (intermediate_der8255 / 8.0) * (1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119)) *
    12.7 + ((t621 - 1000.0) * (intermediate_der8255 / 8.0) + t623 / 8.0 *
            intermediate_der9361) * t622 / (t637 == 0.0 ? 1.0E-16 : t637);
  intermediate_der8255 = t439 / 2000.0;
  intermediate_der9276 = intermediate_der8255 * t625 * 6.0 - t625 * t625 *
    intermediate_der8255 * 6.0;
  if (t1101 <= 2000.0) {
    intermediate_der8255 = 0.0;
  } else if (t1101 >= 4000.0) {
    intermediate_der8255 = intermediate_der9361;
  } else {
    intermediate_der8255 = (-intermediate_der9276 * 3.66 + intermediate_der9276 *
      t624) + intermediate_der9361 * t626;
  }

  t1113 = t633 / 2.0;
  if (t1101 > t639 / 0.00093750000000000007 / (t1113 == 0.0 ? 1.0E-16 : t1113) /
      30.0) {
    t1113 = t1101 * t1101;
    t986 = (intermediate_der10415 + intermediate_der10732) / 2.0;
    intermediate_der9361 = (-(t631 * 1.3250000000000002) / (t1113 == 0.0 ?
      1.0E-16 : t1113) * t439 + intermediate_der8255 * 1.3250000000000002 /
      (t1101 == 0.0 ? 1.0E-16 : t1101)) / 0.00093750000000000007 / (t986 == 0.0 ?
      1.0E-16 : t986);
  } else {
    intermediate_der9361 = 0.0;
  }

  t439 = -(-intermediate_der9361 * pmf_exp(-t632)) * (X[31ULL] - X[222ULL]);
  t480 = t651 / 2.0 * (t633 / 2.0) * (t480 * 0.00093750000000000007 /
    0.0028301886792452828) * t634 + t649 / 0.0028301886792452828 * (t633 / 2.0) *
    (t651 / 2.0) * t439;
  t439 = U_idx_4 / (t541 == 0.0 ? 1.0E-16 : t541) / 40.0;
  intermediate_der8290 = t439 * t1099 * 6.0 - t1099 * t1099 * t439 * 6.0;
  if (t1123 <= -20.0) {
    t439 = t480 * 0.001;
  } else if (t1123 >= 20.0) {
    t439 = intermediate_der8944 * 0.001;
  } else {
    t439 = (((-intermediate_der8290 * (t649 / 0.0028301886792452828 * (t633 /
                2.0) * (t651 / 2.0) * t634) + (1.0 - t635) * t480) +
             intermediate_der8290 * (t627 / 0.0028301886792452828 * (t611 / 2.0)
              * (t629 / 2.0) * t620)) + intermediate_der8944 * t635) * 0.001;
  }

  t480 = t535 >= 0.0 ? 2.0 : -2.0;
  intermediate_der8944 = t480 * 0.0028301886792452828 / (t541 == 0.0 ? 1.0E-16 :
    t541);
  t1119 = (6.9 / (t641 == 0.0 ? 1.0E-16 : t641) + 0.00069701528436089772) *
    2.3025850929940459;
  t1088 = pmf_log10(6.9 / (t641 == 0.0 ? 1.0E-16 : t641) +
                    0.00069701528436089772) * pmf_log10(6.9 / (t641 == 0.0 ?
    1.0E-16 : t641) + 0.00069701528436089772) * pmf_log10(6.9 / (t641 == 0.0 ?
    1.0E-16 : t641) + 0.00069701528436089772) * pmf_log10(6.9 / (t641 == 0.0 ?
    1.0E-16 : t641) + 0.00069701528436089772) * 10.497600000000002;
  U_idx_3 = t641 * t641;
  intermediate_der9361 = -1.0 / (t1088 == 0.0 ? 1.0E-16 : t1088) * (-6.9 /
    (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3)) * (1.0 / (t1119 == 0.0 ? 1.0E-16 :
    t1119)) * pmf_log10(6.9 / (t641 == 0.0 ? 1.0E-16 : t641) +
                        0.00069701528436089772) * (t638 >= 1.0 ?
    intermediate_der8944 : 0.0) * 6.48;
  intermediate_der8290 = t539 * 2.0 * 112.0 / (t657 == 0.0 ? 1.0E-16 : t657);
  t480 = ((2.0 * t636 + t535 * t480) * t642 + t535 * intermediate_der9361 * t636)
    * 1.75 / (t659 == 0.0 ? 1.0E-16 : t659);
  intermediate_der8324 = intermediate_der8944 / 2000.0;
  intermediate_der8944 = intermediate_der8324 * t644 * 6.0 - t644 * t644 *
    intermediate_der8324 * 6.0;
  if (t638 <= 2000.0) {
    intermediate_der8324 = intermediate_der8290 * 1.0E-5;
  } else if (t638 >= 4000.0) {
    intermediate_der8324 = t480 * 1.0E-5;
  } else {
    intermediate_der8324 = (((-intermediate_der8944 * (t535 * t539 * 112.0 /
      (t657 == 0.0 ? 1.0E-16 : t657)) + (1.0 - t645) * intermediate_der8290) +
      intermediate_der8944 * (t535 * t636 * t642 * 1.75 / (t659 == 0.0 ? 1.0E-16
      : t659))) + t480 * t645) * 1.0E-5;
  }

  t535 = ((real_T)(M[215ULL] != 0) * 2.0 - 1.0) * (t1117 / (X[33ULL] == 0.0 ?
    1.0E-16 : X[33ULL])) * (t1117 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) * 127.32395447351628 * 2.0 / 2.0 *
    9.999999999999999E-14;
  intermediate_der8255 = ((real_T)(M[217ULL] != 0) * 2.0 - 1.0) * (t688 / (X
    [123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) * (t688 / (X[123ULL] == 0.0 ?
    1.0E-16 : X[123ULL])) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) * -127.32395447351628 * 2.0 / 2.0 *
    9.999999999999999E-14;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 >= 0.0) {
    intermediate_der8975 = (t648 - zc_int132) * 0.01 + (t535 - ((real_T)(M
      [216ULL] != 0) * 2.0 - 1.0) * (t683 / (X[123ULL] == 0.0 ? 1.0E-16 : X
      [123ULL])) * (t683 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
       7.8539816339744827E-5) * 127.32395447351628 * 2.0 / 2.0 *
      9.999999999999999E-14) *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9;
  } else {
    intermediate_der8975 = -((zc_int133 - zc_int134) * 0.01) -
      (intermediate_der8255 - ((real_T)(M[218ULL] != 0) * 2.0 - 1.0) * (t695 /
        (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) * (t695 / (X[33ULL] == 0.0 ?
         1.0E-16 : X[33ULL])) *
       (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
        7.8539816339744827E-5) * -127.32395447351628 * 2.0 / 2.0 *
       9.999999999999999E-14) *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9;
  }

  t1119 = pmf_sqrt(((real_T)(M[230ULL] != 0) * 2.0 - 1.0) * (t559 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12)));
  t1117 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12;
  intermediate_der9361 = (X[37ULL] - X[300ULL]) * pmf_sqrt(((real_T)(M[230ULL]
    != 0) * 2.0 - 1.0) * (t559 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V12)))
    * t528 * 0.64 + (X[37ULL] - X[300ULL]) * ((real_T)(M[230ULL] != 0) * 2.0 -
    1.0) * (-(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V29 *
              2.0) / (t1117 == 0.0 ? 1.0E-16 : t1117)) * (1.0 / (t1119 == 0.0 ?
    1.0E-16 : t1119)) * t525 * intrm_sf_mf_604 * 0.32;
  t525 = pmf_sqrt(((real_T)(M[231ULL] != 0) * 2.0 - 1.0) * (t556 /
    (intrm_sf_mf_810 == 0.0 ? 1.0E-16 : intrm_sf_mf_810) / (X[317ULL] == 0.0 ?
    1.0E-16 : X[317ULL]))) * t528 * 0.64;
  t1117 = (zc_int172 - zc_int172 * 0.95) * (zc_int172 - zc_int172 * 0.95);
  intermediate_der9276 = (t525 - t525 * 0.95) * (-(zc_int171 - zc_int172 * 0.95)
    / (t1117 == 0.0 ? 1.0E-16 : t1117)) + (intermediate_der9361 - t525 * 0.95) /
    (t707 == 0.0 ? 1.0E-16 : t707);
  intermediate_der9303 = intermediate_der9276 * t652 * 6.0 - t652 * t652 *
    intermediate_der9276 * 6.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 <=
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26 * 0.95) {
    intermediate_der9276 = intermediate_der9361 * 100000.0;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26) {
    intermediate_der9276 = t525 * 100000.0;
  } else {
    intermediate_der9276 = (((-intermediate_der9303 * zc_int171 + (1.0 - t653) *
      intermediate_der9361) + intermediate_der9303 * zc_int172) + t525 * t653) *
      100000.0;
  }

  intermediate_der9303 = (t525 - t525 * 0.95) * (-(-zc_int171 - zc_int172 * 0.95)
    / (t1117 == 0.0 ? 1.0E-16 : t1117)) + (-intermediate_der9361 - t525 * 0.95) /
    (t707 == 0.0 ? 1.0E-16 : t707);
  intermediate_der10415 = intermediate_der9303 * t655 * 6.0 - t655 * t655 *
    intermediate_der9303 * 6.0;
  if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 <=
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26 * 0.95) {
    intermediate_der9303 = intermediate_der9361 * 100000.0;
  } else if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V26) {
    intermediate_der9303 = -t525 * 100000.0;
  } else {
    intermediate_der9303 = (((-intermediate_der10415 * zc_int171 + (1.0 - t656) *
      intermediate_der9361) + -zc_int172 * intermediate_der10415) + -t525 * t656)
      * 100000.0;
  }

  if (M[244ULL] != 0) {
    t525 = 0.0;
  } else {
    t525 = (real_T)(M[245ULL] == 0);
  }

  tlu2_1d_linear_linear_value(&ie_efOut[0ULL], &t29.mField1[0ULL], &t29.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = ie_efOut[0];
  t525 = t388_idx_0 * (U_idx_6 >= 0.0 ? t525 : 0.0);
  t1119 = pmf_sqrt(intermediate_der10142 * intermediate_der10142 *
                   9.999999999999999E-14 + ((real_T)(M[23ULL] != 0) * 2.0 - 1.0)
                   * X[146ULL] * intermediate_der10530 * t1235 * 1.0E-9) * 2.0;
  intermediate_der10530 = 1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119) *
    intermediate_der10142 * ((X[19ULL] / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL])
    - X[146ULL] / (X[147ULL] == 0.0 ? 1.0E-16 : X[147ULL])) * -0.01 * t1235 /
    7.8539816339744827E-5) * 1.9999999999999998E-13;
  if (M[15ULL] != 0) {
    intermediate_der10142 = 0.0;
  } else {
    intermediate_der10142 = (real_T)(M[16ULL] == 0);
  }

  tlu2_1d_linear_linear_value(&je_efOut[0ULL], &t26.mField1[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t301[0ULL], &t36[0ULL]);
  t388_idx_0 = je_efOut[0];
  intermediate_der10142 = t388_idx_0 * (U_idx_8 >= 0.0 ? intermediate_der10142 :
    0.0);
  t1088 = X[452ULL] * t568;
  t1117 = -(X[452ULL] * t568);
  intermediate_der10415 = (((real_T)(M[30ULL] != 0) * 2.0 - 1.0) * (t1088 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p)) * (t1117 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)) *
    10.0 + ((real_T)(M[30ULL] != 0) * 2.0 - 1.0) * (t1088 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p)) * (t1117 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)) *
    10.0) * (-X[444ULL] / 0.0019634954084936209) * (-X[444ULL] /
    0.0019634954084936209) / 2.0 * 9.999999999999999E-14;
  U_idx_3 = t456 * intermediate_der10530 + -0.01 * zc_int22;
  intermediate_der10530 = U_idx_3 / 7.8539816339744827E-5 *
    0.00031622776601683789;
  t1113 = (-t1177 - t1177 * -0.95) * (-t1177 - t1177 * -0.95);
  intermediate_der10732 = (-intermediate_der10530 - intermediate_der10530 *
    -0.95) * (-(-t1176 - t1177 * -0.95) / (t1113 == 0.0 ? 1.0E-16 : t1113)) +
    -(intermediate_der10530 * -0.95) / (t739 == 0.0 ? 1.0E-16 : t739);
  U_idx_1 = -10.0 / (U_idx_9 == 0.0 ? 1.0E-16 : U_idx_9);
  intermediate_der10757 = U_idx_1 * zc_int353 * 6.0 - zc_int353 * zc_int353 *
    U_idx_1 * 6.0;
  if (-intrm_sf_mf_1514 <=
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1 * -0.95) {
    U_idx_1 = 10.0;
  } else if (-intrm_sf_mf_1514 >=
             -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_delta_vel_po1) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = (-intermediate_der10757 * intrm_sf_mf_1514 + (1.0 - (zc_int353 *
      zc_int353 * 3.0 - zc_int353 * zc_int353 * zc_int353 * 2.0)) * 10.0) +
      intermediate_der10757 * intermediate_der10679;
  }

  t1113 = (((real_T)(M[30ULL] != 0) * 2.0 - 1.0) * (t1088 /
            (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ?
             1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p)) *
           (t1117 /
            (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 ==
             0.0 ? 1.0E-16 :
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)) *
           10.0 + ((real_T)(M[30ULL] != 0) * 2.0 - 1.0) * (t1088 /
            (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ?
             1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p)) *
           (t1117 /
            (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 ==
             0.0 ? 1.0E-16 :
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)) *
           10.0) * (X[444ULL] / 0.0019634954084936209) * (X[444ULL] /
    0.0019634954084936209);
  t1119 = pmf_sqrt(((real_T)(M[39ULL] != 0) * 2.0 - 1.0) * (t597 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6)));
  t1117 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6;
  intermediate_der10757 = pmf_sqrt(((real_T)(M[39ULL] != 0) * 2.0 - 1.0) * (t597
    / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6)))
    * 10.0 * intrm_sf_mf_1623 * 0.64 +
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) * ((real_T)
    (M[39ULL] != 0) * 2.0 - 1.0) * (-(t577 * 2.0) / (t1117 == 0.0 ? 1.0E-16 :
    t1117)) * (1.0 / (t1119 == 0.0 ? 1.0E-16 : t1119)) * intermediate_der10698 *
    intrm_sf_mf_1623 * 0.32;
  intermediate_der10698 = intermediate_der10732 * zc_int345 * 6.0 - zc_int345 *
    zc_int345 * intermediate_der10732 * 6.0;
  intermediate_der10732 = intermediate_der10757 / (t748 == 0.0 ? 1.0E-16 : t748);
  t539 = intermediate_der10732 * t464 * 6.0 - t464 * t464 *
    intermediate_der10732 * 6.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 <= t571 *
      0.95) {
    intermediate_der10732 = intermediate_der10757 * 100000.0;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 >=
             t571) {
    intermediate_der10732 = 0.0;
  } else {
    intermediate_der10732 = ((-t539 * zc_int358 + (1.0 - (t464 * t464 * 3.0 -
      t464 * t464 * t464 * 2.0)) * intermediate_der10757) + t539 * zc_int359) *
      100000.0;
  }

  t539 = -intermediate_der10757 / (t748 == 0.0 ? 1.0E-16 : t748);
  t1123 = t539 * t670 * 6.0 - t670 * t670 * t539 * 6.0;
  if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 <= t571 *
      0.95) {
    t539 = intermediate_der10757 * 100000.0;
  } else if (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 >=
             t571) {
    t539 = 0.0;
  } else {
    t539 = ((-t1123 * zc_int358 + (1.0 - (t670 * t670 * 3.0 - t670 * t670 * t670
               * 2.0)) * intermediate_der10757) + -zc_int359 * t1123) * 100000.0;
  }

  if (-t1176 <= t451 * -0.95) {
    intermediate_der10757 = 0.0;
  } else if (-t1176 >= -t451) {
    intermediate_der10757 = intermediate_der10530;
  } else {
    intermediate_der10757 = (-intermediate_der10698 * t1176 +
      intermediate_der10698 * t1177) + intermediate_der10530 * (zc_int345 *
      zc_int345 * 3.0 - zc_int345 * zc_int345 * zc_int345 * 2.0);
  }

  intermediate_der10698 = pmf_sqrt(((real_T)(M[120ULL] != 0) * 2.0 - 1.0) *
    (t537 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp ==
             0.0 ? 1.0E-16 :
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp)));
  t1123 = -(t1129 * 2.0);
  t1129 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  intermediate_der10530 = (X[142ULL] - 1.01325) * pmf_sqrt(((real_T)(M[120ULL]
    != 0) * 2.0 - 1.0) * (t537 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp))) *
    intermediate_der1321 * 0.64 + (X[142ULL] - 1.01325) * ((real_T)(M[120ULL] !=
    0) * 2.0 - 1.0) * (t1123 / (t1129 == 0.0 ? 1.0E-16 : t1129)) * (1.0 /
    (intermediate_der10698 == 0.0 ? 1.0E-16 : intermediate_der10698)) * t1178 *
    t515 * 0.32;
  t451 = pmf_sqrt(((real_T)(M[131ULL] != 0) * 2.0 - 1.0) * (t534 / (t1132 == 0.0
    ? 1.0E-16 : t1132) / (X[166ULL] == 0.0 ? 1.0E-16 : X[166ULL]))) *
    intermediate_der1321 * 0.64;
  t1129 = (t566 - t566 * 0.95) * (t566 - t566 * 0.95);
  t1176 = (t451 - t451 * 0.95) * (-(t687 - t566 * 0.95) / (t1129 == 0.0 ?
    1.0E-16 : t1129)) + (intermediate_der10530 - t451 * 0.95) / (t756 == 0.0 ?
    1.0E-16 : t756);
  t1177 = t1176 * t570 * 6.0 - t570 * t570 * t1176 * 6.0;
  if (t518 <= t1137 * 0.95) {
    t1176 = intermediate_der10530 * 100000.0;
  } else if (t518 >= t1137) {
    t1176 = t451 * 100000.0;
  } else {
    t1176 = (((-t1177 * t687 + (1.0 - t574) * intermediate_der10530) + t1177 *
              t566) + t451 * t574) * 100000.0;
  }

  t1177 = (t451 - t451 * 0.95) * (-(-t687 - t566 * 0.95) / (t1129 == 0.0 ?
    1.0E-16 : t1129)) + (-intermediate_der10530 - t451 * 0.95) / (t756 == 0.0 ?
    1.0E-16 : t756);
  t1178 = t1177 * t576 * 6.0 - t576 * t576 * t1177 * 6.0;
  if (-t518 <= t1137 * 0.95) {
    t1177 = intermediate_der10530 * 100000.0;
  } else if (-t518 >= t1137) {
    t1177 = -t451 * 100000.0;
  } else {
    t1177 = (((-t1178 * t687 + (1.0 - t579) * intermediate_der10530) + -t566 *
              t1178) + -t451 * t579) * 100000.0;
  }

  t286[0ULL] = X[367ULL];
  t301[0] = 5ULL;
  tlu2_linear_nearest_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], &t395[0ULL], &t286[0ULL], &t301[0ULL], &t36[0ULL]);
  t28 = ke_efOut;
  t286[0ULL] = U_idx_5 * 376.99111843077515 * 0.99999999999999978 /
    0.99999999999999978 * 0.99999999999999978 / 0.99999999999999978;
  t304[0] = 3ULL;
  tlu2_linear_nearest_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], &nonscalar49[0ULL], &t286[0ULL], &t304[0ULL], &t36
    [0ULL]);
  t26 = le_efOut;
  t1137 = M[108ULL] != 0 ? X[66ULL] : 0.9;
  intermediate_der10530 = -((X[70ULL] - X[68ULL] * X[69ULL] * 0.001) * t33 /
    (t1137 == 0.0 ? 1.0E-16 : t1137) * 1000.0 + -t33 * X[66ULL] / 1000.0);
  if (M[205ULL] != 0) {
    t33 = -((X[74ULL] - Fuel_Cell_Boost_Converter_L_i) * t489 * 0.001);
  } else {
    t33 = -((Fuel_Cell_Boost_Converter_L_i * 0.001 + X[69ULL]) * t489);
  }

  U_idx_0 = t518 >= 0.0 ? -t1176 : -t1177;
  t1176 = t515 * t515;
  t391[0ULL] = -((-(X[21ULL] * -0.01) * (-164.72089615570803 / (t1235 == 0.0 ?
    1.0E-16 : t1235)) + -(X[22ULL] * -0.01) * (-3827.6794129126583 / (t1235 ==
    0.0 ? 1.0E-16 : t1235))) / 12.896402563644669);
  t391[1ULL] = -(((-(X[21ULL] * -0.01) *
                   (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_u_w_I -
                    t1207) + -(X[22ULL] * -0.01) * (t513 - t1207)) + t1228 *
                  -0.01) / 2246.65922904024);
  t391[2ULL] = -(X[21ULL] * -0.01);
  t391[3ULL] = -(X[22ULL] * -0.01);
  t391[4ULL] = -((-(X[35ULL] * 0.01) * (-164.72089615570803 / (intrm_sf_mf_568 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_568)) + -(X[34ULL] * 0.01) *
                  (-3827.6794129126583 / (intrm_sf_mf_568 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_568))) / 12.896402563644669);
  t391[5ULL] = -(((-(X[35ULL] * 0.01) *
                   (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha29
                    - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27)
                   + -(X[34ULL] * 0.01) *
                   (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha28
                    - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha27))
                  + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha26
                  * 0.01) / 2246.65922904024);
  t391[6ULL] = -(X[35ULL] * 0.01);
  t391[7ULL] = -(X[34ULL] * 0.01);
  t391[8ULL] = -(((t471 - 0.01) / 2.0 * t660 + (t456 + t510) / 2.0 * (((real_T)
    (M[2ULL] != 0) * 2.0 - 1.0) * (t666 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]))
    * (t666 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) * (t456 /
    7.8539816339744827E-5) * -127.32395447351628 * 2.0 / 2.0 *
    9.999999999999999E-14)) - (t471 - -0.01) / 2.0 * X[156ULL]);
  t391[9ULL] = -((t1238 - 0.01) / 2.0 * X[125ULL] - (t1238 - -0.01) / 2.0 * X
                 [162ULL]);
  t391[10ULL] = -((t1237 - 0.01) / 2.0 * X[124ULL] - (t1237 - -0.01) / 2.0 * X
                  [161ULL]);
  t391[11ULL] = -(t1182 * 0.001);
  t391[12ULL] = -(U_idx_3 / 7.8539816339744827E-5 * 0.00031622776601683789 +
                  t532);
  t391[13ULL] = t456 >= 0.0 ? 0.0 : -intermediate_der10757;
  t1228 = X[146ULL] * t1235;
  t391[14ULL] = -(((real_T)(M[65ULL] != 0) * 2.0 - 1.0) * (t1228 / (X[147ULL] ==
    0.0 ? 1.0E-16 : X[147ULL])) * (t1228 / (X[147ULL] == 0.0 ? 1.0E-16 : X
    [147ULL])) * (t456 / 7.8539816339744827E-5) * -127.32395447351628 * 2.0 /
                  2.0 * 9.999999999999999E-14);
  t391[15ULL] = -(((real_T)(M[87ULL] != 0) * 2.0 - 1.0) * (t470 / (X[20ULL] ==
    0.0 ? 1.0E-16 : X[20ULL])) * (t470 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]))
                  * (t456 / 7.8539816339744827E-5) * -127.32395447351628 * 2.0 /
                  2.0 * 9.999999999999999E-14);
  t1207 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha12;
  t391[16ULL] = -(((0.01 + t508) / 2.0 * t646 + t1207 / 2.0 * (((real_T)(M
    [211ULL] != 0) * 2.0 - 1.0) * (t661 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]))
    * (t661 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) * 127.32395447351628 * 2.0 / 2.0 *
    9.999999999999999E-14)) - (t508 - 0.01) / 2.0 * X[268ULL]);
  t391[17ULL] = -((0.01 + t507) / 2.0 * X[254ULL] - (t507 - 0.01) / 2.0 * X
                  [270ULL]);
  t391[18ULL] = -((0.01 + t506) / 2.0 * X[253ULL] - (t506 - 0.01) / 2.0 * X
                  [269ULL]);
  t1178 = X[32ULL] * intrm_sf_mf_568;
  t391[19ULL] = -(((real_T)(M[213ULL] != 0) * 2.0 - 1.0) * (t1178 / (X[33ULL] ==
    0.0 ? 1.0E-16 : X[33ULL])) * (t1178 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]))
                  * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9
                     / 7.8539816339744827E-5) * 127.32395447351628 * 2.0 / 2.0 *
                  9.999999999999999E-14);
  t391[20ULL] = -(((0.01 + t508) / 2.0 * t493 + t1207 / 2.0 * (((real_T)(M[2ULL]
    != 0) * 2.0 - 1.0) * (t666 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) *
    (t666 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) * 127.32395447351628 * 2.0 / 2.0 *
    9.999999999999999E-14)) - (t508 - 0.01) / 2.0 * X[281ULL]);
  t391[21ULL] = -((0.01 + t507) / 2.0 * X[125ULL] - (t507 - 0.01) / 2.0 * X
                  [283ULL]);
  t391[22ULL] = -((0.01 + t506) / 2.0 * X[124ULL] - (t506 - 0.01) / 2.0 * X
                  [282ULL]);
  t391[23ULL] = -(((-0.01 + t524) / 2.0 * zc_int130 +
                   (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9
                    + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha12)
                   / 2.0 * (((real_T)(M[211ULL] != 0) * 2.0 - 1.0) * (t661 / (X
    [33ULL] == 0.0 ? 1.0E-16 : X[33ULL])) * (t661 / (X[33ULL] == 0.0 ? 1.0E-16 :
    X[33ULL])) *
    (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha9 /
     7.8539816339744827E-5) * -127.32395447351628 * 2.0 / 2.0 *
    9.999999999999999E-14)) - (t524 - -0.01) / 2.0 * X[281ULL]);
  t391[24ULL] = -((-0.01 + intermediate_der2829) / 2.0 * X[254ULL] -
                  (intermediate_der2829 - -0.01) / 2.0 * X[283ULL]);
  t391[25ULL] = -((-0.01 + t516) / 2.0 * X[253ULL] - (t516 - -0.01) / 2.0 * X
                  [282ULL]);
  t391[26ULL] = intermediate_der8975;
  t391[27ULL] = intermediate_der8255;
  t391[28ULL] = t535;
  t392[0ULL] = (-(-X[216ULL] - X[217ULL]) / (U_idx_7 == 0.0 ? 1.0E-16 : U_idx_7)
                * t477 - ((t533 * t476 - X[221ULL] * t479) + t478 * 100.0)) /
    1.233284047215034E+6;
  t392[1ULL] = -(t533 * t476 + X[221ULL] * t479) / 171803.29647667333;
  t392[2ULL] = (-X[217ULL] / (t867 == 0.0 ? 1.0E-16 : t867) * t483 - ((t533 *
    t487 - X[239ULL] * t486) + t485 * 100.0)) / 8.80132724281134E+6;
  t392[3ULL] = -(t533 * t487 + X[239ULL] * t486) / 1.2260736179143097E+6;
  t392[4ULL] = (-X[237ULL] / (t385_idx_0 == 0.0 ? 1.0E-16 : t385_idx_0) * t494 -
                ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_B_u_i
                  * t497 - X[239ULL] * intrm_sf_mf_81) + t495 * 100.0)) /
    8.80132724281134E+6;
  t392[5ULL] = -(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_B_u_i
                 * t497 + X[239ULL] * intrm_sf_mf_81) / 1.2260736179143097E+6;
  t392[6ULL] = U_idx_2 * 100.0;
  t392[7ULL] = (X[237ULL] / (t824 == 0.0 ? 1.0E-16 : t824) * t499 -
                ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_B_u_i
                  * intermediate_der2693 - X[242ULL] * t501) + t500 * 100.0)) /
    6.3686514346761458E+7;
  t392[8ULL] = -(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Pump_convection_B_u_i
                 * intermediate_der2693 + X[242ULL] * t501) /
    8.87188408103589E+6;
  t392[9ULL] = -t439;
  t392[10ULL] = -intermediate_der8324;
  t1228 = intrm_sf_mf_604 * intrm_sf_mf_604;
  t454 = -(((real_T)(M[235ULL] != 0) * 2.0 - 1.0) * (t543 / (X[318ULL] == 0.0 ?
             1.0E-16 : X[318ULL])) * (t543 / (X[318ULL] == 0.0 ? 1.0E-16 : X
             [318ULL])) * (-X[293ULL] / 0.64 / (intrm_sf_mf_604 == 0.0 ? 1.0E-16
             : intrm_sf_mf_604)) * (-(-X[293ULL] / 0.64) / (t1228 == 0.0 ?
             1.0E-16 : t1228)) * t528 * 2.0 / 2.0 * 9.999999999999999E-14);
  tlu2_2d_linear_nearest_value(&me_efOut[0ULL], &t28.mField0[0ULL],
    &t28.mField2[0ULL], &t26.mField1[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField38, &t301[0ULL], &t304[0ULL], &t36[0ULL]);
  t286[0] = me_efOut[0];
  t395[0ULL] = -(((1.0 - X[50ULL]) * (-164.72089615570803 / (t442 == 0.0 ?
    1.0E-16 : t442)) + -X[49ULL] * (-3827.6794129126583 / (t442 == 0.0 ? 1.0E-16
    : t442))) / 12.896402563644669);
  t395[1ULL] = -((((t560 -
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I) *
                   (1.0 - X[50ULL]) + -X[49ULL] *
                   (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_g_I -
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_a_I)) +
                  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_u_I) /
                 2246.65922904024);
  t395[2ULL] = -X[50ULL];
  t395[3ULL] = -X[49ULL];
  t395[4ULL] = t658;
  t396[0ULL] = -((1.0 - X[56ULL]) * (-164.72089615570803 / (intrm_sf_mf_1339 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_1339)) + -X[55ULL] * (36.965491221318985 /
    (intrm_sf_mf_1339 == 0.0 ? 1.0E-16 : intrm_sf_mf_1339)));
  t396[1ULL] = -((((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_w_I -
                    t561) * (1.0 - X[56ULL]) + -X[55ULL] *
                   (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_g_I -
                    t561)) +
                  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_u_I) /
                 2172.7681408465714);
  t396[2ULL] = -X[56ULL];
  t396[3ULL] = -X[55ULL];
  t396[4ULL] = t682;
  t397[0ULL] = -((-X[444ULL] +
                  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_convection_B2)
                 / 2.0 * intermediate_der10415);
  t397[1ULL] = -X[444ULL] >= 0.0 ? -10.0 : -U_idx_1;
  t397[2ULL] = -((X[444ULL] +
                  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_convecti2)
                 / 2.0 * (t1113 / 2.0 * 9.999999999999999E-14));
  t397[3ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val21 >=
    0.0 ? -intermediate_der10732 : -t539;
  t397[4ULL] = -(intermediate_der7469 - intermediate_der6653);
  t1228 = X[474ULL] * t575;
  t1207 = -(X[474ULL] * t575);
  t397[5ULL] = -((((real_T)(M[41ULL] != 0) * 2.0 - 1.0) * (t1228 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p)) * (t1207 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)) *
                  10.0 + ((real_T)(M[41ULL] != 0) * 2.0 - 1.0) * (t1228 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p)) * (t1207 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V1)) *
                  10.0) * (X[444ULL] / 0.64 / 0.0019634954084936209) * (X[444ULL]
    / 0.64 / 0.0019634954084936209) / 2.0 * 9.999999999999999E-14);
  t309[0ULL] = intermediate_der10530;
  t309[1ULL] = U_idx_0;
  t309[2ULL] = intermediate_der1320;
  t309[3ULL] = -(((real_T)(M[164ULL] != 0) * 2.0 - 1.0) * (t522 / (X[167ULL] ==
    0.0 ? 1.0E-16 : X[167ULL])) * (t522 / (X[167ULL] == 0.0 ? 1.0E-16 : X[167ULL]))
                 * (X[133ULL] / 0.64 / (t515 == 0.0 ? 1.0E-16 : t515)) * (-(X
    [133ULL] / 0.64) / (t1176 == 0.0 ? 1.0E-16 : t1176)) * intermediate_der1321 *
                 2.0 / 2.0 * 9.999999999999999E-14);
  for (t405 = 0ULL; t405 < 29ULL; t405++) {
    t309[t405 + 4ULL] = t391[t405];
  }

  for (t405 = 0ULL; t405 < 11ULL; t405++) {
    t309[t405 + 33ULL] = t392[t405];
  }

  t309[44ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V27 >=
    0.0 ? -intermediate_der9276 : -intermediate_der9303;
  t309[45ULL] = intermediate_der3568;
  t309[46ULL] = t454;
  t309[47ULL] = -(t286[0ULL] * 376.99111843077515);
  for (t405 = 0ULL; t405 < 5ULL; t405++) {
    t309[t405 + 48ULL] = t395[t405];
  }

  t309[53ULL] = U_idx_6 * t525;
  for (t405 = 0ULL; t405 < 5ULL; t405++) {
    t309[t405 + 54ULL] = t396[t405];
  }

  t309[59ULL] = U_idx_8 * intermediate_der10142;
  for (t405 = 0ULL; t405 < 6ULL; t405++) {
    t309[t405 + 60ULL] = t397[t405];
  }

  out.mX[0] = t309[0];
  out.mX[1] = t309[1];
  out.mX[2] = t309[2];
  out.mX[3] = t309[3];
  out.mX[4] = t309[4];
  out.mX[5] = t309[5];
  out.mX[6] = t309[6];
  out.mX[7] = t309[7];
  out.mX[8] = t309[8];
  out.mX[9] = t309[9];
  out.mX[10] = t309[10];
  out.mX[11] = t309[11];
  out.mX[12] = t309[12];
  out.mX[13] = t309[13];
  out.mX[14] = t309[14];
  out.mX[15] = t309[15];
  out.mX[16] = t309[16];
  out.mX[17] = t309[17];
  out.mX[18] = t309[18];
  out.mX[19] = t309[19];
  out.mX[20] = t309[20];
  out.mX[21] = t309[21];
  out.mX[22] = t309[22];
  out.mX[23] = t309[23];
  out.mX[24] = t309[24];
  out.mX[25] = t309[25];
  out.mX[26] = t309[26];
  out.mX[27] = t309[27];
  out.mX[28] = t309[28];
  out.mX[29] = t309[29];
  out.mX[30] = t309[30];
  out.mX[31] = t309[31];
  out.mX[32] = t309[32];
  out.mX[33] = t309[33];
  out.mX[34] = t309[34];
  out.mX[35] = t309[35];
  out.mX[36] = t309[36];
  out.mX[37] = t309[37];
  out.mX[38] = t309[38];
  out.mX[39] = t309[39];
  out.mX[40] = t309[40];
  out.mX[41] = t309[41];
  out.mX[42] = t309[42];
  out.mX[43] = t309[43];
  out.mX[44] = t309[44];
  out.mX[45] = t309[45];
  out.mX[46] = t309[46];
  out.mX[47] = t309[47];
  out.mX[48] = t309[48];
  out.mX[49] = t309[49];
  out.mX[50] = t309[50];
  out.mX[51] = t309[51];
  out.mX[52] = t309[52];
  out.mX[53] = t309[53];
  out.mX[54] = t309[54];
  out.mX[55] = t309[55];
  out.mX[56] = t309[56];
  out.mX[57] = t309[57];
  out.mX[58] = t309[58];
  out.mX[59] = t309[59];
  out.mX[60] = t309[60];
  out.mX[61] = t309[61];
  out.mX[62] = t309[62];
  out.mX[63] = t309[63];
  out.mX[64] = t309[64];
  out.mX[65] = t309[65];
  out.mX[66] = t33;
  out.mX[67] = -(Fuel_Cell_Boost_Converter_L_i * t489);
  (void)LC;
  (void)t1240;
  return 0;
}
