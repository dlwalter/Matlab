#ifndef __c3_PWM_controller_h__
#define __c3_PWM_controller_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_PWM_controllerInstanceStruct
#define typedef_SFc3_PWM_controllerInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  uint8_T c3_tp_S1;
  uint8_T c3_tp_LOW;
  uint8_T c3_tp_HIGH;
  uint8_T c3_tp_S2;
  boolean_T c3_isStable;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_PWM_controller;
  uint8_T c3_is_c3_PWM_controller;
  uint16_T c3_count;
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
} SFc3_PWM_controllerInstanceStruct;

#endif                                 /*typedef_SFc3_PWM_controllerInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_PWM_controller_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_PWM_controller_get_check_sum(mxArray *plhs[]);
extern void c3_PWM_controller_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
