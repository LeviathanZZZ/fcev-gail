#include "rtwtypes.h"
#include "interp2_3pYtODK0.h"

real_T interp2_3pYtODK0(const real_T varargin_1[3], const real_T varargin_2[3],
  const real_T varargin_3[9], real_T varargin_4, real_T varargin_5)
{
  real_T Vq;
  real_T qx1;
  real_T rx;
  real_T ry;
  int32_T ix;
  int32_T iy;
  int32_T qx1_tmp;
  if ((varargin_4 >= varargin_1[0]) && (varargin_4 <= varargin_1[2]) &&
      (varargin_5 >= varargin_2[0]) && (varargin_5 <= varargin_2[2])) {
    ix = 0;
    if (varargin_4 >= varargin_1[1]) {
      ix = 1;
    }

    iy = 0;
    if (varargin_5 >= varargin_2[1]) {
      iy = 1;
    }

    if (varargin_4 == varargin_1[ix]) {
      qx1_tmp = 3 * ix + iy;
      qx1 = varargin_3[qx1_tmp];
      Vq = varargin_3[qx1_tmp + 1];
    } else {
      ry = varargin_1[ix + 1];
      if (ry == varargin_4) {
        qx1_tmp = (ix + 1) * 3 + iy;
        qx1 = varargin_3[qx1_tmp];
        Vq = varargin_3[qx1_tmp + 1];
      } else {
        rx = (varargin_4 - varargin_1[ix]) / (ry - varargin_1[ix]);
        qx1_tmp = 3 * ix + iy;
        ix = (ix + 1) * 3 + iy;
        ry = varargin_3[ix];
        qx1 = varargin_3[qx1_tmp];
        if (ry == qx1) {
          qx1 = varargin_3[qx1_tmp];
        } else {
          qx1 = (1.0 - rx) * qx1 + ry * rx;
        }

        Vq = varargin_3[qx1_tmp + 1];
        ry = varargin_3[ix + 1];
        if (!(ry == Vq)) {
          Vq = (1.0 - rx) * Vq + ry * rx;
        }
      }
    }

    if ((varargin_5 == varargin_2[iy]) || (qx1 == Vq)) {
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

  return Vq;
}
