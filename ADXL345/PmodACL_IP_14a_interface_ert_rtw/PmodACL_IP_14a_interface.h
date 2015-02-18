/*
 * File: PmodACL_IP_14a_interface.h
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

#ifndef RTW_HEADER_PmodACL_IP_14a_interface_h_
#define RTW_HEADER_PmodACL_IP_14a_interface_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef PmodACL_IP_14a_interface_COMMON_INCLUDES_
# define PmodACL_IP_14a_interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "axi_lct.h"
#endif                                 /* PmodACL_IP_14a_interface_COMMON_INCLUDES_ */

#include "PmodACL_IP_14a_interface_types.h"

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

/* Block signals (auto storage) */
typedef struct {
  char_T table[128];
  int16_T DataTypeConversion1;         /* '<Root>/Data Type Conversion1' */
  int16_T IntegertoBitConverter1[16];  /* '<Root>/Integer to Bit Converter1' */
  int16_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  int16_T DataTypeConversion3;         /* '<Root>/Data Type Conversion3' */
  boolean_T AXI4Lite_Read_XYZ_Valid_DTC;/* '<S3>/AXI4Lite_Read_XYZ_Valid_DTC' */
} B_PmodACL_IP_14a_interface_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  zynq_AXIWrite_PmodACL_IP_14a__T obj; /* '<S10>/AXI4-Interface Write' */
  zynq_AXIWrite_PmodACL_IP_14a__T obj_l;/* '<S9>/AXI4-Interface Write' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<Root>/From Workspace' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  void *AXI4InterfaceWrite_PWORK;      /* '<S10>/AXI4-Interface Write' */
  void *AXI4InterfaceWrite_PWORK_e;    /* '<S9>/AXI4-Interface Write' */
  void *AXI4InterfaceRead_PWORK;       /* '<S8>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_i;     /* '<S7>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_l;     /* '<S6>/AXI4-Interface Read' */
  void *AXI4InterfaceRead_PWORK_e;     /* '<S5>/AXI4-Interface Read' */
  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<Root>/From Workspace' */

  zynq_AXIRead_PmodACL_IP_14a_i_T obj_b;/* '<S8>/AXI4-Interface Read' */
  zynq_AXIRead_PmodACL_IP_14a_i_T obj_f;/* '<S7>/AXI4-Interface Read' */
  zynq_AXIRead_PmodACL_IP_14a_i_T obj_e;/* '<S6>/AXI4-Interface Read' */
  zynq_AXIRead_PmodACL_IP_14a_i_T obj_k;/* '<S5>/AXI4-Interface Read' */
  boolean_T objisempty;                /* '<S10>/AXI4-Interface Write' */
  boolean_T objisempty_n;              /* '<S9>/AXI4-Interface Write' */
  boolean_T objisempty_l;              /* '<S8>/AXI4-Interface Read' */
  boolean_T objisempty_j;              /* '<S7>/AXI4-Interface Read' */
  boolean_T objisempty_jv;             /* '<S6>/AXI4-Interface Read' */
  boolean_T objisempty_p;              /* '<S5>/AXI4-Interface Read' */
} DW_PmodACL_IP_14a_interface_T;

/* Parameters (auto storage) */
struct P_PmodACL_IP_14a_interface_T_ {
  uint16_T DATA_FORMAT;                /* Variable: DATA_FORMAT
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint16_T READ_CMD;                   /* Variable: READ_CMD
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PmodACL_IP_14a_interf_T {
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
extern P_PmodACL_IP_14a_interface_T PmodACL_IP_14a_interface_P;

/* Block signals (auto storage) */
extern B_PmodACL_IP_14a_interface_T PmodACL_IP_14a_interface_B;

/* Block states (auto storage) */
extern DW_PmodACL_IP_14a_interface_T PmodACL_IP_14a_interface_DW;

/* Model entry point functions */
extern void PmodACL_IP_14a_interface_initialize(void);
extern void PmodACL_IP_14a_interface_step(void);
extern void PmodACL_IP_14a_interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PmodACL_IP_14a_inter_T *const PmodACL_IP_14a_interface_M;

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
 * '<Root>' : 'PmodACL_IP_14a_interface'
 * '<S1>'   : 'PmodACL_IP_14a_interface/Compare To Zero'
 * '<S2>'   : 'PmodACL_IP_14a_interface/hdl_dut'
 * '<S3>'   : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteRead'
 * '<S4>'   : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteWrite'
 * '<S5>'   : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_X'
 * '<S6>'   : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_XYZ_Valid'
 * '<S7>'   : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_Y'
 * '<S8>'   : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteRead/AXI4Lite_Read_Z'
 * '<S9>'   : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_CMD'
 * '<S10>'  : 'PmodACL_IP_14a_interface/hdl_dut/AXI4LiteWrite/AXI4Lite_Write_CMD_VLD'
 */
#endif                                 /* RTW_HEADER_PmodACL_IP_14a_interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
