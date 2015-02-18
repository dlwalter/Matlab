#ifndef __c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_h__
#define __c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllibInstanceStruct
#define typedef_SFc6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllibInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c6_e1Hi4ChPrNXuCLfaX2T4eH_is_active_c6_e1Hi4ChPrNXuCLfaX2T4eH_hd;
  real_T c6_e1Hi4ChPrNXuCLfaX2T4eH_lidx;
  real_T c6_e1Hi4ChPrNXuCLfaX2T4eH_ridx;
  uint16_T *c6_e1Hi4ChPrNXuCLfaX2T4eH_u;
  uint8_T *c6_e1Hi4ChPrNXuCLfaX2T4eH_y;
} SFc6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllibInstanceStruct;

#endif                                 /*typedef_SFc6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllibInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_get_check_sum(mxArray *plhs[]);
extern void c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
