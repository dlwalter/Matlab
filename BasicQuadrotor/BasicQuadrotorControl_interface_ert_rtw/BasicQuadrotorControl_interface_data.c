/*
 * File: BasicQuadrotorControl_interface_data.c
 *
 * Code generated for Simulink model 'BasicQuadrotorControl_interface'.
 *
 * Model version                  : 1.153
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Wed Feb 18 16:51:35 2015
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
  115U,                                /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S2>/Slider Gain'
                                        */
  112U,                                /* Mask Parameter: SliderGain1_gain
                                        * Referenced by: '<S3>/Slider Gain'
                                        */
  113U,                                /* Mask Parameter: SliderGain2_gain
                                        * Referenced by: '<S4>/Slider Gain'
                                        */
  114U,                                /* Mask Parameter: SliderGain3_gain
                                        * Referenced by: '<S5>/Slider Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
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
  1U,                                  /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  1U,                                  /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<Root>/Constant5'
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
