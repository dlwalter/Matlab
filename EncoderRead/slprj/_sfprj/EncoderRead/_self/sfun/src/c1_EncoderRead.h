#ifndef __c1_EncoderRead_h__
#define __c1_EncoderRead_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_EncoderReadInstanceStruct
#define typedef_SFc1_EncoderReadInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  uint8_T c1_tp_I4;
  uint8_T c1_tp_I1;
  uint8_T c1_tp_I2;
  uint8_T c1_tp_I3;
  boolean_T c1_isStable;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_EncoderRead;
  uint8_T c1_is_c1_EncoderRead;
  boolean_T c1_reset_val;
  boolean_T c1_dataWrittenToVector[2];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  boolean_T *c1_A;
  boolean_T *c1_B;
  int32_T *c1_count;
  boolean_T *c1_reset;
  boolean_T *c1_enable;
} SFc1_EncoderReadInstanceStruct;

#endif                                 /*typedef_SFc1_EncoderReadInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_EncoderRead_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_EncoderRead_get_check_sum(mxArray *plhs[]);
extern void c1_EncoderRead_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
