#ifndef __c2_ADXL345_read_h__
#define __c2_ADXL345_read_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc2_ADXL345_readInstanceStruct
#define typedef_SFc2_ADXL345_readInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  uint8_T c2_tp_IDLE;
  uint8_T c2_tp_START_CONV;
  uint8_T c2_tp_tCONV_delay;
  uint8_T c2_tp_START_ADC_RDWR;
  uint8_T c2_tp_CLOCKING;
  uint8_T c2_tp_END1;
  uint8_T c2_tp_END;
  boolean_T c2_isStable;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_ADXL345_read;
  uint8_T c2_is_c2_ADXL345_read;
  uint16_T c2_count;
  uint8_T c2_clock_cnt;
  boolean_T c2_ser_data_int;
  boolean_T c2_ser_data_int_not_empty;
  uint8_T c2_doSetSimStateSideEffects;
  const mxArray *c2_setSimStateSideEffectsInfo;
  boolean_T *c2_CSn_CONV;
  boolean_T *c2_SCK;
  boolean_T *c2_SDI;
  uint16_T *c2_cmd;
  boolean_T *c2_CMD_VLD;
} SFc2_ADXL345_readInstanceStruct;

#endif                                 /*typedef_SFc2_ADXL345_readInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_ADXL345_read_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_ADXL345_read_get_check_sum(mxArray *plhs[]);
extern void c2_ADXL345_read_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
