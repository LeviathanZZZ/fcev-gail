/*
 * FCEvPowertrainController_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "FCEvPowertrainController".
 *
 * Model version              : 5.14
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Mon Mar 27 10:44:26 2023
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FCEvPowertrainController_types_h_
#define RTW_HEADER_FCEvPowertrainController_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_IDgMmAocjV2Mcx0AXuhokB_
#define DEFINED_TYPEDEF_FOR_struct_IDgMmAocjV2Mcx0AXuhokB_

typedef struct {
  real_T maxPWR;
  real_T opLimit;
  real_T minV;
  real_T SOCtgt;
  real_T tempTgt;
} struct_IDgMmAocjV2Mcx0AXuhokB;

#endif

/* Parameters (default storage) */
typedef struct P_FCEvPowertrainController_T_ P_FCEvPowertrainController_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_FCEvPowertrainControl_T RT_MODEL_FCEvPowertrainContro_T;

#endif                        /* RTW_HEADER_FCEvPowertrainController_types_h_ */
