/*
 * File: BasicQuadrotorControl_interface.c
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
#include "BasicQuadrotorControl_interface_dt.h"
#define BasicQ_RegisterOffset_edis0x25o (288.0)
#define BasicQu_RegisterOffset_edis0x25 (280.0)
#define BasicQua_RegisterOffset_edis0x2 (292.0)
#define BasicQuad_RegisterOffset_edis0x (284.0)
#define BasicQuadr_RegisterOffset_edis0 (260.0)
#define BasicQuadro_RegisterOffset_edis (256.0)
#define BasicQuadrot_RegisterOffset_edi (272.0)
#define BasicQuadroto_RegisterOffset_ed (268.0)
#define BasicQuadrotorCo_RegisterOffset (264.0)
#define BasicQuadrotor_RegisterOffset_e (276.0)

/* Block signals (auto storage) */
B_BasicQuadrotorControl_inter_T BasicQuadrotorControl_interfa_B;

/* Block states (auto storage) */
DW_BasicQuadrotorControl_inte_T BasicQuadrotorControl_interf_DW;

/* Real-time model */
RT_MODEL_BasicQuadrotorContro_T BasicQuadrotorControl_interf_M_;
RT_MODEL_BasicQuadrotorContro_T *const BasicQuadrotorControl_interf_M =
  &BasicQuadrotorControl_interf_M_;
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
void BasicQuadrotorControl_interface_step(void)
{
  /* local block i/o variables */
  real_T rtb_Switch;
  char_T y[6];
  boolean_T bool_0;
  int32_T k;
  char_T b[6];
  uint16_T rtb_DataTypeConversion;
  uint8_T rtb_SliderGain;
  uint8_T rtb_SliderGain_f;
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
  int32_T exitg9;
  int32_T exitg10;
  int32_T exitg11;
  int32_T exitg12;
  int32_T exitg13;
  int32_T exitg14;
  int32_T exitg15;
  int32_T exitg16;
  int32_T exitg17;
  int32_T exitg18;
  int32_T exitg19;
  int32_T exitg20;
  int32_T exitg21;
  int32_T exitg22;
  int32_T exitg23;
  int32_T exitg24;

  /* FromWorkspace: '<S1>/From Workspace' */
  {
    real_T t = BasicQuadrotorControl_interf_M->Timing.taskTime0;
    real_T *pTimeValues = (real_T *)
      BasicQuadrotorControl_interf_DW.FromWorkspace_PWORK.TimePtr;
    real_T *pDataValues = (real_T *)
      BasicQuadrotorControl_interf_DW.FromWorkspace_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      rtb_Switch = 0.0;
    } else if (t == pTimeValues[6]) {
      rtb_Switch = pDataValues[6];
    } else if (t > pTimeValues[6]) {
      rtb_Switch = 0.0;
    } else {
      int_T currTimeIndex =
        BasicQuadrotorControl_interf_DW.FromWorkspace_IWORK.PrevIndex;
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
      BasicQuadrotorControl_interf_DW.FromWorkspace_IWORK.PrevIndex =
        currTimeIndex;
    }
  }

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S5>/Compare'
   */
  if (rtb_Switch == BasicQuadrotorControl_interfa_P.Constant_Value) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S1>/Constant2'
     */
    if (BasicQuadrotorControl_interfa_P.ManualSwitch_CurrentSetting == 1) {
      rtb_Switch = BasicQuadrotorControl_interfa_P.READ_CMD;
    } else {
      rtb_Switch = BasicQuadrotorControl_interfa_P.DATA_FORMAT;
    }

    /* End of ManualSwitch: '<S1>/Manual Switch' */
  }

  /* End of Switch: '<S1>/Switch' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  tmp_4 = floor(rtb_Switch);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_4 = 0.0;
  } else {
    tmp_4 = fmod(tmp_4, 65536.0);
  }

  rtb_DataTypeConversion = (uint16_T)(tmp_4 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
                                      (uint16_T)-tmp_4 : (int32_T)(uint16_T)
    tmp_4);

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* Gain: '<S2>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  k = (int32_T)((uint32_T)BasicQuadrotorControl_interfa_P.SliderGain_gain *
                BasicQuadrotorControl_interfa_P.Constant2_Value);
  if ((uint32_T)k > 255U) {
    k = 255;
  }

  rtb_SliderGain = (uint8_T)k;

  /* End of Gain: '<S2>/Slider Gain' */

  /* Gain: '<S3>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  k = (int32_T)((uint32_T)BasicQuadrotorControl_interfa_P.SliderGain1_gain *
                BasicQuadrotorControl_interfa_P.Constant3_Value);
  if ((uint32_T)k > 255U) {
    k = 255;
  }

  rtb_SliderGain_f = (uint8_T)k;

  /* End of Gain: '<S3>/Slider Gain' */

  /* Outputs for Atomic SubSystem: '<Root>/hdl_dut' */

  /* DataTypeConversion: '<S7>/AXI4Lite_Write_CMD_DTC' */
  rtb_AXI4Lite_Write_CMD_DTC = rtb_DataTypeConversion;

  /* Start for MATLABSystem: '<S12>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S12>/AXI4-Interface Write'
   */
  memcpy(&BasicQuadrotorControl_interfa_B.table[0], &tmp[0], sizeof(char_T) <<
         7U);
  for (k = 0; k < 6; k++) {
    y[k] = BasicQuadrotorControl_interfa_B.table[(uint8_T)
      BasicQuadrotorControl_interf_DW.obj_a.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  bool_0 = false;
  k = 0;
  do {
    exitg24 = 0;
    if (k < 6) {
      if (y[k] != b[k]) {
        exitg24 = 1;
      } else {
        k++;
      }
    } else {
      bool_0 = true;
      exitg24 = 1;
    }
  } while (exitg24 == 0);

  if (bool_0) {
    k = 0;
  } else {
    for (k = 0; k < 6; k++) {
      b[k] = tmp_1[k];
    }

    k = 0;
    do {
      exitg23 = 0;
      if (k < 6) {
        if (y[k] != b[k]) {
          exitg23 = 1;
        } else {
          k++;
        }
      } else {
        bool_0 = true;
        exitg23 = 1;
      }
    } while (exitg23 == 0);

    if (bool_0) {
      k = 1;
    } else {
      for (k = 0; k < 6; k++) {
        b[k] = tmp_2[k];
      }

      k = 0;
      do {
        exitg22 = 0;
        if (k < 6) {
          if (y[k] != b[k]) {
            exitg22 = 1;
          } else {
            k++;
          }
        } else {
          bool_0 = true;
          exitg22 = 1;
        }
      } while (exitg22 == 0);

      if (bool_0) {
        k = 5;
      } else {
        for (k = 0; k < 6; k++) {
          b[k] = tmp_3[k];
        }

        k = 0;
        do {
          exitg21 = 0;
          if (k < 6) {
            if (y[k] != b[k]) {
              exitg21 = 1;
            } else {
              k++;
            }
          } else {
            bool_0 = true;
            exitg21 = 1;
          }
        } while (exitg21 == 0);

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
                 BasicQuadro_RegisterOffset_edis, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S12>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S7>/AXI4Lite_Write_CMD_VLD_DTC' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp_4 = floor(BasicQuadrotorControl_interfa_P.Constant1_Value);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_4 = 0.0;
  } else {
    tmp_4 = fmod(tmp_4, 4.294967296E+9);
  }

  rtb_AXI4Lite_Write_CMD_DTC = tmp_4 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)
    -tmp_4 : (uint32_T)tmp_4;

  /* End of DataTypeConversion: '<S7>/AXI4Lite_Write_CMD_VLD_DTC' */

  /* Start for MATLABSystem: '<S13>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S13>/AXI4-Interface Write'
   */
  memcpy(&BasicQuadrotorControl_interfa_B.table[0], &tmp[0], sizeof(char_T) <<
         7U);
  for (k = 0; k < 6; k++) {
    y[k] = BasicQuadrotorControl_interfa_B.table[(uint8_T)
      BasicQuadrotorControl_interf_DW.obj_m.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  bool_0 = false;
  k = 0;
  do {
    exitg20 = 0;
    if (k < 6) {
      if (y[k] != b[k]) {
        exitg20 = 1;
      } else {
        k++;
      }
    } else {
      bool_0 = true;
      exitg20 = 1;
    }
  } while (exitg20 == 0);

  if (bool_0) {
    k = 0;
  } else {
    for (k = 0; k < 6; k++) {
      b[k] = tmp_1[k];
    }

    k = 0;
    do {
      exitg19 = 0;
      if (k < 6) {
        if (y[k] != b[k]) {
          exitg19 = 1;
        } else {
          k++;
        }
      } else {
        bool_0 = true;
        exitg19 = 1;
      }
    } while (exitg19 == 0);

    if (bool_0) {
      k = 1;
    } else {
      for (k = 0; k < 6; k++) {
        b[k] = tmp_2[k];
      }

      k = 0;
      do {
        exitg18 = 0;
        if (k < 6) {
          if (y[k] != b[k]) {
            exitg18 = 1;
          } else {
            k++;
          }
        } else {
          bool_0 = true;
          exitg18 = 1;
        }
      } while (exitg18 == 0);

      if (bool_0) {
        k = 5;
      } else {
        for (k = 0; k < 6; k++) {
          b[k] = tmp_3[k];
        }

        k = 0;
        do {
          exitg17 = 0;
          if (k < 6) {
            if (y[k] != b[k]) {
              exitg17 = 1;
            } else {
              k++;
            }
          } else {
            bool_0 = true;
            exitg17 = 1;
          }
        } while (exitg17 == 0);

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
                 BasicQuadr_RegisterOffset_edis0, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S13>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S7>/AXI4Lite_Write_en_motor1_DTC' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_AXI4Lite_Write_CMD_DTC = BasicQuadrotorControl_interfa_P.Constant_Value_a;

  /* Start for MATLABSystem: '<S16>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S16>/AXI4-Interface Write'
   */
  memcpy(&BasicQuadrotorControl_interfa_B.table[0], &tmp[0], sizeof(char_T) <<
         7U);
  for (k = 0; k < 6; k++) {
    y[k] = BasicQuadrotorControl_interfa_B.table[(uint8_T)
      BasicQuadrotorControl_interf_DW.obj_i.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  bool_0 = false;
  k = 0;
  do {
    exitg16 = 0;
    if (k < 6) {
      if (y[k] != b[k]) {
        exitg16 = 1;
      } else {
        k++;
      }
    } else {
      bool_0 = true;
      exitg16 = 1;
    }
  } while (exitg16 == 0);

  if (bool_0) {
    k = 0;
  } else {
    for (k = 0; k < 6; k++) {
      b[k] = tmp_1[k];
    }

    k = 0;
    do {
      exitg15 = 0;
      if (k < 6) {
        if (y[k] != b[k]) {
          exitg15 = 1;
        } else {
          k++;
        }
      } else {
        bool_0 = true;
        exitg15 = 1;
      }
    } while (exitg15 == 0);

    if (bool_0) {
      k = 1;
    } else {
      for (k = 0; k < 6; k++) {
        b[k] = tmp_2[k];
      }

      k = 0;
      do {
        exitg14 = 0;
        if (k < 6) {
          if (y[k] != b[k]) {
            exitg14 = 1;
          } else {
            k++;
          }
        } else {
          bool_0 = true;
          exitg14 = 1;
        }
      } while (exitg14 == 0);

      if (bool_0) {
        k = 5;
      } else {
        for (k = 0; k < 6; k++) {
          b[k] = tmp_3[k];
        }

        k = 0;
        do {
          exitg13 = 0;
          if (k < 6) {
            if (y[k] != b[k]) {
              exitg13 = 1;
            } else {
              k++;
            }
          } else {
            bool_0 = true;
            exitg13 = 1;
          }
        } while (exitg13 == 0);

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
                 BasicQu_RegisterOffset_edis0x25, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S16>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S7>/AXI4Lite_Write_duty_motor1_DTC' */
  rtb_AXI4Lite_Write_CMD_DTC = rtb_SliderGain;

  /* Start for MATLABSystem: '<S14>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S14>/AXI4-Interface Write'
   */
  memcpy(&BasicQuadrotorControl_interfa_B.table[0], &tmp[0], sizeof(char_T) <<
         7U);
  for (k = 0; k < 6; k++) {
    y[k] = BasicQuadrotorControl_interfa_B.table[(uint8_T)
      BasicQuadrotorControl_interf_DW.obj_o.dTypeIn[k] & 127];
    b[k] = tmp_0[k];
  }

  bool_0 = false;
  k = 0;
  do {
    exitg12 = 0;
    if (k < 6) {
      if (y[k] != b[k]) {
        exitg12 = 1;
      } else {
        k++;
      }
    } else {
      bool_0 = true;
      exitg12 = 1;
    }
  } while (exitg12 == 0);

  if (bool_0) {
    k = 0;
  } else {
    for (k = 0; k < 6; k++) {
      b[k] = tmp_1[k];
    }

    k = 0;
    do {
      exitg11 = 0;
      if (k < 6) {
        if (y[k] != b[k]) {
          exitg11 = 1;
        } else {
          k++;
        }
      } else {
        bool_0 = true;
        exitg11 = 1;
      }
    } while (exitg11 == 0);

    if (bool_0) {
      k = 1;
    } else {
      for (k = 0; k < 6; k++) {
        b[k] = tmp_2[k];
      }

      k = 0;
      do {
        exitg10 = 0;
        if (k < 6) {
          if (y[k] != b[k]) {
            exitg10 = 1;
          } else {
            k++;
          }
        } else {
          bool_0 = true;
          exitg10 = 1;
        }
      } while (exitg10 == 0);

      if (bool_0) {
        k = 5;
      } else {
        for (k = 0; k < 6; k++) {
          b[k] = tmp_3[k];
        }

        k = 0;
        do {
          exitg9 = 0;
          if (k < 6) {
            if (y[k] != b[k]) {
              exitg9 = 1;
            } else {
              k++;
            }
          } else {
            bool_0 = true;
            exitg9 = 1;
          }
        } while (exitg9 == 0);

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
                 BasicQuad_RegisterOffset_edis0x, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S14>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S7>/AXI4Lite_Write_en_motor2_DTC' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_AXI4Lite_Write_CMD_DTC = BasicQuadrotorControl_interfa_P.Constant_Value_a;

  /* Start for MATLABSystem: '<S17>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S17>/AXI4-Interface Write'
   */
  memcpy(&BasicQuadrotorControl_interfa_B.table[0], &tmp[0], sizeof(char_T) <<
         7U);
  for (k = 0; k < 6; k++) {
    y[k] = BasicQuadrotorControl_interfa_B.table[(uint8_T)
      BasicQuadrotorControl_interf_DW.obj.dTypeIn[k] & 127];
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
                 BasicQ_RegisterOffset_edis0x25o, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S17>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S7>/AXI4Lite_Write_duty_motor2_DTC' */
  rtb_AXI4Lite_Write_CMD_DTC = rtb_SliderGain_f;

  /* Start for MATLABSystem: '<S15>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S15>/AXI4-Interface Write'
   */
  memcpy(&BasicQuadrotorControl_interfa_B.table[0], &tmp[0], sizeof(char_T) <<
         7U);
  for (k = 0; k < 6; k++) {
    y[k] = BasicQuadrotorControl_interfa_B.table[(uint8_T)
      BasicQuadrotorControl_interf_DW.obj_k.dTypeIn[k] & 127];
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
                 BasicQua_RegisterOffset_edis0x2, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S15>/AXI4-Interface Write' */

  /* MATLABSystem: '<S8>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S8>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                BasicQuadrotorCo_RegisterOffset, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S6>/AXI4Lite_Read_X_DTC' incorporates:
   *  MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  rtb_DataTypeConversion = (uint16_T)rtb_AXI4Lite_Write_CMD_DTC;

  /* MATLABSystem: '<S10>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S10>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S10>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S10>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                BasicQuadroto_RegisterOffset_ed, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S6>/AXI4Lite_Read_Y_DTC' incorporates:
   *  MATLABSystem: '<S10>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Read_Y_DTC = (uint16_T)rtb_AXI4Lite_Write_CMD_DTC;

  /* MATLABSystem: '<S11>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S11>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S11>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S11>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                BasicQuadrot_RegisterOffset_edi, 1.0, 8U, 0U);

  /* DataTypeConversion: '<S6>/AXI4Lite_Read_Z_DTC' incorporates:
   *  MATLABSystem: '<S11>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Read_Z_DTC = (uint16_T)rtb_AXI4Lite_Write_CMD_DTC;

  /* MATLABSystem: '<S9>/AXI4-Interface Read' incorporates:
   *  Start for MATLABSystem: '<S9>/AXI4-Interface Read'
   */
  rtb_AXI4Lite_Write_CMD_DTC = 0U;

  /* Start for MATLABSystem: '<S9>/AXI4-Interface Read' incorporates:
   *  MATLABSystem: '<S9>/AXI4-Interface Read'
   */
  AXI4LITE_READ(&rtb_AXI4Lite_Write_CMD_DTC, (uint32_T)
                BasicQuadrotor_RegisterOffset_e, 1.0, 8U, 0U);

  /* End of Outputs for SubSystem: '<Root>/hdl_dut' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  BasicQuadrotorControl_interfa_B.DataTypeConversion1 = (int16_T)
    rtb_DataTypeConversion;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  BasicQuadrotorControl_interfa_B.DataTypeConversion2 = (int16_T)
    rtb_AXI4Lite_Read_Y_DTC;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  BasicQuadrotorControl_interfa_B.DataTypeConversion3 = (int16_T)
    rtb_AXI4Lite_Read_Z_DTC;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.001s, 0.0s] */
    rtExtModeUpload(0, BasicQuadrotorControl_interf_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(BasicQuadrotorControl_interf_M)!=-1) &&
        !((rtmGetTFinal(BasicQuadrotorControl_interf_M)-
           BasicQuadrotorControl_interf_M->Timing.taskTime0) >
          BasicQuadrotorControl_interf_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(BasicQuadrotorControl_interf_M, "Simulation finished");
    }

    if (rtmGetStopRequested(BasicQuadrotorControl_interf_M)) {
      rtmSetErrorStatus(BasicQuadrotorControl_interf_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  BasicQuadrotorControl_interf_M->Timing.taskTime0 =
    (++BasicQuadrotorControl_interf_M->Timing.clockTick0) *
    BasicQuadrotorControl_interf_M->Timing.stepSize0;
}

/* Model initialize function */
void BasicQuadrotorControl_interface_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BasicQuadrotorControl_interf_M, 0,
                sizeof(RT_MODEL_BasicQuadrotorContro_T));
  rtmSetTFinal(BasicQuadrotorControl_interf_M, -1);
  BasicQuadrotorControl_interf_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  BasicQuadrotorControl_interf_M->Sizes.checksums[0] = (2679520925U);
  BasicQuadrotorControl_interf_M->Sizes.checksums[1] = (1793356409U);
  BasicQuadrotorControl_interf_M->Sizes.checksums[2] = (1069814306U);
  BasicQuadrotorControl_interf_M->Sizes.checksums[3] = (2421925669U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[15];
    BasicQuadrotorControl_interf_M->extModeInfo = (&rt_ExtModeInfo);
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
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(BasicQuadrotorControl_interf_M->extModeInfo,
      &BasicQuadrotorControl_interf_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(BasicQuadrotorControl_interf_M->extModeInfo,
                        BasicQuadrotorControl_interf_M->Sizes.checksums);
    rteiSetTPtr(BasicQuadrotorControl_interf_M->extModeInfo, rtmGetTPtr
                (BasicQuadrotorControl_interf_M));
  }

  /* block I/O */
  (void) memset(((void *) &BasicQuadrotorControl_interfa_B), 0,
                sizeof(B_BasicQuadrotorControl_inter_T));

  /* states (dwork) */
  (void) memset((void *)&BasicQuadrotorControl_interf_DW, 0,
                sizeof(DW_BasicQuadrotorControl_inte_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    BasicQuadrotorControl_interf_M->SpecialInfo.mappingInfo = (&dtInfo);
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

    /* Start for FromWorkspace: '<S1>/From Workspace' */
    {
      static real_T pTimeValues0[] = { 0.0, 0.001, 0.002, 0.003, 0.004, 0.005,
        0.006 } ;

      static real_T pDataValues0[] = { 11528.0, 11528.0, 11528.0, 12552.0,
        12552.0, 12552.0, 32768.0 } ;

      BasicQuadrotorControl_interf_DW.FromWorkspace_PWORK.TimePtr = (void *)
        pTimeValues0;
      BasicQuadrotorControl_interf_DW.FromWorkspace_PWORK.DataPtr = (void *)
        pDataValues0;
      BasicQuadrotorControl_interf_DW.FromWorkspace_IWORK.PrevIndex = 0;
    }

    /* Start for Atomic SubSystem: '<Root>/hdl_dut' */

    /* Start for MATLABSystem: '<S12>/AXI4-Interface Write' */
    BasicQuadrotorControl_interf_DW.obj_a.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_a.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_e = true;
    BasicQuadrotorControl_interf_DW.obj_a.isInitialized = true;
    for (i = 0; i < 6; i++) {
      BasicQuadrotorControl_interf_DW.obj_a.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S12>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S13>/AXI4-Interface Write' */
    BasicQuadrotorControl_interf_DW.obj_m.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_m.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_o = true;
    BasicQuadrotorControl_interf_DW.obj_m.isInitialized = true;
    for (i = 0; i < 6; i++) {
      BasicQuadrotorControl_interf_DW.obj_m.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S13>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S16>/AXI4-Interface Write' */
    BasicQuadrotorControl_interf_DW.obj_i.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_i.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_f = true;
    BasicQuadrotorControl_interf_DW.obj_i.isInitialized = true;
    for (i = 0; i < 6; i++) {
      BasicQuadrotorControl_interf_DW.obj_i.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S16>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S14>/AXI4-Interface Write' */
    BasicQuadrotorControl_interf_DW.obj_o.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_o.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_l = true;
    BasicQuadrotorControl_interf_DW.obj_o.isInitialized = true;
    for (i = 0; i < 6; i++) {
      BasicQuadrotorControl_interf_DW.obj_o.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S14>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S17>/AXI4-Interface Write' */
    BasicQuadrotorControl_interf_DW.obj.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty = true;
    BasicQuadrotorControl_interf_DW.obj.isInitialized = true;
    for (i = 0; i < 6; i++) {
      BasicQuadrotorControl_interf_DW.obj.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S17>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S15>/AXI4-Interface Write' */
    BasicQuadrotorControl_interf_DW.obj_k.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_k.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_p = true;
    BasicQuadrotorControl_interf_DW.obj_k.isInitialized = true;
    for (i = 0; i < 6; i++) {
      BasicQuadrotorControl_interf_DW.obj_k.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S15>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S8>/AXI4-Interface Read' */
    BasicQuadrotorControl_interf_DW.obj_l.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_l.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_fl = true;
    BasicQuadrotorControl_interf_DW.obj_l.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S8>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S10>/AXI4-Interface Read' */
    BasicQuadrotorControl_interf_DW.obj_g.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_g.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_d = true;
    BasicQuadrotorControl_interf_DW.obj_g.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S10>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S11>/AXI4-Interface Read' */
    BasicQuadrotorControl_interf_DW.obj_kl.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_kl.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_px = true;
    BasicQuadrotorControl_interf_DW.obj_kl.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S11>/AXI4-Interface Read' */

    /* Start for MATLABSystem: '<S9>/AXI4-Interface Read' */
    BasicQuadrotorControl_interf_DW.obj_i1.isInitialized = false;
    BasicQuadrotorControl_interf_DW.obj_i1.isReleased = false;
    BasicQuadrotorControl_interf_DW.objisempty_or = true;
    BasicQuadrotorControl_interf_DW.obj_i1.isInitialized = true;
    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Read' */

    /* End of Start for SubSystem: '<Root>/hdl_dut' */
  }
}

/* Model terminate function */
void BasicQuadrotorControl_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/hdl_dut' */

  /* Start for MATLABSystem: '<S12>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S12>/AXI4-Interface Write'
   */
  if (BasicQuadrotorControl_interf_DW.obj_a.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_a.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S12>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S13>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S13>/AXI4-Interface Write'
   */
  if (BasicQuadrotorControl_interf_DW.obj_m.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_m.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S13>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S16>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S16>/AXI4-Interface Write'
   */
  if (BasicQuadrotorControl_interf_DW.obj_i.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_i.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S16>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S14>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S14>/AXI4-Interface Write'
   */
  if (BasicQuadrotorControl_interf_DW.obj_o.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_o.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S14>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S17>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S17>/AXI4-Interface Write'
   */
  if (BasicQuadrotorControl_interf_DW.obj.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S17>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S15>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S15>/AXI4-Interface Write'
   */
  if (BasicQuadrotorControl_interf_DW.obj_k.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_k.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S15>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S8>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S8>/AXI4-Interface Read'
   */
  if (BasicQuadrotorControl_interf_DW.obj_l.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_l.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S8>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S10>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S10>/AXI4-Interface Read'
   */
  if (BasicQuadrotorControl_interf_DW.obj_g.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_g.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S10>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S11>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S11>/AXI4-Interface Read'
   */
  if (BasicQuadrotorControl_interf_DW.obj_kl.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_kl.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S11>/AXI4-Interface Read' */

  /* Start for MATLABSystem: '<S9>/AXI4-Interface Read' incorporates:
   *  Terminate for MATLABSystem: '<S9>/AXI4-Interface Read'
   */
  if (BasicQuadrotorControl_interf_DW.obj_i1.isInitialized) {
    BasicQuadrotorControl_interf_DW.obj_i1.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S9>/AXI4-Interface Read' */

  /* End of Terminate for SubSystem: '<Root>/hdl_dut' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
