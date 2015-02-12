#ifndef __c3_EncoderRead_h__
#define __c3_EncoderRead_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_EncoderReadInstanceStruct
#define typedef_SFc3_EncoderReadInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  uint8_T c3_tp_I4;
  uint8_T c3_tp_I1;
  uint8_T c3_tp_I2;
  uint8_T c3_tp_I3;
  boolean_T c3_isStable;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_EncoderRead;
  uint8_T c3_is_c3_EncoderRead;
  boolean_T c3_reset_val;
  boolean_T c3_dataWrittenToVector[2];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  boolean_T *c3_A;
  boolean_T *c3_B;
  int32_T *c3_count;
  boolean_T *c3_reset;
  boolean_T *c3_enable;
} SFc3_EncoderReadInstanceStruct;

#endif                                 /*typedef_SFc3_EncoderReadInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_EncoderRead_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_EncoderRead_get_check_sum(mxArray *plhs[]);
extern void c3_EncoderRead_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
