/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_zc.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_zc(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t355, NeDsMethodOutput *t356)
{
  PmRealVector out;
  real_T X[480];
  real_T t5[278];
  real_T t6[1];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6;
  real_T U_idx_1;
  real_T U_idx_10;
  real_T U_idx_11;
  real_T U_idx_4;
  real_T U_idx_7;
  real_T U_idx_9;
  real_T intrm_sf_mf_1488;
  real_T intrm_sf_mf_1553;
  real_T intrm_sf_mf_186;
  real_T intrm_sf_mf_239;
  real_T intrm_sf_mf_269;
  real_T intrm_sf_mf_341;
  real_T intrm_sf_mf_581;
  real_T intrm_sf_mf_666;
  real_T intrm_sf_mf_810;
  real_T intrm_sf_mf_844;
  real_T intrm_sf_mf_899;
  real_T intrm_sf_mf_901;
  real_T intrm_sf_mf_927;
  real_T intrm_sf_mf_94;
  real_T t101;
  real_T t105;
  real_T t107;
  real_T t109;
  real_T t110;
  real_T t111;
  real_T t113;
  real_T t115;
  real_T t117;
  real_T t118;
  real_T t119;
  real_T t120;
  real_T t122;
  real_T t124;
  real_T t127;
  real_T t129;
  real_T t131;
  real_T t134;
  real_T t144;
  real_T t156;
  real_T t272;
  real_T t276;
  real_T t283;
  real_T t284;
  real_T t288;
  real_T t294;
  real_T t319;
  real_T t327;
  real_T t328;
  real_T t36;
  real_T t51;
  real_T t57;
  real_T t63;
  real_T t79;
  real_T t82;
  real_T t88;
  real_T t89;
  real_T t90;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t98;
  size_t t7;
  size_t t8;
  int32_T M[259];
  int32_T b;
  for (b = 0; b < 259; b++) {
    M[b] = t355->mM.mX[b];
  }

  U_idx_1 = t355->mU.mX[1];
  U_idx_4 = t355->mU.mX[4];
  U_idx_7 = t355->mU.mX[7];
  U_idx_9 = t355->mU.mX[9];
  U_idx_10 = t355->mU.mX[10];
  U_idx_11 = t355->mU.mX[11];
  for (b = 0; b < 480; b++) {
    X[b] = t355->mX.mX[b];
  }

  out = t356->mZC;
  if (X[138ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[138ULL] >= 1.0 ? 1.0 : X[138ULL];
  }

  if (X[139ULL] <= 0.0) {
    t276 = 0.0;
  } else {
    t276 = X[139ULL] >= 1.0 ? 1.0 : X[139ULL];
  }

  t319 = (((1.0 - t272) - t276) * 296.802103844292 + t272 * 461.523) + t276 *
    4124.48151675695;
  if (X[21ULL] <= 0.0) {
    t276 = 0.0;
  } else {
    t276 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[22ULL] >=
      1.0 ? 1.0 : X[22ULL];
  }

  t327 = (((1.0 - t276) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) *
          296.802103844292 + t276 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
    4124.48151675695;
  if (X[146ULL] <= 216.59999999999997) {
    t328 = 216.59999999999997;
  } else {
    t328 = X[146ULL] >= 623.15 ? 623.15 : X[146ULL];
  }

  intrm_sf_mf_94 = t328 * t328;
  t283 = (((1074.1165326382541 + t328 * -0.2214565261064077) + intrm_sf_mf_94 *
           0.00037212980109010952) * ((1.0 - t276) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) +
          ((1479.6504774710445 + t328 * 1.200211433705052) + intrm_sf_mf_94 *
           -0.00038614513167842338) * t276) + ((12825.281119790017 + t328 *
    6.9647057412830984) + intrm_sf_mf_94 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  t284 = t283 - t327;
  t328 = t283 / (t284 == 0.0 ? 1.0E-16 : t284);
  if (X[150ULL] <= 216.59999999999997) {
    t283 = 216.59999999999997;
  } else {
    t283 = X[150ULL] >= 623.15 ? 623.15 : X[150ULL];
  }

  t284 = t283 * t283;
  intrm_sf_mf_94 = (((1074.1165326382541 + t283 * -0.2214565261064077) + t284 *
                     0.00037212980109010952) * ((1.0 - t276) -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) +
                    ((1479.6504774710445 + t283 * 1.200211433705052) + t284 *
                     -0.00038614513167842338) * t276) + ((12825.281119790017 +
    t283 * 6.9647057412830984) + t284 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  t294 = intrm_sf_mf_94 - t327;
  t276 = intrm_sf_mf_94 / (t294 == 0.0 ? 1.0E-16 : t294);
  if (X[144ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[144ULL] >=
      1.0 ? 1.0 : X[144ULL];
  }

  if (X[143ULL] <= 0.0) {
    t283 = 0.0;
  } else {
    t283 = X[143ULL] >= 1.0 ? 1.0 : X[143ULL];
  }

  intrm_sf_mf_94 = (((1.0 -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp)
                     - t283) * 296.802103844292 +
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp
                    * 461.523) + t283 * 4124.48151675695;
  if (X[125ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[125ULL] >=
      1.0 ? 1.0 : X[125ULL];
  }

  if (X[124ULL] <= 0.0) {
    t283 = 0.0;
  } else {
    t283 = X[124ULL] >= 1.0 ? 1.0 : X[124ULL];
  }

  t284 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp)
           - t283) * 296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
          461.523) + t283 * 4124.48151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = U_idx_1 *
    0.031415926535897927;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 <=
      7.8539816339744857E-13) {
    t283 = 7.8539816339744857E-13;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
             0.0001 >= 3.1415926535897929E-6) {
    t283 = 3.1415926535897929E-6;
  } else {
    t283 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
      0.0001;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = t283 /
    7.8539816339744827E-5;
  if (X[168ULL] <= 0.0) {
    t283 = 0.0;
  } else {
    t283 = X[168ULL] >= 1.0 ? 1.0 : X[168ULL];
  }

  if (X[169ULL] <= 0.0) {
    t294 = 0.0;
  } else {
    t294 = X[169ULL] >= 1.0 ? 1.0 : X[169ULL];
  }

  t288 = (((1.0 - t283) - t294) * 296.802103844292 + t283 * 461.523) + t294 *
    4124.48151675695;
  t79 = X[166ULL] * t288;
  t156 = X[167ULL] / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL]) * (X[170ULL] / (X
    [166ULL] == 0.0 ? 1.0E-16 : X[166ULL]));
  t82 = X[167ULL] / 1.01325 * (X[171ULL] / (X[166ULL] == 0.0 ? 1.0E-16 : X
    [166ULL]));
  t272 = (X[142ULL] + 1.01325) / 2.0 * 0.0010000000000000009;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI = (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) * (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp);
  intrm_sf_mf_239 = t272 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI;
  intrm_sf_mf_269 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0) * (1.0
    - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t156) -
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t82) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0;
  intrm_sf_mf_341 = (X[142ULL] - 1.01325) * (intrm_sf_mf_269 >=
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI ?
    intrm_sf_mf_269 :
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI);
  intrm_sf_mf_269 = (X[142ULL] - 1.01325) / (t272 == 0.0 ? 1.0E-16 : t272);
  t88 = intrm_sf_mf_269 * intrm_sf_mf_269 * 3.0 - intrm_sf_mf_269 *
    intrm_sf_mf_269 * intrm_sf_mf_269 * 2.0;
  if (X[142ULL] - 1.01325 <= 0.0) {
    intrm_sf_mf_269 = intrm_sf_mf_239;
  } else if (X[142ULL] - 1.01325 >= t272) {
    intrm_sf_mf_269 = intrm_sf_mf_341;
  } else {
    intrm_sf_mf_269 = (1.0 - t88) * intrm_sf_mf_239 + intrm_sf_mf_341 * t88;
  }

  intrm_sf_mf_341 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0) * (1.0
    - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t82) -
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t156)
    * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = (1.01325 - X
    [142ULL]) * (intrm_sf_mf_341 >=
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI ?
                 intrm_sf_mf_341 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI);
  t156 = (1.01325 - X[142ULL]) / (t272 == 0.0 ? 1.0E-16 : t272);
  t82 = t156 * t156 * 3.0 - t156 * t156 * t156 * 2.0;
  if (1.01325 - X[142ULL] <= 0.0) {
    t156 = intrm_sf_mf_239;
  } else if (1.01325 - X[142ULL] >= t272) {
    t156 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  } else {
    t156 = (1.0 - t82) * intrm_sf_mf_239 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t82;
  }

  if (X[142ULL] > 1.01325) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
      intrm_sf_mf_269;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[142ULL] <
      1.01325 ? t156 : intrm_sf_mf_239;
  }

  if (X[166ULL] <= 216.59999999999997) {
    t156 = 216.59999999999997;
  } else {
    t156 = X[166ULL] >= 623.15 ? 623.15 : X[166ULL];
  }

  t89 = t156 * t156;
  t82 = (((1074.1165326382541 + t156 * -0.2214565261064077) + t89 *
          0.00037212980109010952) * ((1.0 - t283) - t294) + ((1479.6504774710445
           + t156 * 1.200211433705052) + t89 * -0.00038614513167842338) * t283)
    + ((12825.281119790017 + t156 * 6.9647057412830984) + t89 *
       -0.007052486824683288) * t294;
  t90 = t82 - t288;
  t283 = t82 / (t90 == 0.0 ? 1.0E-16 : t90);
  if (X[14ULL] <= 0.0) {
    t294 = 0.0;
  } else {
    t294 = X[14ULL] >= 1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    t156 = 0.0;
  } else {
    t156 = X[13ULL] >= 1.0 ? 1.0 : X[13ULL];
  }

  t82 = (((1.0 - t294) - t156) * 296.802103844292 + t294 * 461.523) + t156 *
    259.836612622973;
  if (X[178ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI = X[178ULL] >=
      623.15 ? 623.15 : X[178ULL];
  }

  t90 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI;
  t272 = (((1074.1165326382541 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI *
            -0.2214565261064077) + t90 * 0.00037212980109010952) * ((1.0 - t294)
           - t156) + ((1479.6504774710445 +
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI
                       * 1.200211433705052) + t90 * -0.00038614513167842338) *
          t294) + ((900.63941224837913 +
                    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI *
                    -0.044484923911364271) + t90 * 0.00036936011832043369) *
    t156;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = t272 - t82;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI = t272 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15);
  if (X[181ULL] <= 216.59999999999997) {
    t272 = 216.59999999999997;
  } else {
    t272 = X[181ULL] >= 623.15 ? 623.15 : X[181ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = t272 * t272;
  intrm_sf_mf_239 = (((1074.1165326382541 + t272 * -0.2214565261064077) +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15
                      * 0.00037212980109010952) * ((1.0 - t294) - t156) +
                     ((1479.6504774710445 + t272 * 1.200211433705052) +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15
                      * -0.00038614513167842338) * t294) + ((900.63941224837913
    + t272 * -0.044484923911364271) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    0.00036936011832043369) * t156;
  t92 = intrm_sf_mf_239 - t82;
  t294 = intrm_sf_mf_239 / (t92 == 0.0 ? 1.0E-16 : t92);
  if (X[176ULL] <= 0.0) {
    t156 = 0.0;
  } else {
    t156 = X[176ULL] >= 1.0 ? 1.0 : X[176ULL];
  }

  if (X[175ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[175ULL] >= 1.0 ? 1.0 : X[175ULL];
  }

  intrm_sf_mf_239 = (((1.0 - t156) - t272) * 296.802103844292 + t156 * 461.523)
    + t272 * 259.836612622973;
  if (X[82ULL] <= 0.0) {
    t156 = 0.0;
  } else {
    t156 = X[82ULL] >= 1.0 ? 1.0 : X[82ULL];
  }

  if (X[81ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[81ULL] >= 1.0 ? 1.0 : X[81ULL];
  }

  intrm_sf_mf_269 = (((1.0 - t156) - t272) * 296.802103844292 + t156 * 461.523)
    + t272 * 259.836612622973;
  if (X[17ULL] <= 0.0) {
    t156 = 0.0;
  } else {
    t156 = X[17ULL] >= 1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  intrm_sf_mf_341 = (((1.0 - t156) - t272) * 296.802103844292 + t156 * 461.523)
    + t272 * 259.836612622973;
  if (X[199ULL] <= 216.59999999999997) {
    t88 = 216.59999999999997;
  } else {
    t88 = X[199ULL] >= 623.15 ? 623.15 : X[199ULL];
  }

  t92 = t88 * t88;
  t89 = (((1074.1165326382541 + t88 * -0.2214565261064077) + t92 *
          0.00037212980109010952) * ((1.0 - t156) - t272) + ((1479.6504774710445
           + t88 * 1.200211433705052) + t92 * -0.00038614513167842338) * t156) +
    ((900.63941224837913 + t88 * -0.044484923911364271) + t92 *
     0.00036936011832043369) * t272;
  t93 = t89 - intrm_sf_mf_341;
  t88 = t89 / (t93 == 0.0 ? 1.0E-16 : t93);
  if (X[202ULL] <= 216.59999999999997) {
    t89 = 216.59999999999997;
  } else {
    t89 = X[202ULL] >= 623.15 ? 623.15 : X[202ULL];
  }

  t93 = t89 * t89;
  t90 = (((1074.1165326382541 + t89 * -0.2214565261064077) + t93 *
          0.00037212980109010952) * ((1.0 - t156) - t272) + ((1479.6504774710445
           + t89 * 1.200211433705052) + t93 * -0.00038614513167842338) * t156) +
    ((900.63941224837913 + t89 * -0.044484923911364271) + t93 *
     0.00036936011832043369) * t272;
  t94 = t90 - intrm_sf_mf_341;
  t156 = t90 / (t94 == 0.0 ? 1.0E-16 : t94);
  if (X[198ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[198ULL] >= 1.0 ? 1.0 : X[198ULL];
  }

  if (X[197ULL] <= 0.0) {
    t89 = 0.0;
  } else {
    t89 = X[197ULL] >= 1.0 ? 1.0 : X[197ULL];
  }

  t90 = (((1.0 - t272) - t89) * 296.802103844292 + t272 * 461.523) + t89 *
    259.836612622973;
  if (X[35ULL] <= 0.0) {
    t89 = 0.0;
  } else {
    t89 = X[35ULL] >= 1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[34ULL] >=
      1.0 ? 1.0 : X[34ULL];
  }

  t92 = (((1.0 - t89) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) *
         296.802103844292 + t89 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[283ULL] <= 0.0) {
    t89 = 0.0;
  } else {
    t89 = X[283ULL] >= 1.0 ? 1.0 : X[283ULL];
  }

  if (X[282ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[282ULL] >=
      1.0 ? 1.0 : X[282ULL];
  }

  t93 = (((1.0 - t89) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) *
         296.802103844292 + t89 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[39ULL] <= 0.0) {
    t89 = 0.0;
  } else {
    t89 = X[39ULL] >= 1.0 ? 1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[38ULL] >=
      1.0 ? 1.0 : X[38ULL];
  }

  t94 = (((1.0 - t89) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) *
         296.802103844292 + t89 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[42ULL] <= 0.0) {
    t89 = 0.0;
  } else {
    t89 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[43ULL] >=
      1.0 ? 1.0 : X[43ULL];
  }

  intrm_sf_mf_666 = (((1.0 - t89) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
                     * 296.802103844292 + t89 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[303ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI = X[303ULL] >=
      623.15 ? 623.15 : X[303ULL];
  }

  t36 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
    (((1074.1165326382541 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
       -0.2214565261064077) + t36 * 0.00037212980109010952) * ((1.0 - t89) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) +
     ((1479.6504774710445 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
       1.200211433705052) + t36 * -0.00038614513167842338) * t89) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
      6.9647057412830984) + t36 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  t95 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 -
    intrm_sf_mf_666;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 / (t95 ==
    0.0 ? 1.0E-16 : t95);
  if (X[307ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = X[307ULL] >=
      623.15 ? 623.15 : X[307ULL];
  }

  t95 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25;
  t36 = (((1074.1165326382541 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
           -0.2214565261064077) + t95 * 0.00037212980109010952) * ((1.0 - t89) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) +
         ((1479.6504774710445 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
           1.200211433705052) + t95 * -0.00038614513167842338) * t89) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
      6.9647057412830984) + t95 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  t272 = t36 - intrm_sf_mf_666;
  t89 = t36 / (t272 == 0.0 ? 1.0E-16 : t272);
  if (X[302ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[302ULL] >=
      1.0 ? 1.0 : X[302ULL];
  }

  if (X[301ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = X[301ULL] >=
      1.0 ? 1.0 : X[301ULL];
  }

  t36 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
          - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25) *
         296.802103844292 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
         461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
    4124.48151675695;
  if (X[248ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[248ULL] >=
      1.0 ? 1.0 : X[248ULL];
  }

  if (X[247ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = X[247ULL] >=
      1.0 ? 1.0 : X[247ULL];
  }

  t95 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
          - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25) *
         296.802103844292 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
         461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
    4124.48151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = (X[300ULL] *
    -0.7999998 + U_idx_4 * 7.9999980000000006) + 9.9999999947364415E-9;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
      7.8539816339744827E-5 <= 7.8539816339744857E-13) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
      7.8539816339744857E-13;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
             7.8539816339744827E-5 >= 3.1415926535897929E-6) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
      3.1415926535897929E-6;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
      7.8539816339744827E-5;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 /
    7.8539816339744827E-5;
  if (X[319ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = X[319ULL] >=
      1.0 ? 1.0 : X[319ULL];
  }

  if (X[320ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[320ULL] >= 1.0 ? 1.0 : X[320ULL];
  }

  intrm_sf_mf_810 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25)
                      - t272) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25
                     * 461.523) + t272 * 4124.48151675695;
  t98 = X[317ULL] * intrm_sf_mf_810;
  intrm_sf_mf_899 = X[318ULL] / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) * (X
    [321ULL] / (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t101 = X[318ULL] / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL]) * (X[322ULL] / (X
    [317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t107 = (X[37ULL] + X[300ULL]) / 2.0 * 0.0010000000000000009;
  t105 = (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
    * (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15);
  intrm_sf_mf_901 = t107 * t105;
  intrm_sf_mf_927 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
     intrm_sf_mf_899) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 * t101) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = (X[37ULL] - X
    [300ULL]) * (intrm_sf_mf_927 >= t105 ? intrm_sf_mf_927 : t105);
  intrm_sf_mf_927 = (X[37ULL] - X[300ULL]) / (t107 == 0.0 ? 1.0E-16 : t107);
  t144 = intrm_sf_mf_927 * intrm_sf_mf_927 * 3.0 - intrm_sf_mf_927 *
    intrm_sf_mf_927 * intrm_sf_mf_927 * 2.0;
  if (X[37ULL] - X[300ULL] <= 0.0) {
    intrm_sf_mf_927 = intrm_sf_mf_901;
  } else if (X[37ULL] - X[300ULL] >= t107) {
    intrm_sf_mf_927 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI;
  } else {
    intrm_sf_mf_927 = (1.0 - t144) * intrm_sf_mf_901 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * t144;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
     t101) - (1.0 -
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
              intrm_sf_mf_899) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = (X[300ULL] -
    X[37ULL]) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI >=
                 t105 ?
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI :
                 t105);
  intrm_sf_mf_899 = (X[300ULL] - X[37ULL]) / (t107 == 0.0 ? 1.0E-16 : t107);
  t101 = intrm_sf_mf_899 * intrm_sf_mf_899 * 3.0 - intrm_sf_mf_899 *
    intrm_sf_mf_899 * intrm_sf_mf_899 * 2.0;
  if (X[300ULL] - X[37ULL] <= 0.0) {
    intrm_sf_mf_899 = intrm_sf_mf_901;
  } else if (X[300ULL] - X[37ULL] >= t107) {
    intrm_sf_mf_899 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  } else {
    intrm_sf_mf_899 = (1.0 - t101) * intrm_sf_mf_901 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 * t101;
  }

  if (X[37ULL] > X[300ULL]) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 =
      intrm_sf_mf_927;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[37ULL] <
      X[300ULL] ? intrm_sf_mf_899 : intrm_sf_mf_901;
  }

  if (X[317ULL] <= 216.59999999999997) {
    intrm_sf_mf_899 = 216.59999999999997;
  } else {
    intrm_sf_mf_899 = X[317ULL] >= 623.15 ? 623.15 : X[317ULL];
  }

  t109 = intrm_sf_mf_899 * intrm_sf_mf_899;
  t101 = (((1074.1165326382541 + intrm_sf_mf_899 * -0.2214565261064077) + t109 *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25) -
           t272) + ((1479.6504774710445 + intrm_sf_mf_899 * 1.200211433705052) +
                    t109 * -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25) +
    ((12825.281119790017 + intrm_sf_mf_899 * 6.9647057412830984) + t109 *
     -0.007052486824683288) * t272;
  t110 = t101 - intrm_sf_mf_810;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = t101 / (t110
    == 0.0 ? 1.0E-16 : t110);
  if (X[335ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[335ULL] >= 1.0 ? 1.0 : X[335ULL];
  }

  if (X[336ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[336ULL] >= 1.0 ? 1.0 : X[336ULL];
  }

  t101 = (((1.0 - t272) - intrm_sf_mf_899) * 296.802103844292 + t272 * 461.523)
    + intrm_sf_mf_899 * 259.836612622973;
  if (X[348ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[348ULL] >= 1.0 ? 1.0 : X[348ULL];
  }

  if (X[347ULL] <= 0.0) {
    t105 = 0.0;
  } else {
    t105 = X[347ULL] >= 1.0 ? 1.0 : X[347ULL];
  }

  t107 = (((1.0 - intrm_sf_mf_899) - t105) * 296.802103844292 + intrm_sf_mf_899 *
          461.523) + t105 * 259.836612622973;
  if (X[47ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[47ULL] >= 1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    t105 = 0.0;
  } else {
    t105 = X[46ULL] >= 1.0 ? 1.0 : X[46ULL];
  }

  intrm_sf_mf_901 = (((1.0 - intrm_sf_mf_899) - t105) * 296.802103844292 +
                     intrm_sf_mf_899 * 461.523) + t105 * 259.836612622973;
  if (X[50ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[50ULL] >= 1.0 ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    t105 = 0.0;
  } else {
    t105 = X[49ULL] >= 1.0 ? 1.0 : X[49ULL];
  }

  intrm_sf_mf_927 = (((1.0 - intrm_sf_mf_899) - t105) * 296.802103844292 +
                     intrm_sf_mf_899 * 461.523) + t105 * 4124.48151675695;
  if (X[382ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = X[382ULL] >=
      623.15 ? 623.15 : X[382ULL];
  }

  t110 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI;
  t144 = (((1074.1165326382541 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
            -0.2214565261064077) + t110 * 0.00037212980109010952) * ((1.0 -
            intrm_sf_mf_899) - t105) + ((1479.6504774710445 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
            1.200211433705052) + t110 * -0.00038614513167842338) *
          intrm_sf_mf_899) + ((12825.281119790017 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
    6.9647057412830984) + t110 * -0.007052486824683288) * t105;
  t111 = t144 - intrm_sf_mf_927;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = t144 / (t111 ==
    0.0 ? 1.0E-16 : t111);
  if (X[385ULL] <= 216.59999999999997) {
    t144 = 216.59999999999997;
  } else {
    t144 = X[385ULL] >= 623.15 ? 623.15 : X[385ULL];
  }

  t111 = t144 * t144;
  t109 = (((1074.1165326382541 + t144 * -0.2214565261064077) + t111 *
           0.00037212980109010952) * ((1.0 - intrm_sf_mf_899) - t105) +
          ((1479.6504774710445 + t144 * 1.200211433705052) + t111 *
           -0.00038614513167842338) * intrm_sf_mf_899) + ((12825.281119790017 +
    t144 * 6.9647057412830984) + t111 * -0.007052486824683288) * t105;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI = t109 -
    intrm_sf_mf_927;
  intrm_sf_mf_899 = t109 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI == 0.0 ? 1.0E-16
     : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI);
  if (X[374ULL] <= 0.0) {
    t105 = 0.0;
  } else {
    t105 = X[374ULL] >= 1.0 ? 1.0 : X[374ULL];
  }

  if (X[373ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[373ULL] >= 1.0 ? 1.0 : X[373ULL];
  }

  t109 = (((1.0 - t105) - t144) * 296.802103844292 + t105 * 461.523) + t144 *
    4124.48151675695;
  if (X[251ULL] <= 0.0) {
    t105 = 0.0;
  } else {
    t105 = X[251ULL] >= 1.0 ? 1.0 : X[251ULL];
  }

  if (X[250ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[250ULL] >= 1.0 ? 1.0 : X[250ULL];
  }

  t110 = (((1.0 - t105) - t144) * 296.802103844292 + t105 * 461.523) + t144 *
    4124.48151675695;
  if (X[8ULL] <= 0.0) {
    t105 = 0.0;
  } else {
    t105 = X[8ULL] >= 1.0 ? 1.0 : X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[7ULL] >= 1.0 ? 1.0 : X[7ULL];
  }

  t111 = (((1.0 - t105) - t144) * 296.802103844292 + t105 * 461.523) + t144 *
    4124.48151675695;
  if (X[396ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI = X[396ULL] >=
      623.15 ? 623.15 : X[396ULL];
  }

  t51 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
    (((1074.1165326382541 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
       -0.2214565261064077) + t51 * 0.00037212980109010952) * ((1.0 - t105) -
      t144) + ((1479.6504774710445 +
                Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
                1.200211433705052) + t51 * -0.00038614513167842338) * t105) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI *
      6.9647057412830984) + t51 * -0.007052486824683288) * t144;
  t113 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI - t111;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / (t113 == 0.0 ?
    1.0E-16 : t113);
  if (X[399ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X[399ULL] >=
      623.15 ? 623.15 : X[399ULL];
  }

  t113 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  t51 = (((1074.1165326382541 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
           -0.2214565261064077) + t113 * 0.00037212980109010952) * ((1.0 - t105)
          - t144) + ((1479.6504774710445 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
                      * 1.200211433705052) + t113 * -0.00038614513167842338) *
         t105) + ((12825.281119790017 +
                   Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
                   6.9647057412830984) + t113 * -0.007052486824683288) * t144;
  t134 = t51 - t111;
  t105 = t51 / (t134 == 0.0 ? 1.0E-16 : t134);
  if (X[78ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[78ULL] >= 1.0 ? 1.0 : X[78ULL];
  }

  if (X[77ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X[77ULL] >= 1.0
      ? 1.0 : X[77ULL];
  }

  t51 = (((1.0 - t144) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) *
         296.802103844292 + t144 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    4124.48151675695;
  if (X[11ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[11ULL] >= 1.0 ? 1.0 : X[11ULL];
  }

  if (X[10ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X[10ULL] >= 1.0
      ? 1.0 : X[10ULL];
  }

  t113 = (((1.0 - t144) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) *
          296.802103844292 + t144 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    4124.48151675695;
  if (X[410ULL] <= 216.59999999999997) {
    t134 = 216.59999999999997;
  } else {
    t134 = X[410ULL] >= 623.15 ? 623.15 : X[410ULL];
  }

  t57 = t134 * t134;
  t272 = (((1074.1165326382541 + t134 * -0.2214565261064077) + t57 *
           0.00037212980109010952) * ((1.0 - t144) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
          ((1479.6504774710445 + t134 * 1.200211433705052) + t57 *
           -0.00038614513167842338) * t144) + ((12825.281119790017 + t134 *
    6.9647057412830984) + t57 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  t115 = t272 - t113;
  t134 = t272 / (t115 == 0.0 ? 1.0E-16 : t115);
  if (X[412ULL] <= 216.59999999999997) {
    t272 = 216.59999999999997;
  } else {
    t272 = X[412ULL] >= 623.15 ? 623.15 : X[412ULL];
  }

  t115 = t272 * t272;
  t57 = (((1074.1165326382541 + t272 * -0.2214565261064077) + t115 *
          0.00037212980109010952) * ((1.0 - t144) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
         ((1479.6504774710445 + t272 * 1.200211433705052) + t115 *
          -0.00038614513167842338) * t144) + ((12825.281119790017 + t272 *
    6.9647057412830984) + t115 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = t57 - t113;
  t144 = t57 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ?
                1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p);
  if (X[56ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X[56ULL] >= 1.0
      ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  t57 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) -
          t272) * 296.802103844292 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 461.523) +
    t272 * 259.836612622973;
  if (X[427ULL] <= 216.59999999999997) {
    t115 = 216.59999999999997;
  } else {
    t115 = X[427ULL] >= 623.15 ? 623.15 : X[427ULL];
  }

  t63 = t115 * t115;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = (((1074.1165326382541
    + t115 * -0.2214565261064077) + t63 * 0.00037212980109010952) * ((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) - t272) +
    ((1479.6504774710445 + t115 * 1.200211433705052) + t63 *
     -0.00038614513167842338) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
    ((900.63941224837913 + t115 * -0.044484923911364271) + t63 *
     0.00036936011832043369) * t272;
  t117 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - t57;
  t115 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p / (t117 == 0.0 ?
    1.0E-16 : t117);
  if (X[429ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = 216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = X[429ULL] >= 623.15 ?
      623.15 : X[429ULL];
  }

  t117 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p;
  t63 = (((1074.1165326382541 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p *
           -0.2214565261064077) + t117 * 0.00037212980109010952) * ((1.0 -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) - t272) +
         ((1479.6504774710445 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p *
           1.200211433705052) + t117 * -0.00038614513167842338) *
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
    ((900.63941224837913 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p
      * -0.044484923911364271) + t117 * 0.00036936011832043369) * t272;
  t118 = t63 - t57;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = t63 / (t118 ==
    0.0 ? 1.0E-16 : t118);
  if (X[351ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[351ULL] >= 1.0 ? 1.0 : X[351ULL];
  }

  if (X[350ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = X[350ULL] >= 1.0 ?
      1.0 : X[350ULL];
  }

  t63 = (((1.0 - t272) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) *
         296.802103844292 + t272 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p * 259.836612622973;
  if (X[449ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[449ULL] >= 1.0 ? 1.0 : X[449ULL];
  }

  if (X[450ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = X[450ULL] >= 1.0 ?
      1.0 : X[450ULL];
  }

  t117 = (((1.0 - t272) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p)
          * 296.802103844292 + t272 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p * 259.836612622973;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p = (X[453ULL] *
    0.07812500122070315 + U_idx_10 * 10.0) - 7.8125001220703152E-10;
  if (X[60ULL] <= 0.0) {
    t118 = 0.0;
  } else {
    t118 = X[60ULL] >= 1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = X[61ULL] >=
      1.0 ? 1.0 : X[61ULL];
  }

  intrm_sf_mf_1488 = (((1.0 - t118) -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19)
                      * 296.802103844292 + t118 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 *
    259.836612622973;
  if (X[456ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI = X[456ULL] >=
      623.15 ? 623.15 : X[456ULL];
  }

  intrm_sf_mf_1553 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
    (((1074.1165326382541 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
       -0.2214565261064077) + intrm_sf_mf_1553 * 0.00037212980109010952) * ((1.0
       - t118) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19)
     + ((1479.6504774710445 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
         1.200211433705052) + intrm_sf_mf_1553 * -0.00038614513167842338) * t118)
    + ((900.63941224837913 +
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
        -0.044484923911364271) + intrm_sf_mf_1553 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19;
  t119 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 -
    intrm_sf_mf_1488;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 / (t119 ==
    0.0 ? 1.0E-16 : t119);
  if (X[460ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = X[460ULL] >=
      623.15 ? 623.15 : X[460ULL];
  }

  t119 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6;
  intrm_sf_mf_1553 = (((1074.1165326382541 +
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6
                        * -0.2214565261064077) + t119 * 0.00037212980109010952) *
                      ((1.0 - t118) -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19)
                      + ((1479.6504774710445 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    1.200211433705052) + t119 * -0.00038614513167842338) * t118) +
    ((900.63941224837913 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
      -0.044484923911364271) + t119 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19;
  t120 = intrm_sf_mf_1553 - intrm_sf_mf_1488;
  t118 = intrm_sf_mf_1553 / (t120 == 0.0 ? 1.0E-16 : t120);
  if (X[455ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = X[455ULL] >=
      1.0 ? 1.0 : X[455ULL];
  }

  if (X[454ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = X[454ULL] >=
      1.0 ? 1.0 : X[454ULL];
  }

  intrm_sf_mf_1553 = (((1.0 -
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19)
                       - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6)
                      * 296.802103844292 +
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19
                      * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    259.836612622973;
  if (X[453ULL] * 0.0019634954084936209 <= 1.9634954084936209E-11) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 =
      1.9634954084936209E-11;
  } else if (X[453ULL] * 0.0019634954084936209 >= 0.0012566370614359179) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 =
      0.0012566370614359179;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = X[453ULL] *
      0.0019634954084936209;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 /
    0.0019634954084936209;
  if (X[472ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = X[472ULL] >=
      1.0 ? 1.0 : X[472ULL];
  }

  if (X[473ULL] <= 0.0) {
    t119 = 0.0;
  } else {
    t119 = X[473ULL] >= 1.0 ? 1.0 : X[473ULL];
  }

  t120 = (((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19) -
           t119) * 296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 *
          461.523) + t119 * 259.836612622973;
  t122 = X[470ULL] * t120;
  t272 = X[471ULL] / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p ==
                      0.0 ? 1.0E-16 :
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) *
    (X[474ULL] / (X[470ULL] == 0.0 ? 1.0E-16 : X[470ULL]));
  t124 = X[471ULL] / 1.01325 * (X[475ULL] / (X[470ULL] == 0.0 ? 1.0E-16 : X
    [470ULL]));
  t129 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p + 1.01325) / 2.0
    * 0.0010000000000000009;
  t127 = (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6);
  intrm_sf_mf_186 = t129 * t127;
  intrm_sf_mf_581 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 * t272)
    - (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
       t124) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325) *
    (intrm_sf_mf_581 >= t127 ? intrm_sf_mf_581 : t127);
  intrm_sf_mf_581 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p -
                     1.01325) / (t129 == 0.0 ? 1.0E-16 : t129);
  intrm_sf_mf_844 = intrm_sf_mf_581 * intrm_sf_mf_581 * 3.0 - intrm_sf_mf_581 *
    intrm_sf_mf_581 * intrm_sf_mf_581 * 2.0;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 <= 0.0) {
    intrm_sf_mf_581 = intrm_sf_mf_186;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 1.01325 >=
             t129) {
    intrm_sf_mf_581 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12;
  } else {
    intrm_sf_mf_581 = (1.0 - intrm_sf_mf_844) * intrm_sf_mf_186 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 *
      intrm_sf_mf_844;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 * t124)
    - (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
       t272) * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = (1.01325 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) *
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 >= t127 ?
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 : t127);
  t272 = (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p) /
    (t129 == 0.0 ? 1.0E-16 : t129);
  t124 = t272 * t272 * 3.0 - t272 * t272 * t272 * 2.0;
  if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p <= 0.0) {
    t272 = intrm_sf_mf_186;
  } else if (1.01325 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p >=
             t129) {
    t272 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6;
  } else {
    t272 = (1.0 - t124) * intrm_sf_mf_186 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 * t124;
  }

  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p > 1.01325) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
      intrm_sf_mf_581;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p < 1.01325 ? t272 :
      intrm_sf_mf_186;
  }

  if (X[470ULL] <= 216.59999999999997) {
    t272 = 216.59999999999997;
  } else {
    t272 = X[470ULL] >= 623.15 ? 623.15 : X[470ULL];
  }

  t131 = t272 * t272;
  t124 = (((1074.1165326382541 + t272 * -0.2214565261064077) + t131 *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19) -
           t119) + ((1479.6504774710445 + t272 * 1.200211433705052) + t131 *
                    -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19) +
    ((900.63941224837913 + t272 * -0.044484923911364271) + t131 *
     0.00036936011832043369) * t119;
  U_idx_10 = t124 - t120;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = t124 /
    (U_idx_10 == 0.0 ? 1.0E-16 : U_idx_10);
  if (X[440ULL] <= 0.0) {
    t119 = 0.0;
  } else {
    t119 = X[440ULL] >= 1.0 ? 1.0 : X[440ULL];
  }

  if (X[439ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[439ULL] >= 1.0 ? 1.0 : X[439ULL];
  }

  t124 = (((1.0 - t119) - t272) * 296.802103844292 + t119 * 461.523) + t272 *
    259.836612622973;
  if (U_idx_11 >= 1.0) {
    t119 = 1.0;
  } else {
    t119 = U_idx_11 <= 0.0 ? 0.0 : U_idx_11;
  }

  if (X[340ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[340ULL] >= 1.0 ? 1.0 : X[340ULL];
  }

  if (X[339ULL] <= 0.0) {
    t127 = 0.0;
  } else {
    t127 = X[339ULL] >= 1.0 ? 1.0 : X[339ULL];
  }

  t129 = (((1.0 - t272) - t127) * 296.802103844292 + t272 * 461.523) + t127 *
    259.836612622973;
  if (X[129ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[129ULL] >= 1.0 ? 1.0 : X[129ULL];
  }

  if (X[128ULL] <= 0.0) {
    t127 = 0.0;
  } else {
    t127 = X[128ULL] >= 1.0 ? 1.0 : X[128ULL];
  }

  intrm_sf_mf_186 = (((1.0 - t272) - t127) * 296.802103844292 + t272 * 461.523)
    + t127 * 4124.48151675695;
  if (X[254ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[254ULL] >= 1.0 ? 1.0 : X[254ULL];
  }

  if (X[253ULL] <= 0.0) {
    t127 = 0.0;
  } else {
    t127 = X[253ULL] >= 1.0 ? 1.0 : X[253ULL];
  }

  intrm_sf_mf_581 = (((1.0 - t272) - t127) * 296.802103844292 + t272 * 461.523)
    + t127 * 4124.48151675695;
  if (X[286ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[286ULL] >= 1.0 ? 1.0 : X[286ULL];
  }

  if (X[285ULL] <= 0.0) {
    t127 = 0.0;
  } else {
    t127 = X[285ULL] >= 1.0 ? 1.0 : X[285ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 = (((1.0 -
    t272) - t127) * 296.802103844292 + t272 * 461.523) + t127 * 4124.48151675695;
  if (X[326ULL] <= 0.0) {
    t272 = 0.0;
  } else {
    t272 = X[326ULL] >= 1.0 ? 1.0 : X[326ULL];
  }

  if (X[325ULL] <= 0.0) {
    t127 = 0.0;
  } else {
    t127 = X[325ULL] >= 1.0 ? 1.0 : X[325ULL];
  }

  intrm_sf_mf_844 = (((1.0 - t272) - t127) * 296.802103844292 + t272 * 461.523)
    + t127 * 259.836612622973;
  if (M[45ULL] == 0) {
    t127 = -X[479ULL] - X[63ULL];
  } else {
    t127 = 0.0;
  }

  if (M[214ULL] == 0) {
    t272 = X[18ULL] - 623.15;
  } else {
    t272 = 0.0;
  }

  if (M[244ULL] == 0) {
    t131 = U_idx_7 - 623.15;
  } else {
    t131 = 0.0;
  }

  if (M[15ULL] == 0) {
    U_idx_10 = U_idx_9 - 623.15;
  } else {
    U_idx_10 = 0.0;
  }

  t6[0ULL] = pmf_get_inf();
  for (t7 = 0ULL; t7 < 42ULL; t7++) {
    t8 = t7 / 42ULL;
    U_idx_1 = t6[t8 > 0ULL ? 0ULL : t8];
    U_idx_4 = ((_NeDynamicSystem*)(LC))->mField0[t7] * 1.0E-5;
    t6[t8 > 0ULL ? 0ULL : t8] = U_idx_1 > U_idx_4 ? U_idx_4 : U_idx_1;
  }

  t5[0ULL] = t6[0ULL] - X[65ULL];
  t5[1ULL] = 4.03416E-7 - X[67ULL];
  t5[2ULL] = X[67ULL];
  t5[3ULL] = X[65ULL];
  t5[4ULL] = X[66ULL] - 0.9;
  t5[5ULL] = (((X[4ULL] * -1.0E-6 + X[72ULL] * -1.0000000000000011) + X[73ULL] *
               -1.0E-6) + X[5ULL]) - (X[71ULL] + 0.8);
  t5[6ULL] = t119 - 1.0 > 1.0 - t119 ? 1.0 - t119 : t119 - 1.0;
  t5[7ULL] = X[410ULL] * t134 * t113;
  t134 = X[411ULL] * X[411ULL] * t134 / (t113 == 0.0 ? 1.0E-16 : t113);
  t5[8ULL] = t134 / (X[410ULL] == 0.0 ? 1.0E-16 : X[410ULL]);
  t5[9ULL] = X[412ULL] * t144 * t113;
  t144 = X[413ULL] * X[413ULL] * t144 / (t113 == 0.0 ? 1.0E-16 : t113);
  t5[10ULL] = t144 / (X[412ULL] == 0.0 ? 1.0E-16 : X[412ULL]);
  t5[11ULL] = X[410ULL] * t113 / (X[411ULL] == 0.0 ? 1.0E-16 : X[411ULL]);
  t5[12ULL] = X[412ULL] * t113 / (X[413ULL] == 0.0 ? 1.0E-16 : X[413ULL]);
  t5[13ULL] = X[76ULL] - 0.01;
  t5[14ULL] = pmf_get_inf() - X[76ULL];
  t5[15ULL] = X[75ULL] - 216.59999999999997;
  t5[16ULL] = 623.15 - X[75ULL];
  t5[17ULL] = X[123ULL] - 0.01;
  t5[18ULL] = pmf_get_inf() - X[123ULL];
  t5[19ULL] = X[122ULL] - 216.59999999999997;
  t5[20ULL] = 623.15 - X[122ULL];
  t5[21ULL] = X[53ULL] - 0.01;
  t5[22ULL] = pmf_get_inf() - X[53ULL];
  t5[23ULL] = X[9ULL] - 216.59999999999997;
  t5[24ULL] = 623.15 - X[9ULL];
  t5[25ULL] = X[9ULL] * t113 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]);
  t5[26ULL] = X[199ULL] * t88 * intrm_sf_mf_341;
  t88 = X[200ULL] * X[200ULL] * t88 / (intrm_sf_mf_341 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_341);
  t5[27ULL] = t88 / (X[199ULL] == 0.0 ? 1.0E-16 : X[199ULL]);
  t5[28ULL] = X[202ULL] * t156 * intrm_sf_mf_341;
  t156 = X[203ULL] * X[203ULL] * t156 / (intrm_sf_mf_341 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_341);
  t5[29ULL] = t156 / (X[202ULL] == 0.0 ? 1.0E-16 : X[202ULL]);
  t5[30ULL] = X[199ULL] * intrm_sf_mf_341 / (X[200ULL] == 0.0 ? 1.0E-16 : X
    [200ULL]);
  t5[31ULL] = X[202ULL] * intrm_sf_mf_341 / (X[203ULL] == 0.0 ? 1.0E-16 : X
    [203ULL]);
  t5[32ULL] = X[80ULL] - 0.01;
  t5[33ULL] = pmf_get_inf() - X[80ULL];
  t5[34ULL] = X[79ULL] - 216.59999999999997;
  t5[35ULL] = 623.15 - X[79ULL];
  t5[36ULL] = X[196ULL] - 0.01;
  t5[37ULL] = pmf_get_inf() - X[196ULL];
  t5[38ULL] = X[195ULL] - 216.59999999999997;
  t5[39ULL] = 623.15 - X[195ULL];
  t5[40ULL] = X[24ULL] - 0.01;
  t5[41ULL] = pmf_get_inf() - X[24ULL];
  t5[42ULL] = X[15ULL] - 216.59999999999997;
  t5[43ULL] = 623.15 - X[15ULL];
  t5[44ULL] = X[15ULL] * intrm_sf_mf_341 / (X[24ULL] == 0.0 ? 1.0E-16 : X[24ULL]);
  t5[45ULL] = X[146ULL] * t328 * t327;
  t328 = X[147ULL] * X[147ULL] * t328 / (t327 == 0.0 ? 1.0E-16 : t327);
  t5[46ULL] = t328 / (X[146ULL] == 0.0 ? 1.0E-16 : X[146ULL]);
  t5[47ULL] = X[150ULL] * t276 * t327;
  t276 = X[151ULL] * X[151ULL] * t276 / (t327 == 0.0 ? 1.0E-16 : t327);
  t5[48ULL] = t276 / (X[150ULL] == 0.0 ? 1.0E-16 : X[150ULL]);
  t5[49ULL] = X[146ULL] * t327 / (X[147ULL] == 0.0 ? 1.0E-16 : X[147ULL]);
  t5[50ULL] = X[150ULL] * t327 / (X[151ULL] == 0.0 ? 1.0E-16 : X[151ULL]);
  t5[51ULL] = X[142ULL] - 0.01;
  t5[52ULL] = pmf_get_inf() - X[142ULL];
  t5[53ULL] = X[141ULL] - 216.59999999999997;
  t5[54ULL] = 623.15 - X[141ULL];
  t5[55ULL] = X[20ULL] - 0.01;
  t5[56ULL] = pmf_get_inf() - X[20ULL];
  t5[57ULL] = X[19ULL] - 216.59999999999997;
  t5[58ULL] = 623.15 - X[19ULL];
  t5[59ULL] = X[19ULL] * t327 / (X[20ULL] == 0.0 ? 1.0E-16 : X[20ULL]);
  t5[60ULL] = X[178ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI * t82;
  t5[61ULL] = X[179ULL] * X[179ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI / (t82 == 0.0 ?
    1.0E-16 : t82) / (X[178ULL] == 0.0 ? 1.0E-16 : X[178ULL]);
  t5[62ULL] = X[181ULL] * t294 * t82;
  t5[63ULL] = X[182ULL] * X[182ULL] * t294 / (t82 == 0.0 ? 1.0E-16 : t82) / (X
    [181ULL] == 0.0 ? 1.0E-16 : X[181ULL]);
  t5[64ULL] = X[178ULL] * t82 / (X[179ULL] == 0.0 ? 1.0E-16 : X[179ULL]);
  t5[65ULL] = X[181ULL] * t82 / (X[182ULL] == 0.0 ? 1.0E-16 : X[182ULL]);
  t5[66ULL] = X[174ULL] - 0.01;
  t5[67ULL] = pmf_get_inf() - X[174ULL];
  t5[68ULL] = X[173ULL] - 216.59999999999997;
  t5[69ULL] = 623.15 - X[173ULL];
  t5[70ULL] = X[23ULL] - 0.01;
  t5[71ULL] = pmf_get_inf() - X[23ULL];
  t5[72ULL] = X[12ULL] - 216.59999999999997;
  t5[73ULL] = 623.15 - X[12ULL];
  t5[74ULL] = X[12ULL] * t82 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]);
  t5[75ULL] = X[303ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI * intrm_sf_mf_666;
  t5[76ULL] = X[304ULL] * X[304ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI /
    (intrm_sf_mf_666 == 0.0 ? 1.0E-16 : intrm_sf_mf_666) / (X[303ULL] == 0.0 ?
    1.0E-16 : X[303ULL]);
  t5[77ULL] = X[307ULL] * t89 * intrm_sf_mf_666;
  t5[78ULL] = X[308ULL] * X[308ULL] * t89 / (intrm_sf_mf_666 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_666) / (X[307ULL] == 0.0 ? 1.0E-16 : X[307ULL]);
  t5[79ULL] = X[303ULL] * intrm_sf_mf_666 / (X[304ULL] == 0.0 ? 1.0E-16 : X
    [304ULL]);
  t5[80ULL] = X[307ULL] * intrm_sf_mf_666 / (X[308ULL] == 0.0 ? 1.0E-16 : X
    [308ULL]);
  t5[81ULL] = X[300ULL] - 0.01;
  t5[82ULL] = pmf_get_inf() - X[300ULL];
  t5[83ULL] = X[299ULL] - 216.59999999999997;
  t5[84ULL] = 623.15 - X[299ULL];
  t5[85ULL] = X[33ULL] - 0.01;
  t5[86ULL] = pmf_get_inf() - X[33ULL];
  t5[87ULL] = X[246ULL] - 216.59999999999997;
  t5[88ULL] = 623.15 - X[246ULL];
  t5[89ULL] = X[41ULL] - 0.01;
  t5[90ULL] = pmf_get_inf() - X[41ULL];
  t5[91ULL] = X[40ULL] - 216.59999999999997;
  t5[92ULL] = 623.15 - X[40ULL];
  t5[93ULL] = X[40ULL] * intrm_sf_mf_666 / (X[41ULL] == 0.0 ? 1.0E-16 : X[41ULL]);
  t5[94ULL] = X[382ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * intrm_sf_mf_927;
  t5[95ULL] = X[383ULL] * X[383ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI /
    (intrm_sf_mf_927 == 0.0 ? 1.0E-16 : intrm_sf_mf_927) / (X[382ULL] == 0.0 ?
    1.0E-16 : X[382ULL]);
  t5[96ULL] = X[385ULL] * intrm_sf_mf_899 * intrm_sf_mf_927;
  t5[97ULL] = X[386ULL] * X[386ULL] * intrm_sf_mf_899 / (intrm_sf_mf_927 == 0.0 ?
    1.0E-16 : intrm_sf_mf_927) / (X[385ULL] == 0.0 ? 1.0E-16 : X[385ULL]);
  t5[98ULL] = X[382ULL] * intrm_sf_mf_927 / (X[383ULL] == 0.0 ? 1.0E-16 : X
    [383ULL]);
  t5[99ULL] = X[385ULL] * intrm_sf_mf_927 / (X[386ULL] == 0.0 ? 1.0E-16 : X
    [386ULL]);
  t5[100ULL] = X[249ULL] - 216.59999999999997;
  t5[101ULL] = 623.15 - X[249ULL];
  t5[102ULL] = X[372ULL] - 0.01;
  t5[103ULL] = pmf_get_inf() - X[372ULL];
  t5[104ULL] = X[371ULL] - 216.59999999999997;
  t5[105ULL] = 623.15 - X[371ULL];
  t5[106ULL] = X[51ULL] - 0.01;
  t5[107ULL] = pmf_get_inf() - X[51ULL];
  t5[108ULL] = X[48ULL] - 216.59999999999997;
  t5[109ULL] = 623.15 - X[48ULL];
  t5[110ULL] = X[48ULL] * intrm_sf_mf_927 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]);
  t5[111ULL] = X[396ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI * t111;
  t5[112ULL] = X[397ULL] * X[397ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_AI / (t111 == 0.0 ?
    1.0E-16 : t111) / (X[396ULL] == 0.0 ? 1.0E-16 : X[396ULL]);
  t5[113ULL] = X[399ULL] * t105 * t111;
  t5[114ULL] = X[400ULL] * X[400ULL] * t105 / (t111 == 0.0 ? 1.0E-16 : t111) /
    (X[399ULL] == 0.0 ? 1.0E-16 : X[399ULL]);
  t5[115ULL] = X[396ULL] * t111 / (X[397ULL] == 0.0 ? 1.0E-16 : X[397ULL]);
  t5[116ULL] = X[399ULL] * t111 / (X[400ULL] == 0.0 ? 1.0E-16 : X[400ULL]);
  t5[117ULL] = X[52ULL] - 0.01;
  t5[118ULL] = pmf_get_inf() - X[52ULL];
  t5[119ULL] = X[6ULL] - 216.59999999999997;
  t5[120ULL] = 623.15 - X[6ULL];
  t5[121ULL] = X[6ULL] * t111 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]);
  t5[122ULL] = X[427ULL] * t115 * t57;
  t5[123ULL] = X[428ULL] * X[428ULL] * t115 / (t57 == 0.0 ? 1.0E-16 : t57) / (X
    [427ULL] == 0.0 ? 1.0E-16 : X[427ULL]);
  t5[124ULL] = X[429ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * t57;
  t5[125ULL] = X[430ULL] * X[430ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / (t57 == 0.0 ?
    1.0E-16 : t57) / (X[429ULL] == 0.0 ? 1.0E-16 : X[429ULL]);
  t5[126ULL] = X[427ULL] * t57 / (X[428ULL] == 0.0 ? 1.0E-16 : X[428ULL]);
  t5[127ULL] = X[429ULL] * t57 / (X[430ULL] == 0.0 ? 1.0E-16 : X[430ULL]);
  t5[128ULL] = X[44ULL] - 0.01;
  t5[129ULL] = pmf_get_inf() - X[44ULL];
  t5[130ULL] = X[349ULL] - 216.59999999999997;
  t5[131ULL] = 623.15 - X[349ULL];
  t5[132ULL] = X[57ULL] - 0.01;
  t5[133ULL] = pmf_get_inf() - X[57ULL];
  t5[134ULL] = X[54ULL] - 216.59999999999997;
  t5[135ULL] = 623.15 - X[54ULL];
  t5[136ULL] = X[54ULL] * t57 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]);
  t5[137ULL] = X[456ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
    intrm_sf_mf_1488;
  t5[138ULL] = X[457ULL] * X[457ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI /
    (intrm_sf_mf_1488 == 0.0 ? 1.0E-16 : intrm_sf_mf_1488) / (X[456ULL] == 0.0 ?
    1.0E-16 : X[456ULL]);
  t5[139ULL] = X[460ULL] * t118 * intrm_sf_mf_1488;
  t5[140ULL] = X[461ULL] * X[461ULL] * t118 / (intrm_sf_mf_1488 == 0.0 ? 1.0E-16
    : intrm_sf_mf_1488) / (X[460ULL] == 0.0 ? 1.0E-16 : X[460ULL]);
  t5[141ULL] = X[456ULL] * intrm_sf_mf_1488 / (X[457ULL] == 0.0 ? 1.0E-16 : X
    [457ULL]);
  t5[142ULL] = X[460ULL] * intrm_sf_mf_1488 / (X[461ULL] == 0.0 ? 1.0E-16 : X
    [461ULL]);
  t5[143ULL] = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p - 0.01;
  t5[144ULL] = pmf_get_inf() -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p;
  t5[145ULL] = X[452ULL] - 216.59999999999997;
  t5[146ULL] = 623.15 - X[452ULL];
  t5[147ULL] = X[59ULL] - 0.01;
  t5[148ULL] = pmf_get_inf() - X[59ULL];
  t5[149ULL] = X[58ULL] - 216.59999999999997;
  t5[150ULL] = 623.15 - X[58ULL];
  t5[151ULL] = X[58ULL] * intrm_sf_mf_1488 / (X[59ULL] == 0.0 ? 1.0E-16 : X
    [59ULL]);
  t5[152ULL] = (1.0 - X[138ULL]) - X[139ULL];
  t5[153ULL] = t319 * 293.15 / 1.01325;
  t5[154ULL] = (1.0 - X[335ULL]) - X[336ULL];
  t5[155ULL] = t101 * 293.15 / 1.01325;
  t5[156ULL] = (1.0 - X[449ULL]) - X[450ULL];
  t5[157ULL] = t117 * 293.15 / 1.01325;
  t5[158ULL] = X[167ULL] * X[167ULL] * t283 / (t288 == 0.0 ? 1.0E-16 : t288) /
    (X[166ULL] == 0.0 ? 1.0E-16 : X[166ULL]);
  t5[159ULL] = X[167ULL] / (t79 == 0.0 ? 1.0E-16 : t79) * 2.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp);
  t5[160ULL] = X[170ULL] * t288 / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL]);
  t5[161ULL] = X[171ULL] * t288 / 1.01325;
  t5[162ULL] = t79 / (X[167ULL] == 0.0 ? 1.0E-16 : X[167ULL]);
  t5[163ULL] = X[127ULL] - 216.59999999999997;
  t5[164ULL] = 623.15 - X[127ULL];
  t5[165ULL] = X[318ULL] * X[318ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 /
    (intrm_sf_mf_810 == 0.0 ? 1.0E-16 : intrm_sf_mf_810) / (X[317ULL] == 0.0 ?
    1.0E-16 : X[317ULL]);
  t5[166ULL] = X[318ULL] / (t98 == 0.0 ? 1.0E-16 : t98) * 2.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15);
  t5[167ULL] = X[321ULL] * intrm_sf_mf_810 / (X[37ULL] == 0.0 ? 1.0E-16 : X
    [37ULL]);
  t5[168ULL] = X[322ULL] * intrm_sf_mf_810 / (X[300ULL] == 0.0 ? 1.0E-16 : X
    [300ULL]);
  t5[169ULL] = t98 / (X[318ULL] == 0.0 ? 1.0E-16 : X[318ULL]);
  t5[170ULL] = X[37ULL] - 0.01;
  t5[171ULL] = pmf_get_inf() - X[37ULL];
  t5[172ULL] = X[284ULL] - 216.59999999999997;
  t5[173ULL] = 623.15 - X[284ULL];
  t5[174ULL] = X[471ULL] * X[471ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 / (t120 ==
    0.0 ? 1.0E-16 : t120) / (X[470ULL] == 0.0 ? 1.0E-16 : X[470ULL]);
  t5[175ULL] = X[471ULL] / (t122 == 0.0 ? 1.0E-16 : t122) * 2.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6);
  t5[176ULL] = X[474ULL] * t120 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p == 0.0 ? 1.0E-16 :
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p);
  t5[177ULL] = X[475ULL] * t120 / 1.01325;
  t5[178ULL] = t122 / (X[471ULL] == 0.0 ? 1.0E-16 : X[471ULL]);
  t5[179ULL] = X[438ULL] - 216.59999999999997;
  t5[180ULL] = 623.15 - X[438ULL];
  t5[181ULL] = (X[26ULL] * 0.1 + 0.0001) - 1.0E-8;
  t5[182ULL] = X[25ULL] - 273.16;
  t5[183ULL] = 363.16 - X[25ULL];
  t5[184ULL] = X[223ULL] - 0.5;
  t5[185ULL] = 500.0 - X[223ULL];
  t5[186ULL] = X[222ULL] - 273.16;
  t5[187ULL] = 363.16 - X[222ULL];
  t5[188ULL] = X[225ULL] - 0.5;
  t5[189ULL] = 500.0 - X[225ULL];
  t5[190ULL] = X[224ULL] - 273.16;
  t5[191ULL] = 363.16 - X[224ULL];
  t5[192ULL] = X[215ULL] - 273.16;
  t5[193ULL] = 363.16 - X[215ULL];
  t5[194ULL] = X[27ULL] - 0.5;
  t5[195ULL] = 500.0 - X[27ULL];
  t5[196ULL] = X[28ULL] - 273.16;
  t5[197ULL] = 363.16 - X[28ULL];
  t5[198ULL] = X[236ULL] - 0.5;
  t5[199ULL] = 500.0 - X[236ULL];
  t5[200ULL] = X[235ULL] - 273.16;
  t5[201ULL] = 363.16 - X[235ULL];
  t5[202ULL] = X[29ULL] - 0.5;
  t5[203ULL] = 500.0 - X[29ULL];
  t5[204ULL] = X[30ULL] - 273.16;
  t5[205ULL] = 363.16 - X[30ULL];
  t5[206ULL] = X[32ULL] - 216.59999999999997;
  t5[207ULL] = 623.15 - X[32ULL];
  t5[208ULL] = X[32ULL] * t92 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t5[209ULL] = X[36ULL] - 216.59999999999997;
  t5[210ULL] = 623.15 - X[36ULL];
  t5[211ULL] = X[36ULL] * t94 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]);
  t5[212ULL] = X[45ULL] - 216.59999999999997;
  t5[213ULL] = 623.15 - X[45ULL];
  t5[214ULL] = X[45ULL] * intrm_sf_mf_901 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]);
  t5[215ULL] = X[252ULL] - 216.59999999999997;
  t5[216ULL] = 623.15 - X[252ULL];
  t5[217ULL] = X[324ULL] - 216.59999999999997;
  t5[218ULL] = 623.15 - X[324ULL];
  t5[219ULL] = X[338ULL] - 216.59999999999997;
  t5[220ULL] = 623.15 - X[338ULL];
  t5[221ULL] = (real_T)(X[69ULL] > 0.0);
  t5[222ULL] = X[63ULL] - X[479ULL];
  t5[223ULL] = t127;
  t5[224ULL] = 216.59999999999997 - X[18ULL];
  t5[225ULL] = t272;
  t5[226ULL] = 216.59999999999997 - U_idx_7;
  t5[227ULL] = t131;
  t5[228ULL] = 216.59999999999997 - U_idx_9;
  t5[229ULL] = U_idx_10;
  t5[230ULL] = X[18ULL];
  t5[231ULL] = X[31ULL];
  t5[232ULL] = X[111ULL] - 0.6;
  U_idx_1 = X[75ULL] * t51;
  t5[233ULL] = U_idx_1 / (X[76ULL] == 0.0 ? 1.0E-16 : X[76ULL]);
  t319 = X[122ULL] * t284;
  t5[234ULL] = t319 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]);
  t327 = X[79ULL] * intrm_sf_mf_269;
  t5[235ULL] = t327 / (X[80ULL] == 0.0 ? 1.0E-16 : X[80ULL]);
  t283 = X[195ULL] * t90;
  t5[236ULL] = t283 / (X[196ULL] == 0.0 ? 1.0E-16 : X[196ULL]);
  t294 = X[127ULL] * intrm_sf_mf_186;
  t5[237ULL] = t294 / 1.01325;
  t5[238ULL] = t319 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]);
  t288 = X[141ULL] * intrm_sf_mf_94;
  t5[239ULL] = t288 / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL]);
  t5[240ULL] = t288 / (X[142ULL] == 0.0 ? 1.0E-16 : X[142ULL]);
  t5[241ULL] = t294 / 1.01325;
  intrm_sf_mf_94 = X[173ULL] * intrm_sf_mf_239;
  t5[242ULL] = intrm_sf_mf_94 / (X[174ULL] == 0.0 ? 1.0E-16 : X[174ULL]);
  t5[243ULL] = t327 / (X[80ULL] == 0.0 ? 1.0E-16 : X[80ULL]);
  t327 = X[246ULL] * t95;
  t5[244ULL] = t327 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t328 = X[252ULL] * intrm_sf_mf_581;
  t5[245ULL] = t328 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t288 = X[249ULL] * t110;
  t5[246ULL] = t288 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t5[247ULL] = t319 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]);
  t5[248ULL] = t328 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t319 = X[284ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12;
  t5[249ULL] = t319 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]);
  t328 = X[299ULL] * t36;
  t5[250ULL] = t328 / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL]);
  t5[251ULL] = t327 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t5[252ULL] = t319 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]);
  t5[253ULL] = t328 / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL]);
  t319 = X[324ULL] * intrm_sf_mf_844;
  t5[254ULL] = t319 / 1.01325;
  t5[255ULL] = t319 / 1.01325;
  t319 = X[338ULL] * t129;
  t5[256ULL] = t319 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]);
  t5[257ULL] = t319 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]);
  t319 = X[349ULL] * t63;
  t5[258ULL] = t319 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]);
  t5[259ULL] = t288 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t327 = X[371ULL] * t109;
  t5[260ULL] = t327 / (X[372ULL] == 0.0 ? 1.0E-16 : X[372ULL]);
  t5[261ULL] = t327 / (X[372ULL] == 0.0 ? 1.0E-16 : X[372ULL]);
  t5[262ULL] = U_idx_1 / (X[76ULL] == 0.0 ? 1.0E-16 : X[76ULL]);
  t5[263ULL] = t319 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]);
  t5[264ULL] = intrm_sf_mf_94 / (X[174ULL] == 0.0 ? 1.0E-16 : X[174ULL]);
  U_idx_1 = X[438ULL] * t124;
  t5[265ULL] = U_idx_1 / 1.01325;
  t5[266ULL] = t283 / (X[196ULL] == 0.0 ? 1.0E-16 : X[196ULL]);
  t272 = X[452ULL] * intrm_sf_mf_1553;
  t5[267ULL] = t272 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p ==
                       0.0 ? 1.0E-16 :
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p);
  t5[268ULL] = t272 / (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p ==
                       0.0 ? 1.0E-16 :
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_B_p);
  t5[269ULL] = U_idx_1 / 1.01325;
  t5[270ULL] = X[277ULL] * t93 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]);
  t5[271ULL] = X[280ULL] * t93 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t5[272ULL] = X[278ULL] * t93 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL]);
  t5[273ULL] = X[279ULL] * t93 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL]);
  t5[274ULL] = X[342ULL] * t107 / 1.01325;
  t5[275ULL] = X[345ULL] * t107 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]);
  t5[276ULL] = X[343ULL] * t107 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL]);
  t5[277ULL] = X[344ULL] * t107 / 1.01325;
  for (b = 0; b < 278; b++) {
    out.mX[b] = t5[b];
  }

  (void)LC;
  (void)t356;
  return 0;
}
