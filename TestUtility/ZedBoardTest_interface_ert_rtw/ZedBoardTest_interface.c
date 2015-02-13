/*
 * File: ZedBoardTest_interface.c
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

#include "ZedBoardTest_interface.h"
#include "ZedBoardTest_interface_private.h"
#include "ZedBoardTest_interface_dt.h"
#define ZedBoardTe_RegisterOffset_jo111 (260.0)
#define ZedBoardTes_RegisterOffset_jo11 (256.0)
#define ZedBoardTest_RegisterOffset_jo1 (284.0)
#define ZedBoardTest__RegisterOffset_jo (280.0)
#define ZedBoardTest_i_RegisterOffset_j (276.0)
#define ZedBoardTest_int_RegisterOffset (272.0)

/* Block signals (auto storage) */
B_ZedBoardTest_interface_T ZedBoardTest_interface_B;

/* Block states (auto storage) */
DW_ZedBoardTest_interface_T ZedBoardTest_interface_DW;

/* Real-time model */
RT_MODEL_ZedBoardTest_interfa_T ZedBoardTest_interface_M_;
RT_MODEL_ZedBoardTest_interfa_T *const ZedBoardTest_interface_M =
  &ZedBoardTest_interface_M_;
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
void ZedBoardTest_interface_step(void)
{
  char_T y[6];
  int32_T k;
  char_T b[6];
  boolean_T rtb_ManualSwitch;
  boolean_T rtb_ManualSwitch1;
  uint32_T rtb_AXI4Lite_Write_in1_DTC;
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

  /* ManualSwitch: '<Root>/Manual Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (ZedBoardTest_interface_P.ManualSwitch_CurrentSetting == 1) {
    rtb_ManualSwitch = ZedBoardTest_interface_P.Constant_Value;
  } else {
    rtb_ManualSwitch = ZedBoardTest_interface_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch' */

  /* ManualSwitch: '<Root>/Manual Switch1' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant3'
   */
  if (ZedBoardTest_interface_P.ManualSwitch1_CurrentSetting == 1) {
    rtb_ManualSwitch1 = ZedBoardTest_interface_P.Constant2_Value;
  } else {
    rtb_ManualSwitch1 = ZedBoardTest_interface_P.Constant3_Value;
  }

  /* End of ManualSwitch: '<Root>/Manual Switch1' */

  /* Outputs for Atomic SubSystem: '<Root>/led_counter1' */

  /* DataTypeConversion: '<S3>/AXI4Lite_Write_in1_DTC' */
  rtb_AXI4Lite_Write_in1_DTC = rtb_ManualSwitch;

  /* Start for MATLABSystem: '<S8>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S8>/AXI4-Interface Write'
   */
  memcpy(&ZedBoardTest_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = ZedBoardTest_interface_B.table[(uint8_T)
      ZedBoardTest_interface_DW.obj_h.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  rtb_ManualSwitch = false;
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
      rtb_ManualSwitch = true;
      exitg8 = 1;
    }
  } while (exitg8 == 0);

  if (rtb_ManualSwitch) {
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
        rtb_ManualSwitch = true;
        exitg7 = 1;
      }
    } while (exitg7 == 0);

    if (rtb_ManualSwitch) {
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
          rtb_ManualSwitch = true;
          exitg6 = 1;
        }
      } while (exitg6 == 0);

      if (rtb_ManualSwitch) {
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
            rtb_ManualSwitch = true;
            exitg5 = 1;
          }
        } while (exitg5 == 0);

        if (rtb_ManualSwitch) {
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

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_in1_DTC, (uint32_T)
                 ZedBoardTes_RegisterOffset_jo11, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S8>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S3>/AXI4Lite_Write_in2_DTC' */
  rtb_AXI4Lite_Write_in1_DTC = rtb_ManualSwitch1;

  /* Start for MATLABSystem: '<S9>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S9>/AXI4-Interface Write'
   */
  memcpy(&ZedBoardTest_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = ZedBoardTest_interface_B.table[(uint8_T)
      ZedBoardTest_interface_DW.obj.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  rtb_ManualSwitch = false;
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
      rtb_ManualSwitch = true;
      exitg4 = 1;
    }
  } while (exitg4 == 0);

  if (rtb_ManualSwitch) {
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
        rtb_ManualSwitch = true;
        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (rtb_ManualSwitch) {
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
          rtb_ManualSwitch = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      if (rtb_ManualSwitch) {
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
            rtb_ManualSwitch = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);

        if (rtb_ManualSwitch) {
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

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_in1_DTC, (uint32_T)
                 ZedBoardTe_RegisterOffset_jo111, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Write' */

  /* MATLABSystem: '<S4>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_in1_DTC = 0U;

  /* Start for MATLABSystem: '<S4>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_in1_DTC, (uint32_T)
                ZedBoardTest_int_RegisterOffset, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S2>/AXI4Lite_Read_read_back1_DTC' incorporates:
   *  MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  ZedBoardTest_interface_B.AXI4Lite_Read_read_back1_DTC =
    (rtb_AXI4Lite_Write_in1_DTC != 0U);

  /* MATLABSystem: '<S5>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_in1_DTC = 0U;

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_in1_DTC, (uint32_T)
                ZedBoardTest_i_RegisterOffset_j, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S2>/AXI4Lite_Read_read_back2_DTC' incorporates:
   *  MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  ZedBoardTest_interface_B.AXI4Lite_Read_read_back2_DTC =
    (rtb_AXI4Lite_Write_in1_DTC != 0U);

  /* MATLABSystem: '<S6>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_in1_DTC = 0U;

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_in1_DTC, (uint32_T)
                ZedBoardTest__RegisterOffset_jo, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S2>/AXI4Lite_Read_read_back3_DTC' incorporates:
   *  MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  ZedBoardTest_interface_B.AXI4Lite_Read_read_back3_DTC =
    (rtb_AXI4Lite_Write_in1_DTC != 0U);

  /* MATLABSystem: '<S7>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_in1_DTC = 0U;

  /* Start for MATLABSystem: '<S7>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_in1_DTC, (uint32_T)
                ZedBoardTest_RegisterOffset_jo1, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S2>/AXI4Lite_Read_read_back4_DTC' incorporates:
   *  MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  ZedBoardTest_interface_B.AXI4Lite_Read_read_back4_DTC =
    (rtb_AXI4Lite_Write_in1_DTC != 0U);

  /* End of Outputs for SubSystem: '<Root>/led_counter1' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.001s, 0.0s] */
    rtExtModeUpload(0, ZedBoardTest_interface_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(ZedBoardTest_interface_M)!=-1) &&
        !((rtmGetTFinal(ZedBoardTest_interface_M)-
           ZedBoardTest_interface_M->Timing.taskTime0) >
          ZedBoardTest_interface_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(ZedBoardTest_interface_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ZedBoardTest_interface_M)) {
      rtmSetErrorStatus(ZedBoardTest_interface_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  ZedBoardTest_interface_M->Timing.taskTime0 =
    (++ZedBoardTest_interface_M->Timing.clockTick0) *
    ZedBoardTest_interface_M->Timing.stepSize0;
}

/* Model initialize function */
void ZedBoardTest_interface_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ZedBoardTest_interface_M, 0,
                sizeof(RT_MODEL_ZedBoardTest_interfa_T));
  rtmSetTFinal(ZedBoardTest_interface_M, -1);
  ZedBoardTest_interface_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  ZedBoardTest_interface_M->Sizes.checksums[0] = (3163231752U);
  ZedBoardTest_interface_M->Sizes.checksums[1] = (2875642729U);
  ZedBoardTest_interface_M->Sizes.checksums[2] = (3870573328U);
  ZedBoardTest_interface_M->Sizes.checksums[3] = (1964912466U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    ZedBoardTest_interface_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ZedBoardTest_interface_M->extModeInfo,
      &ZedBoardTest_interface_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ZedBoardTest_interface_M->extModeInfo,
                        ZedBoardTest_interface_M->Sizes.checksums);
    rteiSetTPtr(ZedBoardTest_interface_M->extModeInfo, rtmGetTPtr
                (ZedBoardTest_interface_M));
  }

  /* block I/O */
  (void) memset(((void *) &ZedBoardTest_interface_B), 0,
                sizeof(B_ZedBoardTest_interface_T));

  /* states (dwork) */
  (void) memset((void *)&ZedBoardTest_interface_DW, 0,
                sizeof(DW_ZedBoardTest_interface_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ZedBoardTest_interface_M->SpecialInfo.mappingInfo = (&dtInfo);
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

    /* Start for Atomic SubSystem: '<Root>/led_counter1' */

    /* Start for MATLABSystem: '<S8>/AXI4-Interface Write' */
    ZedBoardTest_interface_DW.obj_h.isInitialized = false;
    ZedBoardTest_interface_DW.obj_h.isReleased = false;
    ZedBoardTest_interface_DW.objisempty_b = true;
    ZedBoardTest_interface_DW.obj_h.isInitialized = true;
    for (i = 0; i < 6; i++) {
      ZedBoardTest_interface_DW.obj_h.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S8>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S9>/AXI4-Interface Write' */
    ZedBoardTest_interface_DW.obj.isInitialized = false;
    ZedBoardTest_interface_DW.obj.isReleased = false;
    ZedBoardTest_interface_DW.objisempty = true;
    ZedBoardTest_interface_DW.obj.isInitialized = true;
    for (i = 0; i < 6; i++) {
      ZedBoardTest_interface_DW.obj.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S4>/AXI4-Interface Read' */
    ZedBoardTest_interface_DW.obj_m.isInitialized = false;
    ZedBoardTest_interface_DW.obj_m.isReleased = false;
    ZedBoardTest_interface_DW.objisempty_l = true;
    ZedBoardTest_interface_DW.obj_m.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S4>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S5>/AXI4-Interface Read' */
    ZedBoardTest_interface_DW.obj_j.isInitialized = false;
    ZedBoardTest_interface_DW.obj_j.isReleased = false;
    ZedBoardTest_interface_DW.objisempty_na = true;
    ZedBoardTest_interface_DW.obj_j.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S6>/AXI4-Interface Read' */
    ZedBoardTest_interface_DW.obj_c.isInitialized = false;
    ZedBoardTest_interface_DW.obj_c.isReleased = false;
    ZedBoardTest_interface_DW.objisempty_p = true;
    ZedBoardTest_interface_DW.obj_c.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S7>/AXI4-Interface Read' */
    ZedBoardTest_interface_DW.obj_b.isInitialized = false;
    ZedBoardTest_interface_DW.obj_b.isReleased = false;
    ZedBoardTest_interface_DW.objisempty_n = true;
    ZedBoardTest_interface_DW.obj_b.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S7>/AXI4-Interface Read' */

    /* End of Start for SubSystem: '<Root>/led_counter1' */
  }
}

/* Model terminate function */
void ZedBoardTest_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/led_counter1' */

  /* Start for MATLABSystem: '<S8>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S8>/AXI4-Interface Write'
   */
  if (ZedBoardTest_interface_DW.obj_h.isInitialized) {
    ZedBoardTest_interface_DW.obj_h.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S8>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S9>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S9>/AXI4-Interface Write'
   */
  if (ZedBoardTest_interface_DW.obj.isInitialized) {
    ZedBoardTest_interface_DW.obj.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S4>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S4>/AXI4-Interface Read'
   */
  if (ZedBoardTest_interface_DW.obj_m.isInitialized) {
    ZedBoardTest_interface_DW.obj_m.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S4>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  if (ZedBoardTest_interface_DW.obj_j.isInitialized) {
    ZedBoardTest_interface_DW.obj_j.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  if (ZedBoardTest_interface_DW.obj_c.isInitialized) {
    ZedBoardTest_interface_DW.obj_c.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S7>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  if (ZedBoardTest_interface_DW.obj_b.isInitialized) {
    ZedBoardTest_interface_DW.obj_b.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S7>/AXI4-Interface Read' */

  /* End of Terminate for SubSystem: '<Root>/led_counter1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
