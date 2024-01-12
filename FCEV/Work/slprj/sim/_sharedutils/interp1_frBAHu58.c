#include "rtwtypes.h"
#include "interp1_frBAHu58.h"
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"

real_T interp1_frBAHu58(const real_T varargin_1[94], const real_T varargin_2[94],
  real_T varargin_3)
{
  real_T x[94];
  real_T y[94];
  real_T Vq;
  real_T xtmp;
  int32_T exitg1;
  int32_T i;
  int32_T low_i;
  int32_T low_ip1;
  int32_T mid_i;
  memcpy(&y[0], &varargin_2[0], 94U * sizeof(real_T));
  memcpy(&x[0], &varargin_1[0], 94U * sizeof(real_T));
  Vq = (rtNaN);
  i = 0;
  do {
    exitg1 = 0;
    if (i < 94) {
      if (muDoubleScalarIsNaN(varargin_1[i])) {
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      if (varargin_1[1] < varargin_1[0]) {
        for (i = 0; i < 47; i++) {
          xtmp = x[i];
          x[i] = x[93 - i];
          x[93 - i] = xtmp;
          xtmp = y[i];
          y[i] = y[93 - i];
          y[93 - i] = xtmp;
        }
      }

      if ((!muDoubleScalarIsNaN(varargin_3)) && (!(varargin_3 > x[93])) &&
          (!(varargin_3 < x[0]))) {
        i = 94;
        low_i = 1;
        low_ip1 = 2;
        while (i > low_ip1) {
          mid_i = (low_i + i) >> 1;
          if (varargin_3 >= x[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i + 1;
          } else {
            i = mid_i;
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
