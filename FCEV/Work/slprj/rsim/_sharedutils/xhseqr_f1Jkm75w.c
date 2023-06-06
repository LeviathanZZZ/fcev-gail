/*
 * xhseqr_f1Jkm75w.c
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
#include "xhseqr_f1Jkm75w.h"
#include <math.h>
#include "rt_hypotd_snf.h"

/* Function for MATLAB Function: '<S25>/Vehicle' */
int32_T xhseqr_f1Jkm75w(real_T h[4], real_T z[4])
{
  int32_T i;
  int32_T info;
  info = 0;
  i = 1;
  while (i + 1 >= 1) {
    real_T aa;
    real_T ab;
    real_T ba;
    real_T htmp1;
    real_T htmp2;
    int32_T k;
    boolean_T exitg1;
    k = i + 1;
    exitg1 = false;
    while ((!exitg1) && (k > 1)) {
      htmp1 = fabs(h[1]);
      if (htmp1 <= 2.0041683600089728E-292) {
        exitg1 = true;
      } else {
        aa = fabs(h[3]);
        if (htmp1 <= (fabs(h[0]) + aa) * 2.2204460492503131E-16) {
          htmp1 = fabs(h[1]);
          htmp2 = fabs(h[2]);
          if (htmp1 > htmp2) {
            ab = htmp1;
            ba = htmp2;
          } else {
            ab = htmp2;
            ba = htmp1;
          }

          htmp1 = aa;
          htmp2 = fabs(h[0] - h[3]);
          if (aa > htmp2) {
            htmp1 = htmp2;
          } else {
            aa = htmp2;
          }

          htmp2 = aa + ab;
          if (ab / htmp2 * ba <= fmax(2.0041683600089728E-292, aa / htmp2 *
               htmp1 * 2.2204460492503131E-16)) {
            exitg1 = true;
          } else {
            k = 1;
          }
        } else {
          k = 1;
        }
      }
    }

    if (k > 1) {
      h[1] = 0.0;
    }

    if ((i + 1 != k) && (k == i)) {
      real_T b_bb;
      real_T p;
      int32_T aa_tmp;
      int32_T p_tmp;
      b_bb = h[0];
      aa_tmp = i << 1;
      aa = h[aa_tmp];
      htmp2 = h[i];
      p_tmp = aa_tmp + i;
      p = h[p_tmp];
      if (h[i] == 0.0) {
        htmp1 = 1.0;
        ab = 0.0;
      } else if (aa == 0.0) {
        htmp1 = 0.0;
        ab = 1.0;
        p = h[0];
        b_bb = h[p_tmp];
        aa = -h[i];
        htmp2 = 0.0;
      } else {
        ba = h[0] - p;
        if ((ba == 0.0) && ((aa < 0.0) != (h[i] < 0.0))) {
          htmp1 = 1.0;
          ab = 0.0;
        } else {
          real_T sab;
          int32_T count;
          int32_T tmp;
          p = 0.5 * ba;
          ab = fmax(fabs(h[aa_tmp]), fabs(h[i]));
          if (!(h[aa_tmp] < 0.0)) {
            count = 1;
          } else {
            count = -1;
          }

          if (!(h[i] < 0.0)) {
            tmp = 1;
          } else {
            tmp = -1;
          }

          sab = h[aa_tmp];
          aa = fmin(fabs(sab), fabs(h[i])) * (real_T)count * (real_T)tmp;
          htmp2 = fmax(fabs(p), ab);
          htmp1 = p / htmp2 * p + ab / htmp2 * aa;
          if (htmp1 >= 8.8817841970012523E-16) {
            real_T tau;
            htmp1 = sqrt(htmp2) * sqrt(htmp1);
            if (p < 0.0) {
              htmp1 = -htmp1;
            }

            htmp1 += p;
            ba = h[p_tmp];
            b_bb = ba + htmp1;
            p = ba - ab / htmp1 * aa;
            tau = rt_hypotd_snf(h[i], htmp1);
            htmp1 /= tau;
            ab = h[i] / tau;
            aa = sab - h[i];
            htmp2 = 0.0;
          } else {
            real_T tau;
            ab = sab + h[i];
            htmp2 = fmax(fabs(ba), fabs(ab));
            count = 0;
            while ((htmp2 >= 7.4428285367870146E+137) && (count <= 20)) {
              ab *= 1.3435752215134178E-138;
              ba *= 1.3435752215134178E-138;
              htmp2 = fmax(fabs(ba), fabs(ab));
              count++;
            }

            while ((htmp2 <= 1.3435752215134178E-138) && (count <= 20)) {
              ab *= 7.4428285367870146E+137;
              ba *= 7.4428285367870146E+137;
              htmp2 = fmax(fabs(ba), fabs(ab));
              count++;
            }

            tau = rt_hypotd_snf(ab, ba);
            htmp1 = sqrt((fabs(ab) / tau + 1.0) * 0.5);
            if (!(ab < 0.0)) {
              count = 1;
            } else {
              count = -1;
            }

            ab = -(0.5 * ba / (tau * htmp1)) * (real_T)count;
            ba = sab * ab + h[0] * htmp1;
            b_bb = sab * htmp1 + -h[0] * ab;
            aa = h[p_tmp];
            p = aa * ab + h[i] * htmp1;
            tau = aa * htmp1 + -h[i] * ab;
            aa = b_bb * htmp1 + tau * ab;
            htmp2 = -ba * ab + p * htmp1;
            ba = ((ba * htmp1 + p * ab) + (-b_bb * ab + tau * htmp1)) * 0.5;
            b_bb = ba;
            p = ba;
            if (htmp2 != 0.0) {
              if (aa != 0.0) {
                if ((aa < 0.0) == (htmp2 < 0.0)) {
                  real_T sac;
                  sab = sqrt(fabs(aa));
                  sac = sqrt(fabs(htmp2));
                  if (!(htmp2 < 0.0)) {
                    p = sab * sac;
                  } else {
                    p = -(sab * sac);
                  }

                  tau = 1.0 / sqrt(fabs(aa + htmp2));
                  b_bb = ba + p;
                  p = ba - p;
                  aa -= htmp2;
                  htmp2 = 0.0;
                  sab *= tau;
                  tau *= sac;
                  ba = htmp1 * sab - ab * tau;
                  ab = htmp1 * tau + ab * sab;
                  htmp1 = ba;
                }
              } else {
                aa = -htmp2;
                htmp2 = 0.0;
                ba = htmp1;
                htmp1 = -ab;
                ab = ba;
              }
            }
          }
        }
      }

      h[0] = b_bb;
      h[aa_tmp] = aa;
      h[i] = htmp2;
      h[p_tmp] = p;
      if (i + 1 < 2) {
        b_bb = htmp1 * h[2];
        ba = ab * h[2];
        h[2] = b_bb - ba;
        h[2] = b_bb + ba;
      }

      i = (i - 1) << 1;
      ba = htmp1 * z[i] + ab * z[2];
      z[2] = htmp1 * z[2] - ab * z[i];
      z[i] = ba;
      b_bb = z[i + 1];
      ba = b_bb * htmp1 + ab * z[3];
      z[3] = htmp1 * z[3] - b_bb * ab;
      z[i + 1] = ba;
    }

    i = k - 2;
  }

  return info;
}
