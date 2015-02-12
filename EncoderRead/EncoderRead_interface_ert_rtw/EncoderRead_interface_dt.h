/*
 * EncoderRead_interface_dt.h
 *
 * Code generation for model "EncoderRead_interface".
 *
 * Model version              : 1.18
 * Simulink Coder version : 8.7 (R2014b) 08-Sep-2014
 * C source code generated on : Wed Feb 11 18:09:25 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

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
  sizeof(zynq_AXIRead_EncoderRead_inte_T),
  sizeof(zynq_AXIWrite_EncoderRead_int_T)
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
  "zynq_AXIRead_EncoderRead_inte_T",
  "zynq_AXIWrite_EncoderRead_int_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&EncoderRead_interface_B.AXI4Lite_Read_count_DTC), 6, 0, 1 }
  ,

  { (char_T *)(&EncoderRead_interface_DW.obj), 15, 0, 2 },

  { (char_T *)(&EncoderRead_interface_DW.AXI4InterfaceWrite_PWORK), 11, 0, 3 },

  { (char_T *)(&EncoderRead_interface_DW.obj_b), 14, 0, 1 },

  { (char_T *)(&EncoderRead_interface_DW.objisempty), 8, 0, 3 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&EncoderRead_interface_P.Constant_Value), 0, 0, 2 },

  { (char_T *)(&EncoderRead_interface_P.ManualSwitch_CurrentSetting), 3, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] EncoderRead_interface_dt.h */
