/*
 * Code generation for system model 'FCEvPowertrainController'
 * For more details, see corresponding source file FCEvPowertrainController.c
 *
 */

#ifndef RTW_HEADER_FCEvPowertrainController_h_
#define RTW_HEADER_FCEvPowertrainController_h_
#ifndef FCEvPowertrainController_COMMON_INCLUDES_
#define FCEvPowertrainController_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#endif                           /* FCEvPowertrainController_COMMON_INCLUDES_ */

#include "FCEvPowertrainController_types.h"
#include <stddef.h>
#include <string.h>
#include "rt_nonfinite.h"

/* Block signals for model 'FCEvPowertrainController' */
typedef struct {
  real_T IntegralGain;                 /* '<S37>/Integral Gain' */
  real_T FilterCoefficient;            /* '<S43>/Filter Coefficient' */
} B_FCEvPowertrainController_c_T;

/* Block states (default storage) for model 'FCEvPowertrainController' */
typedef struct {
  real_T Filter_DSTATE;                /* '<S35>/Filter' */
  real_T Integrator_DSTATE;            /* '<S40>/Integrator' */
} DW_FCEvPowertrainController_f_T;

/* Parameters (default storage) */
struct P_FCEvPowertrainController_T_ {
  struct_IDgMmAocjV2Mcx0AXuhokB FCctrl;/* Variable: FCctrl
                                        * Referenced by:
                                        *   '<S4>/Constant2'
                                        *   '<S4>/Constant3'
                                        */
  real_T BattChrgMax;                  /* Variable: BattChrgMax
                                        * Referenced by: '<S2>/MaxChrg'
                                        */
  real_T BattDischrgMax;               /* Variable: BattDischrgMax
                                        * Referenced by: '<S2>/MaxDischrg'
                                        */
  real_T BrkPrsMax;                    /* Variable: BrkPrsMax
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T ChrgLmt_bpt[11];              /* Variable: ChrgLmt_bpt
                                        * Referenced by:
                                        *   '<S2>/ChrgLmt'
                                        *   '<S70>/ChrgLmt'
                                        */
  real_T DischrgLmt_bpt[11];           /* Variable: DischrgLmt_bpt
                                        * Referenced by: '<S2>/DischrgLmt'
                                        */
  real_T MotSpd[12];                   /* Variable: MotSpd
                                        * Referenced by:
                                        *   '<S1>/MaxMotTrqVsSpd'
                                        *   '<S70>/MaxMotTrqVsSpd'
                                        *   '<S62>/MaxMotTrqVsSpd'
                                        */
  real_T MotTrq[12];                   /* Variable: MotTrq
                                        * Referenced by:
                                        *   '<S1>/MaxMotTrqVsSpd'
                                        *   '<S70>/MaxMotTrqVsSpd'
                                        *   '<S62>/MaxMotTrqVsSpd'
                                        */
  real_T Ndiff;                        /* Variable: Ndiff
                                        * Referenced by:
                                        *   '<S70>/MotTrqReflectedToWheels'
                                        *   '<S70>/WhlTrqReflectedToMot'
                                        */
  real_T RegenBrkCutOff[2];            /* Variable: RegenBrkCutOff
                                        * Referenced by: '<S70>/RegenBrakingCutoff'
                                        */
  real_T RegenBrkSpd_bpt[2];           /* Variable: RegenBrkSpd_bpt
                                        * Referenced by: '<S70>/RegenBrakingCutoff'
                                        */
  real_T Rm;                           /* Variable: Rm
                                        * Referenced by:
                                        *   '<S70>/Constant'
                                        *   '<S70>/Constant1'
                                        */
  real_T SOC_bpt[11];                  /* Variable: SOC_bpt
                                        * Referenced by:
                                        *   '<S2>/ChrgLmt'
                                        *   '<S2>/DischrgLmt'
                                        *   '<S70>/ChrgLmt'
                                        */
  real_T T_eff_bp[15];                 /* Variable: T_eff_bp
                                        * Referenced by: '<S61>/Eff Map'
                                        */
  real_T efficiency_table[180];        /* Variable: efficiency_table
                                        * Referenced by: '<S61>/Eff Map'
                                        */
  real_T mu_kinetic;                   /* Variable: mu_kinetic
                                        * Referenced by:
                                        *   '<S70>/Constant'
                                        *   '<S70>/Constant1'
                                        */
  real_T num_pads;                     /* Variable: num_pads
                                        * Referenced by:
                                        *   '<S70>/Constant'
                                        *   '<S70>/Constant1'
                                        */
  real_T w_eff_bp[12];                 /* Variable: w_eff_bp
                                        * Referenced by: '<S61>/Eff Map'
                                        */
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S34>/Derivative Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S37>/Integral Gain'
                                        */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S35>/Filter'
                               */
  real_T PIDController1_InitialConditi_a;
                              /* Mask Parameter: PIDController1_InitialConditi_a
                               * Referenced by: '<S40>/Integrator'
                               */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S43>/Filter Coefficient'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S45>/Proportional Gain'
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S57>/Constant'
                                       */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S60>/Constant'
                                     */
  real_T div0protectpoly_thresh;       /* Mask Parameter: div0protectpoly_thresh
                                        * Referenced by:
                                        *   '<S68>/Constant'
                                        *   '<S69>/Constant'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S65>/Constant'
                                        */
  real_T rads_to_rpm_Gain;             /* Expression: 30/pi
                                        * Referenced by: '<S1>/rads_to_rpm'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant_Value_kv;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S3>/Switch'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S4>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 200
                                        * Referenced by: '<S4>/Saturation3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 350
                                        * Referenced by: '<S4>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S4>/Saturation4'
                                        */
  real_T Step_Time;                    /* Expression: 1
                                        * Referenced by: '<S4>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S4>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S4>/Step'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S35>/Filter'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S40>/Integrator'
                                        */
  real_T rads_to_rpm_Gain_n;           /* Expression: 30/pi
                                        * Referenced by: '<S62>/rads_to_rpm'
                                        */
  real_T rads_to_rpm_Gain_f;           /* Expression: 30/pi
                                        * Referenced by: '<S70>/rads_to_rpm'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S70>/Gain'
                                        */
  real_T rads_to_rpm_Gain_l;           /* Expression: 30/pi
                                        * Referenced by: '<S61>/rads_to_rpm'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/100
                                        * Referenced by: '<S61>/Gain1'
                                        */
  real_T Constant1_Value_p;            /* Expression: -1
                                        * Referenced by: '<S61>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S61>/Constant2'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S61>/Switch2'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S63>/Switch1'
                                        */
  real_T Gain_Gain_l;                  /* Expression: -1
                                        * Referenced by: '<S62>/Gain'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 1
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T Constant1_Value_m;            /* Expression: 1
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Constant2_Value_p;            /* Expression: 1
                                        * Referenced by: '<S8>/Constant2'
                                        */
  real_T OptFCPwr_Value;               /* Expression: 6.5e3
                                        * Referenced by: '<S8>/OptFCPwr'
                                        */
  real_T Gain2_Gain;                   /* Expression: -0.001
                                        * Referenced by: '<S8>/Gain2'
                                        */
  real_T Negative5_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S70>/Negative 5'
                                        */
  real_T Negative5_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S70>/Negative 5'
                                        */
  uint32_T EffMap_maxIndex[2];         /* Computed Parameter: EffMap_maxIndex
                                        * Referenced by: '<S61>/Eff Map'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_FCEvPowertrainControl_T {
  struct SimStruct_tag *rtS;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    int_T mdlref_GlobalTID[1];
  } Timing;
};

typedef struct {
  B_FCEvPowertrainController_c_T rtb;
  DW_FCEvPowertrainController_f_T rtdw;
  RT_MODEL_FCEvPowertrainContro_T rtm;
} MdlrefDW_FCEvPowertrainContro_T;

/* Model reference registration function */
extern void FCEvPowertrainContro_initialize(SimStruct *const rtS, int_T
  mdlref_TID0, RT_MODEL_FCEvPowertrainContro_T *const FCEvPowertrainController_M,
  B_FCEvPowertrainController_c_T *localB, DW_FCEvPowertrainController_f_T
  *localDW);
extern void FCEvPowertrainController_Init(DW_FCEvPowertrainController_f_T
  *localDW);
extern void FCEvPowertrainController_Reset(DW_FCEvPowertrainController_f_T
  *localDW);
extern void FCEvPowertrainController_Update(B_FCEvPowertrainController_c_T
  *localB, DW_FCEvPowertrainController_f_T *localDW);
extern void FCEvPowertrainController(RT_MODEL_FCEvPowertrainContro_T * const
  FCEvPowertrainController_M, const real_T *rtu_AccelPdl, const real_T
  *rtu_DecelPdl, const real_T *rtu_VehSpdFdbk, const real_T *rtu_BattSoc, const
  real_T *rtu_MtrSpd, const real_T *rtu_FCVolt, const real_T *rtu_P_fc, real_T
  *rty_MotTrqCmd, real_T *rty_BrkCmd, real_T *rty_FCCurrCmd, real_T
  *rty_FCTempCmd, real_T *rty_P_demand, real_T *rty_Pfc,
  B_FCEvPowertrainController_c_T *localB, DW_FCEvPowertrainController_f_T
  *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FCEvPowertrainController'
 * '<S1>'   : 'FCEvPowertrainController/Accel Pedal to Traction Wheel Torque Request'
 * '<S2>'   : 'FCEvPowertrainController/Battery Management System'
 * '<S3>'   : 'FCEvPowertrainController/Brake Pedal to Total Braking Pressure Request'
 * '<S4>'   : 'FCEvPowertrainController/Fuel Cell Control'
 * '<S5>'   : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management'
 * '<S6>'   : 'FCEvPowertrainController/Regen Braking Control'
 * '<S7>'   : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1'
 * '<S8>'   : 'FCEvPowertrainController/Fuel Cell Control/Sigmoid'
 * '<S9>'   : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Anti-windup'
 * '<S10>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/D Gain'
 * '<S11>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Filter'
 * '<S12>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Filter ICs'
 * '<S13>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/I Gain'
 * '<S14>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Ideal P Gain'
 * '<S15>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Ideal P Gain Fdbk'
 * '<S16>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Integrator'
 * '<S17>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Integrator ICs'
 * '<S18>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/N Copy'
 * '<S19>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/N Gain'
 * '<S20>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/P Copy'
 * '<S21>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Parallel P Gain'
 * '<S22>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Reset Signal'
 * '<S23>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Saturation'
 * '<S24>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Saturation Fdbk'
 * '<S25>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Sum'
 * '<S26>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Sum Fdbk'
 * '<S27>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tracking Mode'
 * '<S28>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tracking Mode Sum'
 * '<S29>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tsamp - Integral'
 * '<S30>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tsamp - Ngain'
 * '<S31>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/postSat Signal'
 * '<S32>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/preSat Signal'
 * '<S33>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Anti-windup/Passthrough'
 * '<S34>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/D Gain/Internal Parameters'
 * '<S35>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S36>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S37>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/I Gain/Internal Parameters'
 * '<S38>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Ideal P Gain/Passthrough'
 * '<S39>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S40>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Integrator/Discrete'
 * '<S41>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Integrator ICs/Internal IC'
 * '<S42>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/N Copy/Disabled'
 * '<S43>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/N Gain/Internal Parameters'
 * '<S44>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/P Copy/Disabled'
 * '<S45>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S46>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Reset Signal/Disabled'
 * '<S47>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Saturation/Passthrough'
 * '<S48>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Saturation Fdbk/Disabled'
 * '<S49>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Sum/Sum_PID'
 * '<S50>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Sum Fdbk/Disabled'
 * '<S51>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tracking Mode/Disabled'
 * '<S52>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S53>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S54>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S55>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/postSat Signal/Forward_Path'
 * '<S56>'  : 'FCEvPowertrainController/Fuel Cell Control/PID Controller1/preSat Signal/Forward_Path'
 * '<S57>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Compare To Constant'
 * '<S58>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management'
 * '<S59>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Check Within Limits'
 * '<S60>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Compare To Constant'
 * '<S61>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Mech to Elec Power Estimate'
 * '<S62>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Torque Limit'
 * '<S63>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/div0protect - poly'
 * '<S64>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Check Within Limits/Compare To Zero'
 * '<S65>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Check Within Limits/Compare To Zero1'
 * '<S66>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Check Within Limits/Saturation Dynamic1'
 * '<S67>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/Torque Limit/Saturation Dynamic'
 * '<S68>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/div0protect - poly/Compare To Constant'
 * '<S69>'  : 'FCEvPowertrainController/Motor Torque Arbitration and Power Management/Power Management/div0protect - poly/Compare To Constant1'
 * '<S70>'  : 'FCEvPowertrainController/Regen Braking Control/Series Regen Braking'
 */
#endif                              /* RTW_HEADER_FCEvPowertrainController_h_ */
