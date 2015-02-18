/*
 * File: BasicQuadrotorControl_interface.h
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

#ifndef RTW_HEADER_BasicQuadrotorControl_interface_h_
#define RTW_HEADER_BasicQuadrotorControl_interface_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef BasicQuadrotorControl_interface_COMMON_INCLUDES_
# define BasicQuadrotorControl_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* BasicQuadrotorControl_interface_COMMON_INCLUDES_ */

#include "BasicQuadrotorControl_interface_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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

#define BasicQuadrotorControl_interface_M (BasicQuadrotorControl_interf_M)

/* Block signals (auto storage) */
typedef struct {
  char_T table[128];
  int16_T DataTypeConversion1;         /* '<Root>/Data Type Conversion1' */
  int16_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  int16_T DataTypeConversion3;         /* '<Root>/Data Type Conversion3' */
} B_BasicQuadrotorControl_inter_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  zynq_AXIWrite_BasicQuadrotorC_T obj; /* '<S17>/AXI4-Interface Write' */
  zynq_AXIWrite_BasicQuadrotorC_T obj_i;/* '<S16>/AXI4-Interface Write' */
  zynq_AXIWrite_BasicQuadrotorC_T obj_k;/* '<S15>/AXI4-Interface Write' */
  zynq_AXIWrite_BasicQuadrotorC_T obj_o;/* '<S14>/AXI4-Interface Write' */
  zynq_AXIWrite_BasicQuadrotorC_T obj_m;/* '<S13>/AXI4-Interface Write' */
  zynq_AXIWrite_BasicQuadrotorC_T obj_a;/* '<S12>/AXI4-Interface Write' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<S1>/From Workspace' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  void *AXI4InterfaceWrite_PWORK;      /* '<S17>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_k;    /* '<S16>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_i;    /* '<S15>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_c;    /* '<S14>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_e;    /* '<S13>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_ej;   /* '<S12>/AXI4-Interface Write' */
  void *AXI4InterfaceRead_PWORK;       /* '<S11>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_l;     /* '<S10>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_n;     /* '<S9>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_c;     /* '<S8>/AXI4-Interface Read' */
  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<S1>/From Workspace' */

  zynq_AXIRead_BasicQuadrotorCo_T obj_kl;/* '<S11>/AXI4-Interface Read' */
  zynq_AXIRead_BasicQuadrotorCo_T obj_g;/* '<S10>/AXI4-Interface Read' */
  zynq_AXIRead_BasicQuadrotorCo_T obj_i1;/* '<S9>/AXI4-Interface Read' */
  zynq_AXIRead_BasicQuadrotorCo_T obj_l;/* '<S8>/AXI4-Interface Read' */
  boolean_T objisempty;                /* '<S17>/AXI4-Interface Write' */
  boolean_T objisempty_f;              /* '<S16>/AXI4-Interface Write' */
  boolean_T objisempty_p;              /* '<S15>/AXI4-Interface Write' */
  boolean_T objisempty_l;              /* '<S14>/AXI4-Interface Write' */
  boolean_T objisempty_o;              /* '<S13>/AXI4-Interface Write' */
  boolean_T objisempty_e;              /* '<S12>/AXI4-Interface Write' */
  boolean_T objisempty_px;             /* '<S11>/AXI4-Interface Read' */
  boolean_T objisempty_d;              /* '<S10>/AXI4-Interface Read' */
  boolean_T objisempty_or;             /* '<S9>/AXI4-Interface Read' */
  boolean_T objisempty_fl;             /* '<S8>/AXI4-Interface Read' */
} DW_BasicQuadrotorControl_inte_T;

/* Parameters (auto storage) */
struct P_BasicQuadrotorControl_inter_T_ {
  uint16_T DATA_FORMAT;                /* Variable: DATA_FORMAT
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint16_T READ_CMD;                   /* Variable: READ_CMD
                                        * Referenced by: '<S1>/Constant2'
                                        */
  uint8_T SliderGain_gain;             /* Mask Parameter: SliderGain_gain
                                        * Referenced by: '<S2>/Slider Gain'
                                        */
  uint8_T SliderGain1_gain;            /* Mask Parameter: SliderGain1_gain
                                        * Referenced by: '<S3>/Slider Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch'
                                        */
  uint8_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  uint8_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<Root>/Constant3'
                                        */
  boolean_T Constant_Value_a;          /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_BasicQuadrotorControl_T {
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
extern P_BasicQuadrotorControl_inter_T BasicQuadrotorControl_interfa_P;

/* Block signals (auto storage) */
extern B_BasicQuadrotorControl_inter_T BasicQuadrotorControl_interfa_B;

/* Block states (auto storage) */
extern DW_BasicQuadrotorControl_inte_T BasicQuadrotorControl_interf_DW;

/* Model entry point functions */
extern void BasicQuadrotorControl_interface_initialize(void);
extern void BasicQuadrotorControl_interface_step(void);
extern void BasicQuadrotorControl_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BasicQuadrotorContro_T *const BasicQuadrotorControl_interf_M;

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
 * '<Root>' : 'BasicQuadrotorControl_interface'
 * '<S1>'   : 'BasicQuadrotorControl_interface/ADXL345_axi_control'
 * '<S2>'   : 'BasicQuadrotorControl_interface/Slider Gain'
 * '<S3>'   : 'BasicQuadrotorControl_interface/Slider Gain1'
 * '<S4>'   : 'BasicQuadrotorControl_interface/hdl_dut'
 * '<S5>'   : 'BasicQuadrotorControl_interface/ADXL345_axi_control/Compare To Zero'
 * '<S6>'   : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteRead'
 * '<S7>'   : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteWrite'
 * '<S8>'   : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_X'
 * '<S9>'   : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_XYZ_Valid'
 * '<S10>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_Y'
 * '<S11>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_Z'
 * '<S12>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_CMD'
 * '<S13>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_CMD_VLD'
 * '<S14>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_duty_motor1'
 * '<S15>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_duty_motor2'
 * '<S16>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_en_motor1'
 * '<S17>'  : 'BasicQuadrotorControl_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_en_motor2'
 */
#endif                                 /* RTW_HEADER_BasicQuadrotorControl_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
