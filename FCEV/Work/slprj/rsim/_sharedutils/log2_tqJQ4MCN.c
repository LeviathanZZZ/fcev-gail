/*
 * log2_tqJQ4MCN.c
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
#include "log2_tqJQ4MCN.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "rtGetInf.h"

/* Function for MATLAB Function: '<S25>/Vehicle' */
real_T log2_tqJQ4MCN(real_T x)
{
  real_T f;
  int32_T inte;
  if (x == 0.0) {
    f = (rtMinusInf);
  } else if ((!rtIsInf(x)) && (!rtIsNaN(x))) {
    real_T t;
    t = frexp(x, &inte);
    if (t == 0.5) {
      f = (real_T)inte - 1.0;
    } else if ((inte == 1) && (t < 0.75)) {
      f = log(2.0 * t) / 0.69314718055994529;
    } else {
      f = log(t) / 0.69314718055994529 + (real_T)inte;
    }
  } else {
    f = x;
  }

  return f;
}
