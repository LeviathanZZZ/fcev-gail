/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_dxm.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_dxm(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t790, NeDsMethodOutput *t791)
{
  ETTS0 b_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 h_efOut;
  ETTS0 n_efOut;
  ETTS0 o_efOut;
  ETTS0 t0;
  ETTS0 t1;
  ETTS0 t2;
  ETTS0 t3;
  ETTS0 t4;
  ETTS0 t5;
  PmRealVector out;
  real_T X[480];
  real_T t138[258];
  real_T t189[5];
  real_T t190[5];
  real_T t191[5];
  real_T t192[5];
  real_T t193[5];
  real_T t194[5];
  real_T t195[5];
  real_T t196[5];
  real_T t197[5];
  real_T t198[5];
  real_T t199[5];
  real_T t200[5];
  real_T t201[5];
  real_T t202[5];
  real_T t203[5];
  real_T t204[5];
  real_T t205[5];
  real_T t206[5];
  real_T t211[5];
  real_T t212[5];
  real_T t213[5];
  real_T t214[5];
  real_T t215[5];
  real_T t216[5];
  real_T t217[5];
  real_T t218[5];
  real_T t219[5];
  real_T t220[5];
  real_T t221[5];
  real_T t222[5];
  real_T t223[5];
  real_T t224[5];
  real_T t225[5];
  real_T t226[5];
  real_T t227[5];
  real_T t228[5];
  real_T t229[5];
  real_T t230[5];
  real_T t231[5];
  real_T t232[5];
  real_T t233[5];
  real_T t234[5];
  real_T t235[5];
  real_T t236[5];
  real_T t237[5];
  real_T t238[5];
  real_T t239[5];
  real_T t240[5];
  real_T t207[4];
  real_T t208[4];
  real_T t209[4];
  real_T t210[4];
  real_T ab_efOut[1];
  real_T bb_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T d_efOut[1];
  real_T db_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T gb_efOut[1];
  real_T hb_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T nb_efOut[1];
  real_T ob_efOut[1];
  real_T p_efOut[1];
  real_T pb_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T t177[1];
  real_T t_efOut[1];
  real_T u_efOut[1];
  real_T v_efOut[1];
  real_T w_efOut[1];
  real_T x_efOut[1];
  real_T y_efOut[1];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan11;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I;
  real_T intermediate_der1429;
  real_T intermediate_der1430;
  real_T intermediate_der1431;
  real_T intermediate_der1474;
  real_T intermediate_der1476;
  real_T intermediate_der1477;
  real_T intermediate_der1992;
  real_T intermediate_der1993;
  real_T intermediate_der1994;
  real_T intermediate_der2037;
  real_T intermediate_der2039;
  real_T intermediate_der2040;
  real_T intermediate_der2553;
  real_T intermediate_der2554;
  real_T intermediate_der2559;
  real_T intermediate_der2600;
  real_T intermediate_der2601;
  real_T intermediate_der2620;
  real_T intermediate_der2625;
  real_T intermediate_der2627;
  real_T intermediate_der2628;
  real_T intermediate_der2683;
  real_T intermediate_der2684;
  real_T intermediate_der2710;
  real_T intermediate_der2711;
  real_T intermediate_der2712;
  real_T intermediate_der2713;
  real_T intermediate_der2738;
  real_T intermediate_der2739;
  real_T intermediate_der2740;
  real_T intermediate_der2890;
  real_T intermediate_der2891;
  real_T intermediate_der2892;
  real_T intermediate_der2894;
  real_T intermediate_der2895;
  real_T intermediate_der2964;
  real_T intermediate_der2965;
  real_T intermediate_der2966;
  real_T intermediate_der3009;
  real_T intermediate_der3011;
  real_T intermediate_der3012;
  real_T intermediate_der3737;
  real_T intermediate_der3738;
  real_T intermediate_der3739;
  real_T intermediate_der3740;
  real_T intermediate_der3742;
  real_T intermediate_der3743;
  real_T intermediate_der3859;
  real_T intermediate_der3860;
  real_T intermediate_der3903;
  real_T intermediate_der3905;
  real_T intermediate_der3906;
  real_T intermediate_der4423;
  real_T intermediate_der4424;
  real_T intermediate_der4425;
  real_T intermediate_der4468;
  real_T intermediate_der4470;
  real_T intermediate_der4471;
  real_T intermediate_der4965;
  real_T intermediate_der4966;
  real_T intermediate_der4967;
  real_T intermediate_der5010;
  real_T intermediate_der5012;
  real_T intermediate_der5013;
  real_T intermediate_der5523;
  real_T intermediate_der5524;
  real_T intermediate_der5525;
  real_T intermediate_der5568;
  real_T intermediate_der5570;
  real_T intermediate_der5571;
  real_T intermediate_der6082;
  real_T intermediate_der6083;
  real_T intermediate_der6084;
  real_T intermediate_der6127;
  real_T intermediate_der6129;
  real_T intermediate_der6130;
  real_T intermediate_der6767;
  real_T intermediate_der6768;
  real_T intermediate_der6888;
  real_T intermediate_der7007;
  real_T intermediate_der7008;
  real_T intermediate_der7102;
  real_T intermediate_der7103;
  real_T intermediate_der7143;
  real_T intermediate_der716;
  real_T intermediate_der717;
  real_T intermediate_der718;
  real_T intermediate_der7344;
  real_T intermediate_der7345;
  real_T intermediate_der7346;
  real_T intermediate_der763;
  real_T intermediate_der765;
  real_T intermediate_der766;
  real_T intermediate_der7768;
  real_T intermediate_der7769;
  real_T intermediate_der8369;
  real_T intermediate_der8370;
  real_T intermediate_der8371;
  real_T intermediate_der8421;
  real_T intermediate_der8422;
  real_T intermediate_der8423;
  real_T intermediate_der8451;
  real_T intermediate_der8452;
  real_T intermediate_der8453;
  real_T intermediate_der8665;
  real_T intermediate_der8666;
  real_T intermediate_der8667;
  real_T intrm_sf_mf_1034;
  real_T intrm_sf_mf_1064;
  real_T intrm_sf_mf_1171;
  real_T intrm_sf_mf_1201;
  real_T intrm_sf_mf_1308;
  real_T intrm_sf_mf_1339;
  real_T intrm_sf_mf_136;
  real_T intrm_sf_mf_1446;
  real_T intrm_sf_mf_1488;
  real_T intrm_sf_mf_1595;
  real_T intrm_sf_mf_204;
  real_T intrm_sf_mf_311;
  real_T intrm_sf_mf_341;
  real_T intrm_sf_mf_448;
  real_T intrm_sf_mf_568;
  real_T intrm_sf_mf_593;
  real_T intrm_sf_mf_647;
  real_T intrm_sf_mf_660;
  real_T intrm_sf_mf_666;
  real_T intrm_sf_mf_773;
  real_T intrm_sf_mf_901;
  real_T intrm_sf_mf_920;
  real_T intrm_sf_mf_927;
  real_T t146_idx_0;
  real_T t307;
  real_T t310;
  real_T t313;
  real_T t316;
  real_T t319;
  real_T t322;
  real_T t325;
  real_T t328;
  real_T t331;
  real_T t334;
  real_T t337;
  real_T t340;
  real_T t379;
  real_T t382;
  real_T t385;
  real_T t388;
  real_T t391;
  real_T t394;
  real_T t397;
  real_T t400;
  real_T t403;
  real_T t406;
  real_T t409;
  real_T t412;
  real_T t414;
  real_T t416;
  real_T t418;
  real_T t419;
  real_T t420;
  real_T t423;
  real_T t425;
  real_T t427;
  real_T t429;
  real_T t431;
  real_T t433;
  real_T t435;
  real_T t437;
  real_T t439;
  real_T t441;
  real_T t442;
  real_T t448;
  real_T t449;
  real_T t455;
  real_T t456;
  real_T t462;
  real_T t464;
  real_T t469;
  real_T t470;
  real_T t473;
  real_T t474;
  real_T t475;
  real_T t478;
  real_T t479;
  real_T t480;
  real_T t483;
  real_T t485;
  real_T t486;
  real_T t492;
  real_T t493;
  real_T t499;
  real_T t500;
  real_T t506;
  real_T t507;
  real_T t513;
  real_T t514;
  real_T t520;
  real_T t521;
  real_T t527;
  real_T t528;
  real_T t534;
  real_T t535;
  real_T t541;
  real_T t542;
  real_T t547;
  real_T t549;
  real_T t562;
  real_T t578;
  real_T t589;
  real_T t590;
  real_T t591;
  real_T t605;
  real_T t607;
  real_T t616;
  real_T t704;
  real_T t755;
  real_T t765;
  real_T t786;
  real_T t789;
  size_t t10[1];
  size_t t7[1];
  size_t t8[1];
  size_t t290;
  int32_T b;
  for (b = 0; b < 480; b++) {
    X[b] = t790->mX.mX[b];
  }

  out = t791->mDXM;
  if (X[21ULL] <= 0.0) {
    t789 = 0.0;
  } else {
    t789 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    t786 = 0.0;
  } else {
    t786 = X[22ULL] >= 1.0 ? 1.0 : X[22ULL];
  }

  t755 = (((1.0 - t789) - t786) * 296.802103844292 + t789 * 461.523) + t786 *
    4124.48151675695;
  t414 = X[19ULL] * t755;
  t765 = X[20ULL] / (t414 == 0.0 ? 1.0E-16 : t414);
  if (X[19ULL] <= 216.59999999999997) {
    t704 = 216.59999999999997;
  } else {
    t704 = X[19ULL] >= 623.15 ? 623.15 : X[19ULL];
  }

  t307 = t704 * t704;
  if (X[14ULL] <= 0.0) {
    t605 = 0.0;
  } else {
    t605 = X[14ULL] >= 1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    t616 = 0.0;
  } else {
    t616 = X[13ULL] >= 1.0 ? 1.0 : X[13ULL];
  }

  intrm_sf_mf_204 = (((1.0 - t605) - t616) * 296.802103844292 + t605 * 461.523)
    + t616 * 259.836612622973;
  t416 = X[12ULL] * intrm_sf_mf_204;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I = X[23ULL] / (t416 ==
    0.0 ? 1.0E-16 : t416);
  if (X[12ULL] <= 216.59999999999997) {
    t589 = 216.59999999999997;
  } else {
    t589 = X[12ULL] >= 623.15 ? 623.15 : X[12ULL];
  }

  t310 = t589 * t589;
  if (X[17ULL] <= 0.0) {
    t607 = 0.0;
  } else {
    t607 = X[17ULL] >= 1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    intermediate_der8369 = 0.0;
  } else {
    intermediate_der8369 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  intrm_sf_mf_341 = (((1.0 - t607) - intermediate_der8369) * 296.802103844292 +
                     t607 * 461.523) + intermediate_der8369 * 259.836612622973;
  t418 = X[15ULL] * intrm_sf_mf_341;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I = X[24ULL] / (t418 ==
    0.0 ? 1.0E-16 : t418);
  if (X[15ULL] <= 216.59999999999997) {
    intermediate_der8370 = 216.59999999999997;
  } else {
    intermediate_der8370 = X[15ULL] >= 623.15 ? 623.15 : X[15ULL];
  }

  t313 = intermediate_der8370 * intermediate_der8370;
  t177[0ULL] = X[25ULL];
  t7[0] = 11ULL;
  t8[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t177[0ULL], &t7
    [0ULL], &t8[0ULL]);
  t4 = efOut;
  t177[0ULL] = 1.01325;
  t10[0] = 12ULL;
  tlu2_linear_linear_prelookup(&b_efOut.mField0[0ULL], &b_efOut.mField1[0ULL],
    &b_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t177[0ULL],
    &t10[0ULL], &t8[0ULL]);
  t5 = b_efOut;
  tlu2_2d_linear_linear_value(&c_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = c_efOut[0];
  intermediate_der2554 = t146_idx_0;
  tlu2_2d_linear_linear_value(&d_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = d_efOut[0];
  intermediate_der2559 = t146_idx_0;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = e_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 = t146_idx_0;
  tlu2_2d_linear_linear_value(&f_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = f_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 = t146_idx_0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan11 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 -
    intermediate_der2554 * intermediate_der2554 * X[25ULL] *
    intermediate_der2559 / (t146_idx_0 == 0.0 ? 1.0E-16 : t146_idx_0) * 100000.0;
  t177[0ULL] = X[28ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t177[0ULL],
    &t7[0ULL], &t8[0ULL]);
  t3 = g_efOut;
  t177[0ULL] = X[27ULL];
  tlu2_linear_linear_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t177[0ULL],
    &t10[0ULL], &t8[0ULL]);
  t2 = h_efOut;
  tlu2_2d_linear_linear_value(&i_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = i_efOut[0];
  t419 = t146_idx_0;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = j_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6 = t146_idx_0;
  tlu2_2d_linear_linear_value(&k_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = k_efOut[0];
  intermediate_der2627 = t146_idx_0;
  tlu2_2d_linear_linear_value(&l_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = l_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 = t146_idx_0;
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t146_idx_0 = m_efOut[0];
  intermediate_der2628 = X[27ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28) *
    100.0 + t146_idx_0;
  t177[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t177[0ULL],
    &t7[0ULL], &t8[0ULL]);
  t1 = n_efOut;
  t177[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t177[0ULL],
    &t10[0ULL], &t8[0ULL]);
  t0 = o_efOut;
  tlu2_2d_linear_linear_value(&p_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = p_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I = t177[0ULL];
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = q_efOut[0];
  t420 = t177[0ULL];
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = r_efOut[0];
  intermediate_der2712 = t177[0ULL];
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = s_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I = t177[0ULL];
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = t_efOut[0];
  intermediate_der8421 = t177[0ULL];
  intermediate_der2713 = X[29ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I) * 100.0 +
    intermediate_der8421;
  if (X[35ULL] <= 0.0) {
    intermediate_der8421 = 0.0;
  } else {
    intermediate_der8421 = X[35ULL] >= 1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    intermediate_der8422 = 0.0;
  } else {
    intermediate_der8422 = X[34ULL] >= 1.0 ? 1.0 : X[34ULL];
  }

  intrm_sf_mf_568 = (((1.0 - intermediate_der8421) - intermediate_der8422) *
                     296.802103844292 + intermediate_der8421 * 461.523) +
    intermediate_der8422 * 4124.48151675695;
  t423 = X[32ULL] * intrm_sf_mf_568;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 = X[33ULL] /
    (t423 == 0.0 ? 1.0E-16 : t423);
  if (X[32ULL] <= 216.59999999999997) {
    intermediate_der8371 = 216.59999999999997;
  } else {
    intermediate_der8371 = X[32ULL] >= 623.15 ? 623.15 : X[32ULL];
  }

  t316 = intermediate_der8371 * intermediate_der8371;
  if (X[39ULL] <= 0.0) {
    intermediate_der8451 = 0.0;
  } else {
    intermediate_der8451 = X[39ULL] >= 1.0 ? 1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    intermediate_der8452 = 0.0;
  } else {
    intermediate_der8452 = X[38ULL] >= 1.0 ? 1.0 : X[38ULL];
  }

  intrm_sf_mf_647 = (((1.0 - intermediate_der8451) - intermediate_der8452) *
                     296.802103844292 + intermediate_der8451 * 461.523) +
    intermediate_der8452 * 4124.48151675695;
  t425 = X[36ULL] * intrm_sf_mf_647;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I = X[37ULL] / (t425 ==
    0.0 ? 1.0E-16 : t425);
  if (X[36ULL] <= 216.59999999999997) {
    intermediate_der8423 = 216.59999999999997;
  } else {
    intermediate_der8423 = X[36ULL] >= 623.15 ? 623.15 : X[36ULL];
  }

  t319 = intermediate_der8423 * intermediate_der8423;
  if (X[42ULL] <= 0.0) {
    intermediate_der8453 = 0.0;
  } else {
    intermediate_der8453 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    intermediate_der8665 = 0.0;
  } else {
    intermediate_der8665 = X[43ULL] >= 1.0 ? 1.0 : X[43ULL];
  }

  intrm_sf_mf_666 = (((1.0 - intermediate_der8453) - intermediate_der8665) *
                     296.802103844292 + intermediate_der8453 * 461.523) +
    intermediate_der8665 * 4124.48151675695;
  t427 = X[40ULL] * intrm_sf_mf_666;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I = X[41ULL] / (t427 ==
    0.0 ? 1.0E-16 : t427);
  if (X[40ULL] <= 216.59999999999997) {
    intermediate_der8666 = 216.59999999999997;
  } else {
    intermediate_der8666 = X[40ULL] >= 623.15 ? 623.15 : X[40ULL];
  }

  t322 = intermediate_der8666 * intermediate_der8666;
  if (X[47ULL] <= 0.0) {
    intermediate_der8667 = 0.0;
  } else {
    intermediate_der8667 = X[47ULL] >= 1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    t547 = 0.0;
  } else {
    t547 = X[46ULL] >= 1.0 ? 1.0 : X[46ULL];
  }

  intrm_sf_mf_901 = (((1.0 - intermediate_der8667) - t547) * 296.802103844292 +
                     intermediate_der8667 * 461.523) + t547 * 259.836612622973;
  t429 = X[45ULL] * intrm_sf_mf_901;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho = X[44ULL] /
    (t429 == 0.0 ? 1.0E-16 : t429);
  if (X[45ULL] <= 216.59999999999997) {
    t562 = 216.59999999999997;
  } else {
    t562 = X[45ULL] >= 623.15 ? 623.15 : X[45ULL];
  }

  t325 = t562 * t562;
  if (X[50ULL] <= 0.0) {
    t578 = 0.0;
  } else {
    t578 = X[50ULL] >= 1.0 ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    t590 = 0.0;
  } else {
    t590 = X[49ULL] >= 1.0 ? 1.0 : X[49ULL];
  }

  intrm_sf_mf_927 = (((1.0 - t578) - t590) * 296.802103844292 + t578 * 461.523)
    + t590 * 4124.48151675695;
  t431 = X[48ULL] * intrm_sf_mf_927;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X[51ULL] / (t431 ==
    0.0 ? 1.0E-16 : t431);
  if (X[48ULL] <= 216.59999999999997) {
    intermediate_der6768 = 216.59999999999997;
  } else {
    intermediate_der6768 = X[48ULL] >= 623.15 ? 623.15 : X[48ULL];
  }

  t328 = intermediate_der6768 * intermediate_der6768;
  if (X[8ULL] <= 0.0) {
    t591 = 0.0;
  } else {
    t591 = X[8ULL] >= 1.0 ? 1.0 : X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    intermediate_der7007 = 0.0;
  } else {
    intermediate_der7007 = X[7ULL] >= 1.0 ? 1.0 : X[7ULL];
  }

  intrm_sf_mf_1064 = (((1.0 - t591) - intermediate_der7007) * 296.802103844292 +
                      t591 * 461.523) + intermediate_der7007 * 4124.48151675695;
  t433 = X[6ULL] * intrm_sf_mf_1064;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = X[52ULL] / (t433 ==
    0.0 ? 1.0E-16 : t433);
  if (X[6ULL] <= 216.59999999999997) {
    intermediate_der6888 = 216.59999999999997;
  } else {
    intermediate_der6888 = X[6ULL] >= 623.15 ? 623.15 : X[6ULL];
  }

  t331 = intermediate_der6888 * intermediate_der6888;
  if (X[11ULL] <= 0.0) {
    intermediate_der7102 = 0.0;
  } else {
    intermediate_der7102 = X[11ULL] >= 1.0 ? 1.0 : X[11ULL];
  }

  if (X[10ULL] <= 0.0) {
    intermediate_der7103 = 0.0;
  } else {
    intermediate_der7103 = X[10ULL] >= 1.0 ? 1.0 : X[10ULL];
  }

  intrm_sf_mf_1201 = (((1.0 - intermediate_der7102) - intermediate_der7103) *
                      296.802103844292 + intermediate_der7102 * 461.523) +
    intermediate_der7103 * 4124.48151675695;
  t435 = X[9ULL] * intrm_sf_mf_1201;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I = X[53ULL] / (t435 ==
    0.0 ? 1.0E-16 : t435);
  if (X[9ULL] <= 216.59999999999997) {
    intermediate_der7008 = 216.59999999999997;
  } else {
    intermediate_der7008 = X[9ULL] >= 623.15 ? 623.15 : X[9ULL];
  }

  t334 = intermediate_der7008 * intermediate_der7008;
  if (X[56ULL] <= 0.0) {
    intermediate_der7344 = 0.0;
  } else {
    intermediate_der7344 = X[56ULL] >= 1.0 ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    intermediate_der7345 = 0.0;
  } else {
    intermediate_der7345 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  intrm_sf_mf_1339 = (((1.0 - intermediate_der7344) - intermediate_der7345) *
                      296.802103844292 + intermediate_der7344 * 461.523) +
    intermediate_der7345 * 259.836612622973;
  t437 = X[54ULL] * intrm_sf_mf_1339;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = X[57ULL] / (t437 ==
    0.0 ? 1.0E-16 : t437);
  if (X[54ULL] <= 216.59999999999997) {
    intermediate_der7143 = 216.59999999999997;
  } else {
    intermediate_der7143 = X[54ULL] >= 623.15 ? 623.15 : X[54ULL];
  }

  t337 = intermediate_der7143 * intermediate_der7143;
  if (X[60ULL] <= 0.0) {
    intermediate_der7768 = 0.0;
  } else {
    intermediate_der7768 = X[60ULL] >= 1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    intermediate_der7769 = 0.0;
  } else {
    intermediate_der7769 = X[61ULL] >= 1.0 ? 1.0 : X[61ULL];
  }

  intrm_sf_mf_1488 = (((1.0 - intermediate_der7768) - intermediate_der7769) *
                      296.802103844292 + intermediate_der7768 * 461.523) +
    intermediate_der7769 * 259.836612622973;
  t439 = X[58ULL] * intrm_sf_mf_1488;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I = X[59ULL] / (t439 ==
    0.0 ? 1.0E-16 : t439);
  if (X[58ULL] <= 216.59999999999997) {
    intermediate_der7346 = 216.59999999999997;
  } else {
    intermediate_der7346 = X[58ULL] >= 623.15 ? 623.15 : X[58ULL];
  }

  t340 = intermediate_der7346 * intermediate_der7346;
  intrm_sf_mf_1034 = (((1074.1165326382541 + intermediate_der6768 *
                        -0.2214565261064077) + t328 * 0.00037212980109010952) *
                      ((1.0 - t578) - t590) + ((1479.6504774710445 +
    intermediate_der6768 * 1.200211433705052) + t328 * -0.00038614513167842338) *
                      t578) + ((12825.281119790017 + intermediate_der6768 *
    6.9647057412830984) + t328 * -0.007052486824683288) * t590;
  intrm_sf_mf_1171 = (((1074.1165326382541 + intermediate_der6888 *
                        -0.2214565261064077) + t331 * 0.00037212980109010952) *
                      ((1.0 - t591) - intermediate_der7007) +
                      ((1479.6504774710445 + intermediate_der6888 *
                        1.200211433705052) + t331 * -0.00038614513167842338) *
                      t591) + ((12825.281119790017 + intermediate_der6888 *
    6.9647057412830984) + t331 * -0.007052486824683288) * intermediate_der7007;
  intrm_sf_mf_1308 = (((1074.1165326382541 + intermediate_der7008 *
                        -0.2214565261064077) + t334 * 0.00037212980109010952) *
                      ((1.0 - intermediate_der7102) - intermediate_der7103) +
                      ((1479.6504774710445 + intermediate_der7008 *
                        1.200211433705052) + t334 * -0.00038614513167842338) *
                      intermediate_der7102) + ((12825.281119790017 +
    intermediate_der7008 * 6.9647057412830984) + t334 * -0.007052486824683288) *
    intermediate_der7103;
  intrm_sf_mf_136 = (((1074.1165326382541 + t704 * -0.2214565261064077) + t307 *
                      0.00037212980109010952) * ((1.0 - t789) - t786) +
                     ((1479.6504774710445 + t704 * 1.200211433705052) + t307 *
                      -0.00038614513167842338) * t789) + ((12825.281119790017 +
    t704 * 6.9647057412830984) + t307 * -0.007052486824683288) * t786;
  intrm_sf_mf_1446 = (((1074.1165326382541 + intermediate_der7143 *
                        -0.2214565261064077) + t337 * 0.00037212980109010952) *
                      ((1.0 - intermediate_der7344) - intermediate_der7345) +
                      ((1479.6504774710445 + intermediate_der7143 *
                        1.200211433705052) + t337 * -0.00038614513167842338) *
                      intermediate_der7344) + ((900.63941224837913 +
    intermediate_der7143 * -0.044484923911364271) + t337 *
    0.00036936011832043369) * intermediate_der7345;
  intrm_sf_mf_1595 = (((1074.1165326382541 + intermediate_der7346 *
                        -0.2214565261064077) + t340 * 0.00037212980109010952) *
                      ((1.0 - intermediate_der7768) - intermediate_der7769) +
                      ((1479.6504774710445 + intermediate_der7346 *
                        1.200211433705052) + t340 * -0.00038614513167842338) *
                      intermediate_der7768) + ((900.63941224837913 +
    intermediate_der7346 * -0.044484923911364271) + t340 *
    0.00036936011832043369) * intermediate_der7769;
  intrm_sf_mf_311 = (((1074.1165326382541 + t589 * -0.2214565261064077) + t310 *
                      0.00037212980109010952) * ((1.0 - t605) - t616) +
                     ((1479.6504774710445 + t589 * 1.200211433705052) + t310 *
                      -0.00038614513167842338) * t605) + ((900.63941224837913 +
    t589 * -0.044484923911364271) + t310 * 0.00036936011832043369) * t616;
  intrm_sf_mf_448 = (((1074.1165326382541 + intermediate_der8370 *
                       -0.2214565261064077) + t313 * 0.00037212980109010952) *
                     ((1.0 - t607) - intermediate_der8369) +
                     ((1479.6504774710445 + intermediate_der8370 *
                       1.200211433705052) + t313 * -0.00038614513167842338) *
                     t607) + ((900.63941224837913 + intermediate_der8370 *
    -0.044484923911364271) + t313 * 0.00036936011832043369) *
    intermediate_der8369;
  intrm_sf_mf_593 = (((1074.1165326382541 + intermediate_der8371 *
                       -0.2214565261064077) + t316 * 0.00037212980109010952) *
                     ((1.0 - intermediate_der8421) - intermediate_der8422) +
                     ((1479.6504774710445 + intermediate_der8371 *
                       1.200211433705052) + t316 * -0.00038614513167842338) *
                     intermediate_der8421) + ((12825.281119790017 +
    intermediate_der8371 * 6.9647057412830984) + t316 * -0.007052486824683288) *
    intermediate_der8422;
  intrm_sf_mf_660 = (((1074.1165326382541 + intermediate_der8423 *
                       -0.2214565261064077) + t319 * 0.00037212980109010952) *
                     ((1.0 - intermediate_der8451) - intermediate_der8452) +
                     ((1479.6504774710445 + intermediate_der8423 *
                       1.200211433705052) + t319 * -0.00038614513167842338) *
                     intermediate_der8451) + ((12825.281119790017 +
    intermediate_der8423 * 6.9647057412830984) + t319 * -0.007052486824683288) *
    intermediate_der8452;
  intrm_sf_mf_773 = (((1074.1165326382541 + intermediate_der8666 *
                       -0.2214565261064077) + t322 * 0.00037212980109010952) *
                     ((1.0 - intermediate_der8453) - intermediate_der8665) +
                     ((1479.6504774710445 + intermediate_der8666 *
                       1.200211433705052) + t322 * -0.00038614513167842338) *
                     intermediate_der8453) + ((12825.281119790017 +
    intermediate_der8666 * 6.9647057412830984) + t322 * -0.007052486824683288) *
    intermediate_der8665;
  intrm_sf_mf_920 = (((1074.1165326382541 + t562 * -0.2214565261064077) + t325 *
                      0.00037212980109010952) * ((1.0 - intermediate_der8667) -
    t547) + ((1479.6504774710445 + t562 * 1.200211433705052) + t325 *
             -0.00038614513167842338) * intermediate_der8667) +
    ((900.63941224837913 + t562 * -0.044484923911364271) + t325 *
     0.00036936011832043369) * t547;
  if (X[21ULL] <= 0.0) {
    t549 = 0.0;
  } else {
    t549 = (real_T)!(X[21ULL] >= 1.0);
  }

  if (X[22ULL] <= 0.0) {
    intermediate_der716 = 0.0;
  } else {
    intermediate_der716 = (real_T)!(X[22ULL] >= 1.0);
  }

  intermediate_der717 = -intermediate_der716 * 296.802103844292 +
    intermediate_der716 * 4124.48151675695;
  intermediate_der718 = -t549 * 296.802103844292 + t549 * 461.523;
  intermediate_der763 = 1.0 / (t414 == 0.0 ? 1.0E-16 : t414);
  t442 = X[19ULL] * X[19ULL] * t755 * t755;
  t414 = -X[20ULL] / (t442 == 0.0 ? 1.0E-16 : t442) * X[19ULL] *
    intermediate_der718;
  intermediate_der765 = -X[20ULL] / (t442 == 0.0 ? 1.0E-16 : t442) * X[19ULL] *
    intermediate_der717;
  intermediate_der766 = -X[20ULL] / (t442 == 0.0 ? 1.0E-16 : t442) * t755;
  if (X[19ULL] <= 216.59999999999997) {
    t441 = 0.0;
  } else {
    t441 = (real_T)!(X[19ULL] >= 623.15);
  }

  t379 = t704 * t441 * 2.0;
  if (X[14ULL] <= 0.0) {
    t442 = 0.0;
  } else {
    t442 = (real_T)!(X[14ULL] >= 1.0);
  }

  if (X[13ULL] <= 0.0) {
    intermediate_der1429 = 0.0;
  } else {
    intermediate_der1429 = (real_T)!(X[13ULL] >= 1.0);
  }

  intermediate_der1430 = -intermediate_der1429 * 296.802103844292 +
    intermediate_der1429 * 259.836612622973;
  intermediate_der1431 = -t442 * 296.802103844292 + t442 * 461.523;
  intermediate_der1474 = 1.0 / (t416 == 0.0 ? 1.0E-16 : t416);
  t449 = X[12ULL] * X[12ULL] * intrm_sf_mf_204 * intrm_sf_mf_204;
  t416 = -X[23ULL] / (t449 == 0.0 ? 1.0E-16 : t449) * X[12ULL] *
    intermediate_der1431;
  intermediate_der1476 = -X[23ULL] / (t449 == 0.0 ? 1.0E-16 : t449) *
    intrm_sf_mf_204;
  intermediate_der1477 = -X[23ULL] / (t449 == 0.0 ? 1.0E-16 : t449) * X[12ULL] *
    intermediate_der1430;
  if (X[12ULL] <= 216.59999999999997) {
    t448 = 0.0;
  } else {
    t448 = (real_T)!(X[12ULL] >= 623.15);
  }

  t382 = t589 * t448 * 2.0;
  if (X[17ULL] <= 0.0) {
    t449 = 0.0;
  } else {
    t449 = (real_T)!(X[17ULL] >= 1.0);
  }

  if (X[16ULL] <= 0.0) {
    intermediate_der1992 = 0.0;
  } else {
    intermediate_der1992 = (real_T)!(X[16ULL] >= 1.0);
  }

  intermediate_der1993 = -intermediate_der1992 * 296.802103844292 +
    intermediate_der1992 * 259.836612622973;
  intermediate_der1994 = -t449 * 296.802103844292 + t449 * 461.523;
  intermediate_der2037 = 1.0 / (t418 == 0.0 ? 1.0E-16 : t418);
  t456 = X[15ULL] * X[15ULL] * intrm_sf_mf_341 * intrm_sf_mf_341;
  t418 = -X[24ULL] / (t456 == 0.0 ? 1.0E-16 : t456) * X[15ULL] *
    intermediate_der1994;
  intermediate_der2039 = -X[24ULL] / (t456 == 0.0 ? 1.0E-16 : t456) * X[15ULL] *
    intermediate_der1993;
  intermediate_der2040 = -X[24ULL] / (t456 == 0.0 ? 1.0E-16 : t456) *
    intrm_sf_mf_341;
  if (X[15ULL] <= 216.59999999999997) {
    t455 = 0.0;
  } else {
    t455 = (real_T)!(X[15ULL] >= 623.15);
  }

  t385 = intermediate_der8370 * t455 * 2.0;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t4.mField1[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = u_efOut[0];
  t456 = t177[0ULL];
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t4.mField1[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = v_efOut[0];
  intermediate_der2600 = t177[0ULL];
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t4.mField1[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = w_efOut[0];
  intermediate_der2601 = t177[0ULL];
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t4.mField1[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = x_efOut[0];
  intermediate_der2553 = t177[0ULL];
  t462 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15;
  intermediate_der2554 = intermediate_der2601 - (-(intermediate_der2554 *
    intermediate_der2554 * X[25ULL] * intermediate_der2559) / (t462 == 0.0 ?
    1.0E-16 : t462) * intermediate_der2553 + ((intermediate_der2554 *
    intermediate_der2554 * intermediate_der2600 + intermediate_der2554 *
    intermediate_der2559 * t456 * 2.0) * X[25ULL] + intermediate_der2554 *
    intermediate_der2554 * intermediate_der2559) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15))
    * 100000.0;
  tlu2_2d_linear_linear_value(&y_efOut[0ULL], &t3.mField1[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = y_efOut[0];
  t456 = t177[0ULL];
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = ab_efOut[0];
  intermediate_der2600 = t177[0ULL];
  tlu2_2d_linear_linear_value(&bb_efOut[0ULL], &t3.mField1[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = bb_efOut[0];
  intermediate_der2601 = t177[0ULL];
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = cb_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 = t177[0ULL];
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t3.mField1[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = db_efOut[0];
  t462 = t177[0ULL];
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = eb_efOut[0];
  t146_idx_0 = t177[0ULL];
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t3.mField1[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = fb_efOut[0];
  intermediate_der2559 = t177[0ULL];
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = gb_efOut[0];
  intermediate_der2620 = t177[0ULL];
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t3.mField1[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = hb_efOut[0];
  intermediate_der2683 = t177[0ULL];
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = ib_efOut[0];
  intermediate_der2625 = t177[0ULL];
  intermediate_der2738 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28;
  intermediate_der2684 = -X[27ULL] / (intermediate_der2738 == 0.0 ? 1.0E-16 :
    intermediate_der2738) * intermediate_der2559 * 100.0 + intermediate_der2683;
  intermediate_der2683 = (-X[27ULL] / (intermediate_der2738 == 0.0 ? 1.0E-16 :
    intermediate_der2738) * intermediate_der2620 + 1.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28))
    * 100.0 + intermediate_der2625;
  intermediate_der2625 = ((t146_idx_0 - (t419 * intermediate_der2683 +
    intermediate_der2628 * intermediate_der2600) * 1000.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 +
    (intermediate_der2627 - t419 * intermediate_der2628 * 1000.0) *
    intermediate_der2620) * 0.0040159681273635624;
  t146_idx_0 = ((t462 - (t419 * intermediate_der2684 + intermediate_der2628 *
    t456) * 1000.0) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28
                + (intermediate_der2627 - t419 * intermediate_der2628 * 1000.0) *
                intermediate_der2559) * 0.0040159681273635624;
  intermediate_der2711 = -(intermediate_der2628 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28);
  t469 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6;
  intermediate_der2627 = ((intermediate_der2711 / (t469 == 0.0 ? 1.0E-16 : t469)
    * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 +
    (intermediate_der2628 * intermediate_der2620 +
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 *
     intermediate_der2683) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6)) *
    0.01 - X[28ULL] * intermediate_der2600) * 0.0040159681273635624;
  intermediate_der2628 = ((intermediate_der2711 / (t469 == 0.0 ? 1.0E-16 : t469)
    * intermediate_der2601 + (intermediate_der2628 * intermediate_der2559 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 *
    intermediate_der2684) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6)) *
    0.01 - (X[28ULL] * t456 + t419)) * 0.0040159681273635624;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t1.mField1[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = jb_efOut[0];
  t462 = t177[0ULL];
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = kb_efOut[0];
  intermediate_der2683 = t177[0ULL];
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t1.mField1[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = lb_efOut[0];
  intermediate_der2684 = t177[0ULL];
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = mb_efOut[0];
  t464 = t177[0ULL];
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t1.mField1[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = nb_efOut[0];
  intermediate_der2738 = t177[0ULL];
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = ob_efOut[0];
  intermediate_der2711 = t177[0ULL];
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t1.mField1[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = pb_efOut[0];
  t470 = t177[0ULL];
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = qb_efOut[0];
  t473 = t177[0ULL];
  tlu2_2d_linear_linear_value(&rb_efOut[0ULL], &t1.mField1[0ULL], &t1.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = rb_efOut[0];
  intermediate_der2739 = t177[0ULL];
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t177[0] = sb_efOut[0];
  intermediate_der2710 = t177[0ULL];
  t475 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I;
  intermediate_der2740 = -X[29ULL] / (t475 == 0.0 ? 1.0E-16 : t475) * t470 *
    100.0 + intermediate_der2739;
  intermediate_der2739 = (-X[29ULL] / (t475 == 0.0 ? 1.0E-16 : t475) * t473 +
    1.0 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I == 0.0 ?
           1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I)) *
    100.0 + intermediate_der2710;
  intermediate_der2710 = ((intermediate_der2711 -
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I *
     intermediate_der2739 + intermediate_der2713 * intermediate_der2683) *
    1000.0) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I +
    (intermediate_der2712 -
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I *
     intermediate_der2713 * 1000.0) * t473) * 0.00093750000000000007;
  intermediate_der2711 = ((intermediate_der2738 -
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I *
     intermediate_der2740 + intermediate_der2713 * t462) * 1000.0) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I +
    (intermediate_der2712 -
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I *
     intermediate_der2713 * 1000.0) * t470) * 0.00093750000000000007;
  t478 = -(intermediate_der2713 *
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I);
  t479 = t420 * t420;
  intermediate_der2712 = ((t478 / (t479 == 0.0 ? 1.0E-16 : t479) * t464 +
    (intermediate_der2713 * t473 +
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I *
     intermediate_der2739) / (t420 == 0.0 ? 1.0E-16 : t420)) * 0.01 - X[30ULL] *
    intermediate_der2683) * 0.00093750000000000007;
  intermediate_der2713 = ((t478 / (t479 == 0.0 ? 1.0E-16 : t479) *
    intermediate_der2684 + (intermediate_der2713 * t470 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I *
    intermediate_der2740) / (t420 == 0.0 ? 1.0E-16 : t420)) * 0.01 - (X[30ULL] *
    t462 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I)) *
    0.00093750000000000007;
  if (X[35ULL] <= 0.0) {
    intermediate_der2738 = 0.0;
  } else {
    intermediate_der2738 = (real_T)!(X[35ULL] >= 1.0);
  }

  if (X[34ULL] <= 0.0) {
    intermediate_der2739 = 0.0;
  } else {
    intermediate_der2739 = (real_T)!(X[34ULL] >= 1.0);
  }

  intermediate_der2740 = -intermediate_der2739 * 296.802103844292 +
    intermediate_der2739 * 4124.48151675695;
  t474 = -intermediate_der2738 * 296.802103844292 + intermediate_der2738 *
    461.523;
  t475 = 1.0 / (t423 == 0.0 ? 1.0E-16 : t423);
  t486 = X[32ULL] * X[32ULL] * intrm_sf_mf_568 * intrm_sf_mf_568;
  t423 = -X[33ULL] / (t486 == 0.0 ? 1.0E-16 : t486) * X[32ULL] * t474;
  t478 = -X[33ULL] / (t486 == 0.0 ? 1.0E-16 : t486) * X[32ULL] *
    intermediate_der2740;
  t480 = -X[33ULL] / (t486 == 0.0 ? 1.0E-16 : t486) * intrm_sf_mf_568;
  if (X[32ULL] <= 216.59999999999997) {
    t483 = 0.0;
  } else {
    t483 = (real_T)!(X[32ULL] >= 623.15);
  }

  t388 = intermediate_der8371 * t483 * 2.0;
  if (X[39ULL] <= 0.0) {
    t485 = 0.0;
  } else {
    t485 = (real_T)!(X[39ULL] >= 1.0);
  }

  if (X[38ULL] <= 0.0) {
    t486 = 0.0;
  } else {
    t486 = (real_T)!(X[38ULL] >= 1.0);
  }

  intermediate_der2890 = -t486 * 296.802103844292 + t486 * 4124.48151675695;
  intermediate_der2891 = -t485 * 296.802103844292 + t485 * 461.523;
  intermediate_der2892 = 1.0 / (t425 == 0.0 ? 1.0E-16 : t425);
  t493 = X[36ULL] * X[36ULL] * intrm_sf_mf_647 * intrm_sf_mf_647;
  t425 = -X[37ULL] / (t493 == 0.0 ? 1.0E-16 : t493) * X[36ULL] *
    intermediate_der2891;
  intermediate_der2894 = -X[37ULL] / (t493 == 0.0 ? 1.0E-16 : t493) *
    intrm_sf_mf_647;
  intermediate_der2895 = -X[37ULL] / (t493 == 0.0 ? 1.0E-16 : t493) * X[36ULL] *
    intermediate_der2890;
  if (X[36ULL] <= 216.59999999999997) {
    t492 = 0.0;
  } else {
    t492 = (real_T)!(X[36ULL] >= 623.15);
  }

  t391 = intermediate_der8423 * t492 * 2.0;
  if (X[42ULL] <= 0.0) {
    t493 = 0.0;
  } else {
    t493 = (real_T)!(X[42ULL] >= 1.0);
  }

  if (X[43ULL] <= 0.0) {
    intermediate_der2964 = 0.0;
  } else {
    intermediate_der2964 = (real_T)!(X[43ULL] >= 1.0);
  }

  intermediate_der2965 = -intermediate_der2964 * 296.802103844292 +
    intermediate_der2964 * 4124.48151675695;
  intermediate_der2966 = -t493 * 296.802103844292 + t493 * 461.523;
  intermediate_der3009 = 1.0 / (t427 == 0.0 ? 1.0E-16 : t427);
  t500 = X[40ULL] * X[40ULL] * intrm_sf_mf_666 * intrm_sf_mf_666;
  t427 = -X[41ULL] / (t500 == 0.0 ? 1.0E-16 : t500) * X[40ULL] *
    intermediate_der2966;
  intermediate_der3011 = -X[41ULL] / (t500 == 0.0 ? 1.0E-16 : t500) * X[40ULL] *
    intermediate_der2965;
  intermediate_der3012 = -X[41ULL] / (t500 == 0.0 ? 1.0E-16 : t500) *
    intrm_sf_mf_666;
  if (X[40ULL] <= 216.59999999999997) {
    t499 = 0.0;
  } else {
    t499 = (real_T)!(X[40ULL] >= 623.15);
  }

  t394 = intermediate_der8666 * t499 * 2.0;
  if (X[47ULL] <= 0.0) {
    t500 = 0.0;
  } else {
    t500 = (real_T)!(X[47ULL] >= 1.0);
  }

  if (X[46ULL] <= 0.0) {
    intermediate_der3737 = 0.0;
  } else {
    intermediate_der3737 = (real_T)!(X[46ULL] >= 1.0);
  }

  intermediate_der3738 = -intermediate_der3737 * 296.802103844292 +
    intermediate_der3737 * 259.836612622973;
  intermediate_der3739 = -t500 * 296.802103844292 + t500 * 461.523;
  intermediate_der3740 = 1.0 / (t429 == 0.0 ? 1.0E-16 : t429);
  t507 = X[45ULL] * X[45ULL] * intrm_sf_mf_901 * intrm_sf_mf_901;
  t429 = -X[44ULL] / (t507 == 0.0 ? 1.0E-16 : t507) * X[45ULL] *
    intermediate_der3739;
  intermediate_der3742 = -X[44ULL] / (t507 == 0.0 ? 1.0E-16 : t507) * X[45ULL] *
    intermediate_der3738;
  intermediate_der3743 = -X[44ULL] / (t507 == 0.0 ? 1.0E-16 : t507) *
    intrm_sf_mf_901;
  if (X[45ULL] <= 216.59999999999997) {
    t506 = 0.0;
  } else {
    t506 = (real_T)!(X[45ULL] >= 623.15);
  }

  t397 = t562 * t506 * 2.0;
  if (X[50ULL] <= 0.0) {
    t507 = 0.0;
  } else {
    t507 = (real_T)!(X[50ULL] >= 1.0);
  }

  if (X[49ULL] <= 0.0) {
    intermediate_der6767 = 0.0;
  } else {
    intermediate_der6767 = (real_T)!(X[49ULL] >= 1.0);
  }

  intermediate_der3859 = -intermediate_der6767 * 296.802103844292 +
    intermediate_der6767 * 4124.48151675695;
  intermediate_der3860 = -t507 * 296.802103844292 + t507 * 461.523;
  intermediate_der3903 = 1.0 / (t431 == 0.0 ? 1.0E-16 : t431);
  t514 = X[48ULL] * X[48ULL] * intrm_sf_mf_927 * intrm_sf_mf_927;
  t431 = -X[51ULL] / (t514 == 0.0 ? 1.0E-16 : t514) * X[48ULL] *
    intermediate_der3860;
  intermediate_der3905 = -X[51ULL] / (t514 == 0.0 ? 1.0E-16 : t514) *
    intrm_sf_mf_927;
  intermediate_der3906 = -X[51ULL] / (t514 == 0.0 ? 1.0E-16 : t514) * X[48ULL] *
    intermediate_der3859;
  if (X[48ULL] <= 216.59999999999997) {
    t513 = 0.0;
  } else {
    t513 = (real_T)!(X[48ULL] >= 623.15);
  }

  t400 = intermediate_der6768 * t513 * 2.0;
  if (X[8ULL] <= 0.0) {
    t514 = 0.0;
  } else {
    t514 = (real_T)!(X[8ULL] >= 1.0);
  }

  if (X[7ULL] <= 0.0) {
    intermediate_der4423 = 0.0;
  } else {
    intermediate_der4423 = (real_T)!(X[7ULL] >= 1.0);
  }

  intermediate_der4424 = -intermediate_der4423 * 296.802103844292 +
    intermediate_der4423 * 4124.48151675695;
  intermediate_der4425 = -t514 * 296.802103844292 + t514 * 461.523;
  intermediate_der4468 = 1.0 / (t433 == 0.0 ? 1.0E-16 : t433);
  t521 = X[6ULL] * X[6ULL] * intrm_sf_mf_1064 * intrm_sf_mf_1064;
  t433 = -X[52ULL] / (t521 == 0.0 ? 1.0E-16 : t521) * X[6ULL] *
    intermediate_der4425;
  intermediate_der4470 = -X[52ULL] / (t521 == 0.0 ? 1.0E-16 : t521) * X[6ULL] *
    intermediate_der4424;
  intermediate_der4471 = -X[52ULL] / (t521 == 0.0 ? 1.0E-16 : t521) *
    intrm_sf_mf_1064;
  if (X[6ULL] <= 216.59999999999997) {
    t520 = 0.0;
  } else {
    t520 = (real_T)!(X[6ULL] >= 623.15);
  }

  t403 = intermediate_der6888 * t520 * 2.0;
  if (X[11ULL] <= 0.0) {
    t521 = 0.0;
  } else {
    t521 = (real_T)!(X[11ULL] >= 1.0);
  }

  if (X[10ULL] <= 0.0) {
    intermediate_der4965 = 0.0;
  } else {
    intermediate_der4965 = (real_T)!(X[10ULL] >= 1.0);
  }

  intermediate_der4966 = -intermediate_der4965 * 296.802103844292 +
    intermediate_der4965 * 4124.48151675695;
  intermediate_der4967 = -t521 * 296.802103844292 + t521 * 461.523;
  intermediate_der5010 = 1.0 / (t435 == 0.0 ? 1.0E-16 : t435);
  t528 = X[9ULL] * X[9ULL] * intrm_sf_mf_1201 * intrm_sf_mf_1201;
  t435 = -X[53ULL] / (t528 == 0.0 ? 1.0E-16 : t528) * X[9ULL] *
    intermediate_der4967;
  intermediate_der5012 = -X[53ULL] / (t528 == 0.0 ? 1.0E-16 : t528) * X[9ULL] *
    intermediate_der4966;
  intermediate_der5013 = -X[53ULL] / (t528 == 0.0 ? 1.0E-16 : t528) *
    intrm_sf_mf_1201;
  if (X[9ULL] <= 216.59999999999997) {
    t527 = 0.0;
  } else {
    t527 = (real_T)!(X[9ULL] >= 623.15);
  }

  t406 = intermediate_der7008 * t527 * 2.0;
  if (X[56ULL] <= 0.0) {
    t528 = 0.0;
  } else {
    t528 = (real_T)!(X[56ULL] >= 1.0);
  }

  if (X[55ULL] <= 0.0) {
    intermediate_der5523 = 0.0;
  } else {
    intermediate_der5523 = (real_T)!(X[55ULL] >= 1.0);
  }

  intermediate_der5524 = -intermediate_der5523 * 296.802103844292 +
    intermediate_der5523 * 259.836612622973;
  intermediate_der5525 = -t528 * 296.802103844292 + t528 * 461.523;
  intermediate_der5568 = 1.0 / (t437 == 0.0 ? 1.0E-16 : t437);
  t535 = X[54ULL] * X[54ULL] * intrm_sf_mf_1339 * intrm_sf_mf_1339;
  t437 = -X[57ULL] / (t535 == 0.0 ? 1.0E-16 : t535) * X[54ULL] *
    intermediate_der5525;
  intermediate_der5570 = -X[57ULL] / (t535 == 0.0 ? 1.0E-16 : t535) * X[54ULL] *
    intermediate_der5524;
  intermediate_der5571 = -X[57ULL] / (t535 == 0.0 ? 1.0E-16 : t535) *
    intrm_sf_mf_1339;
  if (X[54ULL] <= 216.59999999999997) {
    t534 = 0.0;
  } else {
    t534 = (real_T)!(X[54ULL] >= 623.15);
  }

  t409 = intermediate_der7143 * t534 * 2.0;
  if (X[60ULL] <= 0.0) {
    t535 = 0.0;
  } else {
    t535 = (real_T)!(X[60ULL] >= 1.0);
  }

  if (X[61ULL] <= 0.0) {
    intermediate_der6082 = 0.0;
  } else {
    intermediate_der6082 = (real_T)!(X[61ULL] >= 1.0);
  }

  intermediate_der6083 = -intermediate_der6082 * 296.802103844292 +
    intermediate_der6082 * 259.836612622973;
  intermediate_der6084 = -t535 * 296.802103844292 + t535 * 461.523;
  intermediate_der6127 = 1.0 / (t439 == 0.0 ? 1.0E-16 : t439);
  t542 = X[58ULL] * X[58ULL] * intrm_sf_mf_1488 * intrm_sf_mf_1488;
  t439 = -X[59ULL] / (t542 == 0.0 ? 1.0E-16 : t542) * X[58ULL] *
    intermediate_der6084;
  intermediate_der6129 = -X[59ULL] / (t542 == 0.0 ? 1.0E-16 : t542) * X[58ULL] *
    intermediate_der6083;
  intermediate_der6130 = -X[59ULL] / (t542 == 0.0 ? 1.0E-16 : t542) *
    intrm_sf_mf_1488;
  if (X[58ULL] <= 216.59999999999997) {
    t541 = 0.0;
  } else {
    t541 = (real_T)!(X[58ULL] >= 623.15);
  }

  t412 = intermediate_der7346 * t541 * 2.0;
  t542 = -intermediate_der6767 * ((1074.1165326382541 + intermediate_der6768 *
    -0.2214565261064077) + t328 * 0.00037212980109010952) + ((12825.281119790017
    + intermediate_der6768 * 6.9647057412830984) + t328 * -0.007052486824683288)
    * intermediate_der6767;
  intermediate_der6767 = -t507 * ((1074.1165326382541 + intermediate_der6768 *
    -0.2214565261064077) + t328 * 0.00037212980109010952) + ((1479.6504774710445
    + intermediate_der6768 * 1.200211433705052) + t328 * -0.00038614513167842338)
    * t507;
  intermediate_der6768 = ((t513 * -0.2214565261064077 + t400 *
    0.00037212980109010952) * ((1.0 - t578) - t590) + (t513 * 1.200211433705052
    + t400 * -0.00038614513167842338) * t578) + (t513 * 6.9647057412830984 +
    t400 * -0.007052486824683288) * t590;
  t578 = -intermediate_der4423 * ((1074.1165326382541 + intermediate_der6888 *
    -0.2214565261064077) + t331 * 0.00037212980109010952) + ((12825.281119790017
    + intermediate_der6888 * 6.9647057412830984) + t331 * -0.007052486824683288)
    * intermediate_der4423;
  t590 = -t514 * ((1074.1165326382541 + intermediate_der6888 *
                   -0.2214565261064077) + t331 * 0.00037212980109010952) +
    ((1479.6504774710445 + intermediate_der6888 * 1.200211433705052) + t331 *
     -0.00038614513167842338) * t514;
  intermediate_der6888 = ((t520 * -0.2214565261064077 + t403 *
    0.00037212980109010952) * ((1.0 - t591) - intermediate_der7007) + (t520 *
    1.200211433705052 + t403 * -0.00038614513167842338) * t591) + (t520 *
    6.9647057412830984 + t403 * -0.007052486824683288) * intermediate_der7007;
  t591 = -intermediate_der4965 * ((1074.1165326382541 + intermediate_der7008 *
    -0.2214565261064077) + t334 * 0.00037212980109010952) + ((12825.281119790017
    + intermediate_der7008 * 6.9647057412830984) + t334 * -0.007052486824683288)
    * intermediate_der4965;
  intermediate_der7007 = -t521 * ((1074.1165326382541 + intermediate_der7008 *
    -0.2214565261064077) + t334 * 0.00037212980109010952) + ((1479.6504774710445
    + intermediate_der7008 * 1.200211433705052) + t334 * -0.00038614513167842338)
    * t521;
  intermediate_der7008 = ((t527 * -0.2214565261064077 + t406 *
    0.00037212980109010952) * ((1.0 - intermediate_der7102) -
    intermediate_der7103) + (t527 * 1.200211433705052 + t406 *
    -0.00038614513167842338) * intermediate_der7102) + (t527 *
    6.9647057412830984 + t406 * -0.007052486824683288) * intermediate_der7103;
  intermediate_der7102 = -intermediate_der716 * ((1074.1165326382541 + t704 *
    -0.2214565261064077) + t307 * 0.00037212980109010952) + ((12825.281119790017
    + t704 * 6.9647057412830984) + t307 * -0.007052486824683288) *
    intermediate_der716;
  intermediate_der7103 = -t549 * ((1074.1165326382541 + t704 *
    -0.2214565261064077) + t307 * 0.00037212980109010952) + ((1479.6504774710445
    + t704 * 1.200211433705052) + t307 * -0.00038614513167842338) * t549;
  t704 = ((t441 * -0.2214565261064077 + t379 * 0.00037212980109010952) * ((1.0 -
            t789) - t786) + (t441 * 1.200211433705052 + t379 *
           -0.00038614513167842338) * t789) + (t441 * 6.9647057412830984 + t379 *
    -0.007052486824683288) * t786;
  t789 = -intermediate_der5523 * ((1074.1165326382541 + intermediate_der7143 *
    -0.2214565261064077) + t337 * 0.00037212980109010952) + ((900.63941224837913
    + intermediate_der7143 * -0.044484923911364271) + t337 *
    0.00036936011832043369) * intermediate_der5523;
  t786 = -t528 * ((1074.1165326382541 + intermediate_der7143 *
                   -0.2214565261064077) + t337 * 0.00037212980109010952) +
    ((1479.6504774710445 + intermediate_der7143 * 1.200211433705052) + t337 *
     -0.00038614513167842338) * t528;
  intermediate_der7143 = ((t534 * -0.2214565261064077 + t409 *
    0.00037212980109010952) * ((1.0 - intermediate_der7344) -
    intermediate_der7345) + (t534 * 1.200211433705052 + t409 *
    -0.00038614513167842338) * intermediate_der7344) + (t534 *
    -0.044484923911364271 + t409 * 0.00036936011832043369) *
    intermediate_der7345;
  intermediate_der7344 = -intermediate_der6082 * ((1074.1165326382541 +
    intermediate_der7346 * -0.2214565261064077) + t340 * 0.00037212980109010952)
    + ((900.63941224837913 + intermediate_der7346 * -0.044484923911364271) +
       t340 * 0.00036936011832043369) * intermediate_der6082;
  intermediate_der7345 = -t535 * ((1074.1165326382541 + intermediate_der7346 *
    -0.2214565261064077) + t340 * 0.00037212980109010952) + ((1479.6504774710445
    + intermediate_der7346 * 1.200211433705052) + t340 * -0.00038614513167842338)
    * t535;
  intermediate_der7346 = ((t541 * -0.2214565261064077 + t412 *
    0.00037212980109010952) * ((1.0 - intermediate_der7768) -
    intermediate_der7769) + (t541 * 1.200211433705052 + t412 *
    -0.00038614513167842338) * intermediate_der7768) + (t541 *
    -0.044484923911364271 + t412 * 0.00036936011832043369) *
    intermediate_der7769;
  intermediate_der7768 = -intermediate_der1429 * ((1074.1165326382541 + t589 *
    -0.2214565261064077) + t310 * 0.00037212980109010952) + ((900.63941224837913
    + t589 * -0.044484923911364271) + t310 * 0.00036936011832043369) *
    intermediate_der1429;
  intermediate_der7769 = -t442 * ((1074.1165326382541 + t589 *
    -0.2214565261064077) + t310 * 0.00037212980109010952) + ((1479.6504774710445
    + t589 * 1.200211433705052) + t310 * -0.00038614513167842338) * t442;
  t589 = ((t448 * -0.2214565261064077 + t382 * 0.00037212980109010952) * ((1.0 -
            t605) - t616) + (t448 * 1.200211433705052 + t382 *
           -0.00038614513167842338) * t605) + (t448 * -0.044484923911364271 +
    t382 * 0.00036936011832043369) * t616;
  t605 = -intermediate_der1992 * ((1074.1165326382541 + intermediate_der8370 *
    -0.2214565261064077) + t313 * 0.00037212980109010952) + ((900.63941224837913
    + intermediate_der8370 * -0.044484923911364271) + t313 *
    0.00036936011832043369) * intermediate_der1992;
  t616 = ((t455 * -0.2214565261064077 + t385 * 0.00037212980109010952) * ((1.0 -
            t607) - intermediate_der8369) + (t455 * 1.200211433705052 + t385 *
           -0.00038614513167842338) * t607) + (t455 * -0.044484923911364271 +
    t385 * 0.00036936011832043369) * intermediate_der8369;
  t607 = -t449 * ((1074.1165326382541 + intermediate_der8370 *
                   -0.2214565261064077) + t313 * 0.00037212980109010952) +
    ((1479.6504774710445 + intermediate_der8370 * 1.200211433705052) + t313 *
     -0.00038614513167842338) * t449;
  intermediate_der8369 = -intermediate_der2739 * ((1074.1165326382541 +
    intermediate_der8371 * -0.2214565261064077) + t316 * 0.00037212980109010952)
    + ((12825.281119790017 + intermediate_der8371 * 6.9647057412830984) + t316 *
       -0.007052486824683288) * intermediate_der2739;
  intermediate_der8370 = -intermediate_der2738 * ((1074.1165326382541 +
    intermediate_der8371 * -0.2214565261064077) + t316 * 0.00037212980109010952)
    + ((1479.6504774710445 + intermediate_der8371 * 1.200211433705052) + t316 *
       -0.00038614513167842338) * intermediate_der2738;
  intermediate_der8371 = ((t483 * -0.2214565261064077 + t388 *
    0.00037212980109010952) * ((1.0 - intermediate_der8421) -
    intermediate_der8422) + (t483 * 1.200211433705052 + t388 *
    -0.00038614513167842338) * intermediate_der8421) + (t483 *
    6.9647057412830984 + t388 * -0.007052486824683288) * intermediate_der8422;
  intermediate_der8421 = -t486 * ((1074.1165326382541 + intermediate_der8423 *
    -0.2214565261064077) + t319 * 0.00037212980109010952) + ((12825.281119790017
    + intermediate_der8423 * 6.9647057412830984) + t319 * -0.007052486824683288)
    * t486;
  intermediate_der8422 = -t485 * ((1074.1165326382541 + intermediate_der8423 *
    -0.2214565261064077) + t319 * 0.00037212980109010952) + ((1479.6504774710445
    + intermediate_der8423 * 1.200211433705052) + t319 * -0.00038614513167842338)
    * t485;
  intermediate_der8423 = ((t492 * -0.2214565261064077 + t391 *
    0.00037212980109010952) * ((1.0 - intermediate_der8451) -
    intermediate_der8452) + (t492 * 1.200211433705052 + t391 *
    -0.00038614513167842338) * intermediate_der8451) + (t492 *
    6.9647057412830984 + t391 * -0.007052486824683288) * intermediate_der8452;
  intermediate_der8451 = -intermediate_der2964 * ((1074.1165326382541 +
    intermediate_der8666 * -0.2214565261064077) + t322 * 0.00037212980109010952)
    + ((12825.281119790017 + intermediate_der8666 * 6.9647057412830984) + t322 *
       -0.007052486824683288) * intermediate_der2964;
  intermediate_der8452 = ((t499 * -0.2214565261064077 + t394 *
    0.00037212980109010952) * ((1.0 - intermediate_der8453) -
    intermediate_der8665) + (t499 * 1.200211433705052 + t394 *
    -0.00038614513167842338) * intermediate_der8453) + (t499 *
    6.9647057412830984 + t394 * -0.007052486824683288) * intermediate_der8665;
  intermediate_der8453 = -t493 * ((1074.1165326382541 + intermediate_der8666 *
    -0.2214565261064077) + t322 * 0.00037212980109010952) + ((1479.6504774710445
    + intermediate_der8666 * 1.200211433705052) + t322 * -0.00038614513167842338)
    * t493;
  intermediate_der8665 = -intermediate_der3737 * ((1074.1165326382541 + t562 *
    -0.2214565261064077) + t325 * 0.00037212980109010952) + ((900.63941224837913
    + t562 * -0.044484923911364271) + t325 * 0.00036936011832043369) *
    intermediate_der3737;
  intermediate_der8666 = ((t506 * -0.2214565261064077 + t397 *
    0.00037212980109010952) * ((1.0 - intermediate_der8667) - t547) + (t506 *
    1.200211433705052 + t397 * -0.00038614513167842338) * intermediate_der8667)
    + (t506 * -0.044484923911364271 + t397 * 0.00036936011832043369) * t547;
  intermediate_der8667 = -t500 * ((1074.1165326382541 + t562 *
    -0.2214565261064077) + t325 * 0.00037212980109010952) + ((1479.6504774710445
    + t562 * 1.200211433705052) + t325 * -0.00038614513167842338) * t500;
  t562 = X[6ULL] * X[6ULL];
  t189[0ULL] = (-(1.0 / (X[6ULL] == 0.0 ? 1.0E-16 : X[6ULL])) *
                intermediate_der4471 + -(-1.0 / (t562 == 0.0 ? 1.0E-16 : t562)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I) *
    2677.3120849090419 / 12.896402563644669;
  t189[1ULL] = ((intrm_sf_mf_1171 - intrm_sf_mf_1064) * intermediate_der4471 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
                intermediate_der6888) * 2.6773120849090417 / 2246.65922904024;
  t189[2ULL] = intermediate_der4471 * 2677.3120849090419;
  t189[3ULL] = intermediate_der4471 * 2677.3120849090419;
  t189[4ULL] = 1.0 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) *
    intermediate_der4471 * 2677.3120849090419 / 12.896402563644669;
  t190[0ULL] = -(1.0 / (X[6ULL] == 0.0 ? 1.0E-16 : X[6ULL])) *
    intermediate_der4470 * 2677.3120849090419 / 12.896402563644669;
  t190[1ULL] = ((intrm_sf_mf_1171 - intrm_sf_mf_1064) * intermediate_der4470 +
                (t578 - intermediate_der4424) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I) *
    2.6773120849090417 / 2246.65922904024;
  t190[2ULL] = intermediate_der4470 * 2677.3120849090419;
  t190[3ULL] = intermediate_der4470 * 2677.3120849090419;
  t190[4ULL] = 1.0 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) *
    intermediate_der4470 * 2677.3120849090419 / 12.896402563644669;
  t191[0ULL] = -(1.0 / (X[6ULL] == 0.0 ? 1.0E-16 : X[6ULL])) * t433 *
    2677.3120849090419 / 12.896402563644669;
  t191[1ULL] = ((intrm_sf_mf_1171 - intrm_sf_mf_1064) * t433 + (t590 -
    intermediate_der4425) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I) *
    2.6773120849090417 / 2246.65922904024;
  t191[2ULL] = t433 * 2677.3120849090419;
  t191[3ULL] = t433 * 2677.3120849090419;
  t191[4ULL] = 1.0 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) * t433 *
    2677.3120849090419 / 12.896402563644669;
  t578 = X[9ULL] * X[9ULL];
  t192[0ULL] = (-(1.0 / (X[9ULL] == 0.0 ? 1.0E-16 : X[9ULL])) *
                intermediate_der5013 + -(-1.0 / (t578 == 0.0 ? 1.0E-16 : t578)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I) *
    2677.3120849090419 / 13.896402563644669;
  t192[1ULL] = ((intrm_sf_mf_1308 - intrm_sf_mf_1201) * intermediate_der5013 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I *
                intermediate_der7008) * 2.6773120849090417 / 2448.8207083326588;
  t192[2ULL] = intermediate_der5013 * 2677.3120849090419;
  t192[3ULL] = intermediate_der5013 * 2677.3120849090419;
  t192[4ULL] = 1.0 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) *
    intermediate_der5013 * 2677.3120849090419 / 13.896402563644669;
  t193[0ULL] = -(1.0 / (X[9ULL] == 0.0 ? 1.0E-16 : X[9ULL])) *
    intermediate_der5012 * 2677.3120849090419 / 13.896402563644669;
  t193[1ULL] = ((intrm_sf_mf_1308 - intrm_sf_mf_1201) * intermediate_der5012 +
                (t591 - intermediate_der4966) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I) *
    2.6773120849090417 / 2448.8207083326588;
  t193[2ULL] = intermediate_der5012 * 2677.3120849090419;
  t193[3ULL] = intermediate_der5012 * 2677.3120849090419;
  t193[4ULL] = 1.0 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) *
    intermediate_der5012 * 2677.3120849090419 / 13.896402563644669;
  t194[0ULL] = -(1.0 / (X[9ULL] == 0.0 ? 1.0E-16 : X[9ULL])) * t435 *
    2677.3120849090419 / 13.896402563644669;
  t194[1ULL] = ((intrm_sf_mf_1308 - intrm_sf_mf_1201) * t435 +
                (intermediate_der7007 - intermediate_der4967) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I) *
    2.6773120849090417 / 2448.8207083326588;
  t194[2ULL] = t435 * 2677.3120849090419;
  t194[3ULL] = t435 * 2677.3120849090419;
  t194[4ULL] = 1.0 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) * t435 *
    2677.3120849090419 / 13.896402563644669;
  t590 = X[12ULL] * X[12ULL];
  t195[0ULL] = (-(1.0 / (X[12ULL] == 0.0 ? 1.0E-16 : X[12ULL])) *
                intermediate_der1476 + -(-1.0 / (t590 == 0.0 ? 1.0E-16 : t590)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I) *
    2677.3120849090419;
  t195[1ULL] = ((intrm_sf_mf_311 - intrm_sf_mf_204) * intermediate_der1476 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I * t589)
    * 2.6773120849090417 / 2172.7681408465714;
  t195[2ULL] = intermediate_der1476 * 2677.3120849090419;
  t195[3ULL] = intermediate_der1476 * 2677.3120849090419;
  t195[4ULL] = 1.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) *
    intermediate_der1476 * 2677.3120849090419;
  t196[0ULL] = -(1.0 / (X[12ULL] == 0.0 ? 1.0E-16 : X[12ULL])) *
    intermediate_der1477 * 2677.3120849090419;
  t196[1ULL] = ((intrm_sf_mf_311 - intrm_sf_mf_204) * intermediate_der1477 +
                (intermediate_der7768 - intermediate_der1430) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I) *
    2.6773120849090417 / 2172.7681408465714;
  t196[2ULL] = intermediate_der1477 * 2677.3120849090419;
  t196[3ULL] = intermediate_der1477 * 2677.3120849090419;
  t196[4ULL] = 1.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) *
    intermediate_der1477 * 2677.3120849090419;
  t197[0ULL] = -(1.0 / (X[12ULL] == 0.0 ? 1.0E-16 : X[12ULL])) * t416 *
    2677.3120849090419;
  t197[1ULL] = ((intrm_sf_mf_311 - intrm_sf_mf_204) * t416 +
                (intermediate_der7769 - intermediate_der1431) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I) *
    2.6773120849090417 / 2172.7681408465714;
  t197[2ULL] = t416 * 2677.3120849090419;
  t197[3ULL] = t416 * 2677.3120849090419;
  t197[4ULL] = 1.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) * t416 *
    2677.3120849090419;
  t590 = X[15ULL] * X[15ULL];
  t198[0ULL] = (-(1.0 / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL])) *
                intermediate_der2040 + -(-1.0 / (t590 == 0.0 ? 1.0E-16 : t590)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I) *
    2677.3120849090419 / 1.5549856083302016;
  t198[1ULL] = ((intrm_sf_mf_448 - intrm_sf_mf_341) * intermediate_der2040 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I * t616)
    * 2.6773120849090417 / 2374.9296201389902;
  t198[2ULL] = intermediate_der2040 * 2677.3120849090419;
  t198[3ULL] = intermediate_der2040 * 2677.3120849090419;
  t198[4ULL] = 1.0 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) *
    intermediate_der2040 * 2677.3120849090419 / 1.5549856083302016;
  t199[0ULL] = -(1.0 / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL])) *
    intermediate_der2039 * 2677.3120849090419 / 1.5549856083302016;
  t199[1ULL] = ((intrm_sf_mf_448 - intrm_sf_mf_341) * intermediate_der2039 +
                (t605 - intermediate_der1993) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I) *
    2.6773120849090417 / 2374.9296201389902;
  t199[2ULL] = intermediate_der2039 * 2677.3120849090419;
  t199[3ULL] = intermediate_der2039 * 2677.3120849090419;
  t199[4ULL] = 1.0 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) *
    intermediate_der2039 * 2677.3120849090419 / 1.5549856083302016;
  t200[0ULL] = -(1.0 / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL])) * t418 *
    2677.3120849090419 / 1.5549856083302016;
  t200[1ULL] = ((intrm_sf_mf_448 - intrm_sf_mf_341) * t418 + (t607 -
    intermediate_der1994) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I) *
    2.6773120849090417 / 2374.9296201389902;
  t200[2ULL] = t418 * 2677.3120849090419;
  t200[3ULL] = t418 * 2677.3120849090419;
  t200[4ULL] = 1.0 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) * t418 *
    2677.3120849090419 / 1.5549856083302016;
  t616 = X[19ULL] * X[19ULL];
  t201[0ULL] = (-(1.0 / (X[19ULL] == 0.0 ? 1.0E-16 : X[19ULL])) *
                intermediate_der766 + -(-1.0 / (t616 == 0.0 ? 1.0E-16 : t616)) *
                t765) * 7.8539816339744828 / 12.896402563644669;
  t201[1ULL] = ((intrm_sf_mf_136 - t755) * intermediate_der766 + t765 * t704) *
    0.0078539816339744835 / 2246.65922904024;
  t201[2ULL] = 1.0 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) *
    intermediate_der766 * 7.8539816339744828 / 12.896402563644669;
  t201[3ULL] = intermediate_der766 * 7.8539816339744828;
  t201[4ULL] = intermediate_der766 * 7.8539816339744828;
  t202[0ULL] = -(1.0 / (X[19ULL] == 0.0 ? 1.0E-16 : X[19ULL])) *
    intermediate_der763 * 7.8539816339744828 / 12.896402563644669;
  t202[1ULL] = (intrm_sf_mf_136 - t755) * intermediate_der763 *
    0.0078539816339744835 / 2246.65922904024;
  t704 = X[20ULL] * X[20ULL];
  t202[2ULL] = (1.0 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) *
                intermediate_der763 + -1.0 / (t704 == 0.0 ? 1.0E-16 : t704) *
                t765) * 7.8539816339744828 / 12.896402563644669;
  t202[3ULL] = intermediate_der763 * 7.8539816339744828;
  t202[4ULL] = intermediate_der763 * 7.8539816339744828;
  t203[0ULL] = -(1.0 / (X[19ULL] == 0.0 ? 1.0E-16 : X[19ULL])) * t414 *
    7.8539816339744828 / 12.896402563644669;
  t203[1ULL] = ((intrm_sf_mf_136 - t755) * t414 + (intermediate_der7103 -
    intermediate_der718) * t765) * 0.0078539816339744835 / 2246.65922904024;
  t203[2ULL] = 1.0 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) * t414 *
    7.8539816339744828 / 12.896402563644669;
  t203[3ULL] = t414 * 7.8539816339744828;
  t203[4ULL] = t414 * 7.8539816339744828;
  t204[0ULL] = -(1.0 / (X[19ULL] == 0.0 ? 1.0E-16 : X[19ULL])) *
    intermediate_der765 * 7.8539816339744828 / 12.896402563644669;
  t204[1ULL] = ((intrm_sf_mf_136 - t755) * intermediate_der765 +
                (intermediate_der7102 - intermediate_der717) * t765) *
    0.0078539816339744835 / 2246.65922904024;
  t204[2ULL] = 1.0 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) *
    intermediate_der765 * 7.8539816339744828 / 12.896402563644669;
  t204[3ULL] = intermediate_der765 * 7.8539816339744828;
  t204[4ULL] = intermediate_der765 * 7.8539816339744828;
  t205[0ULL] = -(1.0 / (X[12ULL] == 0.0 ? 1.0E-16 : X[12ULL])) *
    intermediate_der1474 * 2677.3120849090419;
  t205[1ULL] = (intrm_sf_mf_311 - intrm_sf_mf_204) * intermediate_der1474 *
    2.6773120849090417 / 2172.7681408465714;
  t205[2ULL] = intermediate_der1474 * 2677.3120849090419;
  t205[3ULL] = intermediate_der1474 * 2677.3120849090419;
  t755 = X[23ULL] * X[23ULL];
  t205[4ULL] = (1.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) *
                intermediate_der1474 + -1.0 / (t755 == 0.0 ? 1.0E-16 : t755) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I) *
    2677.3120849090419;
  t206[0ULL] = -(1.0 / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL])) *
    intermediate_der2037 * 2677.3120849090419 / 1.5549856083302016;
  t206[1ULL] = (intrm_sf_mf_448 - intrm_sf_mf_341) * intermediate_der2037 *
    2.6773120849090417 / 2374.9296201389902;
  t206[2ULL] = intermediate_der2037 * 2677.3120849090419;
  t206[3ULL] = intermediate_der2037 * 2677.3120849090419;
  t755 = X[24ULL] * X[24ULL];
  t206[4ULL] = (1.0 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) *
                intermediate_der2037 + -1.0 / (t755 == 0.0 ? 1.0E-16 : t755) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I) *
    2677.3120849090419 / 1.5549856083302016;
  t207[0ULL] = (1.0 /
                (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6 ==
                 0.0 ? 1.0E-16 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6)
                * intermediate_der2620 + -1.0 / (t469 == 0.0 ? 1.0E-16 : t469) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17)
    * 0.0040159681273635624;
  t207[1ULL] = intermediate_der2627 * 100.0 / 16.703067073570942;
  t207[2ULL] = (-t419 * intermediate_der2620 + -intermediate_der2600 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28)
    * 0.0040159681273635624;
  t207[3ULL] = intermediate_der2625 * 0.001 / 16.703067073570942;
  t208[0ULL] = (1.0 /
                (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6 ==
                 0.0 ? 1.0E-16 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C6)
                * intermediate_der2559 + -1.0 / (t469 == 0.0 ? 1.0E-16 : t469) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28 *
                intermediate_der2601) * 0.0040159681273635624;
  t208[1ULL] = intermediate_der2628 * 100.0 / 16.703067073570942;
  t208[2ULL] = (-t419 * intermediate_der2559 + -t456 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Fuel_Cell_Coolant_C28)
    * 0.0040159681273635624;
  t208[3ULL] = t146_idx_0 * 0.001 / 16.703067073570942;
  t209[0ULL] = (1.0 / (t420 == 0.0 ? 1.0E-16 : t420) * t473 + -1.0 / (t479 ==
    0.0 ? 1.0E-16 : t479) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I * t464)
    * 0.00093750000000000007;
  t209[1ULL] = intermediate_der2712 * 100.0 / 3.8992155527272074;
  t209[2ULL] = (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I *
                t473 + -intermediate_der2683 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I) *
    0.00093750000000000007;
  t209[3ULL] = intermediate_der2710 * 0.001 / 3.8992155527272074;
  t210[0ULL] = (1.0 / (t420 == 0.0 ? 1.0E-16 : t420) * t470 + -1.0 / (t479 ==
    0.0 ? 1.0E-16 : t479) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I *
                intermediate_der2684) * 0.00093750000000000007;
  t210[1ULL] = intermediate_der2713 * 100.0 / 3.8992155527272074;
  t210[2ULL] = (-Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_alpha_I *
                t470 + -t462 *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Radiator_rho_I) *
    0.00093750000000000007;
  t210[3ULL] = intermediate_der2711 * 0.001 / 3.8992155527272074;
  t765 = X[32ULL] * X[32ULL];
  t211[0ULL] = (-(1.0 / (X[32ULL] == 0.0 ? 1.0E-16 : X[32ULL])) * t480 + -(-1.0 /
    (t765 == 0.0 ? 1.0E-16 : t765)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25)
    * 12.500000000000004 / 12.896402563644669;
  t211[1ULL] = ((intrm_sf_mf_593 - intrm_sf_mf_568) * t480 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 *
                intermediate_der8371) * 0.012500000000000002 / 2246.65922904024;
  t211[2ULL] = 1.0 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * t480 *
    12.500000000000004 / 12.896402563644669;
  t211[3ULL] = t480 * 12.500000000000004;
  t211[4ULL] = t480 * 12.500000000000004;
  t212[0ULL] = -(1.0 / (X[32ULL] == 0.0 ? 1.0E-16 : X[32ULL])) * t475 *
    12.500000000000004 / 12.896402563644669;
  t212[1ULL] = (intrm_sf_mf_593 - intrm_sf_mf_568) * t475 * 0.012500000000000002
    / 2246.65922904024;
  t765 = X[33ULL] * X[33ULL];
  t212[2ULL] = (1.0 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * t475 + -1.0 /
                (t765 == 0.0 ? 1.0E-16 : t765) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25)
    * 12.500000000000004 / 12.896402563644669;
  t212[3ULL] = t475 * 12.500000000000004;
  t212[4ULL] = t475 * 12.500000000000004;
  t213[0ULL] = -(1.0 / (X[32ULL] == 0.0 ? 1.0E-16 : X[32ULL])) * t478 *
    12.500000000000004 / 12.896402563644669;
  t213[1ULL] = ((intrm_sf_mf_593 - intrm_sf_mf_568) * t478 +
                (intermediate_der8369 - intermediate_der2740) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25)
    * 0.012500000000000002 / 2246.65922904024;
  t213[2ULL] = 1.0 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * t478 *
    12.500000000000004 / 12.896402563644669;
  t213[3ULL] = t478 * 12.500000000000004;
  t213[4ULL] = t478 * 12.500000000000004;
  t214[0ULL] = -(1.0 / (X[32ULL] == 0.0 ? 1.0E-16 : X[32ULL])) * t423 *
    12.500000000000004 / 12.896402563644669;
  t214[1ULL] = ((intrm_sf_mf_593 - intrm_sf_mf_568) * t423 +
                (intermediate_der8370 - t474) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25)
    * 0.012500000000000002 / 2246.65922904024;
  t214[2ULL] = 1.0 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) * t423 *
    12.500000000000004 / 12.896402563644669;
  t214[3ULL] = t423 * 12.500000000000004;
  t214[4ULL] = t423 * 12.500000000000004;
  t765 = X[36ULL] * X[36ULL];
  t215[0ULL] = (-(1.0 / (X[36ULL] == 0.0 ? 1.0E-16 : X[36ULL])) *
                intermediate_der2894 + -(-1.0 / (t765 == 0.0 ? 1.0E-16 : t765)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I) *
    12000.0 / 12.896402563644669;
  t215[1ULL] = ((intrm_sf_mf_660 - intrm_sf_mf_647) * intermediate_der2894 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I *
                intermediate_der8423) * 12.0 / 2246.65922904024;
  t215[2ULL] = 1.0 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) *
    intermediate_der2894 * 12000.0 / 12.896402563644669;
  t215[3ULL] = intermediate_der2894 * 12000.0;
  t215[4ULL] = intermediate_der2894 * 12000.0;
  t216[0ULL] = -(1.0 / (X[36ULL] == 0.0 ? 1.0E-16 : X[36ULL])) *
    intermediate_der2892 * 12000.0 / 12.896402563644669;
  t216[1ULL] = (intrm_sf_mf_660 - intrm_sf_mf_647) * intermediate_der2892 * 12.0
    / 2246.65922904024;
  t765 = X[37ULL] * X[37ULL];
  t216[2ULL] = (1.0 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) *
                intermediate_der2892 + -1.0 / (t765 == 0.0 ? 1.0E-16 : t765) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I) *
    12000.0 / 12.896402563644669;
  t216[3ULL] = intermediate_der2892 * 12000.0;
  t216[4ULL] = intermediate_der2892 * 12000.0;
  t217[0ULL] = -(1.0 / (X[36ULL] == 0.0 ? 1.0E-16 : X[36ULL])) *
    intermediate_der2895 * 12000.0 / 12.896402563644669;
  t217[1ULL] = ((intrm_sf_mf_660 - intrm_sf_mf_647) * intermediate_der2895 +
                (intermediate_der8421 - intermediate_der2890) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I) *
    12.0 / 2246.65922904024;
  t217[2ULL] = 1.0 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) *
    intermediate_der2895 * 12000.0 / 12.896402563644669;
  t217[3ULL] = intermediate_der2895 * 12000.0;
  t217[4ULL] = intermediate_der2895 * 12000.0;
  t218[0ULL] = -(1.0 / (X[36ULL] == 0.0 ? 1.0E-16 : X[36ULL])) * t425 * 12000.0 /
    12.896402563644669;
  t218[1ULL] = ((intrm_sf_mf_660 - intrm_sf_mf_647) * t425 +
                (intermediate_der8422 - intermediate_der2891) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I) *
    12.0 / 2246.65922904024;
  t218[2ULL] = 1.0 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) * t425 * 12000.0 /
    12.896402563644669;
  t218[3ULL] = t425 * 12000.0;
  t218[4ULL] = t425 * 12000.0;
  t765 = X[40ULL] * X[40ULL];
  t219[0ULL] = (-(1.0 / (X[40ULL] == 0.0 ? 1.0E-16 : X[40ULL])) *
                intermediate_der3012 + -(-1.0 / (t765 == 0.0 ? 1.0E-16 : t765)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I) *
    7.8539816339744828 / 12.896402563644669;
  t219[1ULL] = ((intrm_sf_mf_773 - intrm_sf_mf_666) * intermediate_der3012 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
                intermediate_der8452) * 0.0078539816339744835 / 2246.65922904024;
  t219[2ULL] = 1.0 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) *
    intermediate_der3012 * 7.8539816339744828 / 12.896402563644669;
  t219[3ULL] = intermediate_der3012 * 7.8539816339744828;
  t219[4ULL] = intermediate_der3012 * 7.8539816339744828;
  t220[0ULL] = -(1.0 / (X[40ULL] == 0.0 ? 1.0E-16 : X[40ULL])) *
    intermediate_der3009 * 7.8539816339744828 / 12.896402563644669;
  t220[1ULL] = (intrm_sf_mf_773 - intrm_sf_mf_666) * intermediate_der3009 *
    0.0078539816339744835 / 2246.65922904024;
  t765 = X[41ULL] * X[41ULL];
  t220[2ULL] = (1.0 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) *
                intermediate_der3009 + -1.0 / (t765 == 0.0 ? 1.0E-16 : t765) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I) *
    7.8539816339744828 / 12.896402563644669;
  t220[3ULL] = intermediate_der3009 * 7.8539816339744828;
  t220[4ULL] = intermediate_der3009 * 7.8539816339744828;
  t221[0ULL] = -(1.0 / (X[40ULL] == 0.0 ? 1.0E-16 : X[40ULL])) * t427 *
    7.8539816339744828 / 12.896402563644669;
  t221[1ULL] = ((intrm_sf_mf_773 - intrm_sf_mf_666) * t427 +
                (intermediate_der8453 - intermediate_der2966) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I) *
    0.0078539816339744835 / 2246.65922904024;
  t221[2ULL] = 1.0 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) * t427 *
    7.8539816339744828 / 12.896402563644669;
  t221[3ULL] = t427 * 7.8539816339744828;
  t221[4ULL] = t427 * 7.8539816339744828;
  t222[0ULL] = -(1.0 / (X[40ULL] == 0.0 ? 1.0E-16 : X[40ULL])) *
    intermediate_der3011 * 7.8539816339744828 / 12.896402563644669;
  t222[1ULL] = ((intrm_sf_mf_773 - intrm_sf_mf_666) * intermediate_der3011 +
                (intermediate_der8451 - intermediate_der2965) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I) *
    0.0078539816339744835 / 2246.65922904024;
  t222[2ULL] = 1.0 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) *
    intermediate_der3011 * 7.8539816339744828 / 12.896402563644669;
  t222[3ULL] = intermediate_der3011 * 7.8539816339744828;
  t222[4ULL] = intermediate_der3011 * 7.8539816339744828;
  t755 = X[44ULL] * X[44ULL];
  t223[0ULL] = (1.0 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]) *
                intermediate_der3740 + -1.0 / (t755 == 0.0 ? 1.0E-16 : t755) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho)
    * 29.999999999999996;
  t223[1ULL] = -(1.0 / (X[45ULL] == 0.0 ? 1.0E-16 : X[45ULL])) *
    intermediate_der3740 * 29.999999999999996;
  t223[2ULL] = (intrm_sf_mf_920 - intrm_sf_mf_901) * intermediate_der3740 * 0.03
    / 2172.7681408465714;
  t223[3ULL] = intermediate_der3740 * 29.999999999999996;
  t223[4ULL] = intermediate_der3740 * 29.999999999999996;
  t224[0ULL] = 1.0 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]) *
    intermediate_der3743 * 29.999999999999996;
  t765 = X[45ULL] * X[45ULL];
  t224[1ULL] = (-(1.0 / (X[45ULL] == 0.0 ? 1.0E-16 : X[45ULL])) *
                intermediate_der3743 + -(-1.0 / (t765 == 0.0 ? 1.0E-16 : t765)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho)
    * 29.999999999999996;
  t224[2ULL] = ((intrm_sf_mf_920 - intrm_sf_mf_901) * intermediate_der3743 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho *
                intermediate_der8666) * 0.03 / 2172.7681408465714;
  t224[3ULL] = intermediate_der3743 * 29.999999999999996;
  t224[4ULL] = intermediate_der3743 * 29.999999999999996;
  t225[0ULL] = 1.0 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]) *
    intermediate_der3742 * 29.999999999999996;
  t225[1ULL] = -(1.0 / (X[45ULL] == 0.0 ? 1.0E-16 : X[45ULL])) *
    intermediate_der3742 * 29.999999999999996;
  t225[2ULL] = ((intrm_sf_mf_920 - intrm_sf_mf_901) * intermediate_der3742 +
                (intermediate_der8665 - intermediate_der3738) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho)
    * 0.03 / 2172.7681408465714;
  t225[3ULL] = intermediate_der3742 * 29.999999999999996;
  t225[4ULL] = intermediate_der3742 * 29.999999999999996;
  t226[0ULL] = 1.0 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]) * t429 *
    29.999999999999996;
  t226[1ULL] = -(1.0 / (X[45ULL] == 0.0 ? 1.0E-16 : X[45ULL])) * t429 *
    29.999999999999996;
  t226[2ULL] = ((intrm_sf_mf_920 - intrm_sf_mf_901) * t429 +
                (intermediate_der8667 - intermediate_der3739) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho)
    * 0.03 / 2172.7681408465714;
  t226[3ULL] = t429 * 29.999999999999996;
  t226[4ULL] = t429 * 29.999999999999996;
  t765 = X[48ULL] * X[48ULL];
  t227[0ULL] = (-(1.0 / (X[48ULL] == 0.0 ? 1.0E-16 : X[48ULL])) *
                intermediate_der3905 + -(-1.0 / (t765 == 0.0 ? 1.0E-16 : t765)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I) *
    49.087385212340521 / 12.896402563644669;
  t227[1ULL] = ((intrm_sf_mf_1034 - intrm_sf_mf_927) * intermediate_der3905 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
                intermediate_der6768) * 0.049087385212340524 / 2246.65922904024;
  t227[2ULL] = intermediate_der3905 * 49.087385212340521;
  t227[3ULL] = intermediate_der3905 * 49.087385212340521;
  t227[4ULL] = 1.0 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) *
    intermediate_der3905 * 49.087385212340521 / 12.896402563644669;
  t228[0ULL] = -(1.0 / (X[48ULL] == 0.0 ? 1.0E-16 : X[48ULL])) *
    intermediate_der3906 * 49.087385212340521 / 12.896402563644669;
  t228[1ULL] = ((intrm_sf_mf_1034 - intrm_sf_mf_927) * intermediate_der3906 +
                (t542 - intermediate_der3859) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I) *
    0.049087385212340524 / 2246.65922904024;
  t228[2ULL] = intermediate_der3906 * 49.087385212340521;
  t228[3ULL] = intermediate_der3906 * 49.087385212340521;
  t228[4ULL] = 1.0 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) *
    intermediate_der3906 * 49.087385212340521 / 12.896402563644669;
  t229[0ULL] = -(1.0 / (X[48ULL] == 0.0 ? 1.0E-16 : X[48ULL])) * t431 *
    49.087385212340521 / 12.896402563644669;
  t229[1ULL] = ((intrm_sf_mf_1034 - intrm_sf_mf_927) * t431 +
                (intermediate_der6767 - intermediate_der3860) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I) *
    0.049087385212340524 / 2246.65922904024;
  t229[2ULL] = t431 * 49.087385212340521;
  t229[3ULL] = t431 * 49.087385212340521;
  t229[4ULL] = 1.0 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) * t431 *
    49.087385212340521 / 12.896402563644669;
  t230[0ULL] = -(1.0 / (X[48ULL] == 0.0 ? 1.0E-16 : X[48ULL])) *
    intermediate_der3903 * 49.087385212340521 / 12.896402563644669;
  t230[1ULL] = (intrm_sf_mf_1034 - intrm_sf_mf_927) * intermediate_der3903 *
    0.049087385212340524 / 2246.65922904024;
  t230[2ULL] = intermediate_der3903 * 49.087385212340521;
  t230[3ULL] = intermediate_der3903 * 49.087385212340521;
  t755 = X[51ULL] * X[51ULL];
  t230[4ULL] = (1.0 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) *
                intermediate_der3903 + -1.0 / (t755 == 0.0 ? 1.0E-16 : t755) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I) *
    49.087385212340521 / 12.896402563644669;
  t231[0ULL] = -(1.0 / (X[6ULL] == 0.0 ? 1.0E-16 : X[6ULL])) *
    intermediate_der4468 * 2677.3120849090419 / 12.896402563644669;
  t231[1ULL] = (intrm_sf_mf_1171 - intrm_sf_mf_1064) * intermediate_der4468 *
    2.6773120849090417 / 2246.65922904024;
  t231[2ULL] = intermediate_der4468 * 2677.3120849090419;
  t231[3ULL] = intermediate_der4468 * 2677.3120849090419;
  t755 = X[52ULL] * X[52ULL];
  t231[4ULL] = (1.0 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) *
                intermediate_der4468 + -1.0 / (t755 == 0.0 ? 1.0E-16 : t755) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I) *
    2677.3120849090419 / 12.896402563644669;
  t232[0ULL] = -(1.0 / (X[9ULL] == 0.0 ? 1.0E-16 : X[9ULL])) *
    intermediate_der5010 * 2677.3120849090419 / 13.896402563644669;
  t232[1ULL] = (intrm_sf_mf_1308 - intrm_sf_mf_1201) * intermediate_der5010 *
    2.6773120849090417 / 2448.8207083326588;
  t232[2ULL] = intermediate_der5010 * 2677.3120849090419;
  t232[3ULL] = intermediate_der5010 * 2677.3120849090419;
  t755 = X[53ULL] * X[53ULL];
  t232[4ULL] = (1.0 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) *
                intermediate_der5010 + -1.0 / (t755 == 0.0 ? 1.0E-16 : t755) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I) *
    2677.3120849090419 / 13.896402563644669;
  t765 = X[54ULL] * X[54ULL];
  t233[0ULL] = (-(1.0 / (X[54ULL] == 0.0 ? 1.0E-16 : X[54ULL])) *
                intermediate_der5571 + -(-1.0 / (t765 == 0.0 ? 1.0E-16 : t765)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I) *
    49.087385212340521;
  t233[1ULL] = ((intrm_sf_mf_1446 - intrm_sf_mf_1339) * intermediate_der5571 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
                intermediate_der7143) * 0.049087385212340524 /
    2172.7681408465714;
  t233[2ULL] = intermediate_der5571 * 49.087385212340521;
  t233[3ULL] = intermediate_der5571 * 49.087385212340521;
  t233[4ULL] = 1.0 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) *
    intermediate_der5571 * 49.087385212340521;
  t234[0ULL] = -(1.0 / (X[54ULL] == 0.0 ? 1.0E-16 : X[54ULL])) *
    intermediate_der5570 * 49.087385212340521;
  t234[1ULL] = ((intrm_sf_mf_1446 - intrm_sf_mf_1339) * intermediate_der5570 +
                (t789 - intermediate_der5524) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I) *
    0.049087385212340524 / 2172.7681408465714;
  t234[2ULL] = intermediate_der5570 * 49.087385212340521;
  t234[3ULL] = intermediate_der5570 * 49.087385212340521;
  t234[4ULL] = 1.0 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) *
    intermediate_der5570 * 49.087385212340521;
  t235[0ULL] = -(1.0 / (X[54ULL] == 0.0 ? 1.0E-16 : X[54ULL])) * t437 *
    49.087385212340521;
  t235[1ULL] = ((intrm_sf_mf_1446 - intrm_sf_mf_1339) * t437 + (t786 -
    intermediate_der5525) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I) *
    0.049087385212340524 / 2172.7681408465714;
  t235[2ULL] = t437 * 49.087385212340521;
  t235[3ULL] = t437 * 49.087385212340521;
  t235[4ULL] = 1.0 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) * t437 *
    49.087385212340521;
  t236[0ULL] = -(1.0 / (X[54ULL] == 0.0 ? 1.0E-16 : X[54ULL])) *
    intermediate_der5568 * 49.087385212340521;
  t236[1ULL] = (intrm_sf_mf_1446 - intrm_sf_mf_1339) * intermediate_der5568 *
    0.049087385212340524 / 2172.7681408465714;
  t236[2ULL] = intermediate_der5568 * 49.087385212340521;
  t236[3ULL] = intermediate_der5568 * 49.087385212340521;
  t789 = X[57ULL] * X[57ULL];
  t236[4ULL] = (1.0 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) *
                intermediate_der5568 + -1.0 / (t789 == 0.0 ? 1.0E-16 : t789) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I) *
    49.087385212340521;
  t786 = X[58ULL] * X[58ULL];
  t237[0ULL] = (-(1.0 / (X[58ULL] == 0.0 ? 1.0E-16 : X[58ULL])) *
                intermediate_der6130 + -(-1.0 / (t786 == 0.0 ? 1.0E-16 : t786)) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I) *
    196.34954084936209;
  t237[1ULL] = ((intrm_sf_mf_1595 - intrm_sf_mf_1488) * intermediate_der6130 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I *
                intermediate_der7346) * 0.1963495408493621 / 2172.7681408465714;
  t237[2ULL] = 1.0 / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) *
    intermediate_der6130 * 196.34954084936209;
  t237[3ULL] = intermediate_der6130 * 196.34954084936209;
  t237[4ULL] = intermediate_der6130 * 196.34954084936209;
  t238[0ULL] = -(1.0 / (X[58ULL] == 0.0 ? 1.0E-16 : X[58ULL])) *
    intermediate_der6127 * 196.34954084936209;
  t238[1ULL] = (intrm_sf_mf_1595 - intrm_sf_mf_1488) * intermediate_der6127 *
    0.1963495408493621 / 2172.7681408465714;
  t786 = X[59ULL] * X[59ULL];
  t238[2ULL] = (1.0 / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) *
                intermediate_der6127 + -1.0 / (t786 == 0.0 ? 1.0E-16 : t786) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I) *
    196.34954084936209;
  t238[3ULL] = intermediate_der6127 * 196.34954084936209;
  t238[4ULL] = intermediate_der6127 * 196.34954084936209;
  t239[0ULL] = -(1.0 / (X[58ULL] == 0.0 ? 1.0E-16 : X[58ULL])) * t439 *
    196.34954084936209;
  t239[1ULL] = ((intrm_sf_mf_1595 - intrm_sf_mf_1488) * t439 +
                (intermediate_der7345 - intermediate_der6084) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I) *
    0.1963495408493621 / 2172.7681408465714;
  t239[2ULL] = 1.0 / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) * t439 *
    196.34954084936209;
  t239[3ULL] = t439 * 196.34954084936209;
  t239[4ULL] = t439 * 196.34954084936209;
  t240[0ULL] = -(1.0 / (X[58ULL] == 0.0 ? 1.0E-16 : X[58ULL])) *
    intermediate_der6129 * 196.34954084936209;
  t240[1ULL] = ((intrm_sf_mf_1595 - intrm_sf_mf_1488) * intermediate_der6129 +
                (intermediate_der7344 - intermediate_der6083) *
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I) *
    0.1963495408493621 / 2172.7681408465714;
  t240[2ULL] = 1.0 / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) *
    intermediate_der6129 * 196.34954084936209;
  t240[3ULL] = intermediate_der6129 * 196.34954084936209;
  t240[4ULL] = intermediate_der6129 * 196.34954084936209;
  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290] = t189[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 5ULL] = t190[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 10ULL] = t191[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 15ULL] = t192[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 20ULL] = t193[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 25ULL] = t194[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 30ULL] = t195[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 35ULL] = t196[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 40ULL] = t197[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 45ULL] = t198[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 50ULL] = t199[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 55ULL] = t200[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 60ULL] = t201[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 65ULL] = t202[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 70ULL] = t203[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 75ULL] = t204[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 80ULL] = t205[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 85ULL] = t206[t290];
  }

  t138[90ULL] = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan11
                 * intermediate_der2553 +
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15
                 * intermediate_der2554) * (X[26ULL] * 0.1 + 0.0001) * 0.001 /
    8385.55841330098;
  t138[91ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan11 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 * 0.1 *
    0.001 / 8385.55841330098;
  for (t290 = 0ULL; t290 < 4ULL; t290++) {
    t138[t290 + 92ULL] = t207[t290];
  }

  for (t290 = 0ULL; t290 < 4ULL; t290++) {
    t138[t290 + 96ULL] = t208[t290];
  }

  for (t290 = 0ULL; t290 < 4ULL; t290++) {
    t138[t290 + 100ULL] = t209[t290];
  }

  for (t290 = 0ULL; t290 < 4ULL; t290++) {
    t138[t290 + 104ULL] = t210[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 108ULL] = t211[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 113ULL] = t212[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 118ULL] = t213[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 123ULL] = t214[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 128ULL] = t215[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 133ULL] = t216[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 138ULL] = t217[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 143ULL] = t218[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 148ULL] = t219[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 153ULL] = t220[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 158ULL] = t221[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 163ULL] = t222[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 168ULL] = t223[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 173ULL] = t224[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 178ULL] = t225[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 183ULL] = t226[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 188ULL] = t227[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 193ULL] = t228[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 198ULL] = t229[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 203ULL] = t230[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 208ULL] = t231[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 213ULL] = t232[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 218ULL] = t233[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 223ULL] = t234[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 228ULL] = t235[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 233ULL] = t236[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 238ULL] = t237[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 243ULL] = t238[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 248ULL] = t239[t290];
  }

  for (t290 = 0ULL; t290 < 5ULL; t290++) {
    t138[t290 + 253ULL] = t240[t290];
  }

  for (b = 0; b < 258; b++) {
    out.mX[b] = t138[b];
  }

  (void)LC;
  (void)t791;
  return 0;
}
