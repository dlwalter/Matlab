#ifndef __c5_BasicQuadrotorControl_h__
#define __c5_BasicQuadrotorControl_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc5_BasicQuadrotorControlInstanceStruct
#define typedef_SFc5_BasicQuadrotorControlInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_sfEvent;
  uint8_T c5_tp_S1;
  uint8_T c5_tp_LOW;
  uint8_T c5_tp_HIGH;
  uint8_T c5_tp_S2;
  boolean_T c5_isStable;
  boolean_T c5_doneDoubleBufferReInit;
  uint8_T c5_is_active_c5_BasicQuadrotorControl;
  uint8_T c5_is_c5_BasicQuadrotorControl;
  uint16_T c5_count;
  boolean_T c5_dataWrittenToVector[2];
  uint8_T c5_doSetSimStateSideEffects;
  const mxArray *c5_setSimStateSideEffectsInfo;
  boolean_T *c5_PWM;
  boolean_T *c5_pwm_enable;
  uint8_T *c5_duty;
  uint32_T *c5_f_coeff;
} SFc5_BasicQuadrotorControlInstanceStruct;

#endif                                 /*typedef_SFc5_BasicQuadrotorControlInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_BasicQuadrotorControl_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_BasicQuadrotorControl_get_check_sum(mxArray *plhs[]);
extern void c5_BasicQuadrotorControl_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
