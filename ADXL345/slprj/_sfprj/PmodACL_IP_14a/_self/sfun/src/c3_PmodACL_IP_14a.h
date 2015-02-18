#ifndef __c3_PmodACL_IP_14a_h__
#define __c3_PmodACL_IP_14a_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_PmodACL_IP_14aInstanceStruct
#define typedef_SFc3_PmodACL_IP_14aInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  uint8_T c3_tp_IDLE;
  uint8_T c3_tp_START_CONV;
  uint8_T c3_tp_tCONV_delay;
  uint8_T c3_tp_START_ADC_RDWR;
  uint8_T c3_tp_CLOCKING;
  uint8_T c3_tp_Read1;
  uint8_T c3_tp_Read;
  uint8_T c3_tp_END;
  boolean_T c3_isStable;
  boolean_T c3_doneDoubleBufferReInit;
  uint8_T c3_is_active_c3_PmodACL_IP_14a;
  uint8_T c3_is_c3_PmodACL_IP_14a;
  uint16_T c3_count;
  uint8_T c3_clock_cnt;
  uint8_T c3_cmd;
  boolean_T c3_ser_data_int;
  boolean_T c3_ser_data_int_not_empty;
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  boolean_T *c3_read_x_y_z_en;
  boolean_T *c3_CSn;
  boolean_T *c3_SCK;
  boolean_T *c3_SDI;
  boolean_T *c3_READ_SHIFT;
  boolean_T *c3_XYZ_Valid;
} SFc3_PmodACL_IP_14aInstanceStruct;

#endif                                 /*typedef_SFc3_PmodACL_IP_14aInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_PmodACL_IP_14a_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_PmodACL_IP_14a_get_check_sum(mxArray *plhs[]);
extern void c3_PmodACL_IP_14a_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
