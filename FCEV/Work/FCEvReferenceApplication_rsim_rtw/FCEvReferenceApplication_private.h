/*
 * FCEvReferenceApplication_private.h
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

#ifndef RTW_HEADER_FCEvReferenceApplication_private_h_
#define RTW_HEADER_FCEvReferenceApplication_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "FCEvReferenceApplication.h"
#include "FCEvReferenceApplication_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers declare free without const */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif

extern void FCEvReferenceA_PassThrough_Init(real_T rtp_IC,
  B_PassThrough_FCEvReferenceAp_T *localB);
extern void FCEvReference_PassThrough_Start(SimStruct * const rtS_0,
  DW_PassThrough_FCEvReferenceA_T *localDW);
extern void FCEvReferen_PassThrough_Disable(DW_PassThrough_FCEvReferenceA_T
  *localDW);
extern void FCEvReferenceApplic_PassThrough(SimStruct * const rtS_2, boolean_T
  rtu_Enable, real_T rtu_u, B_PassThrough_FCEvReferenceAp_T *localB,
  DW_PassThrough_FCEvReferenceA_T *localDW);

#if defined(MULTITASKING)
#  error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif                      /* RTW_HEADER_FCEvReferenceApplication_private_h_ */
