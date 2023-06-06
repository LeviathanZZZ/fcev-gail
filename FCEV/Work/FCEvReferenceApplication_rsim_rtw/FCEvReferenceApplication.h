/*
 * FCEvReferenceApplication.h
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

#ifndef RTW_HEADER_FCEvReferenceApplication_h_
#define RTW_HEADER_FCEvReferenceApplication_h_
#ifndef FCEvReferenceApplication_COMMON_INCLUDES_
#define FCEvReferenceApplication_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#include "rt_logging.h"
#include "dt_info.h"
#endif                           /* FCEvReferenceApplication_COMMON_INCLUDES_ */

#include "FCEvReferenceApplication_types.h"
#include "DrivetrainEv.h"
#include "FCElectricPlant.h"
#include "FCEvPowertrainController.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
#include "model_reference_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "zero_crossing_types.h"
#define MODEL_NAME                     FCEvReferenceApplication
#define NSAMPLE_TIMES                  (5)                       /* Number of sample times */
#define NINPUTS                        (1)                       /* Number of model inputs */
#define NOUTPUTS                       (3)                       /* Number of model outputs */
#define NBLOCKIO                       (89)                      /* Number of data output port signals */
#define NUM_ZC_EVENTS                  (0)                       /* Number of zero-crossing events */
#ifndef NCSTATES
#define NCSTATES                       (528)                     /* Number of continuous states */
#elif NCSTATES != 528
# error Invalid specification of NCSTATES defined in compiler command
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         (NULL)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)
#endif

/* Block signals for system '<S32>/Pass Through' */
typedef struct {
  real_T u;                            /* '<S33>/u' */
} B_PassThrough_FCEvReferenceAp_T;

/* Block states (default storage) for system '<S32>/Pass Through' */
typedef struct {
  boolean_T PassThrough_MODE;          /* '<S32>/Pass Through' */
} DW_PassThrough_FCEvReferenceA_T;

/* Block signals (default storage) */
typedef struct {
  real_T MotTrqCmd;                    /* '<S46>/First Order Hold' */
  real_T xdot;                         /* '<S5>/Drivetrain' */
  real_T MotSpd;                       /* '<S5>/Drivetrain' */
  real_T FCCurrCmd;                    /* '<S46>/First Order Hold1' */
  real_T BattSoc;                      /* '<S5>/Electric Plant' */
  real_T BattPwr;                      /* '<S5>/Electric Plant' */
  real_T BattCurr;                     /* '<S5>/Electric Plant' */
  real_T MotTrq;                       /* '<S5>/Electric Plant' */
  real_T ElectricPlant_o5;             /* '<S5>/Electric Plant' */
  real_T FCCurr;                       /* '<S5>/Electric Plant' */
  real_T TotPwr;                       /* '<S5>/Electric Plant' */
  real_T H2Flow;                       /* '<S5>/Electric Plant' */
  real_T ElectricPlant_o9;             /* '<S5>/Electric Plant' */
  real_T Saturation;                   /* '<S6>/Saturation' */
  real_T Gain;                         /* '<S6>/Gain' */
  real_T Derivative;                   /* '<S6>/Derivative' */
  real_T Gain_g;                       /* '<Root>/Gain' */
  real_T Constant;                     /* '<S26>/Constant' */
  real_T Integrator1;                  /* '<S27>/Integrator1' */
  real_T Gain_a;                       /* '<S25>/Gain' */
  real_T Add;                          /* '<S25>/Add' */
  real_T Constant_d;                   /* '<S28>/Constant' */
  real_T tFinal;                       /* '<S11>/tFinal' */
  real_T repeat;                       /* '<S11>/repeat' */
  real_T Switch;                       /* '<S11>/Switch' */
  real_T uDLookupTable;                /* '<S11>/1-D Lookup Table' */
  real_T Constant1;                    /* '<S40>/Constant1' */
  real_T Constant_l;                   /* '<S40>/Constant' */
  real_T Switch_b[2];                  /* '<S40>/Switch' */
  real_T RateTransition;               /* '<S7>/Rate Transition' */
  real_T RateTransition1;              /* '<S7>/Rate Transition1' */
  real_T RateTransition2;              /* '<S7>/Rate Transition2' */
  real_T RateTransition3;              /* '<S7>/Rate Transition3' */
  real_T RateTransition6;              /* '<S7>/Rate Transition6' */
  real_T RateTransition7;              /* '<S7>/Rate Transition7' */
  real_T MotTrqCmd_j;               /* '<S1>/Powertrain Control Module (PCM)' */
  real_T BrkCmd;                    /* '<S1>/Powertrain Control Module (PCM)' */
  real_T PowertrainControlModulePCM_o3;
                                    /* '<S1>/Powertrain Control Module (PCM)' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T RateTransition4;              /* '<S7>/Rate Transition4' */
  real_T RateTransition5;              /* '<S7>/Rate Transition5' */
  real_T DigitalClock;                 /* '<S11>/Digital Clock' */
  real_T Add1;                         /* '<S11>/Add1' */
  real_T Grade;                        /* '<S3>/Constant2' */
  real_T wind_x;                       /* '<S3>/Constant3' */
  real_T Product1;                     /* '<S25>/Product1' */
  real_T Product;                      /* '<S25>/Product' */
  real_T ytT;                          /* '<S25>/Add2' */
  real_T etT;                          /* '<S25>/Add4' */
  real_T Divide;                       /* '<S25>/Divide' */
  real_T u_ot;                         /* '<S25>/Add1' */
  real_T Constant_a;                   /* '<S27>/Constant' */
  real_T Sum;                          /* '<S27>/Sum' */
  real_T Divide_j;                     /* '<S27>/Divide' */
  real_T Sum7;                         /* '<S20>/Sum7' */
  real_T Product_m;                    /* '<S38>/Product' */
  real_T UnitDelay[2];                 /* '<S38>/Unit Delay' */
  real_T Switch_p[2];                  /* '<S38>/Switch' */
  real_T MotTrq_f;                     /* '<S45>/Motor Coupling Dynamics' */
  real_T BrkCmd_f;                     /* '<S45>/First Order Hold' */
  real_T mstomph[2];                   /* '<S6>/m//s to mph' */
  real_T radstoRPM;                    /* '<S6>/rad//s to RPM' */
  real_T Integrator;                   /* '<S48>/Integrator' */
  real_T Integrator1_d;                /* '<S48>/Integrator1' */
  real_T m3toUSGal;                    /* '<S48>/m^3 to US Gal' */
  real_T USMPGCalc;                    /* '<S48>/US MPG Calc' */
  real_T mto100Km;                     /* '<S48>/m to 100Km' */
  real_T L100Km;                       /* '<S48>/L//100 Km Calc' */
  real_T wtokw;                        /* '<S48>/w to kw' */
  real_T Divide_c;                     /* '<S48>/Divide' */
  real_T USEPAkwhUSgalequivalent;     /* '<S48>/US EPA kwh//USgal equivalent' */
  real_T Divide2;                      /* '<S48>/Divide2' */
  real_T sperh;                        /* '<S48>/s per h' */
  real_T GasGallonss;                  /* '<S48>/Divide1' */
  real_T Gasgals;                      /* '<S48>/kg//s to Gas gal//s' */
  real_T Add_b;                        /* '<S48>/Add' */
  real_T Product_e;                    /* '<S48>/Product' */
  real_T Sqrt;                         /* '<S48>/Sqrt' */
  real_T m3pergal;                     /* '<S48>/m^3 per gal' */
  real_T Clock;                        /* '<Root>/Clock' */
  real_T Gear;                         /* '<S39>/Shift Controller' */
  boolean_T LogicalOperator2;          /* '<S26>/Logical Operator2' */
  boolean_T NOT;                       /* '<S32>/NOT' */
  boolean_T LogicalOperator2_j;        /* '<S28>/Logical Operator2' */
  boolean_T NOT_g;                     /* '<S34>/NOT' */
  boolean_T LogicalOperator;           /* '<S40>/Logical Operator' */
  B_PassThrough_FCEvReferenceAp_T PassThrough_b;/* '<S34>/Pass Through' */
  B_PassThrough_FCEvReferenceAp_T PassThrough;/* '<S32>/Pass Through' */
} B_FCEvReferenceApplication_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE[2];          /* '<S38>/Unit Delay' */
  real_T Tk;                           /* '<S46>/First Order Hold' */
  real_T Ck;                           /* '<S46>/First Order Hold' */
  real_T Mk;                           /* '<S46>/First Order Hold' */
  real_T Uk;                           /* '<S46>/First Order Hold' */
  real_T Tk_o;                         /* '<S46>/First Order Hold1' */
  real_T Ck_d;                         /* '<S46>/First Order Hold1' */
  real_T Mk_e;                         /* '<S46>/First Order Hold1' */
  real_T Uk_j;                         /* '<S46>/First Order Hold1' */
  volatile real_T RateTransition1_Buffer0;/* '<S6>/Rate Transition1' */
  real_T TimeStampA;                   /* '<S6>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S6>/Derivative' */
  real_T TimeStampB;                   /* '<S6>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S6>/Derivative' */
  volatile real_T RateTransition_Buffer0;/* '<S7>/Rate Transition' */
  volatile real_T RateTransition1_Buffer0_m;/* '<S7>/Rate Transition1' */
  volatile real_T RateTransition2_Buffer0;/* '<S7>/Rate Transition2' */
  volatile real_T RateTransition3_Buffer0;/* '<S7>/Rate Transition3' */
  volatile real_T RateTransition6_Buffer0;/* '<S7>/Rate Transition6' */
  volatile real_T RateTransition7_Buffer0;/* '<S7>/Rate Transition7' */
  volatile real_T RateTransition4_Buffer0;/* '<S7>/Rate Transition4' */
  volatile real_T RateTransition5_Buffer0;/* '<S7>/Rate Transition5' */
  real_T Tk_a;                         /* '<S45>/First Order Hold' */
  real_T Ck_g;                         /* '<S45>/First Order Hold' */
  real_T Mk_h;                         /* '<S45>/First Order Hold' */
  real_T Uk_h;                         /* '<S45>/First Order Hold' */
  volatile real_T RateTransition4_Buffer0_b[2];/* '<S6>/Rate Transition4' */
  volatile real_T RateTransition2_Buffer0_k;/* '<S6>/Rate Transition2' */
  volatile real_T RateTransition5_Buffer0_d;/* '<S6>/Rate Transition5' */
  volatile real_T RateTransition6_Buffer0_e;/* '<S6>/Rate Transition6' */
  volatile real_T RateTransition3_Buffer0_d;/* '<S6>/Rate Transition3' */
  volatile real_T RateTransition7_Buffer0_j;/* '<S6>/Rate Transition7' */
  volatile real_T RateTransition3_Buffer0_g;/* '<S48>/Rate Transition3' */
  real_T GearState;                    /* '<S39>/Shift Controller' */
  real_T temporalCounter_i1;           /* '<S39>/Shift Controller' */
  real_T presentTime;                  /* '<S39>/Shift Controller' */
  real_T elapsedTime;                  /* '<S39>/Shift Controller' */
  real_T previousTime;                 /* '<S39>/Shift Controller' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<Root>/To Workspace2' */

  struct {
    void *LoggedData[8];
  } PerformanceandFEScope_PWORK;       /* '<S6>/Performance and FE Scope' */

  struct {
    void *LoggedData;
  } Scope_PWORK_k;                     /* '<S6>/Scope' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK_c;              /* '<S6>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK_i;              /* '<S6>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S6>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S6>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK_j;              /* '<Root>/To Workspace3' */

  uint32_T m_bpIndex;                  /* '<S11>/1-D Lookup Table' */
  int_T Saturation_MODE;               /* '<S6>/Saturation' */
  int_T Saturation1_MODE;              /* '<S48>/Saturation1' */
  int_T Saturation_MODE_k;             /* '<S48>/Saturation' */
  volatile int8_T RateTransition1_semaphoreTaken;/* '<S6>/Rate Transition1' */
  volatile int8_T RateTransition_semaphoreTaken;/* '<S7>/Rate Transition' */
  volatile int8_T RateTransition1_semaphoreTake_h;/* '<S7>/Rate Transition1' */
  volatile int8_T RateTransition2_semaphoreTaken;/* '<S7>/Rate Transition2' */
  volatile int8_T RateTransition3_semaphoreTaken;/* '<S7>/Rate Transition3' */
  volatile int8_T RateTransition6_semaphoreTaken;/* '<S7>/Rate Transition6' */
  volatile int8_T RateTransition7_semaphoreTaken;/* '<S7>/Rate Transition7' */
  volatile int8_T RateTransition4_semaphoreTaken;/* '<S7>/Rate Transition4' */
  volatile int8_T RateTransition5_semaphoreTaken;/* '<S7>/Rate Transition5' */
  volatile int8_T RateTransition4_semaphoreTake_d;/* '<S6>/Rate Transition4' */
  volatile int8_T RateTransition2_semaphoreTake_p;/* '<S6>/Rate Transition2' */
  volatile int8_T RateTransition5_semaphoreTake_i;/* '<S6>/Rate Transition5' */
  volatile int8_T RateTransition6_semaphoreTake_e;/* '<S6>/Rate Transition6' */
  volatile int8_T RateTransition3_semaphoreTake_e;/* '<S6>/Rate Transition3' */
  volatile int8_T RateTransition7_semaphoreTake_h;/* '<S6>/Rate Transition7' */
  volatile int8_T RateTransition3_semaphoreTake_g;/* '<S48>/Rate Transition3' */
  int8_T Sqrt_DWORK1;                  /* '<S48>/Sqrt' */
  uint8_T is_GearSelect;               /* '<S39>/Shift Controller' */
  uint8_T is_active_c6_autolibsharedcommo;/* '<S39>/Shift Controller' */
  boolean_T Compare_Mode;              /* '<S42>/Compare' */
  boolean_T RelationalOperator_Mode;   /* '<Root>/Relational Operator' */
  MdlrefDW_DrivetrainEv_T Drivetrain_InstanceData;/* '<S5>/Drivetrain' */
  MdlrefDW_FCElectricPlant_T ElectricPlant_InstanceData;/* '<S5>/Electric Plant' */
  int32_T ElectricPlant_MASS_MATRIX_PR;/* '<S5>/Electric Plant' */
  MdlrefDW_FCEvPowertrainContro_T PowertrainControlModulePCM_Inst;
                                    /* '<S1>/Powertrain Control Module (PCM)' */
  DW_PassThrough_FCEvReferenceA_T PassThrough_b;/* '<S34>/Pass Through' */
  DW_PassThrough_FCEvReferenceA_T PassThrough;/* '<S32>/Pass Through' */
} DW_FCEvReferenceApplication_T;

/* Continuous states (default storage) */
typedef struct {
  X_DrivetrainEv_n_T Drivetrain_CSTATE;/* '<S5>/Drivetrain' */
  X_FCElectricPlant_n_T ElectricPlant_CSTATE;/* '<S5>/Electric Plant' */
  real_T Integrator1_CSTATE;           /* '<S27>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S38>/Integrator2' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S45>/Motor Coupling Dynamics' */
  real_T Integrator_CSTATE;            /* '<S48>/Integrator' */
  real_T Integrator1_CSTATE_j;         /* '<S48>/Integrator1' */
} X_FCEvReferenceApplication_T;

/* Periodic continuous state vector (global) */
typedef int_T PeriodicIndX_FCEvReferenceApp_T[1];
typedef real_T PeriodicRngX_FCEvReferenceApp_T[2];

/* State derivatives (default storage) */
typedef struct {
  XDot_DrivetrainEv_n_T Drivetrain_CSTATE;/* '<S5>/Drivetrain' */
  XDot_FCElectricPlant_n_T ElectricPlant_CSTATE;/* '<S5>/Electric Plant' */
  real_T Integrator1_CSTATE;           /* '<S27>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S38>/Integrator2' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S45>/Motor Coupling Dynamics' */
  real_T Integrator_CSTATE;            /* '<S48>/Integrator' */
  real_T Integrator1_CSTATE_j;         /* '<S48>/Integrator1' */
} XDot_FCEvReferenceApplication_T;

/* State disabled  */
typedef struct {
  XDis_DrivetrainEv_n_T Drivetrain_CSTATE;/* '<S5>/Drivetrain' */
  XDis_FCElectricPlant_n_T ElectricPlant_CSTATE;/* '<S5>/Electric Plant' */
  boolean_T Integrator1_CSTATE;        /* '<S27>/Integrator1' */
  boolean_T Integrator2_CSTATE;        /* '<S38>/Integrator2' */
  boolean_T MotorCouplingDynamics_CSTATE;/* '<S45>/Motor Coupling Dynamics' */
  boolean_T Integrator_CSTATE;         /* '<S48>/Integrator' */
  boolean_T Integrator1_CSTATE_j;      /* '<S48>/Integrator1' */
} XDis_FCEvReferenceApplication_T;

/* Continuous State Absolute Tolerance  */
typedef struct {
  XAbsTol_DrivetrainEv_T Drivetrain_CSTATE;/* '<S5>/Drivetrain' */
  XAbsTol_FCElectricPlant_T ElectricPlant_CSTATE;/* '<S5>/Electric Plant' */
  real_T Integrator1_CSTATE;           /* '<S27>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S38>/Integrator2' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S45>/Motor Coupling Dynamics' */
  real_T Integrator_CSTATE;            /* '<S48>/Integrator' */
  real_T Integrator1_CSTATE_j;         /* '<S48>/Integrator1' */
} CStateAbsTol_FCEvReferenceApp_T;

/* Continuous State Perturb Min  */
typedef struct {
  XPtMin_DrivetrainEv_T Drivetrain_CSTATE;/* '<S5>/Drivetrain' */
  XPtMin_FCElectricPlant_T ElectricPlant_CSTATE;/* '<S5>/Electric Plant' */
  real_T Integrator1_CSTATE;           /* '<S27>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S38>/Integrator2' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S45>/Motor Coupling Dynamics' */
  real_T Integrator_CSTATE;            /* '<S48>/Integrator' */
  real_T Integrator1_CSTATE_j;         /* '<S48>/Integrator1' */
} CXPtMin_FCEvReferenceApplicat_T;

/* Continuous State Perturb Max  */
typedef struct {
  XPtMax_DrivetrainEv_T Drivetrain_CSTATE;/* '<S5>/Drivetrain' */
  XPtMax_FCElectricPlant_T ElectricPlant_CSTATE;/* '<S5>/Electric Plant' */
  real_T Integrator1_CSTATE;           /* '<S27>/Integrator1' */
  real_T Integrator2_CSTATE;           /* '<S38>/Integrator2' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S45>/Motor Coupling Dynamics' */
  real_T Integrator_CSTATE;            /* '<S48>/Integrator' */
  real_T Integrator1_CSTATE_j;         /* '<S48>/Integrator1' */
} CXPtMax_FCEvReferenceApplicat_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCV_DrivetrainEv_g_T Drivetrain_Reset_ZC;/* '<S5>/Drivetrain' */
  ZCV_FCElectricPlant_g_T ElectricPlant_Reset_ZC;/* '<S5>/Electric Plant' */
  real_T Saturation_UprLim_ZC;         /* '<S6>/Saturation' */
  real_T Saturation_LwrLim_ZC;         /* '<S6>/Saturation' */
  real_T Compare_RelopInput_ZC;        /* '<S42>/Compare' */
  real_T HitCrossing_HitNoOutput_ZC;   /* '<S11>/Hit  Crossing' */
  real_T Saturation1_UprLim_ZC;        /* '<S48>/Saturation1' */
  real_T Saturation1_LwrLim_ZC;        /* '<S48>/Saturation1' */
  real_T Saturation_UprLim_ZC_f;       /* '<S48>/Saturation' */
  real_T Saturation_LwrLim_ZC_h;       /* '<S48>/Saturation' */
  real_T RelationalOperator_RelopInput_Z;/* '<Root>/Relational Operator' */
} ZCV_FCEvReferenceApplication_T;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[129];
  int_T jc[529];
  real_T pr[129];
} MassMatrix_FCEvReferenceAppli_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T pfc;                          /* '<Root>/pfc' */
} ExtU_FCEvReferenceApplication_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T soc;                          /* '<Root>/soc' */
  real_T v;                            /* '<Root>/v' */
  real_T a;                            /* '<Root>/a' */
} ExtY_FCEvReferenceApplication_T;

/* Parameters (default storage) */
struct P_FCEvReferenceApplication_T_ {
  real_T LongitudinalDriverModel_GearIni;
                              /* Mask Parameter: LongitudinalDriverModel_GearIni
                               * Referenced by: '<S39>/Shift Controller'
                               */
  real_T SignalHold_IC;                /* Mask Parameter: SignalHold_IC
                                        * Referenced by: '<S32>/Pass Through'
                                        */
  real_T SignalHold_IC_k;              /* Mask Parameter: SignalHold_IC_k
                                        * Referenced by: '<S34>/Pass Through'
                                        */
  real_T LongitudinalDriverModel_Kpt;
                                  /* Mask Parameter: LongitudinalDriverModel_Kpt
                                   * Referenced by:
                                   *   '<S25>/Setup'
                                   *   '<S25>/Gain'
                                   */
  real_T LongitudinalDriverModel_L; /* Mask Parameter: LongitudinalDriverModel_L
                                     * Referenced by: '<S25>/Setup'
                                     */
  real_T LongitudinalDriverModel_aR;
                                   /* Mask Parameter: LongitudinalDriverModel_aR
                                    * Referenced by: '<S25>/Setup'
                                    */
  real_T LongitudinalDriverModel_bR;
                                   /* Mask Parameter: LongitudinalDriverModel_bR
                                    * Referenced by: '<S25>/Setup'
                                    */
  real_T LongitudinalDriverModel_cR;
                                   /* Mask Parameter: LongitudinalDriverModel_cR
                                    * Referenced by: '<S25>/Setup'
                                    */
  real_T LongitudinalDriverModel_g; /* Mask Parameter: LongitudinalDriverModel_g
                                     * Referenced by: '<S25>/Gain'
                                     */
  real_T LongitudinalDriverModel_m; /* Mask Parameter: LongitudinalDriverModel_m
                                     * Referenced by:
                                     *   '<S25>/Setup'
                                     *   '<S25>/Gain'
                                     */
  real_T LongitudinalDriverModel_tShift;
                               /* Mask Parameter: LongitudinalDriverModel_tShift
                                * Referenced by: '<S39>/Shift Controller'
                                */
  real_T LongitudinalDriverModel_tau;
                                  /* Mask Parameter: LongitudinalDriverModel_tau
                                   * Referenced by:
                                   *   '<S25>/Setup'
                                   *   '<S27>/Constant'
                                   */
  real_T u1_UpperSat;                  /* Expression: 1
                                        * Referenced by: '<S26>/0~1'
                                        */
  real_T u1_LowerSat;                  /* Expression: 0
                                        * Referenced by: '<S26>/0~1'
                                        */
  real_T u0_UpperSat;                  /* Expression: 0
                                        * Referenced by: '<S28>/-1~0'
                                        */
  real_T u0_LowerSat;                  /* Expression: -1
                                        * Referenced by: '<S28>/-1~0'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S42>/Constant'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T FirstOrderHold_IniOut;        /* Expression: 0
                                        * Referenced by: '<S46>/First Order Hold'
                                        */
  real_T FirstOrderHold_ErrTol;        /* Expression: inf
                                        * Referenced by: '<S46>/First Order Hold'
                                        */
  real_T FirstOrderHold1_IniOut;       /* Expression: 0
                                        * Referenced by: '<S46>/First Order Hold1'
                                        */
  real_T FirstOrderHold1_ErrTol;       /* Expression: inf
                                        * Referenced by: '<S46>/First Order Hold1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: Inf
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Gain_Gain;                    /* Expression: 3.6
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 1000
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S27>/Integrator1'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 1
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 0
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 1
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T Saturation_LowerSat_jd;       /* Expression: 0
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T tFinal_Value;                 /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S11>/tFinal'
                                        */
  real_T repeat_Value;                 /* Expression: cycleRepeat
                                        * Referenced by: '<S11>/repeat'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S11>/Switch'
                                        */
  real_T uDLookupTable_tableData[1370];/* Expression: DriveCycle.Data
                                        * Referenced by: '<S11>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[1370]; /* Expression: DriveCycle.Time
                                        * Referenced by: '<S11>/1-D Lookup Table'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S40>/Constant1'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.001
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Saturation_UpperSat_eq;       /* Expression: Inf
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.001
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T HitCrossing_Offset;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S11>/Hit  Crossing'
               */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Constant3'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S38>/Integrator2'
                                        */
  real_T UnitDelay_InitialCondition[2];/* Expression: [0,0]
                                        * Referenced by: '<S38>/Unit Delay'
                                        */
  real_T MotorCouplingDynamics_A; /* Computed Parameter: MotorCouplingDynamics_A
                                   * Referenced by: '<S45>/Motor Coupling Dynamics'
                                   */
  real_T MotorCouplingDynamics_C; /* Computed Parameter: MotorCouplingDynamics_C
                                   * Referenced by: '<S45>/Motor Coupling Dynamics'
                                   */
  real_T FirstOrderHold_IniOut_b;      /* Expression: 0
                                        * Referenced by: '<S45>/First Order Hold'
                                        */
  real_T FirstOrderHold_ErrTol_e;      /* Expression: inf
                                        * Referenced by: '<S45>/First Order Hold'
                                        */
  real_T mstomph_Gain;                 /* Expression: 2.23694
                                        * Referenced by: '<S6>/m//s to mph'
                                        */
  real_T radstoRPM_Gain;               /* Expression: 30/pi
                                        * Referenced by: '<S6>/rad//s to RPM'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S48>/Integrator'
                                        */
  real_T mtomile_Gain;                 /* Expression: 0.000621371
                                        * Referenced by: '<S48>/m to mile'
                                        */
  real_T Integrator1_IC_o;             /* Expression: 0
                                        * Referenced by: '<S48>/Integrator1'
                                        */
  real_T m3toUSGal_Gain;               /* Expression: 264.172
                                        * Referenced by: '<S48>/m^3 to US Gal'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: Inf
                                        * Referenced by: '<S48>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 1e-3
                                        * Referenced by: '<S48>/Saturation1'
                                        */
  real_T mto100Km_Gain;                /* Expression: 1/1000/100
                                        * Referenced by: '<S48>/m to 100Km'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: Inf
                                        * Referenced by: '<S48>/Saturation'
                                        */
  real_T Saturation_LowerSat_ln;       /* Expression: 0.001
                                        * Referenced by: '<S48>/Saturation'
                                        */
  real_T m3toL_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S48>/m^3 to L'
                                        */
  real_T wtokw_Value;                  /* Expression: 1000
                                        * Referenced by: '<S48>/w to kw'
                                        */
  real_T USEPAkwhUSgalequivalent_Value;/* Expression: 33.7
                                        * Referenced by: '<S48>/US EPA kwh//USgal equivalent'
                                        */
  real_T sperh_Value;                  /* Expression: 3600
                                        * Referenced by: '<S48>/s per h'
                                        */
  real_T kgstoGasgals_Gain;            /* Expression: 1/1.011
                                        * Referenced by: '<S48>/kg//s to Gas gal//s'
                                        */
  real_T m3pergal_Gain;                /* Expression: 0.00378541
                                        * Referenced by: '<S48>/m^3 per gal'
                                        */
  real_T pause_time_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/pause_time'
                                        */
};

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern B_FCEvReferenceApplication_T FCEvReferenceApplication_B;/* block i/o */
extern X_FCEvReferenceApplication_T FCEvReferenceApplication_X;/* states (continuous) */
extern DW_FCEvReferenceApplication_T FCEvReferenceApplication_DW;/* states (dwork) */
extern ExtU_FCEvReferenceApplication_T FCEvReferenceApplication_U;/* external inputs */
extern ExtY_FCEvReferenceApplication_T FCEvReferenceApplication_Y;/* external outputs */
extern MassMatrix_FCEvReferenceAppli_T FCEvReferenceApplica_MassMatrix;/* global MassMatrix */
extern P_FCEvReferenceApplication_T FCEvReferenceApplication_P;/* parameters */

/* Simulation Structure */
extern SimStruct *const rtS;

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
 * '<Root>' : 'FCEvReferenceApplication'
 * '<S1>'   : 'FCEvReferenceApplication/Controllers'
 * '<S2>'   : 'FCEvReferenceApplication/Drive Cycle Source'
 * '<S3>'   : 'FCEvReferenceApplication/Environment'
 * '<S4>'   : 'FCEvReferenceApplication/Longitudinal Driver'
 * '<S5>'   : 'FCEvReferenceApplication/Passenger Car'
 * '<S6>'   : 'FCEvReferenceApplication/Visualization'
 * '<S7>'   : 'FCEvReferenceApplication/Controllers/Powertrain Control Input'
 * '<S8>'   : 'FCEvReferenceApplication/Controllers/Powertrain Control Output'
 * '<S9>'   : 'FCEvReferenceApplication/Drive Cycle Source/Signal Routing'
 * '<S10>'  : 'FCEvReferenceApplication/Drive Cycle Source/Timing Mode'
 * '<S11>'  : 'FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous'
 * '<S12>'  : 'FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem'
 * '<S13>'  : 'FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/Fault Mode'
 * '<S14>'  : 'FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/TracePlot'
 * '<S15>'  : 'FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S16>'  : 'FCEvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S17>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver'
 * '<S18>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model'
 * '<S19>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/External Action Routing'
 * '<S20>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver'
 * '<S21>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control'
 * '<S22>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/LPF'
 * '<S23>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing'
 * '<S24>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift'
 * '<S25>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive'
 * '<S26>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override'
 * '<S27>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF'
 * '<S28>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override'
 * '<S29>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Powertrain Response'
 * '<S30>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup'
 * '<S31>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Vehicle'
 * '<S32>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold'
 * '<S33>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through'
 * '<S34>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold'
 * '<S35>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through'
 * '<S36>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Powertrain Response/Unfiltered'
 * '<S37>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/LPF/pass'
 * '<S38>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics'
 * '<S39>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic'
 * '<S40>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change'
 * '<S41>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller'
 * '<S42>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero'
 * '<S43>'  : 'FCEvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1'
 * '<S44>'  : 'FCEvReferenceApplication/Passenger Car/Drivetrain Output'
 * '<S45>'  : 'FCEvReferenceApplication/Passenger Car/Drivetrain Plant Input'
 * '<S46>'  : 'FCEvReferenceApplication/Passenger Car/Electric Plant Input'
 * '<S47>'  : 'FCEvReferenceApplication/Passenger Car/Electric Plant Output'
 * '<S48>'  : 'FCEvReferenceApplication/Visualization/Performance Calculations'
 */

/* user code (bottom of header file) */
extern const int_T gblNumToFiles;
extern const int_T gblNumFrFiles;
extern const int_T gblNumFrWksBlocks;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
extern const int_T gblNumRootInportBlks;
extern const int_T gblNumModelInputs;
extern const int_T gblInportDataTypeIdx[];
extern const int_T gblInportDims[];
extern const int_T gblInportComplex[];
extern const int_T gblInportInterpoFlag[];
extern const int_T gblInportContinuous[];

#endif                              /* RTW_HEADER_FCEvReferenceApplication_h_ */
