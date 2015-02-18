#ifndef __c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_h__
#define __c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_cZVGjs0KImVo2u9sipbkkG_hdlsllibInstanceStruct
#define typedef_SFc6_cZVGjs0KImVo2u9sipbkkG_hdlsllibInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c6_cZVGjs0KImVo2u9sipbkkG_is_active_c6_cZVGjs0KImVo2u9sipbkkG_hd;
  real_T c6_cZVGjs0KImVo2u9sipbkkG_lidx;
  real_T c6_cZVGjs0KImVo2u9sipbkkG_ridx;
  uint64_T *c6_cZVGjs0KImVo2u9sipbkkG_u;
  uint8_T *c6_cZVGjs0KImVo2u9sipbkkG_y;
} SFc6_cZVGjs0KImVo2u9sipbkkG_hdlsllibInstanceStruct;

#endif                                 /*typedef_SFc6_cZVGjs0KImVo2u9sipbkkG_hdlsllibInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_get_check_sum(mxArray *plhs[]);
extern void c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
