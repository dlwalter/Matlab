#ifndef __c4_BasicQuadrotorControl_h__
#define __c4_BasicQuadrotorControl_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc4_BasicQuadrotorControlInstanceStruct
#define typedef_SFc4_BasicQuadrotorControlInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c4_sfEvent;
  uint8_T c4_tp_S1;
  uint8_T c4_tp_LOW;
  uint8_T c4_tp_HIGH;
  uint8_T c4_tp_S2;
  boolean_T c4_isStable;
  boolean_T c4_doneDoubleBufferReInit;
  uint8_T c4_is_active_c4_BasicQuadrotorControl;
  uint8_T c4_is_c4_BasicQuadrotorControl;
  uint16_T c4_count;
  boolean_T c4_dataWrittenToVector[2];
  uint8_T c4_doSetSimStateSideEffects;
  const mxArray *c4_setSimStateSideEffectsInfo;
  boolean_T *c4_PWM;
  boolean_T *c4_pwm_enable;
  uint8_T *c4_duty;
  uint32_T *c4_f_coeff;
} SFc4_BasicQuadrotorControlInstanceStruct;

#endif                                 /*typedef_SFc4_BasicQuadrotorControlInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_BasicQuadrotorControl_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_BasicQuadrotorControl_get_check_sum(mxArray *plhs[]);
extern void c4_BasicQuadrotorControl_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
