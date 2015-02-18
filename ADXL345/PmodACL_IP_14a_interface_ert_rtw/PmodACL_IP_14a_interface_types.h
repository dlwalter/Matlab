/*
 * File: PmodACL_IP_14a_interface_types.h
 *
 * Code generated for Simulink model 'PmodACL_IP_14a_interface'.
 *
 * Model version                  : 1.151
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Tue Feb 17 16:16:15 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PmodACL_IP_14a_interface_types_h_
#define RTW_HEADER_PmodACL_IP_14a_interface_types_h_
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

#ifndef typedef_zynq_AXIRead_PmodACL_IP_14a_i_T
#define typedef_zynq_AXIRead_PmodACL_IP_14a_i_T

typedef struct sBXDEuAy0JqQWTqQNNcXgNG zynq_AXIRead_PmodACL_IP_14a_i_T;

#endif                                 /*typedef_zynq_AXIRead_PmodACL_IP_14a_i_T*/

#ifndef struct_sMuAbUVJSKYW2JemgNaT6WE
#define struct_sMuAbUVJSKYW2JemgNaT6WE

struct sMuAbUVJSKYW2JemgNaT6WE
{
  boolean_T isInitialized;
  boolean_T isReleased;
  char_T dTypeIn[6];
};

#endif                                 /*struct_sMuAbUVJSKYW2JemgNaT6WE*/

#ifndef typedef_zynq_AXIWrite_PmodACL_IP_14a__T
#define typedef_zynq_AXIWrite_PmodACL_IP_14a__T

typedef struct sMuAbUVJSKYW2JemgNaT6WE zynq_AXIWrite_PmodACL_IP_14a__T;

#endif                                 /*typedef_zynq_AXIWrite_PmodACL_IP_14a__T*/

/* Parameters (auto storage) */
typedef struct P_PmodACL_IP_14a_interface_T_ P_PmodACL_IP_14a_interface_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_PmodACL_IP_14a_interf_T RT_MODEL_PmodACL_IP_14a_inter_T;

#endif                                 /* RTW_HEADER_PmodACL_IP_14a_interface_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
