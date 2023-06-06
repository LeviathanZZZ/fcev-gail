/*
 * FCEvPowertrainController_private.h
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

#ifndef RTW_HEADER_FCEvPowertrainController_private_h_
#define RTW_HEADER_FCEvPowertrainController_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "FCEvPowertrainController.h"
#include "FCEvPowertrainController_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmCancelTimerToRaiseEvent
#define rtmCancelTimerToRaiseEvent(rtm, timerIndex) simTgtCancelTimerToRaiseEvent(ssGetRootSS((rtm)->rtS), [timerIndex])
#endif

#ifndef rtmDisableTaskUsingRateIndex
#define rtmDisableTaskUsingRateIndex(rtm, sti) simTgtDisableTaskUsingRateIndex(ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[sti])
#endif

#ifndef rtmEnableTaskUsingRateIndex
#define rtmEnableTaskUsingRateIndex(rtm, sti) simTgtEnableTaskUsingRateIndex(ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[sti])
#endif

#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm)        ssIsFirstInitCond((rtm)->rtS)
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        ssIsMajorTimeStep((rtm)->rtS)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        ssIsMinorTimeStep((rtm)->rtS)
#endif

#ifndef rtmRaiseEvent
#define rtmRaiseEvent(rtm, runtimeEventIndex) simTgtRaiseEvent(ssGetRootSS((rtm)->rtS), [runtimeEventIndex])
#endif

#ifndef rtmRaiseEventWithEnqueue
#define rtmRaiseEventWithEnqueue(rtm, runtimeEventIndex) simTgtRaiseEventWithEnqueue(ssGetRootSS((rtm)->rtS), [runtimeEventIndex])
#endif

#ifndef rtmRaiseWhenTimerExpiresAfter
#define rtmRaiseWhenTimerExpiresAfter(rtm, timerIndex, isRecurring, afterDur, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAfter(ssGetRootSS((rtm)->rtS), [timerIndex], isRecurring, afterDur, [runtimeEventIndex])
#endif

#ifndef rtmRaiseWhenTimerExpiresAt
#define rtmRaiseWhenTimerExpiresAt(rtm, timerIndex, atT, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAt(ssGetRootSS((rtm)->rtS), [timerIndex], atT, [runtimeEventIndex])
#endif

#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 ssSetErrorStatus(FCEvPowertrainController_M->rtS, RT_MEMORY_ALLOCATION_ERROR);\
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

/* Macros for accessing real-time model data structure */
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm)          ssGetClockTick( ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[0])
#endif

#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm)         ssGetClockTickH( ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[0])
#endif

#ifndef rtmGetLogOutput
#define rtmGetLogOutput(rtm)           ssGetLogOutput((rtm)->rtS)
#endif

#ifndef rtmSetSampleHit
#define rtmSetSampleHit(rtm, sti, tid, val) _ssSetSampleHit(ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[sti], val)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ssIsSampleHit( ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[sti], tid)
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (ssGetT((rtm)->rtS))
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              (ssGetTFinal((rtm)->rtS))
#endif

#ifndef rtmGetTNextWasAdjusted
#define rtmGetTNextWasAdjusted(rtm, sti) (ssGetTNextWasAdjusted((rtm)->rtS, (rtm)->Timing.mdlref_GlobalTID[sti]))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              (ssGetTStart((rtm)->rtS))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       ssGetTaskTime( ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[sti])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  _ssSetTaskTime(ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[sti], val)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    (ssGetTimeOfLastOutput((rtm)->rtS))
#endif

#ifndef rtmGetVarNextHitTime
#define rtmGetVarNextHitTime(rtm, sti) (_ssGetVarNextHitTime((rtm)->rtS, (int)(ssGetOffsetTime(ssGetRootSS((rtm)->rtS), (rtm)->Timing.mdlref_GlobalTID[sti+1]))))
#endif

#ifndef rtmSetVarNextHitTime
#define rtmSetVarNextHitTime(rtm, sti, val) ssSetTimeOfNextVarHit((rtm)->rtS, (rtm)->Timing.mdlref_GlobalTID[sti], val)
#endif

extern P_FCEvPowertrainController_T FCEvPowertrainController_P;

#endif                      /* RTW_HEADER_FCEvPowertrainController_private_h_ */
