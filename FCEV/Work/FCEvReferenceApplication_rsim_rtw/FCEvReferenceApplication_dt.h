/*
 * FCEvReferenceApplication_dt.h
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

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(MdlrefDW_FCEvPowertrainContro_T),
  sizeof(MdlrefDW_DrivetrainEv_T),
  sizeof(MdlrefDW_FCElectricPlant_T),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "MdlrefDW_FCEvPowertrainContro_T",
  "MdlrefDW_DrivetrainEv_T",
  "MdlrefDW_FCElectricPlant_T",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&FCEvReferenceApplication_B.MotTrqCmd), 0, 0, 86 },

  { (char_T *)(&FCEvReferenceApplication_B.LogicalOperator2), 8, 0, 5 },

  { (char_T *)(&FCEvReferenceApplication_B.PassThrough_b.u), 0, 0, 1 },

  { (char_T *)(&FCEvReferenceApplication_B.PassThrough.u), 0, 0, 1 }
  ,

  { (char_T *)(&FCEvReferenceApplication_DW.UnitDelay_DSTATE[0]), 0, 0, 40 },

  { (char_T *)(&FCEvReferenceApplication_DW.Scope_PWORK.LoggedData), 11, 0, 18 },

  { (char_T *)(&FCEvReferenceApplication_DW.m_bpIndex), 7, 0, 1 },

  { (char_T *)(&FCEvReferenceApplication_DW.Saturation_MODE), 10, 0, 3 },

  { (char_T *)(&FCEvReferenceApplication_DW.RateTransition1_semaphoreTaken), 2,
    0, 17 },

  { (char_T *)(&FCEvReferenceApplication_DW.is_GearSelect), 3, 0, 2 },

  { (char_T *)(&FCEvReferenceApplication_DW.Compare_Mode), 8, 0, 2 },

  { (char_T *)(&FCEvReferenceApplication_DW.Drivetrain_InstanceData), 18, 0, 1 },

  { (char_T *)(&FCEvReferenceApplication_DW.ElectricPlant_InstanceData), 19, 0,
    1 },

  { (char_T *)(&FCEvReferenceApplication_DW.ElectricPlant_MASS_MATRIX_PR), 6, 0,
    1 },

  { (char_T *)(&FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst), 17,
    0, 1 },

  { (char_T *)(&FCEvReferenceApplication_DW.PassThrough_b.PassThrough_MODE), 8,
    0, 1 },

  { (char_T *)(&FCEvReferenceApplication_DW.PassThrough.PassThrough_MODE), 8, 0,
    1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  17U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&FCEvReferenceApplication_P.LongitudinalDriverModel_GearIni), 0,
    0, 2810 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

/* [EOF] FCEvReferenceApplication_dt.h */
