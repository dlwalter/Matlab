#ifndef __c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_h__
#define __c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_XZzpRJ28QaTLUZYSRsEeND_hdlsllibInstanceStruct
#define typedef_SFc6_XZzpRJ28QaTLUZYSRsEeND_hdlsllibInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c6_XZzpRJ28QaTLUZYSRsEeND_is_active_c6_XZzpRJ28QaTLUZYSRsEeND_hd;
  real_T c6_XZzpRJ28QaTLUZYSRsEeND_lidx;
  real_T c6_XZzpRJ28QaTLUZYSRsEeND_ridx;
  uint64_T *c6_XZzpRJ28QaTLUZYSRsEeND_u;
  uint8_T *c6_XZzpRJ28QaTLUZYSRsEeND_y;
} SFc6_XZzpRJ28QaTLUZYSRsEeND_hdlsllibInstanceStruct;

#endif                                 /*typedef_SFc6_XZzpRJ28QaTLUZYSRsEeND_hdlsllibInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_get_check_sum(mxArray *plhs[]);
extern void c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
