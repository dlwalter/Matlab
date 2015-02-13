/*
 * gm_ZedBoardTest_interface_dt.h
 *
 * Code generation for model "gm_ZedBoardTest_interface".
 *
 * Model version              : 1.69
 * Simulink Coder version : 8.7 (R2014b) 08-Sep-2014
 * C source code generated on : Thu Feb 12 15:36:27 2015
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
  sizeof(zynq_AXIRead_gm_ZedBoardTest__T),
  sizeof(zynq_AXIWrite_gm_ZedBoardTest_T)
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
  "zynq_AXIRead_gm_ZedBoardTest__T",
  "zynq_AXIWrite_gm_ZedBoardTest_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&gm_ZedBoardTest_interface_B.AXI4Lite_Read_read_back1_DTC), 8, 0,
    4 }
  ,

  { (char_T *)(&gm_ZedBoardTest_interface_DW.obj), 15, 0, 4 },

  { (char_T *)(&gm_ZedBoardTest_interface_DW.AXI4InterfaceWrite_PWORK), 11, 0, 8
  },

  { (char_T *)(&gm_ZedBoardTest_interface_DW.obj_f), 14, 0, 4 },

  { (char_T *)(&gm_ZedBoardTest_interface_DW.objisempty), 8, 0, 8 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&gm_ZedBoardTest_interface_P.ManualSwitch_CurrentSetting), 3, 0,
    4 },

  { (char_T *)(&gm_ZedBoardTest_interface_P.Constant_Value), 8, 0, 8 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] gm_ZedBoardTest_interface_dt.h */
