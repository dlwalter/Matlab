/*
 * gm_PWM_controller_interface.c
 *
 * Code generation for model "gm_PWM_controller_interface".
 *
 * Model version              : 1.11
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Wed Oct 15 17:44:00 2014
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ASIC/FPGA->ASIC/FPGA
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
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
  /* Matfile logging */
  rt_UpdateTXYLogVars(gm_PWM_controller_interface_M->rtwLogInfo,
                      (&gm_PWM_controller_interface_M->Timing.taskTime0));

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
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++gm_PWM_controller_interface_M->Timing.clockTick0)) {
    ++gm_PWM_controller_interface_M->Timing.clockTickH0;
  }

  gm_PWM_controller_interface_M->Timing.taskTime0 =
    gm_PWM_controller_interface_M->Timing.clockTick0 *
    gm_PWM_controller_interface_M->Timing.stepSize0 +
    gm_PWM_controller_interface_M->Timing.clockTickH0 *
    gm_PWM_controller_interface_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void gm_PWM_controller_interface_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)gm_PWM_controller_interface_M, 0,
                sizeof(RT_MODEL_gm_PWM_controller_in_T));
  rtmSetTFinal(gm_PWM_controller_interface_M, 2000.0);
  gm_PWM_controller_interface_M->Timing.stepSize0 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    gm_PWM_controller_interface_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(gm_PWM_controller_interface_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(gm_PWM_controller_interface_M->rtwLogInfo, (NULL));
    rtliSetLogT(gm_PWM_controller_interface_M->rtwLogInfo, "");
    rtliSetLogX(gm_PWM_controller_interface_M->rtwLogInfo, "");
    rtliSetLogXFinal(gm_PWM_controller_interface_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(gm_PWM_controller_interface_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(gm_PWM_controller_interface_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(gm_PWM_controller_interface_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(gm_PWM_controller_interface_M->rtwLogInfo, 1);
    rtliSetLogY(gm_PWM_controller_interface_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(gm_PWM_controller_interface_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(gm_PWM_controller_interface_M->rtwLogInfo, (NULL));
  }

  /* External mode info */
  gm_PWM_controller_interface_M->Sizes.checksums[0] = (2025347622U);
  gm_PWM_controller_interface_M->Sizes.checksums[1] = (2565789952U);
  gm_PWM_controller_interface_M->Sizes.checksums[2] = (229148893U);
  gm_PWM_controller_interface_M->Sizes.checksums[3] = (2920118790U);

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
  {
    gm_PWM_controller_interface_B.AXI4Lite_Read_PWM_DTC = false;
  }

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
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(gm_PWM_controller_interface_M->rtwLogInfo,
    0.0, rtmGetTFinal(gm_PWM_controller_interface_M),
    gm_PWM_controller_interface_M->Timing.stepSize0, (&rtmGetErrorStatus
    (gm_PWM_controller_interface_M)));

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

    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' */
    gm_PWM_controller_interface_DW.obj_b.isInitialized = false;
    gm_PWM_controller_interface_DW.obj_b.isReleased = false;
    gm_PWM_controller_interface_DW.objisempty_o = true;
    gm_PWM_controller_interface_DW.obj_b.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' */
    gm_PWM_controller_interface_DW.obj_e.isInitialized = false;
    gm_PWM_controller_interface_DW.obj_e.isReleased = false;
    gm_PWM_controller_interface_DW.objisempty_g = true;
    gm_PWM_controller_interface_DW.obj_e.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for SubSystem: '<Root>/PWM Controller' */
    /* ConstCode for Atomic SubSystem: '<Root>/PWM Controller' */
    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_enable' incorporates:
     *  ConstCode for MATLABSystem: '<S4>/AXI4Lite_Write_enable'
     */
    AXI4LITE_WRITE(&gm_PWM_controller_interf_ConstB.AXI4Lite_Write_enable_DTC,
                   (uint32_T)gm_PWM_contro_RegisterOffset_im, 1U, 8U, 0U);

    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' incorporates:
     *  ConstCode for MATLABSystem: '<S4>/AXI4Lite_Write_duty'
     */
    AXI4LITE_WRITE(&gm_PWM_controller_interf_ConstB.AXI4Lite_Write_duty_DTC,
                   (uint32_T)gm_PWM_control_RegisterOffset_i, 1U, 8U, 0U);

    /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' incorporates:
     *  ConstCode for MATLABSystem: '<S4>/AXI4Lite_Write_direction'
     */
    AXI4LITE_WRITE(&gm_PWM_controller_interf_ConstB.AXI4Lite_Write_direction_DT,
                   (uint32_T)gm_PWM_controlle_RegisterOffset, 1U, 8U, 0U);

    /* ConstCode for DataTypeConversion: '<S3>/AXI4Lite_Read_PWM_DTC' */
    gm_PWM_controller_interface_B.AXI4Lite_Read_PWM_DTC = false;

    /* End of ConstCode for SubSystem: '<Root>/PWM Controller' */

    /* ConstCode for Outport: '<Root>/Out1' */
    gm_PWM_controller_interface_Y.Out1 =
      gm_PWM_controller_interface_B.AXI4Lite_Read_PWM_DTC;

    /* ConstCode for Outport: '<Root>/Out2' */
    gm_PWM_controller_interface_Y.Out2 =
      gm_PWM_controller_interf_ConstB.AXI4Lite_Read_DIR_DTC;
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
  gm_PWM_controller_interface_DW.obj_b.isInitialized = false;
  gm_PWM_controller_interface_DW.obj_b.isReleased = false;
  gm_PWM_controller_interface_DW.objisempty_o = true;
  if (gm_PWM_controller_interface_DW.obj_b.isInitialized) {
    gm_PWM_controller_interface_DW.obj_b.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_duty' */

  /* Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' incorporates:
   *  Terminate for MATLABSystem: '<S4>/AXI4Lite_Write_direction'
   */
  gm_PWM_controller_interface_DW.obj_e.isInitialized = false;
  gm_PWM_controller_interface_DW.obj_e.isReleased = false;
  gm_PWM_controller_interface_DW.objisempty_g = true;
  if (gm_PWM_controller_interface_DW.obj_e.isInitialized) {
    gm_PWM_controller_interface_DW.obj_e.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S4>/AXI4Lite_Write_direction' */
  /* End of Terminate for SubSystem: '<Root>/PWM Controller' */
}
