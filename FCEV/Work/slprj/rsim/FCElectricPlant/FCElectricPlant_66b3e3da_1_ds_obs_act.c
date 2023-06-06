/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_obs_act.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_obs_act(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t269, NeDsMethodOutput *t270)
{
  ETTS0 ab_efOut;
  ETTS0 c_efOut;
  ETTS0 e_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 i_efOut;
  ETTS0 k_efOut;
  ETTS0 m_efOut;
  ETTS0 o_efOut;
  ETTS0 q_efOut;
  ETTS0 s_efOut;
  ETTS0 t7;
  ETTS0 t8;
  ETTS0 t9;
  ETTS0 u_efOut;
  ETTS0 w_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T t84[2047];
  real_T X[480];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[8];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_F[8];
  real_T t101[8];
  real_T t85[8];
  real_T t89[8];
  real_T t91[8];
  real_T t93[8];
  real_T t95[8];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T d_efOut[1];
  real_T f_efOut[1];
  real_T h_efOut[1];
  real_T j_efOut[1];
  real_T l_efOut[1];
  real_T n_efOut[1];
  real_T p_efOut[1];
  real_T r_efOut[1];
  real_T t70[1];
  real_T t_efOut[1];
  real_T v_efOut[1];
  real_T x_efOut[1];
  real_T Battery_System_Battery_Table_Based1_stateOfCharge;
  real_T Battery_System_DC_DC_Converter_i1;
  real_T Battery_System_DC_DC_Converter_power_dissipated;
  real_T Fuel_Cell_Boost_Converter_L_i;
  real_T Fuel_Cell_Boost_Converter_L_n_v;
  real_T Fuel_Cell_Boost_Converter_L_p_v;
  real_T Fuel_Cell_Current_Sensor1_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra25;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W;
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
  real_T intrm_sf_mf_756;
  real_T t100_idx_0;
  real_T t140;
  real_T t141;
  real_T t142;
  real_T t145;
  real_T t146;
  real_T t149;
  real_T t150;
  real_T t151;
  real_T t153;
  real_T t154;
  real_T t156;
  real_T t160;
  real_T t164;
  real_T t168;
  real_T t171;
  real_T t173;
  real_T t175;
  real_T t177;
  real_T t185;
  real_T t189;
  real_T t197;
  real_T t200;
  real_T t205;
  size_t t17[1];
  size_t t76[1];
  size_t t79[1];
  size_t t127;
  int32_T M[259];
  int32_T b;
  for (b = 0; b < 259; b++) {
    M[b] = t269->mM.mX[b];
  }

  U_idx_0 = t269->mU.mX[0];
  U_idx_1 = t269->mU.mX[1];
  U_idx_2 = t269->mU.mX[2];
  U_idx_3 = t269->mU.mX[3];
  U_idx_4 = t269->mU.mX[4];
  U_idx_5 = t269->mU.mX[5];
  U_idx_6 = t269->mU.mX[6];
  U_idx_7 = t269->mU.mX[7];
  U_idx_8 = t269->mU.mX[8];
  U_idx_9 = t269->mU.mX[9];
  U_idx_10 = t269->mU.mX[10];
  U_idx_11 = t269->mU.mX[11];
  U_idx_12 = t269->mU.mX[12];
  U_idx_13 = t269->mU.mX[13];
  for (b = 0; b < 480; b++) {
    X[b] = t269->mX.mX[b];
  }

  out = t270->mOBS_ACT;
  Battery_System_Battery_Table_Based1_stateOfCharge = X[0ULL] *
    5.2410901467505238E-5;
  Battery_System_DC_DC_Converter_i1 = -X[64ULL] - U_idx_0;
  Battery_System_DC_DC_Converter_power_dissipated = (((real_T)
    (Battery_System_DC_DC_Converter_i1 >= 0.0) *
    Battery_System_DC_DC_Converter_i1 * 1000.0 + (real_T)
    (Battery_System_DC_DC_Converter_i1 < 0.0) * X[66ULL]) - 0.9) /
    0.099999999999999978;
  if ((real_T)(Battery_System_DC_DC_Converter_i1 >= 0.0) *
      Battery_System_DC_DC_Converter_i1 * 1000.0 + (real_T)
      (Battery_System_DC_DC_Converter_i1 < 0.0) * X[66ULL] <= 0.9) {
    Battery_System_DC_DC_Converter_power_dissipated = 0.0;
  } else {
    Battery_System_DC_DC_Converter_power_dissipated = (real_T)
      (Battery_System_DC_DC_Converter_i1 >= 0.0) *
      Battery_System_DC_DC_Converter_i1 * 1000.0 + (real_T)
      (Battery_System_DC_DC_Converter_i1 < 0.0) * X[66ULL] >= 1.0 ? 1.0 :
      Battery_System_DC_DC_Converter_power_dissipated *
      Battery_System_DC_DC_Converter_power_dissipated * 3.0 -
      Battery_System_DC_DC_Converter_power_dissipated *
      Battery_System_DC_DC_Converter_power_dissipated *
      Battery_System_DC_DC_Converter_power_dissipated * 2.0;
  }

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
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 = ((((-X[105ULL]
    - X[106ULL]) - X[107ULL]) - X[108ULL]) - X[109ULL]) - X[110ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra25 = (((X[4ULL] *
    -1.0E-6 + X[72ULL] * -1.0E-15) + X[73ULL] * -0.001001) + X[5ULL]) + X[111ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42 = -X[112ULL] +
    X[121ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v = (((X[4ULL] *
    -1.0E-6 + X[72ULL] * -1.0E-15) + X[73ULL] * -1.0E-6) + X[5ULL]) + X[111ULL];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0 = -X[145ULL] +
    U_idx_2 * -0.01;
  if (X[21ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = X[21ULL] >= 1.0 ?
      1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = X[22ULL] >= 1.0
      ? 1.0 : X[22ULL];
  }

  t141 = X[19ULL] * ((((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W)
                       - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A)
                      * 296.802103844292 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
                      461.523) +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A *
                     4124.48151675695);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W = X[20ULL] / (t141 ==
    0.0 ? 1.0E-16 : t141);
  t85[0ULL] = X[20ULL] * 100000.0;
  t85[1ULL] = X[19ULL];
  t85[2ULL] = X[153ULL];
  t85[3ULL] = X[21ULL];
  t85[4ULL] = X[148ULL];
  t85[5ULL] = X[152ULL];
  t85[6ULL] = X[22ULL];
  t85[7ULL] = X[149ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F[t127] = t85[t127];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A = -X[154ULL] - X
    [155ULL];
  if (1.0 - X[21ULL] >= 0.01) {
    t140 = 1.0 - X[21ULL];
  } else if (1.0 - X[21ULL] >= -0.1) {
    t140 = pmf_exp(((1.0 - X[21ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t140 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = X[22ULL] /
    (t140 == 0.0 ? 1.0E-16 : t140) * 3827.6794129126583 + 296.802103844292;
  t70[0ULL] = X[19ULL];
  t76[0] = 52ULL;
  t17[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL], &t76
    [0ULL], &t17[0ULL]);
  t8 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = b_efOut[0];
  t140 = pmf_exp(pmf_log(X[20ULL] * 100000.0) - t100_idx_0);
  if (t140 >= 1.0) {
    t141 = (t140 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4;
    t141 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 /
      (t141 == 0.0 ? 1.0E-16 : t141);
  } else {
    t141 = 1.0;
  }

  t146 = t141 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = (X[21ULL] -
    t141) / (t146 == 0.0 ? 1.0E-16 : t146);
  if (X[21ULL] - t141 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = 0.0;
  } else if (X[21ULL] - t141 >= t141 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = X[21ULL] -
      t141;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = (X[21ULL]
      - t141) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4
                 * 3.0 -
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4
                 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4
                 * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 *
    7.8539816339744827E-5 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W *= 100000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4 = -X[157ULL] -
    X[158ULL];
  t140 = -X[159ULL] - X[160ULL];
  if (X[14ULL] <= 0.0) {
    t142 = 0.0;
  } else {
    t142 = X[14ULL] >= 1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    t141 = 0.0;
  } else {
    t141 = X[13ULL] >= 1.0 ? 1.0 : X[13ULL];
  }

  t150 = X[12ULL] * ((((1.0 - t142) - t141) * 296.802103844292 + t142 * 461.523)
                     + t141 * 259.836612622973);
  if (1.0 - X[14ULL] >= 0.01) {
    t145 = 1.0 - X[14ULL];
  } else if (1.0 - X[14ULL] >= -0.1) {
    t145 = pmf_exp(((1.0 - X[14ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t145 = 1.6701700790245661E-7;
  }

  t141 = X[13ULL] / (t145 == 0.0 ? 1.0E-16 : t145) * -36.965491221318985 +
    296.802103844292;
  t70[0ULL] = X[12ULL];
  tlu2_linear_linear_prelookup(&c_efOut.mField0[0ULL], &c_efOut.mField1[0ULL],
    &c_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t8 = c_efOut;
  tlu2_1d_linear_linear_value(&d_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = d_efOut[0];
  t145 = pmf_exp(pmf_log(X[23ULL] * 100000.0) - t100_idx_0);
  if (t145 >= 1.0) {
    t153 = (t145 - 1.0) * 461.523 + t141;
    t146 = t141 / (t153 == 0.0 ? 1.0E-16 : t153);
  } else {
    t146 = 1.0;
  }

  t141 = t146 * 0.01;
  t141 = (X[14ULL] - t146) / (t141 == 0.0 ? 1.0E-16 : t141);
  if (X[14ULL] - t146 <= 0.0) {
    t141 = 0.0;
  } else if (X[14ULL] - t146 >= t146 * 0.01) {
    t141 = X[14ULL] - t146;
  } else {
    t141 = (X[14ULL] - t146) * (t141 * t141 * 3.0 - t141 * t141 * t141 * 2.0);
  }

  t142 = X[23ULL] / (t150 == 0.0 ? 1.0E-16 : t150) * t141 * 0.026773120849090417
    / 0.001 * 100000.0;
  if (X[17ULL] <= 0.0) {
    t145 = 0.0;
  } else {
    t145 = X[17ULL] >= 1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    t146 = 0.0;
  } else {
    t146 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5 = X[15ULL] *
    ((((1.0 - t145) - t146) * 296.802103844292 + t145 * 461.523) + t146 *
     259.836612622973);
  if (1.0 - X[17ULL] >= 0.01) {
    t149 = 1.0 - X[17ULL];
  } else if (1.0 - X[17ULL] >= -0.1) {
    t149 = pmf_exp(((1.0 - X[17ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t149 = 1.6701700790245661E-7;
  }

  t141 = X[16ULL] / (t149 == 0.0 ? 1.0E-16 : t149) * -36.965491221318985 +
    296.802103844292;
  t70[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t8 = e_efOut;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = f_efOut[0];
  t149 = pmf_exp(pmf_log(X[24ULL] * 100000.0) - t100_idx_0);
  if (t149 >= 1.0) {
    t146 = (t149 - 1.0) * 461.523 + t141;
    t150 = t141 / (t146 == 0.0 ? 1.0E-16 : t146);
  } else {
    t150 = 1.0;
  }

  t164 = t150 * 0.01;
  t141 = (X[17ULL] - t150) / (t164 == 0.0 ? 1.0E-16 : t164);
  if (X[17ULL] - t150 <= 0.0) {
    t141 = 0.0;
  } else if (X[17ULL] - t150 >= t150 * 0.01) {
    t141 = X[17ULL] - t150;
  } else {
    t141 = (X[17ULL] - t150) * (t141 * t141 * 3.0 - t141 * t141 * t141 * 2.0);
  }

  t145 = X[24ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5) *
    t141 * 0.026773120849090417 / 0.001 * 100000.0;
  t149 = -X[213ULL] - X[214ULL];
  t150 = -X[216ULL] - X[217ULL];
  t151 = -X[220ULL] + U_idx_3 * -2.0;
  t153 = U_idx_3 * 2.0;
  t154 = U_idx_3 * 2.0;
  t156 = (1.01325 - X[236ULL]) * X[245ULL] * 0.0001;
  t89[0ULL] = X[33ULL] * 100000.0;
  t89[1ULL] = X[32ULL];
  t89[2ULL] = X[256ULL];
  t89[3ULL] = X[35ULL];
  t89[4ULL] = X[258ULL];
  t89[5ULL] = X[255ULL];
  t89[6ULL] = X[34ULL];
  t89[7ULL] = X[257ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t85[t127] = t89[t127];
  }

  if (X[35ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5 = X[35ULL] >=
      1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    t160 = 0.0;
  } else {
    t160 = X[34ULL] >= 1.0 ? 1.0 : X[34ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = X[32ULL] * ((((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5) - t160) *
    296.802103844292 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5 * 461.523) +
    t160 * 4124.48151675695);
  if (1.0 - X[35ULL] >= 0.01) {
    t160 = 1.0 - X[35ULL];
  } else if (1.0 - X[35ULL] >= -0.1) {
    t160 = pmf_exp(((1.0 - X[35ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t160 = 1.6701700790245661E-7;
  }

  t141 = X[34ULL] / (t160 == 0.0 ? 1.0E-16 : t160) * 3827.6794129126583 +
    296.802103844292;
  t70[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t8 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = h_efOut[0];
  t160 = pmf_exp(pmf_log(X[33ULL] * 100000.0) - t100_idx_0);
  if (t160 >= 1.0) {
    t175 = (t160 - 1.0) * 461.523 + t141;
    t146 = t141 / (t175 == 0.0 ? 1.0E-16 : t175);
  } else {
    t146 = 1.0;
  }

  t177 = t146 * 0.01;
  t160 = (X[35ULL] - t146) / (t177 == 0.0 ? 1.0E-16 : t177);
  if (X[35ULL] - t146 <= 0.0) {
    t160 = 0.0;
  } else if (X[35ULL] - t146 >= t146 * 0.01) {
    t160 = X[35ULL] - t146;
  } else {
    t160 = (X[35ULL] - t146) * (t160 * t160 * 3.0 - t160 * t160 * t160 * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5 = X[33ULL] /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I) * t160 *
    0.00012500000000000003 / 0.001 * 100000.0;
  t160 = U_idx_2 * 0.01;
  t91[0ULL] = X[37ULL] * 100000.0;
  t91[1ULL] = X[36ULL];
  t91[2ULL] = X[288ULL];
  t91[3ULL] = X[39ULL];
  t91[4ULL] = X[290ULL];
  t91[5ULL] = X[287ULL];
  t91[6ULL] = X[38ULL];
  t91[7ULL] = X[289ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t89[t127] = t91[t127];
  }

  if (X[39ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I = X[39ULL] >= 1.0 ?
      1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    t164 = 0.0;
  } else {
    t164 = X[38ULL] >= 1.0 ? 1.0 : X[38ULL];
  }

  t146 = X[36ULL] * ((((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I)
                       - t164) * 296.802103844292 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I *
                      461.523) + t164 * 4124.48151675695);
  if (1.0 - X[39ULL] >= 0.01) {
    t164 = 1.0 - X[39ULL];
  } else if (1.0 - X[39ULL] >= -0.1) {
    t164 = pmf_exp(((1.0 - X[39ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t164 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = X[38ULL] /
    (t164 == 0.0 ? 1.0E-16 : t164) * 3827.6794129126583 + 296.802103844292;
  t70[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t9 = i_efOut;
  tlu2_1d_linear_linear_value(&j_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = j_efOut[0];
  t164 = pmf_exp(pmf_log(X[37ULL] * 100000.0) - t100_idx_0);
  if (t164 >= 1.0) {
    t141 = (t164 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0;
    intrm_sf_mf_756 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 / (t141 ==
      0.0 ? 1.0E-16 : t141);
  } else {
    intrm_sf_mf_756 = 1.0;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = intrm_sf_mf_756 * 0.01;
  t164 = (X[39ULL] - intrm_sf_mf_756) /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W);
  if (X[39ULL] - intrm_sf_mf_756 <= 0.0) {
    t164 = 0.0;
  } else if (X[39ULL] - intrm_sf_mf_756 >= intrm_sf_mf_756 * 0.01) {
    t164 = X[39ULL] - intrm_sf_mf_756;
  } else {
    t164 = (X[39ULL] - intrm_sf_mf_756) * (t164 * t164 * 3.0 - t164 * t164 *
      t164 * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I = X[37ULL] / (t146 ==
    0.0 ? 1.0E-16 : t146) * t164 * 0.12 / 0.001 * 100000.0;
  if (X[42ULL] <= 0.0) {
    t164 = 0.0;
  } else {
    t164 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = X[43ULL] >=
      1.0 ? 1.0 : X[43ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = X[40ULL] * ((((1.0 -
    t164) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0) *
    296.802103844292 + t164 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
    4124.48151675695);
  t93[0ULL] = X[41ULL] * 100000.0;
  t93[1ULL] = X[40ULL];
  t93[2ULL] = X[310ULL];
  t93[3ULL] = X[42ULL];
  t93[4ULL] = X[305ULL];
  t93[5ULL] = X[309ULL];
  t93[6ULL] = X[43ULL];
  t93[7ULL] = X[306ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t91[t127] = t93[t127];
  }

  if (1.0 - X[42ULL] >= 0.01) {
    intrm_sf_mf_756 = 1.0 - X[42ULL];
  } else if (1.0 - X[42ULL] >= -0.1) {
    intrm_sf_mf_756 = pmf_exp(((1.0 - X[42ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    intrm_sf_mf_756 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = X[43ULL] /
    (intrm_sf_mf_756 == 0.0 ? 1.0E-16 : intrm_sf_mf_756) * 3827.6794129126583 +
    296.802103844292;
  t70[0ULL] = X[40ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t8 = k_efOut;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = l_efOut[0];
  intrm_sf_mf_756 = pmf_exp(pmf_log(X[41ULL] * 100000.0) - t100_idx_0);
  if (intrm_sf_mf_756 >= 1.0) {
    t141 = (intrm_sf_mf_756 - 1.0) * 461.523 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0;
    t146 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 /
      (t141 == 0.0 ? 1.0E-16 : t141);
  } else {
    t146 = 1.0;
  }

  t141 = t146 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = (X[42ULL] -
    t146) / (t141 == 0.0 ? 1.0E-16 : t141);
  if (X[42ULL] - t146 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = 0.0;
  } else if (X[42ULL] - t146 >= t146 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = X[42ULL] -
      t146;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = (X[42ULL] -
      t146) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
               3.0 -
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
               Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
               2.0);
  }

  t164 = X[41ULL] / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ?
                     1.0E-16 :
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
    7.8539816339744827E-5 / 0.001 * 100000.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 = (X[300ULL] *
    -0.7999998 + U_idx_4 * 7.9999980000000006) - 0.039999990000000013;
  intrm_sf_mf_756 = (X[300ULL] * -0.7999998 + U_idx_4 * 7.9999980000000006) +
    9.9999999947364415E-9;
  t168 = U_idx_4 * 10.0;
  t95[0ULL] = X[44ULL] * 100000.0;
  t95[1ULL] = X[45ULL];
  t95[2ULL] = X[353ULL];
  t95[3ULL] = X[47ULL];
  t95[4ULL] = X[355ULL];
  t95[5ULL] = X[352ULL];
  t95[6ULL] = X[46ULL];
  t95[7ULL] = X[354ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t93[t127] = t95[t127];
  }

  if (X[47ULL] <= 0.0) {
    t171 = 0.0;
  } else {
    t171 = X[47ULL] >= 1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = X[46ULL] >= 1.0 ? 1.0 :
      X[46ULL];
  }

  t200 = X[45ULL] * ((((1.0 - t171) -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I) *
                      296.802103844292 + t171 * 461.523) +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I *
                     259.836612622973);
  if (1.0 - X[47ULL] >= 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = 1.0 - X[47ULL];
  } else if (1.0 - X[47ULL] >= -0.1) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = pmf_exp(((1.0 - X
      [47ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = 1.6701700790245661E-7;
  }

  t173 = X[46ULL] / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ?
                     1.0E-16 :
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I) *
    -36.965491221318985 + 296.802103844292;
  t70[0ULL] = X[45ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t8 = m_efOut;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = n_efOut[0];
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = pmf_exp(pmf_log(X[44ULL]
    * 100000.0) - t100_idx_0);
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I >= 1.0) {
    t100_idx_0 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I - 1.0) *
      461.523 + t173;
    t141 = t173 / (t100_idx_0 == 0.0 ? 1.0E-16 : t100_idx_0);
  } else {
    t141 = 1.0;
  }

  t205 = t141 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = (X[47ULL] - t141) /
    (t205 == 0.0 ? 1.0E-16 : t205);
  if (X[47ULL] - t141 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = 0.0;
  } else if (X[47ULL] - t141 >= t141 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = X[47ULL] - t141;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = (X[47ULL] - t141) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I * 2.0);
  }

  t171 = X[44ULL] / (t200 == 0.0 ? 1.0E-16 : t200) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I * 0.0003 / 0.001 *
    100000.0;
  t173 = U_idx_5 * 376.99111843077515;
  t175 = -(X[44ULL] - 1.01325) * X[366ULL] * 0.0001;
  t177 = t173 * 0.99999999999999978 / 0.99999999999999978;
  t95[0ULL] = X[380ULL];
  t95[1ULL] = X[48ULL];
  t95[2ULL] = X[377ULL];
  t95[3ULL] = X[50ULL];
  t95[4ULL] = X[379ULL];
  t95[5ULL] = X[376ULL];
  t95[6ULL] = X[49ULL];
  t95[7ULL] = X[378ULL];
  if (X[50ULL] <= 0.0) {
    t185 = 0.0;
  } else {
    t185 = X[50ULL] >= 1.0 ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X[49ULL] >= 1.0 ? 1.0 :
      X[49ULL];
  }

  t146 = X[48ULL] * ((((1.0 - t185) -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W) *
                      296.802103844292 + t185 * 461.523) +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
                     4124.48151675695);
  t185 = X[51ULL] / (t146 == 0.0 ? 1.0E-16 : t146);
  if (1.0 - X[50ULL] >= 0.01) {
    t141 = 1.0 - X[50ULL];
  } else if (1.0 - X[50ULL] >= -0.1) {
    t141 = pmf_exp(((1.0 - X[50ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t141 = 1.6701700790245661E-7;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X[49ULL] / (t141 == 0.0 ?
    1.0E-16 : t141) * 3827.6794129126583 + 296.802103844292;
  t70[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t8 = o_efOut;
  tlu2_1d_linear_linear_value(&p_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = p_efOut[0];
  t141 = pmf_exp(pmf_log(X[51ULL] * 100000.0) - t100_idx_0);
  if (t141 >= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = (t141 - 1.0) * 461.523
      + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W;
    t141 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ? 1.0E-16 :
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I);
  } else {
    t141 = 1.0;
  }

  t146 = t141 * 0.01;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = (X[50ULL] - t141) /
    (t146 == 0.0 ? 1.0E-16 : t146);
  if (X[50ULL] - t141 <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = 0.0;
  } else if (X[50ULL] - t141 >= t141 * 0.01) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X[50ULL] - t141;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = (X[50ULL] - t141) *
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * 3.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * 2.0);
  }

  t185 = t185 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
    0.00049087385212340522 / 0.001;
  t185 *= 100000.0;
  if (X[8ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X[8ULL] >= 1.0 ? 1.0 :
      X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    t141 = 0.0;
  } else {
    t141 = X[7ULL] >= 1.0 ? 1.0 : X[7ULL];
  }

  t146 = X[6ULL] * ((((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W)
                      - t141) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *
                     461.523) + t141 * 4124.48151675695);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W = X[52ULL] / (t146 == 0.0 ?
    1.0E-16 : t146);
  if (1.0 - X[8ULL] >= 0.01) {
    t189 = 1.0 - X[8ULL];
  } else if (1.0 - X[8ULL] >= -0.1) {
    t189 = pmf_exp(((1.0 - X[8ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t189 = 1.6701700790245661E-7;
  }

  t141 = X[7ULL] / (t189 == 0.0 ? 1.0E-16 : t189) * 3827.6794129126583 +
    296.802103844292;
  t70[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t9 = q_efOut;
  tlu2_1d_linear_linear_value(&r_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = r_efOut[0];
  t189 = pmf_exp(pmf_log(X[52ULL] * 100000.0) - t100_idx_0);
  if (t189 >= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = (t189 - 1.0) * 461.523
      + t141;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = t141 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ? 1.0E-16 :
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = 1.0;
  }

  t146 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I * 0.01;
  t141 = (X[8ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I) / (t146
    == 0.0 ? 1.0E-16 : t146);
  if (X[8ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I <= 0.0) {
    t141 = 0.0;
  } else if (X[8ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I * 0.01) {
    t141 = X[8ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I;
  } else {
    t141 = (X[8ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I) *
      (t141 * t141 * 3.0 - t141 * t141 * t141 * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W * t141 *
    0.026773120849090417 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W *= 100000.0;
  if (X[11ULL] <= 0.0) {
    t189 = 0.0;
  } else {
    t189 = X[11ULL] >= 1.0 ? 1.0 : X[11ULL];
  }

  if (X[10ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = X[10ULL] >= 1.0 ? 1.0 :
      X[10ULL];
  }

  t146 = X[9ULL] * ((((1.0 - t189) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I) *
                     296.802103844292 + t189 * 461.523) +
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I *
                    4124.48151675695);
  t189 = X[53ULL] / (t146 == 0.0 ? 1.0E-16 : t146);
  if (1.0 - X[11ULL] >= 0.01) {
    t141 = 1.0 - X[11ULL];
  } else if (1.0 - X[11ULL] >= -0.1) {
    t141 = pmf_exp(((1.0 - X[11ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t141 = 1.6701700790245661E-7;
  }

  t146 = X[10ULL] / (t141 == 0.0 ? 1.0E-16 : t141) * 3827.6794129126583 +
    296.802103844292;
  t70[0ULL] = X[9ULL];
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t8 = s_efOut;
  tlu2_1d_linear_linear_value(&t_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = t_efOut[0];
  t141 = pmf_exp(pmf_log(X[53ULL] * 100000.0) - t100_idx_0);
  if (t141 >= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = (t141 - 1.0) * 461.523
      + t146;
    t141 = t146 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ?
                   1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I);
  } else {
    t141 = 1.0;
  }

  t146 = t141 * 0.01;
  t146 = (X[11ULL] - t141) / (t146 == 0.0 ? 1.0E-16 : t146);
  if (X[11ULL] - t141 <= 0.0) {
    t146 = 0.0;
  } else if (X[11ULL] - t141 >= t141 * 0.01) {
    t146 = X[11ULL] - t141;
  } else {
    t146 = (X[11ULL] - t141) * (t146 * t146 * 3.0 - t146 * t146 * t146 * 2.0);
  }

  t189 = t189 * t146 * 0.026773120849090417 / 0.001;
  t189 *= 100000.0;
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
    t197 = 0.0;
  } else {
    t197 = X[56ULL] >= 1.0 ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    t141 = 0.0;
  } else {
    t141 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  t146 = X[54ULL] * ((((1.0 - t197) - t141) * 296.802103844292 + t197 * 461.523)
                     + t141 * 259.836612622973);
  t197 = X[57ULL] / (t146 == 0.0 ? 1.0E-16 : t146);
  if (1.0 - X[56ULL] >= 0.01) {
    t200 = 1.0 - X[56ULL];
  } else if (1.0 - X[56ULL] >= -0.1) {
    t200 = pmf_exp(((1.0 - X[56ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t200 = 1.6701700790245661E-7;
  }

  t141 = X[55ULL] / (t200 == 0.0 ? 1.0E-16 : t200) * -36.965491221318985 +
    296.802103844292;
  t70[0ULL] = X[54ULL];
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t7 = u_efOut;
  tlu2_1d_linear_linear_value(&v_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = v_efOut[0];
  t200 = pmf_exp(pmf_log(X[57ULL] * 100000.0) - t100_idx_0);
  if (t200 >= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = (t200 - 1.0) * 461.523
      + t141;
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = t141 /
      (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ? 1.0E-16 :
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I);
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = 1.0;
  }

  t146 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W * 0.01;
  t141 = (X[56ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W) /
    (t146 == 0.0 ? 1.0E-16 : t146);
  if (X[56ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W <= 0.0) {
    t141 = 0.0;
  } else if (X[56ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W >=
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W * 0.01) {
    t141 = X[56ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W;
  } else {
    t141 = (X[56ULL] - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W) *
      (t141 * t141 * 3.0 - t141 * t141 * t141 * 2.0);
  }

  t197 = t197 * t141 * 0.00049087385212340522 / 0.001;
  t197 *= 100000.0;
  t200 = (X[453ULL] * 0.07812500122070315 + U_idx_10 * 10.0) -
    7.8125001220703152E-10;
  if (X[60ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = X[60ULL] >= 1.0 ? 1.0 :
      X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    t146 = 0.0;
  } else {
    t146 = X[61ULL] >= 1.0 ? 1.0 : X[61ULL];
  }

  t146 = X[58ULL] * ((((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W) -
                       t146) * 296.802103844292 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W *
                      461.523) + t146 * 259.836612622973);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W = X[59ULL] / (t146 == 0.0 ?
    1.0E-16 : t146);
  t101[0ULL] = X[59ULL] * 100000.0;
  t101[1ULL] = X[58ULL];
  t101[2ULL] = X[463ULL];
  t101[3ULL] = X[60ULL];
  t101[4ULL] = X[458ULL];
  t101[5ULL] = X[462ULL];
  t101[6ULL] = X[61ULL];
  t101[7ULL] = X[459ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_F[t127] = t101[t127];
  }

  if (1.0 - X[60ULL] >= 0.01) {
    t100_idx_0 = 1.0 - X[60ULL];
  } else if (1.0 - X[60ULL] >= -0.1) {
    t100_idx_0 = pmf_exp(((1.0 - X[60ULL]) - 0.01) / 0.01) * 0.01;
  } else {
    t100_idx_0 = 1.6701700790245661E-7;
  }

  t146 = X[61ULL] / (t100_idx_0 == 0.0 ? 1.0E-16 : t100_idx_0) *
    -36.965491221318985 + 296.802103844292;
  t70[0ULL] = X[58ULL];
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t9 = w_efOut;
  tlu2_1d_linear_linear_value(&x_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t76[0ULL], &t17[0ULL]);
  t100_idx_0 = x_efOut[0];
  t100_idx_0 = pmf_exp(pmf_log(X[59ULL] * 100000.0) - t100_idx_0);
  if (t100_idx_0 >= 1.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = (t100_idx_0 - 1.0) *
      461.523 + t146;
    t141 = t146 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I == 0.0 ?
                   1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I);
  } else {
    t141 = 1.0;
  }

  t146 = t141 * 0.01;
  t146 = (X[60ULL] - t141) / (t146 == 0.0 ? 1.0E-16 : t146);
  if (X[60ULL] - t141 <= 0.0) {
    t146 = 0.0;
  } else if (X[60ULL] - t141 >= t141 * 0.01) {
    t146 = X[60ULL] - t141;
  } else {
    t146 = (X[60ULL] - t141) * (t146 * t146 * 3.0 - t146 * t146 * t146 * 2.0);
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W * t146 *
    0.0019634954084936209 / 0.001;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W *= 100000.0;
  t100_idx_0 = U_idx_10 * 10.0;
  t205 = ((((X[3ULL] * 0.1 - X[68ULL]) + X[69ULL] * -0.1) + X[72ULL] * 1.0E-9) -
          X[74ULL]) + X[4ULL];
  t70[0ULL] = X[62ULL];
  t76[0] = 23ULL;
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t70[0ULL],
    &t76[0ULL], &t17[0ULL]);
  t9 = y_efOut;
  t70[0ULL] = X[477ULL];
  t79[0] = 29ULL;
  tlu2_linear_nearest_prelookup(&ab_efOut.mField0[0ULL], &ab_efOut.mField1[0ULL],
    &ab_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t70[0ULL],
    &t79[0ULL], &t17[0ULL]);
  t8 = ab_efOut;
  tlu2_2d_linear_nearest_value(&bb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t76[0ULL], &t79[0ULL], &t17[0ULL]);
  t70[0] = bb_efOut[0];
  t141 = t70[0ULL];
  t146 = X[126ULL] * 0.00062831853071795862;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I = X[437ULL] *
    0.0031415926535897937;
  t84[0ULL] = 0.0;
  t84[1ULL] = 298.15;
  t84[2ULL] = X[0ULL] * 0.00027777777777777778;
  t84[3ULL] = X[64ULL];
  t84[4ULL] = 0.0;
  t84[5ULL] = X[1ULL];
  t84[6ULL] = X[65ULL];
  t84[7ULL] = 1.0;
  t84[8ULL] = X[66ULL];
  t84[9ULL] = X[64ULL] * X[64ULL] * (M[0ULL] != 0 ? 4.03416E-7 : X[67ULL]) *
    0.001 * 1000.0;
  t84[10ULL] = Battery_System_Battery_Table_Based1_stateOfCharge;
  t84[11ULL] = Battery_System_Battery_Table_Based1_stateOfCharge;
  t84[12ULL] = X[66ULL];
  t84[13ULL] = 0.0;
  t84[14ULL] = 0.0;
  t84[15ULL] = 0.0;
  t84[16ULL] = 0.0;
  t84[17ULL] = 0.0;
  t84[18ULL] = 0.0;
  t84[19ULL] = 0.0;
  t84[20ULL] = 0.0;
  t84[21ULL] = 0.0;
  t84[22ULL] = 0.0;
  t84[23ULL] = 0.0;
  t84[24ULL] = X[67ULL];
  t84[25ULL] = 1.0;
  t84[26ULL] = 1.0;
  t84[27ULL] = 5.3;
  t84[28ULL] = Battery_System_Battery_Table_Based1_stateOfCharge;
  t84[29ULL] = Battery_System_DC_DC_Converter_i1;
  t84[30ULL] = X[66ULL];
  t84[31ULL] = 0.0;
  t84[32ULL] = 0.0;
  t84[33ULL] = X[68ULL];
  t84[34ULL] = 0.0;
  t84[35ULL] = 0.0;
  t84[36ULL] = X[66ULL];
  t84[37ULL] = X[69ULL];
  t84[38ULL] = (X[70ULL] * Battery_System_DC_DC_Converter_power_dissipated +
                (1.0 - Battery_System_DC_DC_Converter_power_dissipated) *
                Battery_System_DC_DC_Converter_i1 *
                Battery_System_DC_DC_Converter_i1) * 1000.0;
  t84[39ULL] = X[70ULL] * 1000.0;
  t84[40ULL] = X[2ULL];
  t84[41ULL] = X[69ULL];
  t84[42ULL] = 0.0;
  t84[43ULL] = 0.0;
  t84[44ULL] = 0.0;
  t84[45ULL] = U_idx_0;
  t84[46ULL] = U_idx_0;
  t84[47ULL] = X[66ULL];
  t84[48ULL] = X[66ULL];
  t84[49ULL] = U_idx_0;
  t84[50ULL] = X[66ULL];
  t84[51ULL] = 0.0;
  t84[52ULL] = -X[64ULL];
  t84[53ULL] = -X[64ULL];
  t84[54ULL] = X[66ULL];
  t84[55ULL] = X[66ULL];
  t84[56ULL] = -X[64ULL];
  t84[57ULL] = 0.0;
  t84[58ULL] = X[66ULL];
  t84[59ULL] = 0.0;
  t84[60ULL] = X[66ULL];
  t84[61ULL] = X[66ULL];
  t84[62ULL] = X[66ULL];
  t84[63ULL] = X[66ULL];
  t84[64ULL] = -X[68ULL];
  t84[65ULL] = -X[68ULL];
  t84[66ULL] = X[69ULL];
  t84[67ULL] = X[69ULL];
  t84[68ULL] = 0.0;
  t84[69ULL] = -X[68ULL];
  t84[70ULL] = X[69ULL];
  t84[71ULL] = 0.0;
  t84[72ULL] = X[69ULL];
  t84[73ULL] = X[69ULL];
  t84[74ULL] = X[69ULL];
  t84[75ULL] = X[69ULL];
  t84[76ULL] = -X[68ULL];
  t84[77ULL] = -X[68ULL];
  t84[78ULL] = X[69ULL];
  t84[79ULL] = 0.0;
  t84[80ULL] = 0.0;
  t84[81ULL] = X[3ULL] * -0.1 + X[69ULL] * 0.1;
  t84[82ULL] = 0.0;
  t84[83ULL] = X[69ULL];
  t84[84ULL] = X[69ULL];
  t84[85ULL] = X[3ULL];
  t84[86ULL] = X[71ULL];
  t84[87ULL] = U_idx_11;
  t84[88ULL] = 0.0;
  t84[89ULL] = 0.0;
  t84[90ULL] = Fuel_Cell_Boost_Converter_L_i;
  t84[91ULL] = Fuel_Cell_Boost_Converter_L_n_v;
  t84[92ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[93ULL] = X[72ULL];
  t84[94ULL] = X[4ULL];
  t84[95ULL] = Fuel_Cell_Boost_Converter_L_n_v;
  t84[96ULL] = X[74ULL];
  t84[97ULL] = X[4ULL];
  t84[98ULL] = Fuel_Cell_Boost_Converter_L_i;
  t84[99ULL] = Fuel_Cell_Boost_Converter_L_i;
  t84[100ULL] = 0.0;
  t84[101ULL] = 0.0;
  t84[102ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[103ULL] = X[69ULL];
  t84[104ULL] = X[3ULL];
  t84[105ULL] = Fuel_Cell_Current_Sensor1_I;
  t84[106ULL] = Fuel_Cell_Current_Sensor1_I;
  t84[107ULL] = X[69ULL];
  t84[108ULL] = X[69ULL];
  t84[109ULL] = Fuel_Cell_Current_Sensor1_I;
  t84[110ULL] = 0.0;
  t84[111ULL] = X[75ULL];
  t84[112ULL] = X[76ULL] * 0.1;
  t84[113ULL] = X[77ULL];
  t84[114ULL] = X[78ULL];
  t84[115ULL] = X[79ULL];
  t84[116ULL] = X[80ULL] * 0.1;
  t84[117ULL] = X[81ULL];
  t84[118ULL] = X[82ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 119ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 127ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 135ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 143ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t127];
  }

  t84[151ULL] = X[18ULL];
  t84[152ULL] = X[75ULL];
  t84[153ULL] = X[76ULL] * 0.1;
  t84[154ULL] = X[77ULL];
  t84[155ULL] = X[78ULL];
  t84[156ULL] = X[79ULL];
  t84[157ULL] = X[80ULL] * 0.1;
  t84[158ULL] = X[81ULL];
  t84[159ULL] = X[82ULL];
  t84[160ULL] = X[103ULL];
  t84[161ULL] = X[104ULL];
  t84[162ULL] = X[18ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 163ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 171ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 179ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 187ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t127];
  }

  t84[195ULL] = X[73ULL];
  t84[196ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7;
  t84[197ULL] = X[9ULL];
  t84[198ULL] = X[10ULL];
  t84[199ULL] = X[11ULL];
  t84[200ULL] = X[15ULL];
  t84[201ULL] = X[16ULL];
  t84[202ULL] = X[17ULL];
  t84[203ULL] = 0.0;
  t84[204ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra25;
  t84[205ULL] = X[112ULL];
  t84[206ULL] = X[113ULL];
  t84[207ULL] = X[15ULL];
  t84[208ULL] = X[16ULL];
  t84[209ULL] = X[17ULL];
  t84[210ULL] = X[18ULL];
  t84[211ULL] = -X[112ULL];
  t84[212ULL] = X[114ULL];
  t84[213ULL] = X[115ULL];
  t84[214ULL] = X[9ULL];
  t84[215ULL] = X[10ULL];
  t84[216ULL] = X[11ULL];
  t84[217ULL] = X[18ULL];
  t84[218ULL] = -X[114ULL];
  t84[219ULL] = X[116ULL];
  t84[220ULL] = X[117ULL];
  t84[221ULL] = X[15ULL];
  t84[222ULL] = X[16ULL];
  t84[223ULL] = X[17ULL];
  t84[224ULL] = X[18ULL];
  t84[225ULL] = -X[116ULL];
  t84[226ULL] = X[120ULL];
  t84[227ULL] = X[118ULL];
  t84[228ULL] = X[9ULL];
  t84[229ULL] = X[10ULL];
  t84[230ULL] = X[11ULL];
  t84[231ULL] = X[18ULL];
  t84[232ULL] = -X[120ULL];
  t84[233ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42;
  t84[234ULL] = X[119ULL];
  t84[235ULL] = X[15ULL];
  t84[236ULL] = X[16ULL];
  t84[237ULL] = X[17ULL];
  t84[238ULL] = X[18ULL];
  t84[239ULL] = -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra42;
  t84[240ULL] = X[9ULL];
  t84[241ULL] = X[10ULL];
  t84[242ULL] = X[11ULL];
  t84[243ULL] = X[15ULL];
  t84[244ULL] = X[16ULL];
  t84[245ULL] = X[17ULL];
  t84[246ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra25;
  t84[247ULL] = 0.0;
  t84[248ULL] = X[18ULL];
  t84[249ULL] = X[18ULL];
  t84[250ULL] = X[18ULL];
  t84[251ULL] = X[18ULL];
  t84[252ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
    -1000.0;
  t84[253ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7 *
    -1000.0;
  t84[254ULL] = -Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra7;
  t84[255ULL] = X[18ULL];
  t84[256ULL] = X[18ULL];
  t84[257ULL] = X[105ULL] * 1000.0;
  t84[258ULL] = X[18ULL] - 273.15;
  t84[259ULL] = (-X[4ULL] + X[72ULL] * -1.0E-9) - X[73ULL];
  t84[260ULL] = 0.0;
  t84[261ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[262ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[263ULL] = X[5ULL];
  t84[264ULL] = Fuel_Cell_Boost_Converter_L_i;
  t84[265ULL] = Fuel_Cell_Boost_Converter_L_i;
  t84[266ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[267ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[268ULL] = Fuel_Cell_Boost_Converter_L_i;
  t84[269ULL] = -X[73ULL];
  t84[270ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[271ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v;
  t84[272ULL] = X[111ULL];
  t84[273ULL] = -X[73ULL];
  t84[274ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Sensors_Diode_p_v;
  t84[275ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra25;
  t84[276ULL] = X[73ULL] * -0.001;
  t84[277ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[278ULL] = 0.0;
  t84[279ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[280ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[281ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_Membra25;
  t84[282ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[283ULL] = 0.0;
  t84[284ULL] = X[122ULL];
  t84[285ULL] = X[123ULL] * 0.1;
  t84[286ULL] = X[124ULL];
  t84[287ULL] = X[125ULL];
  t84[288ULL] = X[126ULL];
  t84[289ULL] = 293.15;
  t84[290ULL] = -184.19157727996955 + t146 * 1000.0;
  t84[291ULL] = (X[126ULL] * 0.00062831853071795862 - 0.18419157727996954) *
    1591.5494309189535;
  t84[292ULL] = 0.0;
  t84[293ULL] = X[127ULL];
  t84[294ULL] = 0.101325;
  t84[295ULL] = X[128ULL];
  t84[296ULL] = X[129ULL];
  t84[297ULL] = X[130ULL];
  t84[298ULL] = X[131ULL];
  t84[299ULL] = 0.0;
  t84[300ULL] = X[139ULL];
  t84[301ULL] = X[138ULL];
  t84[302ULL] = 293.15;
  t84[303ULL] = X[127ULL];
  t84[304ULL] = 0.101325;
  t84[305ULL] = X[128ULL];
  t84[306ULL] = X[129ULL];
  t84[307ULL] = X[131ULL];
  t84[308ULL] = X[132ULL];
  t84[309ULL] = X[133ULL];
  t84[310ULL] = X[134ULL];
  t84[311ULL] = X[135ULL];
  t84[312ULL] = X[136ULL];
  t84[313ULL] = X[137ULL];
  t84[314ULL] = X[133ULL];
  t84[315ULL] = X[134ULL];
  t84[316ULL] = X[135ULL];
  t84[317ULL] = 0.101325;
  t84[318ULL] = 0.9997;
  t84[319ULL] = X[140ULL];
  t84[320ULL] = 293.15;
  t84[321ULL] = -184.19157727996955 + t146 * 1000.0;
  t84[322ULL] = U_idx_1;
  t84[323ULL] = U_idx_1 * 3.1415926535897929E-6;
  t84[324ULL] = X[122ULL];
  t84[325ULL] = X[123ULL] * 0.1;
  t84[326ULL] = X[124ULL];
  t84[327ULL] = X[125ULL];
  t84[328ULL] = X[141ULL];
  t84[329ULL] = X[142ULL] * 0.1;
  t84[330ULL] = X[143ULL];
  t84[331ULL] = X[144ULL];
  t84[332ULL] = X[22ULL];
  t84[333ULL] = X[149ULL];
  t84[334ULL] = X[21ULL];
  t84[335ULL] = X[146ULL];
  t84[336ULL] = X[19ULL] - 273.15;
  t84[337ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0;
  t84[338ULL] = X[147ULL] * 0.1;
  t84[339ULL] = X[20ULL] * 0.1;
  t84[340ULL] = X[148ULL];
  t84[341ULL] = X[150ULL];
  t84[342ULL] = -X[133ULL];
  t84[343ULL] = X[151ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 344ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_F[t127];
  }

  t84[352ULL] = X[126ULL];
  t84[353ULL] = X[152ULL];
  t84[354ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  t84[355ULL] = -X[131ULL];
  t84[356ULL] = 0.0;
  t84[357ULL] = 0.18419157727996954 - t146;
  t84[358ULL] = X[153ULL];
  t84[359ULL] = X[19ULL];
  t84[360ULL] = X[22ULL];
  t84[361ULL] = X[21ULL];
  t84[362ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_W;
  t84[363ULL] = X[122ULL];
  t84[364ULL] = X[123ULL] * 0.1;
  t84[365ULL] = X[124ULL];
  t84[366ULL] = X[125ULL];
  t84[367ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_Phi_A;
  t84[368ULL] = X[156ULL];
  t84[369ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio0;
  t84[370ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4;
  t84[371ULL] = t140;
  t84[372ULL] = X[161ULL];
  t84[373ULL] = X[162ULL];
  t84[374ULL] = X[141ULL];
  t84[375ULL] = X[142ULL] * 0.1;
  t84[376ULL] = X[143ULL];
  t84[377ULL] = X[144ULL];
  t84[378ULL] = -X[131ULL];
  t84[379ULL] = X[163ULL];
  t84[380ULL] = -X[133ULL];
  t84[381ULL] = -X[134ULL];
  t84[382ULL] = -X[135ULL];
  t84[383ULL] = X[164ULL];
  t84[384ULL] = X[165ULL];
  t84[385ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_convectio4;
  t84[386ULL] = -X[134ULL];
  t84[387ULL] = 0.0;
  t84[388ULL] = 0.0;
  t84[389ULL] = t140;
  t84[390ULL] = -X[135ULL];
  t84[391ULL] = X[141ULL];
  t84[392ULL] = X[142ULL] * 0.1;
  t84[393ULL] = X[143ULL];
  t84[394ULL] = X[144ULL];
  t84[395ULL] = U_idx_1 * 0.031415926535897927 * 0.0001;
  t84[396ULL] = X[127ULL];
  t84[397ULL] = 0.101325;
  t84[398ULL] = X[128ULL];
  t84[399ULL] = X[129ULL];
  t84[400ULL] = X[133ULL];
  t84[401ULL] = X[141ULL];
  t84[402ULL] = X[142ULL] * 0.1;
  t84[403ULL] = X[143ULL];
  t84[404ULL] = X[144ULL];
  t84[405ULL] = X[131ULL];
  t84[406ULL] = X[172ULL];
  t84[407ULL] = X[133ULL];
  t84[408ULL] = X[134ULL];
  t84[409ULL] = X[135ULL];
  t84[410ULL] = X[169ULL];
  t84[411ULL] = X[168ULL];
  t84[412ULL] = X[166ULL];
  t84[413ULL] = X[167ULL] * 0.1;
  t84[414ULL] = X[170ULL];
  t84[415ULL] = X[171ULL];
  t84[416ULL] = X[131ULL];
  t84[417ULL] = -X[131ULL];
  t84[418ULL] = X[127ULL];
  t84[419ULL] = 0.101325;
  t84[420ULL] = X[128ULL];
  t84[421ULL] = X[129ULL];
  t84[422ULL] = -X[131ULL];
  t84[423ULL] = X[172ULL];
  t84[424ULL] = -X[133ULL];
  t84[425ULL] = -X[134ULL];
  t84[426ULL] = -X[135ULL];
  t84[427ULL] = X[169ULL];
  t84[428ULL] = X[168ULL];
  t84[429ULL] = -X[133ULL];
  t84[430ULL] = X[134ULL];
  t84[431ULL] = -X[134ULL];
  t84[432ULL] = X[135ULL];
  t84[433ULL] = -X[135ULL];
  t84[434ULL] = U_idx_1;
  t84[435ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[436ULL] = 0.0;
  t84[437ULL] = X[79ULL];
  t84[438ULL] = X[80ULL] * 0.1;
  t84[439ULL] = X[81ULL];
  t84[440ULL] = X[82ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 441ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 449ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t127];
  }

  t84[457ULL] = X[18ULL];
  t84[458ULL] = X[173ULL];
  t84[459ULL] = X[174ULL] * 0.1;
  t84[460ULL] = X[175ULL];
  t84[461ULL] = X[176ULL];
  t84[462ULL] = X[79ULL];
  t84[463ULL] = X[80ULL] * 0.1;
  t84[464ULL] = X[81ULL];
  t84[465ULL] = X[82ULL];
  t84[466ULL] = X[13ULL];
  t84[467ULL] = X[93ULL];
  t84[468ULL] = X[14ULL];
  t84[469ULL] = X[178ULL];
  t84[470ULL] = X[12ULL] - 273.15;
  t84[471ULL] = X[177ULL];
  t84[472ULL] = X[179ULL] * 0.1;
  t84[473ULL] = X[23ULL] * 0.1;
  t84[474ULL] = X[94ULL];
  t84[475ULL] = X[181ULL];
  t84[476ULL] = X[180ULL];
  t84[477ULL] = X[182ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 478ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCi[t127];
  }

  t84[486ULL] = X[18ULL];
  t84[487ULL] = X[97ULL];
  t84[488ULL] = X[183ULL];
  t84[489ULL] = X[184ULL];
  t84[490ULL] = 0.0;
  t84[491ULL] = X[106ULL];
  t84[492ULL] = X[96ULL];
  t84[493ULL] = X[12ULL];
  t84[494ULL] = X[13ULL];
  t84[495ULL] = X[14ULL];
  t84[496ULL] = t142;
  t84[497ULL] = X[173ULL];
  t84[498ULL] = X[174ULL] * 0.1;
  t84[499ULL] = X[175ULL];
  t84[500ULL] = X[176ULL];
  t84[501ULL] = X[183ULL];
  t84[502ULL] = X[185ULL];
  t84[503ULL] = X[177ULL];
  t84[504ULL] = X[186ULL];
  t84[505ULL] = X[187ULL];
  t84[506ULL] = X[188ULL];
  t84[507ULL] = X[189ULL];
  t84[508ULL] = X[79ULL];
  t84[509ULL] = X[80ULL] * 0.1;
  t84[510ULL] = X[81ULL];
  t84[511ULL] = X[82ULL];
  t84[512ULL] = X[184ULL];
  t84[513ULL] = X[190ULL];
  t84[514ULL] = X[180ULL];
  t84[515ULL] = X[191ULL];
  t84[516ULL] = X[192ULL];
  t84[517ULL] = X[193ULL];
  t84[518ULL] = X[194ULL];
  t84[519ULL] = X[186ULL];
  t84[520ULL] = X[191ULL];
  t84[521ULL] = 0.0;
  t84[522ULL] = 0.0;
  t84[523ULL] = X[187ULL];
  t84[524ULL] = X[192ULL];
  t84[525ULL] = X[79ULL];
  t84[526ULL] = X[80ULL] * 0.1;
  t84[527ULL] = X[81ULL];
  t84[528ULL] = X[82ULL];
  t84[529ULL] = X[195ULL];
  t84[530ULL] = X[196ULL] * 0.1;
  t84[531ULL] = X[197ULL];
  t84[532ULL] = X[198ULL];
  t84[533ULL] = X[16ULL];
  t84[534ULL] = X[98ULL];
  t84[535ULL] = X[17ULL];
  t84[536ULL] = X[199ULL];
  t84[537ULL] = X[15ULL] - 273.15;
  t84[538ULL] = -X[180ULL];
  t84[539ULL] = X[200ULL] * 0.1;
  t84[540ULL] = X[24ULL] * 0.1;
  t84[541ULL] = X[99ULL];
  t84[542ULL] = X[202ULL];
  t84[543ULL] = X[201ULL];
  t84[544ULL] = X[203ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 545ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FCo[t127];
  }

  t84[553ULL] = X[18ULL];
  t84[554ULL] = X[102ULL];
  t84[555ULL] = -X[184ULL];
  t84[556ULL] = X[204ULL];
  t84[557ULL] = (-X[113ULL] - X[117ULL]) - X[119ULL];
  t84[558ULL] = X[107ULL];
  t84[559ULL] = X[101ULL];
  t84[560ULL] = X[15ULL];
  t84[561ULL] = X[16ULL];
  t84[562ULL] = X[17ULL];
  t84[563ULL] = t145;
  t84[564ULL] = X[79ULL];
  t84[565ULL] = X[80ULL] * 0.1;
  t84[566ULL] = X[81ULL];
  t84[567ULL] = X[82ULL];
  t84[568ULL] = -X[184ULL];
  t84[569ULL] = X[205ULL];
  t84[570ULL] = -X[180ULL];
  t84[571ULL] = -X[191ULL];
  t84[572ULL] = -X[192ULL];
  t84[573ULL] = X[206ULL];
  t84[574ULL] = X[207ULL];
  t84[575ULL] = X[195ULL];
  t84[576ULL] = X[196ULL] * 0.1;
  t84[577ULL] = X[197ULL];
  t84[578ULL] = X[198ULL];
  t84[579ULL] = X[204ULL];
  t84[580ULL] = X[208ULL];
  t84[581ULL] = X[201ULL];
  t84[582ULL] = X[209ULL];
  t84[583ULL] = X[210ULL];
  t84[584ULL] = X[211ULL];
  t84[585ULL] = X[212ULL];
  t84[586ULL] = -X[191ULL];
  t84[587ULL] = X[209ULL];
  t84[588ULL] = X[116ULL];
  t84[589ULL] = X[121ULL];
  t84[590ULL] = -X[192ULL];
  t84[591ULL] = X[210ULL];
  t84[592ULL] = X[15ULL];
  t84[593ULL] = X[16ULL];
  t84[594ULL] = X[17ULL];
  t84[595ULL] = X[173ULL];
  t84[596ULL] = X[174ULL] * 0.1;
  t84[597ULL] = X[175ULL];
  t84[598ULL] = X[176ULL];
  t84[599ULL] = X[195ULL];
  t84[600ULL] = X[196ULL] * 0.1;
  t84[601ULL] = X[197ULL];
  t84[602ULL] = X[198ULL];
  t84[603ULL] = X[31ULL];
  t84[604ULL] = 293.15;
  t84[605ULL] = t149 * 1000.0;
  t84[606ULL] = t149 * 0.35777375282305851;
  t84[607ULL] = 0.0;
  t84[608ULL] = X[215ULL];
  t84[609ULL] = 0.101325;
  t84[610ULL] = X[215ULL];
  t84[611ULL] = 0.101325;
  t84[612ULL] = 0.0;
  t84[613ULL] = X[25ULL];
  t84[614ULL] = t150;
  t84[615ULL] = 0.0;
  t84[616ULL] = X[218ULL];
  t84[617ULL] = X[25ULL];
  t84[618ULL] = 0.101325;
  t84[619ULL] = X[215ULL];
  t84[620ULL] = 0.101325;
  t84[621ULL] = t150;
  t84[622ULL] = X[219ULL];
  t84[623ULL] = t151;
  t84[624ULL] = X[221ULL];
  t84[625ULL] = X[26ULL];
  t84[626ULL] = 0.0;
  t84[627ULL] = t151;
  t84[628ULL] = 0.0;
  t84[629ULL] = 0.0;
  t84[630ULL] = X[25ULL];
  t84[631ULL] = X[25ULL];
  t84[632ULL] = X[215ULL];
  t84[633ULL] = 0.101325;
  t84[634ULL] = X[218ULL];
  t84[635ULL] = X[218ULL];
  t84[636ULL] = 293.15;
  t84[637ULL] = t149 * 1000.0;
  t84[638ULL] = X[222ULL];
  t84[639ULL] = X[223ULL] * 0.1;
  t84[640ULL] = X[224ULL];
  t84[641ULL] = X[225ULL] * 0.1;
  t84[642ULL] = X[226ULL];
  t84[643ULL] = -X[226ULL];
  t84[644ULL] = X[222ULL];
  t84[645ULL] = X[223ULL] * 0.1;
  t84[646ULL] = X[226ULL];
  t84[647ULL] = X[227ULL];
  t84[648ULL] = X[228ULL];
  t84[649ULL] = X[229ULL];
  t84[650ULL] = X[224ULL];
  t84[651ULL] = X[225ULL] * 0.1;
  t84[652ULL] = -X[226ULL];
  t84[653ULL] = X[230ULL];
  t84[654ULL] = -X[228ULL];
  t84[655ULL] = X[229ULL];
  t84[656ULL] = X[228ULL];
  t84[657ULL] = -X[228ULL];
  t84[658ULL] = X[224ULL];
  t84[659ULL] = X[225ULL] * 0.1;
  t84[660ULL] = X[215ULL];
  t84[661ULL] = 0.101325;
  t84[662ULL] = X[18ULL];
  t84[663ULL] = X[226ULL];
  t84[664ULL] = X[216ULL];
  t84[665ULL] = X[27ULL] * 0.1;
  t84[666ULL] = X[28ULL];
  t84[667ULL] = X[228ULL];
  t84[668ULL] = X[220ULL];
  t84[669ULL] = X[108ULL];
  t84[670ULL] = X[224ULL];
  t84[671ULL] = X[225ULL] * 0.1;
  t84[672ULL] = X[226ULL];
  t84[673ULL] = X[231ULL];
  t84[674ULL] = X[228ULL];
  t84[675ULL] = X[232ULL];
  t84[676ULL] = X[215ULL];
  t84[677ULL] = 0.101325;
  t84[678ULL] = X[216ULL];
  t84[679ULL] = X[233ULL];
  t84[680ULL] = X[220ULL];
  t84[681ULL] = X[234ULL];
  t84[682ULL] = X[18ULL];
  t84[683ULL] = U_idx_3;
  t84[684ULL] = t153;
  t84[685ULL] = X[215ULL];
  t84[686ULL] = 0.101325;
  t84[687ULL] = X[235ULL];
  t84[688ULL] = X[236ULL] * 0.1;
  t84[689ULL] = t153;
  t84[690ULL] = X[217ULL];
  t84[691ULL] = X[237ULL];
  t84[692ULL] = X[215ULL];
  t84[693ULL] = 0.101325;
  t84[694ULL] = X[217ULL];
  t84[695ULL] = X[238ULL];
  t84[696ULL] = t154;
  t84[697ULL] = X[239ULL];
  t84[698ULL] = X[235ULL];
  t84[699ULL] = X[236ULL] * 0.1;
  t84[700ULL] = X[237ULL];
  t84[701ULL] = X[240ULL];
  t84[702ULL] = -t154;
  t84[703ULL] = X[239ULL];
  t84[704ULL] = t154;
  t84[705ULL] = -t154;
  t84[706ULL] = X[235ULL];
  t84[707ULL] = X[236ULL] * 0.1;
  t84[708ULL] = X[222ULL];
  t84[709ULL] = X[223ULL] * 0.1;
  t84[710ULL] = X[31ULL];
  t84[711ULL] = -X[237ULL];
  t84[712ULL] = -X[226ULL];
  t84[713ULL] = X[29ULL] * 0.1;
  t84[714ULL] = X[30ULL];
  t84[715ULL] = t154;
  t84[716ULL] = -X[228ULL];
  t84[717ULL] = X[213ULL];
  t84[718ULL] = X[235ULL];
  t84[719ULL] = X[236ULL] * 0.1;
  t84[720ULL] = -X[237ULL];
  t84[721ULL] = X[241ULL];
  t84[722ULL] = t154;
  t84[723ULL] = X[242ULL];
  t84[724ULL] = X[222ULL];
  t84[725ULL] = X[223ULL] * 0.1;
  t84[726ULL] = -X[226ULL];
  t84[727ULL] = X[243ULL];
  t84[728ULL] = -X[228ULL];
  t84[729ULL] = X[244ULL];
  t84[730ULL] = X[235ULL];
  t84[731ULL] = X[236ULL] * 0.1;
  t84[732ULL] = X[215ULL];
  t84[733ULL] = 0.101325;
  t84[734ULL] = 0.9;
  t84[735ULL] = X[235ULL];
  t84[736ULL] = X[236ULL] * 0.1;
  t84[737ULL] = t156 * 1000.0;
  t84[738ULL] = 0.9;
  t84[739ULL] = t156 * 1111.1111111111111;
  t84[740ULL] = t156 * 1111.1111111111111;
  t84[741ULL] = (1.01325 - X[236ULL]) * 99999.999999999985;
  t84[742ULL] = X[245ULL] * 1.0E-6;
  t84[743ULL] = t156 * 1000.0;
  t84[744ULL] = X[215ULL];
  t84[745ULL] = 0.101325;
  t84[746ULL] = X[235ULL];
  t84[747ULL] = X[236ULL] * 0.1;
  t84[748ULL] = (1.01325 - X[236ULL]) * 99999.999999999985;
  t84[749ULL] = X[215ULL] - X[235ULL];
  t84[750ULL] = X[235ULL];
  t84[751ULL] = X[236ULL] * 0.1;
  t84[752ULL] = X[235ULL];
  t84[753ULL] = X[236ULL] * 0.1;
  t84[754ULL] = -X[237ULL];
  t84[755ULL] = X[245ULL] * 1.0E-6;
  t84[756ULL] = t154;
  t84[757ULL] = U_idx_3;
  t84[758ULL] = X[18ULL];
  t84[759ULL] = 0.0;
  t84[760ULL] = X[18ULL];
  t84[761ULL] = X[18ULL] - 273.15;
  t84[762ULL] = X[31ULL];
  t84[763ULL] = X[31ULL];
  t84[764ULL] = X[214ULL] * 1000.0;
  t84[765ULL] = X[31ULL] - 273.15;
  t84[766ULL] = 0.0;
  t84[767ULL] = X[246ULL];
  t84[768ULL] = X[33ULL] * 0.1;
  t84[769ULL] = X[247ULL];
  t84[770ULL] = X[248ULL];
  t84[771ULL] = X[249ULL];
  t84[772ULL] = X[33ULL] * 0.1;
  t84[773ULL] = X[250ULL];
  t84[774ULL] = X[251ULL];
  t84[775ULL] = X[246ULL];
  t84[776ULL] = X[33ULL] * 0.1;
  t84[777ULL] = X[247ULL];
  t84[778ULL] = X[248ULL];
  t84[779ULL] = X[252ULL];
  t84[780ULL] = X[33ULL] * 0.1;
  t84[781ULL] = X[253ULL];
  t84[782ULL] = X[254ULL];
  t84[783ULL] = X[249ULL];
  t84[784ULL] = X[33ULL] * 0.1;
  t84[785ULL] = X[250ULL];
  t84[786ULL] = X[251ULL];
  t84[787ULL] = X[32ULL];
  t84[788ULL] = X[33ULL] * 0.1;
  t84[789ULL] = X[34ULL];
  t84[790ULL] = X[35ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 791ULL] = t85[t127];
  }

  t84[799ULL] = X[32ULL];
  t84[800ULL] = X[255ULL];
  t84[801ULL] = X[259ULL];
  t84[802ULL] = X[260ULL];
  t84[803ULL] = X[261ULL];
  t84[804ULL] = 0.0;
  t84[805ULL] = 0.0;
  t84[806ULL] = X[32ULL] - 273.15;
  t84[807ULL] = X[34ULL];
  t84[808ULL] = X[257ULL];
  t84[809ULL] = X[35ULL];
  t84[810ULL] = X[33ULL] * 0.1;
  t84[811ULL] = 0.0;
  t84[812ULL] = X[256ULL];
  t84[813ULL] = X[32ULL];
  t84[814ULL] = X[34ULL];
  t84[815ULL] = X[35ULL];
  t84[816ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x3_Constant_Volume_Cha5;
  t84[817ULL] = X[246ULL];
  t84[818ULL] = X[33ULL] * 0.1;
  t84[819ULL] = X[247ULL];
  t84[820ULL] = X[248ULL];
  t84[821ULL] = X[259ULL];
  t84[822ULL] = X[262ULL];
  t84[823ULL] = X[263ULL];
  t84[824ULL] = X[264ULL];
  t84[825ULL] = X[265ULL];
  t84[826ULL] = X[266ULL];
  t84[827ULL] = X[267ULL];
  t84[828ULL] = X[252ULL];
  t84[829ULL] = X[33ULL] * 0.1;
  t84[830ULL] = X[253ULL];
  t84[831ULL] = X[254ULL];
  t84[832ULL] = X[260ULL];
  t84[833ULL] = X[268ULL];
  t84[834ULL] = t160;
  t84[835ULL] = X[157ULL];
  t84[836ULL] = X[159ULL];
  t84[837ULL] = X[269ULL];
  t84[838ULL] = X[270ULL];
  t84[839ULL] = X[249ULL];
  t84[840ULL] = X[33ULL] * 0.1;
  t84[841ULL] = X[250ULL];
  t84[842ULL] = X[251ULL];
  t84[843ULL] = X[261ULL];
  t84[844ULL] = X[271ULL];
  t84[845ULL] = X[272ULL];
  t84[846ULL] = X[273ULL];
  t84[847ULL] = X[274ULL];
  t84[848ULL] = X[275ULL];
  t84[849ULL] = X[276ULL];
  t84[850ULL] = X[263ULL];
  t84[851ULL] = t160;
  t84[852ULL] = X[272ULL];
  t84[853ULL] = 0.0;
  t84[854ULL] = X[264ULL];
  t84[855ULL] = X[157ULL];
  t84[856ULL] = X[273ULL];
  t84[857ULL] = 0.0;
  t84[858ULL] = 0.0;
  t84[859ULL] = 0.0;
  t84[860ULL] = X[265ULL];
  t84[861ULL] = X[159ULL];
  t84[862ULL] = X[274ULL];
  t84[863ULL] = 0.0;
  t84[864ULL] = X[258ULL];
  t84[865ULL] = X[122ULL];
  t84[866ULL] = X[123ULL] * 0.1;
  t84[867ULL] = X[124ULL];
  t84[868ULL] = X[125ULL];
  t84[869ULL] = X[252ULL];
  t84[870ULL] = X[33ULL] * 0.1;
  t84[871ULL] = X[253ULL];
  t84[872ULL] = X[254ULL];
  t84[873ULL] = X[277ULL];
  t84[874ULL] = X[280ULL];
  t84[875ULL] = X[122ULL];
  t84[876ULL] = X[123ULL] * 0.1;
  t84[877ULL] = X[124ULL];
  t84[878ULL] = X[125ULL];
  t84[879ULL] = X[154ULL];
  t84[880ULL] = X[281ULL];
  t84[881ULL] = t160;
  t84[882ULL] = X[157ULL];
  t84[883ULL] = X[159ULL];
  t84[884ULL] = X[282ULL];
  t84[885ULL] = X[283ULL];
  t84[886ULL] = t160;
  t84[887ULL] = X[278ULL];
  t84[888ULL] = X[279ULL];
  t84[889ULL] = X[252ULL];
  t84[890ULL] = X[33ULL] * 0.1;
  t84[891ULL] = X[253ULL];
  t84[892ULL] = X[254ULL];
  t84[893ULL] = -X[260ULL];
  t84[894ULL] = X[281ULL];
  t84[895ULL] = -t160;
  t84[896ULL] = -X[157ULL];
  t84[897ULL] = -X[159ULL];
  t84[898ULL] = X[282ULL];
  t84[899ULL] = X[283ULL];
  t84[900ULL] = -t160;
  t84[901ULL] = t160;
  t84[902ULL] = X[154ULL];
  t84[903ULL] = -X[260ULL];
  t84[904ULL] = X[157ULL];
  t84[905ULL] = -X[157ULL];
  t84[906ULL] = X[159ULL];
  t84[907ULL] = -X[159ULL];
  t84[908ULL] = U_idx_2;
  t84[909ULL] = U_idx_2 * 0.01;
  t84[910ULL] = X[32ULL];
  t84[911ULL] = X[32ULL];
  t84[912ULL] = X[122ULL];
  t84[913ULL] = X[123ULL] * 0.1;
  t84[914ULL] = X[124ULL];
  t84[915ULL] = X[125ULL];
  t84[916ULL] = U_idx_2;
  t84[917ULL] = X[246ULL];
  t84[918ULL] = X[33ULL] * 0.1;
  t84[919ULL] = X[247ULL];
  t84[920ULL] = X[248ULL];
  t84[921ULL] = X[284ULL];
  t84[922ULL] = X[37ULL] * 0.1;
  t84[923ULL] = X[285ULL];
  t84[924ULL] = X[286ULL];
  t84[925ULL] = X[36ULL];
  t84[926ULL] = X[37ULL] * 0.1;
  t84[927ULL] = X[38ULL];
  t84[928ULL] = X[39ULL];
  t84[929ULL] = X[36ULL];
  t84[930ULL] = X[37ULL] * 0.1;
  t84[931ULL] = X[38ULL];
  t84[932ULL] = X[39ULL];
  t84[933ULL] = X[36ULL];
  t84[934ULL] = X[37ULL] * 0.1;
  t84[935ULL] = X[38ULL];
  t84[936ULL] = X[39ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 937ULL] = t89[t127];
  }

  t84[945ULL] = X[36ULL];
  t84[946ULL] = X[287ULL];
  t84[947ULL] = X[291ULL];
  t84[948ULL] = 0.0;
  t84[949ULL] = 0.0;
  t84[950ULL] = 0.0;
  t84[951ULL] = 0.0;
  t84[952ULL] = X[36ULL] - 273.15;
  t84[953ULL] = X[38ULL];
  t84[954ULL] = X[289ULL];
  t84[955ULL] = X[39ULL];
  t84[956ULL] = X[37ULL] * 0.1;
  t84[957ULL] = 0.0;
  t84[958ULL] = X[288ULL];
  t84[959ULL] = X[36ULL];
  t84[960ULL] = X[38ULL];
  t84[961ULL] = X[39ULL];
  t84[962ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Fuel_Tank_rho_I;
  t84[963ULL] = X[284ULL];
  t84[964ULL] = X[37ULL] * 0.1;
  t84[965ULL] = X[285ULL];
  t84[966ULL] = X[286ULL];
  t84[967ULL] = X[291ULL];
  t84[968ULL] = X[292ULL];
  t84[969ULL] = X[293ULL];
  t84[970ULL] = X[294ULL];
  t84[971ULL] = X[295ULL];
  t84[972ULL] = X[296ULL];
  t84[973ULL] = X[297ULL];
  t84[974ULL] = X[293ULL];
  t84[975ULL] = 0.0;
  t84[976ULL] = 0.0;
  t84[977ULL] = 0.0;
  t84[978ULL] = X[294ULL];
  t84[979ULL] = 0.0;
  t84[980ULL] = 0.0;
  t84[981ULL] = 0.0;
  t84[982ULL] = 0.0;
  t84[983ULL] = 0.0;
  t84[984ULL] = X[295ULL];
  t84[985ULL] = 0.0;
  t84[986ULL] = 0.0;
  t84[987ULL] = 0.0;
  t84[988ULL] = X[290ULL];
  t84[989ULL] = X[246ULL];
  t84[990ULL] = X[33ULL] * 0.1;
  t84[991ULL] = X[247ULL];
  t84[992ULL] = X[248ULL];
  t84[993ULL] = X[284ULL];
  t84[994ULL] = X[37ULL] * 0.1;
  t84[995ULL] = X[285ULL];
  t84[996ULL] = X[286ULL];
  t84[997ULL] = X[284ULL];
  t84[998ULL] = X[37ULL] * 0.1;
  t84[999ULL] = X[285ULL];
  t84[1000ULL] = X[286ULL];
  t84[1001ULL] = -X[293ULL];
  t84[1002ULL] = -X[294ULL];
  t84[1003ULL] = -X[295ULL];
  t84[1004ULL] = X[291ULL] * -1000.0;
  t84[1005ULL] = -X[291ULL];
  t84[1006ULL] = -X[293ULL];
  t84[1007ULL] = -X[294ULL];
  t84[1008ULL] = -X[295ULL];
  t84[1009ULL] = -X[293ULL];
  t84[1010ULL] = X[36ULL];
  t84[1011ULL] = X[36ULL];
  t84[1012ULL] = X[298ULL];
  t84[1013ULL] = X[298ULL];
  t84[1014ULL] = X[299ULL];
  t84[1015ULL] = X[300ULL] * 0.1;
  t84[1016ULL] = X[301ULL];
  t84[1017ULL] = X[302ULL];
  t84[1018ULL] = X[246ULL];
  t84[1019ULL] = X[33ULL] * 0.1;
  t84[1020ULL] = X[247ULL];
  t84[1021ULL] = X[248ULL];
  t84[1022ULL] = X[43ULL];
  t84[1023ULL] = X[306ULL];
  t84[1024ULL] = X[42ULL];
  t84[1025ULL] = X[303ULL];
  t84[1026ULL] = X[40ULL] - 273.15;
  t84[1027ULL] = -X[293ULL];
  t84[1028ULL] = X[304ULL] * 0.1;
  t84[1029ULL] = X[41ULL] * 0.1;
  t84[1030ULL] = X[305ULL];
  t84[1031ULL] = X[307ULL];
  t84[1032ULL] = -X[263ULL];
  t84[1033ULL] = X[308ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1034ULL] = t91[t127];
  }

  t84[1042ULL] = X[298ULL];
  t84[1043ULL] = X[309ULL];
  t84[1044ULL] = -X[291ULL];
  t84[1045ULL] = -X[259ULL];
  t84[1046ULL] = 0.0;
  t84[1047ULL] = 0.0;
  t84[1048ULL] = X[310ULL];
  t84[1049ULL] = X[40ULL];
  t84[1050ULL] = X[43ULL];
  t84[1051ULL] = X[42ULL];
  t84[1052ULL] = t164;
  t84[1053ULL] = X[299ULL];
  t84[1054ULL] = X[300ULL] * 0.1;
  t84[1055ULL] = X[301ULL];
  t84[1056ULL] = X[302ULL];
  t84[1057ULL] = -X[291ULL];
  t84[1058ULL] = X[311ULL];
  t84[1059ULL] = -X[293ULL];
  t84[1060ULL] = -X[294ULL];
  t84[1061ULL] = -X[295ULL];
  t84[1062ULL] = X[312ULL];
  t84[1063ULL] = X[313ULL];
  t84[1064ULL] = X[246ULL];
  t84[1065ULL] = X[33ULL] * 0.1;
  t84[1066ULL] = X[247ULL];
  t84[1067ULL] = X[248ULL];
  t84[1068ULL] = -X[259ULL];
  t84[1069ULL] = X[314ULL];
  t84[1070ULL] = -X[263ULL];
  t84[1071ULL] = -X[264ULL];
  t84[1072ULL] = -X[265ULL];
  t84[1073ULL] = X[315ULL];
  t84[1074ULL] = X[316ULL];
  t84[1075ULL] = -X[294ULL];
  t84[1076ULL] = -X[264ULL];
  t84[1077ULL] = 0.0;
  t84[1078ULL] = 0.0;
  t84[1079ULL] = -X[295ULL];
  t84[1080ULL] = -X[265ULL];
  t84[1081ULL] = X[284ULL];
  t84[1082ULL] = X[37ULL] * 0.1;
  t84[1083ULL] = X[285ULL];
  t84[1084ULL] = X[286ULL];
  t84[1085ULL] = 0.0;
  t84[1086ULL] = 0.0;
  t84[1087ULL] = 0.0;
  t84[1088ULL] = 0.0;
  t84[1089ULL] = X[299ULL];
  t84[1090ULL] = X[300ULL] * 0.1;
  t84[1091ULL] = X[301ULL];
  t84[1092ULL] = X[302ULL];
  t84[1093ULL] = 0.040000000000000008;
  t84[1094ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
    1.0E+6;
  t84[1095ULL] = intrm_sf_mf_756;
  t84[1096ULL] = 0.040000000000000008;
  t84[1097ULL] = 0.005000000000000001;
  t84[1098ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
    -125000.03125000779;
  t84[1099ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
    1.0E+6;
  t84[1100ULL] = intrm_sf_mf_756;
  t84[1101ULL] = intrm_sf_mf_756 * 7.8539816339744827E-5;
  t84[1102ULL] = X[300ULL] * 99999.999999999985;
  t84[1103ULL] = (t168 - 0.05000000000000001) * 0.1;
  t84[1104ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V0 *
    -125000.03125000779;
  t84[1105ULL] = t168 * 0.1;
  t84[1106ULL] = 0.005000000000000001;
  t84[1107ULL] = (t168 - 0.05000000000000001) * 0.1;
  t84[1108ULL] = X[299ULL];
  t84[1109ULL] = X[300ULL] * 0.1;
  t84[1110ULL] = X[301ULL];
  t84[1111ULL] = X[302ULL];
  t84[1112ULL] = 0.0;
  t84[1113ULL] = 0.0;
  t84[1114ULL] = 0.0;
  t84[1115ULL] = 0.0;
  t84[1116ULL] = X[300ULL] * 99999.999999999985;
  t84[1117ULL] = X[299ULL];
  t84[1118ULL] = X[284ULL];
  t84[1119ULL] = X[37ULL] * 0.1;
  t84[1120ULL] = X[285ULL];
  t84[1121ULL] = X[286ULL];
  t84[1122ULL] = intrm_sf_mf_756 * 7.8539816339744827E-5;
  t84[1123ULL] = X[299ULL];
  t84[1124ULL] = X[300ULL] * 0.1;
  t84[1125ULL] = X[301ULL];
  t84[1126ULL] = X[302ULL];
  t84[1127ULL] = -X[293ULL];
  t84[1128ULL] = X[284ULL];
  t84[1129ULL] = X[37ULL] * 0.1;
  t84[1130ULL] = X[285ULL];
  t84[1131ULL] = X[286ULL];
  t84[1132ULL] = -X[291ULL];
  t84[1133ULL] = X[323ULL];
  t84[1134ULL] = -X[293ULL];
  t84[1135ULL] = -X[294ULL];
  t84[1136ULL] = -X[295ULL];
  t84[1137ULL] = X[320ULL];
  t84[1138ULL] = X[319ULL];
  t84[1139ULL] = X[317ULL];
  t84[1140ULL] = X[318ULL] * 0.1;
  t84[1141ULL] = X[321ULL];
  t84[1142ULL] = X[322ULL];
  t84[1143ULL] = -X[291ULL];
  t84[1144ULL] = X[291ULL];
  t84[1145ULL] = X[299ULL];
  t84[1146ULL] = X[300ULL] * 0.1;
  t84[1147ULL] = X[301ULL];
  t84[1148ULL] = X[302ULL];
  t84[1149ULL] = X[291ULL];
  t84[1150ULL] = X[323ULL];
  t84[1151ULL] = X[293ULL];
  t84[1152ULL] = X[294ULL];
  t84[1153ULL] = X[295ULL];
  t84[1154ULL] = X[320ULL];
  t84[1155ULL] = X[319ULL];
  t84[1156ULL] = X[293ULL];
  t84[1157ULL] = -X[294ULL];
  t84[1158ULL] = X[294ULL];
  t84[1159ULL] = -X[295ULL];
  t84[1160ULL] = X[295ULL];
  t84[1161ULL] = t168 * 0.1;
  t84[1162ULL] = U_idx_4;
  t84[1163ULL] = X[324ULL];
  t84[1164ULL] = 0.101325;
  t84[1165ULL] = X[325ULL];
  t84[1166ULL] = X[326ULL];
  t84[1167ULL] = X[327ULL];
  t84[1168ULL] = X[328ULL];
  t84[1169ULL] = 0.5;
  t84[1170ULL] = X[336ULL];
  t84[1171ULL] = X[335ULL];
  t84[1172ULL] = 293.15;
  t84[1173ULL] = X[324ULL];
  t84[1174ULL] = 0.101325;
  t84[1175ULL] = X[325ULL];
  t84[1176ULL] = X[326ULL];
  t84[1177ULL] = X[328ULL];
  t84[1178ULL] = X[329ULL];
  t84[1179ULL] = X[330ULL];
  t84[1180ULL] = X[331ULL];
  t84[1181ULL] = X[332ULL];
  t84[1182ULL] = X[333ULL];
  t84[1183ULL] = X[334ULL];
  t84[1184ULL] = X[330ULL];
  t84[1185ULL] = X[331ULL];
  t84[1186ULL] = X[332ULL];
  t84[1187ULL] = 0.101325;
  t84[1188ULL] = 0.21;
  t84[1189ULL] = X[337ULL];
  t84[1190ULL] = X[338ULL];
  t84[1191ULL] = X[44ULL] * 0.1;
  t84[1192ULL] = X[339ULL];
  t84[1193ULL] = X[340ULL];
  t84[1194ULL] = X[324ULL];
  t84[1195ULL] = 0.101325;
  t84[1196ULL] = X[325ULL];
  t84[1197ULL] = X[326ULL];
  t84[1198ULL] = X[338ULL];
  t84[1199ULL] = X[44ULL] * 0.1;
  t84[1200ULL] = X[339ULL];
  t84[1201ULL] = X[340ULL];
  t84[1202ULL] = X[342ULL];
  t84[1203ULL] = X[345ULL];
  t84[1204ULL] = X[324ULL];
  t84[1205ULL] = 0.101325;
  t84[1206ULL] = X[325ULL];
  t84[1207ULL] = X[326ULL];
  t84[1208ULL] = -X[328ULL];
  t84[1209ULL] = X[346ULL];
  t84[1210ULL] = -X[330ULL];
  t84[1211ULL] = -X[331ULL];
  t84[1212ULL] = -X[332ULL];
  t84[1213ULL] = X[347ULL];
  t84[1214ULL] = X[348ULL];
  t84[1215ULL] = -X[330ULL];
  t84[1216ULL] = X[343ULL];
  t84[1217ULL] = X[344ULL];
  t84[1218ULL] = X[338ULL];
  t84[1219ULL] = X[44ULL] * 0.1;
  t84[1220ULL] = X[339ULL];
  t84[1221ULL] = X[340ULL];
  t84[1222ULL] = X[341ULL];
  t84[1223ULL] = X[346ULL];
  t84[1224ULL] = X[330ULL];
  t84[1225ULL] = X[331ULL];
  t84[1226ULL] = X[332ULL];
  t84[1227ULL] = X[347ULL];
  t84[1228ULL] = X[348ULL];
  t84[1229ULL] = X[330ULL];
  t84[1230ULL] = -X[330ULL];
  t84[1231ULL] = -X[328ULL];
  t84[1232ULL] = X[341ULL];
  t84[1233ULL] = -X[331ULL];
  t84[1234ULL] = X[331ULL];
  t84[1235ULL] = -X[332ULL];
  t84[1236ULL] = X[332ULL];
  t84[1237ULL] = X[338ULL];
  t84[1238ULL] = X[44ULL] * 0.1;
  t84[1239ULL] = X[339ULL];
  t84[1240ULL] = X[340ULL];
  t84[1241ULL] = X[349ULL];
  t84[1242ULL] = X[44ULL] * 0.1;
  t84[1243ULL] = X[350ULL];
  t84[1244ULL] = X[351ULL];
  t84[1245ULL] = X[45ULL];
  t84[1246ULL] = X[44ULL] * 0.1;
  t84[1247ULL] = X[46ULL];
  t84[1248ULL] = X[47ULL];
  t84[1249ULL] = X[45ULL];
  t84[1250ULL] = X[44ULL] * 0.1;
  t84[1251ULL] = X[46ULL];
  t84[1252ULL] = X[47ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1253ULL] = t93[t127];
  }

  t84[1261ULL] = X[45ULL];
  t84[1262ULL] = X[352ULL];
  t84[1263ULL] = -X[341ULL];
  t84[1264ULL] = X[356ULL];
  t84[1265ULL] = 0.0;
  t84[1266ULL] = 0.0;
  t84[1267ULL] = 0.0;
  t84[1268ULL] = X[45ULL] - 273.15;
  t84[1269ULL] = X[46ULL];
  t84[1270ULL] = X[354ULL];
  t84[1271ULL] = X[47ULL];
  t84[1272ULL] = X[44ULL] * 0.1;
  t84[1273ULL] = 0.0;
  t84[1274ULL] = X[353ULL];
  t84[1275ULL] = X[45ULL];
  t84[1276ULL] = X[46ULL];
  t84[1277ULL] = X[47ULL];
  t84[1278ULL] = t171;
  t84[1279ULL] = X[338ULL];
  t84[1280ULL] = X[44ULL] * 0.1;
  t84[1281ULL] = X[339ULL];
  t84[1282ULL] = X[340ULL];
  t84[1283ULL] = -X[341ULL];
  t84[1284ULL] = X[357ULL];
  t84[1285ULL] = -X[330ULL];
  t84[1286ULL] = -X[331ULL];
  t84[1287ULL] = -X[332ULL];
  t84[1288ULL] = X[358ULL];
  t84[1289ULL] = X[359ULL];
  t84[1290ULL] = X[349ULL];
  t84[1291ULL] = X[44ULL] * 0.1;
  t84[1292ULL] = X[350ULL];
  t84[1293ULL] = X[351ULL];
  t84[1294ULL] = X[356ULL];
  t84[1295ULL] = X[360ULL];
  t84[1296ULL] = X[361ULL];
  t84[1297ULL] = X[362ULL];
  t84[1298ULL] = X[363ULL];
  t84[1299ULL] = X[364ULL];
  t84[1300ULL] = X[365ULL];
  t84[1301ULL] = -X[330ULL];
  t84[1302ULL] = X[361ULL];
  t84[1303ULL] = 0.0;
  t84[1304ULL] = 0.0;
  t84[1305ULL] = -X[331ULL];
  t84[1306ULL] = X[362ULL];
  t84[1307ULL] = 0.0;
  t84[1308ULL] = 0.0;
  t84[1309ULL] = 0.0;
  t84[1310ULL] = 0.0;
  t84[1311ULL] = -X[332ULL];
  t84[1312ULL] = X[363ULL];
  t84[1313ULL] = 0.0;
  t84[1314ULL] = 0.0;
  t84[1315ULL] = X[355ULL];
  t84[1316ULL] = X[349ULL];
  t84[1317ULL] = X[44ULL] * 0.1;
  t84[1318ULL] = X[350ULL];
  t84[1319ULL] = X[351ULL];
  t84[1320ULL] = X[349ULL];
  t84[1321ULL] = X[44ULL] * 0.1;
  t84[1322ULL] = X[350ULL];
  t84[1323ULL] = X[351ULL];
  t84[1324ULL] = -X[361ULL];
  t84[1325ULL] = -X[362ULL];
  t84[1326ULL] = -X[363ULL];
  t84[1327ULL] = X[356ULL] * -1000.0;
  t84[1328ULL] = -X[356ULL];
  t84[1329ULL] = -X[361ULL];
  t84[1330ULL] = -X[362ULL];
  t84[1331ULL] = -X[363ULL];
  t84[1332ULL] = -X[361ULL];
  t84[1333ULL] = U_idx_5;
  t84[1334ULL] = t173 * 9.5492965855137211;
  t84[1335ULL] = X[349ULL];
  t84[1336ULL] = X[44ULL] * 0.1;
  t84[1337ULL] = X[350ULL];
  t84[1338ULL] = X[351ULL];
  t84[1339ULL] = X[45ULL];
  t84[1340ULL] = X[45ULL];
  t84[1341ULL] = X[338ULL];
  t84[1342ULL] = X[44ULL] * 0.1;
  t84[1343ULL] = X[339ULL];
  t84[1344ULL] = X[340ULL];
  t84[1345ULL] = X[324ULL];
  t84[1346ULL] = 0.101325;
  t84[1347ULL] = X[325ULL];
  t84[1348ULL] = X[326ULL];
  t84[1349ULL] = 0.9;
  t84[1350ULL] = X[338ULL];
  t84[1351ULL] = X[44ULL] * 0.1;
  t84[1352ULL] = X[339ULL];
  t84[1353ULL] = X[340ULL];
  t84[1354ULL] = t175 * 1000.0;
  t84[1355ULL] = 0.9;
  t84[1356ULL] = t175 * 1111.1111111111111;
  t84[1357ULL] = t175 * 1111.1111111111111;
  t84[1358ULL] = -(X[44ULL] - 1.01325) * 99999.999999999985;
  t84[1359ULL] = X[366ULL] * 1.0E-6;
  t84[1360ULL] = t175 * 1000.0;
  t84[1361ULL] = X[324ULL];
  t84[1362ULL] = 0.101325;
  t84[1363ULL] = X[325ULL];
  t84[1364ULL] = X[326ULL];
  t84[1365ULL] = X[338ULL];
  t84[1366ULL] = X[44ULL] * 0.1;
  t84[1367ULL] = X[339ULL];
  t84[1368ULL] = X[340ULL];
  t84[1369ULL] = -(X[44ULL] - 1.01325) * 99999.999999999985;
  t84[1370ULL] = X[324ULL] - X[338ULL];
  t84[1371ULL] = X[338ULL];
  t84[1372ULL] = X[44ULL] * 0.1;
  t84[1373ULL] = X[339ULL];
  t84[1374ULL] = X[340ULL];
  t84[1375ULL] = X[338ULL];
  t84[1376ULL] = X[44ULL] * 0.1;
  t84[1377ULL] = X[339ULL];
  t84[1378ULL] = X[340ULL];
  t84[1379ULL] = -X[341ULL];
  t84[1380ULL] = X[366ULL] * 1.0E-6;
  t84[1381ULL] = -X[330ULL];
  t84[1382ULL] = -X[331ULL];
  t84[1383ULL] = -X[332ULL];
  t84[1384ULL] = U_idx_5;
  t84[1385ULL] = 0.0;
  t84[1386ULL] = 0.0;
  t84[1387ULL] = 0.0;
  t84[1388ULL] = 0.0;
  t84[1389ULL] = 0.0;
  t84[1390ULL] = 0.0;
  t84[1391ULL] = 0.0;
  t84[1392ULL] = 0.0;
  t84[1393ULL] = X[367ULL];
  t84[1394ULL] = t177 * 0.99999999999999978 / 0.99999999999999978 *
    9.5492965855137211;
  t84[1395ULL] = X[368ULL];
  t84[1396ULL] = X[44ULL] * 99999.999999999985;
  t84[1397ULL] = 101324.99999999999;
  t84[1398ULL] = X[367ULL];
  t84[1399ULL] = X[369ULL];
  t84[1400ULL] = X[370ULL];
  t84[1401ULL] = -X[330ULL];
  t84[1402ULL] = 1.0;
  t84[1403ULL] = X[368ULL];
  t84[1404ULL] = X[369ULL];
  t84[1405ULL] = X[324ULL];
  t84[1406ULL] = 0.101325;
  t84[1407ULL] = X[325ULL];
  t84[1408ULL] = X[326ULL];
  t84[1409ULL] = 0.0;
  t84[1410ULL] = 0.0;
  t84[1411ULL] = 0.0;
  t84[1412ULL] = 0.0;
  t84[1413ULL] = 101324.99999999999;
  t84[1414ULL] = X[324ULL];
  t84[1415ULL] = X[338ULL];
  t84[1416ULL] = X[44ULL] * 0.1;
  t84[1417ULL] = X[339ULL];
  t84[1418ULL] = X[340ULL];
  t84[1419ULL] = 0.0;
  t84[1420ULL] = 0.0;
  t84[1421ULL] = 0.0;
  t84[1422ULL] = 0.0;
  t84[1423ULL] = X[44ULL] * 99999.999999999985;
  t84[1424ULL] = X[338ULL];
  t84[1425ULL] = X[324ULL];
  t84[1426ULL] = 0.101325;
  t84[1427ULL] = X[325ULL];
  t84[1428ULL] = X[326ULL];
  t84[1429ULL] = -X[330ULL];
  t84[1430ULL] = X[338ULL];
  t84[1431ULL] = X[44ULL] * 0.1;
  t84[1432ULL] = X[339ULL];
  t84[1433ULL] = X[340ULL];
  t84[1434ULL] = t177 * 9.5492965855137211;
  t84[1435ULL] = X[324ULL] * 0.00347041471455839;
  t84[1436ULL] = X[370ULL];
  t84[1437ULL] = 101324.99999999999;
  t84[1438ULL] = 1.0;
  t84[1439ULL] = X[324ULL];
  t84[1440ULL] = X[324ULL] * 0.00347041471455839;
  t84[1441ULL] = X[249ULL];
  t84[1442ULL] = X[33ULL] * 0.1;
  t84[1443ULL] = X[250ULL];
  t84[1444ULL] = X[251ULL];
  t84[1445ULL] = X[371ULL];
  t84[1446ULL] = X[372ULL] * 0.1;
  t84[1447ULL] = X[373ULL];
  t84[1448ULL] = X[374ULL];
  t84[1449ULL] = U_idx_6;
  t84[1450ULL] = X[375ULL];
  t84[1451ULL] = X[48ULL];
  t84[1452ULL] = X[49ULL];
  t84[1453ULL] = X[50ULL];
  t84[1454ULL] = U_idx_7;
  t84[1455ULL] = -U_idx_6;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1456ULL] = t95[t127];
  }

  t84[1464ULL] = X[378ULL];
  t84[1465ULL] = X[380ULL] * 1.0E-5 * 99999.999999999985;
  t84[1466ULL] = X[48ULL];
  t84[1467ULL] = X[377ULL];
  t84[1468ULL] = X[377ULL];
  t84[1469ULL] = X[381ULL];
  t84[1470ULL] = X[381ULL];
  t84[1471ULL] = X[249ULL];
  t84[1472ULL] = X[33ULL] * 0.1;
  t84[1473ULL] = X[250ULL];
  t84[1474ULL] = X[251ULL];
  t84[1475ULL] = X[371ULL];
  t84[1476ULL] = X[372ULL] * 0.1;
  t84[1477ULL] = X[373ULL];
  t84[1478ULL] = X[374ULL];
  t84[1479ULL] = X[49ULL];
  t84[1480ULL] = X[378ULL];
  t84[1481ULL] = X[50ULL];
  t84[1482ULL] = X[382ULL];
  t84[1483ULL] = X[48ULL] - 273.15;
  t84[1484ULL] = -X[272ULL];
  t84[1485ULL] = X[383ULL] * 0.1;
  t84[1486ULL] = X[51ULL] * 0.1;
  t84[1487ULL] = X[379ULL];
  t84[1488ULL] = X[385ULL];
  t84[1489ULL] = X[384ULL];
  t84[1490ULL] = X[386ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1491ULL] = t95[t127];
  }

  t84[1499ULL] = X[381ULL];
  t84[1500ULL] = X[376ULL];
  t84[1501ULL] = -X[261ULL];
  t84[1502ULL] = X[387ULL];
  t84[1503ULL] = -X[375ULL];
  t84[1504ULL] = 0.0;
  t84[1505ULL] = X[377ULL];
  t84[1506ULL] = X[48ULL];
  t84[1507ULL] = X[49ULL];
  t84[1508ULL] = X[50ULL];
  t84[1509ULL] = t185;
  t84[1510ULL] = X[249ULL];
  t84[1511ULL] = X[33ULL] * 0.1;
  t84[1512ULL] = X[250ULL];
  t84[1513ULL] = X[251ULL];
  t84[1514ULL] = -X[261ULL];
  t84[1515ULL] = X[388ULL];
  t84[1516ULL] = -X[272ULL];
  t84[1517ULL] = -X[273ULL];
  t84[1518ULL] = -X[274ULL];
  t84[1519ULL] = X[389ULL];
  t84[1520ULL] = X[390ULL];
  t84[1521ULL] = X[371ULL];
  t84[1522ULL] = X[372ULL] * 0.1;
  t84[1523ULL] = X[373ULL];
  t84[1524ULL] = X[374ULL];
  t84[1525ULL] = X[387ULL];
  t84[1526ULL] = X[391ULL];
  t84[1527ULL] = X[384ULL];
  t84[1528ULL] = X[392ULL];
  t84[1529ULL] = X[393ULL];
  t84[1530ULL] = X[394ULL];
  t84[1531ULL] = X[395ULL];
  t84[1532ULL] = -X[273ULL];
  t84[1533ULL] = X[392ULL];
  t84[1534ULL] = 0.0;
  t84[1535ULL] = U_idx_6;
  t84[1536ULL] = -X[274ULL];
  t84[1537ULL] = X[393ULL];
  t84[1538ULL] = U_idx_7;
  t84[1539ULL] = U_idx_6;
  t84[1540ULL] = X[75ULL];
  t84[1541ULL] = X[76ULL] * 0.1;
  t84[1542ULL] = X[77ULL];
  t84[1543ULL] = X[78ULL];
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1544ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t127];
  }

  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1552ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t127];
  }

  t84[1560ULL] = X[18ULL];
  t84[1561ULL] = X[371ULL];
  t84[1562ULL] = X[372ULL] * 0.1;
  t84[1563ULL] = X[373ULL];
  t84[1564ULL] = X[374ULL];
  t84[1565ULL] = X[75ULL];
  t84[1566ULL] = X[76ULL] * 0.1;
  t84[1567ULL] = X[77ULL];
  t84[1568ULL] = X[78ULL];
  t84[1569ULL] = X[7ULL];
  t84[1570ULL] = X[83ULL];
  t84[1571ULL] = X[8ULL];
  t84[1572ULL] = X[396ULL];
  t84[1573ULL] = X[6ULL] - 273.15;
  t84[1574ULL] = -X[384ULL];
  t84[1575ULL] = X[397ULL] * 0.1;
  t84[1576ULL] = X[52ULL] * 0.1;
  t84[1577ULL] = X[84ULL];
  t84[1578ULL] = X[399ULL];
  t84[1579ULL] = X[398ULL];
  t84[1580ULL] = X[400ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1581ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAi[t127];
  }

  t84[1589ULL] = X[18ULL];
  t84[1590ULL] = X[87ULL];
  t84[1591ULL] = -X[387ULL];
  t84[1592ULL] = X[401ULL];
  t84[1593ULL] = 0.0;
  t84[1594ULL] = X[109ULL];
  t84[1595ULL] = X[86ULL];
  t84[1596ULL] = X[6ULL];
  t84[1597ULL] = X[7ULL];
  t84[1598ULL] = X[8ULL];
  t84[1599ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_W;
  t84[1600ULL] = X[371ULL];
  t84[1601ULL] = X[372ULL] * 0.1;
  t84[1602ULL] = X[373ULL];
  t84[1603ULL] = X[374ULL];
  t84[1604ULL] = -X[387ULL];
  t84[1605ULL] = X[402ULL];
  t84[1606ULL] = -X[384ULL];
  t84[1607ULL] = -X[392ULL];
  t84[1608ULL] = -X[393ULL];
  t84[1609ULL] = X[403ULL];
  t84[1610ULL] = X[404ULL];
  t84[1611ULL] = X[75ULL];
  t84[1612ULL] = X[76ULL] * 0.1;
  t84[1613ULL] = X[77ULL];
  t84[1614ULL] = X[78ULL];
  t84[1615ULL] = X[401ULL];
  t84[1616ULL] = X[405ULL];
  t84[1617ULL] = X[398ULL];
  t84[1618ULL] = X[406ULL];
  t84[1619ULL] = X[407ULL];
  t84[1620ULL] = X[408ULL];
  t84[1621ULL] = X[409ULL];
  t84[1622ULL] = -X[392ULL];
  t84[1623ULL] = X[406ULL];
  t84[1624ULL] = 0.0;
  t84[1625ULL] = 0.0;
  t84[1626ULL] = -X[393ULL];
  t84[1627ULL] = X[407ULL];
  t84[1628ULL] = X[75ULL];
  t84[1629ULL] = X[76ULL] * 0.1;
  t84[1630ULL] = X[77ULL];
  t84[1631ULL] = X[78ULL];
  t84[1632ULL] = X[122ULL];
  t84[1633ULL] = X[123ULL] * 0.1;
  t84[1634ULL] = X[124ULL];
  t84[1635ULL] = X[125ULL];
  t84[1636ULL] = X[10ULL];
  t84[1637ULL] = X[88ULL];
  t84[1638ULL] = X[11ULL];
  t84[1639ULL] = X[410ULL];
  t84[1640ULL] = X[9ULL] - 273.15;
  t84[1641ULL] = -X[398ULL];
  t84[1642ULL] = X[411ULL] * 0.1;
  t84[1643ULL] = X[53ULL] * 0.1;
  t84[1644ULL] = X[89ULL];
  t84[1645ULL] = X[412ULL];
  t84[1646ULL] = X[145ULL];
  t84[1647ULL] = X[413ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1648ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_Fuel_Cell_Stack_FAo[t127];
  }

  t84[1656ULL] = X[18ULL];
  t84[1657ULL] = X[90ULL];
  t84[1658ULL] = -X[401ULL];
  t84[1659ULL] = X[155ULL];
  t84[1660ULL] = -X[115ULL] - X[118ULL];
  t84[1661ULL] = X[110ULL];
  t84[1662ULL] = X[92ULL];
  t84[1663ULL] = X[9ULL];
  t84[1664ULL] = X[10ULL];
  t84[1665ULL] = X[11ULL];
  t84[1666ULL] = t189;
  t84[1667ULL] = X[75ULL];
  t84[1668ULL] = X[76ULL] * 0.1;
  t84[1669ULL] = X[77ULL];
  t84[1670ULL] = X[78ULL];
  t84[1671ULL] = -X[401ULL];
  t84[1672ULL] = X[414ULL];
  t84[1673ULL] = -X[398ULL];
  t84[1674ULL] = -X[406ULL];
  t84[1675ULL] = -X[407ULL];
  t84[1676ULL] = X[415ULL];
  t84[1677ULL] = X[416ULL];
  t84[1678ULL] = X[122ULL];
  t84[1679ULL] = X[123ULL] * 0.1;
  t84[1680ULL] = X[124ULL];
  t84[1681ULL] = X[125ULL];
  t84[1682ULL] = X[155ULL];
  t84[1683ULL] = X[417ULL];
  t84[1684ULL] = X[145ULL];
  t84[1685ULL] = X[158ULL];
  t84[1686ULL] = X[160ULL];
  t84[1687ULL] = X[418ULL];
  t84[1688ULL] = X[419ULL];
  t84[1689ULL] = -X[406ULL];
  t84[1690ULL] = X[158ULL];
  t84[1691ULL] = X[114ULL];
  t84[1692ULL] = X[120ULL];
  t84[1693ULL] = -X[407ULL];
  t84[1694ULL] = X[160ULL];
  t84[1695ULL] = X[9ULL];
  t84[1696ULL] = X[10ULL];
  t84[1697ULL] = X[11ULL];
  t84[1698ULL] = X[371ULL];
  t84[1699ULL] = X[372ULL] * 0.1;
  t84[1700ULL] = X[373ULL];
  t84[1701ULL] = X[374ULL];
  t84[1702ULL] = X[122ULL];
  t84[1703ULL] = X[123ULL] * 0.1;
  t84[1704ULL] = X[124ULL];
  t84[1705ULL] = X[125ULL];
  t84[1706ULL] = X[349ULL];
  t84[1707ULL] = X[44ULL] * 0.1;
  t84[1708ULL] = X[350ULL];
  t84[1709ULL] = X[351ULL];
  t84[1710ULL] = X[173ULL];
  t84[1711ULL] = X[174ULL] * 0.1;
  t84[1712ULL] = X[175ULL];
  t84[1713ULL] = X[176ULL];
  t84[1714ULL] = U_idx_8;
  t84[1715ULL] = X[420ULL];
  t84[1716ULL] = X[54ULL];
  t84[1717ULL] = X[55ULL];
  t84[1718ULL] = X[56ULL];
  t84[1719ULL] = U_idx_9;
  t84[1720ULL] = -U_idx_8;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1721ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[t127];
  }

  t84[1729ULL] = X[423ULL];
  t84[1730ULL] = X[425ULL] * 1.0E-5 * 99999.999999999985;
  t84[1731ULL] = X[54ULL];
  t84[1732ULL] = X[422ULL];
  t84[1733ULL] = X[422ULL];
  t84[1734ULL] = X[426ULL];
  t84[1735ULL] = X[426ULL];
  t84[1736ULL] = X[349ULL];
  t84[1737ULL] = X[44ULL] * 0.1;
  t84[1738ULL] = X[350ULL];
  t84[1739ULL] = X[351ULL];
  t84[1740ULL] = X[173ULL];
  t84[1741ULL] = X[174ULL] * 0.1;
  t84[1742ULL] = X[175ULL];
  t84[1743ULL] = X[176ULL];
  t84[1744ULL] = X[55ULL];
  t84[1745ULL] = X[423ULL];
  t84[1746ULL] = X[56ULL];
  t84[1747ULL] = X[427ULL];
  t84[1748ULL] = X[54ULL] - 273.15;
  t84[1749ULL] = -X[361ULL];
  t84[1750ULL] = X[428ULL] * 0.1;
  t84[1751ULL] = X[57ULL] * 0.1;
  t84[1752ULL] = X[424ULL];
  t84[1753ULL] = X[429ULL];
  t84[1754ULL] = -X[177ULL];
  t84[1755ULL] = X[430ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1756ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Measurement_Selector0[t127];
  }

  t84[1764ULL] = X[426ULL];
  t84[1765ULL] = X[421ULL];
  t84[1766ULL] = -X[356ULL];
  t84[1767ULL] = -X[183ULL];
  t84[1768ULL] = -X[420ULL];
  t84[1769ULL] = 0.0;
  t84[1770ULL] = X[422ULL];
  t84[1771ULL] = X[54ULL];
  t84[1772ULL] = X[55ULL];
  t84[1773ULL] = X[56ULL];
  t84[1774ULL] = t197;
  t84[1775ULL] = X[349ULL];
  t84[1776ULL] = X[44ULL] * 0.1;
  t84[1777ULL] = X[350ULL];
  t84[1778ULL] = X[351ULL];
  t84[1779ULL] = -X[356ULL];
  t84[1780ULL] = X[431ULL];
  t84[1781ULL] = -X[361ULL];
  t84[1782ULL] = -X[362ULL];
  t84[1783ULL] = -X[363ULL];
  t84[1784ULL] = X[432ULL];
  t84[1785ULL] = X[433ULL];
  t84[1786ULL] = X[173ULL];
  t84[1787ULL] = X[174ULL] * 0.1;
  t84[1788ULL] = X[175ULL];
  t84[1789ULL] = X[176ULL];
  t84[1790ULL] = -X[183ULL];
  t84[1791ULL] = X[434ULL];
  t84[1792ULL] = -X[177ULL];
  t84[1793ULL] = -X[186ULL];
  t84[1794ULL] = -X[187ULL];
  t84[1795ULL] = X[435ULL];
  t84[1796ULL] = X[436ULL];
  t84[1797ULL] = -X[362ULL];
  t84[1798ULL] = -X[186ULL];
  t84[1799ULL] = 0.0;
  t84[1800ULL] = U_idx_8;
  t84[1801ULL] = -X[363ULL];
  t84[1802ULL] = -X[187ULL];
  t84[1803ULL] = U_idx_9;
  t84[1804ULL] = U_idx_8;
  t84[1805ULL] = X[195ULL];
  t84[1806ULL] = X[196ULL] * 0.1;
  t84[1807ULL] = X[197ULL];
  t84[1808ULL] = X[198ULL];
  t84[1809ULL] = X[437ULL];
  t84[1810ULL] = 293.15;
  t84[1811ULL] = -920.95788639984789 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I * 1000.0;
  t84[1812ULL] = (X[437ULL] * 0.0031415926535897937 - 0.92095788639984788) *
    318.30988618379064;
  t84[1813ULL] = 0.0;
  t84[1814ULL] = X[438ULL];
  t84[1815ULL] = 0.101325;
  t84[1816ULL] = X[439ULL];
  t84[1817ULL] = X[440ULL];
  t84[1818ULL] = X[441ULL];
  t84[1819ULL] = X[442ULL];
  t84[1820ULL] = 0.5;
  t84[1821ULL] = X[450ULL];
  t84[1822ULL] = X[449ULL];
  t84[1823ULL] = 293.15;
  t84[1824ULL] = X[438ULL];
  t84[1825ULL] = 0.101325;
  t84[1826ULL] = X[439ULL];
  t84[1827ULL] = X[440ULL];
  t84[1828ULL] = X[442ULL];
  t84[1829ULL] = X[443ULL];
  t84[1830ULL] = X[444ULL];
  t84[1831ULL] = X[445ULL];
  t84[1832ULL] = X[446ULL];
  t84[1833ULL] = X[447ULL];
  t84[1834ULL] = X[448ULL];
  t84[1835ULL] = X[444ULL];
  t84[1836ULL] = X[445ULL];
  t84[1837ULL] = X[446ULL];
  t84[1838ULL] = 0.101325;
  t84[1839ULL] = 0.21;
  t84[1840ULL] = X[451ULL];
  t84[1841ULL] = 293.15;
  t84[1842ULL] = -920.95788639984789 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I * 1000.0;
  t84[1843ULL] = X[195ULL];
  t84[1844ULL] = X[196ULL] * 0.1;
  t84[1845ULL] = X[197ULL];
  t84[1846ULL] = X[198ULL];
  t84[1847ULL] = X[452ULL];
  t84[1848ULL] = t200 * 0.1;
  t84[1849ULL] = X[454ULL];
  t84[1850ULL] = X[455ULL];
  t84[1851ULL] = X[61ULL];
  t84[1852ULL] = X[459ULL];
  t84[1853ULL] = X[60ULL];
  t84[1854ULL] = X[456ULL];
  t84[1855ULL] = X[58ULL] - 273.15;
  t84[1856ULL] = -X[201ULL];
  t84[1857ULL] = X[457ULL] * 0.1;
  t84[1858ULL] = X[59ULL] * 0.1;
  t84[1859ULL] = X[458ULL];
  t84[1860ULL] = X[460ULL];
  t84[1861ULL] = -X[444ULL];
  t84[1862ULL] = X[461ULL] * 0.1;
  for (t127 = 0ULL; t127 < 8ULL; t127++) {
    t84[t127 + 1863ULL] =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_F[t127];
  }

  t84[1871ULL] = X[437ULL];
  t84[1872ULL] = X[462ULL];
  t84[1873ULL] = -X[204ULL];
  t84[1874ULL] = -X[442ULL];
  t84[1875ULL] = 0.0;
  t84[1876ULL] = 0.92095788639984788 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x5_Max_rpm_I;
  t84[1877ULL] = X[463ULL];
  t84[1878ULL] = X[58ULL];
  t84[1879ULL] = X[61ULL];
  t84[1880ULL] = X[60ULL];
  t84[1881ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_W;
  t84[1882ULL] = X[195ULL];
  t84[1883ULL] = X[196ULL] * 0.1;
  t84[1884ULL] = X[197ULL];
  t84[1885ULL] = X[198ULL];
  t84[1886ULL] = -X[204ULL];
  t84[1887ULL] = X[464ULL];
  t84[1888ULL] = -X[201ULL];
  t84[1889ULL] = -X[209ULL];
  t84[1890ULL] = -X[210ULL];
  t84[1891ULL] = X[465ULL];
  t84[1892ULL] = X[466ULL];
  t84[1893ULL] = X[452ULL];
  t84[1894ULL] = t200 * 0.1;
  t84[1895ULL] = X[454ULL];
  t84[1896ULL] = X[455ULL];
  t84[1897ULL] = -X[442ULL];
  t84[1898ULL] = X[467ULL];
  t84[1899ULL] = -X[444ULL];
  t84[1900ULL] = -X[445ULL];
  t84[1901ULL] = -X[446ULL];
  t84[1902ULL] = X[468ULL];
  t84[1903ULL] = X[469ULL];
  t84[1904ULL] = -X[209ULL];
  t84[1905ULL] = -X[445ULL];
  t84[1906ULL] = 0.0;
  t84[1907ULL] = 0.0;
  t84[1908ULL] = -X[210ULL];
  t84[1909ULL] = -X[446ULL];
  t84[1910ULL] = X[452ULL];
  t84[1911ULL] = t200 * 0.1;
  t84[1912ULL] = X[454ULL];
  t84[1913ULL] = X[455ULL];
  t84[1914ULL] = 0.0;
  t84[1915ULL] = 0.0;
  t84[1916ULL] = 0.0;
  t84[1917ULL] = 0.0;
  t84[1918ULL] = X[438ULL];
  t84[1919ULL] = 0.101325;
  t84[1920ULL] = X[439ULL];
  t84[1921ULL] = X[440ULL];
  t84[1922ULL] = (X[453ULL] - 1.0E-8) * 1.0E+6;
  t84[1923ULL] = 1.0E-8;
  t84[1924ULL] = X[453ULL];
  t84[1925ULL] = 1.0E-8;
  t84[1926ULL] = (X[453ULL] - 1.0E-8) * 7812.5001220703134;
  t84[1927ULL] = (X[453ULL] - 1.0E-8) * 1.0E+6;
  t84[1928ULL] = X[453ULL];
  t84[1929ULL] = X[453ULL] * 0.0019634954084936209;
  t84[1930ULL] = t200 * 99999.999999999985;
  t84[1931ULL] = t100_idx_0 * 0.1;
  t84[1932ULL] = (X[453ULL] - 1.0E-8) * 7812.5001220703134;
  t84[1933ULL] = X[452ULL];
  t84[1934ULL] = t200 * 0.1;
  t84[1935ULL] = X[454ULL];
  t84[1936ULL] = X[455ULL];
  t84[1937ULL] = 0.0;
  t84[1938ULL] = 0.0;
  t84[1939ULL] = 0.0;
  t84[1940ULL] = 0.0;
  t84[1941ULL] = t200 * 99999.999999999985;
  t84[1942ULL] = X[452ULL];
  t84[1943ULL] = X[452ULL];
  t84[1944ULL] = t200 * 0.1;
  t84[1945ULL] = X[454ULL];
  t84[1946ULL] = X[455ULL];
  t84[1947ULL] = X[453ULL] * 0.0019634954084936209;
  t84[1948ULL] = X[438ULL];
  t84[1949ULL] = 0.101325;
  t84[1950ULL] = X[439ULL];
  t84[1951ULL] = X[440ULL];
  t84[1952ULL] = X[444ULL];
  t84[1953ULL] = X[452ULL];
  t84[1954ULL] = t200 * 0.1;
  t84[1955ULL] = X[454ULL];
  t84[1956ULL] = X[455ULL];
  t84[1957ULL] = X[442ULL];
  t84[1958ULL] = X[476ULL];
  t84[1959ULL] = X[444ULL];
  t84[1960ULL] = X[445ULL];
  t84[1961ULL] = X[446ULL];
  t84[1962ULL] = X[473ULL];
  t84[1963ULL] = X[472ULL];
  t84[1964ULL] = X[470ULL];
  t84[1965ULL] = X[471ULL] * 0.1;
  t84[1966ULL] = X[474ULL];
  t84[1967ULL] = X[475ULL];
  t84[1968ULL] = X[442ULL];
  t84[1969ULL] = -X[442ULL];
  t84[1970ULL] = X[438ULL];
  t84[1971ULL] = 0.101325;
  t84[1972ULL] = X[439ULL];
  t84[1973ULL] = X[440ULL];
  t84[1974ULL] = -X[442ULL];
  t84[1975ULL] = X[476ULL];
  t84[1976ULL] = -X[444ULL];
  t84[1977ULL] = -X[445ULL];
  t84[1978ULL] = -X[446ULL];
  t84[1979ULL] = X[473ULL];
  t84[1980ULL] = X[472ULL];
  t84[1981ULL] = -X[444ULL];
  t84[1982ULL] = X[445ULL];
  t84[1983ULL] = -X[445ULL];
  t84[1984ULL] = X[446ULL];
  t84[1985ULL] = -X[446ULL];
  t84[1986ULL] = t100_idx_0 * 0.1;
  t84[1987ULL] = U_idx_10;
  t84[1988ULL] = Fuel_Cell_Boost_Converter_L_p_v;
  t84[1989ULL] = 0.0;
  t84[1990ULL] = U_idx_11;
  t84[1991ULL] = X[69ULL];
  t84[1992ULL] = 0.0;
  t84[1993ULL] = X[69ULL];
  t84[1994ULL] = X[69ULL];
  t84[1995ULL] = X[69ULL];
  t84[1996ULL] = 0.0;
  t84[1997ULL] = t205;
  t84[1998ULL] = t205;
  t84[1999ULL] = X[69ULL];
  t84[2000ULL] = X[69ULL];
  t84[2001ULL] = t205;
  t84[2002ULL] = 0.0;
  t84[2003ULL] = X[69ULL];
  t84[2004ULL] = 0.0;
  t84[2005ULL] = X[69ULL];
  t84[2006ULL] = X[69ULL];
  t84[2007ULL] = X[69ULL];
  t84[2008ULL] = X[69ULL];
  t84[2009ULL] = 0.0;
  t84[2010ULL] = X[62ULL];
  t84[2011ULL] = X[62ULL];
  t84[2012ULL] = U_idx_12;
  t84[2013ULL] = 0.0;
  t84[2014ULL] = X[69ULL];
  t84[2015ULL] = 0.0;
  t84[2016ULL] = 0.0;
  t84[2017ULL] = t205;
  t84[2018ULL] = t141 * 1000.0;
  t84[2019ULL] = X[478ULL];
  t84[2020ULL] = X[479ULL];
  t84[2021ULL] = X[479ULL];
  t84[2022ULL] = X[477ULL];
  t84[2023ULL] = X[63ULL];
  t84[2024ULL] = X[69ULL];
  t84[2025ULL] = X[62ULL] * 9.5492965855137211;
  t84[2026ULL] = 0.0;
  t84[2027ULL] = 0.0;
  t84[2028ULL] = 0.0;
  t84[2029ULL] = X[62ULL];
  t84[2030ULL] = U_idx_13;
  t84[2031ULL] = -X[478ULL];
  t84[2032ULL] = U_idx_13;
  t84[2033ULL] = X[62ULL];
  t84[2034ULL] = X[62ULL];
  t84[2035ULL] = -X[478ULL];
  t84[2036ULL] = -X[478ULL];
  t84[2037ULL] = X[62ULL];
  t84[2038ULL] = X[62ULL];
  t84[2039ULL] = -X[478ULL];
  t84[2040ULL] = -X[478ULL];
  t84[2041ULL] = -X[478ULL];
  t84[2042ULL] = X[62ULL];
  t84[2043ULL] = U_idx_13;
  t84[2044ULL] = U_idx_12;
  t84[2045ULL] = X[69ULL];
  t84[2046ULL] = 0.0;
  for (b = 0; b < 2047; b++) {
    out.mX[b] = t84[b];
  }

  (void)LC;
  (void)t270;
  return 0;
}
