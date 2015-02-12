/*
 * File: EncoderRead_interface.c
 *
 * Code generated for Simulink model 'EncoderRead_interface'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
 * C/C++ source code generated on : Wed Feb 11 18:09:25 2015
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (ARMCortex)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EncoderRead_interface.h"
#include "EncoderRead_interface_private.h"
#include "EncoderRead_interface_dt.h"
#define EncoderRead_i_RegisterOffset_k2 (256.0)
#define EncoderRead_in_RegisterOffset_k (260.0)
#define EncoderRead_inte_RegisterOffset (264.0)

/* Block signals (auto storage) */
B_EncoderRead_interface_T EncoderRead_interface_B;

/* Block states (auto storage) */
DW_EncoderRead_interface_T EncoderRead_interface_DW;

/* Real-time model */
RT_MODEL_EncoderRead_interfac_T EncoderRead_interface_M_;
RT_MODEL_EncoderRead_interfac_T *const EncoderRead_interface_M =
  &EncoderRead_interface_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void EncoderRead_interface_step(void)
{
  char_T y[6];
  int32_T k;
  char_T b[6];
  boolean_T rtb_DataTypeConversion2;
  boolean_T rtb_DataTypeConversion3;
  uint32_T rtb_AXI4Lite_Write_reset_DTC;
  static const char_T tmp[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e',
    '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
    '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!',
    '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
    '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']',
    '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{',
    '|', '}', '~', '\x7f' };

  static const char_T tmp_0[6] = { 'd', 'o', 'u', 'b', 'l', 'e' };

  static const char_T tmp_1[6] = { 's', 'i', 'n', 'g', 'l', 'e' };

  static const char_T tmp_2[6] = { 'u', 'i', 'n', 't', '1', '6' };

  static const char_T tmp_3[6] = { 'u', 'i', 'n', 't', '3', '2' };

  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  int32_T exitg4;
  int32_T exitg5;
  int32_T exitg6;
  int32_T exitg7;
  int32_T exitg8;

  /* ManualSwitch: '<Root>/Manual Switch' */
  if (EncoderRead_interface_P.ManualSwitch_CurrentSetting == 1) {
    /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Constant'
     */
    rtb_DataTypeConversion2 = (EncoderRead_interface_P.Constant_Value != 0.0);
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    rtb_DataTypeConversion2 = (EncoderRead_interface_P.Constant1_Value != 0.0);
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  rtb_DataTypeConversion3 = (EncoderRead_interface_P.Constant1_Value != 0.0);

  /* Outputs for Atomic SubSystem: '<Root>/dut_EncoderRead' */

  /* DataTypeConversion: '<S3>/AXI4Lite_Write_reset_DTC' */
  rtb_AXI4Lite_Write_reset_DTC = rtb_DataTypeConversion2;

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S6>/AXI4-Interface Write'
   */
  memcpy(&EncoderRead_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = EncoderRead_interface_B.table[(uint8_T)
      EncoderRead_interface_DW.obj.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  rtb_DataTypeConversion2 = false;
  k = 0;
  do {
    exitg8 = 0;
    if (k < 6) {
      if (y[k] != b[k]) {
        exitg8 = 1;
      } else {
        k++;
      }
    } else {
      rtb_DataTypeConversion2 = true;
      exitg8 = 1;
    }
  } while (exitg8 == 0);

  if (rtb_DataTypeConversion2) {
    k = 0;
  } else {
    for (k = 0; k < 6; k++) {
      b[k] = tmp_1[k];
    }

    k = 0;
    do {
      exitg7 = 0;
      if (k < 6) {
        if (y[k] != b[k]) {
          exitg7 = 1;
        } else {
          k++;
        }
      } else {
        rtb_DataTypeConversion2 = true;
        exitg7 = 1;
      }
    } while (exitg7 == 0);

    if (rtb_DataTypeConversion2) {
      k = 1;
    } else {
      for (k = 0; k < 6; k++) {
        b[k] = tmp_2[k];
      }

      k = 0;
      do {
        exitg6 = 0;
        if (k < 6) {
          if (y[k] != b[k]) {
            exitg6 = 1;
          } else {
            k++;
          }
        } else {
          rtb_DataTypeConversion2 = true;
          exitg6 = 1;
        }
      } while (exitg6 == 0);

      if (rtb_DataTypeConversion2) {
        k = 5;
      } else {
        for (k = 0; k < 6; k++) {
          b[k] = tmp_3[k];
        }

        k = 0;
        do {
          exitg5 = 0;
          if (k < 6) {
            if (y[k] != b[k]) {
              exitg5 = 1;
            } else {
              k++;
            }
          } else {
            rtb_DataTypeConversion2 = true;
            exitg5 = 1;
          }
        } while (exitg5 == 0);

        if (rtb_DataTypeConversion2) {
          k = 7;
        } else {
          k = -1;
        }
      }
    }
  }

  switch (k) {
   case 0:
    k = 1;
    break;

   case 1:
    k = 2;
    break;

   case 2:
    k = 3;
    break;

   case 3:
    k = 4;
    break;

   case 4:
    k = 5;
    break;

   case 5:
    k = 6;
    break;

   case 6:
    k = 7;
    break;

   case 7:
    k = 8;
    break;

   case 8:
    k = 9;
    break;

   default:
    k = 0;
    break;
  }

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_reset_DTC, (uint32_T)
                 EncoderRead_i_RegisterOffset_k2, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S3>/AXI4Lite_Write_enable_DTC' */
  rtb_AXI4Lite_Write_reset_DTC = rtb_DataTypeConversion3;

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S5>/AXI4-Interface Write'
   */
  memcpy(&EncoderRead_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = EncoderRead_interface_B.table[(uint8_T)
      EncoderRead_interface_DW.obj_c.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  rtb_DataTypeConversion2 = false;
  k = 0;
  do {
    exitg4 = 0;
    if (k < 6) {
      if (y[k] != b[k]) {
        exitg4 = 1;
      } else {
        k++;
      }
    } else {
      rtb_DataTypeConversion2 = true;
      exitg4 = 1;
    }
  } while (exitg4 == 0);

  if (rtb_DataTypeConversion2) {
    k = 0;
  } else {
    for (k = 0; k < 6; k++) {
      b[k] = tmp_1[k];
    }

    k = 0;
    do {
      exitg3 = 0;
      if (k < 6) {
        if (y[k] != b[k]) {
          exitg3 = 1;
        } else {
          k++;
        }
      } else {
        rtb_DataTypeConversion2 = true;
        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (rtb_DataTypeConversion2) {
      k = 1;
    } else {
      for (k = 0; k < 6; k++) {
        b[k] = tmp_2[k];
      }

      k = 0;
      do {
        exitg2 = 0;
        if (k < 6) {
          if (y[k] != b[k]) {
            exitg2 = 1;
          } else {
            k++;
          }
        } else {
          rtb_DataTypeConversion2 = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      if (rtb_DataTypeConversion2) {
        k = 5;
      } else {
        for (k = 0; k < 6; k++) {
          b[k] = tmp_3[k];
        }

        k = 0;
        do {
          exitg1 = 0;
          if (k < 6) {
            if (y[k] != b[k]) {
              exitg1 = 1;
            } else {
              k++;
            }
          } else {
            rtb_DataTypeConversion2 = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);

        if (rtb_DataTypeConversion2) {
          k = 7;
        } else {
          k = -1;
        }
      }
    }
  }

  switch (k) {
   case 0:
    k = 1;
    break;

   case 1:
    k = 2;
    break;

   case 2:
    k = 3;
    break;

   case 3:
    k = 4;
    break;

   case 4:
    k = 5;
    break;

   case 5:
    k = 6;
    break;

   case 6:
    k = 7;
    break;

   case 7:
    k = 8;
    break;

   case 8:
    k = 9;
    break;

   default:
    k = 0;
    break;
  }

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_reset_DTC, (uint32_T)
                 EncoderRead_in_RegisterOffset_k, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Write' */

  /* MATLABSystem: '<S4>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_reset_DTC = 0U;

  /* Start for MATLABSystem: '<S4>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_reset_DTC, (uint32_T)
                EncoderRead_inte_RegisterOffset, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S2>/AXI4Lite_Read_count_DTC' incorporates:
   *  MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  EncoderRead_interface_B.AXI4Lite_Read_count_DTC = (int32_T)
    rtb_AXI4Lite_Write_reset_DTC;

  /* End of Outputs for SubSystem: '<Root>/dut_EncoderRead' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [9.9999999999999991E-6s, 0.0s] */
    rtExtModeUpload(0, EncoderRead_interface_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [9.9999999999999991E-6s, 0.0s] */
    if ((rtmGetTFinal(EncoderRead_interface_M)!=-1) &&
        !((rtmGetTFinal(EncoderRead_interface_M)-
           EncoderRead_interface_M->Timing.taskTime0) >
          EncoderRead_interface_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(EncoderRead_interface_M, "Simulation finished");
    }

    if (rtmGetStopRequested(EncoderRead_interface_M)) {
      rtmSetErrorStatus(EncoderRead_interface_M, "Simulation finished");
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
  if (!(++EncoderRead_interface_M->Timing.clockTick0)) {
    ++EncoderRead_interface_M->Timing.clockTickH0;
  }

  EncoderRead_interface_M->Timing.taskTime0 =
    EncoderRead_interface_M->Timing.clockTick0 *
    EncoderRead_interface_M->Timing.stepSize0 +
    EncoderRead_interface_M->Timing.clockTickH0 *
    EncoderRead_interface_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void EncoderRead_interface_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)EncoderRead_interface_M, 0,
                sizeof(RT_MODEL_EncoderRead_interfac_T));
  rtmSetTFinal(EncoderRead_interface_M, -1);
  EncoderRead_interface_M->Timing.stepSize0 = 9.9999999999999991E-6;

  /* External mode info */
  EncoderRead_interface_M->Sizes.checksums[0] = (3927651641U);
  EncoderRead_interface_M->Sizes.checksums[1] = (2656094854U);
  EncoderRead_interface_M->Sizes.checksums[2] = (2996478781U);
  EncoderRead_interface_M->Sizes.checksums[3] = (329178005U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    EncoderRead_interface_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(EncoderRead_interface_M->extModeInfo,
      &EncoderRead_interface_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(EncoderRead_interface_M->extModeInfo,
                        EncoderRead_interface_M->Sizes.checksums);
    rteiSetTPtr(EncoderRead_interface_M->extModeInfo, rtmGetTPtr
                (EncoderRead_interface_M));
  }

  /* block I/O */
  (void) memset(((void *) &EncoderRead_interface_B), 0,
                sizeof(B_EncoderRead_interface_T));

  /* states (dwork) */
  (void) memset((void *)&EncoderRead_interface_DW, 0,
                sizeof(DW_EncoderRead_interface_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    EncoderRead_interface_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  {
    char_T nullTermName[14];
    static const char_T tmp[6] = { 'u', 'i', 'n', 't', '3', '2' };

    static const char_T tmp_0[13] = { '/', 'd', 'e', 'v', '/', 'm', 'w', 'i',
      'p', 'c', 'o', 'r', 'e' };

    int32_T i;

    /* Start for Atomic SubSystem: '<Root>/dut_EncoderRead' */

    /* Start for MATLABSystem: '<S6>/AXI4-Interface Write' */
    EncoderRead_interface_DW.obj.isInitialized = false;
    EncoderRead_interface_DW.obj.isReleased = false;
    EncoderRead_interface_DW.objisempty = true;
    EncoderRead_interface_DW.obj.isInitialized = true;
    for (i = 0; i < 6; i++) {
      EncoderRead_interface_DW.obj.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S5>/AXI4-Interface Write' */
    EncoderRead_interface_DW.obj_c.isInitialized = false;
    EncoderRead_interface_DW.obj_c.isReleased = false;
    EncoderRead_interface_DW.objisempty_j = true;
    EncoderRead_interface_DW.obj_c.isInitialized = true;
    for (i = 0; i < 6; i++) {
      EncoderRead_interface_DW.obj_c.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S4>/AXI4-Interface Read' */
    EncoderRead_interface_DW.obj_b.isInitialized = false;
    EncoderRead_interface_DW.obj_b.isReleased = false;
    EncoderRead_interface_DW.objisempty_k = true;
    EncoderRead_interface_DW.obj_b.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S4>/AXI4-Interface Read' */

    /* End of Start for SubSystem: '<Root>/dut_EncoderRead' */
  }
}

/* Model terminate function */
void EncoderRead_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/dut_EncoderRead' */

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S6>/AXI4-Interface Write'
   */
  if (EncoderRead_interface_DW.obj.isInitialized) {
    EncoderRead_interface_DW.obj.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S5>/AXI4-Interface Write'
   */
  if (EncoderRead_interface_DW.obj_c.isInitialized) {
    EncoderRead_interface_DW.obj_c.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S4>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  if (EncoderRead_interface_DW.obj_b.isInitialized) {
    EncoderRead_interface_DW.obj_b.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S4>/AXI4-Interface Read' */

  /* End of Terminate for SubSystem: '<Root>/dut_EncoderRead' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
