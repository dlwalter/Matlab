/*
 * File: PWM_controller_interface.c
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

#include "PWM_controller_interface.h"
#include "PWM_controller_interface_private.h"
#include "PWM_controller_interface_dt.h"
#define PWM_controlle_RegisterOffset_jk (256.0)
#define PWM_controller_RegisterOffset_j (260.0)
#define PWM_controller_i_RegisterOffset (264.0)

/* Block signals (auto storage) */
B_PWM_controller_interface_T PWM_controller_interface_B;

/* Block states (auto storage) */
DW_PWM_controller_interface_T PWM_controller_interface_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_PWM_controller_interface_T PWM_controller_interface_Y;

/* Real-time model */
RT_MODEL_PWM_controller_inter_T PWM_controller_interface_M_;
RT_MODEL_PWM_controller_inter_T *const PWM_controller_interface_M =
  &PWM_controller_interface_M_;
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
void PWM_controller_interface_step(void)
{
  char_T y[6];
  boolean_T bool_0;
  int32_T k;
  char_T b[6];
  uint8_T rtb_SliderGain;
  uint32_T rtb_AXI4Lite_Write_enable_DTC;
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
  int32_T exitg9;
  int32_T exitg10;
  int32_T exitg11;
  int32_T exitg12;

  /* Gain: '<S2>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  k = (int32_T)((uint32_T)PWM_controller_interface_P.SliderGain_gain *
                PWM_controller_interface_P.Constant1_Value);
  if ((uint32_T)k > 255U) {
    k = 255;
  }

  rtb_SliderGain = (uint8_T)k;

  /* End of Gain: '<S2>/Slider Gain' */

  /* Outputs for Atomic SubSystem: '<Root>/PWM Controller' */

  /* DataTypeConversion: '<S4>/AXI4Lite_Write_enable_DTC' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_AXI4Lite_Write_enable_DTC = PWM_controller_interface_P.Constant_Value;

  /* Start for MATLABSystem: '<S7>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S7>/AXI4-Interface Write'
   */
  memcpy(&PWM_controller_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = PWM_controller_interface_B.table[(uint8_T)
      PWM_controller_interface_DW.obj.dTypeIn[k] & 127];
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

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_enable_DTC, (uint32_T)
                 PWM_controlle_RegisterOffset_jk, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S7>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S4>/AXI4Lite_Write_duty_DTC' */
  rtb_AXI4Lite_Write_enable_DTC = rtb_SliderGain;

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S6>/AXI4-Interface Write'
   */
  memcpy(&PWM_controller_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = PWM_controller_interface_B.table[(uint8_T)
      PWM_controller_interface_DW.obj_o.dTypeIn[k] & 127];
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

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_enable_DTC, (uint32_T)
                 PWM_controller_RegisterOffset_j, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S4>/AXI4Lite_Write_direction_DTC' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  rtb_AXI4Lite_Write_enable_DTC = PWM_controller_interface_P.Constant2_Value;

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Write' incorporates:
   *  MATLABSystem: '<S5>/AXI4-Interface Write'
   */
  memcpy(&PWM_controller_interface_B.table[0], &tmp[0], sizeof(char_T) << 7U);
  for (k = 0; k < 6; k++) {
    y[k] = PWM_controller_interface_B.table[(uint8_T)
      PWM_controller_interface_DW.obj_e.dTypeIn[k] & 127];
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

  AXI4LITE_WRITE(&rtb_AXI4Lite_Write_enable_DTC, (uint32_T)
                 PWM_controller_i_RegisterOffset, 1.0, (uint32_T)(int32_T)
                 rt_roundd_snf((real_T)k), 0U);

  /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Write' */

  /* DataTypeConversion: '<S3>/AXI4Lite_Read_PWM_DTC' */
  PWM_controller_interface_B.AXI4Lite_Read_PWM_DTC = false;

  /* End of Outputs for SubSystem: '<Root>/PWM Controller' */

  /* Outport: '<Root>/Out1' */
  PWM_controller_interface_Y.Out1 =
    PWM_controller_interface_B.AXI4Lite_Read_PWM_DTC;

  /* Outport: '<Root>/Out2' */
  PWM_controller_interface_Y.Out2 = false;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [1.0s, 0.0s] */
    rtExtModeUpload(0, PWM_controller_interface_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(PWM_controller_interface_M)!=-1) &&
        !((rtmGetTFinal(PWM_controller_interface_M)-
           PWM_controller_interface_M->Timing.taskTime0) >
          PWM_controller_interface_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(PWM_controller_interface_M, "Simulation finished");
    }

    if (rtmGetStopRequested(PWM_controller_interface_M)) {
      rtmSetErrorStatus(PWM_controller_interface_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  PWM_controller_interface_M->Timing.taskTime0 =
    (++PWM_controller_interface_M->Timing.clockTick0) *
    PWM_controller_interface_M->Timing.stepSize0;
}

/* Model initialize function */
void PWM_controller_interface_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)PWM_controller_interface_M, 0,
                sizeof(RT_MODEL_PWM_controller_inter_T));
  rtmSetTFinal(PWM_controller_interface_M, -1);
  PWM_controller_interface_M->Timing.stepSize0 = 1.0;

  /* External mode info */
  PWM_controller_interface_M->Sizes.checksums[0] = (2940852863U);
  PWM_controller_interface_M->Sizes.checksums[1] = (2442692735U);
  PWM_controller_interface_M->Sizes.checksums[2] = (460798138U);
  PWM_controller_interface_M->Sizes.checksums[3] = (2853517658U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    PWM_controller_interface_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(PWM_controller_interface_M->extModeInfo,
      &PWM_controller_interface_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(PWM_controller_interface_M->extModeInfo,
                        PWM_controller_interface_M->Sizes.checksums);
    rteiSetTPtr(PWM_controller_interface_M->extModeInfo, rtmGetTPtr
                (PWM_controller_interface_M));
  }

  /* block I/O */
  (void) memset(((void *) &PWM_controller_interface_B), 0,
                sizeof(B_PWM_controller_interface_T));

  /* states (dwork) */
  (void) memset((void *)&PWM_controller_interface_DW, 0,
                sizeof(DW_PWM_controller_interface_T));

  /* external outputs */
  (void) memset((void *)&PWM_controller_interface_Y, 0,
                sizeof(ExtY_PWM_controller_interface_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    PWM_controller_interface_M->SpecialInfo.mappingInfo = (&dtInfo);
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
    static const char_T tmp[6] = { 'u', 'i', 'n', 't', '3', '2' };

    static const char_T tmp_0[13] = { '/', 'd', 'e', 'v', '/', 'm', 'w', 'i',
      'p', 'c', 'o', 'r', 'e' };

    int32_T i;

    /* Start for Atomic SubSystem: '<Root>/PWM Controller' */

    /* Start for MATLABSystem: '<S7>/AXI4-Interface Write' */
    PWM_controller_interface_DW.obj.isInitialized = false;
    PWM_controller_interface_DW.obj.isReleased = false;
    PWM_controller_interface_DW.objisempty = true;
    PWM_controller_interface_DW.obj.isInitialized = true;
    for (i = 0; i < 6; i++) {
      PWM_controller_interface_DW.obj.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S7>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S6>/AXI4-Interface Write' */
    PWM_controller_interface_DW.obj_o.isInitialized = false;
    PWM_controller_interface_DW.obj_o.isReleased = false;
    PWM_controller_interface_DW.objisempty_b = true;
    PWM_controller_interface_DW.obj_o.isInitialized = true;
    for (i = 0; i < 6; i++) {
      PWM_controller_interface_DW.obj_o.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Write' */

    /* Start for MATLABSystem: '<S5>/AXI4-Interface Write' */
    PWM_controller_interface_DW.obj_e.isInitialized = false;
    PWM_controller_interface_DW.obj_e.isReleased = false;
    PWM_controller_interface_DW.objisempty_e = true;
    PWM_controller_interface_DW.obj_e.isInitialized = true;
    for (i = 0; i < 6; i++) {
      PWM_controller_interface_DW.obj_e.dTypeIn[i] = tmp[i];
    }

    for (i = 0; i < 13; i++) {
      nullTermName[i] = tmp_0[i];
    }

    nullTermName[13] = '\x00';
    AXI4LITE_INIT(nullTermName);

    /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Write' */

    /* End of Start for SubSystem: '<Root>/PWM Controller' */
  }
}

/* Model terminate function */
void PWM_controller_interface_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/PWM Controller' */

  /* Start for MATLABSystem: '<S7>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S7>/AXI4-Interface Write'
   */
  if (PWM_controller_interface_DW.obj.isInitialized) {
    PWM_controller_interface_DW.obj.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S7>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S6>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S6>/AXI4-Interface Write'
   */
  if (PWM_controller_interface_DW.obj_o.isInitialized) {
    PWM_controller_interface_DW.obj_o.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S6>/AXI4-Interface Write' */

  /* Start for MATLABSystem: '<S5>/AXI4-Interface Write' incorporates:
   *  Terminate for MATLABSystem: '<S5>/AXI4-Interface Write'
   */
  if (PWM_controller_interface_DW.obj_e.isInitialized) {
    PWM_controller_interface_DW.obj_e.isReleased = true;
    AXI4LITE_TERMINATE();
  }

  /* End of Start for MATLABSystem: '<S5>/AXI4-Interface Write' */

  /* End of Terminate for SubSystem: '<Root>/PWM Controller' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
