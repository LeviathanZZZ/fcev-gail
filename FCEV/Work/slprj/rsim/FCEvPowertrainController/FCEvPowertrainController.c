/*
 * Code generation for system model 'FCEvPowertrainController'
 *
 * Model                      : FCEvPowertrainController
 * Model version              : 5.14
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Mon Mar 27 10:44:26 2023
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "FCEvPowertrainController.h"
#include "rtwtypes.h"
#include "FCEvPowertrainController_private.h"
#include <math.h>
#include "rt_powd_snf.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
#include <string.h>
#include "rt_nonfinite.h"

P_FCEvPowertrainController_T FCEvPowertrainController_P = {
  /* Variable: FCctrl
   * Referenced by:
   *   '<S4>/Constant2'
   *   '<S4>/Constant3'
   */
  {
    128000.0,
    0.4,
    200.0,
    60.0,
    80.0
  },

  /* Variable: BattChrgMax
   * Referenced by: '<S2>/MaxChrg'
   */
  -110000.0,

  /* Variable: BattDischrgMax
   * Referenced by: '<S2>/MaxDischrg'
   */
  110000.0,

  /* Variable: BrkPrsMax
   * Referenced by: '<S3>/Constant'
   */
  5.0E+6,

  /* Variable: ChrgLmt_bpt
   * Referenced by:
   *   '<S2>/ChrgLmt'
   *   '<S70>/ChrgLmt'
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.7, 0.35, 0.0 },

  /* Variable: DischrgLmt_bpt
   * Referenced by: '<S2>/DischrgLmt'
   */
  { 0.0, 0.35, 0.7, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Variable: MotSpd
   * Referenced by:
   *   '<S1>/MaxMotTrqVsSpd'
   *   '<S70>/MaxMotTrqVsSpd'
   *   '<S62>/MaxMotTrqVsSpd'
   */
  { 0.0, 1000.0, 2000.0, 3000.0, 3221.0, 4000.0, 5000.0, 6000.0, 7000.0, 8000.0,
    9000.0, 10000.0 },

  /* Variable: MotTrq
   * Referenced by:
   *   '<S1>/MaxMotTrqVsSpd'
   *   '<S70>/MaxMotTrqVsSpd'
   *   '<S62>/MaxMotTrqVsSpd'
   */
  { 335.0, 335.0, 335.0, 335.0, 335.0, 269.7676, 215.8141, 179.8451, 154.1529,
    134.8838, 119.8967, 107.9071 },

  /* Variable: Ndiff
   * Referenced by:
   *   '<S70>/MotTrqReflectedToWheels'
   *   '<S70>/WhlTrqReflectedToMot'
   */
  7.94,

  /* Variable: RegenBrkCutOff
   * Referenced by: '<S70>/RegenBrakingCutoff'
   */
  { 0.0, 1.0 },

  /* Variable: RegenBrkSpd_bpt
   * Referenced by: '<S70>/RegenBrakingCutoff'
   */
  { 5.0, 9.0 },

  /* Variable: Rm
   * Referenced by:
   *   '<S70>/Constant'
   *   '<S70>/Constant1'
   */
  0.15,

  /* Variable: SOC_bpt
   * Referenced by:
   *   '<S2>/ChrgLmt'
   *   '<S2>/DischrgLmt'
   *   '<S70>/ChrgLmt'
   */
  { 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0 },

  /* Variable: T_eff_bp
   * Referenced by: '<S61>/Eff Map'
   */
  { 0.0, 23.928571428571427, 47.857142857142854, 71.785714285714278,
    95.714285714285708, 119.64285714285714, 143.57142857142856, 167.5,
    191.42857142857142, 215.35714285714286, 239.28571428571428,
    263.21428571428572, 287.14285714285711, 311.07142857142856, 335.0 },

  /* Variable: efficiency_table
   * Referenced by: '<S61>/Eff Map'
   */
  { 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0,
    85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0, 85.0,
    90.0, 92.0, 92.0, 93.0, 93.0, 93.0, 93.0, 93.0, 93.0, 90.0, 85.0, 85.0, 90.0,
    92.0, 92.0, 94.0, 94.0, 94.0, 94.0, 94.0, 94.0, 92.0, 85.0, 85.0, 90.0, 92.0,
    93.0, 94.0, 94.0, 94.0, 95.0, 95.0, 94.0, 93.0, 85.0, 85.0, 90.0, 92.0, 93.0,
    94.0, 95.0, 95.0, 95.0, 95.0, 94.0, 93.0, 85.0, 85.0, 90.0, 92.0, 93.0, 94.0,
    95.0, 95.0, 95.0, 95.0, 94.0, 93.0, 85.0, 85.0, 90.0, 92.0, 93.0, 94.0, 95.0,
    95.0, 95.0, 95.0, 94.0, 93.0, 85.0, 85.0, 90.0, 92.0, 92.0, 94.0, 95.0, 95.0,
    95.0, 95.0, 94.0, 93.0, 85.0, 85.0, 90.0, 92.0, 92.0, 94.0, 95.0, 95.0, 95.0,
    95.0, 94.0, 93.0, 85.0, 85.0, 88.0, 92.0, 92.0, 94.0, 95.0, 95.0, 95.0, 95.0,
    94.0, 93.0, 85.0, 85.0, 88.0, 90.0, 90.0, 94.0, 95.0, 95.0, 95.0, 95.0, 94.0,
    93.0, 85.0, 85.0, 88.0, 90.0, 90.0, 94.0, 95.0, 95.0, 95.0, 95.0, 94.0, 93.0,
    85.0, 85.0, 88.0, 90.0, 90.0, 94.0, 95.0, 95.0, 95.0, 95.0, 94.0, 93.0, 85.0,
    85.0, 88.0, 90.0, 90.0, 94.0, 95.0, 95.0, 95.0, 95.0, 94.0, 93.0 },

  /* Variable: mu_kinetic
   * Referenced by:
   *   '<S70>/Constant'
   *   '<S70>/Constant1'
   */
  0.35,

  /* Variable: num_pads
   * Referenced by:
   *   '<S70>/Constant'
   *   '<S70>/Constant1'
   */
  2.0,

  /* Variable: w_eff_bp
   * Referenced by: '<S61>/Eff Map'
   */
  { 0.0, 1000.0, 2000.0, 3000.0, 3221.0, 4000.0, 5000.0, 6000.0, 7000.0, 8000.0,
    9000.0, 10000.0 },

  /* Mask Parameter: PIDController1_D
   * Referenced by: '<S34>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController1_I
   * Referenced by: '<S37>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondition
   * Referenced by: '<S35>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditi_a
   * Referenced by: '<S40>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_N
   * Referenced by: '<S43>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController1_P
   * Referenced by: '<S45>/Proportional Gain'
   */
  5000.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S57>/Constant'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const_l
   * Referenced by: '<S60>/Constant'
   */
  2.0,

  /* Mask Parameter: div0protectpoly_thresh
   * Referenced by:
   *   '<S68>/Constant'
   *   '<S69>/Constant'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S64>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S65>/Constant'
   */
  0.0,

  /* Expression: 30/pi
   * Referenced by: '<S1>/rads_to_rpm'
   */
  9.5492965855137211,

  /* Expression: 1
   * Referenced by: '<S3>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S3>/Switch'
   */
  0.0,

  /* Expression: inf
   * Referenced by: '<S4>/Saturation3'
   */
  0.0,

  /* Expression: 200
   * Referenced by: '<S4>/Saturation3'
   */
  200.0,

  /* Expression: 350
   * Referenced by: '<S4>/Saturation4'
   */
  350.0,

  /* Expression: 0
   * Referenced by: '<S4>/Saturation4'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/Step'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/Step'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/Step'
   */
  1.0,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S35>/Filter'
   */
  0.01,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S40>/Integrator'
   */
  0.01,

  /* Expression: 30/pi
   * Referenced by: '<S62>/rads_to_rpm'
   */
  9.5492965855137211,

  /* Expression: 30/pi
   * Referenced by: '<S70>/rads_to_rpm'
   */
  9.5492965855137211,

  /* Expression: -1
   * Referenced by: '<S70>/Gain'
   */
  -1.0,

  /* Expression: 30/pi
   * Referenced by: '<S61>/rads_to_rpm'
   */
  9.5492965855137211,

  /* Expression: 1/100
   * Referenced by: '<S61>/Gain1'
   */
  0.01,

  /* Expression: -1
   * Referenced by: '<S61>/Constant1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S61>/Constant2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S61>/Switch2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S63>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S63>/Switch1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S62>/Gain'
   */
  -1.0,

  /* Expression: inf
   * Referenced by: '<S4>/Saturation2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S4>/Saturation2'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S8>/Constant1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S8>/Constant2'
   */
  1.0,

  /* Expression: 6.5e3
   * Referenced by: '<S8>/OptFCPwr'
   */
  6500.0,

  /* Expression: -0.001
   * Referenced by: '<S8>/Gain2'
   */
  -0.001,

  /* Expression: inf
   * Referenced by: '<S70>/Negative 5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S70>/Negative 5'
   */
  0.0,

  /* Computed Parameter: EffMap_maxIndex
   * Referenced by: '<S61>/Eff Map'
   */
  { 11U, 14U }
};

/* System initialize for referenced model: 'FCEvPowertrainController' */
void FCEvPowertrainController_Init(DW_FCEvPowertrainController_f_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S35>/Filter' */
  localDW->Filter_DSTATE =
    FCEvPowertrainController_P.PIDController1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S40>/Integrator' */
  localDW->Integrator_DSTATE =
    FCEvPowertrainController_P.PIDController1_InitialConditi_a;
}

/* System reset for referenced model: 'FCEvPowertrainController' */
void FCEvPowertrainController_Reset(DW_FCEvPowertrainController_f_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S35>/Filter' */
  localDW->Filter_DSTATE =
    FCEvPowertrainController_P.PIDController1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S40>/Integrator' */
  localDW->Integrator_DSTATE =
    FCEvPowertrainController_P.PIDController1_InitialConditi_a;
}

/* Outputs for referenced model: 'FCEvPowertrainController' */
void FCEvPowertrainController(RT_MODEL_FCEvPowertrainContro_T * const
  FCEvPowertrainController_M, const real_T *rtu_AccelPdl, const real_T
  *rtu_DecelPdl, const real_T *rtu_VehSpdFdbk, const real_T *rtu_BattSoc, const
  real_T *rtu_MtrSpd, const real_T *rtu_FCVolt, const real_T *rtu_P_fc, real_T
  *rty_MotTrqCmd, real_T *rty_BrkCmd, real_T *rty_FCCurrCmd, real_T
  *rty_FCTempCmd, real_T *rty_P_demand, real_T *rty_Pfc,
  B_FCEvPowertrainController_c_T *localB, DW_FCEvPowertrainController_f_T
  *localDW)
{
  real_T rtb_MaxMotTrqVsSpd;
  real_T rtb_MotTrqRegenWhl_0;
  real_T rtb_Product1_d;
  real_T rtb_Product1_m;
  real_T rtb_Product3;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_b;
  real_T rtb_Switch;
  real_T rtb_Switch1;
  real_T rtb_Switch1_m;
  real_T rtb_Switch2_l;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_e;
  boolean_T rtb_Compare_j;

  /* Gain: '<S1>/rads_to_rpm' */
  rtb_Switch = FCEvPowertrainController_P.rads_to_rpm_Gain * *rtu_MtrSpd;

  /* Product: '<S1>/Product1' incorporates:
   *  Lookup_n-D: '<S1>/MaxMotTrqVsSpd'
   *  Switch: '<S66>/Switch'
   */
  rtb_Product1_m = *rtu_AccelPdl * look1_binlcapw(rtb_Switch,
    FCEvPowertrainController_P.MotSpd, FCEvPowertrainController_P.MotTrq, 11U);

  /* Lookup_n-D: '<S2>/ChrgLmt' */
  rtb_MaxMotTrqVsSpd = look1_binlcapw(*rtu_BattSoc,
    FCEvPowertrainController_P.SOC_bpt, FCEvPowertrainController_P.ChrgLmt_bpt,
    10U);

  /* Lookup_n-D: '<S2>/DischrgLmt' */
  rtb_Switch2_l = look1_binlcapw(*rtu_BattSoc,
    FCEvPowertrainController_P.SOC_bpt,
    FCEvPowertrainController_P.DischrgLmt_bpt, 10U);

  /* Product: '<S2>/Product' incorporates:
   *  Constant: '<S2>/MaxDischrg'
   */
  rtb_Switch2_l *= FCEvPowertrainController_P.BattDischrgMax;

  /* Product: '<S2>/Product1' incorporates:
   *  Constant: '<S2>/MaxChrg'
   *  Lookup_n-D: '<S2>/ChrgLmt'
   */
  rtb_Switch = rtb_MaxMotTrqVsSpd * FCEvPowertrainController_P.BattChrgMax;

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S3>/Constant1'
   */
  if (FCEvPowertrainController_P.Constant_Value_kv >
      FCEvPowertrainController_P.Switch_Threshold) {
    rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.Constant1_Value;
  } else {
    rtb_MaxMotTrqVsSpd = *rtu_DecelPdl;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Product: '<S3>/Product1' incorporates:
   *  Constant: '<S3>/Constant'
   */
  rtb_Product1_d = rtb_MaxMotTrqVsSpd * FCEvPowertrainController_P.BrkPrsMax;

  /* Saturate: '<S4>/Saturation3' */
  rtb_MaxMotTrqVsSpd = *rtu_FCVolt;
  if (rtb_MaxMotTrqVsSpd > FCEvPowertrainController_P.Saturation3_UpperSat) {
    rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.Saturation3_UpperSat;
  } else if (rtb_MaxMotTrqVsSpd <
             FCEvPowertrainController_P.Saturation3_LowerSat) {
    rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.Saturation3_LowerSat;
  }

  /* Product: '<S4>/Divide1' incorporates:
   *  Saturate: '<S4>/Saturation3'
   */
  rtb_MaxMotTrqVsSpd = *rtu_P_fc / rtb_MaxMotTrqVsSpd;

  /* Saturate: '<S4>/Saturation4' */
  if (rtb_MaxMotTrqVsSpd > FCEvPowertrainController_P.Saturation4_UpperSat) {
    *rty_FCCurrCmd = FCEvPowertrainController_P.Saturation4_UpperSat;
  } else if (rtb_MaxMotTrqVsSpd <
             FCEvPowertrainController_P.Saturation4_LowerSat) {
    *rty_FCCurrCmd = FCEvPowertrainController_P.Saturation4_LowerSat;
  } else {
    *rty_FCCurrCmd = rtb_MaxMotTrqVsSpd;
  }

  /* End of Saturate: '<S4>/Saturation4' */

  /* Constant: '<S4>/Constant2' */
  *rty_FCTempCmd = FCEvPowertrainController_P.FCctrl.tempTgt;

  /* Sum: '<S4>/Subtract1' incorporates:
   *  Constant: '<S4>/Constant3'
   */
  rtb_Subtract1 = *rtu_BattSoc - FCEvPowertrainController_P.FCctrl.SOCtgt;

  /* Step: '<S4>/Step' */
  if (rtmGetTaskTime(FCEvPowertrainController_M, 0) <
      FCEvPowertrainController_P.Step_Time) {
    rtb_MotTrqRegenWhl_0 = FCEvPowertrainController_P.Step_Y0;
  } else {
    rtb_MotTrqRegenWhl_0 = FCEvPowertrainController_P.Step_YFinal;
  }

  /* Product: '<S4>/Product2' incorporates:
   *  Step: '<S4>/Step'
   */
  rtb_MaxMotTrqVsSpd = rtb_MotTrqRegenWhl_0 * rtb_Subtract1;

  /* Gain: '<S37>/Integral Gain' */
  localB->IntegralGain = FCEvPowertrainController_P.PIDController1_I *
    rtb_MaxMotTrqVsSpd;

  /* Gain: '<S43>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S35>/Filter'
   *  Gain: '<S34>/Derivative Gain'
   *  Sum: '<S35>/SumD'
   */
  localB->FilterCoefficient = (FCEvPowertrainController_P.PIDController1_D *
    rtb_MaxMotTrqVsSpd - localDW->Filter_DSTATE) *
    FCEvPowertrainController_P.PIDController1_N;

  /* Gain: '<S45>/Proportional Gain' */
  rtb_Subtract1 = FCEvPowertrainController_P.PIDController1_P *
    rtb_MaxMotTrqVsSpd;

  /* Gain: '<S62>/rads_to_rpm' */
  rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.rads_to_rpm_Gain_n *
    *rtu_MtrSpd;

  /* Lookup_n-D: '<S62>/MaxMotTrqVsSpd' */
  rtb_MaxMotTrqVsSpd = look1_binlcapw(rtb_MaxMotTrqVsSpd,
    FCEvPowertrainController_P.MotSpd, FCEvPowertrainController_P.MotTrq, 11U);

  /* RelationalOperator: '<S57>/Compare' incorporates:
   *  Constant: '<S57>/Constant'
   */
  rtb_Compare = (*rtu_AccelPdl >
                 FCEvPowertrainController_P.CompareToConstant_const);

  /* Product: '<S70>/Product2' incorporates:
   *  Constant: '<S70>/Constant'
   */
  rtb_Product1_d *= FCEvPowertrainController_P.mu_kinetic * 3.1415926535897931 *
    0.0025000000000000005 * FCEvPowertrainController_P.Rm *
    FCEvPowertrainController_P.num_pads / 4.0 * 4.0;

  /* Gain: '<S70>/rads_to_rpm' */
  rtb_Switch1 = FCEvPowertrainController_P.rads_to_rpm_Gain_f * *rtu_MtrSpd;

  /* Lookup_n-D: '<S70>/MaxMotTrqVsSpd' incorporates:
   *  Switch: '<S58>/Switch1'
   */
  rtb_Switch1_m = look1_binlcapw(rtb_Switch1, FCEvPowertrainController_P.MotSpd,
    FCEvPowertrainController_P.MotTrq, 11U);

  /* Lookup_n-D: '<S70>/RegenBrakingCutoff' */
  rtb_Switch1 = look1_binlcapw(*rtu_VehSpdFdbk,
    FCEvPowertrainController_P.RegenBrkSpd_bpt,
    FCEvPowertrainController_P.RegenBrkCutOff, 1U);

  /* Lookup_n-D: '<S70>/ChrgLmt' */
  rtb_MotTrqRegenWhl_0 = look1_binlcapw(*rtu_BattSoc,
    FCEvPowertrainController_P.SOC_bpt, FCEvPowertrainController_P.ChrgLmt_bpt,
    10U);

  /* Product: '<S70>/Product3' incorporates:
   *  Gain: '<S70>/MotTrqReflectedToWheels'
   *  Lookup_n-D: '<S70>/ChrgLmt'
   *  MinMax: '<S70>/MinMax'
   *  Product: '<S70>/Product1'
   */
  rtb_MotTrqRegenWhl_0 = fmin(rtb_Product1_d, FCEvPowertrainController_P.Ndiff *
    rtb_Switch1_m) * (rtb_Switch1 * rtb_MotTrqRegenWhl_0);

  /* Switch: '<S5>/Accel Decel Switch' incorporates:
   *  Gain: '<S70>/Gain'
   *  Gain: '<S70>/WhlTrqReflectedToMot'
   */
  if (rtb_Compare) {
    rtb_Switch1 = rtb_Product1_m;
  } else {
    rtb_Switch1 = 1.0 / FCEvPowertrainController_P.Ndiff * rtb_MotTrqRegenWhl_0 *
      FCEvPowertrainController_P.Gain_Gain;
  }

  /* End of Switch: '<S5>/Accel Decel Switch' */

  /* Abs: '<S58>/Abs' */
  rtb_Switch1_m = fabs(*rtu_MtrSpd);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   */
  rtb_Compare = (rtb_Switch1_m <
                 FCEvPowertrainController_P.CompareToConstant_const_l);

  /* Product: '<S61>/Product3' incorporates:
   *  Product: '<S61>/Product'
   */
  rtb_Product3 = *rtu_MtrSpd * rtb_Switch1;

  /* Gain: '<S61>/rads_to_rpm' */
  rtb_Switch1_m = FCEvPowertrainController_P.rads_to_rpm_Gain_l * *rtu_MtrSpd;

  /* Gain: '<S61>/Gain1' incorporates:
   *  Abs: '<S61>/Abs'
   *  Abs: '<S61>/Abs1'
   *  Lookup_n-D: '<S61>/Eff Map'
   */
  rtb_Switch1_m = FCEvPowertrainController_P.Gain1_Gain * look2_binlcapw(fabs
    (rtb_Switch1_m), fabs(rtb_Switch1), FCEvPowertrainController_P.w_eff_bp,
    FCEvPowertrainController_P.T_eff_bp,
    FCEvPowertrainController_P.efficiency_table,
    FCEvPowertrainController_P.EffMap_maxIndex, 12U);

  /* Switch: '<S61>/Switch2' incorporates:
   *  Constant: '<S61>/Constant1'
   *  Constant: '<S61>/Constant2'
   */
  if (rtb_Product3 >= FCEvPowertrainController_P.Switch2_Threshold) {
    rtb_Product1_m = FCEvPowertrainController_P.Constant1_Value_p;
  } else {
    rtb_Product1_m = FCEvPowertrainController_P.Constant2_Value;
  }

  /* End of Switch: '<S61>/Switch2' */

  /* Math: '<S61>/Math Function' */
  if ((rtb_Switch1_m < 0.0) && (rtb_Product1_m > floor(rtb_Product1_m))) {
    rtb_Switch1_m = -rt_powd_snf(-rtb_Switch1_m, rtb_Product1_m);
  } else {
    rtb_Switch1_m = rt_powd_snf(rtb_Switch1_m, rtb_Product1_m);
  }

  /* End of Math: '<S61>/Math Function' */

  /* Product: '<S61>/Product4' incorporates:
   *  Product: '<S61>/Product3'
   */
  rtb_Product1_m = rtb_Product3 * rtb_Switch1_m;

  /* Sum: '<S59>/Subtract' */
  rtb_Product3 = rtb_Switch2_l - rtb_Product1_m;

  /* Sum: '<S59>/Subtract1' */
  rtb_Subtract1_b = rtb_Switch - rtb_Product1_m;

  /* Switch: '<S66>/Switch2' incorporates:
   *  RelationalOperator: '<S66>/LowerRelop1'
   */
  if (!(rtb_Product1_m > rtb_Switch2_l)) {
    /* Switch: '<S66>/Switch' incorporates:
     *  RelationalOperator: '<S66>/UpperRelop'
     */
    if (rtb_Product1_m < rtb_Switch) {
      rtb_Switch2_l = rtb_Switch;
    } else {
      rtb_Switch2_l = rtb_Product1_m;
    }

    /* End of Switch: '<S66>/Switch' */
  }

  /* End of Switch: '<S66>/Switch2' */

  /* Switch: '<S63>/Switch1' incorporates:
   *  Constant: '<S63>/Constant'
   *  UnaryMinus: '<S63>/Unary Minus'
   */
  if (*rtu_MtrSpd >= FCEvPowertrainController_P.Switch1_Threshold) {
    rtb_Product1_m = FCEvPowertrainController_P.Constant_Value_d;
  } else {
    rtb_Product1_m = -FCEvPowertrainController_P.Constant_Value_d;
  }

  /* End of Switch: '<S63>/Switch1' */

  /* Fcn: '<S63>/Fcn' */
  rtb_Switch = *rtu_MtrSpd / 2.0;

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   */
  rtb_Compare_e = (*rtu_MtrSpd >=
                   -FCEvPowertrainController_P.div0protectpoly_thresh);

  /* RelationalOperator: '<S69>/Compare' incorporates:
   *  Constant: '<S69>/Constant'
   */
  rtb_Compare_j = (*rtu_MtrSpd <=
                   FCEvPowertrainController_P.div0protectpoly_thresh);

  /* Switch: '<S63>/Switch' incorporates:
   *  Fcn: '<S63>/Fcn'
   *  Logic: '<S63>/Logical Operator'
   *  Product: '<S63>/Product'
   */
  if (rtb_Compare_e && rtb_Compare_j) {
    rtb_Product1_m *= 4.0 / (3.0 - rt_powd_snf(rtb_Switch, 2.0));
  } else {
    rtb_Product1_m = *rtu_MtrSpd;
  }

  /* End of Switch: '<S63>/Switch' */

  /* Switch: '<S58>/Switch1' */
  if (!rtb_Compare) {
    /* Switch: '<S58>/Switch' incorporates:
     *  Constant: '<S64>/Constant'
     *  Constant: '<S65>/Constant'
     *  Logic: '<S59>/Logical Operator'
     *  Product: '<S58>/ElecToMechPwr'
     *  Product: '<S58>/MechPwrToTrq'
     *  RelationalOperator: '<S64>/Compare'
     *  RelationalOperator: '<S65>/Compare'
     */
    if ((!(rtb_Product3 >= FCEvPowertrainController_P.Constant_Value)) ||
        (!(rtb_Subtract1_b <= FCEvPowertrainController_P.Constant_Value_k))) {
      rtb_Switch1 = rtb_Switch2_l / rtb_Switch1_m / rtb_Product1_m;
    }

    /* End of Switch: '<S58>/Switch' */
  }

  /* End of Switch: '<S58>/Switch1' */

  /* Gain: '<S62>/Gain' */
  rtb_Product1_m = FCEvPowertrainController_P.Gain_Gain_l * rtb_MaxMotTrqVsSpd;

  /* Switch: '<S67>/Switch2' incorporates:
   *  RelationalOperator: '<S67>/LowerRelop1'
   *  RelationalOperator: '<S67>/UpperRelop'
   *  Switch: '<S67>/Switch'
   */
  if (rtb_Switch1 > rtb_MaxMotTrqVsSpd) {
    *rty_MotTrqCmd = rtb_MaxMotTrqVsSpd;
  } else if (rtb_Switch1 < rtb_Product1_m) {
    /* Switch: '<S67>/Switch' */
    *rty_MotTrqCmd = rtb_Product1_m;
  } else {
    *rty_MotTrqCmd = rtb_Switch1;
  }

  /* End of Switch: '<S67>/Switch2' */

  /* Saturate: '<S4>/Saturation2' */
  rtb_MaxMotTrqVsSpd = *rtu_MtrSpd;
  if (rtb_MaxMotTrqVsSpd > FCEvPowertrainController_P.Saturation2_UpperSat) {
    rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.Saturation2_UpperSat;
  } else if (rtb_MaxMotTrqVsSpd <
             FCEvPowertrainController_P.Saturation2_LowerSat) {
    rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.Saturation2_LowerSat;
  }

  /* Product: '<S4>/Product' incorporates:
   *  Saturate: '<S4>/Saturation2'
   */
  *rty_P_demand = *rty_MotTrqCmd * rtb_MaxMotTrqVsSpd;

  /* Sum: '<S4>/Subtract' incorporates:
   *  DiscreteIntegrator: '<S40>/Integrator'
   *  Sum: '<S49>/Sum'
   */
  rtb_Product1_m = *rty_P_demand - ((rtb_Subtract1 + localDW->Integrator_DSTATE)
    + localB->FilterCoefficient);

  /* Product: '<S4>/Product1' incorporates:
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/OptFCPwr'
   *  Gain: '<S8>/Gain2'
   *  Math: '<S8>/Math Function'
   *  Product: '<S8>/Divide'
   *  Sum: '<S8>/Add'
   *  Sum: '<S8>/Add1'
   *
   * About '<S8>/Math Function':
   *  Operator: exp
   */
  *rty_Pfc = FCEvPowertrainController_P.Constant1_Value_m / (exp((rtb_Product1_m
    - FCEvPowertrainController_P.OptFCPwr_Value) *
    FCEvPowertrainController_P.Gain2_Gain) +
    FCEvPowertrainController_P.Constant2_Value_p) * rtb_Product1_m;

  /* Sum: '<S70>/Subtract' */
  rtb_MaxMotTrqVsSpd = rtb_Product1_d - rtb_MotTrqRegenWhl_0;

  /* Saturate: '<S70>/Negative 5' */
  if (rtb_MaxMotTrqVsSpd > FCEvPowertrainController_P.Negative5_UpperSat) {
    rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.Negative5_UpperSat;
  } else if (rtb_MaxMotTrqVsSpd < FCEvPowertrainController_P.Negative5_LowerSat)
  {
    rtb_MaxMotTrqVsSpd = FCEvPowertrainController_P.Negative5_LowerSat;
  }

  /* Product: '<S70>/Product4' incorporates:
   *  Constant: '<S70>/Constant1'
   *  Saturate: '<S70>/Negative 5'
   */
  *rty_BrkCmd = rtb_MaxMotTrqVsSpd / (FCEvPowertrainController_P.mu_kinetic *
    3.1415926535897931 * 0.0025000000000000005 * FCEvPowertrainController_P.Rm *
    FCEvPowertrainController_P.num_pads / 4.0 * 4.0);
}

/* Update for referenced model: 'FCEvPowertrainController' */
void FCEvPowertrainController_Update(B_FCEvPowertrainController_c_T *localB,
  DW_FCEvPowertrainController_f_T *localDW)
{
  /* Update for DiscreteIntegrator: '<S35>/Filter' */
  localDW->Filter_DSTATE += FCEvPowertrainController_P.Filter_gainval *
    localB->FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S40>/Integrator' */
  localDW->Integrator_DSTATE += FCEvPowertrainController_P.Integrator_gainval *
    localB->IntegralGain;
}

/* Model initialize function */
void FCEvPowertrainContro_initialize(SimStruct *const rtS, int_T mdlref_TID0,
  RT_MODEL_FCEvPowertrainContro_T *const FCEvPowertrainController_M,
  B_FCEvPowertrainController_c_T *localB, DW_FCEvPowertrainController_f_T
  *localDW)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  FCEvPowertrainController_P.Saturation3_UpperSat = rtInf;
  FCEvPowertrainController_P.Saturation2_UpperSat = rtInf;
  FCEvPowertrainController_P.Negative5_UpperSat = rtInf;

  /* initialize real-time model */
  (void) memset((void *)FCEvPowertrainController_M, 0,
                sizeof(RT_MODEL_FCEvPowertrainContro_T));

  /* setup the global timing engine */
  FCEvPowertrainController_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  FCEvPowertrainController_M->rtS = (rtS);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_FCEvPowertrainController_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_FCEvPowertrainController_f_T));
}
