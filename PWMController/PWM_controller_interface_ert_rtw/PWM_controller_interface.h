/*
 * File: PWM_controller_interface.h
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

#ifndef RTW_HEADER_PWM_controller_interface_h_
#define RTW_HEADER_PWM_controller_interface_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef PWM_controller_interface_COMMON_INCLUDES_
# define PWM_controller_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* PWM_controller_interface_COMMON_INCLUDES_ */

#include "PWM_controller_interface_types.h"

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
  boolean_T AXI4Lite_Read_PWM_DTC;     /* '<S3>/AXI4Lite_Read_PWM_DTC' */
} B_PWM_controller_interface_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  zynq_AXIWrite_PWM_controller__T obj; /* '<S7>/AXI4-Interface Write' */
  zynq_AXIWrite_PWM_controller__T obj_o;/* '<S6>/AXI4-Interface Write' */
  zynq_AXIWrite_PWM_controller__T obj_e;/* '<S5>/AXI4-Interface Write' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  void *AXI4InterfaceWrite_PWORK;      /* '<S7>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_h;    /* '<S6>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_k;    /* '<S5>/AXI4-Interface Write' */
  boolean_T objisempty;                /* '<S7>/AXI4-Interface Write' */
  boolean_T objisempty_b;              /* '<S6>/AXI4-Interface Write' */
  boolean_T objisempty_e;              /* '<S5>/AXI4-Interface Write' */
} DW_PWM_controller_interface_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
} ExtY_PWM_controller_interface_T;

/* Parameters (auto storage) */
struct P_PWM_controller_interface_T_ {
  uint8_T SliderGain_gain;             /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S2>/Slider Gain'
                                        */
  uint8_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  boolean_T Constant2_Value;           /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PWM_controller_interf_T {
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
extern P_PWM_controller_interface_T PWM_controller_interface_P;

/* Block signals (auto storage) */
extern B_PWM_controller_interface_T PWM_controller_interface_B;

/* Block states (auto storage) */
extern DW_PWM_controller_interface_T PWM_controller_interface_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_PWM_controller_interface_T PWM_controller_interface_Y;

/* Model entry point functions */
extern void PWM_controller_interface_initialize(void);
extern void PWM_controller_interface_step(void);
extern void PWM_controller_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PWM_controller_inter_T *const PWM_controller_interface_M;

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
 * '<Root>' : 'PWM_controller_interface'
 * '<S1>'   : 'PWM_controller_interface/PWM Controller'
 * '<S2>'   : 'PWM_controller_interface/Slider Gain'
 * '<S3>'   : 'PWM_controller_interface/PWM Controller/AXI4LiteRead'
 * '<S4>'   : 'PWM_controller_interface/PWM Controller/AXI4LiteWrite'
 * '<S5>'   : 'PWM_controller_interface/PWM Controller/AXI4LiteWrite/AXI4Lite_Write_direction'
 * '<S6>'   : 'PWM_controller_interface/PWM Controller/AXI4LiteWrite/AXI4Lite_Write_duty'
 * '<S7>'   : 'PWM_controller_interface/PWM Controller/AXI4LiteWrite/AXI4Lite_Write_enable'
 */
#endif                                 /* RTW_HEADER_PWM_controller_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
