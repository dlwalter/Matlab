/*
 * File: ZedBoardTest_interface_types.h
 *
 * Code generated for Simulink model 'ZedBoardTest_interface'.
 *
 * Model version                  : 1.71
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Thu Feb 12 16:33:33 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ZedBoardTest_interface_types_h_
#define RTW_HEADER_ZedBoardTest_interface_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef struct_sBXDEuAy0JqQWTqQNNcXgNG
#define struct_sBXDEuAy0JqQWTqQNNcXgNG

struct sBXDEuAy0JqQWTqQNNcXgNG
{
  boolean_T isInitialized;
  boolean_T isReleased;
};

#endif                                 /*struct_sBXDEuAy0JqQWTqQNNcXgNG*/

#ifndef typedef_zynq_AXIRead_ZedBoardTest_int_T
#define typedef_zynq_AXIRead_ZedBoardTest_int_T

typedef struct sBXDEuAy0JqQWTqQNNcXgNG zynq_AXIRead_ZedBoardTest_int_T;

#endif                                 /*typedef_zynq_AXIRead_ZedBoardTest_int_T*/

#ifndef struct_sMuAbUVJSKYW2JemgNaT6WE
#define struct_sMuAbUVJSKYW2JemgNaT6WE

struct sMuAbUVJSKYW2JemgNaT6WE
{
  boolean_T isInitialized;
  boolean_T isReleased;
  char_T dTypeIn[6];
};

#endif                                 /*struct_sMuAbUVJSKYW2JemgNaT6WE*/

#ifndef typedef_zynq_AXIWrite_ZedBoardTest_in_T
#define typedef_zynq_AXIWrite_ZedBoardTest_in_T

typedef struct sMuAbUVJSKYW2JemgNaT6WE zynq_AXIWrite_ZedBoardTest_in_T;

#endif                                 /*typedef_zynq_AXIWrite_ZedBoardTest_in_T*/

/* Parameters (auto storage) */
typedef struct P_ZedBoardTest_interface_T_ P_ZedBoardTest_interface_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_ZedBoardTest_interfac_T RT_MODEL_ZedBoardTest_interfa_T;

#endif                                 /* RTW_HEADER_ZedBoardTest_interface_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
