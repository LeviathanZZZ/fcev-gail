/*
 * Code generation for system model 'FCElectricPlant'
 *
 * Model                      : FCElectricPlant
 * Model version              : 5.44
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Mon Mar 27 10:43:54 2023
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "FCElectricPlant.h"
#include "rtwtypes.h"
#include "FCElectricPlant_private.h"
#include <string.h>
#include <math.h>
#include <stddef.h>
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"

P_FCElectricPlant_T FCElectricPlant_P = {
  /* Variable: FCDCDC
   * Referenced by: '<S6>/Subsystem_around_RTP_E1FEEF9A_vc'
   */
  {
    650.0,
    60000.0,
    0.0,
    9230.76923076923,
    98.0,
    1.0,
    0.001,
    650.0,
    500.0,
    1.0e-8,
    0.005,
    0.001,
    0.8,
    0.001,
    1.0e-5,
    0.001,
    0.0,
    10.0
  },

  /* Variable: env_RH
   * Referenced by:
   *   '<S123>/Subsystem_around_RTP_B9383376_RH_I'
   *   '<S127>/Subsystem_around_RTP_D8F5AF94_RH_I'
   *   '<S128>/Subsystem_around_RTP_DB717BFA_RH_I'
   *   '<S129>/Subsystem_around_RTP_36577BF7_RH_I'
   *   '<S129>/Subsystem_around_RTP_A6E86666_RH_I'
   */
  0.5,

  /* Variable: env_T
   * Referenced by:
   *   '<S115>/Subsystem_around_RTP_B621D173_T'
   *   '<S120>/Subsystem_around_RTP_584BDC9A_T'
   *   '<S121>/Subsystem_around_RTP_8D120582_T_I'
   *   '<S122>/Subsystem_around_RTP_BE319BAA_T_I'
   *   '<S122>/Subsystem_around_RTP_C2A2358B_T_I'
   *   '<S123>/Subsystem_around_RTP_B9383376_T_I'
   *   '<S124>/Subsystem_around_RTP_7FE9A967_T_I'
   *   '<S125>/Subsystem_around_RTP_AB7FE3B0_T_I'
   *   '<S126>/Subsystem_around_RTP_A30BC5AC_T_I'
   *   '<S126>/Subsystem_around_RTP_D40CF53A_T_I'
   *   '<S127>/Subsystem_around_RTP_D8F5AF94_T_I'
   *   '<S128>/Subsystem_around_RTP_DB717BFA_T_I'
   *   '<S129>/Subsystem_around_RTP_36577BF7_T_I'
   *   '<S129>/Subsystem_around_RTP_A6E86666_T_I'
   */
  20.0,

  /* Variable: env_p
   * Referenced by:
   *   '<S122>/Constant1'
   *   '<S128>/Constant1'
   *   '<S121>/Subsystem_around_RTP_8D120582_p_I'
   *   '<S122>/Subsystem_around_RTP_C2A2358B_p_I'
   *   '<S123>/Subsystem_around_RTP_B9383376_p_I'
   *   '<S124>/Subsystem_around_RTP_7FE9A967_p_I'
   *   '<S125>/Subsystem_around_RTP_AB7FE3B0_p_I'
   *   '<S126>/Subsystem_around_RTP_A30BC5AC_p_I'
   *   '<S126>/Subsystem_around_RTP_D40CF53A_p_I'
   *   '<S127>/Subsystem_around_RTP_D8F5AF94_p_I'
   *   '<S128>/Subsystem_around_RTP_DB717BFA_p_I'
   *   '<S129>/Subsystem_around_RTP_36577BF7_p_I'
   *   '<S129>/Subsystem_around_RTP_A6E86666_p_I'
   */
  0.101325,

  /* Variable: env_yO2
   * Referenced by:
   *   '<S123>/Subsystem_around_RTP_B9383376_y_g_I'
   *   '<S127>/Subsystem_around_RTP_D8F5AF94_y_g_I'
   *   '<S128>/Subsystem_around_RTP_DB717BFA_y_g_I'
   *   '<S129>/Subsystem_around_RTP_36577BF7_y_g_I'
   *   '<S129>/Subsystem_around_RTP_A6E86666_y_g_I'
   */
  0.21,

  /* Variable: stack_area
   * Referenced by:
   *   '<S194>/Gain'
   *   '<S205>/Constant'
   */
  280.0,

  /* Variable: stack_iL
   * Referenced by:
   *   '<S194>/Gain'
   *   '<S205>/Constant'
   */
  1.4,

  /* Variable: stack_num_cells
   * Referenced by: '<S205>/M_set'
   */
  400.0,

  /* Variable: tank_p
   * Referenced by: '<S122>/Subsystem_around_RTP_BE319BAA_p_I'
   */
  70.0,

  /* Variable: tank_yH2
   * Referenced by:
   *   '<S121>/Subsystem_around_RTP_8D120582_y_g_I'
   *   '<S122>/Subsystem_around_RTP_BE319BAA_y_g_I'
   *   '<S122>/Subsystem_around_RTP_C2A2358B_y_g_I'
   *   '<S124>/Subsystem_around_RTP_7FE9A967_y_g_I'
   *   '<S125>/Subsystem_around_RTP_AB7FE3B0_y_g_I'
   *   '<S126>/Subsystem_around_RTP_A30BC5AC_y_g_I'
   *   '<S126>/Subsystem_around_RTP_D40CF53A_y_g_I'
   */
  0.9997,

  /* Mask Parameter: PIDController_D
   * Referenced by: '<S92>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S95>/Integral Gain'
   */
  0.01,

  /* Mask Parameter: PIDController_I_k
   * Referenced by: '<S240>/Integral Gain'
   */
  0.5,

  /* Mask Parameter: PIDController_I_g
   * Referenced by: '<S171>/Integral Gain'
   */
  0.01,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S243>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_n
   * Referenced by: '<S174>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_Kb
   * Referenced by: '<S236>/Kb'
   */
  1.0,

  /* Mask Parameter: PIDController_Kb_i
   * Referenced by: '<S167>/Kb'
   */
  0.1,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S105>/Saturation'
   */
  -1.0,

  /* Mask Parameter: PIDController_LowerSaturation_n
   * Referenced by: '<S250>/Saturation'
   */
  0.0,

  /* Mask Parameter: PIDController_LowerSaturation_i
   * Referenced by: '<S181>/Saturation'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S101>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S103>/Proportional Gain'
   */
  0.006,

  /* Mask Parameter: PIDController_P_e
   * Referenced by: '<S241>/Proportional Gain'
   */
  5.0,

  /* Mask Parameter: PIDController_P_p
   * Referenced by: '<S172>/Proportional Gain'
   */
  0.1,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S105>/Saturation'
   */
  1.0,

  /* Mask Parameter: PIDController_UpperSaturation_e
   * Referenced by: '<S250>/Saturation'
   */
  1.0,

  /* Mask Parameter: PIDController_UpperSaturation_h
   * Referenced by: '<S181>/Saturation'
   */
  1.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S65>/Constant'
   */
  0.01,

  /* Computed Parameter: TransferFcn3_A
   * Referenced by: '<S118>/Transfer Fcn3'
   */
  -1000.0,

  /* Computed Parameter: TransferFcn3_C
   * Referenced by: '<S118>/Transfer Fcn3'
   */
  1000.0,

  /* Computed Parameter: TransferFcn5_A
   * Referenced by: '<S17>/Transfer Fcn5'
   */
  -1000.0,

  /* Computed Parameter: TransferFcn5_C
   * Referenced by: '<S17>/Transfer Fcn5'
   */
  1000.0,

  /* Expression: inf
   * Referenced by: '<S16>/Saturation'
   */
  0.0,

  /* Expression: min(Bat.noLoadV, [], 'all')
   * Referenced by: '<S16>/Saturation'
   */
  201.6,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<S125>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<S125>/Transfer Fcn'
   */
  1.0,

  /* Computed Parameter: TransferFcn_A_c
   * Referenced by: '<S194>/Transfer Fcn'
   */
  -0.5,

  /* Computed Parameter: TransferFcn_C_n
   * Referenced by: '<S194>/Transfer Fcn'
   */
  0.5,

  /* Computed Parameter: TransferFcn_A_e
   * Referenced by: '<S138>/Transfer Fcn'
   */
  -0.5,

  /* Computed Parameter: TransferFcn_C_c
   * Referenced by: '<S138>/Transfer Fcn'
   */
  0.5,

  /* Expression: 0.06
   * Referenced by: '<S122>/Stack Pressure'
   */
  0.06,

  /* Computed Parameter: TransferFcn_A_o
   * Referenced by: '<S205>/Transfer Fcn'
   */
  -0.5,

  /* Computed Parameter: TransferFcn_C_e
   * Referenced by: '<S205>/Transfer Fcn'
   */
  0.5,

  /* Computed Parameter: TransferFcn_A_od
   * Referenced by: '<S261>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_h
   * Referenced by: '<S261>/Transfer Fcn'
   */
  1.0,

  /* Computed Parameter: TransferFcn_A_i
   * Referenced by: '<S124>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_m
   * Referenced by: '<S124>/Transfer Fcn'
   */
  1.0,

  /* Computed Parameter: TransferFcn_A_i0
   * Referenced by: '<S270>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_k
   * Referenced by: '<S270>/Transfer Fcn'
   */
  1.0,

  /* Computed Parameter: TransferFcn_A_p
   * Referenced by: '<S127>/Transfer Fcn'
   */
  -1.0,

  /* Computed Parameter: TransferFcn_C_f
   * Referenced by: '<S127>/Transfer Fcn'
   */
  1.0,

  /* Expression: 0.06
   * Referenced by: '<S128>/Stack Pressure'
   */
  0.06,

  /* Computed Parameter: TransferFcn1_A
   * Referenced by: '<S118>/Transfer Fcn1'
   */
  -1000.0,

  /* Computed Parameter: TransferFcn1_C
   * Referenced by: '<S118>/Transfer Fcn1'
   */
  1000.0,

  /* Computed Parameter: TransferFcn_A_oz
   * Referenced by: '<S60>/Transfer Fcn'
   */
  -1000.0,

  /* Computed Parameter: TransferFcn_C_ka
   * Referenced by: '<S60>/Transfer Fcn'
   */
  1000.0,

  /* Expression: 0
   * Referenced by: '<S60>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S60>/Constant3'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S60>/Saturation'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S60>/Saturation'
   */
  0.0,

  /* Computed Parameter: TransferFcn2_A
   * Referenced by: '<S287>/Transfer Fcn2'
   */
  -1000.0,

  /* Computed Parameter: TransferFcn2_C
   * Referenced by: '<S287>/Transfer Fcn2'
   */
  1000.0,

  /* Expression: f_fc_voltage(1)
   * Referenced by: '<S119>/Subsystem_around_RTP_5A418EBA_vc'
   */
  454.99261510564628,

  /* Expression: 0
   * Referenced by: '<S126>/Subsystem_around_RTP_A30BC5AC_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S126>/Subsystem_around_RTP_D40CF53A_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S129>/Subsystem_around_RTP_36577BF7_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S129>/Subsystem_around_RTP_A6E86666_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S125>/Subsystem_around_RTP_AB7FE3B0_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S121>/Subsystem_around_RTP_8D120582_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S122>/Subsystem_around_RTP_BE319BAA_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S122>/Subsystem_around_RTP_C2A2358B_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S123>/Subsystem_around_RTP_B9383376_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S124>/Subsystem_around_RTP_7FE9A967_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S127>/Subsystem_around_RTP_D8F5AF94_x_g_I'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S128>/Subsystem_around_RTP_DB717BFA_x_g_I'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<S2>/Subsystem_around_RTP_0ABF9833_stateOfCharge'
   */
  0.6,

  /* Expression: 0
   * Referenced by: '<S6>/Subsystem_around_RTP_E1FEEF9A_iL'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S2>/Gain1'
   */
  100.0,

  /* Computed Parameter: MotorCouplingDynamics1_A
   * Referenced by: '<S287>/Motor Coupling Dynamics1'
   */
  -1000.0,

  /* Computed Parameter: MotorCouplingDynamics1_C
   * Referenced by: '<S287>/Motor Coupling Dynamics1'
   */
  1000.0,

  /* Computed Parameter: TransferFcn2_A_a
   * Referenced by: '<S118>/Transfer Fcn2'
   */
  -1000.0,

  /* Computed Parameter: TransferFcn2_C_b
   * Referenced by: '<S118>/Transfer Fcn2'
   */
  1000.0,

  /* Computed Parameter: StateSpace_A_pr
   * Referenced by: '<S28>/State Space'
   */
  -100.0,

  /* Computed Parameter: StateSpace_B_pr
   * Referenced by: '<S28>/State Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_C_pr
   * Referenced by: '<S28>/State Space'
   */
  100.0,

  /* Expression: X0
   * Referenced by: '<S28>/State Space'
   */
  6.5,

  /* Expression: 50
   * Referenced by: '<Root>/Constant1'
   */
  50.0,

  /* Computed Parameter: TransferFcn4_A
   * Referenced by: '<S118>/Transfer Fcn4'
   */
  -1000.0,

  /* Computed Parameter: TransferFcn4_C
   * Referenced by: '<S118>/Transfer Fcn4'
   */
  1000.0,

  /* Expression: 2.5
   * Referenced by: '<S123>/Oxygen Excess Ratio'
   */
  2.5,

  /* Expression: 0.2
   * Referenced by: '<S194>/Constant'
   */
  0.2,

  /* Expression: 1
   * Referenced by: '<S194>/Saturation'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S194>/Saturation'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S124>/Relative Humidity'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S261>/Gain'
   */
  0.1,

  /* Expression: inf
   * Referenced by: '<S261>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S261>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S125>/Constant'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S127>/Relative Humidity'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S270>/Gain'
   */
  0.1,

  /* Expression: inf
   * Referenced by: '<S270>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S270>/Saturation'
   */
  0.0,

  /* Computed Parameter: StateSpace_A_ir
   * Referenced by: '<S28>/State Space'
   */
  0U,

  /* Computed Parameter: StateSpace_A_jc
   * Referenced by: '<S28>/State Space'
   */
  { 0U, 1U },

  /* Computed Parameter: StateSpace_B_ir
   * Referenced by: '<S28>/State Space'
   */
  0U,

  /* Computed Parameter: StateSpace_B_jc
   * Referenced by: '<S28>/State Space'
   */
  { 0U, 1U },

  /* Computed Parameter: StateSpace_C_ir
   * Referenced by: '<S28>/State Space'
   */
  0U,

  /* Computed Parameter: StateSpace_C_jc
   * Referenced by: '<S28>/State Space'
   */
  { 0U, 1U }
};

/* System initialize for referenced model: 'FCElectricPlant' */
void FCElectricPlant_Init(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M,
  DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T *localX)
{
  boolean_T tmp;
  boolean_T tmp_0;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn3' */
  localX->TransferFcn3_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S17>/Transfer Fcn5' */
  localX->TransferFcn5_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S125>/Transfer Fcn' */
  localX->TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S194>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_m = 0.0;

  /* InitializeConditions for TransferFcn: '<S138>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_b = 0.0;

  /* InitializeConditions for TransferFcn: '<S205>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_be = 0.0;

  /* InitializeConditions for TransferFcn: '<S261>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_g = 0.0;

  /* InitializeConditions for TransferFcn: '<S124>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_e = 0.0;

  /* InitializeConditions for TransferFcn: '<S270>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_gw = 0.0;

  /* InitializeConditions for TransferFcn: '<S127>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_d = 0.0;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn1' */
  localX->TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S60>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_f = 0.0;

  /* InitializeConditions for Integrator: '<S98>/Integrator' incorporates:
   *  Integrator: '<S93>/Filter'
   */
  if (rtmIsFirstInitCond(FCElectricPlant_M)) {
    localX->Integrator_CSTATE = 0.0;
    localX->Filter_CSTATE = 0.0;
  }

  localDW->Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S98>/Integrator' */

  /* InitializeConditions for Integrator: '<S93>/Filter' */
  localDW->Filter_IWORK = 1;

  /* InitializeConditions for TransferFcn: '<S287>/Transfer Fcn2' */
  localX->TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for SimscapeExecutionBlock: '<S302>/STATE_1' */
  tmp = true;
  tmp_0 = false;
  if (tmp_0 || tmp) {
    int_T is;
    int_T tmp_1;
    int_T tmp_2;
    int_T tmp_3;
    int_T tmp_4;
    int_T tmp_5;
    is = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "daessc");
    tmp_1 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode14x");
    tmp_2 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode15s");
    tmp_3 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode1be");
    tmp_4 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode23t");
    tmp_5 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "odeN");
    if ((boolean_T)((is != 0) & (tmp_1 != 0) & (tmp_2 != 0) & (tmp_3 != 0) &
                    (tmp_4 != 0) & (tmp_5 != 0))) {
      ssSetErrorStatus(FCElectricPlant_M->rtS,
                       "Detected inconsistent solvers in the model reference hierarchy. Model built with ode23t requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
    }
  }

  /* End of InitializeConditions for SimscapeExecutionBlock: '<S302>/STATE_1' */

  /* InitializeConditions for TransferFcn: '<S287>/Motor Coupling Dynamics1' */
  localX->MotorCouplingDynamics1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn2' */
  localX->TransferFcn2_CSTATE_j = 0.0;

  /* InitializeConditions for StateSpace: '<S28>/State Space' */
  localX->StateSpace_CSTATE = FCElectricPlant_P.StateSpace_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn4' */
  localX->TransferFcn4_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S243>/Integrator' */
  localX->Integrator_CSTATE_j =
    FCElectricPlant_P.PIDController_InitialConditionF;

  /* InitializeConditions for Integrator: '<S174>/Integrator' */
  localX->Integrator_CSTATE_o =
    FCElectricPlant_P.PIDController_InitialConditio_n;
}

/* System reset for referenced model: 'FCElectricPlant' */
void FCElectricPlant_Reset(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M,
  DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T *localX)
{
  boolean_T tmp;
  boolean_T tmp_0;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn3' */
  localX->TransferFcn3_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S17>/Transfer Fcn5' */
  localX->TransferFcn5_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S125>/Transfer Fcn' */
  localX->TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S194>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_m = 0.0;

  /* InitializeConditions for TransferFcn: '<S138>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_b = 0.0;

  /* InitializeConditions for TransferFcn: '<S205>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_be = 0.0;

  /* InitializeConditions for TransferFcn: '<S261>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_g = 0.0;

  /* InitializeConditions for TransferFcn: '<S124>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_e = 0.0;

  /* InitializeConditions for TransferFcn: '<S270>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_gw = 0.0;

  /* InitializeConditions for TransferFcn: '<S127>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_d = 0.0;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn1' */
  localX->TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S60>/Transfer Fcn' */
  localX->TransferFcn_CSTATE_f = 0.0;

  /* InitializeConditions for Integrator: '<S98>/Integrator' incorporates:
   *  Integrator: '<S93>/Filter'
   */
  if (rtmIsFirstInitCond(FCElectricPlant_M)) {
    localX->Integrator_CSTATE = 0.0;
    localX->Filter_CSTATE = 0.0;
  }

  localDW->Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S98>/Integrator' */

  /* InitializeConditions for Integrator: '<S93>/Filter' */
  localDW->Filter_IWORK = 1;

  /* InitializeConditions for TransferFcn: '<S287>/Transfer Fcn2' */
  localX->TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for SimscapeExecutionBlock: '<S302>/STATE_1' */
  tmp = true;
  tmp_0 = false;
  if (tmp_0 || tmp) {
    int_T is;
    int_T tmp_1;
    int_T tmp_2;
    int_T tmp_3;
    int_T tmp_4;
    int_T tmp_5;
    is = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "daessc");
    tmp_1 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode14x");
    tmp_2 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode15s");
    tmp_3 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode1be");
    tmp_4 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "ode23t");
    tmp_5 = strcmp(ssGetSolverName(FCElectricPlant_M->rtS), "odeN");
    if ((boolean_T)((is != 0) & (tmp_1 != 0) & (tmp_2 != 0) & (tmp_3 != 0) &
                    (tmp_4 != 0) & (tmp_5 != 0))) {
      ssSetErrorStatus(FCElectricPlant_M->rtS,
                       "Detected inconsistent solvers in the model reference hierarchy. Model built with ode23t requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
    }
  }

  /* End of InitializeConditions for SimscapeExecutionBlock: '<S302>/STATE_1' */

  /* InitializeConditions for TransferFcn: '<S287>/Motor Coupling Dynamics1' */
  localX->MotorCouplingDynamics1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn2' */
  localX->TransferFcn2_CSTATE_j = 0.0;

  /* InitializeConditions for StateSpace: '<S28>/State Space' */
  localX->StateSpace_CSTATE = FCElectricPlant_P.StateSpace_InitialCondition;

  /* InitializeConditions for TransferFcn: '<S118>/Transfer Fcn4' */
  localX->TransferFcn4_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S243>/Integrator' */
  localX->Integrator_CSTATE_j =
    FCElectricPlant_P.PIDController_InitialConditionF;

  /* InitializeConditions for Integrator: '<S174>/Integrator' */
  localX->Integrator_CSTATE_o =
    FCElectricPlant_P.PIDController_InitialConditio_n;
}

/* Start for referenced model: 'FCElectricPlant' */
void FCElectricPlant_Start(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M,
  B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T *localDW,
  X_FCElectricPlant_n_T *localX, XPtMin_FCElectricPlant_T *localXPerturbMin,
  XPtMax_FCElectricPlant_T *localXPerturbMax)
{
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_0;
  NeslRtpManager *manager;
  NeslRtpManager *manager_0;
  NeslSimulationData *simulationData;
  NeslSimulator *tmp_0;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  real_T tmp_3[56];
  real_T time;
  real_T tmp_1;
  int32_T tmp_2;
  int_T tmp_4[15];
  boolean_T tmp;
  boolean_T val;

  /* Start for Constant: '<S60>/Constant' */
  localB->Constant_c = FCElectricPlant_P.Constant_Value;

  /* Start for SimscapeRtp: '<S10>/RTP_1' */
  manager_0 = nesl_lease_rtp_manager("FCElectricPlant/Solver Configuration_1", 0);
  manager = manager_0;
  tmp = pointer_is_null(manager_0);
  if (tmp) {
    FCElectricPlant_66b3e3da_1_gateway();
    manager = nesl_lease_rtp_manager("FCElectricPlant/Solver Configuration_1", 0);
  }

  localDW->RTP_1_RtpManager = (void *)manager;
  localDW->RTP_1_SetParametersNeeded = true;

  /* End of Start for SimscapeRtp: '<S10>/RTP_1' */

  /* Start for SimscapeExecutionBlock: '<S302>/STATE_1' */
  tmp_0 = nesl_lease_simulator("FCElectricPlant/Solver Configuration_1", 0, 0);
  localDW->STATE_1_Simulator = (void *)tmp_0;
  tmp = pointer_is_null(localDW->STATE_1_Simulator);
  if (tmp) {
    FCElectricPlant_66b3e3da_1_gateway();
    tmp_0 = nesl_lease_simulator("FCElectricPlant/Solver Configuration_1", 0, 0);
    localDW->STATE_1_Simulator = (void *)tmp_0;
  }

  ;
  simulationData = nesl_create_simulation_data();
  localDW->STATE_1_SimData = (void *)simulationData;
  diagnosticManager = rtw_create_diagnostics();
  localDW->STATE_1_DiagMgr = (void *)diagnosticManager;
  modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters.mSolverAbsTol = 0.01;
  modelParameters.mSolverRelTol = 0.01;
  modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
  modelParameters.mStartTime = 0.0;
  modelParameters.mLoadInitialState = false;
  modelParameters.mUseSimState = false;
  modelParameters.mLinTrimCompile = false;
  modelParameters.mLoggingMode = SSC_LOGGING_NONE;
  modelParameters.mRTWModifiedTimeStamp = 6.01783876E+8;
  modelParameters.mZcDisabled = false;
  tmp_1 = 0.01;
  modelParameters.mSolverTolerance = tmp_1;
  tmp_1 = 0.0;
  modelParameters.mFixedStepSize = tmp_1;
  tmp = true;
  modelParameters.mVariableStepSolver = tmp;
  tmp = false;
  modelParameters.mIsUsingODEN = tmp;
  tmp = slIsRapidAcceleratorSimulating();
  val = ssGetGlobalInitialStatesAvailable(FCElectricPlant_M->rtS);
  if (tmp) {
    val = (val && rtmIsFirstInitCond(FCElectricPlant_M));
  }

  modelParameters.mLoadInitialState = val;
  modelParameters.mZcDisabled = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)localDW->STATE_1_Simulator,
    &modelParameters, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
    }
  }

  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time = rtmGetTaskTime(FCElectricPlant_M, 0);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  tmp = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
         (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(FCElectricPlant_M);
  tmp = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp;
  tmp = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp;
  tmp = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp;
  simulationData->mData->mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep
    (FCElectricPlant_M->rtS);
  tmp_4[0] = 0;
  tmp_3[0] = localB->INPUT_1_1_1[0];
  tmp_3[1] = localB->INPUT_1_1_1[1];
  tmp_3[2] = localB->INPUT_1_1_1[2];
  tmp_3[3] = localB->INPUT_1_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = localB->INPUT_2_1_1[0];
  tmp_3[5] = localB->INPUT_2_1_1[1];
  tmp_3[6] = localB->INPUT_2_1_1[2];
  tmp_3[7] = localB->INPUT_2_1_1[3];
  tmp_4[2] = 8;
  tmp_3[8] = localB->INPUT_4_1_1[0];
  tmp_3[9] = localB->INPUT_4_1_1[1];
  tmp_3[10] = localB->INPUT_4_1_1[2];
  tmp_3[11] = localB->INPUT_4_1_1[3];
  tmp_4[3] = 12;
  tmp_3[12] = localB->INPUT_3_1_1[0];
  tmp_3[13] = localB->INPUT_3_1_1[1];
  tmp_3[14] = localB->INPUT_3_1_1[2];
  tmp_3[15] = localB->INPUT_3_1_1[3];
  tmp_4[4] = 16;
  tmp_3[16] = localB->INPUT_5_1_1[0];
  tmp_3[17] = localB->INPUT_5_1_1[1];
  tmp_3[18] = localB->INPUT_5_1_1[2];
  tmp_3[19] = localB->INPUT_5_1_1[3];
  tmp_4[5] = 20;
  tmp_3[20] = localB->INPUT_6_1_1[0];
  tmp_3[21] = localB->INPUT_6_1_1[1];
  tmp_3[22] = localB->INPUT_6_1_1[2];
  tmp_3[23] = localB->INPUT_6_1_1[3];
  tmp_4[6] = 24;
  tmp_3[24] = localB->INPUT_7_1_1[0];
  tmp_3[25] = localB->INPUT_7_1_1[1];
  tmp_3[26] = localB->INPUT_7_1_1[2];
  tmp_3[27] = localB->INPUT_7_1_1[3];
  tmp_4[7] = 28;
  tmp_3[28] = localB->INPUT_8_1_1[0];
  tmp_3[29] = localB->INPUT_8_1_1[1];
  tmp_3[30] = localB->INPUT_8_1_1[2];
  tmp_3[31] = localB->INPUT_8_1_1[3];
  tmp_4[8] = 32;
  tmp_3[32] = localB->INPUT_9_1_1[0];
  tmp_3[33] = localB->INPUT_9_1_1[1];
  tmp_3[34] = localB->INPUT_9_1_1[2];
  tmp_3[35] = localB->INPUT_9_1_1[3];
  tmp_4[9] = 36;
  tmp_3[36] = localB->INPUT_10_1_1[0];
  tmp_3[37] = localB->INPUT_10_1_1[1];
  tmp_3[38] = localB->INPUT_10_1_1[2];
  tmp_3[39] = localB->INPUT_10_1_1[3];
  tmp_4[10] = 40;
  tmp_3[40] = localB->INPUT_11_1_1[0];
  tmp_3[41] = localB->INPUT_11_1_1[1];
  tmp_3[42] = localB->INPUT_11_1_1[2];
  tmp_3[43] = localB->INPUT_11_1_1[3];
  tmp_4[11] = 44;
  tmp_3[44] = localB->INPUT_12_1_1[0];
  tmp_3[45] = localB->INPUT_12_1_1[1];
  tmp_3[46] = localB->INPUT_12_1_1[2];
  tmp_3[47] = localB->INPUT_12_1_1[3];
  tmp_4[12] = 48;
  tmp_3[48] = localB->INPUT_14_1_1[0];
  tmp_3[49] = localB->INPUT_14_1_1[1];
  tmp_3[50] = localB->INPUT_14_1_1[2];
  tmp_3[51] = localB->INPUT_14_1_1[3];
  tmp_4[13] = 52;
  tmp_3[52] = localB->INPUT_13_1_1[0];
  tmp_3[53] = localB->INPUT_13_1_1[1];
  tmp_3[54] = localB->INPUT_13_1_1[2];
  tmp_3[55] = localB->INPUT_13_1_1[3];
  tmp_4[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  simulationData->mData->mNumjacDxLo.mN = 480;
  simulationData->mData->mNumjacDxLo.mX =
    &localXPerturbMin->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mNumjacDxHi.mN = 480;
  simulationData->mData->mNumjacDxHi.mX =
    &localXPerturbMax->FCElectricPlantBattery_SystemBa[0];
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_NUMJAC_DX_BOUNDS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg_0;
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg_0);
    }
  }

  /* End of Start for SimscapeExecutionBlock: '<S302>/STATE_1' */

  /* Start for SimscapeExecutionBlock: '<S302>/OUTPUT_1_0' */
  tmp_0 = nesl_lease_simulator("FCElectricPlant/Solver Configuration_1", 1, 0);
  localDW->OUTPUT_1_0_Simulator = (void *)tmp_0;
  tmp = pointer_is_null(localDW->OUTPUT_1_0_Simulator);
  if (tmp) {
    FCElectricPlant_66b3e3da_1_gateway();
    tmp_0 = nesl_lease_simulator("FCElectricPlant/Solver Configuration_1", 1, 0);
    localDW->OUTPUT_1_0_Simulator = (void *)tmp_0;
  }

  ;
  simulationData = nesl_create_simulation_data();
  localDW->OUTPUT_1_0_SimData = (void *)simulationData;
  diagnosticManager = rtw_create_diagnostics();
  localDW->OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
  modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_0.mSolverAbsTol = 0.01;
  modelParameters_0.mSolverRelTol = 0.01;
  modelParameters_0.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
  modelParameters_0.mStartTime = 0.0;
  modelParameters_0.mLoadInitialState = false;
  modelParameters_0.mUseSimState = false;
  modelParameters_0.mLinTrimCompile = false;
  modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
  modelParameters_0.mRTWModifiedTimeStamp = 6.01783876E+8;
  modelParameters_0.mZcDisabled = false;
  tmp_1 = 0.01;
  modelParameters_0.mSolverTolerance = tmp_1;
  tmp_1 = 0.0;
  modelParameters_0.mFixedStepSize = tmp_1;
  tmp = true;
  modelParameters_0.mVariableStepSolver = tmp;
  tmp = false;
  modelParameters_0.mIsUsingODEN = tmp;
  tmp = slIsRapidAcceleratorSimulating();
  val = ssGetGlobalInitialStatesAvailable(FCElectricPlant_M->rtS);
  if (tmp) {
    val = (val && rtmIsFirstInitCond(FCElectricPlant_M));
  }

  modelParameters_0.mLoadInitialState = val;
  modelParameters_0.mZcDisabled = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_0_Simulator, &modelParameters_0, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg_1;
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg_1);
    }
  }

  /* End of Start for SimscapeExecutionBlock: '<S302>/OUTPUT_1_0' */
}

/* Outputs for referenced model: 'FCElectricPlant' */
void FCElectricPlant(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M, const
                     real_T *rtu_MotTrqCmd, const real_T *rtu_MotSpd, const
                     real_T *rtu_FCCurrCmd, real_T *rty_BattSoc, real_T
                     *rty_BattPwr, real_T *rty_BattCurr, real_T *rty_MotTrq,
                     real_T *rty_FCVolt, real_T *rty_FCCurr, real_T *rty_TotPwr,
                     real_T *rty_H2Flow, real_T *rty_T, B_FCElectricPlant_c_T
                     *localB, DW_FCElectricPlant_f_T *localDW,
                     X_FCElectricPlant_n_T *localX, ZCE_FCElectricPlant_T
                     *localZCE)
{
  NeParameterBundle expl_temp;
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diag;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  real_T tmp[59];
  real_T tmp_1[56];
  real_T rtb_BattV;
  real_T rtb_DerivativeGain;
  real_T rtb_Gain;
  real_T rtb_Integrator;
  real_T rtb_Integrator_l;
  real_T rtb_ProportionalGain;
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T *parameterBundle_mRealParameters;
  int_T tmp_4[16];
  int_T tmp_2[15];
  int_T iy;
  boolean_T first_output;
  boolean_T tmp_0;
  boolean_T tmp_3;

  /* TransferFcn: '<S17>/Transfer Fcn5' */
  rtb_BattV = FCElectricPlant_P.TransferFcn5_C * localX->TransferFcn5_CSTATE;

  /* Saturate: '<S16>/Saturation' */
  if (rtb_BattV > FCElectricPlant_P.Saturation_UpperSat) {
    rtb_Integrator_l = FCElectricPlant_P.Saturation_UpperSat;
  } else if (rtb_BattV < FCElectricPlant_P.Saturation_LowerSat) {
    rtb_Integrator_l = FCElectricPlant_P.Saturation_LowerSat;
  } else {
    rtb_Integrator_l = rtb_BattV;
  }

  /* Product: '<S16>/Divide' incorporates:
   *  Saturate: '<S16>/Saturation'
   *  TransferFcn: '<S118>/Transfer Fcn3'
   */
  localB->Divide = FCElectricPlant_P.TransferFcn3_C *
    localX->TransferFcn3_CSTATE / rtb_Integrator_l;

  /* SimscapeInputBlock: '<S302>/INPUT_1_1_1' */
  if (localDW->INPUT_1_1_1_FirstOutput == 0.0) {
    localDW->INPUT_1_1_1_FirstOutput = 1.0;
    localX->FCElectricPlantBattery_SystemPo = localB->Divide;
  }

  localB->INPUT_1_1_1[0] = localX->FCElectricPlantBattery_SystemPo;
  localB->INPUT_1_1_1[1] = (localB->Divide -
    localX->FCElectricPlantBattery_SystemPo) * 1000.0;
  localB->INPUT_1_1_1[2] = 0.0;
  localB->INPUT_1_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S302>/INPUT_1_1_1' */

  /* TransferFcn: '<S125>/Transfer Fcn' */
  localB->TransferFcn = 0.0;
  localB->TransferFcn += FCElectricPlant_P.TransferFcn_C *
    localX->TransferFcn_CSTATE;

  /* SimscapeInputBlock: '<S302>/INPUT_2_1_1' */
  localB->INPUT_2_1_1[0] = localB->TransferFcn;
  localB->INPUT_2_1_1[1] = 0.0;
  localB->INPUT_2_1_1[2] = 0.0;
  localB->INPUT_2_1_1[3] = 0.0;

  /* TransferFcn: '<S194>/Transfer Fcn' */
  localB->TransferFcn_m = 0.0;
  localB->TransferFcn_m += FCElectricPlant_P.TransferFcn_C_n *
    localX->TransferFcn_CSTATE_m;

  /* SimscapeInputBlock: '<S302>/INPUT_4_1_1' */
  localB->INPUT_4_1_1[0] = localB->TransferFcn_m;
  localB->INPUT_4_1_1[1] = 0.0;
  localB->INPUT_4_1_1[2] = 0.0;
  localB->INPUT_4_1_1[3] = 0.0;

  /* TransferFcn: '<S138>/Transfer Fcn' */
  localB->TransferFcn_b = 0.0;
  localB->TransferFcn_b += FCElectricPlant_P.TransferFcn_C_c *
    localX->TransferFcn_CSTATE_b;

  /* SimscapeInputBlock: '<S302>/INPUT_3_1_1' */
  localB->INPUT_3_1_1[0] = localB->TransferFcn_b;
  localB->INPUT_3_1_1[1] = 0.0;
  localB->INPUT_3_1_1[2] = 0.0;
  localB->INPUT_3_1_1[3] = 0.0;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Sum: '<S122>/Sum' incorporates:
     *  Constant: '<S122>/Constant1'
     *  Constant: '<S122>/Stack Pressure'
     */
    localB->Sum = FCElectricPlant_P.StackPressure_Value +
      FCElectricPlant_P.env_p;
  }

  /* SimscapeInputBlock: '<S302>/INPUT_5_1_1' */
  localB->INPUT_5_1_1[0] = localB->Sum;
  localB->INPUT_5_1_1[1] = 0.0;
  localB->INPUT_5_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(FCElectricPlant_M)) {
    localDW->INPUT_5_1_1_Discrete[0] = !(localB->INPUT_5_1_1[0] ==
      localDW->INPUT_5_1_1_Discrete[1]);
    localDW->INPUT_5_1_1_Discrete[1] = localB->INPUT_5_1_1[0];
  }

  localB->INPUT_5_1_1[0] = localDW->INPUT_5_1_1_Discrete[1];
  localB->INPUT_5_1_1[3] = localDW->INPUT_5_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S302>/INPUT_5_1_1' */

  /* TransferFcn: '<S205>/Transfer Fcn' */
  localB->TransferFcn_l = 0.0;
  localB->TransferFcn_l += FCElectricPlant_P.TransferFcn_C_e *
    localX->TransferFcn_CSTATE_be;

  /* SimscapeInputBlock: '<S302>/INPUT_6_1_1' */
  localB->INPUT_6_1_1[0] = localB->TransferFcn_l;
  localB->INPUT_6_1_1[1] = 0.0;
  localB->INPUT_6_1_1[2] = 0.0;
  localB->INPUT_6_1_1[3] = 0.0;

  /* TransferFcn: '<S261>/Transfer Fcn' */
  localB->TransferFcn_k = 0.0;
  localB->TransferFcn_k += FCElectricPlant_P.TransferFcn_C_h *
    localX->TransferFcn_CSTATE_g;

  /* SimscapeInputBlock: '<S302>/INPUT_7_1_1' */
  localB->INPUT_7_1_1[0] = localB->TransferFcn_k;
  localB->INPUT_7_1_1[1] = 0.0;
  localB->INPUT_7_1_1[2] = 0.0;
  localB->INPUT_7_1_1[3] = 0.0;

  /* TransferFcn: '<S124>/Transfer Fcn' */
  localB->TransferFcn_c = 0.0;
  localB->TransferFcn_c += FCElectricPlant_P.TransferFcn_C_m *
    localX->TransferFcn_CSTATE_e;

  /* SimscapeInputBlock: '<S302>/INPUT_8_1_1' */
  localB->INPUT_8_1_1[0] = localB->TransferFcn_c + 273.15;
  localB->INPUT_8_1_1[1] = 0.0;
  localB->INPUT_8_1_1[2] = 0.0;
  localB->INPUT_8_1_1[3] = 0.0;

  /* TransferFcn: '<S270>/Transfer Fcn' */
  localB->TransferFcn_l0 = 0.0;
  localB->TransferFcn_l0 += FCElectricPlant_P.TransferFcn_C_k *
    localX->TransferFcn_CSTATE_gw;

  /* SimscapeInputBlock: '<S302>/INPUT_9_1_1' */
  localB->INPUT_9_1_1[0] = localB->TransferFcn_l0;
  localB->INPUT_9_1_1[1] = 0.0;
  localB->INPUT_9_1_1[2] = 0.0;
  localB->INPUT_9_1_1[3] = 0.0;

  /* TransferFcn: '<S127>/Transfer Fcn' */
  localB->TransferFcn_bm = 0.0;
  localB->TransferFcn_bm += FCElectricPlant_P.TransferFcn_C_f *
    localX->TransferFcn_CSTATE_d;

  /* SimscapeInputBlock: '<S302>/INPUT_10_1_1' */
  localB->INPUT_10_1_1[0] = localB->TransferFcn_bm + 273.15;
  localB->INPUT_10_1_1[1] = 0.0;
  localB->INPUT_10_1_1[2] = 0.0;
  localB->INPUT_10_1_1[3] = 0.0;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Sum: '<S128>/Sum' incorporates:
     *  Constant: '<S128>/Constant1'
     *  Constant: '<S128>/Stack Pressure'
     */
    localB->Sum_p = FCElectricPlant_P.StackPressure_Value_h +
      FCElectricPlant_P.env_p;
  }

  /* SimscapeInputBlock: '<S302>/INPUT_11_1_1' */
  localB->INPUT_11_1_1[0] = localB->Sum_p;
  localB->INPUT_11_1_1[1] = 0.0;
  localB->INPUT_11_1_1[2] = 0.0;
  if (rtmIsMajorTimeStep(FCElectricPlant_M)) {
    localDW->INPUT_11_1_1_Discrete[0] = !(localB->INPUT_11_1_1[0] ==
      localDW->INPUT_11_1_1_Discrete[1]);
    localDW->INPUT_11_1_1_Discrete[1] = localB->INPUT_11_1_1[0];
  }

  localB->INPUT_11_1_1[0] = localDW->INPUT_11_1_1_Discrete[1];
  localB->INPUT_11_1_1[3] = localDW->INPUT_11_1_1_Discrete[0];

  /* End of SimscapeInputBlock: '<S302>/INPUT_11_1_1' */

  /* TransferFcn: '<S118>/Transfer Fcn1' */
  *rty_FCCurr = 0.0;
  *rty_FCCurr += FCElectricPlant_P.TransferFcn1_C * localX->TransferFcn1_CSTATE;

  /* Sum: '<S60>/Add1' */
  rtb_Integrator_l = *rtu_FCCurrCmd - *rty_FCCurr;

  /* Gain: '<S103>/Proportional Gain' */
  rtb_ProportionalGain = FCElectricPlant_P.PIDController_P * rtb_Integrator_l;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<S65>/Constant' */
    localB->Constant = FCElectricPlant_P.CompareToConstant_const;
  }

  /* RelationalOperator: '<S65>/Compare' */
  localB->Compare = (*rtu_FCCurrCmd <= localB->Constant);

  /* TransferFcn: '<S60>/Transfer Fcn' */
  localB->TransferFcn_g = 0.0;
  localB->TransferFcn_g += FCElectricPlant_P.TransferFcn_C_ka *
    localX->TransferFcn_CSTATE_f;

  /* Integrator: '<S98>/Integrator' */
  if (ssIsModeUpdateTimeStep(FCElectricPlant_M->rtS)) {
    first_output = ((!localB->Compare) && (localZCE->Integrator_Reset_ZCE !=
      ZERO_ZCSIG));
    localZCE->Integrator_Reset_ZCE = localB->Compare;
    if (first_output || (localDW->Integrator_IWORK != 0)) {
      first_output = (localX->Integrator_CSTATE != localB->TransferFcn_g);
      localX->Integrator_CSTATE = localB->TransferFcn_g;
      if (first_output) {
        ssSetBlockStateForSolverChangedAtMajorStep(FCElectricPlant_M->rtS);
      }
    }

    rtb_Integrator = localX->Integrator_CSTATE;
  } else {
    rtb_Integrator = localX->Integrator_CSTATE;
  }

  /* End of Integrator: '<S98>/Integrator' */

  /* Gain: '<S92>/Derivative Gain' */
  rtb_DerivativeGain = FCElectricPlant_P.PIDController_D * rtb_Integrator_l;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<S60>/Constant' */
    localB->Constant_c = FCElectricPlant_P.Constant_Value;
  }

  /* Integrator: '<S93>/Filter' */
  if (ssIsModeUpdateTimeStep(FCElectricPlant_M->rtS)) {
    first_output = ((!localB->Compare) && (localZCE->Filter_Reset_ZCE !=
      ZERO_ZCSIG));
    localZCE->Filter_Reset_ZCE = localB->Compare;
    if (first_output || (localDW->Filter_IWORK != 0)) {
      first_output = (localX->Filter_CSTATE != localB->Constant_c);
      localX->Filter_CSTATE = localB->Constant_c;
      if (first_output) {
        ssSetBlockStateForSolverChangedAtMajorStep(FCElectricPlant_M->rtS);
      }
    }

    rtb_Gain = localX->Filter_CSTATE;
  } else {
    rtb_Gain = localX->Filter_CSTATE;
  }

  /* End of Integrator: '<S93>/Filter' */

  /* Gain: '<S101>/Filter Coefficient' incorporates:
   *  Sum: '<S93>/SumD'
   */
  localB->FilterCoefficient = (rtb_DerivativeGain - rtb_Gain) *
    FCElectricPlant_P.PIDController_N;

  /* Sum: '<S107>/Sum' */
  localB->Sum_d = (rtb_ProportionalGain + rtb_Integrator) +
    localB->FilterCoefficient;

  /* Saturate: '<S105>/Saturation' */
  if (ssIsModeUpdateTimeStep(FCElectricPlant_M->rtS)) {
    localDW->Saturation_MODE = localB->Sum_d >=
      FCElectricPlant_P.PIDController_UpperSaturationLi ? 1 : localB->Sum_d >
      FCElectricPlant_P.PIDController_LowerSaturationLi ? 0 : -1;
  }

  /* Saturate: '<S105>/Saturation' */
  localB->Saturation = localDW->Saturation_MODE == 1 ?
    FCElectricPlant_P.PIDController_UpperSaturationLi : localDW->Saturation_MODE
    == -1 ? FCElectricPlant_P.PIDController_LowerSaturationLi : localB->Sum_d;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<S60>/Constant3' */
    localB->Constant3 = FCElectricPlant_P.Constant3_Value;
  }

  /* Sum: '<S60>/Add' */
  rtb_Gain = localB->Saturation + localB->Constant3;

  /* Saturate: '<S60>/Saturation' */
  if (rtb_Gain > FCElectricPlant_P.Saturation_UpperSat_f) {
    /* Saturate: '<S60>/Saturation' */
    localB->Saturation_h = FCElectricPlant_P.Saturation_UpperSat_f;
  } else if (rtb_Gain < FCElectricPlant_P.Saturation_LowerSat_c) {
    /* Saturate: '<S60>/Saturation' */
    localB->Saturation_h = FCElectricPlant_P.Saturation_LowerSat_c;
  } else {
    /* Saturate: '<S60>/Saturation' */
    localB->Saturation_h = rtb_Gain;
  }

  /* End of Saturate: '<S60>/Saturation' */

  /* SimscapeInputBlock: '<S302>/INPUT_12_1_1' */
  localB->INPUT_12_1_1[0] = localB->Saturation_h;
  localB->INPUT_12_1_1[1] = 0.0;
  localB->INPUT_12_1_1[2] = 0.0;
  localB->INPUT_12_1_1[3] = 0.0;

  /* SimscapeInputBlock: '<S302>/INPUT_14_1_1' */
  localB->INPUT_14_1_1[0] = *rtu_MotTrqCmd;
  localB->INPUT_14_1_1[1] = 0.0;
  localB->INPUT_14_1_1[2] = 0.0;
  localB->INPUT_14_1_1[3] = 0.0;

  /* TransferFcn: '<S287>/Transfer Fcn2' */
  localB->TransferFcn2 = 0.0;
  localB->TransferFcn2 += FCElectricPlant_P.TransferFcn2_C *
    localX->TransferFcn2_CSTATE;

  /* SimscapeInputBlock: '<S302>/INPUT_13_1_1' */
  if (localDW->INPUT_13_1_1_FirstOutput == 0.0) {
    localDW->INPUT_13_1_1_FirstOutput = 1.0;
    localX->FCElectricPlantMotorSimulink_In = localB->TransferFcn2;
  }

  localB->INPUT_13_1_1[0] = localX->FCElectricPlantMotorSimulink_In;
  localB->INPUT_13_1_1[1] = (localB->TransferFcn2 -
    localX->FCElectricPlantMotorSimulink_In) * 1000.0;
  localB->INPUT_13_1_1[2] = 0.0;
  localB->INPUT_13_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S302>/INPUT_13_1_1' */
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* SimscapeRtp: '<S10>/RTP_1' incorporates:
     *  Constant: '<S119>/Subsystem_around_RTP_5A418EBA_vc'
     *  Constant: '<S126>/Subsystem_around_RTP_A30BC5AC_T_I'
     *  Constant: '<S2>/Subsystem_around_RTP_0ABF9833_stateOfCharge'
     *  Constant: '<S6>/Subsystem_around_RTP_E1FEEF9A_iL'
     *  Constant: '<S6>/Subsystem_around_RTP_E1FEEF9A_vc'
     */
    if (localDW->RTP_1_SetParametersNeeded) {
      NeuDiagnosticTree *diagTree;
      tmp[0] = FCElectricPlant_P.RTP_5A418EBA_vc_Value;
      tmp[1] = FCElectricPlant_P.env_T;
      tmp[2] = FCElectricPlant_P.RTP_A30BC5AC_x_g_I_Value;
      tmp[3] = FCElectricPlant_P.tank_yH2;
      tmp[4] = FCElectricPlant_P.env_T;
      tmp[5] = FCElectricPlant_P.RTP_D40CF53A_x_g_I_Value;
      tmp[6] = FCElectricPlant_P.tank_yH2;
      tmp[7] = FCElectricPlant_P.env_T;
      tmp[8] = FCElectricPlant_P.RTP_36577BF7_x_g_I_Value;
      tmp[9] = FCElectricPlant_P.env_yO2;
      tmp[10] = FCElectricPlant_P.env_T;
      tmp[11] = FCElectricPlant_P.RTP_A6E86666_x_g_I_Value;
      tmp[12] = FCElectricPlant_P.env_yO2;
      tmp[13] = FCElectricPlant_P.env_T;
      tmp[14] = FCElectricPlant_P.env_T;
      tmp[15] = FCElectricPlant_P.env_p;
      tmp[16] = FCElectricPlant_P.RTP_AB7FE3B0_x_g_I_Value;
      tmp[17] = FCElectricPlant_P.tank_yH2;
      tmp[18] = FCElectricPlant_P.env_p;
      tmp[19] = FCElectricPlant_P.env_p;
      tmp[20] = FCElectricPlant_P.env_T;
      tmp[21] = FCElectricPlant_P.env_T;
      tmp[22] = FCElectricPlant_P.env_p;
      tmp[23] = FCElectricPlant_P.RTP_8D120582_x_g_I_Value;
      tmp[24] = FCElectricPlant_P.tank_yH2;
      tmp[25] = FCElectricPlant_P.env_T;
      tmp[26] = FCElectricPlant_P.tank_p;
      tmp[27] = FCElectricPlant_P.RTP_BE319BAA_x_g_I_Value;
      tmp[28] = FCElectricPlant_P.tank_yH2;
      tmp[29] = FCElectricPlant_P.env_T;
      tmp[30] = FCElectricPlant_P.env_p;
      tmp[31] = FCElectricPlant_P.RTP_C2A2358B_x_g_I_Value;
      tmp[32] = FCElectricPlant_P.tank_yH2;
      tmp[33] = FCElectricPlant_P.env_p;
      tmp[34] = FCElectricPlant_P.env_RH;
      tmp[35] = FCElectricPlant_P.env_T;
      tmp[36] = FCElectricPlant_P.RTP_B9383376_x_g_I_Value;
      tmp[37] = FCElectricPlant_P.env_yO2;
      tmp[38] = FCElectricPlant_P.env_T;
      tmp[39] = FCElectricPlant_P.RTP_7FE9A967_x_g_I_Value;
      tmp[40] = FCElectricPlant_P.tank_yH2;
      tmp[41] = FCElectricPlant_P.env_p;
      tmp[42] = FCElectricPlant_P.env_p;
      tmp[43] = FCElectricPlant_P.env_p;
      tmp[44] = FCElectricPlant_P.env_RH;
      tmp[45] = FCElectricPlant_P.env_T;
      tmp[46] = FCElectricPlant_P.RTP_D8F5AF94_x_g_I_Value;
      tmp[47] = FCElectricPlant_P.env_yO2;
      tmp[48] = FCElectricPlant_P.env_p;
      tmp[49] = FCElectricPlant_P.env_T;
      tmp[50] = FCElectricPlant_P.env_p;
      tmp[51] = FCElectricPlant_P.RTP_DB717BFA_x_g_I_Value;
      tmp[52] = FCElectricPlant_P.env_yO2;
      tmp[53] = FCElectricPlant_P.env_RH;
      tmp[54] = FCElectricPlant_P.RTP_0ABF9833_stateOfCharge_Valu;
      tmp[55] = FCElectricPlant_P.env_RH;
      tmp[56] = FCElectricPlant_P.env_RH;
      tmp[57] = FCElectricPlant_P.RTP_E1FEEF9A_iL_Value;
      tmp[58] = FCElectricPlant_P.FCDCDC.Vout;
      parameterBundle_mRealParameters = &tmp[0];
      diag = rtw_create_diagnostics();
      diagTree = neu_diagnostic_manager_get_initial_tree(diag);
      expl_temp.mRealParameters.mN = 59;
      expl_temp.mRealParameters.mX = parameterBundle_mRealParameters;
      expl_temp.mLogicalParameters.mN = 0;
      expl_temp.mLogicalParameters.mX = NULL;
      expl_temp.mIntegerParameters.mN = 0;
      expl_temp.mIntegerParameters.mX = NULL;
      expl_temp.mIndexParameters.mN = 0;
      expl_temp.mIndexParameters.mX = NULL;
      first_output = nesl_rtp_manager_set_rtps((NeslRtpManager *)
        localDW->RTP_1_RtpManager, rtmGetTaskTime(FCElectricPlant_M, 0),
        expl_temp, diag);
      if (!first_output) {
        first_output = error_buffer_is_empty(ssGetErrorStatus
          (FCElectricPlant_M->rtS));
        if (first_output) {
          char *msg;
          msg = rtw_diagnostics_msg(diagTree);
          ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
        }
      }
    }

    localDW->RTP_1_SetParametersNeeded = false;

    /* End of SimscapeRtp: '<S10>/RTP_1' */
  }

  /* SimscapeExecutionBlock: '<S302>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S302>/OUTPUT_1_0'
   */
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  rtb_Gain = rtmGetTaskTime(FCElectricPlant_M, 0);
  time = rtb_Gain;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  first_output = (rtmIsMajorTimeStep(FCElectricPlant_M) &&
                  ssGetSolverFoundContZcEvents(FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = first_output;
  first_output = rtmIsMajorTimeStep(FCElectricPlant_M);
  simulationData->mData->mIsMajorTimeStep = first_output;
  tmp_0 = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  tmp_0 = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp_0;
  tmp_0 = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp_0 = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp_0;
  tmp_0 = ssIsModeUpdateTimeStep(FCElectricPlant_M->rtS);
  simulationData->mData->mIsModeUpdateTimeStep = tmp_0;
  tmp_2[0] = 0;
  tmp_1[0] = localB->INPUT_1_1_1[0];
  tmp_1[1] = localB->INPUT_1_1_1[1];
  tmp_1[2] = localB->INPUT_1_1_1[2];
  tmp_1[3] = localB->INPUT_1_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = localB->INPUT_2_1_1[0];
  tmp_1[5] = localB->INPUT_2_1_1[1];
  tmp_1[6] = localB->INPUT_2_1_1[2];
  tmp_1[7] = localB->INPUT_2_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = localB->INPUT_4_1_1[0];
  tmp_1[9] = localB->INPUT_4_1_1[1];
  tmp_1[10] = localB->INPUT_4_1_1[2];
  tmp_1[11] = localB->INPUT_4_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = localB->INPUT_3_1_1[0];
  tmp_1[13] = localB->INPUT_3_1_1[1];
  tmp_1[14] = localB->INPUT_3_1_1[2];
  tmp_1[15] = localB->INPUT_3_1_1[3];
  tmp_2[4] = 16;
  tmp_1[16] = localB->INPUT_5_1_1[0];
  tmp_1[17] = localB->INPUT_5_1_1[1];
  tmp_1[18] = localB->INPUT_5_1_1[2];
  tmp_1[19] = localB->INPUT_5_1_1[3];
  tmp_2[5] = 20;
  tmp_1[20] = localB->INPUT_6_1_1[0];
  tmp_1[21] = localB->INPUT_6_1_1[1];
  tmp_1[22] = localB->INPUT_6_1_1[2];
  tmp_1[23] = localB->INPUT_6_1_1[3];
  tmp_2[6] = 24;
  tmp_1[24] = localB->INPUT_7_1_1[0];
  tmp_1[25] = localB->INPUT_7_1_1[1];
  tmp_1[26] = localB->INPUT_7_1_1[2];
  tmp_1[27] = localB->INPUT_7_1_1[3];
  tmp_2[7] = 28;
  tmp_1[28] = localB->INPUT_8_1_1[0];
  tmp_1[29] = localB->INPUT_8_1_1[1];
  tmp_1[30] = localB->INPUT_8_1_1[2];
  tmp_1[31] = localB->INPUT_8_1_1[3];
  tmp_2[8] = 32;
  tmp_1[32] = localB->INPUT_9_1_1[0];
  tmp_1[33] = localB->INPUT_9_1_1[1];
  tmp_1[34] = localB->INPUT_9_1_1[2];
  tmp_1[35] = localB->INPUT_9_1_1[3];
  tmp_2[9] = 36;
  tmp_1[36] = localB->INPUT_10_1_1[0];
  tmp_1[37] = localB->INPUT_10_1_1[1];
  tmp_1[38] = localB->INPUT_10_1_1[2];
  tmp_1[39] = localB->INPUT_10_1_1[3];
  tmp_2[10] = 40;
  tmp_1[40] = localB->INPUT_11_1_1[0];
  tmp_1[41] = localB->INPUT_11_1_1[1];
  tmp_1[42] = localB->INPUT_11_1_1[2];
  tmp_1[43] = localB->INPUT_11_1_1[3];
  tmp_2[11] = 44;
  tmp_1[44] = localB->INPUT_12_1_1[0];
  tmp_1[45] = localB->INPUT_12_1_1[1];
  tmp_1[46] = localB->INPUT_12_1_1[2];
  tmp_1[47] = localB->INPUT_12_1_1[3];
  tmp_2[12] = 48;
  tmp_1[48] = localB->INPUT_14_1_1[0];
  tmp_1[49] = localB->INPUT_14_1_1[1];
  tmp_1[50] = localB->INPUT_14_1_1[2];
  tmp_1[51] = localB->INPUT_14_1_1[3];
  tmp_2[13] = 52;
  tmp_1[52] = localB->INPUT_13_1_1[0];
  tmp_1[53] = localB->INPUT_13_1_1[1];
  tmp_1[54] = localB->INPUT_13_1_1[2];
  tmp_1[55] = localB->INPUT_13_1_1[3];
  tmp_2[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mOutputs.mN = 739;
  simulationData->mData->mOutputs.mX = &localB->STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  rtb_Integrator = rtmGetTaskTime(FCElectricPlant_M, 0);
  time_0 = rtb_Integrator;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  diag = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diag);
  iy = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diag);
  if (iy != 0) {
    tmp_3 = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp_3) {
      char *msg_0;
      msg_0 = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg_0);
    }
  }

  if (first_output && simulationData->mData->mCstateHasChanged) {
    ssSetBlockStateForSolverChangedAtMajorStep(FCElectricPlant_M->rtS);
  }

  /* End of SimscapeExecutionBlock: '<S302>/STATE_1' */

  /* SimscapeExecutionBlock: '<S302>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)localDW->OUTPUT_1_0_SimData;
  time_1 = rtb_Gain;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->OUTPUT_1_0_Modes;
  tmp_3 = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
           (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp_3;
  simulationData->mData->mIsMajorTimeStep = first_output;
  tmp_3 = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp_3;
  tmp_3 = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp_3;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  tmp_3 = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp_3;
  simulationData->mData->mIsModeUpdateTimeStep = tmp_0;
  tmp_4[0] = 0;
  localB->dv[0] = localB->INPUT_1_1_1[0];
  localB->dv[1] = localB->INPUT_1_1_1[1];
  localB->dv[2] = localB->INPUT_1_1_1[2];
  localB->dv[3] = localB->INPUT_1_1_1[3];
  tmp_4[1] = 4;
  localB->dv[4] = localB->INPUT_2_1_1[0];
  localB->dv[5] = localB->INPUT_2_1_1[1];
  localB->dv[6] = localB->INPUT_2_1_1[2];
  localB->dv[7] = localB->INPUT_2_1_1[3];
  tmp_4[2] = 8;
  localB->dv[8] = localB->INPUT_4_1_1[0];
  localB->dv[9] = localB->INPUT_4_1_1[1];
  localB->dv[10] = localB->INPUT_4_1_1[2];
  localB->dv[11] = localB->INPUT_4_1_1[3];
  tmp_4[3] = 12;
  localB->dv[12] = localB->INPUT_3_1_1[0];
  localB->dv[13] = localB->INPUT_3_1_1[1];
  localB->dv[14] = localB->INPUT_3_1_1[2];
  localB->dv[15] = localB->INPUT_3_1_1[3];
  tmp_4[4] = 16;
  localB->dv[16] = localB->INPUT_5_1_1[0];
  localB->dv[17] = localB->INPUT_5_1_1[1];
  localB->dv[18] = localB->INPUT_5_1_1[2];
  localB->dv[19] = localB->INPUT_5_1_1[3];
  tmp_4[5] = 20;
  localB->dv[20] = localB->INPUT_6_1_1[0];
  localB->dv[21] = localB->INPUT_6_1_1[1];
  localB->dv[22] = localB->INPUT_6_1_1[2];
  localB->dv[23] = localB->INPUT_6_1_1[3];
  tmp_4[6] = 24;
  localB->dv[24] = localB->INPUT_7_1_1[0];
  localB->dv[25] = localB->INPUT_7_1_1[1];
  localB->dv[26] = localB->INPUT_7_1_1[2];
  localB->dv[27] = localB->INPUT_7_1_1[3];
  tmp_4[7] = 28;
  localB->dv[28] = localB->INPUT_8_1_1[0];
  localB->dv[29] = localB->INPUT_8_1_1[1];
  localB->dv[30] = localB->INPUT_8_1_1[2];
  localB->dv[31] = localB->INPUT_8_1_1[3];
  tmp_4[8] = 32;
  localB->dv[32] = localB->INPUT_9_1_1[0];
  localB->dv[33] = localB->INPUT_9_1_1[1];
  localB->dv[34] = localB->INPUT_9_1_1[2];
  localB->dv[35] = localB->INPUT_9_1_1[3];
  tmp_4[9] = 36;
  localB->dv[36] = localB->INPUT_10_1_1[0];
  localB->dv[37] = localB->INPUT_10_1_1[1];
  localB->dv[38] = localB->INPUT_10_1_1[2];
  localB->dv[39] = localB->INPUT_10_1_1[3];
  tmp_4[10] = 40;
  localB->dv[40] = localB->INPUT_11_1_1[0];
  localB->dv[41] = localB->INPUT_11_1_1[1];
  localB->dv[42] = localB->INPUT_11_1_1[2];
  localB->dv[43] = localB->INPUT_11_1_1[3];
  tmp_4[11] = 44;
  localB->dv[44] = localB->INPUT_12_1_1[0];
  localB->dv[45] = localB->INPUT_12_1_1[1];
  localB->dv[46] = localB->INPUT_12_1_1[2];
  localB->dv[47] = localB->INPUT_12_1_1[3];
  tmp_4[12] = 48;
  localB->dv[48] = localB->INPUT_14_1_1[0];
  localB->dv[49] = localB->INPUT_14_1_1[1];
  localB->dv[50] = localB->INPUT_14_1_1[2];
  localB->dv[51] = localB->INPUT_14_1_1[3];
  tmp_4[13] = 52;
  localB->dv[52] = localB->INPUT_13_1_1[0];
  localB->dv[53] = localB->INPUT_13_1_1[1];
  localB->dv[54] = localB->INPUT_13_1_1[2];
  localB->dv[55] = localB->INPUT_13_1_1[3];
  tmp_4[14] = 56;
  memcpy(&localB->dv[56], &localB->STATE_1[0], 739U * sizeof(real_T));
  tmp_4[15] = 795;
  simulationData->mData->mInputValues.mN = 795;
  simulationData->mData->mInputValues.mX = &localB->dv[0];
  simulationData->mData->mInputOffsets.mN = 16;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  simulationData->mData->mOutputs.mN = 20;
  simulationData->mData->mOutputs.mX = &localB->OUTPUT_1_0[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  time_2 = rtb_Integrator;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  diag = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diag);
  iy = ne_simulator_method((NeslSimulator *)localDW->OUTPUT_1_0_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diag);
  if (iy != 0) {
    tmp_0 = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp_0) {
      char *msg_1;
      msg_1 = rtw_diagnostics_msg(diagnosticTree_0);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg_1);
    }
  }

  if (first_output && simulationData->mData->mCstateHasChanged) {
    ssSetBlockStateForSolverChangedAtMajorStep(FCElectricPlant_M->rtS);
  }

  /* Gain: '<S2>/Gain1' */
  *rty_BattSoc = FCElectricPlant_P.Gain1_Gain * localB->OUTPUT_1_0[0];

  /* TransferFcn: '<S287>/Motor Coupling Dynamics1' */
  *rty_MotTrq = 0.0;
  *rty_MotTrq += FCElectricPlant_P.MotorCouplingDynamics1_C *
    localX->MotorCouplingDynamics1_CSTATE;

  /* Product: '<Root>/Product2' */
  *rty_TotPwr = *rtu_MotSpd * *rty_MotTrq;

  /* TransferFcn: '<S118>/Transfer Fcn2' */
  *rty_FCVolt = 0.0;
  *rty_FCVolt += FCElectricPlant_P.TransferFcn2_C_b *
    localX->TransferFcn2_CSTATE_j;

  /* Product: '<Root>/Product' */
  rtb_Gain = *rty_FCVolt * *rty_FCCurr;

  /* Product: '<Root>/Product3' */
  rtb_Gain = localB->OUTPUT_1_0[3] * localB->OUTPUT_1_0[4];
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<Root>/Constant1' */
    localB->Constant1 = FCElectricPlant_P.Constant1_Value;
  }

  /* Gain: '<S95>/Integral Gain' */
  localB->IntegralGain = FCElectricPlant_P.PIDController_I * rtb_Integrator_l;

  /* Abs: '<S139>/Abs' */
  rtb_Gain = fabs(localB->OUTPUT_1_0[9]);

  /* Abs: '<S203>/Abs' */
  rtb_Integrator_l = fabs(localB->OUTPUT_1_0[13]);

  /* Sum: '<S118>/Add' */
  localB->Add = rtb_Gain + rtb_Integrator_l;

  /* TransferFcn: '<S118>/Transfer Fcn4' */
  *rty_H2Flow = 0.0;
  *rty_H2Flow += FCElectricPlant_P.TransferFcn4_C * localX->TransferFcn4_CSTATE;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<S123>/Oxygen Excess Ratio' */
    localB->OxygenExcessRatio = FCElectricPlant_P.OxygenExcessRatio_Value;

    /* Constant: '<S205>/Constant' */
    localB->Constant_k = 0.1 * FCElectricPlant_P.stack_iL *
      FCElectricPlant_P.stack_area;
  }

  /* MinMax: '<S205>/Max' */
  rtb_Integrator_l = fmax(*rtu_FCCurrCmd, localB->Constant_k);

  /* Gain: '<S205>/M_set' incorporates:
   *  MinMax: '<S205>/Max'
   *  Product: '<S205>/Product'
   */
  rtb_Gain = FCElectricPlant_P.stack_num_cells * 0.032 / 385940.0 / 0.234 *
    (localB->OxygenExcessRatio * rtb_Integrator_l);

  /* Sum: '<S205>/Sum' */
  rtb_Integrator_l = rtb_Gain - localB->OUTPUT_1_0[12];

  /* Gain: '<S241>/Proportional Gain' incorporates:
   *  Integrator: '<S243>/Integrator'
   *  Sum: '<S252>/Sum'
   */
  localB->ProportionalGain = (rtb_Integrator_l + localX->Integrator_CSTATE_j) *
    FCElectricPlant_P.PIDController_P_e;

  /* Saturate: '<S250>/Saturation' */
  if (ssIsModeUpdateTimeStep(FCElectricPlant_M->rtS)) {
    localDW->Saturation_MODE_n = localB->ProportionalGain >=
      FCElectricPlant_P.PIDController_UpperSaturation_e ? 1 :
      localB->ProportionalGain >
      FCElectricPlant_P.PIDController_LowerSaturation_n ? 0 : -1;
  }

  /* Saturate: '<S250>/Saturation' */
  localB->Saturation_n = localDW->Saturation_MODE_n == 1 ?
    FCElectricPlant_P.PIDController_UpperSaturation_e :
    localDW->Saturation_MODE_n == -1 ?
    FCElectricPlant_P.PIDController_LowerSaturation_n : localB->ProportionalGain;

  /* Sum: '<S236>/SumI4' incorporates:
   *  Gain: '<S236>/Kb'
   *  Gain: '<S240>/Integral Gain'
   *  Sum: '<S236>/SumI2'
   */
  localB->SumI4 = (localB->Saturation_n - localB->ProportionalGain) *
    FCElectricPlant_P.PIDController_Kb + FCElectricPlant_P.PIDController_I_k *
    rtb_Integrator_l;

  /* Sum: '<S138>/Sum' */
  rtb_Gain = localB->OUTPUT_1_0[10] - localB->Constant1;

  /* Gain: '<S172>/Proportional Gain' incorporates:
   *  Integrator: '<S174>/Integrator'
   *  Sum: '<S183>/Sum'
   */
  localB->ProportionalGain_a = (rtb_Gain + localX->Integrator_CSTATE_o) *
    FCElectricPlant_P.PIDController_P_p;

  /* Saturate: '<S181>/Saturation' */
  if (ssIsModeUpdateTimeStep(FCElectricPlant_M->rtS)) {
    localDW->Saturation_MODE_l = localB->ProportionalGain_a >=
      FCElectricPlant_P.PIDController_UpperSaturation_h ? 1 :
      localB->ProportionalGain_a >
      FCElectricPlant_P.PIDController_LowerSaturation_i ? 0 : -1;
  }

  /* Saturate: '<S181>/Saturation' */
  localB->Saturation_m = localDW->Saturation_MODE_l == 1 ?
    FCElectricPlant_P.PIDController_UpperSaturation_h :
    localDW->Saturation_MODE_l == -1 ?
    FCElectricPlant_P.PIDController_LowerSaturation_i :
    localB->ProportionalGain_a;

  /* Sum: '<S167>/SumI4' incorporates:
   *  Gain: '<S167>/Kb'
   *  Gain: '<S171>/Integral Gain'
   *  Sum: '<S167>/SumI2'
   */
  localB->SumI4_b = (localB->Saturation_m - localB->ProportionalGain_a) *
    FCElectricPlant_P.PIDController_Kb_i + FCElectricPlant_P.PIDController_I_g *
    rtb_Gain;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<S194>/Constant' */
    localB->Constant_g = FCElectricPlant_P.Constant_Value_k;
  }

  /* Gain: '<S194>/Gain' */
  rtb_Gain = 0.8 / (FCElectricPlant_P.stack_iL * FCElectricPlant_P.stack_area) *
    localB->OUTPUT_1_0[7];

  /* Sum: '<S194>/Sum' */
  localB->Sum_b = rtb_Gain + localB->Constant_g;

  /* Saturate: '<S194>/Saturation' */
  if (ssIsModeUpdateTimeStep(FCElectricPlant_M->rtS)) {
    localDW->Saturation_MODE_h = localB->Sum_b >=
      FCElectricPlant_P.Saturation_UpperSat_i ? 1 : localB->Sum_b >
      FCElectricPlant_P.Saturation_LowerSat_h ? 0 : -1;
  }

  /* Saturate: '<S194>/Saturation' */
  localB->Saturation_n5 = localDW->Saturation_MODE_h == 1 ?
    FCElectricPlant_P.Saturation_UpperSat_i : localDW->Saturation_MODE_h == -1 ?
    FCElectricPlant_P.Saturation_LowerSat_h : localB->Sum_b;
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<S124>/Relative Humidity' */
    localB->RelativeHumidity = FCElectricPlant_P.RelativeHumidity_Value;
  }

  /* Sum: '<S261>/Sum' */
  rtb_Gain = localB->RelativeHumidity - localB->OUTPUT_1_0[14];

  /* Gain: '<S261>/Gain' */
  rtb_Integrator_l = FCElectricPlant_P.Gain_Gain * rtb_Gain;

  /* Saturate: '<S261>/Saturation' */
  if (rtb_Integrator_l > FCElectricPlant_P.Saturation_UpperSat_h) {
    /* Saturate: '<S261>/Saturation' */
    localB->Saturation_e = FCElectricPlant_P.Saturation_UpperSat_h;
  } else if (rtb_Integrator_l < FCElectricPlant_P.Saturation_LowerSat_l) {
    /* Saturate: '<S261>/Saturation' */
    localB->Saturation_e = FCElectricPlant_P.Saturation_LowerSat_l;
  } else {
    /* Saturate: '<S261>/Saturation' */
    localB->Saturation_e = rtb_Integrator_l;
  }

  /* End of Saturate: '<S261>/Saturation' */
  if (rtmIsMajorTimeStep(FCElectricPlant_M) && rtmIsSampleHit(FCElectricPlant_M,
       1, 0)) {
    /* Constant: '<S125>/Constant' */
    localB->Constant_h = FCElectricPlant_P.Constant_Value_km;

    /* Constant: '<S127>/Relative Humidity' */
    localB->RelativeHumidity_i = FCElectricPlant_P.RelativeHumidity_Value_f;
  }

  /* Sum: '<S270>/Sum' */
  rtb_Gain = localB->RelativeHumidity_i - localB->OUTPUT_1_0[15];

  /* Gain: '<S270>/Gain' */
  rtb_Integrator_l = FCElectricPlant_P.Gain_Gain_d * rtb_Gain;

  /* Saturate: '<S270>/Saturation' */
  if (rtb_Integrator_l > FCElectricPlant_P.Saturation_UpperSat_j) {
    /* Saturate: '<S270>/Saturation' */
    localB->Saturation_h5 = FCElectricPlant_P.Saturation_UpperSat_j;
  } else if (rtb_Integrator_l < FCElectricPlant_P.Saturation_LowerSat_i) {
    /* Saturate: '<S270>/Saturation' */
    localB->Saturation_h5 = FCElectricPlant_P.Saturation_LowerSat_i;
  } else {
    /* Saturate: '<S270>/Saturation' */
    localB->Saturation_h5 = rtb_Integrator_l;
  }

  /* End of Saturate: '<S270>/Saturation' */

  /* Product: '<Root>/Product1' */
  *rty_BattPwr = rtb_BattV * localB->OUTPUT_1_0[1];

  /* SignalConversion generated from: '<Root>/BattCurr' */
  *rty_BattCurr = localB->OUTPUT_1_0[1];

  /* SignalConversion generated from: '<Root>/T' */
  *rty_T = localB->OUTPUT_1_0[10];
}

/* Update for referenced model: 'FCElectricPlant' */
void FCElectricPlant_Update(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M,
  B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T *localDW,
  X_FCElectricPlant_n_T *localX)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  real_T tmp_0[56];
  real_T time;
  int32_T tmp_2;
  int_T tmp_1[15];
  boolean_T tmp;
  if (rtmIsMajorTimeStep(FCElectricPlant_M)) {
    if (memcmp(FCElectricPlant_M->nonContDerivSignal[0].pCurrVal,
               FCElectricPlant_M->nonContDerivSignal[0].pPrevVal,
               FCElectricPlant_M->nonContDerivSignal[0].sizeInBytes) != 0) {
      (void) memcpy(FCElectricPlant_M->nonContDerivSignal[0].pPrevVal,
                    FCElectricPlant_M->nonContDerivSignal[0].pCurrVal,
                    FCElectricPlant_M->nonContDerivSignal[0].sizeInBytes);
      ssSetSolverNeedsReset(FCElectricPlant_M->rtS);
    }

    if (memcmp(FCElectricPlant_M->nonContDerivSignal[1].pCurrVal,
               FCElectricPlant_M->nonContDerivSignal[1].pPrevVal,
               FCElectricPlant_M->nonContDerivSignal[1].sizeInBytes) != 0) {
      (void) memcpy(FCElectricPlant_M->nonContDerivSignal[1].pPrevVal,
                    FCElectricPlant_M->nonContDerivSignal[1].pCurrVal,
                    FCElectricPlant_M->nonContDerivSignal[1].sizeInBytes);
      ssSetSolverNeedsReset(FCElectricPlant_M->rtS);
    }

    if (memcmp(FCElectricPlant_M->nonContDerivSignal[2].pCurrVal,
               FCElectricPlant_M->nonContDerivSignal[2].pPrevVal,
               FCElectricPlant_M->nonContDerivSignal[2].sizeInBytes) != 0) {
      (void) memcpy(FCElectricPlant_M->nonContDerivSignal[2].pPrevVal,
                    FCElectricPlant_M->nonContDerivSignal[2].pCurrVal,
                    FCElectricPlant_M->nonContDerivSignal[2].sizeInBytes);
      ssSetSolverNeedsReset(FCElectricPlant_M->rtS);
    }
  }

  /* Update for Integrator: '<S98>/Integrator' */
  localDW->Integrator_IWORK = 0;

  /* Update for Integrator: '<S93>/Filter' */
  localDW->Filter_IWORK = 0;

  /* Update for SimscapeExecutionBlock: '<S302>/STATE_1' */
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time = rtmGetTaskTime(FCElectricPlant_M, 0);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  tmp = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
         (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(FCElectricPlant_M);
  tmp = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp;
  tmp = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp;
  tmp = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp;
  simulationData->mData->mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep
    (FCElectricPlant_M->rtS);
  tmp_1[0] = 0;
  tmp_0[0] = localB->INPUT_1_1_1[0];
  tmp_0[1] = localB->INPUT_1_1_1[1];
  tmp_0[2] = localB->INPUT_1_1_1[2];
  tmp_0[3] = localB->INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_2_1_1[0];
  tmp_0[5] = localB->INPUT_2_1_1[1];
  tmp_0[6] = localB->INPUT_2_1_1[2];
  tmp_0[7] = localB->INPUT_2_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = localB->INPUT_4_1_1[0];
  tmp_0[9] = localB->INPUT_4_1_1[1];
  tmp_0[10] = localB->INPUT_4_1_1[2];
  tmp_0[11] = localB->INPUT_4_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = localB->INPUT_3_1_1[0];
  tmp_0[13] = localB->INPUT_3_1_1[1];
  tmp_0[14] = localB->INPUT_3_1_1[2];
  tmp_0[15] = localB->INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = localB->INPUT_5_1_1[0];
  tmp_0[17] = localB->INPUT_5_1_1[1];
  tmp_0[18] = localB->INPUT_5_1_1[2];
  tmp_0[19] = localB->INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = localB->INPUT_6_1_1[0];
  tmp_0[21] = localB->INPUT_6_1_1[1];
  tmp_0[22] = localB->INPUT_6_1_1[2];
  tmp_0[23] = localB->INPUT_6_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = localB->INPUT_7_1_1[0];
  tmp_0[25] = localB->INPUT_7_1_1[1];
  tmp_0[26] = localB->INPUT_7_1_1[2];
  tmp_0[27] = localB->INPUT_7_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = localB->INPUT_8_1_1[0];
  tmp_0[29] = localB->INPUT_8_1_1[1];
  tmp_0[30] = localB->INPUT_8_1_1[2];
  tmp_0[31] = localB->INPUT_8_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = localB->INPUT_9_1_1[0];
  tmp_0[33] = localB->INPUT_9_1_1[1];
  tmp_0[34] = localB->INPUT_9_1_1[2];
  tmp_0[35] = localB->INPUT_9_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = localB->INPUT_10_1_1[0];
  tmp_0[37] = localB->INPUT_10_1_1[1];
  tmp_0[38] = localB->INPUT_10_1_1[2];
  tmp_0[39] = localB->INPUT_10_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = localB->INPUT_11_1_1[0];
  tmp_0[41] = localB->INPUT_11_1_1[1];
  tmp_0[42] = localB->INPUT_11_1_1[2];
  tmp_0[43] = localB->INPUT_11_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = localB->INPUT_12_1_1[0];
  tmp_0[45] = localB->INPUT_12_1_1[1];
  tmp_0[46] = localB->INPUT_12_1_1[2];
  tmp_0[47] = localB->INPUT_12_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = localB->INPUT_14_1_1[0];
  tmp_0[49] = localB->INPUT_14_1_1[1];
  tmp_0[50] = localB->INPUT_14_1_1[2];
  tmp_0[51] = localB->INPUT_14_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = localB->INPUT_13_1_1[0];
  tmp_0[53] = localB->INPUT_13_1_1[1];
  tmp_0[54] = localB->INPUT_13_1_1[2];
  tmp_0[55] = localB->INPUT_13_1_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
    }
  }

  /* End of Update for SimscapeExecutionBlock: '<S302>/STATE_1' */
}

/* Derivatives for referenced model: 'FCElectricPlant' */
void FCElectricPlant_Deriv(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M,
  const real_T *rtu_MotSpd, B_FCElectricPlant_c_T *localB,
  DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T *localX,
  XDot_FCElectricPlant_n_T *localXdot)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  real_T tmp_0[56];
  real_T time;
  int_T tmp_1[15];
  int_T is;
  uint32_T ri;
  boolean_T tmp;

  /* Derivatives for TransferFcn: '<S118>/Transfer Fcn3' */
  localXdot->TransferFcn3_CSTATE = 0.0;
  localXdot->TransferFcn3_CSTATE += FCElectricPlant_P.TransferFcn3_A *
    localX->TransferFcn3_CSTATE;
  localXdot->TransferFcn3_CSTATE += localB->Add;

  /* Derivatives for TransferFcn: '<S17>/Transfer Fcn5' */
  localXdot->TransferFcn5_CSTATE = 0.0;
  localXdot->TransferFcn5_CSTATE += FCElectricPlant_P.TransferFcn5_A *
    localX->TransferFcn5_CSTATE;
  localXdot->TransferFcn5_CSTATE += localB->OUTPUT_1_0[2];

  /* Derivatives for SimscapeInputBlock: '<S302>/INPUT_1_1_1' */
  localXdot->FCElectricPlantBattery_SystemPo = (localB->Divide -
    localX->FCElectricPlantBattery_SystemPo) * 1000.0;

  /* Derivatives for TransferFcn: '<S125>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE = 0.0;
  localXdot->TransferFcn_CSTATE += FCElectricPlant_P.TransferFcn_A *
    localX->TransferFcn_CSTATE;
  localXdot->TransferFcn_CSTATE += localB->Constant_h;

  /* Derivatives for TransferFcn: '<S194>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_m = 0.0;
  localXdot->TransferFcn_CSTATE_m += FCElectricPlant_P.TransferFcn_A_c *
    localX->TransferFcn_CSTATE_m;
  localXdot->TransferFcn_CSTATE_m += localB->Saturation_n5;

  /* Derivatives for TransferFcn: '<S138>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_b = 0.0;
  localXdot->TransferFcn_CSTATE_b += FCElectricPlant_P.TransferFcn_A_e *
    localX->TransferFcn_CSTATE_b;
  localXdot->TransferFcn_CSTATE_b += localB->Saturation_m;

  /* Derivatives for TransferFcn: '<S205>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_be = 0.0;
  localXdot->TransferFcn_CSTATE_be += FCElectricPlant_P.TransferFcn_A_o *
    localX->TransferFcn_CSTATE_be;
  localXdot->TransferFcn_CSTATE_be += localB->Saturation_n;

  /* Derivatives for TransferFcn: '<S261>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_g = 0.0;
  localXdot->TransferFcn_CSTATE_g += FCElectricPlant_P.TransferFcn_A_od *
    localX->TransferFcn_CSTATE_g;
  localXdot->TransferFcn_CSTATE_g += localB->Saturation_e;

  /* Derivatives for TransferFcn: '<S124>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_e = 0.0;
  localXdot->TransferFcn_CSTATE_e += FCElectricPlant_P.TransferFcn_A_i *
    localX->TransferFcn_CSTATE_e;
  localXdot->TransferFcn_CSTATE_e += localB->OUTPUT_1_0[10];

  /* Derivatives for TransferFcn: '<S270>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_gw = 0.0;
  localXdot->TransferFcn_CSTATE_gw += FCElectricPlant_P.TransferFcn_A_i0 *
    localX->TransferFcn_CSTATE_gw;
  localXdot->TransferFcn_CSTATE_gw += localB->Saturation_h5;

  /* Derivatives for TransferFcn: '<S127>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_d = 0.0;
  localXdot->TransferFcn_CSTATE_d += FCElectricPlant_P.TransferFcn_A_p *
    localX->TransferFcn_CSTATE_d;
  localXdot->TransferFcn_CSTATE_d += localB->OUTPUT_1_0[10];

  /* Derivatives for TransferFcn: '<S118>/Transfer Fcn1' */
  localXdot->TransferFcn1_CSTATE = 0.0;
  localXdot->TransferFcn1_CSTATE += FCElectricPlant_P.TransferFcn1_A *
    localX->TransferFcn1_CSTATE;
  localXdot->TransferFcn1_CSTATE += localB->OUTPUT_1_0[7];

  /* Derivatives for TransferFcn: '<S60>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_f = 0.0;
  localXdot->TransferFcn_CSTATE_f += FCElectricPlant_P.TransferFcn_A_oz *
    localX->TransferFcn_CSTATE_f;
  localXdot->TransferFcn_CSTATE_f += localB->Saturation;

  /* Derivatives for Integrator: '<S98>/Integrator' */
  localXdot->Integrator_CSTATE = localB->IntegralGain;

  /* Derivatives for Integrator: '<S93>/Filter' */
  localXdot->Filter_CSTATE = localB->FilterCoefficient;

  /* Derivatives for TransferFcn: '<S287>/Transfer Fcn2' */
  localXdot->TransferFcn2_CSTATE = 0.0;
  localXdot->TransferFcn2_CSTATE += FCElectricPlant_P.TransferFcn2_A *
    localX->TransferFcn2_CSTATE;
  localXdot->TransferFcn2_CSTATE += *rtu_MotSpd;

  /* Derivatives for SimscapeInputBlock: '<S302>/INPUT_13_1_1' */
  localXdot->FCElectricPlantMotorSimulink_In = (localB->TransferFcn2 -
    localX->FCElectricPlantMotorSimulink_In) * 1000.0;

  /* Derivatives for SimscapeExecutionBlock: '<S302>/STATE_1' */
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time = rtmGetTaskTime(FCElectricPlant_M, 0);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  tmp = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
         (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(FCElectricPlant_M);
  tmp = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp;
  tmp = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp;
  tmp = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp;
  simulationData->mData->mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep
    (FCElectricPlant_M->rtS);
  tmp_1[0] = 0;
  tmp_0[0] = localB->INPUT_1_1_1[0];
  tmp_0[1] = localB->INPUT_1_1_1[1];
  tmp_0[2] = localB->INPUT_1_1_1[2];
  tmp_0[3] = localB->INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_2_1_1[0];
  tmp_0[5] = localB->INPUT_2_1_1[1];
  tmp_0[6] = localB->INPUT_2_1_1[2];
  tmp_0[7] = localB->INPUT_2_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = localB->INPUT_4_1_1[0];
  tmp_0[9] = localB->INPUT_4_1_1[1];
  tmp_0[10] = localB->INPUT_4_1_1[2];
  tmp_0[11] = localB->INPUT_4_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = localB->INPUT_3_1_1[0];
  tmp_0[13] = localB->INPUT_3_1_1[1];
  tmp_0[14] = localB->INPUT_3_1_1[2];
  tmp_0[15] = localB->INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = localB->INPUT_5_1_1[0];
  tmp_0[17] = localB->INPUT_5_1_1[1];
  tmp_0[18] = localB->INPUT_5_1_1[2];
  tmp_0[19] = localB->INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = localB->INPUT_6_1_1[0];
  tmp_0[21] = localB->INPUT_6_1_1[1];
  tmp_0[22] = localB->INPUT_6_1_1[2];
  tmp_0[23] = localB->INPUT_6_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = localB->INPUT_7_1_1[0];
  tmp_0[25] = localB->INPUT_7_1_1[1];
  tmp_0[26] = localB->INPUT_7_1_1[2];
  tmp_0[27] = localB->INPUT_7_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = localB->INPUT_8_1_1[0];
  tmp_0[29] = localB->INPUT_8_1_1[1];
  tmp_0[30] = localB->INPUT_8_1_1[2];
  tmp_0[31] = localB->INPUT_8_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = localB->INPUT_9_1_1[0];
  tmp_0[33] = localB->INPUT_9_1_1[1];
  tmp_0[34] = localB->INPUT_9_1_1[2];
  tmp_0[35] = localB->INPUT_9_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = localB->INPUT_10_1_1[0];
  tmp_0[37] = localB->INPUT_10_1_1[1];
  tmp_0[38] = localB->INPUT_10_1_1[2];
  tmp_0[39] = localB->INPUT_10_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = localB->INPUT_11_1_1[0];
  tmp_0[41] = localB->INPUT_11_1_1[1];
  tmp_0[42] = localB->INPUT_11_1_1[2];
  tmp_0[43] = localB->INPUT_11_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = localB->INPUT_12_1_1[0];
  tmp_0[45] = localB->INPUT_12_1_1[1];
  tmp_0[46] = localB->INPUT_12_1_1[2];
  tmp_0[47] = localB->INPUT_12_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = localB->INPUT_14_1_1[0];
  tmp_0[49] = localB->INPUT_14_1_1[1];
  tmp_0[50] = localB->INPUT_14_1_1[2];
  tmp_0[51] = localB->INPUT_14_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = localB->INPUT_13_1_1[0];
  tmp_0[53] = localB->INPUT_13_1_1[1];
  tmp_0[54] = localB->INPUT_13_1_1[2];
  tmp_0[55] = localB->INPUT_13_1_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 480;
  simulationData->mData->mDx.mX = &localXdot->FCElectricPlantBattery_SystemBa[0];
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (is != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S302>/STATE_1' */

  /* Derivatives for TransferFcn: '<S287>/Motor Coupling Dynamics1' */
  localXdot->MotorCouplingDynamics1_CSTATE = 0.0;
  localXdot->MotorCouplingDynamics1_CSTATE +=
    FCElectricPlant_P.MotorCouplingDynamics1_A *
    localX->MotorCouplingDynamics1_CSTATE;
  localXdot->MotorCouplingDynamics1_CSTATE += localB->OUTPUT_1_0[19];

  /* Derivatives for TransferFcn: '<S118>/Transfer Fcn2' */
  localXdot->TransferFcn2_CSTATE_j = 0.0;
  localXdot->TransferFcn2_CSTATE_j += FCElectricPlant_P.TransferFcn2_A_a *
    localX->TransferFcn2_CSTATE_j;
  localXdot->TransferFcn2_CSTATE_j += localB->OUTPUT_1_0[8];

  /* Derivatives for StateSpace: '<S28>/State Space' */
  localXdot->StateSpace_CSTATE = 0.0;
  for (ri = FCElectricPlant_P.StateSpace_A_jc[0U]; ri <
       FCElectricPlant_P.StateSpace_A_jc[1U]; ri++) {
    localXdot->StateSpace_CSTATE += FCElectricPlant_P.StateSpace_A_pr *
      localX->StateSpace_CSTATE;
  }

  for (ri = FCElectricPlant_P.StateSpace_B_jc[0U]; ri <
       FCElectricPlant_P.StateSpace_B_jc[1U]; ri++) {
    localXdot->StateSpace_CSTATE += FCElectricPlant_P.StateSpace_B_pr *
      localB->OUTPUT_1_0[3];
  }

  /* End of Derivatives for StateSpace: '<S28>/State Space' */

  /* Derivatives for TransferFcn: '<S118>/Transfer Fcn4' */
  localXdot->TransferFcn4_CSTATE = 0.0;
  localXdot->TransferFcn4_CSTATE += FCElectricPlant_P.TransferFcn4_A *
    localX->TransferFcn4_CSTATE;
  localXdot->TransferFcn4_CSTATE += localB->OUTPUT_1_0[11];

  /* Derivatives for Integrator: '<S243>/Integrator' */
  localXdot->Integrator_CSTATE_j = localB->SumI4;

  /* Derivatives for Integrator: '<S174>/Integrator' */
  localXdot->Integrator_CSTATE_o = localB->SumI4_b;
}

/* Projection for referenced model: 'FCElectricPlant' */
void FCElectricPlant_Projection(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T
  *localDW, X_FCElectricPlant_n_T *localX)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  real_T tmp_0[56];
  real_T time;
  int32_T tmp_2;
  int_T tmp_1[15];
  boolean_T tmp;

  /* Projection for SimscapeExecutionBlock: '<S302>/STATE_1' */
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time = rtmGetTaskTime(FCElectricPlant_M, 0);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  tmp = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
         (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(FCElectricPlant_M);
  tmp = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp;
  tmp = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp;
  tmp = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp;
  simulationData->mData->mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep
    (FCElectricPlant_M->rtS);
  tmp_1[0] = 0;
  tmp_0[0] = localB->INPUT_1_1_1[0];
  tmp_0[1] = localB->INPUT_1_1_1[1];
  tmp_0[2] = localB->INPUT_1_1_1[2];
  tmp_0[3] = localB->INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_2_1_1[0];
  tmp_0[5] = localB->INPUT_2_1_1[1];
  tmp_0[6] = localB->INPUT_2_1_1[2];
  tmp_0[7] = localB->INPUT_2_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = localB->INPUT_4_1_1[0];
  tmp_0[9] = localB->INPUT_4_1_1[1];
  tmp_0[10] = localB->INPUT_4_1_1[2];
  tmp_0[11] = localB->INPUT_4_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = localB->INPUT_3_1_1[0];
  tmp_0[13] = localB->INPUT_3_1_1[1];
  tmp_0[14] = localB->INPUT_3_1_1[2];
  tmp_0[15] = localB->INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = localB->INPUT_5_1_1[0];
  tmp_0[17] = localB->INPUT_5_1_1[1];
  tmp_0[18] = localB->INPUT_5_1_1[2];
  tmp_0[19] = localB->INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = localB->INPUT_6_1_1[0];
  tmp_0[21] = localB->INPUT_6_1_1[1];
  tmp_0[22] = localB->INPUT_6_1_1[2];
  tmp_0[23] = localB->INPUT_6_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = localB->INPUT_7_1_1[0];
  tmp_0[25] = localB->INPUT_7_1_1[1];
  tmp_0[26] = localB->INPUT_7_1_1[2];
  tmp_0[27] = localB->INPUT_7_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = localB->INPUT_8_1_1[0];
  tmp_0[29] = localB->INPUT_8_1_1[1];
  tmp_0[30] = localB->INPUT_8_1_1[2];
  tmp_0[31] = localB->INPUT_8_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = localB->INPUT_9_1_1[0];
  tmp_0[33] = localB->INPUT_9_1_1[1];
  tmp_0[34] = localB->INPUT_9_1_1[2];
  tmp_0[35] = localB->INPUT_9_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = localB->INPUT_10_1_1[0];
  tmp_0[37] = localB->INPUT_10_1_1[1];
  tmp_0[38] = localB->INPUT_10_1_1[2];
  tmp_0[39] = localB->INPUT_10_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = localB->INPUT_11_1_1[0];
  tmp_0[41] = localB->INPUT_11_1_1[1];
  tmp_0[42] = localB->INPUT_11_1_1[2];
  tmp_0[43] = localB->INPUT_11_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = localB->INPUT_12_1_1[0];
  tmp_0[45] = localB->INPUT_12_1_1[1];
  tmp_0[46] = localB->INPUT_12_1_1[2];
  tmp_0[47] = localB->INPUT_12_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = localB->INPUT_14_1_1[0];
  tmp_0[49] = localB->INPUT_14_1_1[1];
  tmp_0[50] = localB->INPUT_14_1_1[2];
  tmp_0[51] = localB->INPUT_14_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = localB->INPUT_13_1_1[0];
  tmp_0[53] = localB->INPUT_13_1_1[1];
  tmp_0[54] = localB->INPUT_13_1_1[2];
  tmp_0[55] = localB->INPUT_13_1_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
    }
  }

  /* End of Projection for SimscapeExecutionBlock: '<S302>/STATE_1' */
}

/* ForcingFunction for referenced model: 'FCElectricPlant' */
void FCElectricPlant_ForcingFunction(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, const real_T *rtu_MotSpd, B_FCElectricPlant_c_T *localB,
  DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T *localX,
  XDot_FCElectricPlant_n_T *localXdot)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  real_T tmp_0[56];
  real_T time;
  int_T tmp_1[15];
  int_T is;
  uint32_T ri;
  boolean_T tmp;

  /* ForcingFunction for TransferFcn: '<S118>/Transfer Fcn3' */
  localXdot->TransferFcn3_CSTATE = 0.0;
  localXdot->TransferFcn3_CSTATE += FCElectricPlant_P.TransferFcn3_A *
    localX->TransferFcn3_CSTATE;
  localXdot->TransferFcn3_CSTATE += localB->Add;

  /* ForcingFunction for TransferFcn: '<S17>/Transfer Fcn5' */
  localXdot->TransferFcn5_CSTATE = 0.0;
  localXdot->TransferFcn5_CSTATE += FCElectricPlant_P.TransferFcn5_A *
    localX->TransferFcn5_CSTATE;
  localXdot->TransferFcn5_CSTATE += localB->OUTPUT_1_0[2];

  /* ForcingFunction for SimscapeInputBlock: '<S302>/INPUT_1_1_1' */
  localXdot->FCElectricPlantBattery_SystemPo = (localB->Divide -
    localX->FCElectricPlantBattery_SystemPo) * 1000.0;

  /* ForcingFunction for TransferFcn: '<S125>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE = 0.0;
  localXdot->TransferFcn_CSTATE += FCElectricPlant_P.TransferFcn_A *
    localX->TransferFcn_CSTATE;
  localXdot->TransferFcn_CSTATE += localB->Constant_h;

  /* ForcingFunction for TransferFcn: '<S194>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_m = 0.0;
  localXdot->TransferFcn_CSTATE_m += FCElectricPlant_P.TransferFcn_A_c *
    localX->TransferFcn_CSTATE_m;
  localXdot->TransferFcn_CSTATE_m += localB->Saturation_n5;

  /* ForcingFunction for TransferFcn: '<S138>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_b = 0.0;
  localXdot->TransferFcn_CSTATE_b += FCElectricPlant_P.TransferFcn_A_e *
    localX->TransferFcn_CSTATE_b;
  localXdot->TransferFcn_CSTATE_b += localB->Saturation_m;

  /* ForcingFunction for TransferFcn: '<S205>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_be = 0.0;
  localXdot->TransferFcn_CSTATE_be += FCElectricPlant_P.TransferFcn_A_o *
    localX->TransferFcn_CSTATE_be;
  localXdot->TransferFcn_CSTATE_be += localB->Saturation_n;

  /* ForcingFunction for TransferFcn: '<S261>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_g = 0.0;
  localXdot->TransferFcn_CSTATE_g += FCElectricPlant_P.TransferFcn_A_od *
    localX->TransferFcn_CSTATE_g;
  localXdot->TransferFcn_CSTATE_g += localB->Saturation_e;

  /* ForcingFunction for TransferFcn: '<S124>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_e = 0.0;
  localXdot->TransferFcn_CSTATE_e += FCElectricPlant_P.TransferFcn_A_i *
    localX->TransferFcn_CSTATE_e;
  localXdot->TransferFcn_CSTATE_e += localB->OUTPUT_1_0[10];

  /* ForcingFunction for TransferFcn: '<S270>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_gw = 0.0;
  localXdot->TransferFcn_CSTATE_gw += FCElectricPlant_P.TransferFcn_A_i0 *
    localX->TransferFcn_CSTATE_gw;
  localXdot->TransferFcn_CSTATE_gw += localB->Saturation_h5;

  /* ForcingFunction for TransferFcn: '<S127>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_d = 0.0;
  localXdot->TransferFcn_CSTATE_d += FCElectricPlant_P.TransferFcn_A_p *
    localX->TransferFcn_CSTATE_d;
  localXdot->TransferFcn_CSTATE_d += localB->OUTPUT_1_0[10];

  /* ForcingFunction for TransferFcn: '<S118>/Transfer Fcn1' */
  localXdot->TransferFcn1_CSTATE = 0.0;
  localXdot->TransferFcn1_CSTATE += FCElectricPlant_P.TransferFcn1_A *
    localX->TransferFcn1_CSTATE;
  localXdot->TransferFcn1_CSTATE += localB->OUTPUT_1_0[7];

  /* ForcingFunction for TransferFcn: '<S60>/Transfer Fcn' */
  localXdot->TransferFcn_CSTATE_f = 0.0;
  localXdot->TransferFcn_CSTATE_f += FCElectricPlant_P.TransferFcn_A_oz *
    localX->TransferFcn_CSTATE_f;
  localXdot->TransferFcn_CSTATE_f += localB->Saturation;

  /* ForcingFunction for Integrator: '<S98>/Integrator' */
  localXdot->Integrator_CSTATE = localB->IntegralGain;

  /* ForcingFunction for Integrator: '<S93>/Filter' */
  localXdot->Filter_CSTATE = localB->FilterCoefficient;

  /* ForcingFunction for TransferFcn: '<S287>/Transfer Fcn2' */
  localXdot->TransferFcn2_CSTATE = 0.0;
  localXdot->TransferFcn2_CSTATE += FCElectricPlant_P.TransferFcn2_A *
    localX->TransferFcn2_CSTATE;
  localXdot->TransferFcn2_CSTATE += *rtu_MotSpd;

  /* ForcingFunction for SimscapeInputBlock: '<S302>/INPUT_13_1_1' */
  localXdot->FCElectricPlantMotorSimulink_In = (localB->TransferFcn2 -
    localX->FCElectricPlantMotorSimulink_In) * 1000.0;

  /* ForcingFunction for SimscapeExecutionBlock: '<S302>/STATE_1' */
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time = rtmGetTaskTime(FCElectricPlant_M, 0);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  tmp = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
         (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(FCElectricPlant_M);
  tmp = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp;
  tmp = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp;
  tmp = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp;
  simulationData->mData->mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep
    (FCElectricPlant_M->rtS);
  tmp_1[0] = 0;
  tmp_0[0] = localB->INPUT_1_1_1[0];
  tmp_0[1] = localB->INPUT_1_1_1[1];
  tmp_0[2] = localB->INPUT_1_1_1[2];
  tmp_0[3] = localB->INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_2_1_1[0];
  tmp_0[5] = localB->INPUT_2_1_1[1];
  tmp_0[6] = localB->INPUT_2_1_1[2];
  tmp_0[7] = localB->INPUT_2_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = localB->INPUT_4_1_1[0];
  tmp_0[9] = localB->INPUT_4_1_1[1];
  tmp_0[10] = localB->INPUT_4_1_1[2];
  tmp_0[11] = localB->INPUT_4_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = localB->INPUT_3_1_1[0];
  tmp_0[13] = localB->INPUT_3_1_1[1];
  tmp_0[14] = localB->INPUT_3_1_1[2];
  tmp_0[15] = localB->INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = localB->INPUT_5_1_1[0];
  tmp_0[17] = localB->INPUT_5_1_1[1];
  tmp_0[18] = localB->INPUT_5_1_1[2];
  tmp_0[19] = localB->INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = localB->INPUT_6_1_1[0];
  tmp_0[21] = localB->INPUT_6_1_1[1];
  tmp_0[22] = localB->INPUT_6_1_1[2];
  tmp_0[23] = localB->INPUT_6_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = localB->INPUT_7_1_1[0];
  tmp_0[25] = localB->INPUT_7_1_1[1];
  tmp_0[26] = localB->INPUT_7_1_1[2];
  tmp_0[27] = localB->INPUT_7_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = localB->INPUT_8_1_1[0];
  tmp_0[29] = localB->INPUT_8_1_1[1];
  tmp_0[30] = localB->INPUT_8_1_1[2];
  tmp_0[31] = localB->INPUT_8_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = localB->INPUT_9_1_1[0];
  tmp_0[33] = localB->INPUT_9_1_1[1];
  tmp_0[34] = localB->INPUT_9_1_1[2];
  tmp_0[35] = localB->INPUT_9_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = localB->INPUT_10_1_1[0];
  tmp_0[37] = localB->INPUT_10_1_1[1];
  tmp_0[38] = localB->INPUT_10_1_1[2];
  tmp_0[39] = localB->INPUT_10_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = localB->INPUT_11_1_1[0];
  tmp_0[41] = localB->INPUT_11_1_1[1];
  tmp_0[42] = localB->INPUT_11_1_1[2];
  tmp_0[43] = localB->INPUT_11_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = localB->INPUT_12_1_1[0];
  tmp_0[45] = localB->INPUT_12_1_1[1];
  tmp_0[46] = localB->INPUT_12_1_1[2];
  tmp_0[47] = localB->INPUT_12_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = localB->INPUT_14_1_1[0];
  tmp_0[49] = localB->INPUT_14_1_1[1];
  tmp_0[50] = localB->INPUT_14_1_1[2];
  tmp_0[51] = localB->INPUT_14_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = localB->INPUT_13_1_1[0];
  tmp_0[53] = localB->INPUT_13_1_1[1];
  tmp_0[54] = localB->INPUT_13_1_1[2];
  tmp_0[55] = localB->INPUT_13_1_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 480;
  simulationData->mData->mDx.mX = &localXdot->FCElectricPlantBattery_SystemBa[0];
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_FORCINGFUNCTION, simulationData, diagnosticManager);
  if (is != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
    }
  }

  /* End of ForcingFunction for SimscapeExecutionBlock: '<S302>/STATE_1' */

  /* ForcingFunction for TransferFcn: '<S287>/Motor Coupling Dynamics1' */
  localXdot->MotorCouplingDynamics1_CSTATE = 0.0;
  localXdot->MotorCouplingDynamics1_CSTATE +=
    FCElectricPlant_P.MotorCouplingDynamics1_A *
    localX->MotorCouplingDynamics1_CSTATE;
  localXdot->MotorCouplingDynamics1_CSTATE += localB->OUTPUT_1_0[19];

  /* ForcingFunction for TransferFcn: '<S118>/Transfer Fcn2' */
  localXdot->TransferFcn2_CSTATE_j = 0.0;
  localXdot->TransferFcn2_CSTATE_j += FCElectricPlant_P.TransferFcn2_A_a *
    localX->TransferFcn2_CSTATE_j;
  localXdot->TransferFcn2_CSTATE_j += localB->OUTPUT_1_0[8];

  /* ForcingFunction for StateSpace: '<S28>/State Space' */
  localXdot->StateSpace_CSTATE = 0.0;
  for (ri = FCElectricPlant_P.StateSpace_A_jc[0U]; ri <
       FCElectricPlant_P.StateSpace_A_jc[1U]; ri++) {
    localXdot->StateSpace_CSTATE += FCElectricPlant_P.StateSpace_A_pr *
      localX->StateSpace_CSTATE;
  }

  for (ri = FCElectricPlant_P.StateSpace_B_jc[0U]; ri <
       FCElectricPlant_P.StateSpace_B_jc[1U]; ri++) {
    localXdot->StateSpace_CSTATE += FCElectricPlant_P.StateSpace_B_pr *
      localB->OUTPUT_1_0[3];
  }

  /* End of ForcingFunction for StateSpace: '<S28>/State Space' */

  /* ForcingFunction for TransferFcn: '<S118>/Transfer Fcn4' */
  localXdot->TransferFcn4_CSTATE = 0.0;
  localXdot->TransferFcn4_CSTATE += FCElectricPlant_P.TransferFcn4_A *
    localX->TransferFcn4_CSTATE;
  localXdot->TransferFcn4_CSTATE += localB->OUTPUT_1_0[11];

  /* ForcingFunction for Integrator: '<S243>/Integrator' */
  localXdot->Integrator_CSTATE_j = localB->SumI4;

  /* ForcingFunction for Integrator: '<S174>/Integrator' */
  localXdot->Integrator_CSTATE_o = localB->SumI4_b;
}

/* MassMatrix for referenced model: 'FCElectricPlant' */
void FCElectricPlant_l_MassMatrix(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T
  *localDW, X_FCElectricPlant_n_T *localX)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  real_T tmp_0[56];
  real_T time;
  real_T *tmp_2;
  real_T *tmp_3;
  int32_T tmp_4;
  int_T tmp_1[15];
  boolean_T tmp;

  /* MassMatrix for SimscapeExecutionBlock: '<S302>/STATE_1' */
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time = rtmGetTaskTime(FCElectricPlant_M, 0);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  tmp = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
         (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(FCElectricPlant_M);
  tmp = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp;
  tmp = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp;
  tmp = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp;
  simulationData->mData->mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep
    (FCElectricPlant_M->rtS);
  tmp_1[0] = 0;
  tmp_0[0] = localB->INPUT_1_1_1[0];
  tmp_0[1] = localB->INPUT_1_1_1[1];
  tmp_0[2] = localB->INPUT_1_1_1[2];
  tmp_0[3] = localB->INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_2_1_1[0];
  tmp_0[5] = localB->INPUT_2_1_1[1];
  tmp_0[6] = localB->INPUT_2_1_1[2];
  tmp_0[7] = localB->INPUT_2_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = localB->INPUT_4_1_1[0];
  tmp_0[9] = localB->INPUT_4_1_1[1];
  tmp_0[10] = localB->INPUT_4_1_1[2];
  tmp_0[11] = localB->INPUT_4_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = localB->INPUT_3_1_1[0];
  tmp_0[13] = localB->INPUT_3_1_1[1];
  tmp_0[14] = localB->INPUT_3_1_1[2];
  tmp_0[15] = localB->INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = localB->INPUT_5_1_1[0];
  tmp_0[17] = localB->INPUT_5_1_1[1];
  tmp_0[18] = localB->INPUT_5_1_1[2];
  tmp_0[19] = localB->INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = localB->INPUT_6_1_1[0];
  tmp_0[21] = localB->INPUT_6_1_1[1];
  tmp_0[22] = localB->INPUT_6_1_1[2];
  tmp_0[23] = localB->INPUT_6_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = localB->INPUT_7_1_1[0];
  tmp_0[25] = localB->INPUT_7_1_1[1];
  tmp_0[26] = localB->INPUT_7_1_1[2];
  tmp_0[27] = localB->INPUT_7_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = localB->INPUT_8_1_1[0];
  tmp_0[29] = localB->INPUT_8_1_1[1];
  tmp_0[30] = localB->INPUT_8_1_1[2];
  tmp_0[31] = localB->INPUT_8_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = localB->INPUT_9_1_1[0];
  tmp_0[33] = localB->INPUT_9_1_1[1];
  tmp_0[34] = localB->INPUT_9_1_1[2];
  tmp_0[35] = localB->INPUT_9_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = localB->INPUT_10_1_1[0];
  tmp_0[37] = localB->INPUT_10_1_1[1];
  tmp_0[38] = localB->INPUT_10_1_1[2];
  tmp_0[39] = localB->INPUT_10_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = localB->INPUT_11_1_1[0];
  tmp_0[41] = localB->INPUT_11_1_1[1];
  tmp_0[42] = localB->INPUT_11_1_1[2];
  tmp_0[43] = localB->INPUT_11_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = localB->INPUT_12_1_1[0];
  tmp_0[45] = localB->INPUT_12_1_1[1];
  tmp_0[46] = localB->INPUT_12_1_1[2];
  tmp_0[47] = localB->INPUT_12_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = localB->INPUT_14_1_1[0];
  tmp_0[49] = localB->INPUT_14_1_1[1];
  tmp_0[50] = localB->INPUT_14_1_1[2];
  tmp_0[51] = localB->INPUT_14_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = localB->INPUT_13_1_1[0];
  tmp_0[53] = localB->INPUT_13_1_1[1];
  tmp_0[54] = localB->INPUT_13_1_1[2];
  tmp_0[55] = localB->INPUT_13_1_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  tmp_2 = FCElectricPlant_M->massMatrixBasePr;
  tmp_3 = double_pointer_shift(tmp_2, localDW->STATE_1_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 81;
  simulationData->mData->mMassMatrixPr.mX = tmp_3;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_4 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_MASSMATRIX, simulationData, diagnosticManager);
  if (tmp_4 != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
    }
  }

  /* End of MassMatrix for SimscapeExecutionBlock: '<S302>/STATE_1' */
}

/* ZeroCrossings for referenced model: 'FCElectricPlant' */
void FCElectricPlant_ZC(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M,
  B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T *localDW,
  X_FCElectricPlant_n_T *localX, ZCV_FCElectricPlant_g_T *localZCSV)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  real_T tmp_0[56];
  real_T time;
  int32_T tmp_2;
  int_T tmp_1[15];
  boolean_T tmp;

  /* ZeroCrossings for Saturate: '<S105>/Saturation' */
  localZCSV->Saturation_UprLim_ZC = localB->Sum_d -
    FCElectricPlant_P.PIDController_UpperSaturationLi;
  localZCSV->Saturation_LwrLim_ZC = localB->Sum_d -
    FCElectricPlant_P.PIDController_LowerSaturationLi;

  /* ZeroCrossings for SimscapeExecutionBlock: '<S302>/STATE_1' */
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time = rtmGetTaskTime(FCElectricPlant_M, 0);
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 480;
  simulationData->mData->mContStates.mX =
    &localX->FCElectricPlantBattery_SystemBa[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 259;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
  tmp = (rtmIsMajorTimeStep(FCElectricPlant_M) && ssGetSolverFoundContZcEvents
         (FCElectricPlant_M->rtS));
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(FCElectricPlant_M);
  tmp = _ssGetSolverAssertCheck(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverAssertCheck = tmp;
  tmp = ssIsSolverCheckingCIC(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverCheckingCIC = tmp;
  tmp = ssIsSolverComputingJacobian(FCElectricPlant_M->rtS);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = (ssGetEvaluatingF0ForJacobian
    (FCElectricPlant_M->rtS) != 0);
  tmp = ssIsSolverRequestingReset(FCElectricPlant_M->rtS);
  simulationData->mData->mIsSolverRequestingReset = tmp;
  simulationData->mData->mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep
    (FCElectricPlant_M->rtS);
  tmp_1[0] = 0;
  tmp_0[0] = localB->INPUT_1_1_1[0];
  tmp_0[1] = localB->INPUT_1_1_1[1];
  tmp_0[2] = localB->INPUT_1_1_1[2];
  tmp_0[3] = localB->INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_2_1_1[0];
  tmp_0[5] = localB->INPUT_2_1_1[1];
  tmp_0[6] = localB->INPUT_2_1_1[2];
  tmp_0[7] = localB->INPUT_2_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = localB->INPUT_4_1_1[0];
  tmp_0[9] = localB->INPUT_4_1_1[1];
  tmp_0[10] = localB->INPUT_4_1_1[2];
  tmp_0[11] = localB->INPUT_4_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = localB->INPUT_3_1_1[0];
  tmp_0[13] = localB->INPUT_3_1_1[1];
  tmp_0[14] = localB->INPUT_3_1_1[2];
  tmp_0[15] = localB->INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = localB->INPUT_5_1_1[0];
  tmp_0[17] = localB->INPUT_5_1_1[1];
  tmp_0[18] = localB->INPUT_5_1_1[2];
  tmp_0[19] = localB->INPUT_5_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = localB->INPUT_6_1_1[0];
  tmp_0[21] = localB->INPUT_6_1_1[1];
  tmp_0[22] = localB->INPUT_6_1_1[2];
  tmp_0[23] = localB->INPUT_6_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = localB->INPUT_7_1_1[0];
  tmp_0[25] = localB->INPUT_7_1_1[1];
  tmp_0[26] = localB->INPUT_7_1_1[2];
  tmp_0[27] = localB->INPUT_7_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = localB->INPUT_8_1_1[0];
  tmp_0[29] = localB->INPUT_8_1_1[1];
  tmp_0[30] = localB->INPUT_8_1_1[2];
  tmp_0[31] = localB->INPUT_8_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = localB->INPUT_9_1_1[0];
  tmp_0[33] = localB->INPUT_9_1_1[1];
  tmp_0[34] = localB->INPUT_9_1_1[2];
  tmp_0[35] = localB->INPUT_9_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = localB->INPUT_10_1_1[0];
  tmp_0[37] = localB->INPUT_10_1_1[1];
  tmp_0[38] = localB->INPUT_10_1_1[2];
  tmp_0[39] = localB->INPUT_10_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = localB->INPUT_11_1_1[0];
  tmp_0[41] = localB->INPUT_11_1_1[1];
  tmp_0[42] = localB->INPUT_11_1_1[2];
  tmp_0[43] = localB->INPUT_11_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = localB->INPUT_12_1_1[0];
  tmp_0[45] = localB->INPUT_12_1_1[1];
  tmp_0[46] = localB->INPUT_12_1_1[2];
  tmp_0[47] = localB->INPUT_12_1_1[3];
  tmp_1[12] = 48;
  tmp_0[48] = localB->INPUT_14_1_1[0];
  tmp_0[49] = localB->INPUT_14_1_1[1];
  tmp_0[50] = localB->INPUT_14_1_1[2];
  tmp_0[51] = localB->INPUT_14_1_1[3];
  tmp_1[13] = 52;
  tmp_0[52] = localB->INPUT_13_1_1[0];
  tmp_0[53] = localB->INPUT_13_1_1[1];
  tmp_0[54] = localB->INPUT_13_1_1[2];
  tmp_0[55] = localB->INPUT_13_1_1[3];
  tmp_1[14] = 56;
  simulationData->mData->mInputValues.mN = 56;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 15;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mNonSampledZCs.mN = 278;
  simulationData->mData->mNonSampledZCs.mX =
    &localZCSV->STATE_1_Battery_SystemBattery_T;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_ZEROCROSSINGS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(ssGetErrorStatus(FCElectricPlant_M->rtS));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      ssSetErrorStatus(FCElectricPlant_M->rtS, msg);
    }
  }

  /* End of ZeroCrossings for SimscapeExecutionBlock: '<S302>/STATE_1' */

  /* ZeroCrossings for Saturate: '<S250>/Saturation' */
  localZCSV->Saturation_UprLim_ZC_i = localB->ProportionalGain -
    FCElectricPlant_P.PIDController_UpperSaturation_e;
  localZCSV->Saturation_LwrLim_ZC_o = localB->ProportionalGain -
    FCElectricPlant_P.PIDController_LowerSaturation_n;

  /* ZeroCrossings for Saturate: '<S181>/Saturation' */
  localZCSV->Saturation_UprLim_ZC_p = localB->ProportionalGain_a -
    FCElectricPlant_P.PIDController_UpperSaturation_h;
  localZCSV->Saturation_LwrLim_ZC_d = localB->ProportionalGain_a -
    FCElectricPlant_P.PIDController_LowerSaturation_i;

  /* ZeroCrossings for Saturate: '<S194>/Saturation' */
  localZCSV->Saturation_UprLim_ZC_b = localB->Sum_b -
    FCElectricPlant_P.Saturation_UpperSat_i;
  localZCSV->Saturation_LwrLim_ZC_m = localB->Sum_b -
    FCElectricPlant_P.Saturation_LowerSat_h;
}

/* Termination for referenced model: 'FCElectricPlant' */
void FCElectricPlant_Term(DW_FCElectricPlant_f_T *localDW)
{
  /* Terminate for SimscapeExecutionBlock: '<S302>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->STATE_1_SimData);
  nesl_erase_simulator("FCElectricPlant/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S302>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->OUTPUT_1_0_SimData);
  nesl_erase_simulator("FCElectricPlant/Solver Configuration_1");
  nesl_destroy_registry();
}

/* Model initialize function */
void FCElectricPlant_initialize(SimStruct *const rtS, int_T mdlref_TID0, int_T
  mdlref_TID1, RT_MODEL_FCElectricPlant_T *const FCElectricPlant_M,
  B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T *localDW,
  ZCE_FCElectricPlant_T *localZCE, real_T *localMM)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  FCElectricPlant_P.Saturation_UpperSat = rtInf;
  FCElectricPlant_P.Saturation_UpperSat_h = rtInf;
  FCElectricPlant_P.Saturation_UpperSat_j = rtInf;

  /* initialize real-time model */
  (void) memset((void *)FCElectricPlant_M, 0,
                sizeof(RT_MODEL_FCElectricPlant_T));

  /* setup the global timing engine */
  FCElectricPlant_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  FCElectricPlant_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  FCElectricPlant_M->rtS = (rtS);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_FCElectricPlant_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_FCElectricPlant_f_T));

  /* Init MassMatrixPr Base and Offsets */
  {
    FCElectricPlant_M->massMatrixBasePr = localMM;
    localDW->STATE_1_MASS_MATRIX_PR = 17;/* '<S302>/STATE_1' */
  }

  FCElectricPlant_M->nonContDerivSignal[0].pPrevVal = (char_T *)
    FCElectricPlant_M->NonContDerivMemory.mr_nonContSig0;
  FCElectricPlant_M->nonContDerivSignal[0].sizeInBytes = (1*sizeof(real_T));
  FCElectricPlant_M->nonContDerivSignal[0].pCurrVal = (char_T *)(&localB->RTP_1);
  ;
  FCElectricPlant_M->nonContDerivSignal[1].pPrevVal = (char_T *)
    FCElectricPlant_M->NonContDerivMemory.mr_nonContSig1;
  FCElectricPlant_M->nonContDerivSignal[1].sizeInBytes = (1*sizeof(real_T));
  FCElectricPlant_M->nonContDerivSignal[1].pCurrVal = (char_T *)(&localB->Sum_p);
  ;
  FCElectricPlant_M->nonContDerivSignal[2].pPrevVal = (char_T *)
    FCElectricPlant_M->NonContDerivMemory.mr_nonContSig2;
  FCElectricPlant_M->nonContDerivSignal[2].sizeInBytes = (1*sizeof(real_T));
  FCElectricPlant_M->nonContDerivSignal[2].pCurrVal = (char_T *)(&localB->Sum);
  ;
  localZCE->Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  localZCE->Filter_Reset_ZCE = UNINITIALIZED_ZCSIG;
}
