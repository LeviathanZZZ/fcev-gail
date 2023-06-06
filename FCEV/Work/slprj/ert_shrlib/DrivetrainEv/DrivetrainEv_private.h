/* 
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * 
 * File: DrivetrainEv_private.h
 *  
 * Code generated for Simulink model 'DrivetrainEv'.
 * 
 * Model version                  : 7.6
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Mar 27 13:54:50 2023
 * 
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */



  #ifndef RTW_HEADER_DrivetrainEv_private_h_
  #define RTW_HEADER_DrivetrainEv_private_h_

                #include "rtwtypes.h"
            #include "model_reference_types.h"
            #include "zero_crossing_types.h"


#include "DrivetrainEv.h"

#include "DrivetrainEv_types.h"



    


    


    


                /* Private macros used by the generated code to access rtModel */
            

        #ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm) ( *((rtm)->timingBridge->firstInitCond) )
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) ((rtmGetSimTimeStep((rtm))) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) ((rtmGetSimTimeStep((rtm))) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid) ((rtm)->timingBridge->taskCounter[(rtm)->Timing.mdlref_GlobalTID[sti]] == 0)
#endif


    




    


    


    


    


    
        /* Macros for accessing real-time model data structure */
        

        #ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm) ( *(((rtm)->timingBridge->clockTick[(rtm)->Timing.mdlref_GlobalTID[0]])) )
#endif

#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm) ( *(((rtm)->timingBridge->clockTick[(rtm)->Timing.mdlref_GlobalTID[1]])) )
#endif

#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm) ( *((rtm)->timingBridge->clockTickH[(rtm)->Timing.mdlref_GlobalTID[0]]) )
#endif

#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm) ( *((rtm)->timingBridge->clockTickH[(rtm)->Timing.mdlref_GlobalTID[1]]) )
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm) (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val) (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm) (*((rtm)->Timing.simTimeStep))
#endif

#ifndef rtmGetSimTimeStepPointer
#define rtmGetSimTimeStepPointer(rtm) (rtm)->Timing.simTimeStep
#endif

#ifndef rtmSetSimTimeStepPointer
#define rtmSetSimTimeStepPointer(rtm, val) ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm) (*((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val) (*((rtm)->Timing.stopRequestedFlag) = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm) ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedPtr
#define rtmSetStopRequestedPtr(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm) (*((rtm)->timingBridge->taskTime[0]))
#endif


    




    


    


        /*@[d0566*/ extern const real_T rtCP_pooled_3uDcldXYNANb[3]; /*@]*//*@[d0567*/ extern const real_T rtCP_pooled_nW0S82293oPx[34]; /*@]*//*@[d0568*/ extern const real_T rtCP_pooled_IBfW69W5lTOo[3]; /*@]*//*@[d056a*/ extern const real_T rtCP_pooled_azYdAeveuCEB[9]; /*@]*//*@[d0575*/ extern const real_T rtCP_pooled_UAnbzqvIfyiY[6]; /*@]*//*@[d0576*/ extern const real_T rtCP_pooled_P9d9GE381sxs[6]; /*@]*//*@[d0577*/ extern const real_T rtCP_pooled_35NinvjhsuZB[6]; /*@]*//*@[d0579*/ extern const real_T rtCP_pooled_IbKj5fJ0wmP8[7]; /*@]*//*@[d057a*/ extern const real_T rtCP_pooled_WXB3IABAdRsT[7]; /*@]*//*@[d057d*/ extern const real_T rtCP_pooled_P7TSEq3exTsz[2]; /*@]*//*@[d057e*/ extern const real_T rtCP_pooled_ap1sIdr4LUSj[2]; /*@]*//*@[d0583*/ extern const real_T rtCP_pooled_pqKQ1OzleJZw[3]; /*@]*//*@[d0585*/ extern const boolean_T rtCP_pooled_00A1DhJcic9j[8]; /*@]*/
    #define rtCP_Constant4_Value rtCP_pooled_3uDcldXYNANb/* Expression: [0; 0; 1]
  * Referenced by: '<S74>/Constant4'
   */
#define rtCP_Constant2_Value_c rtCP_pooled_nW0S82293oPx/* Expression: zeros(34,1)
  * Referenced by: '<S148>/Constant2'
   */
#define rtCP_Constant19_Value rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S148>/Constant19'
   */
#define rtCP_Constant12_Value_p rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S148>/Constant12'
   */
#define rtCP_Constant14_Value rtCP_pooled_azYdAeveuCEB/* Expression: zeros(3,3)
  * Referenced by: '<S148>/Constant14'
   */
#define rtCP_Constant19_Value_n rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S149>/Constant19'
   */
#define rtCP_Constant12_Value_p5 rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S149>/Constant12'
   */
#define rtCP_Constant14_Value_a rtCP_pooled_azYdAeveuCEB/* Expression: zeros(3,3)
  * Referenced by: '<S149>/Constant14'
   */
#define rtCP_Constant2_Value_ah rtCP_pooled_nW0S82293oPx/* Expression: zeros(34,1)
  * Referenced by: '<S190>/Constant2'
   */
#define rtCP_Constant19_Value_l rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S190>/Constant19'
   */
#define rtCP_Constant12_Value_e rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S190>/Constant12'
   */
#define rtCP_Constant14_Value_b rtCP_pooled_azYdAeveuCEB/* Expression: zeros(3,3)
  * Referenced by: '<S190>/Constant14'
   */
#define rtCP_Constant19_Value_c rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S191>/Constant19'
   */
#define rtCP_Constant12_Value_j rtCP_pooled_IBfW69W5lTOo/* Expression: zeros(1,3)
  * Referenced by: '<S191>/Constant12'
   */
#define rtCP_Constant14_Value_bm rtCP_pooled_azYdAeveuCEB/* Expression: zeros(3,3)
  * Referenced by: '<S191>/Constant14'
   */
#define rtCP_StiffnessFront_tableData rtCP_pooled_UAnbzqvIfyiY/* Expression: FskF
  * Referenced by: '<S79>/Stiffness - Front'
   */
#define rtCP_StiffnessFront_bp01Data rtCP_pooled_P9d9GE381sxs/* Expression: dzsF
  * Referenced by: '<S79>/Stiffness - Front'
   */
#define rtCP_StiffnessRear_tableData rtCP_pooled_35NinvjhsuZB/* Expression: FskR
  * Referenced by: '<S79>/Stiffness - Rear'
   */
#define rtCP_StiffnessRear_bp01Data rtCP_pooled_P9d9GE381sxs/* Expression: dzsR
  * Referenced by: '<S79>/Stiffness - Rear'
   */
#define rtCP_DampingFront_tableData rtCP_pooled_IbKj5fJ0wmP8/* Expression: FsbF
  * Referenced by: '<S79>/Damping - Front'
   */
#define rtCP_DampingFront_bp01Data rtCP_pooled_WXB3IABAdRsT/* Expression: dzdotsF
  * Referenced by: '<S79>/Damping - Front'
   */
#define rtCP_RampingRear_tableData rtCP_pooled_IbKj5fJ0wmP8/* Expression: FsbR
  * Referenced by: '<S79>/Ramping - Rear'
   */
#define rtCP_RampingRear_bp01Data rtCP_pooled_WXB3IABAdRsT/* Expression: dzdotsR
  * Referenced by: '<S79>/Ramping - Rear'
   */
#define rtCP_Cs_tableData rtCP_pooled_P7TSEq3exTsz/* Expression: Cs
  * Referenced by: '<S74>/Cs'
   */
#define rtCP_Cs_bp01Data rtCP_pooled_ap1sIdr4LUSj/* Expression: beta_w
  * Referenced by: '<S74>/Cs'
   */
#define rtCP_Crm_tableData rtCP_pooled_P7TSEq3exTsz/* Expression: [0 0]
  * Referenced by: '<S74>/Crm'
   */
#define rtCP_Crm_bp01Data rtCP_pooled_ap1sIdr4LUSj/* Expression: [-1 1]
  * Referenced by: '<S74>/Crm'
   */
#define rtCP_Cym_tableData rtCP_pooled_P7TSEq3exTsz/* Expression: Cym
  * Referenced by: '<S74>/Cym'
   */
#define rtCP_Cym_bp01Data rtCP_pooled_ap1sIdr4LUSj/* Expression: beta_w
  * Referenced by: '<S74>/Cym'
   */
#define rtCP_Gain_Gain rtCP_pooled_pqKQ1OzleJZw/* Expression: [-1,1,1]
  * Referenced by: '<S75>/Gain'
   */
#define rtCP_Gain1_Gain rtCP_pooled_pqKQ1OzleJZw/* Expression: [-1,1,1]
  * Referenced by: '<S75>/Gain1'
   */
#define rtCP_CombinatorialLogic_table rtCP_pooled_00A1DhJcic9j/* Computed Parameter: rtCP_CombinatorialLogic_table
  * Referenced by: '<S165>/Combinatorial  Logic'
   */

        /* Invariant block signals (default storage) */
                    extern         const  ConstB_DrivetrainEv_h_T  DrivetrainEv_ConstB;






    


    


    


    


    


    


    


    


  #endif /* RTW_HEADER_DrivetrainEv_private_h_ */

/* 
 * File trailer for generated code.
 * 
 * [EOF]
 */

