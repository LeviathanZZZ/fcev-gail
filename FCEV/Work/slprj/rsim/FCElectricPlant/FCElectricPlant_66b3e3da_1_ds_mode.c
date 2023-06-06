/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'FCElectricPlant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_sys_struct.h"
#include "FCElectricPlant_66b3e3da_1_ds_mode.h"
#include "FCElectricPlant_66b3e3da_1_ds.h"
#include "FCElectricPlant_66b3e3da_1_ds_externals.h"
#include "FCElectricPlant_66b3e3da_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T FCElectricPlant_66b3e3da_1_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t315, NeDsMethodOutput *t316)
{
  PmIntVector out;
  real_T X[480];
  real_T t1[1];
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  real_T Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
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
  real_T intrm_sf_mf_1374;
  real_T intrm_sf_mf_1479;
  real_T intrm_sf_mf_1488;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_173;
  real_T intrm_sf_mf_202;
  real_T intrm_sf_mf_269;
  real_T intrm_sf_mf_29;
  real_T intrm_sf_mf_341;
  real_T intrm_sf_mf_666;
  real_T intrm_sf_mf_701;
  real_T intrm_sf_mf_810;
  real_T intrm_sf_mf_841;
  real_T intrm_sf_mf_899;
  real_T intrm_sf_mf_901;
  real_T intrm_sf_mf_927;
  real_T t100;
  real_T t103;
  real_T t105;
  real_T t106;
  real_T t108;
  real_T t109;
  real_T t110;
  real_T t111;
  real_T t112;
  real_T t113;
  real_T t115;
  real_T t123;
  real_T t127;
  real_T t134;
  real_T t137;
  real_T t138;
  real_T t144;
  real_T t180;
  real_T t188;
  real_T t213;
  real_T t214;
  real_T t23;
  real_T t35;
  real_T t41;
  real_T t50;
  real_T t62;
  real_T t72;
  real_T t75;
  real_T t81;
  real_T t82;
  real_T t83;
  real_T t86;
  real_T t87;
  real_T t88;
  real_T t91;
  size_t t2;
  size_t t3;
  int32_T t0[259];
  int32_T b;
  U_idx_1 = t315->mU.mX[1];
  U_idx_4 = t315->mU.mX[4];
  U_idx_7 = t315->mU.mX[7];
  U_idx_9 = t315->mU.mX[9];
  U_idx_10 = t315->mU.mX[10];
  U_idx_11 = t315->mU.mX[11];
  for (b = 0; b < 480; b++) {
    X[b] = t315->mX.mX[b];
  }

  out = t316->mMODE;
  if (X[138ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[138ULL] >= 1.0 ? 1.0 : X[138ULL];
  }

  if (X[139ULL] <= 0.0) {
    t214 = 0.0;
  } else {
    t214 = X[139ULL] >= 1.0 ? 1.0 : X[139ULL];
  }

  intrm_sf_mf_17 = (((1.0 - t213) - t214) * 296.802103844292 + t213 * 461.523) +
    t214 * 4124.48151675695;
  if (X[21ULL] <= 0.0) {
    t214 = 0.0;
  } else {
    t214 = X[21ULL] >= 1.0 ? 1.0 : X[21ULL];
  }

  if (X[22ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[22ULL] >=
      1.0 ? 1.0 : X[22ULL];
  }

  intrm_sf_mf_29 = (((1.0 - t214) -
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp)
                    * 296.802103844292 + t214 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
    4124.48151675695;
  if (X[146ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI = X[146ULL] >=
      623.15 ? 623.15 : X[146ULL];
  }

  t188 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
    (((1074.1165326382541 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
       -0.2214565261064077) + t188 * 0.00037212980109010952) * ((1.0 - t214) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) +
     ((1479.6504774710445 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
       1.200211433705052) + t188 * -0.00038614513167842338) * t214) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI *
      6.9647057412830984) + t188 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  t127 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ -
    intrm_sf_mf_29;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ / (t127 ==
    0.0 ? 1.0E-16 : t127);
  if (X[150ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X[150ULL] >=
      623.15 ? 623.15 : X[150ULL];
  }

  t127 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_;
  t188 = (((1074.1165326382541 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
            -0.2214565261064077) + t127 * 0.00037212980109010952) * ((1.0 - t214)
           - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) +
          ((1479.6504774710445 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
            1.200211433705052) + t127 * -0.00038614513167842338) * t214) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
      6.9647057412830984) + t127 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  intrm_sf_mf_202 = t188 - intrm_sf_mf_29;
  t214 = t188 / (intrm_sf_mf_202 == 0.0 ? 1.0E-16 : intrm_sf_mf_202);
  if (X[144ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[144ULL] >=
      1.0 ? 1.0 : X[144ULL];
  }

  if (X[143ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X[143ULL] >=
      1.0 ? 1.0 : X[143ULL];
  }

  t188 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp)
           - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_) *
          296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
          461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
    4124.48151675695;
  if (X[125ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[125ULL] >=
      1.0 ? 1.0 : X[125ULL];
  }

  if (X[124ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X[124ULL] >=
      1.0 ? 1.0 : X[124ULL];
  }

  t127 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp)
           - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_) *
          296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
          461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ *
    4124.48151675695;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = U_idx_1 *
    0.031415926535897927;
  if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001 <=
      7.8539816339744857E-13) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
      7.8539816339744857E-13;
  } else if (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
             0.0001 >= 3.1415926535897929E-6) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
      3.1415926535897929E-6;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 0.0001;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ /
    7.8539816339744827E-5;
  if (X[168ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = X[168ULL] >=
      1.0 ? 1.0 : X[168ULL];
  }

  if (X[169ULL] <= 0.0) {
    intrm_sf_mf_202 = 0.0;
  } else {
    intrm_sf_mf_202 = X[169ULL] >= 1.0 ? 1.0 : X[169ULL];
  }

  intrm_sf_mf_173 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_)
                      - intrm_sf_mf_202) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_
                     * 461.523) + intrm_sf_mf_202 * 4124.48151675695;
  t72 = X[166ULL] * intrm_sf_mf_173;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = X[167ULL] / (X
    [142ULL] == 0.0 ? 1.0E-16 : X[142ULL]) * (X[170ULL] / (X[166ULL] == 0.0 ?
    1.0E-16 : X[166ULL]));
  t75 = X[167ULL] / 1.01325 * (X[171ULL] / (X[166ULL] == 0.0 ? 1.0E-16 : X
    [166ULL]));
  t213 = (X[142ULL] + 1.01325) / 2.0 * 0.0010000000000000009;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI = (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) * (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp);
  t180 = t213 * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI;
  intrm_sf_mf_269 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0) * (1.0
    - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t75) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0;
  intrm_sf_mf_341 = (X[142ULL] - 1.01325) * (intrm_sf_mf_269 >=
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI ?
    intrm_sf_mf_269 :
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI);
  intrm_sf_mf_269 = (X[142ULL] - 1.01325) / (t213 == 0.0 ? 1.0E-16 : t213);
  t81 = intrm_sf_mf_269 * intrm_sf_mf_269 * 3.0 - intrm_sf_mf_269 *
    intrm_sf_mf_269 * intrm_sf_mf_269 * 2.0;
  if (X[142ULL] - 1.01325 <= 0.0) {
    intrm_sf_mf_269 = t180;
  } else if (X[142ULL] - 1.01325 >= t213) {
    intrm_sf_mf_269 = intrm_sf_mf_341;
  } else {
    intrm_sf_mf_269 = (1.0 - t81) * t180 + intrm_sf_mf_341 * t81;
  }

  intrm_sf_mf_341 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp + 1.0) * (1.0
    - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t75) -
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = (1.01325 - X
    [142ULL]) * (intrm_sf_mf_341 >=
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI ?
                 intrm_sf_mf_341 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = (1.01325 - X
    [142ULL]) / (t213 == 0.0 ? 1.0E-16 : t213);
  t75 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI * 3.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI * 2.0;
  if (1.01325 - X[142ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = t180;
  } else if (1.01325 - X[142ULL] >= t213) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = (1.0 - t75) *
      t180 + Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp * t75;
  }

  if (X[142ULL] > 1.01325) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp =
      intrm_sf_mf_269;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp = X[142ULL] <
      1.01325 ? Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI :
      t180;
  }

  if (X[166ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = X[166ULL] >=
      623.15 ? 623.15 : X[166ULL];
  }

  t82 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI;
  t75 = (((1074.1165326382541 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
           -0.2214565261064077) + t82 * 0.00037212980109010952) * ((1.0 -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_) -
          intrm_sf_mf_202) + ((1479.6504774710445 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
           1.200211433705052) + t82 * -0.00038614513167842338) *
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
      6.9647057412830984) + t82 * -0.007052486824683288) * intrm_sf_mf_202;
  t83 = t75 - intrm_sf_mf_173;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ = t75 / (t83 ==
    0.0 ? 1.0E-16 : t83);
  if (X[14ULL] <= 0.0) {
    intrm_sf_mf_202 = 0.0;
  } else {
    intrm_sf_mf_202 = X[14ULL] >= 1.0 ? 1.0 : X[14ULL];
  }

  if (X[13ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = X[13ULL] >=
      1.0 ? 1.0 : X[13ULL];
  }

  t75 = (((1.0 - intrm_sf_mf_202) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) *
         296.802103844292 + intrm_sf_mf_202 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
    259.836612622973;
  if (X[178ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI = X[178ULL] >=
      623.15 ? 623.15 : X[178ULL];
  }

  t83 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI;
  t213 = (((1074.1165326382541 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI *
            -0.2214565261064077) + t83 * 0.00037212980109010952) * ((1.0 -
            intrm_sf_mf_202) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) +
          ((1479.6504774710445 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI *
            1.200211433705052) + t83 * -0.00038614513167842338) *
          intrm_sf_mf_202) + ((900.63941224837913 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI *
    -0.044484923911364271) + t83 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = t213 - t75;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI = t213 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15);
  if (X[181ULL] <= 216.59999999999997) {
    t213 = 216.59999999999997;
  } else {
    t213 = X[181ULL] >= 623.15 ? 623.15 : X[181ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = t213 * t213;
  t180 = (((1074.1165326382541 + t213 * -0.2214565261064077) +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
           0.00037212980109010952) * ((1.0 - intrm_sf_mf_202) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) +
          ((1479.6504774710445 + t213 * 1.200211433705052) +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
           -0.00038614513167842338) * intrm_sf_mf_202) + ((900.63941224837913 +
    t213 * -0.044484923911364271) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI;
  t23 = t180 - t75;
  intrm_sf_mf_202 = t180 / (t23 == 0.0 ? 1.0E-16 : t23);
  if (X[176ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = X[176ULL] >=
      1.0 ? 1.0 : X[176ULL];
  }

  if (X[175ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[175ULL] >= 1.0 ? 1.0 : X[175ULL];
  }

  t180 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI)
           - t213) * 296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI * 461.523)
    + t213 * 259.836612622973;
  if (X[82ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = X[82ULL] >=
      1.0 ? 1.0 : X[82ULL];
  }

  if (X[81ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[81ULL] >= 1.0 ? 1.0 : X[81ULL];
  }

  intrm_sf_mf_269 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI)
                      - t213) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI
                     * 461.523) + t213 * 259.836612622973;
  if (X[17ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = X[17ULL] >=
      1.0 ? 1.0 : X[17ULL];
  }

  if (X[16ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[16ULL] >= 1.0 ? 1.0 : X[16ULL];
  }

  intrm_sf_mf_341 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI)
                      - t213) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI
                     * 461.523) + t213 * 259.836612622973;
  if (X[199ULL] <= 216.59999999999997) {
    t81 = 216.59999999999997;
  } else {
    t81 = X[199ULL] >= 623.15 ? 623.15 : X[199ULL];
  }

  t23 = t81 * t81;
  t82 = (((1074.1165326382541 + t81 * -0.2214565261064077) + t23 *
          0.00037212980109010952) * ((1.0 -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) - t213)
         + ((1479.6504774710445 + t81 * 1.200211433705052) + t23 *
            -0.00038614513167842338) *
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) +
    ((900.63941224837913 + t81 * -0.044484923911364271) + t23 *
     0.00036936011832043369) * t213;
  t86 = t82 - intrm_sf_mf_341;
  t81 = t82 / (t86 == 0.0 ? 1.0E-16 : t86);
  if (X[202ULL] <= 216.59999999999997) {
    t82 = 216.59999999999997;
  } else {
    t82 = X[202ULL] >= 623.15 ? 623.15 : X[202ULL];
  }

  t86 = t82 * t82;
  t83 = (((1074.1165326382541 + t82 * -0.2214565261064077) + t86 *
          0.00037212980109010952) * ((1.0 -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) - t213)
         + ((1479.6504774710445 + t82 * 1.200211433705052) + t86 *
            -0.00038614513167842338) *
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI) +
    ((900.63941224837913 + t82 * -0.044484923911364271) + t86 *
     0.00036936011832043369) * t213;
  t87 = t83 - intrm_sf_mf_341;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI = t83 / (t87 ==
    0.0 ? 1.0E-16 : t87);
  if (X[198ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[198ULL] >= 1.0 ? 1.0 : X[198ULL];
  }

  if (X[197ULL] <= 0.0) {
    t82 = 0.0;
  } else {
    t82 = X[197ULL] >= 1.0 ? 1.0 : X[197ULL];
  }

  t83 = (((1.0 - t213) - t82) * 296.802103844292 + t213 * 461.523) + t82 *
    259.836612622973;
  if (X[35ULL] <= 0.0) {
    t82 = 0.0;
  } else {
    t82 = X[35ULL] >= 1.0 ? 1.0 : X[35ULL];
  }

  if (X[34ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[34ULL] >=
      1.0 ? 1.0 : X[34ULL];
  }

  t23 = (((1.0 - t82) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) *
         296.802103844292 + t82 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[283ULL] <= 0.0) {
    t82 = 0.0;
  } else {
    t82 = X[283ULL] >= 1.0 ? 1.0 : X[283ULL];
  }

  if (X[282ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[282ULL] >=
      1.0 ? 1.0 : X[282ULL];
  }

  t86 = (((1.0 - t82) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) *
         296.802103844292 + t82 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[39ULL] <= 0.0) {
    t82 = 0.0;
  } else {
    t82 = X[39ULL] >= 1.0 ? 1.0 : X[39ULL];
  }

  if (X[38ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[38ULL] >=
      1.0 ? 1.0 : X[38ULL];
  }

  t87 = (((1.0 - t82) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) *
         296.802103844292 + t82 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[42ULL] <= 0.0) {
    t82 = 0.0;
  } else {
    t82 = X[42ULL] >= 1.0 ? 1.0 : X[42ULL];
  }

  if (X[43ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = X[43ULL] >=
      1.0 ? 1.0 : X[43ULL];
  }

  intrm_sf_mf_666 = (((1.0 - t82) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
                     * 296.802103844292 + t82 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    4124.48151675695;
  if (X[303ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI = X[303ULL] >=
      623.15 ? 623.15 : X[303ULL];
  }

  intrm_sf_mf_701 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
    (((1074.1165326382541 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
       -0.2214565261064077) + intrm_sf_mf_701 * 0.00037212980109010952) * ((1.0
       - t82) - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
     + ((1479.6504774710445 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
         1.200211433705052) + intrm_sf_mf_701 * -0.00038614513167842338) * t82)
    + ((12825.281119790017 +
        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI *
        6.9647057412830984) + intrm_sf_mf_701 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  t88 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 -
    intrm_sf_mf_666;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 / (t88 ==
    0.0 ? 1.0E-16 : t88);
  if (X[307ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 = X[307ULL] >=
      623.15 ? 623.15 : X[307ULL];
  }

  t88 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25;
  intrm_sf_mf_701 = (((1074.1165326382541 +
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25
                       * -0.2214565261064077) + t88 * 0.00037212980109010952) *
                     ((1.0 - t82) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
                     + ((1479.6504774710445 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
    1.200211433705052) + t88 * -0.00038614513167842338) * t82) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 *
      6.9647057412830984) + t88 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  t213 = intrm_sf_mf_701 - intrm_sf_mf_666;
  t82 = intrm_sf_mf_701 / (t213 == 0.0 ? 1.0E-16 : t213);
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

  intrm_sf_mf_701 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
                      - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25)
                     * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15
                     * 461.523) +
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

  t88 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15)
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
    t213 = 0.0;
  } else {
    t213 = X[320ULL] >= 1.0 ? 1.0 : X[320ULL];
  }

  intrm_sf_mf_810 = (((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25)
                      - t213) * 296.802103844292 +
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25
                     * 461.523) + t213 * 4124.48151675695;
  t91 = X[317ULL] * intrm_sf_mf_810;
  intrm_sf_mf_899 = X[318ULL] / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL]) * (X
    [321ULL] / (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  intrm_sf_mf_841 = X[318ULL] / (X[300ULL] == 0.0 ? 1.0E-16 : X[300ULL]) * (X
    [322ULL] / (X[317ULL] == 0.0 ? 1.0E-16 : X[317ULL]));
  t100 = (X[37ULL] + X[300ULL]) / 2.0 * 0.0010000000000000009;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) * (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15);
  intrm_sf_mf_901 = t100 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  intrm_sf_mf_927 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
     intrm_sf_mf_899) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    intrm_sf_mf_841) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = (X[37ULL] - X
    [300ULL]) * (intrm_sf_mf_927 >=
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ?
                 intrm_sf_mf_927 :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI);
  intrm_sf_mf_927 = (X[37ULL] - X[300ULL]) / (t100 == 0.0 ? 1.0E-16 : t100);
  t144 = intrm_sf_mf_927 * intrm_sf_mf_927 * 3.0 - intrm_sf_mf_927 *
    intrm_sf_mf_927 * intrm_sf_mf_927 * 2.0;
  if (X[37ULL] - X[300ULL] <= 0.0) {
    intrm_sf_mf_927 = intrm_sf_mf_901;
  } else if (X[37ULL] - X[300ULL] >= t100) {
    intrm_sf_mf_927 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI;
  } else {
    intrm_sf_mf_927 = (1.0 - t144) * intrm_sf_mf_901 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * t144;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
     intrm_sf_mf_841) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
    intrm_sf_mf_899) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 = (X[300ULL] -
    X[37ULL]) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI >=
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI ?
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI :
                 Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI);
  intrm_sf_mf_899 = (X[300ULL] - X[37ULL]) / (t100 == 0.0 ? 1.0E-16 : t100);
  intrm_sf_mf_841 = intrm_sf_mf_899 * intrm_sf_mf_899 * 3.0 - intrm_sf_mf_899 *
    intrm_sf_mf_899 * intrm_sf_mf_899 * 2.0;
  if (X[300ULL] - X[37ULL] <= 0.0) {
    intrm_sf_mf_899 = intrm_sf_mf_901;
  } else if (X[300ULL] - X[37ULL] >= t100) {
    intrm_sf_mf_899 =
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15;
  } else {
    intrm_sf_mf_899 = (1.0 - intrm_sf_mf_841) * intrm_sf_mf_901 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 *
      intrm_sf_mf_841;
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

  t35 = intrm_sf_mf_899 * intrm_sf_mf_899;
  intrm_sf_mf_841 = (((1074.1165326382541 + intrm_sf_mf_899 *
                       -0.2214565261064077) + t35 * 0.00037212980109010952) *
                     ((1.0 -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25)
                      - t213) + ((1479.6504774710445 + intrm_sf_mf_899 *
    1.200211433705052) + t35 * -0.00038614513167842338) *
                     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25)
    + ((12825.281119790017 + intrm_sf_mf_899 * 6.9647057412830984) + t35 *
       -0.007052486824683288) * t213;
  t103 = intrm_sf_mf_841 - intrm_sf_mf_810;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 =
    intrm_sf_mf_841 / (t103 == 0.0 ? 1.0E-16 : t103);
  if (X[335ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[335ULL] >= 1.0 ? 1.0 : X[335ULL];
  }

  if (X[336ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[336ULL] >= 1.0 ? 1.0 : X[336ULL];
  }

  intrm_sf_mf_841 = (((1.0 - t213) - intrm_sf_mf_899) * 296.802103844292 + t213 *
                     461.523) + intrm_sf_mf_899 * 259.836612622973;
  if (X[348ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[348ULL] >= 1.0 ? 1.0 : X[348ULL];
  }

  if (X[347ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[347ULL] >=
      1.0 ? 1.0 : X[347ULL];
  }

  t100 = (((1.0 - intrm_sf_mf_899) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) *
          296.802103844292 + intrm_sf_mf_899 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    259.836612622973;
  if (X[47ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[47ULL] >= 1.0 ? 1.0 : X[47ULL];
  }

  if (X[46ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[46ULL] >= 1.0
      ? 1.0 : X[46ULL];
  }

  intrm_sf_mf_901 = (((1.0 - intrm_sf_mf_899) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI)
                     * 296.802103844292 + intrm_sf_mf_899 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    259.836612622973;
  if (X[50ULL] <= 0.0) {
    intrm_sf_mf_899 = 0.0;
  } else {
    intrm_sf_mf_899 = X[50ULL] >= 1.0 ? 1.0 : X[50ULL];
  }

  if (X[49ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[49ULL] >= 1.0
      ? 1.0 : X[49ULL];
  }

  intrm_sf_mf_927 = (((1.0 - intrm_sf_mf_899) -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI)
                     * 296.802103844292 + intrm_sf_mf_899 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI *
    4124.48151675695;
  if (X[382ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = X[382ULL] >=
      623.15 ? 623.15 : X[382ULL];
  }

  t103 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI;
  t144 = (((1074.1165326382541 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
            -0.2214565261064077) + t103 * 0.00037212980109010952) * ((1.0 -
            intrm_sf_mf_899) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) +
          ((1479.6504774710445 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
            1.200211433705052) + t103 * -0.00038614513167842338) *
          intrm_sf_mf_899) + ((12825.281119790017 +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI *
    6.9647057412830984) + t103 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  t41 = t144 - intrm_sf_mf_927;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI = t144 / (t41 ==
    0.0 ? 1.0E-16 : t41);
  if (X[385ULL] <= 216.59999999999997) {
    t144 = 216.59999999999997;
  } else {
    t144 = X[385ULL] >= 623.15 ? 623.15 : X[385ULL];
  }

  t41 = t144 * t144;
  t35 = (((1074.1165326382541 + t144 * -0.2214565261064077) + t41 *
          0.00037212980109010952) * ((1.0 - intrm_sf_mf_899) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) +
         ((1479.6504774710445 + t144 * 1.200211433705052) + t41 *
          -0.00038614513167842338) * intrm_sf_mf_899) + ((12825.281119790017 +
    t144 * 6.9647057412830984) + t41 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI;
  t105 = t35 - intrm_sf_mf_927;
  intrm_sf_mf_899 = t35 / (t105 == 0.0 ? 1.0E-16 : t105);
  if (X[374ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[374ULL] >=
      1.0 ? 1.0 : X[374ULL];
  }

  if (X[373ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[373ULL] >= 1.0 ? 1.0 : X[373ULL];
  }

  t35 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) -
          t144) * 296.802103844292 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 461.523) +
    t144 * 4124.48151675695;
  if (X[251ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[251ULL] >=
      1.0 ? 1.0 : X[251ULL];
  }

  if (X[250ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[250ULL] >= 1.0 ? 1.0 : X[250ULL];
  }

  t103 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) -
           t144) * 296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 461.523)
    + t144 * 4124.48151675695;
  if (X[8ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = X[8ULL] >= 1.0 ?
      1.0 : X[8ULL];
  }

  if (X[7ULL] <= 0.0) {
    t144 = 0.0;
  } else {
    t144 = X[7ULL] >= 1.0 ? 1.0 : X[7ULL];
  }

  t41 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) -
          t144) * 296.802103844292 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * 461.523) +
    t144 * 4124.48151675695;
  if (X[396ULL] <= 216.59999999999997) {
    t105 = 216.59999999999997;
  } else {
    t105 = X[396ULL] >= 623.15 ? 623.15 : X[396ULL];
  }

  t138 = t105 * t105;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
    (((1074.1165326382541 + t105 * -0.2214565261064077) + t138 *
      0.00037212980109010952) * ((1.0 -
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) - t144) +
     ((1479.6504774710445 + t105 * 1.200211433705052) + t138 *
      -0.00038614513167842338) *
     Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) +
    ((12825.281119790017 + t105 * 6.9647057412830984) + t138 *
     -0.007052486824683288) * t144;
  t106 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI - t41;
  t105 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI / (t106 ==
    0.0 ? 1.0E-16 : t106);
  if (X[399ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X[399ULL] >=
      623.15 ? 623.15 : X[399ULL];
  }

  t106 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  t138 = (((1074.1165326382541 +
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
            -0.2214565261064077) + t106 * 0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) - t144)
          + ((1479.6504774710445 +
              Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
              1.200211433705052) + t106 * -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI) +
    ((12825.281119790017 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
      6.9647057412830984) + t106 * -0.007052486824683288) * t144;
  t137 = t138 - t41;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI = t138 / (t137 ==
    0.0 ? 1.0E-16 : t137);
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

  t138 = (((1.0 - t144) -
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

  t106 = (((1.0 - t144) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) *
          296.802103844292 + t144 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI *
    4124.48151675695;
  if (X[410ULL] <= 216.59999999999997) {
    t137 = 216.59999999999997;
  } else {
    t137 = X[410ULL] >= 623.15 ? 623.15 : X[410ULL];
  }

  t50 = t137 * t137;
  t213 = (((1074.1165326382541 + t137 * -0.2214565261064077) + t50 *
           0.00037212980109010952) * ((1.0 - t144) -
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
          ((1479.6504774710445 + t137 * 1.200211433705052) + t50 *
           -0.00038614513167842338) * t144) + ((12825.281119790017 + t137 *
    6.9647057412830984) + t50 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  t108 = t213 - t106;
  t137 = t213 / (t108 == 0.0 ? 1.0E-16 : t108);
  if (X[412ULL] <= 216.59999999999997) {
    t213 = 216.59999999999997;
  } else {
    t213 = X[412ULL] >= 623.15 ? 623.15 : X[412ULL];
  }

  t108 = t213 * t213;
  t50 = (((1074.1165326382541 + t213 * -0.2214565261064077) + t108 *
          0.00037212980109010952) * ((1.0 - t144) -
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
         ((1479.6504774710445 + t213 * 1.200211433705052) + t108 *
          -0.00038614513167842338) * t144) + ((12825.281119790017 + t213 *
    6.9647057412830984) + t108 * -0.007052486824683288) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI;
  t109 = t50 - t106;
  t144 = t50 / (t109 == 0.0 ? 1.0E-16 : t109);
  if (X[56ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = X[56ULL] >= 1.0
      ? 1.0 : X[56ULL];
  }

  if (X[55ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[55ULL] >= 1.0 ? 1.0 : X[55ULL];
  }

  t50 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) -
          t213) * 296.802103844292 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI * 461.523) +
    t213 * 259.836612622973;
  if (X[427ULL] <= 216.59999999999997) {
    t108 = 216.59999999999997;
  } else {
    t108 = X[427ULL] >= 623.15 ? 623.15 : X[427ULL];
  }

  intrm_sf_mf_1374 = t108 * t108;
  t109 = (((1074.1165326382541 + t108 * -0.2214565261064077) + intrm_sf_mf_1374 *
           0.00037212980109010952) * ((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) - t213)
          + ((1479.6504774710445 + t108 * 1.200211433705052) + intrm_sf_mf_1374 *
             -0.00038614513167842338) *
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) +
    ((900.63941224837913 + t108 * -0.044484923911364271) + intrm_sf_mf_1374 *
     0.00036936011832043369) * t213;
  t110 = t109 - t50;
  t108 = t109 / (t110 == 0.0 ? 1.0E-16 : t110);
  if (X[429ULL] <= 216.59999999999997) {
    t109 = 216.59999999999997;
  } else {
    t109 = X[429ULL] >= 623.15 ? 623.15 : X[429ULL];
  }

  t110 = t109 * t109;
  intrm_sf_mf_1374 = (((1074.1165326382541 + t109 * -0.2214565261064077) + t110 *
                       0.00037212980109010952) * ((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI) - t213) +
                      ((1479.6504774710445 + t109 * 1.200211433705052) + t110 *
                       -0.00038614513167842338) *
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI)
    + ((900.63941224837913 + t109 * -0.044484923911364271) + t110 *
       0.00036936011832043369) * t213;
  t111 = intrm_sf_mf_1374 - t50;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI = intrm_sf_mf_1374 /
    (t111 == 0.0 ? 1.0E-16 : t111);
  if (X[351ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[351ULL] >= 1.0 ? 1.0 : X[351ULL];
  }

  if (X[350ULL] <= 0.0) {
    t109 = 0.0;
  } else {
    t109 = X[350ULL] >= 1.0 ? 1.0 : X[350ULL];
  }

  intrm_sf_mf_1374 = (((1.0 - t213) - t109) * 296.802103844292 + t213 * 461.523)
    + t109 * 259.836612622973;
  if (X[449ULL] <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = X[449ULL] >= 1.0 ? 1.0 : X[449ULL];
  }

  if (X[450ULL] <= 0.0) {
    t109 = 0.0;
  } else {
    t109 = X[450ULL] >= 1.0 ? 1.0 : X[450ULL];
  }

  t110 = (((1.0 - t213) - t109) * 296.802103844292 + t213 * 461.523) + t109 *
    259.836612622973;
  t109 = (X[453ULL] * 0.07812500122070315 + U_idx_10 * 10.0) -
    7.8125001220703152E-10;
  if (X[60ULL] <= 0.0) {
    t111 = 0.0;
  } else {
    t111 = X[60ULL] >= 1.0 ? 1.0 : X[60ULL];
  }

  if (X[61ULL] <= 0.0) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = 0.0;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 = X[61ULL] >=
      1.0 ? 1.0 : X[61ULL];
  }

  intrm_sf_mf_1488 = (((1.0 - t111) -
                       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19)
                      * 296.802103844292 + t111 * 461.523) +
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 *
    259.836612622973;
  if (X[456ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI = X[456ULL] >=
      623.15 ? 623.15 : X[456ULL];
  }

  t62 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
    (((1074.1165326382541 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
       -0.2214565261064077) + t62 * 0.00037212980109010952) * ((1.0 - t111) -
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19) +
     ((1479.6504774710445 +
       Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
       1.200211433705052) + t62 * -0.00038614513167842338) * t111) +
    ((900.63941224837913 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI *
      -0.044484923911364271) + t62 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19;
  t112 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 -
    intrm_sf_mf_1488;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI =
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 / (t112 ==
    0.0 ? 1.0E-16 : t112);
  if (X[460ULL] <= 216.59999999999997) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 =
      216.59999999999997;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = X[460ULL] >=
      623.15 ? 623.15 : X[460ULL];
  }

  t112 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6;
  t62 = (((1074.1165326382541 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
           -0.2214565261064077) + t112 * 0.00037212980109010952) * ((1.0 - t111)
          - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19) +
         ((1479.6504774710445 +
           Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
           1.200211433705052) + t112 * -0.00038614513167842338) * t111) +
    ((900.63941224837913 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
      -0.044484923911364271) + t112 * 0.00036936011832043369) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19;
  t113 = t62 - intrm_sf_mf_1488;
  t111 = t62 / (t113 == 0.0 ? 1.0E-16 : t113);
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

  t62 = (((1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19)
          - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6) *
         296.802103844292 +
         Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 *
         461.523) +
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
    t112 = 0.0;
  } else {
    t112 = X[473ULL] >= 1.0 ? 1.0 : X[473ULL];
  }

  t113 = (((1.0 -
            Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19) -
           t112) * 296.802103844292 +
          Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 *
          461.523) + t112 * 259.836612622973;
  t115 = X[470ULL] * t113;
  t134 = X[471ULL] / (t109 == 0.0 ? 1.0E-16 : t109) * (X[474ULL] / (X[470ULL] ==
    0.0 ? 1.0E-16 : X[470ULL]));
  intrm_sf_mf_1479 = X[471ULL] / 1.01325 * (X[475ULL] / (X[470ULL] == 0.0 ?
    1.0E-16 : X[470ULL]));
  t213 = (t109 + 1.01325) / 2.0 * 0.0010000000000000009;
  U_idx_1 = (1.0 -
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6);
  U_idx_4 = t213 * U_idx_1;
  U_idx_10 = (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 +
              1.0) * (1.0 -
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6
                      * t134) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
    intrm_sf_mf_1479) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 = (t109 -
    1.01325) * (U_idx_10 >= U_idx_1 ? U_idx_10 : U_idx_1);
  U_idx_10 = (t109 - 1.01325) / (t213 == 0.0 ? 1.0E-16 : t213);
  t123 = U_idx_10 * U_idx_10 * 3.0 - U_idx_10 * U_idx_10 * U_idx_10 * 2.0;
  if (t109 - 1.01325 <= 0.0) {
    U_idx_10 = U_idx_4;
  } else if (t109 - 1.01325 >= t213) {
    U_idx_10 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12;
  } else {
    U_idx_10 = (1.0 - t123) * U_idx_4 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 * t123;
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 =
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 + 1.0) *
    (1.0 - Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
     intrm_sf_mf_1479) - (1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 * t134) *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 * 2.0;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = (1.01325 -
    t109) * (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 >=
             U_idx_1 ?
             Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 :
             U_idx_1);
  t134 = (1.01325 - t109) / (t213 == 0.0 ? 1.0E-16 : t213);
  intrm_sf_mf_1479 = t134 * t134 * 3.0 - t134 * t134 * t134 * 2.0;
  if (1.01325 - t109 <= 0.0) {
    t134 = U_idx_4;
  } else if (1.01325 - t109 >= t213) {
    t134 = Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6;
  } else {
    t134 = (1.0 - intrm_sf_mf_1479) * U_idx_4 +
      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 *
      intrm_sf_mf_1479;
  }

  if (t109 > 1.01325) {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = U_idx_10;
  } else {
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6 = t109 <
      1.01325 ? t134 : U_idx_4;
  }

  if (X[470ULL] <= 216.59999999999997) {
    t134 = 216.59999999999997;
  } else {
    t134 = X[470ULL] >= 623.15 ? 623.15 : X[470ULL];
  }

  t213 = t134 * t134;
  intrm_sf_mf_1479 = (((1074.1165326382541 + t134 * -0.2214565261064077) + t213 *
                       0.00037212980109010952) * ((1.0 -
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19) - t112) +
                      ((1479.6504774710445 + t134 * 1.200211433705052) + t213 *
                       -0.00038614513167842338) *
                      Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19)
    + ((900.63941224837913 + t134 * -0.044484923911364271) + t213 *
       0.00036936011832043369) * t112;
  t213 = intrm_sf_mf_1479 - t113;
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19 =
    intrm_sf_mf_1479 / (t213 == 0.0 ? 1.0E-16 : t213);
  if (X[440ULL] <= 0.0) {
    t112 = 0.0;
  } else {
    t112 = X[440ULL] >= 1.0 ? 1.0 : X[440ULL];
  }

  if (X[439ULL] <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = X[439ULL] >= 1.0 ? 1.0 : X[439ULL];
  }

  intrm_sf_mf_1479 = (((1.0 - t112) - t134) * 296.802103844292 + t112 * 461.523)
    + t134 * 259.836612622973;
  if (U_idx_11 >= 1.0) {
    t112 = 1.0;
  } else {
    t112 = U_idx_11 <= 0.0 ? 0.0 : U_idx_11;
  }

  if (X[340ULL] <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = X[340ULL] >= 1.0 ? 1.0 : X[340ULL];
  }

  if (X[339ULL] <= 0.0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = X[339ULL] >= 1.0 ? 1.0 : X[339ULL];
  }

  t213 = (((1.0 - t134) - U_idx_1) * 296.802103844292 + t134 * 461.523) +
    U_idx_1 * 259.836612622973;
  if (X[129ULL] <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = X[129ULL] >= 1.0 ? 1.0 : X[129ULL];
  }

  if (X[128ULL] <= 0.0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = X[128ULL] >= 1.0 ? 1.0 : X[128ULL];
  }

  U_idx_4 = (((1.0 - t134) - U_idx_1) * 296.802103844292 + t134 * 461.523) +
    U_idx_1 * 4124.48151675695;
  if (X[254ULL] <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = X[254ULL] >= 1.0 ? 1.0 : X[254ULL];
  }

  if (X[253ULL] <= 0.0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = X[253ULL] >= 1.0 ? 1.0 : X[253ULL];
  }

  U_idx_10 = (((1.0 - t134) - U_idx_1) * 296.802103844292 + t134 * 461.523) +
    U_idx_1 * 4124.48151675695;
  if (X[286ULL] <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = X[286ULL] >= 1.0 ? 1.0 : X[286ULL];
  }

  if (X[285ULL] <= 0.0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = X[285ULL] >= 1.0 ? 1.0 : X[285ULL];
  }

  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 = (((1.0 -
    t134) - U_idx_1) * 296.802103844292 + t134 * 461.523) + U_idx_1 *
    4124.48151675695;
  if (X[326ULL] <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = X[326ULL] >= 1.0 ? 1.0 : X[326ULL];
  }

  if (X[325ULL] <= 0.0) {
    U_idx_1 = 0.0;
  } else {
    U_idx_1 = X[325ULL] >= 1.0 ? 1.0 : X[325ULL];
  }

  t123 = (((1.0 - t134) - U_idx_1) * 296.802103844292 + t134 * 461.523) +
    U_idx_1 * 259.836612622973;
  t1[0ULL] = pmf_get_inf();
  for (t2 = 0ULL; t2 < 42ULL; t2++) {
    t3 = t2 / 42ULL;
    t134 = t1[t3 > 0ULL ? 0ULL : t3];
    U_idx_1 = ((_NeDynamicSystem*)(LC))->mField0[t2] * 1.0E-5;
    t1[t3 > 0ULL ? 0ULL : t3] = t134 > U_idx_1 ? U_idx_1 : t134;
  }

  t0[0ULL] = (int32_T)(X[67ULL] <= 4.03416E-7);
  t0[1ULL] = (int32_T)(t1[0ULL] >= X[65ULL]);
  t0[2ULL] = (int32_T)(X[122ULL] * t127 / (X[123ULL] == 0.0 ? 1.0E-16 : X[123ULL])
                       >= 0.0);
  t0[3ULL] = (int32_T)(X[396ULL] * t41 / (X[397ULL] == 0.0 ? 1.0E-16 : X[397ULL])
                       >= 0.0);
  t0[4ULL] = (int32_T)(X[399ULL] * t41 / (X[400ULL] == 0.0 ? 1.0E-16 : X[400ULL])
                       >= 0.0);
  t0[5ULL] = (int32_T)(X[6ULL] * t41 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) >=
                       0.0);
  t0[6ULL] = (int32_T)(X[75ULL] * t138 / (X[76ULL] == 0.0 ? 1.0E-16 : X[76ULL]) >=
                       0.0);
  t0[7ULL] = (int32_T)(X[410ULL] * t137 * t106 >= 0.0);
  t0[8ULL] = (int32_T)(X[412ULL] * t144 * t106 >= 0.0);
  t137 = X[411ULL] * X[411ULL] * t137 / (t106 == 0.0 ? 1.0E-16 : t106);
  t0[9ULL] = (int32_T)(t137 / (X[410ULL] == 0.0 ? 1.0E-16 : X[410ULL]) >= 0.0);
  t144 = X[413ULL] * X[413ULL] * t144 / (t106 == 0.0 ? 1.0E-16 : t106);
  t0[10ULL] = (int32_T)(t144 / (X[412ULL] == 0.0 ? 1.0E-16 : X[412ULL]) >= 0.0);
  t0[11ULL] = (int32_T)(X[410ULL] * t106 / (X[411ULL] == 0.0 ? 1.0E-16 : X
    [411ULL]) >= 0.0);
  t0[12ULL] = (int32_T)(X[141ULL] * t188 / (X[142ULL] == 0.0 ? 1.0E-16 : X
    [142ULL]) >= 0.0);
  t0[13ULL] = (int32_T)(X[412ULL] * t106 / (X[413ULL] == 0.0 ? 1.0E-16 : X
    [413ULL]) >= 0.0);
  t0[14ULL] = (int32_T)(X[9ULL] * t106 / (X[53ULL] == 0.0 ? 1.0E-16 : X[53ULL]) >=
                        0.0);
  t0[15ULL] = (int32_T)(U_idx_9 <= 216.59999999999997);
  t0[16ULL] = (int32_T)(U_idx_9 >= 623.15);
  t0[17ULL] = (int32_T)(X[349ULL] * intrm_sf_mf_1374 / (X[44ULL] == 0.0 ?
    1.0E-16 : X[44ULL]) >= 0.0);
  t0[18ULL] = (int32_T)(X[173ULL] * t180 / (X[174ULL] == 0.0 ? 1.0E-16 : X
    [174ULL]) >= 0.0);
  t0[19ULL] = (int32_T)(X[427ULL] * t108 * t50 >= 0.0);
  t0[20ULL] = (int32_T)(X[429ULL] *
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
                        * t50 >= 0.0);
  t0[21ULL] = (int32_T)(X[428ULL] * X[428ULL] * t108 / (t50 == 0.0 ? 1.0E-16 :
    t50) / (X[427ULL] == 0.0 ? 1.0E-16 : X[427ULL]) >= 0.0);
  t0[22ULL] = (int32_T)(X[430ULL] * X[430ULL] *
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x8_Pipe_MA_gamma_BI
                        / (t50 == 0.0 ? 1.0E-16 : t50) / (X[429ULL] == 0.0 ?
    1.0E-16 : X[429ULL]) >= 0.0);
  t0[23ULL] = (int32_T)(X[146ULL] *
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI
                        * intrm_sf_mf_29 >= 0.0);
  t0[24ULL] = (int32_T)(X[427ULL] * t50 / (X[428ULL] == 0.0 ? 1.0E-16 : X[428ULL])
                        >= 0.0);
  t0[25ULL] = (int32_T)(X[429ULL] * t50 / (X[430ULL] == 0.0 ? 1.0E-16 : X[430ULL])
                        >= 0.0);
  t0[26ULL] = (int32_T)(X[54ULL] * t50 / (X[57ULL] == 0.0 ? 1.0E-16 : X[57ULL]) >=
                        0.0);
  t0[27ULL] = (int32_T)(X[438ULL] * intrm_sf_mf_1479 / 1.01325 >= 0.0);
  t0[28ULL] = (int32_T)(t110 * 293.15 / 1.01325 >= 0.0);
  t0[29ULL] = (int32_T)(X[195ULL] * t83 / (X[196ULL] == 0.0 ? 1.0E-16 : X[196ULL])
                        >= 0.0);
  t0[30ULL] = (int32_T)(X[452ULL] * t62 / (t109 == 0.0 ? 1.0E-16 : t109) >= 0.0);
  t0[31ULL] = (int32_T)(X[456ULL] *
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI
                        * intrm_sf_mf_1488 >= 0.0);
  t0[32ULL] = (int32_T)(X[460ULL] * t111 * intrm_sf_mf_1488 >= 0.0);
  t0[33ULL] = (int32_T)(X[457ULL] * X[457ULL] *
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pipe_MA_gamma_AI
                        / (intrm_sf_mf_1488 == 0.0 ? 1.0E-16 : intrm_sf_mf_1488)
                        / (X[456ULL] == 0.0 ? 1.0E-16 : X[456ULL]) >= 0.0);
  t0[34ULL] = (int32_T)(X[150ULL] * t214 * intrm_sf_mf_29 >= 0.0);
  t0[35ULL] = (int32_T)(X[461ULL] * X[461ULL] * t111 / (intrm_sf_mf_1488 == 0.0 ?
    1.0E-16 : intrm_sf_mf_1488) / (X[460ULL] == 0.0 ? 1.0E-16 : X[460ULL]) >=
                        0.0);
  t0[36ULL] = (int32_T)(X[456ULL] * intrm_sf_mf_1488 / (X[457ULL] == 0.0 ?
    1.0E-16 : X[457ULL]) >= 0.0);
  t0[37ULL] = (int32_T)(X[460ULL] * intrm_sf_mf_1488 / (X[461ULL] == 0.0 ?
    1.0E-16 : X[461ULL]) >= 0.0);
  t0[38ULL] = (int32_T)(X[58ULL] * intrm_sf_mf_1488 / (X[59ULL] == 0.0 ? 1.0E-16
    : X[59ULL]) >= 0.0);
  t0[39ULL] = (int32_T)(X[471ULL] / (t115 == 0.0 ? 1.0E-16 : t115) * 2.0 /
                        (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6
    == 0.0 ? 1.0E-16 :
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val6) >= 0.0);
  t0[40ULL] = (int32_T)(X[471ULL] * X[471ULL] *
                        Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val19
                        / (t113 == 0.0 ? 1.0E-16 : t113) / (X[470ULL] == 0.0 ?
    1.0E-16 : X[470ULL]) >= 0.0);
  t0[41ULL] = (int32_T)(X[474ULL] * t113 / (t109 == 0.0 ? 1.0E-16 : t109) >= 0.0);
  t0[42ULL] = (int32_T)(X[475ULL] * t113 / 1.01325 >= 0.0);
  Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI = X[147ULL] * X
    [147ULL] * Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI /
    (intrm_sf_mf_29 == 0.0 ? 1.0E-16 : intrm_sf_mf_29);
  t0[43ULL] = (int32_T)
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Pipe_MA_gamma_AI / (X[146ULL] ==
      0.0 ? 1.0E-16 : X[146ULL]) >= 0.0);
  t0[44ULL] = (int32_T)(t115 / (X[471ULL] == 0.0 ? 1.0E-16 : X[471ULL]) >= 0.0);
  t0[45ULL] = (int32_T)(X[63ULL] > X[479ULL]);
  t0[46ULL] = (int32_T)(X[63ULL] < -X[479ULL]);
  t0[47ULL] = (int32_T)(X[67ULL] > 0.0);
  t0[48ULL] = (int32_T)(X[65ULL] >= 0.0);
  t0[49ULL] = (int32_T)(X[18ULL] > 0.0);
  t0[50ULL] = (int32_T)((1.0 - X[138ULL]) - X[139ULL] >= 0.0);
  t0[51ULL] = (int32_T)(X[123ULL] >= 0.01);
  t0[52ULL] = (int32_T)(X[123ULL] <= pmf_get_inf());
  t0[53ULL] = (int32_T)(X[122ULL] >= 216.59999999999997);
  t214 = X[151ULL] * X[151ULL] * t214 / (intrm_sf_mf_29 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_29);
  t0[54ULL] = (int32_T)(t214 / (X[150ULL] == 0.0 ? 1.0E-16 : X[150ULL]) >= 0.0);
  t0[55ULL] = (int32_T)(X[122ULL] <= 623.15);
  t0[56ULL] = (int32_T)(X[142ULL] >= 0.01);
  t0[57ULL] = (int32_T)(X[142ULL] <= pmf_get_inf());
  t0[58ULL] = (int32_T)(X[141ULL] >= 216.59999999999997);
  t0[59ULL] = (int32_T)(X[141ULL] <= 623.15);
  t0[60ULL] = (int32_T)(X[20ULL] >= 0.01);
  t0[61ULL] = (int32_T)(X[20ULL] <= pmf_get_inf());
  t0[62ULL] = (int32_T)(X[19ULL] >= 216.59999999999997);
  t0[63ULL] = (int32_T)(X[19ULL] <= 623.15);
  t0[64ULL] = (int32_T)(X[127ULL] >= 216.59999999999997);
  t0[65ULL] = (int32_T)(X[146ULL] * intrm_sf_mf_29 / (X[147ULL] == 0.0 ? 1.0E-16
    : X[147ULL]) >= 0.0);
  t0[66ULL] = (int32_T)(X[127ULL] <= 623.15);
  t0[67ULL] = (int32_T)(X[174ULL] >= 0.01);
  t0[68ULL] = (int32_T)(X[174ULL] <= pmf_get_inf());
  t0[69ULL] = (int32_T)(X[173ULL] >= 216.59999999999997);
  t0[70ULL] = (int32_T)(X[173ULL] <= 623.15);
  t0[71ULL] = (int32_T)(X[80ULL] >= 0.01);
  t0[72ULL] = (int32_T)(X[80ULL] <= pmf_get_inf());
  t0[73ULL] = (int32_T)(X[79ULL] >= 216.59999999999997);
  t0[74ULL] = (int32_T)(X[79ULL] <= 623.15);
  t0[75ULL] = (int32_T)(X[23ULL] >= 0.01);
  t0[76ULL] = (int32_T)(X[150ULL] * intrm_sf_mf_29 / (X[151ULL] == 0.0 ? 1.0E-16
    : X[151ULL]) >= 0.0);
  t0[77ULL] = (int32_T)(X[23ULL] <= pmf_get_inf());
  t0[78ULL] = (int32_T)(X[12ULL] >= 216.59999999999997);
  t0[79ULL] = (int32_T)(X[12ULL] <= 623.15);
  t0[80ULL] = (int32_T)(X[196ULL] >= 0.01);
  t0[81ULL] = (int32_T)(X[196ULL] <= pmf_get_inf());
  t0[82ULL] = (int32_T)(X[195ULL] >= 216.59999999999997);
  t0[83ULL] = (int32_T)(X[195ULL] <= 623.15);
  t0[84ULL] = (int32_T)(X[24ULL] >= 0.01);
  t0[85ULL] = (int32_T)(X[24ULL] <= pmf_get_inf());
  t0[86ULL] = (int32_T)(X[15ULL] >= 216.59999999999997);
  t0[87ULL] = (int32_T)(X[19ULL] * intrm_sf_mf_29 / (X[20ULL] == 0.0 ? 1.0E-16 :
    X[20ULL]) >= 0.0);
  t0[88ULL] = (int32_T)(X[15ULL] <= 623.15);
  t0[89ULL] = (int32_T)(X[25ULL] >= 273.16);
  t0[90ULL] = (int32_T)(X[25ULL] <= 363.16);
  t0[91ULL] = (int32_T)(X[26ULL] * 0.1 + 0.0001 > 1.0E-8);
  t0[92ULL] = (int32_T)(X[223ULL] >= 0.5);
  t0[93ULL] = (int32_T)(X[223ULL] <= 500.0);
  t0[94ULL] = (int32_T)(X[222ULL] >= 273.16);
  t0[95ULL] = (int32_T)(X[222ULL] <= 363.16);
  t0[96ULL] = (int32_T)(X[225ULL] >= 0.5);
  t0[97ULL] = (int32_T)(X[225ULL] <= 500.0);
  t0[98ULL] = (int32_T)(X[224ULL] >= 273.16);
  t0[99ULL] = (int32_T)(X[224ULL] <= 363.16);
  t0[100ULL] = (int32_T)(X[215ULL] >= 273.16);
  t0[101ULL] = (int32_T)(X[215ULL] <= 363.16);
  t0[102ULL] = (int32_T)(X[27ULL] >= 0.5);
  t0[103ULL] = (int32_T)(X[27ULL] <= 500.0);
  t0[104ULL] = (int32_T)(X[28ULL] >= 273.16);
  t0[105ULL] = (int32_T)(X[28ULL] <= 363.16);
  t0[106ULL] = (int32_T)(X[236ULL] >= 0.5);
  t0[107ULL] = (int32_T)(X[236ULL] <= 500.0);
  t0[108ULL] = (int32_T)(X[66ULL] >= 0.9);
  t0[109ULL] = (int32_T)(X[127ULL] * U_idx_4 / 1.01325 >= 0.0);
  t0[110ULL] = (int32_T)(X[235ULL] >= 273.16);
  t0[111ULL] = (int32_T)(X[235ULL] <= 363.16);
  t0[112ULL] = (int32_T)(X[29ULL] >= 0.5);
  t0[113ULL] = (int32_T)(X[29ULL] <= 500.0);
  t0[114ULL] = (int32_T)(X[30ULL] >= 273.16);
  t0[115ULL] = (int32_T)(X[30ULL] <= 363.16);
  t0[116ULL] = (int32_T)(X[31ULL] > 0.0);
  t0[117ULL] = (int32_T)(X[33ULL] >= 0.01);
  t0[118ULL] = (int32_T)(X[33ULL] <= pmf_get_inf());
  t0[119ULL] = (int32_T)(X[32ULL] >= 216.59999999999997);
  t0[120ULL] = (int32_T)(X[167ULL] / (t72 == 0.0 ? 1.0E-16 : t72) * 2.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_K_dp) >=
    0.0);
  t0[121ULL] = (int32_T)(X[32ULL] <= 623.15);
  t0[122ULL] = (int32_T)(X[252ULL] >= 216.59999999999997);
  t0[123ULL] = (int32_T)(X[252ULL] <= 623.15);
  t0[124ULL] = (int32_T)(X[37ULL] >= 0.01);
  t0[125ULL] = (int32_T)(X[37ULL] <= pmf_get_inf());
  t0[126ULL] = (int32_T)(X[36ULL] >= 216.59999999999997);
  t0[127ULL] = (int32_T)(X[36ULL] <= 623.15);
  t0[128ULL] = (int32_T)(X[300ULL] >= 0.01);
  t0[129ULL] = (int32_T)(X[300ULL] <= pmf_get_inf());
  t0[130ULL] = (int32_T)(X[299ULL] >= 216.59999999999997);
  t0[131ULL] = (int32_T)(X[167ULL] * X[167ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_purge_Purge_Valve_gamma_ /
    (intrm_sf_mf_173 == 0.0 ? 1.0E-16 : intrm_sf_mf_173) / (X[166ULL] == 0.0 ?
    1.0E-16 : X[166ULL]) >= 0.0);
  t0[132ULL] = (int32_T)(X[299ULL] <= 623.15);
  t0[133ULL] = (int32_T)(X[246ULL] >= 216.59999999999997);
  t0[134ULL] = (int32_T)(X[246ULL] <= 623.15);
  t0[135ULL] = (int32_T)(X[41ULL] >= 0.01);
  t0[136ULL] = (int32_T)(X[41ULL] <= pmf_get_inf());
  t0[137ULL] = (int32_T)(X[40ULL] >= 216.59999999999997);
  t0[138ULL] = (int32_T)(X[40ULL] <= 623.15);
  t0[139ULL] = (int32_T)(X[284ULL] >= 216.59999999999997);
  t0[140ULL] = (int32_T)(X[284ULL] <= 623.15);
  t0[141ULL] = (int32_T)((1.0 - X[335ULL]) - X[336ULL] >= 0.0);
  t0[142ULL] = (int32_T)(X[170ULL] * intrm_sf_mf_173 / (X[142ULL] == 0.0 ?
    1.0E-16 : X[142ULL]) >= 0.0);
  t0[143ULL] = (int32_T)(X[324ULL] >= 216.59999999999997);
  t0[144ULL] = (int32_T)(X[324ULL] <= 623.15);
  t0[145ULL] = (int32_T)(X[44ULL] >= 0.01);
  t0[146ULL] = (int32_T)(X[44ULL] <= pmf_get_inf());
  t0[147ULL] = (int32_T)(X[338ULL] >= 216.59999999999997);
  t0[148ULL] = (int32_T)(X[338ULL] <= 623.15);
  t0[149ULL] = (int32_T)(X[45ULL] >= 216.59999999999997);
  t0[150ULL] = (int32_T)(X[45ULL] <= 623.15);
  t0[151ULL] = (int32_T)(X[249ULL] >= 216.59999999999997);
  t0[152ULL] = (int32_T)(X[249ULL] <= 623.15);
  t0[153ULL] = (int32_T)(X[171ULL] * intrm_sf_mf_173 / 1.01325 >= 0.0);
  t0[154ULL] = (int32_T)(X[372ULL] >= 0.01);
  t0[155ULL] = (int32_T)(X[372ULL] <= pmf_get_inf());
  t0[156ULL] = (int32_T)(X[371ULL] >= 216.59999999999997);
  t0[157ULL] = (int32_T)(X[371ULL] <= 623.15);
  t0[158ULL] = (int32_T)(X[51ULL] >= 0.01);
  t0[159ULL] = (int32_T)(X[51ULL] <= pmf_get_inf());
  t0[160ULL] = (int32_T)(X[48ULL] >= 216.59999999999997);
  t0[161ULL] = (int32_T)(X[48ULL] <= 623.15);
  t0[162ULL] = (int32_T)(X[76ULL] >= 0.01);
  t0[163ULL] = (int32_T)(X[76ULL] <= pmf_get_inf());
  t0[164ULL] = (int32_T)(t72 / (X[167ULL] == 0.0 ? 1.0E-16 : X[167ULL]) >= 0.0);
  t0[165ULL] = (int32_T)(X[75ULL] >= 216.59999999999997);
  t0[166ULL] = (int32_T)(X[75ULL] <= 623.15);
  t0[167ULL] = (int32_T)(X[52ULL] >= 0.01);
  t0[168ULL] = (int32_T)(X[52ULL] <= pmf_get_inf());
  t0[169ULL] = (int32_T)(X[6ULL] >= 216.59999999999997);
  t0[170ULL] = (int32_T)(X[6ULL] <= 623.15);
  t0[171ULL] = (int32_T)(X[53ULL] >= 0.01);
  t0[172ULL] = (int32_T)(X[53ULL] <= pmf_get_inf());
  t0[173ULL] = (int32_T)(X[9ULL] >= 216.59999999999997);
  t0[174ULL] = (int32_T)(X[9ULL] <= 623.15);
  t0[175ULL] = (int32_T)(X[349ULL] >= 216.59999999999997);
  t0[176ULL] = (int32_T)(X[349ULL] <= 623.15);
  t0[177ULL] = (int32_T)(X[57ULL] >= 0.01);
  t0[178ULL] = (int32_T)(X[57ULL] <= pmf_get_inf());
  t0[179ULL] = (int32_T)(X[54ULL] >= 216.59999999999997);
  t0[180ULL] = (int32_T)(X[54ULL] <= 623.15);
  t0[181ULL] = (int32_T)((1.0 - X[449ULL]) - X[450ULL] >= 0.0);
  t0[182ULL] = (int32_T)(t109 >= 0.01);
  t0[183ULL] = (int32_T)(t109 <= pmf_get_inf());
  t0[184ULL] = (int32_T)(X[452ULL] >= 216.59999999999997);
  t0[185ULL] = (int32_T)(X[79ULL] * intrm_sf_mf_269 / (X[80ULL] == 0.0 ? 1.0E-16
    : X[80ULL]) >= 0.0);
  t0[186ULL] = (int32_T)(X[452ULL] <= 623.15);
  t0[187ULL] = (int32_T)(X[59ULL] >= 0.01);
  t0[188ULL] = (int32_T)(X[59ULL] <= pmf_get_inf());
  t0[189ULL] = (int32_T)(X[58ULL] >= 216.59999999999997);
  t0[190ULL] = (int32_T)(X[58ULL] <= 623.15);
  t0[191ULL] = (int32_T)(X[438ULL] >= 216.59999999999997);
  t0[192ULL] = (int32_T)(X[438ULL] <= 623.15);
  t0[193ULL] = (int32_T)(X[69ULL] > 0.0);
  t0[194ULL] = (int32_T)(X[178ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI * t75 >= 0.0);
  t0[195ULL] = (int32_T)(X[181ULL] * intrm_sf_mf_202 * t75 >= 0.0);
  t0[196ULL] = (int32_T)(((X[4ULL] * -1.0E-6 + X[72ULL] * -1.0000000000000011) +
    X[73ULL] * -1.0E-6) + X[5ULL] > X[71ULL] + 0.8);
  t0[197ULL] = (int32_T)(X[179ULL] * X[179ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA_gamma_AI / (t75 == 0.0 ?
    1.0E-16 : t75) / (X[178ULL] == 0.0 ? 1.0E-16 : X[178ULL]) >= 0.0);
  t0[198ULL] = (int32_T)(X[182ULL] * X[182ULL] * intrm_sf_mf_202 / (t75 == 0.0 ?
    1.0E-16 : t75) / (X[181ULL] == 0.0 ? 1.0E-16 : X[181ULL]) >= 0.0);
  t0[199ULL] = (int32_T)(X[178ULL] * t75 / (X[179ULL] == 0.0 ? 1.0E-16 : X
    [179ULL]) >= 0.0);
  t0[200ULL] = (int32_T)(X[181ULL] * t75 / (X[182ULL] == 0.0 ? 1.0E-16 : X
    [182ULL]) >= 0.0);
  t0[201ULL] = (int32_T)(X[12ULL] * t75 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL])
    >= 0.0);
  t0[202ULL] = (int32_T)(X[199ULL] * t81 * intrm_sf_mf_341 >= 0.0);
  t0[203ULL] = (int32_T)(X[202ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI *
    intrm_sf_mf_341 >= 0.0);
  t0[204ULL] = (int32_T)(X[200ULL] * X[200ULL] * t81 / (intrm_sf_mf_341 == 0.0 ?
    1.0E-16 : intrm_sf_mf_341) / (X[199ULL] == 0.0 ? 1.0E-16 : X[199ULL]) >= 0.0);
  t0[205ULL] = (int32_T)(t112 == 1.0);
  t0[206ULL] = (int32_T)(X[203ULL] * X[203ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x10_Pipe_MA1_gamma_BI /
    (intrm_sf_mf_341 == 0.0 ? 1.0E-16 : intrm_sf_mf_341) / (X[202ULL] == 0.0 ?
    1.0E-16 : X[202ULL]) >= 0.0);
  t0[207ULL] = (int32_T)(X[199ULL] * intrm_sf_mf_341 / (X[200ULL] == 0.0 ?
    1.0E-16 : X[200ULL]) >= 0.0);
  t0[208ULL] = (int32_T)(X[202ULL] * intrm_sf_mf_341 / (X[203ULL] == 0.0 ?
    1.0E-16 : X[203ULL]) >= 0.0);
  t0[209ULL] = (int32_T)(X[15ULL] * intrm_sf_mf_341 / (X[24ULL] == 0.0 ? 1.0E-16
    : X[24ULL]) >= 0.0);
  t0[210ULL] = (int32_T)(X[246ULL] * t88 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])
    >= 0.0);
  t0[211ULL] = (int32_T)(X[252ULL] * U_idx_10 / (X[33ULL] == 0.0 ? 1.0E-16 : X
    [33ULL]) >= 0.0);
  t0[212ULL] = (int32_T)(X[249ULL] * t103 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])
    >= 0.0);
  t0[213ULL] = (int32_T)(X[32ULL] * t23 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])
    >= 0.0);
  t0[214ULL] = (int32_T)(X[18ULL] <= 216.59999999999997);
  t0[215ULL] = (int32_T)(X[280ULL] * t86 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])
    >= 0.0);
  t0[216ULL] = (int32_T)(X[277ULL] * t86 / (X[123ULL] == 0.0 ? 1.0E-16 : X
    [123ULL]) >= 0.0);
  t0[217ULL] = (int32_T)(X[279ULL] * t86 / (X[123ULL] == 0.0 ? 1.0E-16 : X
    [123ULL]) >= 0.0);
  t0[218ULL] = (int32_T)(X[278ULL] * t86 / (X[33ULL] == 0.0 ? 1.0E-16 : X[33ULL])
    >= 0.0);
  t0[219ULL] = (int32_T)(X[284ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x9_Pressure_Relief_Val12 / (X[37ULL] ==
    0.0 ? 1.0E-16 : X[37ULL]) >= 0.0);
  t0[220ULL] = (int32_T)(X[36ULL] * t87 / (X[37ULL] == 0.0 ? 1.0E-16 : X[37ULL])
    >= 0.0);
  t0[221ULL] = (int32_T)(X[299ULL] * intrm_sf_mf_701 / (X[300ULL] == 0.0 ?
    1.0E-16 : X[300ULL]) >= 0.0);
  t0[222ULL] = (int32_T)(X[303ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI * intrm_sf_mf_666
    >= 0.0);
  t0[223ULL] = (int32_T)(X[307ULL] * t82 * intrm_sf_mf_666 >= 0.0);
  t0[224ULL] = (int32_T)(X[18ULL] >= 623.15);
  t0[225ULL] = (int32_T)(X[304ULL] * X[304ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pipe_MA_gamma_AI /
    (intrm_sf_mf_666 == 0.0 ? 1.0E-16 : intrm_sf_mf_666) / (X[303ULL] == 0.0 ?
    1.0E-16 : X[303ULL]) >= 0.0);
  t0[226ULL] = (int32_T)(X[308ULL] * X[308ULL] * t82 / (intrm_sf_mf_666 == 0.0 ?
    1.0E-16 : intrm_sf_mf_666) / (X[307ULL] == 0.0 ? 1.0E-16 : X[307ULL]) >= 0.0);
  t0[227ULL] = (int32_T)(X[303ULL] * intrm_sf_mf_666 / (X[304ULL] == 0.0 ?
    1.0E-16 : X[304ULL]) >= 0.0);
  t0[228ULL] = (int32_T)(X[307ULL] * intrm_sf_mf_666 / (X[308ULL] == 0.0 ?
    1.0E-16 : X[308ULL]) >= 0.0);
  t0[229ULL] = (int32_T)(X[40ULL] * intrm_sf_mf_666 / (X[41ULL] == 0.0 ? 1.0E-16
    : X[41ULL]) >= 0.0);
  t0[230ULL] = (int32_T)(X[318ULL] / (t91 == 0.0 ? 1.0E-16 : t91) * 2.0 /
    (Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15 == 0.0 ?
     1.0E-16 : Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V15) >=
    0.0);
  t0[231ULL] = (int32_T)(X[318ULL] * X[318ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x4_Pressure_Reducing_V25 /
    (intrm_sf_mf_810 == 0.0 ? 1.0E-16 : intrm_sf_mf_810) / (X[317ULL] == 0.0 ?
    1.0E-16 : X[317ULL]) >= 0.0);
  t0[232ULL] = (int32_T)(X[321ULL] * intrm_sf_mf_810 / (X[37ULL] == 0.0 ?
    1.0E-16 : X[37ULL]) >= 0.0);
  t0[233ULL] = (int32_T)(X[111ULL] > 0.6);
  t0[234ULL] = (int32_T)(X[322ULL] * intrm_sf_mf_810 / (X[300ULL] == 0.0 ?
    1.0E-16 : X[300ULL]) >= 0.0);
  t0[235ULL] = (int32_T)(t91 / (X[318ULL] == 0.0 ? 1.0E-16 : X[318ULL]) >= 0.0);
  t0[236ULL] = (int32_T)(X[324ULL] * t123 / 1.01325 >= 0.0);
  t0[237ULL] = (int32_T)(intrm_sf_mf_841 * 293.15 / 1.01325 >= 0.0);
  t0[238ULL] = (int32_T)(X[338ULL] * t213 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])
    >= 0.0);
  t0[239ULL] = (int32_T)(X[345ULL] * t100 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])
    >= 0.0);
  t0[240ULL] = (int32_T)(X[342ULL] * t100 / 1.01325 >= 0.0);
  t0[241ULL] = (int32_T)(X[344ULL] * t100 / 1.01325 >= 0.0);
  t0[242ULL] = (int32_T)(X[343ULL] * t100 / (X[44ULL] == 0.0 ? 1.0E-16 : X[44ULL])
    >= 0.0);
  t0[243ULL] = (int32_T)(X[45ULL] * intrm_sf_mf_901 / (X[44ULL] == 0.0 ? 1.0E-16
    : X[44ULL]) >= 0.0);
  t0[244ULL] = (int32_T)(U_idx_7 <= 216.59999999999997);
  t0[245ULL] = (int32_T)(U_idx_7 >= 623.15);
  t0[246ULL] = (int32_T)(X[371ULL] * t35 / (X[372ULL] == 0.0 ? 1.0E-16 : X
    [372ULL]) >= 0.0);
  t0[247ULL] = (int32_T)(X[382ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI * intrm_sf_mf_927
    >= 0.0);
  t0[248ULL] = (int32_T)(X[385ULL] * intrm_sf_mf_899 * intrm_sf_mf_927 >= 0.0);
  t0[249ULL] = (int32_T)(X[383ULL] * X[383ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x6_Pipe_MA_gamma_AI /
    (intrm_sf_mf_927 == 0.0 ? 1.0E-16 : intrm_sf_mf_927) / (X[382ULL] == 0.0 ?
    1.0E-16 : X[382ULL]) >= 0.0);
  t0[250ULL] = (int32_T)(intrm_sf_mf_17 * 293.15 / 1.01325 >= 0.0);
  t0[251ULL] = (int32_T)(X[386ULL] * X[386ULL] * intrm_sf_mf_899 /
    (intrm_sf_mf_927 == 0.0 ? 1.0E-16 : intrm_sf_mf_927) / (X[385ULL] == 0.0 ?
    1.0E-16 : X[385ULL]) >= 0.0);
  t0[252ULL] = (int32_T)(X[382ULL] * intrm_sf_mf_927 / (X[383ULL] == 0.0 ?
    1.0E-16 : X[383ULL]) >= 0.0);
  t0[253ULL] = (int32_T)(X[385ULL] * intrm_sf_mf_927 / (X[386ULL] == 0.0 ?
    1.0E-16 : X[386ULL]) >= 0.0);
  t0[254ULL] = (int32_T)(X[48ULL] * intrm_sf_mf_927 / (X[51ULL] == 0.0 ? 1.0E-16
    : X[51ULL]) >= 0.0);
  t0[255ULL] = (int32_T)(X[396ULL] * t105 * t41 >= 0.0);
  t0[256ULL] = (int32_T)(X[399ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI * t41 >= 0.0);
  t0[257ULL] = (int32_T)(X[397ULL] * X[397ULL] * t105 / (t41 == 0.0 ? 1.0E-16 :
    t41) / (X[396ULL] == 0.0 ? 1.0E-16 : X[396ULL]) >= 0.0);
  t0[258ULL] = (int32_T)(X[400ULL] * X[400ULL] *
    Fuel_Cell_Fuel_Cell_Simscape_Fuel_Cell_x7_Pipe_MA_gamma_BI / (t41 == 0.0 ?
    1.0E-16 : t41) / (X[399ULL] == 0.0 ? 1.0E-16 : X[399ULL]) >= 0.0);
  for (b = 0; b < 259; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t316;
  return 0;
}
