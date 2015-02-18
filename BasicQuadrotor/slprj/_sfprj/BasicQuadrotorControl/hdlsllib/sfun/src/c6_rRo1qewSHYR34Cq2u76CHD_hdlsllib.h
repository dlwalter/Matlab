#ifndef __c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_h__
#define __c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_rRo1qewSHYR34Cq2u76CHD_hdlsllibInstanceStruct
#define typedef_SFc6_rRo1qewSHYR34Cq2u76CHD_hdlsllibInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c6_rRo1qewSHYR34Cq2u76CHD_is_active_c6_rRo1qewSHYR34Cq2u76CHD_hd;
  real_T c6_rRo1qewSHYR34Cq2u76CHD_lidx;
  real_T c6_rRo1qewSHYR34Cq2u76CHD_ridx;
  uint64_T *c6_rRo1qewSHYR34Cq2u76CHD_u;
  uint8_T *c6_rRo1qewSHYR34Cq2u76CHD_y;
} SFc6_rRo1qewSHYR34Cq2u76CHD_hdlsllibInstanceStruct;

#endif                                 /*typedef_SFc6_rRo1qewSHYR34Cq2u76CHD_hdlsllibInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_get_check_sum(mxArray *plhs[]);
extern void c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
