#include "rtwtypes.h"
#include "interp1_1jJu1mdf.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

real_T interp1_1jJu1mdf(const real_T varargin_1[6], const real_T varargin_2[6],
  real_T varargin_3)
{
  real_T x[6];
  real_T y[6];
  real_T Vq;
  real_T xtmp;
  int32_T exitg1;
  int32_T high_i;
  int32_T low_i;
  int32_T low_ip1;
  int32_T mid_i;
  for (high_i = 0; high_i < 6; high_i++) {
    y[high_i] = varargin_2[high_i];
    x[high_i] = varargin_1[high_i];
  }

  Vq = (rtNaN);
  high_i = 0;
  do {
    exitg1 = 0;
    if (high_i < 6) {
      if (muDoubleScalarIsNaN(varargin_1[high_i])) {
        exitg1 = 1;
      } else {
        high_i++;
      }
    } else {
      if (varargin_1[1] < varargin_1[0]) {
        xtmp = x[0];
        x[0] = x[5];
        x[5] = xtmp;
        xtmp = y[0];
        y[0] = y[5];
        y[5] = xtmp;
        xtmp = x[1];
        x[1] = x[4];
        x[4] = xtmp;
        xtmp = y[1];
        y[1] = y[4];
        y[4] = xtmp;
        xtmp = x[2];
        x[2] = x[3];
        x[3] = xtmp;
        xtmp = y[2];
        y[2] = y[3];
        y[3] = xtmp;
      }

      if ((!muDoubleScalarIsNaN(varargin_3)) && (!(varargin_3 > x[5])) &&
          (!(varargin_3 < x[0]))) {
        high_i = 6;
        low_i = 1;
        low_ip1 = 2;
        while (high_i > low_ip1) {
          mid_i = (low_i + high_i) >> 1;
          if (varargin_3 >= x[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i + 1;
          } else {
            high_i = mid_i;
          }
        }

        xtmp = x[low_i - 1];
        xtmp = (varargin_3 - xtmp) / (x[low_i] - xtmp);
        if (xtmp == 0.0) {
          Vq = y[low_i - 1];
        } else if (xtmp == 1.0) {
          Vq = y[low_i];
        } else {
          Vq = y[low_i - 1];
          if (!(Vq == y[low_i])) {
            Vq = (1.0 - xtmp) * Vq + xtmp * y[low_i];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Vq;
}
