#ifndef __c7_BasicQuadrotorControl_h__
#define __c7_BasicQuadrotorControl_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc7_BasicQuadrotorControlInstanceStruct
#define typedef_SFc7_BasicQuadrotorControlInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c7_sfEvent;
  uint8_T c7_tp_S1;
  uint8_T c7_tp_LOW;
  uint8_T c7_tp_HIGH;
  uint8_T c7_tp_S2;
  boolean_T c7_isStable;
  boolean_T c7_doneDoubleBufferReInit;
  uint8_T c7_is_active_c7_BasicQuadrotorControl;
  uint8_T c7_is_c7_BasicQuadrotorControl;
  uint16_T c7_count;
  boolean_T c7_dataWrittenToVector[2];
  uint8_T c7_doSetSimStateSideEffects;
  const mxArray *c7_setSimStateSideEffectsInfo;
  boolean_T *c7_PWM;
  boolean_T *c7_pwm_enable;
  uint8_T *c7_duty;
  uint32_T *c7_f_coeff;
} SFc7_BasicQuadrotorControlInstanceStruct;

#endif                                 /*typedef_SFc7_BasicQuadrotorControlInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c7_BasicQuadrotorControl_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_BasicQuadrotorControl_get_check_sum(mxArray *plhs[]);
extern void c7_BasicQuadrotorControl_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
