/*
 * Code generation for system model 'DrivetrainEv'
 * For more details, see corresponding source file DrivetrainEv.c
 *
 */

#ifndef RTW_HEADER_DrivetrainEv_h_
#define RTW_HEADER_DrivetrainEv_h_
#ifndef DrivetrainEv_COMMON_INCLUDES_
#define DrivetrainEv_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#endif                                 /* DrivetrainEv_COMMON_INCLUDES_ */

#include "DrivetrainEv_types.h"
#include <string.h>
#include "rt_zcfcn.h"
#include "model_reference_types.h"
#include <stddef.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Block signals for system '<S157>/detectSlip' */
typedef struct {
  boolean_T RelationalOperator;        /* '<S169>/Relational Operator' */
} B_detectSlip_DrivetrainEv_T;

/* Block signals for system '<S157>/detectLockup' */
typedef struct {
  boolean_T CombinatorialLogic;        /* '<S165>/Combinatorial  Logic' */
} B_detectLockup_DrivetrainEv_T;

/* Block states (default storage) for system '<S157>/detectLockup' */
typedef struct {
  boolean_T UnitDelay_DSTATE;          /* '<S165>/Unit Delay' */
} DW_detectLockup_DrivetrainEv_T;

/* Block signals for system '<S157>/Slipping' */
typedef struct {
  real_T OutputInertia;                /* '<S159>/Output Inertia' */
} B_Slipping_DrivetrainEv_T;

/* Continuous states for system '<S157>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S159>/omega wheel' */
} X_Slipping_DrivetrainEv_T;

/* State derivatives for system '<S157>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S159>/omega wheel' */
} XDot_Slipping_DrivetrainEv_T;

/* State Disabled for system '<S157>/Slipping' */
typedef struct {
  boolean_T omegaWheel;                /* '<S159>/omega wheel' */
} XDis_Slipping_DrivetrainEv_T;

/* Continuous State Absolute Tolerance for system '<S157>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S159>/omega wheel' */
} XAbsTol_Slipping_DrivetrainEv_T;

/* Continuous State Perturb Min for system '<S157>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S159>/omega wheel' */
} XPtMin_Slipping_DrivetrainEv_T;

/* Continuous State Perturb Max for system '<S157>/Slipping' */
typedef struct {
  real_T omegaWheel;                   /* '<S159>/omega wheel' */
} XPtMax_Slipping_DrivetrainEv_T;

/* Block signals for system '<S152>/Clutch' */
typedef struct {
  real_T Tout;                         /* '<S152>/Clutch' */
  real_T Tfmaxs;                       /* '<S152>/Clutch' */
  real_T Tout_o;                       /* '<S152>/Clutch' */
  real_T Tfmaxs_h;                     /* '<S152>/Clutch' */
  real_T Omega;                        /* '<S152>/Clutch' */
  real_T Omegadot;                     /* '<S152>/Clutch' */
  real_T ReactionTorque;               /* '<S152>/Clutch' */
  real_T Myb;                          /* '<S152>/Clutch' */
  B_Slipping_DrivetrainEv_T Slipping;  /* '<S157>/Slipping' */
  B_detectLockup_DrivetrainEv_T detectLockup;/* '<S157>/detectLockup' */
  B_detectSlip_DrivetrainEv_T detectSlip;/* '<S157>/detectSlip' */
} B_Clutch_DrivetrainEv_T;

/* Block states (default storage) for system '<S152>/Clutch' */
typedef struct {
  real_T lastMajorTime;                /* '<S152>/Clutch' */
  int8_T TmpIfAtSlippingInport3_ActiveSu;/* synthesized block */
  int8_T TmpIfAtLockedInport2_ActiveSubs;/* synthesized block */
  uint8_T is_c8_autolibshared;         /* '<S152>/Clutch' */
  uint8_T is_active_c8_autolibshared;  /* '<S152>/Clutch' */
  boolean_T Slipping_entered;          /* '<S152>/Clutch' */
  boolean_T Locked_entered;            /* '<S152>/Clutch' */
  DW_detectLockup_DrivetrainEv_T detectLockup;/* '<S157>/detectLockup' */
} DW_Clutch_DrivetrainEv_T;

/* Continuous states for system '<S152>/Clutch' */
typedef struct {
  X_Slipping_DrivetrainEv_T Slipping;  /* '<S157>/Slipping' */
} X_Clutch_DrivetrainEv_T;

/* State derivatives for system '<S152>/Clutch' */
typedef struct {
  XDot_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XDot_Clutch_DrivetrainEv_T;

/* State Disabled for system '<S152>/Clutch' */
typedef struct {
  XDis_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XDis_Clutch_DrivetrainEv_T;

/* Continuous State Absolute Tolerance for system '<S152>/Clutch' */
typedef struct {
  XAbsTol_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XAbsTol_Clutch_DrivetrainEv_T;

/* Continuous State Perturb Min for system '<S152>/Clutch' */
typedef struct {
  XPtMin_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XPtMin_Clutch_DrivetrainEv_T;

/* Continuous State Perturb Max for system '<S152>/Clutch' */
typedef struct {
  XPtMax_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XPtMax_Clutch_DrivetrainEv_T;

/* Block signals for system '<S141>/Clutch' */
typedef struct {
  B_Clutch_DrivetrainEv_T sf_Clutch;   /* '<S152>/Clutch' */
} B_CoreSubsys_DrivetrainEv_T;

/* Block states (default storage) for system '<S141>/Clutch' */
typedef struct {
  DW_Clutch_DrivetrainEv_T sf_Clutch;  /* '<S152>/Clutch' */
} DW_CoreSubsys_DrivetrainEv_T;

/* Continuous states for system '<S141>/Clutch' */
typedef struct {
  X_Clutch_DrivetrainEv_T sf_Clutch;   /* '<S152>/Clutch' */
} X_CoreSubsys_DrivetrainEv_T;

/* State derivatives for system '<S141>/Clutch' */
typedef struct {
  XDot_Clutch_DrivetrainEv_T sf_Clutch;/* '<S152>/Clutch' */
} XDot_CoreSubsys_DrivetrainEv_T;

/* State Disabled for system '<S141>/Clutch' */
typedef struct {
  XDis_Clutch_DrivetrainEv_T sf_Clutch;/* '<S152>/Clutch' */
} XDis_CoreSubsys_DrivetrainEv_T;

/* Continuous State Absolute Tolerance for system '<S141>/Clutch' */
typedef struct {
  XAbsTol_Clutch_DrivetrainEv_T sf_Clutch;/* '<S152>/Clutch' */
} XAbsTol_CoreSubsys_Drivetrain_T;

/* Continuous State Perturb Min for system '<S141>/Clutch' */
typedef struct {
  XPtMin_Clutch_DrivetrainEv_T sf_Clutch;/* '<S152>/Clutch' */
} XPtMin_CoreSubsys_DrivetrainE_T;

/* Continuous State Perturb Max for system '<S141>/Clutch' */
typedef struct {
  XPtMax_Clutch_DrivetrainEv_T sf_Clutch;/* '<S152>/Clutch' */
} XPtMax_CoreSubsys_DrivetrainE_T;

/* Block signals for system '<S194>/Clutch' */
typedef struct {
  real_T Tout;                         /* '<S194>/Clutch' */
  real_T Tfmaxs;                       /* '<S194>/Clutch' */
  real_T Tout_n;                       /* '<S194>/Clutch' */
  real_T Tfmaxs_e;                     /* '<S194>/Clutch' */
  real_T Omega;                        /* '<S194>/Clutch' */
  real_T Omegadot;                     /* '<S194>/Clutch' */
  real_T ReactionTorque;               /* '<S194>/Clutch' */
  real_T Myb;                          /* '<S194>/Clutch' */
  B_Slipping_DrivetrainEv_T Slipping;  /* '<S199>/Slipping' */
  B_detectLockup_DrivetrainEv_T detectLockup;/* '<S199>/detectLockup' */
  B_detectSlip_DrivetrainEv_T detectSlip;/* '<S199>/detectSlip' */
} B_Clutch_DrivetrainEv_g_T;

/* Block states (default storage) for system '<S194>/Clutch' */
typedef struct {
  real_T lastMajorTime;                /* '<S194>/Clutch' */
  int8_T TmpIfAtSlippingInport3_ActiveSu;/* synthesized block */
  int8_T TmpIfAtLockedInport2_ActiveSubs;/* synthesized block */
  uint8_T is_c8_autolibshared;         /* '<S194>/Clutch' */
  uint8_T is_active_c8_autolibshared;  /* '<S194>/Clutch' */
  boolean_T Slipping_entered;          /* '<S194>/Clutch' */
  boolean_T Locked_entered;            /* '<S194>/Clutch' */
  DW_detectLockup_DrivetrainEv_T detectLockup;/* '<S199>/detectLockup' */
} DW_Clutch_DrivetrainEv_k_T;

/* Continuous states for system '<S194>/Clutch' */
typedef struct {
  X_Slipping_DrivetrainEv_T Slipping;  /* '<S157>/Slipping' */
} X_Clutch_DrivetrainEv_m_T;

/* State derivatives for system '<S194>/Clutch' */
typedef struct {
  XDot_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XDot_Clutch_DrivetrainEv_i_T;

/* State Disabled for system '<S194>/Clutch' */
typedef struct {
  XDis_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XDis_Clutch_DrivetrainEv_e_T;

/* Continuous State Absolute Tolerance for system '<S194>/Clutch' */
typedef struct {
  XAbsTol_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XAbsTol_Clutch_DrivetrainEv_g_T;

/* Continuous State Perturb Min for system '<S194>/Clutch' */
typedef struct {
  XPtMin_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XPtMin_Clutch_DrivetrainEv_j_T;

/* Continuous State Perturb Max for system '<S194>/Clutch' */
typedef struct {
  XPtMax_Slipping_DrivetrainEv_T Slipping;/* '<S157>/Slipping' */
} XPtMax_Clutch_DrivetrainEv_n_T;

/* Block signals for system '<S183>/Clutch' */
typedef struct {
  B_Clutch_DrivetrainEv_g_T sf_Clutch; /* '<S194>/Clutch' */
} B_CoreSubsys_DrivetrainEv_d_T;

/* Block states (default storage) for system '<S183>/Clutch' */
typedef struct {
  DW_Clutch_DrivetrainEv_k_T sf_Clutch;/* '<S194>/Clutch' */
} DW_CoreSubsys_DrivetrainEv_k_T;

/* Continuous states for system '<S183>/Clutch' */
typedef struct {
  X_Clutch_DrivetrainEv_m_T sf_Clutch; /* '<S194>/Clutch' */
} X_CoreSubsys_DrivetrainEv_c_T;

/* State derivatives for system '<S183>/Clutch' */
typedef struct {
  XDot_Clutch_DrivetrainEv_i_T sf_Clutch;/* '<S194>/Clutch' */
} XDot_CoreSubsys_DrivetrainE_f_T;

/* State Disabled for system '<S183>/Clutch' */
typedef struct {
  XDis_Clutch_DrivetrainEv_e_T sf_Clutch;/* '<S194>/Clutch' */
} XDis_CoreSubsys_DrivetrainE_o_T;

/* Continuous State Absolute Tolerance for system '<S183>/Clutch' */
typedef struct {
  XAbsTol_Clutch_DrivetrainEv_g_T sf_Clutch;/* '<S194>/Clutch' */
} XAbsTol_CoreSubsys_Drivetra_e_T;

/* Continuous State Perturb Min for system '<S183>/Clutch' */
typedef struct {
  XPtMin_Clutch_DrivetrainEv_j_T sf_Clutch;/* '<S194>/Clutch' */
} XPtMin_CoreSubsys_Drivetrai_a_T;

/* Continuous State Perturb Max for system '<S183>/Clutch' */
typedef struct {
  XPtMax_Clutch_DrivetrainEv_n_T sf_Clutch;/* '<S194>/Clutch' */
} XPtMax_CoreSubsys_Drivetrai_l_T;

/* Block signals for system '<S137>/Simple Magic Tire' */
typedef struct {
  real_T Fx;                           /* '<S137>/Simple Magic Tire' */
  real_T My;                           /* '<S137>/Simple Magic Tire' */
} B_SimpleMagicTire_DrivetrainE_T;

/* Block signals for system '<S75>/rotation' */
typedef struct {
  real_T psi;                          /* '<S128>/psi' */
  real_T phi;                          /* '<S128>/phi' */
} B_CoreSubsys_DrivetrainEv_o_T;

/* Block signals for model 'DrivetrainEv' */
typedef struct {
  real_T U0;                           /* '<S72>/U0' */
  real_T w0;                           /* '<S72>/w0' */
  real_T TmpSignalConversionAtUwInport2[2];
  real_T VectorConcatenate7[3];        /* '<S71>/Vector Concatenate7' */
  real_T TmpSignalConversionAtIntegrator[2];
  real_T AirTempConstant;              /* '<S70>/AirTempConstant' */
  real_T FExtConstant[3];              /* '<S70>/FExtConstant' */
  real_T MExtConstant[3];              /* '<S70>/MExtConstant' */
  real_T Y;                            /* '<S91>/Constant12' */
  real_T Constant2;                    /* '<S91>/Constant2' */
  real_T VectorConcatenate3[3];        /* '<S71>/Vector Concatenate3' */
  real_T Constant1;                    /* '<S91>/Constant1' */
  real_T VectorConcatenate[3];         /* '<S102>/Vector Concatenate' */
  real_T VectorConcatenate_d[3];       /* '<S103>/Vector Concatenate' */
  real_T q;                            /* '<S72>/q' */
  real_T VectorConcatenate4[3];        /* '<S71>/Vector Concatenate4' */
  real_T UnaryMinus;                   /* '<S75>/Unary Minus' */
  real_T Saturation;                   /* '<S141>/Saturation' */
  real_T Memory;                       /* '<S15>/Memory' */
  real_T domega_o;                     /* '<S14>/domega_o' */
  real_T Integrator;                   /* '<S170>/Integrator' */
  real_T Signconvention;               /* '<S141>/Sign convention' */
  real_T Diskbrakeactuatorbore;        /* '<S156>/Disk brake actuator bore' */
  real_T TorqueConversion1;            /* '<S156>/Torque Conversion1' */
  real_T Numberofbrakepads;            /* '<S156>/Number of brake pads' */
  real_T D;                            /* '<S148>/Constant' */
  real_T C;                            /* '<S148>/Constant1' */
  real_T B;                            /* '<S148>/Constant7' */
  real_T E;                            /* '<S148>/Constant6' */
  real_T lam_muxConstant;              /* '<S132>/lam_muxConstant' */
  real_T Constant2_p[34];              /* '<S148>/Constant2' */
  real_T kappaFx[3];                   /* '<S148>/Constant19' */
  real_T FzFx[3];                      /* '<S148>/Constant12' */
  real_T FxMap[9];                     /* '<S148>/Constant14' */
  real_T TirePrsConstant;              /* '<S132>/TirePrsConstant' */
  real_T FNOMIN;                       /* '<S149>/Constant5' */
  real_T NOMPRES;                      /* '<S149>/Constant2' */
  real_T QSY1;                         /* '<S149>/Constant13' */
  real_T QSY2;                         /* '<S149>/Constant8' */
  real_T QSY3;                         /* '<S149>/Constant15' */
  real_T QSY4;                         /* '<S149>/Constant16' */
  real_T QSY5;                         /* '<S149>/Constant7' */
  real_T QSY6;                         /* '<S149>/Constant9' */
  real_T QSY7;                         /* '<S149>/Constant17' */
  real_T QSY8;                         /* '<S149>/Constant18' */
  real_T gamma;                        /* '<S149>/Constant11' */
  real_T lam_My;                       /* '<S149>/Constant10' */
  real_T UNLOADED_RADIUS;              /* '<S149>/Constant4' */
  real_T PRESMIN;                      /* '<S149>/Constant1' */
  real_T PRESMAX;                      /* '<S149>/Constant3' */
  real_T VxMy[3];                      /* '<S149>/Constant19' */
  real_T FzMy[3];                      /* '<S149>/Constant12' */
  real_T MyMap[9];                     /* '<S149>/Constant14' */
  real_T NOMPRES_j;                    /* '<S150>/Constant14' */
  real_T PRESMIN_m;                    /* '<S150>/Constant1' */
  real_T PRESMAX_m;                    /* '<S150>/Constant19' */
  real_T VERTICAL_STIFFNESS;           /* '<S150>/Constant2' */
  real_T VERTICAL_DAMPING;             /* '<S150>/Constant3' */
  real_T Q_RE0;                        /* '<S150>/Constant4' */
  real_T Q_V1;                         /* '<S150>/Constant5' */
  real_T Q_V2;                         /* '<S150>/Constant6' */
  real_T Q_FZ1;                        /* '<S150>/Constant7' */
  real_T Q_FZ2;                        /* '<S150>/Constant8' */
  real_T Q_FCX;                        /* '<S150>/Constant9' */
  real_T Q_FCY;                        /* '<S150>/Constant10' */
  real_T Q_CAM;                        /* '<S150>/Constant11' */
  real_T PFZ1;                         /* '<S150>/Constant16' */
  real_T Q_FCY2;                       /* '<S150>/Constant17' */
  real_T Q_CAM1;                       /* '<S150>/Constant13' */
  real_T Q_CAM2;                       /* '<S150>/Constant15' */
  real_T Q_CAM3;                       /* '<S150>/Constant21' */
  real_T Q_FYS1;                       /* '<S150>/Constant22' */
  real_T Q_FYS2;                       /* '<S150>/Constant18' */
  real_T Q_FYS3;                       /* '<S150>/Constant20' */
  real_T BOTTOM_OFFST;                 /* '<S150>/Constant24' */
  real_T BOTTOM_STIFF;                 /* '<S150>/Constant23' */
  real_T FxType;                       /* '<S132>/FxType' */
  real_T rollType;                     /* '<S132>/rollType' */
  real_T vertType;                     /* '<S132>/vertType' */
  real_T Saturation_b;                 /* '<S183>/Saturation' */
  real_T Integrator_b;                 /* '<S212>/Integrator' */
  real_T Signconvention_g;             /* '<S183>/Sign convention' */
  real_T Diskbrakeactuatorbore_g;      /* '<S198>/Disk brake actuator bore' */
  real_T TorqueConversion1_e;          /* '<S198>/Torque Conversion1' */
  real_T Numberofbrakepads_d;          /* '<S198>/Number of brake pads' */
  real_T D_b;                          /* '<S190>/Constant' */
  real_T C_f;                          /* '<S190>/Constant1' */
  real_T B_h;                          /* '<S190>/Constant7' */
  real_T E_o;                          /* '<S190>/Constant6' */
  real_T lam_muxConstant_d;            /* '<S134>/lam_muxConstant' */
  real_T Constant2_b[34];              /* '<S190>/Constant2' */
  real_T kappaFx_c[3];                 /* '<S190>/Constant19' */
  real_T FzFx_n[3];                    /* '<S190>/Constant12' */
  real_T FxMap_b[9];                   /* '<S190>/Constant14' */
  real_T TirePrsConstant_j;            /* '<S134>/TirePrsConstant' */
  real_T FNOMIN_h;                     /* '<S191>/Constant5' */
  real_T NOMPRES_c;                    /* '<S191>/Constant2' */
  real_T QSY1_d;                       /* '<S191>/Constant13' */
  real_T QSY2_p;                       /* '<S191>/Constant8' */
  real_T QSY3_b;                       /* '<S191>/Constant15' */
  real_T QSY4_m;                       /* '<S191>/Constant16' */
  real_T QSY5_l;                       /* '<S191>/Constant7' */
  real_T QSY6_n;                       /* '<S191>/Constant9' */
  real_T QSY7_c;                       /* '<S191>/Constant17' */
  real_T QSY8_c;                       /* '<S191>/Constant18' */
  real_T gamma_b;                      /* '<S191>/Constant11' */
  real_T lam_My_p;                     /* '<S191>/Constant10' */
  real_T UNLOADED_RADIUS_h;            /* '<S191>/Constant4' */
  real_T PRESMIN_e;                    /* '<S191>/Constant1' */
  real_T PRESMAX_b;                    /* '<S191>/Constant3' */
  real_T VxMy_j[3];                    /* '<S191>/Constant19' */
  real_T FzMy_j[3];                    /* '<S191>/Constant12' */
  real_T MyMap_b[9];                   /* '<S191>/Constant14' */
  real_T NOMPRES_n;                    /* '<S192>/Constant14' */
  real_T PRESMIN_o;                    /* '<S192>/Constant1' */
  real_T PRESMAX_a;                    /* '<S192>/Constant19' */
  real_T VERTICAL_STIFFNESS_b;         /* '<S192>/Constant2' */
  real_T VERTICAL_DAMPING_f;           /* '<S192>/Constant3' */
  real_T Q_RE0_i;                      /* '<S192>/Constant4' */
  real_T Q_V1_m;                       /* '<S192>/Constant5' */
  real_T Q_V2_f;                       /* '<S192>/Constant6' */
  real_T Q_FZ1_h;                      /* '<S192>/Constant7' */
  real_T Q_FZ2_d;                      /* '<S192>/Constant8' */
  real_T Q_FCX_f;                      /* '<S192>/Constant9' */
  real_T Q_FCY_i;                      /* '<S192>/Constant10' */
  real_T Q_CAM_a;                      /* '<S192>/Constant11' */
  real_T PFZ1_f;                       /* '<S192>/Constant16' */
  real_T Q_FCY2_f;                     /* '<S192>/Constant17' */
  real_T Q_CAM1_n;                     /* '<S192>/Constant13' */
  real_T Q_CAM2_i;                     /* '<S192>/Constant15' */
  real_T Q_CAM3_f;                     /* '<S192>/Constant21' */
  real_T Q_FYS1_g;                     /* '<S192>/Constant22' */
  real_T Q_FYS2_i;                     /* '<S192>/Constant18' */
  real_T Q_FYS3_o;                     /* '<S192>/Constant20' */
  real_T BOTTOM_OFFST_j;               /* '<S192>/Constant24' */
  real_T BOTTOM_STIFF_p;               /* '<S192>/Constant23' */
  real_T FxType_g;                     /* '<S134>/FxType' */
  real_T rollType_c;                   /* '<S134>/rollType' */
  real_T vertType_f;                   /* '<S134>/vertType' */
  real_T Constant2_g;                  /* '<S74>/Constant2' */
  real_T Constant3;                    /* '<S74>/Constant3' */
  real_T Constant2_i;                  /* '<S81>/Constant2' */
  real_T Product3;                     /* '<S80>/Product3' */
  real_T Constant1_i;                  /* '<S81>/Constant1' */
  real_T Constant;                     /* '<S81>/Constant' */
  real_T gravity;                      /* '<S72>/gravity' */
  real_T Product[2];                   /* '<S82>/Product' */
  real_T Product_p[2];                 /* '<S72>/Product' */
  real_T Constant4[3];                 /* '<S74>/Constant4' */
  real_T Constant_m;                   /* '<S83>/Constant' */
  real_T TmpSignalConversionAtPositionIn[2];/* '<S72>/Transform  to Earth Axes' */
  real_T Constant_o;                   /* '<S118>/Constant' */
  real_T Memory_o;                     /* '<S51>/Memory' */
  real_T domega_o_p;                   /* '<S50>/domega_o' */
  real_T UnaryMinus_o;                 /* '<S50>/Unary Minus' */
  real_T Gain2;                        /* '<S59>/Gain2' */
  real_T Switch;                       /* '<S61>/Switch' */
  real_T Constant2_d;                  /* '<S154>/Constant2' */
  real_T Constant_a;                   /* '<S172>/Constant' */
  real_T Constant_ax;                  /* '<S173>/Constant' */
  real_T Constant2_a;                  /* '<S196>/Constant2' */
  real_T Constant_p;                   /* '<S214>/Constant' */
  real_T Constant_h;                   /* '<S215>/Constant' */
  real_T omega_c;                      /* '<S14>/omega_c' */
  real_T VectorConcatenate_n[2];       /* '<S26>/Vector Concatenate' */
  real_T UnaryMinus1[2];               /* '<S30>/Unary Minus1' */
  real_T Switch_p;                     /* '<S15>/Switch' */
  real_T Constant_g;                   /* '<S48>/Constant' */
  real_T diffDir;                      /* '<S30>/Switch' */
  real_T Constant_f;                   /* '<S40>/Constant' */
  real_T Constant1_c;                  /* '<S47>/Constant1' */
  real_T Constant_o3;                  /* '<S46>/Constant' */
  real_T Constant_ac;                  /* '<S38>/Constant' */
  real_T Constant1_m;                  /* '<S43>/Constant1' */
  real_T Constant_pi;                  /* '<S42>/Constant' */
  real_T Constant_n;                   /* '<S39>/Constant' */
  real_T Constant1_n;                  /* '<S45>/Constant1' */
  real_T Constant_nk;                  /* '<S44>/Constant' */
  real_T bw1;                          /* '<S26>/bw1' */
  real_T bd;                           /* '<S26>/bd' */
  real_T bw2;                          /* '<S26>/bw2' */
  real_T Ndiff2;                       /* '<S26>/Ndiff2' */
  real_T Jd;                           /* '<S26>/Jd' */
  real_T Jw1;                          /* '<S26>/Jw1' */
  real_T Jw3;                          /* '<S26>/Jw3' */
  real_T diffDir_j;                    /* '<S33>/Switch1' */
  real_T omega_c_i;                    /* '<S50>/omega_c' */
  real_T Subtract;                     /* '<S50>/Subtract' */
  real_T Product_j;                    /* '<S51>/Product' */
  real_T VectorConcatenate_l[12];      /* '<S75>/Vector Concatenate' */
  real_T UnitConversion;               /* '<S71>/Unit Conversion' */
  real_T VectorConcatenate1[4];        /* '<S75>/Vector Concatenate1' */
  real_T Selector1[3];                 /* '<S75>/Selector1' */
  real_T Gain[3];                      /* '<S75>/Gain' */
  real_T a;                            /* '<S78>/a' */
  real_T Selector2[3];                 /* '<S75>/Selector2' */
  real_T Gain1[3];                     /* '<S75>/Gain1' */
  real_T b;                            /* '<S78>/b' */
  real_T VectorConcatenate_g[6];       /* '<S71>/Vector Concatenate' */
  real_T Selector[3];                  /* '<S98>/Selector' */
  real_T MathFunction[3];              /* '<S99>/Math Function' */
  real_T SumofElements1;               /* '<S99>/Sum of Elements1' */
  real_T Sqrt;                         /* '<S99>/Sqrt' */
  real_T FrontBias;                    /* '<S6>/Front Bias' */
  real_T product;                      /* '<S156>/product' */
  real_T DisallowNegativeBrakeTorque;
                                   /* '<S156>/Disallow Negative Brake Torque' */
  real_T TorqueConversion;             /* '<S156>/Torque Conversion' */
  real_T Ratioofstatictokinetic;       /* '<S153>/Ratio of static to kinetic' */
  real_T Ratioofstatictokinetic1;     /* '<S153>/Ratio of static to kinetic1' */
  real_T Fx;                           /* '<S6>/Add' */
  real_T Selector1_e[3];               /* '<S98>/Selector1' */
  real_T MathFunction_i[3];            /* '<S100>/Math Function' */
  real_T SumofElements1_h;             /* '<S100>/Sum of Elements1' */
  real_T Sqrt_f;                       /* '<S100>/Sqrt' */
  real_T RearBias1;                    /* '<S6>/Rear Bias1' */
  real_T product_l;                    /* '<S198>/product' */
  real_T DisallowNegativeBrakeTorque_a;
                                   /* '<S198>/Disallow Negative Brake Torque' */
  real_T TorqueConversion_b;           /* '<S198>/Torque Conversion' */
  real_T Ratioofstatictokinetic_l;     /* '<S195>/Ratio of static to kinetic' */
  real_T Ratioofstatictokinetic1_c;   /* '<S195>/Ratio of static to kinetic1' */
  real_T Fx_f;                         /* '<S6>/Add1' */
  real_T VectorConcatenate12[2];       /* '<S71>/Vector Concatenate12' */
  real_T Add3;                         /* '<S78>/Add3' */
  real_T Add2;                         /* '<S78>/Add2' */
  real_T h;                            /* '<S78>/h' */
  real_T Selector_j[3];                /* '<S75>/Selector' */
  real_T Add1[3];                      /* '<S74>/Add1' */
  real_T Product_a[3];                 /* '<S74>/Product' */
  real_T SumofElements;                /* '<S74>/Sum of Elements' */
  real_T Sqrt_j;                       /* '<S74>/Sqrt' */
  real_T Product2;                     /* '<S74>/Product2' */
  real_T TrigonometricFunction;        /* '<S74>/Trigonometric Function' */
  real_T u[3];                         /* '<S74>/4' */
  real_T Tanh[3];                      /* '<S74>/Tanh' */
  real_T VectorConcatenate_e[6];       /* '<S74>/Vector Concatenate' */
  real_T Product1[6];                  /* '<S74>/Product1' */
  real_T uAPabsRT[6];                  /* '<S74>/.5.*A.*Pabs.//R.//T' */
  real_T Product4[3];                  /* '<S74>/Product4' */
  real_T Add1_l;                       /* '<S78>/Add1' */
  real_T Sum1;                         /* '<S80>/Sum1' */
  real_T Product2_d;                   /* '<S80>/Product2' */
  real_T Add1_lg;                      /* '<S76>/Add1' */
  real_T Add2_f[3];                    /* '<S71>/Add2' */
  real_T Add2_b[3];                    /* '<S74>/Add2' */
  real_T Product3_f[3];                /* '<S74>/Product3' */
  real_T Selector3[3];                 /* '<S75>/Selector3' */
  real_T Add;                          /* '<S76>/Add' */
  real_T Add5;                         /* '<S77>/Add5' */
  real_T Product1_o[2];                /* '<S72>/Product1' */
  real_T Sum[2];                       /* '<S72>/Sum' */
  real_T Sum1_j[2];                    /* '<S72>/Sum1' */
  real_T Add_p;                        /* '<S91>/Add' */
  real_T TmpSignalConversionAtsincosInpo[3];
  real_T sincos_o1[3];                 /* '<S119>/sincos' */
  real_T sincos_o2[3];                 /* '<S119>/sincos' */
  real_T VectorConcatenate_j[9];       /* '<S120>/Vector Concatenate' */
  real_T VectorConcatenate1_h[6];      /* '<S121>/Vector Concatenate1' */
  real_T VectorConcatenate10[3];       /* '<S71>/Vector Concatenate10' */
  real_T VectorConcatenate5[3];        /* '<S71>/Vector Concatenate5' */
  real_T VectorConcatenate6[3];        /* '<S71>/Vector Concatenate6' */
  real_T VectorConcatenate8[3];        /* '<S71>/Vector Concatenate8' */
  real_T Subtract_c;                   /* '<S59>/Subtract' */
  real_T Divide;                       /* '<S59>/Divide' */
  real_T Product_m;                    /* '<S154>/Product' */
  real_T Add_h;                        /* '<S154>/Add' */
  real_T Product3_c;                   /* '<S154>/Product3' */
  real_T Fcn;                          /* '<S171>/Fcn' */
  real_T Abs;                          /* '<S171>/Abs' */
  real_T Switch_j;                     /* '<S171>/Switch' */
  real_T Product2_n;                   /* '<S154>/Product2' */
  real_T Sum_g;                        /* '<S170>/Sum' */
  real_T Product_l;                    /* '<S170>/Product' */
  real_T Product_e;                    /* '<S196>/Product' */
  real_T Add_e;                        /* '<S196>/Add' */
  real_T Product3_j;                   /* '<S196>/Product3' */
  real_T Fcn_g;                        /* '<S213>/Fcn' */
  real_T Abs_b;                        /* '<S213>/Abs' */
  real_T Switch_i;                     /* '<S213>/Switch' */
  real_T Product2_c;                   /* '<S196>/Product2' */
  real_T Sum_j;                        /* '<S212>/Sum' */
  real_T Product_o;                    /* '<S212>/Product' */
  real_T Subtract_b;                   /* '<S14>/Subtract' */
  real_T Sum_d;                        /* '<S15>/Sum' */
  real_T Product_pz;                   /* '<S15>/Product' */
  real_T ImpAsg_InsertedFor_x_at_inport_[12];/* '<S128>/transform to body axes' */
  real_T ImpAsg_InsertedFor_Omega_at_inp;/* '<S194>/Clutch' */
  real_T ImpAsg_InsertedFor_Omega_at_i_d;/* '<S152>/Clutch' */
  real_T xdot[2];                      /* '<S26>/Open Differential' */
  boolean_T Compare;                   /* '<S172>/Compare' */
  boolean_T Compare_m;                 /* '<S173>/Compare' */
  boolean_T LogicalOperator;           /* '<S171>/Logical Operator' */
  boolean_T Compare_k;                 /* '<S214>/Compare' */
  boolean_T Compare_h;                 /* '<S215>/Compare' */
  boolean_T LogicalOperator_a;         /* '<S213>/Logical Operator' */
  B_CoreSubsys_DrivetrainEv_o_T CoreSubsys_c[4];/* '<S75>/rotation' */
  B_SimpleMagicTire_DrivetrainE_T sf_SimpleMagicTire_a;/* '<S179>/Simple Magic Tire' */
  B_SimpleMagicTire_DrivetrainE_T sf_SimpleMagicTire;/* '<S137>/Simple Magic Tire' */
  B_CoreSubsys_DrivetrainEv_d_T CoreSubsys_k[1];/* '<S183>/Clutch' */
  B_CoreSubsys_DrivetrainEv_T CoreSubsys[1];/* '<S141>/Clutch' */
} B_DrivetrainEv_c_T;

/* Block states (default storage) for model 'DrivetrainEv' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S15>/Memory' */
  real_T Memory_PreviousInput_d;       /* '<S51>/Memory' */
  int_T Uw_IWORK;                      /* '<S72>/U,w' */
  int_T Integrator_IWORK;              /* '<S15>/Integrator' */
  int_T Integrator_IWORK_g;            /* '<S51>/Integrator' */
  int_T Integrator_IWORK_i;            /* '<S26>/Integrator' */
  int8_T Sqrt_DWORK1;                  /* '<S99>/Sqrt' */
  int8_T Sqrt_DWORK1_l;                /* '<S100>/Sqrt' */
  int8_T Sqrt_DWORK1_f;                /* '<S74>/Sqrt' */
  DW_CoreSubsys_DrivetrainEv_k_T CoreSubsys_k[1];/* '<S183>/Clutch' */
  DW_CoreSubsys_DrivetrainEv_T CoreSubsys[1];/* '<S141>/Clutch' */
} DW_DrivetrainEv_f_T;

/* Continuous states for model 'DrivetrainEv' */
typedef struct {
  real_T Uw_CSTATE[2];                 /* '<S72>/U,w' */
  real_T Integrator_CSTATE[2];         /* '<S4>/Integrator' */
  real_T Position_CSTATE[2];           /* '<S72>/Position' */
  real_T Theta_CSTATE;                 /* '<S72>/Theta' */
  real_T q_CSTATE;                     /* '<S72>/q' */
  real_T Integrator_CSTATE_n;          /* '<S15>/Integrator' */
  real_T Integrator_CSTATE_f;          /* '<S14>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S170>/Integrator' */
  real_T Integrator_CSTATE_b;          /* '<S212>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S94>/Integrator3' */
  real_T Integrator_CSTATE_g;          /* '<S51>/Integrator' */
  real_T Integrator_CSTATE_bn;         /* '<S50>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S59>/Integrator' */
  real_T Integrator_CSTATE_gx[2];      /* '<S26>/Integrator' */
  X_CoreSubsys_DrivetrainEv_c_T CoreSubsys_k[1];/* '<S194>/CoreSubsys' */
  X_CoreSubsys_DrivetrainEv_T CoreSubsys[1];/* '<S152>/CoreSubsys' */
} X_DrivetrainEv_n_T;

/* Periodic continuous state vector (global) */
typedef int_T PeriodicIndX_DrivetrainEv_T[1];
typedef real_T PeriodicRngX_DrivetrainEv_T[2];

/* State derivatives for model 'DrivetrainEv' */
typedef struct {
  real_T Uw_CSTATE[2];                 /* '<S72>/U,w' */
  real_T Integrator_CSTATE[2];         /* '<S4>/Integrator' */
  real_T Position_CSTATE[2];           /* '<S72>/Position' */
  real_T Theta_CSTATE;                 /* '<S72>/Theta' */
  real_T q_CSTATE;                     /* '<S72>/q' */
  real_T Integrator_CSTATE_n;          /* '<S15>/Integrator' */
  real_T Integrator_CSTATE_f;          /* '<S14>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S170>/Integrator' */
  real_T Integrator_CSTATE_b;          /* '<S212>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S94>/Integrator3' */
  real_T Integrator_CSTATE_g;          /* '<S51>/Integrator' */
  real_T Integrator_CSTATE_bn;         /* '<S50>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S59>/Integrator' */
  real_T Integrator_CSTATE_gx[2];      /* '<S26>/Integrator' */
  XDot_CoreSubsys_DrivetrainE_f_T CoreSubsys_k[1];/* '<S194>/CoreSubsys' */
  XDot_CoreSubsys_DrivetrainEv_T CoreSubsys[1];/* '<S152>/CoreSubsys' */
} XDot_DrivetrainEv_n_T;

/* State Disabled for model 'DrivetrainEv' */
typedef struct {
  boolean_T Uw_CSTATE[2];              /* '<S72>/U,w' */
  boolean_T Integrator_CSTATE[2];      /* '<S4>/Integrator' */
  boolean_T Position_CSTATE[2];        /* '<S72>/Position' */
  boolean_T Theta_CSTATE;              /* '<S72>/Theta' */
  boolean_T q_CSTATE;                  /* '<S72>/q' */
  boolean_T Integrator_CSTATE_n;       /* '<S15>/Integrator' */
  boolean_T Integrator_CSTATE_f;       /* '<S14>/Integrator' */
  boolean_T Integrator_CSTATE_e;       /* '<S170>/Integrator' */
  boolean_T Integrator_CSTATE_b;       /* '<S212>/Integrator' */
  boolean_T Integrator3_CSTATE;        /* '<S94>/Integrator3' */
  boolean_T Integrator_CSTATE_g;       /* '<S51>/Integrator' */
  boolean_T Integrator_CSTATE_bn;      /* '<S50>/Integrator' */
  boolean_T Integrator_CSTATE_i;       /* '<S59>/Integrator' */
  boolean_T Integrator_CSTATE_gx[2];   /* '<S26>/Integrator' */
  XDis_CoreSubsys_DrivetrainE_o_T CoreSubsys_k[1];/* '<S194>/CoreSubsys' */
  XDis_CoreSubsys_DrivetrainEv_T CoreSubsys[1];/* '<S152>/CoreSubsys' */
} XDis_DrivetrainEv_n_T;

/* Continuous State Absolute Tolerance for model 'DrivetrainEv' */
typedef struct {
  real_T Uw_CSTATE[2];                 /* '<S72>/U,w' */
  real_T Integrator_CSTATE[2];         /* '<S4>/Integrator' */
  real_T Position_CSTATE[2];           /* '<S72>/Position' */
  real_T Theta_CSTATE;                 /* '<S72>/Theta' */
  real_T q_CSTATE;                     /* '<S72>/q' */
  real_T Integrator_CSTATE_n;          /* '<S15>/Integrator' */
  real_T Integrator_CSTATE_f;          /* '<S14>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S170>/Integrator' */
  real_T Integrator_CSTATE_b;          /* '<S212>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S94>/Integrator3' */
  real_T Integrator_CSTATE_g;          /* '<S51>/Integrator' */
  real_T Integrator_CSTATE_bn;         /* '<S50>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S59>/Integrator' */
  real_T Integrator_CSTATE_gx[2];      /* '<S26>/Integrator' */
  XAbsTol_CoreSubsys_Drivetra_e_T CoreSubsys_k[1];/* '<S194>/CoreSubsys' */
  XAbsTol_CoreSubsys_Drivetrain_T CoreSubsys[1];/* '<S152>/CoreSubsys' */
} XAbsTol_DrivetrainEv_T;

/* Continuous State Perturb Min for model 'DrivetrainEv' */
typedef struct {
  real_T Uw_CSTATE[2];                 /* '<S72>/U,w' */
  real_T Integrator_CSTATE[2];         /* '<S4>/Integrator' */
  real_T Position_CSTATE[2];           /* '<S72>/Position' */
  real_T Theta_CSTATE;                 /* '<S72>/Theta' */
  real_T q_CSTATE;                     /* '<S72>/q' */
  real_T Integrator_CSTATE_n;          /* '<S15>/Integrator' */
  real_T Integrator_CSTATE_f;          /* '<S14>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S170>/Integrator' */
  real_T Integrator_CSTATE_b;          /* '<S212>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S94>/Integrator3' */
  real_T Integrator_CSTATE_g;          /* '<S51>/Integrator' */
  real_T Integrator_CSTATE_bn;         /* '<S50>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S59>/Integrator' */
  real_T Integrator_CSTATE_gx[2];      /* '<S26>/Integrator' */
  XPtMin_CoreSubsys_Drivetrai_a_T CoreSubsys_k[1];/* '<S194>/CoreSubsys' */
  XPtMin_CoreSubsys_DrivetrainE_T CoreSubsys[1];/* '<S152>/CoreSubsys' */
} XPtMin_DrivetrainEv_T;

/* Continuous State Perturb Max for model 'DrivetrainEv' */
typedef struct {
  real_T Uw_CSTATE[2];                 /* '<S72>/U,w' */
  real_T Integrator_CSTATE[2];         /* '<S4>/Integrator' */
  real_T Position_CSTATE[2];           /* '<S72>/Position' */
  real_T Theta_CSTATE;                 /* '<S72>/Theta' */
  real_T q_CSTATE;                     /* '<S72>/q' */
  real_T Integrator_CSTATE_n;          /* '<S15>/Integrator' */
  real_T Integrator_CSTATE_f;          /* '<S14>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S170>/Integrator' */
  real_T Integrator_CSTATE_b;          /* '<S212>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S94>/Integrator3' */
  real_T Integrator_CSTATE_g;          /* '<S51>/Integrator' */
  real_T Integrator_CSTATE_bn;         /* '<S50>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S59>/Integrator' */
  real_T Integrator_CSTATE_gx[2];      /* '<S26>/Integrator' */
  XPtMax_CoreSubsys_Drivetrai_l_T CoreSubsys_k[1];/* '<S194>/CoreSubsys' */
  XPtMax_CoreSubsys_DrivetrainE_T CoreSubsys[1];/* '<S152>/CoreSubsys' */
} XPtMax_DrivetrainEv_T;

/* Zero-crossing (trigger) state for model 'DrivetrainEv' */
typedef struct {
  real_T Integrator_Reset_ZC;          /* '<S15>/Integrator' */
  real_T Integrator_Reset_ZC_k;        /* '<S51>/Integrator' */
} ZCV_DrivetrainEv_g_T;

/* Zero-crossing (trigger) state for model 'DrivetrainEv' */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S15>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_h;   /* '<S51>/Integrator' */
} ZCE_DrivetrainEv_T;

/* Parameters for system: '<S157>/detectSlip' */
struct P_detectSlip_DrivetrainEv_T_ {
  boolean_T yn_Y0;                     /* Computed Parameter: yn_Y0
                                        * Referenced by: '<S161>/yn'
                                        */
};

/* Parameters for system: '<S157>/detectLockup' */
struct P_detectLockup_DrivetrainEv_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S160>/Constant'
                                        */
  boolean_T yn_Y0;                     /* Computed Parameter: yn_Y0
                                        * Referenced by: '<S160>/yn'
                                        */
  boolean_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S165>/Unit Delay'
                                */
  boolean_T CombinatorialLogic_table[8];
                                 /* Computed Parameter: CombinatorialLogic_table
                                  * Referenced by: '<S165>/Combinatorial  Logic'
                                  */
};

/* Parameters for system: '<S157>/Locked' */
struct P_Locked_DrivetrainEv_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S158>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S158>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S158>/Constant2'
                                        */
};

/* Parameters for system: '<S157>/Slipping' */
struct P_Slipping_DrivetrainEv_T_ {
  real_T u_Gain;                       /* Expression: -4
                                        * Referenced by: '<S159>/-4'
                                        */
};

/* Parameters for system: '<S152>/Clutch' */
struct P_Clutch_DrivetrainEv_T_ {
  P_Slipping_DrivetrainEv_T Slipping;  /* '<S157>/Slipping' */
  P_Locked_DrivetrainEv_T Locked;      /* '<S157>/Locked' */
  P_detectLockup_DrivetrainEv_T detectLockup;/* '<S157>/detectLockup' */
  P_detectSlip_DrivetrainEv_T detectSlip;/* '<S157>/detectSlip' */
};

/* Parameters for system: '<S141>/Clutch' */
struct P_CoreSubsys_DrivetrainEv_T_ {
  P_Clutch_DrivetrainEv_T sf_Clutch;   /* '<S152>/Clutch' */
};

/* Parameters for system: '<S194>/Clutch' */
struct P_Clutch_DrivetrainEv_b_T_ {
  P_Slipping_DrivetrainEv_T Slipping;  /* '<S199>/Slipping' */
  P_Locked_DrivetrainEv_T Locked;      /* '<S199>/Locked' */
  P_detectLockup_DrivetrainEv_T detectLockup;/* '<S199>/detectLockup' */
  P_detectSlip_DrivetrainEv_T detectSlip;/* '<S199>/detectSlip' */
};

/* Parameters for system: '<S183>/Clutch' */
struct P_CoreSubsys_DrivetrainEv_i_T_ {
  P_Clutch_DrivetrainEv_b_T sf_Clutch; /* '<S194>/Clutch' */
};

/* Parameters for system: '<S75>/rotation' */
struct P_CoreSubsys_DrivetrainEv_o_T_ {
  real_T psi_Value;                    /* Expression: 0
                                        * Referenced by: '<S128>/psi'
                                        */
  real_T phi_Value;                    /* Expression: 0
                                        * Referenced by: '<S128>/phi'
                                        */
};

/* Parameters (default storage) */
struct P_DrivetrainEv_T_ {
  real_T Af;                           /* Variable: Af
                                        * Referenced by: '<S74>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T Cd;                           /* Variable: Cd
                                        * Referenced by: '<S74>/Constant'
                                        */
  real_T Cl;                           /* Variable: Cl
                                        * Referenced by: '<S74>/Constant1'
                                        */
  real_T Cpm;                          /* Variable: Cpm
                                        * Referenced by: '<S74>/Constant2'
                                        */
  real_T FZMAX;                        /* Variable: FZMAX
                                        * Referenced by:
                                        *   '<S137>/Simple Magic Tire'
                                        *   '<S179>/Simple Magic Tire'
                                        */
  real_T FZMIN;                        /* Variable: FZMIN
                                        * Referenced by:
                                        *   '<S137>/Simple Magic Tire'
                                        *   '<S179>/Simple Magic Tire'
                                        */
  real_T FsbF[7];                      /* Variable: FsbF
                                        * Referenced by: '<S79>/Damping - Front'
                                        */
  real_T FsbR[7];                      /* Variable: FsbR
                                        * Referenced by: '<S79>/Ramping - Rear'
                                        */
  real_T FskF[6];                      /* Variable: FskF
                                        * Referenced by: '<S79>/Stiffness - Front'
                                        */
  real_T FskR[6];                      /* Variable: FskR
                                        * Referenced by: '<S79>/Stiffness - Rear'
                                        */
  real_T Iyy;                          /* Variable: Iyy
                                        * Referenced by: '<S81>/Constant1'
                                        */
  real_T Iyy_Whl;                      /* Variable: Iyy_Whl
                                        * Referenced by:
                                        *   '<S159>/Output Inertia'
                                        *   '<S201>/Output Inertia'
                                        */
  real_T Jd;                           /* Variable: Jd
                                        * Referenced by: '<S26>/Jd'
                                        */
  real_T Jmotor;                       /* Variable: Jmotor
                                        * Referenced by: '<S58>/J'
                                        */
  real_T Jw1;                          /* Variable: Jw1
                                        * Referenced by: '<S26>/Jw1'
                                        */
  real_T Jw2;                          /* Variable: Jw2
                                        * Referenced by: '<S26>/Jw3'
                                        */
  real_T Lrel;                         /* Variable: Lrel
                                        * Referenced by:
                                        *   '<S154>/Constant2'
                                        *   '<S196>/Constant2'
                                        */
  real_T Mass;                         /* Variable: Mass
                                        * Referenced by:
                                        *   '<S75>/m'
                                        *   '<S81>/Constant'
                                        */
  real_T Ndiff;                        /* Variable: Ndiff
                                        * Referenced by:
                                        *   '<S26>/Ndiff2'
                                        *   '<S30>/Gain'
                                        *   '<S33>/Gain1'
                                        */
  real_T Pabs;                         /* Variable: Pabs
                                        * Referenced by: '<S74>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T Re;                           /* Variable: Re
                                        * Referenced by:
                                        *   '<S141>/Constant9'
                                        *   '<S183>/Constant9'
                                        *   '<S152>/Clutch'
                                        *   '<S194>/Clutch'
                                        */
  real_T Rm;                           /* Variable: Rm
                                        * Referenced by:
                                        *   '<S156>/Torque Conversion'
                                        *   '<S198>/Torque Conversion'
                                        */
  real_T T;                            /* Variable: T
                                        * Referenced by: '<S70>/AirTempConstant'
                                        */
  real_T UNLOADED_RADIUS;              /* Variable: UNLOADED_RADIUS
                                        * Referenced by:
                                        *   '<S149>/Constant4'
                                        *   '<S191>/Constant4'
                                        */
  real_T VXLOW;                        /* Variable: VXLOW
                                        * Referenced by:
                                        *   '<S137>/Simple Magic Tire'
                                        *   '<S179>/Simple Magic Tire'
                                        *   '<S152>/Clutch'
                                        *   '<S194>/Clutch'
                                        *   '<S172>/Constant'
                                        *   '<S173>/Constant'
                                        *   '<S214>/Constant'
                                        *   '<S215>/Constant'
                                        */
  real_T aMy;                          /* Variable: aMy
                                        * Referenced by:
                                        *   '<S149>/Constant13'
                                        *   '<S191>/Constant13'
                                        */
  real_T a_CG;                         /* Variable: a_CG
                                        * Referenced by:
                                        *   '<S74>/Constant3'
                                        *   '<S78>/a'
                                        *   '<S102>/R_T1'
                                        */
  real_T alphaMy;                      /* Variable: alphaMy
                                        * Referenced by:
                                        *   '<S149>/Constant18'
                                        *   '<S191>/Constant18'
                                        */
  real_T b;                            /* Variable: b
                                        * Referenced by:
                                        *   '<S50>/Gain2'
                                        *   '<S14>/Gain2'
                                        */
  real_T bMy;                          /* Variable: bMy
                                        * Referenced by:
                                        *   '<S149>/Constant8'
                                        *   '<S191>/Constant8'
                                        */
  real_T b_CG;                         /* Variable: b_CG
                                        * Referenced by:
                                        *   '<S74>/Constant3'
                                        *   '<S78>/b'
                                        *   '<S103>/R_T1'
                                        */
  real_T bd;                           /* Variable: bd
                                        * Referenced by: '<S26>/bd'
                                        */
  real_T betaMy;                       /* Variable: betaMy
                                        * Referenced by:
                                        *   '<S149>/Constant17'
                                        *   '<S191>/Constant17'
                                        */
  real_T br;                           /* Variable: br
                                        * Referenced by:
                                        *   '<S159>/Output Damping'
                                        *   '<S201>/Output Damping'
                                        *   '<S166>/Output Damping'
                                        *   '<S208>/Output Damping'
                                        */
  real_T bw1;                          /* Variable: bw1
                                        * Referenced by: '<S26>/bw1'
                                        */
  real_T bw2;                          /* Variable: bw2
                                        * Referenced by: '<S26>/bw2'
                                        */
  real_T cMy;                          /* Variable: cMy
                                        * Referenced by:
                                        *   '<S149>/Constant15'
                                        *   '<S191>/Constant15'
                                        */
  real_T disk_abore;                   /* Variable: disk_abore
                                        * Referenced by:
                                        *   '<S156>/Disk brake actuator bore'
                                        *   '<S198>/Disk brake actuator bore'
                                        */
  real_T domega_o;                     /* Variable: domega_o
                                        * Referenced by:
                                        *   '<S50>/domega_o'
                                        *   '<S14>/domega_o'
                                        */
  real_T dzdotsF[7];                   /* Variable: dzdotsF
                                        * Referenced by: '<S79>/Damping - Front'
                                        */
  real_T dzdotsR[7];                   /* Variable: dzdotsR
                                        * Referenced by: '<S79>/Ramping - Rear'
                                        */
  real_T dzsF[6];                      /* Variable: dzsF
                                        * Referenced by: '<S79>/Stiffness - Front'
                                        */
  real_T dzsR[6];                      /* Variable: dzsR
                                        * Referenced by: '<S79>/Stiffness - Rear'
                                        */
  real_T g;                            /* Variable: g
                                        * Referenced by: '<S75>/g'
                                        */
  real_T h;                            /* Variable: h
                                        * Referenced by:
                                        *   '<S78>/h'
                                        *   '<S102>/R_T3'
                                        *   '<S103>/R_T3'
                                        */
  real_T k;                            /* Variable: k
                                        * Referenced by:
                                        *   '<S50>/Gain1'
                                        *   '<S14>/Gain1'
                                        */
  real_T kappamax;                     /* Variable: kappamax
                                        * Referenced by:
                                        *   '<S137>/Simple Magic Tire'
                                        *   '<S179>/Simple Magic Tire'
                                        */
  real_T lam_x;                        /* Variable: lam_x
                                        * Referenced by:
                                        *   '<S132>/lam_muxConstant'
                                        *   '<S134>/lam_muxConstant'
                                        */
  real_T mu_kinetic;                   /* Variable: mu_kinetic
                                        * Referenced by:
                                        *   '<S153>/Ratio of static to kinetic'
                                        *   '<S153>/Ratio of static to kinetic1'
                                        *   '<S195>/Ratio of static to kinetic'
                                        *   '<S195>/Ratio of static to kinetic1'
                                        *   '<S156>/Torque Conversion'
                                        *   '<S198>/Torque Conversion'
                                        */
  real_T mu_static;                    /* Variable: mu_static
                                        * Referenced by:
                                        *   '<S153>/Ratio of static to kinetic'
                                        *   '<S195>/Ratio of static to kinetic'
                                        */
  real_T num_pads;                     /* Variable: num_pads
                                        * Referenced by:
                                        *   '<S156>/Number of brake pads'
                                        *   '<S198>/Number of brake pads'
                                        */
  real_T omega_c;                      /* Variable: omega_c
                                        * Referenced by:
                                        *   '<S50>/omega_c'
                                        *   '<S14>/omega_c'
                                        */
  real_T omega_o;                      /* Variable: omega_o
                                        * Referenced by: '<S59>/Integrator'
                                        */
  real_T omegao;                       /* Variable: omegao
                                        * Referenced by:
                                        *   '<S152>/Clutch'
                                        *   '<S194>/Clutch'
                                        *   '<S159>/omega wheel'
                                        *   '<S201>/omega wheel'
                                        */
  real_T omegaw1o;                     /* Variable: omegaw1o
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T omegaw2o;                     /* Variable: omegaw2o
                                        * Referenced by: '<S26>/Constant1'
                                        */
  real_T press;                        /* Variable: press
                                        * Referenced by:
                                        *   '<S132>/TirePrsConstant'
                                        *   '<S134>/TirePrsConstant'
                                        */
  real_T q_o;                          /* Variable: q_o
                                        * Referenced by: '<S72>/q'
                                        */
  real_T theta_o;                      /* Variable: theta_o
                                        * Referenced by:
                                        *   '<S50>/Integrator'
                                        *   '<S14>/Integrator'
                                        */
  real_T theta_o_Veh;                  /* Variable: theta_o_Veh
                                        * Referenced by: '<S72>/Theta'
                                        */
  real_T xdot_o;                       /* Variable: xdot_o
                                        * Referenced by:
                                        *   '<S72>/U0'
                                        *   '<S72>/w0'
                                        *   '<S94>/Integrator3'
                                        */
  real_T zdot_o;                       /* Variable: zdot_o
                                        * Referenced by:
                                        *   '<S72>/U0'
                                        *   '<S72>/w0'
                                        */
  real_T DragForce_Cs[2];              /* Mask Parameter: DragForce_Cs
                                        * Referenced by: '<S74>/Cs'
                                        */
  real_T DragForce_Cym[2];             /* Mask Parameter: DragForce_Cym
                                        * Referenced by: '<S74>/Cym'
                                        */
  real_T DragForce_R;                  /* Mask Parameter: DragForce_R
                                        * Referenced by: '<S74>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T HardPointCoordinateTransformFro;
                              /* Mask Parameter: HardPointCoordinateTransformFro
                               * Referenced by: '<S102>/R_T2'
                               */
  real_T HardPointCoordinateTransformRea;
                              /* Mask Parameter: HardPointCoordinateTransformRea
                               * Referenced by: '<S103>/R_T2'
                               */
  real_T RotationalInertia_b;          /* Mask Parameter: RotationalInertia_b
                                        * Referenced by: '<S59>/Gain2'
                                        */
  real_T DragForce_beta_w[2];          /* Mask Parameter: DragForce_beta_w
                                        * Referenced by:
                                        *   '<S74>/Cs'
                                        *   '<S74>/Cym'
                                        */
  real_T OpenDifferential_eta;         /* Mask Parameter: OpenDifferential_eta
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T uDOFBodyAxes_g;               /* Mask Parameter: uDOFBodyAxes_g
                                        * Referenced by: '<S72>/gravity'
                                        */
  real_T uDOFBodyAxes_pos_ini[2];      /* Mask Parameter: uDOFBodyAxes_pos_ini
                                        * Referenced by: '<S72>/Position'
                                        */
  real_T div0protectabspoly_thresh; /* Mask Parameter: div0protectabspoly_thresh
                                     * Referenced by:
                                     *   '<S68>/Constant'
                                     *   '<S69>/Constant'
                                     */
  real_T uDOFBodyAxes_v_ini;           /* Mask Parameter: uDOFBodyAxes_v_ini
                                        * Referenced by:
                                        *   '<S72>/U0'
                                        *   '<S72>/w0'
                                        */
  real_T OpenDifferential_shaftSwitchMas;/* Expression: shaftSwitchMask
                                          * Referenced by: '<S26>/Open Differential'
                                          */
  real_T Gain_Gain[3];                 /* Expression: [-1,1,1]
                                        * Referenced by: '<S75>/Gain'
                                        */
  real_T Gain1_Gain[3];                /* Expression: [-1,1,1]
                                        * Referenced by: '<S75>/Gain1'
                                        */
  real_T uNF_Gain;                     /* Expression: 1/NF
                                        * Referenced by: '<S98>/1//NF'
                                        */
  real_T FrontBias_Gain;               /* Expression: 0.6
                                        * Referenced by: '<S6>/Front Bias'
                                        */
  real_T DisallowNegativeBrakeTorque_Upp;/* Expression: inf
                                          * Referenced by: '<S156>/Disallow Negative Brake Torque'
                                          */
  real_T DisallowNegativeBrakeTorque_Low;/* Expression: eps
                                          * Referenced by: '<S156>/Disallow Negative Brake Torque'
                                          */
  real_T uNR_Gain;                     /* Expression: 1/NR
                                        * Referenced by: '<S98>/1//NR'
                                        */
  real_T RearBias1_Gain;               /* Expression: 0.4
                                        * Referenced by: '<S6>/Rear Bias1'
                                        */
  real_T DisallowNegativeBrakeTorque_U_n;/* Expression: inf
                                          * Referenced by: '<S198>/Disallow Negative Brake Torque'
                                          */
  real_T DisallowNegativeBrakeTorque_L_e;/* Expression: eps
                                          * Referenced by: '<S198>/Disallow Negative Brake Torque'
                                          */
  real_T Crm_tableData[2];             /* Expression: [0 0]
                                        * Referenced by: '<S74>/Crm'
                                        */
  real_T Crm_bp01Data[2];              /* Expression: [-1 1]
                                        * Referenced by: '<S74>/Crm'
                                        */
  real_T u_Gain[3];                    /* Expression: [4.*ones(2,1); 0]
                                        * Referenced by: '<S74>/4'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T FExtConstant_Value[3];        /* Expression: [0,0,0]
                                        * Referenced by: '<S70>/FExtConstant'
                                        */
  real_T MExtConstant_Value[3];        /* Expression: [0,0,0]
                                        * Referenced by: '<S70>/MExtConstant'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S91>/Constant12'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S91>/Constant2'
                                        */
  real_T Theta_WrappedStateUpperValue; /* Expression: pi
                                        * Referenced by: '<S72>/Theta'
                                        */
  real_T Theta_WrappedStateLowerValue; /* Expression: -pi
                                        * Referenced by: '<S72>/Theta'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S91>/Constant1'
                                        */
  real_T NFNR_Gain[2];                 /* Expression: [NF,NR]
                                        * Referenced by: '<S79>/[NF,NR]'
                                        */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S141>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: eps
                                        * Referenced by: '<S141>/Saturation'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S15>/Memory'
                                        */
  real_T Integrator_IC_c;              /* Expression: 0
                                        * Referenced by: '<S170>/Integrator'
                                        */
  real_T Signconvention_Gain;          /* Expression: -1
                                        * Referenced by: '<S141>/Sign convention'
                                        */
  real_T TorqueConversion1_Gain;       /* Expression: pi/4
                                        * Referenced by: '<S156>/Torque Conversion1'
                                        */
  real_T Constant_Value;               /* Expression: D
                                        * Referenced by: '<S148>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: C
                                        * Referenced by: '<S148>/Constant1'
                                        */
  real_T Constant7_Value;              /* Expression: B
                                        * Referenced by: '<S148>/Constant7'
                                        */
  real_T Constant6_Value;              /* Expression: E
                                        * Referenced by: '<S148>/Constant6'
                                        */
  real_T Constant2_Value_c[34];        /* Expression: zeros(34,1)
                                        * Referenced by: '<S148>/Constant2'
                                        */
  real_T Constant19_Value[3];          /* Expression: zeros(1,3)
                                        * Referenced by: '<S148>/Constant19'
                                        */
  real_T Constant12_Value_p[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S148>/Constant12'
                                        */
  real_T Constant14_Value[9];          /* Expression: zeros(3,3)
                                        * Referenced by: '<S148>/Constant14'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S149>/Constant5'
                                        */
  real_T Constant2_Value_l;            /* Expression: 0
                                        * Referenced by: '<S149>/Constant2'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S149>/Constant16'
                                        */
  real_T Constant7_Value_g;            /* Expression: 0
                                        * Referenced by: '<S149>/Constant7'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S149>/Constant9'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S149>/Constant11'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S149>/Constant10'
                                        */
  real_T Constant1_Value_o;            /* Expression: PRESMIN
                                        * Referenced by: '<S149>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: PRESMAX
                                        * Referenced by: '<S149>/Constant3'
                                        */
  real_T Constant19_Value_n[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S149>/Constant19'
                                        */
  real_T Constant12_Value_p5[3];       /* Expression: zeros(1,3)
                                        * Referenced by: '<S149>/Constant12'
                                        */
  real_T Constant14_Value_a[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S149>/Constant14'
                                        */
  real_T Constant14_Value_i;           /* Expression: 0
                                        * Referenced by: '<S150>/Constant14'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S150>/Constant1'
                                        */
  real_T Constant19_Value_a;           /* Expression: 0
                                        * Referenced by: '<S150>/Constant19'
                                        */
  real_T Constant2_Value_lu;           /* Expression: 0
                                        * Referenced by: '<S150>/Constant2'
                                        */
  real_T Constant3_Value_h;            /* Expression: 0
                                        * Referenced by: '<S150>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S150>/Constant4'
                                        */
  real_T Constant5_Value_c;            /* Expression: 0
                                        * Referenced by: '<S150>/Constant5'
                                        */
  real_T Constant6_Value_p;            /* Expression: 0
                                        * Referenced by: '<S150>/Constant6'
                                        */
  real_T Constant7_Value_a;            /* Expression: 0
                                        * Referenced by: '<S150>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S150>/Constant8'
                                        */
  real_T Constant9_Value_f;            /* Expression: 0
                                        * Referenced by: '<S150>/Constant9'
                                        */
  real_T Constant10_Value_m;           /* Expression: 0
                                        * Referenced by: '<S150>/Constant10'
                                        */
  real_T Constant11_Value_c;           /* Expression: 0
                                        * Referenced by: '<S150>/Constant11'
                                        */
  real_T Constant16_Value_n;           /* Expression: 0
                                        * Referenced by: '<S150>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant17'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant13'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant15'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant22'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant18'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant20'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant24'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S150>/Constant23'
                                        */
  real_T FxType_Value;                 /* Expression: 0
                                        * Referenced by: '<S132>/FxType'
                                        */
  real_T rollType_Value;               /* Expression: 1
                                        * Referenced by: '<S132>/rollType'
                                        */
  real_T vertType_Value;               /* Expression: 0
                                        * Referenced by: '<S132>/vertType'
                                        */
  real_T Saturation_UpperSat_a;        /* Expression: inf
                                        * Referenced by: '<S183>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: eps
                                        * Referenced by: '<S183>/Saturation'
                                        */
  real_T Integrator_IC_i;              /* Expression: 0
                                        * Referenced by: '<S212>/Integrator'
                                        */
  real_T Signconvention_Gain_i;        /* Expression: -1
                                        * Referenced by: '<S183>/Sign convention'
                                        */
  real_T TorqueConversion1_Gain_d;     /* Expression: pi/4
                                        * Referenced by: '<S198>/Torque Conversion1'
                                        */
  real_T Constant_Value_j;             /* Expression: D
                                        * Referenced by: '<S190>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: C
                                        * Referenced by: '<S190>/Constant1'
                                        */
  real_T Constant7_Value_p;            /* Expression: B
                                        * Referenced by: '<S190>/Constant7'
                                        */
  real_T Constant6_Value_k;            /* Expression: E
                                        * Referenced by: '<S190>/Constant6'
                                        */
  real_T Constant2_Value_a[34];        /* Expression: zeros(34,1)
                                        * Referenced by: '<S190>/Constant2'
                                        */
  real_T Constant19_Value_l[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S190>/Constant19'
                                        */
  real_T Constant12_Value_e[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S190>/Constant12'
                                        */
  real_T Constant14_Value_b[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S190>/Constant14'
                                        */
  real_T Constant5_Value_co;           /* Expression: 0
                                        * Referenced by: '<S191>/Constant5'
                                        */
  real_T Constant2_Value_g;            /* Expression: 0
                                        * Referenced by: '<S191>/Constant2'
                                        */
  real_T Constant16_Value_d;           /* Expression: 0
                                        * Referenced by: '<S191>/Constant16'
                                        */
  real_T Constant7_Value_i;            /* Expression: 0
                                        * Referenced by: '<S191>/Constant7'
                                        */
  real_T Constant9_Value_m;            /* Expression: 0
                                        * Referenced by: '<S191>/Constant9'
                                        */
  real_T Constant11_Value_p;           /* Expression: 0
                                        * Referenced by: '<S191>/Constant11'
                                        */
  real_T Constant10_Value_b;           /* Expression: 0
                                        * Referenced by: '<S191>/Constant10'
                                        */
  real_T Constant1_Value_l;            /* Expression: PRESMIN
                                        * Referenced by: '<S191>/Constant1'
                                        */
  real_T Constant3_Value_i;            /* Expression: PRESMAX
                                        * Referenced by: '<S191>/Constant3'
                                        */
  real_T Constant19_Value_c[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S191>/Constant19'
                                        */
  real_T Constant12_Value_j[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S191>/Constant12'
                                        */
  real_T Constant14_Value_bm[9];       /* Expression: zeros(3,3)
                                        * Referenced by: '<S191>/Constant14'
                                        */
  real_T Constant14_Value_i4;          /* Expression: 0
                                        * Referenced by: '<S192>/Constant14'
                                        */
  real_T Constant1_Value_dn;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant1'
                                        */
  real_T Constant19_Value_o;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant19'
                                        */
  real_T Constant2_Value_lq;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant2'
                                        */
  real_T Constant3_Value_n;            /* Expression: 0
                                        * Referenced by: '<S192>/Constant3'
                                        */
  real_T Constant4_Value_b;            /* Expression: 0
                                        * Referenced by: '<S192>/Constant4'
                                        */
  real_T Constant5_Value_i;            /* Expression: 0
                                        * Referenced by: '<S192>/Constant5'
                                        */
  real_T Constant6_Value_g;            /* Expression: 0
                                        * Referenced by: '<S192>/Constant6'
                                        */
  real_T Constant7_Value_n;            /* Expression: 0
                                        * Referenced by: '<S192>/Constant7'
                                        */
  real_T Constant8_Value_f;            /* Expression: 0
                                        * Referenced by: '<S192>/Constant8'
                                        */
  real_T Constant9_Value_d;            /* Expression: 0
                                        * Referenced by: '<S192>/Constant9'
                                        */
  real_T Constant10_Value_d;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant10'
                                        */
  real_T Constant11_Value_pi;          /* Expression: 0
                                        * Referenced by: '<S192>/Constant11'
                                        */
  real_T Constant16_Value_m;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant16'
                                        */
  real_T Constant17_Value_f;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant17'
                                        */
  real_T Constant13_Value_d;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant13'
                                        */
  real_T Constant15_Value_f;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant15'
                                        */
  real_T Constant21_Value_e;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant21'
                                        */
  real_T Constant22_Value_k;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant22'
                                        */
  real_T Constant18_Value_n;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant18'
                                        */
  real_T Constant20_Value_h;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant20'
                                        */
  real_T Constant24_Value_b;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant24'
                                        */
  real_T Constant23_Value_b;           /* Expression: 0
                                        * Referenced by: '<S192>/Constant23'
                                        */
  real_T FxType_Value_l;               /* Expression: 0
                                        * Referenced by: '<S134>/FxType'
                                        */
  real_T rollType_Value_d;             /* Expression: 1
                                        * Referenced by: '<S134>/rollType'
                                        */
  real_T vertType_Value_c;             /* Expression: 0
                                        * Referenced by: '<S134>/vertType'
                                        */
  real_T Constant2_Value_k;            /* Expression: 0
                                        * Referenced by: '<S81>/Constant2'
                                        */
  real_T MatrixGain_Gain[4];           /* Expression: [0 -1;1 0]
                                        * Referenced by: '<S72>/Matrix Gain'
                                        */
  real_T Constant4_Value_a[3];         /* Expression: [0; 0; 1]
                                        * Referenced by: '<S74>/Constant4'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S83>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S118>/Constant'
                                        */
  real_T NFNRb_Gain[2];                /* Expression: [NF,NR]
                                        * Referenced by: '<S79>/[NF,NR]b'
                                        */
  real_T NFNRk_Gain[2];                /* Expression: [NF,NR]
                                        * Referenced by: '<S79>/[NF,NR]k'
                                        */
  real_T Memory_InitialCondition_f;    /* Expression: 0
                                        * Referenced by: '<S51>/Memory'
                                        */
  real_T Integrator_UpperSat;          /* Expression: maxAbsSpd
                                        * Referenced by: '<S26>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: -maxAbsSpd
                                        * Referenced by: '<S26>/Integrator'
                                        */
  real_T Reset_Value;                  /* Expression: 1
                                        * Referenced by: '<S15>/Reset'
                                        */
  real_T Constant1_Value_e;            /* Expression: 1
                                        * Referenced by: '<S30>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: shaftSwitchMask
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S30>/Switch'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: 1/2
                                        * Referenced by: '<S30>/Gain1'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S40>/Switch'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 20
                                        * Referenced by: '<S47>/Gain1'
                                        */
  real_T Constant1_Value_i;            /* Expression: 1
                                        * Referenced by: '<S47>/Constant1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 4
                                        * Referenced by: '<S47>/Gain2'
                                        */
  real_T Gain_Gain_a;                  /* Expression: .5
                                        * Referenced by: '<S47>/Gain'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S38>/Constant'
                                        */
  real_T Switch_Threshold_i;           /* Expression: 0
                                        * Referenced by: '<S38>/Switch'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 20
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real_T Constant1_Value_dt;           /* Expression: 1
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real_T Gain2_Gain_m;                 /* Expression: 4
                                        * Referenced by: '<S43>/Gain2'
                                        */
  real_T Gain_Gain_d;                  /* Expression: .5
                                        * Referenced by: '<S43>/Gain'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S42>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 1
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S39>/Switch'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 20
                                        * Referenced by: '<S45>/Gain1'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S45>/Constant1'
                                        */
  real_T Gain2_Gain_c;                 /* Expression: 4
                                        * Referenced by: '<S45>/Gain2'
                                        */
  real_T Gain_Gain_p;                  /* Expression: .5
                                        * Referenced by: '<S45>/Gain'
                                        */
  real_T Constant_Value_fp;            /* Expression: 1
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T Constant_Value_fx;            /* Expression: shaftSwitchMask
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Constant6_Value_h;            /* Expression: 1
                                        * Referenced by: '<S33>/Constant6'
                                        */
  real_T Switch1_Threshold;            /* Expression: 1
                                        * Referenced by: '<S33>/Switch1'
                                        */
  real_T Reset_Value_l;                /* Expression: 1
                                        * Referenced by: '<S51>/Reset'
                                        */
  P_CoreSubsys_DrivetrainEv_o_T CoreSubsys_c;/* '<S75>/rotation' */
  P_CoreSubsys_DrivetrainEv_i_T CoreSubsys_k;/* '<S183>/Clutch' */
  P_CoreSubsys_DrivetrainEv_T CoreSubsys;/* '<S141>/Clutch' */
};

/* Real-time Model Data Structure */
struct tag_RTM_DrivetrainEv_T {
  struct SimStruct_tag *rtS;

  /*
   * The following structure contains memory needed to
   * track noncontinuous signals feeding derivative ports.
   */
  struct {
    real_T mr_nonContSig0[1];
    real_T mr_nonContSig1[1];
    real_T mr_nonContSig2[1];
    real_T mr_nonContSig3[1];
    real_T mr_nonContSig4[1];
    real_T mr_nonContSig5[1];
    real_T mr_nonContSig6[1];
    real_T mr_nonContSig7[1];
    real_T mr_nonContSig8[3];
    real_T mr_nonContSig9[3];
    real_T mr_nonContSig10[3];
    boolean_T mr_nonContSig11[1];
    boolean_T mr_nonContSig12[1];
    boolean_T mr_nonContSig13[1];
    boolean_T mr_nonContSig14[1];
  } NonContDerivMemory;

  ssNonContDerivSigInfo nonContDerivSignal[15];
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
  B_DrivetrainEv_c_T rtb;
  DW_DrivetrainEv_f_T rtdw;
  RT_MODEL_DrivetrainEv_T rtm;
  ZCE_DrivetrainEv_T rtzce;
} MdlrefDW_DrivetrainEv_T;

/* Model reference registration function */
extern void DrivetrainEv_initialize(SimStruct *const rtS, int_T mdlref_TID0,
  int_T mdlref_TID1, RT_MODEL_DrivetrainEv_T *const DrivetrainEv_M,
  B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, ZCE_DrivetrainEv_T
  *localZCE);
extern void DrivetrainEv_detectSlip_Init(B_detectSlip_DrivetrainEv_T *localB,
  P_detectSlip_DrivetrainEv_T *localP);
extern void DrivetrainEv_detectSlip_Start(B_detectSlip_DrivetrainEv_T *localB);
extern void DrivetrainEv_detectSlip(real_T rtu_Tout, real_T rtu_Tfmaxs,
  B_detectSlip_DrivetrainEv_T *localB);
extern void DrivetrainEv_detectLockup_Init(B_detectLockup_DrivetrainEv_T *localB,
  DW_detectLockup_DrivetrainEv_T *localDW, P_detectLockup_DrivetrainEv_T *localP);
extern void DrivetrainEv_detectLockup_Start(B_detectLockup_DrivetrainEv_T
  *localB);
extern void DrivetrainEv_detectLockup(real_T rtu_Tout, real_T rtu_Tfmaxs,
  B_detectLockup_DrivetrainEv_T *localB, DW_detectLockup_DrivetrainEv_T *localDW,
  P_detectLockup_DrivetrainEv_T *localP);
extern void DrivetrainEv_Locked_Enable(RT_MODEL_DrivetrainEv_T * const
  DrivetrainEv_M);
extern void DrivetrainEv_Locked_Start(real_T *rty_ReactionTorque, real_T
  *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb);
extern void DrivetrainEv_Locked_Disable(RT_MODEL_DrivetrainEv_T * const
  DrivetrainEv_M);
extern void DrivetrainEv_Locked(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  real_T rtu_Tout, real_T *rty_ReactionTorque, real_T *rty_Omega, real_T
  *rty_Omegadot, real_T *rty_Myb, P_Locked_DrivetrainEv_T *localP);
extern void DrivetrainEv_Slipping_Init(X_Slipping_DrivetrainEv_T *localX);
extern void DrivetrainEv_Slipping_Enable(RT_MODEL_DrivetrainEv_T * const
  DrivetrainEv_M, XDis_Slipping_DrivetrainEv_T *localXdis);
extern void DrivetrainEv_Slipping_Start(real_T *rty_Omega, real_T *rty_Omegadot,
  real_T *rty_ReactionTorque, real_T *rty_Myb, B_Slipping_DrivetrainEv_T *localB);
extern void DrivetrainEv_Slipping_Deriv(B_Slipping_DrivetrainEv_T *localB,
  XDot_Slipping_DrivetrainEv_T *localXdot);
extern void DrivetrainEv_Slipping_Disable(RT_MODEL_DrivetrainEv_T * const
  DrivetrainEv_M, XDis_Slipping_DrivetrainEv_T *localXdis);
extern void DrivetrainEv_Slipping(real_T rtu_Tfmaxk, real_T rtu_Tout, real_T
  *rty_Omega, real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb,
  B_Slipping_DrivetrainEv_T *localB, P_Slipping_DrivetrainEv_T *localP,
  X_Slipping_DrivetrainEv_T *localX);
extern void DrivetrainEv_Clutch_Init(B_Clutch_DrivetrainEv_T *localB,
  DW_Clutch_DrivetrainEv_T *localDW, P_Clutch_DrivetrainEv_T *localP,
  X_Clutch_DrivetrainEv_T *localX);
extern void DrivetrainEv_Clutch_Reset(B_Clutch_DrivetrainEv_T *localB,
  DW_Clutch_DrivetrainEv_T *localDW, X_Clutch_DrivetrainEv_T *localX);
extern void DrivetrainEv_Clutch_Start(B_Clutch_DrivetrainEv_T *localB);
extern void DrivetrainEv_Clutch_Deriv(B_Clutch_DrivetrainEv_T *localB,
  DW_Clutch_DrivetrainEv_T *localDW, XDot_Clutch_DrivetrainEv_T *localXdot);
extern void DrivetrainEv_Clutch(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_OmegaTol,
  B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW,
  P_Clutch_DrivetrainEv_T *localP, X_Clutch_DrivetrainEv_T *localX,
  XDis_Clutch_DrivetrainEv_T *localXdis);
extern void DrivetrainEv_Clutch_o_Init(B_Clutch_DrivetrainEv_g_T *localB,
  DW_Clutch_DrivetrainEv_k_T *localDW, P_Clutch_DrivetrainEv_b_T *localP,
  X_Clutch_DrivetrainEv_m_T *localX);
extern void DrivetrainEv_Clutch_a_Reset(B_Clutch_DrivetrainEv_g_T *localB,
  DW_Clutch_DrivetrainEv_k_T *localDW, X_Clutch_DrivetrainEv_m_T *localX);
extern void DrivetrainEv_Clutch_d_Start(B_Clutch_DrivetrainEv_g_T *localB);
extern void DrivetrainEv_Clutch_m_Deriv(B_Clutch_DrivetrainEv_g_T *localB,
  DW_Clutch_DrivetrainEv_k_T *localDW, XDot_Clutch_DrivetrainEv_i_T *localXdot);
extern void DrivetrainEv_Clutch_b(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_OmegaTol,
  B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW,
  P_Clutch_DrivetrainEv_b_T *localP, X_Clutch_DrivetrainEv_m_T *localX,
  XDis_Clutch_DrivetrainEv_e_T *localXdis);
extern void DrivetrainEv_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz, real_T
  rtu_Omega, real_T rtu_Vx, real_T rtu_MagicPeak, real_T rtu_MagicPeak_b, real_T
  rtu_MagicPeak_n, real_T rtu_MagicPeak_a, real_T rtu_MagicPeak_i, const real_T
  rtu_MagicFxo[34], const real_T rtu_kappaFx[3], const real_T rtu_FzFx[3], const
  real_T rtu_FxMap[9], real_T rtu_RollRes, real_T rtu_RollRes_j, real_T
  rtu_RollRes_d, real_T rtu_RollRes_n, real_T rtu_RollRes_c, real_T
  rtu_RollRes_b, real_T rtu_RollRes_h, real_T rtu_RollRes_d1, real_T
  rtu_RollRes_i, real_T rtu_RollRes_d2, real_T rtu_RollRes_o, real_T
  rtu_RollRes_bt, real_T rtu_RollRes_f, real_T rtu_RollRes_k, real_T
  rtu_RollRes_fo, real_T rtu_RollRes_p, const real_T rtu_VxMy[3], const real_T
  rtu_FzMy[3], const real_T rtu_MyMap[9], real_T rtu_rho, real_T rtu_FxType,
  real_T rtu_rollingType, real_T rtu_vertType, B_SimpleMagicTire_DrivetrainE_T
  *localB);
extern void DrivetrainEv_Init(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T
  *localX);
extern void DrivetrainEv_Reset(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T
  *localX);
extern void DrivetrainEv_Start(B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T
  *localDW);
extern void DrivetrainEv_Deriv(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  const real_T *rtu_MotTrq, const real_T *rtu_BrakeReq, const real_T *rtu_Grade,
  const real_T *rtu_WindVel, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T
  *localDW, X_DrivetrainEv_n_T *localX, XDot_DrivetrainEv_n_T *localXdot,
  XDis_DrivetrainEv_n_T *localXdis);
extern void DrivetrainEv_Update(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  const real_T *rtu_MotTrq, const real_T *rtu_BrakeReq, const real_T *rtu_Grade,
  const real_T *rtu_WindVel, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T
  *localDW, X_DrivetrainEv_n_T *localX, XDis_DrivetrainEv_n_T *localXdis);
extern void DrivetrainEv(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T *
  rty_VehSpd, real_T *rty_MotSpd, B_DrivetrainEv_c_T *localB,
  DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX, ZCE_DrivetrainEv_T
  *localZCE);

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
 * '<Root>' : 'DrivetrainEv'
 * '<S1>'   : 'DrivetrainEv/Differential and Compliance'
 * '<S2>'   : 'DrivetrainEv/Driveshaft Compliance'
 * '<S3>'   : 'DrivetrainEv/Rotational Inertia'
 * '<S4>'   : 'DrivetrainEv/Vehicle'
 * '<S5>'   : 'DrivetrainEv/Vehicle Output Interface'
 * '<S6>'   : 'DrivetrainEv/Wheels and Brakes'
 * '<S7>'   : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive'
 * '<S8>'   : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1'
 * '<S9>'   : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2'
 * '<S10>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential'
 * '<S11>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Rear Axle 1'
 * '<S12>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Rear Axle 2'
 * '<S13>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way'
 * '<S14>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear'
 * '<S15>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S16>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
 * '<S17>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
 * '<S18>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S19>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S20>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S21>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S22>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator'
 * '<S23>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S24>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator/PwrStored Input'
 * '<S25>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S26>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential'
 * '<S27>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation'
 * '<S28>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency'
 * '<S29>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Open Differential'
 * '<S30>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/y'
 * '<S31>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power'
 * '<S32>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Damping Power'
 * '<S33>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power'
 * '<S34>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator'
 * '<S35>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S36>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S37>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S38>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency'
 * '<S39>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency'
 * '<S40>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Drive Efficiency'
 * '<S41>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Eta'
 * '<S42>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend'
 * '<S43>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend'
 * '<S44>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend'
 * '<S45>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend'
 * '<S46>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend'
 * '<S47>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend'
 * '<S48>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Eta/Constant Eta'
 * '<S49>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way'
 * '<S50>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear'
 * '<S51>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S52>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
 * '<S53>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
 * '<S54>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S55>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S56>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S57>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S58>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia'
 * '<S59>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input'
 * '<S60>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power'
 * '<S61>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly'
 * '<S62>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Damping Power'
 * '<S63>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Kinetic Power'
 * '<S64>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator'
 * '<S65>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S66>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S67>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S68>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant'
 * '<S69>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant1'
 * '<S70>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal'
 * '<S71>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof'
 * '<S72>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)'
 * '<S73>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation'
 * '<S74>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force'
 * '<S75>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body'
 * '<S76>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Fx'
 * '<S77>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Fz'
 * '<S78>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My'
 * '<S79>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension'
 * '<S80>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot'
 * '<S81>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Determine Force,  Mass & Inertia'
 * '<S82>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Gravity'
 * '<S83>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes'
 * '<S84>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Velocity Conversion'
 * '<S85>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Velocity Conversion1'
 * '<S86>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S87>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S88>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame'
 * '<S89>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces'
 * '<S90>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing'
 * '<S91>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame'
 * '<S92>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Moments'
 * '<S93>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power'
 * '<S94>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF'
 * '<S95>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/wxR'
 * '<S96>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/wxR/Subsystem'
 * '<S97>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/wxR/Subsystem1'
 * '<S98>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF'
 * '<S99>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm'
 * '<S100>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm1'
 * '<S101>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF'
 * '<S102>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front'
 * '<S103>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear'
 * '<S104>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix'
 * '<S105>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/transform to Inertial axes'
 * '<S106>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/transform to Inertial axes1'
 * '<S107>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR'
 * '<S108>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S109>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem'
 * '<S110>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1'
 * '<S111>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix'
 * '<S112>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes'
 * '<S113>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes1'
 * '<S114>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR'
 * '<S115>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S116>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem'
 * '<S117>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1'
 * '<S118>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes'
 * '<S119>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S120>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S121>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF'
 * '<S122>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension'
 * '<S123>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension'
 * '<S124>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator'
 * '<S125>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S126>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator/PwrStored Input'
 * '<S127>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S128>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation'
 * '<S129>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix'
 * '<S130>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/transform to body axes'
 * '<S131>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S132>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1'
 * '<S133>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2'
 * '<S134>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1'
 * '<S135>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2'
 * '<S136>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing'
 * '<S137>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire'
 * '<S138>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters'
 * '<S139>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters'
 * '<S140>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF'
 * '<S141>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module'
 * '<S142>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power'
 * '<S143>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S144>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S145>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S146>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S147>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S148>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S149>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple'
 * '<S150>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None'
 * '<S151>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes'
 * '<S152>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch'
 * '<S153>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Friction Model'
 * '<S154>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation'
 * '<S155>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake'
 * '<S156>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S157>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch'
 * '<S158>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked'
 * '<S159>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping'
 * '<S160>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S161>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S162>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S163>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S164>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S165>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S166>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S167>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S168>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S169>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S170>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S171>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly'
 * '<S172>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S173>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 * '<S174>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator'
 * '<S175>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S176>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator/PwrStored Input'
 * '<S177>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S178>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing'
 * '<S179>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire'
 * '<S180>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters'
 * '<S181>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters'
 * '<S182>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF'
 * '<S183>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module'
 * '<S184>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power'
 * '<S185>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S186>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S187>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S188>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S189>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S190>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S191>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple'
 * '<S192>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None'
 * '<S193>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes'
 * '<S194>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch'
 * '<S195>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Friction Model'
 * '<S196>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation'
 * '<S197>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake'
 * '<S198>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S199>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch'
 * '<S200>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked'
 * '<S201>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping'
 * '<S202>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S203>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S204>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S205>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S206>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S207>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S208>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S209>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S210>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S211>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S212>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S213>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly'
 * '<S214>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S215>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 * '<S216>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator'
 * '<S217>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S218>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator/PwrStored Input'
 * '<S219>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator/PwrTrnsfrd Input'
 */
#endif                                 /* RTW_HEADER_DrivetrainEv_h_ */
