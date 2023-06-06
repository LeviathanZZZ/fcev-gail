/*
 * FCEvReferenceApplication.c
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
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FCEvReferenceApplication.h"
#include "rtwtypes.h"
#include "FCEvReferenceApplication_private.h"
#include "rt_modd_snf.h"
#include <math.h>
#include "rt_powd_snf.h"
#include "rt_assert.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include "norm_7x8GXtWF.h"
#include "log2_tqJQ4MCN.h"
#include "recomputeBlockDiag_NxbsuIUb.h"
#include "xhseqr_f1Jkm75w.h"
#include "look1_pbinlcapw.h"
#include "FCEvPowertrainController.h"
#include "DrivetrainEv.h"
#include "FCElectricPlant.h"
#include "FCEvReferenceApplication_dt.h"

/* user code (top of parameter file) */
const int_T gblNumToFiles = 0;
const int_T gblNumFrFiles = 0;
const int_T gblNumFrWksBlocks = 0;
const char *gblSlvrJacPatternFileName =
  "FCEvReferenceApplication_rsim_rtw\\FCEvReferenceApplication_Jpattern.mat";

/* Root inports information  */
const int_T gblNumRootInportBlks = 1;
const int_T gblNumModelInputs = 1;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
const int_T gblInportDataTypeIdx[] = { 0 };

const int_T gblInportDims[] = { 1, 1 } ;

const int_T gblInportComplex[] = { 0 };

const int_T gblInportInterpoFlag[] = { 1 };

const int_T gblInportContinuous[] = { 0 };

#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<S39>/Shift Controller' */
#define FCEvReferenc_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define FCEvReferenceApplica_IN_Neutral ((uint8_T)1U)
#define FCEvReferenceApplica_IN_Reverse ((uint8_T)3U)
#define FCEvReferenceApplication_IN_Odd ((uint8_T)2U)

/* Block signals (default storage) */
B_FCEvReferenceApplication_T FCEvReferenceApplication_B;

/* Continuous states */
X_FCEvReferenceApplication_T FCEvReferenceApplication_X;

/* Block states (default storage) */
DW_FCEvReferenceApplication_T FCEvReferenceApplication_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FCEvReferenceApplication_T FCEvReferenceApplication_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FCEvReferenceApplication_T FCEvReferenceApplication_Y;

/* Periodic continuous states */
PeriodicIndX_FCEvReferenceApp_T FCEvReferenceAppli_PeriodicIndX;
PeriodicRngX_FCEvReferenceApp_T FCEvReferenceAppli_PeriodicRngX;

/* Mass Matrices */
MassMatrix_FCEvReferenceAppli_T FCEvReferenceApplica_MassMatrix;

/* Parent Simstruct */
static SimStruct model_S;
SimStruct *const rtS = &model_S;

/* Forward declaration for local functions */
static void FCEvReferenceApplication_mpower(const real_T a[4], real_T b, real_T
  c[4]);
static void FCEvReferenceApplicati_mpower_e(const real_T a[4], real_T b, real_T
  c[4]);
static void FCEvReferenceApplication_schur(const real_T A[4], real_T V[4],
  real_T T[4]);
static void FCEvReferenceApplication_expm(real_T A[4], real_T F[4]);

/*
 * System initialize for enable system:
 *    '<S32>/Pass Through'
 *    '<S34>/Pass Through'
 */
void FCEvReferenceA_PassThrough_Init(real_T rtp_IC,
  B_PassThrough_FCEvReferenceAp_T *localB)
{
  /* SystemInitialize for SignalConversion generated from: '<S33>/u' incorporates:
   *  Outport: '<S33>/y'
   */
  localB->u = rtp_IC;
}

/*
 * Disable for enable system:
 *    '<S32>/Pass Through'
 *    '<S34>/Pass Through'
 */
void FCEvReferen_PassThrough_Disable(DW_PassThrough_FCEvReferenceA_T *localDW)
{
  localDW->PassThrough_MODE = false;
}

/*
 * Start for enable system:
 *    '<S32>/Pass Through'
 *    '<S34>/Pass Through'
 */
void FCEvReference_PassThrough_Start(SimStruct * const rtS_0,
  DW_PassThrough_FCEvReferenceA_T *localDW)
{
  localDW->PassThrough_MODE = false;
  ssSetBlockStateForSolverChangedAtMajorStep(rtS_0);
}

/*
 * Output and update for enable system:
 *    '<S32>/Pass Through'
 *    '<S34>/Pass Through'
 */
void FCEvReferenceApplic_PassThrough(SimStruct * const rtS_2, boolean_T
  rtu_Enable, real_T rtu_u, B_PassThrough_FCEvReferenceAp_T *localB,
  DW_PassThrough_FCEvReferenceA_T *localDW)
{
  /* Outputs for Enabled SubSystem: '<S32>/Pass Through' incorporates:
   *  EnablePort: '<S33>/Enable'
   */
  if (ssIsSampleHit(rtS_2, 1, 0) && ssIsModeUpdateTimeStep(rtS_2)) {
    if (rtu_Enable) {
      if (!localDW->PassThrough_MODE) {
        if (ssGetTaskTime(rtS_2,1) != ssGetTStart(rtS_2)) {
          ssSetBlockStateForSolverChangedAtMajorStep(rtS_2);
        }

        localDW->PassThrough_MODE = true;
      }
    } else if (localDW->PassThrough_MODE) {
      ssSetBlockStateForSolverChangedAtMajorStep(rtS_2);
      FCEvReferen_PassThrough_Disable(localDW);
    }
  }

  if (localDW->PassThrough_MODE) {
    /* SignalConversion generated from: '<S33>/u' */
    localB->u = rtu_u;
  }

  /* End of Outputs for SubSystem: '<S32>/Pass Through' */
}

/* Function for MATLAB Function: '<S25>/Setup' */
static void FCEvReferenceApplication_mpower(const real_T a[4], real_T b, real_T
  c[4])
{
  real_T aBuffer[4];
  real_T b_a[4];
  real_T cBuffer[4];
  real_T cBuffer_0[4];
  real_T cBuffer_1[4];
  int32_T b_n;
  int32_T nbitson;
  if (b == b) {
    real_T y_tmp;
    int32_T n;
    int32_T nb;
    b_a[0] = a[0];
    b_a[1] = a[1];
    b_a[2] = a[2];
    b_a[3] = a[3];
    y_tmp = fabs(b);
    n = (int32_T)y_tmp;
    b_n = (int32_T)y_tmp;
    nbitson = 0;
    nb = -2;
    while (b_n > 0) {
      nb++;
      if (((uint32_T)b_n & 1U) != 0U) {
        nbitson++;
      }

      b_n >>= 1;
    }

    if ((int32_T)y_tmp <= 2) {
      if (b == 2.0) {
        for (b_n = 0; b_n < 2; b_n++) {
          real_T cBuffer_tmp;
          n = b_n << 1;
          c[n] = 0.0;
          y_tmp = a[n];
          c[n] += y_tmp * a[0];
          cBuffer_tmp = a[n + 1];
          c[n] += cBuffer_tmp * a[2];
          c[n + 1] = 0.0;
          c[n + 1] += y_tmp * a[1];
          c[n + 1] += cBuffer_tmp * a[3];
        }
      } else if (b == 1.0) {
        c[0] = a[0];
        c[1] = a[1];
        c[2] = a[2];
        c[3] = a[3];
      } else {
        boolean_T first;
        first = false;
        if (rtIsNaN(a[0]) || rtIsNaN(a[1])) {
          first = true;
        }

        if (first || rtIsNaN(a[2])) {
          first = true;
        }

        if (first || rtIsNaN(a[3])) {
          first = true;
        }

        if (first) {
          c[0] = (rtNaN);
          c[1] = (rtNaN);
          c[2] = (rtNaN);
          c[3] = (rtNaN);
        } else {
          c[1] = 0.0;
          c[2] = 0.0;
          c[0] = 1.0;
          c[3] = 1.0;
        }
      }
    } else {
      boolean_T aBufferInUse;
      boolean_T cBufferInUse;
      boolean_T first;
      first = true;
      aBufferInUse = false;
      cBufferInUse = (((uint32_T)nbitson & 1U) == 0U);
      for (nbitson = 0; nbitson <= nb; nbitson++) {
        __m128d tmp;
        __m128d tmp_0;
        __m128d tmp_1;
        if (((uint32_T)n & 1U) != 0U) {
          if (first) {
            first = false;
            if (cBufferInUse) {
              if (aBufferInUse) {
                cBuffer[0] = aBuffer[0];
                cBuffer[1] = aBuffer[1];
                cBuffer[2] = aBuffer[2];
                cBuffer[3] = aBuffer[3];
              } else {
                cBuffer[0] = b_a[0];
                cBuffer[1] = b_a[1];
                cBuffer[2] = b_a[2];
                cBuffer[3] = b_a[3];
              }
            } else if (aBufferInUse) {
              c[0] = aBuffer[0];
              c[1] = aBuffer[1];
              c[2] = aBuffer[2];
              c[3] = aBuffer[3];
            } else {
              c[0] = b_a[0];
              c[1] = b_a[1];
              c[2] = b_a[2];
              c[3] = b_a[3];
            }
          } else {
            if (aBufferInUse) {
              if (cBufferInUse) {
                for (b_n = 0; b_n <= 0; b_n += 2) {
                  tmp_1 = _mm_set1_pd(0.0);
                  _mm_storeu_pd(&c[b_n], tmp_1);
                  tmp = _mm_loadu_pd(&cBuffer[b_n]);
                  tmp_0 = _mm_loadu_pd(&c[b_n]);
                  _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                    (aBuffer[0])), tmp_0));
                  tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  tmp_0 = _mm_loadu_pd(&c[b_n]);
                  _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                    (aBuffer[1])), tmp_0));
                  _mm_storeu_pd(&c[b_n + 2], tmp_1);
                  tmp_1 = _mm_loadu_pd(&cBuffer[b_n]);
                  tmp = _mm_loadu_pd(&c[b_n + 2]);
                  _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
                    _mm_set1_pd(aBuffer[2]))));
                  tmp_1 = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  tmp = _mm_loadu_pd(&c[b_n + 2]);
                  _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                    _mm_set1_pd(aBuffer[3])), tmp));
                }
              } else {
                for (b_n = 0; b_n <= 0; b_n += 2) {
                  tmp_1 = _mm_set1_pd(0.0);
                  _mm_storeu_pd(&cBuffer[b_n], tmp_1);
                  tmp = _mm_loadu_pd(&c[b_n]);
                  tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                  _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                    _mm_set1_pd(aBuffer[0])), tmp_0));
                  tmp = _mm_loadu_pd(&c[b_n + 2]);
                  tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                  _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                    _mm_set1_pd(aBuffer[1])), tmp_0));
                  _mm_storeu_pd(&cBuffer[b_n + 2], tmp_1);
                  tmp_1 = _mm_loadu_pd(&c[b_n]);
                  tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd
                    (tmp_1, _mm_set1_pd(aBuffer[2]))));
                  tmp_1 = _mm_loadu_pd(&c[b_n + 2]);
                  tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                    _mm_set1_pd(aBuffer[3])), tmp));
                }
              }
            } else if (cBufferInUse) {
              for (b_n = 0; b_n <= 0; b_n += 2) {
                tmp_1 = _mm_set1_pd(0.0);
                _mm_storeu_pd(&c[b_n], tmp_1);
                tmp = _mm_loadu_pd(&cBuffer[b_n]);
                tmp_0 = _mm_loadu_pd(&c[b_n]);
                _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                  (b_a[0])), tmp_0));
                tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                tmp_0 = _mm_loadu_pd(&c[b_n]);
                _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                  (b_a[1])), tmp_0));
                _mm_storeu_pd(&c[b_n + 2], tmp_1);
                tmp_1 = _mm_loadu_pd(&cBuffer[b_n]);
                tmp = _mm_loadu_pd(&c[b_n + 2]);
                _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
                  _mm_set1_pd(b_a[2]))));
                tmp_1 = _mm_loadu_pd(&cBuffer[b_n + 2]);
                tmp = _mm_loadu_pd(&c[b_n + 2]);
                _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                  _mm_set1_pd(b_a[3])), tmp));
              }
            } else {
              for (b_n = 0; b_n <= 0; b_n += 2) {
                tmp_1 = _mm_set1_pd(0.0);
                _mm_storeu_pd(&cBuffer[b_n], tmp_1);
                tmp = _mm_loadu_pd(&c[b_n]);
                tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                  _mm_set1_pd(b_a[0])), tmp_0));
                tmp = _mm_loadu_pd(&c[b_n + 2]);
                tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                  _mm_set1_pd(b_a[1])), tmp_0));
                _mm_storeu_pd(&cBuffer[b_n + 2], tmp_1);
                tmp_1 = _mm_loadu_pd(&c[b_n]);
                tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd
                  (tmp_1, _mm_set1_pd(b_a[2]))));
                tmp_1 = _mm_loadu_pd(&c[b_n + 2]);
                tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                  _mm_set1_pd(b_a[3])), tmp));
              }
            }

            cBufferInUse = !cBufferInUse;
          }
        }

        n >>= 1;
        if (aBufferInUse) {
          for (b_n = 0; b_n <= 0; b_n += 2) {
            tmp_1 = _mm_set1_pd(0.0);
            _mm_storeu_pd(&b_a[b_n], tmp_1);
            tmp = _mm_loadu_pd(&aBuffer[b_n]);
            tmp_0 = _mm_loadu_pd(&b_a[b_n]);
            _mm_storeu_pd(&b_a[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (aBuffer[0])), tmp_0));
            tmp = _mm_loadu_pd(&aBuffer[b_n + 2]);
            tmp_0 = _mm_loadu_pd(&b_a[b_n]);
            _mm_storeu_pd(&b_a[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (aBuffer[1])), tmp_0));
            _mm_storeu_pd(&b_a[b_n + 2], tmp_1);
            tmp_1 = _mm_loadu_pd(&aBuffer[b_n]);
            tmp = _mm_loadu_pd(&b_a[b_n + 2]);
            _mm_storeu_pd(&b_a[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
              _mm_set1_pd(aBuffer[2]))));
            tmp_1 = _mm_loadu_pd(&aBuffer[b_n + 2]);
            tmp = _mm_loadu_pd(&b_a[b_n + 2]);
            _mm_storeu_pd(&b_a[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
              _mm_set1_pd(aBuffer[3])), tmp));
          }
        } else {
          for (b_n = 0; b_n <= 0; b_n += 2) {
            tmp_1 = _mm_set1_pd(0.0);
            _mm_storeu_pd(&aBuffer[b_n], tmp_1);
            tmp = _mm_loadu_pd(&b_a[b_n]);
            tmp_0 = _mm_loadu_pd(&aBuffer[b_n]);
            _mm_storeu_pd(&aBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (b_a[0])), tmp_0));
            tmp = _mm_loadu_pd(&b_a[b_n + 2]);
            tmp_0 = _mm_loadu_pd(&aBuffer[b_n]);
            _mm_storeu_pd(&aBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (b_a[1])), tmp_0));
            _mm_storeu_pd(&aBuffer[b_n + 2], tmp_1);
            tmp_1 = _mm_loadu_pd(&b_a[b_n]);
            tmp = _mm_loadu_pd(&aBuffer[b_n + 2]);
            _mm_storeu_pd(&aBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
              _mm_set1_pd(b_a[2]))));
            tmp_1 = _mm_loadu_pd(&b_a[b_n + 2]);
            tmp = _mm_loadu_pd(&aBuffer[b_n + 2]);
            _mm_storeu_pd(&aBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
              _mm_set1_pd(b_a[3])), tmp));
          }
        }

        aBufferInUse = !aBufferInUse;
      }

      for (b_n = 0; b_n < 2; b_n++) {
        real_T cBuffer_tmp;
        real_T cBuffer_tmp_0;
        real_T cBuffer_tmp_1;
        n = b_n << 1;
        cBuffer_0[n] = 0.0;
        cBuffer_1[n] = 0.0;
        y_tmp = aBuffer[n];
        cBuffer_0[n] += y_tmp * cBuffer[0];
        cBuffer_tmp = b_a[n];
        cBuffer_1[n] += cBuffer_tmp * cBuffer[0];
        cBuffer_tmp_0 = aBuffer[n + 1];
        cBuffer_0[n] += cBuffer_tmp_0 * cBuffer[2];
        cBuffer_tmp_1 = b_a[n + 1];
        cBuffer_1[n] += cBuffer_tmp_1 * cBuffer[2];
        cBuffer_0[n + 1] = 0.0;
        cBuffer_1[n + 1] = 0.0;
        cBuffer_0[n + 1] += y_tmp * cBuffer[1];
        cBuffer_1[n + 1] += cBuffer_tmp * cBuffer[1];
        cBuffer_0[n + 1] += cBuffer_tmp_0 * cBuffer[3];
        cBuffer_1[n + 1] += cBuffer_tmp_1 * cBuffer[3];
      }

      if (first) {
        if (aBufferInUse) {
          c[0] = aBuffer[0];
          c[1] = aBuffer[1];
          c[2] = aBuffer[2];
          c[3] = aBuffer[3];
        } else {
          c[0] = b_a[0];
          c[1] = b_a[1];
          c[2] = b_a[2];
          c[3] = b_a[3];
        }
      } else if (aBufferInUse) {
        c[0] = cBuffer_0[0];
        c[1] = cBuffer_0[1];
        c[2] = cBuffer_0[2];
        c[3] = cBuffer_0[3];
      } else {
        c[0] = cBuffer_1[0];
        c[1] = cBuffer_1[1];
        c[2] = cBuffer_1[2];
        c[3] = cBuffer_1[3];
      }
    }
  } else {
    c[0] = (rtNaN);
    c[1] = (rtNaN);
    c[2] = (rtNaN);
    c[3] = (rtNaN);
  }
}

/* Function for MATLAB Function: '<S25>/Vehicle' */
static void FCEvReferenceApplicati_mpower_e(const real_T a[4], real_T b, real_T
  c[4])
{
  real_T aBuffer[4];
  real_T b_a[4];
  real_T cBuffer[4];
  real_T cBuffer_0[4];
  real_T cBuffer_1[4];
  real_T e;
  int32_T b_n;
  int32_T nbitson;
  e = fabs(b);
  if (e <= 2.147483647E+9) {
    int32_T n;
    int32_T nb;
    b_a[0] = a[0];
    b_a[1] = a[1];
    b_a[2] = a[2];
    b_a[3] = a[3];
    n = (int32_T)e;
    b_n = (int32_T)e;
    nbitson = 0;
    nb = -2;
    while (b_n > 0) {
      nb++;
      if (((uint32_T)b_n & 1U) != 0U) {
        nbitson++;
      }

      b_n >>= 1;
    }

    if ((int32_T)e <= 2) {
      if (b == 2.0) {
        for (b_n = 0; b_n < 2; b_n++) {
          real_T ed2;
          n = b_n << 1;
          c[n] = 0.0;
          e = a[n];
          c[n] += e * a[0];
          ed2 = a[n + 1];
          c[n] += ed2 * a[2];
          c[n + 1] = 0.0;
          c[n + 1] += e * a[1];
          c[n + 1] += ed2 * a[3];
        }
      } else {
        boolean_T firstmult;
        firstmult = false;
        if (rtIsNaN(a[0]) || rtIsNaN(a[1])) {
          firstmult = true;
        }

        if (firstmult || rtIsNaN(a[2])) {
          firstmult = true;
        }

        if (firstmult || rtIsNaN(a[3])) {
          firstmult = true;
        }

        if (firstmult) {
          c[0] = (rtNaN);
          c[1] = (rtNaN);
          c[2] = (rtNaN);
          c[3] = (rtNaN);
        } else {
          c[1] = 0.0;
          c[2] = 0.0;
          c[0] = 1.0;
          c[3] = 1.0;
        }
      }
    } else {
      boolean_T aBufferInUse;
      boolean_T cBufferInUse;
      boolean_T firstmult;
      firstmult = true;
      aBufferInUse = false;
      cBufferInUse = (((uint32_T)nbitson & 1U) == 0U);
      for (nbitson = 0; nbitson <= nb; nbitson++) {
        __m128d tmp;
        __m128d tmp_0;
        __m128d tmp_1;
        if (((uint32_T)n & 1U) != 0U) {
          if (firstmult) {
            firstmult = false;
            if (cBufferInUse) {
              if (aBufferInUse) {
                cBuffer[0] = aBuffer[0];
                cBuffer[1] = aBuffer[1];
                cBuffer[2] = aBuffer[2];
                cBuffer[3] = aBuffer[3];
              } else {
                cBuffer[0] = b_a[0];
                cBuffer[1] = b_a[1];
                cBuffer[2] = b_a[2];
                cBuffer[3] = b_a[3];
              }
            } else if (aBufferInUse) {
              c[0] = aBuffer[0];
              c[1] = aBuffer[1];
              c[2] = aBuffer[2];
              c[3] = aBuffer[3];
            } else {
              c[0] = b_a[0];
              c[1] = b_a[1];
              c[2] = b_a[2];
              c[3] = b_a[3];
            }
          } else {
            if (aBufferInUse) {
              if (cBufferInUse) {
                for (b_n = 0; b_n <= 0; b_n += 2) {
                  tmp_1 = _mm_set1_pd(0.0);
                  _mm_storeu_pd(&c[b_n], tmp_1);
                  tmp = _mm_loadu_pd(&cBuffer[b_n]);
                  tmp_0 = _mm_loadu_pd(&c[b_n]);
                  _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                    (aBuffer[0])), tmp_0));
                  tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  tmp_0 = _mm_loadu_pd(&c[b_n]);
                  _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                    (aBuffer[1])), tmp_0));
                  _mm_storeu_pd(&c[b_n + 2], tmp_1);
                  tmp_1 = _mm_loadu_pd(&cBuffer[b_n]);
                  tmp = _mm_loadu_pd(&c[b_n + 2]);
                  _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
                    _mm_set1_pd(aBuffer[2]))));
                  tmp_1 = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  tmp = _mm_loadu_pd(&c[b_n + 2]);
                  _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                    _mm_set1_pd(aBuffer[3])), tmp));
                }
              } else {
                for (b_n = 0; b_n <= 0; b_n += 2) {
                  tmp_1 = _mm_set1_pd(0.0);
                  _mm_storeu_pd(&cBuffer[b_n], tmp_1);
                  tmp = _mm_loadu_pd(&c[b_n]);
                  tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                  _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                    _mm_set1_pd(aBuffer[0])), tmp_0));
                  tmp = _mm_loadu_pd(&c[b_n + 2]);
                  tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                  _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                    _mm_set1_pd(aBuffer[1])), tmp_0));
                  _mm_storeu_pd(&cBuffer[b_n + 2], tmp_1);
                  tmp_1 = _mm_loadu_pd(&c[b_n]);
                  tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd
                    (tmp_1, _mm_set1_pd(aBuffer[2]))));
                  tmp_1 = _mm_loadu_pd(&c[b_n + 2]);
                  tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                  _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                    _mm_set1_pd(aBuffer[3])), tmp));
                }
              }
            } else if (cBufferInUse) {
              for (b_n = 0; b_n <= 0; b_n += 2) {
                tmp_1 = _mm_set1_pd(0.0);
                _mm_storeu_pd(&c[b_n], tmp_1);
                tmp = _mm_loadu_pd(&cBuffer[b_n]);
                tmp_0 = _mm_loadu_pd(&c[b_n]);
                _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                  (b_a[0])), tmp_0));
                tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                tmp_0 = _mm_loadu_pd(&c[b_n]);
                _mm_storeu_pd(&c[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
                  (b_a[1])), tmp_0));
                _mm_storeu_pd(&c[b_n + 2], tmp_1);
                tmp_1 = _mm_loadu_pd(&cBuffer[b_n]);
                tmp = _mm_loadu_pd(&c[b_n + 2]);
                _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
                  _mm_set1_pd(b_a[2]))));
                tmp_1 = _mm_loadu_pd(&cBuffer[b_n + 2]);
                tmp = _mm_loadu_pd(&c[b_n + 2]);
                _mm_storeu_pd(&c[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                  _mm_set1_pd(b_a[3])), tmp));
              }
            } else {
              for (b_n = 0; b_n <= 0; b_n += 2) {
                tmp_1 = _mm_set1_pd(0.0);
                _mm_storeu_pd(&cBuffer[b_n], tmp_1);
                tmp = _mm_loadu_pd(&c[b_n]);
                tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                  _mm_set1_pd(b_a[0])), tmp_0));
                tmp = _mm_loadu_pd(&c[b_n + 2]);
                tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
                _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                  _mm_set1_pd(b_a[1])), tmp_0));
                _mm_storeu_pd(&cBuffer[b_n + 2], tmp_1);
                tmp_1 = _mm_loadu_pd(&c[b_n]);
                tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd
                  (tmp_1, _mm_set1_pd(b_a[2]))));
                tmp_1 = _mm_loadu_pd(&c[b_n + 2]);
                tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
                _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                  _mm_set1_pd(b_a[3])), tmp));
              }
            }

            cBufferInUse = !cBufferInUse;
          }
        }

        n >>= 1;
        if (aBufferInUse) {
          for (b_n = 0; b_n <= 0; b_n += 2) {
            tmp_1 = _mm_set1_pd(0.0);
            _mm_storeu_pd(&b_a[b_n], tmp_1);
            tmp = _mm_loadu_pd(&aBuffer[b_n]);
            tmp_0 = _mm_loadu_pd(&b_a[b_n]);
            _mm_storeu_pd(&b_a[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (aBuffer[0])), tmp_0));
            tmp = _mm_loadu_pd(&aBuffer[b_n + 2]);
            tmp_0 = _mm_loadu_pd(&b_a[b_n]);
            _mm_storeu_pd(&b_a[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (aBuffer[1])), tmp_0));
            _mm_storeu_pd(&b_a[b_n + 2], tmp_1);
            tmp_1 = _mm_loadu_pd(&aBuffer[b_n]);
            tmp = _mm_loadu_pd(&b_a[b_n + 2]);
            _mm_storeu_pd(&b_a[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
              _mm_set1_pd(aBuffer[2]))));
            tmp_1 = _mm_loadu_pd(&aBuffer[b_n + 2]);
            tmp = _mm_loadu_pd(&b_a[b_n + 2]);
            _mm_storeu_pd(&b_a[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
              _mm_set1_pd(aBuffer[3])), tmp));
          }
        } else {
          for (b_n = 0; b_n <= 0; b_n += 2) {
            tmp_1 = _mm_set1_pd(0.0);
            _mm_storeu_pd(&aBuffer[b_n], tmp_1);
            tmp = _mm_loadu_pd(&b_a[b_n]);
            tmp_0 = _mm_loadu_pd(&aBuffer[b_n]);
            _mm_storeu_pd(&aBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (b_a[0])), tmp_0));
            tmp = _mm_loadu_pd(&b_a[b_n + 2]);
            tmp_0 = _mm_loadu_pd(&aBuffer[b_n]);
            _mm_storeu_pd(&aBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (b_a[1])), tmp_0));
            _mm_storeu_pd(&aBuffer[b_n + 2], tmp_1);
            tmp_1 = _mm_loadu_pd(&b_a[b_n]);
            tmp = _mm_loadu_pd(&aBuffer[b_n + 2]);
            _mm_storeu_pd(&aBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
              _mm_set1_pd(b_a[2]))));
            tmp_1 = _mm_loadu_pd(&b_a[b_n + 2]);
            tmp = _mm_loadu_pd(&aBuffer[b_n + 2]);
            _mm_storeu_pd(&aBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
              _mm_set1_pd(b_a[3])), tmp));
          }
        }

        aBufferInUse = !aBufferInUse;
      }

      for (b_n = 0; b_n < 2; b_n++) {
        real_T cBuffer_tmp;
        real_T cBuffer_tmp_0;
        real_T ed2;
        n = b_n << 1;
        cBuffer_0[n] = 0.0;
        cBuffer_1[n] = 0.0;
        e = aBuffer[n];
        cBuffer_0[n] += e * cBuffer[0];
        ed2 = b_a[n];
        cBuffer_1[n] += ed2 * cBuffer[0];
        cBuffer_tmp = aBuffer[n + 1];
        cBuffer_0[n] += cBuffer_tmp * cBuffer[2];
        cBuffer_tmp_0 = b_a[n + 1];
        cBuffer_1[n] += cBuffer_tmp_0 * cBuffer[2];
        cBuffer_0[n + 1] = 0.0;
        cBuffer_1[n + 1] = 0.0;
        cBuffer_0[n + 1] += e * cBuffer[1];
        cBuffer_1[n + 1] += ed2 * cBuffer[1];
        cBuffer_0[n + 1] += cBuffer_tmp * cBuffer[3];
        cBuffer_1[n + 1] += cBuffer_tmp_0 * cBuffer[3];
      }

      if (firstmult) {
        if (aBufferInUse) {
          c[0] = aBuffer[0];
          c[1] = aBuffer[1];
          c[2] = aBuffer[2];
          c[3] = aBuffer[3];
        } else {
          c[0] = b_a[0];
          c[1] = b_a[1];
          c[2] = b_a[2];
          c[3] = b_a[3];
        }
      } else if (aBufferInUse) {
        c[0] = cBuffer_0[0];
        c[1] = cBuffer_0[1];
        c[2] = cBuffer_0[2];
        c[3] = cBuffer_0[3];
      } else {
        c[0] = cBuffer_1[0];
        c[1] = cBuffer_1[1];
        c[2] = cBuffer_1[2];
        c[3] = cBuffer_1[3];
      }
    }
  } else {
    b_a[0] = a[0];
    b_a[1] = a[1];
    b_a[2] = a[2];
    b_a[3] = a[3];
    if ((!rtIsInf(b)) && (!rtIsNaN(b))) {
      boolean_T firstmult;
      firstmult = true;
      real_T ed2;
      int32_T exitg1;
      do {
        __m128d tmp;
        __m128d tmp_0;
        __m128d tmp_1;
        exitg1 = 0;
        ed2 = floor(e / 2.0);
        if (2.0 * ed2 != e) {
          if (firstmult) {
            c[0] = b_a[0];
            c[1] = b_a[1];
            c[2] = b_a[2];
            c[3] = b_a[3];
            firstmult = false;
          } else {
            for (b_n = 0; b_n <= 0; b_n += 2) {
              tmp_1 = _mm_set1_pd(0.0);
              _mm_storeu_pd(&cBuffer[b_n], tmp_1);
              tmp = _mm_loadu_pd(&c[b_n]);
              tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
              _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                _mm_set1_pd(b_a[0])), tmp_0));
              tmp = _mm_loadu_pd(&c[b_n + 2]);
              tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
              _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp,
                _mm_set1_pd(b_a[1])), tmp_0));
              _mm_storeu_pd(&cBuffer[b_n + 2], tmp_1);
              tmp_1 = _mm_loadu_pd(&c[b_n]);
              tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
              _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
                _mm_set1_pd(b_a[2]))));
              tmp_1 = _mm_loadu_pd(&c[b_n + 2]);
              tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
              _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
                _mm_set1_pd(b_a[3])), tmp));
            }

            c[0] = cBuffer[0];
            c[1] = cBuffer[1];
            c[2] = cBuffer[2];
            c[3] = cBuffer[3];
          }
        }

        if (ed2 == 0.0) {
          exitg1 = 1;
        } else {
          e = ed2;
          for (b_n = 0; b_n <= 0; b_n += 2) {
            tmp_1 = _mm_set1_pd(0.0);
            _mm_storeu_pd(&cBuffer[b_n], tmp_1);
            tmp = _mm_loadu_pd(&b_a[b_n]);
            tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
            _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (b_a[0])), tmp_0));
            tmp = _mm_loadu_pd(&b_a[b_n + 2]);
            tmp_0 = _mm_loadu_pd(&cBuffer[b_n]);
            _mm_storeu_pd(&cBuffer[b_n], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
              (b_a[1])), tmp_0));
            _mm_storeu_pd(&cBuffer[b_n + 2], tmp_1);
            tmp_1 = _mm_loadu_pd(&b_a[b_n]);
            tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
            _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_1,
              _mm_set1_pd(b_a[2]))));
            tmp_1 = _mm_loadu_pd(&b_a[b_n + 2]);
            tmp = _mm_loadu_pd(&cBuffer[b_n + 2]);
            _mm_storeu_pd(&cBuffer[b_n + 2], _mm_add_pd(_mm_mul_pd(tmp_1,
              _mm_set1_pd(b_a[3])), tmp));
          }

          b_a[0] = cBuffer[0];
          b_a[1] = cBuffer[1];
          b_a[2] = cBuffer[2];
          b_a[3] = cBuffer[3];
        }
      } while (exitg1 == 0);
    } else {
      c[0] = (rtNaN);
      c[1] = (rtNaN);
      c[2] = (rtNaN);
      c[3] = (rtNaN);
    }
  }
}

/* Function for MATLAB Function: '<S25>/Vehicle' */
static void FCEvReferenceApplication_schur(const real_T A[4], real_T V[4],
  real_T T[4])
{
  boolean_T p;
  p = true;
  if (rtIsInf(A[0]) || rtIsNaN(A[0])) {
    p = false;
  }

  if (p && ((!rtIsInf(A[1])) && (!rtIsNaN(A[1])))) {
  } else {
    p = false;
  }

  if (p && ((!rtIsInf(A[2])) && (!rtIsNaN(A[2])))) {
  } else {
    p = false;
  }

  if (p && ((!rtIsInf(A[3])) && (!rtIsNaN(A[3])))) {
  } else {
    p = false;
  }

  if (!p) {
    V[0] = (rtNaN);
    V[2] = (rtNaN);
    V[3] = (rtNaN);
    V[1] = 0.0;
    T[0] = (rtNaN);
    T[1] = (rtNaN);
    T[2] = (rtNaN);
    T[3] = (rtNaN);
  } else {
    T[0] = A[0];
    T[2] = A[2];
    T[3] = A[3];
    T[1] = A[1];
    V[2] = 0.0;
    V[1] = 0.0;
    V[0] = 1.0;
    V[3] = 1.0;
    xhseqr_f1Jkm75w(T, V);
  }
}

/* Function for MATLAB Function: '<S25>/Vehicle' */
static void FCEvReferenceApplication_expm(real_T A[4], real_T F[4])
{
  real_T A2[4];
  real_T A4[4];
  real_T A6[4];
  real_T T[4];
  real_T U[4];
  real_T V[4];
  int32_T blockFormat;
  int32_T i;
  int32_T r2;
  boolean_T recomputeDiags;
  recomputeDiags = true;
  if (rtIsInf(A[0]) || rtIsNaN(A[0])) {
    recomputeDiags = false;
  }

  if (recomputeDiags && ((!rtIsInf(A[1])) && (!rtIsNaN(A[1])))) {
  } else {
    recomputeDiags = false;
  }

  if (recomputeDiags && ((!rtIsInf(A[2])) && (!rtIsNaN(A[2])))) {
  } else {
    recomputeDiags = false;
  }

  if (recomputeDiags && ((!rtIsInf(A[3])) && (!rtIsNaN(A[3])))) {
  } else {
    recomputeDiags = false;
  }

  if (!recomputeDiags) {
    F[0] = (rtNaN);
    F[1] = (rtNaN);
    F[2] = (rtNaN);
    F[3] = (rtNaN);
  } else {
    int32_T exitg1;
    int32_T r1;
    boolean_T exitg2;
    r1 = 0;
    exitg2 = false;
    while ((!exitg2) && (r1 < 2)) {
      r2 = 0;
      do {
        exitg1 = 0;
        if (r2 < 2) {
          if ((r2 != r1) && (!(A[(r1 << 1) + r2] == 0.0))) {
            recomputeDiags = false;
            exitg1 = 1;
          } else {
            r2++;
          }
        } else {
          r1++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    if (recomputeDiags) {
      F[1] = 0.0;
      F[2] = 0.0;
      F[0] = exp(A[0]);
      F[3] = exp(A[3]);
    } else {
      recomputeDiags = true;
      r1 = 0;
      exitg2 = false;
      while ((!exitg2) && (r1 < 2)) {
        r2 = 0;
        do {
          exitg1 = 0;
          if (r2 <= r1) {
            if (!(A[(r1 << 1) + r2] == A[(r2 << 1) + r1])) {
              recomputeDiags = false;
              exitg1 = 1;
            } else {
              r2++;
            }
          } else {
            r1++;
            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }

      if (recomputeDiags) {
        real_T exptj;
        FCEvReferenceApplication_schur(A, U, T);
        exptj = exp(T[0]);
        V[0] = U[0] * exptj;
        V[1] = U[1] * exptj;
        exptj = exp(T[3]);
        V[2] = U[2] * exptj;
        V[3] = U[3] * exptj;
        for (i = 0; i <= 0; i += 2) {
          __m128d tmp;
          __m128d tmp_4;
          __m128d tmp_5;
          tmp_4 = _mm_set1_pd(0.0);
          _mm_storeu_pd(&F[i], tmp_4);
          tmp = _mm_loadu_pd(&V[i]);
          tmp_5 = _mm_loadu_pd(&F[i]);
          _mm_storeu_pd(&F[i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(U[0])),
            tmp_5));
          tmp = _mm_loadu_pd(&V[i + 2]);
          tmp_5 = _mm_loadu_pd(&F[i]);
          _mm_storeu_pd(&F[i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(U[2])),
            tmp_5));
          _mm_storeu_pd(&F[i + 2], tmp_4);
          tmp_4 = _mm_loadu_pd(&V[i]);
          tmp = _mm_loadu_pd(&F[i + 2]);
          _mm_storeu_pd(&F[i + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_4, _mm_set1_pd
            (U[1]))));
          tmp_4 = _mm_loadu_pd(&V[i + 2]);
          tmp = _mm_loadu_pd(&F[i + 2]);
          _mm_storeu_pd(&F[i + 2], _mm_add_pd(_mm_mul_pd(tmp_4, _mm_set1_pd(U[3])),
            tmp));
        }

        exptj = (F[1] + F[2]) / 2.0;
        F[3] = (F[3] + F[3]) / 2.0;
        F[0] = (F[0] + F[0]) / 2.0;
        F[1] = exptj;
        F[2] = exptj;
      } else {
        __m128d tmp;
        __m128d tmp_4;
        __m128d tmp_5;
        real_T A4_tmp;
        real_T A6_idx_3;
        real_T d6;
        real_T eta1;
        real_T exptj;
        boolean_T guard1 = false;
        boolean_T guard2 = false;
        boolean_T guard3 = false;
        boolean_T guard4 = false;
        recomputeDiags = true;
        if (A[1] != 0.0) {
          if (A[0] != A[3]) {
            recomputeDiags = false;
          } else {
            if (rtIsNaN(A[1])) {
              exptj = (rtNaN);
            } else if (A[1] < 0.0) {
              exptj = -1.0;
            } else {
              exptj = (A[1] > 0.0);
            }

            if (rtIsNaN(A[2])) {
              d6 = (rtNaN);
            } else if (A[2] < 0.0) {
              d6 = -1.0;
            } else {
              d6 = (A[2] > 0.0);
            }

            if (exptj * d6 != -1.0) {
              recomputeDiags = false;
            }
          }
        }

        exptj = 0.0;
        for (i = 0; i < 2; i++) {
          r1 = i << 1;
          A2[r1] = 0.0;
          d6 = A[r1];
          A2[r1] += d6 * A[0];
          eta1 = A[r1 + 1];
          A2[r1] += eta1 * A[2];
          A2[r1 + 1] = 0.0;
          A2[r1 + 1] += d6 * A[1];
          A2[r1 + 1] += eta1 * A[3];
        }

        for (i = 0; i <= 0; i += 2) {
          __m128d tmp_0;
          __m128d tmp_1;
          __m128d tmp_2;
          __m128d tmp_3;
          tmp_4 = _mm_set1_pd(0.0);
          _mm_storeu_pd(&A4[i], tmp_4);
          tmp = _mm_loadu_pd(&A2[i]);
          tmp_5 = _mm_set1_pd(A2[0]);
          tmp_0 = _mm_loadu_pd(&A4[i]);
          _mm_storeu_pd(&A4[i], _mm_add_pd(_mm_mul_pd(tmp, tmp_5), tmp_0));
          tmp = _mm_loadu_pd(&A2[i + 2]);
          tmp_0 = _mm_set1_pd(A2[1]);
          tmp_1 = _mm_loadu_pd(&A4[i]);
          _mm_storeu_pd(&A4[i], _mm_add_pd(_mm_mul_pd(tmp, tmp_0), tmp_1));
          _mm_storeu_pd(&A4[i + 2], tmp_4);
          tmp = _mm_loadu_pd(&A2[i]);
          tmp_1 = _mm_set1_pd(A2[2]);
          tmp_2 = _mm_loadu_pd(&A4[i + 2]);
          _mm_storeu_pd(&A4[i + 2], _mm_add_pd(tmp_2, _mm_mul_pd(tmp, tmp_1)));
          tmp = _mm_loadu_pd(&A2[i + 2]);
          tmp_2 = _mm_set1_pd(A2[3]);
          tmp_3 = _mm_loadu_pd(&A4[i + 2]);
          _mm_storeu_pd(&A4[i + 2], _mm_add_pd(_mm_mul_pd(tmp, tmp_2), tmp_3));
          _mm_storeu_pd(&A6[i], tmp_4);
          tmp = _mm_loadu_pd(&A4[i]);
          tmp_3 = _mm_loadu_pd(&A6[i]);
          _mm_storeu_pd(&A6[i], _mm_add_pd(_mm_mul_pd(tmp, tmp_5), tmp_3));
          tmp = _mm_loadu_pd(&A4[i + 2]);
          tmp_5 = _mm_loadu_pd(&A6[i]);
          _mm_storeu_pd(&A6[i], _mm_add_pd(_mm_mul_pd(tmp, tmp_0), tmp_5));
          _mm_storeu_pd(&A6[i + 2], tmp_4);
          tmp_4 = _mm_loadu_pd(&A4[i]);
          tmp = _mm_loadu_pd(&A6[i + 2]);
          _mm_storeu_pd(&A6[i + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_4, tmp_1)));
          tmp_4 = _mm_loadu_pd(&A4[i + 2]);
          tmp = _mm_loadu_pd(&A6[i + 2]);
          _mm_storeu_pd(&A6[i + 2], _mm_add_pd(_mm_mul_pd(tmp_4, tmp_2), tmp));
        }

        d6 = rt_powd_snf(norm_7x8GXtWF(A6), 0.16666666666666666);
        eta1 = fmax(rt_powd_snf(norm_7x8GXtWF(A4), 0.25), d6);
        guard1 = false;
        guard2 = false;
        guard3 = false;
        guard4 = false;
        if (eta1 <= 0.01495585217958292) {
          V[0] = 0.19285012468241128 * fabs(A[0]);
          V[1] = 0.19285012468241128 * fabs(A[1]);
          V[2] = 0.19285012468241128 * fabs(A[2]);
          V[3] = 0.19285012468241128 * fabs(A[3]);
          FCEvReferenceApplicati_mpower_e(V, 7.0, U);
          if (fmax(ceil(log2_tqJQ4MCN(norm_7x8GXtWF(U) / norm_7x8GXtWF(A) * 2.0 /
                 2.2204460492503131E-16) / 6.0), 0.0) == 0.0) {
            r1 = 3;
          } else {
            guard4 = true;
          }
        } else {
          guard4 = true;
        }

        if (guard4) {
          if (eta1 <= 0.253939833006323) {
            V[0] = 0.12321872304378752 * fabs(A[0]);
            V[1] = 0.12321872304378752 * fabs(A[1]);
            V[2] = 0.12321872304378752 * fabs(A[2]);
            V[3] = 0.12321872304378752 * fabs(A[3]);
            FCEvReferenceApplicati_mpower_e(V, 11.0, U);
            if (fmax(ceil(log2_tqJQ4MCN(norm_7x8GXtWF(U) / norm_7x8GXtWF(A) *
                   2.0 / 2.2204460492503131E-16) / 10.0), 0.0) == 0.0) {
              r1 = 5;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }
        }

        if (guard3) {
          FCEvReferenceApplicati_mpower_e(A4, 2.0, U);
          eta1 = rt_powd_snf(norm_7x8GXtWF(U), 0.125);
          d6 = fmax(d6, eta1);
          if (d6 <= 0.95041789961629319) {
            V[0] = 0.090475336558796943 * fabs(A[0]);
            V[1] = 0.090475336558796943 * fabs(A[1]);
            V[2] = 0.090475336558796943 * fabs(A[2]);
            V[3] = 0.090475336558796943 * fabs(A[3]);
            FCEvReferenceApplicati_mpower_e(V, 15.0, U);
            if (fmax(ceil(log2_tqJQ4MCN(norm_7x8GXtWF(U) / norm_7x8GXtWF(A) *
                   2.0 / 2.2204460492503131E-16) / 14.0), 0.0) == 0.0) {
              r1 = 7;
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        }

        if (guard2) {
          if (d6 <= 2.097847961257068) {
            V[0] = 0.071467735648795785 * fabs(A[0]);
            V[1] = 0.071467735648795785 * fabs(A[1]);
            V[2] = 0.071467735648795785 * fabs(A[2]);
            V[3] = 0.071467735648795785 * fabs(A[3]);
            FCEvReferenceApplicati_mpower_e(V, 19.0, U);
            if (fmax(ceil(log2_tqJQ4MCN(norm_7x8GXtWF(U) / norm_7x8GXtWF(A) *
                   2.0 / 2.2204460492503131E-16) / 18.0), 0.0) == 0.0) {
              r1 = 9;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        }

        if (guard1) {
          for (i = 0; i < 2; i++) {
            r1 = i << 1;
            V[r1] = 0.0;
            exptj = A6[r1];
            V[r1] += exptj * A4[0];
            A4_tmp = A6[r1 + 1];
            V[r1] += A4_tmp * A4[2];
            V[r1 + 1] = 0.0;
            V[r1 + 1] += exptj * A4[1];
            V[r1 + 1] += A4_tmp * A4[3];
          }

          exptj = fmax(ceil(log2_tqJQ4MCN(fmin(d6, fmax(eta1, rt_powd_snf
            (norm_7x8GXtWF(V), 0.1))) / 5.3719203511481517)), 0.0);
          d6 = rt_powd_snf(2.0, exptj);
          eta1 = A[0] / d6;
          V[0] = 0.05031554467093536 * fabs(eta1);
          T[0] = eta1;
          eta1 = A[1] / d6;
          V[1] = 0.05031554467093536 * fabs(eta1);
          T[1] = eta1;
          eta1 = A[2] / d6;
          V[2] = 0.05031554467093536 * fabs(eta1);
          T[2] = eta1;
          eta1 = A[3] / d6;
          V[3] = 0.05031554467093536 * fabs(eta1);
          T[3] = eta1;
          FCEvReferenceApplicati_mpower_e(V, 27.0, U);
          exptj += fmax(ceil(log2_tqJQ4MCN(norm_7x8GXtWF(U) / norm_7x8GXtWF(T) *
            2.0 / 2.2204460492503131E-16) / 26.0), 0.0);
          if (rtIsInf(exptj)) {
            d6 = norm_7x8GXtWF(A) / 5.3719203511481517;
            if ((!rtIsInf(d6)) && (!rtIsNaN(d6))) {
              d6 = frexp(d6, &blockFormat);
            } else {
              blockFormat = 0;
            }

            exptj = blockFormat;
            if (d6 == 0.5) {
              exptj = (real_T)blockFormat - 1.0;
            }
          }

          r1 = 13;
        }

        if (exptj != 0.0) {
          d6 = rt_powd_snf(2.0, exptj);
          A[0] /= d6;
          A[1] /= d6;
          A[2] /= d6;
          A[3] /= d6;
          d6 = rt_powd_snf(2.0, 2.0 * exptj);
          A2[0] /= d6;
          A2[1] /= d6;
          A2[2] /= d6;
          A2[3] /= d6;
          d6 = rt_powd_snf(2.0, 4.0 * exptj);
          A4[0] /= d6;
          A4[1] /= d6;
          A4[2] /= d6;
          A4[3] /= d6;
          d6 = rt_powd_snf(2.0, 6.0 * exptj);
          A6[0] /= d6;
          A6[1] /= d6;
          A6[2] /= d6;
          A6[3] /= d6;
        }

        if (recomputeDiags) {
          if (A[1] == 0.0) {
            blockFormat = 1;
          } else {
            blockFormat = 2;
          }
        }

        if (r1 == 3) {
          U[1] = A2[1];
          U[2] = A2[2];
          U[0] = A2[0] + 60.0;
          U[3] = A2[3] + 60.0;
          for (i = 0; i < 2; i++) {
            r1 = i << 1;
            T[r1] = 0.0;
            d6 = U[r1];
            T[r1] += d6 * A[0];
            eta1 = U[r1 + 1];
            T[r1] += eta1 * A[2];
            T[r1 + 1] = 0.0;
            T[r1 + 1] += d6 * A[1];
            T[r1 + 1] += eta1 * A[3];
          }

          U[0] = T[0];
          V[0] = 12.0 * A2[0];
          U[1] = T[1];
          V[1] = 12.0 * A2[1];
          U[2] = T[2];
          V[2] = 12.0 * A2[2];
          U[3] = T[3];
          V[3] = 12.0 * A2[3];
          d6 = 120.0;
        } else if (r1 == 5) {
          U[0] = 420.0 * A2[0] + A4[0];
          U[1] = 420.0 * A2[1] + A4[1];
          U[2] = 420.0 * A2[2] + A4[2];
          U[3] = 420.0 * A2[3] + A4[3];
          U[0] += 15120.0;
          U[3] += 15120.0;
          for (i = 0; i < 2; i++) {
            r1 = i << 1;
            T[r1] = 0.0;
            d6 = U[r1];
            T[r1] += d6 * A[0];
            eta1 = U[r1 + 1];
            T[r1] += eta1 * A[2];
            T[r1 + 1] = 0.0;
            T[r1 + 1] += d6 * A[1];
            T[r1 + 1] += eta1 * A[3];
          }

          U[0] = T[0];
          V[0] = 30.0 * A4[0] + 3360.0 * A2[0];
          U[1] = T[1];
          V[1] = 30.0 * A4[1] + 3360.0 * A2[1];
          U[2] = T[2];
          V[2] = 30.0 * A4[2] + 3360.0 * A2[2];
          U[3] = T[3];
          V[3] = 30.0 * A4[3] + 3360.0 * A2[3];
          d6 = 30240.0;
        } else if (r1 == 7) {
          U[0] = (1512.0 * A4[0] + A6[0]) + 277200.0 * A2[0];
          U[1] = (1512.0 * A4[1] + A6[1]) + 277200.0 * A2[1];
          U[2] = (1512.0 * A4[2] + A6[2]) + 277200.0 * A2[2];
          U[3] = (1512.0 * A4[3] + A6[3]) + 277200.0 * A2[3];
          U[0] += 8.64864E+6;
          U[3] += 8.64864E+6;
          for (i = 0; i < 2; i++) {
            r1 = i << 1;
            T[r1] = 0.0;
            d6 = U[r1];
            T[r1] += d6 * A[0];
            eta1 = U[r1 + 1];
            T[r1] += eta1 * A[2];
            T[r1 + 1] = 0.0;
            T[r1 + 1] += d6 * A[1];
            T[r1 + 1] += eta1 * A[3];
          }

          U[0] = T[0];
          V[0] = (56.0 * A6[0] + 25200.0 * A4[0]) + 1.99584E+6 * A2[0];
          U[1] = T[1];
          V[1] = (56.0 * A6[1] + 25200.0 * A4[1]) + 1.99584E+6 * A2[1];
          U[2] = T[2];
          V[2] = (56.0 * A6[2] + 25200.0 * A4[2]) + 1.99584E+6 * A2[2];
          U[3] = T[3];
          V[3] = (56.0 * A6[3] + 25200.0 * A4[3]) + 1.99584E+6 * A2[3];
          d6 = 1.729728E+7;
        } else if (r1 == 9) {
          for (i = 0; i < 2; i++) {
            real_T U_tmp;
            r1 = i << 1;
            V[r1] = 0.0;
            U_tmp = A2[r1];
            V[r1] += U_tmp * A6[0];
            d6 = A2[r1 + 1];
            V[r1] += d6 * A6[2];
            V[r1 + 1] = 0.0;
            V[r1 + 1] += U_tmp * A6[1];
            V[r1 + 1] += d6 * A6[3];
          }

          U[0] = ((3960.0 * A6[0] + V[0]) + 2.16216E+6 * A4[0]) + 3.027024E+8 *
            A2[0];
          U[1] = ((3960.0 * A6[1] + V[1]) + 2.16216E+6 * A4[1]) + 3.027024E+8 *
            A2[1];
          U[2] = ((3960.0 * A6[2] + V[2]) + 2.16216E+6 * A4[2]) + 3.027024E+8 *
            A2[2];
          U[3] = ((3960.0 * A6[3] + V[3]) + 2.16216E+6 * A4[3]) + 3.027024E+8 *
            A2[3];
          U[0] += 8.8216128E+9;
          U[3] += 8.8216128E+9;
          for (i = 0; i < 2; i++) {
            r1 = i << 1;
            T[r1] = 0.0;
            d6 = U[r1];
            T[r1] += d6 * A[0];
            eta1 = U[r1 + 1];
            T[r1] += eta1 * A[2];
            T[r1 + 1] = 0.0;
            T[r1 + 1] += d6 * A[1];
            T[r1 + 1] += eta1 * A[3];
          }

          U[0] = T[0];
          V[0] = ((90.0 * V[0] + 110880.0 * A6[0]) + 3.027024E+7 * A4[0]) +
            2.0756736E+9 * A2[0];
          U[1] = T[1];
          V[1] = ((90.0 * V[1] + 110880.0 * A6[1]) + 3.027024E+7 * A4[1]) +
            2.0756736E+9 * A2[1];
          U[2] = T[2];
          V[2] = ((90.0 * V[2] + 110880.0 * A6[2]) + 3.027024E+7 * A4[2]) +
            2.0756736E+9 * A2[2];
          U[3] = T[3];
          V[3] = ((90.0 * V[3] + 110880.0 * A6[3]) + 3.027024E+7 * A4[3]) +
            2.0756736E+9 * A2[3];
          d6 = 1.76432256E+10;
        } else {
          U[0] = (3.352212864E+10 * A6[0] + 1.05594705216E+13 * A4[0]) +
            1.1873537964288E+15 * A2[0];
          U[1] = (3.352212864E+10 * A6[1] + 1.05594705216E+13 * A4[1]) +
            1.1873537964288E+15 * A2[1];
          U[2] = (3.352212864E+10 * A6[2] + 1.05594705216E+13 * A4[2]) +
            1.1873537964288E+15 * A2[2];
          U[3] = (3.352212864E+10 * A6[3] + 1.05594705216E+13 * A4[3]) +
            1.1873537964288E+15 * A2[3];
          U[0] += 3.238237626624E+16;
          U[3] += 3.238237626624E+16;
          d6 = (16380.0 * A4[0] + A6[0]) + 4.08408E+7 * A2[0];
          eta1 = (16380.0 * A4[1] + A6[1]) + 4.08408E+7 * A2[1];
          A4_tmp = (16380.0 * A4[2] + A6[2]) + 4.08408E+7 * A2[2];
          A6_idx_3 = (16380.0 * A4[3] + A6[3]) + 4.08408E+7 * A2[3];
          for (i = 0; i <= 0; i += 2) {
            tmp_4 = _mm_loadu_pd(&A6[i + 2]);
            tmp = _mm_loadu_pd(&A6[i]);
            tmp_5 = _mm_loadu_pd(&U[i]);
            _mm_storeu_pd(&T[i], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_4,
              _mm_set1_pd(eta1)), _mm_mul_pd(tmp, _mm_set1_pd(d6))), tmp_5));
            tmp_4 = _mm_loadu_pd(&A6[i + 2]);
            tmp = _mm_loadu_pd(&A6[i]);
            tmp_5 = _mm_loadu_pd(&U[i + 2]);
            _mm_storeu_pd(&T[i + 2], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp_4,
              _mm_set1_pd(A6_idx_3)), _mm_mul_pd(tmp, _mm_set1_pd(A4_tmp))),
              tmp_5));
          }

          d6 = (182.0 * A6[0] + 960960.0 * A4[0]) + 1.32324192E+9 * A2[0];
          eta1 = (182.0 * A6[1] + 960960.0 * A4[1]) + 1.32324192E+9 * A2[1];
          A4_tmp = (182.0 * A6[2] + 960960.0 * A4[2]) + 1.32324192E+9 * A2[2];
          A6_idx_3 = (182.0 * A6[3] + 960960.0 * A4[3]) + 1.32324192E+9 * A2[3];
          for (i = 0; i < 2; i++) {
            real_T U_tmp;
            real_T U_tmp_0;
            r1 = i << 1;
            U[r1] = 0.0;
            U_tmp = T[r1];
            U[r1] += U_tmp * A[0];
            U_tmp_0 = T[r1 + 1];
            U[r1] += U_tmp_0 * A[2];
            U[r1 + 1] = 0.0;
            U[r1 + 1] += U_tmp * A[1];
            U[r1 + 1] += U_tmp_0 * A[3];
            U_tmp = A6[i + 2];
            V[i] = (((U_tmp * eta1 + A6[i] * d6) + 6.704425728E+11 * A6[i]) +
                    1.29060195264E+14 * A4[i]) + 7.7717703038976E+15 * A2[i];
            V[i + 2] = (((U_tmp * A6_idx_3 + A6[i] * A4_tmp) + U_tmp *
                         6.704425728E+11) + A4[i + 2] * 1.29060195264E+14) +
              A2[i + 2] * 7.7717703038976E+15;
          }

          d6 = 6.476475253248E+16;
        }

        V[0] = (V[0] + d6) - U[0];
        U[0] *= 2.0;
        V[1] -= U[1];
        U[1] *= 2.0;
        V[2] -= U[2];
        U[2] *= 2.0;
        V[3] = (V[3] + d6) - U[3];
        U[3] *= 2.0;
        if (fabs(V[1]) > fabs(V[0])) {
          r1 = 1;
          r2 = 0;
        } else {
          r1 = 0;
          r2 = 1;
        }

        d6 = V[r2] / V[r1];
        A4_tmp = V[r1 + 2];
        eta1 = V[r2 + 2] - A4_tmp * d6;
        F[1] = (U[r2] - U[r1] * d6) / eta1;
        F[0] = (U[r1] - A4_tmp * F[1]) / V[r1];
        A6_idx_3 = U[r1 + 2];
        F[3] = (U[r2 + 2] - A6_idx_3 * d6) / eta1;
        F[2] = (A6_idx_3 - A4_tmp * F[3]) / V[r1];
        F[0]++;
        F[3]++;
        if (recomputeDiags) {
          recomputeBlockDiag_NxbsuIUb(A, F, blockFormat);
        }

        r1 = (int32_T)exptj;
        for (r2 = 0; r2 < r1; r2++) {
          for (i = 0; i <= 0; i += 2) {
            tmp_4 = _mm_set1_pd(0.0);
            _mm_storeu_pd(&A2[i], tmp_4);
            tmp = _mm_loadu_pd(&F[i]);
            tmp_5 = _mm_loadu_pd(&A2[i]);
            _mm_storeu_pd(&A2[i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(F[0])),
              tmp_5));
            tmp = _mm_loadu_pd(&F[i + 2]);
            tmp_5 = _mm_loadu_pd(&A2[i]);
            _mm_storeu_pd(&A2[i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(F[1])),
              tmp_5));
            _mm_storeu_pd(&A2[i + 2], tmp_4);
            tmp_4 = _mm_loadu_pd(&F[i]);
            tmp = _mm_loadu_pd(&A2[i + 2]);
            _mm_storeu_pd(&A2[i + 2], _mm_add_pd(tmp, _mm_mul_pd(tmp_4,
              _mm_set1_pd(F[2]))));
            tmp_4 = _mm_loadu_pd(&F[i + 2]);
            tmp = _mm_loadu_pd(&A2[i + 2]);
            _mm_storeu_pd(&A2[i + 2], _mm_add_pd(_mm_mul_pd(tmp_4, _mm_set1_pd
              (F[3])), tmp));
          }

          F[0] = A2[0];
          F[1] = A2[1];
          F[2] = A2[2];
          F[3] = A2[3];
          if (recomputeDiags) {
            A[0] *= 2.0;
            A[1] *= 2.0;
            A[2] *= 2.0;
            A[3] *= 2.0;
            recomputeBlockDiag_NxbsuIUb(A, F, blockFormat);
          }
        }
      }
    }
  }
}

/* System initialize for root system: '<Root>' */
void MdlInitialize(void)
{
  /* InitializeConditions for FirstOrderHold: '<S46>/First Order Hold' */
  FCEvReferenceApplication_DW.Tk = (rtInf);
  FCEvReferenceApplication_DW.Ck =
    FCEvReferenceApplication_P.FirstOrderHold_IniOut;
  FCEvReferenceApplication_DW.Uk = (rtInf);
  FCEvReferenceApplication_DW.Mk = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S46>/First Order Hold1' */
  FCEvReferenceApplication_DW.Tk_o = (rtInf);
  FCEvReferenceApplication_DW.Ck_d =
    FCEvReferenceApplication_P.FirstOrderHold1_IniOut;
  FCEvReferenceApplication_DW.Uk_j = (rtInf);
  FCEvReferenceApplication_DW.Mk_e = 0.0;

  /* InitializeConditions for Derivative: '<S6>/Derivative' */
  FCEvReferenceApplication_DW.TimeStampA = (rtInf);
  FCEvReferenceApplication_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Integrator: '<S27>/Integrator1' */
  FCEvReferenceApplication_X.Integrator1_CSTATE =
    FCEvReferenceApplication_P.Integrator1_IC;

  /* InitializeConditions for Integrator: '<S38>/Integrator2' */
  FCEvReferenceApplication_X.Integrator2_CSTATE =
    FCEvReferenceApplication_P.Integrator2_IC;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay' */
  FCEvReferenceApplication_DW.UnitDelay_DSTATE[0] =
    FCEvReferenceApplication_P.UnitDelay_InitialCondition[0];
  FCEvReferenceApplication_DW.UnitDelay_DSTATE[1] =
    FCEvReferenceApplication_P.UnitDelay_InitialCondition[1];

  /* InitializeConditions for TransferFcn: '<S45>/Motor Coupling Dynamics' */
  FCEvReferenceApplication_X.MotorCouplingDynamics_CSTATE = 0.0;

  /* InitializeConditions for FirstOrderHold: '<S45>/First Order Hold' */
  FCEvReferenceApplication_DW.Tk_a = (rtInf);
  FCEvReferenceApplication_DW.Ck_g =
    FCEvReferenceApplication_P.FirstOrderHold_IniOut_b;
  FCEvReferenceApplication_DW.Uk_h = (rtInf);
  FCEvReferenceApplication_DW.Mk_h = 0.0;

  /* InitializeConditions for Integrator: '<S48>/Integrator' */
  FCEvReferenceApplication_X.Integrator_CSTATE =
    FCEvReferenceApplication_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S48>/Integrator1' */
  FCEvReferenceApplication_X.Integrator1_CSTATE_j =
    FCEvReferenceApplication_P.Integrator1_IC_o;

  /* SystemInitialize for ModelReference: '<S5>/Drivetrain' */
  DrivetrainEv_Init(&(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtm),
                    &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtb),
                    &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
                    &(FCEvReferenceApplication_X.Drivetrain_CSTATE));

  /* SystemInitialize for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_Init
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE));

  /* SystemInitialize for Enabled SubSystem: '<S32>/Pass Through' */
  FCEvReferenceA_PassThrough_Init(FCEvReferenceApplication_P.SignalHold_IC,
    &FCEvReferenceApplication_B.PassThrough);

  /* End of SystemInitialize for SubSystem: '<S32>/Pass Through' */

  /* SystemInitialize for Enabled SubSystem: '<S34>/Pass Through' */
  FCEvReferenceA_PassThrough_Init(FCEvReferenceApplication_P.SignalHold_IC_k,
    &FCEvReferenceApplication_B.PassThrough_b);

  /* End of SystemInitialize for SubSystem: '<S34>/Pass Through' */

  /* SystemInitialize for Chart: '<S39>/Shift Controller' */
  FCEvReferenceApplication_DW.is_GearSelect = FCEvReferenc_IN_NO_ACTIVE_CHILD;
  FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;
  FCEvReferenceApplication_DW.is_active_c6_autolibsharedcommo = 0U;
  FCEvReferenceApplication_DW.GearState = 0.0;
  FCEvReferenceApplication_B.Gear = 0.0;
  FCEvReferenceApplication_DW.presentTime = 0.0;
  FCEvReferenceApplication_DW.elapsedTime = 0.0;
  FCEvReferenceApplication_DW.previousTime = 0.0;

  /* SystemInitialize for ModelReference: '<S1>/Powertrain Control Module (PCM)' */
  FCEvPowertrainController_Init
    (&(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtdw));

  /* InitializeConditions for root-level periodic continuous states */
  {
    int_T rootPeriodicContStateIndices[1] = { 6 };

    real_T rootPeriodicContStateRanges[2] = { -3.1415926535897931,
      3.1415926535897931 };

    (void) memcpy((void*)FCEvReferenceAppli_PeriodicIndX,
                  rootPeriodicContStateIndices,
                  1*sizeof(int_T));
    (void) memcpy((void*)FCEvReferenceAppli_PeriodicRngX,
                  rootPeriodicContStateRanges,
                  2*sizeof(real_T));
  }

  /* Root-level InitSystemMatrices */
  {
    static int_T modelMassMatrixIr[129] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
      12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
      31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 43, 83, 84, 86, 85, 87, 88, 90,
      89, 48, 49, 51, 50, 52, 53, 55, 54, 42, 44, 45, 44, 46, 47, 48, 52, 56, 57,
      58, 59, 58, 59, 60, 61, 60, 61, 62, 63, 64, 63, 66, 65, 67, 68, 67, 70, 69,
      71, 72, 71, 73, 74, 75, 75, 76, 78, 77, 79, 80, 82, 81, 79, 83, 87, 91, 92,
      94, 93, 91, 95, 96, 95, 97, 98, 100, 516, 99, 517, 518, 519, 520, 521, 522,
      523, 524, 525, 526, 527 };

    static int_T modelMassMatrixJc[529] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
      12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
      31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 45, 46, 47, 49, 50, 51,
      53, 54, 55, 57, 58, 59, 60, 62, 63, 64, 65, 66, 67, 68, 69, 71, 73, 75, 77,
      78, 80, 81, 82, 83, 85, 86, 87, 88, 90, 91, 92, 93, 94, 96, 97, 98, 100,
      101, 102, 103, 104, 105, 107, 108, 109, 110, 112, 113, 114, 115, 117, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,
      118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 119, 120, 121, 122,
      123, 124, 125, 126, 127, 128, 129 };

    static real_T modelMassMatrixPr[129] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0 };

    (void) memcpy(FCEvReferenceApplica_MassMatrix.ir, modelMassMatrixIr,
                  129*sizeof(int_T));
    (void) memcpy(FCEvReferenceApplica_MassMatrix.jc, modelMassMatrixJc,
                  529*sizeof(int_T));
    (void) memcpy(FCEvReferenceApplica_MassMatrix.pr, modelMassMatrixPr,
                  129*sizeof(real_T));
  }
}

/* Enable for root system: '<Root>' */
void MdlEnable(void)
{
  /* Enable for Chart: '<S39>/Shift Controller' */
  FCEvReferenceApplication_DW.presentTime = ssGetTaskTime(rtS,1);
  FCEvReferenceApplication_DW.previousTime =
    FCEvReferenceApplication_DW.presentTime;
}

/* Start for root system: '<Root>' */
void MdlStart(void)
{
  /* SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace_PWORK.LoggedData = rt_CreateLogVar(
      ssGetRTWLogInfo(rtS),
      ssGetTStart(rtS),
      ssGetTFinal(rtS),
      0.0,
      (&ssGetErrorStatus(rtS)),
      "Pe",
      SS_DOUBLE,
      0,
      0,
      0,
      1,
      1,
      dimensions,
      NO_LOGVALDIMS,
      (NULL),
      (NULL),
      0,
      1,
      1.0,
      1);
    if (FCEvReferenceApplication_DW.ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace1' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace1_PWORK.LoggedData = rt_CreateLogVar(
      ssGetRTWLogInfo(rtS),
      ssGetTStart(rtS),
      ssGetTFinal(rtS),
      0.0,
      (&ssGetErrorStatus(rtS)),
      "T",
      SS_DOUBLE,
      0,
      0,
      0,
      1,
      1,
      dimensions,
      NO_LOGVALDIMS,
      (NULL),
      (NULL),
      0,
      1,
      1.0,
      1);
    if (FCEvReferenceApplication_DW.ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace2' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace2_PWORK.LoggedData = rt_CreateLogVar(
      ssGetRTWLogInfo(rtS),
      ssGetTStart(rtS),
      ssGetTFinal(rtS),
      0.0,
      (&ssGetErrorStatus(rtS)),
      "Pfc",
      SS_DOUBLE,
      0,
      0,
      0,
      1,
      1,
      dimensions,
      NO_LOGVALDIMS,
      (NULL),
      (NULL),
      0,
      1,
      1.0,
      1);
    if (FCEvReferenceApplication_DW.ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace1' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace1_PWORK_c.LoggedData =
      rt_CreateLogVar(
                      ssGetRTWLogInfo(rtS),
                      ssGetTStart(rtS),
                      ssGetTFinal(rtS),
                      0.0,
                      (&ssGetErrorStatus(rtS)),
                      "efc",
                      SS_DOUBLE,
                      0,
                      0,
                      0,
                      1,
                      1,
                      dimensions,
                      NO_LOGVALDIMS,
                      (NULL),
                      (NULL),
                      0,
                      1,
                      1.0,
                      1);
    if (FCEvReferenceApplication_DW.ToWorkspace1_PWORK_c.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace2' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace2_PWORK_i.LoggedData =
      rt_CreateLogVar(
                      ssGetRTWLogInfo(rtS),
                      ssGetTStart(rtS),
                      ssGetTFinal(rtS),
                      0.0,
                      (&ssGetErrorStatus(rtS)),
                      "soc",
                      SS_DOUBLE,
                      0,
                      0,
                      0,
                      1,
                      1,
                      dimensions,
                      NO_LOGVALDIMS,
                      (NULL),
                      (NULL),
                      0,
                      1,
                      1.0,
                      1);
    if (FCEvReferenceApplication_DW.ToWorkspace2_PWORK_i.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace3' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace3_PWORK.LoggedData = rt_CreateLogVar(
      ssGetRTWLogInfo(rtS),
      ssGetTStart(rtS),
      ssGetTFinal(rtS),
      0.0,
      (&ssGetErrorStatus(rtS)),
      "v",
      SS_DOUBLE,
      0,
      0,
      0,
      1,
      1,
      dimensions,
      NO_LOGVALDIMS,
      (NULL),
      (NULL),
      0,
      1,
      1.0,
      1);
    if (FCEvReferenceApplication_DW.ToWorkspace3_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace4' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace4_PWORK.LoggedData = rt_CreateLogVar(
      ssGetRTWLogInfo(rtS),
      ssGetTStart(rtS),
      ssGetTFinal(rtS),
      0.0,
      (&ssGetErrorStatus(rtS)),
      "a",
      SS_DOUBLE,
      0,
      0,
      0,
      1,
      1,
      dimensions,
      NO_LOGVALDIMS,
      (NULL),
      (NULL),
      0,
      1,
      1.0,
      1);
    if (FCEvReferenceApplication_DW.ToWorkspace4_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace3' */
  {
    int_T dimensions[1] = { 1 };

    FCEvReferenceApplication_DW.ToWorkspace3_PWORK_j.LoggedData =
      rt_CreateLogVar(
                      ssGetRTWLogInfo(rtS),
                      ssGetTStart(rtS),
                      ssGetTFinal(rtS),
                      0.0,
                      (&ssGetErrorStatus(rtS)),
                      "Clock",
                      SS_DOUBLE,
                      0,
                      0,
                      0,
                      1,
                      1,
                      dimensions,
                      NO_LOGVALDIMS,
                      (NULL),
                      (NULL),
                      0,
                      1,
                      1.0,
                      1);
    if (FCEvReferenceApplication_DW.ToWorkspace3_PWORK_j.LoggedData == (NULL))
      return;
  }

  /* Start for ModelReference: '<S5>/Drivetrain' */
  DrivetrainEv_Start(&(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtb),
                     &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtdw));

  /* Start for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_Start
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE),
     &(((CXPtMin_FCEvReferenceApplicat_T *)
        ssGetJacobianPerturbationBoundsMinVec(rtS))->ElectricPlant_CSTATE),
     &(((CXPtMax_FCEvReferenceApplicat_T *)
        ssGetJacobianPerturbationBoundsMaxVec(rtS))->ElectricPlant_CSTATE));

  /* Start for Enabled SubSystem: '<S32>/Pass Through' */
  FCEvReference_PassThrough_Start(rtS, &FCEvReferenceApplication_DW.PassThrough);

  /* End of Start for SubSystem: '<S32>/Pass Through' */

  /* Start for Enabled SubSystem: '<S34>/Pass Through' */
  FCEvReference_PassThrough_Start(rtS,
    &FCEvReferenceApplication_DW.PassThrough_b);

  /* End of Start for SubSystem: '<S34>/Pass Through' */

  /* Start for Sqrt: '<S48>/Sqrt' */
  FCEvReferenceApplication_DW.Sqrt_DWORK1 = 0;
  MdlInitialize();
  MdlEnable();
}

/* Outputs for root system: '<Root>' */
void MdlOutputs(int_T tid)
{
  /* local block i/o variables */
  real_T rtb_Saturation;
  real_T rtb_Saturation_h;
  real_T rtb_PowertrainControlModulePCM_;
  real_T rtb_PowertrainControlModulePC_h;
  real_T rtb_PowertrainControlModulePC_m;
  real_T a_tmp[4];
  real_T b_a[4];
  real_T rtb_F[4];
  real_T sigmaA[4];
  real_T rtb_TraceVelocityTargetActualmp[2];
  real_T rtb_BatteryCurrentA;
  real_T rtb_BatterySOC;
  real_T rtb_FuelCellCurrentA;
  real_T rtb_FuelCellVoltageV;
  real_T rtb_G_idx_1;
  real_T rtb_MotorSpeedRPM;
  real_T rtb_MotorTorqueNm;
  real_T rtb_Saturation_k;
  real_T rtb_USMPG;
  real_T rtb_USMPG_tmp;
  real_T sigmaB_idx_0;
  real_T sigmaB_idx_1;
  real_T sigmaB_idx_2;
  real_T sigmaB_idx_3;
  real_T *lastU;
  int32_T trueCount;
  boolean_T rtb_RelationalOperator;
  static const real_T e_1[170] = { 1.0, 2.0, 6.0, 24.0, 120.0, 720.0, 5040.0,
    40320.0, 362880.0, 3.6288E+6, 3.99168E+7, 4.790016E+8, 6.2270208E+9,
    8.71782912E+10, 1.307674368E+12, 2.0922789888E+13, 3.55687428096E+14,
    6.402373705728E+15, 1.21645100408832E+17, 2.43290200817664E+18,
    5.109094217170944E+19, 1.1240007277776077E+21, 2.5852016738884978E+22,
    6.2044840173323941E+23, 1.5511210043330986E+25, 4.0329146112660565E+26,
    1.0888869450418352E+28, 3.0488834461171384E+29, 8.8417619937397008E+30,
    2.6525285981219103E+32, 8.2228386541779224E+33, 2.6313083693369352E+35,
    8.6833176188118859E+36, 2.9523279903960412E+38, 1.0333147966386144E+40,
    3.7199332678990118E+41, 1.3763753091226343E+43, 5.23022617466601E+44,
    2.0397882081197442E+46, 8.1591528324789768E+47, 3.3452526613163803E+49,
    1.4050061177528798E+51, 6.0415263063373834E+52, 2.6582715747884485E+54,
    1.1962222086548019E+56, 5.5026221598120885E+57, 2.5862324151116818E+59,
    1.2413915592536073E+61, 6.0828186403426752E+62, 3.0414093201713376E+64,
    1.5511187532873822E+66, 8.0658175170943877E+67, 4.2748832840600255E+69,
    2.3084369733924138E+71, 1.2696403353658276E+73, 7.1099858780486348E+74,
    4.0526919504877221E+76, 2.3505613312828789E+78, 1.3868311854568986E+80,
    8.3209871127413916E+81, 5.0758021387722484E+83, 3.1469973260387939E+85,
    1.98260831540444E+87, 1.2688693218588417E+89, 8.2476505920824715E+90,
    5.4434493907744307E+92, 3.6471110918188683E+94, 2.4800355424368305E+96,
    1.711224524281413E+98, 1.197857166996989E+100, 8.5047858856786218E+101,
    6.1234458376886077E+103, 4.4701154615126834E+105, 3.3078854415193856E+107,
    2.4809140811395391E+109, 1.8854947016660498E+111, 1.4518309202828584E+113,
    1.1324281178206295E+115, 8.9461821307829729E+116, 7.1569457046263779E+118,
    5.7971260207473655E+120, 4.75364333701284E+122, 3.9455239697206569E+124,
    3.314240134565352E+126, 2.8171041143805494E+128, 2.4227095383672724E+130,
    2.1077572983795269E+132, 1.8548264225739836E+134, 1.6507955160908452E+136,
    1.4857159644817607E+138, 1.3520015276784023E+140, 1.24384140546413E+142,
    1.1567725070816409E+144, 1.0873661566567424E+146, 1.0329978488239052E+148,
    9.916779348709491E+149, 9.6192759682482062E+151, 9.426890448883242E+153,
    9.33262154439441E+155, 9.33262154439441E+157, 9.4259477598383536E+159,
    9.6144667150351211E+161, 9.9029007164861754E+163, 1.0299016745145622E+166,
    1.0813967582402903E+168, 1.1462805637347078E+170, 1.2265202031961373E+172,
    1.3246418194518284E+174, 1.4438595832024928E+176, 1.5882455415227421E+178,
    1.7629525510902437E+180, 1.9745068572210728E+182, 2.2311927486598123E+184,
    2.5435597334721862E+186, 2.9250936934930141E+188, 3.3931086844518965E+190,
    3.969937160808719E+192, 4.6845258497542883E+194, 5.5745857612076033E+196,
    6.6895029134491239E+198, 8.09429852527344E+200, 9.8750442008335976E+202,
    1.2146304367025325E+205, 1.5061417415111404E+207, 1.8826771768889254E+209,
    2.3721732428800459E+211, 3.0126600184576582E+213, 3.8562048236258025E+215,
    4.9745042224772855E+217, 6.4668554892204716E+219, 8.4715806908788174E+221,
    1.1182486511960039E+224, 1.4872707060906852E+226, 1.9929427461615181E+228,
    2.6904727073180495E+230, 3.6590428819525472E+232, 5.01288874827499E+234,
    6.9177864726194859E+236, 9.6157231969410859E+238, 1.346201247571752E+241,
    1.89814375907617E+243, 2.6953641378881614E+245, 3.8543707171800706E+247,
    5.5502938327393013E+249, 8.0479260574719866E+251, 1.17499720439091E+254,
    1.7272458904546376E+256, 2.5563239178728637E+258, 3.8089226376305671E+260,
    5.7133839564458505E+262, 8.6272097742332346E+264, 1.3113358856834518E+267,
    2.0063439050956811E+269, 3.0897696138473489E+271, 4.7891429014633912E+273,
    7.47106292628289E+275, 1.1729568794264138E+278, 1.8532718694937338E+280,
    2.9467022724950369E+282, 4.714723635992059E+284, 7.5907050539472148E+286,
    1.2296942187394488E+289, 2.0044015765453015E+291, 3.2872185855342945E+293,
    5.423910666131586E+295, 9.0036917057784329E+297, 1.5036165148649983E+300,
    2.5260757449731969E+302, 4.2690680090047027E+304, 7.257415615307994E+306 };

  /* Read data from the mat file of inport block */
  if (gblInportFileName != (NULL)) {
    int_T currTimeIdx;
    int_T i;

    /*
     *  Read in data from mat file for root inport pfc
     */
    if (gblInportTUtables[0].nTimePoints > 0) {
      if (ssIsSampleHit(rtS, 2, 0)) {
        {
          real_T time = ssGetTaskTime(rtS,2);
          int k = 1;
          if (gblInportTUtables[0].nTimePoints == 1) {
            k = 0;
          }

          currTimeIdx = rt_getTimeIdx(gblInportTUtables[0].time, time,
            gblInportTUtables[0].nTimePoints,
            *(gblInportTUtables[0].currTimeIdx),
            1,
            0);
          (*gblInportTUtables[0].currTimeIdx) = currTimeIdx;
          for (i = 0; i < 1; i++) {
            real_T* realPtr1 = (real_T*)gblInportTUtables[0].ur +
              i*gblInportTUtables[0].nTimePoints +currTimeIdx;
            real_T* realPtr2 = realPtr1 + 1*k;
            (void)rt_Interpolate_Datatype(
              realPtr1,
              realPtr2,
              &FCEvReferenceApplication_U.pfc,
              time,
              gblInportTUtables[0].time[currTimeIdx],
              gblInportTUtables[0].time[currTimeIdx + k],
              gblInportTUtables[0].uDataType);
          }
        }
      }
    }
  }

  /* end read inport data from file */

  /* FirstOrderHold: '<S46>/First Order Hold' */
  FCEvReferenceApplication_B.MotTrqCmd = FCEvReferenceApplication_DW.Ck;

  /* FirstOrderHold: '<S46>/First Order Hold' */
  if (FCEvReferenceApplication_DW.Tk != (rtInf)) {
    /* FirstOrderHold: '<S46>/First Order Hold' */
    FCEvReferenceApplication_B.MotTrqCmd += (ssGetT(rtS) -
      FCEvReferenceApplication_DW.Tk) * FCEvReferenceApplication_DW.Mk;
  }

  /* ModelReference: '<S5>/Drivetrain' */
  DrivetrainEv(&(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtm),
               &FCEvReferenceApplication_B.xdot,
               &FCEvReferenceApplication_B.MotSpd,
               &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtb),
               &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
               &(FCEvReferenceApplication_X.Drivetrain_CSTATE),
               &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtzce));

  /* FirstOrderHold: '<S46>/First Order Hold1' */
  FCEvReferenceApplication_B.FCCurrCmd = FCEvReferenceApplication_DW.Ck_d;

  /* FirstOrderHold: '<S46>/First Order Hold1' */
  if (FCEvReferenceApplication_DW.Tk_o != (rtInf)) {
    /* FirstOrderHold: '<S46>/First Order Hold1' */
    FCEvReferenceApplication_B.FCCurrCmd += (ssGetT(rtS) -
      FCEvReferenceApplication_DW.Tk_o) * FCEvReferenceApplication_DW.Mk_e;
  }

  /* ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant(&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
                  &FCEvReferenceApplication_B.MotTrqCmd,
                  &FCEvReferenceApplication_B.MotSpd,
                  &FCEvReferenceApplication_B.FCCurrCmd,
                  &FCEvReferenceApplication_B.BattSoc,
                  &FCEvReferenceApplication_B.BattPwr,
                  &FCEvReferenceApplication_B.BattCurr,
                  &FCEvReferenceApplication_B.MotTrq,
                  &FCEvReferenceApplication_B.ElectricPlant_o5,
                  &FCEvReferenceApplication_B.FCCurr,
                  &FCEvReferenceApplication_B.TotPwr,
                  &FCEvReferenceApplication_B.H2Flow,
                  &FCEvReferenceApplication_B.ElectricPlant_o9,
                  &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
                  &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
                  &(FCEvReferenceApplication_X.ElectricPlant_CSTATE),
                  &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtzce));

  /* RateTransition: '<S6>/Rate Transition1' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition1_semaphoreTaken == 0)) {
    FCEvReferenceApplication_DW.RateTransition1_Buffer0 =
      FCEvReferenceApplication_B.BattSoc;
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    FCEvReferenceApplication_DW.RateTransition1_semaphoreTaken = 1;
    rtb_BatterySOC = FCEvReferenceApplication_DW.RateTransition1_Buffer0;
    FCEvReferenceApplication_DW.RateTransition1_semaphoreTaken = 0;

    /* Outport: '<Root>/soc' */
    FCEvReferenceApplication_Y.soc = rtb_BatterySOC;
  }

  /* End of RateTransition: '<S6>/Rate Transition1' */

  /* Saturate: '<S6>/Saturation' */
  if (ssIsModeUpdateTimeStep(rtS)) {
    FCEvReferenceApplication_DW.Saturation_MODE =
      FCEvReferenceApplication_B.xdot >=
      FCEvReferenceApplication_P.Saturation_UpperSat ? 1 :
      FCEvReferenceApplication_B.xdot >
      FCEvReferenceApplication_P.Saturation_LowerSat ? 0 : -1;
  }

  /* Saturate: '<S6>/Saturation' */
  FCEvReferenceApplication_B.Saturation =
    FCEvReferenceApplication_DW.Saturation_MODE == 1 ?
    FCEvReferenceApplication_P.Saturation_UpperSat :
    FCEvReferenceApplication_DW.Saturation_MODE == -1 ?
    FCEvReferenceApplication_P.Saturation_LowerSat :
    FCEvReferenceApplication_B.xdot;

  /* Gain: '<S6>/Gain' */
  FCEvReferenceApplication_B.Gain = FCEvReferenceApplication_P.Gain_Gain *
    FCEvReferenceApplication_B.Saturation;

  /* Derivative: '<S6>/Derivative' incorporates:
   *  Clock: '<Root>/Clock'
   *  Clock: '<S11>/Clock'
   *  FirstOrderHold: '<S45>/First Order Hold'
   */
  rtb_USMPG_tmp = ssGetT(rtS);
  rtb_USMPG = rtb_USMPG_tmp;
  if ((FCEvReferenceApplication_DW.TimeStampA >= rtb_USMPG) &&
      (FCEvReferenceApplication_DW.TimeStampB >= rtb_USMPG)) {
    /* Derivative: '<S6>/Derivative' */
    FCEvReferenceApplication_B.Derivative = 0.0;
  } else {
    rtb_Saturation_k = FCEvReferenceApplication_DW.TimeStampA;
    lastU = &FCEvReferenceApplication_DW.LastUAtTimeA;
    if (FCEvReferenceApplication_DW.TimeStampA <
        FCEvReferenceApplication_DW.TimeStampB) {
      if (FCEvReferenceApplication_DW.TimeStampB < rtb_USMPG) {
        rtb_Saturation_k = FCEvReferenceApplication_DW.TimeStampB;
        lastU = &FCEvReferenceApplication_DW.LastUAtTimeB;
      }
    } else if (FCEvReferenceApplication_DW.TimeStampA >= rtb_USMPG) {
      rtb_Saturation_k = FCEvReferenceApplication_DW.TimeStampB;
      lastU = &FCEvReferenceApplication_DW.LastUAtTimeB;
    }

    /* Derivative: '<S6>/Derivative' */
    FCEvReferenceApplication_B.Derivative = (FCEvReferenceApplication_B.Gain -
      *lastU) / (rtb_USMPG - rtb_Saturation_k);
  }

  /* End of Derivative: '<S6>/Derivative' */

  /* Outport: '<Root>/v' */
  FCEvReferenceApplication_Y.v = FCEvReferenceApplication_B.Derivative;

  /* Outport: '<Root>/a' */
  FCEvReferenceApplication_Y.a = FCEvReferenceApplication_B.Gain;
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* Gain: '<Root>/Gain' incorporates:
     *  Inport: '<Root>/pfc'
     */
    FCEvReferenceApplication_B.Gain_g = FCEvReferenceApplication_P.Gain_Gain_n *
      FCEvReferenceApplication_U.pfc;
  }

  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Logic: '<S26>/Logical Operator2' */
    FCEvReferenceApplication_B.LogicalOperator2 = false;

    /* Constant: '<S26>/Constant' */
    FCEvReferenceApplication_B.Constant =
      FCEvReferenceApplication_P.Constant_Value_m;

    /* Gain: '<S25>/Gain' incorporates:
     *  Trigonometry: '<S25>/Trigonometric Function'
     *  UnitConversion: '<S25>/Unit Conversion2'
     */
    /* Unit Conversion - from: deg to: rad
       Expression: output = (0.0174533*input) + (0) */
    FCEvReferenceApplication_B.Gain_a =
      FCEvReferenceApplication_P.LongitudinalDriverModel_g *
      FCEvReferenceApplication_P.LongitudinalDriverModel_m *
      FCEvReferenceApplication_P.LongitudinalDriverModel_m /
      FCEvReferenceApplication_P.LongitudinalDriverModel_Kpt * 0.0;
  }

  /* Integrator: '<S27>/Integrator1' */
  FCEvReferenceApplication_B.Integrator1 =
    FCEvReferenceApplication_X.Integrator1_CSTATE;

  /* Sum: '<S25>/Add' */
  FCEvReferenceApplication_B.Add = FCEvReferenceApplication_B.Integrator1 -
    FCEvReferenceApplication_B.Gain_a;

  /* Switch: '<S26>/Switch1' incorporates:
   *  Saturate: '<S26>/0~1'
   *  Switch: '<S26>/Switch'
   */
  if (FCEvReferenceApplication_B.LogicalOperator2) {
    rtb_Saturation_k = 0.0;
  } else if (FCEvReferenceApplication_B.Add >
             FCEvReferenceApplication_P.u1_UpperSat) {
    /* Saturate: '<S26>/0~1' incorporates:
     *  Switch: '<S26>/Switch'
     */
    rtb_Saturation_k = FCEvReferenceApplication_P.u1_UpperSat;
  } else if (FCEvReferenceApplication_B.Add <
             FCEvReferenceApplication_P.u1_LowerSat) {
    /* Saturate: '<S26>/0~1' incorporates:
     *  Switch: '<S26>/Switch'
     */
    rtb_Saturation_k = FCEvReferenceApplication_P.u1_LowerSat;
  } else {
    /* Switch: '<S26>/Switch' incorporates:
     *  Saturate: '<S26>/0~1'
     */
    rtb_Saturation_k = FCEvReferenceApplication_B.Add;
  }

  /* End of Switch: '<S26>/Switch1' */

  /* Saturate: '<S26>/Saturation' */
  if (rtb_Saturation_k > FCEvReferenceApplication_P.Saturation_UpperSat_e) {
    /* Saturate: '<S26>/Saturation' */
    rtb_Saturation = FCEvReferenceApplication_P.Saturation_UpperSat_e;
  } else if (rtb_Saturation_k < FCEvReferenceApplication_P.Saturation_LowerSat_j)
  {
    /* Saturate: '<S26>/Saturation' */
    rtb_Saturation = FCEvReferenceApplication_P.Saturation_LowerSat_j;
  } else {
    /* Saturate: '<S26>/Saturation' */
    rtb_Saturation = rtb_Saturation_k;
  }

  /* End of Saturate: '<S26>/Saturation' */
  rtb_RelationalOperator = ssIsSampleHit(rtS, 1, 0);

  /* Logic: '<S32>/NOT' */
  FCEvReferenceApplication_B.NOT = (rtb_RelationalOperator ||
    FCEvReferenceApplication_B.NOT);

  /* Outputs for Enabled SubSystem: '<S32>/Pass Through' */
  FCEvReferenceApplic_PassThrough(rtS, FCEvReferenceApplication_B.NOT,
    rtb_Saturation, &FCEvReferenceApplication_B.PassThrough,
    &FCEvReferenceApplication_DW.PassThrough);

  /* End of Outputs for SubSystem: '<S32>/Pass Through' */
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Logic: '<S28>/Logical Operator2' */
    FCEvReferenceApplication_B.LogicalOperator2_j = false;

    /* Constant: '<S28>/Constant' */
    FCEvReferenceApplication_B.Constant_d =
      FCEvReferenceApplication_P.Constant_Value_l;
  }

  /* Switch: '<S28>/Switch1' incorporates:
   *  Saturate: '<S28>/-1~0'
   *  Switch: '<S28>/Switch'
   */
  if (FCEvReferenceApplication_B.LogicalOperator2_j) {
    rtb_Saturation_k = 0.0;
  } else if (FCEvReferenceApplication_B.Add >
             FCEvReferenceApplication_P.u0_UpperSat) {
    /* Saturate: '<S28>/-1~0' incorporates:
     *  Switch: '<S28>/Switch'
     *  UnaryMinus: '<S28>/Unary Minus'
     */
    rtb_Saturation_k = -FCEvReferenceApplication_P.u0_UpperSat;
  } else if (FCEvReferenceApplication_B.Add <
             FCEvReferenceApplication_P.u0_LowerSat) {
    /* Saturate: '<S28>/-1~0' incorporates:
     *  Switch: '<S28>/Switch'
     *  UnaryMinus: '<S28>/Unary Minus'
     */
    rtb_Saturation_k = -FCEvReferenceApplication_P.u0_LowerSat;
  } else {
    /* Switch: '<S28>/Switch' incorporates:
     *  Saturate: '<S28>/-1~0'
     *  UnaryMinus: '<S28>/Unary Minus'
     */
    rtb_Saturation_k = -FCEvReferenceApplication_B.Add;
  }

  /* End of Switch: '<S28>/Switch1' */

  /* Saturate: '<S28>/Saturation' */
  if (rtb_Saturation_k > FCEvReferenceApplication_P.Saturation_UpperSat_n) {
    /* Saturate: '<S28>/Saturation' */
    rtb_Saturation_h = FCEvReferenceApplication_P.Saturation_UpperSat_n;
  } else if (rtb_Saturation_k <
             FCEvReferenceApplication_P.Saturation_LowerSat_jd) {
    /* Saturate: '<S28>/Saturation' */
    rtb_Saturation_h = FCEvReferenceApplication_P.Saturation_LowerSat_jd;
  } else {
    /* Saturate: '<S28>/Saturation' */
    rtb_Saturation_h = rtb_Saturation_k;
  }

  /* End of Saturate: '<S28>/Saturation' */

  /* Logic: '<S34>/NOT' */
  FCEvReferenceApplication_B.NOT_g = (rtb_RelationalOperator ||
    FCEvReferenceApplication_B.NOT_g);

  /* Outputs for Enabled SubSystem: '<S34>/Pass Through' */
  FCEvReferenceApplic_PassThrough(rtS, FCEvReferenceApplication_B.NOT_g,
    rtb_Saturation_h, &FCEvReferenceApplication_B.PassThrough_b,
    &FCEvReferenceApplication_DW.PassThrough_b);

  /* End of Outputs for SubSystem: '<S34>/Pass Through' */
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S11>/tFinal' */
    FCEvReferenceApplication_B.tFinal = FCEvReferenceApplication_P.tFinal_Value;

    /* Constant: '<S11>/repeat' */
    FCEvReferenceApplication_B.repeat = FCEvReferenceApplication_P.repeat_Value;
  }

  /* Switch: '<S11>/Switch' */
  if (FCEvReferenceApplication_B.repeat >
      FCEvReferenceApplication_P.Switch_Threshold) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Math: '<S11>/Math Function'
     */
    FCEvReferenceApplication_B.Switch = rt_modd_snf(rtb_USMPG,
      FCEvReferenceApplication_B.tFinal);
  } else {
    /* Switch: '<S11>/Switch' */
    FCEvReferenceApplication_B.Switch = rtb_USMPG;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Lookup_n-D: '<S11>/1-D Lookup Table' incorporates:
   *  Switch: '<S11>/Switch'
   */
  FCEvReferenceApplication_B.uDLookupTable = look1_pbinlcapw
    (FCEvReferenceApplication_B.Switch,
     FCEvReferenceApplication_P.uDLookupTable_bp01Data,
     FCEvReferenceApplication_P.uDLookupTable_tableData,
     &FCEvReferenceApplication_DW.m_bpIndex, 1369U);
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Chart: '<S39>/Shift Controller' */
    FCEvReferenceApplication_DW.presentTime = ssGetTaskTime(rtS,1);
    FCEvReferenceApplication_DW.elapsedTime =
      FCEvReferenceApplication_DW.presentTime -
      FCEvReferenceApplication_DW.previousTime;
    FCEvReferenceApplication_DW.previousTime =
      FCEvReferenceApplication_DW.presentTime;
    FCEvReferenceApplication_DW.temporalCounter_i1 +=
      FCEvReferenceApplication_DW.elapsedTime;

    /* Gateway: Longitudinal Driver/Shift/Basic/Shift Controller */
    /* During: Longitudinal Driver/Shift/Basic/Shift Controller */
    if (FCEvReferenceApplication_DW.is_active_c6_autolibsharedcommo == 0U) {
      /* Entry: Longitudinal Driver/Shift/Basic/Shift Controller */
      FCEvReferenceApplication_DW.is_active_c6_autolibsharedcommo = 1U;

      /* Entry Internal: Longitudinal Driver/Shift/Basic/Shift Controller */
      /* Entry Internal 'GearSelect': '<S41>:374' */
      /* Transition: '<S41>:490' */
      /*  InitialGear  */
      FCEvReferenceApplication_B.Gear =
        FCEvReferenceApplication_P.LongitudinalDriverModel_GearIni;
      FCEvReferenceApplication_DW.GearState =
        FCEvReferenceApplication_P.LongitudinalDriverModel_GearIni;
      if (FCEvReferenceApplication_P.LongitudinalDriverModel_GearIni < 0.0) {
        /* Transition: '<S41>:480' */
        /* Transition: '<S41>:479' */
        FCEvReferenceApplication_DW.is_GearSelect =
          FCEvReferenceApplica_IN_Reverse;
        FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;

        /* Entry 'Reverse': '<S41>:375' */
        FCEvReferenceApplication_B.Gear = -1.0;

        /* Transition: '<S41>:481' */
      } else if (FCEvReferenceApplication_P.LongitudinalDriverModel_GearIni ==
                 0.0) {
        /* Transition: '<S41>:477' */
        /* Transition: '<S41>:484' */
        FCEvReferenceApplication_DW.is_GearSelect =
          FCEvReferenceApplica_IN_Neutral;
        FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;

        /* Entry 'Neutral': '<S41>:355' */
        FCEvReferenceApplication_B.Gear = 0.0;
      } else {
        /* Transition: '<S41>:486' */
        /* Transition: '<S41>:478' */
        FCEvReferenceApplication_DW.is_GearSelect =
          FCEvReferenceApplication_IN_Odd;
        FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;

        /* Entry 'Odd': '<S41>:356' */
      }
    } else {
      /* During 'GearSelect': '<S41>:374' */
      switch (FCEvReferenceApplication_DW.is_GearSelect) {
       case FCEvReferenceApplica_IN_Neutral:
        /* During 'Neutral': '<S41>:355' */
        rtb_Saturation_k = (ssGetTaskTime(rtS,1) -
                            FCEvReferenceApplication_DW.previousTime) +
          FCEvReferenceApplication_DW.temporalCounter_i1;
        if ((rtb_Saturation_k >=
             FCEvReferenceApplication_P.LongitudinalDriverModel_tShift) &&
            ((FCEvReferenceApplication_B.uDLookupTable > 0.0) &&
             (FCEvReferenceApplication_B.PassThrough.u > 0.0))) {
          /* Transition: '<S41>:365' */
          FCEvReferenceApplication_DW.GearState++;
          FCEvReferenceApplication_DW.is_GearSelect =
            FCEvReferenceApplication_IN_Odd;
          FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;

          /* Entry 'Odd': '<S41>:356' */
          FCEvReferenceApplication_B.Gear =
            FCEvReferenceApplication_DW.GearState;
        } else if ((rtb_Saturation_k >=
                    FCEvReferenceApplication_P.LongitudinalDriverModel_tShift) &&
                   (FCEvReferenceApplication_B.uDLookupTable < 0.0)) {
          /* Transition: '<S41>:376' */
          FCEvReferenceApplication_DW.GearState--;
          FCEvReferenceApplication_DW.is_GearSelect =
            FCEvReferenceApplica_IN_Reverse;
          FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;

          /* Entry 'Reverse': '<S41>:375' */
          FCEvReferenceApplication_B.Gear = -1.0;
        }
        break;

       case FCEvReferenceApplication_IN_Odd:
        /* During 'Odd': '<S41>:356' */
        if (((ssGetTaskTime(rtS,1) - FCEvReferenceApplication_DW.previousTime) +
             FCEvReferenceApplication_DW.temporalCounter_i1 >=
             FCEvReferenceApplication_P.LongitudinalDriverModel_tShift) &&
            (((FCEvReferenceApplication_B.PassThrough_b.u >= 0.0) &&
              (FCEvReferenceApplication_B.xdot <= 0.0) &&
              (FCEvReferenceApplication_B.PassThrough.u <= 0.0)) ||
             (FCEvReferenceApplication_B.uDLookupTable <= 0.0))) {
          /* Transition: '<S41>:467' */
          FCEvReferenceApplication_DW.GearState--;
          FCEvReferenceApplication_DW.is_GearSelect =
            FCEvReferenceApplica_IN_Neutral;
          FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;

          /* Entry 'Neutral': '<S41>:355' */
          FCEvReferenceApplication_B.Gear = 0.0;
        }
        break;

       default:
        /* During 'Reverse': '<S41>:375' */
        if (((ssGetTaskTime(rtS,1) - FCEvReferenceApplication_DW.previousTime) +
             FCEvReferenceApplication_DW.temporalCounter_i1 >=
             FCEvReferenceApplication_P.LongitudinalDriverModel_tShift) &&
            (FCEvReferenceApplication_B.uDLookupTable >= 0.0)) {
          /* Transition: '<S41>:377' */
          FCEvReferenceApplication_DW.GearState++;
          FCEvReferenceApplication_DW.is_GearSelect =
            FCEvReferenceApplica_IN_Neutral;
          FCEvReferenceApplication_DW.temporalCounter_i1 = 0.0;

          /* Entry 'Neutral': '<S41>:355' */
          FCEvReferenceApplication_B.Gear = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S39>/Shift Controller' */

    /* Constant: '<S40>/Constant1' */
    FCEvReferenceApplication_B.Constant1 =
      FCEvReferenceApplication_P.Constant1_Value;

    /* RelationalOperator: '<S42>/Compare' incorporates:
     *  Constant: '<S42>/Constant'
     */
    if (ssIsModeUpdateTimeStep(rtS)) {
      FCEvReferenceApplication_DW.Compare_Mode =
        (FCEvReferenceApplication_B.uDLookupTable !=
         FCEvReferenceApplication_P.Constant_Value);
    }

    /* Logic: '<S40>/Logical Operator' incorporates:
     *  Constant: '<S43>/Constant'
     *  RelationalOperator: '<S42>/Compare'
     *  RelationalOperator: '<S43>/Compare'
     */
    FCEvReferenceApplication_B.LogicalOperator =
      (FCEvReferenceApplication_DW.Compare_Mode &&
       (FCEvReferenceApplication_B.Gear >
        FCEvReferenceApplication_P.Constant_Value_n));

    /* Constant: '<S40>/Constant' */
    FCEvReferenceApplication_B.Constant_l =
      FCEvReferenceApplication_P.Constant_Value_f;
  }

  /* Switch: '<S40>/Switch' incorporates:
   *  Switch: '<S40>/Switch1'
   */
  if (FCEvReferenceApplication_B.LogicalOperator) {
    /* Switch: '<S40>/Switch2' */
    if (FCEvReferenceApplication_B.Gear != 0.0) {
      /* Switch: '<S40>/Switch' */
      FCEvReferenceApplication_B.Switch_b[0] =
        FCEvReferenceApplication_B.PassThrough.u;
    } else {
      /* Switch: '<S40>/Switch' */
      FCEvReferenceApplication_B.Switch_b[0] =
        FCEvReferenceApplication_B.Constant1;
    }

    /* End of Switch: '<S40>/Switch2' */

    /* Switch: '<S40>/Switch' */
    FCEvReferenceApplication_B.Switch_b[1] =
      FCEvReferenceApplication_B.PassThrough_b.u;
  } else if (FCEvReferenceApplication_B.Gear != 0.0) {
    /* Switch: '<S40>/Switch' incorporates:
     *  Switch: '<S40>/Switch1'
     */
    FCEvReferenceApplication_B.Switch_b[0] =
      FCEvReferenceApplication_B.PassThrough_b.u;
    FCEvReferenceApplication_B.Switch_b[1] =
      FCEvReferenceApplication_B.PassThrough.u;
  } else {
    /* Switch: '<S40>/Switch' incorporates:
     *  MinMax: '<S40>/MinMax'
     *  Switch: '<S40>/Switch1'
     */
    FCEvReferenceApplication_B.Switch_b[0] =
      FCEvReferenceApplication_B.Constant_l;
    FCEvReferenceApplication_B.Switch_b[1] = fmax
      (FCEvReferenceApplication_B.PassThrough_b.u,
       FCEvReferenceApplication_B.PassThrough.u);
  }

  /* End of Switch: '<S40>/Switch' */

  /* RateTransition: '<S7>/Rate Transition' incorporates:
   *  RateTransition: '<S7>/Rate Transition1'
   */
  if (ssIsSampleHit(rtS, 1, 0)) {
    if (FCEvReferenceApplication_DW.RateTransition_semaphoreTaken == 0) {
      FCEvReferenceApplication_DW.RateTransition_Buffer0 =
        FCEvReferenceApplication_B.Switch_b[0];
    }

    if (FCEvReferenceApplication_DW.RateTransition1_semaphoreTake_h == 0) {
      FCEvReferenceApplication_DW.RateTransition1_Buffer0_m =
        FCEvReferenceApplication_B.Switch_b[1];
    }
  }

  if (ssIsSampleHit(rtS, 2, 0)) {
    FCEvReferenceApplication_DW.RateTransition_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition' */
    FCEvReferenceApplication_B.RateTransition =
      FCEvReferenceApplication_DW.RateTransition_Buffer0;
    FCEvReferenceApplication_DW.RateTransition_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S7>/Rate Transition' */

  /* RateTransition: '<S7>/Rate Transition2' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition2_semaphoreTaken == 0)) {
    FCEvReferenceApplication_DW.RateTransition2_Buffer0 =
      FCEvReferenceApplication_B.xdot;
  }

  /* RateTransition: '<S7>/Rate Transition1' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    FCEvReferenceApplication_DW.RateTransition1_semaphoreTake_h = 1;

    /* RateTransition: '<S7>/Rate Transition1' */
    FCEvReferenceApplication_B.RateTransition1 =
      FCEvReferenceApplication_DW.RateTransition1_Buffer0_m;
    FCEvReferenceApplication_DW.RateTransition1_semaphoreTake_h = 0;
  }

  /* RateTransition: '<S7>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition3_semaphoreTaken == 0)) {
    FCEvReferenceApplication_DW.RateTransition3_Buffer0 =
      FCEvReferenceApplication_B.BattSoc;
  }

  /* RateTransition: '<S7>/Rate Transition2' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    FCEvReferenceApplication_DW.RateTransition2_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition2' */
    FCEvReferenceApplication_B.RateTransition2 =
      FCEvReferenceApplication_DW.RateTransition2_Buffer0;
    FCEvReferenceApplication_DW.RateTransition2_semaphoreTaken = 0;
  }

  /* RateTransition: '<S7>/Rate Transition6' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition6_semaphoreTaken == 0)) {
    FCEvReferenceApplication_DW.RateTransition6_Buffer0 =
      FCEvReferenceApplication_B.MotSpd;
  }

  /* RateTransition: '<S7>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    FCEvReferenceApplication_DW.RateTransition3_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition3' */
    FCEvReferenceApplication_B.RateTransition3 =
      FCEvReferenceApplication_DW.RateTransition3_Buffer0;
    FCEvReferenceApplication_DW.RateTransition3_semaphoreTaken = 0;
  }

  /* RateTransition: '<S7>/Rate Transition7' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition7_semaphoreTaken == 0)) {
    FCEvReferenceApplication_DW.RateTransition7_Buffer0 =
      FCEvReferenceApplication_B.ElectricPlant_o5;
  }

  /* RateTransition: '<S7>/Rate Transition6' incorporates:
   *  RateTransition: '<S7>/Rate Transition7'
   */
  if (ssIsSampleHit(rtS, 2, 0)) {
    FCEvReferenceApplication_DW.RateTransition6_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition6' */
    FCEvReferenceApplication_B.RateTransition6 =
      FCEvReferenceApplication_DW.RateTransition6_Buffer0;
    FCEvReferenceApplication_DW.RateTransition6_semaphoreTaken = 0;
    FCEvReferenceApplication_DW.RateTransition7_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition7' */
    FCEvReferenceApplication_B.RateTransition7 =
      FCEvReferenceApplication_DW.RateTransition7_Buffer0;
    FCEvReferenceApplication_DW.RateTransition7_semaphoreTaken = 0;

    /* ModelReference: '<S1>/Powertrain Control Module (PCM)' */
    FCEvPowertrainController
      (&(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtm),
       &FCEvReferenceApplication_B.RateTransition,
       &FCEvReferenceApplication_B.RateTransition1,
       &FCEvReferenceApplication_B.RateTransition2,
       &FCEvReferenceApplication_B.RateTransition3,
       &FCEvReferenceApplication_B.RateTransition6,
       &FCEvReferenceApplication_B.RateTransition7,
       &FCEvReferenceApplication_B.Gain_g,
       &FCEvReferenceApplication_B.MotTrqCmd_j,
       &FCEvReferenceApplication_B.BrkCmd,
       &FCEvReferenceApplication_B.PowertrainControlModulePCM_o3,
       &rtb_PowertrainControlModulePCM_, &rtb_PowertrainControlModulePC_h,
       &rtb_PowertrainControlModulePC_m,
       &(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtb),
       &(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtdw));

    /* Gain: '<Root>/Gain2' */
    FCEvReferenceApplication_B.Gain2 = FCEvReferenceApplication_P.Gain2_Gain *
      rtb_PowertrainControlModulePC_h;
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    /* ToWorkspace: '<Root>/To Workspace' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace_PWORK.LoggedData),
                      &FCEvReferenceApplication_B.Gain2, 0);
    }

    /* ToWorkspace: '<Root>/To Workspace1' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace1_PWORK.LoggedData),
                      &FCEvReferenceApplication_B.ElectricPlant_o9, 0);
    }
  }

  if (ssIsSampleHit(rtS, 2, 0)) {
    /* Saturate: '<Root>/Saturation' */
    if (rtb_PowertrainControlModulePC_m >
        FCEvReferenceApplication_P.Saturation_UpperSat_eq) {
      rtb_Saturation_k = FCEvReferenceApplication_P.Saturation_UpperSat_eq;
    } else if (rtb_PowertrainControlModulePC_m <
               FCEvReferenceApplication_P.Saturation_LowerSat_l) {
      rtb_Saturation_k = FCEvReferenceApplication_P.Saturation_LowerSat_l;
    } else {
      rtb_Saturation_k = rtb_PowertrainControlModulePC_m;
    }

    /* Gain: '<Root>/Gain1' incorporates:
     *  Saturate: '<Root>/Saturation'
     */
    FCEvReferenceApplication_B.Gain1 = FCEvReferenceApplication_P.Gain1_Gain *
      rtb_Saturation_k;
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    /* ToWorkspace: '<Root>/To Workspace2' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace2_PWORK.LoggedData),
                      &FCEvReferenceApplication_B.Gain1, 0);
    }
  }

  /* RateTransition: '<S7>/Rate Transition4' incorporates:
   *  RateTransition: '<S7>/Rate Transition5'
   */
  if (ssIsSampleHit(rtS, 1, 0)) {
    if (FCEvReferenceApplication_DW.RateTransition4_semaphoreTaken == 0) {
      FCEvReferenceApplication_DW.RateTransition4_Buffer0 =
        FCEvReferenceApplication_B.BattPwr;
    }

    if (FCEvReferenceApplication_DW.RateTransition5_semaphoreTaken == 0) {
      FCEvReferenceApplication_DW.RateTransition5_Buffer0 =
        FCEvReferenceApplication_B.BattCurr;
    }
  }

  if (ssIsSampleHit(rtS, 2, 0)) {
    FCEvReferenceApplication_DW.RateTransition4_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition4' */
    FCEvReferenceApplication_B.RateTransition4 =
      FCEvReferenceApplication_DW.RateTransition4_Buffer0;
    FCEvReferenceApplication_DW.RateTransition4_semaphoreTaken = 0;
    FCEvReferenceApplication_DW.RateTransition5_semaphoreTaken = 1;

    /* RateTransition: '<S7>/Rate Transition5' */
    FCEvReferenceApplication_B.RateTransition5 =
      FCEvReferenceApplication_DW.RateTransition5_Buffer0;
    FCEvReferenceApplication_DW.RateTransition5_semaphoreTaken = 0;
  }

  /* End of RateTransition: '<S7>/Rate Transition4' */
  if (ssIsSampleHit(rtS, 3, 0)) {
    /* DigitalClock: '<S11>/Digital Clock' */
    FCEvReferenceApplication_B.DigitalClock = ssGetTaskTime(rtS,3);
  }

  /* Sum: '<S11>/Add1' */
  FCEvReferenceApplication_B.Add1 = rtb_USMPG -
    FCEvReferenceApplication_B.DigitalClock;
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S3>/Constant2' */
    FCEvReferenceApplication_B.Grade =
      FCEvReferenceApplication_P.Constant2_Value;

    /* Constant: '<S3>/Constant3' */
    FCEvReferenceApplication_B.wind_x =
      FCEvReferenceApplication_P.Constant3_Value;
  }

  /* MATLAB Function: '<S25>/Setup' */
  /* MATLAB Function 'Longitudinal Driver/Control/Predictive/Setup': '<S30>:1' */
  /* '<S30>:1:5' */
  rtb_Saturation_k = fabs(FCEvReferenceApplication_B.xdot);
  rtb_RelationalOperator = (rtb_Saturation_k < 0.001);
  trueCount = 0;
  if (rtb_RelationalOperator) {
    trueCount = 1;
  }

  if (trueCount - 1 >= 0) {
    rtb_G_idx_1 = rtb_Saturation_k / 0.001;
    sigmaB_idx_0 = 0.002 / (3.0 - rtb_G_idx_1 * rtb_G_idx_1);
  }

  if (rtb_RelationalOperator) {
    rtb_Saturation_k = sigmaB_idx_0;
  }

  rtb_RelationalOperator = (FCEvReferenceApplication_B.xdot < 0.0);
  trueCount = -1;
  if (rtb_RelationalOperator) {
    trueCount = 0;
  }

  if (trueCount >= 0) {
    sigmaB_idx_0 = -rtb_Saturation_k;
  }

  rtb_G_idx_1 = rtb_Saturation_k;
  if (rtb_RelationalOperator) {
    rtb_G_idx_1 = sigmaB_idx_0;
  }

  if (rtb_Saturation_k > 5.0) {
    rtb_Saturation_k = fmax(fmin
      (FCEvReferenceApplication_P.LongitudinalDriverModel_tau,
       FCEvReferenceApplication_P.LongitudinalDriverModel_L / rtb_Saturation_k),
      0.001);
  } else {
    rtb_Saturation_k = FCEvReferenceApplication_P.LongitudinalDriverModel_tau;
  }

  rtb_F[0] = 0.0;
  rtb_F[2] = 1.0;
  rtb_F[1] = -((FCEvReferenceApplication_P.LongitudinalDriverModel_aR /
                rtb_G_idx_1 +
                FCEvReferenceApplication_P.LongitudinalDriverModel_cR *
                FCEvReferenceApplication_B.xdot) * tanh
               (FCEvReferenceApplication_B.xdot) +
               FCEvReferenceApplication_P.LongitudinalDriverModel_bR) /
    FCEvReferenceApplication_P.LongitudinalDriverModel_m;
  rtb_F[3] = 0.0;
  rtb_G_idx_1 = FCEvReferenceApplication_P.LongitudinalDriverModel_Kpt /
    FCEvReferenceApplication_P.LongitudinalDriverModel_m;
  sigmaA[0] = 0.0;
  sigmaB_idx_0 = 0.0;
  sigmaA[1] = 0.0;
  sigmaB_idx_1 = 0.0;
  sigmaA[2] = 0.0;
  sigmaB_idx_2 = 0.0;
  sigmaA[3] = 0.0;
  sigmaB_idx_3 = 0.0;
  for (trueCount = 0; trueCount < 15; trueCount++) {
    real_T b_tmp;
    real_T e;
    real_T e_0;
    real_T sigmaA_tmp;
    FCEvReferenceApplication_mpower(rtb_F, (real_T)trueCount + 1.0, a_tmp);
    b_tmp = rt_powd_snf(rtb_Saturation_k, (real_T)trueCount + 1.0);
    e = e_1[trueCount + 1];
    e_0 = e_1[trueCount];
    sigmaA_tmp = a_tmp[0] * b_tmp;
    sigmaA[0] += sigmaA_tmp / e;
    sigmaB_idx_0 += sigmaA_tmp / e_0;
    sigmaA_tmp = a_tmp[1] * b_tmp;
    sigmaA[1] += sigmaA_tmp / e;
    sigmaB_idx_1 += sigmaA_tmp / e_0;
    sigmaA_tmp = a_tmp[2] * b_tmp;
    sigmaA[2] += sigmaA_tmp / e;
    sigmaB_idx_2 += sigmaA_tmp / e_0;
    sigmaA_tmp = a_tmp[3] * b_tmp;
    sigmaA[3] += sigmaA_tmp / e;
    sigmaB_idx_3 += sigmaA_tmp / e_0;
  }

  rtb_Saturation_k = ((sigmaA[0] + 1.0) * rtb_Saturation_k + rtb_Saturation_k *
                      sigmaA[1]) * 0.0 + ((sigmaA[3] + 1.0) * rtb_Saturation_k +
    rtb_Saturation_k * sigmaA[2]) * rtb_G_idx_1;

  /* MATLAB Function: '<S25>/Vehicle' */
  /* '<S30>:1:5' */
  /* MATLAB Function 'Longitudinal Driver/Control/Predictive/Vehicle': '<S31>:1' */
  /* '<S31>:1:4' */
  a_tmp[0] = 0.0;
  a_tmp[1] = rtb_F[1] * 0.001;
  a_tmp[2] = 0.001;
  a_tmp[3] = 0.0;
  FCEvReferenceApplication_expm(a_tmp, sigmaA);
  a_tmp[0] = 0.0;
  a_tmp[1] = rtb_F[1] * 0.0;
  a_tmp[2] = 0.0;
  a_tmp[3] = 0.0;
  FCEvReferenceApplication_expm(a_tmp, b_a);
  a_tmp[0] = 0.0;
  a_tmp[1] = rtb_F[1] * 0.001;
  a_tmp[2] = 0.001;
  a_tmp[3] = 0.0;
  FCEvReferenceApplication_expm(a_tmp, rtb_F);

  /* Product: '<S25>/Product1' incorporates:
   *  MATLAB Function: '<S25>/Setup'
   *  MATLAB Function: '<S25>/Vehicle'
   */
  FCEvReferenceApplication_B.Product1 = (((b_a[0] * 0.0 + b_a[2] * rtb_G_idx_1)
    + (rtb_F[0] * 0.0 + rtb_F[2] * rtb_G_idx_1)) / 2.0 * 0.001 *
    FCEvReferenceApplication_B.Add + (sigmaA[0] *
    FCEvReferenceApplication_B.xdot + sigmaA[2] * 0.0)) * ((sigmaB_idx_0 + 1.0)
    + sigmaB_idx_1) + (((b_a[1] * 0.0 + b_a[3] * rtb_G_idx_1) + (rtb_F[1] * 0.0
    + rtb_F[3] * rtb_G_idx_1)) / 2.0 * 0.001 * FCEvReferenceApplication_B.Add +
                       (sigmaA[1] * FCEvReferenceApplication_B.xdot + sigmaA[3] *
                        0.0)) * ((sigmaB_idx_3 + 1.0) + sigmaB_idx_2);

  /* Product: '<S25>/Product' incorporates:
   *  MATLAB Function: '<S25>/Setup'
   */
  FCEvReferenceApplication_B.Product = FCEvReferenceApplication_B.Add *
    rtb_Saturation_k;

  /* Sum: '<S25>/Add2' */
  FCEvReferenceApplication_B.ytT = FCEvReferenceApplication_B.Product1 +
    FCEvReferenceApplication_B.Product;

  /* Sum: '<S25>/Add4' */
  FCEvReferenceApplication_B.etT = FCEvReferenceApplication_B.uDLookupTable -
    FCEvReferenceApplication_B.ytT;

  /* Product: '<S25>/Divide' incorporates:
   *  MATLAB Function: '<S25>/Setup'
   */
  FCEvReferenceApplication_B.Divide = FCEvReferenceApplication_B.etT /
    rtb_Saturation_k;

  /* Sum: '<S25>/Add1' */
  FCEvReferenceApplication_B.u_ot = FCEvReferenceApplication_B.Divide +
    FCEvReferenceApplication_B.Integrator1;
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S27>/Constant' */
    FCEvReferenceApplication_B.Constant_a = 1.0 /
      FCEvReferenceApplication_P.LongitudinalDriverModel_tau *
      3.1415926535897931 * 2.0;
  }

  /* Sum: '<S27>/Sum' */
  FCEvReferenceApplication_B.Sum = FCEvReferenceApplication_B.u_ot -
    FCEvReferenceApplication_B.Integrator1;

  /* Product: '<S27>/Divide' */
  FCEvReferenceApplication_B.Divide_j = FCEvReferenceApplication_B.Sum *
    FCEvReferenceApplication_B.Constant_a;

  /* Sum: '<S20>/Sum7' */
  FCEvReferenceApplication_B.Sum7 = FCEvReferenceApplication_B.uDLookupTable -
    FCEvReferenceApplication_B.xdot;

  /* Product: '<S38>/Product' incorporates:
   *  UnitConversion: '<S23>/Unit Conversion'
   */
  /* Unit Conversion - from: m/s to: m/s
     Expression: output = (1*input) + (0) */
  FCEvReferenceApplication_B.Product_m = FCEvReferenceApplication_B.Sum7 *
    FCEvReferenceApplication_B.Sum7;
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* UnitDelay: '<S38>/Unit Delay' */
    FCEvReferenceApplication_B.UnitDelay[0] =
      FCEvReferenceApplication_DW.UnitDelay_DSTATE[0];
    FCEvReferenceApplication_B.UnitDelay[1] =
      FCEvReferenceApplication_DW.UnitDelay_DSTATE[1];
  }

  /* Switch: '<S38>/Switch' incorporates:
   *  RelationalOperator: '<S38>/Relational Operator'
   *  RelationalOperator: '<S38>/Relational Operator1'
   *  UnitConversion: '<S23>/Unit Conversion'
   */
  if (FCEvReferenceApplication_B.Sum7 > FCEvReferenceApplication_B.UnitDelay[0])
  {
    /* Switch: '<S38>/Switch' */
    FCEvReferenceApplication_B.Switch_p[0] = FCEvReferenceApplication_B.Sum7;
  } else {
    /* Switch: '<S38>/Switch' */
    FCEvReferenceApplication_B.Switch_p[0] =
      FCEvReferenceApplication_B.UnitDelay[0];
  }

  if (FCEvReferenceApplication_B.Sum7 < FCEvReferenceApplication_B.UnitDelay[1])
  {
    /* Switch: '<S38>/Switch' */
    FCEvReferenceApplication_B.Switch_p[1] = FCEvReferenceApplication_B.Sum7;
  } else {
    /* Switch: '<S38>/Switch' */
    FCEvReferenceApplication_B.Switch_p[1] =
      FCEvReferenceApplication_B.UnitDelay[1];
  }

  /* End of Switch: '<S38>/Switch' */

  /* TransferFcn: '<S45>/Motor Coupling Dynamics' */
  FCEvReferenceApplication_B.MotTrq_f = 0.0;
  FCEvReferenceApplication_B.MotTrq_f +=
    FCEvReferenceApplication_P.MotorCouplingDynamics_C *
    FCEvReferenceApplication_X.MotorCouplingDynamics_CSTATE;

  /* FirstOrderHold: '<S45>/First Order Hold' */
  FCEvReferenceApplication_B.BrkCmd_f = FCEvReferenceApplication_DW.Ck_g;

  /* FirstOrderHold: '<S45>/First Order Hold' */
  if (FCEvReferenceApplication_DW.Tk_a != (rtInf)) {
    /* FirstOrderHold: '<S45>/First Order Hold' */
    FCEvReferenceApplication_B.BrkCmd_f += (rtb_USMPG -
      FCEvReferenceApplication_DW.Tk_a) * FCEvReferenceApplication_DW.Mk_h;
  }

  /* Gain: '<S6>/m//s to mph' */
  FCEvReferenceApplication_B.mstomph[0] =
    FCEvReferenceApplication_P.mstomph_Gain *
    FCEvReferenceApplication_B.uDLookupTable;
  FCEvReferenceApplication_B.mstomph[1] =
    FCEvReferenceApplication_P.mstomph_Gain * FCEvReferenceApplication_B.xdot;

  /* RateTransition: '<S6>/Rate Transition4' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition4_semaphoreTake_d == 0)) {
    FCEvReferenceApplication_DW.RateTransition4_Buffer0_b[0] =
      FCEvReferenceApplication_B.mstomph[0];
    FCEvReferenceApplication_DW.RateTransition4_Buffer0_b[1] =
      FCEvReferenceApplication_B.mstomph[1];
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    FCEvReferenceApplication_DW.RateTransition4_semaphoreTake_d = 1;
    rtb_TraceVelocityTargetActualmp[0] =
      FCEvReferenceApplication_DW.RateTransition4_Buffer0_b[0];
    rtb_TraceVelocityTargetActualmp[1] =
      FCEvReferenceApplication_DW.RateTransition4_Buffer0_b[1];
    FCEvReferenceApplication_DW.RateTransition4_semaphoreTake_d = 0;
  }

  /* End of RateTransition: '<S6>/Rate Transition4' */

  /* Gain: '<S6>/rad//s to RPM' */
  FCEvReferenceApplication_B.radstoRPM =
    FCEvReferenceApplication_P.radstoRPM_Gain *
    FCEvReferenceApplication_B.MotSpd;

  /* RateTransition: '<S6>/Rate Transition2' incorporates:
   *  RateTransition: '<S6>/Rate Transition5'
   */
  if (ssIsSampleHit(rtS, 1, 0)) {
    if (FCEvReferenceApplication_DW.RateTransition2_semaphoreTake_p == 0) {
      FCEvReferenceApplication_DW.RateTransition2_Buffer0_k =
        FCEvReferenceApplication_B.radstoRPM;
    }

    if (FCEvReferenceApplication_DW.RateTransition5_semaphoreTake_i == 0) {
      FCEvReferenceApplication_DW.RateTransition5_Buffer0_d =
        FCEvReferenceApplication_B.MotTrq;
    }
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    FCEvReferenceApplication_DW.RateTransition2_semaphoreTake_p = 1;
    rtb_MotorSpeedRPM = FCEvReferenceApplication_DW.RateTransition2_Buffer0_k;
    FCEvReferenceApplication_DW.RateTransition2_semaphoreTake_p = 0;
  }

  /* End of RateTransition: '<S6>/Rate Transition2' */

  /* RateTransition: '<S6>/Rate Transition6' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition6_semaphoreTake_e == 0)) {
    FCEvReferenceApplication_DW.RateTransition6_Buffer0_e =
      FCEvReferenceApplication_B.BattCurr;
  }

  /* RateTransition: '<S6>/Rate Transition5' */
  if (ssIsSampleHit(rtS, 4, 0)) {
    FCEvReferenceApplication_DW.RateTransition5_semaphoreTake_i = 1;
    rtb_MotorTorqueNm = FCEvReferenceApplication_DW.RateTransition5_Buffer0_d;
    FCEvReferenceApplication_DW.RateTransition5_semaphoreTake_i = 0;
  }

  /* RateTransition: '<S6>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_e == 0)) {
    FCEvReferenceApplication_DW.RateTransition3_Buffer0_d =
      FCEvReferenceApplication_B.ElectricPlant_o5;
  }

  /* RateTransition: '<S6>/Rate Transition6' */
  if (ssIsSampleHit(rtS, 4, 0)) {
    FCEvReferenceApplication_DW.RateTransition6_semaphoreTake_e = 1;
    rtb_BatteryCurrentA = FCEvReferenceApplication_DW.RateTransition6_Buffer0_e;
    FCEvReferenceApplication_DW.RateTransition6_semaphoreTake_e = 0;
  }

  /* RateTransition: '<S6>/Rate Transition7' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition7_semaphoreTake_h == 0)) {
    FCEvReferenceApplication_DW.RateTransition7_Buffer0_j =
      FCEvReferenceApplication_B.FCCurr;
  }

  /* RateTransition: '<S6>/Rate Transition3' incorporates:
   *  RateTransition: '<S6>/Rate Transition7'
   */
  if (ssIsSampleHit(rtS, 4, 0)) {
    FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_e = 1;
    rtb_FuelCellVoltageV = FCEvReferenceApplication_DW.RateTransition3_Buffer0_d;
    FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_e = 0;
    FCEvReferenceApplication_DW.RateTransition7_semaphoreTake_h = 1;
    rtb_FuelCellCurrentA = FCEvReferenceApplication_DW.RateTransition7_Buffer0_j;
    FCEvReferenceApplication_DW.RateTransition7_semaphoreTake_h = 0;
  }

  /* Integrator: '<S48>/Integrator' */
  FCEvReferenceApplication_B.Integrator =
    FCEvReferenceApplication_X.Integrator_CSTATE;

  /* Integrator: '<S48>/Integrator1' */
  FCEvReferenceApplication_B.Integrator1_d =
    FCEvReferenceApplication_X.Integrator1_CSTATE_j;

  /* Gain: '<S48>/m^3 to US Gal' */
  FCEvReferenceApplication_B.m3toUSGal =
    FCEvReferenceApplication_P.m3toUSGal_Gain *
    FCEvReferenceApplication_B.Integrator1_d;

  /* Saturate: '<S48>/Saturation1' */
  if (ssIsModeUpdateTimeStep(rtS)) {
    FCEvReferenceApplication_DW.Saturation1_MODE =
      FCEvReferenceApplication_B.m3toUSGal >=
      FCEvReferenceApplication_P.Saturation1_UpperSat ? 1 :
      FCEvReferenceApplication_B.m3toUSGal >
      FCEvReferenceApplication_P.Saturation1_LowerSat ? 0 : -1;
  }

  /* Product: '<S48>/US MPG Calc' incorporates:
   *  Gain: '<S48>/m to mile'
   *  Saturate: '<S48>/Saturation1'
   */
  FCEvReferenceApplication_B.USMPGCalc = FCEvReferenceApplication_P.mtomile_Gain
    * FCEvReferenceApplication_B.Integrator /
    (FCEvReferenceApplication_DW.Saturation1_MODE == 1 ?
     FCEvReferenceApplication_P.Saturation1_UpperSat :
     FCEvReferenceApplication_DW.Saturation1_MODE == -1 ?
     FCEvReferenceApplication_P.Saturation1_LowerSat :
     FCEvReferenceApplication_B.m3toUSGal);

  /* RateTransition: '<S48>/Rate Transition3' */
  if (ssIsSampleHit(rtS, 1, 0) &&
      (FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_g == 0)) {
    FCEvReferenceApplication_DW.RateTransition3_Buffer0_g =
      FCEvReferenceApplication_B.USMPGCalc;
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_g = 1;
    rtb_USMPG = FCEvReferenceApplication_DW.RateTransition3_Buffer0_g;
    FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_g = 0;

    /* Product: '<S6>/Product' */
    rtb_MotorSpeedRPM = rtb_FuelCellVoltageV * rtb_FuelCellCurrentA;
  }

  /* End of RateTransition: '<S48>/Rate Transition3' */

  /* Gain: '<S48>/m to 100Km' */
  FCEvReferenceApplication_B.mto100Km = FCEvReferenceApplication_P.mto100Km_Gain
    * FCEvReferenceApplication_B.Integrator;

  /* Saturate: '<S48>/Saturation' */
  if (ssIsModeUpdateTimeStep(rtS)) {
    FCEvReferenceApplication_DW.Saturation_MODE_k =
      FCEvReferenceApplication_B.mto100Km >=
      FCEvReferenceApplication_P.Saturation_UpperSat_d ? 1 :
      FCEvReferenceApplication_B.mto100Km >
      FCEvReferenceApplication_P.Saturation_LowerSat_ln ? 0 : -1;
  }

  /* Product: '<S48>/L//100 Km Calc' incorporates:
   *  Gain: '<S48>/m^3 to L'
   *  Saturate: '<S48>/Saturation'
   */
  FCEvReferenceApplication_B.L100Km = 1.0 /
    (FCEvReferenceApplication_DW.Saturation_MODE_k == 1 ?
     FCEvReferenceApplication_P.Saturation_UpperSat_d :
     FCEvReferenceApplication_DW.Saturation_MODE_k == -1 ?
     FCEvReferenceApplication_P.Saturation_LowerSat_ln :
     FCEvReferenceApplication_B.mto100Km) *
    (FCEvReferenceApplication_P.m3toL_Gain *
     FCEvReferenceApplication_B.Integrator1_d);
  if (ssIsSampleHit(rtS, 4, 0)) {
    /* ToWorkspace: '<S6>/To Workspace1' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace1_PWORK_c.LoggedData),
                      &FCEvReferenceApplication_B.L100Km, 0);
    }

    /* ToWorkspace: '<S6>/To Workspace2' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace2_PWORK_i.LoggedData),
                      &rtb_BatterySOC, 0);
    }

    /* ToWorkspace: '<S6>/To Workspace3' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace3_PWORK.LoggedData),
                      &FCEvReferenceApplication_B.Gain, 0);
    }

    /* ToWorkspace: '<S6>/To Workspace4' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace4_PWORK.LoggedData),
                      &FCEvReferenceApplication_B.Derivative, 0);
    }
  }

  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S48>/w to kw' */
    FCEvReferenceApplication_B.wtokw = FCEvReferenceApplication_P.wtokw_Value;

    /* Constant: '<S48>/US EPA kwh//USgal equivalent' */
    FCEvReferenceApplication_B.USEPAkwhUSgalequivalent =
      FCEvReferenceApplication_P.USEPAkwhUSgalequivalent_Value;
  }

  /* Product: '<S48>/Divide' */
  FCEvReferenceApplication_B.Divide_c = FCEvReferenceApplication_B.BattPwr /
    FCEvReferenceApplication_B.wtokw;

  /* Product: '<S48>/Divide2' */
  FCEvReferenceApplication_B.Divide2 = FCEvReferenceApplication_B.Divide_c /
    FCEvReferenceApplication_B.USEPAkwhUSgalequivalent;
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* Constant: '<S48>/s per h' */
    FCEvReferenceApplication_B.sperh = FCEvReferenceApplication_P.sperh_Value;
  }

  /* Product: '<S48>/Divide1' */
  FCEvReferenceApplication_B.GasGallonss = FCEvReferenceApplication_B.Divide2 /
    FCEvReferenceApplication_B.sperh;

  /* Gain: '<S48>/kg//s to Gas gal//s' */
  FCEvReferenceApplication_B.Gasgals =
    FCEvReferenceApplication_P.kgstoGasgals_Gain *
    FCEvReferenceApplication_B.H2Flow;

  /* Sum: '<S48>/Add' */
  FCEvReferenceApplication_B.Add_b = FCEvReferenceApplication_B.GasGallonss +
    FCEvReferenceApplication_B.Gasgals;

  /* Product: '<S48>/Product' */
  FCEvReferenceApplication_B.Product_e = FCEvReferenceApplication_B.xdot *
    FCEvReferenceApplication_B.xdot;

  /* Sqrt: '<S48>/Sqrt' */
  if (ssIsMajorTimeStep(rtS)) {
    if (FCEvReferenceApplication_DW.Sqrt_DWORK1 != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      FCEvReferenceApplication_DW.Sqrt_DWORK1 = 0;
    }

    /* Sqrt: '<S48>/Sqrt' */
    FCEvReferenceApplication_B.Sqrt = sqrt(FCEvReferenceApplication_B.Product_e);
  } else {
    if (FCEvReferenceApplication_B.Product_e < 0.0) {
      /* Sqrt: '<S48>/Sqrt' */
      FCEvReferenceApplication_B.Sqrt = -sqrt(fabs
        (FCEvReferenceApplication_B.Product_e));
    } else {
      /* Sqrt: '<S48>/Sqrt' */
      FCEvReferenceApplication_B.Sqrt = sqrt
        (FCEvReferenceApplication_B.Product_e);
    }

    if (FCEvReferenceApplication_B.Product_e < 0.0) {
      FCEvReferenceApplication_DW.Sqrt_DWORK1 = 1;
    }
  }

  /* End of Sqrt: '<S48>/Sqrt' */

  /* Gain: '<S48>/m^3 per gal' */
  FCEvReferenceApplication_B.m3pergal = FCEvReferenceApplication_P.m3pergal_Gain
    * FCEvReferenceApplication_B.Add_b;

  /* Clock: '<Root>/Clock' */
  FCEvReferenceApplication_B.Clock = rtb_USMPG_tmp;
  if (ssIsSampleHit(rtS, 1, 0)) {
    /* RelationalOperator: '<Root>/Relational Operator' incorporates:
     *  Constant: '<Root>/pause_time'
     */
    if (ssIsModeUpdateTimeStep(rtS)) {
      FCEvReferenceApplication_DW.RelationalOperator_Mode =
        (FCEvReferenceApplication_B.Clock <=
         FCEvReferenceApplication_P.pause_time_Value);
    }

    /* Assertion: '<Root>/Assertion' incorporates:
     *  RelationalOperator: '<Root>/Relational Operator'
     */
    utAssert(FCEvReferenceApplication_DW.RelationalOperator_Mode);
  }

  if (ssIsSampleHit(rtS, 4, 0)) {
    /* ToWorkspace: '<Root>/To Workspace3' */
    if (ssGetLogOutput(rtS)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (FCEvReferenceApplication_DW.ToWorkspace3_PWORK_j.LoggedData),
                      &FCEvReferenceApplication_B.Clock, 0);
    }
  }

  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
void MdlUpdate(int_T tid)
{
  real_T err;
  real_T tol;
  real_T *lastU;
  boolean_T guard1 = false;

  /* Update for FirstOrderHold: '<S46>/First Order Hold' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    guard1 = false;
    if (!(FCEvReferenceApplication_DW.Tk == (rtInf))) {
      if ((FCEvReferenceApplication_B.MotTrqCmd_j >= -1.0) &&
          (FCEvReferenceApplication_B.MotTrqCmd_j <= 1.0)) {
        tol = FCEvReferenceApplication_P.FirstOrderHold_ErrTol;
      } else if (FCEvReferenceApplication_B.MotTrqCmd_j > 1.0) {
        tol = FCEvReferenceApplication_B.MotTrqCmd_j *
          FCEvReferenceApplication_P.FirstOrderHold_ErrTol;
      } else {
        tol = -(FCEvReferenceApplication_B.MotTrqCmd_j *
                FCEvReferenceApplication_P.FirstOrderHold_ErrTol);
      }

      err = FCEvReferenceApplication_B.MotTrqCmd -
        FCEvReferenceApplication_B.MotTrqCmd_j;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        FCEvReferenceApplication_DW.Mk = (FCEvReferenceApplication_B.MotTrqCmd_j
          - FCEvReferenceApplication_DW.Uk) / (ssGetT(rtS) -
          FCEvReferenceApplication_DW.Tk);
        FCEvReferenceApplication_DW.Ck = FCEvReferenceApplication_B.MotTrqCmd;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (FCEvReferenceApplication_B.MotTrqCmd_j !=
          FCEvReferenceApplication_B.MotTrqCmd) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      FCEvReferenceApplication_DW.Ck = FCEvReferenceApplication_B.MotTrqCmd_j;
      FCEvReferenceApplication_DW.Mk = 0.0;
    }

    FCEvReferenceApplication_DW.Uk = FCEvReferenceApplication_B.MotTrqCmd_j;
    FCEvReferenceApplication_DW.Tk = ssGetT(rtS);
  }

  /* End of Update for FirstOrderHold: '<S46>/First Order Hold' */

  /* Update for ModelReference: '<S5>/Drivetrain' */
  DrivetrainEv_Update(&(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtm),
                      &FCEvReferenceApplication_B.MotTrq_f,
                      &FCEvReferenceApplication_B.BrkCmd_f,
                      &FCEvReferenceApplication_B.Grade,
                      &FCEvReferenceApplication_B.wind_x,
                      &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtb),
                      &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
                      &(FCEvReferenceApplication_X.Drivetrain_CSTATE),
                      &(((XDis_FCEvReferenceApplication_T *)
    ssGetContStateDisabled(rtS))->Drivetrain_CSTATE));

  /* Update for FirstOrderHold: '<S46>/First Order Hold1' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    guard1 = false;
    if (!(FCEvReferenceApplication_DW.Tk_o == (rtInf))) {
      if ((FCEvReferenceApplication_B.PowertrainControlModulePCM_o3 >= -1.0) &&
          (FCEvReferenceApplication_B.PowertrainControlModulePCM_o3 <= 1.0)) {
        tol = FCEvReferenceApplication_P.FirstOrderHold1_ErrTol;
      } else if (FCEvReferenceApplication_B.PowertrainControlModulePCM_o3 > 1.0)
      {
        tol = FCEvReferenceApplication_B.PowertrainControlModulePCM_o3 *
          FCEvReferenceApplication_P.FirstOrderHold1_ErrTol;
      } else {
        tol = -(FCEvReferenceApplication_B.PowertrainControlModulePCM_o3 *
                FCEvReferenceApplication_P.FirstOrderHold1_ErrTol);
      }

      err = FCEvReferenceApplication_B.FCCurrCmd -
        FCEvReferenceApplication_B.PowertrainControlModulePCM_o3;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        FCEvReferenceApplication_DW.Mk_e =
          (FCEvReferenceApplication_B.PowertrainControlModulePCM_o3 -
           FCEvReferenceApplication_DW.Uk_j) / (ssGetT(rtS) -
          FCEvReferenceApplication_DW.Tk_o);
        FCEvReferenceApplication_DW.Ck_d = FCEvReferenceApplication_B.FCCurrCmd;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (FCEvReferenceApplication_B.PowertrainControlModulePCM_o3 !=
          FCEvReferenceApplication_B.FCCurrCmd) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      FCEvReferenceApplication_DW.Ck_d =
        FCEvReferenceApplication_B.PowertrainControlModulePCM_o3;
      FCEvReferenceApplication_DW.Mk_e = 0.0;
    }

    FCEvReferenceApplication_DW.Uk_j =
      FCEvReferenceApplication_B.PowertrainControlModulePCM_o3;
    FCEvReferenceApplication_DW.Tk_o = ssGetT(rtS);
  }

  /* End of Update for FirstOrderHold: '<S46>/First Order Hold1' */

  /* Update for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_Update
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE));

  /* Update for Derivative: '<S6>/Derivative' */
  if (FCEvReferenceApplication_DW.TimeStampA == (rtInf)) {
    FCEvReferenceApplication_DW.TimeStampA = ssGetT(rtS);
    lastU = &FCEvReferenceApplication_DW.LastUAtTimeA;
  } else if (FCEvReferenceApplication_DW.TimeStampB == (rtInf)) {
    FCEvReferenceApplication_DW.TimeStampB = ssGetT(rtS);
    lastU = &FCEvReferenceApplication_DW.LastUAtTimeB;
  } else if (FCEvReferenceApplication_DW.TimeStampA <
             FCEvReferenceApplication_DW.TimeStampB) {
    FCEvReferenceApplication_DW.TimeStampA = ssGetT(rtS);
    lastU = &FCEvReferenceApplication_DW.LastUAtTimeA;
  } else {
    FCEvReferenceApplication_DW.TimeStampB = ssGetT(rtS);
    lastU = &FCEvReferenceApplication_DW.LastUAtTimeB;
  }

  *lastU = FCEvReferenceApplication_B.Gain;

  /* End of Update for Derivative: '<S6>/Derivative' */
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* Update for ModelReference: '<S1>/Powertrain Control Module (PCM)' */
    FCEvPowertrainController_Update
      (&(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtb),
       &(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtdw));

    /* Update for UnitDelay: '<S38>/Unit Delay' */
    FCEvReferenceApplication_DW.UnitDelay_DSTATE[0] =
      FCEvReferenceApplication_B.Switch_p[0];
    FCEvReferenceApplication_DW.UnitDelay_DSTATE[1] =
      FCEvReferenceApplication_B.Switch_p[1];

    /* Update for FirstOrderHold: '<S45>/First Order Hold' */
    guard1 = false;
    if (!(FCEvReferenceApplication_DW.Tk_a == (rtInf))) {
      if ((FCEvReferenceApplication_B.BrkCmd >= -1.0) &&
          (FCEvReferenceApplication_B.BrkCmd <= 1.0)) {
        tol = FCEvReferenceApplication_P.FirstOrderHold_ErrTol_e;
      } else if (FCEvReferenceApplication_B.BrkCmd > 1.0) {
        tol = FCEvReferenceApplication_B.BrkCmd *
          FCEvReferenceApplication_P.FirstOrderHold_ErrTol_e;
      } else {
        tol = -(FCEvReferenceApplication_B.BrkCmd *
                FCEvReferenceApplication_P.FirstOrderHold_ErrTol_e);
      }

      err = FCEvReferenceApplication_B.BrkCmd_f -
        FCEvReferenceApplication_B.BrkCmd;
      if ((err > tol) || (err < -tol)) {
        guard1 = true;
      } else {
        FCEvReferenceApplication_DW.Mk_h = (FCEvReferenceApplication_B.BrkCmd -
          FCEvReferenceApplication_DW.Uk_h) / (ssGetT(rtS) -
          FCEvReferenceApplication_DW.Tk_a);
        FCEvReferenceApplication_DW.Ck_g = FCEvReferenceApplication_B.BrkCmd_f;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (FCEvReferenceApplication_B.BrkCmd !=
          FCEvReferenceApplication_B.BrkCmd_f) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        ssSetContTimeOutputInconsistentWithStateAtMajorStep(rtS);
      }

      FCEvReferenceApplication_DW.Ck_g = FCEvReferenceApplication_B.BrkCmd;
      FCEvReferenceApplication_DW.Mk_h = 0.0;
    }

    FCEvReferenceApplication_DW.Uk_h = FCEvReferenceApplication_B.BrkCmd;
    FCEvReferenceApplication_DW.Tk_a = ssGetT(rtS);

    /* End of Update for FirstOrderHold: '<S45>/First Order Hold' */
  }

  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void MdlDerivatives(void)
{
  XDot_FCEvReferenceApplication_T *_rtXdot;
  _rtXdot = ((XDot_FCEvReferenceApplication_T *) ssGetdX(rtS));

  /* Derivatives for ModelReference: '<S5>/Drivetrain' */
  DrivetrainEv_Deriv(&(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtm),
                     &FCEvReferenceApplication_B.MotTrq_f,
                     &FCEvReferenceApplication_B.BrkCmd_f,
                     &FCEvReferenceApplication_B.Grade,
                     &FCEvReferenceApplication_B.wind_x,
                     &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtb),
                     &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
                     &(FCEvReferenceApplication_X.Drivetrain_CSTATE),
                     &(((XDot_FCEvReferenceApplication_T *) ssGetdX(rtS))
                       ->Drivetrain_CSTATE), &(((XDis_FCEvReferenceApplication_T
    *) ssGetContStateDisabled(rtS))->Drivetrain_CSTATE));

  /* Derivatives for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_Deriv
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &FCEvReferenceApplication_B.MotSpd,
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE),
     &(((XDot_FCEvReferenceApplication_T *) ssGetdX(rtS))->ElectricPlant_CSTATE));

  /* Derivatives for Integrator: '<S27>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = FCEvReferenceApplication_B.Divide_j;

  /* Derivatives for Integrator: '<S38>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = FCEvReferenceApplication_B.Product_m;

  /* Derivatives for TransferFcn: '<S45>/Motor Coupling Dynamics' */
  _rtXdot->MotorCouplingDynamics_CSTATE = 0.0;
  _rtXdot->MotorCouplingDynamics_CSTATE +=
    FCEvReferenceApplication_P.MotorCouplingDynamics_A *
    FCEvReferenceApplication_X.MotorCouplingDynamics_CSTATE;
  _rtXdot->MotorCouplingDynamics_CSTATE += FCEvReferenceApplication_B.MotTrq;

  /* Derivatives for Integrator: '<S48>/Integrator' */
  _rtXdot->Integrator_CSTATE = FCEvReferenceApplication_B.Sqrt;

  /* Derivatives for Integrator: '<S48>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_j = FCEvReferenceApplication_B.m3pergal;
}

/* Projection for root system: '<Root>' */
void MdlProjection(void)
{
  /* Projection for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_Projection
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE));
}

/* ForcingFunction for root system: '<Root>' */
void MdlForcingFunction(void)
{
  XDot_FCEvReferenceApplication_T *_rtXdot;
  _rtXdot = ((XDot_FCEvReferenceApplication_T *) ssGetdX(rtS));

  /* ForcingFunction for ModelReference: '<S5>/Drivetrain' */
  DrivetrainEv_Deriv(&(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtm),
                     &FCEvReferenceApplication_B.MotTrq_f,
                     &FCEvReferenceApplication_B.BrkCmd_f,
                     &FCEvReferenceApplication_B.Grade,
                     &FCEvReferenceApplication_B.wind_x,
                     &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtb),
                     &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
                     &(FCEvReferenceApplication_X.Drivetrain_CSTATE),
                     &(((XDot_FCEvReferenceApplication_T *) ssGetdX(rtS))
                       ->Drivetrain_CSTATE), &(((XDis_FCEvReferenceApplication_T
    *) ssGetContStateDisabled(rtS))->Drivetrain_CSTATE));

  /* ForcingFunction for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_ForcingFunction
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &FCEvReferenceApplication_B.MotSpd,
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE),
     &(((XDot_FCEvReferenceApplication_T *) ssGetdX(rtS))->ElectricPlant_CSTATE));

  /* ForcingFunction for Integrator: '<S27>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = FCEvReferenceApplication_B.Divide_j;

  /* ForcingFunction for Integrator: '<S38>/Integrator2' */
  _rtXdot->Integrator2_CSTATE = FCEvReferenceApplication_B.Product_m;

  /* ForcingFunction for TransferFcn: '<S45>/Motor Coupling Dynamics' */
  _rtXdot->MotorCouplingDynamics_CSTATE = 0.0;
  _rtXdot->MotorCouplingDynamics_CSTATE +=
    FCEvReferenceApplication_P.MotorCouplingDynamics_A *
    FCEvReferenceApplication_X.MotorCouplingDynamics_CSTATE;
  _rtXdot->MotorCouplingDynamics_CSTATE += FCEvReferenceApplication_B.MotTrq;

  /* ForcingFunction for Integrator: '<S48>/Integrator' */
  _rtXdot->Integrator_CSTATE = FCEvReferenceApplication_B.Sqrt;

  /* ForcingFunction for Integrator: '<S48>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_j = FCEvReferenceApplication_B.m3pergal;
}

/* MassMatrix for root system: '<Root>' */
void MdlMassMatrix(void)
{
  /* MassMatrix for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_l_MassMatrix
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE));
}

/* ZeroCrossings for root system: '<Root>' */
void MdlZeroCrossings(void)
{
  ZCV_FCEvReferenceApplication_T *_rtZCSV;
  _rtZCSV = ((ZCV_FCEvReferenceApplication_T *) ssGetSolverZcSignalVector(rtS));

  /* ZeroCrossings for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_ZC
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
     &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
     &(FCEvReferenceApplication_X.ElectricPlant_CSTATE),
     &(((ZCV_FCEvReferenceApplication_T *) ssGetSolverZcSignalVector(rtS))
       ->ElectricPlant_Reset_ZC));

  /* ZeroCrossings for Saturate: '<S6>/Saturation' */
  _rtZCSV->Saturation_UprLim_ZC = FCEvReferenceApplication_B.xdot -
    FCEvReferenceApplication_P.Saturation_UpperSat;
  _rtZCSV->Saturation_LwrLim_ZC = FCEvReferenceApplication_B.xdot -
    FCEvReferenceApplication_P.Saturation_LowerSat;

  /* ZeroCrossings for RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   */
  _rtZCSV->Compare_RelopInput_ZC = FCEvReferenceApplication_B.uDLookupTable -
    FCEvReferenceApplication_P.Constant_Value;

  /* ZeroCrossings for HitCross: '<S11>/Hit  Crossing' */
  _rtZCSV->HitCrossing_HitNoOutput_ZC = FCEvReferenceApplication_B.Add1 -
    FCEvReferenceApplication_P.HitCrossing_Offset;

  /* ZeroCrossings for Saturate: '<S48>/Saturation1' */
  _rtZCSV->Saturation1_UprLim_ZC = FCEvReferenceApplication_B.m3toUSGal -
    FCEvReferenceApplication_P.Saturation1_UpperSat;
  _rtZCSV->Saturation1_LwrLim_ZC = FCEvReferenceApplication_B.m3toUSGal -
    FCEvReferenceApplication_P.Saturation1_LowerSat;

  /* ZeroCrossings for Saturate: '<S48>/Saturation' */
  _rtZCSV->Saturation_UprLim_ZC_f = FCEvReferenceApplication_B.mto100Km -
    FCEvReferenceApplication_P.Saturation_UpperSat_d;
  _rtZCSV->Saturation_LwrLim_ZC_h = FCEvReferenceApplication_B.mto100Km -
    FCEvReferenceApplication_P.Saturation_LowerSat_ln;

  /* ZeroCrossings for RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/pause_time'
   */
  _rtZCSV->RelationalOperator_RelopInput_Z = FCEvReferenceApplication_B.Clock -
    FCEvReferenceApplication_P.pause_time_Value;
}

/* Termination for root system: '<Root>' */
void MdlTerminate(void)
{
  /* Terminate for ModelReference: '<S5>/Electric Plant' */
  FCElectricPlant_Term
    (&(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw));
}

/* Function to initialize sizes */
void MdlInitializeSizes(void)
{
  ssSetNumContStates(rtS, 528);        /* Number of continuous states */
  ssSetNumPeriodicContStates(rtS, 1); /* Number of periodic continuous states */
  ssSetNumY(rtS, 3);                   /* Number of model outputs */
  ssSetNumU(rtS, 1);                   /* Number of model inputs */
  ssSetDirectFeedThrough(rtS, 1);      /* The model is direct feedthrough */
  ssSetNumSampleTimes(rtS, 5);         /* Number of sample times */
  ssSetNumBlocks(rtS, 156);            /* Number of blocks */
  ssSetNumBlockIO(rtS, 89);            /* Number of block outputs */
  ssSetNumBlockParams(rtS, 2810);      /* Sum of parameter "widths" */
}

/* Function to initialize sample times. */
void MdlInitializeSampleTimes(void)
{
  /* task periods */
  ssSetSampleTime(rtS, 0, 0.0);
  ssSetSampleTime(rtS, 1, 0.0);
  ssSetSampleTime(rtS, 2, 0.01);
  ssSetSampleTime(rtS, 3, 0.5);
  ssSetSampleTime(rtS, 4, 1.0);

  /* task offsets */
  ssSetOffsetTime(rtS, 0, 0.0);
  ssSetOffsetTime(rtS, 1, 1.0);
  ssSetOffsetTime(rtS, 2, 0.0);
  ssSetOffsetTime(rtS, 3, 0.0);
  ssSetOffsetTime(rtS, 4, 0.0);
}

/* Function to register the model */
/* Turns off all optimizations on Windows because of issues with VC 2015 compiler.
   This function is not performance-critical, hence this is not a problem.
 */
#if defined(_MSC_VER)

#pragma optimize( "", off )

#endif

SimStruct * FCEvReferenceApplication(void)
{
  static struct _ssMdlInfo mdlInfo;
  static struct _ssBlkInfo2 blkInfo2;
  static struct _ssBlkInfoSLSize blkInfoSLSize;
  (void) memset((char *)rtS, 0,
                sizeof(SimStruct));
  (void) memset((char *)&mdlInfo, 0,
                sizeof(struct _ssMdlInfo));
  (void) memset((char *)&blkInfo2, 0,
                sizeof(struct _ssBlkInfo2));
  (void) memset((char *)&blkInfoSLSize, 0,
                sizeof(struct _ssBlkInfoSLSize));
  ssSetBlkInfo2Ptr(rtS, &blkInfo2);
  ssSetBlkInfoSLSizePtr(rtS, &blkInfoSLSize);
  ssSetMdlInfoPtr(rtS, &mdlInfo);

  /* timing info */
  {
    static time_T mdlPeriod[NSAMPLE_TIMES];
    static time_T mdlOffset[NSAMPLE_TIMES];
    static time_T mdlTaskTimes[NSAMPLE_TIMES];
    static int_T mdlTsMap[NSAMPLE_TIMES];
    static int_T mdlSampleHits[NSAMPLE_TIMES];
    static boolean_T mdlTNextWasAdjustedPtr[NSAMPLE_TIMES];
    static int_T mdlPerTaskSampleHits[NSAMPLE_TIMES * NSAMPLE_TIMES];
    static time_T mdlTimeOfNextSampleHit[NSAMPLE_TIMES];

    {
      int_T i;
      for (i = 0; i < NSAMPLE_TIMES; i++) {
        mdlPeriod[i] = 0.0;
        mdlOffset[i] = 0.0;
        mdlTaskTimes[i] = 0.0;
        mdlTsMap[i] = i;
        mdlSampleHits[i] = 1;
      }
    }

    ssSetSampleTimePtr(rtS, &mdlPeriod[0]);
    ssSetOffsetTimePtr(rtS, &mdlOffset[0]);
    ssSetSampleTimeTaskIDPtr(rtS, &mdlTsMap[0]);
    ssSetTPtr(rtS, &mdlTaskTimes[0]);
    ssSetSampleHitPtr(rtS, &mdlSampleHits[0]);
    ssSetTNextWasAdjustedPtr(rtS, &mdlTNextWasAdjustedPtr[0]);
    ssSetPerTaskSampleHitsPtr(rtS, &mdlPerTaskSampleHits[0]);
    ssSetTimeOfNextSampleHitPtr(rtS, &mdlTimeOfNextSampleHit[0]);
  }

  ssSetSolverMode(rtS, SOLVER_MODE_SINGLETASKING);

  /*
   * initialize model vectors and cache them in SimStruct
   */

  /* block I/O */
  {
    ssSetBlockIO(rtS, ((void *) &FCEvReferenceApplication_B));
    (void) memset(((void *) &FCEvReferenceApplication_B), 0,
                  sizeof(B_FCEvReferenceApplication_T));
  }

  /* external inputs */
  {
    ssSetU(rtS, ((void*) &FCEvReferenceApplication_U));
    FCEvReferenceApplication_U.pfc = 0.0;
  }

  /* external outputs */
  {
    ssSetY(rtS, &FCEvReferenceApplication_Y);
    (void)memset(&FCEvReferenceApplication_Y, 0, sizeof
                 (ExtY_FCEvReferenceApplication_T));
  }

  /* states (continuous)*/
  {
    real_T *x = (real_T *) &FCEvReferenceApplication_X;
    ssSetContStates(rtS, x);
    (void) memset((void *)x, 0,
                  sizeof(X_FCEvReferenceApplication_T));
  }

  /* states (dwork) */
  {
    void *dwork = (void *) &FCEvReferenceApplication_DW;
    ssSetRootDWork(rtS, dwork);
    (void) memset(dwork, 0,
                  sizeof(DW_FCEvReferenceApplication_T));
  }

  /* Root-level init GlobalMassMatrixPr offset */
  {
    FCEvReferenceApplication_DW.ElectricPlant_MASS_MATRIX_PR = 20;/* '<S5>/Electric Plant' */
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ssSetModelMappingInfo(rtS, &dtInfo);
    dtInfo.numDataTypes = 26;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Model specific registration */
  ssSetRootSS(rtS, rtS);
  ssSetVersion(rtS, SIMSTRUCT_VERSION_LEVEL2);
  ssSetModelName(rtS, "FCEvReferenceApplication");
  ssSetPath(rtS, "FCEvReferenceApplication");
  ssSetTStart(rtS, 0.0);
  ssSetTFinal(rtS, 1369.0);

  /* Model Initialize function for ModelReference Block: '<S1>/Powertrain Control Module (PCM)' */
  FCEvPowertrainContro_initialize(rtS, 2,
    &(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtm),
    &(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtb),
    &(FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst.rtdw));

  /* Model Initialize function for ModelReference Block: '<S5>/Drivetrain' */
  DrivetrainEv_initialize(rtS, 0, 1,
    &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtm),
    &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtb),
    &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtdw),
    &(FCEvReferenceApplication_DW.Drivetrain_InstanceData.rtzce));

  /* Model Initialize function for ModelReference Block: '<S5>/Electric Plant' */
  FCElectricPlant_initialize(rtS, 0, 1,
    &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtm),
    &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtb),
    &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtdw),
    &(FCEvReferenceApplication_DW.ElectricPlant_InstanceData.rtzce),
    &(FCEvReferenceApplica_MassMatrix.pr[FCEvReferenceApplication_DW.ElectricPlant_MASS_MATRIX_PR]));

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    ssSetRTWLogInfo(rtS, &rt_DataLoggingInfo);
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogXSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogT(ssGetRTWLogInfo(rtS), "");
    rtliSetLogX(ssGetRTWLogInfo(rtS), "");
    rtliSetLogXFinal(ssGetRTWLogInfo(rtS), "");
    rtliSetLogVarNameModifier(ssGetRTWLogInfo(rtS), "rt_");
    rtliSetLogFormat(ssGetRTWLogInfo(rtS), 4);
    rtliSetLogMaxRows(ssGetRTWLogInfo(rtS), 0);
    rtliSetLogDecimation(ssGetRTWLogInfo(rtS), 1);
    rtliSetLogY(ssGetRTWLogInfo(rtS), "");
    rtliSetLogYSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogYSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
  }

  {
    static struct _ssStatesInfo2 statesInfo2;
    ssSetStatesInfo2(rtS, &statesInfo2);
  }

  {
    static ssPeriodicStatesInfo periodicStatesInfo;
    ssSetPeriodicStatesInfo(rtS, &periodicStatesInfo);
    ssSetPeriodicContStateIndices(rtS, FCEvReferenceAppli_PeriodicIndX);
    (void) memset((void*) FCEvReferenceAppli_PeriodicIndX, 0,
                  1*sizeof(int_T));
    ssSetPeriodicContStateRanges(rtS, FCEvReferenceAppli_PeriodicRngX);
    (void) memset((void*) FCEvReferenceAppli_PeriodicRngX, 0,
                  2*sizeof(real_T));
  }

  {
    static ssJacobianPerturbationBounds jacobianPerturbationBounds;
    ssSetJacobianPerturbationBounds(rtS, &jacobianPerturbationBounds);
  }

  {
    static ssSolverInfo slvrInfo;
    static struct _ssSFcnModelMethods3 mdlMethods3;
    static struct _ssSFcnModelMethods2 mdlMethods2;
    static boolean_T contStatesDisabled[528];
    static real_T absTol[528] = { 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6,
      1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6, 1.0E-6 };

    static uint8_T absTolControl[528] = { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U };

    static real_T contStateJacPerturbBoundMinVec[528];
    static real_T contStateJacPerturbBoundMaxVec[528];
    static uint8_T zcAttributes[299] = { (0x40|ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL_DN), (0x40|ZC_EVENT_ALL_DN),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P),
      (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (ZC_EVENT_P2Z|
      ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|
      ZC_EVENT_N2P), (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P),
      (ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL_DN), (ZC_EVENT_ALL), (ZC_EVENT_ALL), (ZC_EVENT_ALL),
      (ZC_EVENT_ALL), (ZC_EVENT_ALL) };

    static uint8_T zcEvents[299] = { (0x40|ZC_EVENT_ALL_UP), (0x40|
      ZC_EVENT_ALL_UP), (0x40|ZC_EVENT_ALL_DN), (0x40|ZC_EVENT_ALL_DN), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_P2Z|
      ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_P2Z|
      ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (0x40|ZC_EVENT_P2Z|ZC_EVENT_P2N|
      ZC_EVENT_Z2P|ZC_EVENT_N2P), (0x40|ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_P2Z|ZC_EVENT_P2N|ZC_EVENT_Z2P|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P),
      (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|
      ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|
      ZC_EVENT_P2N|ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|
      ZC_EVENT_N2Z|ZC_EVENT_N2P), (0x40|ZC_EVENT_Z2N|ZC_EVENT_P2N|ZC_EVENT_N2Z|
      ZC_EVENT_N2P), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL_DN), (0x40|ZC_EVENT_ALL), (0x40|
      ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (0x40|ZC_EVENT_ALL), (ZC_EVENT_ALL) };

    static ssNonContDerivSigInfo nonContDerivSigInfo[1] = {
      { 1*sizeof(real_T), (char*)(&FCEvReferenceApplication_B.Gain_a), (NULL) }
    };

    /* Initialize cont state perturbation bound */
    {
      int i;
      for (i = 0; i < 528; ++i) {
        contStateJacPerturbBoundMinVec[i] = 0;
        contStateJacPerturbBoundMaxVec[i] = rtGetInf();
      }
    }

    ssSetSolverRelTol(rtS, 0.01);
    ssSetStepSize(rtS, 0.0);
    ssSetMinStepSize(rtS, 0.0);
    ssSetMaxNumMinSteps(rtS, -1);
    ssSetMinStepViolatedError(rtS, 0);
    ssSetMaxStepSize(rtS, 0.01);
    ssSetSolverMaxOrder(rtS, -1);
    ssSetSolverRefineFactor(rtS, 1);
    ssSetOutputTimes(rtS, (NULL));
    ssSetNumOutputTimes(rtS, 0);
    ssSetOutputTimesOnly(rtS, 0);
    ssSetOutputTimesIndex(rtS, 0);
    ssSetZCCacheNeedsReset(rtS, 1);
    ssSetDerivCacheNeedsReset(rtS, 0);
    ssSetNumNonContDerivSigInfos(rtS, 1);
    ssSetNonContDerivSigInfos(rtS, nonContDerivSigInfo);
    ssSetSolverInfo(rtS, &slvrInfo);
    ssSetSolverName(rtS, "ode23t");
    ssSetVariableStepSolver(rtS, 1);
    ssSetSolverConsistencyChecking(rtS, 0);
    ssSetSolverAdaptiveZcDetection(rtS, 1);
    ssSetSolverRobustResetMethod(rtS, 0);
    _ssSetSolverUpdateJacobianAtReset(rtS, true);
    ssSetAbsTolVector(rtS, absTol);
    ssSetAbsTolControlVector(rtS, absTolControl);
    ssSetSolverAbsTol_Obsolete(rtS, absTol);
    ssSetSolverAbsTolControl_Obsolete(rtS, absTolControl);
    ssSetJacobianPerturbationBoundsMinVec(rtS, contStateJacPerturbBoundMinVec);
    ssSetJacobianPerturbationBoundsMaxVec(rtS, contStateJacPerturbBoundMaxVec);
    ssSetSolverStateProjection(rtS, 1);
    (void) memset((void *)&mdlMethods2, 0,
                  sizeof(mdlMethods2));
    ssSetModelMethods2(rtS, &mdlMethods2);
    (void) memset((void *)&mdlMethods3, 0,
                  sizeof(mdlMethods3));
    ssSetModelMethods3(rtS, &mdlMethods3);
    ssSetModelProjection(rtS, MdlProjection);
    ssSetMassMatrixType(rtS, (ssMatrixType)3);
    ssSetMassMatrixNzMax(rtS, 129);
    ssSetModelMassMatrix(rtS, MdlMassMatrix);
    ssSetModelForcingFunction(rtS, MdlForcingFunction);
    ssSetSolverMassMatrixType(rtS, (ssMatrixType)3);
    ssSetSolverMassMatrixNzMax(rtS, 129);
    ssSetModelOutputs(rtS, MdlOutputs);
    ssSetModelLogData(rtS, rt_UpdateTXYLogVars);
    ssSetModelLogDataIfInInterval(rtS, rt_UpdateTXXFYLogVars);
    ssSetModelUpdate(rtS, MdlUpdate);
    ssSetModelDerivatives(rtS, MdlDerivatives);
    ssSetSolverZcSignalAttrib(rtS, zcAttributes);
    ssSetSolverNumZcSignals(rtS, 299);
    ssSetModelZeroCrossings(rtS, MdlZeroCrossings);
    ssSetSolverZcEventsVector(rtS, zcEvents);
    ssSetSolverConsecutiveZCsStepRelTol(rtS, 2.8421709430404007E-13);
    ssSetSolverMaxConsecutiveZCs(rtS, 1000);
    ssSetSolverConsecutiveZCsError(rtS, 2);
    ssSetSolverMaskedZcDiagnostic(rtS, 1);
    ssSetSolverIgnoredZcDiagnostic(rtS, 0);
    ssSetSolverZcThreshold(rtS, 0.01);
    ssSetSolverMaxConsecutiveMinStep(rtS, 10);
    ssSetSolverShapePreserveControl(rtS, 2);
    ssSetTNextTid(rtS, INT_MIN);
    ssSetTNext(rtS, rtMinusInf);
    ssSetSolverNeedsReset(rtS);
    ssSetNumNonsampledZCs(rtS, 295);
    ssSetContStateDisabled(rtS, contStatesDisabled);
    ssSetSolverMaxConsecutiveMinStep(rtS, 10);

    /* global mass matrix */
    {
      int_T *ir = FCEvReferenceApplica_MassMatrix.ir;
      int_T *jc = FCEvReferenceApplica_MassMatrix.jc;
      real_T *pr = FCEvReferenceApplica_MassMatrix.pr;
      ssSetMassMatrixIr(rtS, ir);
      ssSetMassMatrixJc(rtS, jc);
      ssSetMassMatrixPr(rtS, pr);
      (void) memset((void *)ir, 0,
                    129*sizeof(int_T));
      (void) memset((void *)jc, 0,
                    (528+1)*sizeof(int_T));
      (void) memset((void *)pr, 0,
                    129*sizeof(real_T));
    }
  }

  ssSetChecksumVal(rtS, 0, 2287748902U);
  ssSetChecksumVal(rtS, 1, 2603615125U);
  ssSetChecksumVal(rtS, 2, 1712206550U);
  ssSetChecksumVal(rtS, 3, 680897979U);

  /* non-finite (run-time) assignments */
  FCEvReferenceApplication_P.FirstOrderHold_ErrTol = rtInf;
  FCEvReferenceApplication_P.FirstOrderHold1_ErrTol = rtInf;
  FCEvReferenceApplication_P.Saturation_UpperSat = rtInf;
  FCEvReferenceApplication_P.Saturation_UpperSat_eq = rtInf;
  FCEvReferenceApplication_P.FirstOrderHold_ErrTol_e = rtInf;
  FCEvReferenceApplication_P.Saturation1_UpperSat = rtInf;
  FCEvReferenceApplication_P.Saturation_UpperSat_d = rtInf;
  return rtS;
}

/* When you use the on parameter, it resets the optimizations to those that you
   specified with the /O compiler option. */
#if defined(_MSC_VER)

#pragma optimize( "", on )

#endif
