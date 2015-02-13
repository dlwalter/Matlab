/*
 * File: gm_ZedBoardTest_interface_types.h
 *
 * Code generated for Simulink model 'gm_ZedBoardTest_interface'.
 *
 * Model version                  : 1.69
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Thu Feb 12 15:36:27 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gm_ZedBoardTest_interface_types_h_
#define RTW_HEADER_gm_ZedBoardTest_interface_types_h_
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

#ifndef typedef_zynq_AXIRead_gm_ZedBoardTest__T
#define typedef_zynq_AXIRead_gm_ZedBoardTest__T

typedef struct sBXDEuAy0JqQWTqQNNcXgNG zynq_AXIRead_gm_ZedBoardTest__T;

#endif                                 /*typedef_zynq_AXIRead_gm_ZedBoardTest__T*/

#ifndef struct_sMuAbUVJSKYW2JemgNaT6WE
#define struct_sMuAbUVJSKYW2JemgNaT6WE

struct sMuAbUVJSKYW2JemgNaT6WE
{
  boolean_T isInitialized;
  boolean_T isReleased;
  char_T dTypeIn[6];
};

#endif                                 /*struct_sMuAbUVJSKYW2JemgNaT6WE*/

#ifndef typedef_zynq_AXIWrite_gm_ZedBoardTest_T
#define typedef_zynq_AXIWrite_gm_ZedBoardTest_T

typedef struct sMuAbUVJSKYW2JemgNaT6WE zynq_AXIWrite_gm_ZedBoardTest_T;

#endif                                 /*typedef_zynq_AXIWrite_gm_ZedBoardTest_T*/

/* Parameters (auto storage) */
typedef struct P_gm_ZedBoardTest_interface_T_ P_gm_ZedBoardTest_interface_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_gm_ZedBoardTest_inter_T RT_MODEL_gm_ZedBoardTest_inte_T;

#endif                                 /* RTW_HEADER_gm_ZedBoardTest_interface_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
