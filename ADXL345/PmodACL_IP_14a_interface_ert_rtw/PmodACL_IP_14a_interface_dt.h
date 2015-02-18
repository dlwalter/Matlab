/*
 * PmodACL_IP_14a_interface_dt.h
 *
 * Code generation for model "PmodACL_IP_14a_interface".
 *
 * Model version              : 1.151
 * Simulink Coder version : 8.7 (R2014b) 08-Sep-2014
 * C source code generated on : Tue Feb 17 16:16:15 2015
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
  sizeof(zynq_AXIRead_PmodACL_IP_14a_i_T),
  sizeof(zynq_AXIWrite_PmodACL_IP_14a__T)
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
  "zynq_AXIRead_PmodACL_IP_14a_i_T",
  "zynq_AXIWrite_PmodACL_IP_14a__T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&PmodACL_IP_14a_interface_B.DataTypeConversion1), 4, 0, 19 },

  { (char_T *)(&PmodACL_IP_14a_interface_B.AXI4Lite_Read_XYZ_Valid_DTC), 8, 0, 1
  }
  ,

  { (char_T *)(&PmodACL_IP_14a_interface_DW.obj), 15, 0, 2 },

  { (char_T *)(&PmodACL_IP_14a_interface_DW.FromWorkspace_PWORK.TimePtr), 11, 0,
    8 },

  { (char_T *)(&PmodACL_IP_14a_interface_DW.FromWorkspace_IWORK.PrevIndex), 10,
    0, 1 },

  { (char_T *)(&PmodACL_IP_14a_interface_DW.obj_b), 14, 0, 4 },

  { (char_T *)(&PmodACL_IP_14a_interface_DW.objisempty), 8, 0, 6 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&PmodACL_IP_14a_interface_P.DATA_FORMAT), 5, 0, 2 },

  { (char_T *)(&PmodACL_IP_14a_interface_P.Constant_Value), 0, 0, 2 },

  { (char_T *)(&PmodACL_IP_14a_interface_P.ManualSwitch_CurrentSetting), 3, 0, 1
  }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] PmodACL_IP_14a_interface_dt.h */
