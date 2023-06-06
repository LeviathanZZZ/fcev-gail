/*
 * interp2_gQgEamix.c
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
#include "interp2_gQgEamix.h"

/* Function for MATLAB Function: '<S137>/Simple Magic Tire' */
real_T interp2_gQgEamix(const real_T varargin_1[3], const real_T varargin_2[3],
  const real_T varargin_3[9], real_T varargin_4, real_T varargin_5)
{
  real_T Vq;
  if ((varargin_4 >= varargin_1[0]) && (varargin_4 <= varargin_1[2]) &&
      (varargin_5 >= varargin_2[0]) && (varargin_5 <= varargin_2[2])) {
    real_T qx1;
    real_T rx;
    real_T tmp;
    int32_T ix;
    int32_T low_ip1;
    ix = 0;
    if (varargin_4 >= varargin_1[1]) {
      ix = 1;
    }

    low_ip1 = 0;
    if (varargin_5 >= varargin_2[1]) {
      low_ip1 = 1;
    }

    if (varargin_4 == varargin_1[ix]) {
      ix = 3 * ix + low_ip1;
      qx1 = varargin_3[ix];
      Vq = varargin_3[ix + 1];
    } else {
      tmp = varargin_1[ix + 1];
      if (tmp == varargin_4) {
        ix = (ix + 1) * 3 + low_ip1;
        qx1 = varargin_3[ix];
        Vq = varargin_3[ix + 1];
      } else {
        int32_T tmp_0;
        rx = (varargin_4 - varargin_1[ix]) / (tmp - varargin_1[ix]);
        tmp = varargin_3[(ix + 1) * 3 + low_ip1];
        tmp_0 = 3 * ix + low_ip1;
        qx1 = varargin_3[tmp_0];
        if (tmp == qx1) {
          qx1 = varargin_3[tmp_0];
        } else {
          qx1 = (1.0 - rx) * qx1 + tmp * rx;
        }

        tmp = varargin_3[((ix + 1) * 3 + low_ip1) + 1];
        tmp_0 = (3 * ix + low_ip1) + 1;
        if (tmp == varargin_3[tmp_0]) {
          Vq = varargin_3[tmp_0];
        } else {
          Vq = (1.0 - rx) * varargin_3[tmp_0] + tmp * rx;
        }
      }
    }

    if ((varargin_5 == varargin_2[low_ip1]) || (qx1 == Vq)) {
      Vq = qx1;
    } else {
      tmp = varargin_2[low_ip1 + 1];
      if (!(tmp == varargin_5)) {
        rx = (varargin_5 - varargin_2[low_ip1]) / (tmp - varargin_2[low_ip1]);
        Vq = (1.0 - rx) * qx1 + rx * Vq;
      }
    }
  } else {
    Vq = 0.0;
  }

  return Vq;
}
