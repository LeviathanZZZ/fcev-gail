/*
 * norm_7x8GXtWF.c
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
#include "norm_7x8GXtWF.h"
#include <math.h>
#include "rt_nonfinite.h"

/* Function for MATLAB Function: '<S25>/Vehicle' */
real_T norm_7x8GXtWF(const real_T x[4])
{
  real_T y;
  int32_T j;
  boolean_T exitg1;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    real_T s;
    int32_T s_tmp;
    s_tmp = j << 1;
    s = fabs(x[s_tmp + 1]) + fabs(x[s_tmp]);
    if (rtIsNaN(s)) {
      y = (rtNaN);
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}
