/*
 * File: gm_ZedBoardTest_interface_private.h
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

#ifndef RTW_HEADER_gm_ZedBoardTest_interface_private_h_
#define RTW_HEADER_gm_ZedBoardTest_interface_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

extern real_T rt_roundd_snf(real_T u);

#endif                                 /* RTW_HEADER_gm_ZedBoardTest_interface_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
