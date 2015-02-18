/*
 * File: BasicQuadrotorControl_interface_data.c
 *
 * Code generated for Simulink model 'BasicQuadrotorControl_interface'.
 *
 * Model version                  : 1.152
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Tue Feb 17 19:03:15 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BasicQuadrotorControl_interface.h"
#include "BasicQuadrotorControl_interface_private.h"

/* Block parameters (auto storage) */
P_BasicQuadrotorControl_inter_T BasicQuadrotorControl_interfa_P = {
  12552U,                              /* Variable: DATA_FORMAT
                                        * Referenced by: '<S1>/Constant'
                                        */
  32768U,                              /* Variable: READ_CMD
                                        * Referenced by: '<S1>/Constant2'
                                        */
  21U,                                 /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S2>/Slider Gain'
                                        */
  22U,                                 /* Mask Parameter: SliderGain1_gain
                                        * Referenced by: '<S3>/Slider Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  1U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch'
                                        */
  1U,                                  /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  1U,                                  /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<Root>/Constant3'
                                        */
  1                                    /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
