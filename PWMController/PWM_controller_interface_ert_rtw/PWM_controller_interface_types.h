/*
 * File: PWM_controller_interface_types.h
 *
 * Code generated for Simulink model 'PWM_controller_interface'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Thu Jan 15 18:00:24 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PWM_controller_interface_types_h_
#define RTW_HEADER_PWM_controller_interface_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef struct_sMuAbUVJSKYW2JemgNaT6WE
#define struct_sMuAbUVJSKYW2JemgNaT6WE

struct sMuAbUVJSKYW2JemgNaT6WE
{
  boolean_T isInitialized;
  boolean_T isReleased;
  char_T dTypeIn[6];
};

#endif                                 /*struct_sMuAbUVJSKYW2JemgNaT6WE*/

#ifndef typedef_zynq_AXIWrite_PWM_controller__T
#define typedef_zynq_AXIWrite_PWM_controller__T

typedef struct sMuAbUVJSKYW2JemgNaT6WE zynq_AXIWrite_PWM_controller__T;

#endif                                 /*typedef_zynq_AXIWrite_PWM_controller__T*/

/* Parameters (auto storage) */
typedef struct P_PWM_controller_interface_T_ P_PWM_controller_interface_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_PWM_controller_interf_T RT_MODEL_PWM_controller_inter_T;

#endif                                 /* RTW_HEADER_PWM_controller_interface_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
