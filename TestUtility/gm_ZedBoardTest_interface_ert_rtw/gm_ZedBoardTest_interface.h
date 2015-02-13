/*
 * File: gm_ZedBoardTest_interface.h
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

#ifndef RTW_HEADER_gm_ZedBoardTest_interface_h_
#define RTW_HEADER_gm_ZedBoardTest_interface_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef gm_ZedBoardTest_interface_COMMON_INCLUDES_
# define gm_ZedBoardTest_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* gm_ZedBoardTest_interface_COMMON_INCLUDES_ */

#include "gm_ZedBoardTest_interface_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  char_T table[128];
  boolean_T AXI4Lite_Read_read_back1_DTC;/* '<S2>/AXI4Lite_Read_read_back1_DTC' */
  boolean_T AXI4Lite_Read_read_back2_DTC;/* '<S2>/AXI4Lite_Read_read_back2_DTC' */
  boolean_T AXI4Lite_Read_read_back3_DTC;/* '<S2>/AXI4Lite_Read_read_back3_DTC' */
  boolean_T AXI4Lite_Read_read_back4_DTC;/* '<S2>/AXI4Lite_Read_read_back4_DTC' */
} B_gm_ZedBoardTest_interface_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  zynq_AXIWrite_gm_ZedBoardTest_T obj; /* '<S11>/AXI4-Interface Write' */
  zynq_AXIWrite_gm_ZedBoardTest_T obj_i;/* '<S10>/AXI4-Interface Write' */
  zynq_AXIWrite_gm_ZedBoardTest_T obj_n;/* '<S9>/AXI4-Interface Write' */
  zynq_AXIWrite_gm_ZedBoardTest_T obj_a;/* '<S8>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK;      /* '<S11>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_p;    /* '<S10>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_f;    /* '<S9>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_n;    /* '<S8>/AXI4-Interface Write' */
  void *AXI4InterfaceRead_PWORK;       /* '<S7>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_n;     /* '<S6>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_k;     /* '<S5>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_nm;    /* '<S4>/AXI4-Interface Read' */
  zynq_AXIRead_gm_ZedBoardTest__T obj_f;/* '<S7>/AXI4-Interface Read' */
  zynq_AXIRead_gm_ZedBoardTest__T obj_p;/* '<S6>/AXI4-Interface Read' */
  zynq_AXIRead_gm_ZedBoardTest__T obj_b;/* '<S5>/AXI4-Interface Read' */
  zynq_AXIRead_gm_ZedBoardTest__T obj_o;/* '<S4>/AXI4-Interface Read' */
  boolean_T objisempty;                /* '<S11>/AXI4-Interface Write' */
  boolean_T objisempty_j;              /* '<S10>/AXI4-Interface Write' */
  boolean_T objisempty_i;              /* '<S9>/AXI4-Interface Write' */
  boolean_T objisempty_ih;             /* '<S8>/AXI4-Interface Write' */
  boolean_T objisempty_g;              /* '<S7>/AXI4-Interface Read' */
  boolean_T objisempty_l;              /* '<S6>/AXI4-Interface Read' */
  boolean_T objisempty_k;              /* '<S5>/AXI4-Interface Read' */
  boolean_T objisempty_c;              /* '<S4>/AXI4-Interface Read' */
} DW_gm_ZedBoardTest_interface_T;

/* Parameters (auto storage) */
struct P_gm_ZedBoardTest_interface_T_ {
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch1'
                                        */
  uint8_T ManualSwitch2_CurrentSetting;/* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch2'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch3'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  boolean_T Constant2_Value;           /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  boolean_T Constant3_Value;           /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<Root>/Constant3'
                                        */
  boolean_T Constant4_Value;           /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  boolean_T Constant5_Value;           /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<Root>/Constant5'
                                        */
  boolean_T Constant6_Value;           /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<Root>/Constant6'
                                        */
  boolean_T Constant7_Value;           /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<Root>/Constant7'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_gm_ZedBoardTest_inter_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_gm_ZedBoardTest_interface_T gm_ZedBoardTest_interface_P;

/* Block signals (auto storage) */
extern B_gm_ZedBoardTest_interface_T gm_ZedBoardTest_interface_B;

/* Block states (auto storage) */
extern DW_gm_ZedBoardTest_interface_T gm_ZedBoardTest_interface_DW;

/* Model entry point functions */
extern void gm_ZedBoardTest_interface_initialize(void);
extern void gm_ZedBoardTest_interface_step(void);
extern void gm_ZedBoardTest_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_gm_ZedBoardTest_inte_T *const gm_ZedBoardTest_interface_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'gm_ZedBoardTest_interface'
 * '<S1>'   : 'gm_ZedBoardTest_interface/led_counter'
 * '<S2>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteRead'
 * '<S3>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteWrite'
 * '<S4>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteRead/AXI4Lite_Read_read_back1'
 * '<S5>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteRead/AXI4Lite_Read_read_back2'
 * '<S6>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteRead/AXI4Lite_Read_read_back3'
 * '<S7>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteRead/AXI4Lite_Read_read_back4'
 * '<S8>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteWrite/AXI4Lite_Write_in1'
 * '<S9>'   : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteWrite/AXI4Lite_Write_in2'
 * '<S10>'  : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteWrite/AXI4Lite_Write_in3'
 * '<S11>'  : 'gm_ZedBoardTest_interface/led_counter/AXI4LiteWrite/AXI4Lite_Write_in4'
 */
#endif                                 /* RTW_HEADER_gm_ZedBoardTest_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
