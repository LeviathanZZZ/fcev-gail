/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_log.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_log(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t943, NeDsMethodOutput *t944)
{
  ETTS0 bb_efOut;
  ETTS0 bc_efOut;
  ETTS0 c_efOut;
  ETTS0 cb_efOut;
  ETTS0 cd_efOut;
  ETTS0 e_efOut;
  ETTS0 ee_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 fc_efOut;
  ETTS0 gd_efOut;
  ETTS0 hb_efOut;
  ETTS0 ib_efOut;
  ETTS0 j_efOut;
  ETTS0 jc_efOut;
  ETTS0 je_efOut;
  ETTS0 kb_efOut;
  ETTS0 kd_efOut;
  ETTS0 lb_efOut;
  ETTS0 nb_efOut;
  ETTS0 nc_efOut;
  ETTS0 o_efOut;
  ETTS0 ob_efOut;
  ETTS0 od_efOut;
  ETTS0 oe_efOut;
  ETTS0 rb_efOut;
  ETTS0 sc_efOut;
  ETTS0 t3;
  ETTS0 t38;
  ETTS0 t42;
  ETTS0 t43;
  ETTS0 t_efOut;
  ETTS0 td_efOut;
  ETTS0 te_efOut;
  ETTS0 u_efOut;
  ETTS0 ue_efOut;
  ETTS0 wb_efOut;
  ETTS0 we_efOut;
  ETTS0 x_efOut;
  ETTS0 xc_efOut;
  ETTS0 y_efOut;
  ETTS0 yd_efOut;
  PmRealVector out;
  real_T t349[1927];
  real_T X[480];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_F[8];
  real_T t352[8];
  real_T t375[8];
  real_T t392[8];
  real_T t397[8];
  real_T t414[8];
  real_T t435[8];
  real_T t482[2];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T ae_efOut[1];
  real_T af_efOut[1];
  real_T b_efOut[1];
  real_T bd_efOut[1];
  real_T be_efOut[1];
  real_T bf_efOut[1];
  real_T cc_efOut[1];
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
  real_T fd_efOut[1];
  real_T fe_efOut[1];
  real_T g_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T ge_efOut[1];
  real_T h_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T i_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T jb_efOut[1];
  real_T jd_efOut[1];
  real_T k_efOut[1];
  real_T kc_efOut[1];
  real_T ke_efOut[1];
  real_T l_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T le_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T me_efOut[1];
  real_T n_efOut[1];
  real_T nd_efOut[1];
  real_T ne_efOut[1];
  real_T oc_efOut[1];
  real_T p_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T pd_efOut[1];
  real_T pe_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T qe_efOut[1];
  real_T r_efOut[1];
  real_T rc_efOut[1];
  real_T rd_efOut[1];
  real_T re_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T sd_efOut[1];
  real_T se_efOut[1];
  real_T t350[1];
  real_T t351[1];
  real_T t353[1];
  real_T t56[1];
  real_T tb_efOut[1];
  real_T tc_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T ud_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T vd_efOut[1];
  real_T ve_efOut[1];
  real_T w_efOut[1];
  real_T wc_efOut[1];
  real_T wd_efOut[1];
  real_T xb_efOut[1];
  real_T xd_efOut[1];
  real_T xe_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T ye_efOut[1];
  real_T Fuel_Cell_Boost_Converter_L_i;
  real_T Fuel_Cell_Boost_Converter_L_n_v;
  real_T Fuel_Cell_Boost_Converter_L_p_v;
  real_T Fuel_Cell_Current_Sensor1_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_10;
  real_T U_idx_11;
  real_T U_idx_12;
  real_T U_idx_13;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T U_idx_8;
  real_T U_idx_9;
  real_T intrm_sf_mf_2;
  real_T intrm_sf_mf_234;
  real_T intrm_sf_mf_26;
  real_T intrm_sf_mf_340;
  real_T intrm_sf_mf_5;
  real_T intrm_sf_mf_511;
  real_T intrm_sf_mf_520;
  real_T intrm_sf_mf_696;
  real_T intrm_sf_mf_850;
  real_T intrm_sf_mf_9;
  real_T piece227;
  real_T t412_idx_0;
  real_T t413_idx_0;
  real_T t440_idx_0;
  real_T t45;
  real_T t478;
  real_T t480;
  real_T t481;
  real_T t487;
  real_T t490;
  real_T t535;
  real_T t552;
  real_T t558;
  real_T t559;
  real_T t565;
  real_T t567;
  real_T t568;
  real_T t573;
  real_T t575;
  real_T t579;
  real_T t581;
  real_T t583;
  real_T t584;
  real_T t586;
  real_T t587;
  real_T t590;
  real_T t592;
  real_T t597;
  real_T t598;
  real_T t604;
  real_T t606;
  real_T t608;
  real_T t609;
  real_T t611;
  real_T t612;
  real_T t613;
  real_T t614;
  real_T t616;
  real_T t617;
  real_T t619;
  real_T t620;
  real_T t621;
  real_T t622;
  real_T t623;
  real_T t628;
  real_T t629;
  real_T t630;
  real_T t631;
  real_T t634;
  real_T t636;
  real_T t637;
  real_T t639;
  real_T t640;
  real_T t641;
  real_T t643;
  real_T t644;
  real_T t646;
  real_T t647;
  real_T t649;
  real_T t650;
  real_T t651;
  real_T t652;
  real_T t655;
  real_T t657;
  real_T t659;
  real_T t662;
  real_T t666;
  real_T t690;
  real_T t691;
  real_T t694;
  real_T t695;
  real_T t698;
  real_T t699;
  real_T t702;
  real_T t703;
  real_T t704;
  real_T t706;
  real_T t712;
  real_T t717;
  real_T t722;
  real_T t726;
  real_T t740;
  real_T t888;
  real_T t897;
  real_T t937;
  real_T t942;
  size_t t330[1];
  size_t t333[1];
  size_t t47[1];
  size_t t48[1];
  size_t t90[1];
  size_t t469;
  size_t t474;
  int32_T M[259];
  int32_T b;
  for (b = 0; b < 259; b++) {
    M[b] = t943->mM.mX[b];
  }

  U_idx_0 = t943->mU.mX[0];
  U_idx_1 = t943->mU.mX[1];
  U_idx_2 = t943->mU.mX[2];
  U_idx_3 = t943->mU.mX[3];
  U_idx_4 = t943->mU.mX[4];
  U_idx_5 = t943->mU.mX[5];
  U_idx_6 = t943->mU.mX[6];
  U_idx_7 = t943->mU.mX[7];
  U_idx_8 = t943->mU.mX[8];
  U_idx_9 = t943->mU.mX[9];
  U_idx_10 = t943->mU.mX[10];
  U_idx_11 = t943->mU.mX[11];
  U_idx_12 = t943->mU.mX[12];
  U_idx_13 = t943->mU.mX[13];
  for (b = 0; b < 480; b++) {
    X[b] = t943->mX.mX[b];
  }

  out = t944->mLOG;
  t350[0ULL] = pmf_get_inf();
  for (t469 = 0ULL; t469 < 42ULL; t469++) {
    t474 = t469 / 42ULL;
    t478 = t350[t474 > 0ULL ? 0ULL : t474];
    t565 = ((_NeDynamicSystem*)(LC))->mField0[t469] * 1.0E-5;
    t350[t474 > 0ULL ? 0ULL : t474] = t478 > t565 ? t565 : t478;
  }

  t480 = t350[0ULL];
  t478 = t480 > X[65ULL] ? t480 : X[65ULL];
  t480 = X[0ULL] * 5.2410901467505238E-5;
  t481 = -X[64ULL] - U_idx_0;
  intrm_sf_mf_2 = (((real_T)(t481 >= 0.0) * t481 * 1000.0 + (real_T)(t481 < 0.0)
                    * X[66ULL]) - 0.9) / 0.099999999999999978;
  if ((real_T)(t481 >= 0.0) * t481 * 1000.0 + (real_T)(t481 < 0.0) * X[66ULL] <=
      0.9) {
    intrm_sf_mf_2 = 0.0;
  } else {
    intrm_sf_mf_2 = (real_T)(t481 >= 0.0) * t481 * 1000.0 + (real_T)(t481 < 0.0)
      * X[66ULL] >= 1.0 ? 1.0 : intrm_sf_mf_2 * intrm_sf_mf_2 * 3.0 -
      intrm_sf_mf_2 * intrm_sf_mf_2 * intrm_sf_mf_2 * 2.0;
  }

  t552 = X[3ULL] * -0.1 + X[69ULL] * 0.1;
  Fuel_Cell_Boost_Converter_L_i = X[72ULL] * 1.0E-9 + X[4ULL];
  Fuel_Cell_Boost_Converter_L_n_v = ((X[4ULL] * -1.0E-6 + X[72ULL] *
    -1.0000000000000011) + X[73ULL] * -1.0E-6) + X[5ULL];
  Fuel_Cell_Boost_Converter_L_p_v = ((X[4ULL] * -1.0E-6 + X[72ULL] * -1.0E-15) +
    X[73ULL] * -1.0E-6) + X[5ULL];
  Fuel_Cell_Current_Sensor1_I = (((X[3ULL] * 0.1 + X[69ULL] * -0.1) + X[72ULL] *
    1.0E-9) - X[74ULL]) + X[4ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[0ULL] = X[85ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[1ULL] = X[6ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[2ULL] = X[86ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[3ULL] = X[8ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[4ULL] = X[84ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[5ULL] = X[87ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[6ULL] = X[7ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[7ULL] = X[83ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[0ULL] = X[91ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[1ULL] = X[9ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[2ULL] = X[92ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[3ULL] = X[11ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[4ULL] = X[89ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[5ULL] = X[90ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[6ULL] = X[10ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[7ULL] = X[88ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[0ULL] = X[95ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[1ULL] = X[12ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[2ULL] = X[96ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[3ULL] = X[14ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[4ULL] = X[94ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[5ULL] = X[97ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[6ULL] = X[13ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[7ULL] = X[93ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[0ULL] = X[100ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[1ULL] = X[15ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[2ULL] = X[101ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[3ULL] = X[17ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[4ULL] = X[99ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[5ULL] = X[102ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[6ULL] = X[16ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[7ULL] = X[98ULL];
  if (X[103ULL] < 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 = X[103ULL] *
      17.81 + 0.043;
  } else if (X[103ULL] <= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 = ((X[103ULL]
      * 17.81 + 0.043) - X[103ULL] * X[103ULL] * 39.85) + X[103ULL] * X[103ULL] *
      X[103ULL] * 36.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 = (X[103ULL]
      - 1.0) * 1.4 + 14.003;
  }

  if (X[104ULL] < 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = X[104ULL] *
      17.81 + 0.043;
  } else if (X[104ULL] <= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = ((X[104ULL]
      * 17.81 + 0.043) - X[104ULL] * X[104ULL] * 39.85) + X[104ULL] * X[104ULL] *
      X[104ULL] * 36.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = (X[104ULL]
      - 1.0) * 1.4 + 14.003;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 = pmf_exp
    ((0.003298697014679202 - 1.0 / (X[18ULL] == 0.0 ? 1.0E-16 : X[18ULL])) *
     2416.0) * 1.25E-10;
  if (X[73ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 = -X[73ULL] /
      0.028;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 = 0.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 *
     1818.181818181818 -
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 *
     1818.181818181818) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 / 0.000125;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 * 0.0029 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 * 0.05;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 * 0.05;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 / 96485.33212;
  t350[0ULL] = X[18ULL];
  t47[0] = 52ULL;
  t48[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t350[0ULL], &t47
    [0ULL], &t48[0ULL]);
  t42 = efOut;
  tlu2_1d_linear_nearest_value(&b_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t47[0ULL], &t48[0ULL]);
  t351[0] = b_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 = t351[0ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = (X[85ULL] +
    X[91ULL]) / 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = (X[95ULL] +
    X[100ULL]) / 2.0;
  t351[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&c_efOut.mField0[0ULL], &c_efOut.mField1[0ULL],
    &c_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t351[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t43 = c_efOut;
  tlu2_1d_linear_linear_value(&d_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t350[0] = d_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 = pmf_exp
    (pmf_log(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) -
     t350[0ULL]);
  t558 = X[103ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 = pmf_exp
    (pmf_log(Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42) -
     t350[0ULL]);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 >
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42) {
    t565 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 * X
      [18ULL] * 0.001039307827269155;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 =
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42) *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * t558 *
      1.58E-18 / (t565 == 0.0 ? 1.0E-16 : t565);
  } else {
    t565 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 * X
      [18ULL] * 0.001039307827269155;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 =
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42) *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 * (X
      [104ULL] /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11))
      * 1.58E-18 / (t565 == 0.0 ? 1.0E-16 : t565);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 =
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34) *
    0.20177105219743391;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 *
    0.022577863652674921 / 192970.66424;
  t558 = ((((-X[105ULL] - X[106ULL]) - X[107ULL]) - X[108ULL]) - X[109ULL]) - X
    [110ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 +
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8) / 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 >= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 * 0.005139
      - 0.00326;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 =
      0.0018790000000000005;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 = pmf_exp
    ((0.003298697014679202 - 1.0 / (X[18ULL] == 0.0 ? 1.0E-16 : X[18ULL])) *
     1268.0) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 = 0.000125 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48);
  t559 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 * ((X
    [94ULL] + X[99ULL]) / 2.0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 = t559 >=
    1.0E-9 ? t559 : 1.0E-6;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * ((X[83ULL]
    + X[88ULL]) / 2.0) / 1.01325;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 1.0E-5 >=
      1.0E-9) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 = 1.0E-6;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 * ((X[93ULL]
    + X[98ULL]) / 2.0) / 1.01325;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 1.0E-5 >=
      1.0E-9) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = 1.0E-6;
  }

  t575 = X[18ULL] * 8.31446261815324;
  t559 = (((X[4ULL] * -1.0E-6 + X[72ULL] * -1.0E-15) + X[73ULL] * -0.001001) +
          X[5ULL]) + X[111ULL];
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 >= 1.0) {
    t565 = pmf_log
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16) * (t575 /
      135079.46496800001);
  } else {
    t565 = 0.0;
  }

  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 <= 13986.0)
  {
    t45 = pmf_log(1.0 -
                  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16
                  / 14000.0);
  } else {
    t45 = -6.9077552789821359 -
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 / 14000.0
       - 0.999) / 0.0010000000000000009;
  }

  t579 = pmf_sqrt
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = t575 /
    192970.66424 * pmf_log(t579 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48))
    + 1.228891453185164;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 =
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 - t565) -
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 * 0.01) -
    X[18ULL] * -8.31446261815324 / 192970.66424 * t45;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 *
    11.200000000000001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = -X[112ULL] +
    X[121ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 = (-X[4ULL] +
    X[72ULL] * -1.0E-9) - X[73ULL];
  t45 = (((X[4ULL] * -1.0E-6 + X[72ULL] * -1.0E-15) + X[73ULL] * -1.0E-6) + X
         [5ULL]) + X[111ULL];
  if (X[138ULL] <= 0.0) {
    intrm_sf_mf_5 = 0.0;
  } else {
    intrm_sf_mf_5 = X[138ULL] >= 1.0 ? 1.0 : X[138ULL];
  }

  if (X[139ULL] <= 0.0) {
    t567 = 0.0;
  } else {
    t567 = X[139ULL] >= 1.0 ? 1.0 : X[139ULL];
  }

  t490 = ((((1.0 - intrm_sf_mf_5) - t567) * 296.802103844292 + intrm_sf_mf_5 *
           461.523) + t567 * 4124.48151675695) * 293.15;
  t568 = 1.01325 / (t490 == 0.0 ? 1.0E-16 : t490);
  t573 = -X[145ULL] + U_idx_2 * -0.01;
  if (X[21ULL] <= 0.0) {
    t565 = 0.0;
  } else {
    t565 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    t575 = 0.0;
  } else {
    t575 = X[22ULL] >= 1.0 ? 1.0 : X[22ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = (((1.0 - t565) -
    t575) * 296.802103844292 + t565 * 461.523) + t575 * 4124.48151675695;
  if (X[146ULL] <= 216.59999999999997) {
    intrm_sf_mf_696 = 216.59999999999997;
  } else {
    intrm_sf_mf_696 = X[146ULL] >= 623.15 ? 623.15 : X[146ULL];
  }

  t487 = intrm_sf_mf_696 * intrm_sf_mf_696;
  t579 = (((1074.1165326382541 + intrm_sf_mf_696 * -0.2214565261064077) + t487 *
           0.00037212980109010952) * ((1.0 - t565) - t575) +
          ((1479.6504774710445 + intrm_sf_mf_696 * 1.200211433705052) + t487 *
           -0.00038614513167842338) * t565) + ((12825.281119790017 +
    intrm_sf_mf_696 * 6.9647057412830984) + t487 * -0.007052486824683288) * t575;
  t583 = t579 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  intrm_sf_mf_696 = -pmf_sqrt(fabs(X[147ULL] * X[147ULL] * (t579 / (t583 == 0.0 ?
    1.0E-16 : t583)) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A == 0.0 ? 1.0E-16
     : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A) / (X[146ULL] ==
    0.0 ? 1.0E-16 : X[146ULL]))) * 7.8539816339744827E-5;
  intrm_sf_mf_340 = X[19ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  t579 = X[20ULL] / (intrm_sf_mf_340 == 0.0 ? 1.0E-16 : intrm_sf_mf_340);
  if (X[150ULL] <= 216.59999999999997) {
    t487 = 216.59999999999997;
  } else {
    t487 = X[150ULL] >= 623.15 ? 623.15 : X[150ULL];
  }

  t490 = t487 * t487;
  t581 = (((1074.1165326382541 + t487 * -0.2214565261064077) + t490 *
           0.00037212980109010952) * ((1.0 - t565) - t575) +
          ((1479.6504774710445 + t487 * 1.200211433705052) + t490 *
           -0.00038614513167842338) * t565) + ((12825.281119790017 + t487 *
    6.9647057412830984) + t490 * -0.007052486824683288) * t575;
  intrm_sf_mf_26 = t581 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = -pmf_sqrt(fabs(X
    [151ULL] * X[151ULL] * (t581 / (intrm_sf_mf_26 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_26)) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A == 0.0 ? 1.0E-16
     : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A) / (X[150ULL] ==
    0.0 ? 1.0E-16 : X[150ULL]))) * 7.8539816339744827E-5;
  t352[0ULL] = X[20ULL] * 100000.0;
  t352[1ULL] = X[19ULL];
  t352[2ULL] = X[153ULL];
  t352[3ULL] = X[21ULL];
  t352[4ULL] = X[148ULL];
  t352[5ULL] = X[152ULL];
  t352[6ULL] = X[22ULL];
  t352[7ULL] = X[149ULL];
  for (t474 = 0ULL; t474 < 8ULL; t474++) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F[t474] = t352[t474];
  }

  t487 = t573 / (intrm_sf_mf_696 == 0.0 ? 1.0E-16 : intrm_sf_mf_696);
  intrm_sf_mf_696 = -X[133ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A == 0.0 ? 1.0E-16
     : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = -X[154ULL] - X
    [155ULL];
  t56[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t56[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t43 = e_efOut;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t353[0] = f_efOut[0];
  t581 = t353[0ULL];
  if (1.0 - X[21ULL] >= 0.01) {
    t583 = 1.0 - X[21ULL];
  } else if (1.0 - X[21ULL] >= -0.1) {
    t583 = pmf_exp(((1.0 - X[21ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t583 = 1.6701700790245661E-7;
  }

  t490 = X[22ULL] / (t583 == 0.0 ? 1.0E-16 : t583) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&g_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = g_efOut[0];
  t583 = pmf_exp(pmf_log(X[20ULL] * 100000.0) - t440_idx_0);
  if (t583 >= 1.0) {
    intrm_sf_mf_850 = (t583 - 1.0) * 461.523 + t490;
    t584 = t490 / (intrm_sf_mf_850 == 0.0 ? 1.0E-16 : intrm_sf_mf_850);
  } else {
    t584 = 1.0;
  }

  t598 = t584 * 0.01;
  t490 = (X[21ULL] - t584) / (t598 == 0.0 ? 1.0E-16 : t598);
  if (X[21ULL] - t584 <= 0.0) {
    t490 = 0.0;
  } else if (X[21ULL] - t584 >= t584 * 0.01) {
    t490 = X[21ULL] - t584;
  } else {
    t490 = (X[21ULL] - t584) * (t490 * t490 * 3.0 - t490 * t490 * t490 * 2.0);
  }

  t490 = t579 * t490 * 7.8539816339744827E-5 / 0.001;
  t490 *= 100000.0;
  t583 = -X[157ULL] - X[158ULL];
  t584 = -X[159ULL] - X[160ULL];
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = h_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t440_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = i_efOut[0];
  t587 = (((1.0 - t565) - t575) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 + t581 *
          t565) + t440_idx_0 * t575;
  t575 = U_idx_1 * 0.031415926535897927;
  if (t575 * 0.0001 <= 7.8539816339744857E-13) {
    t581 = 7.8539816339744857E-13;
  } else if (t575 * 0.0001 >= 3.1415926535897929E-6) {
    t581 = 3.1415926535897929E-6;
  } else {
    t581 = t575 * 0.0001;
  }

  if (X[168ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[168ULL] >=
      1.0 ? 1.0 : X[168ULL];
  }

  if (X[169ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[169ULL] >= 1.0 ? 1.0 : X[169ULL];
  }

  intrm_sf_mf_340 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
                      - t586) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
                     * 461.523) + t586 * 4124.48151675695;
  if (X[166ULL] <= 216.59999999999997) {
    intrm_sf_mf_26 = 216.59999999999997;
  } else {
    intrm_sf_mf_26 = X[166ULL] >= 623.15 ? 623.15 : X[166ULL];
  }

  t565 = intrm_sf_mf_26 * intrm_sf_mf_26;
  t590 = (((1074.1165326382541 + intrm_sf_mf_26 * -0.2214565261064077) + t565 *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) -
           t586) + ((1479.6504774710445 + intrm_sf_mf_26 * 1.200211433705052) +
                    t565 * -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    ((12825.281119790017 + intrm_sf_mf_26 * 6.9647057412830984) + t565 *
     -0.007052486824683288) * t586;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0 = t590 -
    intrm_sf_mf_340;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = pmf_sqrt(fabs
    (X[167ULL] * X[167ULL] * (t590 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0)) /
     (intrm_sf_mf_340 == 0.0 ? 1.0E-16 : intrm_sf_mf_340) / (X[166ULL] == 0.0 ?
    1.0E-16 : X[166ULL]))) * t581 * 0.64;
  if (X[133ULL] >= 0.0) {
    t581 = X[133ULL] /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
      * 1.0E-5;
  } else {
    t581 = -X[133ULL] /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
       1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
      * 1.0E-5;
  }

  if (X[14ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[14ULL] >=
      1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[13ULL] >= 1.0 ? 1.0 : X[13ULL];
  }

  intrm_sf_mf_340 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
                      - t586) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
                     * 461.523) + t586 * 259.836612622973;
  if (X[178ULL] <= 216.59999999999997) {
    intrm_sf_mf_26 = 216.59999999999997;
  } else {
    intrm_sf_mf_26 = X[178ULL] >= 623.15 ? 623.15 : X[178ULL];
  }

  t592 = intrm_sf_mf_26 * intrm_sf_mf_26;
  t590 = (((1074.1165326382541 + intrm_sf_mf_26 * -0.2214565261064077) + t592 *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) -
           t586) + ((1479.6504774710445 + intrm_sf_mf_26 * 1.200211433705052) +
                    t592 * -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    ((900.63941224837913 + intrm_sf_mf_26 * -0.044484923911364271) + t592 *
     0.00036936011832043369) * t586;
  t565 = t590 - intrm_sf_mf_340;
  intrm_sf_mf_26 = -pmf_sqrt(fabs(X[179ULL] * X[179ULL] * (t590 / (t565 == 0.0 ?
    1.0E-16 : t565)) / (intrm_sf_mf_340 == 0.0 ? 1.0E-16 : intrm_sf_mf_340) /
    (X[178ULL] == 0.0 ? 1.0E-16 : X[178ULL]))) * 0.32;
  t612 = X[12ULL] * intrm_sf_mf_340;
  t590 = X[23ULL] / (t612 == 0.0 ? 1.0E-16 : t612);
  if (X[181ULL] <= 216.59999999999997) {
    t565 = 216.59999999999997;
  } else {
    t565 = X[181ULL] >= 623.15 ? 623.15 : X[181ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde = t565 * t565;
  t592 = (((1074.1165326382541 + t565 * -0.2214565261064077) +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) -
           t586) + ((1479.6504774710445 + t565 * 1.200211433705052) +
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde
                    * -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    ((900.63941224837913 + t565 * -0.044484923911364271) +
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde *
     0.00036936011832043369) * t586;
  t613 = t592 - intrm_sf_mf_340;
  intrm_sf_mf_340 = -pmf_sqrt(fabs(X[182ULL] * X[182ULL] * (t592 / (t613 == 0.0 ?
    1.0E-16 : t613)) / (intrm_sf_mf_340 == 0.0 ? 1.0E-16 : intrm_sf_mf_340) /
    (X[181ULL] == 0.0 ? 1.0E-16 : X[181ULL]))) * 0.32;
  t592 = X[177ULL] / (intrm_sf_mf_26 == 0.0 ? 1.0E-16 : intrm_sf_mf_26);
  intrm_sf_mf_26 = X[180ULL] / (intrm_sf_mf_340 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_340);
  t353[0ULL] = X[12ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = j_efOut;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = k_efOut[0];
  intrm_sf_mf_340 = t440_idx_0;
  if (1.0 - X[14ULL] >= 0.01) {
    t565 = 1.0 - X[14ULL];
  } else if (1.0 - X[14ULL] >= -0.1) {
    t565 = pmf_exp(((1.0 - X[14ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t565 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde = X[13ULL] /
    (t565 == 0.0 ? 1.0E-16 : t565) * -36.965491221318985 + 296.802103844292;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = l_efOut[0];
  t565 = pmf_exp(pmf_log(X[23ULL] * 100000.0) - t440_idx_0);
  if (t565 >= 1.0) {
    t621 = (t565 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde / (t621 ==
      0.0 ? 1.0E-16 : t621);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = 1.0;
  }

  t623 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde = (X[14ULL] -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) / (t623 ==
    0.0 ? 1.0E-16 : t623);
  if (X[14ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35
      <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde = 0.0;
  } else if (X[14ULL] -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
             0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde = X[14ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde = (X[14ULL]
      - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde = t590 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde *
    0.026773120849090417 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde *= 100000.0;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = m_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t440_idx_0;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = n_efOut[0];
  t597 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
           - t586) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 +
          intrm_sf_mf_340 *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    t440_idx_0 * t586;
  if (X[17ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[17ULL] >= 1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    intrm_sf_mf_340 = 0.0;
  } else {
    intrm_sf_mf_340 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = (((1.0 -
    t586) - intrm_sf_mf_340) * 296.802103844292 + t586 * 461.523) +
    intrm_sf_mf_340 * 259.836612622973;
  if (X[199ULL] <= 216.59999999999997) {
    intrm_sf_mf_850 = 216.59999999999997;
  } else {
    intrm_sf_mf_850 = X[199ULL] >= 623.15 ? 623.15 : X[199ULL];
  }

  t565 = intrm_sf_mf_850 * intrm_sf_mf_850;
  t598 = (((1074.1165326382541 + intrm_sf_mf_850 * -0.2214565261064077) + t565 *
           0.00037212980109010952) * ((1.0 - t586) - intrm_sf_mf_340) +
          ((1479.6504774710445 + intrm_sf_mf_850 * 1.200211433705052) + t565 *
           -0.00038614513167842338) * t586) + ((900.63941224837913 +
    intrm_sf_mf_850 * -0.044484923911364271) + t565 * 0.00036936011832043369) *
    intrm_sf_mf_340;
  t565 = t598 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  intrm_sf_mf_850 = -pmf_sqrt(fabs(X[200ULL] * X[200ULL] * (t598 / (t565 == 0.0 ?
    1.0E-16 : t565)) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) /
    (X[199ULL] == 0.0 ? 1.0E-16 : X[199ULL]))) * 0.32;
  t631 = X[15ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  t598 = X[24ULL] / (t631 == 0.0 ? 1.0E-16 : t631);
  if (X[202ULL] <= 216.59999999999997) {
    t565 = 216.59999999999997;
  } else {
    t565 = X[202ULL] >= 623.15 ? 623.15 : X[202ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0 = t565 * t565;
  intrm_sf_mf_511 = (((1074.1165326382541 + t565 * -0.2214565261064077) +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0
                      * 0.00037212980109010952) * ((1.0 - t586) -
    intrm_sf_mf_340) + ((1479.6504774710445 + t565 * 1.200211433705052) +
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0
                        * -0.00038614513167842338) * t586) +
    ((900.63941224837913 + t565 * -0.044484923911364271) +
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0 *
     0.00036936011832043369) * intrm_sf_mf_340;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
    intrm_sf_mf_511 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = -pmf_sqrt
    (fabs(X[203ULL] * X[203ULL] * (intrm_sf_mf_511 /
       (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
        1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6))
          / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ==
             0.0 ? 1.0E-16 :
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) /
          (X[202ULL] == 0.0 ? 1.0E-16 : X[202ULL]))) * 0.32;
  intrm_sf_mf_511 = -X[180ULL] / (intrm_sf_mf_850 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_850);
  intrm_sf_mf_850 = X[201ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35);
  t353[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = o_efOut;
  tlu2_1d_linear_linear_value(&p_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = p_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0 = t440_idx_0;
  if (1.0 - X[17ULL] >= 0.01) {
    t565 = 1.0 - X[17ULL];
  } else if (1.0 - X[17ULL] >= -0.1) {
    t565 = pmf_exp(((1.0 - X[17ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t565 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W = X[16ULL] / (t565 ==
    0.0 ? 1.0E-16 : t565) * -36.965491221318985 + 296.802103844292;
  tlu2_1d_linear_linear_value(&q_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = q_efOut[0];
  t565 = pmf_exp(pmf_log(X[24ULL] * 100000.0) - t440_idx_0);
  if (t565 >= 1.0) {
    t640 = (t565 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W;
    t604 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W / (t640 == 0.0 ?
      1.0E-16 : t640);
  } else {
    t604 = 1.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I = t604 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W = (X[17ULL] - t604) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I);
  if (X[17ULL] - t604 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W = 0.0;
  } else if (X[17ULL] - t604 >= t604 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W = X[17ULL] - t604;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W = (X[17ULL] - t604) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W = t598 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W * 0.026773120849090417
    / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W *= 100000.0;
  tlu2_1d_linear_linear_value(&r_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = r_efOut[0];
  t604 = t440_idx_0;
  tlu2_1d_linear_linear_value(&s_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = s_efOut[0];
  t606 = (((1.0 - t586) - intrm_sf_mf_340) * t604 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0 * t586)
    + t440_idx_0 * intrm_sf_mf_340;
  intrm_sf_mf_340 = -X[213ULL] - X[214ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0 = -X[216ULL] -
    X[217ULL];
  t604 = -X[220ULL] + U_idx_3 * -2.0;
  t353[0ULL] = X[25ULL];
  t90[0] = 11ULL;
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t353[0ULL],
    &t90[0ULL], &t48[0ULL]);
  t42 = t_efOut;
  t353[0ULL] = 1.01325;
  t330[0] = 12ULL;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t353[0ULL],
    &t330[0ULL], &t48[0ULL]);
  t38 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t38.mField0[0ULL], &t38.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = v_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 = t440_idx_0;
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t38.mField0[0ULL], &t38.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = w_efOut[0];
  t608 = t440_idx_0;
  t609 = 1.01325 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15) *
    100.0 + t440_idx_0;
  t353[0ULL] = X[28ULL];
  tlu2_linear_nearest_prelookup(&x_efOut.mField0[0ULL], &x_efOut.mField1[0ULL],
    &x_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t353[0ULL],
    &t90[0ULL], &t48[0ULL]);
  t43 = x_efOut;
  t353[0ULL] = X[27ULL];
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t353[0ULL],
    &t330[0ULL], &t48[0ULL]);
  t42 = y_efOut;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t43.mField0[0ULL],
    &t43.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField29, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = ab_efOut[0];
  t611 = t440_idx_0;
  t353[0ULL] = X[28ULL];
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t353[0ULL],
    &t90[0ULL], &t48[0ULL]);
  t43 = bb_efOut;
  t353[0ULL] = X[27ULL];
  tlu2_linear_linear_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t353[0ULL],
    &t330[0ULL], &t48[0ULL]);
  t42 = cb_efOut;
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = db_efOut[0];
  t612 = t440_idx_0;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = eb_efOut[0];
  t613 = t440_idx_0;
  t614 = X[27ULL] / (t612 == 0.0 ? 1.0E-16 : t612) * 100.0 + t440_idx_0;
  t616 = U_idx_3 * 2.0;
  t617 = U_idx_3 * 2.0;
  t353[0ULL] = X[238ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t353[0ULL],
    &t90[0ULL], &t48[0ULL]);
  t42 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t38.mField0[0ULL], &t38.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = gb_efOut[0];
  intrm_sf_mf_9 = t440_idx_0;
  t353[0ULL] = X[240ULL];
  tlu2_linear_linear_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t353[0ULL],
    &t90[0ULL], &t48[0ULL]);
  t38 = hb_efOut;
  t353[0ULL] = X[236ULL];
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t353[0ULL],
    &t330[0ULL], &t48[0ULL]);
  t42 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = jb_efOut[0];
  intrm_sf_mf_9 = (intrm_sf_mf_9 + t440_idx_0) / 2.0;
  t619 = (X[236ULL] - 1.01325) * t616 / (intrm_sf_mf_9 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_9);
  t353[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t353[0ULL],
    &t90[0ULL], &t48[0ULL]);
  t3 = kb_efOut;
  t353[0ULL] = X[29ULL];
  tlu2_linear_nearest_prelookup(&lb_efOut.mField0[0ULL], &lb_efOut.mField1[0ULL],
    &lb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t353[0ULL],
    &t330[0ULL], &t48[0ULL]);
  t42 = lb_efOut;
  tlu2_2d_linear_nearest_value(&mb_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField29, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = mb_efOut[0];
  intrm_sf_mf_9 = t440_idx_0;
  t353[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t353[0ULL],
    &t90[0ULL], &t48[0ULL]);
  t43 = nb_efOut;
  t353[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&ob_efOut.mField0[0ULL], &ob_efOut.mField1[0ULL],
    &ob_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t353[0ULL],
    &t330[0ULL], &t48[0ULL]);
  t42 = ob_efOut;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = pb_efOut[0];
  t620 = t440_idx_0;
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t90[0ULL], &t330[0ULL], &t48[0ULL]);
  t440_idx_0 = qb_efOut[0];
  t621 = t440_idx_0;
  t622 = X[29ULL] / (t620 == 0.0 ? 1.0E-16 : t620) * 100.0 + t440_idx_0;
  t623 = (1.01325 - X[236ULL]) * X[245ULL] * 0.0001;
  t375[0ULL] = X[33ULL] * 100000.0;
  t375[1ULL] = X[32ULL];
  t375[2ULL] = X[256ULL];
  t375[3ULL] = X[35ULL];
  t375[4ULL] = X[258ULL];
  t375[5ULL] = X[255ULL];
  t375[6ULL] = X[34ULL];
  t375[7ULL] = X[257ULL];
  for (t474 = 0ULL; t474 < 8ULL; t474++) {
    t352[t474] = t375[t474];
  }

  t353[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&rb_efOut.mField0[0ULL], &rb_efOut.mField1[0ULL],
    &rb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = rb_efOut;
  tlu2_1d_linear_linear_value(&sb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = sb_efOut[0];
  t565 = t440_idx_0;
  if (X[35ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = X[35ULL] >=
      1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    t628 = 0.0;
  } else {
    t628 = X[34ULL] >= 1.0 ? 1.0 : X[34ULL];
  }

  t586 = X[32ULL] * ((((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35)
                       - t628) * 296.802103844292 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35
                      * 461.523) + t628 * 4124.48151675695);
  t629 = X[33ULL] / (t586 == 0.0 ? 1.0E-16 : t586);
  if (1.0 - X[35ULL] >= 0.01) {
    t630 = 1.0 - X[35ULL];
  } else if (1.0 - X[35ULL] >= -0.1) {
    t630 = pmf_exp(((1.0 - X[35ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t630 = 1.6701700790245661E-7;
  }

  t631 = X[34ULL] / (t630 == 0.0 ? 1.0E-16 : t630) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&tb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = tb_efOut[0];
  t630 = pmf_exp(pmf_log(X[33ULL] * 100000.0) - t440_idx_0);
  if (t630 >= 1.0) {
    t657 = (t630 - 1.0) * 461.523 + t631;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t631 /
      (t657 == 0.0 ? 1.0E-16 : t657);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 1.0;
  }

  t659 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * 0.01;
  t630 = (X[35ULL] -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) /
    (t659 == 0.0 ? 1.0E-16 : t659);
  if (X[35ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 <=
      0.0) {
    t630 = 0.0;
  } else if (X[35ULL] -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
             0.01) {
    t630 = X[35ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  } else {
    t630 = (X[35ULL] -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) *
      (t630 * t630 * 3.0 - t630 * t630 * t630 * 2.0);
  }

  t630 = t629 * t630 * 0.00012500000000000003 / 0.001;
  t630 *= 100000.0;
  t631 = U_idx_2 * 0.01;
  tlu2_1d_linear_linear_value(&ub_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ub_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t440_idx_0;
  tlu2_1d_linear_linear_value(&vb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = vb_efOut[0];
  t634 = (((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) -
           t628) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 + t565 *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
    t440_idx_0 * t628;
  if (X[283ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = X[283ULL] >=
      1.0 ? 1.0 : X[283ULL];
  }

  if (X[282ULL] <= 0.0) {
    t628 = 0.0;
  } else {
    t628 = X[282ULL] >= 1.0 ? 1.0 : X[282ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = (((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) - t628) *
    296.802103844292 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 461.523) +
    t628 * 4124.48151675695;
  t353[0ULL] = X[277ULL];
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = wb_efOut;
  tlu2_1d_linear_linear_value(&xb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = xb_efOut[0];
  tlu2_1d_linear_linear_value(&yb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = yb_efOut[0];
  tlu2_1d_linear_linear_value(&ac_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = ac_efOut[0];
  t662 = X[277ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t666 = t662 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]) * (t631 /
    7.8539816339744827E-5) * (t631 / 7.8539816339744827E-5) * fabs(t662 / (X
    [123ULL] == 0.0 ? 1.0E-16 : X[123ULL]));
  t586 = t666 / 2.0 * 9.999999999999999E-14 + ((((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) - t628) *
    t440_idx_0 + t412_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
    t413_idx_0 * t628);
  t353[0ULL] = X[280ULL];
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t3 = bc_efOut;
  tlu2_1d_linear_linear_value(&cc_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = cc_efOut[0];
  tlu2_1d_linear_linear_value(&dc_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = dc_efOut[0];
  tlu2_1d_linear_linear_value(&ec_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = ec_efOut[0];
  t565 = X[280ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t565 = t565 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * (t631 /
    7.8539816339744827E-5) * (t631 / 7.8539816339744827E-5) * fabs(t565 / (X
    [33ULL] == 0.0 ? 1.0E-16 : X[33ULL]));
  t636 = t565 / 2.0 * 9.999999999999999E-14 + ((((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) - t628) *
    t440_idx_0 + t412_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
    t413_idx_0 * t628);
  t353[0ULL] = X[278ULL];
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t38 = fc_efOut;
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = gc_efOut[0];
  tlu2_1d_linear_linear_value(&hc_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = hc_efOut[0];
  tlu2_1d_linear_linear_value(&ic_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = ic_efOut[0];
  t565 = X[278ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t565 = t565 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * (-t631 /
    7.8539816339744827E-5) * (-t631 / 7.8539816339744827E-5) * fabs(t565 / (X
    [33ULL] == 0.0 ? 1.0E-16 : X[33ULL]));
  t637 = t565 / 2.0 * 9.999999999999999E-14 + ((((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) - t628) *
    t440_idx_0 + t412_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
    t413_idx_0 * t628);
  t353[0ULL] = X[279ULL];
  tlu2_linear_linear_prelookup(&jc_efOut.mField0[0ULL], &jc_efOut.mField1[0ULL],
    &jc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = jc_efOut;
  tlu2_1d_linear_linear_value(&kc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = kc_efOut[0];
  tlu2_1d_linear_linear_value(&lc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = lc_efOut[0];
  tlu2_1d_linear_linear_value(&mc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = mc_efOut[0];
  t565 = X[279ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t565 = t565 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]) * (-t631 /
    7.8539816339744827E-5) * (-t631 / 7.8539816339744827E-5) * fabs(t565 / (X
    [123ULL] == 0.0 ? 1.0E-16 : X[123ULL]));
  if (t631 >= 0.0) {
    t628 = (t636 - t586) * t631;
  } else {
    t628 = -(((t565 / 2.0 * 9.999999999999999E-14 + ((((1.0 -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) - t628) *
      t440_idx_0 + t412_idx_0 *
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
                t413_idx_0 * t628)) - t637) * t631);
  }

  t392[0ULL] = X[37ULL] * 100000.0;
  t392[1ULL] = X[36ULL];
  t392[2ULL] = X[288ULL];
  t392[3ULL] = X[39ULL];
  t392[4ULL] = X[290ULL];
  t392[5ULL] = X[287ULL];
  t392[6ULL] = X[38ULL];
  t392[7ULL] = X[289ULL];
  for (t474 = 0ULL; t474 < 8ULL; t474++) {
    t375[t474] = t392[t474];
  }

  t353[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = nc_efOut;
  tlu2_1d_linear_linear_value(&oc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = oc_efOut[0];
  t565 = t440_idx_0;
  if (X[39ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[39ULL] >= 1.0 ? 1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    t636 = 0.0;
  } else {
    t636 = X[38ULL] >= 1.0 ? 1.0 : X[38ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[36ULL] *
    ((((1.0 - t586) - t636) * 296.802103844292 + t586 * 461.523) + t636 *
     4124.48151675695);
  t637 = X[37ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6);
  if (1.0 - X[39ULL] >= 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = 1.0 - X
      [39ULL];
  } else if (1.0 - X[39ULL] >= -0.1) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = pmf_exp
      (((1.0 - X[39ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond =
      1.6701700790245661E-7;
  }

  t639 = X[38ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond) *
    3827.6794129126583 + 296.802103844292;
  tlu2_1d_linear_linear_value(&pc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = pc_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = pmf_exp
    (pmf_log(X[37ULL] * 100000.0) - t440_idx_0);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond >= 1.0) {
    t690 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond -
            1.0) * 461.523 + t639;
    t640 = t639 / (t690 == 0.0 ? 1.0E-16 : t690);
  } else {
    t640 = 1.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden = t640 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = (X[39ULL] -
    t640) / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden ==
             0.0 ? 1.0E-16 :
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden);
  if (X[39ULL] - t640 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = 0.0;
  } else if (X[39ULL] - t640 >= t640 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = X[39ULL] -
      t640;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = (X[39ULL]
      - t640) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond
                 * 3.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond
                 * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond = t637 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond * 0.12 /
    0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond *= 100000.0;
  tlu2_1d_linear_linear_value(&qc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = qc_efOut[0];
  t639 = t440_idx_0;
  tlu2_1d_linear_linear_value(&rc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = rc_efOut[0];
  t641 = (((1.0 - t586) - t636) * t639 + t565 * t586) + t440_idx_0 * t636;
  if (X[42ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    t636 = 0.0;
  } else {
    t636 = X[43ULL] >= 1.0 ? 1.0 : X[43ULL];
  }

  t639 = (((1.0 - t586) - t636) * 296.802103844292 + t586 * 461.523) + t636 *
    4124.48151675695;
  if (X[303ULL] <= 216.59999999999997) {
    t640 = 216.59999999999997;
  } else {
    t640 = X[303ULL] >= 623.15 ? 623.15 : X[303ULL];
  }

  t643 = t640 * t640;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I =
    (((1074.1165326382541 + t640 * -0.2214565261064077) + t643 *
      0.00037212980109010952) * ((1.0 - t586) - t636) + ((1479.6504774710445 +
       t640 * 1.200211433705052) + t643 * -0.00038614513167842338) * t586) +
    ((12825.281119790017 + t640 * 6.9647057412830984) + t643 *
     -0.007052486824683288) * t636;
  t695 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I - t639;
  t640 = -pmf_sqrt(fabs(X[304ULL] * X[304ULL] *
                        (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I
    / (t695 == 0.0 ? 1.0E-16 : t695)) / (t639 == 0.0 ? 1.0E-16 : t639) / (X
    [303ULL] == 0.0 ? 1.0E-16 : X[303ULL]))) * 7.8539816339744827E-5;
  t565 = X[40ULL] * t639;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I = X[41ULL] / (t565 ==
    0.0 ? 1.0E-16 : t565);
  if (X[307ULL] <= 216.59999999999997) {
    t643 = 216.59999999999997;
  } else {
    t643 = X[307ULL] >= 623.15 ? 623.15 : X[307ULL];
  }

  t565 = t643 * t643;
  t644 = (((1074.1165326382541 + t643 * -0.2214565261064077) + t565 *
           0.00037212980109010952) * ((1.0 - t586) - t636) +
          ((1479.6504774710445 + t643 * 1.200211433705052) + t565 *
           -0.00038614513167842338) * t586) + ((12825.281119790017 + t643 *
    6.9647057412830984) + t565 * -0.007052486824683288) * t636;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t644 - t639;
  t639 = -pmf_sqrt(fabs(X[308ULL] * X[308ULL] * (t644 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35))
                        / (t639 == 0.0 ? 1.0E-16 : t639) / (X[307ULL] == 0.0 ?
    1.0E-16 : X[307ULL]))) * 7.8539816339744827E-5;
  t397[0ULL] = X[41ULL] * 100000.0;
  t397[1ULL] = X[40ULL];
  t397[2ULL] = X[310ULL];
  t397[3ULL] = X[42ULL];
  t397[4ULL] = X[305ULL];
  t397[5ULL] = X[309ULL];
  t397[6ULL] = X[43ULL];
  t397[7ULL] = X[306ULL];
  for (t474 = 0ULL; t474 < 8ULL; t474++) {
    t392[t474] = t397[t474];
  }

  t643 = -X[293ULL] / (t640 == 0.0 ? 1.0E-16 : t640);
  t640 = -X[263ULL] / (t639 == 0.0 ? 1.0E-16 : t639);
  t353[0ULL] = X[40ULL];
  tlu2_linear_linear_prelookup(&sc_efOut.mField0[0ULL], &sc_efOut.mField1[0ULL],
    &sc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t43 = sc_efOut;
  tlu2_1d_linear_linear_value(&tc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = tc_efOut[0];
  t639 = t440_idx_0;
  if (1.0 - X[42ULL] >= 0.01) {
    t565 = 1.0 - X[42ULL];
  } else if (1.0 - X[42ULL] >= -0.1) {
    t565 = pmf_exp(((1.0 - X[42ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t565 = 1.6701700790245661E-7;
  }

  t644 = X[43ULL] / (t565 == 0.0 ? 1.0E-16 : t565) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&uc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = uc_efOut[0];
  t565 = pmf_exp(pmf_log(X[41ULL] * 100000.0) - t440_idx_0);
  if (t565 >= 1.0) {
    t565 = (t565 - 1.0) * 461.523 + t644;
    t646 = t644 / (t565 == 0.0 ? 1.0E-16 : t565);
  } else {
    t646 = 1.0;
  }

  t565 = t646 * 0.01;
  t644 = (X[42ULL] - t646) / (t565 == 0.0 ? 1.0E-16 : t565);
  if (X[42ULL] - t646 <= 0.0) {
    t644 = 0.0;
  } else if (X[42ULL] - t646 >= t646 * 0.01) {
    t644 = X[42ULL] - t646;
  } else {
    t644 = (X[42ULL] - t646) * (t644 * t644 * 3.0 - t644 * t644 * t644 * 2.0);
  }

  t644 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I * t644 *
    7.8539816339744827E-5 / 0.001;
  t644 *= 100000.0;
  tlu2_1d_linear_linear_value(&vc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = vc_efOut[0];
  t565 = t440_idx_0;
  tlu2_1d_linear_linear_value(&wc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = wc_efOut[0];
  t647 = (((1.0 - t586) - t636) * t565 + t639 * t586) + t440_idx_0 * t636;
  t636 = (X[300ULL] * -0.7999998 + U_idx_4 * 7.9999980000000006) -
    0.039999990000000013;
  t639 = (X[300ULL] * -0.7999998 + U_idx_4 * 7.9999980000000006) +
    9.9999999947364415E-9;
  t646 = U_idx_4 * 10.0;
  if (t639 * 7.8539816339744827E-5 <= 7.8539816339744857E-13) {
    t649 = 7.8539816339744857E-13;
  } else if (t639 * 7.8539816339744827E-5 >= 3.1415926535897929E-6) {
    t649 = 3.1415926535897929E-6;
  } else {
    t649 = t639 * 7.8539816339744827E-5;
  }

  if (X[319ULL] <= 0.0) {
    t650 = 0.0;
  } else {
    t650 = X[319ULL] >= 1.0 ? 1.0 : X[319ULL];
  }

  if (X[320ULL] <= 0.0) {
    t651 = 0.0;
  } else {
    t651 = X[320ULL] >= 1.0 ? 1.0 : X[320ULL];
  }

  t652 = (((1.0 - t650) - t651) * 296.802103844292 + t650 * 461.523) + t651 *
    4124.48151675695;
  if (X[317ULL] <= 216.59999999999997) {
    t565 = 216.59999999999997;
  } else {
    t565 = X[317ULL] >= 623.15 ? 623.15 : X[317ULL];
  }

  t655 = t565 * t565;
  t586 = (((1074.1165326382541 + t565 * -0.2214565261064077) + t655 *
           0.00037212980109010952) * ((1.0 - t650) - t651) +
          ((1479.6504774710445 + t565 * 1.200211433705052) + t655 *
           -0.00038614513167842338) * t650) + ((12825.281119790017 + t565 *
    6.9647057412830984) + t655 * -0.007052486824683288) * t651;
  intrm_sf_mf_234 = t586 - t652;
  t650 = pmf_sqrt(fabs(X[318ULL] * X[318ULL] * (t586 / (intrm_sf_mf_234 == 0.0 ?
    1.0E-16 : intrm_sf_mf_234)) / (t652 == 0.0 ? 1.0E-16 : t652) / (X[317ULL] ==
    0.0 ? 1.0E-16 : X[317ULL]))) * t649 * 0.64;
  if (-X[293ULL] >= 0.0) {
    t649 = -X[293ULL] / (t650 == 0.0 ? 1.0E-16 : t650) * 1.0E-5;
  } else {
    t649 = X[293ULL] / (t650 == 0.0 ? 1.0E-16 : t650) * 1.0E-5;
  }

  if (X[335ULL] <= 0.0) {
    t650 = 0.0;
  } else {
    t650 = X[335ULL] >= 1.0 ? 1.0 : X[335ULL];
  }

  if (X[336ULL] <= 0.0) {
    t651 = 0.0;
  } else {
    t651 = X[336ULL] >= 1.0 ? 1.0 : X[336ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I = ((((1.0 - t650)
    - t651) * 296.802103844292 + t650 * 461.523) + t651 * 259.836612622973) *
    293.15;
  t652 = 1.01325 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I ==
                    0.0 ? 1.0E-16 :
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I);
  if (X[348ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[348ULL] >= 1.0 ? 1.0 : X[348ULL];
  }

  if (X[347ULL] <= 0.0) {
    t655 = 0.0;
  } else {
    t655 = X[347ULL] >= 1.0 ? 1.0 : X[347ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = (((1.0 - t586)
    - t655) * 296.802103844292 + t586 * 461.523) + t655 * 259.836612622973;
  t353[0ULL] = X[342ULL];
  tlu2_linear_linear_prelookup(&xc_efOut.mField0[0ULL], &xc_efOut.mField1[0ULL],
    &xc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t38 = xc_efOut;
  tlu2_1d_linear_linear_value(&yc_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = yc_efOut[0];
  tlu2_1d_linear_linear_value(&ad_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = ad_efOut[0];
  tlu2_1d_linear_linear_value(&bd_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = bd_efOut[0];
  t722 = X[342ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t726 = t722 / 1.01325 * (-X[330ULL] / 0.0019634954084936209) * (-X[330ULL] /
    0.0019634954084936209) * fabs(t722 / 1.01325);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho = t726 / 2.0 *
    9.999999999999999E-14 + ((((1.0 - t586) - t655) * t440_idx_0 + t412_idx_0 *
    t586) + t413_idx_0 * t655);
  t353[0ULL] = X[345ULL];
  tlu2_linear_linear_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t3 = cd_efOut;
  tlu2_1d_linear_linear_value(&dd_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = dd_efOut[0];
  tlu2_1d_linear_linear_value(&ed_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = ed_efOut[0];
  tlu2_1d_linear_linear_value(&fd_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = fd_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = X[345ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / (X[44ULL] ==
    0.0 ? 1.0E-16 : X[44ULL]) * (-X[330ULL] / 0.0019634954084936209) * (-X
    [330ULL] / 0.0019634954084936209) * fabs
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / (X[44ULL]
      == 0.0 ? 1.0E-16 : X[44ULL]));
  t659 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0 / 2.0 *
    9.999999999999999E-14 + ((((1.0 - t586) - t655) * t440_idx_0 + t412_idx_0 *
    t586) + t413_idx_0 * t655);
  t353[0ULL] = X[343ULL];
  tlu2_linear_linear_prelookup(&gd_efOut.mField0[0ULL], &gd_efOut.mField1[0ULL],
    &gd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = gd_efOut;
  tlu2_1d_linear_linear_value(&hd_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = hd_efOut[0];
  tlu2_1d_linear_linear_value(&id_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = id_efOut[0];
  tlu2_1d_linear_linear_value(&jd_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = jd_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 = X[343ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t740 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 / (X
    [44ULL] == 0.0 ? 1.0E-16 : X[44ULL]) * (X[330ULL] / 0.0019634954084936209) *
    (X[330ULL] / 0.0019634954084936209) * fabs
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 / (X[44ULL]
      == 0.0 ? 1.0E-16 : X[44ULL]));
  t565 = t740 / 2.0 * 9.999999999999999E-14 + ((((1.0 - t586) - t655) *
    t440_idx_0 + t412_idx_0 * t586) + t413_idx_0 * t655);
  t353[0ULL] = X[344ULL];
  tlu2_linear_linear_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = kd_efOut;
  tlu2_1d_linear_linear_value(&ld_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ld_efOut[0];
  tlu2_1d_linear_linear_value(&md_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t412_idx_0 = md_efOut[0];
  tlu2_1d_linear_linear_value(&nd_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t413_idx_0 = nd_efOut[0];
  t897 = X[344ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = t897 / 1.01325 * (X
    [330ULL] / 0.0019634954084936209) * (X[330ULL] / 0.0019634954084936209) *
    fabs(t897 / 1.01325);
  if (-X[330ULL] >= 0.0) {
    t655 = -((t659 -
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho) *
             X[330ULL]);
  } else {
    t655 = ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W / 2.0 *
             9.999999999999999E-14 + ((((1.0 - t586) - t655) * t440_idx_0 +
               t412_idx_0 * t586) + t413_idx_0 * t655)) - t565) * X[330ULL];
  }

  t414[0ULL] = X[44ULL] * 100000.0;
  t414[1ULL] = X[45ULL];
  t414[2ULL] = X[353ULL];
  t414[3ULL] = X[47ULL];
  t414[4ULL] = X[355ULL];
  t414[5ULL] = X[352ULL];
  t414[6ULL] = X[46ULL];
  t414[7ULL] = X[354ULL];
  for (t474 = 0ULL; t474 < 8ULL; t474++) {
    t397[t474] = t414[t474];
  }

  t353[0ULL] = X[45ULL];
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t38 = od_efOut;
  tlu2_1d_linear_linear_value(&pd_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = pd_efOut[0];
  t586 = t440_idx_0;
  if (X[47ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[47ULL] >=
      1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    t657 = 0.0;
  } else {
    t657 = X[46ULL] >= 1.0 ? 1.0 : X[46ULL];
  }

  t565 = X[45ULL] * ((((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
                       - t657) * 296.802103844292 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6
                      * 461.523) + t657 * 259.836612622973);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho = X[44ULL] /
    (t565 == 0.0 ? 1.0E-16 : t565);
  if (1.0 - X[47ULL] >= 0.01) {
    t659 = 1.0 - X[47ULL];
  } else if (1.0 - X[47ULL] >= -0.1) {
    t659 = pmf_exp(((1.0 - X[47ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t659 = 1.6701700790245661E-7;
  }

  t565 = X[46ULL] / (t659 == 0.0 ? 1.0E-16 : t659) * -36.965491221318985 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&qd_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = qd_efOut[0];
  t659 = pmf_exp(pmf_log(X[44ULL] * 100000.0) - t440_idx_0);
  if (t659 >= 1.0) {
    t413_idx_0 = (t659 - 1.0) * 461.523 + t565;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g = t565 /
      (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g = 1.0;
  }

  t412_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g *
    0.01;
  t659 = (X[47ULL] -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g) /
    (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  if (X[47ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g
      <= 0.0) {
    t659 = 0.0;
  } else if (X[47ULL] -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g *
             0.01) {
    t659 = X[47ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g;
  } else {
    t659 = (X[47ULL] -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g) *
      (t659 * t659 * 3.0 - t659 * t659 * t659 * 2.0);
  }

  t659 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho * t659 *
    0.0003 / 0.001;
  t659 *= 100000.0;
  tlu2_1d_linear_linear_value(&rd_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = rd_efOut[0];
  t565 = t440_idx_0;
  tlu2_1d_linear_linear_value(&sd_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = sd_efOut[0];
  t662 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
           - t657) * t565 + t586 *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    t440_idx_0 * t657;
  t657 = U_idx_5 * 376.99111843077515;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g = -(X[44ULL] -
    1.01325) * X[366ULL] * 0.0001;
  t666 = t657 * 0.99999999999999978 / 0.99999999999999978;
  t414[0ULL] = X[380ULL];
  t414[1ULL] = X[48ULL];
  t414[2ULL] = X[377ULL];
  t414[3ULL] = X[50ULL];
  t414[4ULL] = X[379ULL];
  t414[5ULL] = X[376ULL];
  t414[6ULL] = X[49ULL];
  t414[7ULL] = X[378ULL];
  if (X[50ULL] <= 0.0) {
    t565 = 0.0;
  } else {
    t565 = X[50ULL] >= 1.0 ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[49ULL] >=
      1.0 ? 1.0 : X[49ULL];
  }

  t586 = (((1.0 - t565) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) *
          296.802103844292 + t565 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
    4124.48151675695;
  if (X[382ULL] <= 216.59999999999997) {
    piece227 = 216.59999999999997;
  } else {
    piece227 = X[382ULL] >= 623.15 ? 623.15 : X[382ULL];
  }

  t691 = piece227 * piece227;
  t690 = (((1074.1165326382541 + piece227 * -0.2214565261064077) + t691 *
           0.00037212980109010952) * ((1.0 - t565) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
          ((1479.6504774710445 + piece227 * 1.200211433705052) + t691 *
           -0.00038614513167842338) * t565) + ((12825.281119790017 + piece227 *
    6.9647057412830984) + t691 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t888 = t690 - t586;
  piece227 = -pmf_sqrt(fabs(X[383ULL] * X[383ULL] * (t690 / (t888 == 0.0 ?
    1.0E-16 : t888)) / (t586 == 0.0 ? 1.0E-16 : t586) / (X[382ULL] == 0.0 ?
    1.0E-16 : X[382ULL]))) * 0.0019634954084936209;
  t413_idx_0 = X[48ULL] * t586;
  t690 = X[51ULL] / (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[385ULL] <= 216.59999999999997) {
    t691 = 216.59999999999997;
  } else {
    t691 = X[385ULL] >= 623.15 ? 623.15 : X[385ULL];
  }

  t412_idx_0 = t691 * t691;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden =
    (((1074.1165326382541 + t691 * -0.2214565261064077) + t412_idx_0 *
      0.00037212980109010952) * ((1.0 - t565) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
     ((1479.6504774710445 + t691 * 1.200211433705052) + t412_idx_0 *
      -0.00038614513167842338) * t565) + ((12825.281119790017 + t691 *
    6.9647057412830984) + t412_idx_0 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t888 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden - t586;
  t586 = -pmf_sqrt(fabs(X[386ULL] * X[386ULL] *
                        (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden
    / (t888 == 0.0 ? 1.0E-16 : t888)) / (t586 == 0.0 ? 1.0E-16 : t586) / (X
    [385ULL] == 0.0 ? 1.0E-16 : X[385ULL]))) * 0.0019634954084936209;
  t691 = -X[272ULL] / (piece227 == 0.0 ? 1.0E-16 : piece227);
  piece227 = X[384ULL] / (t586 == 0.0 ? 1.0E-16 : t586);
  t353[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&td_efOut.mField0[0ULL], &td_efOut.mField1[0ULL],
    &td_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t3 = td_efOut;
  tlu2_1d_linear_linear_value(&ud_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ud_efOut[0];
  t586 = t440_idx_0;
  if (1.0 - X[50ULL] >= 0.01) {
    t412_idx_0 = 1.0 - X[50ULL];
  } else if (1.0 - X[50ULL] >= -0.1) {
    t412_idx_0 = pmf_exp(((1.0 - X[50ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t412_idx_0 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden = X[49ULL] /
    (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&vd_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = vd_efOut[0];
  t412_idx_0 = pmf_exp(pmf_log(X[51ULL] * 100000.0) - t440_idx_0);
  if (t412_idx_0 >= 1.0) {
    t888 = (t412_idx_0 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden;
    t694 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden /
      (t888 == 0.0 ? 1.0E-16 : t888);
  } else {
    t694 = 1.0;
  }

  t413_idx_0 = t694 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden = (X[50ULL] -
    t694) / (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[50ULL] - t694 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden = 0.0;
  } else if (X[50ULL] - t694 >= t694 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden = X[50ULL] -
      t694;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden = (X[50ULL]
      - t694) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden
                 * 3.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden
                 * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden = t690 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden *
    0.00049087385212340522 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden *= 100000.0;
  tlu2_1d_linear_linear_value(&wd_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = wd_efOut[0];
  t412_idx_0 = t440_idx_0;
  tlu2_1d_linear_linear_value(&xd_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = xd_efOut[0];
  t695 = (((1.0 - t565) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) *
          t412_idx_0 + t586 * t565) + t440_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  if (X[8ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[8ULL] >=
      1.0 ? 1.0 : X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[7ULL] >= 1.0 ? 1.0 : X[7ULL];
  }

  t412_idx_0 = (((1.0 -
                  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
                 - t586) * 296.802103844292 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
                461.523) + t586 * 4124.48151675695;
  if (X[396ULL] <= 216.59999999999997) {
    t694 = 216.59999999999997;
  } else {
    t694 = X[396ULL] >= 623.15 ? 623.15 : X[396ULL];
  }

  t565 = t694 * t694;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I =
    (((1074.1165326382541 + t694 * -0.2214565261064077) + t565 *
      0.00037212980109010952) * ((1.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) - t586) +
     ((1479.6504774710445 + t694 * 1.200211433705052) + t565 *
      -0.00038614513167842338) *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    ((12825.281119790017 + t694 * 6.9647057412830984) + t565 *
     -0.007052486824683288) * t586;
  t888 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I - t412_idx_0;
  t694 = -pmf_sqrt(fabs(X[397ULL] * X[397ULL] *
                        (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I
    / (t888 == 0.0 ? 1.0E-16 : t888)) / (t412_idx_0 == 0.0 ? 1.0E-16 :
    t412_idx_0) / (X[396ULL] == 0.0 ? 1.0E-16 : X[396ULL]))) * 0.32;
  t413_idx_0 = X[6ULL] * t412_idx_0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = X[52ULL] /
    (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[399ULL] <= 216.59999999999997) {
    t565 = 216.59999999999997;
  } else {
    t565 = X[399ULL] >= 623.15 ? 623.15 : X[399ULL];
  }

  t699 = t565 * t565;
  t698 = (((1074.1165326382541 + t565 * -0.2214565261064077) + t699 *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) -
           t586) + ((1479.6504774710445 + t565 * 1.200211433705052) + t699 *
                    -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    ((12825.281119790017 + t565 * 6.9647057412830984) + t699 *
     -0.007052486824683288) * t586;
  t888 = t698 - t412_idx_0;
  t412_idx_0 = -pmf_sqrt(fabs(X[400ULL] * X[400ULL] * (t698 / (t888 == 0.0 ?
    1.0E-16 : t888)) / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0) / (X[399ULL] ==
    0.0 ? 1.0E-16 : X[399ULL]))) * 0.32;
  t698 = -X[384ULL] / (t694 == 0.0 ? 1.0E-16 : t694);
  t694 = X[398ULL] / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  t353[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = yd_efOut;
  tlu2_1d_linear_linear_value(&ae_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ae_efOut[0];
  t412_idx_0 = t440_idx_0;
  if (1.0 - X[8ULL] >= 0.01) {
    t565 = 1.0 - X[8ULL];
  } else if (1.0 - X[8ULL] >= -0.1) {
    t565 = pmf_exp(((1.0 - X[8ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t565 = 1.6701700790245661E-7;
  }

  t699 = X[7ULL] / (t565 == 0.0 ? 1.0E-16 : t565) * 3827.6794129126583 +
    296.802103844292;
  tlu2_1d_linear_linear_value(&be_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = be_efOut[0];
  t565 = pmf_exp(pmf_log(X[52ULL] * 100000.0) - t440_idx_0);
  if (t565 >= 1.0) {
    t888 = (t565 - 1.0) * 461.523 + t699;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t699 /
      (t888 == 0.0 ? 1.0E-16 : t888);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = 1.0;
  }

  t413_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
    0.01;
  t699 = (X[8ULL] -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) /
    (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[8ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 <=
      0.0) {
    t699 = 0.0;
  } else if (X[8ULL] -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
             0.01) {
    t699 = X[8ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  } else {
    t699 = (X[8ULL] -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) *
      (t699 * t699 * 3.0 - t699 * t699 * t699 * 2.0);
  }

  t699 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * t699 *
    0.026773120849090417 / 0.001;
  t699 *= 100000.0;
  tlu2_1d_linear_linear_value(&ce_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ce_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t440_idx_0;
  tlu2_1d_linear_linear_value(&de_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = de_efOut[0];
  t703 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
           - t586) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 +
          t412_idx_0 *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
    t440_idx_0 * t586;
  if (X[11ULL] <= 0.0) {
    t586 = 0.0;
  } else {
    t586 = X[11ULL] >= 1.0 ? 1.0 : X[11ULL];
  }

  if (X[10ULL] <= 0.0) {
    t412_idx_0 = 0.0;
  } else {
    t412_idx_0 = X[10ULL] >= 1.0 ? 1.0 : X[10ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = (((1.0 -
    t586) - t412_idx_0) * 296.802103844292 + t586 * 461.523) + t412_idx_0 *
    4124.48151675695;
  if (X[410ULL] <= 216.59999999999997) {
    t702 = 216.59999999999997;
  } else {
    t702 = X[410ULL] >= 623.15 ? 623.15 : X[410ULL];
  }

  t565 = t702 * t702;
  t704 = (((1074.1165326382541 + t702 * -0.2214565261064077) + t565 *
           0.00037212980109010952) * ((1.0 - t586) - t412_idx_0) +
          ((1479.6504774710445 + t702 * 1.200211433705052) + t565 *
           -0.00038614513167842338) * t586) + ((12825.281119790017 + t702 *
    6.9647057412830984) + t565 * -0.007052486824683288) * t412_idx_0;
  t888 = t704 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  t702 = -pmf_sqrt(fabs(X[411ULL] * X[411ULL] * (t704 / (t888 == 0.0 ? 1.0E-16 :
    t888)) / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ==
              0.0 ? 1.0E-16 :
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) /
                        (X[410ULL] == 0.0 ? 1.0E-16 : X[410ULL]))) * 0.32;
  t413_idx_0 = X[9ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  t704 = X[53ULL] / (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[412ULL] <= 216.59999999999997) {
    t565 = 216.59999999999997;
  } else {
    t565 = X[412ULL] >= 623.15 ? 623.15 : X[412ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t565 * t565;
  t706 = (((1074.1165326382541 + t565 * -0.2214565261064077) +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
           0.00037212980109010952) * ((1.0 - t586) - t412_idx_0) +
          ((1479.6504774710445 + t565 * 1.200211433705052) +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
           -0.00038614513167842338) * t586) + ((12825.281119790017 + t565 *
    6.9647057412830984) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
    -0.007052486824683288) * t412_idx_0;
  t888 = t706 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = -pmf_sqrt
    (fabs(X[413ULL] * X[413ULL] * (t706 / (t888 == 0.0 ? 1.0E-16 : t888)) /
          (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 ==
           0.0 ? 1.0E-16 :
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) /
          (X[412ULL] == 0.0 ? 1.0E-16 : X[412ULL]))) * 0.32;
  t706 = -X[398ULL] / (t702 == 0.0 ? 1.0E-16 : t702);
  t702 = X[145ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35);
  t353[0ULL] = X[9ULL];
  tlu2_linear_linear_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = ee_efOut;
  tlu2_1d_linear_linear_value(&fe_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = fe_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = t440_idx_0;
  if (1.0 - X[11ULL] >= 0.01) {
    t565 = 1.0 - X[11ULL];
  } else if (1.0 - X[11ULL] >= -0.1) {
    t565 = pmf_exp(((1.0 - X[11ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t565 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W = X[10ULL] / (t565 == 0.0
    ? 1.0E-16 : t565) * 3827.6794129126583 + 296.802103844292;
  tlu2_1d_linear_linear_value(&ge_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ge_efOut[0];
  t565 = pmf_exp(pmf_log(X[53ULL] * 100000.0) - t440_idx_0);
  if (t565 >= 1.0) {
    t888 = (t565 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W;
    t565 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W / (t888 == 0.0 ?
      1.0E-16 : t888);
  } else {
    t565 = 1.0;
  }

  t413_idx_0 = t565 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W = (X[11ULL] - t565) /
    (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[11ULL] - t565 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W = 0.0;
  } else if (X[11ULL] - t565 >= t565 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W = X[11ULL] - t565;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W = (X[11ULL] - t565) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W = t704 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W * 0.026773120849090417 /
    0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W *= 100000.0;
  tlu2_1d_linear_linear_value(&he_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = he_efOut[0];
  t565 = t440_idx_0;
  tlu2_1d_linear_linear_value(&ie_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ie_efOut[0];
  t712 = (((1.0 - t586) - t412_idx_0) * t565 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 * t586)
    + t440_idx_0 * t412_idx_0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[0ULL] = X
    [425ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[1ULL] = X
    [54ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[2ULL] = X
    [422ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[3ULL] = X
    [56ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[4ULL] = X
    [424ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[5ULL] = X
    [421ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[6ULL] = X
    [55ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[7ULL] = X
    [423ULL];
  if (X[56ULL] <= 0.0) {
    t565 = 0.0;
  } else {
    t565 = X[56ULL] >= 1.0 ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[55ULL] >=
      1.0 ? 1.0 : X[55ULL];
  }

  intrm_sf_mf_234 = (((1.0 - t565) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6)
                     * 296.802103844292 + t565 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
    259.836612622973;
  if (X[427ULL] <= 216.59999999999997) {
    intrm_sf_mf_520 = 216.59999999999997;
  } else {
    intrm_sf_mf_520 = X[427ULL] >= 623.15 ? 623.15 : X[427ULL];
  }

  t535 = intrm_sf_mf_520 * intrm_sf_mf_520;
  t717 = (((1074.1165326382541 + intrm_sf_mf_520 * -0.2214565261064077) + t535 *
           0.00037212980109010952) * ((1.0 - t565) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
          ((1479.6504774710445 + intrm_sf_mf_520 * 1.200211433705052) + t535 *
           -0.00038614513167842338) * t565) + ((900.63941224837913 +
    intrm_sf_mf_520 * -0.044484923911364271) + t535 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t888 = t717 - intrm_sf_mf_234;
  intrm_sf_mf_520 = -pmf_sqrt(fabs(X[428ULL] * X[428ULL] * (t717 / (t888 == 0.0 ?
    1.0E-16 : t888)) / (intrm_sf_mf_234 == 0.0 ? 1.0E-16 : intrm_sf_mf_234) /
    (X[427ULL] == 0.0 ? 1.0E-16 : X[427ULL]))) * 0.0019634954084936209;
  t413_idx_0 = X[54ULL] * intrm_sf_mf_234;
  t717 = X[57ULL] / (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[429ULL] <= 216.59999999999997) {
    t535 = 216.59999999999997;
  } else {
    t535 = X[429ULL] >= 623.15 ? 623.15 : X[429ULL];
  }

  t942 = t535 * t535;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden =
    (((1074.1165326382541 + t535 * -0.2214565261064077) + t942 *
      0.00037212980109010952) * ((1.0 - t565) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) +
     ((1479.6504774710445 + t535 * 1.200211433705052) + t942 *
      -0.00038614513167842338) * t565) + ((900.63941224837913 + t535 *
    -0.044484923911364271) + t942 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t888 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden -
    intrm_sf_mf_234;
  intrm_sf_mf_234 = -pmf_sqrt(fabs(X[430ULL] * X[430ULL] *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden / (t888 ==
    0.0 ? 1.0E-16 : t888)) / (intrm_sf_mf_234 == 0.0 ? 1.0E-16 : intrm_sf_mf_234)
    / (X[429ULL] == 0.0 ? 1.0E-16 : X[429ULL]))) * 0.0019634954084936209;
  t535 = -X[361ULL] / (intrm_sf_mf_520 == 0.0 ? 1.0E-16 : intrm_sf_mf_520);
  intrm_sf_mf_520 = -X[177ULL] / (intrm_sf_mf_234 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_234);
  t353[0ULL] = X[54ULL];
  tlu2_linear_linear_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t3 = je_efOut;
  tlu2_1d_linear_linear_value(&ke_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ke_efOut[0];
  intrm_sf_mf_234 = t440_idx_0;
  if (1.0 - X[56ULL] >= 0.01) {
    t942 = 1.0 - X[56ULL];
  } else if (1.0 - X[56ULL] >= -0.1) {
    t942 = pmf_exp(((1.0 - X[56ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t942 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = X[55ULL] /
    (t942 == 0.0 ? 1.0E-16 : t942) * -36.965491221318985 + 296.802103844292;
  tlu2_1d_linear_linear_value(&le_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = le_efOut[0];
  t942 = pmf_exp(pmf_log(X[57ULL] * 100000.0) - t440_idx_0);
  if (t942 >= 1.0) {
    t888 = (t942 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden / (t888 ==
      0.0 ? 1.0E-16 : t888);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I = 1.0;
  }

  t413_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I *
    0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = (X[56ULL] -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I) / (t413_idx_0 ==
    0.0 ? 1.0E-16 : t413_idx_0);
  if (X[56ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I <=
      0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = 0.0;
  } else if (X[56ULL] -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I * 0.01)
  {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = X[56ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = (X[56ULL]
      - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden = t717 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *
    0.00049087385212340522 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden *= 100000.0;
  tlu2_1d_linear_linear_value(&me_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = me_efOut[0];
  t942 = t440_idx_0;
  tlu2_1d_linear_linear_value(&ne_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = ne_efOut[0];
  t722 = (((1.0 - t565) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6) *
          t942 + intrm_sf_mf_234 * t565) + t440_idx_0 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  if (X[449ULL] <= 0.0) {
    intrm_sf_mf_234 = 0.0;
  } else {
    intrm_sf_mf_234 = X[449ULL] >= 1.0 ? 1.0 : X[449ULL];
  }

  if (X[450ULL] <= 0.0) {
    t942 = 0.0;
  } else {
    t942 = X[450ULL] >= 1.0 ? 1.0 : X[450ULL];
  }

  t888 = ((((1.0 - intrm_sf_mf_234) - t942) * 296.802103844292 + intrm_sf_mf_234
           * 461.523) + t942 * 259.836612622973) * 293.15;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I = 1.01325 / (t888 ==
    0.0 ? 1.0E-16 : t888);
  t726 = (X[453ULL] * 0.07812500122070315 + U_idx_10 * 10.0) -
    7.8125001220703152E-10;
  if (X[60ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = X[60ULL] >=
      1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0 = X[61ULL] >=
      1.0 ? 1.0 : X[61ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 = (((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0) *
    296.802103844292 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0 *
    259.836612622973;
  if (X[456ULL] <= 216.59999999999997) {
    t937 = 216.59999999999997;
  } else {
    t937 = X[456ULL] >= 623.15 ? 623.15 : X[456ULL];
  }

  t897 = t937 * t937;
  t740 = (((1074.1165326382541 + t937 * -0.2214565261064077) + t897 *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0) +
          ((1479.6504774710445 + t937 * 1.200211433705052) + t897 *
           -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
    ((900.63941224837913 + t937 * -0.044484923911364271) + t897 *
     0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0;
  t888 = t740 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26;
  t937 = -pmf_sqrt(fabs(X[457ULL] * X[457ULL] * (t740 / (t888 == 0.0 ? 1.0E-16 :
    t888)) / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 ==
              0.0 ? 1.0E-16 :
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26) /
                        (X[456ULL] == 0.0 ? 1.0E-16 : X[456ULL]))) *
    0.0019634954084936209;
  t413_idx_0 = X[58ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26;
  t740 = X[59ULL] / (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[460ULL] <= 216.59999999999997) {
    t897 = 216.59999999999997;
  } else {
    t897 = X[460ULL] >= 623.15 ? 623.15 : X[460ULL];
  }

  t565 = t897 * t897;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = (((1074.1165326382541 +
    t897 * -0.2214565261064077) + t565 * 0.00037212980109010952) * ((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0) +
    ((1479.6504774710445 + t897 * 1.200211433705052) + t565 *
     -0.00038614513167842338) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
    ((900.63941224837913 + t897 * -0.044484923911364271) + t565 *
     0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0;
  t888 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 = -pmf_sqrt
    (fabs(X[461ULL] * X[461ULL] *
          (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W / (t888 == 0.0 ?
        1.0E-16 : t888)) /
          (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 ==
           0.0 ? 1.0E-16 :
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26) /
          (X[460ULL] == 0.0 ? 1.0E-16 : X[460ULL]))) * 0.0019634954084936209;
  t435[0ULL] = X[59ULL] * 100000.0;
  t435[1ULL] = X[58ULL];
  t435[2ULL] = X[463ULL];
  t435[3ULL] = X[60ULL];
  t435[4ULL] = X[458ULL];
  t435[5ULL] = X[462ULL];
  t435[6ULL] = X[61ULL];
  t435[7ULL] = X[459ULL];
  for (t474 = 0ULL; t474 < 8ULL; t474++) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_F[t474] = t435[t474];
  }

  t897 = -X[201ULL] / (t937 == 0.0 ? 1.0E-16 : t937);
  t937 = -X[444ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26);
  t353[0ULL] = X[58ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t38 = oe_efOut;
  tlu2_1d_linear_linear_value(&pe_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = pe_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 = t440_idx_0;
  if (1.0 - X[60ULL] >= 0.01) {
    t565 = 1.0 - X[60ULL];
  } else if (1.0 - X[60ULL] >= -0.1) {
    t565 = pmf_exp(((1.0 - X[60ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t565 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = X[61ULL] / (t565 == 0.0 ?
    1.0E-16 : t565) * -36.965491221318985 + 296.802103844292;
  tlu2_1d_linear_linear_value(&qe_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = qe_efOut[0];
  t565 = pmf_exp(pmf_log(X[59ULL] * 100000.0) - t440_idx_0);
  if (t565 >= 1.0) {
    t888 = (t565 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W / (t888 == 0.0 ?
      1.0E-16 : t888);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 = 1.0;
  }

  t413_idx_0 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 *
    0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = (X[60ULL] -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13) /
    (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0);
  if (X[60ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13
      <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = 0.0;
  } else if (X[60ULL] -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 *
             0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = X[60ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = (X[60ULL] -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = t740 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W * 0.0019634954084936209 /
    0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W *= 100000.0;
  tlu2_1d_linear_linear_value(&re_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = re_efOut[0];
  t565 = t440_idx_0;
  tlu2_1d_linear_linear_value(&se_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t440_idx_0 = se_efOut[0];
  t586 = (((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0) *
          t565 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26
          * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) +
    t440_idx_0 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 = U_idx_10 *
    10.0;
  if (X[453ULL] * 0.0019634954084936209 <= 1.9634954084936209E-11) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 =
      1.9634954084936209E-11;
  } else if (X[453ULL] * 0.0019634954084936209 >= 0.0012566370614359179) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 =
      0.0012566370614359179;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 = X[453ULL] *
      0.0019634954084936209;
  }

  if (X[472ULL] <= 0.0) {
    t413_idx_0 = 0.0;
  } else {
    t413_idx_0 = X[472ULL] >= 1.0 ? 1.0 : X[472ULL];
  }

  if (X[473ULL] <= 0.0) {
    t565 = 0.0;
  } else {
    t565 = X[473ULL] >= 1.0 ? 1.0 : X[473ULL];
  }

  t412_idx_0 = (((1.0 - t413_idx_0) - t565) * 296.802103844292 + t413_idx_0 *
                461.523) + t565 * 259.836612622973;
  if (X[470ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 = X[470ULL] >=
      623.15 ? 623.15 : X[470ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6;
  t565 = (((1074.1165326382541 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
            -0.2214565261064077) +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
           0.00037212980109010952) * ((1.0 - t413_idx_0) - t565) +
          ((1479.6504774710445 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
            1.200211433705052) +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
           -0.00038614513167842338) * t413_idx_0) + ((900.63941224837913 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra6 *
    -0.044484923911364271) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 *
    0.00036936011832043369) * t565;
  t888 = t565 - t412_idx_0;
  t413_idx_0 = pmf_sqrt(fabs(X[471ULL] * X[471ULL] * (t565 / (t888 == 0.0 ?
    1.0E-16 : t888)) / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0) / (X[470ULL] ==
    0.0 ? 1.0E-16 : X[470ULL]))) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 * 0.64;
  if (X[444ULL] >= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 = X[444ULL] /
      (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0) * 1.0E-5;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13 = -X[444ULL]
      / (t413_idx_0 == 0.0 ? 1.0E-16 : t413_idx_0) * 1.0E-5;
  }

  t413_idx_0 = ((((X[3ULL] * 0.1 - X[68ULL]) + X[69ULL] * -0.1) + X[72ULL] *
                 1.0E-9) - X[74ULL]) + X[4ULL];
  t353[0ULL] = X[62ULL];
  t330[0] = 23ULL;
  tlu2_linear_nearest_prelookup(&te_efOut.mField0[0ULL], &te_efOut.mField1[0ULL],
    &te_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t353[0ULL],
    &t330[0ULL], &t48[0ULL]);
  t43 = te_efOut;
  t353[0ULL] = X[477ULL];
  t333[0] = 29ULL;
  tlu2_linear_nearest_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t353[0ULL],
    &t333[0ULL], &t48[0ULL]);
  t42 = ue_efOut;
  tlu2_2d_linear_nearest_value(&ve_efOut[0ULL], &t43.mField0[0ULL],
    &t43.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField30, &t330[0ULL], &t333[0ULL], &t48[0ULL]);
  t440_idx_0 = ve_efOut[0];
  t888 = t694 - t698;
  t565 = (t888 / 2.0 * 1.0E-5 - -0.01) / 0.02;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t565 * t565 *
    3.0 - t565 * t565 * t565 * 2.0;
  if (t888 / 2.0 * 1.0E-5 <= -0.01) {
    t565 = t698 * 1.0E-5;
  } else if ((t694 - t698) / 2.0 * 1.0E-5 >= 0.01) {
    t565 = t694 * 1.0E-5;
  } else {
    t565 = ((1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) *
            t698 + t694 *
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35) *
      1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t702 - t706;
  t694 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / 2.0 *
          1.0E-5 - -0.01) / 0.02;
  t698 = t694 * t694 * 3.0 - t694 * t694 * t694 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / 2.0 *
      1.0E-5 <= -0.01) {
    t694 = t706 * 1.0E-5;
  } else if ((t702 - t706) / 2.0 * 1.0E-5 >= 0.01) {
    t694 = t702 * 1.0E-5;
  } else {
    t694 = ((1.0 - t698) * t706 + t702 * t698) * 1.0E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 =
    intrm_sf_mf_520 - t535;
  t698 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / 2.0 *
          1.0E-5 - -0.01) / 0.02;
  t702 = t698 * t698 * 3.0 - t698 * t698 * t698 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / 2.0 *
      1.0E-5 <= -0.01) {
    t698 = t535 * 1.0E-5;
  } else if ((intrm_sf_mf_520 - t535) / 2.0 * 1.0E-5 >= 0.01) {
    t698 = intrm_sf_mf_520 * 1.0E-5;
  } else {
    t698 = ((1.0 - t702) * t535 + intrm_sf_mf_520 * t702) * 1.0E-5;
  }

  t353[0] = 293.15;
  tlu2_linear_linear_prelookup(&we_efOut.mField0[0ULL], &we_efOut.mField1[0ULL],
    &we_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t353[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t42 = we_efOut;
  tlu2_1d_linear_linear_value(&xe_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t47[0ULL], &t48[0ULL]);
  t350[0] = xe_efOut[0];
  tlu2_1d_linear_linear_value(&ye_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t47[0ULL], &t48[0ULL]);
  t351[0] = ye_efOut[0];
  tlu2_1d_linear_linear_value(&af_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField19, &t47[0ULL], &t48[0ULL]);
  t56[0] = af_efOut[0];
  t702 = (((1.0 - intrm_sf_mf_234) - t942) * t350[0ULL] + t351[0ULL] *
          intrm_sf_mf_234) + t56[0ULL] * t942;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t937 - t897;
  t706 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / 2.0 *
          1.0E-5 - -0.01) / 0.02;
  intrm_sf_mf_234 = t706 * t706 * 3.0 - t706 * t706 * t706 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 / 2.0 *
      1.0E-5 <= -0.01) {
    t706 = t897 * 1.0E-5;
  } else if ((t937 - t897) / 2.0 * 1.0E-5 >= 0.01) {
    t706 = t937 * 1.0E-5;
  } else {
    t706 = ((1.0 - intrm_sf_mf_234) * t897 + t937 * intrm_sf_mf_234) * 1.0E-5;
  }

  t937 = intrm_sf_mf_26 - t592;
  intrm_sf_mf_234 = (t937 / 2.0 * 1.0E-5 - -0.01) / 0.02;
  intrm_sf_mf_520 = intrm_sf_mf_234 * intrm_sf_mf_234 * 3.0 - intrm_sf_mf_234 *
    intrm_sf_mf_234 * intrm_sf_mf_234 * 2.0;
  if (t937 / 2.0 * 1.0E-5 <= -0.01) {
    intrm_sf_mf_234 = t592 * 1.0E-5;
  } else if ((intrm_sf_mf_26 - t592) / 2.0 * 1.0E-5 >= 0.01) {
    intrm_sf_mf_234 = intrm_sf_mf_26 * 1.0E-5;
  } else {
    intrm_sf_mf_234 = ((1.0 - intrm_sf_mf_520) * t592 + intrm_sf_mf_26 *
                       intrm_sf_mf_520) * 1.0E-5;
  }

  t482[0ULL] = t42.mField0[0ULL];
  t482[1ULL] = t42.mField0[1ULL];
  t90[0ULL] = t42.mField2[0ULL];
  tlu2_1d_linear_linear_value(&bf_efOut[0ULL], &t482[0ULL], &t90[0ULL],
    ((_NeDynamicSystem*)(LC))->mField15, &t47[0ULL], &t48[0ULL]);
  t353[0] = bf_efOut[0];
  intrm_sf_mf_26 = (((1.0 - intrm_sf_mf_5) - t567) * t350[0ULL] + t351[0ULL] *
                    intrm_sf_mf_5) + t353[0ULL] * t567;
  intrm_sf_mf_5 = (X[66ULL] - 0.9) / 0.099999999999999978;
  t937 = intrm_sf_mf_850 - intrm_sf_mf_511;
  t567 = (t937 / 2.0 * 1.0E-5 - -0.01) / 0.02;
  t592 = t567 * t567 * 3.0 - t567 * t567 * t567 * 2.0;
  if (t937 / 2.0 * 1.0E-5 <= -0.01) {
    t567 = intrm_sf_mf_511 * 1.0E-5;
  } else if ((intrm_sf_mf_850 - intrm_sf_mf_511) / 2.0 * 1.0E-5 >= 0.01) {
    t567 = intrm_sf_mf_850 * 1.0E-5;
  } else {
    t567 = ((1.0 - t592) * intrm_sf_mf_511 + intrm_sf_mf_850 * t592) * 1.0E-5;
  }

  if (X[66ULL] <= 0.9) {
    intrm_sf_mf_5 = 0.0;
  } else {
    intrm_sf_mf_5 = X[66ULL] >= 1.0 ? 1.0 : intrm_sf_mf_5 * intrm_sf_mf_5 * 3.0
      - intrm_sf_mf_5 * intrm_sf_mf_5 * intrm_sf_mf_5 * 2.0;
  }

  t592 = X[228ULL] >= 0.0 ? X[228ULL] : -X[228ULL];
  t897 = t611 * 0.002;
  intrm_sf_mf_850 = t592 * 0.01 / (t897 == 0.0 ? 1.0E-16 : t897);
  intrm_sf_mf_511 = intrm_sf_mf_850 >= 1.0 ? intrm_sf_mf_850 : 1.0;
  t937 = pmf_log10(6.9 / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 : intrm_sf_mf_511) +
                   0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_511 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_511) + 0.00017169489553429715) * 3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t612 *
    4.0000000000000003E-7;
  intrm_sf_mf_520 = X[228ULL] * t611 * 67.455490037817 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35);
  t888 = t612 * 8.0E-8;
  t592 = X[228ULL] * t592 * (1.0 / (t937 == 0.0 ? 1.0E-16 : t937)) *
    1.0539920318408906 / (t888 == 0.0 ? 1.0E-16 : t888);
  intrm_sf_mf_511 = (intrm_sf_mf_850 - 2000.0) / 2000.0;
  t535 = intrm_sf_mf_511 * intrm_sf_mf_511 * 3.0 - intrm_sf_mf_511 *
    intrm_sf_mf_511 * intrm_sf_mf_511 * 2.0;
  if (intrm_sf_mf_850 <= 2000.0) {
    intrm_sf_mf_511 = intrm_sf_mf_520 * 1.0E-5;
  } else if (intrm_sf_mf_850 >= 4000.0) {
    intrm_sf_mf_511 = t592 * 1.0E-5;
  } else {
    intrm_sf_mf_511 = ((1.0 - t535) * intrm_sf_mf_520 + t592 * t535) * 1.0E-5;
  }

  t592 = X[220ULL] >= 0.0 ? X[220ULL] : -X[220ULL];
  intrm_sf_mf_850 = t592 * 0.01 / (t897 == 0.0 ? 1.0E-16 : t897);
  intrm_sf_mf_520 = intrm_sf_mf_850 >= 1.0 ? intrm_sf_mf_850 : 1.0;
  t937 = pmf_log10(6.9 / (intrm_sf_mf_520 == 0.0 ? 1.0E-16 : intrm_sf_mf_520) +
                   0.00017169489553429715) * pmf_log10(6.9 / (intrm_sf_mf_520 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_520) + 0.00017169489553429715) * 3.24;
  t611 = X[220ULL] * t611 * 67.455490037817 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35);
  t592 = X[220ULL] * t592 * (1.0 / (t937 == 0.0 ? 1.0E-16 : t937)) *
    1.0539920318408906 / (t888 == 0.0 ? 1.0E-16 : t888);
  intrm_sf_mf_520 = (intrm_sf_mf_850 - 2000.0) / 2000.0;
  t535 = intrm_sf_mf_520 * intrm_sf_mf_520 * 3.0 - intrm_sf_mf_520 *
    intrm_sf_mf_520 * intrm_sf_mf_520 * 2.0;
  if (intrm_sf_mf_850 <= 2000.0) {
    intrm_sf_mf_520 = t611 * 1.0E-5;
  } else if (intrm_sf_mf_850 >= 4000.0) {
    intrm_sf_mf_520 = t592 * 1.0E-5;
  } else {
    intrm_sf_mf_520 = ((1.0 - t535) * t611 + t592 * t535) * 1.0E-5;
  }

  t592 = t617 >= 0.0 ? t617 : -t617;
  t897 = intrm_sf_mf_9 * 0.00093750000000000007;
  intrm_sf_mf_850 = t592 * 0.0028301886792452828 / (t897 == 0.0 ? 1.0E-16 : t897);
  t611 = intrm_sf_mf_850 >= 1.0 ? intrm_sf_mf_850 : 1.0;
  t937 = pmf_log10(6.9 / (t611 == 0.0 ? 1.0E-16 : t611) + 0.00069701528436089772)
    * pmf_log10(6.9 / (t611 == 0.0 ? 1.0E-16 : t611) + 0.00069701528436089772) *
    3.24;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 = t620 *
    1.50186899252403E-8;
  t535 = t617 * intrm_sf_mf_9 * 112.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35);
  t888 = t620 * 4.97494103773585E-9;
  t592 = t617 * t592 * (1.0 / (t937 == 0.0 ? 1.0E-16 : t937)) * 1.75 / (t888 ==
    0.0 ? 1.0E-16 : t888);
  t611 = (intrm_sf_mf_850 - 2000.0) / 2000.0;
  t942 = t611 * t611 * 3.0 - t611 * t611 * t611 * 2.0;
  if (intrm_sf_mf_850 <= 2000.0) {
    t611 = t535 * 1.0E-5;
  } else if (intrm_sf_mf_850 >= 4000.0) {
    t611 = t592 * 1.0E-5;
  } else {
    t611 = ((1.0 - t942) * t535 + t592 * t942) * 1.0E-5;
  }

  if (-X[228ULL] >= 0.0) {
    t592 = -X[228ULL];
  } else {
    t592 = X[228ULL];
  }

  intrm_sf_mf_850 = t592 * 0.0028301886792452828 / (t897 == 0.0 ? 1.0E-16 : t897);
  t535 = intrm_sf_mf_850 >= 1.0 ? intrm_sf_mf_850 : 1.0;
  t937 = pmf_log10(6.9 / (t535 == 0.0 ? 1.0E-16 : t535) + 0.00069701528436089772)
    * pmf_log10(6.9 / (t535 == 0.0 ? 1.0E-16 : t535) + 0.00069701528436089772) *
    3.24;
  intrm_sf_mf_9 = X[228ULL] * intrm_sf_mf_9 * -112.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra35);
  t592 = X[228ULL] * t592 * (1.0 / (t937 == 0.0 ? 1.0E-16 : t937)) * -1.75 /
    (t888 == 0.0 ? 1.0E-16 : t888);
  t535 = (intrm_sf_mf_850 - 2000.0) / 2000.0;
  t942 = t535 * t535 * 3.0 - t535 * t535 * t535 * 2.0;
  if (intrm_sf_mf_850 <= 2000.0) {
    t535 = intrm_sf_mf_9 * 1.0E-5;
  } else if (intrm_sf_mf_850 >= 4000.0) {
    t535 = t592 * 1.0E-5;
  } else {
    t535 = ((1.0 - t942) * intrm_sf_mf_9 + t592 * t942) * 1.0E-5;
  }

  t942 = intrm_sf_mf_696 - t487;
  t592 = (t942 / 2.0 * 1.0E-5 - -0.01) / 0.02;
  intrm_sf_mf_850 = t592 * t592 * 3.0 - t592 * t592 * t592 * 2.0;
  if (t942 / 2.0 * 1.0E-5 <= -0.01) {
    t592 = t487 * 1.0E-5;
  } else if ((intrm_sf_mf_696 - t487) / 2.0 * 1.0E-5 >= 0.01) {
    t592 = intrm_sf_mf_696 * 1.0E-5;
  } else {
    t592 = ((1.0 - intrm_sf_mf_850) * t487 + intrm_sf_mf_696 * intrm_sf_mf_850) *
      1.0E-5;
  }

  t942 = t640 - t643;
  intrm_sf_mf_696 = (t942 / 2.0 * 1.0E-5 - -0.01) / 0.02;
  t487 = intrm_sf_mf_696 * intrm_sf_mf_696 * 3.0 - intrm_sf_mf_696 *
    intrm_sf_mf_696 * intrm_sf_mf_696 * 2.0;
  if (t942 / 2.0 * 1.0E-5 <= -0.01) {
    intrm_sf_mf_696 = t643 * 1.0E-5;
  } else if ((t640 - t643) / 2.0 * 1.0E-5 >= 0.01) {
    intrm_sf_mf_696 = t640 * 1.0E-5;
  } else {
    intrm_sf_mf_696 = ((1.0 - t487) * t643 + t640 * t487) * 1.0E-5;
  }

  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 /
      1.4810541339306735 <= 0.0) {
    t487 = 0.0;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 /
             1.4810541339306735 >= 1.0) {
    t487 = 1.0;
  } else {
    t487 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 /
      1.4810541339306735;
  }

  intrm_sf_mf_850 = (((1.0 - t650) - t651) * t350[0ULL] + t351[0ULL] * t650) +
    t56[0ULL] * t651;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 /
      1.2531035067089982 <= 0.0) {
    intrm_sf_mf_9 = 0.0;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 /
             1.2531035067089982 >= 1.0) {
    intrm_sf_mf_9 = 1.0;
  } else {
    intrm_sf_mf_9 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11 /
      1.2531035067089982;
  }

  t942 = piece227 - t691;
  t640 = (t942 / 2.0 * 1.0E-5 - -0.01) / 0.02;
  t643 = t640 * t640 * 3.0 - t640 * t640 * t640 * 2.0;
  if (t942 / 2.0 * 1.0E-5 <= -0.01) {
    t640 = t691 * 1.0E-5;
  } else if ((piece227 - t691) / 2.0 * 1.0E-5 >= 0.01) {
    t640 = piece227 * 1.0E-5;
  } else {
    t640 = ((1.0 - t643) * t691 + piece227 * t643) * 1.0E-5;
  }

  t651 = X[126ULL] * 0.00062831853071795862;
  t691 = X[437ULL] * 0.0031415926535897937;
  t349[0ULL] = X[0ULL] * 0.00027777777777777778;
  t349[1ULL] = X[64ULL];
  t349[2ULL] = X[1ULL];
  t349[3ULL] = X[65ULL];
  t349[4ULL] = t478;
  t349[5ULL] = X[66ULL];
  t349[6ULL] = X[64ULL] * X[64ULL] * (M[0ULL] != 0 ? 4.03416E-7 : X[67ULL]) *
    0.001 * 1000.0;
  t349[7ULL] = t480;
  t349[8ULL] = t480;
  t349[9ULL] = X[66ULL];
  t349[10ULL] = X[67ULL];
  t349[11ULL] = t480;
  t349[12ULL] = t481;
  t349[13ULL] = X[66ULL];
  t349[14ULL] = intrm_sf_mf_2;
  t349[15ULL] = intrm_sf_mf_5;
  t349[16ULL] = X[68ULL];
  t349[17ULL] = X[66ULL];
  t349[18ULL] = X[69ULL];
  t349[19ULL] = (X[70ULL] * intrm_sf_mf_2 + (1.0 - intrm_sf_mf_2) * t481 * t481)
    * 1000.0;
  t349[20ULL] = X[70ULL] * 1000.0;
  t349[21ULL] = X[2ULL];
  t349[22ULL] = X[69ULL];
  t349[23ULL] = U_idx_0;
  t349[24ULL] = U_idx_0;
  t349[25ULL] = X[66ULL];
  t349[26ULL] = X[66ULL];
  t349[27ULL] = U_idx_0;
  t349[28ULL] = X[66ULL];
  t349[29ULL] = -X[64ULL];
  t349[30ULL] = -X[64ULL];
  t349[31ULL] = X[66ULL];
  t349[32ULL] = X[66ULL];
  t349[33ULL] = -X[64ULL];
  t349[34ULL] = X[66ULL];
  t349[35ULL] = X[66ULL];
  t349[36ULL] = X[66ULL];
  t349[37ULL] = X[66ULL];
  t349[38ULL] = X[66ULL];
  t349[39ULL] = -X[68ULL];
  t349[40ULL] = -X[68ULL];
  t349[41ULL] = X[69ULL];
  t349[42ULL] = X[69ULL];
  t349[43ULL] = -X[68ULL];
  t349[44ULL] = X[69ULL];
  t349[45ULL] = X[69ULL];
  t349[46ULL] = X[69ULL];
  t349[47ULL] = X[69ULL];
  t349[48ULL] = X[69ULL];
  t349[49ULL] = -X[68ULL];
  t349[50ULL] = -X[68ULL];
  t349[51ULL] = X[69ULL];
  t349[52ULL] = t552;
  t349[53ULL] = X[69ULL];
  t349[54ULL] = X[69ULL];
  t349[55ULL] = X[3ULL];
  t349[56ULL] = t552 * t552 * 0.01;
  t349[57ULL] = X[71ULL];
  t349[58ULL] = U_idx_11;
  t349[59ULL] = Fuel_Cell_Boost_Converter_L_i;
  t349[60ULL] = Fuel_Cell_Boost_Converter_L_n_v;
  t349[61ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[62ULL] = X[72ULL];
  t349[63ULL] = X[4ULL];
  t349[64ULL] = X[72ULL] * X[72ULL] * 1.0000000000000002E-12;
  t349[65ULL] = Fuel_Cell_Boost_Converter_L_n_v;
  t349[66ULL] = X[74ULL];
  t349[67ULL] = X[4ULL];
  t349[68ULL] = Fuel_Cell_Boost_Converter_L_i;
  t349[69ULL] = Fuel_Cell_Boost_Converter_L_i;
  t349[70ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[71ULL] = X[69ULL];
  t349[72ULL] = Fuel_Cell_Boost_Converter_L_n_v * X[74ULL] +
    (Fuel_Cell_Boost_Converter_L_n_v - X[71ULL]) *
    (Fuel_Cell_Boost_Converter_L_i - X[74ULL]);
  t349[73ULL] = X[3ULL];
  t349[74ULL] = Fuel_Cell_Current_Sensor1_I;
  t349[75ULL] = Fuel_Cell_Current_Sensor1_I;
  t349[76ULL] = X[69ULL];
  t349[77ULL] = X[69ULL];
  t349[78ULL] = Fuel_Cell_Current_Sensor1_I;
  t349[79ULL] = X[75ULL];
  t349[80ULL] = X[76ULL] * 0.1;
  t349[81ULL] = X[77ULL];
  t349[82ULL] = X[78ULL];
  t349[83ULL] = X[79ULL];
  t349[84ULL] = X[80ULL] * 0.1;
  t349[85ULL] = X[81ULL];
  t349[86ULL] = X[82ULL];
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 87ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 95ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 103ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 111ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t469];
  }

  t349[119ULL] = X[18ULL];
  t349[120ULL] = X[75ULL];
  t349[121ULL] = X[76ULL] * 0.1;
  t349[122ULL] = X[77ULL];
  t349[123ULL] = X[78ULL];
  t349[124ULL] = X[79ULL];
  t349[125ULL] = X[80ULL] * 0.1;
  t349[126ULL] = X[81ULL];
  t349[127ULL] = X[82ULL];
  t349[128ULL] = X[103ULL];
  t349[129ULL] = X[104ULL];
  t349[130ULL] = X[18ULL];
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 131ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 139ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 147ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 155ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t469];
  }

  t349[163ULL] = X[73ULL];
  t349[164ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16
    * 0.0001;
  t349[165ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16
    * 0.20177105219743391 / 192970.66424 * 1000.0;
  t349[166ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra4 *
    1000.0;
  t349[167ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 *
    1000.0;
  t349[168ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra16
    * 0.3583866814737065 / 385941.32848 * 1000.0;
  t349[169ULL] = t558;
  t349[170ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra8 *
    100.0;
  t349[171ULL] = X[9ULL];
  t349[172ULL] = X[10ULL];
  t349[173ULL] = X[11ULL];
  t349[174ULL] = X[15ULL];
  t349[175ULL] = X[16ULL];
  t349[176ULL] = X[17ULL];
  t349[177ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra11;
  t349[178ULL] = t487;
  t349[179ULL] = intrm_sf_mf_9;
  t349[180ULL] = t559;
  t349[181ULL] = X[112ULL];
  t349[182ULL] = X[113ULL];
  t349[183ULL] = X[15ULL];
  t349[184ULL] = X[16ULL];
  t349[185ULL] = X[17ULL];
  t349[186ULL] = X[18ULL];
  t349[187ULL] = -X[112ULL];
  t349[188ULL] = X[114ULL];
  t349[189ULL] = X[115ULL];
  t349[190ULL] = X[9ULL];
  t349[191ULL] = X[10ULL];
  t349[192ULL] = X[11ULL];
  t349[193ULL] = X[18ULL];
  t349[194ULL] = -X[114ULL];
  t349[195ULL] = X[116ULL];
  t349[196ULL] = X[117ULL];
  t349[197ULL] = X[15ULL];
  t349[198ULL] = X[16ULL];
  t349[199ULL] = X[17ULL];
  t349[200ULL] = X[18ULL];
  t349[201ULL] = -X[116ULL];
  t349[202ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48
    * 0.001;
  t349[203ULL] = X[120ULL];
  t349[204ULL] = X[118ULL];
  t349[205ULL] = X[9ULL];
  t349[206ULL] = X[10ULL];
  t349[207ULL] = X[11ULL];
  t349[208ULL] = X[18ULL];
  t349[209ULL] = -X[120ULL];
  t349[210ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42;
  t349[211ULL] = X[119ULL];
  t349[212ULL] = X[15ULL];
  t349[213ULL] = X[16ULL];
  t349[214ULL] = X[17ULL];
  t349[215ULL] = X[18ULL];
  t349[216ULL] =
    -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42;
  t349[217ULL] =
    ((Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra5 *
      241812.2160511087 / 0.0020158806832745466 * 0.001 + (((X[115ULL] - X
         [114ULL] * -3931.85243448965) + (X[117ULL] - X[116ULL] *
         -271.011680699068)) + (X[113ULL] - X[112ULL] * -2546.6190535198302))) +
     (X[118ULL] + X[119ULL])) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra48 * 0.001;
  t349[218ULL] = t559;
  t349[219ULL] = X[9ULL];
  t349[220ULL] = X[10ULL];
  t349[221ULL] = X[11ULL];
  t349[222ULL] = X[15ULL];
  t349[223ULL] = X[16ULL];
  t349[224ULL] = X[17ULL];
  t349[225ULL] = t559;
  t349[226ULL] = X[18ULL];
  t349[227ULL] = X[18ULL];
  t349[228ULL] = X[18ULL];
  t349[229ULL] = X[18ULL];
  t349[230ULL] = t558 * -1000.0;
  t349[231ULL] = t558 * -1000.0;
  t349[232ULL] = -t558;
  t349[233ULL] = X[18ULL];
  t349[234ULL] = X[18ULL];
  t349[235ULL] = X[105ULL] * 1000.0;
  t349[236ULL] = X[18ULL] - 273.15;
  t349[237ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34;
  t349[238ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[239ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[240ULL] = X[5ULL];
  t349[241ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34
    * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra34 * 1.0E-9;
  t349[242ULL] = Fuel_Cell_Boost_Converter_L_i;
  t349[243ULL] = Fuel_Cell_Boost_Converter_L_i;
  t349[244ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[245ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[246ULL] = Fuel_Cell_Boost_Converter_L_i;
  t349[247ULL] = -X[73ULL];
  t349[248ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[249ULL] = t45;
  t349[250ULL] = X[111ULL];
  t349[251ULL] = -(X[73ULL] * X[111ULL]);
  t349[252ULL] = -X[73ULL];
  t349[253ULL] = t45;
  t349[254ULL] = t559;
  t349[255ULL] = X[73ULL] * -0.001;
  t349[256ULL] = X[73ULL] * X[73ULL] * 0.001;
  t349[257ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[258ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[259ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[260ULL] = t559;
  t349[261ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[262ULL] = X[122ULL];
  t349[263ULL] = X[123ULL] * 0.1;
  t349[264ULL] = X[124ULL];
  t349[265ULL] = X[125ULL];
  t349[266ULL] = X[126ULL];
  t349[267ULL] = -184.19157727996955 + t651 * 1000.0;
  t349[268ULL] = (X[126ULL] * 0.00062831853071795862 - 0.18419157727996954) *
    1591.5494309189535;
  t349[269ULL] = X[127ULL];
  t349[270ULL] = X[128ULL];
  t349[271ULL] = X[129ULL];
  t349[272ULL] = X[130ULL];
  t349[273ULL] = X[131ULL];
  t349[274ULL] = X[139ULL];
  t349[275ULL] = X[138ULL];
  t349[276ULL] = X[127ULL];
  t349[277ULL] = X[128ULL];
  t349[278ULL] = X[129ULL];
  t349[279ULL] = X[131ULL];
  t349[280ULL] = X[132ULL];
  t349[281ULL] = X[133ULL];
  t349[282ULL] = X[134ULL];
  t349[283ULL] = X[135ULL];
  t349[284ULL] = X[136ULL];
  t349[285ULL] = X[137ULL];
  t349[286ULL] = intrm_sf_mf_26;
  t349[287ULL] = X[133ULL];
  t349[288ULL] = X[134ULL];
  t349[289ULL] = X[135ULL];
  t349[290ULL] = t568;
  t349[291ULL] = (1.0 - X[138ULL]) - X[139ULL];
  t349[292ULL] = X[140ULL];
  t349[293ULL] = -184.19157727996955 + t651 * 1000.0;
  t349[294ULL] = U_idx_1;
  t349[295ULL] = U_idx_1 * 3.1415926535897929E-6;
  t349[296ULL] = X[122ULL];
  t349[297ULL] = X[123ULL] * 0.1;
  t349[298ULL] = X[124ULL];
  t349[299ULL] = X[125ULL];
  t349[300ULL] = X[141ULL];
  t349[301ULL] = X[142ULL] * 0.1;
  t349[302ULL] = X[143ULL];
  t349[303ULL] = X[144ULL];
  t349[304ULL] = X[22ULL];
  t349[305ULL] = X[149ULL];
  t349[306ULL] = X[21ULL];
  t349[307ULL] = X[146ULL];
  t349[308ULL] = X[19ULL] - 273.15;
  t349[309ULL] = t573;
  t349[310ULL] = X[147ULL] * 0.1;
  t349[311ULL] = X[20ULL] * 0.1;
  t349[312ULL] = X[148ULL];
  t349[313ULL] = t579 * 100000.0;
  t349[314ULL] = X[150ULL];
  t349[315ULL] = -X[133ULL];
  t349[316ULL] = X[151ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 317ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F[t469];
  }

  t349[325ULL] = X[126ULL];
  t349[326ULL] = X[152ULL];
  t349[327ULL] = t592;
  t349[328ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  t349[329ULL] = -X[131ULL];
  t349[330ULL] = 0.18419157727996954 - t651;
  t349[331ULL] = X[153ULL];
  t349[332ULL] = X[19ULL];
  t349[333ULL] = X[22ULL];
  t349[334ULL] = X[21ULL];
  t349[335ULL] = t490;
  t349[336ULL] = X[122ULL];
  t349[337ULL] = X[123ULL] * 0.1;
  t349[338ULL] = X[124ULL];
  t349[339ULL] = X[125ULL];
  t349[340ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  t349[341ULL] = X[156ULL];
  t349[342ULL] = t573;
  t349[343ULL] = t583;
  t349[344ULL] = t584;
  t349[345ULL] = X[161ULL];
  t349[346ULL] = X[162ULL];
  t349[347ULL] = X[141ULL];
  t349[348ULL] = X[142ULL] * 0.1;
  t349[349ULL] = X[143ULL];
  t349[350ULL] = X[144ULL];
  t349[351ULL] = -X[131ULL];
  t349[352ULL] = X[163ULL];
  t349[353ULL] = -X[133ULL];
  t349[354ULL] = -X[134ULL];
  t349[355ULL] = -X[135ULL];
  t349[356ULL] = X[164ULL];
  t349[357ULL] = X[165ULL];
  t349[358ULL] = t587;
  t349[359ULL] = t583;
  t349[360ULL] = -X[134ULL];
  t349[361ULL] = t584;
  t349[362ULL] = -X[135ULL];
  t349[363ULL] = (1.0 - X[21ULL]) - X[22ULL];
  t349[364ULL] = X[141ULL];
  t349[365ULL] = X[142ULL] * 0.1;
  t349[366ULL] = X[143ULL];
  t349[367ULL] = X[144ULL];
  t349[368ULL] = t575 * 0.0001;
  t349[369ULL] = X[127ULL];
  t349[370ULL] = X[128ULL];
  t349[371ULL] = X[129ULL];
  t349[372ULL] = X[133ULL];
  t349[373ULL] = X[141ULL];
  t349[374ULL] = X[142ULL] * 0.1;
  t349[375ULL] = X[143ULL];
  t349[376ULL] = X[144ULL];
  t349[377ULL] = X[131ULL];
  t349[378ULL] = X[172ULL];
  t349[379ULL] = X[133ULL];
  t349[380ULL] = X[134ULL];
  t349[381ULL] = X[135ULL];
  t349[382ULL] = X[169ULL];
  t349[383ULL] = X[168ULL];
  t349[384ULL] = X[166ULL];
  t349[385ULL] = X[167ULL] * 0.1;
  t349[386ULL] = X[170ULL];
  t349[387ULL] = X[171ULL];
  t349[388ULL] = t581;
  t349[389ULL] = X[131ULL];
  t349[390ULL] = -X[131ULL];
  t349[391ULL] = X[127ULL];
  t349[392ULL] = X[128ULL];
  t349[393ULL] = X[129ULL];
  t349[394ULL] = -X[131ULL];
  t349[395ULL] = X[172ULL];
  t349[396ULL] = -X[133ULL];
  t349[397ULL] = -X[134ULL];
  t349[398ULL] = -X[135ULL];
  t349[399ULL] = X[169ULL];
  t349[400ULL] = X[168ULL];
  t349[401ULL] = -X[133ULL];
  t349[402ULL] = X[134ULL];
  t349[403ULL] = -X[134ULL];
  t349[404ULL] = X[135ULL];
  t349[405ULL] = -X[135ULL];
  t349[406ULL] = U_idx_1;
  t349[407ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[408ULL] = X[79ULL];
  t349[409ULL] = X[80ULL] * 0.1;
  t349[410ULL] = X[81ULL];
  t349[411ULL] = X[82ULL];
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 412ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 420ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t469];
  }

  t349[428ULL] = X[18ULL];
  t349[429ULL] = X[173ULL];
  t349[430ULL] = X[174ULL] * 0.1;
  t349[431ULL] = X[175ULL];
  t349[432ULL] = X[176ULL];
  t349[433ULL] = X[79ULL];
  t349[434ULL] = X[80ULL] * 0.1;
  t349[435ULL] = X[81ULL];
  t349[436ULL] = X[82ULL];
  t349[437ULL] = X[13ULL];
  t349[438ULL] = X[93ULL];
  t349[439ULL] = X[14ULL];
  t349[440ULL] = X[178ULL];
  t349[441ULL] = X[12ULL] - 273.15;
  t349[442ULL] = X[177ULL];
  t349[443ULL] = X[179ULL] * 0.1;
  t349[444ULL] = X[23ULL] * 0.1;
  t349[445ULL] = X[94ULL];
  t349[446ULL] = t590 * 100000.0;
  t349[447ULL] = X[181ULL];
  t349[448ULL] = X[180ULL];
  t349[449ULL] = X[182ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 450ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t469];
  }

  t349[458ULL] = X[18ULL];
  t349[459ULL] = X[97ULL];
  t349[460ULL] = intrm_sf_mf_234;
  t349[461ULL] = X[183ULL];
  t349[462ULL] = X[184ULL];
  t349[463ULL] = X[106ULL];
  t349[464ULL] = X[96ULL];
  t349[465ULL] = X[12ULL];
  t349[466ULL] = X[13ULL];
  t349[467ULL] = X[14ULL];
  t349[468ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_mdot_w_conde;
  t349[469ULL] = X[173ULL];
  t349[470ULL] = X[174ULL] * 0.1;
  t349[471ULL] = X[175ULL];
  t349[472ULL] = X[176ULL];
  t349[473ULL] = X[183ULL];
  t349[474ULL] = X[185ULL];
  t349[475ULL] = X[177ULL];
  t349[476ULL] = X[186ULL];
  t349[477ULL] = X[187ULL];
  t349[478ULL] = X[188ULL];
  t349[479ULL] = X[189ULL];
  t349[480ULL] = X[79ULL];
  t349[481ULL] = X[80ULL] * 0.1;
  t349[482ULL] = X[81ULL];
  t349[483ULL] = X[82ULL];
  t349[484ULL] = X[184ULL];
  t349[485ULL] = X[190ULL];
  t349[486ULL] = X[180ULL];
  t349[487ULL] = X[191ULL];
  t349[488ULL] = X[192ULL];
  t349[489ULL] = X[193ULL];
  t349[490ULL] = X[194ULL];
  t349[491ULL] = t597;
  t349[492ULL] = X[186ULL];
  t349[493ULL] = X[191ULL];
  t349[494ULL] = X[187ULL];
  t349[495ULL] = X[192ULL];
  t349[496ULL] = (1.0 - X[14ULL]) - X[13ULL];
  t349[497ULL] = X[79ULL];
  t349[498ULL] = X[80ULL] * 0.1;
  t349[499ULL] = X[81ULL];
  t349[500ULL] = X[82ULL];
  t349[501ULL] = X[195ULL];
  t349[502ULL] = X[196ULL] * 0.1;
  t349[503ULL] = X[197ULL];
  t349[504ULL] = X[198ULL];
  t349[505ULL] = X[16ULL];
  t349[506ULL] = X[98ULL];
  t349[507ULL] = X[17ULL];
  t349[508ULL] = X[199ULL];
  t349[509ULL] = X[15ULL] - 273.15;
  t349[510ULL] = -X[180ULL];
  t349[511ULL] = X[200ULL] * 0.1;
  t349[512ULL] = X[24ULL] * 0.1;
  t349[513ULL] = X[99ULL];
  t349[514ULL] = t598 * 100000.0;
  t349[515ULL] = X[202ULL];
  t349[516ULL] = X[201ULL];
  t349[517ULL] = X[203ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 518ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t469];
  }

  t349[526ULL] = X[18ULL];
  t349[527ULL] = X[102ULL];
  t349[528ULL] = t567;
  t349[529ULL] = -X[184ULL];
  t349[530ULL] = X[204ULL];
  t349[531ULL] = (-X[113ULL] - X[117ULL]) - X[119ULL];
  t349[532ULL] = X[107ULL];
  t349[533ULL] = X[101ULL];
  t349[534ULL] = X[15ULL];
  t349[535ULL] = X[16ULL];
  t349[536ULL] = X[17ULL];
  t349[537ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_W;
  t349[538ULL] = X[79ULL];
  t349[539ULL] = X[80ULL] * 0.1;
  t349[540ULL] = X[81ULL];
  t349[541ULL] = X[82ULL];
  t349[542ULL] = -X[184ULL];
  t349[543ULL] = X[205ULL];
  t349[544ULL] = -X[180ULL];
  t349[545ULL] = -X[191ULL];
  t349[546ULL] = -X[192ULL];
  t349[547ULL] = X[206ULL];
  t349[548ULL] = X[207ULL];
  t349[549ULL] = X[195ULL];
  t349[550ULL] = X[196ULL] * 0.1;
  t349[551ULL] = X[197ULL];
  t349[552ULL] = X[198ULL];
  t349[553ULL] = X[204ULL];
  t349[554ULL] = X[208ULL];
  t349[555ULL] = X[201ULL];
  t349[556ULL] = X[209ULL];
  t349[557ULL] = X[210ULL];
  t349[558ULL] = X[211ULL];
  t349[559ULL] = X[212ULL];
  t349[560ULL] = t606;
  t349[561ULL] = -X[191ULL];
  t349[562ULL] = X[209ULL];
  t349[563ULL] = X[116ULL];
  t349[564ULL] = X[121ULL];
  t349[565ULL] = -X[192ULL];
  t349[566ULL] = X[210ULL];
  t349[567ULL] = (1.0 - X[17ULL]) - X[16ULL];
  t349[568ULL] = X[15ULL];
  t349[569ULL] = X[16ULL];
  t349[570ULL] = X[17ULL];
  t349[571ULL] = X[173ULL];
  t349[572ULL] = X[174ULL] * 0.1;
  t349[573ULL] = X[175ULL];
  t349[574ULL] = X[176ULL];
  t349[575ULL] = X[195ULL];
  t349[576ULL] = X[196ULL] * 0.1;
  t349[577ULL] = X[197ULL];
  t349[578ULL] = X[198ULL];
  t349[579ULL] = X[31ULL];
  t349[580ULL] = intrm_sf_mf_340 * 1000.0;
  t349[581ULL] = intrm_sf_mf_340 * 0.35777375282305851;
  t349[582ULL] = X[215ULL];
  t349[583ULL] = X[215ULL];
  t349[584ULL] = X[25ULL];
  t349[585ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0;
  t349[586ULL] = X[218ULL];
  t349[587ULL] = X[25ULL];
  t349[588ULL] = X[215ULL];
  t349[589ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan0;
  t349[590ULL] = X[219ULL];
  t349[591ULL] = t604;
  t349[592ULL] = X[221ULL];
  t349[593ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15;
  t349[594ULL] = t608;
  t349[595ULL] = t609;
  t349[596ULL] = X[26ULL];
  t349[597ULL] = X[26ULL] * 0.1 + 0.0001;
  t349[598ULL] = X[218ULL];
  t349[599ULL] = t604;
  t349[600ULL] = X[25ULL];
  t349[601ULL] = X[25ULL];
  t349[602ULL] = X[215ULL];
  t349[603ULL] = X[218ULL];
  t349[604ULL] = X[218ULL];
  t349[605ULL] = intrm_sf_mf_340 * 1000.0;
  t349[606ULL] = X[222ULL];
  t349[607ULL] = X[223ULL] * 0.1;
  t349[608ULL] = X[224ULL];
  t349[609ULL] = X[225ULL] * 0.1;
  t349[610ULL] = X[226ULL];
  t349[611ULL] = -X[226ULL];
  t349[612ULL] = X[222ULL];
  t349[613ULL] = X[223ULL] * 0.1;
  t349[614ULL] = X[226ULL];
  t349[615ULL] = X[227ULL];
  t349[616ULL] = X[228ULL];
  t349[617ULL] = X[229ULL];
  t349[618ULL] = X[224ULL];
  t349[619ULL] = X[225ULL] * 0.1;
  t349[620ULL] = -X[226ULL];
  t349[621ULL] = X[230ULL];
  t349[622ULL] = -X[228ULL];
  t349[623ULL] = X[229ULL];
  t349[624ULL] = X[228ULL];
  t349[625ULL] = -X[228ULL];
  t349[626ULL] = X[224ULL];
  t349[627ULL] = X[225ULL] * 0.1;
  t349[628ULL] = X[215ULL];
  t349[629ULL] = X[18ULL];
  t349[630ULL] = X[226ULL];
  t349[631ULL] = X[216ULL];
  t349[632ULL] = X[27ULL] * 0.1;
  t349[633ULL] = X[28ULL];
  t349[634ULL] = X[228ULL];
  t349[635ULL] = X[220ULL];
  t349[636ULL] = X[108ULL];
  t349[637ULL] = X[224ULL];
  t349[638ULL] = X[225ULL] * 0.1;
  t349[639ULL] = X[226ULL];
  t349[640ULL] = X[231ULL];
  t349[641ULL] = X[228ULL];
  t349[642ULL] = X[232ULL];
  t349[643ULL] = X[215ULL];
  t349[644ULL] = X[216ULL];
  t349[645ULL] = X[233ULL];
  t349[646ULL] = X[220ULL];
  t349[647ULL] = X[234ULL];
  t349[648ULL] = t612;
  t349[649ULL] = t613;
  t349[650ULL] = t614;
  t349[651ULL] = intrm_sf_mf_511;
  t349[652ULL] = intrm_sf_mf_520;
  t349[653ULL] = X[18ULL];
  t349[654ULL] = U_idx_3;
  t349[655ULL] = t616;
  t349[656ULL] = X[215ULL];
  t349[657ULL] = X[235ULL];
  t349[658ULL] = X[236ULL] * 0.1;
  t349[659ULL] = t616;
  t349[660ULL] = X[217ULL];
  t349[661ULL] = X[237ULL];
  t349[662ULL] = X[215ULL];
  t349[663ULL] = X[217ULL];
  t349[664ULL] = X[238ULL];
  t349[665ULL] = t617;
  t349[666ULL] = X[239ULL];
  t349[667ULL] = X[235ULL];
  t349[668ULL] = X[236ULL] * 0.1;
  t349[669ULL] = X[237ULL];
  t349[670ULL] = X[240ULL];
  t349[671ULL] = -t617;
  t349[672ULL] = X[239ULL];
  t349[673ULL] = t617;
  t349[674ULL] = -t617;
  t349[675ULL] = t619;
  t349[676ULL] = X[235ULL];
  t349[677ULL] = X[236ULL] * 0.1;
  t349[678ULL] = X[222ULL];
  t349[679ULL] = X[223ULL] * 0.1;
  t349[680ULL] = X[31ULL];
  t349[681ULL] = -X[237ULL];
  t349[682ULL] = -X[226ULL];
  t349[683ULL] = X[29ULL] * 0.1;
  t349[684ULL] = X[30ULL];
  t349[685ULL] = t617;
  t349[686ULL] = -X[228ULL];
  t349[687ULL] = X[213ULL];
  t349[688ULL] = X[235ULL];
  t349[689ULL] = X[236ULL] * 0.1;
  t349[690ULL] = -X[237ULL];
  t349[691ULL] = X[241ULL];
  t349[692ULL] = t617;
  t349[693ULL] = X[242ULL];
  t349[694ULL] = X[222ULL];
  t349[695ULL] = X[223ULL] * 0.1;
  t349[696ULL] = -X[226ULL];
  t349[697ULL] = X[243ULL];
  t349[698ULL] = -X[228ULL];
  t349[699ULL] = X[244ULL];
  t349[700ULL] = t620;
  t349[701ULL] = t621;
  t349[702ULL] = t622;
  t349[703ULL] = t611;
  t349[704ULL] = t535;
  t349[705ULL] = X[235ULL];
  t349[706ULL] = X[236ULL] * 0.1;
  t349[707ULL] = X[215ULL];
  t349[708ULL] = X[235ULL];
  t349[709ULL] = X[236ULL] * 0.1;
  t349[710ULL] = t623 * 1000.0;
  t349[711ULL] = t623 * 1111.1111111111111;
  t349[712ULL] = t623 * 1111.1111111111111;
  t349[713ULL] = (1.01325 - X[236ULL]) * 99999.999999999985;
  t349[714ULL] = X[245ULL] * 1.0E-6;
  t349[715ULL] = t623 * 1000.0;
  t349[716ULL] = X[215ULL];
  t349[717ULL] = X[235ULL];
  t349[718ULL] = X[236ULL] * 0.1;
  t349[719ULL] = (1.01325 - X[236ULL]) * 99999.999999999985;
  t349[720ULL] = X[215ULL] - X[235ULL];
  t349[721ULL] = X[235ULL];
  t349[722ULL] = X[236ULL] * 0.1;
  t349[723ULL] = X[235ULL];
  t349[724ULL] = X[236ULL] * 0.1;
  t349[725ULL] = -X[237ULL];
  t349[726ULL] = X[245ULL] * 1.0E-6;
  t349[727ULL] = t617;
  t349[728ULL] = U_idx_3;
  t349[729ULL] = X[18ULL];
  t349[730ULL] = X[18ULL];
  t349[731ULL] = X[18ULL] - 273.15;
  t349[732ULL] = X[31ULL];
  t349[733ULL] = X[31ULL];
  t349[734ULL] = X[214ULL] * 1000.0;
  t349[735ULL] = X[31ULL] - 273.15;
  t349[736ULL] = X[246ULL];
  t349[737ULL] = X[33ULL] * 0.1;
  t349[738ULL] = X[247ULL];
  t349[739ULL] = X[248ULL];
  t349[740ULL] = X[249ULL];
  t349[741ULL] = X[33ULL] * 0.1;
  t349[742ULL] = X[250ULL];
  t349[743ULL] = X[251ULL];
  t349[744ULL] = X[246ULL];
  t349[745ULL] = X[33ULL] * 0.1;
  t349[746ULL] = X[247ULL];
  t349[747ULL] = X[248ULL];
  t349[748ULL] = X[252ULL];
  t349[749ULL] = X[33ULL] * 0.1;
  t349[750ULL] = X[253ULL];
  t349[751ULL] = X[254ULL];
  t349[752ULL] = X[249ULL];
  t349[753ULL] = X[33ULL] * 0.1;
  t349[754ULL] = X[250ULL];
  t349[755ULL] = X[251ULL];
  t349[756ULL] = X[32ULL];
  t349[757ULL] = X[33ULL] * 0.1;
  t349[758ULL] = X[34ULL];
  t349[759ULL] = X[35ULL];
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 760ULL] = t352[t469];
  }

  t349[768ULL] = X[32ULL];
  t349[769ULL] = X[255ULL];
  t349[770ULL] = X[259ULL];
  t349[771ULL] = X[260ULL];
  t349[772ULL] = X[261ULL];
  t349[773ULL] = X[32ULL] - 273.15;
  t349[774ULL] = X[34ULL];
  t349[775ULL] = X[257ULL];
  t349[776ULL] = X[35ULL];
  t349[777ULL] = X[33ULL] * 0.1;
  t349[778ULL] = t629;
  t349[779ULL] = X[256ULL];
  t349[780ULL] = X[32ULL];
  t349[781ULL] = X[34ULL];
  t349[782ULL] = X[35ULL];
  t349[783ULL] = t630;
  t349[784ULL] = X[246ULL];
  t349[785ULL] = X[33ULL] * 0.1;
  t349[786ULL] = X[247ULL];
  t349[787ULL] = X[248ULL];
  t349[788ULL] = X[259ULL];
  t349[789ULL] = X[262ULL];
  t349[790ULL] = X[263ULL];
  t349[791ULL] = X[264ULL];
  t349[792ULL] = X[265ULL];
  t349[793ULL] = X[266ULL];
  t349[794ULL] = X[267ULL];
  t349[795ULL] = X[252ULL];
  t349[796ULL] = X[33ULL] * 0.1;
  t349[797ULL] = X[253ULL];
  t349[798ULL] = X[254ULL];
  t349[799ULL] = X[260ULL];
  t349[800ULL] = X[268ULL];
  t349[801ULL] = t631;
  t349[802ULL] = X[157ULL];
  t349[803ULL] = X[159ULL];
  t349[804ULL] = X[269ULL];
  t349[805ULL] = X[270ULL];
  t349[806ULL] = X[249ULL];
  t349[807ULL] = X[33ULL] * 0.1;
  t349[808ULL] = X[250ULL];
  t349[809ULL] = X[251ULL];
  t349[810ULL] = X[261ULL];
  t349[811ULL] = X[271ULL];
  t349[812ULL] = X[272ULL];
  t349[813ULL] = X[273ULL];
  t349[814ULL] = X[274ULL];
  t349[815ULL] = X[275ULL];
  t349[816ULL] = X[276ULL];
  t349[817ULL] = t634;
  t349[818ULL] = X[263ULL];
  t349[819ULL] = t631;
  t349[820ULL] = X[272ULL];
  t349[821ULL] = X[264ULL];
  t349[822ULL] = X[157ULL];
  t349[823ULL] = X[273ULL];
  t349[824ULL] = X[265ULL];
  t349[825ULL] = X[159ULL];
  t349[826ULL] = X[274ULL];
  t349[827ULL] = (1.0 - X[35ULL]) - X[34ULL];
  t349[828ULL] = X[258ULL];
  t349[829ULL] = X[122ULL];
  t349[830ULL] = X[123ULL] * 0.1;
  t349[831ULL] = X[124ULL];
  t349[832ULL] = X[125ULL];
  t349[833ULL] = X[252ULL];
  t349[834ULL] = X[33ULL] * 0.1;
  t349[835ULL] = X[253ULL];
  t349[836ULL] = X[254ULL];
  t349[837ULL] = X[277ULL];
  t349[838ULL] = X[280ULL];
  t349[839ULL] = X[122ULL];
  t349[840ULL] = X[123ULL] * 0.1;
  t349[841ULL] = X[124ULL];
  t349[842ULL] = X[125ULL];
  t349[843ULL] = X[154ULL];
  t349[844ULL] = X[281ULL];
  t349[845ULL] = t631;
  t349[846ULL] = X[157ULL];
  t349[847ULL] = X[159ULL];
  t349[848ULL] = X[282ULL];
  t349[849ULL] = X[283ULL];
  t349[850ULL] = t631;
  t349[851ULL] = X[278ULL];
  t349[852ULL] = X[279ULL];
  t349[853ULL] = X[252ULL];
  t349[854ULL] = X[33ULL] * 0.1;
  t349[855ULL] = X[253ULL];
  t349[856ULL] = X[254ULL];
  t349[857ULL] = -X[260ULL];
  t349[858ULL] = X[281ULL];
  t349[859ULL] = -t631;
  t349[860ULL] = -X[157ULL];
  t349[861ULL] = -X[159ULL];
  t349[862ULL] = X[282ULL];
  t349[863ULL] = X[283ULL];
  t349[864ULL] = -t631;
  t349[865ULL] = t631;
  t349[866ULL] = X[154ULL];
  t349[867ULL] = -X[260ULL];
  t349[868ULL] = X[157ULL];
  t349[869ULL] = -X[157ULL];
  t349[870ULL] = X[159ULL];
  t349[871ULL] = -X[159ULL];
  t349[872ULL] = t628;
  t349[873ULL] = U_idx_2;
  t349[874ULL] = U_idx_2 * 0.01;
  t349[875ULL] = X[32ULL];
  t349[876ULL] = X[32ULL];
  t349[877ULL] = X[122ULL];
  t349[878ULL] = X[123ULL] * 0.1;
  t349[879ULL] = X[124ULL];
  t349[880ULL] = X[125ULL];
  t349[881ULL] = U_idx_2;
  t349[882ULL] = X[246ULL];
  t349[883ULL] = X[33ULL] * 0.1;
  t349[884ULL] = X[247ULL];
  t349[885ULL] = X[248ULL];
  t349[886ULL] = X[284ULL];
  t349[887ULL] = X[37ULL] * 0.1;
  t349[888ULL] = X[285ULL];
  t349[889ULL] = X[286ULL];
  t349[890ULL] = X[36ULL];
  t349[891ULL] = X[37ULL] * 0.1;
  t349[892ULL] = X[38ULL];
  t349[893ULL] = X[39ULL];
  t349[894ULL] = X[36ULL];
  t349[895ULL] = X[37ULL] * 0.1;
  t349[896ULL] = X[38ULL];
  t349[897ULL] = X[39ULL];
  t349[898ULL] = X[36ULL];
  t349[899ULL] = X[37ULL] * 0.1;
  t349[900ULL] = X[38ULL];
  t349[901ULL] = X[39ULL];
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 902ULL] = t375[t469];
  }

  t349[910ULL] = X[36ULL];
  t349[911ULL] = X[287ULL];
  t349[912ULL] = X[291ULL];
  t349[913ULL] = X[36ULL] - 273.15;
  t349[914ULL] = X[38ULL];
  t349[915ULL] = X[289ULL];
  t349[916ULL] = X[39ULL];
  t349[917ULL] = X[37ULL] * 0.1;
  t349[918ULL] = t637;
  t349[919ULL] = X[288ULL];
  t349[920ULL] = X[36ULL];
  t349[921ULL] = X[38ULL];
  t349[922ULL] = X[39ULL];
  t349[923ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_mdot_w_cond;
  t349[924ULL] = X[284ULL];
  t349[925ULL] = X[37ULL] * 0.1;
  t349[926ULL] = X[285ULL];
  t349[927ULL] = X[286ULL];
  t349[928ULL] = X[291ULL];
  t349[929ULL] = X[292ULL];
  t349[930ULL] = X[293ULL];
  t349[931ULL] = X[294ULL];
  t349[932ULL] = X[295ULL];
  t349[933ULL] = X[296ULL];
  t349[934ULL] = X[297ULL];
  t349[935ULL] = t641;
  t349[936ULL] = X[293ULL];
  t349[937ULL] = X[294ULL];
  t349[938ULL] = X[295ULL];
  t349[939ULL] = (1.0 - X[39ULL]) - X[38ULL];
  t349[940ULL] = X[290ULL];
  t349[941ULL] = X[246ULL];
  t349[942ULL] = X[33ULL] * 0.1;
  t349[943ULL] = X[247ULL];
  t349[944ULL] = X[248ULL];
  t349[945ULL] = X[284ULL];
  t349[946ULL] = X[37ULL] * 0.1;
  t349[947ULL] = X[285ULL];
  t349[948ULL] = X[286ULL];
  t349[949ULL] = X[284ULL];
  t349[950ULL] = X[37ULL] * 0.1;
  t349[951ULL] = X[285ULL];
  t349[952ULL] = X[286ULL];
  t349[953ULL] = -X[293ULL];
  t349[954ULL] = -X[294ULL];
  t349[955ULL] = -X[295ULL];
  t349[956ULL] = X[291ULL] * -1000.0;
  t349[957ULL] = -X[291ULL];
  t349[958ULL] = -X[293ULL];
  t349[959ULL] = -X[294ULL];
  t349[960ULL] = -X[295ULL];
  t349[961ULL] = -X[293ULL];
  t349[962ULL] = X[36ULL];
  t349[963ULL] = X[36ULL];
  t349[964ULL] = X[298ULL];
  t349[965ULL] = X[298ULL];
  t349[966ULL] = X[299ULL];
  t349[967ULL] = X[300ULL] * 0.1;
  t349[968ULL] = X[301ULL];
  t349[969ULL] = X[302ULL];
  t349[970ULL] = X[246ULL];
  t349[971ULL] = X[33ULL] * 0.1;
  t349[972ULL] = X[247ULL];
  t349[973ULL] = X[248ULL];
  t349[974ULL] = X[43ULL];
  t349[975ULL] = X[306ULL];
  t349[976ULL] = X[42ULL];
  t349[977ULL] = X[303ULL];
  t349[978ULL] = X[40ULL] - 273.15;
  t349[979ULL] = -X[293ULL];
  t349[980ULL] = X[304ULL] * 0.1;
  t349[981ULL] = X[41ULL] * 0.1;
  t349[982ULL] = X[305ULL];
  t349[983ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
    100000.0;
  t349[984ULL] = X[307ULL];
  t349[985ULL] = -X[263ULL];
  t349[986ULL] = X[308ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 987ULL] = t392[t469];
  }

  t349[995ULL] = X[298ULL];
  t349[996ULL] = X[309ULL];
  t349[997ULL] = intrm_sf_mf_696;
  t349[998ULL] = -X[291ULL];
  t349[999ULL] = -X[259ULL];
  t349[1000ULL] = X[310ULL];
  t349[1001ULL] = X[40ULL];
  t349[1002ULL] = X[43ULL];
  t349[1003ULL] = X[42ULL];
  t349[1004ULL] = t644;
  t349[1005ULL] = X[299ULL];
  t349[1006ULL] = X[300ULL] * 0.1;
  t349[1007ULL] = X[301ULL];
  t349[1008ULL] = X[302ULL];
  t349[1009ULL] = -X[291ULL];
  t349[1010ULL] = X[311ULL];
  t349[1011ULL] = -X[293ULL];
  t349[1012ULL] = -X[294ULL];
  t349[1013ULL] = -X[295ULL];
  t349[1014ULL] = X[312ULL];
  t349[1015ULL] = X[313ULL];
  t349[1016ULL] = X[246ULL];
  t349[1017ULL] = X[33ULL] * 0.1;
  t349[1018ULL] = X[247ULL];
  t349[1019ULL] = X[248ULL];
  t349[1020ULL] = -X[259ULL];
  t349[1021ULL] = X[314ULL];
  t349[1022ULL] = -X[263ULL];
  t349[1023ULL] = -X[264ULL];
  t349[1024ULL] = -X[265ULL];
  t349[1025ULL] = X[315ULL];
  t349[1026ULL] = X[316ULL];
  t349[1027ULL] = t647;
  t349[1028ULL] = -X[294ULL];
  t349[1029ULL] = -X[264ULL];
  t349[1030ULL] = -X[295ULL];
  t349[1031ULL] = -X[265ULL];
  t349[1032ULL] = (1.0 - X[42ULL]) - X[43ULL];
  t349[1033ULL] = X[284ULL];
  t349[1034ULL] = X[37ULL] * 0.1;
  t349[1035ULL] = X[285ULL];
  t349[1036ULL] = X[286ULL];
  t349[1037ULL] = X[299ULL];
  t349[1038ULL] = X[300ULL] * 0.1;
  t349[1039ULL] = X[301ULL];
  t349[1040ULL] = X[302ULL];
  t349[1041ULL] = t636 * 1.0E+6;
  t349[1042ULL] = t639;
  t349[1043ULL] = t636 * -125000.03125000779;
  t349[1044ULL] = t636 * 1.0E+6;
  t349[1045ULL] = t639;
  t349[1046ULL] = t639 * 7.8539816339744827E-5;
  t349[1047ULL] = X[300ULL] * 99999.999999999985;
  t349[1048ULL] = (t646 - 0.05000000000000001) * 0.1;
  t349[1049ULL] = t636 * -125000.03125000779;
  t349[1050ULL] = t646 * 0.1;
  t349[1051ULL] = (t646 - 0.05000000000000001) * 0.1;
  t349[1052ULL] = X[299ULL];
  t349[1053ULL] = X[300ULL] * 0.1;
  t349[1054ULL] = X[301ULL];
  t349[1055ULL] = X[302ULL];
  t349[1056ULL] = X[300ULL] * 99999.999999999985;
  t349[1057ULL] = X[299ULL];
  t349[1058ULL] = X[284ULL];
  t349[1059ULL] = X[37ULL] * 0.1;
  t349[1060ULL] = X[285ULL];
  t349[1061ULL] = X[286ULL];
  t349[1062ULL] = t639 * 7.8539816339744827E-5;
  t349[1063ULL] = X[299ULL];
  t349[1064ULL] = X[300ULL] * 0.1;
  t349[1065ULL] = X[301ULL];
  t349[1066ULL] = X[302ULL];
  t349[1067ULL] = -X[293ULL];
  t349[1068ULL] = X[284ULL];
  t349[1069ULL] = X[37ULL] * 0.1;
  t349[1070ULL] = X[285ULL];
  t349[1071ULL] = X[286ULL];
  t349[1072ULL] = -X[291ULL];
  t349[1073ULL] = X[323ULL];
  t349[1074ULL] = -X[293ULL];
  t349[1075ULL] = -X[294ULL];
  t349[1076ULL] = -X[295ULL];
  t349[1077ULL] = X[320ULL];
  t349[1078ULL] = X[319ULL];
  t349[1079ULL] = X[317ULL];
  t349[1080ULL] = X[318ULL] * 0.1;
  t349[1081ULL] = X[321ULL];
  t349[1082ULL] = X[322ULL];
  t349[1083ULL] = t649;
  t349[1084ULL] = -X[291ULL];
  t349[1085ULL] = X[291ULL];
  t349[1086ULL] = X[299ULL];
  t349[1087ULL] = X[300ULL] * 0.1;
  t349[1088ULL] = X[301ULL];
  t349[1089ULL] = X[302ULL];
  t349[1090ULL] = X[291ULL];
  t349[1091ULL] = X[323ULL];
  t349[1092ULL] = X[293ULL];
  t349[1093ULL] = X[294ULL];
  t349[1094ULL] = X[295ULL];
  t349[1095ULL] = X[320ULL];
  t349[1096ULL] = X[319ULL];
  t349[1097ULL] = X[293ULL];
  t349[1098ULL] = -X[294ULL];
  t349[1099ULL] = X[294ULL];
  t349[1100ULL] = -X[295ULL];
  t349[1101ULL] = X[295ULL];
  t349[1102ULL] = t646 * 0.1;
  t349[1103ULL] = U_idx_4;
  t349[1104ULL] = X[324ULL];
  t349[1105ULL] = X[325ULL];
  t349[1106ULL] = X[326ULL];
  t349[1107ULL] = X[327ULL];
  t349[1108ULL] = X[328ULL];
  t349[1109ULL] = X[336ULL];
  t349[1110ULL] = X[335ULL];
  t349[1111ULL] = X[324ULL];
  t349[1112ULL] = X[325ULL];
  t349[1113ULL] = X[326ULL];
  t349[1114ULL] = X[328ULL];
  t349[1115ULL] = X[329ULL];
  t349[1116ULL] = X[330ULL];
  t349[1117ULL] = X[331ULL];
  t349[1118ULL] = X[332ULL];
  t349[1119ULL] = X[333ULL];
  t349[1120ULL] = X[334ULL];
  t349[1121ULL] = intrm_sf_mf_850;
  t349[1122ULL] = X[330ULL];
  t349[1123ULL] = X[331ULL];
  t349[1124ULL] = X[332ULL];
  t349[1125ULL] = t652;
  t349[1126ULL] = (1.0 - X[335ULL]) - X[336ULL];
  t349[1127ULL] = X[337ULL];
  t349[1128ULL] = X[338ULL];
  t349[1129ULL] = X[44ULL] * 0.1;
  t349[1130ULL] = X[339ULL];
  t349[1131ULL] = X[340ULL];
  t349[1132ULL] = X[324ULL];
  t349[1133ULL] = X[325ULL];
  t349[1134ULL] = X[326ULL];
  t349[1135ULL] = X[338ULL];
  t349[1136ULL] = X[44ULL] * 0.1;
  t349[1137ULL] = X[339ULL];
  t349[1138ULL] = X[340ULL];
  t349[1139ULL] = X[342ULL];
  t349[1140ULL] = X[345ULL];
  t349[1141ULL] = X[324ULL];
  t349[1142ULL] = X[325ULL];
  t349[1143ULL] = X[326ULL];
  t349[1144ULL] = -X[328ULL];
  t349[1145ULL] = X[346ULL];
  t349[1146ULL] = -X[330ULL];
  t349[1147ULL] = -X[331ULL];
  t349[1148ULL] = -X[332ULL];
  t349[1149ULL] = X[347ULL];
  t349[1150ULL] = X[348ULL];
  t349[1151ULL] = -X[330ULL];
  t349[1152ULL] = X[343ULL];
  t349[1153ULL] = X[344ULL];
  t349[1154ULL] = X[338ULL];
  t349[1155ULL] = X[44ULL] * 0.1;
  t349[1156ULL] = X[339ULL];
  t349[1157ULL] = X[340ULL];
  t349[1158ULL] = X[341ULL];
  t349[1159ULL] = X[346ULL];
  t349[1160ULL] = X[330ULL];
  t349[1161ULL] = X[331ULL];
  t349[1162ULL] = X[332ULL];
  t349[1163ULL] = X[347ULL];
  t349[1164ULL] = X[348ULL];
  t349[1165ULL] = X[330ULL];
  t349[1166ULL] = -X[330ULL];
  t349[1167ULL] = -X[328ULL];
  t349[1168ULL] = X[341ULL];
  t349[1169ULL] = -X[331ULL];
  t349[1170ULL] = X[331ULL];
  t349[1171ULL] = -X[332ULL];
  t349[1172ULL] = X[332ULL];
  t349[1173ULL] = t655;
  t349[1174ULL] = X[338ULL];
  t349[1175ULL] = X[44ULL] * 0.1;
  t349[1176ULL] = X[339ULL];
  t349[1177ULL] = X[340ULL];
  t349[1178ULL] = X[349ULL];
  t349[1179ULL] = X[44ULL] * 0.1;
  t349[1180ULL] = X[350ULL];
  t349[1181ULL] = X[351ULL];
  t349[1182ULL] = X[45ULL];
  t349[1183ULL] = X[44ULL] * 0.1;
  t349[1184ULL] = X[46ULL];
  t349[1185ULL] = X[47ULL];
  t349[1186ULL] = X[45ULL];
  t349[1187ULL] = X[44ULL] * 0.1;
  t349[1188ULL] = X[46ULL];
  t349[1189ULL] = X[47ULL];
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1190ULL] = t397[t469];
  }

  t349[1198ULL] = X[45ULL];
  t349[1199ULL] = X[352ULL];
  t349[1200ULL] = -X[341ULL];
  t349[1201ULL] = X[356ULL];
  t349[1202ULL] = X[45ULL] - 273.15;
  t349[1203ULL] = X[46ULL];
  t349[1204ULL] = X[354ULL];
  t349[1205ULL] = X[47ULL];
  t349[1206ULL] = X[44ULL] * 0.1;
  t349[1207ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho;
  t349[1208ULL] = X[353ULL];
  t349[1209ULL] = X[45ULL];
  t349[1210ULL] = X[46ULL];
  t349[1211ULL] = X[47ULL];
  t349[1212ULL] = t659;
  t349[1213ULL] = X[338ULL];
  t349[1214ULL] = X[44ULL] * 0.1;
  t349[1215ULL] = X[339ULL];
  t349[1216ULL] = X[340ULL];
  t349[1217ULL] = -X[341ULL];
  t349[1218ULL] = X[357ULL];
  t349[1219ULL] = -X[330ULL];
  t349[1220ULL] = -X[331ULL];
  t349[1221ULL] = -X[332ULL];
  t349[1222ULL] = X[358ULL];
  t349[1223ULL] = X[359ULL];
  t349[1224ULL] = X[349ULL];
  t349[1225ULL] = X[44ULL] * 0.1;
  t349[1226ULL] = X[350ULL];
  t349[1227ULL] = X[351ULL];
  t349[1228ULL] = X[356ULL];
  t349[1229ULL] = X[360ULL];
  t349[1230ULL] = X[361ULL];
  t349[1231ULL] = X[362ULL];
  t349[1232ULL] = X[363ULL];
  t349[1233ULL] = X[364ULL];
  t349[1234ULL] = X[365ULL];
  t349[1235ULL] = t662;
  t349[1236ULL] = -X[330ULL];
  t349[1237ULL] = X[361ULL];
  t349[1238ULL] = -X[331ULL];
  t349[1239ULL] = X[362ULL];
  t349[1240ULL] = -X[332ULL];
  t349[1241ULL] = X[363ULL];
  t349[1242ULL] = (1.0 - X[47ULL]) - X[46ULL];
  t349[1243ULL] = X[355ULL];
  t349[1244ULL] = X[349ULL];
  t349[1245ULL] = X[44ULL] * 0.1;
  t349[1246ULL] = X[350ULL];
  t349[1247ULL] = X[351ULL];
  t349[1248ULL] = X[349ULL];
  t349[1249ULL] = X[44ULL] * 0.1;
  t349[1250ULL] = X[350ULL];
  t349[1251ULL] = X[351ULL];
  t349[1252ULL] = -X[361ULL];
  t349[1253ULL] = -X[362ULL];
  t349[1254ULL] = -X[363ULL];
  t349[1255ULL] = X[356ULL] * -1000.0;
  t349[1256ULL] = -X[356ULL];
  t349[1257ULL] = -X[361ULL];
  t349[1258ULL] = -X[362ULL];
  t349[1259ULL] = -X[363ULL];
  t349[1260ULL] = -X[361ULL];
  t349[1261ULL] = U_idx_5;
  t349[1262ULL] = t657 * 9.5492965855137211;
  t349[1263ULL] = X[349ULL];
  t349[1264ULL] = X[44ULL] * 0.1;
  t349[1265ULL] = X[350ULL];
  t349[1266ULL] = X[351ULL];
  t349[1267ULL] = X[45ULL];
  t349[1268ULL] = X[45ULL];
  t349[1269ULL] = X[338ULL];
  t349[1270ULL] = X[44ULL] * 0.1;
  t349[1271ULL] = X[339ULL];
  t349[1272ULL] = X[340ULL];
  t349[1273ULL] = X[324ULL];
  t349[1274ULL] = X[325ULL];
  t349[1275ULL] = X[326ULL];
  t349[1276ULL] = X[338ULL];
  t349[1277ULL] = X[44ULL] * 0.1;
  t349[1278ULL] = X[339ULL];
  t349[1279ULL] = X[340ULL];
  t349[1280ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g * 1000.0;
  t349[1281ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g *
    1111.1111111111111;
  t349[1282ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g *
    1111.1111111111111;
  t349[1283ULL] = -(X[44ULL] - 1.01325) * 99999.999999999985;
  t349[1284ULL] = X[366ULL] * 1.0E-6;
  t349[1285ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_h_g * 1000.0;
  t349[1286ULL] = X[324ULL];
  t349[1287ULL] = X[325ULL];
  t349[1288ULL] = X[326ULL];
  t349[1289ULL] = X[338ULL];
  t349[1290ULL] = X[44ULL] * 0.1;
  t349[1291ULL] = X[339ULL];
  t349[1292ULL] = X[340ULL];
  t349[1293ULL] = -(X[44ULL] - 1.01325) * 99999.999999999985;
  t349[1294ULL] = X[324ULL] - X[338ULL];
  t349[1295ULL] = X[338ULL];
  t349[1296ULL] = X[44ULL] * 0.1;
  t349[1297ULL] = X[339ULL];
  t349[1298ULL] = X[340ULL];
  t349[1299ULL] = X[338ULL];
  t349[1300ULL] = X[44ULL] * 0.1;
  t349[1301ULL] = X[339ULL];
  t349[1302ULL] = X[340ULL];
  t349[1303ULL] = -X[341ULL];
  t349[1304ULL] = X[366ULL] * 1.0E-6;
  t349[1305ULL] = -X[330ULL];
  t349[1306ULL] = -X[331ULL];
  t349[1307ULL] = -X[332ULL];
  t349[1308ULL] = U_idx_5;
  t349[1309ULL] = X[367ULL];
  t349[1310ULL] = t666 * 0.99999999999999978 / 0.99999999999999978 *
    9.5492965855137211;
  t349[1311ULL] = X[368ULL];
  t349[1312ULL] = X[44ULL] * 99999.999999999985;
  t349[1313ULL] = X[367ULL];
  t349[1314ULL] = X[369ULL];
  t349[1315ULL] = X[370ULL];
  t349[1316ULL] = -X[330ULL];
  t349[1317ULL] = X[368ULL];
  t349[1318ULL] = X[369ULL];
  t349[1319ULL] = X[324ULL];
  t349[1320ULL] = X[325ULL];
  t349[1321ULL] = X[326ULL];
  t349[1322ULL] = X[324ULL];
  t349[1323ULL] = X[338ULL];
  t349[1324ULL] = X[44ULL] * 0.1;
  t349[1325ULL] = X[339ULL];
  t349[1326ULL] = X[340ULL];
  t349[1327ULL] = X[44ULL] * 99999.999999999985;
  t349[1328ULL] = X[338ULL];
  t349[1329ULL] = X[324ULL];
  t349[1330ULL] = X[325ULL];
  t349[1331ULL] = X[326ULL];
  t349[1332ULL] = -X[330ULL];
  t349[1333ULL] = X[338ULL];
  t349[1334ULL] = X[44ULL] * 0.1;
  t349[1335ULL] = X[339ULL];
  t349[1336ULL] = X[340ULL];
  t349[1337ULL] = t666 * 9.5492965855137211;
  t349[1338ULL] = X[324ULL] * 0.00347041471455839;
  t349[1339ULL] = X[370ULL];
  t349[1340ULL] = X[324ULL];
  t349[1341ULL] = X[324ULL] * 0.00347041471455839;
  t349[1342ULL] = X[249ULL];
  t349[1343ULL] = X[33ULL] * 0.1;
  t349[1344ULL] = X[250ULL];
  t349[1345ULL] = X[251ULL];
  t349[1346ULL] = X[371ULL];
  t349[1347ULL] = X[372ULL] * 0.1;
  t349[1348ULL] = X[373ULL];
  t349[1349ULL] = X[374ULL];
  t349[1350ULL] = U_idx_6;
  t349[1351ULL] = X[375ULL];
  t349[1352ULL] = X[48ULL];
  t349[1353ULL] = X[49ULL];
  t349[1354ULL] = X[50ULL];
  t349[1355ULL] = U_idx_7;
  t349[1356ULL] = -U_idx_6;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1357ULL] = t414[t469];
  }

  t349[1365ULL] = X[378ULL];
  t349[1366ULL] = X[380ULL] * 1.0E-5 * 99999.999999999985;
  t349[1367ULL] = X[48ULL];
  t349[1368ULL] = X[377ULL];
  t349[1369ULL] = X[377ULL];
  t349[1370ULL] = X[381ULL];
  t349[1371ULL] = X[381ULL];
  t349[1372ULL] = X[249ULL];
  t349[1373ULL] = X[33ULL] * 0.1;
  t349[1374ULL] = X[250ULL];
  t349[1375ULL] = X[251ULL];
  t349[1376ULL] = X[371ULL];
  t349[1377ULL] = X[372ULL] * 0.1;
  t349[1378ULL] = X[373ULL];
  t349[1379ULL] = X[374ULL];
  t349[1380ULL] = X[49ULL];
  t349[1381ULL] = X[378ULL];
  t349[1382ULL] = X[50ULL];
  t349[1383ULL] = X[382ULL];
  t349[1384ULL] = X[48ULL] - 273.15;
  t349[1385ULL] = -X[272ULL];
  t349[1386ULL] = X[383ULL] * 0.1;
  t349[1387ULL] = X[51ULL] * 0.1;
  t349[1388ULL] = X[379ULL];
  t349[1389ULL] = t690 * 100000.0;
  t349[1390ULL] = X[385ULL];
  t349[1391ULL] = X[384ULL];
  t349[1392ULL] = X[386ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1393ULL] = t414[t469];
  }

  t349[1401ULL] = X[381ULL];
  t349[1402ULL] = X[376ULL];
  t349[1403ULL] = t640;
  t349[1404ULL] = -X[261ULL];
  t349[1405ULL] = X[387ULL];
  t349[1406ULL] = -X[375ULL];
  t349[1407ULL] = X[377ULL];
  t349[1408ULL] = X[48ULL];
  t349[1409ULL] = X[49ULL];
  t349[1410ULL] = X[50ULL];
  t349[1411ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_mdot_w_conden;
  t349[1412ULL] = X[249ULL];
  t349[1413ULL] = X[33ULL] * 0.1;
  t349[1414ULL] = X[250ULL];
  t349[1415ULL] = X[251ULL];
  t349[1416ULL] = -X[261ULL];
  t349[1417ULL] = X[388ULL];
  t349[1418ULL] = -X[272ULL];
  t349[1419ULL] = -X[273ULL];
  t349[1420ULL] = -X[274ULL];
  t349[1421ULL] = X[389ULL];
  t349[1422ULL] = X[390ULL];
  t349[1423ULL] = X[371ULL];
  t349[1424ULL] = X[372ULL] * 0.1;
  t349[1425ULL] = X[373ULL];
  t349[1426ULL] = X[374ULL];
  t349[1427ULL] = X[387ULL];
  t349[1428ULL] = X[391ULL];
  t349[1429ULL] = X[384ULL];
  t349[1430ULL] = X[392ULL];
  t349[1431ULL] = X[393ULL];
  t349[1432ULL] = X[394ULL];
  t349[1433ULL] = X[395ULL];
  t349[1434ULL] = t695;
  t349[1435ULL] = -X[273ULL];
  t349[1436ULL] = X[392ULL];
  t349[1437ULL] = U_idx_6;
  t349[1438ULL] = -X[274ULL];
  t349[1439ULL] = X[393ULL];
  t349[1440ULL] = (1.0 - X[50ULL]) - X[49ULL];
  t349[1441ULL] = U_idx_7;
  t349[1442ULL] = U_idx_6;
  t349[1443ULL] = X[75ULL];
  t349[1444ULL] = X[76ULL] * 0.1;
  t349[1445ULL] = X[77ULL];
  t349[1446ULL] = X[78ULL];
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1447ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t469];
  }

  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1455ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t469];
  }

  t349[1463ULL] = X[18ULL];
  t349[1464ULL] = X[371ULL];
  t349[1465ULL] = X[372ULL] * 0.1;
  t349[1466ULL] = X[373ULL];
  t349[1467ULL] = X[374ULL];
  t349[1468ULL] = X[75ULL];
  t349[1469ULL] = X[76ULL] * 0.1;
  t349[1470ULL] = X[77ULL];
  t349[1471ULL] = X[78ULL];
  t349[1472ULL] = X[7ULL];
  t349[1473ULL] = X[83ULL];
  t349[1474ULL] = X[8ULL];
  t349[1475ULL] = X[396ULL];
  t349[1476ULL] = X[6ULL] - 273.15;
  t349[1477ULL] = -X[384ULL];
  t349[1478ULL] = X[397ULL] * 0.1;
  t349[1479ULL] = X[52ULL] * 0.1;
  t349[1480ULL] = X[84ULL];
  t349[1481ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
    100000.0;
  t349[1482ULL] = X[399ULL];
  t349[1483ULL] = X[398ULL];
  t349[1484ULL] = X[400ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1485ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t469];
  }

  t349[1493ULL] = X[18ULL];
  t349[1494ULL] = X[87ULL];
  t349[1495ULL] = t565;
  t349[1496ULL] = -X[387ULL];
  t349[1497ULL] = X[401ULL];
  t349[1498ULL] = X[109ULL];
  t349[1499ULL] = X[86ULL];
  t349[1500ULL] = X[6ULL];
  t349[1501ULL] = X[7ULL];
  t349[1502ULL] = X[8ULL];
  t349[1503ULL] = t699;
  t349[1504ULL] = X[371ULL];
  t349[1505ULL] = X[372ULL] * 0.1;
  t349[1506ULL] = X[373ULL];
  t349[1507ULL] = X[374ULL];
  t349[1508ULL] = -X[387ULL];
  t349[1509ULL] = X[402ULL];
  t349[1510ULL] = -X[384ULL];
  t349[1511ULL] = -X[392ULL];
  t349[1512ULL] = -X[393ULL];
  t349[1513ULL] = X[403ULL];
  t349[1514ULL] = X[404ULL];
  t349[1515ULL] = X[75ULL];
  t349[1516ULL] = X[76ULL] * 0.1;
  t349[1517ULL] = X[77ULL];
  t349[1518ULL] = X[78ULL];
  t349[1519ULL] = X[401ULL];
  t349[1520ULL] = X[405ULL];
  t349[1521ULL] = X[398ULL];
  t349[1522ULL] = X[406ULL];
  t349[1523ULL] = X[407ULL];
  t349[1524ULL] = X[408ULL];
  t349[1525ULL] = X[409ULL];
  t349[1526ULL] = t703;
  t349[1527ULL] = -X[392ULL];
  t349[1528ULL] = X[406ULL];
  t349[1529ULL] = -X[393ULL];
  t349[1530ULL] = X[407ULL];
  t349[1531ULL] = (1.0 - X[8ULL]) - X[7ULL];
  t349[1532ULL] = X[75ULL];
  t349[1533ULL] = X[76ULL] * 0.1;
  t349[1534ULL] = X[77ULL];
  t349[1535ULL] = X[78ULL];
  t349[1536ULL] = X[122ULL];
  t349[1537ULL] = X[123ULL] * 0.1;
  t349[1538ULL] = X[124ULL];
  t349[1539ULL] = X[125ULL];
  t349[1540ULL] = X[10ULL];
  t349[1541ULL] = X[88ULL];
  t349[1542ULL] = X[11ULL];
  t349[1543ULL] = X[410ULL];
  t349[1544ULL] = X[9ULL] - 273.15;
  t349[1545ULL] = -X[398ULL];
  t349[1546ULL] = X[411ULL] * 0.1;
  t349[1547ULL] = X[53ULL] * 0.1;
  t349[1548ULL] = X[89ULL];
  t349[1549ULL] = t704 * 100000.0;
  t349[1550ULL] = X[412ULL];
  t349[1551ULL] = X[145ULL];
  t349[1552ULL] = X[413ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1553ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t469];
  }

  t349[1561ULL] = X[18ULL];
  t349[1562ULL] = X[90ULL];
  t349[1563ULL] = t694;
  t349[1564ULL] = -X[401ULL];
  t349[1565ULL] = X[155ULL];
  t349[1566ULL] = -X[115ULL] - X[118ULL];
  t349[1567ULL] = X[110ULL];
  t349[1568ULL] = X[92ULL];
  t349[1569ULL] = X[9ULL];
  t349[1570ULL] = X[10ULL];
  t349[1571ULL] = X[11ULL];
  t349[1572ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_W;
  t349[1573ULL] = X[75ULL];
  t349[1574ULL] = X[76ULL] * 0.1;
  t349[1575ULL] = X[77ULL];
  t349[1576ULL] = X[78ULL];
  t349[1577ULL] = -X[401ULL];
  t349[1578ULL] = X[414ULL];
  t349[1579ULL] = -X[398ULL];
  t349[1580ULL] = -X[406ULL];
  t349[1581ULL] = -X[407ULL];
  t349[1582ULL] = X[415ULL];
  t349[1583ULL] = X[416ULL];
  t349[1584ULL] = X[122ULL];
  t349[1585ULL] = X[123ULL] * 0.1;
  t349[1586ULL] = X[124ULL];
  t349[1587ULL] = X[125ULL];
  t349[1588ULL] = X[155ULL];
  t349[1589ULL] = X[417ULL];
  t349[1590ULL] = X[145ULL];
  t349[1591ULL] = X[158ULL];
  t349[1592ULL] = X[160ULL];
  t349[1593ULL] = X[418ULL];
  t349[1594ULL] = X[419ULL];
  t349[1595ULL] = t712;
  t349[1596ULL] = -X[406ULL];
  t349[1597ULL] = X[158ULL];
  t349[1598ULL] = X[114ULL];
  t349[1599ULL] = X[120ULL];
  t349[1600ULL] = -X[407ULL];
  t349[1601ULL] = X[160ULL];
  t349[1602ULL] = (1.0 - X[11ULL]) - X[10ULL];
  t349[1603ULL] = X[9ULL];
  t349[1604ULL] = X[10ULL];
  t349[1605ULL] = X[11ULL];
  t349[1606ULL] = X[371ULL];
  t349[1607ULL] = X[372ULL] * 0.1;
  t349[1608ULL] = X[373ULL];
  t349[1609ULL] = X[374ULL];
  t349[1610ULL] = X[122ULL];
  t349[1611ULL] = X[123ULL] * 0.1;
  t349[1612ULL] = X[124ULL];
  t349[1613ULL] = X[125ULL];
  t349[1614ULL] = X[349ULL];
  t349[1615ULL] = X[44ULL] * 0.1;
  t349[1616ULL] = X[350ULL];
  t349[1617ULL] = X[351ULL];
  t349[1618ULL] = X[173ULL];
  t349[1619ULL] = X[174ULL] * 0.1;
  t349[1620ULL] = X[175ULL];
  t349[1621ULL] = X[176ULL];
  t349[1622ULL] = U_idx_8;
  t349[1623ULL] = X[420ULL];
  t349[1624ULL] = X[54ULL];
  t349[1625ULL] = X[55ULL];
  t349[1626ULL] = X[56ULL];
  t349[1627ULL] = U_idx_9;
  t349[1628ULL] = -U_idx_8;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1629ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[t469];
  }

  t349[1637ULL] = X[423ULL];
  t349[1638ULL] = X[425ULL] * 1.0E-5 * 99999.999999999985;
  t349[1639ULL] = X[54ULL];
  t349[1640ULL] = X[422ULL];
  t349[1641ULL] = X[422ULL];
  t349[1642ULL] = X[426ULL];
  t349[1643ULL] = X[426ULL];
  t349[1644ULL] = X[349ULL];
  t349[1645ULL] = X[44ULL] * 0.1;
  t349[1646ULL] = X[350ULL];
  t349[1647ULL] = X[351ULL];
  t349[1648ULL] = X[173ULL];
  t349[1649ULL] = X[174ULL] * 0.1;
  t349[1650ULL] = X[175ULL];
  t349[1651ULL] = X[176ULL];
  t349[1652ULL] = X[55ULL];
  t349[1653ULL] = X[423ULL];
  t349[1654ULL] = X[56ULL];
  t349[1655ULL] = X[427ULL];
  t349[1656ULL] = X[54ULL] - 273.15;
  t349[1657ULL] = -X[361ULL];
  t349[1658ULL] = X[428ULL] * 0.1;
  t349[1659ULL] = X[57ULL] * 0.1;
  t349[1660ULL] = X[424ULL];
  t349[1661ULL] = t717 * 100000.0;
  t349[1662ULL] = X[429ULL];
  t349[1663ULL] = -X[177ULL];
  t349[1664ULL] = X[430ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1665ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[t469];
  }

  t349[1673ULL] = X[426ULL];
  t349[1674ULL] = X[421ULL];
  t349[1675ULL] = t698;
  t349[1676ULL] = -X[356ULL];
  t349[1677ULL] = -X[183ULL];
  t349[1678ULL] = -X[420ULL];
  t349[1679ULL] = X[422ULL];
  t349[1680ULL] = X[54ULL];
  t349[1681ULL] = X[55ULL];
  t349[1682ULL] = X[56ULL];
  t349[1683ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_mdot_w_conden;
  t349[1684ULL] = X[349ULL];
  t349[1685ULL] = X[44ULL] * 0.1;
  t349[1686ULL] = X[350ULL];
  t349[1687ULL] = X[351ULL];
  t349[1688ULL] = -X[356ULL];
  t349[1689ULL] = X[431ULL];
  t349[1690ULL] = -X[361ULL];
  t349[1691ULL] = -X[362ULL];
  t349[1692ULL] = -X[363ULL];
  t349[1693ULL] = X[432ULL];
  t349[1694ULL] = X[433ULL];
  t349[1695ULL] = X[173ULL];
  t349[1696ULL] = X[174ULL] * 0.1;
  t349[1697ULL] = X[175ULL];
  t349[1698ULL] = X[176ULL];
  t349[1699ULL] = -X[183ULL];
  t349[1700ULL] = X[434ULL];
  t349[1701ULL] = -X[177ULL];
  t349[1702ULL] = -X[186ULL];
  t349[1703ULL] = -X[187ULL];
  t349[1704ULL] = X[435ULL];
  t349[1705ULL] = X[436ULL];
  t349[1706ULL] = t722;
  t349[1707ULL] = -X[362ULL];
  t349[1708ULL] = -X[186ULL];
  t349[1709ULL] = U_idx_8;
  t349[1710ULL] = -X[363ULL];
  t349[1711ULL] = -X[187ULL];
  t349[1712ULL] = (1.0 - X[56ULL]) - X[55ULL];
  t349[1713ULL] = U_idx_9;
  t349[1714ULL] = U_idx_8;
  t349[1715ULL] = X[195ULL];
  t349[1716ULL] = X[196ULL] * 0.1;
  t349[1717ULL] = X[197ULL];
  t349[1718ULL] = X[198ULL];
  t349[1719ULL] = X[437ULL];
  t349[1720ULL] = -920.95788639984789 + t691 * 1000.0;
  t349[1721ULL] = (X[437ULL] * 0.0031415926535897937 - 0.92095788639984788) *
    318.30988618379064;
  t349[1722ULL] = X[438ULL];
  t349[1723ULL] = X[439ULL];
  t349[1724ULL] = X[440ULL];
  t349[1725ULL] = X[441ULL];
  t349[1726ULL] = X[442ULL];
  t349[1727ULL] = X[450ULL];
  t349[1728ULL] = X[449ULL];
  t349[1729ULL] = X[438ULL];
  t349[1730ULL] = X[439ULL];
  t349[1731ULL] = X[440ULL];
  t349[1732ULL] = X[442ULL];
  t349[1733ULL] = X[443ULL];
  t349[1734ULL] = X[444ULL];
  t349[1735ULL] = X[445ULL];
  t349[1736ULL] = X[446ULL];
  t349[1737ULL] = X[447ULL];
  t349[1738ULL] = X[448ULL];
  t349[1739ULL] = t702;
  t349[1740ULL] = X[444ULL];
  t349[1741ULL] = X[445ULL];
  t349[1742ULL] = X[446ULL];
  t349[1743ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Environment_rho_I;
  t349[1744ULL] = (1.0 - X[449ULL]) - X[450ULL];
  t349[1745ULL] = X[451ULL];
  t349[1746ULL] = -920.95788639984789 + t691 * 1000.0;
  t349[1747ULL] = X[195ULL];
  t349[1748ULL] = X[196ULL] * 0.1;
  t349[1749ULL] = X[197ULL];
  t349[1750ULL] = X[198ULL];
  t349[1751ULL] = X[452ULL];
  t349[1752ULL] = t726 * 0.1;
  t349[1753ULL] = X[454ULL];
  t349[1754ULL] = X[455ULL];
  t349[1755ULL] = X[61ULL];
  t349[1756ULL] = X[459ULL];
  t349[1757ULL] = X[60ULL];
  t349[1758ULL] = X[456ULL];
  t349[1759ULL] = X[58ULL] - 273.15;
  t349[1760ULL] = -X[201ULL];
  t349[1761ULL] = X[457ULL] * 0.1;
  t349[1762ULL] = X[59ULL] * 0.1;
  t349[1763ULL] = X[458ULL];
  t349[1764ULL] = t740 * 100000.0;
  t349[1765ULL] = X[460ULL];
  t349[1766ULL] = -X[444ULL];
  t349[1767ULL] = X[461ULL] * 0.1;
  for (t469 = 0ULL; t469 < 8ULL; t469++) {
    t349[t469 + 1768ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_F[t469];
  }

  t349[1776ULL] = X[437ULL];
  t349[1777ULL] = X[462ULL];
  t349[1778ULL] = t706;
  t349[1779ULL] = -X[204ULL];
  t349[1780ULL] = -X[442ULL];
  t349[1781ULL] = 0.92095788639984788 - t691;
  t349[1782ULL] = X[463ULL];
  t349[1783ULL] = X[58ULL];
  t349[1784ULL] = X[61ULL];
  t349[1785ULL] = X[60ULL];
  t349[1786ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W;
  t349[1787ULL] = X[195ULL];
  t349[1788ULL] = X[196ULL] * 0.1;
  t349[1789ULL] = X[197ULL];
  t349[1790ULL] = X[198ULL];
  t349[1791ULL] = -X[204ULL];
  t349[1792ULL] = X[464ULL];
  t349[1793ULL] = -X[201ULL];
  t349[1794ULL] = -X[209ULL];
  t349[1795ULL] = -X[210ULL];
  t349[1796ULL] = X[465ULL];
  t349[1797ULL] = X[466ULL];
  t349[1798ULL] = X[452ULL];
  t349[1799ULL] = t726 * 0.1;
  t349[1800ULL] = X[454ULL];
  t349[1801ULL] = X[455ULL];
  t349[1802ULL] = -X[442ULL];
  t349[1803ULL] = X[467ULL];
  t349[1804ULL] = -X[444ULL];
  t349[1805ULL] = -X[445ULL];
  t349[1806ULL] = -X[446ULL];
  t349[1807ULL] = X[468ULL];
  t349[1808ULL] = X[469ULL];
  t349[1809ULL] = t586;
  t349[1810ULL] = -X[209ULL];
  t349[1811ULL] = -X[445ULL];
  t349[1812ULL] = -X[210ULL];
  t349[1813ULL] = -X[446ULL];
  t349[1814ULL] = (1.0 - X[60ULL]) - X[61ULL];
  t349[1815ULL] = X[452ULL];
  t349[1816ULL] = t726 * 0.1;
  t349[1817ULL] = X[454ULL];
  t349[1818ULL] = X[455ULL];
  t349[1819ULL] = X[438ULL];
  t349[1820ULL] = X[439ULL];
  t349[1821ULL] = X[440ULL];
  t349[1822ULL] = (X[453ULL] - 1.0E-8) * 1.0E+6;
  t349[1823ULL] = X[453ULL];
  t349[1824ULL] = (X[453ULL] - 1.0E-8) * 7812.5001220703134;
  t349[1825ULL] = (X[453ULL] - 1.0E-8) * 1.0E+6;
  t349[1826ULL] = X[453ULL];
  t349[1827ULL] = X[453ULL] * 0.0019634954084936209;
  t349[1828ULL] = t726 * 99999.999999999985;
  t349[1829ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 * 0.1;
  t349[1830ULL] = (X[453ULL] - 1.0E-8) * 7812.5001220703134;
  t349[1831ULL] = X[452ULL];
  t349[1832ULL] = t726 * 0.1;
  t349[1833ULL] = X[454ULL];
  t349[1834ULL] = X[455ULL];
  t349[1835ULL] = t726 * 99999.999999999985;
  t349[1836ULL] = X[452ULL];
  t349[1837ULL] = X[452ULL];
  t349[1838ULL] = t726 * 0.1;
  t349[1839ULL] = X[454ULL];
  t349[1840ULL] = X[455ULL];
  t349[1841ULL] = X[453ULL] * 0.0019634954084936209;
  t349[1842ULL] = X[438ULL];
  t349[1843ULL] = X[439ULL];
  t349[1844ULL] = X[440ULL];
  t349[1845ULL] = X[444ULL];
  t349[1846ULL] = X[452ULL];
  t349[1847ULL] = t726 * 0.1;
  t349[1848ULL] = X[454ULL];
  t349[1849ULL] = X[455ULL];
  t349[1850ULL] = X[442ULL];
  t349[1851ULL] = X[476ULL];
  t349[1852ULL] = X[444ULL];
  t349[1853ULL] = X[445ULL];
  t349[1854ULL] = X[446ULL];
  t349[1855ULL] = X[473ULL];
  t349[1856ULL] = X[472ULL];
  t349[1857ULL] = X[470ULL];
  t349[1858ULL] = X[471ULL] * 0.1;
  t349[1859ULL] = X[474ULL];
  t349[1860ULL] = X[475ULL];
  t349[1861ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val13;
  t349[1862ULL] = X[442ULL];
  t349[1863ULL] = -X[442ULL];
  t349[1864ULL] = X[438ULL];
  t349[1865ULL] = X[439ULL];
  t349[1866ULL] = X[440ULL];
  t349[1867ULL] = -X[442ULL];
  t349[1868ULL] = X[476ULL];
  t349[1869ULL] = -X[444ULL];
  t349[1870ULL] = -X[445ULL];
  t349[1871ULL] = -X[446ULL];
  t349[1872ULL] = X[473ULL];
  t349[1873ULL] = X[472ULL];
  t349[1874ULL] = -X[444ULL];
  t349[1875ULL] = X[445ULL];
  t349[1876ULL] = -X[445ULL];
  t349[1877ULL] = X[446ULL];
  t349[1878ULL] = -X[446ULL];
  t349[1879ULL] =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val26 * 0.1;
  t349[1880ULL] = U_idx_10;
  t349[1881ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t349[1882ULL] = U_idx_11;
  t349[1883ULL] = X[69ULL];
  t349[1884ULL] = X[69ULL];
  t349[1885ULL] = X[69ULL];
  t349[1886ULL] = X[69ULL];
  t349[1887ULL] = t413_idx_0;
  t349[1888ULL] = t413_idx_0;
  t349[1889ULL] = X[69ULL];
  t349[1890ULL] = X[69ULL];
  t349[1891ULL] = t413_idx_0;
  t349[1892ULL] = X[69ULL];
  t349[1893ULL] = X[69ULL];
  t349[1894ULL] = X[69ULL];
  t349[1895ULL] = X[69ULL];
  t349[1896ULL] = X[69ULL];
  t349[1897ULL] = X[62ULL];
  t349[1898ULL] = X[62ULL];
  t349[1899ULL] = U_idx_12;
  t349[1900ULL] = X[69ULL];
  t349[1901ULL] = t413_idx_0;
  t349[1902ULL] = t440_idx_0 * 1000.0;
  t349[1903ULL] = X[478ULL];
  t349[1904ULL] = X[479ULL];
  t349[1905ULL] = X[479ULL];
  t349[1906ULL] = X[477ULL];
  t349[1907ULL] = X[63ULL];
  t349[1908ULL] = X[69ULL];
  t349[1909ULL] = X[62ULL] * 9.5492965855137211;
  t349[1910ULL] = X[62ULL];
  t349[1911ULL] = U_idx_13;
  t349[1912ULL] = -X[478ULL];
  t349[1913ULL] = U_idx_13;
  t349[1914ULL] = X[62ULL];
  t349[1915ULL] = X[62ULL];
  t349[1916ULL] = -X[478ULL];
  t349[1917ULL] = -X[478ULL];
  t349[1918ULL] = X[62ULL];
  t349[1919ULL] = X[62ULL];
  t349[1920ULL] = -X[478ULL];
  t349[1921ULL] = -X[478ULL];
  t349[1922ULL] = -X[478ULL];
  t349[1923ULL] = X[62ULL];
  t349[1924ULL] = U_idx_13;
  t349[1925ULL] = U_idx_12;
  t349[1926ULL] = X[69ULL];
  for (b = 0; b < 1927; b++) {
    out.mX[b] = t349[b];
  }

  (void)LC;
  (void)t944;
  return 0;
}
