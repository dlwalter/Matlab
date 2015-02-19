#ifndef __c1_ADXL345_read_h__
#define __c1_ADXL345_read_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_ADXL345_readInstanceStruct
#define typedef_SFc1_ADXL345_readInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  boolean_T c1_isStable;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_ADXL345_read;
  uint64_T c1_XYZ_int;
  boolean_T c1_XYZ_int_not_empty;
  boolean_T *c1_shift;
  boolean_T *c1_serial_in;
  uint64_T *c1_XYZ;
} SFc1_ADXL345_readInstanceStruct;

#endif                                 /*typedef_SFc1_ADXL345_readInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_ADXL345_read_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_ADXL345_read_get_check_sum(mxArray *plhs[]);
extern void c1_ADXL345_read_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
