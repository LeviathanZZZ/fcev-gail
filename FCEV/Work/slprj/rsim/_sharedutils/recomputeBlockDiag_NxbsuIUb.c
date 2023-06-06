/*
 * recomputeBlockDiag_NxbsuIUb.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "FCEvReferenceApplication".
 *
 * Model version              : 5.108
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Mon Mar 27 10:44:52 2023
 * Created for block: FCEvReferenceApplication
 */

#include "rtwtypes.h"
#include "recomputeBlockDiag_NxbsuIUb.h"
#include <math.h>

/* Function for MATLAB Function: '<S25>/Vehicle' */
void recomputeBlockDiag_NxbsuIUb(const real_T A[4], real_T F[4], int32_T
  blockFormat)
{
  if (blockFormat == 1) {
    real_T delta;
    real_T expa;
    real_T sinchdelta;
    delta = exp(A[0]);
    expa = exp(A[3]);
    sinchdelta = (A[0] + A[3]) / 2.0;
    if (fmax(sinchdelta, fabs(A[0] - A[3]) / 2.0) < 709.782712893384) {
      real_T x;
      x = (A[3] - A[0]) / 2.0;
      if (x == 0.0) {
        x = 1.0;
      } else {
        x = sinh(x) / x;
      }

      F[2] = A[2] * exp(sinchdelta) * x;
    } else {
      F[2] = (expa - delta) * A[2] / (A[3] - A[0]);
    }

    F[0] = delta;
    F[3] = expa;
  } else {
    real_T delta;
    real_T expa;
    real_T sinchdelta;
    delta = sqrt(fabs(A[1] * A[2]));
    expa = exp(A[0]);
    if (delta == 0.0) {
      sinchdelta = 1.0;
    } else {
      sinchdelta = sin(delta) / delta;
    }

    F[0] = expa * cos(delta);
    F[1] = expa * A[1] * sinchdelta;
    F[2] = expa * A[2] * sinchdelta;
    F[3] = F[0];
  }
}
