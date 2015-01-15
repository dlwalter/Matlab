/*
 * File: gm_PWM_controller_interface.c
 *
 * Code generated for Simulink model 'gm_PWM_controller_interface'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Wed Oct 15 17:56:29 2014
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "gm_PWM_controller_interface.h"
#include "gm_PWM_controller_interface_private.h"
#include "gm_PWM_controller_interface_dt.h"
#define gm_PWM_contro_RegisterOffset_im (256.0)
#define gm_PWM_control_RegisterOffset_i (260.0)
#define gm_PWM_controlle_RegisterOffset (264.0)

/* Block signals (auto storage) */
B_gm_PWM_controller_interface_T gm_PWM_controller_interface_B;

/* Block states (auto storage) */
DW_gm_PWM_controller_interfac_T gm_PWM_controller_interface_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_gm_PWM_controller_interf_T gm_PWM_controller_interface_Y;

/* Real-time model */
RT_MODEL_gm_PWM_controller_in_T gm_PWM_controller_interface_M_;
RT_MODEL_gm_PWM_controller_in_T *const gm_PWM_controller_interface_M =
  &gm_PWM_controller_interface_M_;

/* Model step function */
void gm_PWM_controller_interface_step(void)
{
  uint32_T rtb_AXI4Lite_Write_enable_DTC;
  int32_T tmp;

  /* Gain: '<S2>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp = (int32_T)((uint32_T)gm_PWM_controller_interface_P.SliderGain_gain *
                  gm_PWM_controller_interface_P.Constant1_Value);
  if ((uint32_T)tmp > 255U) {
    tmp = 255;
  }

  /* Outputs for Atomic SubSystem: '<Root>/PWM Controller' */
  /* DataTypeConversion: '<S4>/AXI4Lite_Write_enable_DTC' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_AXI4Lite_Write_enable_DTC = gm_PWM_controller_interface_P.Constant_Value;

  /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_enable' incorporates:
   *  MATLABSystem: '<S4>/AXI4Lite_Write_enable'
   */
  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_enable_DTC, (uint32_T)
                 gm_PWM_contro_RegisterOffset_im, 1U, 8U, 0U);

  /* DataTypeConversion: '<S4>/AXI4Lite_Write_duty_DTC' incorporates:
   *  Gain: '<S2>/Slider Gain'
   */
  rtb_AXI4Lite_Write_enable_DTC = (uint8_T)tmp;

  /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' incorporates:
   *  MATLABSystem: '<S4>/AXI4Lite_Write_duty'
   */
  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_enable_DTC, (uint32_T)
                 gm_PWM_control_RegisterOffset_i, 1U, 8U, 0U);

  /* DataTypeConversion: '<S4>/AXI4Lite_Write_direction_DTC' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  rtb_AXI4Lite_Write_enable_DTC = gm_PWM_controller_interface_P.Constant2_Value;

  /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' incorporates:
   *  MATLABSystem: '<S4>/AXI4Lite_Write_direction'
   */
  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_enable_DTC, (uint32_T)
                 gm_PWM_controlle_RegisterOffset, 1U, 8U, 0U);

  /* DataTypeConversion: '<S3>/AXI4Lite_Read_PWM_DTC' */
  gm_PWM_controller_interface_B.AXI4Lite_Read_PWM_DTC = false;

  /* End of Outputs for SubSystem: '<Root>/PWM Controller' */

  /* Outport: '<Root>/Out1' */
  gm_PWM_controller_interface_Y.Out1 =
    gm_PWM_controller_interface_B.AXI4Lite_Read_PWM_DTC;

  /* Outport: '<Root>/Out2' */
  gm_PWM_controller_interface_Y.Out2 = false;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [1.0s, 0.0s] */
    rtExtModeUpload(0, gm_PWM_controller_interface_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(gm_PWM_controller_interface_M)!=-1) &&
        !((rtmGetTFinal(gm_PWM_controller_interface_M)-
           gm_PWM_controller_interface_M->Timing.taskTime0) >
          gm_PWM_controller_interface_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(gm_PWM_controller_interface_M, "Simulation finished");
    }

    if (rtmGetStopRequested(gm_PWM_controller_interface_M)) {
      rtmSetErrorStatus(gm_PWM_controller_interface_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  gm_PWM_controller_interface_M->Timing.taskTime0 =
    (++gm_PWM_controller_interface_M->Timing.clockTick0) *
    gm_PWM_controller_interface_M->Timing.stepSize0;
}

/* Model initialize function */
void gm_PWM_controller_interface_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)gm_PWM_controller_interface_M, 0,
                sizeof(RT_MODEL_gm_PWM_controller_in_T));
  rtmSetTFinal(gm_PWM_controller_interface_M, -1);
  gm_PWM_controller_interface_M->Timing.stepSize0 = 1.0;

  /* External mode info */
  gm_PWM_controller_interface_M->Sizes.checksums[0] = (1210399367U);
  gm_PWM_controller_interface_M->Sizes.checksums[1] = (3111255339U);
  gm_PWM_controller_interface_M->Sizes.checksums[2] = (4269120594U);
  gm_PWM_controller_interface_M->Sizes.checksums[3] = (3661191421U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    gm_PWM_controller_interface_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(gm_PWM_controller_interface_M->extModeInfo,
      &gm_PWM_controller_interface_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(gm_PWM_controller_interface_M->extModeInfo,
                        gm_PWM_controller_interface_M->Sizes.checksums);
    rteiSetTPtr(gm_PWM_controller_interface_M->extModeInfo, rtmGetTPtr
                (gm_PWM_controller_interface_M));
  }

  /* block I/O */
  (void) memset(((void *) &gm_PWM_controller_interface_B), 0,
                sizeof(B_gm_PWM_controller_interface_T));

  /* states (dwork) */
  (void) memset((void *)&gm_PWM_controller_interface_DW, 0,
                sizeof(DW_gm_PWM_controller_interfac_T));

  /* external outputs */
  (void) memset((void *)&gm_PWM_controller_interface_Y, 0,
                sizeof(ExtY_gm_PWM_controller_interf_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    gm_PWM_controller_interface_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  {
    char_T nullTermName[14];
    static const char_T tmp[13] = { '/', 'd', 'e', 'v', '/', 'm', 'w', 'i', 'p',
      'c', 'o', 'r', 'e' };

    int32_T i;

    /* Start for Atomic SubSystem: '<Root>/PWM Controller' */
    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_enable' */
    gm_PWM_controller_interface_DW.obj.isInitialized = false;
    gm_PWM_controller_interface_DW.obj.isReleased = false;
    gm_PWM_controller_interface_DW.objisempty = true;
    gm_PWM_controller_interface_DW.obj.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_enable' */

    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' */
    gm_PWM_controller_interface_DW.obj_c.isInitialized = false;
    gm_PWM_controller_interface_DW.obj_c.isReleased = false;
    gm_PWM_controller_interface_DW.objisempty_c = true;
    gm_PWM_controller_interface_DW.obj_c.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' */

    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' */
    gm_PWM_controller_interface_DW.obj_p.isInitialized = false;
    gm_PWM_controller_interface_DW.obj_p.isReleased = false;
    gm_PWM_controller_interface_DW.objisempty_b = true;
    gm_PWM_controller_interface_DW.obj_p.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' */
    /* End of Start for SubSystem: '<Root>/PWM Controller' */
  }
}

/* Model terminate function */
void gm_PWM_controller_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/PWM Controller' */
  /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_enable' incorporates:
   *  Terminate for MATLABSystem: '<S4>/AXI4Lite_Write_enable'
   */
  gm_PWM_controller_interface_DW.obj.isInitialized = false;
  gm_PWM_controller_interface_DW.obj.isReleased = false;
  gm_PWM_controller_interface_DW.objisempty = true;
  if (gm_PWM_controller_interface_DW.obj.isInitialized) {
    gm_PWM_controller_interface_DW.obj.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_enable' */

  /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' incorporates:
   *  Terminate for MATLABSystem: '<S4>/AXI4Lite_Write_duty'
   */
  gm_PWM_controller_interface_DW.obj_c.isInitialized = false;
  gm_PWM_controller_interface_DW.obj_c.isReleased = false;
  gm_PWM_controller_interface_DW.objisempty_c = true;
  if (gm_PWM_controller_interface_DW.obj_c.isInitialized) {
    gm_PWM_controller_interface_DW.obj_c.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' */

  /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' incorporates:
   *  Terminate for MATLABSystem: '<S4>/AXI4Lite_Write_direction'
   */
  gm_PWM_controller_interface_DW.obj_p.isInitialized = false;
  gm_PWM_controller_interface_DW.obj_p.isReleased = false;
  gm_PWM_controller_interface_DW.objisempty_b = true;
  if (gm_PWM_controller_interface_DW.obj_p.isInitialized) {
    gm_PWM_controller_interface_DW.obj_p.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' */
  /* End of Terminate for SubSystem: '<Root>/PWM Controller' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
