/*
 * automldiffopen_RcYoMae5.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "DrivetrainEv".
 *
 * Model version              : 7.0
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Mon Mar 27 10:19:21 2023
 * Created for block: DrivetrainEv
 */

#include "rtwtypes.h"
#include "automldiffopen_RcYoMae5.h"
#include <emmintrin.h>

/* Function for MATLAB Function: '<S26>/Open Differential' */
void automldiffopen_RcYoMae5(const real_T u[3], real_T bw1, real_T bd, real_T
  bw2, real_T Ndiff, real_T shaftSwitch, real_T Jd, real_T Jw1, real_T Jw2,
  const real_T x[2], real_T y[3], real_T xdot[2])
{
  real_T diffDir_0[6];
  real_T diffDir_1[6];
  real_T invJ_0[6];
  real_T invJ[4];
  real_T invJ_1[4];
  real_T invJ_2[2];
  real_T invJ_3[2];
  real_T NbdTerm;
  real_T NbdTerm_tmp;
  real_T term1;
  real_T term2;
  int32_T diffDir;
  int32_T i;
  NbdTerm_tmp = Ndiff * Ndiff;
  NbdTerm = NbdTerm_tmp * bd / 4.0;
  if (shaftSwitch != 0.0) {
    diffDir = -1;
  } else {
    diffDir = 1;
  }

  term1 = NbdTerm_tmp * Jd;
  term2 = (4.0 * Jw1 * Jw2 + term1 * Jw1) + Jw2 * term1;
  invJ[0] = (Jw2 * 4.0 + term1) / term2;
  NbdTerm_tmp = -term1 / term2;
  invJ[2] = NbdTerm_tmp;
  invJ[1] = NbdTerm_tmp;
  invJ[3] = (Jw1 * 4.0 + term1) / term2;
  NbdTerm_tmp = (real_T)diffDir / 2.0 * Ndiff;
  diffDir_0[0] = NbdTerm_tmp;
  diffDir_0[2] = -1.0;
  diffDir_0[4] = 0.0;
  diffDir_0[1] = NbdTerm_tmp;
  diffDir_0[3] = 0.0;
  diffDir_0[5] = -1.0;
  term1 = -(bw1 + NbdTerm);
  term2 = -(NbdTerm + bw2);
  diffDir_1[0] = NbdTerm_tmp;
  diffDir_1[3] = NbdTerm_tmp;
  for (diffDir = 0; diffDir < 2; diffDir++) {
    for (i = 0; i < 3; i++) {
      int32_T invJ_tmp;
      int32_T invJ_tmp_tmp;
      invJ_tmp_tmp = i << 1;
      invJ_tmp = diffDir + invJ_tmp_tmp;
      invJ_0[invJ_tmp] = 0.0;
      invJ_0[invJ_tmp] += diffDir_0[invJ_tmp_tmp] * invJ[diffDir];
      invJ_0[invJ_tmp] += diffDir_0[invJ_tmp_tmp + 1] * invJ[diffDir + 2];
    }

    invJ_1[diffDir] = 0.0;
    invJ_1[diffDir] += invJ[diffDir] * term1;
    NbdTerm_tmp = invJ[diffDir + 2];
    invJ_1[diffDir] += NbdTerm_tmp * -NbdTerm;
    invJ_1[diffDir + 2] = 0.0;
    invJ_1[diffDir + 2] += invJ[diffDir] * -NbdTerm;
    invJ_1[diffDir + 2] += NbdTerm_tmp * term2;
    invJ_2[diffDir] = 0.0;
    invJ_2[diffDir] += invJ_0[diffDir] * u[0];
    invJ_2[diffDir] += invJ_0[diffDir + 2] * u[1];
    invJ_2[diffDir] += invJ_0[diffDir + 4] * u[2];
    invJ_3[diffDir] = 0.0;
    invJ_3[diffDir] += invJ_1[diffDir] * x[0];
    invJ_3[diffDir] += invJ_1[diffDir + 2] * x[1];
    xdot[diffDir] = invJ_2[diffDir] + invJ_3[diffDir];
    diffDir_1[3 * diffDir + 1] = (real_T)diffDir - 1.0;
    diffDir_1[3 * diffDir + 2] = 0.0 - (real_T)diffDir;
  }

  for (diffDir = 0; diffDir <= 0; diffDir += 2) {
    __m128d tmp;
    __m128d tmp_0;
    tmp = _mm_loadu_pd(&diffDir_1[diffDir]);
    tmp_0 = _mm_loadu_pd(&diffDir_1[diffDir + 3]);
    _mm_storeu_pd(&y[diffDir], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_0,
      _mm_set1_pd(x[1])), _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(x[0])),
      _mm_set1_pd(0.0))), _mm_set1_pd(0.0 * u[2] + (0.0 * u[1] + 0.0 * u[0]))));
  }

  for (diffDir = 2; diffDir < 3; diffDir++) {
    y[diffDir] = (diffDir_1[diffDir + 3] * x[1] + diffDir_1[diffDir] * x[0]) +
      ((0.0 * u[1] + 0.0 * u[0]) + 0.0 * u[2]);
  }
}
