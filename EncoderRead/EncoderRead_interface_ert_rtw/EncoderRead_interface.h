/*
 * File: EncoderRead_interface.h
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

#ifndef RTW_HEADER_EncoderRead_interface_h_
#define RTW_HEADER_EncoderRead_interface_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef EncoderRead_interface_COMMON_INCLUDES_
# define EncoderRead_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* EncoderRead_interface_COMMON_INCLUDES_ */

#include "EncoderRead_interface_types.h"

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
  int32_T AXI4Lite_Read_count_DTC;     /* '<S2>/AXI4Lite_Read_count_DTC' */
} B_EncoderRead_interface_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  zynq_AXIWrite_EncoderRead_int_T obj; /* '<S6>/AXI4-Interface Write' */
  zynq_AXIWrite_EncoderRead_int_T obj_c;/* '<S5>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK;      /* '<S6>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_a;    /* '<S5>/AXI4-Interface Write' */
  void *AXI4InterfaceRead_PWORK;       /* '<S4>/AXI4-Interface Read' */
  zynq_AXIRead_EncoderRead_inte_T obj_b;/* '<S4>/AXI4-Interface Read' */
  boolean_T objisempty;                /* '<S6>/AXI4-Interface Write' */
  boolean_T objisempty_j;              /* '<S5>/AXI4-Interface Write' */
  boolean_T objisempty_k;              /* '<S4>/AXI4-Interface Read' */
} DW_EncoderRead_interface_T;

/* Parameters (auto storage) */
struct P_EncoderRead_interface_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_EncoderRead_interface_T {
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
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_EncoderRead_interface_T EncoderRead_interface_P;

/* Block signals (auto storage) */
extern B_EncoderRead_interface_T EncoderRead_interface_B;

/* Block states (auto storage) */
extern DW_EncoderRead_interface_T EncoderRead_interface_DW;

/* Model entry point functions */
extern void EncoderRead_interface_initialize(void);
extern void EncoderRead_interface_step(void);
extern void EncoderRead_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EncoderRead_interfac_T *const EncoderRead_interface_M;

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
 * '<Root>' : 'EncoderRead_interface'
 * '<S1>'   : 'EncoderRead_interface/dut_EncoderRead'
 * '<S2>'   : 'EncoderRead_interface/dut_EncoderRead/AXI4LiteRead'
 * '<S3>'   : 'EncoderRead_interface/dut_EncoderRead/AXI4LiteWrite'
 * '<S4>'   : 'EncoderRead_interface/dut_EncoderRead/AXI4LiteRead/AXI4Lite_Read_count'
 * '<S5>'   : 'EncoderRead_interface/dut_EncoderRead/AXI4LiteWrite/AXI4Lite_Write_enable'
 * '<S6>'   : 'EncoderRead_interface/dut_EncoderRead/AXI4LiteWrite/AXI4Lite_Write_reset'
 */
#endif                                 /* RTW_HEADER_EncoderRead_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
