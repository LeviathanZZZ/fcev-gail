/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_m.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_m(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t263, NeDsMethodOutput *t264)
{
  ETTS0 b_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 h_efOut;
  ETTS0 n_efOut;
  ETTS0 o_efOut;
  ETTS0 t4;
  ETTS0 t5;
  PmRealVector out;
  real_T X[480];
  real_T c_efOut[1];
  real_T d_efOut[1];
  real_T e_efOut[1];
  real_T f_efOut[1];
  real_T i_efOut[1];
  real_T j_efOut[1];
  real_T k_efOut[1];
  real_T l_efOut[1];
  real_T m_efOut[1];
  real_T p_efOut[1];
  real_T q_efOut[1];
  real_T r_efOut[1];
  real_T s_efOut[1];
  real_T t79[1];
  real_T t_efOut[1];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I;
  real_T intrm_sf_mf_1062;
  real_T intrm_sf_mf_1063;
  real_T intrm_sf_mf_1064;
  real_T intrm_sf_mf_1199;
  real_T intrm_sf_mf_1200;
  real_T intrm_sf_mf_1201;
  real_T intrm_sf_mf_1337;
  real_T intrm_sf_mf_1338;
  real_T intrm_sf_mf_1339;
  real_T intrm_sf_mf_1486;
  real_T intrm_sf_mf_1487;
  real_T intrm_sf_mf_1488;
  real_T intrm_sf_mf_593;
  real_T intrm_sf_mf_773;
  real_T intrm_sf_mf_900;
  real_T intrm_sf_mf_901;
  real_T intrm_sf_mf_920;
  real_T intrm_sf_mf_927;
  real_T t115;
  real_T t118;
  real_T t121;
  real_T t124;
  real_T t127;
  real_T t130;
  real_T t133;
  real_T t136;
  real_T t139;
  real_T t142;
  real_T t145;
  real_T t148;
  real_T t150;
  real_T t153;
  real_T t155;
  real_T t156;
  real_T t157;
  real_T t159;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t164;
  real_T t165;
  real_T t166;
  real_T t167;
  real_T t169;
  real_T t170;
  real_T t171;
  real_T t175;
  real_T t177;
  real_T t178;
  real_T t179;
  real_T t180;
  real_T t182;
  real_T t186;
  real_T t187;
  real_T t190;
  real_T t191;
  real_T t193;
  real_T t195;
  real_T t199;
  real_T t201;
  real_T t203;
  real_T t205;
  real_T t207;
  real_T t209;
  real_T t235;
  real_T t236;
  real_T t242;
  real_T t251;
  real_T t262;
  real_T t75_idx_0;
  size_t t10[1];
  size_t t7[1];
  size_t t8[1];
  int32_T b;
  for (b = 0; b < 480; b++) {
    X[b] = t263->mX.mX[b];
  }

  out = t264->mM;
  if (X[21ULL] <= 0.0) {
    t178 = 0.0;
  } else {
    t178 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    t180 = 0.0;
  } else {
    t180 = X[22ULL] >= 1.0 ? 1.0 : X[22ULL];
  }

  t251 = (((1.0 - t178) - t180) * 296.802103844292 + t178 * 461.523) + t180 *
    4124.48151675695;
  t182 = X[19ULL] * t251;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I = X[20ULL] / (t182 ==
    0.0 ? 1.0E-16 : t182);
  if (X[19ULL] <= 216.59999999999997) {
    t182 = 216.59999999999997;
  } else {
    t182 = X[19ULL] >= 623.15 ? 623.15 : X[19ULL];
  }

  t115 = t182 * t182;
  if (X[14ULL] <= 0.0) {
    t156 = 0.0;
  } else {
    t156 = X[14ULL] >= 1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    intrm_sf_mf_593 = 0.0;
  } else {
    intrm_sf_mf_593 = X[13ULL] >= 1.0 ? 1.0 : X[13ULL];
  }

  t155 = (((1.0 - t156) - intrm_sf_mf_593) * 296.802103844292 + t156 * 461.523)
    + intrm_sf_mf_593 * 259.836612622973;
  t170 = X[12ULL] * t155;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I = X[23ULL] / (t170 ==
    0.0 ? 1.0E-16 : t170);
  if (X[12ULL] <= 216.59999999999997) {
    t170 = 216.59999999999997;
  } else {
    t170 = X[12ULL] >= 623.15 ? 623.15 : X[12ULL];
  }

  t118 = t170 * t170;
  if (X[17ULL] <= 0.0) {
    intrm_sf_mf_773 = 0.0;
  } else {
    intrm_sf_mf_773 = X[17ULL] >= 1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    intrm_sf_mf_920 = 0.0;
  } else {
    intrm_sf_mf_920 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  t157 = (((1.0 - intrm_sf_mf_773) - intrm_sf_mf_920) * 296.802103844292 +
          intrm_sf_mf_773 * 461.523) + intrm_sf_mf_920 * 259.836612622973;
  t186 = X[15ULL] * t157;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I = X[24ULL] / (t186 ==
    0.0 ? 1.0E-16 : t186);
  if (X[15ULL] <= 216.59999999999997) {
    t186 = 216.59999999999997;
  } else {
    t186 = X[15ULL] >= 623.15 ? 623.15 : X[15ULL];
  }

  t121 = t186 * t186;
  t79[0ULL] = X[25ULL];
  t7[0] = 11ULL;
  t8[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t79[0ULL], &t7
    [0ULL], &t8[0ULL]);
  t4 = efOut;
  t79[0ULL] = 1.01325;
  t10[0] = 12ULL;
  tlu2_linear_linear_prelookup(&b_efOut.mField0[0ULL], &b_efOut.mField1[0ULL],
    &b_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t79[0ULL],
    &t10[0ULL], &t8[0ULL]);
  t5 = b_efOut;
  tlu2_2d_linear_linear_value(&c_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = c_efOut[0];
  t262 = t75_idx_0;
  tlu2_2d_linear_linear_value(&d_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = d_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 = t75_idx_0;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = e_efOut[0];
  t162 = t75_idx_0;
  tlu2_2d_linear_linear_value(&f_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = f_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 = t75_idx_0;
  t262 = t162 - t262 * t262 * X[25ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 / (t75_idx_0
    == 0.0 ? 1.0E-16 : t75_idx_0) * 100000.0;
  t79[0ULL] = X[28ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t79[0ULL],
    &t7[0ULL], &t8[0ULL]);
  t4 = g_efOut;
  t79[0ULL] = X[27ULL];
  tlu2_linear_linear_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t79[0ULL],
    &t10[0ULL], &t8[0ULL]);
  t5 = h_efOut;
  tlu2_2d_linear_linear_value(&i_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = i_efOut[0];
  t162 = t75_idx_0;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = j_efOut[0];
  t187 = t75_idx_0;
  tlu2_2d_linear_linear_value(&k_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = k_efOut[0];
  t161 = t75_idx_0;
  tlu2_2d_linear_linear_value(&l_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = l_efOut[0];
  t163 = t75_idx_0;
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t75_idx_0 = m_efOut[0];
  t166 = X[27ULL] / (t163 == 0.0 ? 1.0E-16 : t163) * 100.0 + t75_idx_0;
  t164 = (t161 - t162 * t166 * 1000.0) * t163 * 0.0040159681273635624;
  t161 = (t166 * t163 / (t187 == 0.0 ? 1.0E-16 : t187) * 0.01 - X[28ULL] * t162)
    * 0.0040159681273635624;
  t79[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField21, &t79[0ULL],
    &t7[0ULL], &t8[0ULL]);
  t4 = n_efOut;
  t79[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t79[0ULL],
    &t10[0ULL], &t8[0ULL]);
  t5 = o_efOut;
  tlu2_2d_linear_linear_value(&p_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField20, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t79[0] = p_efOut[0];
  t166 = t79[0ULL];
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t79[0] = q_efOut[0];
  t165 = t79[0ULL];
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t79[0] = r_efOut[0];
  t167 = t79[0ULL];
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t79[0] = s_efOut[0];
  t169 = t79[0ULL];
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t7[0ULL], &t10[0ULL], &t8[0ULL]);
  t79[0] = t_efOut[0];
  t171 = t79[0ULL];
  t150 = X[29ULL] / (t169 == 0.0 ? 1.0E-16 : t169) * 100.0 + t171;
  t171 = (t167 - t166 * t150 * 1000.0) * t169 * 0.00093750000000000007;
  t167 = (t150 * t169 / (t165 == 0.0 ? 1.0E-16 : t165) * 0.01 - X[30ULL] * t166)
    * 0.00093750000000000007;
  if (X[35ULL] <= 0.0) {
    t150 = 0.0;
  } else {
    t150 = X[35ULL] >= 1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    t190 = 0.0;
  } else {
    t190 = X[34ULL] >= 1.0 ? 1.0 : X[34ULL];
  }

  t191 = (((1.0 - t150) - t190) * 296.802103844292 + t150 * 461.523) + t190 *
    4124.48151675695;
  t193 = X[32ULL] * t191;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 = X[33ULL] /
    (t193 == 0.0 ? 1.0E-16 : t193);
  if (X[32ULL] <= 216.59999999999997) {
    t193 = 216.59999999999997;
  } else {
    t193 = X[32ULL] >= 623.15 ? 623.15 : X[32ULL];
  }

  t124 = t193 * t193;
  if (X[39ULL] <= 0.0) {
    t153 = 0.0;
  } else {
    t153 = X[39ULL] >= 1.0 ? 1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    t159 = 0.0;
  } else {
    t159 = X[38ULL] >= 1.0 ? 1.0 : X[38ULL];
  }

  t175 = (((1.0 - t153) - t159) * 296.802103844292 + t153 * 461.523) + t159 *
    4124.48151675695;
  t195 = X[36ULL] * t175;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I = X[37ULL] / (t195 ==
    0.0 ? 1.0E-16 : t195);
  if (X[36ULL] <= 216.59999999999997) {
    t195 = 216.59999999999997;
  } else {
    t195 = X[36ULL] >= 623.15 ? 623.15 : X[36ULL];
  }

  t127 = t195 * t195;
  if (X[42ULL] <= 0.0) {
    t177 = 0.0;
  } else {
    t177 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    t179 = 0.0;
  } else {
    t179 = X[43ULL] >= 1.0 ? 1.0 : X[43ULL];
  }

  t242 = (((1.0 - t177) - t179) * 296.802103844292 + t177 * 461.523) + t179 *
    4124.48151675695;
  t236 = X[40ULL] * t242;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I = X[41ULL] / (t236 ==
    0.0 ? 1.0E-16 : t236);
  if (X[40ULL] <= 216.59999999999997) {
    t236 = 216.59999999999997;
  } else {
    t236 = X[40ULL] >= 623.15 ? 623.15 : X[40ULL];
  }

  t130 = t236 * t236;
  if (X[47ULL] <= 0.0) {
    t235 = 0.0;
  } else {
    t235 = X[47ULL] >= 1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    intrm_sf_mf_900 = 0.0;
  } else {
    intrm_sf_mf_900 = X[46ULL] >= 1.0 ? 1.0 : X[46ULL];
  }

  intrm_sf_mf_901 = (((1.0 - t235) - intrm_sf_mf_900) * 296.802103844292 + t235 *
                     461.523) + intrm_sf_mf_900 * 259.836612622973;
  t199 = X[45ULL] * intrm_sf_mf_901;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho = X[44ULL] /
    (t199 == 0.0 ? 1.0E-16 : t199);
  if (X[45ULL] <= 216.59999999999997) {
    t199 = 216.59999999999997;
  } else {
    t199 = X[45ULL] >= 623.15 ? 623.15 : X[45ULL];
  }

  t133 = t199 * t199;
  if (X[50ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 = X[50ULL] >=
      1.0 ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    t75_idx_0 = 0.0;
  } else {
    t75_idx_0 = X[49ULL] >= 1.0 ? 1.0 : X[49ULL];
  }

  intrm_sf_mf_927 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17)
                      - t75_idx_0) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17
                     * 461.523) + t75_idx_0 * 4124.48151675695;
  t201 = X[48ULL] * intrm_sf_mf_927;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I = X[51ULL] / (t201 ==
    0.0 ? 1.0E-16 : t201);
  if (X[48ULL] <= 216.59999999999997) {
    t201 = 216.59999999999997;
  } else {
    t201 = X[48ULL] >= 623.15 ? 623.15 : X[48ULL];
  }

  t136 = t201 * t201;
  if (X[8ULL] <= 0.0) {
    intrm_sf_mf_1062 = 0.0;
  } else {
    intrm_sf_mf_1062 = X[8ULL] >= 1.0 ? 1.0 : X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    intrm_sf_mf_1063 = 0.0;
  } else {
    intrm_sf_mf_1063 = X[7ULL] >= 1.0 ? 1.0 : X[7ULL];
  }

  intrm_sf_mf_1064 = (((1.0 - intrm_sf_mf_1062) - intrm_sf_mf_1063) *
                      296.802103844292 + intrm_sf_mf_1062 * 461.523) +
    intrm_sf_mf_1063 * 4124.48151675695;
  t203 = X[6ULL] * intrm_sf_mf_1064;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I = X[52ULL] / (t203 ==
    0.0 ? 1.0E-16 : t203);
  if (X[6ULL] <= 216.59999999999997) {
    t203 = 216.59999999999997;
  } else {
    t203 = X[6ULL] >= 623.15 ? 623.15 : X[6ULL];
  }

  t139 = t203 * t203;
  if (X[11ULL] <= 0.0) {
    intrm_sf_mf_1199 = 0.0;
  } else {
    intrm_sf_mf_1199 = X[11ULL] >= 1.0 ? 1.0 : X[11ULL];
  }

  if (X[10ULL] <= 0.0) {
    intrm_sf_mf_1200 = 0.0;
  } else {
    intrm_sf_mf_1200 = X[10ULL] >= 1.0 ? 1.0 : X[10ULL];
  }

  intrm_sf_mf_1201 = (((1.0 - intrm_sf_mf_1199) - intrm_sf_mf_1200) *
                      296.802103844292 + intrm_sf_mf_1199 * 461.523) +
    intrm_sf_mf_1200 * 4124.48151675695;
  t205 = X[9ULL] * intrm_sf_mf_1201;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I = X[53ULL] / (t205 ==
    0.0 ? 1.0E-16 : t205);
  if (X[9ULL] <= 216.59999999999997) {
    t205 = 216.59999999999997;
  } else {
    t205 = X[9ULL] >= 623.15 ? 623.15 : X[9ULL];
  }

  t142 = t205 * t205;
  if (X[56ULL] <= 0.0) {
    intrm_sf_mf_1337 = 0.0;
  } else {
    intrm_sf_mf_1337 = X[56ULL] >= 1.0 ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    intrm_sf_mf_1338 = 0.0;
  } else {
    intrm_sf_mf_1338 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  intrm_sf_mf_1339 = (((1.0 - intrm_sf_mf_1337) - intrm_sf_mf_1338) *
                      296.802103844292 + intrm_sf_mf_1337 * 461.523) +
    intrm_sf_mf_1338 * 259.836612622973;
  t207 = X[54ULL] * intrm_sf_mf_1339;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I = X[57ULL] / (t207 ==
    0.0 ? 1.0E-16 : t207);
  if (X[54ULL] <= 216.59999999999997) {
    t207 = 216.59999999999997;
  } else {
    t207 = X[54ULL] >= 623.15 ? 623.15 : X[54ULL];
  }

  t145 = t207 * t207;
  if (X[60ULL] <= 0.0) {
    intrm_sf_mf_1486 = 0.0;
  } else {
    intrm_sf_mf_1486 = X[60ULL] >= 1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    intrm_sf_mf_1487 = 0.0;
  } else {
    intrm_sf_mf_1487 = X[61ULL] >= 1.0 ? 1.0 : X[61ULL];
  }

  intrm_sf_mf_1488 = (((1.0 - intrm_sf_mf_1486) - intrm_sf_mf_1487) *
                      296.802103844292 + intrm_sf_mf_1486 * 461.523) +
    intrm_sf_mf_1487 * 259.836612622973;
  t209 = X[58ULL] * intrm_sf_mf_1488;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I = X[59ULL] / (t209 ==
    0.0 ? 1.0E-16 : t209);
  if (X[58ULL] <= 216.59999999999997) {
    t209 = 216.59999999999997;
  } else {
    t209 = X[58ULL] >= 623.15 ? 623.15 : X[58ULL];
  }

  t148 = t209 * t209;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17 =
    (((1074.1165326382541 + t201 * -0.2214565261064077) + t136 *
      0.00037212980109010952) * ((1.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17) -
      t75_idx_0) + ((1479.6504774710445 + t201 * 1.200211433705052) + t136 *
                    -0.00038614513167842338) *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17) +
    ((12825.281119790017 + t201 * 6.9647057412830984) + t136 *
     -0.007052486824683288) * t75_idx_0;
  t201 = (((1074.1165326382541 + t182 * -0.2214565261064077) + t115 *
           0.00037212980109010952) * ((1.0 - t178) - t180) +
          ((1479.6504774710445 + t182 * 1.200211433705052) + t115 *
           -0.00038614513167842338) * t178) + ((12825.281119790017 + t182 *
    6.9647057412830984) + t115 * -0.007052486824683288) * t180;
  t182 = (((1074.1165326382541 + t170 * -0.2214565261064077) + t118 *
           0.00037212980109010952) * ((1.0 - t156) - intrm_sf_mf_593) +
          ((1479.6504774710445 + t170 * 1.200211433705052) + t118 *
           -0.00038614513167842338) * t156) + ((900.63941224837913 + t170 *
    -0.044484923911364271) + t118 * 0.00036936011832043369) * intrm_sf_mf_593;
  t170 = (((1074.1165326382541 + t195 * -0.2214565261064077) + t127 *
           0.00037212980109010952) * ((1.0 - t153) - t159) +
          ((1479.6504774710445 + t195 * 1.200211433705052) + t127 *
           -0.00038614513167842338) * t153) + ((12825.281119790017 + t195 *
    6.9647057412830984) + t127 * -0.007052486824683288) * t159;
  t182 = (t182 - t155) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I *
    2.6773120849090417 / 2172.7681408465714;
  t156 = (((((1074.1165326382541 + t186 * -0.2214565261064077) + t121 *
             0.00037212980109010952) * ((1.0 - intrm_sf_mf_773) -
             intrm_sf_mf_920) + ((1479.6504774710445 + t186 * 1.200211433705052)
             + t121 * -0.00038614513167842338) * intrm_sf_mf_773) +
           ((900.63941224837913 + t186 * -0.044484923911364271) + t121 *
            0.00036936011832043369) * intrm_sf_mf_920) - t157) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I *
    2.6773120849090417 / 2374.9296201389902;
  t251 = (t201 - t251) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
    0.0078539816339744835 / 2246.65922904024;
  t159 = 1.0 / (t187 == 0.0 ? 1.0E-16 : t187) * t163 * 0.0040159681273635624;
  t187 = t161 * 100.0 / 16.703067073570942;
  t161 = -t162 * t163 * 0.0040159681273635624;
  t170 = (t170 - t175) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I * 12.0 /
    2246.65922904024;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = -0.001;
  out.mX[4] = -0.005;
  out.mX[5] = -1.0E-6;
  out.mX[6] = -(1.0 / (X[6ULL] == 0.0 ? 1.0E-16 : X[6ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 2677.3120849090419
    / 12.896402563644669;
  out.mX[7] = (((((1074.1165326382541 + t203 * -0.2214565261064077) + t139 *
                  0.00037212980109010952) * ((1.0 - intrm_sf_mf_1062) -
    intrm_sf_mf_1063) + ((1479.6504774710445 + t203 * 1.200211433705052) + t139 *
    -0.00038614513167842338) * intrm_sf_mf_1062) + ((12825.281119790017 + t203 *
    6.9647057412830984) + t139 * -0.007052486824683288) * intrm_sf_mf_1063) -
               intrm_sf_mf_1064) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 2.6773120849090417
    / 2246.65922904024;
  out.mX[8] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
    2677.3120849090419;
  out.mX[9] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I *
    2677.3120849090419;
  out.mX[10] = -(1.0 / (X[9ULL] == 0.0 ? 1.0E-16 : X[9ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I *
    2677.3120849090419 / 13.896402563644669;
  out.mX[11] = (((((1074.1165326382541 + t205 * -0.2214565261064077) + t142 *
                   0.00037212980109010952) * ((1.0 - intrm_sf_mf_1199) -
    intrm_sf_mf_1200) + ((1479.6504774710445 + t205 * 1.200211433705052) + t142 *
    -0.00038614513167842338) * intrm_sf_mf_1199) + ((12825.281119790017 + t205 *
    6.9647057412830984) + t142 * -0.007052486824683288) * intrm_sf_mf_1200) -
                intrm_sf_mf_1201) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I *
    2.6773120849090417 / 2448.8207083326588;
  out.mX[12] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I *
    2677.3120849090419;
  out.mX[13] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I *
    2677.3120849090419;
  out.mX[14] = -(1.0 / (X[12ULL] == 0.0 ? 1.0E-16 : X[12ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I *
    2677.3120849090419;
  out.mX[15] = t182;
  out.mX[16] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I *
    2677.3120849090419;
  out.mX[17] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I *
    2677.3120849090419;
  out.mX[18] = -(1.0 / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I *
    2677.3120849090419 / 1.5549856083302016;
  out.mX[19] = t156;
  out.mX[20] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I *
    2677.3120849090419;
  out.mX[21] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I *
    2677.3120849090419;
  out.mX[22] = -1.0;
  out.mX[23] = -(1.0 / (X[19ULL] == 0.0 ? 1.0E-16 : X[19ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
    7.8539816339744828 / 12.896402563644669;
  out.mX[24] = t251;
  out.mX[25] = 1.0 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
    7.8539816339744828 / 12.896402563644669;
  out.mX[26] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
    7.8539816339744828;
  out.mX[27] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_rho_I *
    7.8539816339744828;
  out.mX[28] = 1.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_rho_I *
    2677.3120849090419;
  out.mX[29] = 1.0 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_rho_I *
    2677.3120849090419 / 1.5549856083302016;
  out.mX[30] = t262 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan15 * (X[26ULL] *
    0.1 + 0.0001) * 0.001 / 8385.55841330098;
  out.mX[31] = 1.0;
  out.mX[32] = t159;
  out.mX[33] = t187;
  out.mX[34] = t161;
  out.mX[35] = t164 * 0.001 / 16.703067073570942;
  out.mX[36] = 1.0 / (t165 == 0.0 ? 1.0E-16 : t165) * t169 *
    0.00093750000000000007;
  out.mX[37] = t167 * 100.0 / 3.8992155527272074;
  out.mX[38] = -t166 * t169 * 0.00093750000000000007;
  out.mX[39] = t171 * 0.001 / 3.8992155527272074;
  out.mX[40] = -1.0;
  out.mX[41] = -(1.0 / (X[32ULL] == 0.0 ? 1.0E-16 : X[32ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 *
    12.500000000000004 / 12.896402563644669;
  out.mX[42] = (((((1074.1165326382541 + t193 * -0.2214565261064077) + t124 *
                   0.00037212980109010952) * ((1.0 - t150) - t190) +
                  ((1479.6504774710445 + t193 * 1.200211433705052) + t124 *
                   -0.00038614513167842338) * t150) + ((12825.281119790017 +
    t193 * 6.9647057412830984) + t124 * -0.007052486824683288) * t190) - t191) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 *
    0.012500000000000002 / 2246.65922904024;
  out.mX[43] = 1.0 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 *
    12.500000000000004 / 12.896402563644669;
  out.mX[44] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 *
    12.500000000000004;
  out.mX[45] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha25 *
    12.500000000000004;
  out.mX[46] = -(1.0 / (X[36ULL] == 0.0 ? 1.0E-16 : X[36ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I * 12000.0 /
    12.896402563644669;
  out.mX[47] = t170;
  out.mX[48] = 1.0 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I * 12000.0 /
    12.896402563644669;
  out.mX[49] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I *
    12000.0;
  out.mX[50] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I *
    12000.0;
  out.mX[51] = -(1.0 / (X[40ULL] == 0.0 ? 1.0E-16 : X[40ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I * 7.8539816339744828
    / 12.896402563644669;
  out.mX[52] = (((((1074.1165326382541 + t236 * -0.2214565261064077) + t130 *
                   0.00037212980109010952) * ((1.0 - t177) - t179) +
                  ((1479.6504774710445 + t236 * 1.200211433705052) + t130 *
                   -0.00038614513167842338) * t177) + ((12825.281119790017 +
    t236 * 6.9647057412830984) + t130 * -0.007052486824683288) * t179) - t242) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
    0.0078539816339744835 / 2246.65922904024;
  out.mX[53] = 1.0 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I * 7.8539816339744828
    / 12.896402563644669;
  out.mX[54] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
    7.8539816339744828;
  out.mX[55] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_rho_I *
    7.8539816339744828;
  out.mX[56] = 1.0 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho *
    29.999999999999996;
  out.mX[57] = -(1.0 / (X[45ULL] == 0.0 ? 1.0E-16 : X[45ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho *
    29.999999999999996;
  out.mX[58] = (((((1074.1165326382541 + t199 * -0.2214565261064077) + t133 *
                   0.00037212980109010952) * ((1.0 - t235) - intrm_sf_mf_900) +
                  ((1479.6504774710445 + t199 * 1.200211433705052) + t133 *
                   -0.00038614513167842338) * t235) + ((900.63941224837913 +
    t199 * -0.044484923911364271) + t133 * 0.00036936011832043369) *
                 intrm_sf_mf_900) - intrm_sf_mf_901) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho * 0.03 /
    2172.7681408465714;
  out.mX[59] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho *
    29.999999999999996;
  out.mX[60] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Compressor_Volume_rho *
    29.999999999999996;
  out.mX[61] = -(1.0 / (X[48ULL] == 0.0 ? 1.0E-16 : X[48ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 49.087385212340521
    / 12.896402563644669;
  out.mX[62] = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x2_Coolant_Tank_Coolan17
                - intrm_sf_mf_927) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
    0.049087385212340524 / 2246.65922904024;
  out.mX[63] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
    49.087385212340521;
  out.mX[64] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I *
    49.087385212340521;
  out.mX[65] = 1.0 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_rho_I * 49.087385212340521
    / 12.896402563644669;
  out.mX[66] = 1.0 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_rho_I * 2677.3120849090419
    / 12.896402563644669;
  out.mX[67] = 1.0 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA1_rho_I *
    2677.3120849090419 / 13.896402563644669;
  out.mX[68] = -(1.0 / (X[54ULL] == 0.0 ? 1.0E-16 : X[54ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 49.087385212340521;
  out.mX[69] = (((((1074.1165326382541 + t207 * -0.2214565261064077) + t145 *
                   0.00037212980109010952) * ((1.0 - intrm_sf_mf_1337) -
    intrm_sf_mf_1338) + ((1479.6504774710445 + t207 * 1.200211433705052) + t145 *
    -0.00038614513167842338) * intrm_sf_mf_1337) + ((900.63941224837913 + t207 *
    -0.044484923911364271) + t145 * 0.00036936011832043369) * intrm_sf_mf_1338)
                - intrm_sf_mf_1339) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
    0.049087385212340524 / 2172.7681408465714;
  out.mX[70] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
    49.087385212340521;
  out.mX[71] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I *
    49.087385212340521;
  out.mX[72] = 1.0 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_rho_I * 49.087385212340521;
  out.mX[73] = -(1.0 / (X[58ULL] == 0.0 ? 1.0E-16 : X[58ULL])) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I * 196.34954084936209;
  out.mX[74] = (((((1074.1165326382541 + t209 * -0.2214565261064077) + t148 *
                   0.00037212980109010952) * ((1.0 - intrm_sf_mf_1486) -
    intrm_sf_mf_1487) + ((1479.6504774710445 + t209 * 1.200211433705052) + t148 *
    -0.00038614513167842338) * intrm_sf_mf_1486) + ((900.63941224837913 + t209 *
    -0.044484923911364271) + t148 * 0.00036936011832043369) * intrm_sf_mf_1487)
                - intrm_sf_mf_1488) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I * 0.1963495408493621
    / 2172.7681408465714;
  out.mX[75] = 1.0 / (X[59ULL] == 0.0 ? 1.0E-16 : X[59ULL]) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I * 196.34954084936209;
  out.mX[76] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I *
    196.34954084936209;
  out.mX[77] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_rho_I *
    196.34954084936209;
  out.mX[78] = 5.0E-6;
  out.mX[79] = 0.02;
  (void)LC;
  (void)t264;
  return 0;
}
