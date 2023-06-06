/*
 * Code generation for system model 'DrivetrainEv'
 *
 * Model                      : DrivetrainEv
 * Model version              : 7.0
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Mon Mar 27 10:41:36 2023
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "DrivetrainEv.h"
#include "rtwtypes.h"
#include "DrivetrainEv_private.h"
#include <math.h>
#include "interp2_gQgEamix.h"
#include "rt_powd_snf.h"
#include <string.h>
#include "rt_atan2d_snf.h"
#include "automldiffopen_RcYoMae5.h"
#include <emmintrin.h>
#include "look1_binlxpw.h"
#include "zero_crossing_types.h"
#include "look1_binlcpw.h"
#include "rt_nonfinite.h"

/* Named constants for Chart: '<S152>/Clutch' */
#define DrivetrainEv_IN_Locked         ((uint8_T)1U)
#define DrivetrainEv_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define DrivetrainEv_IN_Slipping       ((uint8_T)2U)

/* Named constants for Chart: '<S194>/Clutch' */
#define DrivetrainEv_IN_Locked_j       ((uint8_T)1U)
#define DrivetrainEv_IN_Slipping_o     ((uint8_T)2U)
#define Drivetrain_IN_NO_ACTIVE_CHILD_e ((uint8_T)0U)

P_DrivetrainEv_T DrivetrainEv_P = {
  /* Variable: Af
   * Referenced by: '<S74>/.5.*A.*Pabs.//R.//T'
   */
  2.27,

  /* Variable: Cd
   * Referenced by: '<S74>/Constant'
   */
  0.28,

  /* Variable: Cl
   * Referenced by: '<S74>/Constant1'
   */
  0.1,

  /* Variable: Cpm
   * Referenced by: '<S74>/Constant2'
   */
  0.1,

  /* Variable: FZMAX
   * Referenced by:
   *   '<S137>/Simple Magic Tire'
   *   '<S179>/Simple Magic Tire'
   */
  6570.0,

  /* Variable: FZMIN
   * Referenced by:
   *   '<S137>/Simple Magic Tire'
   *   '<S179>/Simple Magic Tire'
   */
  0.0,

  /* Variable: FsbF
   * Referenced by: '<S79>/Damping - Front'
   */
  { -700000.0, -7000.0, -700.0, 0.0, 700.0, 7000.0, 700000.0 },

  /* Variable: FsbR
   * Referenced by: '<S79>/Ramping - Rear'
   */
  { -700000.0, -7000.0, -700.0, 0.0, 700.0, 7000.0, 700000.0 },

  /* Variable: FskF
   * Referenced by: '<S79>/Stiffness - Front'
   */
  { -8928.57142857143, -178.57142857142858, 0.0, 357.14285714285717,
    535.71428571428567, 9285.7142857142862 },

  /* Variable: FskR
   * Referenced by: '<S79>/Stiffness - Rear'
   */
  { -5357.1428571428569, -107.14285714285714, 0.0, 214.28571428571428,
    321.42857142857144, 5571.4285714285716 },

  /* Variable: Iyy
   * Referenced by: '<S81>/Constant1'
   */
  3000.0,

  /* Variable: Iyy_Whl
   * Referenced by:
   *   '<S159>/Output Inertia'
   *   '<S201>/Output Inertia'
   */
  0.8,

  /* Variable: Jd
   * Referenced by: '<S26>/Jd'
   */
  0.025,

  /* Variable: Jmotor
   * Referenced by: '<S58>/J'
   */
  0.1,

  /* Variable: Jw1
   * Referenced by: '<S26>/Jw1'
   */
  0.01,

  /* Variable: Jw2
   * Referenced by: '<S26>/Jw3'
   */
  0.01,

  /* Variable: Lrel
   * Referenced by:
   *   '<S154>/Constant2'
   *   '<S196>/Constant2'
   */
  0.15,

  /* Variable: Mass
   * Referenced by:
   *   '<S75>/m'
   *   '<S81>/Constant'
   */
  1500.0,

  /* Variable: Ndiff
   * Referenced by:
   *   '<S26>/Ndiff2'
   *   '<S30>/Gain'
   *   '<S33>/Gain1'
   */
  7.94,

  /* Variable: Pabs
   * Referenced by: '<S74>/.5.*A.*Pabs.//R.//T'
   */
  101325.0,

  /* Variable: Re
   * Referenced by:
   *   '<S141>/Constant9'
   *   '<S183>/Constant9'
   *   '<S152>/Clutch'
   *   '<S194>/Clutch'
   */
  0.327,

  /* Variable: Rm
   * Referenced by:
   *   '<S156>/Torque Conversion'
   *   '<S198>/Torque Conversion'
   */
  0.15,

  /* Variable: T
   * Referenced by: '<S70>/AirTempConstant'
   */
  273.0,

  /* Variable: UNLOADED_RADIUS
   * Referenced by:
   *   '<S149>/Constant4'
   *   '<S191>/Constant4'
   */
  0.336,

  /* Variable: VXLOW
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
  2.0,

  /* Variable: aMy
   * Referenced by:
   *   '<S149>/Constant13'
   *   '<S191>/Constant13'
   */
  0.01,

  /* Variable: a_CG
   * Referenced by:
   *   '<S74>/Constant3'
   *   '<S78>/a'
   *   '<S102>/R_T1'
   */
  1.1880000000000002,

  /* Variable: alphaMy
   * Referenced by:
   *   '<S149>/Constant18'
   *   '<S191>/Constant18'
   */
  0.0,

  /* Variable: b
   * Referenced by:
   *   '<S50>/Gain2'
   *   '<S14>/Gain2'
   */
  400.0,

  /* Variable: bMy
   * Referenced by:
   *   '<S149>/Constant8'
   *   '<S191>/Constant8'
   */
  0.0,

  /* Variable: b_CG
   * Referenced by:
   *   '<S74>/Constant3'
   *   '<S78>/b'
   *   '<S103>/R_T1'
   */
  1.5120000000000002,

  /* Variable: bd
   * Referenced by: '<S26>/bd'
   */
  0.001,

  /* Variable: betaMy
   * Referenced by:
   *   '<S149>/Constant17'
   *   '<S191>/Constant17'
   */
  1.0,

  /* Variable: br
   * Referenced by:
   *   '<S159>/Output Damping'
   *   '<S201>/Output Damping'
   *   '<S166>/Output Damping'
   *   '<S208>/Output Damping'
   */
  0.001,

  /* Variable: bw1
   * Referenced by: '<S26>/bw1'
   */
  0.001,

  /* Variable: bw2
   * Referenced by: '<S26>/bw2'
   */
  0.001,

  /* Variable: cMy
   * Referenced by:
   *   '<S149>/Constant15'
   *   '<S191>/Constant15'
   */
  0.0,

  /* Variable: disk_abore
   * Referenced by:
   *   '<S156>/Disk brake actuator bore'
   *   '<S198>/Disk brake actuator bore'
   */
  0.05,

  /* Variable: domega_o
   * Referenced by:
   *   '<S50>/domega_o'
   *   '<S14>/domega_o'
   */
  0.0,

  /* Variable: dzdotsF
   * Referenced by: '<S79>/Damping - Front'
   */
  { -10.0, -1.0, -0.1, 0.0, 0.1, 1.0, 10.0 },

  /* Variable: dzdotsR
   * Referenced by: '<S79>/Ramping - Rear'
   */
  { -10.0, -1.0, -0.1, 0.0, 0.1, 1.0, 10.0 },

  /* Variable: dzsF
   * Referenced by: '<S79>/Stiffness - Front'
   */
  { -0.005, -0.0001, 0.0, 0.2, 0.2001, 0.2051 },

  /* Variable: dzsR
   * Referenced by: '<S79>/Stiffness - Rear'
   */
  { -0.005, -0.0001, 0.0, 0.2, 0.2001, 0.2051 },

  /* Variable: g
   * Referenced by: '<S75>/g'
   */
  9.81,

  /* Variable: h
   * Referenced by:
   *   '<S78>/h'
   *   '<S102>/R_T3'
   *   '<S103>/R_T3'
   */
  0.5,

  /* Variable: k
   * Referenced by:
   *   '<S50>/Gain1'
   *   '<S14>/Gain1'
   */
  10000.0,

  /* Variable: kappamax
   * Referenced by:
   *   '<S137>/Simple Magic Tire'
   *   '<S179>/Simple Magic Tire'
   */
  1.5,

  /* Variable: lam_x
   * Referenced by:
   *   '<S132>/lam_muxConstant'
   *   '<S134>/lam_muxConstant'
   */
  1.0,

  /* Variable: mu_kinetic
   * Referenced by:
   *   '<S153>/Ratio of static to kinetic'
   *   '<S153>/Ratio of static to kinetic1'
   *   '<S195>/Ratio of static to kinetic'
   *   '<S195>/Ratio of static to kinetic1'
   *   '<S156>/Torque Conversion'
   *   '<S198>/Torque Conversion'
   */
  0.35,

  /* Variable: mu_static
   * Referenced by:
   *   '<S153>/Ratio of static to kinetic'
   *   '<S195>/Ratio of static to kinetic'
   */
  0.45,

  /* Variable: num_pads
   * Referenced by:
   *   '<S156>/Number of brake pads'
   *   '<S198>/Number of brake pads'
   */
  2.0,

  /* Variable: omega_c
   * Referenced by:
   *   '<S50>/omega_c'
   *   '<S14>/omega_c'
   */
  100.0,

  /* Variable: omega_o
   * Referenced by: '<S59>/Integrator'
   */
  0.0,

  /* Variable: omegao
   * Referenced by:
   *   '<S152>/Clutch'
   *   '<S194>/Clutch'
   *   '<S159>/omega wheel'
   *   '<S201>/omega wheel'
   */
  0.0,

  /* Variable: omegaw1o
   * Referenced by: '<S26>/Constant'
   */
  0.0,

  /* Variable: omegaw2o
   * Referenced by: '<S26>/Constant1'
   */
  0.0,

  /* Variable: press
   * Referenced by:
   *   '<S132>/TirePrsConstant'
   *   '<S134>/TirePrsConstant'
   */
  234400.0,

  /* Variable: q_o
   * Referenced by: '<S72>/q'
   */
  0.0,

  /* Variable: theta_o
   * Referenced by:
   *   '<S50>/Integrator'
   *   '<S14>/Integrator'
   */
  0.0,

  /* Variable: theta_o_Veh
   * Referenced by: '<S72>/Theta'
   */
  0.0,

  /* Variable: xdot_o
   * Referenced by:
   *   '<S72>/U0'
   *   '<S72>/w0'
   *   '<S94>/Integrator3'
   */
  0.0,

  /* Variable: zdot_o
   * Referenced by:
   *   '<S72>/U0'
   *   '<S72>/w0'
   */
  0.0,

  /* Mask Parameter: DragForce_Cs
   * Referenced by: '<S74>/Cs'
   */
  { 0.0, 0.0 },

  /* Mask Parameter: DragForce_Cym
   * Referenced by: '<S74>/Cym'
   */
  { 0.0, 0.0 },

  /* Mask Parameter: DragForce_R
   * Referenced by: '<S74>/.5.*A.*Pabs.//R.//T'
   */
  287.058,

  /* Mask Parameter: HardPointCoordinateTransformFro
   * Referenced by: '<S102>/R_T2'
   */
  0.0,

  /* Mask Parameter: HardPointCoordinateTransformRea
   * Referenced by: '<S103>/R_T2'
   */
  0.0,

  /* Mask Parameter: RotationalInertia_b
   * Referenced by: '<S59>/Gain2'
   */
  0.001,

  /* Mask Parameter: DragForce_beta_w
   * Referenced by:
   *   '<S74>/Cs'
   *   '<S74>/Cym'
   */
  { -1.0, 1.0 },

  /* Mask Parameter: OpenDifferential_eta
   * Referenced by: '<S48>/Constant'
   */
  1.0,

  /* Mask Parameter: uDOFBodyAxes_g
   * Referenced by: '<S72>/gravity'
   */
  0.0,

  /* Mask Parameter: uDOFBodyAxes_pos_ini
   * Referenced by: '<S72>/Position'
   */
  { 0.0, -0.35 },

  /* Mask Parameter: div0protectabspoly_thresh
   * Referenced by:
   *   '<S68>/Constant'
   *   '<S69>/Constant'
   */
  1.0E-6,

  /* Mask Parameter: uDOFBodyAxes_v_ini
   * Referenced by:
   *   '<S72>/U0'
   *   '<S72>/w0'
   */
  0.0,

  /* Expression: shaftSwitchMask
   * Referenced by: '<S26>/Open Differential'
   */
  1.0,

  /* Expression: [-1,1,1]
   * Referenced by: '<S75>/Gain'
   */
  { -1.0, 1.0, 1.0 },

  /* Expression: [-1,1,1]
   * Referenced by: '<S75>/Gain1'
   */
  { -1.0, 1.0, 1.0 },

  /* Expression: 1/NF
   * Referenced by: '<S98>/1//NF'
   */
  0.5,

  /* Expression: 0.6
   * Referenced by: '<S6>/Front Bias'
   */
  0.6,

  /* Expression: inf
   * Referenced by: '<S156>/Disallow Negative Brake Torque'
   */
  0.0,

  /* Expression: eps
   * Referenced by: '<S156>/Disallow Negative Brake Torque'
   */
  2.2204460492503131E-16,

  /* Expression: 1/NR
   * Referenced by: '<S98>/1//NR'
   */
  0.5,

  /* Expression: 0.4
   * Referenced by: '<S6>/Rear Bias1'
   */
  0.4,

  /* Expression: inf
   * Referenced by: '<S198>/Disallow Negative Brake Torque'
   */
  0.0,

  /* Expression: eps
   * Referenced by: '<S198>/Disallow Negative Brake Torque'
   */
  2.2204460492503131E-16,

  /* Expression: [0 0]
   * Referenced by: '<S74>/Crm'
   */
  { 0.0, 0.0 },

  /* Expression: [-1 1]
   * Referenced by: '<S74>/Crm'
   */
  { -1.0, 1.0 },

  /* Expression: [4.*ones(2,1); 0]
   * Referenced by: '<S74>/4'
   */
  { 4.0, 4.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S4>/Integrator'
   */
  0.0,

  /* Expression: [0,0,0]
   * Referenced by: '<S70>/FExtConstant'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: [0,0,0]
   * Referenced by: '<S70>/MExtConstant'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S91>/Constant12'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S91>/Constant2'
   */
  0.0,

  /* Expression: pi
   * Referenced by: '<S72>/Theta'
   */
  3.1415926535897931,

  /* Expression: -pi
   * Referenced by: '<S72>/Theta'
   */
  -3.1415926535897931,

  /* Expression: 0
   * Referenced by: '<S91>/Constant1'
   */
  0.0,

  /* Expression: [NF,NR]
   * Referenced by: '<S79>/[NF,NR]'
   */
  { 2.0, 2.0 },

  /* Expression: inf
   * Referenced by: '<S141>/Saturation'
   */
  0.0,

  /* Expression: eps
   * Referenced by: '<S141>/Saturation'
   */
  2.2204460492503131E-16,

  /* Expression: 0
   * Referenced by: '<S15>/Memory'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S170>/Integrator'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S141>/Sign convention'
   */
  -1.0,

  /* Expression: pi/4
   * Referenced by: '<S156>/Torque Conversion1'
   */
  0.78539816339744828,

  /* Expression: D
   * Referenced by: '<S148>/Constant'
   */
  1.0,

  /* Expression: C
   * Referenced by: '<S148>/Constant1'
   */
  1.65,

  /* Expression: B
   * Referenced by: '<S148>/Constant7'
   */
  10.0,

  /* Expression: E
   * Referenced by: '<S148>/Constant6'
   */
  0.01,

  /* Expression: zeros(34,1)
   * Referenced by: '<S148>/Constant2'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,3)
   * Referenced by: '<S148>/Constant19'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,3)
   * Referenced by: '<S148>/Constant12'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(3,3)
   * Referenced by: '<S148>/Constant14'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S149>/Constant5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S149>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S149>/Constant16'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S149>/Constant7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S149>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S149>/Constant11'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S149>/Constant10'
   */
  0.0,

  /* Expression: PRESMIN
   * Referenced by: '<S149>/Constant1'
   */
  10000.0,

  /* Expression: PRESMAX
   * Referenced by: '<S149>/Constant3'
   */
  1.0E+6,

  /* Expression: zeros(1,3)
   * Referenced by: '<S149>/Constant19'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,3)
   * Referenced by: '<S149>/Constant12'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(3,3)
   * Referenced by: '<S149>/Constant14'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S150>/Constant14'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant19'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant6'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant10'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant11'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant16'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant17'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant13'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant15'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant21'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant22'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant18'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant20'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant24'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S150>/Constant23'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S132>/FxType'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S132>/rollType'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S132>/vertType'
   */
  0.0,

  /* Expression: inf
   * Referenced by: '<S183>/Saturation'
   */
  0.0,

  /* Expression: eps
   * Referenced by: '<S183>/Saturation'
   */
  2.2204460492503131E-16,

  /* Expression: 0
   * Referenced by: '<S212>/Integrator'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S183>/Sign convention'
   */
  -1.0,

  /* Expression: pi/4
   * Referenced by: '<S198>/Torque Conversion1'
   */
  0.78539816339744828,

  /* Expression: D
   * Referenced by: '<S190>/Constant'
   */
  1.0,

  /* Expression: C
   * Referenced by: '<S190>/Constant1'
   */
  1.65,

  /* Expression: B
   * Referenced by: '<S190>/Constant7'
   */
  10.0,

  /* Expression: E
   * Referenced by: '<S190>/Constant6'
   */
  0.01,

  /* Expression: zeros(34,1)
   * Referenced by: '<S190>/Constant2'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,3)
   * Referenced by: '<S190>/Constant19'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,3)
   * Referenced by: '<S190>/Constant12'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(3,3)
   * Referenced by: '<S190>/Constant14'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S191>/Constant5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S191>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S191>/Constant16'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S191>/Constant7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S191>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S191>/Constant11'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S191>/Constant10'
   */
  0.0,

  /* Expression: PRESMIN
   * Referenced by: '<S191>/Constant1'
   */
  10000.0,

  /* Expression: PRESMAX
   * Referenced by: '<S191>/Constant3'
   */
  1.0E+6,

  /* Expression: zeros(1,3)
   * Referenced by: '<S191>/Constant19'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,3)
   * Referenced by: '<S191>/Constant12'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: zeros(3,3)
   * Referenced by: '<S191>/Constant14'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S192>/Constant14'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant19'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant6'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant10'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant11'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant16'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant17'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant13'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant15'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant21'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant22'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant18'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant20'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant24'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S192>/Constant23'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S134>/FxType'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S134>/rollType'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S134>/vertType'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S81>/Constant2'
   */
  0.0,

  /* Expression: [0 -1;1 0]
   * Referenced by: '<S72>/Matrix Gain'
   */
  { 0.0, 1.0, -1.0, 0.0 },

  /* Expression: [0; 0; 1]
   * Referenced by: '<S74>/Constant4'
   */
  { 0.0, 0.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S83>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S118>/Constant'
   */
  0.0,

  /* Expression: [NF,NR]
   * Referenced by: '<S79>/[NF,NR]b'
   */
  { 2.0, 2.0 },

  /* Expression: [NF,NR]
   * Referenced by: '<S79>/[NF,NR]k'
   */
  { 2.0, 2.0 },

  /* Expression: 0
   * Referenced by: '<S51>/Memory'
   */
  0.0,

  /* Expression: maxAbsSpd
   * Referenced by: '<S26>/Integrator'
   */
  5000.0,

  /* Expression: -maxAbsSpd
   * Referenced by: '<S26>/Integrator'
   */
  -5000.0,

  /* Expression: 1
   * Referenced by: '<S15>/Reset'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S30>/Constant1'
   */
  1.0,

  /* Expression: shaftSwitchMask
   * Referenced by: '<S30>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S30>/Switch'
   */
  1.0,

  /* Expression: 1/2
   * Referenced by: '<S30>/Gain1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S40>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S40>/Switch'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S47>/Gain1'
   */
  20.0,

  /* Expression: 1
   * Referenced by: '<S47>/Constant1'
   */
  1.0,

  /* Expression: 4
   * Referenced by: '<S47>/Gain2'
   */
  4.0,

  /* Expression: .5
   * Referenced by: '<S47>/Gain'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S46>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S38>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S38>/Switch'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S43>/Gain1'
   */
  20.0,

  /* Expression: 1
   * Referenced by: '<S43>/Constant1'
   */
  1.0,

  /* Expression: 4
   * Referenced by: '<S43>/Gain2'
   */
  4.0,

  /* Expression: .5
   * Referenced by: '<S43>/Gain'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S42>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S39>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S39>/Switch'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<S45>/Gain1'
   */
  20.0,

  /* Expression: 1
   * Referenced by: '<S45>/Constant1'
   */
  1.0,

  /* Expression: 4
   * Referenced by: '<S45>/Gain2'
   */
  4.0,

  /* Expression: .5
   * Referenced by: '<S45>/Gain'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S44>/Constant'
   */
  1.0,

  /* Expression: shaftSwitchMask
   * Referenced by: '<S33>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S33>/Constant6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S33>/Switch1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S51>/Reset'
   */
  1.0,

  /* Start of '<S128>/CoreSubsys' */
  {
    /* Expression: 0
     * Referenced by: '<S128>/psi'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S128>/phi'
     */
    0.0
  }
  ,

  /* End of '<S128>/CoreSubsys' */

  /* Start of '<S194>/CoreSubsys' */
  {
    /* Start of '<S194>/Clutch' */
    {
      /* Start of '<S199>/Slipping' */
      {
        /* Expression: -4
         * Referenced by: '<S201>/-4'
         */
        -4.0
      }
      ,

      /* End of '<S199>/Slipping' */

      /* Start of '<S199>/Locked' */
      {
        /* Expression: 0
         * Referenced by: '<S200>/Constant'
         */
        0.0,

        /* Expression: 0
         * Referenced by: '<S200>/Constant1'
         */
        0.0,

        /* Expression: 0
         * Referenced by: '<S200>/Constant2'
         */
        0.0
      }
      ,

      /* End of '<S199>/Locked' */

      /* Start of '<S199>/detectLockup' */
      {
        /* Expression: 0
         * Referenced by: '<S202>/Constant'
         */
        0.0,

        /* Computed Parameter: yn_Y0
         * Referenced by: '<S202>/yn'
         */
        false,

        /* Computed Parameter: UnitDelay_InitialCondition
         * Referenced by: '<S207>/Unit Delay'
         */
        false,

        /* Computed Parameter: CombinatorialLogic_table
         * Referenced by: '<S207>/Combinatorial  Logic'
         */
        { false, true, false, false, true, true, true, false }
      }
      ,

      /* End of '<S199>/detectLockup' */

      /* Start of '<S199>/detectSlip' */
      {
        /* Computed Parameter: yn_Y0
         * Referenced by: '<S203>/yn'
         */
        false
      }
      /* End of '<S199>/detectSlip' */
    }
    /* End of '<S194>/Clutch' */
  }
  ,

  /* End of '<S194>/CoreSubsys' */

  /* Start of '<S152>/CoreSubsys' */
  {
    /* Start of '<S152>/Clutch' */
    {
      /* Start of '<S157>/Slipping' */
      {
        /* Expression: -4
         * Referenced by: '<S159>/-4'
         */
        -4.0
      }
      ,

      /* End of '<S157>/Slipping' */

      /* Start of '<S157>/Locked' */
      {
        /* Expression: 0
         * Referenced by: '<S158>/Constant'
         */
        0.0,

        /* Expression: 0
         * Referenced by: '<S158>/Constant1'
         */
        0.0,

        /* Expression: 0
         * Referenced by: '<S158>/Constant2'
         */
        0.0
      }
      ,

      /* End of '<S157>/Locked' */

      /* Start of '<S157>/detectLockup' */
      {
        /* Expression: 0
         * Referenced by: '<S160>/Constant'
         */
        0.0,

        /* Computed Parameter: yn_Y0
         * Referenced by: '<S160>/yn'
         */
        false,

        /* Computed Parameter: UnitDelay_InitialCondition
         * Referenced by: '<S165>/Unit Delay'
         */
        false,

        /* Computed Parameter: CombinatorialLogic_table
         * Referenced by: '<S165>/Combinatorial  Logic'
         */
        { false, true, false, false, true, true, true, false }
      }
      ,

      /* End of '<S157>/detectLockup' */

      /* Start of '<S157>/detectSlip' */
      {
        /* Computed Parameter: yn_Y0
         * Referenced by: '<S161>/yn'
         */
        false
      }
      /* End of '<S157>/detectSlip' */
    }
    /* End of '<S152>/Clutch' */
  }
  /* End of '<S152>/CoreSubsys' */
};

/* Forward declaration for local functions */
static boolean_T DrivetrainEv_detectLockup_o(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW,
  P_Clutch_DrivetrainEv_T *localP);
static boolean_T DrivetrainEv_detectSlip_a(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_T *localB);

/* Forward declaration for local functions */
static boolean_T DrivetrainEv_detectLockup_p(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW,
  P_Clutch_DrivetrainEv_b_T *localP);
static boolean_T DrivetrainEv_detectSlip_e(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_g_T *localB);

/* Forward declaration for local functions */
static void DrivetrainEv_automltirediv0prot(real_T u, real_T tol, real_T *y,
  real_T *yabs);
static real_T Drivetrain_automltirepurelongFx(real_T kappa, real_T Vx, real_T Fz,
  real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN, real_T b_FZMAX,
  real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX, real_T PCX1,
  real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2, real_T PEX3,
  real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1, real_T PHX2,
  real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3, real_T PPX4,
  real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T lam_Kxkappa, real_T
  lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx);
static real_T DrivetrainE_automltirelongMySAE(real_T Fz, real_T omega, real_T Vx,
  real_T press, real_T QSY1, real_T QSY2, real_T QSY3, real_T QSY7, real_T QSY8,
  real_T UNLOADED_RADIUS, real_T b_FZMIN, real_T b_FZMAX, real_T PRESMIN, real_T
  PRESMAX);
static real_T Drivetra_automltirelongMyMapped(real_T omega, real_T Fz, real_T Vx,
  const real_T VxMy[3], const real_T FzMy[3], const real_T MyMap[9], real_T
  b_FZMAX);
static real_T DrivetrainE_automltirelongMyISO(real_T Fz, real_T omega, real_T
  Tamb, real_T Fpl, real_T Cr, real_T Kt, real_T Tmeas, real_T Re, real_T
  b_FZMIN, real_T b_FZMAX, real_T TMIN, real_T TMAX);

/*
 * System initialize for function-call system:
 *    '<S157>/detectSlip'
 *    '<S199>/detectSlip'
 */
void DrivetrainEv_detectSlip_Init(B_detectSlip_DrivetrainEv_T *localB,
  P_detectSlip_DrivetrainEv_T *localP)
{
  /* SystemInitialize for RelationalOperator: '<S169>/Relational Operator' incorporates:
   *  Outport: '<S161>/yn'
   */
  localB->RelationalOperator = localP->yn_Y0;
}

/*
 * Start for function-call system:
 *    '<S157>/detectSlip'
 *    '<S199>/detectSlip'
 */
void DrivetrainEv_detectSlip_Start(B_detectSlip_DrivetrainEv_T *localB)
{
  /* SystemInitialize for RelationalOperator: '<S169>/Relational Operator' */
  localB->RelationalOperator = false;
}

/*
 * Output and update for function-call system:
 *    '<S157>/detectSlip'
 *    '<S199>/detectSlip'
 */
void DrivetrainEv_detectSlip(real_T rtu_Tout, real_T rtu_Tfmaxs,
  B_detectSlip_DrivetrainEv_T *localB)
{
  /* RelationalOperator: '<S169>/Relational Operator' incorporates:
   *  Abs: '<S169>/Abs'
   */
  localB->RelationalOperator = (fabs(rtu_Tout) >= rtu_Tfmaxs);
}

/*
 * System initialize for function-call system:
 *    '<S157>/detectLockup'
 *    '<S199>/detectLockup'
 */
void DrivetrainEv_detectLockup_Init(B_detectLockup_DrivetrainEv_T *localB,
  DW_detectLockup_DrivetrainEv_T *localDW, P_detectLockup_DrivetrainEv_T *localP)
{
  /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;

  /* SystemInitialize for CombinatorialLogic: '<S165>/Combinatorial  Logic' incorporates:
   *  Outport: '<S160>/yn'
   */
  localB->CombinatorialLogic = localP->yn_Y0;
}

/*
 * Start for function-call system:
 *    '<S157>/detectLockup'
 *    '<S199>/detectLockup'
 */
void DrivetrainEv_detectLockup_Start(B_detectLockup_DrivetrainEv_T *localB)
{
  /* SystemInitialize for CombinatorialLogic: '<S165>/Combinatorial  Logic' */
  localB->CombinatorialLogic = false;
}

/*
 * Output and update for function-call system:
 *    '<S157>/detectLockup'
 *    '<S199>/detectLockup'
 */
void DrivetrainEv_detectLockup(real_T rtu_Tout, real_T rtu_Tfmaxs,
  B_detectLockup_DrivetrainEv_T *localB, DW_detectLockup_DrivetrainEv_T *localDW,
  P_detectLockup_DrivetrainEv_T *localP)
{
  real_T rtb_Abs_g;

  /* Gain: '<S166>/Output Damping' incorporates:
   *  Constant: '<S160>/Constant'
   */
  rtb_Abs_g = DrivetrainEv_P.br * localP->Constant_Value;

  /* CombinatorialLogic: '<S165>/Combinatorial  Logic' incorporates:
   *  Abs: '<S163>/Abs'
   *  Abs: '<S168>/Abs'
   *  RelationalOperator: '<S163>/Relational Operator'
   *  RelationalOperator: '<S168>/Relational Operator'
   *  Sum: '<S166>/Sum1'
   *  Sum: '<S166>/Sum2'
   *  UnaryMinus: '<S167>/Unary Minus'
   *  UnitDelay: '<S165>/Unit Delay'
   */
  localB->CombinatorialLogic = localP->CombinatorialLogic_table[(((uint32_T)
    (fabs(((0.0 - rtu_Tout) - rtb_Abs_g) + rtb_Abs_g) >= rtu_Tfmaxs) +
    ((uint32_T)(fabs(-rtu_Tout) <= rtu_Tfmaxs) << 1)) << 1) +
    localDW->UnitDelay_DSTATE];

  /* Update for UnitDelay: '<S165>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localB->CombinatorialLogic;
}

/*
 * Enable for action system:
 *    '<S157>/Locked'
 *    '<S199>/Locked'
 */
void DrivetrainEv_Locked_Enable(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M)
{
  if (rtmGetTaskTime(DrivetrainEv_M, 0) != rtmGetTStart(DrivetrainEv_M)) {
    ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
  }
}

/*
 * Disable for action system:
 *    '<S157>/Locked'
 *    '<S199>/Locked'
 */
void DrivetrainEv_Locked_Disable(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M)
{
  ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
}

/*
 * Start for action system:
 *    '<S157>/Locked'
 *    '<S199>/Locked'
 */
void DrivetrainEv_Locked_Start(real_T *rty_ReactionTorque, real_T *rty_Omega,
  real_T *rty_Omegadot, real_T *rty_Myb)
{
  *rty_ReactionTorque = 0.0;
  *rty_Omega = 0.0;
  *rty_Omegadot = 0.0;
  *rty_Myb = 0.0;
}

/*
 * Output and update for action system:
 *    '<S157>/Locked'
 *    '<S199>/Locked'
 */
void DrivetrainEv_Locked(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T
  rtu_Tout, real_T *rty_ReactionTorque, real_T *rty_Omega, real_T *rty_Omegadot,
  real_T *rty_Myb, P_Locked_DrivetrainEv_T *localP)
{
  /* UnaryMinus: '<S158>/Unary Minus' */
  *rty_ReactionTorque = -rtu_Tout;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* SignalConversion generated from: '<S158>/Omega' incorporates:
     *  Constant: '<S158>/Constant'
     */
    *rty_Omega = localP->Constant_Value;

    /* SignalConversion generated from: '<S158>/Omegadot' incorporates:
     *  Constant: '<S158>/Constant1'
     */
    *rty_Omegadot = localP->Constant1_Value;

    /* SignalConversion generated from: '<S158>/Myb' incorporates:
     *  Constant: '<S158>/Constant2'
     */
    *rty_Myb = localP->Constant2_Value;
  }
}

/*
 * System initialize for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */
void DrivetrainEv_Slipping_Init(X_Slipping_DrivetrainEv_T *localX)
{
  /* InitializeConditions for Integrator: '<S159>/omega wheel' */
  localX->omegaWheel = DrivetrainEv_P.omegao;
}

/*
 * Enable for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */
void DrivetrainEv_Slipping_Enable(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  XDis_Slipping_DrivetrainEv_T *localXdis)
{
  if (rtmGetTaskTime(DrivetrainEv_M, 0) != rtmGetTStart(DrivetrainEv_M)) {
    ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
  }

  localXdis->omegaWheel = 0;
}

/*
 * Disable for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */
void DrivetrainEv_Slipping_Disable(RT_MODEL_DrivetrainEv_T * const
  DrivetrainEv_M, XDis_Slipping_DrivetrainEv_T *localXdis)
{
  ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
  localXdis->omegaWheel = 1;
}

/*
 * Start for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */
void DrivetrainEv_Slipping_Start(real_T *rty_Omega, real_T *rty_Omegadot, real_T
  *rty_ReactionTorque, real_T *rty_Myb, B_Slipping_DrivetrainEv_T *localB)
{
  *rty_Myb = 0.0;
  *rty_Omega = 0.0;

  /* Gain: '<S159>/Output Inertia' */
  localB->OutputInertia = 0.0;
  *rty_Omegadot = 0.0;
  *rty_ReactionTorque = 0.0;
}

/*
 * Outputs for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */
void DrivetrainEv_Slipping(real_T rtu_Tfmaxk, real_T rtu_Tout, real_T *rty_Omega,
  real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb,
  B_Slipping_DrivetrainEv_T *localB, P_Slipping_DrivetrainEv_T *localP,
  X_Slipping_DrivetrainEv_T *localX)
{
  real_T rtb_MaxDynamicFrictionTorque1;
  real_T rtb_OutputSum;

  /* Product: '<S159>/Max Dynamic Friction Torque1' incorporates:
   *  Gain: '<S159>/-4'
   *  Integrator: '<S159>/omega wheel'
   *  Trigonometry: '<S159>/Trigonometric Function'
   */
  rtb_MaxDynamicFrictionTorque1 = tanh(localP->u_Gain * localX->omegaWheel) *
    rtu_Tfmaxk;

  /* Gain: '<S159>/Output Damping' incorporates:
   *  Integrator: '<S159>/omega wheel'
   */
  rtb_OutputSum = DrivetrainEv_P.br * localX->omegaWheel;

  /* SignalConversion generated from: '<S159>/Myb' */
  *rty_Myb = rtb_OutputSum;

  /* SignalConversion generated from: '<S159>/Omega' incorporates:
   *  Integrator: '<S159>/omega wheel'
   */
  *rty_Omega = localX->omegaWheel;

  /* Sum: '<S159>/Output Sum' */
  rtb_OutputSum = (rtb_MaxDynamicFrictionTorque1 - rtu_Tout) - rtb_OutputSum;

  /* Gain: '<S159>/Output Inertia' */
  localB->OutputInertia = 1.0 / DrivetrainEv_P.Iyy_Whl * rtb_OutputSum;

  /* SignalConversion generated from: '<S159>/Omegadot' */
  *rty_Omegadot = localB->OutputInertia;

  /* SignalConversion generated from: '<S159>/ReactionTorque' */
  *rty_ReactionTorque = rtb_OutputSum;
}

/*
 * Derivatives for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */
void DrivetrainEv_Slipping_Deriv(B_Slipping_DrivetrainEv_T *localB,
  XDot_Slipping_DrivetrainEv_T *localXdot)
{
  /* Derivatives for Integrator: '<S159>/omega wheel' */
  localXdot->omegaWheel = localB->OutputInertia;
}

/* Function for Chart: '<S152>/Clutch' */
static boolean_T DrivetrainEv_detectLockup_o(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW,
  P_Clutch_DrivetrainEv_T *localP)
{
  boolean_T b_yn;

  /* Simulink Function 'detectLockup': '<S157>:63' */
  localB->Tout_o = Tout;
  localB->Tfmaxs_h = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S157>/detectLockup' */
  DrivetrainEv_detectLockup(localB->Tout_o, localB->Tfmaxs_h,
    &localB->detectLockup, &localDW->detectLockup, &localP->detectLockup);

  /* End of Outputs for SubSystem: '<S157>/detectLockup' */
  b_yn = localB->detectLockup.CombinatorialLogic;
  return b_yn;
}

/* Function for Chart: '<S152>/Clutch' */
static boolean_T DrivetrainEv_detectSlip_a(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_T *localB)
{
  boolean_T b_yn;

  /* Simulink Function 'detectSlip': '<S157>:65' */
  localB->Tout = Tout;
  localB->Tfmaxs = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S157>/detectSlip' */
  DrivetrainEv_detectSlip(localB->Tout, localB->Tfmaxs, &localB->detectSlip);

  /* End of Outputs for SubSystem: '<S157>/detectSlip' */
  b_yn = localB->detectSlip.RelationalOperator;
  return b_yn;
}

/* System initialize for atomic system: '<S152>/Clutch' */
void DrivetrainEv_Clutch_Init(B_Clutch_DrivetrainEv_T *localB,
  DW_Clutch_DrivetrainEv_T *localDW, P_Clutch_DrivetrainEv_T *localP,
  X_Clutch_DrivetrainEv_T *localX)
{
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = DrivetrainEv_IN_NO_ACTIVE_CHILD;
  localX->Slipping.omegaWheel = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* SystemInitialize for Function Call SubSystem: '<S157>/detectSlip' */
  DrivetrainEv_detectSlip_Init(&localB->detectSlip, &localP->detectSlip);

  /* End of SystemInitialize for SubSystem: '<S157>/detectSlip' */

  /* SystemInitialize for Function Call SubSystem: '<S157>/detectLockup' */
  DrivetrainEv_detectLockup_Init(&localB->detectLockup, &localDW->detectLockup,
    &localP->detectLockup);

  /* End of SystemInitialize for SubSystem: '<S157>/detectLockup' */

  /* SystemInitialize for IfAction SubSystem: '<S157>/Slipping' */
  DrivetrainEv_Slipping_Init(&localX->Slipping);

  /* End of SystemInitialize for SubSystem: '<S157>/Slipping' */
}

/* System reset for atomic system: '<S152>/Clutch' */
void DrivetrainEv_Clutch_Reset(B_Clutch_DrivetrainEv_T *localB,
  DW_Clutch_DrivetrainEv_T *localDW, X_Clutch_DrivetrainEv_T *localX)
{
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = DrivetrainEv_IN_NO_ACTIVE_CHILD;
  localX->Slipping.omegaWheel = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S157>/ Merge 2' */
  localB->ReactionTorque = 0.0;
}

/* Start for atomic system: '<S152>/Clutch' */
void DrivetrainEv_Clutch_Start(B_Clutch_DrivetrainEv_T *localB)
{
  localB->Tout = 0.0;
  localB->Tfmaxs = 0.0;
  localB->Tout_o = 0.0;
  localB->Tfmaxs_h = 0.0;

  /* Merge: '<S157>/ Merge ' */
  localB->Omega = 0.0;

  /* Merge: '<S157>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* Merge: '<S157>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* Merge: '<S157>/ Merge 3' */
  localB->Myb = 0.0;

  /* Start for Function Call SubSystem: '<S157>/detectSlip' */
  DrivetrainEv_detectSlip_Start(&localB->detectSlip);

  /* End of Start for SubSystem: '<S157>/detectSlip' */

  /* Start for Function Call SubSystem: '<S157>/detectLockup' */
  DrivetrainEv_detectLockup_Start(&localB->detectLockup);

  /* End of Start for SubSystem: '<S157>/detectLockup' */

  /* Start for IfAction SubSystem: '<S157>/Slipping' */
  DrivetrainEv_Slipping_Start(&localB->Omega, &localB->Omegadot,
    &localB->ReactionTorque, &localB->Myb, &localB->Slipping);

  /* End of Start for SubSystem: '<S157>/Slipping' */

  /* Start for IfAction SubSystem: '<S157>/Locked' */
  DrivetrainEv_Locked_Start(&localB->ReactionTorque, &localB->Omega,
    &localB->Omegadot, &localB->Myb);

  /* End of Start for SubSystem: '<S157>/Locked' */
}

/* Outputs for atomic system: '<S152>/Clutch' */
void DrivetrainEv_Clutch(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T
  rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_OmegaTol,
  B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW,
  P_Clutch_DrivetrainEv_T *localP, X_Clutch_DrivetrainEv_T *localX,
  XDis_Clutch_DrivetrainEv_T *localXdis)
{
  if (ssIsModeUpdateTimeStep(DrivetrainEv_M->rtS)) {
    localDW->lastMajorTime = rtmGetTaskTime(DrivetrainEv_M, 0);

    /* Chart: '<S152>/Clutch' */
    /* Gateway: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
    /* During: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
    if (localDW->is_active_c8_autolibshared == 0U) {
      /* Entry: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
      localDW->is_active_c8_autolibshared = 1U;

      /* Entry Internal: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
      /* Transition: '<S157>:18' */
      localX->Slipping.omegaWheel = DrivetrainEv_P.omegao;
      localDW->is_c8_autolibshared = DrivetrainEv_IN_Slipping;
      DrivetrainEv_Slipping_Enable(DrivetrainEv_M, &localXdis->Slipping);
      DrivetrainEv_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                            &localB->Omegadot, &localB->ReactionTorque,
                            &localB->Myb, &localB->Slipping, &localP->Slipping,
                            &localX->Slipping);
      localDW->Slipping_entered = true;
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
    } else if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Locked) {
      /* During 'Locked': '<S157>:2' */
      if (DrivetrainEv_detectSlip_a(rtu_Tout, rtu_Tfmaxs, localB)) {
        /* Transition: '<S157>:17' */
        localX->Slipping.omegaWheel = 0.0;
        DrivetrainEv_Locked_Disable(DrivetrainEv_M);
        localDW->Locked_entered = false;
        localDW->is_c8_autolibshared = DrivetrainEv_IN_Slipping;
        DrivetrainEv_Slipping_Enable(DrivetrainEv_M, &localXdis->Slipping);
        DrivetrainEv_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                              &localB->Omegadot, &localB->ReactionTorque,
                              &localB->Myb, &localB->Slipping, &localP->Slipping,
                              &localX->Slipping);
        localDW->Slipping_entered = true;
        ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      }

      /* During 'Slipping': '<S157>:62' */
    } else if (DrivetrainEv_detectLockup_o(rtu_Tout, rtu_Tfmaxs, localB, localDW,
                localP) && (fabs(localB->Omega) <= rtp_OmegaTol)) {
      /* Transition: '<S157>:16' */
      DrivetrainEv_Slipping_Disable(DrivetrainEv_M, &localXdis->Slipping);
      localDW->Slipping_entered = false;
      localDW->is_c8_autolibshared = DrivetrainEv_IN_Locked;
      DrivetrainEv_Locked_Enable(DrivetrainEv_M);
      DrivetrainEv_Locked(DrivetrainEv_M, rtu_Tout, &localB->ReactionTorque,
                          &localB->Omega, &localB->Omegadot, &localB->Myb,
                          &localP->Locked);
      localDW->Locked_entered = true;
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
    }

    /* End of Chart: '<S152>/Clutch' */
  }

  if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Locked) {
    /* During 'Locked': '<S157>:2' */
    if (!localDW->Locked_entered) {
      DrivetrainEv_Locked(DrivetrainEv_M, rtu_Tout, &localB->ReactionTorque,
                          &localB->Omega, &localB->Omegadot, &localB->Myb,
                          &localP->Locked);
    } else {
      localDW->Locked_entered = false;
    }

    /* During 'Slipping': '<S157>:62' */
  } else if (!localDW->Slipping_entered) {
    DrivetrainEv_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                          &localB->Omegadot, &localB->ReactionTorque,
                          &localB->Myb, &localB->Slipping, &localP->Slipping,
                          &localX->Slipping);
  } else {
    localDW->Slipping_entered = false;
  }
}

/* Derivatives for atomic system: '<S152>/Clutch' */
void DrivetrainEv_Clutch_Deriv(B_Clutch_DrivetrainEv_T *localB,
  DW_Clutch_DrivetrainEv_T *localDW, XDot_Clutch_DrivetrainEv_T *localXdot)
{
  localXdot->Slipping.omegaWheel = 0.0;
  if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Slipping) {
    DrivetrainEv_Slipping_Deriv(&localB->Slipping, &localXdot->Slipping);
  }

  if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Locked) {
    /* During 'Locked': '<S157>:2' */
    if (localDW->Locked_entered) {
      localDW->Locked_entered = false;
    }

    /* During 'Slipping': '<S157>:62' */
  } else if (localDW->Slipping_entered) {
    localDW->Slipping_entered = false;
  }
}

/* Function for Chart: '<S194>/Clutch' */
static boolean_T DrivetrainEv_detectLockup_p(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW,
  P_Clutch_DrivetrainEv_b_T *localP)
{
  boolean_T b_yn;

  /* Simulink Function 'detectLockup': '<S199>:63' */
  localB->Tout_n = Tout;
  localB->Tfmaxs_e = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S199>/detectLockup' */
  DrivetrainEv_detectLockup(localB->Tout_n, localB->Tfmaxs_e,
    &localB->detectLockup, &localDW->detectLockup, &localP->detectLockup);

  /* End of Outputs for SubSystem: '<S199>/detectLockup' */
  b_yn = localB->detectLockup.CombinatorialLogic;
  return b_yn;
}

/* Function for Chart: '<S194>/Clutch' */
static boolean_T DrivetrainEv_detectSlip_e(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainEv_g_T *localB)
{
  boolean_T b_yn;

  /* Simulink Function 'detectSlip': '<S199>:65' */
  localB->Tout = Tout;
  localB->Tfmaxs = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S199>/detectSlip' */
  DrivetrainEv_detectSlip(localB->Tout, localB->Tfmaxs, &localB->detectSlip);

  /* End of Outputs for SubSystem: '<S199>/detectSlip' */
  b_yn = localB->detectSlip.RelationalOperator;
  return b_yn;
}

/* System initialize for atomic system: '<S194>/Clutch' */
void DrivetrainEv_Clutch_o_Init(B_Clutch_DrivetrainEv_g_T *localB,
  DW_Clutch_DrivetrainEv_k_T *localDW, P_Clutch_DrivetrainEv_b_T *localP,
  X_Clutch_DrivetrainEv_m_T *localX)
{
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = Drivetrain_IN_NO_ACTIVE_CHILD_e;
  localX->Slipping.omegaWheel = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* SystemInitialize for Function Call SubSystem: '<S199>/detectSlip' */
  DrivetrainEv_detectSlip_Init(&localB->detectSlip, &localP->detectSlip);

  /* End of SystemInitialize for SubSystem: '<S199>/detectSlip' */

  /* SystemInitialize for Function Call SubSystem: '<S199>/detectLockup' */
  DrivetrainEv_detectLockup_Init(&localB->detectLockup, &localDW->detectLockup,
    &localP->detectLockup);

  /* End of SystemInitialize for SubSystem: '<S199>/detectLockup' */

  /* SystemInitialize for IfAction SubSystem: '<S199>/Slipping' */
  DrivetrainEv_Slipping_Init(&localX->Slipping);

  /* End of SystemInitialize for SubSystem: '<S199>/Slipping' */
}

/* System reset for atomic system: '<S194>/Clutch' */
void DrivetrainEv_Clutch_a_Reset(B_Clutch_DrivetrainEv_g_T *localB,
  DW_Clutch_DrivetrainEv_k_T *localDW, X_Clutch_DrivetrainEv_m_T *localX)
{
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = Drivetrain_IN_NO_ACTIVE_CHILD_e;
  localX->Slipping.omegaWheel = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S199>/ Merge 2' */
  localB->ReactionTorque = 0.0;
}

/* Start for atomic system: '<S194>/Clutch' */
void DrivetrainEv_Clutch_d_Start(B_Clutch_DrivetrainEv_g_T *localB)
{
  localB->Tout = 0.0;
  localB->Tfmaxs = 0.0;
  localB->Tout_n = 0.0;
  localB->Tfmaxs_e = 0.0;

  /* Merge: '<S199>/ Merge ' */
  localB->Omega = 0.0;

  /* Merge: '<S199>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* Merge: '<S199>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* Merge: '<S199>/ Merge 3' */
  localB->Myb = 0.0;

  /* Start for Function Call SubSystem: '<S199>/detectSlip' */
  DrivetrainEv_detectSlip_Start(&localB->detectSlip);

  /* End of Start for SubSystem: '<S199>/detectSlip' */

  /* Start for Function Call SubSystem: '<S199>/detectLockup' */
  DrivetrainEv_detectLockup_Start(&localB->detectLockup);

  /* End of Start for SubSystem: '<S199>/detectLockup' */

  /* Start for IfAction SubSystem: '<S199>/Slipping' */
  DrivetrainEv_Slipping_Start(&localB->Omega, &localB->Omegadot,
    &localB->ReactionTorque, &localB->Myb, &localB->Slipping);

  /* End of Start for SubSystem: '<S199>/Slipping' */

  /* Start for IfAction SubSystem: '<S199>/Locked' */
  DrivetrainEv_Locked_Start(&localB->ReactionTorque, &localB->Omega,
    &localB->Omegadot, &localB->Myb);

  /* End of Start for SubSystem: '<S199>/Locked' */
}

/* Outputs for atomic system: '<S194>/Clutch' */
void DrivetrainEv_Clutch_b(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_OmegaTol,
  B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW,
  P_Clutch_DrivetrainEv_b_T *localP, X_Clutch_DrivetrainEv_m_T *localX,
  XDis_Clutch_DrivetrainEv_e_T *localXdis)
{
  if (ssIsModeUpdateTimeStep(DrivetrainEv_M->rtS)) {
    localDW->lastMajorTime = rtmGetTaskTime(DrivetrainEv_M, 0);

    /* Chart: '<S194>/Clutch' */
    /* Gateway: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
    /* During: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
    if (localDW->is_active_c8_autolibshared == 0U) {
      /* Entry: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
      localDW->is_active_c8_autolibshared = 1U;

      /* Entry Internal: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
      /* Transition: '<S199>:18' */
      localX->Slipping.omegaWheel = DrivetrainEv_P.omegao;
      localDW->is_c8_autolibshared = DrivetrainEv_IN_Slipping_o;
      DrivetrainEv_Slipping_Enable(DrivetrainEv_M, &localXdis->Slipping);
      DrivetrainEv_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                            &localB->Omegadot, &localB->ReactionTorque,
                            &localB->Myb, &localB->Slipping, &localP->Slipping,
                            &localX->Slipping);
      localDW->Slipping_entered = true;
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
    } else if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Locked_j) {
      /* During 'Locked': '<S199>:2' */
      if (DrivetrainEv_detectSlip_e(rtu_Tout, rtu_Tfmaxs, localB)) {
        /* Transition: '<S199>:17' */
        localX->Slipping.omegaWheel = 0.0;
        DrivetrainEv_Locked_Disable(DrivetrainEv_M);
        localDW->Locked_entered = false;
        localDW->is_c8_autolibshared = DrivetrainEv_IN_Slipping_o;
        DrivetrainEv_Slipping_Enable(DrivetrainEv_M, &localXdis->Slipping);
        DrivetrainEv_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                              &localB->Omegadot, &localB->ReactionTorque,
                              &localB->Myb, &localB->Slipping, &localP->Slipping,
                              &localX->Slipping);
        localDW->Slipping_entered = true;
        ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      }

      /* During 'Slipping': '<S199>:62' */
    } else if (DrivetrainEv_detectLockup_p(rtu_Tout, rtu_Tfmaxs, localB, localDW,
                localP) && (fabs(localB->Omega) <= rtp_OmegaTol)) {
      /* Transition: '<S199>:16' */
      DrivetrainEv_Slipping_Disable(DrivetrainEv_M, &localXdis->Slipping);
      localDW->Slipping_entered = false;
      localDW->is_c8_autolibshared = DrivetrainEv_IN_Locked_j;
      DrivetrainEv_Locked_Enable(DrivetrainEv_M);
      DrivetrainEv_Locked(DrivetrainEv_M, rtu_Tout, &localB->ReactionTorque,
                          &localB->Omega, &localB->Omegadot, &localB->Myb,
                          &localP->Locked);
      localDW->Locked_entered = true;
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
    }

    /* End of Chart: '<S194>/Clutch' */
  }

  if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Locked_j) {
    /* During 'Locked': '<S199>:2' */
    if (!localDW->Locked_entered) {
      DrivetrainEv_Locked(DrivetrainEv_M, rtu_Tout, &localB->ReactionTorque,
                          &localB->Omega, &localB->Omegadot, &localB->Myb,
                          &localP->Locked);
    } else {
      localDW->Locked_entered = false;
    }

    /* During 'Slipping': '<S199>:62' */
  } else if (!localDW->Slipping_entered) {
    DrivetrainEv_Slipping(rtu_Tfmaxk, rtu_Tout, &localB->Omega,
                          &localB->Omegadot, &localB->ReactionTorque,
                          &localB->Myb, &localB->Slipping, &localP->Slipping,
                          &localX->Slipping);
  } else {
    localDW->Slipping_entered = false;
  }
}

/* Derivatives for atomic system: '<S194>/Clutch' */
void DrivetrainEv_Clutch_m_Deriv(B_Clutch_DrivetrainEv_g_T *localB,
  DW_Clutch_DrivetrainEv_k_T *localDW, XDot_Clutch_DrivetrainEv_i_T *localXdot)
{
  localXdot->Slipping.omegaWheel = 0.0;
  if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Slipping_o) {
    DrivetrainEv_Slipping_Deriv(&localB->Slipping, &localXdot->Slipping);
  }

  if (localDW->is_c8_autolibshared == DrivetrainEv_IN_Locked_j) {
    /* During 'Locked': '<S199>:2' */
    if (localDW->Locked_entered) {
      localDW->Locked_entered = false;
    }

    /* During 'Slipping': '<S199>:62' */
  } else if (localDW->Slipping_entered) {
    localDW->Slipping_entered = false;
  }
}

/* Function for MATLAB Function: '<S137>/Simple Magic Tire' */
static void DrivetrainEv_automltirediv0prot(real_T u, real_T tol, real_T *y,
  real_T *yabs)
{
  real_T varargin_1;
  int32_T trueCount;
  boolean_T ytolinds;
  *yabs = fabs(u);
  ytolinds = (*yabs < tol);
  trueCount = 0;
  if (ytolinds) {
    trueCount = 1;
  }

  if (trueCount - 1 >= 0) {
    varargin_1 = *yabs / tol;
    varargin_1 = 2.0 * tol / (3.0 - varargin_1 * varargin_1);
  }

  *y = *yabs;
  if (ytolinds) {
    *y = varargin_1;
  }

  *yabs = *y;
  ytolinds = (u < 0.0);
  trueCount = -1;
  if (ytolinds) {
    trueCount = 0;
  }

  if (trueCount >= 0) {
    varargin_1 = -*y;
  }

  if (ytolinds) {
    *y = varargin_1;
  }
}

/* Function for MATLAB Function: '<S137>/Simple Magic Tire' */
static real_T Drivetrain_automltirepurelongFx(real_T kappa, real_T Vx, real_T Fz,
  real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN, real_T b_FZMAX,
  real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX, real_T PCX1,
  real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2, real_T PEX3,
  real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1, real_T PHX2,
  real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3, real_T PPX4,
  real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T lam_Kxkappa, real_T
  lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx)
{
  real_T Cx;
  real_T Cx_tmp;
  real_T Fxo;
  real_T a__1;
  real_T b_idx_0;
  real_T d_idx_0;
  real_T dfz;
  real_T dpi;
  real_T g_idx_0;
  real_T h_idx_0;
  real_T kappa_x;
  real_T lam_mux_star;
  b_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    b_idx_0 = b_FZMIN;
  }

  if (b_idx_0 > b_FZMAX) {
    b_idx_0 = b_FZMAX;
  }

  d_idx_0 = press;
  if (press < PRESMIN) {
    d_idx_0 = PRESMIN;
  }

  if (d_idx_0 > PRESMAX) {
    d_idx_0 = PRESMAX;
  }

  dpi = (d_idx_0 - NOMPRES) / NOMPRES;
  dfz = (b_idx_0 - FNOMIN * lam_Fzo) / FNOMIN * lam_Fzo;
  kappa_x = (PHX2 * dfz + PHX1) * lam_Hx + kappa;
  lam_mux_star = -fabs(Vx) * kappa;
  lam_mux_star = lam_mux / (sqrt(lam_mux_star * lam_mux_star) * lam_muV / LONGVL
    + 1.0);
  Cx = PCX1 * lam_Cx;
  d_idx_0 = Cx;
  if (Cx < 0.0) {
    d_idx_0 = 0.0;
  }

  Cx_tmp = dpi * dpi;
  Cx = ((PPX3 * dpi + 1.0) + Cx_tmp * PPX4) * (PDX2 * dfz + PDX1) * (1.0 -
    b_gamma * b_gamma * PDX3) * lam_mux_star * b_idx_0;
  g_idx_0 = Cx;
  if (Cx < 0.0) {
    g_idx_0 = 0.0;
  }

  Cx = ((PEX2 * dfz + PEX1) + dfz * dfz * PEX3) * (1.0 - tanh(10.0 * kappa_x) *
    PEX4) * lam_Ex;
  h_idx_0 = Cx;
  if (Cx > 1.0) {
    h_idx_0 = 1.0;
  }

  DrivetrainEv_automltirediv0prot(d_idx_0 * g_idx_0, 0.1, &Cx, &a__1);
  dpi = (PKX2 * dfz + PKX1) * b_idx_0 * exp(PKX3 * dfz) * ((PPX1 * dpi + 1.0) +
    Cx_tmp * PPX2) * lam_Kxkappa / Cx * kappa_x;
  Fxo = sin(atan(dpi - (dpi - atan(dpi)) * h_idx_0) * d_idx_0) * g_idx_0 + (PVX2
    * dfz + PVX1) * b_idx_0 * (lam_mux_star * 10.0 / (9.0 * lam_mux_star + 1.0))
    * lam_Vx;
  return Fxo;
}

/* Function for MATLAB Function: '<S137>/Simple Magic Tire' */
static real_T DrivetrainE_automltirelongMySAE(real_T Fz, real_T omega, real_T Vx,
  real_T press, real_T QSY1, real_T QSY2, real_T QSY3, real_T QSY7, real_T QSY8,
  real_T UNLOADED_RADIUS, real_T b_FZMIN, real_T b_FZMAX, real_T PRESMIN, real_T
  PRESMAX)
{
  real_T My;
  real_T b_idx_0;
  real_T d_idx_0;
  b_idx_0 = press;
  if (press < PRESMIN) {
    b_idx_0 = PRESMIN;
  }

  if (b_idx_0 > PRESMAX) {
    b_idx_0 = PRESMAX;
  }

  d_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    d_idx_0 = b_FZMIN;
  }

  if (d_idx_0 > b_FZMAX) {
    d_idx_0 = b_FZMAX;
  }

  My = ((QSY2 * fabs(Vx) + QSY1) + Vx * Vx * QSY3) * (tanh(omega) *
    UNLOADED_RADIUS) * (rt_powd_snf(d_idx_0, QSY7) * rt_powd_snf(b_idx_0, QSY8));
  return My;
}

/* Function for MATLAB Function: '<S137>/Simple Magic Tire' */
static real_T Drivetra_automltirelongMyMapped(real_T omega, real_T Fz, real_T Vx,
  const real_T VxMy[3], const real_T FzMy[3], const real_T MyMap[9], real_T
  b_FZMAX)
{
  real_T MyMap_0[9];
  real_T My;
  real_T b_idx_0;
  int32_T i;
  b_idx_0 = Fz;
  if (Fz < 0.0) {
    b_idx_0 = 0.0;
  }

  if (b_idx_0 > b_FZMAX) {
    b_idx_0 = b_FZMAX;
  }

  for (i = 0; i < 3; i++) {
    MyMap_0[3 * i] = MyMap[i];
    MyMap_0[3 * i + 1] = MyMap[i + 3];
    MyMap_0[3 * i + 2] = MyMap[i + 6];
  }

  My = tanh(omega) * interp2_gQgEamix(VxMy, FzMy, MyMap_0, Vx, b_idx_0);
  return My;
}

/* Function for MATLAB Function: '<S137>/Simple Magic Tire' */
static real_T DrivetrainE_automltirelongMyISO(real_T Fz, real_T omega, real_T
  Tamb, real_T Fpl, real_T Cr, real_T Kt, real_T Tmeas, real_T Re, real_T
  b_FZMIN, real_T b_FZMAX, real_T TMIN, real_T TMAX)
{
  real_T b_idx_0;
  real_T d_idx_0;
  b_idx_0 = Tamb;
  if (Tamb < TMIN) {
    b_idx_0 = TMIN;
  }

  if (b_idx_0 > TMAX) {
    b_idx_0 = TMAX;
  }

  d_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    d_idx_0 = b_FZMIN;
  }

  if (d_idx_0 > b_FZMAX) {
    d_idx_0 = b_FZMAX;
  }

  return (d_idx_0 * Cr * 0.001 / ((b_idx_0 - Tmeas) * Kt + 1.0) + Fpl) * (-tanh
    (omega) * Re);
}

/*
 * Output and update for atomic system:
 *    '<S137>/Simple Magic Tire'
 *    '<S179>/Simple Magic Tire'
 */
void DrivetrainEv_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz, real_T
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
  *localB)
{
  real_T rtu_FxMap_0[9];
  real_T Re;
  real_T a__1;
  real_T b_idx_0;
  real_T c_idx_0;
  int32_T trueCount;

  /* MATLAB Function 'Longitudinal Wheel/Longitudinal Basic Magic Tire/Simple Magic Tire': '<S147>:1' */
  /* '<S147>:1:36' */
  switch ((int32_T)rtu_vertType) {
   case 0:
    /* '<S147>:1:7' */
    /* '<S147>:1:8' */
    Re = rtu_ReNom;
    break;

   case 1:
    /* '<S147>:1:10' */
    Re = 0.0 * fabs(rtu_Omega) + rtu_rho;
    b_idx_0 = Re;
    if (Re < 0.001) {
      b_idx_0 = 0.001;
    }

    Re = b_idx_0;

    /* '<S147>:1:10' */
    break;

   case 2:
    /* '<S147>:1:13' */
    Re = rtu_ReNom;

    /* '<S147>:1:14' */
    break;

   default:
    /* '<S147>:1:16' */
    Re = rtu_ReNom;

    /* '<S147>:1:17' */
    break;
  }

  /* '<S147>:1:19' */
  DrivetrainEv_automltirediv0prot(rtu_Vx, DrivetrainEv_P.VXLOW, &a__1, &b_idx_0);
  a__1 = (rtu_ReNom * rtu_Omega - rtu_Vx) / b_idx_0;
  c_idx_0 = a__1;
  trueCount = 0;
  if (a__1 < -DrivetrainEv_P.kappamax) {
    trueCount = 1;
  }

  if (trueCount - 1 >= 0) {
    c_idx_0 = -DrivetrainEv_P.kappamax;
  }

  b_idx_0 = c_idx_0;
  if (c_idx_0 > DrivetrainEv_P.kappamax) {
    b_idx_0 = DrivetrainEv_P.kappamax;
  }

  switch ((int32_T)rtu_FxType) {
   case 0:
    /* '<S147>:1:22' */
    c_idx_0 = rtu_Fz;
    if (rtu_Fz < DrivetrainEv_P.FZMIN) {
      c_idx_0 = DrivetrainEv_P.FZMIN;
    }

    if (c_idx_0 > DrivetrainEv_P.FZMAX) {
      c_idx_0 = DrivetrainEv_P.FZMAX;
    }

    /* SignalConversion generated from: '<S147>/ SFunction ' */
    a__1 = b_idx_0 * rtu_MagicPeak_n;
    a__1 = sin(atan(a__1 - (a__1 - atan(a__1)) * rtu_MagicPeak_a) *
               rtu_MagicPeak_b) * rtu_MagicPeak * (c_idx_0 * rtu_MagicPeak_i);
    break;

   case 2:
    /* '<S147>:1:25' */
    a__1 = Drivetrain_automltirepurelongFx(b_idx_0, rtu_Vx, rtu_Fz,
      rtu_MagicFxo[0], rtu_MagicFxo[1], rtu_MagicFxo[2], DrivetrainEv_P.FZMIN,
      DrivetrainEv_P.FZMAX, rtu_MagicFxo[3], rtu_MagicFxo[4], rtu_MagicFxo[5],
      rtu_MagicFxo[6], rtu_MagicFxo[7], rtu_MagicFxo[8], rtu_MagicFxo[9],
      rtu_MagicFxo[10], rtu_MagicFxo[11], rtu_MagicFxo[12], rtu_MagicFxo[13],
      rtu_MagicFxo[14], rtu_MagicFxo[15], rtu_MagicFxo[16], rtu_MagicFxo[17],
      rtu_MagicFxo[18], rtu_MagicFxo[19], rtu_MagicFxo[20], rtu_MagicFxo[21],
      rtu_MagicFxo[22], rtu_MagicFxo[23], rtu_MagicFxo[24], rtu_MagicFxo[25],
      rtu_MagicFxo[26], rtu_MagicFxo[27], rtu_MagicFxo[28], rtu_MagicFxo[29],
      rtu_MagicFxo[30], rtu_MagicFxo[31], rtu_MagicFxo[32], rtu_MagicFxo[33]);
    break;

   case 3:
    /* '<S147>:1:38' */
    c_idx_0 = rtu_Fz;
    if (rtu_Fz < DrivetrainEv_P.FZMIN) {
      c_idx_0 = DrivetrainEv_P.FZMIN;
    }

    if (c_idx_0 > DrivetrainEv_P.FZMAX) {
      c_idx_0 = DrivetrainEv_P.FZMAX;
    }

    for (trueCount = 0; trueCount < 3; trueCount++) {
      rtu_FxMap_0[3 * trueCount] = rtu_FxMap[trueCount];
      rtu_FxMap_0[3 * trueCount + 1] = rtu_FxMap[trueCount + 3];
      rtu_FxMap_0[3 * trueCount + 2] = rtu_FxMap[trueCount + 6];
    }

    /* SignalConversion generated from: '<S147>/ SFunction ' */
    a__1 = interp2_gQgEamix(rtu_kappaFx, rtu_FzFx, rtu_FxMap_0, b_idx_0, c_idx_0)
      * rtu_MagicPeak_i;
    break;

   default:
    /* '<S147>:1:40' */
    a__1 = 0.0;

    /* '<S147>:1:41' */
    break;
  }

  switch ((int32_T)rtu_rollingType) {
   case 0:
    /* '<S147>:1:46' */
    localB->My = 0.0;
    break;

   case 1:
    /* SignalConversion generated from: '<S147>/ SFunction ' */
    /* '<S147>:1:48' */
    localB->My = DrivetrainE_automltirelongMySAE(rtu_Fz, rtu_Omega, rtu_Vx,
      rtu_RollRes, rtu_RollRes_n, rtu_RollRes_c, rtu_RollRes_b, rtu_RollRes_d2,
      rtu_RollRes_o, Re, DrivetrainEv_P.FZMIN, DrivetrainEv_P.FZMAX,
      rtu_RollRes_fo, rtu_RollRes_p);
    break;

   case 2:
    /* SignalConversion generated from: '<S147>/ SFunction ' */
    /* '<S147>:1:51' */
    b_idx_0 = rtu_RollRes;
    if (rtu_RollRes < rtu_RollRes_fo) {
      b_idx_0 = rtu_RollRes_fo;
    }

    if (b_idx_0 > rtu_RollRes_p) {
      b_idx_0 = rtu_RollRes_p;
    }

    c_idx_0 = rtu_Fz;
    if (rtu_Fz < 0.0) {
      c_idx_0 = 0.0;
    }

    if (c_idx_0 > DrivetrainEv_P.FZMAX) {
      c_idx_0 = DrivetrainEv_P.FZMAX;
    }

    /* SignalConversion generated from: '<S147>/ SFunction ' */
    localB->My = ((((rtu_RollRes_c * a__1 / rtu_RollRes_j + rtu_RollRes_n) +
                    fabs(rtu_Vx / 16.7) * rtu_RollRes_b) + rt_powd_snf(rtu_Vx /
      16.7, 4.0) * rtu_RollRes_h) + (c_idx_0 * rtu_RollRes_i / rtu_RollRes_j +
      rtu_RollRes_d1) * (rtu_RollRes_bt * rtu_RollRes_bt)) * (tanh(rtu_Omega) *
      c_idx_0 * rtu_RollRes_k) * (rt_powd_snf(c_idx_0 / rtu_RollRes_j,
      rtu_RollRes_d2) * rt_powd_snf(b_idx_0 / rtu_RollRes_d, rtu_RollRes_o)) *
      rtu_RollRes_f;
    break;

   case 3:
    /* '<S147>:1:54' */
    localB->My = -Drivetra_automltirelongMyMapped(rtu_Omega, rtu_Fz, rtu_Vx,
      rtu_VxMy, rtu_FzMy, rtu_MyMap, DrivetrainEv_P.FZMAX);
    break;

   case 4:
    /* SignalConversion generated from: '<S147>/ SFunction ' */
    /* '<S147>:1:56' */
    localB->My = -DrivetrainE_automltirelongMyISO(rtu_Fz, rtu_Omega, rtu_RollRes,
      rtu_RollRes_n, rtu_RollRes_c, rtu_RollRes_b, rtu_RollRes_h, Re,
      DrivetrainEv_P.FZMIN, DrivetrainEv_P.FZMAX, rtu_RollRes_fo, rtu_RollRes_p);
    break;

   default:
    /* '<S147>:1:59' */
    localB->My = 0.0;
    break;
  }

  localB->Fx = a__1;
}

/* System initialize for referenced model: 'DrivetrainEv' */
void DrivetrainEv_Init(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T
  *localX)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr_l;
  int32_T ForEach_itr_h;

  /* InitializeConditions for Integrator: '<S72>/U,w' incorporates:
   *  Integrator: '<S15>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainEv_M)) {
    localX->Uw_CSTATE[0] = 0.0;
    localX->Uw_CSTATE[1] = 0.0;
    localX->Integrator_CSTATE_n = 0.0;
  }

  localDW->Uw_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S72>/U,w' */

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  localX->Integrator_CSTATE[0] = DrivetrainEv_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S72>/Position' */
  localX->Position_CSTATE[0] = DrivetrainEv_P.uDOFBodyAxes_pos_ini[0];

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  localX->Integrator_CSTATE[1] = DrivetrainEv_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S72>/Position' */
  localX->Position_CSTATE[1] = DrivetrainEv_P.uDOFBodyAxes_pos_ini[1];

  /* InitializeConditions for Integrator: '<S72>/Theta' */
  localX->Theta_CSTATE = DrivetrainEv_P.theta_o_Veh;

  /* InitializeConditions for Integrator: '<S72>/q' */
  localX->q_CSTATE = DrivetrainEv_P.q_o;

  /* InitializeConditions for Memory: '<S15>/Memory' */
  localDW->Memory_PreviousInput = DrivetrainEv_P.Memory_InitialCondition;

  /* InitializeConditions for Integrator: '<S15>/Integrator' */
  localDW->Integrator_IWORK = 1;

  /* InitializeConditions for Integrator: '<S14>/Integrator' */
  localX->Integrator_CSTATE_f = DrivetrainEv_P.theta_o;

  /* InitializeConditions for Integrator: '<S170>/Integrator' */
  localX->Integrator_CSTATE_e = DrivetrainEv_P.Integrator_IC_c;

  /* InitializeConditions for Integrator: '<S212>/Integrator' */
  localX->Integrator_CSTATE_b = DrivetrainEv_P.Integrator_IC_i;

  /* InitializeConditions for Integrator: '<S94>/Integrator3' */
  localX->Integrator3_CSTATE = DrivetrainEv_P.xdot_o;

  /* InitializeConditions for Memory: '<S51>/Memory' */
  localDW->Memory_PreviousInput_d = DrivetrainEv_P.Memory_InitialCondition_f;

  /* InitializeConditions for Integrator: '<S51>/Integrator' incorporates:
   *  Integrator: '<S26>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainEv_M)) {
    localX->Integrator_CSTATE_g = 0.0;
    localX->Integrator_CSTATE_gx[0] = 0.0;
    localX->Integrator_CSTATE_gx[1] = 0.0;
  }

  localDW->Integrator_IWORK_g = 1;

  /* End of InitializeConditions for Integrator: '<S51>/Integrator' */

  /* InitializeConditions for Integrator: '<S50>/Integrator' */
  localX->Integrator_CSTATE_bn = DrivetrainEv_P.theta_o;

  /* InitializeConditions for Integrator: '<S59>/Integrator' */
  localX->Integrator_CSTATE_i = DrivetrainEv_P.omega_o;

  /* InitializeConditions for Integrator: '<S26>/Integrator' */
  localDW->Integrator_IWORK_i = 1;

  /* SystemInitialize for Iterator SubSystem: '<S141>/Clutch' */
  for (ForEach_itr_h = 0; ForEach_itr_h < 1; ForEach_itr_h++) {
    /* SystemInitialize for Iterator SubSystem: '<S141>/Clutch' */
    /* SystemInitialize for Chart: '<S152>/Clutch' */
    DrivetrainEv_Clutch_Init(&localB->CoreSubsys[ForEach_itr_h].sf_Clutch,
      &localDW->CoreSubsys[ForEach_itr_h].sf_Clutch,
      &DrivetrainEv_P.CoreSubsys.sf_Clutch, &localX->CoreSubsys[ForEach_itr_h].
      sf_Clutch);

    /* End of SystemInitialize for SubSystem: '<S141>/Clutch' */
  }

  /* End of SystemInitialize for SubSystem: '<S141>/Clutch' */
  /* SystemInitialize for Iterator SubSystem: '<S183>/Clutch' */
  for (ForEach_itr_l = 0; ForEach_itr_l < 1; ForEach_itr_l++) {
    /* SystemInitialize for Iterator SubSystem: '<S183>/Clutch' */
    /* SystemInitialize for Chart: '<S194>/Clutch' */
    DrivetrainEv_Clutch_o_Init(&localB->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
      &localDW->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
      &DrivetrainEv_P.CoreSubsys_k.sf_Clutch, &localX->
      CoreSubsys_k[ForEach_itr_l].sf_Clutch);

    /* End of SystemInitialize for SubSystem: '<S183>/Clutch' */
  }

  /* End of SystemInitialize for SubSystem: '<S183>/Clutch' */
}

/* System reset for referenced model: 'DrivetrainEv' */
void DrivetrainEv_Reset(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M,
  B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T
  *localX)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr_l;
  int32_T ForEach_itr_h;

  /* InitializeConditions for Integrator: '<S72>/U,w' incorporates:
   *  Integrator: '<S15>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainEv_M)) {
    localX->Uw_CSTATE[0] = 0.0;
    localX->Uw_CSTATE[1] = 0.0;
    localX->Integrator_CSTATE_n = 0.0;
  }

  localDW->Uw_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S72>/U,w' */

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  localX->Integrator_CSTATE[0] = DrivetrainEv_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S72>/Position' */
  localX->Position_CSTATE[0] = DrivetrainEv_P.uDOFBodyAxes_pos_ini[0];

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  localX->Integrator_CSTATE[1] = DrivetrainEv_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S72>/Position' */
  localX->Position_CSTATE[1] = DrivetrainEv_P.uDOFBodyAxes_pos_ini[1];

  /* InitializeConditions for Integrator: '<S72>/Theta' */
  localX->Theta_CSTATE = DrivetrainEv_P.theta_o_Veh;

  /* InitializeConditions for Integrator: '<S72>/q' */
  localX->q_CSTATE = DrivetrainEv_P.q_o;

  /* InitializeConditions for Memory: '<S15>/Memory' */
  localDW->Memory_PreviousInput = DrivetrainEv_P.Memory_InitialCondition;

  /* InitializeConditions for Integrator: '<S15>/Integrator' */
  localDW->Integrator_IWORK = 1;

  /* InitializeConditions for Integrator: '<S14>/Integrator' */
  localX->Integrator_CSTATE_f = DrivetrainEv_P.theta_o;

  /* InitializeConditions for Integrator: '<S170>/Integrator' */
  localX->Integrator_CSTATE_e = DrivetrainEv_P.Integrator_IC_c;

  /* InitializeConditions for Integrator: '<S212>/Integrator' */
  localX->Integrator_CSTATE_b = DrivetrainEv_P.Integrator_IC_i;

  /* InitializeConditions for Integrator: '<S94>/Integrator3' */
  localX->Integrator3_CSTATE = DrivetrainEv_P.xdot_o;

  /* InitializeConditions for Memory: '<S51>/Memory' */
  localDW->Memory_PreviousInput_d = DrivetrainEv_P.Memory_InitialCondition_f;

  /* InitializeConditions for Integrator: '<S51>/Integrator' incorporates:
   *  Integrator: '<S26>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainEv_M)) {
    localX->Integrator_CSTATE_g = 0.0;
    localX->Integrator_CSTATE_gx[0] = 0.0;
    localX->Integrator_CSTATE_gx[1] = 0.0;
  }

  localDW->Integrator_IWORK_g = 1;

  /* End of InitializeConditions for Integrator: '<S51>/Integrator' */

  /* InitializeConditions for Integrator: '<S50>/Integrator' */
  localX->Integrator_CSTATE_bn = DrivetrainEv_P.theta_o;

  /* InitializeConditions for Integrator: '<S59>/Integrator' */
  localX->Integrator_CSTATE_i = DrivetrainEv_P.omega_o;

  /* InitializeConditions for Integrator: '<S26>/Integrator' */
  localDW->Integrator_IWORK_i = 1;

  /* SystemReset for Iterator SubSystem: '<S141>/Clutch' */
  for (ForEach_itr_h = 0; ForEach_itr_h < 1; ForEach_itr_h++) {
    /* SystemReset for Iterator SubSystem: '<S141>/Clutch' */
    /* SystemReset for Chart: '<S152>/Clutch' */
    DrivetrainEv_Clutch_Reset(&localB->CoreSubsys[ForEach_itr_h].sf_Clutch,
      &localDW->CoreSubsys[ForEach_itr_h].sf_Clutch, &localX->
      CoreSubsys[ForEach_itr_h].sf_Clutch);

    /* End of SystemReset for SubSystem: '<S141>/Clutch' */
  }

  /* End of SystemReset for SubSystem: '<S141>/Clutch' */
  /* SystemReset for Iterator SubSystem: '<S183>/Clutch' */
  for (ForEach_itr_l = 0; ForEach_itr_l < 1; ForEach_itr_l++) {
    /* SystemReset for Iterator SubSystem: '<S183>/Clutch' */
    /* SystemReset for Chart: '<S194>/Clutch' */
    DrivetrainEv_Clutch_a_Reset(&localB->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
      &localDW->CoreSubsys_k[ForEach_itr_l].sf_Clutch, &localX->
      CoreSubsys_k[ForEach_itr_l].sf_Clutch);

    /* End of SystemReset for SubSystem: '<S183>/Clutch' */
  }

  /* End of SystemReset for SubSystem: '<S183>/Clutch' */
}

/* Start for referenced model: 'DrivetrainEv' */
void DrivetrainEv_Start(B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_l;
  int32_T ForEach_itr_h;

  /* Start for Iterator SubSystem: '<S75>/rotation' */
  for (ForEach_itr = 0; ForEach_itr < 4; ForEach_itr++) {
    /* Start for Constant: '<S128>/psi' */
    localB->CoreSubsys_c[ForEach_itr].psi = 0.0;

    /* Start for Constant: '<S128>/phi' */
    localB->CoreSubsys_c[ForEach_itr].phi = 0.0;
  }

  /* End of Start for SubSystem: '<S75>/rotation' */

  /* Start for Sqrt: '<S99>/Sqrt' */
  localDW->Sqrt_DWORK1 = 0;

  /* Start for Iterator SubSystem: '<S141>/Clutch' */
  for (ForEach_itr_h = 0; ForEach_itr_h < 1; ForEach_itr_h++) {
    /* Start for Iterator SubSystem: '<S141>/Clutch' */
    /* Start for Chart: '<S152>/Clutch' */
    DrivetrainEv_Clutch_Start(&localB->CoreSubsys[ForEach_itr_h].sf_Clutch);

    /* End of Start for SubSystem: '<S141>/Clutch' */
  }

  /* End of Start for SubSystem: '<S141>/Clutch' */
  /* Start for Sqrt: '<S100>/Sqrt' */
  localDW->Sqrt_DWORK1_l = 0;

  /* Start for Iterator SubSystem: '<S183>/Clutch' */
  for (ForEach_itr_l = 0; ForEach_itr_l < 1; ForEach_itr_l++) {
    /* Start for Iterator SubSystem: '<S183>/Clutch' */
    /* Start for Chart: '<S194>/Clutch' */
    DrivetrainEv_Clutch_d_Start(&localB->CoreSubsys_k[ForEach_itr_l].sf_Clutch);

    /* End of Start for SubSystem: '<S183>/Clutch' */
  }

  /* End of Start for SubSystem: '<S183>/Clutch' */
  /* Start for Sqrt: '<S74>/Sqrt' */
  localDW->Sqrt_DWORK1_f = 0;

  /* Start for Constant: '<S14>/domega_o' */
  localB->domega_o = DrivetrainEv_P.domega_o;

  /* Start for Constant: '<S148>/Constant2' */
  memcpy(&localB->Constant2_p[0], &DrivetrainEv_P.Constant2_Value_c[0], 34U *
         sizeof(real_T));

  /* Start for Constant: '<S148>/Constant19' */
  localB->kappaFx[0] = DrivetrainEv_P.Constant19_Value[0];

  /* Start for Constant: '<S148>/Constant12' */
  localB->FzFx[0] = DrivetrainEv_P.Constant12_Value_p[0];

  /* Start for Constant: '<S148>/Constant19' */
  localB->kappaFx[1] = DrivetrainEv_P.Constant19_Value[1];

  /* Start for Constant: '<S148>/Constant12' */
  localB->FzFx[1] = DrivetrainEv_P.Constant12_Value_p[1];

  /* Start for Constant: '<S148>/Constant19' */
  localB->kappaFx[2] = DrivetrainEv_P.Constant19_Value[2];

  /* Start for Constant: '<S148>/Constant12' */
  localB->FzFx[2] = DrivetrainEv_P.Constant12_Value_p[2];

  /* Start for Constant: '<S149>/Constant19' */
  localB->VxMy[0] = DrivetrainEv_P.Constant19_Value_n[0];

  /* Start for Constant: '<S149>/Constant12' */
  localB->FzMy[0] = DrivetrainEv_P.Constant12_Value_p5[0];

  /* Start for Constant: '<S149>/Constant19' */
  localB->VxMy[1] = DrivetrainEv_P.Constant19_Value_n[1];

  /* Start for Constant: '<S149>/Constant12' */
  localB->FzMy[1] = DrivetrainEv_P.Constant12_Value_p5[1];

  /* Start for Constant: '<S149>/Constant19' */
  localB->VxMy[2] = DrivetrainEv_P.Constant19_Value_n[2];

  /* Start for Constant: '<S149>/Constant12' */
  localB->FzMy[2] = DrivetrainEv_P.Constant12_Value_p5[2];

  /* Start for Constant: '<S148>/Constant14' */
  memcpy(&localB->FxMap[0], &DrivetrainEv_P.Constant14_Value[0], 9U * sizeof
         (real_T));

  /* Start for Constant: '<S149>/Constant14' */
  memcpy(&localB->MyMap[0], &DrivetrainEv_P.Constant14_Value_a[0], 9U * sizeof
         (real_T));

  /* Start for Constant: '<S132>/FxType' */
  localB->FxType = DrivetrainEv_P.FxType_Value;

  /* Start for Constant: '<S132>/rollType' */
  localB->rollType = DrivetrainEv_P.rollType_Value;

  /* Start for Constant: '<S132>/vertType' */
  localB->vertType = DrivetrainEv_P.vertType_Value;

  /* Start for Constant: '<S190>/Constant2' */
  memcpy(&localB->Constant2_b[0], &DrivetrainEv_P.Constant2_Value_a[0], 34U *
         sizeof(real_T));

  /* Start for Constant: '<S190>/Constant19' */
  localB->kappaFx_c[0] = DrivetrainEv_P.Constant19_Value_l[0];

  /* Start for Constant: '<S190>/Constant12' */
  localB->FzFx_n[0] = DrivetrainEv_P.Constant12_Value_e[0];

  /* Start for Constant: '<S190>/Constant19' */
  localB->kappaFx_c[1] = DrivetrainEv_P.Constant19_Value_l[1];

  /* Start for Constant: '<S190>/Constant12' */
  localB->FzFx_n[1] = DrivetrainEv_P.Constant12_Value_e[1];

  /* Start for Constant: '<S190>/Constant19' */
  localB->kappaFx_c[2] = DrivetrainEv_P.Constant19_Value_l[2];

  /* Start for Constant: '<S190>/Constant12' */
  localB->FzFx_n[2] = DrivetrainEv_P.Constant12_Value_e[2];

  /* Start for Constant: '<S191>/Constant19' */
  localB->VxMy_j[0] = DrivetrainEv_P.Constant19_Value_c[0];

  /* Start for Constant: '<S191>/Constant12' */
  localB->FzMy_j[0] = DrivetrainEv_P.Constant12_Value_j[0];

  /* Start for Constant: '<S191>/Constant19' */
  localB->VxMy_j[1] = DrivetrainEv_P.Constant19_Value_c[1];

  /* Start for Constant: '<S191>/Constant12' */
  localB->FzMy_j[1] = DrivetrainEv_P.Constant12_Value_j[1];

  /* Start for Constant: '<S191>/Constant19' */
  localB->VxMy_j[2] = DrivetrainEv_P.Constant19_Value_c[2];

  /* Start for Constant: '<S191>/Constant12' */
  localB->FzMy_j[2] = DrivetrainEv_P.Constant12_Value_j[2];

  /* Start for Constant: '<S190>/Constant14' */
  memcpy(&localB->FxMap_b[0], &DrivetrainEv_P.Constant14_Value_b[0], 9U * sizeof
         (real_T));

  /* Start for Constant: '<S191>/Constant14' */
  memcpy(&localB->MyMap_b[0], &DrivetrainEv_P.Constant14_Value_bm[0], 9U *
         sizeof(real_T));

  /* Start for Constant: '<S134>/FxType' */
  localB->FxType_g = DrivetrainEv_P.FxType_Value_l;

  /* Start for Constant: '<S134>/rollType' */
  localB->rollType_c = DrivetrainEv_P.rollType_Value_d;

  /* Start for Constant: '<S134>/vertType' */
  localB->vertType_f = DrivetrainEv_P.vertType_Value_c;

  /* Start for Constant: '<S50>/domega_o' */
  localB->domega_o_p = DrivetrainEv_P.domega_o;

  /* Start for Constant: '<S26>/bw1' */
  localB->bw1 = DrivetrainEv_P.bw1;

  /* Start for Constant: '<S26>/bd' */
  localB->bd = DrivetrainEv_P.bd;

  /* Start for Constant: '<S26>/bw2' */
  localB->bw2 = DrivetrainEv_P.bw2;

  /* Start for Constant: '<S26>/Ndiff2' */
  localB->Ndiff2 = DrivetrainEv_P.Ndiff;

  /* Start for Constant: '<S26>/Jd' */
  localB->Jd = DrivetrainEv_P.Jd;

  /* Start for Constant: '<S26>/Jw1' */
  localB->Jw1 = DrivetrainEv_P.Jw1;

  /* Start for Constant: '<S26>/Jw3' */
  localB->Jw3 = DrivetrainEv_P.Jw2;
}

/* Outputs for referenced model: 'DrivetrainEv' */
void DrivetrainEv(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T
                  *rty_VehSpd, real_T *rty_MotSpd, B_DrivetrainEv_c_T *localB,
                  DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX,
                  ZCE_DrivetrainEv_T *localZCE)
{
  real_T rtb_VectorConcatenate_k[9];
  real_T rtb_Product_d[3];
  real_T rtb_TmpSignalConversionAtSFunct[3];
  real_T rtb_Uw[2];
  real_T rtb_Gain_c;
  real_T rtb_Gain_h;
  real_T rtb_Gain_j_tmp;
  real_T rtb_Gain_p;
  real_T rtb_SumofElements;
  real_T rtb_Switch;
  real_T rtb_Switch_g;
  real_T rtb_TmpSignalConversionAtSFun_0;
  real_T rtb_TmpSignalConversionAtSFun_1;
  real_T rtb_UnaryMinus1;
  real_T rtb_VectorConcatenate_j_tmp;
  real_T rtb_VectorConcatenate_j_tmp_0;
  real_T rtb_VectorConcatenate_j_tmp_1;
  real_T rtb_VectorConcatenate_j_tmp_2;
  real_T rtb_VectorConcatenate_j_tmp_3;
  real_T rtb_VectorConcatenate_j_tmp_4;
  int32_T i;
  boolean_T xHasBeenChanged;
  ZCEventType zcEvent;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S72>/U0' incorporates:
     *  Constant: '<S72>/w0'
     */
    rtb_SumofElements = rt_atan2d_snf(DrivetrainEv_P.zdot_o,
      DrivetrainEv_P.xdot_o);

    /* Constant: '<S72>/U0' */
    localB->U0 = DrivetrainEv_P.uDOFBodyAxes_v_ini * cos(rtb_SumofElements);

    /* Constant: '<S72>/w0' */
    localB->w0 = DrivetrainEv_P.uDOFBodyAxes_v_ini * sin(rtb_SumofElements);
  }

  /* SignalConversion generated from: '<S72>/U,w' */
  localB->TmpSignalConversionAtUwInport2[0] = localB->U0;
  localB->TmpSignalConversionAtUwInport2[1] = localB->w0;

  /* Integrator: '<S72>/U,w' */
  if (ssIsModeUpdateTimeStep(DrivetrainEv_M->rtS)) {
    if (localDW->Uw_IWORK != 0) {
      localX->Uw_CSTATE[0] = localB->TmpSignalConversionAtUwInport2[0];
      localX->Uw_CSTATE[1] = localB->TmpSignalConversionAtUwInport2[1];
    }

    rtb_Uw[0] = localX->Uw_CSTATE[0];
    rtb_Uw[1] = localX->Uw_CSTATE[1];
  } else {
    rtb_Uw[0] = localX->Uw_CSTATE[0];
    rtb_Uw[1] = localX->Uw_CSTATE[1];
  }

  /* End of Integrator: '<S72>/U,w' */

  /* SignalConversion generated from: '<S71>/Vector Concatenate7' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate7'
   *  UnitConversion: '<S84>/Unit Conversion'
   */
  /* Unit Conversion - from: m/s to: m/s
     Expression: output = (1*input) + (0) */
  localB->VectorConcatenate7[0] = rtb_Uw[0];

  /* SignalConversion generated from: '<S71>/Vector Concatenate7' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate7'
   */
  localB->VectorConcatenate7[1] = 0.0;

  /* SignalConversion generated from: '<S71>/Vector Concatenate7' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate7'
   *  UnitConversion: '<S84>/Unit Conversion'
   */
  localB->VectorConcatenate7[2] = rtb_Uw[1];

  /* SignalConversion generated from: '<Root>/VehSpd' */
  *rty_VehSpd = localB->VectorConcatenate7[0];

  /* SignalConversion generated from: '<S4>/Integrator' */
  localB->TmpSignalConversionAtIntegrator[0] = 0.0;
  localB->TmpSignalConversionAtIntegrator[1] = 0.0;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S70>/AirTempConstant' */
    localB->AirTempConstant = DrivetrainEv_P.T;

    /* Constant: '<S70>/FExtConstant' */
    localB->FExtConstant[0] = DrivetrainEv_P.FExtConstant_Value[0];

    /* Constant: '<S70>/MExtConstant' */
    localB->MExtConstant[0] = DrivetrainEv_P.MExtConstant_Value[0];

    /* Constant: '<S70>/FExtConstant' */
    localB->FExtConstant[1] = DrivetrainEv_P.FExtConstant_Value[1];

    /* Constant: '<S70>/MExtConstant' */
    localB->MExtConstant[1] = DrivetrainEv_P.MExtConstant_Value[1];

    /* Constant: '<S70>/FExtConstant' */
    localB->FExtConstant[2] = DrivetrainEv_P.FExtConstant_Value[2];

    /* Constant: '<S70>/MExtConstant' */
    localB->MExtConstant[2] = DrivetrainEv_P.MExtConstant_Value[2];

    /* Constant: '<S91>/Constant12' */
    localB->Y = DrivetrainEv_P.Constant12_Value;

    /* Constant: '<S91>/Constant2' */
    localB->Constant2 = DrivetrainEv_P.Constant2_Value;
  }

  /* SignalConversion generated from: '<S75>/Vector Concatenate2' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   */
  localB->VectorConcatenate_l[3] = 0.0;

  /* SignalConversion generated from: '<S75>/Vector Concatenate2' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   */
  localB->VectorConcatenate_l[4] = 0.0;

  /* SignalConversion generated from: '<S71>/Vector Concatenate3' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate3'
   */
  localB->VectorConcatenate3[0] = 0.0;

  /* Integrator: '<S72>/Theta' */
  rtb_Gain_c = localX->Theta_CSTATE;

  /* SignalConversion generated from: '<S71>/Vector Concatenate3' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate3'
   *  Integrator: '<S72>/Theta'
   */
  localB->VectorConcatenate3[1] = localX->Theta_CSTATE;

  /* SignalConversion generated from: '<S71>/Vector Concatenate3' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate3'
   */
  localB->VectorConcatenate3[2] = 0.0;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S91>/Constant1' */
    localB->Constant1 = DrivetrainEv_P.Constant1_Value;

    /* Constant: '<S102>/R_T1' incorporates:
     *  Concatenate: '<S102>/Vector Concatenate'
     */
    localB->VectorConcatenate[0] = DrivetrainEv_P.a_CG;

    /* Constant: '<S102>/R_T2' incorporates:
     *  Concatenate: '<S102>/Vector Concatenate'
     */
    localB->VectorConcatenate[1] =
      DrivetrainEv_P.HardPointCoordinateTransformFro;

    /* Constant: '<S102>/R_T3' incorporates:
     *  Concatenate: '<S102>/Vector Concatenate'
     */
    localB->VectorConcatenate[2] = DrivetrainEv_P.h;
  }

  /* Trigonometry: '<S104>/sincos' incorporates:
   *  SignalConversion generated from: '<S104>/sincos'
   *  Trigonometry: '<S111>/sincos'
   */
  rtb_UnaryMinus1 = sin(localB->Constant2);
  rtb_Switch = cos(localB->Constant2);
  rtb_Gain_h = sin(localB->VectorConcatenate3[1]);
  rtb_TmpSignalConversionAtSFun_0 = cos(localB->VectorConcatenate3[1]);
  rtb_SumofElements = sin(localB->Constant1);
  rtb_TmpSignalConversionAtSFun_1 = cos(localB->Constant1);

  /* Fcn: '<S104>/Fcn11' incorporates:
   *  Fcn: '<S111>/Fcn11'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_Switch_g = rtb_Switch * rtb_TmpSignalConversionAtSFun_0;
  rtb_VectorConcatenate_k[0] = rtb_Switch_g;

  /* Fcn: '<S104>/Fcn21' incorporates:
   *  Fcn: '<S111>/Fcn21'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_Gain_p = rtb_Gain_h * rtb_SumofElements;
  rtb_VectorConcatenate_j_tmp = rtb_UnaryMinus1 *
    rtb_TmpSignalConversionAtSFun_1;
  rtb_VectorConcatenate_k[1] = rtb_Gain_p * rtb_Switch -
    rtb_VectorConcatenate_j_tmp;

  /* Fcn: '<S104>/Fcn31' incorporates:
   *  Fcn: '<S111>/Fcn31'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_Gain_j_tmp = rtb_Gain_h * rtb_TmpSignalConversionAtSFun_1;
  rtb_VectorConcatenate_j_tmp_0 = rtb_UnaryMinus1 * rtb_SumofElements;
  rtb_VectorConcatenate_k[2] = rtb_Gain_j_tmp * rtb_Switch +
    rtb_VectorConcatenate_j_tmp_0;

  /* Fcn: '<S104>/Fcn12' incorporates:
   *  Fcn: '<S111>/Fcn12'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_VectorConcatenate_j_tmp_1 = rtb_UnaryMinus1 *
    rtb_TmpSignalConversionAtSFun_0;
  rtb_VectorConcatenate_k[3] = rtb_VectorConcatenate_j_tmp_1;

  /* Fcn: '<S104>/Fcn22' incorporates:
   *  Fcn: '<S104>/Fcn21'
   *  Fcn: '<S111>/Fcn22'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_VectorConcatenate_j_tmp_2 = rtb_Switch * rtb_TmpSignalConversionAtSFun_1;
  rtb_VectorConcatenate_k[4] = rtb_Gain_p * rtb_UnaryMinus1 +
    rtb_VectorConcatenate_j_tmp_2;

  /* Fcn: '<S104>/Fcn32' incorporates:
   *  Fcn: '<S104>/Fcn31'
   *  Fcn: '<S111>/Fcn32'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_VectorConcatenate_j_tmp_3 = rtb_Switch * rtb_SumofElements;
  rtb_VectorConcatenate_k[5] = rtb_Gain_j_tmp * rtb_UnaryMinus1 -
    rtb_VectorConcatenate_j_tmp_3;

  /* Fcn: '<S104>/Fcn13' incorporates:
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_VectorConcatenate_k[6] = -rtb_Gain_h;

  /* Fcn: '<S104>/Fcn23' incorporates:
   *  Fcn: '<S111>/Fcn23'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_VectorConcatenate_j_tmp_4 = rtb_TmpSignalConversionAtSFun_0 *
    rtb_SumofElements;
  rtb_VectorConcatenate_k[7] = rtb_VectorConcatenate_j_tmp_4;

  /* Fcn: '<S104>/Fcn33' incorporates:
   *  Fcn: '<S111>/Fcn33'
   *  Trigonometry: '<S104>/sincos'
   */
  rtb_TmpSignalConversionAtSFun_0 *= rtb_TmpSignalConversionAtSFun_1;
  rtb_VectorConcatenate_k[8] = rtb_TmpSignalConversionAtSFun_0;

  /* Product: '<S106>/Product' incorporates:
   *  Concatenate: '<S102>/Vector Concatenate'
   *  Concatenate: '<S87>/Vector Concatenate'
   *  Math: '<S102>/Transpose1'
   *  SignalConversion generated from: '<S29>/ SFunction '
   */
  for (i = 0; i < 3; i++) {
    rtb_TmpSignalConversionAtSFunct[i] = (rtb_VectorConcatenate_k[3 * i + 1] *
      localB->VectorConcatenate[1] + rtb_VectorConcatenate_k[3 * i] *
      localB->VectorConcatenate[0]) + rtb_VectorConcatenate_k[3 * i + 2] *
      localB->VectorConcatenate[2];
  }

  /* End of Product: '<S106>/Product' */

  /* Sum: '<S102>/Add' */
  rtb_SumofElements = rtb_TmpSignalConversionAtSFunct[2];

  /* Fcn: '<S111>/Fcn11' */
  rtb_VectorConcatenate_k[0] = rtb_Switch_g;

  /* Fcn: '<S111>/Fcn21' */
  rtb_VectorConcatenate_k[1] = rtb_Gain_p * rtb_Switch -
    rtb_VectorConcatenate_j_tmp;

  /* Fcn: '<S111>/Fcn31' */
  rtb_VectorConcatenate_k[2] = rtb_Gain_j_tmp * rtb_Switch +
    rtb_VectorConcatenate_j_tmp_0;

  /* Fcn: '<S111>/Fcn12' */
  rtb_VectorConcatenate_k[3] = rtb_VectorConcatenate_j_tmp_1;

  /* Fcn: '<S111>/Fcn22' */
  rtb_VectorConcatenate_k[4] = rtb_Gain_p * rtb_UnaryMinus1 +
    rtb_VectorConcatenate_j_tmp_2;

  /* Fcn: '<S111>/Fcn32' */
  rtb_VectorConcatenate_k[5] = rtb_Gain_j_tmp * rtb_UnaryMinus1 -
    rtb_VectorConcatenate_j_tmp_3;

  /* Fcn: '<S111>/Fcn13' */
  rtb_VectorConcatenate_k[6] = -rtb_Gain_h;

  /* Fcn: '<S111>/Fcn23' */
  rtb_VectorConcatenate_k[7] = rtb_VectorConcatenate_j_tmp_4;

  /* Fcn: '<S111>/Fcn33' */
  rtb_VectorConcatenate_k[8] = rtb_TmpSignalConversionAtSFun_0;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S103>/R_T1' incorporates:
     *  Concatenate: '<S103>/Vector Concatenate'
     */
    localB->VectorConcatenate_d[0] = -DrivetrainEv_P.b_CG;

    /* Constant: '<S103>/R_T2' incorporates:
     *  Concatenate: '<S103>/Vector Concatenate'
     */
    localB->VectorConcatenate_d[1] =
      DrivetrainEv_P.HardPointCoordinateTransformRea;

    /* Constant: '<S103>/R_T3' incorporates:
     *  Concatenate: '<S103>/Vector Concatenate'
     */
    localB->VectorConcatenate_d[2] = DrivetrainEv_P.h;
  }

  /* Product: '<S113>/Product' incorporates:
   *  Concatenate: '<S103>/Vector Concatenate'
   *  Concatenate: '<S87>/Vector Concatenate'
   *  Math: '<S103>/Transpose1'
   */
  for (i = 0; i < 3; i++) {
    rtb_TmpSignalConversionAtSFunct[i] = (rtb_VectorConcatenate_k[3 * i + 1] *
      localB->VectorConcatenate_d[1] + rtb_VectorConcatenate_k[3 * i] *
      localB->VectorConcatenate_d[0]) + rtb_VectorConcatenate_k[3 * i + 2] *
      localB->VectorConcatenate_d[2];
  }

  /* SignalConversion generated from: '<S71>/Vector Concatenate4' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate4'
   */
  localB->VectorConcatenate4[0] = 0.0;

  /* Integrator: '<S72>/q' */
  localB->q = localX->q_CSTATE;

  /* SignalConversion generated from: '<S71>/Vector Concatenate4' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate4'
   */
  localB->VectorConcatenate4[1] = localB->q;

  /* SignalConversion generated from: '<S71>/Vector Concatenate4' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate4'
   */
  localB->VectorConcatenate4[2] = 0.0;

  /* SignalConversion generated from: '<S75>/Vector Concatenate2' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   *  Gain: '<S79>/[NF,NR]'
   *  Integrator: '<S4>/Integrator'
   *  Integrator: '<S72>/Position'
   *  Lookup_n-D: '<S79>/Damping - Front'
   *  Lookup_n-D: '<S79>/Stiffness - Front'
   *  Product: '<S109>/i x j'
   *  Product: '<S110>/j x i'
   *  SignalConversion generated from: '<S71>/Vector Concatenate9'
   *  Sum: '<S102>/Add'
   *  Sum: '<S102>/Add1'
   *  Sum: '<S107>/Sum'
   *  Sum: '<S79>/Add1'
   *  Sum: '<S79>/Add2'
   *  Sum: '<S79>/Add3'
   */
  localB->VectorConcatenate_l[5] = (look1_binlxpw(((localB->VectorConcatenate4[0]
    * localB->VectorConcatenate[1] - localB->VectorConcatenate[0] *
    localB->VectorConcatenate4[1]) + localB->VectorConcatenate7[2]) -
    localB->TmpSignalConversionAtIntegrator[0], DrivetrainEv_P.dzdotsF,
    DrivetrainEv_P.FsbF, 6U) + look1_binlxpw((localX->Position_CSTATE[1] +
    rtb_SumofElements) - localX->Integrator_CSTATE[0], DrivetrainEv_P.dzsF,
    DrivetrainEv_P.FskF, 5U)) * DrivetrainEv_P.NFNR_Gain[0];

  /* SignalConversion generated from: '<S75>/Vector Concatenate3' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   */
  localB->VectorConcatenate_l[6] = 0.0;

  /* SignalConversion generated from: '<S75>/Vector Concatenate3' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   */
  localB->VectorConcatenate_l[7] = 0.0;

  /* SignalConversion generated from: '<S75>/Vector Concatenate3' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   *  Gain: '<S79>/[NF,NR]'
   *  Integrator: '<S4>/Integrator'
   *  Integrator: '<S72>/Position'
   *  Lookup_n-D: '<S79>/Ramping - Rear'
   *  Lookup_n-D: '<S79>/Stiffness - Rear'
   *  Product: '<S113>/Product'
   *  Product: '<S116>/i x j'
   *  Product: '<S117>/j x i'
   *  Sum: '<S103>/Add'
   *  Sum: '<S103>/Add1'
   *  Sum: '<S114>/Sum'
   *  Sum: '<S79>/Add1'
   *  Sum: '<S79>/Add2'
   *  Sum: '<S79>/Add3'
   */
  localB->VectorConcatenate_l[8] = (look1_binlxpw(((localB->VectorConcatenate4[0]
    * localB->VectorConcatenate_d[1] - localB->VectorConcatenate_d[0] *
    localB->VectorConcatenate4[1]) + localB->VectorConcatenate7[2]) -
    localB->TmpSignalConversionAtIntegrator[1], DrivetrainEv_P.dzdotsR,
    DrivetrainEv_P.FsbR, 6U) + look1_binlxpw((localX->Position_CSTATE[1] +
    rtb_TmpSignalConversionAtSFunct[2]) - localX->Integrator_CSTATE[1],
    DrivetrainEv_P.dzsR, DrivetrainEv_P.FskR, 5U)) * DrivetrainEv_P.NFNR_Gain[1];
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* SignalConversion generated from: '<S75>/Vector Concatenate4' incorporates:
     *  Concatenate: '<S75>/Vector Concatenate'
     */
    localB->VectorConcatenate_l[9] = 0.0;

    /* SignalConversion generated from: '<S75>/Vector Concatenate4' incorporates:
     *  Concatenate: '<S75>/Vector Concatenate'
     */
    localB->VectorConcatenate_l[10] = 0.0;

    /* Gain: '<S75>/m' incorporates:
     *  Concatenate: '<S75>/Vector Concatenate'
     *  Constant: '<S75>/g'
     */
    localB->VectorConcatenate_l[11] = DrivetrainEv_P.Mass * DrivetrainEv_P.g;

    /* Saturate: '<S141>/Saturation' incorporates:
     *  Constant: '<S141>/Constant9'
     *  Sum: '<S141>/Add2'
     */
    if (DrivetrainEv_P.Re > DrivetrainEv_P.Saturation_UpperSat) {
      /* Saturate: '<S141>/Saturation' */
      localB->Saturation = DrivetrainEv_P.Saturation_UpperSat;
    } else if (DrivetrainEv_P.Re < DrivetrainEv_P.Saturation_LowerSat) {
      /* Saturate: '<S141>/Saturation' */
      localB->Saturation = DrivetrainEv_P.Saturation_LowerSat;
    } else {
      /* Saturate: '<S141>/Saturation' */
      localB->Saturation = DrivetrainEv_P.Re;
    }

    /* End of Saturate: '<S141>/Saturation' */

    /* Memory: '<S15>/Memory' */
    localB->Memory = localDW->Memory_PreviousInput;

    /* Constant: '<S14>/domega_o' */
    localB->domega_o = DrivetrainEv_P.domega_o;
  }

  /* UnaryMinus: '<S75>/Unary Minus' */
  localB->UnaryMinus = -localB->VectorConcatenate3[1];

  /* SignalConversion generated from: '<S75>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate1'
   */
  localB->VectorConcatenate1[0] = localB->UnaryMinus;

  /* SignalConversion generated from: '<S75>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate1'
   */
  localB->VectorConcatenate1[1] = localB->UnaryMinus;

  /* SignalConversion generated from: '<S75>/Vector Concatenate1' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate1'
   */
  localB->VectorConcatenate1[2] = localB->UnaryMinus;

  /* Integrator: '<S15>/Integrator' */
  if (ssIsModeUpdateTimeStep(DrivetrainEv_M->rtS)) {
    zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE,
                       (localB->Memory));
    if ((zcEvent != NO_ZCEVENT) || (localDW->Integrator_IWORK != 0)) {
      xHasBeenChanged = (localX->Integrator_CSTATE_n != localB->domega_o);
      localX->Integrator_CSTATE_n = localB->domega_o;
      if (xHasBeenChanged) {
        ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      }
    }

    rtb_Switch = localX->Integrator_CSTATE_n;
  } else {
    rtb_Switch = localX->Integrator_CSTATE_n;
  }

  /* End of Integrator: '<S15>/Integrator' */

  /* Sum: '<S14>/Subtract1' incorporates:
   *  Gain: '<S14>/Gain1'
   *  Gain: '<S14>/Gain2'
   *  Integrator: '<S14>/Integrator'
   */
  rtb_UnaryMinus1 = DrivetrainEv_P.b * rtb_Switch + DrivetrainEv_P.k *
    localX->Integrator_CSTATE_f;

  /* Integrator: '<S170>/Integrator' */
  localB->Integrator = localX->Integrator_CSTATE_e;

  /* Gain: '<S141>/Sign convention' incorporates:
   *  Product: '<S154>/Product1'
   *  Sum: '<S141>/Add1'
   */
  localB->Signconvention = (rtb_UnaryMinus1 - localB->Integrator *
    localB->Saturation) * DrivetrainEv_P.Signconvention_Gain;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S156>/Disk brake actuator bore' */
    localB->Diskbrakeactuatorbore = DrivetrainEv_P.disk_abore;

    /* Gain: '<S156>/Torque Conversion1' */
    localB->TorqueConversion1 = DrivetrainEv_P.TorqueConversion1_Gain *
      localB->Diskbrakeactuatorbore;

    /* Constant: '<S156>/Number of brake pads' */
    localB->Numberofbrakepads = DrivetrainEv_P.num_pads;

    /* Constant: '<S148>/Constant' */
    localB->D = DrivetrainEv_P.Constant_Value;

    /* Constant: '<S148>/Constant1' */
    localB->C = DrivetrainEv_P.Constant1_Value_d;

    /* Constant: '<S148>/Constant7' */
    localB->B = DrivetrainEv_P.Constant7_Value;

    /* Constant: '<S148>/Constant6' */
    localB->E = DrivetrainEv_P.Constant6_Value;

    /* Constant: '<S132>/lam_muxConstant' */
    localB->lam_muxConstant = DrivetrainEv_P.lam_x;

    /* Constant: '<S148>/Constant2' */
    memcpy(&localB->Constant2_p[0], &DrivetrainEv_P.Constant2_Value_c[0], 34U *
           sizeof(real_T));

    /* Constant: '<S148>/Constant19' */
    localB->kappaFx[0] = DrivetrainEv_P.Constant19_Value[0];

    /* Constant: '<S148>/Constant12' */
    localB->FzFx[0] = DrivetrainEv_P.Constant12_Value_p[0];

    /* Constant: '<S148>/Constant19' */
    localB->kappaFx[1] = DrivetrainEv_P.Constant19_Value[1];

    /* Constant: '<S148>/Constant12' */
    localB->FzFx[1] = DrivetrainEv_P.Constant12_Value_p[1];

    /* Constant: '<S148>/Constant19' */
    localB->kappaFx[2] = DrivetrainEv_P.Constant19_Value[2];

    /* Constant: '<S148>/Constant12' */
    localB->FzFx[2] = DrivetrainEv_P.Constant12_Value_p[2];

    /* Constant: '<S132>/TirePrsConstant' */
    localB->TirePrsConstant = DrivetrainEv_P.press;

    /* Constant: '<S149>/Constant5' */
    localB->FNOMIN = DrivetrainEv_P.Constant5_Value;

    /* Constant: '<S149>/Constant2' */
    localB->NOMPRES = DrivetrainEv_P.Constant2_Value_l;

    /* Constant: '<S149>/Constant13' */
    localB->QSY1 = DrivetrainEv_P.aMy;

    /* Constant: '<S149>/Constant8' */
    localB->QSY2 = DrivetrainEv_P.bMy;

    /* Constant: '<S149>/Constant15' */
    localB->QSY3 = DrivetrainEv_P.cMy;

    /* Constant: '<S149>/Constant16' */
    localB->QSY4 = DrivetrainEv_P.Constant16_Value;

    /* Constant: '<S149>/Constant7' */
    localB->QSY5 = DrivetrainEv_P.Constant7_Value_g;

    /* Constant: '<S149>/Constant9' */
    localB->QSY6 = DrivetrainEv_P.Constant9_Value;

    /* Constant: '<S149>/Constant17' */
    localB->QSY7 = DrivetrainEv_P.betaMy;

    /* Constant: '<S149>/Constant18' */
    localB->QSY8 = DrivetrainEv_P.alphaMy;

    /* Constant: '<S149>/Constant11' */
    localB->gamma = DrivetrainEv_P.Constant11_Value;

    /* Constant: '<S149>/Constant10' */
    localB->lam_My = DrivetrainEv_P.Constant10_Value;

    /* Constant: '<S149>/Constant4' */
    localB->UNLOADED_RADIUS = DrivetrainEv_P.UNLOADED_RADIUS;

    /* Constant: '<S149>/Constant1' */
    localB->PRESMIN = DrivetrainEv_P.Constant1_Value_o;

    /* Constant: '<S149>/Constant3' */
    localB->PRESMAX = DrivetrainEv_P.Constant3_Value;

    /* Constant: '<S149>/Constant19' */
    localB->VxMy[0] = DrivetrainEv_P.Constant19_Value_n[0];

    /* Constant: '<S149>/Constant12' */
    localB->FzMy[0] = DrivetrainEv_P.Constant12_Value_p5[0];

    /* Constant: '<S149>/Constant19' */
    localB->VxMy[1] = DrivetrainEv_P.Constant19_Value_n[1];

    /* Constant: '<S149>/Constant12' */
    localB->FzMy[1] = DrivetrainEv_P.Constant12_Value_p5[1];

    /* Constant: '<S149>/Constant19' */
    localB->VxMy[2] = DrivetrainEv_P.Constant19_Value_n[2];

    /* Constant: '<S149>/Constant12' */
    localB->FzMy[2] = DrivetrainEv_P.Constant12_Value_p5[2];

    /* Constant: '<S148>/Constant14' */
    memcpy(&localB->FxMap[0], &DrivetrainEv_P.Constant14_Value[0], 9U * sizeof
           (real_T));

    /* Constant: '<S149>/Constant14' */
    memcpy(&localB->MyMap[0], &DrivetrainEv_P.Constant14_Value_a[0], 9U * sizeof
           (real_T));

    /* Constant: '<S150>/Constant14' */
    localB->NOMPRES_j = DrivetrainEv_P.Constant14_Value_i;

    /* Constant: '<S150>/Constant1' */
    localB->PRESMIN_m = DrivetrainEv_P.Constant1_Value_c;

    /* Constant: '<S150>/Constant19' */
    localB->PRESMAX_m = DrivetrainEv_P.Constant19_Value_a;

    /* Constant: '<S150>/Constant2' */
    localB->VERTICAL_STIFFNESS = DrivetrainEv_P.Constant2_Value_lu;

    /* Constant: '<S150>/Constant3' */
    localB->VERTICAL_DAMPING = DrivetrainEv_P.Constant3_Value_h;

    /* Constant: '<S150>/Constant4' */
    localB->Q_RE0 = DrivetrainEv_P.Constant4_Value;

    /* Constant: '<S150>/Constant5' */
    localB->Q_V1 = DrivetrainEv_P.Constant5_Value_c;

    /* Constant: '<S150>/Constant6' */
    localB->Q_V2 = DrivetrainEv_P.Constant6_Value_p;

    /* Constant: '<S150>/Constant7' */
    localB->Q_FZ1 = DrivetrainEv_P.Constant7_Value_a;

    /* Constant: '<S150>/Constant8' */
    localB->Q_FZ2 = DrivetrainEv_P.Constant8_Value;

    /* Constant: '<S150>/Constant9' */
    localB->Q_FCX = DrivetrainEv_P.Constant9_Value_f;

    /* Constant: '<S150>/Constant10' */
    localB->Q_FCY = DrivetrainEv_P.Constant10_Value_m;

    /* Constant: '<S150>/Constant11' */
    localB->Q_CAM = DrivetrainEv_P.Constant11_Value_c;

    /* Constant: '<S150>/Constant16' */
    localB->PFZ1 = DrivetrainEv_P.Constant16_Value_n;

    /* Constant: '<S150>/Constant17' */
    localB->Q_FCY2 = DrivetrainEv_P.Constant17_Value;

    /* Constant: '<S150>/Constant13' */
    localB->Q_CAM1 = DrivetrainEv_P.Constant13_Value;

    /* Constant: '<S150>/Constant15' */
    localB->Q_CAM2 = DrivetrainEv_P.Constant15_Value;

    /* Constant: '<S150>/Constant21' */
    localB->Q_CAM3 = DrivetrainEv_P.Constant21_Value;

    /* Constant: '<S150>/Constant22' */
    localB->Q_FYS1 = DrivetrainEv_P.Constant22_Value;

    /* Constant: '<S150>/Constant18' */
    localB->Q_FYS2 = DrivetrainEv_P.Constant18_Value;

    /* Constant: '<S150>/Constant20' */
    localB->Q_FYS3 = DrivetrainEv_P.Constant20_Value;

    /* Constant: '<S150>/Constant24' */
    localB->BOTTOM_OFFST = DrivetrainEv_P.Constant24_Value;

    /* Constant: '<S150>/Constant23' */
    localB->BOTTOM_STIFF = DrivetrainEv_P.Constant23_Value;

    /* Constant: '<S132>/FxType' */
    localB->FxType = DrivetrainEv_P.FxType_Value;

    /* Constant: '<S132>/rollType' */
    localB->rollType = DrivetrainEv_P.rollType_Value;

    /* Constant: '<S132>/vertType' */
    localB->vertType = DrivetrainEv_P.vertType_Value;

    /* Saturate: '<S183>/Saturation' incorporates:
     *  Constant: '<S183>/Constant9'
     *  Sum: '<S183>/Add2'
     */
    if (DrivetrainEv_P.Re > DrivetrainEv_P.Saturation_UpperSat_a) {
      /* Saturate: '<S183>/Saturation' */
      localB->Saturation_b = DrivetrainEv_P.Saturation_UpperSat_a;
    } else if (DrivetrainEv_P.Re < DrivetrainEv_P.Saturation_LowerSat_b) {
      /* Saturate: '<S183>/Saturation' */
      localB->Saturation_b = DrivetrainEv_P.Saturation_LowerSat_b;
    } else {
      /* Saturate: '<S183>/Saturation' */
      localB->Saturation_b = DrivetrainEv_P.Re;
    }

    /* End of Saturate: '<S183>/Saturation' */

    /* Constant: '<S198>/Disk brake actuator bore' */
    localB->Diskbrakeactuatorbore_g = DrivetrainEv_P.disk_abore;

    /* Gain: '<S198>/Torque Conversion1' */
    localB->TorqueConversion1_e = DrivetrainEv_P.TorqueConversion1_Gain_d *
      localB->Diskbrakeactuatorbore_g;

    /* Constant: '<S198>/Number of brake pads' */
    localB->Numberofbrakepads_d = DrivetrainEv_P.num_pads;

    /* Constant: '<S190>/Constant' */
    localB->D_b = DrivetrainEv_P.Constant_Value_j;

    /* Constant: '<S190>/Constant1' */
    localB->C_f = DrivetrainEv_P.Constant1_Value_f;

    /* Constant: '<S190>/Constant7' */
    localB->B_h = DrivetrainEv_P.Constant7_Value_p;

    /* Constant: '<S190>/Constant6' */
    localB->E_o = DrivetrainEv_P.Constant6_Value_k;

    /* Constant: '<S134>/lam_muxConstant' */
    localB->lam_muxConstant_d = DrivetrainEv_P.lam_x;

    /* Constant: '<S190>/Constant2' */
    memcpy(&localB->Constant2_b[0], &DrivetrainEv_P.Constant2_Value_a[0], 34U *
           sizeof(real_T));

    /* Constant: '<S190>/Constant19' */
    localB->kappaFx_c[0] = DrivetrainEv_P.Constant19_Value_l[0];

    /* Constant: '<S190>/Constant12' */
    localB->FzFx_n[0] = DrivetrainEv_P.Constant12_Value_e[0];

    /* Constant: '<S190>/Constant19' */
    localB->kappaFx_c[1] = DrivetrainEv_P.Constant19_Value_l[1];

    /* Constant: '<S190>/Constant12' */
    localB->FzFx_n[1] = DrivetrainEv_P.Constant12_Value_e[1];

    /* Constant: '<S190>/Constant19' */
    localB->kappaFx_c[2] = DrivetrainEv_P.Constant19_Value_l[2];

    /* Constant: '<S190>/Constant12' */
    localB->FzFx_n[2] = DrivetrainEv_P.Constant12_Value_e[2];

    /* Constant: '<S134>/TirePrsConstant' */
    localB->TirePrsConstant_j = DrivetrainEv_P.press;

    /* Constant: '<S191>/Constant5' */
    localB->FNOMIN_h = DrivetrainEv_P.Constant5_Value_co;

    /* Constant: '<S191>/Constant2' */
    localB->NOMPRES_c = DrivetrainEv_P.Constant2_Value_g;

    /* Constant: '<S191>/Constant13' */
    localB->QSY1_d = DrivetrainEv_P.aMy;

    /* Constant: '<S191>/Constant8' */
    localB->QSY2_p = DrivetrainEv_P.bMy;

    /* Constant: '<S191>/Constant15' */
    localB->QSY3_b = DrivetrainEv_P.cMy;

    /* Constant: '<S191>/Constant16' */
    localB->QSY4_m = DrivetrainEv_P.Constant16_Value_d;

    /* Constant: '<S191>/Constant7' */
    localB->QSY5_l = DrivetrainEv_P.Constant7_Value_i;

    /* Constant: '<S191>/Constant9' */
    localB->QSY6_n = DrivetrainEv_P.Constant9_Value_m;

    /* Constant: '<S191>/Constant17' */
    localB->QSY7_c = DrivetrainEv_P.betaMy;

    /* Constant: '<S191>/Constant18' */
    localB->QSY8_c = DrivetrainEv_P.alphaMy;

    /* Constant: '<S191>/Constant11' */
    localB->gamma_b = DrivetrainEv_P.Constant11_Value_p;

    /* Constant: '<S191>/Constant10' */
    localB->lam_My_p = DrivetrainEv_P.Constant10_Value_b;

    /* Constant: '<S191>/Constant4' */
    localB->UNLOADED_RADIUS_h = DrivetrainEv_P.UNLOADED_RADIUS;

    /* Constant: '<S191>/Constant1' */
    localB->PRESMIN_e = DrivetrainEv_P.Constant1_Value_l;

    /* Constant: '<S191>/Constant3' */
    localB->PRESMAX_b = DrivetrainEv_P.Constant3_Value_i;

    /* Constant: '<S191>/Constant19' */
    localB->VxMy_j[0] = DrivetrainEv_P.Constant19_Value_c[0];

    /* Constant: '<S191>/Constant12' */
    localB->FzMy_j[0] = DrivetrainEv_P.Constant12_Value_j[0];

    /* Constant: '<S191>/Constant19' */
    localB->VxMy_j[1] = DrivetrainEv_P.Constant19_Value_c[1];

    /* Constant: '<S191>/Constant12' */
    localB->FzMy_j[1] = DrivetrainEv_P.Constant12_Value_j[1];

    /* Constant: '<S191>/Constant19' */
    localB->VxMy_j[2] = DrivetrainEv_P.Constant19_Value_c[2];

    /* Constant: '<S191>/Constant12' */
    localB->FzMy_j[2] = DrivetrainEv_P.Constant12_Value_j[2];

    /* Constant: '<S190>/Constant14' */
    memcpy(&localB->FxMap_b[0], &DrivetrainEv_P.Constant14_Value_b[0], 9U *
           sizeof(real_T));

    /* Constant: '<S191>/Constant14' */
    memcpy(&localB->MyMap_b[0], &DrivetrainEv_P.Constant14_Value_bm[0], 9U *
           sizeof(real_T));

    /* Constant: '<S192>/Constant14' */
    localB->NOMPRES_n = DrivetrainEv_P.Constant14_Value_i4;

    /* Constant: '<S192>/Constant1' */
    localB->PRESMIN_o = DrivetrainEv_P.Constant1_Value_dn;

    /* Constant: '<S192>/Constant19' */
    localB->PRESMAX_a = DrivetrainEv_P.Constant19_Value_o;

    /* Constant: '<S192>/Constant2' */
    localB->VERTICAL_STIFFNESS_b = DrivetrainEv_P.Constant2_Value_lq;

    /* Constant: '<S192>/Constant3' */
    localB->VERTICAL_DAMPING_f = DrivetrainEv_P.Constant3_Value_n;

    /* Constant: '<S192>/Constant4' */
    localB->Q_RE0_i = DrivetrainEv_P.Constant4_Value_b;

    /* Constant: '<S192>/Constant5' */
    localB->Q_V1_m = DrivetrainEv_P.Constant5_Value_i;

    /* Constant: '<S192>/Constant6' */
    localB->Q_V2_f = DrivetrainEv_P.Constant6_Value_g;

    /* Constant: '<S192>/Constant7' */
    localB->Q_FZ1_h = DrivetrainEv_P.Constant7_Value_n;

    /* Constant: '<S192>/Constant8' */
    localB->Q_FZ2_d = DrivetrainEv_P.Constant8_Value_f;

    /* Constant: '<S192>/Constant9' */
    localB->Q_FCX_f = DrivetrainEv_P.Constant9_Value_d;

    /* Constant: '<S192>/Constant10' */
    localB->Q_FCY_i = DrivetrainEv_P.Constant10_Value_d;

    /* Constant: '<S192>/Constant11' */
    localB->Q_CAM_a = DrivetrainEv_P.Constant11_Value_pi;

    /* Constant: '<S192>/Constant16' */
    localB->PFZ1_f = DrivetrainEv_P.Constant16_Value_m;

    /* Constant: '<S192>/Constant17' */
    localB->Q_FCY2_f = DrivetrainEv_P.Constant17_Value_f;

    /* Constant: '<S192>/Constant13' */
    localB->Q_CAM1_n = DrivetrainEv_P.Constant13_Value_d;

    /* Constant: '<S192>/Constant15' */
    localB->Q_CAM2_i = DrivetrainEv_P.Constant15_Value_f;

    /* Constant: '<S192>/Constant21' */
    localB->Q_CAM3_f = DrivetrainEv_P.Constant21_Value_e;

    /* Constant: '<S192>/Constant22' */
    localB->Q_FYS1_g = DrivetrainEv_P.Constant22_Value_k;

    /* Constant: '<S192>/Constant18' */
    localB->Q_FYS2_i = DrivetrainEv_P.Constant18_Value_n;

    /* Constant: '<S192>/Constant20' */
    localB->Q_FYS3_o = DrivetrainEv_P.Constant20_Value_h;

    /* Constant: '<S192>/Constant24' */
    localB->BOTTOM_OFFST_j = DrivetrainEv_P.Constant24_Value_b;

    /* Constant: '<S192>/Constant23' */
    localB->BOTTOM_STIFF_p = DrivetrainEv_P.Constant23_Value_b;

    /* Constant: '<S134>/FxType' */
    localB->FxType_g = DrivetrainEv_P.FxType_Value_l;

    /* Constant: '<S134>/rollType' */
    localB->rollType_c = DrivetrainEv_P.rollType_Value_d;

    /* Constant: '<S134>/vertType' */
    localB->vertType_f = DrivetrainEv_P.vertType_Value_c;

    /* Constant: '<S74>/Constant' incorporates:
     *  Concatenate: '<S74>/Vector Concatenate'
     */
    localB->VectorConcatenate_e[0] = DrivetrainEv_P.Cd;

    /* Constant: '<S74>/Constant1' incorporates:
     *  Concatenate: '<S74>/Vector Concatenate'
     */
    localB->VectorConcatenate_e[2] = DrivetrainEv_P.Cl;

    /* Constant: '<S74>/Constant2' */
    localB->Constant2_g = DrivetrainEv_P.Cpm;

    /* Constant: '<S74>/Constant3' */
    localB->Constant3 = DrivetrainEv_P.a_CG + DrivetrainEv_P.b_CG;

    /* Constant: '<S81>/Constant2' */
    localB->Constant2_i = DrivetrainEv_P.Constant2_Value_k;
  }

  /* Integrator: '<S212>/Integrator' */
  localB->Integrator_b = localX->Integrator_CSTATE_b;

  /* Gain: '<S183>/Sign convention' incorporates:
   *  Product: '<S196>/Product1'
   *  Sum: '<S183>/Add1'
   */
  localB->Signconvention_g = (0.0 - localB->Integrator_b * localB->Saturation_b)
    * DrivetrainEv_P.Signconvention_Gain_i;

  /* Product: '<S80>/Product3' */
  localB->Product3 = localB->Constant2_i * localB->q;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S81>/Constant1' */
    localB->Constant1_i = DrivetrainEv_P.Iyy;

    /* Constant: '<S81>/Constant' */
    localB->Constant = DrivetrainEv_P.Mass;

    /* Constant: '<S72>/gravity' */
    localB->gravity = DrivetrainEv_P.uDOFBodyAxes_g;

    /* Constant: '<S74>/Constant4' */
    localB->Constant4[0] = DrivetrainEv_P.Constant4_Value_a[0];
    localB->Constant4[1] = DrivetrainEv_P.Constant4_Value_a[1];
    localB->Constant4[2] = DrivetrainEv_P.Constant4_Value_a[2];

    /* Constant: '<S83>/Constant' */
    localB->Constant_m = DrivetrainEv_P.Constant_Value_a;
  }

  /* Trigonometry: '<S82>/sincos' incorporates:
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_Gain_h = sin(rtb_Gain_c);

  /* Product: '<S82>/Product' incorporates:
   *  Trigonometry: '<S82>/sincos'
   *  UnaryMinus: '<S82>/Unary Minus'
   */
  localB->Product[0] = -rtb_Gain_h * localB->gravity;

  /* Trigonometry: '<S82>/sincos' incorporates:
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_Gain_c = cos(rtb_Gain_c);

  /* Product: '<S82>/Product' incorporates:
   *  Trigonometry: '<S82>/sincos'
   */
  localB->Product[1] = rtb_Gain_c * localB->gravity;

  /* Product: '<S72>/Product' incorporates:
   *  Gain: '<S72>/Matrix Gain'
   */
  localB->Product_p[0] = (DrivetrainEv_P.MatrixGain_Gain[0] * rtb_Uw[0] +
    rtb_Uw[1] * DrivetrainEv_P.MatrixGain_Gain[2]) * localB->q;
  localB->Product_p[1] = (rtb_Uw[0] * DrivetrainEv_P.MatrixGain_Gain[1] +
    rtb_Uw[1] * DrivetrainEv_P.MatrixGain_Gain[3]) * localB->q;

  /* Trigonometry: '<S86>/sincos' incorporates:
   *  SignalConversion generated from: '<S86>/sincos'
   */
  rtb_SumofElements = cos(localB->Constant_m);
  rtb_VectorConcatenate_j_tmp = sin(localB->Constant_m);

  /* Fcn: '<S86>/Fcn11' incorporates:
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_VectorConcatenate_k[0] = rtb_SumofElements * rtb_Gain_c;

  /* Fcn: '<S86>/Fcn21' incorporates:
   *  Fcn: '<S86>/Fcn22'
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_Switch_g = rtb_Gain_h * rtb_VectorConcatenate_j_tmp;
  rtb_VectorConcatenate_k[1] = rtb_Switch_g * rtb_SumofElements -
    rtb_VectorConcatenate_j_tmp * rtb_SumofElements;

  /* Fcn: '<S86>/Fcn31' incorporates:
   *  Fcn: '<S86>/Fcn32'
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_Gain_p = rtb_Gain_h * rtb_SumofElements;
  rtb_VectorConcatenate_k[2] = rtb_Gain_p * rtb_SumofElements +
    rtb_VectorConcatenate_j_tmp * rtb_VectorConcatenate_j_tmp;

  /* Fcn: '<S86>/Fcn12' incorporates:
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_VectorConcatenate_k[3] = rtb_VectorConcatenate_j_tmp * rtb_Gain_c;

  /* Fcn: '<S86>/Fcn22' incorporates:
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_VectorConcatenate_k[4] = rtb_Switch_g * rtb_VectorConcatenate_j_tmp +
    rtb_SumofElements * rtb_SumofElements;

  /* Fcn: '<S86>/Fcn32' incorporates:
   *  Trigonometry: '<S86>/sincos'
   */
  rtb_VectorConcatenate_k[5] = rtb_Gain_p * rtb_VectorConcatenate_j_tmp -
    rtb_SumofElements * rtb_VectorConcatenate_j_tmp;

  /* Fcn: '<S86>/Fcn13' */
  rtb_VectorConcatenate_k[6] = -rtb_Gain_h;

  /* Fcn: '<S86>/Fcn23' */
  rtb_VectorConcatenate_k[7] = rtb_Gain_c * rtb_VectorConcatenate_j_tmp;

  /* Fcn: '<S86>/Fcn33' */
  rtb_VectorConcatenate_k[8] = rtb_Gain_c * rtb_SumofElements;

  /* SignalConversion generated from: '<S83>/Product' */
  rtb_Gain_c = rtb_Uw[0];
  rtb_Switch_g = rtb_Uw[1];

  /* Product: '<S83>/Product' incorporates:
   *  Concatenate: '<S87>/Vector Concatenate'
   *  Math: '<S83>/Transpose'
   *  SignalConversion generated from: '<S83>/Product'
   */
  for (i = 0; i < 3; i++) {
    rtb_Product_d[i] = (rtb_VectorConcatenate_k[3 * i + 1] * localB->Constant_m
                        + rtb_VectorConcatenate_k[3 * i] * rtb_Gain_c) +
      rtb_VectorConcatenate_k[3 * i + 2] * rtb_Switch_g;
  }

  /* End of Product: '<S83>/Product' */

  /* SignalConversion generated from: '<S72>/Position' */
  localB->TmpSignalConversionAtPositionIn[0] = rtb_Product_d[0];
  localB->TmpSignalConversionAtPositionIn[1] = rtb_Product_d[2];
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S118>/Constant' */
    localB->Constant_o = DrivetrainEv_P.Constant_Value_f;

    /* Memory: '<S51>/Memory' */
    localB->Memory_o = localDW->Memory_PreviousInput_d;

    /* Constant: '<S50>/domega_o' */
    localB->domega_o_p = DrivetrainEv_P.domega_o;
  }

  /* SignalConversion generated from: '<S71>/Vector Concatenate10' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate10'
   */
  localB->VectorConcatenate10[0] = 0.0;

  /* SignalConversion generated from: '<S71>/Vector Concatenate10' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate10'
   */
  localB->VectorConcatenate10[2] = 0.0;

  /* SignalConversion generated from: '<S71>/Vector Concatenate5' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate5'
   */
  localB->VectorConcatenate5[1] = 0.0;

  /* SignalConversion generated from: '<S71>/Vector Concatenate6' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate6'
   */
  localB->VectorConcatenate6[1] = 0.0;

  /* SignalConversion generated from: '<S71>/Vector Concatenate8' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate8'
   */
  localB->VectorConcatenate8[0] = 0.0;

  /* SignalConversion generated from: '<S71>/Vector Concatenate8' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate8'
   */
  localB->VectorConcatenate8[2] = 0.0;

  /* Integrator: '<S51>/Integrator' */
  if (ssIsModeUpdateTimeStep(DrivetrainEv_M->rtS)) {
    zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE_h,
                       (localB->Memory_o));
    if ((zcEvent != NO_ZCEVENT) || (localDW->Integrator_IWORK_g != 0)) {
      xHasBeenChanged = (localX->Integrator_CSTATE_g != localB->domega_o_p);
      localX->Integrator_CSTATE_g = localB->domega_o_p;
      if (xHasBeenChanged) {
        ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      }
    }

    rtb_Switch_g = localX->Integrator_CSTATE_g;
  } else {
    rtb_Switch_g = localX->Integrator_CSTATE_g;
  }

  /* End of Integrator: '<S51>/Integrator' */

  /* Sum: '<S50>/Subtract1' incorporates:
   *  Gain: '<S50>/Gain1'
   *  Gain: '<S50>/Gain2'
   *  Integrator: '<S50>/Integrator'
   */
  rtb_Gain_p = DrivetrainEv_P.b * rtb_Switch_g + DrivetrainEv_P.k *
    localX->Integrator_CSTATE_bn;

  /* UnaryMinus: '<S50>/Unary Minus' */
  localB->UnaryMinus_o = -rtb_Gain_p;

  /* Integrator: '<S59>/Integrator' */
  *rty_MotSpd = localX->Integrator_CSTATE_i;

  /* Gain: '<S59>/Gain2' */
  localB->Gain2 = -DrivetrainEv_P.RotationalInertia_b * *rty_MotSpd;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S58>/J'
     *  Constant: '<S68>/Constant'
     *  Constant: '<S69>/Constant'
     *  Logic: '<S61>/Logical Operator'
     *  RelationalOperator: '<S68>/Compare'
     *  RelationalOperator: '<S69>/Compare'
     */
    if ((DrivetrainEv_P.Jmotor >= -DrivetrainEv_P.div0protectabspoly_thresh) &&
        (DrivetrainEv_P.Jmotor <= DrivetrainEv_P.div0protectabspoly_thresh)) {
      /* Switch: '<S61>/Switch' incorporates:
       *  Fcn: '<S61>/Fcn'
       */
      localB->Switch = 2.0E-6 / (3.0 - rt_powd_snf(DrivetrainEv_P.Jmotor /
        1.0e-6, 2.0));
    } else {
      /* Switch: '<S61>/Switch' incorporates:
       *  Abs: '<S61>/Abs'
       */
      localB->Switch = fabs(DrivetrainEv_P.Jmotor);
    }

    /* End of Switch: '<S61>/Switch' */

    /* Constant: '<S154>/Constant2' */
    localB->Constant2_d = DrivetrainEv_P.Lrel;

    /* Constant: '<S172>/Constant' */
    localB->Constant_a = -DrivetrainEv_P.VXLOW;

    /* Constant: '<S173>/Constant' */
    localB->Constant_ax = DrivetrainEv_P.VXLOW;

    /* Constant: '<S196>/Constant2' */
    localB->Constant2_a = DrivetrainEv_P.Lrel;

    /* Constant: '<S214>/Constant' incorporates:
     *  Constant: '<S172>/Constant'
     */
    localB->Constant_p = -DrivetrainEv_P.VXLOW;

    /* Constant: '<S215>/Constant' */
    localB->Constant_h = DrivetrainEv_P.VXLOW;

    /* Constant: '<S14>/omega_c' */
    localB->omega_c = DrivetrainEv_P.omega_c;

    /* Constant: '<S26>/Constant' incorporates:
     *  Concatenate: '<S26>/Vector Concatenate'
     */
    localB->VectorConcatenate_n[0] = DrivetrainEv_P.omegaw1o;

    /* Constant: '<S26>/Constant1' incorporates:
     *  Concatenate: '<S26>/Vector Concatenate'
     */
    localB->VectorConcatenate_n[1] = DrivetrainEv_P.omegaw2o;
  }

  /* Integrator: '<S26>/Integrator' */
  /* Limited  Integrator  */
  if (ssIsModeUpdateTimeStep(DrivetrainEv_M->rtS)) {
    if (localDW->Integrator_IWORK_i != 0) {
      localX->Integrator_CSTATE_gx[0] = localB->VectorConcatenate_n[0];
      localX->Integrator_CSTATE_gx[1] = localB->VectorConcatenate_n[1];
    }

    if (localX->Integrator_CSTATE_gx[0] >= DrivetrainEv_P.Integrator_UpperSat) {
      if (localX->Integrator_CSTATE_gx[0] != DrivetrainEv_P.Integrator_UpperSat)
      {
        localX->Integrator_CSTATE_gx[0] = DrivetrainEv_P.Integrator_UpperSat;
        ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      }
    } else if ((localX->Integrator_CSTATE_gx[0] <=
                DrivetrainEv_P.Integrator_LowerSat) &&
               (localX->Integrator_CSTATE_gx[0] !=
                DrivetrainEv_P.Integrator_LowerSat)) {
      localX->Integrator_CSTATE_gx[0] = DrivetrainEv_P.Integrator_LowerSat;
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
    }

    if (localX->Integrator_CSTATE_gx[1] >= DrivetrainEv_P.Integrator_UpperSat) {
      if (localX->Integrator_CSTATE_gx[1] != DrivetrainEv_P.Integrator_UpperSat)
      {
        localX->Integrator_CSTATE_gx[1] = DrivetrainEv_P.Integrator_UpperSat;
        ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      }
    } else if ((localX->Integrator_CSTATE_gx[1] <=
                DrivetrainEv_P.Integrator_LowerSat) &&
               (localX->Integrator_CSTATE_gx[1] !=
                DrivetrainEv_P.Integrator_LowerSat)) {
      localX->Integrator_CSTATE_gx[1] = DrivetrainEv_P.Integrator_LowerSat;
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
    }

    rtb_Uw[0] = localX->Integrator_CSTATE_gx[0];
    rtb_Uw[1] = localX->Integrator_CSTATE_gx[1];
  } else {
    if (localX->Integrator_CSTATE_gx[0] >= DrivetrainEv_P.Integrator_UpperSat) {
      rtb_Uw[0] = DrivetrainEv_P.Integrator_UpperSat;
    } else if (localX->Integrator_CSTATE_gx[0] <=
               DrivetrainEv_P.Integrator_LowerSat) {
      rtb_Uw[0] = DrivetrainEv_P.Integrator_LowerSat;
    } else {
      rtb_Uw[0] = localX->Integrator_CSTATE_gx[0];
    }

    if (localX->Integrator_CSTATE_gx[1] >= DrivetrainEv_P.Integrator_UpperSat) {
      rtb_Uw[1] = DrivetrainEv_P.Integrator_UpperSat;
    } else if (localX->Integrator_CSTATE_gx[1] <=
               DrivetrainEv_P.Integrator_LowerSat) {
      rtb_Uw[1] = DrivetrainEv_P.Integrator_LowerSat;
    } else {
      rtb_Uw[1] = localX->Integrator_CSTATE_gx[1];
    }
  }

  /* End of Integrator: '<S26>/Integrator' */

  /* UnaryMinus: '<S30>/Unary Minus1' */
  localB->UnaryMinus1[0] = -rtb_Uw[0];
  localB->UnaryMinus1[1] = -rtb_Uw[1];

  /* Switch: '<S15>/Switch' */
  if (localB->Memory != 0.0) {
    /* Switch: '<S15>/Switch' */
    localB->Switch_p = rtb_Switch;
  } else {
    /* Switch: '<S15>/Switch' */
    localB->Switch_p = localB->domega_o;
  }

  /* End of Switch: '<S15>/Switch' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S48>/Constant' */
    localB->Constant_g = DrivetrainEv_P.OpenDifferential_eta;

    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S30>/Constant'
     */
    if (DrivetrainEv_P.Constant_Value_h > DrivetrainEv_P.Switch_Threshold) {
      /* Switch: '<S30>/Switch' incorporates:
       *  Constant: '<S30>/Constant1'
       */
      localB->diffDir = DrivetrainEv_P.Constant1_Value_e;
    } else {
      /* Switch: '<S30>/Switch' incorporates:
       *  Constant: '<S30>/Constant1'
       *  UnaryMinus: '<S30>/Unary Minus'
       */
      localB->diffDir = -DrivetrainEv_P.Constant1_Value_e;
    }

    /* End of Switch: '<S30>/Switch' */

    /* Constant: '<S40>/Constant' */
    localB->Constant_f = DrivetrainEv_P.Constant_Value_d;

    /* Constant: '<S47>/Constant1' */
    localB->Constant1_c = DrivetrainEv_P.Constant1_Value_i;
  }

  /* Gain: '<S30>/Gain' */
  rtb_Gain_c = DrivetrainEv_P.Ndiff / 2.0;

  /* Sum: '<S30>/Sum of Elements' incorporates:
   *  Gain: '<S30>/Gain'
   *  Product: '<S30>/Product'
   */
  rtb_SumofElements = localB->diffDir * rtb_Uw[0] * rtb_Gain_c + localB->diffDir
    * rtb_Uw[1] * rtb_Gain_c;

  /* Gain: '<S47>/Gain' incorporates:
   *  Abs: '<S46>/Abs'
   *  Gain: '<S47>/Gain1'
   *  Gain: '<S47>/Gain2'
   *  SignalConversion generated from: '<S30>/Vector Concatenate'
   *  Sum: '<S47>/Subtract1'
   *  Sum: '<S47>/Subtract2'
   *  Trigonometry: '<S47>/Trigonometric Function'
   */
  rtb_Gain_c = (tanh((DrivetrainEv_P.Gain1_Gain_e * fabs(rtb_SumofElements) -
                      localB->Constant1_c) * DrivetrainEv_P.Gain2_Gain) +
                localB->Constant1_c) * DrivetrainEv_P.Gain_Gain_a;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S46>/Constant' */
    localB->Constant_o3 = DrivetrainEv_P.Constant_Value_m;
  }

  /* Switch: '<S40>/Switch' incorporates:
   *  Product: '<S40>/Product1'
   *  SignalConversion generated from: '<S30>/Vector Concatenate'
   */
  if (rtb_Gain_p * rtb_SumofElements > DrivetrainEv_P.Switch_Threshold_m) {
    rtb_Switch = localB->Constant_g;
  } else {
    rtb_Switch = localB->Constant_f;
  }

  /* Product: '<S40>/Product4' incorporates:
   *  Product: '<S46>/Product3'
   *  Product: '<S46>/Product5'
   *  Sum: '<S46>/Subtract1'
   *  Sum: '<S47>/Subtract'
   *  Switch: '<S40>/Switch'
   */
  rtb_Gain_c = ((localB->Constant1_c - rtb_Gain_c) * localB->Constant_o3 +
                rtb_Switch * rtb_Gain_c) * rtb_Gain_p;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S38>/Constant' */
    localB->Constant_ac = DrivetrainEv_P.Constant_Value_l;

    /* Constant: '<S43>/Constant1' */
    localB->Constant1_m = DrivetrainEv_P.Constant1_Value_dt;

    /* Constant: '<S42>/Constant' */
    localB->Constant_pi = DrivetrainEv_P.Constant_Value_p;

    /* Constant: '<S39>/Constant' */
    localB->Constant_n = DrivetrainEv_P.Constant_Value_k;

    /* Constant: '<S45>/Constant1' */
    localB->Constant1_n = DrivetrainEv_P.Constant1_Value_n;
  }

  /* Gain: '<S43>/Gain' incorporates:
   *  Abs: '<S42>/Abs'
   *  Gain: '<S43>/Gain1'
   *  Gain: '<S43>/Gain2'
   *  SignalConversion generated from: '<S30>/Vector Concatenate'
   *  Sum: '<S43>/Subtract1'
   *  Sum: '<S43>/Subtract2'
   *  Trigonometry: '<S43>/Trigonometric Function'
   */
  rtb_Gain_h = (tanh((DrivetrainEv_P.Gain1_Gain_m * fabs(localB->UnaryMinus1[0])
                      - localB->Constant1_m) * DrivetrainEv_P.Gain2_Gain_m) +
                localB->Constant1_m) * DrivetrainEv_P.Gain_Gain_d;

  /* Gain: '<S45>/Gain' incorporates:
   *  Abs: '<S44>/Abs'
   *  Gain: '<S45>/Gain1'
   *  Gain: '<S45>/Gain2'
   *  SignalConversion generated from: '<S30>/Vector Concatenate'
   *  Sum: '<S45>/Subtract1'
   *  Sum: '<S45>/Subtract2'
   *  Trigonometry: '<S45>/Trigonometric Function'
   */
  rtb_Gain_p = (tanh((DrivetrainEv_P.Gain1_Gain_f * fabs(localB->UnaryMinus1[1])
                      - localB->Constant1_n) * DrivetrainEv_P.Gain2_Gain_c) +
                localB->Constant1_n) * DrivetrainEv_P.Gain_Gain_p;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Constant: '<S44>/Constant' */
    localB->Constant_nk = DrivetrainEv_P.Constant_Value_fp;

    /* Constant: '<S26>/bw1' */
    localB->bw1 = DrivetrainEv_P.bw1;

    /* Constant: '<S26>/bd' */
    localB->bd = DrivetrainEv_P.bd;

    /* Constant: '<S26>/bw2' */
    localB->bw2 = DrivetrainEv_P.bw2;

    /* Constant: '<S26>/Ndiff2' */
    localB->Ndiff2 = DrivetrainEv_P.Ndiff;

    /* Constant: '<S26>/Jd' */
    localB->Jd = DrivetrainEv_P.Jd;

    /* Constant: '<S26>/Jw1' */
    localB->Jw1 = DrivetrainEv_P.Jw1;

    /* Constant: '<S26>/Jw3' */
    localB->Jw3 = DrivetrainEv_P.Jw2;
  }

  /* MATLAB Function: '<S26>/Open Differential' */
  /* MATLAB Function 'Open Differential/Open Differential': '<S29>:1' */
  if (DrivetrainEv_P.OpenDifferential_shaftSwitchMas == 1.0) {
    /* SignalConversion generated from: '<S29>/ SFunction ' */
    /* '<S29>:1:3' */
    /* '<S29>:1:4' */
    rtb_Product_d[0] = rtb_Gain_c;

    /* Product: '<S38>/Product4' incorporates:
     *  Product: '<S38>/Product1'
     *  SignalConversion generated from: '<S30>/Vector Concatenate'
     *  Switch: '<S38>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    if (-rtb_UnaryMinus1 * localB->UnaryMinus1[0] >
        DrivetrainEv_P.Switch_Threshold_i) {
      rtb_Switch = localB->Constant_g;
    } else {
      rtb_Switch = localB->Constant_ac;
    }

    /* SignalConversion generated from: '<S29>/ SFunction ' incorporates:
     *  Product: '<S38>/Product4'
     *  Product: '<S42>/Product3'
     *  Product: '<S42>/Product5'
     *  Sum: '<S42>/Subtract1'
     *  Sum: '<S43>/Subtract'
     *  Switch: '<S38>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    rtb_Product_d[1] = ((localB->Constant1_m - rtb_Gain_h) * localB->Constant_pi
                        + rtb_Switch * rtb_Gain_h) * -rtb_UnaryMinus1;

    /* Product: '<S39>/Product4' incorporates:
     *  Product: '<S39>/Product1'
     *  SignalConversion generated from: '<S30>/Vector Concatenate'
     *  Switch: '<S39>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    if (-rtb_UnaryMinus1 * localB->UnaryMinus1[1] >
        DrivetrainEv_P.Switch_Threshold_f) {
      rtb_Switch = localB->Constant_g;
    } else {
      rtb_Switch = localB->Constant_n;
    }

    /* SignalConversion generated from: '<S29>/ SFunction ' incorporates:
     *  Product: '<S39>/Product4'
     *  Product: '<S44>/Product3'
     *  Product: '<S44>/Product5'
     *  Sum: '<S44>/Subtract1'
     *  Sum: '<S45>/Subtract'
     *  Switch: '<S39>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    rtb_Product_d[2] = ((localB->Constant1_n - rtb_Gain_p) * localB->Constant_nk
                        + rtb_Switch * rtb_Gain_p) * -rtb_UnaryMinus1;
    automldiffopen_RcYoMae5(rtb_Product_d, localB->bw1, localB->bd, localB->bw2,
      localB->Ndiff2, 1.0, localB->Jd, localB->Jw1, localB->Jw3, rtb_Uw,
      rtb_TmpSignalConversionAtSFunct, localB->xdot);

    /* '<S29>:1:4' */
  } else {
    /* SignalConversion generated from: '<S29>/ SFunction ' */
    /* '<S29>:1:6' */
    rtb_Product_d[0] = rtb_Gain_c;

    /* Product: '<S38>/Product4' incorporates:
     *  Product: '<S38>/Product1'
     *  SignalConversion generated from: '<S30>/Vector Concatenate'
     *  Switch: '<S38>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    if (-rtb_UnaryMinus1 * localB->UnaryMinus1[0] >
        DrivetrainEv_P.Switch_Threshold_i) {
      rtb_Switch = localB->Constant_g;
    } else {
      rtb_Switch = localB->Constant_ac;
    }

    /* SignalConversion generated from: '<S29>/ SFunction ' incorporates:
     *  Product: '<S38>/Product4'
     *  Product: '<S42>/Product3'
     *  Product: '<S42>/Product5'
     *  Sum: '<S42>/Subtract1'
     *  Sum: '<S43>/Subtract'
     *  Switch: '<S38>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    rtb_Product_d[1] = ((localB->Constant1_m - rtb_Gain_h) * localB->Constant_pi
                        + rtb_Switch * rtb_Gain_h) * -rtb_UnaryMinus1;

    /* Product: '<S39>/Product4' incorporates:
     *  Product: '<S39>/Product1'
     *  SignalConversion generated from: '<S30>/Vector Concatenate'
     *  Switch: '<S39>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    if (-rtb_UnaryMinus1 * localB->UnaryMinus1[1] >
        DrivetrainEv_P.Switch_Threshold_f) {
      rtb_Switch = localB->Constant_g;
    } else {
      rtb_Switch = localB->Constant_n;
    }

    /* SignalConversion generated from: '<S29>/ SFunction ' incorporates:
     *  Product: '<S39>/Product4'
     *  Product: '<S44>/Product3'
     *  Product: '<S44>/Product5'
     *  Sum: '<S44>/Subtract1'
     *  Sum: '<S45>/Subtract'
     *  Switch: '<S39>/Switch'
     *  UnaryMinus: '<S14>/Unary Minus'
     */
    rtb_Product_d[2] = ((localB->Constant1_n - rtb_Gain_p) * localB->Constant_nk
                        + rtb_Switch * rtb_Gain_p) * -rtb_UnaryMinus1;
    automldiffopen_RcYoMae5(rtb_Product_d, localB->bw1, localB->bd, localB->bw2,
      localB->Ndiff2, 0.0, localB->Jd, localB->Jw1, localB->Jw3, rtb_Uw,
      rtb_TmpSignalConversionAtSFunct, localB->xdot);

    /* '<S29>:1:6' */
  }

  /* End of MATLAB Function: '<S26>/Open Differential' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Switch: '<S33>/Switch1' incorporates:
     *  Constant: '<S33>/Constant'
     */
    if (DrivetrainEv_P.Constant_Value_fx > DrivetrainEv_P.Switch1_Threshold) {
      /* Switch: '<S33>/Switch1' incorporates:
       *  Constant: '<S33>/Constant6'
       */
      localB->diffDir_j = DrivetrainEv_P.Constant6_Value_h;
    } else {
      /* Switch: '<S33>/Switch1' incorporates:
       *  Constant: '<S33>/Constant6'
       *  UnaryMinus: '<S33>/Unary Minus'
       */
      localB->diffDir_j = -DrivetrainEv_P.Constant6_Value_h;
    }

    /* End of Switch: '<S33>/Switch1' */

    /* Constant: '<S50>/omega_c' */
    localB->omega_c_i = DrivetrainEv_P.omega_c;
  }

  /* Sum: '<S50>/Subtract' */
  localB->Subtract = *rty_MotSpd - rtb_SumofElements;

  /* Switch: '<S51>/Switch' */
  if (!(localB->Memory_o != 0.0)) {
    rtb_Switch_g = localB->domega_o_p;
  }

  /* Product: '<S51>/Product' incorporates:
   *  Sum: '<S51>/Sum'
   *  Switch: '<S51>/Switch'
   */
  localB->Product_j = (localB->Subtract - rtb_Switch_g) * localB->omega_c_i;
}

/* Update for referenced model: 'DrivetrainEv' */
void DrivetrainEv_Update(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, const
  real_T *rtu_MotTrq, const real_T *rtu_BrakeReq, const real_T *rtu_Grade, const
  real_T *rtu_WindVel, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW,
  X_DrivetrainEv_n_T *localX, XDis_DrivetrainEv_n_T *localXdis)
{
  /* local block i/o variables */
  real_T rtb_Fz;
  real_T rtb_Fz_c;
  real_T rtb_ImpSel_InsertedFor_Tout_at_;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_a;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_a;
  real_T rtb_ImpSel_InsertedFor_Tout_a_f;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_p;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_j;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_l;
  int32_T ForEach_itr_h;
  real_T rtb_VectorConcatenate_f[9];
  real_T tmpForInput_idx_0;
  real_T tmpForInput_idx_1;
  int32_T i;
  if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    if (memcmp(DrivetrainEv_M->nonContDerivSignal[0].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[0].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[0].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[0].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[0].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[0].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[1].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[1].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[1].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[1].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[1].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[1].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[2].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[2].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[2].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[2].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[2].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[2].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[3].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[3].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[3].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[3].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[3].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[3].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[4].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[4].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[4].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[4].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[4].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[4].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[5].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[5].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[5].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[5].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[5].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[5].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[6].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[6].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[6].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[6].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[6].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[6].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[7].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[7].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[7].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[7].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[7].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[7].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[8].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[8].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[8].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[8].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[8].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[8].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[9].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[9].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[9].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[9].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[9].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[9].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[10].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[10].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[10].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[10].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[10].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[10].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[11].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[11].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[11].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[11].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[11].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[11].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[12].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[12].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[12].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[12].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[12].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[12].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[13].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[13].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[13].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[13].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[13].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[13].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }

    if (memcmp(DrivetrainEv_M->nonContDerivSignal[14].pCurrVal,
               DrivetrainEv_M->nonContDerivSignal[14].pPrevVal,
               DrivetrainEv_M->nonContDerivSignal[14].sizeInBytes) != 0) {
      (void) memcpy(DrivetrainEv_M->nonContDerivSignal[14].pPrevVal,
                    DrivetrainEv_M->nonContDerivSignal[14].pCurrVal,
                    DrivetrainEv_M->nonContDerivSignal[14].sizeInBytes);
      ssSetSolverNeedsReset(DrivetrainEv_M->rtS);
    }
  }

  /* UnaryMinus: '<S75>/Unary Minus1' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   */
  localB->VectorConcatenate_l[0] = -*rtu_WindVel;
  localB->VectorConcatenate_l[1] = -0.0;
  localB->VectorConcatenate_l[2] = -0.0;

  /* UnitConversion: '<S71>/Unit Conversion' */
  /* Unit Conversion - from: deg to: rad
     Expression: output = (0.0174533*input) + (0) */
  localB->UnitConversion = 0.017453292519943295 * *rtu_Grade;

  /* Sum: '<S75>/Add' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate1'
   */
  localB->VectorConcatenate1[3] = localB->UnaryMinus - localB->UnitConversion;

  /* Outputs for Iterator SubSystem: '<S75>/rotation' incorporates:
   *  ForEach: '<S128>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 4; ForEach_itr++) {
    real_T rtb_Product_a_idx_0;
    real_T rtb_Product_a_idx_1;
    real_T rtb_Product_a_idx_2;
    real_T rtb_VectorConcatenate_h_tmp;
    real_T rtb_VectorConcatenate_h_tmp_0;
    real_T tmpForInput;
    if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1,
         0)) {
      /* Constant: '<S128>/psi' */
      localB->CoreSubsys_c[ForEach_itr].psi =
        DrivetrainEv_P.CoreSubsys_c.psi_Value;

      /* Constant: '<S128>/phi' */
      localB->CoreSubsys_c[ForEach_itr].phi =
        DrivetrainEv_P.CoreSubsys_c.phi_Value;
    }

    /* SignalConversion generated from: '<S129>/sincos' incorporates:
     *  Concatenate: '<S75>/Vector Concatenate1'
     *  ForEachSliceSelector generated from: '<S128>/theta'
     */
    tmpForInput_idx_1 = localB->VectorConcatenate1[ForEach_itr];

    /* Trigonometry: '<S129>/sincos' incorporates:
     *  SignalConversion generated from: '<S129>/sincos'
     */
    rtb_Product_a_idx_0 = cos(localB->CoreSubsys_c[ForEach_itr].psi);
    tmpForInput_idx_0 = sin(localB->CoreSubsys_c[ForEach_itr].psi);
    rtb_Product_a_idx_1 = cos(tmpForInput_idx_1);
    tmpForInput_idx_1 = sin(tmpForInput_idx_1);
    rtb_Product_a_idx_2 = cos(localB->CoreSubsys_c[ForEach_itr].phi);
    tmpForInput = sin(localB->CoreSubsys_c[ForEach_itr].phi);

    /* Fcn: '<S129>/Fcn11' */
    rtb_VectorConcatenate_f[0] = rtb_Product_a_idx_0 * rtb_Product_a_idx_1;

    /* Fcn: '<S129>/Fcn21' incorporates:
     *  Fcn: '<S129>/Fcn22'
     */
    rtb_VectorConcatenate_h_tmp = tmpForInput_idx_1 * tmpForInput;
    rtb_VectorConcatenate_f[1] = rtb_VectorConcatenate_h_tmp *
      rtb_Product_a_idx_0 - tmpForInput_idx_0 * rtb_Product_a_idx_2;

    /* Fcn: '<S129>/Fcn31' incorporates:
     *  Fcn: '<S129>/Fcn32'
     */
    rtb_VectorConcatenate_h_tmp_0 = tmpForInput_idx_1 * rtb_Product_a_idx_2;
    rtb_VectorConcatenate_f[2] = rtb_VectorConcatenate_h_tmp_0 *
      rtb_Product_a_idx_0 + tmpForInput_idx_0 * tmpForInput;

    /* Fcn: '<S129>/Fcn12' */
    rtb_VectorConcatenate_f[3] = tmpForInput_idx_0 * rtb_Product_a_idx_1;

    /* Fcn: '<S129>/Fcn22' */
    rtb_VectorConcatenate_f[4] = rtb_VectorConcatenate_h_tmp * tmpForInput_idx_0
      + rtb_Product_a_idx_0 * rtb_Product_a_idx_2;

    /* Fcn: '<S129>/Fcn32' */
    rtb_VectorConcatenate_f[5] = rtb_VectorConcatenate_h_tmp_0 *
      tmpForInput_idx_0 - rtb_Product_a_idx_0 * tmpForInput;

    /* Fcn: '<S129>/Fcn13' */
    rtb_VectorConcatenate_f[6] = -tmpForInput_idx_1;

    /* Fcn: '<S129>/Fcn23' */
    rtb_VectorConcatenate_f[7] = rtb_Product_a_idx_1 * tmpForInput;

    /* Fcn: '<S129>/Fcn33' */
    rtb_VectorConcatenate_f[8] = rtb_Product_a_idx_1 * rtb_Product_a_idx_2;
    for (i = 0; i < 3; i++) {
      /* ForEachSliceAssignment generated from: '<S128>/x' incorporates:
       *  Concatenate: '<S131>/Vector Concatenate'
       *  Concatenate: '<S75>/Vector Concatenate'
       *  ForEachSliceSelector generated from: '<S128>/X'
       *  Math: '<S128>/Transpose1'
       *  Product: '<S130>/Product'
       *  Reshape: '<S130>/Reshape2'
       */
      localB->ImpAsg_InsertedFor_x_at_inport_[i + 3 * ForEach_itr] =
        (rtb_VectorConcatenate_f[3 * i + 1] * localB->VectorConcatenate_l[3 *
         ForEach_itr + 1] + rtb_VectorConcatenate_f[3 * i] *
         localB->VectorConcatenate_l[3 * ForEach_itr]) +
        rtb_VectorConcatenate_f[3 * i + 2] * localB->VectorConcatenate_l[3 *
        ForEach_itr + 2];
    }
  }

  /* End of Outputs for SubSystem: '<S75>/rotation' */

  /* Selector: '<S75>/Selector1' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector1[0] = localB->ImpAsg_InsertedFor_x_at_inport_[3];

  /* Gain: '<S75>/Gain' */
  localB->Gain[0] = DrivetrainEv_P.Gain_Gain[0] * localB->Selector1[0];

  /* Selector: '<S75>/Selector2' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector2[0] = localB->ImpAsg_InsertedFor_x_at_inport_[6];

  /* Gain: '<S75>/Gain1' */
  localB->Gain1[0] = DrivetrainEv_P.Gain1_Gain[0] * localB->Selector2[0];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[0] = localB->Gain[0];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[3] = localB->Gain1[0];

  /* Selector: '<S75>/Selector1' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector1[1] = localB->ImpAsg_InsertedFor_x_at_inport_[4];

  /* Gain: '<S75>/Gain' */
  localB->Gain[1] = DrivetrainEv_P.Gain_Gain[1] * localB->Selector1[1];

  /* Selector: '<S75>/Selector2' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector2[1] = localB->ImpAsg_InsertedFor_x_at_inport_[7];

  /* Gain: '<S75>/Gain1' */
  localB->Gain1[1] = DrivetrainEv_P.Gain1_Gain[1] * localB->Selector2[1];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[1] = localB->Gain[1];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[4] = localB->Gain1[1];

  /* Selector: '<S75>/Selector1' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector1[2] = localB->ImpAsg_InsertedFor_x_at_inport_[5];

  /* Gain: '<S75>/Gain' */
  localB->Gain[2] = DrivetrainEv_P.Gain_Gain[2] * localB->Selector1[2];

  /* Selector: '<S75>/Selector2' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector2[2] = localB->ImpAsg_InsertedFor_x_at_inport_[8];

  /* Gain: '<S75>/Gain1' */
  localB->Gain1[2] = DrivetrainEv_P.Gain1_Gain[2] * localB->Selector2[2];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[2] = localB->Gain[2];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[5] = localB->Gain1[2];

  /* Gain: '<S78>/a' */
  localB->a = DrivetrainEv_P.a_CG * localB->Gain[2];

  /* Gain: '<S78>/b' */
  localB->b = DrivetrainEv_P.b_CG * localB->Gain1[2];

  /* Selector: '<S98>/Selector' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector[0] = localB->VectorConcatenate_g[0];

  /* Math: '<S99>/Math Function' incorporates:
   *  Selector: '<S98>/Selector'
   *
   * About '<S99>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction[0] = localB->Selector[0] * localB->Selector[0];

  /* Selector: '<S98>/Selector' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector[1] = localB->VectorConcatenate_g[1];

  /* Math: '<S99>/Math Function' incorporates:
   *  Selector: '<S98>/Selector'
   *
   * About '<S99>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction[1] = localB->Selector[1] * localB->Selector[1];

  /* Selector: '<S98>/Selector' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector[2] = localB->VectorConcatenate_g[2];

  /* Math: '<S99>/Math Function' incorporates:
   *  Selector: '<S98>/Selector'
   *
   * About '<S99>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction[2] = localB->Selector[2] * localB->Selector[2];

  /* Sum: '<S99>/Sum of Elements1' */
  localB->SumofElements1 = (localB->MathFunction[0] + localB->MathFunction[1]) +
    localB->MathFunction[2];

  /* Sqrt: '<S99>/Sqrt' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    if (localDW->Sqrt_DWORK1 != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      ssSetContTimeOutputInconsistentWithStateAtMajorStep(DrivetrainEv_M->rtS);
      localDW->Sqrt_DWORK1 = 0;
    }

    /* Sqrt: '<S99>/Sqrt' */
    localB->Sqrt = sqrt(localB->SumofElements1);
  } else {
    if (localB->SumofElements1 < 0.0) {
      /* Sqrt: '<S99>/Sqrt' */
      localB->Sqrt = -sqrt(fabs(localB->SumofElements1));
    } else {
      /* Sqrt: '<S99>/Sqrt' */
      localB->Sqrt = sqrt(localB->SumofElements1);
    }

    if (localB->SumofElements1 < 0.0) {
      localDW->Sqrt_DWORK1 = 1;
    }
  }

  /* End of Sqrt: '<S99>/Sqrt' */

  /* Gain: '<S98>/1//NF' */
  rtb_Fz = DrivetrainEv_P.uNF_Gain * localB->Sqrt;

  /* Gain: '<S6>/Front Bias' */
  localB->FrontBias = DrivetrainEv_P.FrontBias_Gain * *rtu_BrakeReq;

  /* Product: '<S156>/product' */
  localB->product = localB->FrontBias * localB->TorqueConversion1 *
    localB->Diskbrakeactuatorbore * localB->Numberofbrakepads;

  /* Saturate: '<S156>/Disallow Negative Brake Torque' */
  if (localB->product > DrivetrainEv_P.DisallowNegativeBrakeTorque_Upp) {
    /* Saturate: '<S156>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_Upp;
  } else if (localB->product < DrivetrainEv_P.DisallowNegativeBrakeTorque_Low) {
    /* Saturate: '<S156>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_Low;
  } else {
    /* Saturate: '<S156>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque = localB->product;
  }

  /* End of Saturate: '<S156>/Disallow Negative Brake Torque' */

  /* Gain: '<S156>/Torque Conversion' */
  localB->TorqueConversion = DrivetrainEv_P.Rm * DrivetrainEv_P.mu_kinetic *
    localB->DisallowNegativeBrakeTorque;

  /* Gain: '<S153>/Ratio of static to kinetic' */
  localB->Ratioofstatictokinetic = DrivetrainEv_P.mu_static /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion;

  /* Gain: '<S153>/Ratio of static to kinetic1' */
  localB->Ratioofstatictokinetic1 = DrivetrainEv_P.mu_kinetic /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion;

  /* Outputs for Iterator SubSystem: '<S141>/Clutch' incorporates:
   *  ForEach: '<S152>/For Each'
   */
  for (ForEach_itr_h = 0; ForEach_itr_h < 1; ForEach_itr_h++) {
    /* ForEachSliceSelector generated from: '<S152>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_a_f = localB->Signconvention;

    /* ForEachSliceSelector generated from: '<S152>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_p = localB->Ratioofstatictokinetic;

    /* ForEachSliceSelector generated from: '<S152>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_j = localB->Ratioofstatictokinetic1;

    /* Chart: '<S152>/Clutch' */
    DrivetrainEv_Clutch(DrivetrainEv_M, rtb_ImpSel_InsertedFor_Tout_a_f,
                        rtb_ImpSel_InsertedFor_Tfmaxs_p,
                        rtb_ImpSel_InsertedFor_Tfmaxk_j, DrivetrainEv_P.VXLOW *
                        DrivetrainEv_P.Re * 0.0, &localB->
                        CoreSubsys[ForEach_itr_h].sf_Clutch,
                        &localDW->CoreSubsys[ForEach_itr_h].sf_Clutch,
                        &DrivetrainEv_P.CoreSubsys.sf_Clutch,
                        &localX->CoreSubsys[ForEach_itr_h].sf_Clutch,
                        &localXdis->CoreSubsys[ForEach_itr_h].sf_Clutch);

    /* ForEachSliceAssignment generated from: '<S152>/Omega' */
    localB->ImpAsg_InsertedFor_Omega_at_i_d = localB->CoreSubsys[ForEach_itr_h].
      sf_Clutch.Omega;
  }

  /* End of Outputs for SubSystem: '<S141>/Clutch' */

  /* MATLAB Function: '<S137>/Simple Magic Tire' */
  DrivetrainEv_SimpleMagicTire(localB->Saturation, rtb_Fz,
    localB->ImpAsg_InsertedFor_Omega_at_i_d, localB->VectorConcatenate7[0],
    localB->D, localB->C, localB->B, localB->E, localB->lam_muxConstant,
    localB->Constant2_p, localB->kappaFx, localB->FzFx, localB->FxMap,
    localB->TirePrsConstant, localB->FNOMIN, localB->NOMPRES, localB->QSY1,
    localB->QSY2, localB->QSY3, localB->QSY4, localB->QSY5, localB->QSY6,
    localB->QSY7, localB->QSY8, localB->gamma, localB->lam_My,
    localB->UNLOADED_RADIUS, localB->PRESMIN, localB->PRESMAX, localB->VxMy,
    localB->FzMy, localB->MyMap, 0.0, localB->FxType, localB->rollType,
    localB->vertType, &localB->sf_SimpleMagicTire);

  /* Sum: '<S6>/Add' */
  localB->Fx = localB->sf_SimpleMagicTire.Fx + localB->sf_SimpleMagicTire.Fx;

  /* SignalConversion generated from: '<S71>/Vector Concatenate12' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate12'
   */
  localB->VectorConcatenate12[0] = localB->Fx;

  /* Selector: '<S98>/Selector1' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector1_e[0] = localB->VectorConcatenate_g[3];

  /* Math: '<S100>/Math Function' incorporates:
   *  Selector: '<S98>/Selector1'
   *
   * About '<S100>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction_i[0] = localB->Selector1_e[0] * localB->Selector1_e[0];

  /* Selector: '<S98>/Selector1' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector1_e[1] = localB->VectorConcatenate_g[4];

  /* Math: '<S100>/Math Function' incorporates:
   *  Selector: '<S98>/Selector1'
   *
   * About '<S100>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction_i[1] = localB->Selector1_e[1] * localB->Selector1_e[1];

  /* Selector: '<S98>/Selector1' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector1_e[2] = localB->VectorConcatenate_g[5];

  /* Math: '<S100>/Math Function' incorporates:
   *  Selector: '<S98>/Selector1'
   *
   * About '<S100>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction_i[2] = localB->Selector1_e[2] * localB->Selector1_e[2];

  /* Sum: '<S100>/Sum of Elements1' */
  localB->SumofElements1_h = (localB->MathFunction_i[0] + localB->
    MathFunction_i[1]) + localB->MathFunction_i[2];

  /* Sqrt: '<S100>/Sqrt' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    if (localDW->Sqrt_DWORK1_l != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      ssSetContTimeOutputInconsistentWithStateAtMajorStep(DrivetrainEv_M->rtS);
      localDW->Sqrt_DWORK1_l = 0;
    }

    /* Sqrt: '<S100>/Sqrt' */
    localB->Sqrt_f = sqrt(localB->SumofElements1_h);
  } else {
    if (localB->SumofElements1_h < 0.0) {
      /* Sqrt: '<S100>/Sqrt' */
      localB->Sqrt_f = -sqrt(fabs(localB->SumofElements1_h));
    } else {
      /* Sqrt: '<S100>/Sqrt' */
      localB->Sqrt_f = sqrt(localB->SumofElements1_h);
    }

    if (localB->SumofElements1_h < 0.0) {
      localDW->Sqrt_DWORK1_l = 1;
    }
  }

  /* End of Sqrt: '<S100>/Sqrt' */

  /* Gain: '<S98>/1//NR' */
  rtb_Fz_c = DrivetrainEv_P.uNR_Gain * localB->Sqrt_f;

  /* Gain: '<S6>/Rear Bias1' */
  localB->RearBias1 = DrivetrainEv_P.RearBias1_Gain * *rtu_BrakeReq;

  /* Product: '<S198>/product' */
  localB->product_l = localB->RearBias1 * localB->TorqueConversion1_e *
    localB->Diskbrakeactuatorbore_g * localB->Numberofbrakepads_d;

  /* Saturate: '<S198>/Disallow Negative Brake Torque' */
  if (localB->product_l > DrivetrainEv_P.DisallowNegativeBrakeTorque_U_n) {
    /* Saturate: '<S198>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_a =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_U_n;
  } else if (localB->product_l < DrivetrainEv_P.DisallowNegativeBrakeTorque_L_e)
  {
    /* Saturate: '<S198>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_a =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_L_e;
  } else {
    /* Saturate: '<S198>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_a = localB->product_l;
  }

  /* End of Saturate: '<S198>/Disallow Negative Brake Torque' */

  /* Gain: '<S198>/Torque Conversion' */
  localB->TorqueConversion_b = DrivetrainEv_P.Rm * DrivetrainEv_P.mu_kinetic *
    localB->DisallowNegativeBrakeTorque_a;

  /* Gain: '<S195>/Ratio of static to kinetic' */
  localB->Ratioofstatictokinetic_l = DrivetrainEv_P.mu_static /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion_b;

  /* Gain: '<S195>/Ratio of static to kinetic1' */
  localB->Ratioofstatictokinetic1_c = DrivetrainEv_P.mu_kinetic /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion_b;

  /* Outputs for Iterator SubSystem: '<S183>/Clutch' incorporates:
   *  ForEach: '<S194>/For Each'
   */
  for (ForEach_itr_l = 0; ForEach_itr_l < 1; ForEach_itr_l++) {
    /* ForEachSliceSelector generated from: '<S194>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_at_ = localB->Signconvention_g;

    /* ForEachSliceSelector generated from: '<S194>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_a = localB->Ratioofstatictokinetic_l;

    /* ForEachSliceSelector generated from: '<S194>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_a = localB->Ratioofstatictokinetic1_c;

    /* Chart: '<S194>/Clutch' */
    DrivetrainEv_Clutch_b(DrivetrainEv_M, rtb_ImpSel_InsertedFor_Tout_at_,
                          rtb_ImpSel_InsertedFor_Tfmaxs_a,
                          rtb_ImpSel_InsertedFor_Tfmaxk_a, DrivetrainEv_P.VXLOW *
                          DrivetrainEv_P.Re * 0.0, &localB->
                          CoreSubsys_k[ForEach_itr_l].sf_Clutch,
                          &localDW->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
                          &DrivetrainEv_P.CoreSubsys_k.sf_Clutch,
                          &localX->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
                          &localXdis->CoreSubsys_k[ForEach_itr_l].sf_Clutch);

    /* ForEachSliceAssignment generated from: '<S194>/Omega' */
    localB->ImpAsg_InsertedFor_Omega_at_inp = localB->CoreSubsys_k[ForEach_itr_l]
      .sf_Clutch.Omega;
  }

  /* End of Outputs for SubSystem: '<S183>/Clutch' */

  /* MATLAB Function: '<S179>/Simple Magic Tire' */
  DrivetrainEv_SimpleMagicTire(localB->Saturation_b, rtb_Fz_c,
    localB->ImpAsg_InsertedFor_Omega_at_inp, localB->VectorConcatenate7[0],
    localB->D_b, localB->C_f, localB->B_h, localB->E_o,
    localB->lam_muxConstant_d, localB->Constant2_b, localB->kappaFx_c,
    localB->FzFx_n, localB->FxMap_b, localB->TirePrsConstant_j, localB->FNOMIN_h,
    localB->NOMPRES_c, localB->QSY1_d, localB->QSY2_p, localB->QSY3_b,
    localB->QSY4_m, localB->QSY5_l, localB->QSY6_n, localB->QSY7_c,
    localB->QSY8_c, localB->gamma_b, localB->lam_My_p, localB->UNLOADED_RADIUS_h,
    localB->PRESMIN_e, localB->PRESMAX_b, localB->VxMy_j, localB->FzMy_j,
    localB->MyMap_b, 0.0, localB->FxType_g, localB->rollType_c,
    localB->vertType_f, &localB->sf_SimpleMagicTire_a);

  /* Sum: '<S6>/Add1' */
  localB->Fx_f = localB->sf_SimpleMagicTire_a.Fx +
    localB->sf_SimpleMagicTire_a.Fx;

  /* SignalConversion generated from: '<S71>/Vector Concatenate12' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate12'
   */
  localB->VectorConcatenate12[1] = localB->Fx_f;

  /* Sum: '<S78>/Add3' */
  localB->Add3 = localB->VectorConcatenate12[0] + localB->VectorConcatenate12[1];

  /* Sum: '<S78>/Add2' */
  localB->Add2 = (localB->Gain[0] + localB->Gain1[0]) + localB->Add3;

  /* Gain: '<S78>/h' */
  localB->h = DrivetrainEv_P.h * localB->Add2;

  /* Selector: '<S75>/Selector' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector_j[0] = localB->ImpAsg_InsertedFor_x_at_inport_[0];

  /* Sum: '<S74>/Add1' */
  localB->Add1[0] = localB->VectorConcatenate7[0] - localB->Selector_j[0];

  /* Product: '<S74>/Product' */
  localB->Product_a[0] = localB->Add1[0] * localB->Add1[0];

  /* Selector: '<S75>/Selector' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector_j[1] = localB->ImpAsg_InsertedFor_x_at_inport_[1];

  /* Sum: '<S74>/Add1' */
  localB->Add1[1] = localB->VectorConcatenate7[1] - localB->Selector_j[1];

  /* Product: '<S74>/Product' */
  localB->Product_a[1] = localB->Add1[1] * localB->Add1[1];

  /* Selector: '<S75>/Selector' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector_j[2] = localB->ImpAsg_InsertedFor_x_at_inport_[2];

  /* Sum: '<S74>/Add1' */
  localB->Add1[2] = localB->VectorConcatenate7[2] - localB->Selector_j[2];

  /* Product: '<S74>/Product' */
  localB->Product_a[2] = localB->Add1[2] * localB->Add1[2];

  /* Sum: '<S74>/Sum of Elements' */
  localB->SumofElements = (localB->Product_a[0] + localB->Product_a[1]) +
    localB->Product_a[2];

  /* Sqrt: '<S74>/Sqrt' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    if (localDW->Sqrt_DWORK1_f != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      ssSetContTimeOutputInconsistentWithStateAtMajorStep(DrivetrainEv_M->rtS);
      localDW->Sqrt_DWORK1_f = 0;
    }

    /* Sqrt: '<S74>/Sqrt' */
    localB->Sqrt_j = sqrt(localB->SumofElements);
  } else {
    if (localB->SumofElements < 0.0) {
      /* Sqrt: '<S74>/Sqrt' */
      localB->Sqrt_j = -sqrt(fabs(localB->SumofElements));
    } else {
      /* Sqrt: '<S74>/Sqrt' */
      localB->Sqrt_j = sqrt(localB->SumofElements);
    }

    if (localB->SumofElements < 0.0) {
      localDW->Sqrt_DWORK1_f = 1;
    }
  }

  /* End of Sqrt: '<S74>/Sqrt' */

  /* Product: '<S74>/Product2' */
  localB->Product2 = localB->Sqrt_j * localB->Sqrt_j;

  /* Trigonometry: '<S74>/Trigonometric Function' */
  localB->TrigonometricFunction = rt_atan2d_snf(localB->Add1[1], localB->Add1[0]);

  /* Lookup_n-D: '<S74>/Cs' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   *  Trigonometry: '<S74>/Trigonometric Function'
   */
  localB->VectorConcatenate_e[1] = look1_binlcpw(localB->TrigonometricFunction,
    DrivetrainEv_P.DragForce_beta_w, DrivetrainEv_P.DragForce_Cs, 1U);

  /* Lookup_n-D: '<S74>/Crm' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   *  Trigonometry: '<S74>/Trigonometric Function'
   */
  localB->VectorConcatenate_e[3] = look1_binlxpw(localB->TrigonometricFunction,
    DrivetrainEv_P.Crm_bp01Data, DrivetrainEv_P.Crm_tableData, 1U);

  /* Gain: '<S74>/4' */
  localB->u[0] = DrivetrainEv_P.u_Gain[0] * localB->Add1[0];

  /* Trigonometry: '<S74>/Tanh' */
  localB->Tanh[0] = tanh(localB->u[0]);

  /* Gain: '<S74>/4' */
  localB->u[1] = DrivetrainEv_P.u_Gain[1] * localB->Add1[1];

  /* Trigonometry: '<S74>/Tanh' */
  localB->Tanh[1] = tanh(localB->u[1]);

  /* Gain: '<S74>/4' */
  localB->u[2] = DrivetrainEv_P.u_Gain[2] * localB->Add1[2];

  /* Trigonometry: '<S74>/Tanh' */
  localB->Tanh[2] = tanh(localB->u[2]);

  /* Product: '<S74>/Product5' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   */
  localB->VectorConcatenate_e[4] = localB->Tanh[0] * localB->Constant2_g;

  /* Lookup_n-D: '<S74>/Cym' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   *  Trigonometry: '<S74>/Trigonometric Function'
   */
  localB->VectorConcatenate_e[5] = look1_binlxpw(localB->TrigonometricFunction,
    DrivetrainEv_P.DragForce_beta_w, DrivetrainEv_P.DragForce_Cym, 1U);

  /* Gain: '<S74>/.5.*A.*Pabs.//R.//T' */
  tmpForInput_idx_0 = 0.5 * DrivetrainEv_P.Af * DrivetrainEv_P.Pabs /
    DrivetrainEv_P.DragForce_R;
  for (i = 0; i <= 4; i += 2) {
    __m128d tmp;

    /* Product: '<S74>/Product1' */
    tmp = _mm_loadu_pd(&localB->VectorConcatenate_e[i]);

    /* Product: '<S74>/Product1' */
    _mm_storeu_pd(&localB->Product1[i], _mm_div_pd(_mm_mul_pd(_mm_set1_pd
      (localB->Product2), tmp), _mm_set1_pd(localB->AirTempConstant)));

    /* Gain: '<S74>/.5.*A.*Pabs.//R.//T' incorporates:
     *  Product: '<S74>/Product1'
     */
    tmp = _mm_loadu_pd(&localB->Product1[i]);

    /* Gain: '<S74>/.5.*A.*Pabs.//R.//T' incorporates:
     *  Product: '<S74>/Product1'
     */
    _mm_storeu_pd(&localB->uAPabsRT[i], _mm_mul_pd(_mm_set1_pd(tmpForInput_idx_0),
      tmp));
  }

  /* Sum: '<S76>/Add1' */
  localB->Add1_lg = localB->Fx + localB->Fx_f;

  /* Product: '<S74>/Product4' */
  localB->Product4[0] = localB->uAPabsRT[3] * localB->Constant3;

  /* Sum: '<S71>/Add2' */
  localB->Add2_f[0] = localB->Gain[0] + localB->Gain1[0];

  /* Sum: '<S74>/Add2' */
  localB->Add2_b[0] = localB->Tanh[0] - localB->Constant4[0];

  /* Product: '<S74>/Product3' */
  localB->Product3_f[0] = localB->Add2_b[0] * localB->uAPabsRT[0];

  /* Product: '<S74>/Product4' */
  localB->Product4[1] = localB->uAPabsRT[4] * localB->Constant3;

  /* Sum: '<S71>/Add2' */
  localB->Add2_f[1] = localB->Gain[1] + localB->Gain1[1];

  /* Sum: '<S74>/Add2' */
  localB->Add2_b[1] = localB->Tanh[1] - localB->Constant4[1];

  /* Product: '<S74>/Product3' */
  localB->Product3_f[1] = localB->Add2_b[1] * localB->uAPabsRT[1];

  /* Product: '<S74>/Product4' */
  localB->Product4[2] = localB->uAPabsRT[5] * localB->Constant3;

  /* Sum: '<S71>/Add2' */
  localB->Add2_f[2] = localB->Gain[2] + localB->Gain1[2];

  /* Sum: '<S74>/Add2' */
  localB->Add2_b[2] = localB->Tanh[2] - localB->Constant4[2];

  /* Product: '<S74>/Product3' */
  localB->Product3_f[2] = localB->Add2_b[2] * localB->uAPabsRT[2];

  /* Sum: '<S78>/Add1' */
  localB->Add1_l = (((localB->a - localB->b) + localB->h) + localB->Product4[1])
    + localB->MExtConstant[1];

  /* Sum: '<S80>/Sum1' */
  localB->Sum1 = localB->Add1_l - localB->Product3;

  /* Product: '<S80>/Product2' */
  localB->Product2_d = localB->Sum1 / localB->Constant1_i;

  /* Selector: '<S75>/Selector3' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector3[0] = localB->ImpAsg_InsertedFor_x_at_inport_[9];
  localB->Selector3[1] = localB->ImpAsg_InsertedFor_x_at_inport_[10];
  localB->Selector3[2] = localB->ImpAsg_InsertedFor_x_at_inport_[11];

  /* Sum: '<S76>/Add' */
  localB->Add = (((localB->Add1_lg + localB->Add2_f[0]) - localB->Product3_f[0])
                 + localB->Selector3[0]) + localB->FExtConstant[0];

  /* Sum: '<S77>/Add5' */
  localB->Add5 = ((localB->Product3_f[2] - localB->Add2_f[2]) +
                  localB->Selector3[2]) + localB->FExtConstant[2];

  /* Product: '<S72>/Product1' */
  localB->Product1_o[0] = localB->Add / localB->Constant;
  localB->Product1_o[1] = localB->Add5 / localB->Constant;

  /* Sum: '<S72>/Sum' */
  localB->Sum[0] = localB->Product[0] + localB->Product1_o[0];

  /* Sum: '<S72>/Sum1' */
  localB->Sum1_j[0] = localB->Sum[0] + localB->Product_p[0];

  /* Sum: '<S72>/Sum' */
  localB->Sum[1] = localB->Product[1] + localB->Product1_o[1];

  /* Sum: '<S72>/Sum1' */
  localB->Sum1_j[1] = localB->Sum[1] + localB->Product_p[1];

  /* Sum: '<S91>/Add' */
  localB->Add_p = localB->UnitConversion + localB->VectorConcatenate3[1];

  /* SignalConversion generated from: '<S119>/sincos' */
  localB->TmpSignalConversionAtsincosInpo[0] = localB->Constant_o;
  localB->TmpSignalConversionAtsincosInpo[1] = localB->Add_p;
  localB->TmpSignalConversionAtsincosInpo[2] = localB->Constant_o;

  /* Trigonometry: '<S119>/sincos' */
  localB->sincos_o1[0] = sin(localB->TmpSignalConversionAtsincosInpo[0]);
  localB->sincos_o2[0] = cos(localB->TmpSignalConversionAtsincosInpo[0]);
  localB->sincos_o1[1] = sin(localB->TmpSignalConversionAtsincosInpo[1]);
  localB->sincos_o2[1] = cos(localB->TmpSignalConversionAtsincosInpo[1]);
  localB->sincos_o1[2] = sin(localB->TmpSignalConversionAtsincosInpo[2]);
  localB->sincos_o2[2] = cos(localB->TmpSignalConversionAtsincosInpo[2]);

  /* Fcn: '<S119>/Fcn11' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[0] = localB->sincos_o2[0] * localB->sincos_o2[1];

  /* Fcn: '<S119>/Fcn21' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   *  Fcn: '<S119>/Fcn22'
   */
  tmpForInput_idx_0 = localB->sincos_o1[1] * localB->sincos_o1[2];
  localB->VectorConcatenate_j[1] = tmpForInput_idx_0 * localB->sincos_o2[0] -
    localB->sincos_o1[0] * localB->sincos_o2[2];

  /* Fcn: '<S119>/Fcn31' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   *  Fcn: '<S119>/Fcn32'
   */
  tmpForInput_idx_1 = localB->sincos_o1[1] * localB->sincos_o2[2];
  localB->VectorConcatenate_j[2] = tmpForInput_idx_1 * localB->sincos_o2[0] +
    localB->sincos_o1[0] * localB->sincos_o1[2];

  /* Fcn: '<S119>/Fcn12' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[3] = localB->sincos_o1[0] * localB->sincos_o2[1];

  /* Fcn: '<S119>/Fcn22' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[4] = tmpForInput_idx_0 * localB->sincos_o1[0] +
    localB->sincos_o2[0] * localB->sincos_o2[2];

  /* Fcn: '<S119>/Fcn32' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[5] = tmpForInput_idx_1 * localB->sincos_o1[0] -
    localB->sincos_o2[0] * localB->sincos_o1[2];

  /* Fcn: '<S119>/Fcn13' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[6] = -localB->sincos_o1[1];

  /* Fcn: '<S119>/Fcn23' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[7] = localB->sincos_o2[1] * localB->sincos_o1[2];

  /* Fcn: '<S119>/Fcn33' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[8] = localB->sincos_o2[1] * localB->sincos_o2[2];

  /* SignalConversion generated from: '<S71>/Vector Concatenate10' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate10'
   */
  localB->VectorConcatenate10[1] = localB->Product2_d;

  /* SignalConversion generated from: '<S71>/Vector Concatenate5' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate5'
   */
  localB->VectorConcatenate5[0] = localB->Add;

  /* SignalConversion generated from: '<S71>/Vector Concatenate5' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate5'
   */
  localB->VectorConcatenate5[2] = localB->Add5;

  /* SignalConversion generated from: '<S71>/Vector Concatenate6' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate6'
   */
  localB->VectorConcatenate6[0] = localB->Sum1_j[0];

  /* SignalConversion generated from: '<S71>/Vector Concatenate6' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate6'
   */
  localB->VectorConcatenate6[2] = localB->Sum1_j[1];

  /* SignalConversion generated from: '<S71>/Vector Concatenate8' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate8'
   */
  localB->VectorConcatenate8[1] = localB->Add1_l;

  /* Sum: '<S59>/Subtract' */
  tmpForInput_idx_0 = *rtu_MotTrq;

  /* Product: '<S121>/Product2' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[3] = localB->VectorConcatenate4[0] *
    localB->Product4[0];

  /* Product: '<S121>/Product9' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[0] = localB->VectorConcatenate7[0] *
    localB->Product3_f[0];

  /* Product: '<S121>/Product2' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[4] = localB->VectorConcatenate4[1] *
    localB->Product4[1];

  /* Product: '<S121>/Product9' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[1] = localB->VectorConcatenate7[1] *
    localB->Product3_f[1];

  /* Product: '<S121>/Product2' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[5] = localB->VectorConcatenate4[2] *
    localB->Product4[2];

  /* Product: '<S121>/Product9' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[2] = localB->VectorConcatenate7[2] *
    localB->Product3_f[2];

  /* Sum: '<S59>/Subtract' */
  localB->Subtract_c = (tmpForInput_idx_0 + localB->UnaryMinus_o) +
    localB->Gain2;

  /* Product: '<S59>/Divide' */
  localB->Divide = localB->Subtract_c / localB->Switch;

  /* Product: '<S154>/Product' */
  localB->Product_m = localB->sf_SimpleMagicTire.My / localB->Saturation;

  /* Sum: '<S154>/Add' */
  localB->Add_h = localB->sf_SimpleMagicTire.Fx + localB->Product_m;

  /* Product: '<S154>/Product3' */
  localB->Product3_c = localB->ImpAsg_InsertedFor_Omega_at_i_d *
    localB->Saturation;

  /* Fcn: '<S171>/Fcn' */
  localB->Fcn = 4.0 / (3.0 - rt_powd_snf(localB->Product3_c / 2.0, 2.0));

  /* RelationalOperator: '<S172>/Compare' */
  localB->Compare = (localB->Product3_c >= localB->Constant_a);

  /* RelationalOperator: '<S173>/Compare' */
  localB->Compare_m = (localB->Product3_c <= localB->Constant_ax);

  /* Logic: '<S171>/Logical Operator' */
  localB->LogicalOperator = (localB->Compare && localB->Compare_m);

  /* Abs: '<S171>/Abs' */
  localB->Abs = fabs(localB->Product3_c);

  /* Switch: '<S171>/Switch' */
  if (localB->LogicalOperator) {
    /* Switch: '<S171>/Switch' */
    localB->Switch_j = localB->Fcn;
  } else {
    /* Switch: '<S171>/Switch' */
    localB->Switch_j = localB->Abs;
  }

  /* End of Switch: '<S171>/Switch' */

  /* Product: '<S154>/Product2' */
  localB->Product2_n = localB->Switch_j / localB->Constant2_d;

  /* Sum: '<S170>/Sum' */
  localB->Sum_g = localB->Add_h - localB->Integrator;

  /* Product: '<S170>/Product' */
  localB->Product_l = localB->Product2_n * localB->Sum_g;

  /* Product: '<S196>/Product' */
  localB->Product_e = localB->sf_SimpleMagicTire_a.My / localB->Saturation_b;

  /* Sum: '<S196>/Add' */
  localB->Add_e = localB->sf_SimpleMagicTire_a.Fx + localB->Product_e;

  /* Product: '<S196>/Product3' */
  localB->Product3_j = localB->ImpAsg_InsertedFor_Omega_at_inp *
    localB->Saturation_b;

  /* Fcn: '<S213>/Fcn' */
  localB->Fcn_g = 4.0 / (3.0 - rt_powd_snf(localB->Product3_j / 2.0, 2.0));

  /* RelationalOperator: '<S214>/Compare' */
  localB->Compare_k = (localB->Product3_j >= localB->Constant_p);

  /* RelationalOperator: '<S215>/Compare' */
  localB->Compare_h = (localB->Product3_j <= localB->Constant_h);

  /* Logic: '<S213>/Logical Operator' */
  localB->LogicalOperator_a = (localB->Compare_k && localB->Compare_h);

  /* Abs: '<S213>/Abs' */
  localB->Abs_b = fabs(localB->Product3_j);

  /* Switch: '<S213>/Switch' */
  if (localB->LogicalOperator_a) {
    /* Switch: '<S213>/Switch' */
    localB->Switch_i = localB->Fcn_g;
  } else {
    /* Switch: '<S213>/Switch' */
    localB->Switch_i = localB->Abs_b;
  }

  /* End of Switch: '<S213>/Switch' */

  /* Product: '<S196>/Product2' */
  localB->Product2_c = localB->Switch_i / localB->Constant2_a;

  /* Sum: '<S212>/Sum' */
  localB->Sum_j = localB->Add_e - localB->Integrator_b;

  /* Product: '<S212>/Product' */
  localB->Product_o = localB->Product2_c * localB->Sum_j;

  /* Sum: '<S14>/Subtract' */
  localB->Subtract_b = localB->UnaryMinus1[0] -
    localB->ImpAsg_InsertedFor_Omega_at_i_d;

  /* Sum: '<S15>/Sum' */
  localB->Sum_d = localB->Subtract_b - localB->Switch_p;

  /* Product: '<S15>/Product' */
  localB->Product_pz = localB->omega_c * localB->Sum_d;

  /* Update for Integrator: '<S72>/U,w' */
  localDW->Uw_IWORK = 0;
  if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1, 0))
  {
    /* Update for Memory: '<S15>/Memory' incorporates:
     *  Constant: '<S15>/Reset'
     */
    localDW->Memory_PreviousInput = DrivetrainEv_P.Reset_Value;

    /* Update for Memory: '<S51>/Memory' incorporates:
     *  Constant: '<S51>/Reset'
     */
    localDW->Memory_PreviousInput_d = DrivetrainEv_P.Reset_Value_l;
  }

  /* Update for Integrator: '<S15>/Integrator' */
  localDW->Integrator_IWORK = 0;

  /* Update for Integrator: '<S51>/Integrator' */
  localDW->Integrator_IWORK_g = 0;

  /* Update for Integrator: '<S26>/Integrator' */
  localDW->Integrator_IWORK_i = 0;
}

/* Derivatives for referenced model: 'DrivetrainEv' */
void DrivetrainEv_Deriv(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, const
  real_T *rtu_MotTrq, const real_T *rtu_BrakeReq, const real_T *rtu_Grade, const
  real_T *rtu_WindVel, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW,
  X_DrivetrainEv_n_T *localX, XDot_DrivetrainEv_n_T *localXdot,
  XDis_DrivetrainEv_n_T *localXdis)
{
  /* local block i/o variables */
  real_T rtb_Fz;
  real_T rtb_Fz_c;
  real_T rtb_ImpSel_InsertedFor_Tout_at_;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_a;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_a;
  real_T rtb_ImpSel_InsertedFor_Tout_a_f;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_p;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_j;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_l;
  int32_T ForEach_itr_h;
  real_T rtb_VectorConcatenate_k[9];
  real_T tmpForInput_idx_0;
  real_T tmpForInput_idx_1;
  int32_T i;

  /* UnaryMinus: '<S75>/Unary Minus1' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate'
   */
  localB->VectorConcatenate_l[0] = -*rtu_WindVel;
  localB->VectorConcatenate_l[1] = -0.0;
  localB->VectorConcatenate_l[2] = -0.0;

  /* UnitConversion: '<S71>/Unit Conversion' */
  /* Unit Conversion - from: deg to: rad
     Expression: output = (0.0174533*input) + (0) */
  localB->UnitConversion = 0.017453292519943295 * *rtu_Grade;

  /* Sum: '<S75>/Add' incorporates:
   *  Concatenate: '<S75>/Vector Concatenate1'
   */
  localB->VectorConcatenate1[3] = localB->UnaryMinus - localB->UnitConversion;

  /* Outputs for Iterator SubSystem: '<S75>/rotation' incorporates:
   *  ForEach: '<S128>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 4; ForEach_itr++) {
    real_T rtb_Product_a_idx_0;
    real_T rtb_Product_a_idx_1;
    real_T rtb_Product_a_idx_2;
    real_T rtb_VectorConcatenate_h_tmp;
    real_T rtb_VectorConcatenate_h_tmp_0;
    real_T tmpForInput;
    if (rtmIsMajorTimeStep(DrivetrainEv_M) && rtmIsSampleHit(DrivetrainEv_M, 1,
         0)) {
      /* Constant: '<S128>/psi' */
      localB->CoreSubsys_c[ForEach_itr].psi =
        DrivetrainEv_P.CoreSubsys_c.psi_Value;

      /* Constant: '<S128>/phi' */
      localB->CoreSubsys_c[ForEach_itr].phi =
        DrivetrainEv_P.CoreSubsys_c.phi_Value;
    }

    /* SignalConversion generated from: '<S129>/sincos' incorporates:
     *  Concatenate: '<S75>/Vector Concatenate1'
     *  ForEachSliceSelector generated from: '<S128>/theta'
     */
    tmpForInput_idx_1 = localB->VectorConcatenate1[ForEach_itr];

    /* Trigonometry: '<S129>/sincos' incorporates:
     *  SignalConversion generated from: '<S129>/sincos'
     */
    rtb_Product_a_idx_0 = cos(localB->CoreSubsys_c[ForEach_itr].psi);
    tmpForInput_idx_0 = sin(localB->CoreSubsys_c[ForEach_itr].psi);
    rtb_Product_a_idx_1 = cos(tmpForInput_idx_1);
    tmpForInput_idx_1 = sin(tmpForInput_idx_1);
    rtb_Product_a_idx_2 = cos(localB->CoreSubsys_c[ForEach_itr].phi);
    tmpForInput = sin(localB->CoreSubsys_c[ForEach_itr].phi);

    /* Fcn: '<S129>/Fcn11' */
    rtb_VectorConcatenate_k[0] = rtb_Product_a_idx_0 * rtb_Product_a_idx_1;

    /* Fcn: '<S129>/Fcn21' incorporates:
     *  Fcn: '<S129>/Fcn22'
     */
    rtb_VectorConcatenate_h_tmp = tmpForInput_idx_1 * tmpForInput;
    rtb_VectorConcatenate_k[1] = rtb_VectorConcatenate_h_tmp *
      rtb_Product_a_idx_0 - tmpForInput_idx_0 * rtb_Product_a_idx_2;

    /* Fcn: '<S129>/Fcn31' incorporates:
     *  Fcn: '<S129>/Fcn32'
     */
    rtb_VectorConcatenate_h_tmp_0 = tmpForInput_idx_1 * rtb_Product_a_idx_2;
    rtb_VectorConcatenate_k[2] = rtb_VectorConcatenate_h_tmp_0 *
      rtb_Product_a_idx_0 + tmpForInput_idx_0 * tmpForInput;

    /* Fcn: '<S129>/Fcn12' */
    rtb_VectorConcatenate_k[3] = tmpForInput_idx_0 * rtb_Product_a_idx_1;

    /* Fcn: '<S129>/Fcn22' */
    rtb_VectorConcatenate_k[4] = rtb_VectorConcatenate_h_tmp * tmpForInput_idx_0
      + rtb_Product_a_idx_0 * rtb_Product_a_idx_2;

    /* Fcn: '<S129>/Fcn32' */
    rtb_VectorConcatenate_k[5] = rtb_VectorConcatenate_h_tmp_0 *
      tmpForInput_idx_0 - rtb_Product_a_idx_0 * tmpForInput;

    /* Fcn: '<S129>/Fcn13' */
    rtb_VectorConcatenate_k[6] = -tmpForInput_idx_1;

    /* Fcn: '<S129>/Fcn23' */
    rtb_VectorConcatenate_k[7] = rtb_Product_a_idx_1 * tmpForInput;

    /* Fcn: '<S129>/Fcn33' */
    rtb_VectorConcatenate_k[8] = rtb_Product_a_idx_1 * rtb_Product_a_idx_2;
    for (i = 0; i < 3; i++) {
      /* ForEachSliceAssignment generated from: '<S128>/x' incorporates:
       *  Concatenate: '<S131>/Vector Concatenate'
       *  Concatenate: '<S75>/Vector Concatenate'
       *  ForEachSliceSelector generated from: '<S128>/X'
       *  Math: '<S128>/Transpose1'
       *  Product: '<S130>/Product'
       *  Reshape: '<S130>/Reshape2'
       */
      localB->ImpAsg_InsertedFor_x_at_inport_[i + 3 * ForEach_itr] =
        (rtb_VectorConcatenate_k[3 * i + 1] * localB->VectorConcatenate_l[3 *
         ForEach_itr + 1] + rtb_VectorConcatenate_k[3 * i] *
         localB->VectorConcatenate_l[3 * ForEach_itr]) +
        rtb_VectorConcatenate_k[3 * i + 2] * localB->VectorConcatenate_l[3 *
        ForEach_itr + 2];
    }
  }

  /* End of Outputs for SubSystem: '<S75>/rotation' */

  /* Selector: '<S75>/Selector1' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector1[0] = localB->ImpAsg_InsertedFor_x_at_inport_[3];

  /* Gain: '<S75>/Gain' */
  localB->Gain[0] = DrivetrainEv_P.Gain_Gain[0] * localB->Selector1[0];

  /* Selector: '<S75>/Selector2' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector2[0] = localB->ImpAsg_InsertedFor_x_at_inport_[6];

  /* Gain: '<S75>/Gain1' */
  localB->Gain1[0] = DrivetrainEv_P.Gain1_Gain[0] * localB->Selector2[0];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[0] = localB->Gain[0];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[3] = localB->Gain1[0];

  /* Selector: '<S75>/Selector1' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector1[1] = localB->ImpAsg_InsertedFor_x_at_inport_[4];

  /* Gain: '<S75>/Gain' */
  localB->Gain[1] = DrivetrainEv_P.Gain_Gain[1] * localB->Selector1[1];

  /* Selector: '<S75>/Selector2' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector2[1] = localB->ImpAsg_InsertedFor_x_at_inport_[7];

  /* Gain: '<S75>/Gain1' */
  localB->Gain1[1] = DrivetrainEv_P.Gain1_Gain[1] * localB->Selector2[1];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[1] = localB->Gain[1];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[4] = localB->Gain1[1];

  /* Selector: '<S75>/Selector1' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector1[2] = localB->ImpAsg_InsertedFor_x_at_inport_[5];

  /* Gain: '<S75>/Gain' */
  localB->Gain[2] = DrivetrainEv_P.Gain_Gain[2] * localB->Selector1[2];

  /* Selector: '<S75>/Selector2' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector2[2] = localB->ImpAsg_InsertedFor_x_at_inport_[8];

  /* Gain: '<S75>/Gain1' */
  localB->Gain1[2] = DrivetrainEv_P.Gain1_Gain[2] * localB->Selector2[2];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[2] = localB->Gain[2];

  /* SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->VectorConcatenate_g[5] = localB->Gain1[2];

  /* Gain: '<S78>/a' */
  localB->a = DrivetrainEv_P.a_CG * localB->Gain[2];

  /* Gain: '<S78>/b' */
  localB->b = DrivetrainEv_P.b_CG * localB->Gain1[2];

  /* Selector: '<S98>/Selector' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector[0] = localB->VectorConcatenate_g[0];

  /* Math: '<S99>/Math Function' incorporates:
   *  Selector: '<S98>/Selector'
   *
   * About '<S99>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction[0] = localB->Selector[0] * localB->Selector[0];

  /* Selector: '<S98>/Selector' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector[1] = localB->VectorConcatenate_g[1];

  /* Math: '<S99>/Math Function' incorporates:
   *  Selector: '<S98>/Selector'
   *
   * About '<S99>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction[1] = localB->Selector[1] * localB->Selector[1];

  /* Selector: '<S98>/Selector' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector[2] = localB->VectorConcatenate_g[2];

  /* Math: '<S99>/Math Function' incorporates:
   *  Selector: '<S98>/Selector'
   *
   * About '<S99>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction[2] = localB->Selector[2] * localB->Selector[2];

  /* Sum: '<S99>/Sum of Elements1' */
  localB->SumofElements1 = (localB->MathFunction[0] + localB->MathFunction[1]) +
    localB->MathFunction[2];

  /* Sqrt: '<S99>/Sqrt' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    if (localDW->Sqrt_DWORK1 != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      ssSetContTimeOutputInconsistentWithStateAtMajorStep(DrivetrainEv_M->rtS);
      localDW->Sqrt_DWORK1 = 0;
    }

    /* Sqrt: '<S99>/Sqrt' */
    localB->Sqrt = sqrt(localB->SumofElements1);
  } else {
    if (localB->SumofElements1 < 0.0) {
      /* Sqrt: '<S99>/Sqrt' */
      localB->Sqrt = -sqrt(fabs(localB->SumofElements1));
    } else {
      /* Sqrt: '<S99>/Sqrt' */
      localB->Sqrt = sqrt(localB->SumofElements1);
    }

    if (localB->SumofElements1 < 0.0) {
      localDW->Sqrt_DWORK1 = 1;
    }
  }

  /* End of Sqrt: '<S99>/Sqrt' */

  /* Gain: '<S98>/1//NF' */
  rtb_Fz = DrivetrainEv_P.uNF_Gain * localB->Sqrt;

  /* Gain: '<S6>/Front Bias' */
  localB->FrontBias = DrivetrainEv_P.FrontBias_Gain * *rtu_BrakeReq;

  /* Product: '<S156>/product' */
  localB->product = localB->FrontBias * localB->TorqueConversion1 *
    localB->Diskbrakeactuatorbore * localB->Numberofbrakepads;

  /* Saturate: '<S156>/Disallow Negative Brake Torque' */
  if (localB->product > DrivetrainEv_P.DisallowNegativeBrakeTorque_Upp) {
    /* Saturate: '<S156>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_Upp;
  } else if (localB->product < DrivetrainEv_P.DisallowNegativeBrakeTorque_Low) {
    /* Saturate: '<S156>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_Low;
  } else {
    /* Saturate: '<S156>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque = localB->product;
  }

  /* End of Saturate: '<S156>/Disallow Negative Brake Torque' */

  /* Gain: '<S156>/Torque Conversion' */
  localB->TorqueConversion = DrivetrainEv_P.Rm * DrivetrainEv_P.mu_kinetic *
    localB->DisallowNegativeBrakeTorque;

  /* Gain: '<S153>/Ratio of static to kinetic' */
  localB->Ratioofstatictokinetic = DrivetrainEv_P.mu_static /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion;

  /* Gain: '<S153>/Ratio of static to kinetic1' */
  localB->Ratioofstatictokinetic1 = DrivetrainEv_P.mu_kinetic /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion;

  /* Outputs for Iterator SubSystem: '<S141>/Clutch' incorporates:
   *  ForEach: '<S152>/For Each'
   */
  for (ForEach_itr_h = 0; ForEach_itr_h < 1; ForEach_itr_h++) {
    /* ForEachSliceSelector generated from: '<S152>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_a_f = localB->Signconvention;

    /* ForEachSliceSelector generated from: '<S152>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_p = localB->Ratioofstatictokinetic;

    /* ForEachSliceSelector generated from: '<S152>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_j = localB->Ratioofstatictokinetic1;

    /* Chart: '<S152>/Clutch' */
    DrivetrainEv_Clutch(DrivetrainEv_M, rtb_ImpSel_InsertedFor_Tout_a_f,
                        rtb_ImpSel_InsertedFor_Tfmaxs_p,
                        rtb_ImpSel_InsertedFor_Tfmaxk_j, DrivetrainEv_P.VXLOW *
                        DrivetrainEv_P.Re * 0.0, &localB->
                        CoreSubsys[ForEach_itr_h].sf_Clutch,
                        &localDW->CoreSubsys[ForEach_itr_h].sf_Clutch,
                        &DrivetrainEv_P.CoreSubsys.sf_Clutch,
                        &localX->CoreSubsys[ForEach_itr_h].sf_Clutch,
                        &localXdis->CoreSubsys[ForEach_itr_h].sf_Clutch);

    /* ForEachSliceAssignment generated from: '<S152>/Omega' */
    localB->ImpAsg_InsertedFor_Omega_at_i_d = localB->CoreSubsys[ForEach_itr_h].
      sf_Clutch.Omega;
  }

  /* End of Outputs for SubSystem: '<S141>/Clutch' */

  /* MATLAB Function: '<S137>/Simple Magic Tire' */
  DrivetrainEv_SimpleMagicTire(localB->Saturation, rtb_Fz,
    localB->ImpAsg_InsertedFor_Omega_at_i_d, localB->VectorConcatenate7[0],
    localB->D, localB->C, localB->B, localB->E, localB->lam_muxConstant,
    localB->Constant2_p, localB->kappaFx, localB->FzFx, localB->FxMap,
    localB->TirePrsConstant, localB->FNOMIN, localB->NOMPRES, localB->QSY1,
    localB->QSY2, localB->QSY3, localB->QSY4, localB->QSY5, localB->QSY6,
    localB->QSY7, localB->QSY8, localB->gamma, localB->lam_My,
    localB->UNLOADED_RADIUS, localB->PRESMIN, localB->PRESMAX, localB->VxMy,
    localB->FzMy, localB->MyMap, 0.0, localB->FxType, localB->rollType,
    localB->vertType, &localB->sf_SimpleMagicTire);

  /* Sum: '<S6>/Add' */
  localB->Fx = localB->sf_SimpleMagicTire.Fx + localB->sf_SimpleMagicTire.Fx;

  /* SignalConversion generated from: '<S71>/Vector Concatenate12' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate12'
   */
  localB->VectorConcatenate12[0] = localB->Fx;

  /* Selector: '<S98>/Selector1' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector1_e[0] = localB->VectorConcatenate_g[3];

  /* Math: '<S100>/Math Function' incorporates:
   *  Selector: '<S98>/Selector1'
   *
   * About '<S100>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction_i[0] = localB->Selector1_e[0] * localB->Selector1_e[0];

  /* Selector: '<S98>/Selector1' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector1_e[1] = localB->VectorConcatenate_g[4];

  /* Math: '<S100>/Math Function' incorporates:
   *  Selector: '<S98>/Selector1'
   *
   * About '<S100>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction_i[1] = localB->Selector1_e[1] * localB->Selector1_e[1];

  /* Selector: '<S98>/Selector1' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate'
   */
  localB->Selector1_e[2] = localB->VectorConcatenate_g[5];

  /* Math: '<S100>/Math Function' incorporates:
   *  Selector: '<S98>/Selector1'
   *
   * About '<S100>/Math Function':
   *  Operator: magnitude^2
   */
  localB->MathFunction_i[2] = localB->Selector1_e[2] * localB->Selector1_e[2];

  /* Sum: '<S100>/Sum of Elements1' */
  localB->SumofElements1_h = (localB->MathFunction_i[0] + localB->
    MathFunction_i[1]) + localB->MathFunction_i[2];

  /* Sqrt: '<S100>/Sqrt' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    if (localDW->Sqrt_DWORK1_l != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      ssSetContTimeOutputInconsistentWithStateAtMajorStep(DrivetrainEv_M->rtS);
      localDW->Sqrt_DWORK1_l = 0;
    }

    /* Sqrt: '<S100>/Sqrt' */
    localB->Sqrt_f = sqrt(localB->SumofElements1_h);
  } else {
    if (localB->SumofElements1_h < 0.0) {
      /* Sqrt: '<S100>/Sqrt' */
      localB->Sqrt_f = -sqrt(fabs(localB->SumofElements1_h));
    } else {
      /* Sqrt: '<S100>/Sqrt' */
      localB->Sqrt_f = sqrt(localB->SumofElements1_h);
    }

    if (localB->SumofElements1_h < 0.0) {
      localDW->Sqrt_DWORK1_l = 1;
    }
  }

  /* End of Sqrt: '<S100>/Sqrt' */

  /* Gain: '<S98>/1//NR' */
  rtb_Fz_c = DrivetrainEv_P.uNR_Gain * localB->Sqrt_f;

  /* Gain: '<S6>/Rear Bias1' */
  localB->RearBias1 = DrivetrainEv_P.RearBias1_Gain * *rtu_BrakeReq;

  /* Product: '<S198>/product' */
  localB->product_l = localB->RearBias1 * localB->TorqueConversion1_e *
    localB->Diskbrakeactuatorbore_g * localB->Numberofbrakepads_d;

  /* Saturate: '<S198>/Disallow Negative Brake Torque' */
  if (localB->product_l > DrivetrainEv_P.DisallowNegativeBrakeTorque_U_n) {
    /* Saturate: '<S198>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_a =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_U_n;
  } else if (localB->product_l < DrivetrainEv_P.DisallowNegativeBrakeTorque_L_e)
  {
    /* Saturate: '<S198>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_a =
      DrivetrainEv_P.DisallowNegativeBrakeTorque_L_e;
  } else {
    /* Saturate: '<S198>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_a = localB->product_l;
  }

  /* End of Saturate: '<S198>/Disallow Negative Brake Torque' */

  /* Gain: '<S198>/Torque Conversion' */
  localB->TorqueConversion_b = DrivetrainEv_P.Rm * DrivetrainEv_P.mu_kinetic *
    localB->DisallowNegativeBrakeTorque_a;

  /* Gain: '<S195>/Ratio of static to kinetic' */
  localB->Ratioofstatictokinetic_l = DrivetrainEv_P.mu_static /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion_b;

  /* Gain: '<S195>/Ratio of static to kinetic1' */
  localB->Ratioofstatictokinetic1_c = DrivetrainEv_P.mu_kinetic /
    DrivetrainEv_P.mu_kinetic * localB->TorqueConversion_b;

  /* Outputs for Iterator SubSystem: '<S183>/Clutch' incorporates:
   *  ForEach: '<S194>/For Each'
   */
  for (ForEach_itr_l = 0; ForEach_itr_l < 1; ForEach_itr_l++) {
    /* ForEachSliceSelector generated from: '<S194>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_at_ = localB->Signconvention_g;

    /* ForEachSliceSelector generated from: '<S194>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_a = localB->Ratioofstatictokinetic_l;

    /* ForEachSliceSelector generated from: '<S194>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_a = localB->Ratioofstatictokinetic1_c;

    /* Chart: '<S194>/Clutch' */
    DrivetrainEv_Clutch_b(DrivetrainEv_M, rtb_ImpSel_InsertedFor_Tout_at_,
                          rtb_ImpSel_InsertedFor_Tfmaxs_a,
                          rtb_ImpSel_InsertedFor_Tfmaxk_a, DrivetrainEv_P.VXLOW *
                          DrivetrainEv_P.Re * 0.0, &localB->
                          CoreSubsys_k[ForEach_itr_l].sf_Clutch,
                          &localDW->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
                          &DrivetrainEv_P.CoreSubsys_k.sf_Clutch,
                          &localX->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
                          &localXdis->CoreSubsys_k[ForEach_itr_l].sf_Clutch);

    /* ForEachSliceAssignment generated from: '<S194>/Omega' */
    localB->ImpAsg_InsertedFor_Omega_at_inp = localB->CoreSubsys_k[ForEach_itr_l]
      .sf_Clutch.Omega;
  }

  /* End of Outputs for SubSystem: '<S183>/Clutch' */

  /* MATLAB Function: '<S179>/Simple Magic Tire' */
  DrivetrainEv_SimpleMagicTire(localB->Saturation_b, rtb_Fz_c,
    localB->ImpAsg_InsertedFor_Omega_at_inp, localB->VectorConcatenate7[0],
    localB->D_b, localB->C_f, localB->B_h, localB->E_o,
    localB->lam_muxConstant_d, localB->Constant2_b, localB->kappaFx_c,
    localB->FzFx_n, localB->FxMap_b, localB->TirePrsConstant_j, localB->FNOMIN_h,
    localB->NOMPRES_c, localB->QSY1_d, localB->QSY2_p, localB->QSY3_b,
    localB->QSY4_m, localB->QSY5_l, localB->QSY6_n, localB->QSY7_c,
    localB->QSY8_c, localB->gamma_b, localB->lam_My_p, localB->UNLOADED_RADIUS_h,
    localB->PRESMIN_e, localB->PRESMAX_b, localB->VxMy_j, localB->FzMy_j,
    localB->MyMap_b, 0.0, localB->FxType_g, localB->rollType_c,
    localB->vertType_f, &localB->sf_SimpleMagicTire_a);

  /* Sum: '<S6>/Add1' */
  localB->Fx_f = localB->sf_SimpleMagicTire_a.Fx +
    localB->sf_SimpleMagicTire_a.Fx;

  /* SignalConversion generated from: '<S71>/Vector Concatenate12' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate12'
   */
  localB->VectorConcatenate12[1] = localB->Fx_f;

  /* Sum: '<S78>/Add3' */
  localB->Add3 = localB->VectorConcatenate12[0] + localB->VectorConcatenate12[1];

  /* Sum: '<S78>/Add2' */
  localB->Add2 = (localB->Gain[0] + localB->Gain1[0]) + localB->Add3;

  /* Gain: '<S78>/h' */
  localB->h = DrivetrainEv_P.h * localB->Add2;

  /* Selector: '<S75>/Selector' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector_j[0] = localB->ImpAsg_InsertedFor_x_at_inport_[0];

  /* Sum: '<S74>/Add1' */
  localB->Add1[0] = localB->VectorConcatenate7[0] - localB->Selector_j[0];

  /* Product: '<S74>/Product' */
  localB->Product_a[0] = localB->Add1[0] * localB->Add1[0];

  /* Selector: '<S75>/Selector' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector_j[1] = localB->ImpAsg_InsertedFor_x_at_inport_[1];

  /* Sum: '<S74>/Add1' */
  localB->Add1[1] = localB->VectorConcatenate7[1] - localB->Selector_j[1];

  /* Product: '<S74>/Product' */
  localB->Product_a[1] = localB->Add1[1] * localB->Add1[1];

  /* Selector: '<S75>/Selector' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector_j[2] = localB->ImpAsg_InsertedFor_x_at_inport_[2];

  /* Sum: '<S74>/Add1' */
  localB->Add1[2] = localB->VectorConcatenate7[2] - localB->Selector_j[2];

  /* Product: '<S74>/Product' */
  localB->Product_a[2] = localB->Add1[2] * localB->Add1[2];

  /* Sum: '<S74>/Sum of Elements' */
  localB->SumofElements = (localB->Product_a[0] + localB->Product_a[1]) +
    localB->Product_a[2];

  /* Sqrt: '<S74>/Sqrt' */
  if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    if (localDW->Sqrt_DWORK1_f != 0) {
      ssSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->rtS);
      ssSetContTimeOutputInconsistentWithStateAtMajorStep(DrivetrainEv_M->rtS);
      localDW->Sqrt_DWORK1_f = 0;
    }

    /* Sqrt: '<S74>/Sqrt' */
    localB->Sqrt_j = sqrt(localB->SumofElements);
  } else {
    if (localB->SumofElements < 0.0) {
      /* Sqrt: '<S74>/Sqrt' */
      localB->Sqrt_j = -sqrt(fabs(localB->SumofElements));
    } else {
      /* Sqrt: '<S74>/Sqrt' */
      localB->Sqrt_j = sqrt(localB->SumofElements);
    }

    if (localB->SumofElements < 0.0) {
      localDW->Sqrt_DWORK1_f = 1;
    }
  }

  /* End of Sqrt: '<S74>/Sqrt' */

  /* Product: '<S74>/Product2' */
  localB->Product2 = localB->Sqrt_j * localB->Sqrt_j;

  /* Trigonometry: '<S74>/Trigonometric Function' */
  localB->TrigonometricFunction = rt_atan2d_snf(localB->Add1[1], localB->Add1[0]);

  /* Lookup_n-D: '<S74>/Cs' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   *  Trigonometry: '<S74>/Trigonometric Function'
   */
  localB->VectorConcatenate_e[1] = look1_binlcpw(localB->TrigonometricFunction,
    DrivetrainEv_P.DragForce_beta_w, DrivetrainEv_P.DragForce_Cs, 1U);

  /* Lookup_n-D: '<S74>/Crm' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   *  Trigonometry: '<S74>/Trigonometric Function'
   */
  localB->VectorConcatenate_e[3] = look1_binlxpw(localB->TrigonometricFunction,
    DrivetrainEv_P.Crm_bp01Data, DrivetrainEv_P.Crm_tableData, 1U);

  /* Gain: '<S74>/4' */
  localB->u[0] = DrivetrainEv_P.u_Gain[0] * localB->Add1[0];

  /* Trigonometry: '<S74>/Tanh' */
  localB->Tanh[0] = tanh(localB->u[0]);

  /* Gain: '<S74>/4' */
  localB->u[1] = DrivetrainEv_P.u_Gain[1] * localB->Add1[1];

  /* Trigonometry: '<S74>/Tanh' */
  localB->Tanh[1] = tanh(localB->u[1]);

  /* Gain: '<S74>/4' */
  localB->u[2] = DrivetrainEv_P.u_Gain[2] * localB->Add1[2];

  /* Trigonometry: '<S74>/Tanh' */
  localB->Tanh[2] = tanh(localB->u[2]);

  /* Product: '<S74>/Product5' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   */
  localB->VectorConcatenate_e[4] = localB->Tanh[0] * localB->Constant2_g;

  /* Lookup_n-D: '<S74>/Cym' incorporates:
   *  Concatenate: '<S74>/Vector Concatenate'
   *  Trigonometry: '<S74>/Trigonometric Function'
   */
  localB->VectorConcatenate_e[5] = look1_binlxpw(localB->TrigonometricFunction,
    DrivetrainEv_P.DragForce_beta_w, DrivetrainEv_P.DragForce_Cym, 1U);

  /* Gain: '<S74>/.5.*A.*Pabs.//R.//T' */
  tmpForInput_idx_0 = 0.5 * DrivetrainEv_P.Af * DrivetrainEv_P.Pabs /
    DrivetrainEv_P.DragForce_R;
  for (i = 0; i <= 4; i += 2) {
    __m128d tmp;

    /* Product: '<S74>/Product1' */
    tmp = _mm_loadu_pd(&localB->VectorConcatenate_e[i]);

    /* Product: '<S74>/Product1' */
    _mm_storeu_pd(&localB->Product1[i], _mm_div_pd(_mm_mul_pd(_mm_set1_pd
      (localB->Product2), tmp), _mm_set1_pd(localB->AirTempConstant)));

    /* Gain: '<S74>/.5.*A.*Pabs.//R.//T' incorporates:
     *  Product: '<S74>/Product1'
     */
    tmp = _mm_loadu_pd(&localB->Product1[i]);

    /* Gain: '<S74>/.5.*A.*Pabs.//R.//T' incorporates:
     *  Product: '<S74>/Product1'
     */
    _mm_storeu_pd(&localB->uAPabsRT[i], _mm_mul_pd(_mm_set1_pd(tmpForInput_idx_0),
      tmp));
  }

  /* Sum: '<S76>/Add1' */
  localB->Add1_lg = localB->Fx + localB->Fx_f;

  /* Product: '<S74>/Product4' */
  localB->Product4[0] = localB->uAPabsRT[3] * localB->Constant3;

  /* Sum: '<S71>/Add2' */
  localB->Add2_f[0] = localB->Gain[0] + localB->Gain1[0];

  /* Sum: '<S74>/Add2' */
  localB->Add2_b[0] = localB->Tanh[0] - localB->Constant4[0];

  /* Product: '<S74>/Product3' */
  localB->Product3_f[0] = localB->Add2_b[0] * localB->uAPabsRT[0];

  /* Product: '<S74>/Product4' */
  localB->Product4[1] = localB->uAPabsRT[4] * localB->Constant3;

  /* Sum: '<S71>/Add2' */
  localB->Add2_f[1] = localB->Gain[1] + localB->Gain1[1];

  /* Sum: '<S74>/Add2' */
  localB->Add2_b[1] = localB->Tanh[1] - localB->Constant4[1];

  /* Product: '<S74>/Product3' */
  localB->Product3_f[1] = localB->Add2_b[1] * localB->uAPabsRT[1];

  /* Product: '<S74>/Product4' */
  localB->Product4[2] = localB->uAPabsRT[5] * localB->Constant3;

  /* Sum: '<S71>/Add2' */
  localB->Add2_f[2] = localB->Gain[2] + localB->Gain1[2];

  /* Sum: '<S74>/Add2' */
  localB->Add2_b[2] = localB->Tanh[2] - localB->Constant4[2];

  /* Product: '<S74>/Product3' */
  localB->Product3_f[2] = localB->Add2_b[2] * localB->uAPabsRT[2];

  /* Sum: '<S78>/Add1' */
  localB->Add1_l = (((localB->a - localB->b) + localB->h) + localB->Product4[1])
    + localB->MExtConstant[1];

  /* Sum: '<S80>/Sum1' */
  localB->Sum1 = localB->Add1_l - localB->Product3;

  /* Product: '<S80>/Product2' */
  localB->Product2_d = localB->Sum1 / localB->Constant1_i;

  /* Selector: '<S75>/Selector3' incorporates:
   *  ForEachSliceAssignment generated from: '<S128>/x'
   */
  localB->Selector3[0] = localB->ImpAsg_InsertedFor_x_at_inport_[9];
  localB->Selector3[1] = localB->ImpAsg_InsertedFor_x_at_inport_[10];
  localB->Selector3[2] = localB->ImpAsg_InsertedFor_x_at_inport_[11];

  /* Sum: '<S76>/Add' */
  localB->Add = (((localB->Add1_lg + localB->Add2_f[0]) - localB->Product3_f[0])
                 + localB->Selector3[0]) + localB->FExtConstant[0];

  /* Sum: '<S77>/Add5' */
  localB->Add5 = ((localB->Product3_f[2] - localB->Add2_f[2]) +
                  localB->Selector3[2]) + localB->FExtConstant[2];

  /* Product: '<S72>/Product1' */
  localB->Product1_o[0] = localB->Add / localB->Constant;
  localB->Product1_o[1] = localB->Add5 / localB->Constant;

  /* Sum: '<S72>/Sum' */
  localB->Sum[0] = localB->Product[0] + localB->Product1_o[0];

  /* Sum: '<S72>/Sum1' */
  localB->Sum1_j[0] = localB->Sum[0] + localB->Product_p[0];

  /* Sum: '<S72>/Sum' */
  localB->Sum[1] = localB->Product[1] + localB->Product1_o[1];

  /* Sum: '<S72>/Sum1' */
  localB->Sum1_j[1] = localB->Sum[1] + localB->Product_p[1];

  /* Sum: '<S91>/Add' */
  localB->Add_p = localB->UnitConversion + localB->VectorConcatenate3[1];

  /* SignalConversion generated from: '<S119>/sincos' */
  localB->TmpSignalConversionAtsincosInpo[0] = localB->Constant_o;
  localB->TmpSignalConversionAtsincosInpo[1] = localB->Add_p;
  localB->TmpSignalConversionAtsincosInpo[2] = localB->Constant_o;

  /* Trigonometry: '<S119>/sincos' */
  localB->sincos_o1[0] = sin(localB->TmpSignalConversionAtsincosInpo[0]);
  localB->sincos_o2[0] = cos(localB->TmpSignalConversionAtsincosInpo[0]);
  localB->sincos_o1[1] = sin(localB->TmpSignalConversionAtsincosInpo[1]);
  localB->sincos_o2[1] = cos(localB->TmpSignalConversionAtsincosInpo[1]);
  localB->sincos_o1[2] = sin(localB->TmpSignalConversionAtsincosInpo[2]);
  localB->sincos_o2[2] = cos(localB->TmpSignalConversionAtsincosInpo[2]);

  /* Fcn: '<S119>/Fcn11' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[0] = localB->sincos_o2[0] * localB->sincos_o2[1];

  /* Fcn: '<S119>/Fcn21' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   *  Fcn: '<S119>/Fcn22'
   */
  tmpForInput_idx_0 = localB->sincos_o1[1] * localB->sincos_o1[2];
  localB->VectorConcatenate_j[1] = tmpForInput_idx_0 * localB->sincos_o2[0] -
    localB->sincos_o1[0] * localB->sincos_o2[2];

  /* Fcn: '<S119>/Fcn31' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   *  Fcn: '<S119>/Fcn32'
   */
  tmpForInput_idx_1 = localB->sincos_o1[1] * localB->sincos_o2[2];
  localB->VectorConcatenate_j[2] = tmpForInput_idx_1 * localB->sincos_o2[0] +
    localB->sincos_o1[0] * localB->sincos_o1[2];

  /* Fcn: '<S119>/Fcn12' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[3] = localB->sincos_o1[0] * localB->sincos_o2[1];

  /* Fcn: '<S119>/Fcn22' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[4] = tmpForInput_idx_0 * localB->sincos_o1[0] +
    localB->sincos_o2[0] * localB->sincos_o2[2];

  /* Fcn: '<S119>/Fcn32' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[5] = tmpForInput_idx_1 * localB->sincos_o1[0] -
    localB->sincos_o2[0] * localB->sincos_o1[2];

  /* Fcn: '<S119>/Fcn13' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[6] = -localB->sincos_o1[1];

  /* Fcn: '<S119>/Fcn23' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[7] = localB->sincos_o2[1] * localB->sincos_o1[2];

  /* Fcn: '<S119>/Fcn33' incorporates:
   *  Concatenate: '<S120>/Vector Concatenate'
   */
  localB->VectorConcatenate_j[8] = localB->sincos_o2[1] * localB->sincos_o2[2];

  /* SignalConversion generated from: '<S71>/Vector Concatenate10' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate10'
   */
  localB->VectorConcatenate10[1] = localB->Product2_d;

  /* SignalConversion generated from: '<S71>/Vector Concatenate5' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate5'
   */
  localB->VectorConcatenate5[0] = localB->Add;

  /* SignalConversion generated from: '<S71>/Vector Concatenate5' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate5'
   */
  localB->VectorConcatenate5[2] = localB->Add5;

  /* SignalConversion generated from: '<S71>/Vector Concatenate6' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate6'
   */
  localB->VectorConcatenate6[0] = localB->Sum1_j[0];

  /* SignalConversion generated from: '<S71>/Vector Concatenate6' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate6'
   */
  localB->VectorConcatenate6[2] = localB->Sum1_j[1];

  /* SignalConversion generated from: '<S71>/Vector Concatenate8' incorporates:
   *  Concatenate: '<S71>/Vector Concatenate8'
   */
  localB->VectorConcatenate8[1] = localB->Add1_l;

  /* Sum: '<S59>/Subtract' */
  tmpForInput_idx_0 = *rtu_MotTrq;

  /* Product: '<S121>/Product2' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[3] = localB->VectorConcatenate4[0] *
    localB->Product4[0];

  /* Product: '<S121>/Product9' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[0] = localB->VectorConcatenate7[0] *
    localB->Product3_f[0];

  /* Product: '<S121>/Product2' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[4] = localB->VectorConcatenate4[1] *
    localB->Product4[1];

  /* Product: '<S121>/Product9' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[1] = localB->VectorConcatenate7[1] *
    localB->Product3_f[1];

  /* Product: '<S121>/Product2' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[5] = localB->VectorConcatenate4[2] *
    localB->Product4[2];

  /* Product: '<S121>/Product9' incorporates:
   *  Concatenate: '<S121>/Vector Concatenate1'
   */
  localB->VectorConcatenate1_h[2] = localB->VectorConcatenate7[2] *
    localB->Product3_f[2];

  /* Sum: '<S59>/Subtract' */
  localB->Subtract_c = (tmpForInput_idx_0 + localB->UnaryMinus_o) +
    localB->Gain2;

  /* Product: '<S59>/Divide' */
  localB->Divide = localB->Subtract_c / localB->Switch;

  /* Product: '<S154>/Product' */
  localB->Product_m = localB->sf_SimpleMagicTire.My / localB->Saturation;

  /* Sum: '<S154>/Add' */
  localB->Add_h = localB->sf_SimpleMagicTire.Fx + localB->Product_m;

  /* Product: '<S154>/Product3' */
  localB->Product3_c = localB->ImpAsg_InsertedFor_Omega_at_i_d *
    localB->Saturation;

  /* Fcn: '<S171>/Fcn' */
  localB->Fcn = 4.0 / (3.0 - rt_powd_snf(localB->Product3_c / 2.0, 2.0));

  /* RelationalOperator: '<S172>/Compare' */
  localB->Compare = (localB->Product3_c >= localB->Constant_a);

  /* RelationalOperator: '<S173>/Compare' */
  localB->Compare_m = (localB->Product3_c <= localB->Constant_ax);

  /* Logic: '<S171>/Logical Operator' */
  localB->LogicalOperator = (localB->Compare && localB->Compare_m);

  /* Abs: '<S171>/Abs' */
  localB->Abs = fabs(localB->Product3_c);

  /* Switch: '<S171>/Switch' */
  if (localB->LogicalOperator) {
    /* Switch: '<S171>/Switch' */
    localB->Switch_j = localB->Fcn;
  } else {
    /* Switch: '<S171>/Switch' */
    localB->Switch_j = localB->Abs;
  }

  /* End of Switch: '<S171>/Switch' */

  /* Product: '<S154>/Product2' */
  localB->Product2_n = localB->Switch_j / localB->Constant2_d;

  /* Sum: '<S170>/Sum' */
  localB->Sum_g = localB->Add_h - localB->Integrator;

  /* Product: '<S170>/Product' */
  localB->Product_l = localB->Product2_n * localB->Sum_g;

  /* Product: '<S196>/Product' */
  localB->Product_e = localB->sf_SimpleMagicTire_a.My / localB->Saturation_b;

  /* Sum: '<S196>/Add' */
  localB->Add_e = localB->sf_SimpleMagicTire_a.Fx + localB->Product_e;

  /* Product: '<S196>/Product3' */
  localB->Product3_j = localB->ImpAsg_InsertedFor_Omega_at_inp *
    localB->Saturation_b;

  /* Fcn: '<S213>/Fcn' */
  localB->Fcn_g = 4.0 / (3.0 - rt_powd_snf(localB->Product3_j / 2.0, 2.0));

  /* RelationalOperator: '<S214>/Compare' */
  localB->Compare_k = (localB->Product3_j >= localB->Constant_p);

  /* RelationalOperator: '<S215>/Compare' */
  localB->Compare_h = (localB->Product3_j <= localB->Constant_h);

  /* Logic: '<S213>/Logical Operator' */
  localB->LogicalOperator_a = (localB->Compare_k && localB->Compare_h);

  /* Abs: '<S213>/Abs' */
  localB->Abs_b = fabs(localB->Product3_j);

  /* Switch: '<S213>/Switch' */
  if (localB->LogicalOperator_a) {
    /* Switch: '<S213>/Switch' */
    localB->Switch_i = localB->Fcn_g;
  } else {
    /* Switch: '<S213>/Switch' */
    localB->Switch_i = localB->Abs_b;
  }

  /* End of Switch: '<S213>/Switch' */

  /* Product: '<S196>/Product2' */
  localB->Product2_c = localB->Switch_i / localB->Constant2_a;

  /* Sum: '<S212>/Sum' */
  localB->Sum_j = localB->Add_e - localB->Integrator_b;

  /* Product: '<S212>/Product' */
  localB->Product_o = localB->Product2_c * localB->Sum_j;

  /* Sum: '<S14>/Subtract' */
  localB->Subtract_b = localB->UnaryMinus1[0] -
    localB->ImpAsg_InsertedFor_Omega_at_i_d;

  /* Sum: '<S15>/Sum' */
  localB->Sum_d = localB->Subtract_b - localB->Switch_p;

  /* Product: '<S15>/Product' */
  localB->Product_pz = localB->omega_c * localB->Sum_d;

  /* Derivatives for Iterator SubSystem: '<S141>/Clutch' */
  for (ForEach_itr_h = 0; ForEach_itr_h < 1; ForEach_itr_h++) {
    /* Derivatives for ForEachSliceSelector generated from: '<S152>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_a_f = localB->Signconvention;

    /* Derivatives for ForEachSliceSelector generated from: '<S152>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_p = localB->Ratioofstatictokinetic;

    /* Derivatives for ForEachSliceSelector generated from: '<S152>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_j = localB->Ratioofstatictokinetic1;

    /* Derivatives for Chart: '<S152>/Clutch' */
    DrivetrainEv_Clutch_Deriv(&localB->CoreSubsys[ForEach_itr_h].sf_Clutch,
      &localDW->CoreSubsys[ForEach_itr_h].sf_Clutch, &localXdot->
      CoreSubsys[ForEach_itr_h].sf_Clutch);
  }

  /* End of Derivatives for SubSystem: '<S141>/Clutch' */

  /* Derivatives for Iterator SubSystem: '<S183>/Clutch' */
  for (ForEach_itr_l = 0; ForEach_itr_l < 1; ForEach_itr_l++) {
    /* Derivatives for ForEachSliceSelector generated from: '<S194>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_at_ = localB->Signconvention_g;

    /* Derivatives for ForEachSliceSelector generated from: '<S194>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_a = localB->Ratioofstatictokinetic_l;

    /* Derivatives for ForEachSliceSelector generated from: '<S194>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_a = localB->Ratioofstatictokinetic1_c;

    /* Derivatives for Chart: '<S194>/Clutch' */
    DrivetrainEv_Clutch_m_Deriv(&localB->CoreSubsys_k[ForEach_itr_l].sf_Clutch,
      &localDW->CoreSubsys_k[ForEach_itr_l].sf_Clutch, &localXdot->
      CoreSubsys_k[ForEach_itr_l].sf_Clutch);
  }

  /* End of Derivatives for SubSystem: '<S183>/Clutch' */

  /* Derivatives for Integrator: '<S72>/Theta' */
  localXdot->Theta_CSTATE = localB->q;

  /* Derivatives for Integrator: '<S72>/q' */
  localXdot->q_CSTATE = localB->Product2_d;

  /* Derivatives for Integrator: '<S15>/Integrator' */
  localXdot->Integrator_CSTATE_n = localB->Product_pz;

  /* Derivatives for Integrator: '<S14>/Integrator' */
  localXdot->Integrator_CSTATE_f = localB->Subtract_b;

  /* Derivatives for Integrator: '<S170>/Integrator' */
  localXdot->Integrator_CSTATE_e = localB->Product_l;

  /* Derivatives for Integrator: '<S212>/Integrator' */
  localXdot->Integrator_CSTATE_b = localB->Product_o;

  /* Derivatives for Integrator: '<S94>/Integrator3' */
  localXdot->Integrator3_CSTATE = localB->VectorConcatenate7[0];

  /* Derivatives for Integrator: '<S51>/Integrator' */
  localXdot->Integrator_CSTATE_g = localB->Product_j;

  /* Derivatives for Integrator: '<S50>/Integrator' */
  localXdot->Integrator_CSTATE_bn = localB->Subtract;

  /* Derivatives for Integrator: '<S59>/Integrator' */
  localXdot->Integrator_CSTATE_i = localB->Divide;

  /* Derivatives for Integrator: '<S72>/U,w' */
  localXdot->Uw_CSTATE[0] = localB->Sum1_j[0];

  /* Derivatives for Integrator: '<S4>/Integrator' */
  localXdot->Integrator_CSTATE[0] = localB->TmpSignalConversionAtIntegrator[0];

  /* Derivatives for Integrator: '<S72>/Position' */
  localXdot->Position_CSTATE[0] = localB->TmpSignalConversionAtPositionIn[0];

  /* Derivatives for Integrator: '<S26>/Integrator' */
  if (((localX->Integrator_CSTATE_gx[0] > DrivetrainEv_P.Integrator_LowerSat) &&
       (localX->Integrator_CSTATE_gx[0] < DrivetrainEv_P.Integrator_UpperSat)) ||
      ((localX->Integrator_CSTATE_gx[0] <= DrivetrainEv_P.Integrator_LowerSat) &&
       (localB->xdot[0] > 0.0)) || ((localX->Integrator_CSTATE_gx[0] >=
        DrivetrainEv_P.Integrator_UpperSat) && (localB->xdot[0] < 0.0))) {
    localXdot->Integrator_CSTATE_gx[0] = localB->xdot[0];
  } else {
    localXdot->Integrator_CSTATE_gx[0] = 0.0;
  }

  /* Derivatives for Integrator: '<S72>/U,w' */
  localXdot->Uw_CSTATE[1] = localB->Sum1_j[1];

  /* Derivatives for Integrator: '<S4>/Integrator' */
  localXdot->Integrator_CSTATE[1] = localB->TmpSignalConversionAtIntegrator[1];

  /* Derivatives for Integrator: '<S72>/Position' */
  localXdot->Position_CSTATE[1] = localB->TmpSignalConversionAtPositionIn[1];

  /* Derivatives for Integrator: '<S26>/Integrator' */
  if (((localX->Integrator_CSTATE_gx[1] > DrivetrainEv_P.Integrator_LowerSat) &&
       (localX->Integrator_CSTATE_gx[1] < DrivetrainEv_P.Integrator_UpperSat)) ||
      ((localX->Integrator_CSTATE_gx[1] <= DrivetrainEv_P.Integrator_LowerSat) &&
       (localB->xdot[1] > 0.0)) || ((localX->Integrator_CSTATE_gx[1] >=
        DrivetrainEv_P.Integrator_UpperSat) && (localB->xdot[1] < 0.0))) {
    localXdot->Integrator_CSTATE_gx[1] = localB->xdot[1];
  } else {
    localXdot->Integrator_CSTATE_gx[1] = 0.0;
  }
}

/* Model initialize function */
void DrivetrainEv_initialize(SimStruct *const rtS, int_T mdlref_TID0, int_T
  mdlref_TID1, RT_MODEL_DrivetrainEv_T *const DrivetrainEv_M, B_DrivetrainEv_c_T
  *localB, DW_DrivetrainEv_f_T *localDW, ZCE_DrivetrainEv_T *localZCE)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  DrivetrainEv_P.DisallowNegativeBrakeTorque_Upp = rtInf;
  DrivetrainEv_P.DisallowNegativeBrakeTorque_U_n = rtInf;
  DrivetrainEv_P.Saturation_UpperSat = rtInf;
  DrivetrainEv_P.Saturation_UpperSat_a = rtInf;

  /* initialize real-time model */
  (void) memset((void *)DrivetrainEv_M, 0,
                sizeof(RT_MODEL_DrivetrainEv_T));

  /* setup the global timing engine */
  DrivetrainEv_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  DrivetrainEv_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  DrivetrainEv_M->rtS = (rtS);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_DrivetrainEv_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_DrivetrainEv_f_T));
  DrivetrainEv_M->nonContDerivSignal[0].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig0;
  DrivetrainEv_M->nonContDerivSignal[0].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[0].pCurrVal = (char_T *)(&localB->diffDir);
  ;
  DrivetrainEv_M->nonContDerivSignal[1].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig1;
  DrivetrainEv_M->nonContDerivSignal[1].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[1].pCurrVal = (char_T *)(&localB->Switch);
  ;
  DrivetrainEv_M->nonContDerivSignal[2].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig2;
  DrivetrainEv_M->nonContDerivSignal[2].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[2].pCurrVal = (char_T *)(&localB->Memory_o);
  ;
  DrivetrainEv_M->nonContDerivSignal[3].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig3;
  DrivetrainEv_M->nonContDerivSignal[3].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[3].pCurrVal = (char_T *)
    (&localB->TorqueConversion1_e);
  ;
  DrivetrainEv_M->nonContDerivSignal[4].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig4;
  DrivetrainEv_M->nonContDerivSignal[4].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[4].pCurrVal = (char_T *)
    (&localB->Saturation_b);
  ;
  DrivetrainEv_M->nonContDerivSignal[5].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig5;
  DrivetrainEv_M->nonContDerivSignal[5].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[5].pCurrVal = (char_T *)
    (&localB->TorqueConversion1);
  ;
  DrivetrainEv_M->nonContDerivSignal[6].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig6;
  DrivetrainEv_M->nonContDerivSignal[6].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[6].pCurrVal = (char_T *)(&localB->Memory);
  ;
  DrivetrainEv_M->nonContDerivSignal[7].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig7;
  DrivetrainEv_M->nonContDerivSignal[7].sizeInBytes = (1*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[7].pCurrVal = (char_T *)
    (&localB->Saturation);
  ;
  DrivetrainEv_M->nonContDerivSignal[8].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig8;
  DrivetrainEv_M->nonContDerivSignal[8].sizeInBytes = (3*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[8].pCurrVal = (char_T *)
    (&localB->VectorConcatenate_l[9]);
  ;
  DrivetrainEv_M->nonContDerivSignal[9].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig9;
  DrivetrainEv_M->nonContDerivSignal[9].sizeInBytes = (3*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[9].pCurrVal = (char_T *)
    (&localB->VectorConcatenate_d[0]);
  ;
  DrivetrainEv_M->nonContDerivSignal[10].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig10;
  DrivetrainEv_M->nonContDerivSignal[10].sizeInBytes = (3*sizeof(real_T));
  DrivetrainEv_M->nonContDerivSignal[10].pCurrVal = (char_T *)
    (&localB->VectorConcatenate[0]);
  ;
  DrivetrainEv_M->nonContDerivSignal[11].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig11;
  DrivetrainEv_M->nonContDerivSignal[11].sizeInBytes = (1*sizeof(boolean_T));
  DrivetrainEv_M->nonContDerivSignal[11].pCurrVal = (char_T *)
    (&localB->CoreSubsys_k[0].sf_Clutch.detectSlip.RelationalOperator);
  ;
  DrivetrainEv_M->nonContDerivSignal[12].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig12;
  DrivetrainEv_M->nonContDerivSignal[12].sizeInBytes = (1*sizeof(boolean_T));
  DrivetrainEv_M->nonContDerivSignal[12].pCurrVal = (char_T *)
    (&localB->CoreSubsys_k[0].sf_Clutch.detectLockup.CombinatorialLogic);
  ;
  DrivetrainEv_M->nonContDerivSignal[13].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig13;
  DrivetrainEv_M->nonContDerivSignal[13].sizeInBytes = (1*sizeof(boolean_T));
  DrivetrainEv_M->nonContDerivSignal[13].pCurrVal = (char_T *)
    (&localB->CoreSubsys[0].sf_Clutch.detectSlip.RelationalOperator);
  ;
  DrivetrainEv_M->nonContDerivSignal[14].pPrevVal = (char_T *)
    DrivetrainEv_M->NonContDerivMemory.mr_nonContSig14;
  DrivetrainEv_M->nonContDerivSignal[14].sizeInBytes = (1*sizeof(boolean_T));
  DrivetrainEv_M->nonContDerivSignal[14].pCurrVal = (char_T *)
    (&localB->CoreSubsys[0].sf_Clutch.detectLockup.CombinatorialLogic);
  ;
  localZCE->Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  localZCE->Integrator_Reset_ZCE_h = UNINITIALIZED_ZCSIG;
}
