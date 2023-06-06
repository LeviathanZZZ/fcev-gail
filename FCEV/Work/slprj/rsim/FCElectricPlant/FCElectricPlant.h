/*
 * Code generation for system model 'FCElectricPlant'
 * For more details, see corresponding source file FCElectricPlant.c
 *
 */

#ifndef RTW_HEADER_FCElectricPlant_h_
#define RTW_HEADER_FCElectricPlant_h_
#ifndef FCElectricPlant_COMMON_INCLUDES_
#define FCElectricPlant_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#include "nesl_rtw_rtp.h"
#include "FCElectricPlant_66b3e3da_1_gateway.h"
#include "nesl_rtw.h"
#endif                                 /* FCElectricPlant_COMMON_INCLUDES_ */

#include "FCElectricPlant_types.h"
#include <string.h>
#include "model_reference_types.h"
#include "rtGetInf.h"
#include <stddef.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Block signals for model 'FCElectricPlant' */
typedef struct {
  real_T dv[795];
  real_T Divide;                       /* '<S16>/Divide' */
  real_T INPUT_1_1_1[4];               /* '<S302>/INPUT_1_1_1' */
  real_T TransferFcn;                  /* '<S125>/Transfer Fcn' */
  real_T INPUT_2_1_1[4];               /* '<S302>/INPUT_2_1_1' */
  real_T TransferFcn_m;                /* '<S194>/Transfer Fcn' */
  real_T INPUT_4_1_1[4];               /* '<S302>/INPUT_4_1_1' */
  real_T TransferFcn_b;                /* '<S138>/Transfer Fcn' */
  real_T INPUT_3_1_1[4];               /* '<S302>/INPUT_3_1_1' */
  real_T Sum;                          /* '<S122>/Sum' */
  real_T INPUT_5_1_1[4];               /* '<S302>/INPUT_5_1_1' */
  real_T TransferFcn_l;                /* '<S205>/Transfer Fcn' */
  real_T INPUT_6_1_1[4];               /* '<S302>/INPUT_6_1_1' */
  real_T TransferFcn_k;                /* '<S261>/Transfer Fcn' */
  real_T INPUT_7_1_1[4];               /* '<S302>/INPUT_7_1_1' */
  real_T TransferFcn_c;                /* '<S124>/Transfer Fcn' */
  real_T INPUT_8_1_1[4];               /* '<S302>/INPUT_8_1_1' */
  real_T TransferFcn_l0;               /* '<S270>/Transfer Fcn' */
  real_T INPUT_9_1_1[4];               /* '<S302>/INPUT_9_1_1' */
  real_T TransferFcn_bm;               /* '<S127>/Transfer Fcn' */
  real_T INPUT_10_1_1[4];              /* '<S302>/INPUT_10_1_1' */
  real_T Sum_p;                        /* '<S128>/Sum' */
  real_T INPUT_11_1_1[4];              /* '<S302>/INPUT_11_1_1' */
  real_T Constant;                     /* '<S65>/Constant' */
  real_T TransferFcn_g;                /* '<S60>/Transfer Fcn' */
  real_T Constant_c;                   /* '<S60>/Constant' */
  real_T FilterCoefficient;            /* '<S101>/Filter Coefficient' */
  real_T Sum_d;                        /* '<S107>/Sum' */
  real_T Saturation;                   /* '<S105>/Saturation' */
  real_T Constant3;                    /* '<S60>/Constant3' */
  real_T Saturation_h;                 /* '<S60>/Saturation' */
  real_T INPUT_12_1_1[4];              /* '<S302>/INPUT_12_1_1' */
  real_T INPUT_14_1_1[4];              /* '<S302>/INPUT_14_1_1' */
  real_T TransferFcn2;                 /* '<S287>/Transfer Fcn2' */
  real_T INPUT_13_1_1[4];              /* '<S302>/INPUT_13_1_1' */
  real_T RTP_1;                        /* '<S10>/RTP_1' */
  real_T STATE_1[739];                 /* '<S302>/STATE_1' */
  real_T OUTPUT_1_0[20];               /* '<S302>/OUTPUT_1_0' */
  real_T Constant1;                    /* '<Root>/Constant1' */
  real_T IntegralGain;                 /* '<S95>/Integral Gain' */
  real_T Add;                          /* '<S118>/Add' */
  real_T OxygenExcessRatio;            /* '<S123>/Oxygen Excess Ratio' */
  real_T Constant_k;                   /* '<S205>/Constant' */
  real_T ProportionalGain;             /* '<S241>/Proportional Gain' */
  real_T Saturation_n;                 /* '<S250>/Saturation' */
  real_T SumI4;                        /* '<S236>/SumI4' */
  real_T ProportionalGain_a;           /* '<S172>/Proportional Gain' */
  real_T Saturation_m;                 /* '<S181>/Saturation' */
  real_T SumI4_b;                      /* '<S167>/SumI4' */
  real_T Constant_g;                   /* '<S194>/Constant' */
  real_T Sum_b;                        /* '<S194>/Sum' */
  real_T Saturation_n5;                /* '<S194>/Saturation' */
  real_T RelativeHumidity;             /* '<S124>/Relative Humidity' */
  real_T Saturation_e;                 /* '<S261>/Saturation' */
  real_T Constant_h;                   /* '<S125>/Constant' */
  real_T RelativeHumidity_i;           /* '<S127>/Relative Humidity' */
  real_T Saturation_h5;                /* '<S270>/Saturation' */
  boolean_T Compare;                   /* '<S65>/Compare' */
} B_FCElectricPlant_c_T;

/* Block states (default storage) for model 'FCElectricPlant' */
typedef struct {
  real_T INPUT_1_1_1_Discrete;         /* '<S302>/INPUT_1_1_1' */
  real_T INPUT_1_1_1_FirstOutput;      /* '<S302>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S302>/INPUT_2_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S302>/INPUT_4_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S302>/INPUT_3_1_1' */
  real_T INPUT_5_1_1_Discrete[2];      /* '<S302>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_Discrete[2];      /* '<S302>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_Discrete[2];      /* '<S302>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_Discrete[2];      /* '<S302>/INPUT_8_1_1' */
  real_T INPUT_9_1_1_Discrete[2];      /* '<S302>/INPUT_9_1_1' */
  real_T INPUT_10_1_1_Discrete[2];     /* '<S302>/INPUT_10_1_1' */
  real_T INPUT_11_1_1_Discrete[2];     /* '<S302>/INPUT_11_1_1' */
  real_T INPUT_12_1_1_Discrete[2];     /* '<S302>/INPUT_12_1_1' */
  real_T INPUT_14_1_1_Discrete[2];     /* '<S302>/INPUT_14_1_1' */
  real_T INPUT_13_1_1_Discrete;        /* '<S302>/INPUT_13_1_1' */
  real_T INPUT_13_1_1_FirstOutput;     /* '<S302>/INPUT_13_1_1' */
  real_T STATE_1_Discrete;             /* '<S302>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S302>/OUTPUT_1_0' */
  void* RTP_1_RtpManager;              /* '<S10>/RTP_1' */
  void* STATE_1_Simulator;             /* '<S302>/STATE_1' */
  void* STATE_1_SimData;               /* '<S302>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S302>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S302>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S302>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S302>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S302>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S302>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S302>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S302>/OUTPUT_1_0' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData[2];
  } ControlSignals_PWORK;              /* '<S205>/Control Signals' */

  struct {
    void *LoggedData[2];
  } ControlSignals_PWORK_n;            /* '<S138>/Control Signals' */

  int_T Integrator_IWORK;              /* '<S98>/Integrator' */
  int_T Filter_IWORK;                  /* '<S93>/Filter' */
  int_T STATE_1_Modes[259];            /* '<S302>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S302>/OUTPUT_1_0' */
  int_T Saturation_MODE;               /* '<S105>/Saturation' */
  int_T Saturation_MODE_n;             /* '<S250>/Saturation' */
  int_T Saturation_MODE_l;             /* '<S181>/Saturation' */
  int_T Saturation_MODE_h;             /* '<S194>/Saturation' */
  int32_T STATE_1_MASS_MATRIX_PR;      /* '<S302>/STATE_1' */
  boolean_T RTP_1_SetParametersNeeded; /* '<S10>/RTP_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S302>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S302>/OUTPUT_1_0' */
} DW_FCElectricPlant_f_T;

/* Continuous states for model 'FCElectricPlant' */
typedef struct {
  real_T TransferFcn3_CSTATE;          /* '<S118>/Transfer Fcn3' */
  real_T TransferFcn5_CSTATE;          /* '<S17>/Transfer Fcn5' */
  real_T FCElectricPlantBattery_SystemPo;/* '<S302>/INPUT_1_1_1' */
  real_T TransferFcn_CSTATE;           /* '<S125>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_m;         /* '<S194>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S138>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_be;        /* '<S205>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_g;         /* '<S261>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_e;         /* '<S124>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_gw;        /* '<S270>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_d;         /* '<S127>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S118>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE_f;         /* '<S60>/Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S98>/Integrator' */
  real_T Filter_CSTATE;                /* '<S93>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S287>/Transfer Fcn2' */
  real_T FCElectricPlantMotorSimulink_In;/* '<S302>/INPUT_13_1_1' */
  real_T FCElectricPlantBattery_SystemBa[480];/* '<S302>/STATE_1' */
  real_T MotorCouplingDynamics1_CSTATE;/* '<S287>/Motor Coupling Dynamics1' */
  real_T TransferFcn2_CSTATE_j;        /* '<S118>/Transfer Fcn2' */
  real_T StateSpace_CSTATE;            /* '<S28>/State Space' */
  real_T TransferFcn4_CSTATE;          /* '<S118>/Transfer Fcn4' */
  real_T Integrator_CSTATE_j;          /* '<S243>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S174>/Integrator' */
} X_FCElectricPlant_n_T;

/* State derivatives for model 'FCElectricPlant' */
typedef struct {
  real_T TransferFcn3_CSTATE;          /* '<S118>/Transfer Fcn3' */
  real_T TransferFcn5_CSTATE;          /* '<S17>/Transfer Fcn5' */
  real_T FCElectricPlantBattery_SystemPo;/* '<S302>/INPUT_1_1_1' */
  real_T TransferFcn_CSTATE;           /* '<S125>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_m;         /* '<S194>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S138>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_be;        /* '<S205>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_g;         /* '<S261>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_e;         /* '<S124>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_gw;        /* '<S270>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_d;         /* '<S127>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S118>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE_f;         /* '<S60>/Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S98>/Integrator' */
  real_T Filter_CSTATE;                /* '<S93>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S287>/Transfer Fcn2' */
  real_T FCElectricPlantMotorSimulink_In;/* '<S302>/INPUT_13_1_1' */
  real_T FCElectricPlantBattery_SystemBa[480];/* '<S302>/STATE_1' */
  real_T MotorCouplingDynamics1_CSTATE;/* '<S287>/Motor Coupling Dynamics1' */
  real_T TransferFcn2_CSTATE_j;        /* '<S118>/Transfer Fcn2' */
  real_T StateSpace_CSTATE;            /* '<S28>/State Space' */
  real_T TransferFcn4_CSTATE;          /* '<S118>/Transfer Fcn4' */
  real_T Integrator_CSTATE_j;          /* '<S243>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S174>/Integrator' */
} XDot_FCElectricPlant_n_T;

/* State Disabled for model 'FCElectricPlant' */
typedef struct {
  boolean_T TransferFcn3_CSTATE;       /* '<S118>/Transfer Fcn3' */
  boolean_T TransferFcn5_CSTATE;       /* '<S17>/Transfer Fcn5' */
  boolean_T FCElectricPlantBattery_SystemPo;/* '<S302>/INPUT_1_1_1' */
  boolean_T TransferFcn_CSTATE;        /* '<S125>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_m;      /* '<S194>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_b;      /* '<S138>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_be;     /* '<S205>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_g;      /* '<S261>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_e;      /* '<S124>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_gw;     /* '<S270>/Transfer Fcn' */
  boolean_T TransferFcn_CSTATE_d;      /* '<S127>/Transfer Fcn' */
  boolean_T TransferFcn1_CSTATE;       /* '<S118>/Transfer Fcn1' */
  boolean_T TransferFcn_CSTATE_f;      /* '<S60>/Transfer Fcn' */
  boolean_T Integrator_CSTATE;         /* '<S98>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S93>/Filter' */
  boolean_T TransferFcn2_CSTATE;       /* '<S287>/Transfer Fcn2' */
  boolean_T FCElectricPlantMotorSimulink_In;/* '<S302>/INPUT_13_1_1' */
  boolean_T FCElectricPlantBattery_SystemBa[480];/* '<S302>/STATE_1' */
  boolean_T MotorCouplingDynamics1_CSTATE;/* '<S287>/Motor Coupling Dynamics1' */
  boolean_T TransferFcn2_CSTATE_j;     /* '<S118>/Transfer Fcn2' */
  boolean_T StateSpace_CSTATE;         /* '<S28>/State Space' */
  boolean_T TransferFcn4_CSTATE;       /* '<S118>/Transfer Fcn4' */
  boolean_T Integrator_CSTATE_j;       /* '<S243>/Integrator' */
  boolean_T Integrator_CSTATE_o;       /* '<S174>/Integrator' */
} XDis_FCElectricPlant_n_T;

/* Continuous State Absolute Tolerance for model 'FCElectricPlant' */
typedef struct {
  real_T TransferFcn3_CSTATE;          /* '<S118>/Transfer Fcn3' */
  real_T TransferFcn5_CSTATE;          /* '<S17>/Transfer Fcn5' */
  real_T FCElectricPlantBattery_SystemPo;/* '<S302>/INPUT_1_1_1' */
  real_T TransferFcn_CSTATE;           /* '<S125>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_m;         /* '<S194>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S138>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_be;        /* '<S205>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_g;         /* '<S261>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_e;         /* '<S124>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_gw;        /* '<S270>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_d;         /* '<S127>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S118>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE_f;         /* '<S60>/Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S98>/Integrator' */
  real_T Filter_CSTATE;                /* '<S93>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S287>/Transfer Fcn2' */
  real_T FCElectricPlantMotorSimulink_In;/* '<S302>/INPUT_13_1_1' */
  real_T FCElectricPlantBattery_SystemBa[480];/* '<S302>/STATE_1' */
  real_T MotorCouplingDynamics1_CSTATE;/* '<S287>/Motor Coupling Dynamics1' */
  real_T TransferFcn2_CSTATE_j;        /* '<S118>/Transfer Fcn2' */
  real_T StateSpace_CSTATE;            /* '<S28>/State Space' */
  real_T TransferFcn4_CSTATE;          /* '<S118>/Transfer Fcn4' */
  real_T Integrator_CSTATE_j;          /* '<S243>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S174>/Integrator' */
} XAbsTol_FCElectricPlant_T;

/* Continuous State Perturb Min for model 'FCElectricPlant' */
typedef struct {
  real_T TransferFcn3_CSTATE;          /* '<S118>/Transfer Fcn3' */
  real_T TransferFcn5_CSTATE;          /* '<S17>/Transfer Fcn5' */
  real_T FCElectricPlantBattery_SystemPo;/* '<S302>/INPUT_1_1_1' */
  real_T TransferFcn_CSTATE;           /* '<S125>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_m;         /* '<S194>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S138>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_be;        /* '<S205>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_g;         /* '<S261>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_e;         /* '<S124>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_gw;        /* '<S270>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_d;         /* '<S127>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S118>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE_f;         /* '<S60>/Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S98>/Integrator' */
  real_T Filter_CSTATE;                /* '<S93>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S287>/Transfer Fcn2' */
  real_T FCElectricPlantMotorSimulink_In;/* '<S302>/INPUT_13_1_1' */
  real_T FCElectricPlantBattery_SystemBa[480];/* '<S302>/STATE_1' */
  real_T MotorCouplingDynamics1_CSTATE;/* '<S287>/Motor Coupling Dynamics1' */
  real_T TransferFcn2_CSTATE_j;        /* '<S118>/Transfer Fcn2' */
  real_T StateSpace_CSTATE;            /* '<S28>/State Space' */
  real_T TransferFcn4_CSTATE;          /* '<S118>/Transfer Fcn4' */
  real_T Integrator_CSTATE_j;          /* '<S243>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S174>/Integrator' */
} XPtMin_FCElectricPlant_T;

/* Continuous State Perturb Max for model 'FCElectricPlant' */
typedef struct {
  real_T TransferFcn3_CSTATE;          /* '<S118>/Transfer Fcn3' */
  real_T TransferFcn5_CSTATE;          /* '<S17>/Transfer Fcn5' */
  real_T FCElectricPlantBattery_SystemPo;/* '<S302>/INPUT_1_1_1' */
  real_T TransferFcn_CSTATE;           /* '<S125>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_m;         /* '<S194>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_b;         /* '<S138>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_be;        /* '<S205>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_g;         /* '<S261>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_e;         /* '<S124>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_gw;        /* '<S270>/Transfer Fcn' */
  real_T TransferFcn_CSTATE_d;         /* '<S127>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S118>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE_f;         /* '<S60>/Transfer Fcn' */
  real_T Integrator_CSTATE;            /* '<S98>/Integrator' */
  real_T Filter_CSTATE;                /* '<S93>/Filter' */
  real_T TransferFcn2_CSTATE;          /* '<S287>/Transfer Fcn2' */
  real_T FCElectricPlantMotorSimulink_In;/* '<S302>/INPUT_13_1_1' */
  real_T FCElectricPlantBattery_SystemBa[480];/* '<S302>/STATE_1' */
  real_T MotorCouplingDynamics1_CSTATE;/* '<S287>/Motor Coupling Dynamics1' */
  real_T TransferFcn2_CSTATE_j;        /* '<S118>/Transfer Fcn2' */
  real_T StateSpace_CSTATE;            /* '<S28>/State Space' */
  real_T TransferFcn4_CSTATE;          /* '<S118>/Transfer Fcn4' */
  real_T Integrator_CSTATE_j;          /* '<S243>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S174>/Integrator' */
} XPtMax_FCElectricPlant_T;

/* Zero-crossing (trigger) state for model 'FCElectricPlant' */
typedef struct {
  real_T Integrator_Reset_ZC;          /* '<S98>/Integrator' */
  real_T Filter_Reset_ZC;              /* '<S93>/Filter' */
  real_T Saturation_UprLim_ZC;         /* '<S105>/Saturation' */
  real_T Saturation_LwrLim_ZC;         /* '<S105>/Saturation' */
  real_T STATE_1_Battery_SystemBattery_T;/* '<S302>/STATE_1' */
  real_T STATE_1_Battery_SystemBattery_i;/* '<S302>/STATE_1' */
  real_T STATE_1_Battery_SystemBattery_n;/* '<S302>/STATE_1' */
  real_T STATE_1_Battery_SystemBattery_a;/* '<S302>/STATE_1' */
  real_T STATE_1_Battery_SystemDC_DC_Con;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellBoost_Converte;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellBoost_Conver_n;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSimsc;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_o;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_a;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_l;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_j;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_i;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_f;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_k;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_d;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_n;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ip;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_nt;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_n4;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_de;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_js;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_m;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_k3;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ka;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dn;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ad;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_om;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_b;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_g;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_p;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_f2;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_je;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_h;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_im;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_bp;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_pi;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kt;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_f5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_be;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ki;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lt;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_h1;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mc;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_oj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_pd;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mw;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kd;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ft;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_j5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dx;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ltx;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_iw;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_b5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dc;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_pu;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_do;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kb;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_oj0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_e;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_at;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lu;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jk;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_iy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_i0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ba;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kf;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_h0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_en;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_lzs;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_po;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ipt;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ng;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kk;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_a2;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fu;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_f1;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_aj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hu;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kl;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_av;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ky;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ag;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_az;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_bs;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gp;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_h05;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ge;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_k0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_dca;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_m3;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mb;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_pz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_aa;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_p5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_kdj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_kgy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ix;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_pk;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_poo;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_bh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ir;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_n5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ngp;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_g4;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_n4e;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ni;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_bg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ajv;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSim_c;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hl;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ej;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ke;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_nm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mn;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_aa5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ml;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mt;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_me;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_iv;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_nk;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_c1;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ntk;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fo;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_g3;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_hlq;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_i3;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_nc;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_kff;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lv;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_hyl;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_mzg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ff;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ci;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_lz4;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ij;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dp;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_nr;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_pin;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fb;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_py;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_pa;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_au;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_jm5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hf;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_bd;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_h3;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_he;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ox;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_m5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_iyb;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kv;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hn;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_nx;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ffy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_h5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gd;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ct;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_on;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ggd;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ak;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_b2;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_cs;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_aw;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_jsz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_kw;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_oh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_m5s;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gc;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gn;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_kwv;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_mr;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_gdm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_o5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_mtm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ht;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fl;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_e0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jy;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_bv;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ol;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_d5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_js0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_pzk;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_e5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ak2;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ax;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ei;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jb;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_l1;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_imj;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_a0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_du;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jf;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_lut;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_cm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_md;/* '<S302>/STATE_1' */
  real_T STATE_1_MotorMotorzc_1_ZC;    /* '<S302>/STATE_1' */
  real_T STATE_1_MotorMotorzc_2_ZC;    /* '<S302>/STATE_1' */
  real_T STATE_1_MotorMotorzc_3_ZC;    /* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ju;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_gew;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_n3;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_niv;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_od;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_pe;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_bb;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_nn;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_mwg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ab;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jo;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lx;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_oz;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_ox5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_hh1;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gi;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_hlt;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_mn5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dd;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_g0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_al;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_pzu;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_cg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ma;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dg;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_oe;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ev;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hk;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_gyt;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_dzr;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_dh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_dpu;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_mab;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_hkl;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_by;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_jge;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_jko;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jh;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_m3g;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_agu;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_pzf;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_nnd;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_gs;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_n4z;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_lw;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_l0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_jq;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_fm;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_hw;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellS_h54;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ce;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_c0;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_g5;/* '<S302>/STATE_1' */
  real_T STATE_1_Fuel_CellFuel_CellSi_ji;/* '<S302>/STATE_1' */
  real_T Saturation_UprLim_ZC_i;       /* '<S250>/Saturation' */
  real_T Saturation_LwrLim_ZC_o;       /* '<S250>/Saturation' */
  real_T Saturation_UprLim_ZC_p;       /* '<S181>/Saturation' */
  real_T Saturation_LwrLim_ZC_d;       /* '<S181>/Saturation' */
  real_T Saturation_UprLim_ZC_b;       /* '<S194>/Saturation' */
  real_T Saturation_LwrLim_ZC_m;       /* '<S194>/Saturation' */
} ZCV_FCElectricPlant_g_T;

/* Zero-crossing (trigger) state for model 'FCElectricPlant' */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S98>/Integrator' */
  ZCSigState Filter_Reset_ZCE;         /* '<S93>/Filter' */
} ZCE_FCElectricPlant_T;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[104];
  int_T jc[504];
  real_T pr[104];
} MassMatrix_FCElectricPlant_T;

/* Parameters (default storage) */
struct P_FCElectricPlant_T_ {
  struct_DwpI6bQuIOImzafpnoLEKE FCDCDC;/* Variable: FCDCDC
                                        * Referenced by: '<S6>/Subsystem_around_RTP_E1FEEF9A_vc'
                                        */
  real_T env_RH;                       /* Variable: env_RH
                                        * Referenced by:
                                        *   '<S123>/Subsystem_around_RTP_B9383376_RH_I'
                                        *   '<S127>/Subsystem_around_RTP_D8F5AF94_RH_I'
                                        *   '<S128>/Subsystem_around_RTP_DB717BFA_RH_I'
                                        *   '<S129>/Subsystem_around_RTP_36577BF7_RH_I'
                                        *   '<S129>/Subsystem_around_RTP_A6E86666_RH_I'
                                        */
  real_T env_T;                        /* Variable: env_T
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
  real_T env_p;                        /* Variable: env_p
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
  real_T env_yO2;                      /* Variable: env_yO2
                                        * Referenced by:
                                        *   '<S123>/Subsystem_around_RTP_B9383376_y_g_I'
                                        *   '<S127>/Subsystem_around_RTP_D8F5AF94_y_g_I'
                                        *   '<S128>/Subsystem_around_RTP_DB717BFA_y_g_I'
                                        *   '<S129>/Subsystem_around_RTP_36577BF7_y_g_I'
                                        *   '<S129>/Subsystem_around_RTP_A6E86666_y_g_I'
                                        */
  real_T stack_area;                   /* Variable: stack_area
                                        * Referenced by:
                                        *   '<S194>/Gain'
                                        *   '<S205>/Constant'
                                        */
  real_T stack_iL;                     /* Variable: stack_iL
                                        * Referenced by:
                                        *   '<S194>/Gain'
                                        *   '<S205>/Constant'
                                        */
  real_T stack_num_cells;              /* Variable: stack_num_cells
                                        * Referenced by: '<S205>/M_set'
                                        */
  real_T tank_p;                       /* Variable: tank_p
                                        * Referenced by: '<S122>/Subsystem_around_RTP_BE319BAA_p_I'
                                        */
  real_T tank_yH2;                     /* Variable: tank_yH2
                                        * Referenced by:
                                        *   '<S121>/Subsystem_around_RTP_8D120582_y_g_I'
                                        *   '<S122>/Subsystem_around_RTP_BE319BAA_y_g_I'
                                        *   '<S122>/Subsystem_around_RTP_C2A2358B_y_g_I'
                                        *   '<S124>/Subsystem_around_RTP_7FE9A967_y_g_I'
                                        *   '<S125>/Subsystem_around_RTP_AB7FE3B0_y_g_I'
                                        *   '<S126>/Subsystem_around_RTP_A30BC5AC_y_g_I'
                                        *   '<S126>/Subsystem_around_RTP_D40CF53A_y_g_I'
                                        */
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S92>/Derivative Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S95>/Integral Gain'
                                        */
  real_T PIDController_I_k;            /* Mask Parameter: PIDController_I_k
                                        * Referenced by: '<S240>/Integral Gain'
                                        */
  real_T PIDController_I_g;            /* Mask Parameter: PIDController_I_g
                                        * Referenced by: '<S171>/Integral Gain'
                                        */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S243>/Integrator'
                               */
  real_T PIDController_InitialConditio_n;
                              /* Mask Parameter: PIDController_InitialConditio_n
                               * Referenced by: '<S174>/Integrator'
                               */
  real_T PIDController_Kb;             /* Mask Parameter: PIDController_Kb
                                        * Referenced by: '<S236>/Kb'
                                        */
  real_T PIDController_Kb_i;           /* Mask Parameter: PIDController_Kb_i
                                        * Referenced by: '<S167>/Kb'
                                        */
  real_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S105>/Saturation'
                               */
  real_T PIDController_LowerSaturation_n;
                              /* Mask Parameter: PIDController_LowerSaturation_n
                               * Referenced by: '<S250>/Saturation'
                               */
  real_T PIDController_LowerSaturation_i;
                              /* Mask Parameter: PIDController_LowerSaturation_i
                               * Referenced by: '<S181>/Saturation'
                               */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S101>/Filter Coefficient'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S103>/Proportional Gain'
                                        */
  real_T PIDController_P_e;            /* Mask Parameter: PIDController_P_e
                                        * Referenced by: '<S241>/Proportional Gain'
                                        */
  real_T PIDController_P_p;            /* Mask Parameter: PIDController_P_p
                                        * Referenced by: '<S172>/Proportional Gain'
                                        */
  real_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S105>/Saturation'
                               */
  real_T PIDController_UpperSaturation_e;
                              /* Mask Parameter: PIDController_UpperSaturation_e
                               * Referenced by: '<S250>/Saturation'
                               */
  real_T PIDController_UpperSaturation_h;
                              /* Mask Parameter: PIDController_UpperSaturation_h
                               * Referenced by: '<S181>/Saturation'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S65>/Constant'
                                       */
  real_T TransferFcn3_A;               /* Computed Parameter: TransferFcn3_A
                                        * Referenced by: '<S118>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C;               /* Computed Parameter: TransferFcn3_C
                                        * Referenced by: '<S118>/Transfer Fcn3'
                                        */
  real_T TransferFcn5_A;               /* Computed Parameter: TransferFcn5_A
                                        * Referenced by: '<S17>/Transfer Fcn5'
                                        */
  real_T TransferFcn5_C;               /* Computed Parameter: TransferFcn5_C
                                        * Referenced by: '<S17>/Transfer Fcn5'
                                        */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real_T Saturation_LowerSat;         /* Expression: min(Bat.noLoadV, [], 'all')
                                       * Referenced by: '<S16>/Saturation'
                                       */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S125>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S125>/Transfer Fcn'
                                        */
  real_T TransferFcn_A_c;              /* Computed Parameter: TransferFcn_A_c
                                        * Referenced by: '<S194>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_n;              /* Computed Parameter: TransferFcn_C_n
                                        * Referenced by: '<S194>/Transfer Fcn'
                                        */
  real_T TransferFcn_A_e;              /* Computed Parameter: TransferFcn_A_e
                                        * Referenced by: '<S138>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_c;              /* Computed Parameter: TransferFcn_C_c
                                        * Referenced by: '<S138>/Transfer Fcn'
                                        */
  real_T StackPressure_Value;          /* Expression: 0.06
                                        * Referenced by: '<S122>/Stack Pressure'
                                        */
  real_T TransferFcn_A_o;              /* Computed Parameter: TransferFcn_A_o
                                        * Referenced by: '<S205>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_e;              /* Computed Parameter: TransferFcn_C_e
                                        * Referenced by: '<S205>/Transfer Fcn'
                                        */
  real_T TransferFcn_A_od;             /* Computed Parameter: TransferFcn_A_od
                                        * Referenced by: '<S261>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_h;              /* Computed Parameter: TransferFcn_C_h
                                        * Referenced by: '<S261>/Transfer Fcn'
                                        */
  real_T TransferFcn_A_i;              /* Computed Parameter: TransferFcn_A_i
                                        * Referenced by: '<S124>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_m;              /* Computed Parameter: TransferFcn_C_m
                                        * Referenced by: '<S124>/Transfer Fcn'
                                        */
  real_T TransferFcn_A_i0;             /* Computed Parameter: TransferFcn_A_i0
                                        * Referenced by: '<S270>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_k;              /* Computed Parameter: TransferFcn_C_k
                                        * Referenced by: '<S270>/Transfer Fcn'
                                        */
  real_T TransferFcn_A_p;              /* Computed Parameter: TransferFcn_A_p
                                        * Referenced by: '<S127>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_f;              /* Computed Parameter: TransferFcn_C_f
                                        * Referenced by: '<S127>/Transfer Fcn'
                                        */
  real_T StackPressure_Value_h;        /* Expression: 0.06
                                        * Referenced by: '<S128>/Stack Pressure'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<S118>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<S118>/Transfer Fcn1'
                                        */
  real_T TransferFcn_A_oz;             /* Computed Parameter: TransferFcn_A_oz
                                        * Referenced by: '<S60>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_ka;             /* Computed Parameter: TransferFcn_C_ka
                                        * Referenced by: '<S60>/Transfer Fcn'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S60>/Constant3'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: 1
                                        * Referenced by: '<S60>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0
                                        * Referenced by: '<S60>/Saturation'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<S287>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<S287>/Transfer Fcn2'
                                        */
  real_T RTP_5A418EBA_vc_Value;        /* Expression: f_fc_voltage(1)
                                        * Referenced by: '<S119>/Subsystem_around_RTP_5A418EBA_vc'
                                        */
  real_T RTP_A30BC5AC_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S126>/Subsystem_around_RTP_A30BC5AC_x_g_I'
                                        */
  real_T RTP_D40CF53A_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S126>/Subsystem_around_RTP_D40CF53A_x_g_I'
                                        */
  real_T RTP_36577BF7_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S129>/Subsystem_around_RTP_36577BF7_x_g_I'
                                        */
  real_T RTP_A6E86666_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S129>/Subsystem_around_RTP_A6E86666_x_g_I'
                                        */
  real_T RTP_AB7FE3B0_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S125>/Subsystem_around_RTP_AB7FE3B0_x_g_I'
                                        */
  real_T RTP_8D120582_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S121>/Subsystem_around_RTP_8D120582_x_g_I'
                                        */
  real_T RTP_BE319BAA_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S122>/Subsystem_around_RTP_BE319BAA_x_g_I'
                                        */
  real_T RTP_C2A2358B_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S122>/Subsystem_around_RTP_C2A2358B_x_g_I'
                                        */
  real_T RTP_B9383376_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S123>/Subsystem_around_RTP_B9383376_x_g_I'
                                        */
  real_T RTP_7FE9A967_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S124>/Subsystem_around_RTP_7FE9A967_x_g_I'
                                        */
  real_T RTP_D8F5AF94_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S127>/Subsystem_around_RTP_D8F5AF94_x_g_I'
                                        */
  real_T RTP_DB717BFA_x_g_I_Value;     /* Expression: 0
                                        * Referenced by: '<S128>/Subsystem_around_RTP_DB717BFA_x_g_I'
                                        */
  real_T RTP_0ABF9833_stateOfCharge_Valu;/* Expression: 0.6
                                          * Referenced by: '<S2>/Subsystem_around_RTP_0ABF9833_stateOfCharge'
                                          */
  real_T RTP_E1FEEF9A_iL_Value;        /* Expression: 0
                                        * Referenced by: '<S6>/Subsystem_around_RTP_E1FEEF9A_iL'
                                        */
  real_T Gain1_Gain;                   /* Expression: 100
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T MotorCouplingDynamics1_A;
                                 /* Computed Parameter: MotorCouplingDynamics1_A
                                  * Referenced by: '<S287>/Motor Coupling Dynamics1'
                                  */
  real_T MotorCouplingDynamics1_C;
                                 /* Computed Parameter: MotorCouplingDynamics1_C
                                  * Referenced by: '<S287>/Motor Coupling Dynamics1'
                                  */
  real_T TransferFcn2_A_a;             /* Computed Parameter: TransferFcn2_A_a
                                        * Referenced by: '<S118>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C_b;             /* Computed Parameter: TransferFcn2_C_b
                                        * Referenced by: '<S118>/Transfer Fcn2'
                                        */
  real_T StateSpace_A_pr;              /* Computed Parameter: StateSpace_A_pr
                                        * Referenced by: '<S28>/State Space'
                                        */
  real_T StateSpace_B_pr;              /* Computed Parameter: StateSpace_B_pr
                                        * Referenced by: '<S28>/State Space'
                                        */
  real_T StateSpace_C_pr;              /* Computed Parameter: StateSpace_C_pr
                                        * Referenced by: '<S28>/State Space'
                                        */
  real_T StateSpace_InitialCondition;  /* Expression: X0
                                        * Referenced by: '<S28>/State Space'
                                        */
  real_T Constant1_Value;              /* Expression: 50
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T TransferFcn4_A;               /* Computed Parameter: TransferFcn4_A
                                        * Referenced by: '<S118>/Transfer Fcn4'
                                        */
  real_T TransferFcn4_C;               /* Computed Parameter: TransferFcn4_C
                                        * Referenced by: '<S118>/Transfer Fcn4'
                                        */
  real_T OxygenExcessRatio_Value;      /* Expression: 2.5
                                        * Referenced by: '<S123>/Oxygen Excess Ratio'
                                        */
  real_T Constant_Value_k;             /* Expression: 0.2
                                        * Referenced by: '<S194>/Constant'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 1
                                        * Referenced by: '<S194>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: 0
                                        * Referenced by: '<S194>/Saturation'
                                        */
  real_T RelativeHumidity_Value;       /* Expression: 1
                                        * Referenced by: '<S124>/Relative Humidity'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.1
                                        * Referenced by: '<S261>/Gain'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: inf
                                        * Referenced by: '<S261>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: 0
                                        * Referenced by: '<S261>/Saturation'
                                        */
  real_T Constant_Value_km;            /* Expression: 0
                                        * Referenced by: '<S125>/Constant'
                                        */
  real_T RelativeHumidity_Value_f;     /* Expression: 1
                                        * Referenced by: '<S127>/Relative Humidity'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.1
                                        * Referenced by: '<S270>/Gain'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: inf
                                        * Referenced by: '<S270>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S270>/Saturation'
                                        */
  uint32_T StateSpace_A_ir;            /* Computed Parameter: StateSpace_A_ir
                                        * Referenced by: '<S28>/State Space'
                                        */
  uint32_T StateSpace_A_jc[2];         /* Computed Parameter: StateSpace_A_jc
                                        * Referenced by: '<S28>/State Space'
                                        */
  uint32_T StateSpace_B_ir;            /* Computed Parameter: StateSpace_B_ir
                                        * Referenced by: '<S28>/State Space'
                                        */
  uint32_T StateSpace_B_jc[2];         /* Computed Parameter: StateSpace_B_jc
                                        * Referenced by: '<S28>/State Space'
                                        */
  uint32_T StateSpace_C_ir;            /* Computed Parameter: StateSpace_C_ir
                                        * Referenced by: '<S28>/State Space'
                                        */
  uint32_T StateSpace_C_jc[2];         /* Computed Parameter: StateSpace_C_jc
                                        * Referenced by: '<S28>/State Space'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_FCElectricPlant_T {
  struct SimStruct_tag *rtS;

  /*
   * The following structure contains memory needed to
   * track noncontinuous signals feeding derivative ports.
   */
  struct {
    real_T mr_nonContSig0[1];
    real_T mr_nonContSig1[1];
    real_T mr_nonContSig2[1];
  } NonContDerivMemory;

  ssNonContDerivSigInfo nonContDerivSignal[3];
  real_T *massMatrixBasePr;
  const rtTimingBridge *timingBridge;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    int_T mdlref_GlobalTID[2];
  } Timing;
};

typedef struct {
  B_FCElectricPlant_c_T rtb;
  DW_FCElectricPlant_f_T rtdw;
  RT_MODEL_FCElectricPlant_T rtm;
  ZCE_FCElectricPlant_T rtzce;
} MdlrefDW_FCElectricPlant_T;

/* Model reference registration function */
extern void FCElectricPlant_initialize(SimStruct *const rtS, int_T mdlref_TID0,
  int_T mdlref_TID1, RT_MODEL_FCElectricPlant_T *const FCElectricPlant_M,
  B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T *localDW,
  ZCE_FCElectricPlant_T *localZCE, real_T *localMM);
extern void FCElectricPlant_Init(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T
  *localX);
extern void FCElectricPlant_Reset(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T
  *localX);
extern void FCElectricPlant_Start(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T
  *localDW, X_FCElectricPlant_n_T *localX, XPtMin_FCElectricPlant_T
  *localXPerturbMin, XPtMax_FCElectricPlant_T *localXPerturbMax);
extern void FCElectricPlant_Deriv(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, const real_T *rtu_MotSpd, B_FCElectricPlant_c_T *localB,
  DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T *localX,
  XDot_FCElectricPlant_n_T *localXdot);
extern void FCElectricPlant_Projection(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T
  *localDW, X_FCElectricPlant_n_T *localX);
extern void FCElectricPlant_ForcingFunction(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, const real_T *rtu_MotSpd, B_FCElectricPlant_c_T *localB,
  DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T *localX,
  XDot_FCElectricPlant_n_T *localXdot);
extern void FCElectricPlant_l_MassMatrix(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T
  *localDW, X_FCElectricPlant_n_T *localX);
extern void FCElectricPlant_ZC(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T
  *localDW, X_FCElectricPlant_n_T *localX, ZCV_FCElectricPlant_g_T *localZCSV);
extern void FCElectricPlant_Update(RT_MODEL_FCElectricPlant_T * const
  FCElectricPlant_M, B_FCElectricPlant_c_T *localB, DW_FCElectricPlant_f_T
  *localDW, X_FCElectricPlant_n_T *localX);
extern void FCElectricPlant(RT_MODEL_FCElectricPlant_T * const FCElectricPlant_M,
  const real_T *rtu_MotTrqCmd, const real_T *rtu_MotSpd, const real_T
  *rtu_FCCurrCmd, real_T *rty_BattSoc, real_T *rty_BattPwr, real_T *rty_BattCurr,
  real_T *rty_MotTrq, real_T *rty_FCVolt, real_T *rty_FCCurr, real_T *rty_TotPwr,
  real_T *rty_H2Flow, real_T *rty_T, B_FCElectricPlant_c_T *localB,
  DW_FCElectricPlant_f_T *localDW, X_FCElectricPlant_n_T *localX,
  ZCE_FCElectricPlant_T *localZCE);
extern void FCElectricPlant_Term(DW_FCElectricPlant_f_T *localDW);

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
 * '<Root>' : 'FCElectricPlant'
 * '<S1>'   : 'FCElectricPlant/Battery Power Accounting'
 * '<S2>'   : 'FCElectricPlant/Battery System'
 * '<S3>'   : 'FCElectricPlant/Boost Converter Power Accounting'
 * '<S4>'   : 'FCElectricPlant/Cooling System Power Analysis'
 * '<S5>'   : 'FCElectricPlant/DC-DC Converter  Power Accounting'
 * '<S6>'   : 'FCElectricPlant/Fuel Cell'
 * '<S7>'   : 'FCElectricPlant/Fuel Cell Power Accounting'
 * '<S8>'   : 'FCElectricPlant/Motor'
 * '<S9>'   : 'FCElectricPlant/Motor Power Accounting'
 * '<S10>'  : 'FCElectricPlant/Solver Configuration'
 * '<S11>'  : 'FCElectricPlant/Battery Power Accounting/Power Accounting Bus Creator'
 * '<S12>'  : 'FCElectricPlant/Battery Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S13>'  : 'FCElectricPlant/Battery Power Accounting/Power Accounting Bus Creator/PwrStored Input'
 * '<S14>'  : 'FCElectricPlant/Battery Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S15>'  : 'FCElectricPlant/Battery System/PS-Simulink Converter4'
 * '<S16>'  : 'FCElectricPlant/Battery System/Power Acc'
 * '<S17>'  : 'FCElectricPlant/Battery System/Sensor VI'
 * '<S18>'  : 'FCElectricPlant/Battery System/Sensor VI1'
 * '<S19>'  : 'FCElectricPlant/Battery System/Thermal'
 * '<S20>'  : 'FCElectricPlant/Battery System/PS-Simulink Converter4/EVAL_KEY'
 * '<S21>'  : 'FCElectricPlant/Battery System/Power Acc/Simulink-PS Converter'
 * '<S22>'  : 'FCElectricPlant/Battery System/Power Acc/Simulink-PS Converter/EVAL_KEY'
 * '<S23>'  : 'FCElectricPlant/Battery System/Sensor VI/PS-Simulink Converter2'
 * '<S24>'  : 'FCElectricPlant/Battery System/Sensor VI/PS-Simulink Converter4'
 * '<S25>'  : 'FCElectricPlant/Battery System/Sensor VI/PS-Simulink Converter2/EVAL_KEY'
 * '<S26>'  : 'FCElectricPlant/Battery System/Sensor VI/PS-Simulink Converter4/EVAL_KEY'
 * '<S27>'  : 'FCElectricPlant/Battery System/Sensor VI1/PS-Simulink Converter4'
 * '<S28>'  : 'FCElectricPlant/Battery System/Sensor VI1/Transfer Fcn (with initial outputs)'
 * '<S29>'  : 'FCElectricPlant/Battery System/Sensor VI1/PS-Simulink Converter4/EVAL_KEY'
 * '<S30>'  : 'FCElectricPlant/Battery System/Thermal/PS-Simulink Converter'
 * '<S31>'  : 'FCElectricPlant/Battery System/Thermal/PS-Simulink Converter/EVAL_KEY'
 * '<S32>'  : 'FCElectricPlant/Boost Converter Power Accounting/Power Accounting Bus Creator'
 * '<S33>'  : 'FCElectricPlant/Boost Converter Power Accounting/Power Accounting Bus Creator/No PwrStored Input'
 * '<S34>'  : 'FCElectricPlant/Boost Converter Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S35>'  : 'FCElectricPlant/Boost Converter Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S36>'  : 'FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting'
 * '<S37>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting'
 * '<S38>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting'
 * '<S39>'  : 'FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting'
 * '<S40>'  : 'FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Power Accounting Bus Creator'
 * '<S41>'  : 'FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Power Accounting Bus Creator/No PwrStored Input'
 * '<S42>'  : 'FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S43>'  : 'FCElectricPlant/Cooling System Power Analysis/Heat Exchanger Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S44>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Power Accounting Bus Creator'
 * '<S45>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Power Accounting Bus Creator/No PwrStored Input'
 * '<S46>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S47>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Converter Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S48>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Power Accounting Bus Creator'
 * '<S49>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Power Accounting Bus Creator/No PwrStored Input'
 * '<S50>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S51>'  : 'FCElectricPlant/Cooling System Power Analysis/Pipe Motor Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S52>'  : 'FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/Power Accounting Bus Creator'
 * '<S53>'  : 'FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/Power Accounting Bus Creator/No PwrStored Input'
 * '<S54>'  : 'FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S55>'  : 'FCElectricPlant/Cooling System Power Analysis/Tank Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S56>'  : 'FCElectricPlant/DC-DC Converter  Power Accounting/Power Accounting Bus Creator'
 * '<S57>'  : 'FCElectricPlant/DC-DC Converter  Power Accounting/Power Accounting Bus Creator/No PwrStored Input'
 * '<S58>'  : 'FCElectricPlant/DC-DC Converter  Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S59>'  : 'FCElectricPlant/DC-DC Converter  Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S60>'  : 'FCElectricPlant/Fuel Cell/Converter Control'
 * '<S61>'  : 'FCElectricPlant/Fuel Cell/Fuel Cell'
 * '<S62>'  : 'FCElectricPlant/Fuel Cell/PS-Simulink Converter'
 * '<S63>'  : 'FCElectricPlant/Fuel Cell/PS-Simulink Converter1'
 * '<S64>'  : 'FCElectricPlant/Fuel Cell/Simulink-PS Converter2'
 * '<S65>'  : 'FCElectricPlant/Fuel Cell/Converter Control/Compare To Constant'
 * '<S66>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller'
 * '<S67>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Anti-windup'
 * '<S68>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/D Gain'
 * '<S69>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Filter'
 * '<S70>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Filter ICs'
 * '<S71>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/I Gain'
 * '<S72>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Ideal P Gain'
 * '<S73>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Ideal P Gain Fdbk'
 * '<S74>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Integrator'
 * '<S75>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Integrator ICs'
 * '<S76>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/N Copy'
 * '<S77>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/N Gain'
 * '<S78>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/P Copy'
 * '<S79>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Parallel P Gain'
 * '<S80>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Reset Signal'
 * '<S81>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Saturation'
 * '<S82>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Saturation Fdbk'
 * '<S83>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Sum'
 * '<S84>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Sum Fdbk'
 * '<S85>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tracking Mode'
 * '<S86>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tracking Mode Sum'
 * '<S87>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tsamp - Integral'
 * '<S88>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tsamp - Ngain'
 * '<S89>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/postSat Signal'
 * '<S90>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/preSat Signal'
 * '<S91>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Anti-windup/Passthrough'
 * '<S92>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/D Gain/Internal Parameters'
 * '<S93>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Filter/Cont. Filter'
 * '<S94>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Filter ICs/External IC'
 * '<S95>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/I Gain/Internal Parameters'
 * '<S96>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Ideal P Gain/Passthrough'
 * '<S97>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S98>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Integrator/Continuous'
 * '<S99>'  : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Integrator ICs/External IC'
 * '<S100>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/N Copy/Disabled'
 * '<S101>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/N Gain/Internal Parameters'
 * '<S102>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/P Copy/Disabled'
 * '<S103>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S104>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Reset Signal/External Reset'
 * '<S105>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Saturation/Enabled'
 * '<S106>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Saturation Fdbk/Disabled'
 * '<S107>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Sum/Sum_PID'
 * '<S108>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Sum Fdbk/Disabled'
 * '<S109>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tracking Mode/Disabled'
 * '<S110>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S111>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tsamp - Integral/Passthrough'
 * '<S112>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S113>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/postSat Signal/Forward_Path'
 * '<S114>' : 'FCElectricPlant/Fuel Cell/Converter Control/PID Controller/preSat Signal/Forward_Path'
 * '<S115>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell'
 * '<S116>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Fuel Cell Stack'
 * '<S117>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Heat Dissipation'
 * '<S118>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Measurements'
 * '<S119>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Sensors'
 * '<S120>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统'
 * '<S121>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/循环泵'
 * '<S122>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氢气罐'
 * '<S123>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)'
 * '<S124>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器'
 * '<S125>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极排放(purge阀)'
 * '<S126>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极气体通道'
 * '<S127>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器'
 * '<S128>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极排放'
 * '<S129>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极气体通道'
 * '<S130>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Heat Dissipation/PS-Simulink Converter'
 * '<S131>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Heat Dissipation/PS-Simulink Converter/EVAL_KEY'
 * '<S132>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Sensors/PS-Simulink Converter1'
 * '<S133>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Sensors/PS-Simulink Converter2'
 * '<S134>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Sensors/PS-Simulink Converter1/EVAL_KEY'
 * '<S135>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/Sensors/PS-Simulink Converter2/EVAL_KEY'
 * '<S136>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Coolant Tank'
 * '<S137>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/PS-Simulink Converter'
 * '<S138>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control'
 * '<S139>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Sensors'
 * '<S140>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Simulink-PS Converter'
 * '<S141>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/PS-Simulink Converter/EVAL_KEY'
 * '<S142>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller'
 * '<S143>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Anti-windup'
 * '<S144>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/D Gain'
 * '<S145>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Filter'
 * '<S146>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Filter ICs'
 * '<S147>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/I Gain'
 * '<S148>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Ideal P Gain'
 * '<S149>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Ideal P Gain Fdbk'
 * '<S150>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Integrator'
 * '<S151>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Integrator ICs'
 * '<S152>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/N Copy'
 * '<S153>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/N Gain'
 * '<S154>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/P Copy'
 * '<S155>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Parallel P Gain'
 * '<S156>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Reset Signal'
 * '<S157>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Saturation'
 * '<S158>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Saturation Fdbk'
 * '<S159>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Sum'
 * '<S160>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Sum Fdbk'
 * '<S161>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tracking Mode'
 * '<S162>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tracking Mode Sum'
 * '<S163>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tsamp - Integral'
 * '<S164>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tsamp - Ngain'
 * '<S165>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/postSat Signal'
 * '<S166>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/preSat Signal'
 * '<S167>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Anti-windup/Back Calculation'
 * '<S168>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/D Gain/Disabled'
 * '<S169>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Filter/Disabled'
 * '<S170>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Filter ICs/Disabled'
 * '<S171>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/I Gain/Internal Parameters'
 * '<S172>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Ideal P Gain/Internal Parameters'
 * '<S173>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S174>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Integrator/Continuous'
 * '<S175>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Integrator ICs/Internal IC'
 * '<S176>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S177>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/N Gain/Disabled'
 * '<S178>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/P Copy/Disabled'
 * '<S179>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Parallel P Gain/Passthrough'
 * '<S180>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Reset Signal/Disabled'
 * '<S181>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Saturation/Enabled'
 * '<S182>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Saturation Fdbk/Disabled'
 * '<S183>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Sum/Sum_PI'
 * '<S184>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Sum Fdbk/Disabled'
 * '<S185>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tracking Mode/Disabled'
 * '<S186>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S187>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tsamp - Integral/Passthrough'
 * '<S188>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S189>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/postSat Signal/Forward_Path'
 * '<S190>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Pump Control/PID Controller/preSat Signal/Forward_Path'
 * '<S191>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Sensors/PS-Simulink Converter'
 * '<S192>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Sensors/PS-Simulink Converter/EVAL_KEY'
 * '<S193>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/冷却系统/Simulink-PS Converter/EVAL_KEY'
 * '<S194>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/循环泵/Feedforward Control'
 * '<S195>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/循环泵/Simulink-PS Converter'
 * '<S196>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/循环泵/Simulink-PS Converter/EVAL_KEY'
 * '<S197>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氢气罐/PS-Simulink Converter'
 * '<S198>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氢气罐/Pressure-Reducing Valve'
 * '<S199>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氢气罐/Simulink-PS Converter'
 * '<S200>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氢气罐/PS-Simulink Converter/EVAL_KEY'
 * '<S201>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氢气罐/Simulink-PS Converter/EVAL_KEY'
 * '<S202>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/PS-Simulink Converter'
 * '<S203>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/Sensors'
 * '<S204>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/Simulink-PS Converter'
 * '<S205>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制'
 * '<S206>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机查表'
 * '<S207>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/PS-Simulink Converter/EVAL_KEY'
 * '<S208>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/Sensors/PS-Simulink Converter'
 * '<S209>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/Sensors/PS-Simulink Converter/EVAL_KEY'
 * '<S210>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/Simulink-PS Converter/EVAL_KEY'
 * '<S211>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller'
 * '<S212>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Anti-windup'
 * '<S213>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/D Gain'
 * '<S214>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Filter'
 * '<S215>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Filter ICs'
 * '<S216>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/I Gain'
 * '<S217>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Ideal P Gain'
 * '<S218>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Ideal P Gain Fdbk'
 * '<S219>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Integrator'
 * '<S220>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Integrator ICs'
 * '<S221>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/N Copy'
 * '<S222>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/N Gain'
 * '<S223>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/P Copy'
 * '<S224>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Parallel P Gain'
 * '<S225>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Reset Signal'
 * '<S226>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Saturation'
 * '<S227>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Saturation Fdbk'
 * '<S228>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Sum'
 * '<S229>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Sum Fdbk'
 * '<S230>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tracking Mode'
 * '<S231>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tracking Mode Sum'
 * '<S232>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tsamp - Integral'
 * '<S233>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tsamp - Ngain'
 * '<S234>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/postSat Signal'
 * '<S235>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/preSat Signal'
 * '<S236>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Anti-windup/Back Calculation'
 * '<S237>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/D Gain/Disabled'
 * '<S238>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Filter/Disabled'
 * '<S239>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Filter ICs/Disabled'
 * '<S240>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/I Gain/Internal Parameters'
 * '<S241>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Ideal P Gain/Internal Parameters'
 * '<S242>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S243>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Integrator/Continuous'
 * '<S244>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Integrator ICs/Internal IC'
 * '<S245>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S246>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/N Gain/Disabled'
 * '<S247>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/P Copy/Disabled'
 * '<S248>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Parallel P Gain/Passthrough'
 * '<S249>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Reset Signal/Disabled'
 * '<S250>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Saturation/Enabled'
 * '<S251>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Saturation Fdbk/Disabled'
 * '<S252>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Sum/Sum_PI'
 * '<S253>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Sum Fdbk/Disabled'
 * '<S254>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tracking Mode/Disabled'
 * '<S255>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S256>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tsamp - Integral/Passthrough'
 * '<S257>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S258>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/postSat Signal/Forward_Path'
 * '<S259>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/氧气供给(压缩机)/压缩机控制/PID Controller/preSat Signal/Forward_Path'
 * '<S260>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器/PS-Simulink Converter'
 * '<S261>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器/Proportional Control'
 * '<S262>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器/Simulink-PS Converter'
 * '<S263>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器/Simulink-PS Converter1'
 * '<S264>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器/PS-Simulink Converter/EVAL_KEY'
 * '<S265>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器/Simulink-PS Converter/EVAL_KEY'
 * '<S266>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极加湿器/Simulink-PS Converter1/EVAL_KEY'
 * '<S267>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极排放(purge阀)/Simulink-PS Converter'
 * '<S268>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阳极排放(purge阀)/Simulink-PS Converter/EVAL_KEY'
 * '<S269>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器/PS-Simulink Converter'
 * '<S270>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器/Proportional Control'
 * '<S271>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器/Simulink-PS Converter'
 * '<S272>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器/Simulink-PS Converter1'
 * '<S273>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器/PS-Simulink Converter/EVAL_KEY'
 * '<S274>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器/Simulink-PS Converter/EVAL_KEY'
 * '<S275>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极加湿器/Simulink-PS Converter1/EVAL_KEY'
 * '<S276>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极排放/Pressure Relief Valve'
 * '<S277>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极排放/Simulink-PS Converter'
 * '<S278>' : 'FCElectricPlant/Fuel Cell/Fuel Cell/Simscape Fuel Cell/阴极排放/Simulink-PS Converter/EVAL_KEY'
 * '<S279>' : 'FCElectricPlant/Fuel Cell/PS-Simulink Converter/EVAL_KEY'
 * '<S280>' : 'FCElectricPlant/Fuel Cell/PS-Simulink Converter1/EVAL_KEY'
 * '<S281>' : 'FCElectricPlant/Fuel Cell/Simulink-PS Converter2/EVAL_KEY'
 * '<S282>' : 'FCElectricPlant/Fuel Cell Power Accounting/Power Accounting Bus Creator'
 * '<S283>' : 'FCElectricPlant/Fuel Cell Power Accounting/Power Accounting Bus Creator/No PwrStored Input'
 * '<S284>' : 'FCElectricPlant/Fuel Cell Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S285>' : 'FCElectricPlant/Fuel Cell Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S286>' : 'FCElectricPlant/Motor/Elec Sensor'
 * '<S287>' : 'FCElectricPlant/Motor/Simulink Interface'
 * '<S288>' : 'FCElectricPlant/Motor/Simulink-PS Converter3'
 * '<S289>' : 'FCElectricPlant/Motor/Elec Sensor/PS-Simulink Converter'
 * '<S290>' : 'FCElectricPlant/Motor/Elec Sensor/PS-Simulink Converter4'
 * '<S291>' : 'FCElectricPlant/Motor/Elec Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S292>' : 'FCElectricPlant/Motor/Elec Sensor/PS-Simulink Converter4/EVAL_KEY'
 * '<S293>' : 'FCElectricPlant/Motor/Simulink Interface/PS-Simulink Converter2'
 * '<S294>' : 'FCElectricPlant/Motor/Simulink Interface/Simulink-PS Converter4'
 * '<S295>' : 'FCElectricPlant/Motor/Simulink Interface/PS-Simulink Converter2/EVAL_KEY'
 * '<S296>' : 'FCElectricPlant/Motor/Simulink Interface/Simulink-PS Converter4/EVAL_KEY'
 * '<S297>' : 'FCElectricPlant/Motor/Simulink-PS Converter3/EVAL_KEY'
 * '<S298>' : 'FCElectricPlant/Motor Power Accounting/Power Accounting Bus Creator'
 * '<S299>' : 'FCElectricPlant/Motor Power Accounting/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S300>' : 'FCElectricPlant/Motor Power Accounting/Power Accounting Bus Creator/PwrStored Input'
 * '<S301>' : 'FCElectricPlant/Motor Power Accounting/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S302>' : 'FCElectricPlant/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_FCElectricPlant_h_ */
