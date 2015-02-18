/*
 * File: PmodACL_IP_14a_interface.c
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

#include "PmodACL_IP_14a_interface.h"
#include "PmodACL_IP_14a_interface_private.h"
#include "PmodACL_IP_14a_interface_dt.h"
#define PmodACL_IP_14_RegisterOffset_g3 (268.0)
#define PmodACL_IP_14a_RegisterOffset_g (276.0)
#define PmodACL_IP_14a_i_RegisterOffset (264.0)
#define PmodACL_IP_1_RegisterOffset_g3m (272.0)
#define PmodACL_IP_RegisterOffset_g3mgd (260.0)
#define PmodACL_IP__RegisterOffset_g3mg (256.0)

/* Block signals (auto storage) */
B_PmodACL_IP_14a_interface_T PmodACL_IP_14a_interface_B;

/* Block states (auto storage) */
DW_PmodACL_IP_14a_interface_T PmodACL_IP_14a_interface_DW;

/* Real-time model */
RT_MODEL_PmodACL_IP_14a_inter_T PmodACL_IP_14a_interface_M_;
RT_MODEL_PmodACL_IP_14a_inter_T *const PmodACL_IP_14a_interface_M =
  &PmodACL_IP_14a_interface_M_;
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
void PmodACL_IP_14a_interface_step(void)
{
  /* local block i/o variables */
  real_T rtb_Switch;
  int32_T j;
  int32_T u;
  char_T y[6];
  boolean_T bool_0;
  int32_T k;
  char_T b[6];
  uint16_T rtb_DataTypeConversion;
  uint16_T rtb_AXI4Lite_Read_Y_DTC;
  uint16_T rtb_AXI4Lite_Read_Z_DTC;
  uint32_T rtb_AXI4Lite_Write_CMD_DTC;
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

  real_T tmp_4;
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  int32_T exitg4;
  int32_T exitg5;
  int32_T exitg6;
  int32_T exitg7;
  int32_T exitg8;

  /* FromWorkspace: '<Root>/From Workspace' */
  {
    real_T t = PmodACL_IP_14a_interface_M->Timing.taskTime0;
    real_T *pTimeValues = (real_T *)
      PmodACL_IP_14a_interface_DW.FromWorkspace_PWORK.TimePtr;
    real_T *pDataValues = (real_T *)
      PmodACL_IP_14a_interface_DW.FromWorkspace_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      rtb_Switch = 0.0;
    } else if (t == pTimeValues[6]) {
      rtb_Switch = pDataValues[6];
    } else if (t > pTimeValues[6]) {
      rtb_Switch = 0.0;
    } else {
      int_T currTimeIndex =
        PmodACL_IP_14a_interface_DW.FromWorkspace_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      rtb_Switch = pDataValues[currTimeIndex];
      PmodACL_IP_14a_interface_DW.FromWorkspace_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  if (rtb_Switch == PmodACL_IP_14a_interface_P.Constant_Value) {
    /* ManualSwitch: '<Root>/Manual Switch' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant2'
     */
    if (PmodACL_IP_14a_interface_P.ManualSwitch_CurrentSetting == 1) {
      rtb_Switch = PmodACL_IP_14a_interface_P.READ_CMD;
    } else {
      rtb_Switch = PmodACL_IP_14a_interface_P.DATA_FORMAT;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch' */
  }

  /* End of Switch: '<Root>/Switch' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  tmp_4 = floor(rtb_Switch);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_4 = 0.0;
  } else {
    tmp_4 = fmod(tmp_4, 65536.0);
  }

  rtb_DataTypeConversion = (uint16_T)(tmp_4 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
                                      (uint16_T)-tmp_4 : (int32_T)(uint16_T)
    tmp_4);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* Outputs for Atomic SubSystem: '<Root>/hdl_dut' */

  /* DataTypeConversion: '<S4>/AXI4Lite_Write_CMD_DTC' */
  rtb_AXI4Lite_Write_CMD_DTC = rtb_DataTypeConversion;

  /* Start for MATLABSystem: '<S9>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S9>/AXI4-Interface Write'
   */
  memcpy(&PmodACL_IP_14a_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = PmodACL_IP_14a_interface_B.table[(uint8_T)
      PmodACL_IP_14a_interface_DW.obj_l.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  bool_0 = false;
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
      bool_0 = true;
      exitg8 = 1;
    }
  } while (exitg8 == 0);

  if (bool_0) {
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
        bool_0 = true;
        exitg7 = 1;
      }
    } while (exitg7 == 0);

    if (bool_0) {
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
          bool_0 = true;
          exitg6 = 1;
        }
      } while (exitg6 == 0);

      if (bool_0) {
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
            bool_0 = true;
            exitg5 = 1;
          }
        } while (exitg5 == 0);

        if (bool_0) {
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

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                 PmodACL_IP__RegisterOffset_g3mg, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S4>/AXI4Lite_Write_CMD_VLD_DTC' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp_4 = floor(PmodACL_IP_14a_interface_P.Constant1_Value);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_4 = 0.0;
  } else {
    tmp_4 = fmod(tmp_4, 4.294967296E+9);
  }

  rtb_AXI4Lite_Write_CMD_DTC = tmp_4 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)
    -tmp_4 : (uint32_T)tmp_4;

  /* End of DataTypeConversion: '<S4>/AXI4Lite_Write_CMD_VLD_DTC' */

  /* Start for MATLABSystem: '<S10>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S10>/AXI4-Interface Write'
   */
  memcpy(&PmodACL_IP_14a_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = PmodACL_IP_14a_interface_B.table[(uint8_T)
      PmodACL_IP_14a_interface_DW.obj.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  bool_0 = false;
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
      bool_0 = true;
      exitg4 = 1;
    }
  } while (exitg4 == 0);

  if (bool_0) {
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
        bool_0 = true;
        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (bool_0) {
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
          bool_0 = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      if (bool_0) {
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
            bool_0 = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);

        if (bool_0) {
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

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                 PmodACL_IP_RegisterOffset_g3mgd, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S10>/AXI4-Interface Write' */

  /* MATLABSystem: '<S5>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                PmodACL_IP_14a_i_RegisterOffset, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S3>/AXI4Lite_Read_X_DTC' incorporates:
   *  MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  rtb_DataTypeConversion = (uint16_T)rtb_AXI4Lite_Write_CMD_DTC;

  /* MATLABSystem: '<S7>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S7>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                PmodACL_IP_14_RegisterOffset_g3, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S3>/AXI4Lite_Read_Y_DTC' incorporates:
   *  MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Read_Y_DTC = (uint16_T)rtb_AXI4Lite_Write_CMD_DTC;

  /* MATLABSystem: '<S8>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S8>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                PmodACL_IP_1_RegisterOffset_g3m, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S3>/AXI4Lite_Read_Z_DTC' incorporates:
   *  MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Read_Z_DTC = (uint16_T)rtb_AXI4Lite_Write_CMD_DTC;

  /* MATLABSystem: '<S6>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                PmodACL_IP_14a_RegisterOffset_g, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S3>/AXI4Lite_Read_XYZ_Valid_DTC' incorporates:
   *  MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  PmodACL_IP_14a_interface_B.AXI4Lite_Read_XYZ_Valid_DTC =
    (rtb_AXI4Lite_Write_CMD_DTC != 0U);

  /* End of Outputs for SubSystem: '<Root>/hdl_dut' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  PmodACL_IP_14a_interface_B.DataTypeConversion1 = (int16_T)
    rtb_DataTypeConversion;

  /* S-Function (scominttobit): '<Root>/Integer to Bit Converter1' */
  /* Integer to Bit Conversion */
  k = 16;
  u = PmodACL_IP_14a_interface_B.DataTypeConversion1;
  for (j = 0; j < 16; j++) {
    PmodACL_IP_14a_interface_B.IntegertoBitConverter1[k - 1] = (int16_T)(u & 1);
    u = (int32_T)((uint32_T)u >> 1);
    k--;
  }

  /* End of S-Function (scominttobit): '<Root>/Integer to Bit Converter1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  PmodACL_IP_14a_interface_B.DataTypeConversion2 = (int16_T)
    rtb_AXI4Lite_Read_Y_DTC;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  PmodACL_IP_14a_interface_B.DataTypeConversion3 = (int16_T)
    rtb_AXI4Lite_Read_Z_DTC;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.001s, 0.0s] */
    rtExtModeUpload(0, PmodACL_IP_14a_interface_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(PmodACL_IP_14a_interface_M)!=-1) &&
        !((rtmGetTFinal(PmodACL_IP_14a_interface_M)-
           PmodACL_IP_14a_interface_M->Timing.taskTime0) >
          PmodACL_IP_14a_interface_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(PmodACL_IP_14a_interface_M, "Simulation finished");
    }

    if (rtmGetStopRequested(PmodACL_IP_14a_interface_M)) {
      rtmSetErrorStatus(PmodACL_IP_14a_interface_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  PmodACL_IP_14a_interface_M->Timing.taskTime0 =
    (++PmodACL_IP_14a_interface_M->Timing.clockTick0) *
    PmodACL_IP_14a_interface_M->Timing.stepSize0;
}

/* Model initialize function */
void PmodACL_IP_14a_interface_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PmodACL_IP_14a_interface_M, 0,
                sizeof(RT_MODEL_PmodACL_IP_14a_inter_T));
  rtmSetTFinal(PmodACL_IP_14a_interface_M, -1);
  PmodACL_IP_14a_interface_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  PmodACL_IP_14a_interface_M->Sizes.checksums[0] = (3434857341U);
  PmodACL_IP_14a_interface_M->Sizes.checksums[1] = (370822799U);
  PmodACL_IP_14a_interface_M->Sizes.checksums[2] = (4103740162U);
  PmodACL_IP_14a_interface_M->Sizes.checksums[3] = (857452640U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    PmodACL_IP_14a_interface_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(PmodACL_IP_14a_interface_M->extModeInfo,
      &PmodACL_IP_14a_interface_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(PmodACL_IP_14a_interface_M->extModeInfo,
                        PmodACL_IP_14a_interface_M->Sizes.checksums);
    rteiSetTPtr(PmodACL_IP_14a_interface_M->extModeInfo, rtmGetTPtr
                (PmodACL_IP_14a_interface_M));
  }

  /* block I/O */
  (void) memset(((void *) &PmodACL_IP_14a_interface_B), 0,
                sizeof(B_PmodACL_IP_14a_interface_T));

  /* states (dwork) */
  (void) memset((void *)&PmodACL_IP_14a_interface_DW, 0,
                sizeof(DW_PmodACL_IP_14a_interface_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    PmodACL_IP_14a_interface_M->SpecialInfo.mappingInfo = (&dtInfo);
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

    /* Start for FromWorkspace: '<Root>/From Workspace' */
    {
      static real_T pTimeValues0[] = { 0.0, 0.001, 0.002, 0.003, 0.004, 0.005,
        0.006 } ;

      static real_T pDataValues0[] = { 11528.0, 11528.0, 11528.0, 12552.0,
        12552.0, 12552.0, 32768.0 } ;

      PmodACL_IP_14a_interface_DW.FromWorkspace_PWORK.TimePtr = (void *)
        pTimeValues0;
      PmodACL_IP_14a_interface_DW.FromWorkspace_PWORK.DataPtr = (void *)
        pDataValues0;
      PmodACL_IP_14a_interface_DW.FromWorkspace_IWORK.PrevIndex = 0;
    }

    /* Start for Atomic SubSystem: '<Root>/hdl_dut' */

    /* Start for MATLABSystem: '<S9>/AXI4-Interface Write' */
    PmodACL_IP_14a_interface_DW.obj_l.isInitialized = false;
    PmodACL_IP_14a_interface_DW.obj_l.isReleased = false;
    PmodACL_IP_14a_interface_DW.objisempty_n = true;
    PmodACL_IP_14a_interface_DW.obj_l.isInitialized = true;
    for (i = 0; i < 6; i++) {
      PmodACL_IP_14a_interface_DW.obj_l.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S10>/AXI4-Interface Write' */
    PmodACL_IP_14a_interface_DW.obj.isInitialized = false;
    PmodACL_IP_14a_interface_DW.obj.isReleased = false;
    PmodACL_IP_14a_interface_DW.objisempty = true;
    PmodACL_IP_14a_interface_DW.obj.isInitialized = true;
    for (i = 0; i < 6; i++) {
      PmodACL_IP_14a_interface_DW.obj.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S10>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S5>/AXI4-Interface Read' */
    PmodACL_IP_14a_interface_DW.obj_k.isInitialized = false;
    PmodACL_IP_14a_interface_DW.obj_k.isReleased = false;
    PmodACL_IP_14a_interface_DW.objisempty_p = true;
    PmodACL_IP_14a_interface_DW.obj_k.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S7>/AXI4-Interface Read' */
    PmodACL_IP_14a_interface_DW.obj_f.isInitialized = false;
    PmodACL_IP_14a_interface_DW.obj_f.isReleased = false;
    PmodACL_IP_14a_interface_DW.objisempty_j = true;
    PmodACL_IP_14a_interface_DW.obj_f.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S7>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S8>/AXI4-Interface Read' */
    PmodACL_IP_14a_interface_DW.obj_b.isInitialized = false;
    PmodACL_IP_14a_interface_DW.obj_b.isReleased = false;
    PmodACL_IP_14a_interface_DW.objisempty_l = true;
    PmodACL_IP_14a_interface_DW.obj_b.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S8>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S6>/AXI4-Interface Read' */
    PmodACL_IP_14a_interface_DW.obj_e.isInitialized = false;
    PmodACL_IP_14a_interface_DW.obj_e.isReleased = false;
    PmodACL_IP_14a_interface_DW.objisempty_jv = true;
    PmodACL_IP_14a_interface_DW.obj_e.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Read' */

    /* End of Start for SubSystem: '<Root>/hdl_dut' */
  }
}

/* Model terminate function */
void PmodACL_IP_14a_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/hdl_dut' */

  /* Start for MATLABSystem: '<S9>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S9>/AXI4-Interface Write'
   */
  if (PmodACL_IP_14a_interface_DW.obj_l.isInitialized) {
    PmodACL_IP_14a_interface_DW.obj_l.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S10>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S10>/AXI4-Interface Write'
   */
  if (PmodACL_IP_14a_interface_DW.obj.isInitialized) {
    PmodACL_IP_14a_interface_DW.obj.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S10>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S5>/AXI4-Interface Read'
   */
  if (PmodACL_IP_14a_interface_DW.obj_k.isInitialized) {
    PmodACL_IP_14a_interface_DW.obj_k.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S7>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S7>/AXI4-Interface Read'
   */
  if (PmodACL_IP_14a_interface_DW.obj_f.isInitialized) {
    PmodACL_IP_14a_interface_DW.obj_f.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S7>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S8>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  if (PmodACL_IP_14a_interface_DW.obj_b.isInitialized) {
    PmodACL_IP_14a_interface_DW.obj_b.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S8>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S6>/AXI4-Interface Read'
   */
  if (PmodACL_IP_14a_interface_DW.obj_e.isInitialized) {
    PmodACL_IP_14a_interface_DW.obj_e.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Read' */

  /* End of Terminate for SubSystem: '<Root>/hdl_dut' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
