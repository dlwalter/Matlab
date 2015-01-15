/*
 * gm_PWM_controller_interface.h
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
#ifndef RTW_HEADER_gm_PWM_controller_interface_h_
#define RTW_HEADER_gm_PWM_controller_interface_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef gm_PWM_controller_interface_COMMON_INCLUDES_
# define gm_PWM_controller_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* gm_PWM_controller_interface_COMMON_INCLUDES_ */

#include "gm_PWM_controller_interface_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
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
  boolean_T AXI4Lite_Read_PWM_DTC;     /* '<S3>/AXI4Lite_Read_PWM_DTC' */
} B_gm_PWM_controller_interface_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  void *AXI4Lite_Write_enable_PWORK;   /* '<S4>/AXI4Lite_Write_enable' */
  void *AXI4Lite_Write_duty_PWORK;     /* '<S4>/AXI4Lite_Write_duty' */
  void *AXI4Lite_Write_direction_PWORK;/* '<S4>/AXI4Lite_Write_direction' */
  zynq_AXIWrite_gm_PWM_controll_T obj; /* '<S4>/AXI4Lite_Write_enable' */
  zynq_AXIWrite_gm_PWM_controll_T obj_b;/* '<S4>/AXI4Lite_Write_duty' */
  zynq_AXIWrite_gm_PWM_controll_T obj_e;/* '<S4>/AXI4Lite_Write_direction' */
  boolean_T objisempty;                /* '<S4>/AXI4Lite_Write_enable' */
  boolean_T objisempty_o;              /* '<S4>/AXI4Lite_Write_duty' */
  boolean_T objisempty_g;              /* '<S4>/AXI4Lite_Write_direction' */
} DW_gm_PWM_controller_interfac_T;

/* Invariant block signals (auto storage) */
typedef struct {
  const uint32_T AXI4Lite_Write_enable_DTC;/* '<S4>/AXI4Lite_Write_enable_DTC' */
  const uint32_T AXI4Lite_Write_duty_DTC;/* '<S4>/AXI4Lite_Write_duty_DTC' */
  const uint32_T AXI4Lite_Write_direction_DT;/* '<S4>/AXI4Lite_Write_direction_DTC' */
  const uint8_T SliderGain;            /* '<S2>/Slider Gain' */
  const boolean_T AXI4Lite_Read_DIR_DTC;/* '<S3>/AXI4Lite_Read_DIR_DTC' */
} ConstB_gm_PWM_controller_inte_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
} ExtY_gm_PWM_controller_interf_T;

/* Real-time Model Data Structure */
struct tag_RTM_gm_PWM_controller_int_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
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

/* Block signals (auto storage) */
extern B_gm_PWM_controller_interface_T gm_PWM_controller_interface_B;

/* Block states (auto storage) */
extern DW_gm_PWM_controller_interfac_T gm_PWM_controller_interface_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_gm_PWM_controller_interf_T gm_PWM_controller_interface_Y;
extern const ConstB_gm_PWM_controller_inte_T gm_PWM_controller_interf_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void gm_PWM_controller_interface_initialize(void);
extern void gm_PWM_controller_interface_step(void);
extern void gm_PWM_controller_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_gm_PWM_controller_in_T *const gm_PWM_controller_interface_M;

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
 * '<Root>' : 'gm_PWM_controller_interface'
 * '<S1>'   : 'gm_PWM_controller_interface/PWM Controller'
 * '<S2>'   : 'gm_PWM_controller_interface/Slider Gain'
 * '<S3>'   : 'gm_PWM_controller_interface/PWM Controller/AXI4LiteRead'
 * '<S4>'   : 'gm_PWM_controller_interface/PWM Controller/AXI4LiteWrite'
 */
#endif                                 /* RTW_HEADER_gm_PWM_controller_interface_h_ */
