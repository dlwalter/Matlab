#ifndef __c6_BasicQuadrotorControl_h__
#define __c6_BasicQuadrotorControl_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_BasicQuadrotorControlInstanceStruct
#define typedef_SFc6_BasicQuadrotorControlInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c6_sfEvent;
  uint8_T c6_tp_S1;
  uint8_T c6_tp_LOW;
  uint8_T c6_tp_HIGH;
  uint8_T c6_tp_S2;
  boolean_T c6_isStable;
  boolean_T c6_doneDoubleBufferReInit;
  uint8_T c6_is_active_c6_BasicQuadrotorControl;
  uint8_T c6_is_c6_BasicQuadrotorControl;
  uint16_T c6_count;
  boolean_T c6_dataWrittenToVector[2];
  uint8_T c6_doSetSimStateSideEffects;
  const mxArray *c6_setSimStateSideEffectsInfo;
  boolean_T *c6_PWM;
  boolean_T *c6_pwm_enable;
  uint8_T *c6_duty;
  uint32_T *c6_f_coeff;
} SFc6_BasicQuadrotorControlInstanceStruct;

#endif                                 /*typedef_SFc6_BasicQuadrotorControlInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c6_BasicQuadrotorControl_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_BasicQuadrotorControl_get_check_sum(mxArray *plhs[]);
extern void c6_BasicQuadrotorControl_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
