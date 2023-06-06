/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: interp2_gQgEamix.c
 *
 * Code generated for Simulink model 'DrivetrainEv'.
 *
 * Model version                  : 7.6
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Mar 27 13:54:50 2023
 */

#include "rtwtypes.h"
#include "interp2_gQgEamix.h"

/* Function for MATLAB Function: '<S137>/Simple Magic Tire' */
real_T interp2_gQgEamix(const real_T varargin_1[3], const real_T varargin_2[3],
  const real_T varargin_3[9], real_T varargin_4, real_T varargin_5)
{
  real_T Vq;
  real_T qx1;
  real_T rx;
  real_T ry;
  int32_T ix;
  int32_T iy;
  int32_T tmp;
  if (varargin_4 >= varargin_1[0]) {
    if (varargin_4 <= varargin_1[2]) {
      if (varargin_5 >= varargin_2[0]) {
        if (varargin_5 <= varargin_2[2]) {
          ix = 0;
          if (varargin_4 >= varargin_1[1]) {
            ix = 1;
          }

          iy = 0;
          if (varargin_5 >= varargin_2[1]) {
            iy = 1;
          }

          if (varargin_4 == varargin_1[ix]) {
            ix = 3 * ix + iy;
            qx1 = varargin_3[ix];
            Vq = varargin_3[ix + 1];
          } else {
            ry = varargin_1[ix + 1];
            if (ry == varargin_4) {
              ix = (ix + 1) * 3 + iy;
              qx1 = varargin_3[ix];
              Vq = varargin_3[ix + 1];
            } else {
              rx = (varargin_4 - varargin_1[ix]) / (ry - varargin_1[ix]);
              ry = varargin_3[(ix + 1) * 3 + iy];
              tmp = 3 * ix + iy;
              qx1 = varargin_3[tmp];
              if (ry == qx1) {
                qx1 = varargin_3[tmp];
              } else {
                qx1 = (1.0 - rx) * qx1 + ry * rx;
              }

              ry = varargin_3[((ix + 1) * 3 + iy) + 1];
              tmp = (3 * ix + iy) + 1;
              if (ry == varargin_3[tmp]) {
                Vq = varargin_3[tmp];
              } else {
                Vq = (1.0 - rx) * varargin_3[tmp] + ry * rx;
              }
            }
          }

          if (varargin_5 == varargin_2[iy]) {
            Vq = qx1;
          } else if (qx1 == Vq) {
            Vq = qx1;
          } else {
            ry = varargin_2[iy + 1];
            if (!(ry == varargin_5)) {
              ry = (varargin_5 - varargin_2[iy]) / (ry - varargin_2[iy]);
              Vq = (1.0 - ry) * qx1 + ry * Vq;
            }
          }
        } else {
          Vq = 0.0;
        }
      } else {
        Vq = 0.0;
      }
    } else {
      Vq = 0.0;
    }
  } else {
    Vq = 0.0;
  }

  return Vq;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
