/* Include files */

#include "hdlsllib_sfun.h"
#include "hdlsllib_sfun_debug_macros.h"
#include "c6_18poecr3DvUei9MWhdPjDD_hdlsllib.h"
#include "c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib.h"
#include "c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib.h"
#include "c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib.h"
#include "c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib.h"
#include "c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib.h"
#include "c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib.h"
#include "c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _hdlsllibMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void hdlsllib_initializer(void)
{
}

void hdlsllib_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_hdlsllib_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==6) {
    if (!strcmp(specsCksum, "18poecr3DvUei9MWhdPjDD")) {
      c6_18poecr3DvUei9MWhdPjDD_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    if (!strcmp(specsCksum, "XZF8kJML5VgBBpfwrIutsC")) {
      c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    if (!strcmp(specsCksum, "XZzpRJ28QaTLUZYSRsEeND")) {
      c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    if (!strcmp(specsCksum, "cZVGjs0KImVo2u9sipbkkG")) {
      c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    if (!strcmp(specsCksum, "e1Hi4ChPrNXuCLfaX2T4eH")) {
      c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    if (!strcmp(specsCksum, "k9LAYxhP9ttLrWBQWHdq4B")) {
      c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    if (!strcmp(specsCksum, "rRo1qewSHYR34Cq2u76CHD")) {
      c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    if (!strcmp(specsCksum, "sL4u63ZWPMyaFVPvda6N2G")) {
      c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_method_dispatcher(simstructPtr, method,
        data);
      return 1;
    }

    return 0;
  }

  return 0;
}

extern void sf_hdlsllib_uses_exported_functions(int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[])
{
  plhs[0] = mxCreateLogicalScalar(0);
}

unsigned int sf_hdlsllib_process_check_sum_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>2 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"library")) {
      char machineName[100];
      mxGetString(prhs[2], machineName,sizeof(machineName)/sizeof(char));
      machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
      if (!strcmp(machineName,"hdlsllib")) {
        if (nrhs==3) {
          ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1546351864U);
          ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1128783572U);
          ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1159384780U);
          ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(615248250U);
        } else if (nrhs==4) {
          unsigned int chartFileNumber;
          chartFileNumber = (unsigned int)mxGetScalar(prhs[3]);
          switch (chartFileNumber) {
           case 6:
            {
              extern void sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_check_sum
                (mxArray *plhs[]);
              sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_check_sum(plhs);
              break;
            }

           default:
            ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
          }
        } else {
          return 0;
        }
      } else {
        return 0;
      }
    } else {
      return 0;
    }
  } else {
    return 0;
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_hdlsllib_autoinheritance_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 6:
      {
        if (strcmp(aiChksum, "I88lWfkLSzmHKUeLbbFrUB") == 0) {
          extern mxArray
            *sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_get_autoinheritance_info();
          break;
        }

        if (strcmp(aiChksum, "UGC9KS5RbSB3iJFmsR8HfH") == 0) {
          extern mxArray
            *sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_get_autoinheritance_info();
          break;
        }

        if (strcmp(aiChksum, "liQyGxM7YrdeLkLigfproE") == 0) {
          extern mxArray
            *sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_get_autoinheritance_info();
          break;
        }

        if (strcmp(aiChksum, "zNwvPF3mlRwI3HDvRgFk4") == 0) {
          extern mxArray
            *sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_get_autoinheritance_info();
          break;
        }

        if (strcmp(aiChksum, "TvZixQW3x5jphfmWtMbjND") == 0) {
          extern mxArray
            *sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_get_autoinheritance_info();
          break;
        }

        if (strcmp(aiChksum, "68Tdry9xWMohAwLhgIgYD") == 0) {
          extern mxArray
            *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_autoinheritance_info();
          break;
        }

        if (strcmp(aiChksum, "unQIvNSkybMa4NTHVFPNgF") == 0) {
          extern mxArray
            *sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_get_autoinheritance_info();
          break;
        }

        if (strcmp(aiChksum, "AeopdYvkhyD6XxjIh2KlIB") == 0) {
          extern mxArray
            *sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_autoinheritance_info(void);
          plhs[0] =
            sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_hdlsllib_get_eml_resolved_functions_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 6:
      {
        extern const mxArray
          *sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_hdlsllib_third_party_uses_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 6:
      {
        if (strcmp(tpChksum, "18poecr3DvUei9MWhdPjDD") == 0) {
          extern mxArray
            *sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "XZF8kJML5VgBBpfwrIutsC") == 0) {
          extern mxArray
            *sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "XZzpRJ28QaTLUZYSRsEeND") == 0) {
          extern mxArray
            *sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "cZVGjs0KImVo2u9sipbkkG") == 0) {
          extern mxArray
            *sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "e1Hi4ChPrNXuCLfaX2T4eH") == 0) {
          extern mxArray
            *sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "k9LAYxhP9ttLrWBQWHdq4B") == 0) {
          extern mxArray
            *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "rRo1qewSHYR34Cq2u76CHD") == 0) {
          extern mxArray
            *sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_third_party_uses_info();
          break;
        }

        if (strcmp(tpChksum, "sL4u63ZWPMyaFVPvda6N2G") == 0) {
          extern mxArray
            *sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_third_party_uses_info(void);
          plhs[0] = sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_hdlsllib_jit_fallback_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 6:
      {
        if (strcmp(tpChksum, "18poecr3DvUei9MWhdPjDD") == 0) {
          extern mxArray
            *sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "XZF8kJML5VgBBpfwrIutsC") == 0) {
          extern mxArray
            *sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "XZzpRJ28QaTLUZYSRsEeND") == 0) {
          extern mxArray
            *sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "cZVGjs0KImVo2u9sipbkkG") == 0) {
          extern mxArray
            *sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "e1Hi4ChPrNXuCLfaX2T4eH") == 0) {
          extern mxArray
            *sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "k9LAYxhP9ttLrWBQWHdq4B") == 0) {
          extern mxArray
            *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "rRo1qewSHYR34Cq2u76CHD") == 0) {
          extern mxArray
            *sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_jit_fallback_info();
          break;
        }

        if (strcmp(tpChksum, "sL4u63ZWPMyaFVPvda6N2G") == 0) {
          extern mxArray
            *sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_jit_fallback_info(void);
          plhs[0] = sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_hdlsllib_updateBuildInfo_args_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 6:
      {
        if (strcmp(tpChksum, "18poecr3DvUei9MWhdPjDD") == 0) {
          extern mxArray
            *sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_updateBuildInfo_args_info();
          break;
        }

        if (strcmp(tpChksum, "XZF8kJML5VgBBpfwrIutsC") == 0) {
          extern mxArray
            *sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_updateBuildInfo_args_info();
          break;
        }

        if (strcmp(tpChksum, "XZzpRJ28QaTLUZYSRsEeND") == 0) {
          extern mxArray
            *sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_updateBuildInfo_args_info();
          break;
        }

        if (strcmp(tpChksum, "cZVGjs0KImVo2u9sipbkkG") == 0) {
          extern mxArray
            *sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_updateBuildInfo_args_info();
          break;
        }

        if (strcmp(tpChksum, "e1Hi4ChPrNXuCLfaX2T4eH") == 0) {
          extern mxArray
            *sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_updateBuildInfo_args_info();
          break;
        }

        if (strcmp(tpChksum, "k9LAYxhP9ttLrWBQWHdq4B") == 0) {
          extern mxArray
            *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_updateBuildInfo_args_info();
          break;
        }

        if (strcmp(tpChksum, "rRo1qewSHYR34Cq2u76CHD") == 0) {
          extern mxArray
            *sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_updateBuildInfo_args_info();
          break;
        }

        if (strcmp(tpChksum, "sL4u63ZWPMyaFVPvda6N2G") == 0) {
          extern mxArray
            *sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_updateBuildInfo_args_info
            (void);
          plhs[0] =
            sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void sf_hdlsllib_get_post_codegen_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  unsigned int chartFileNumber = (unsigned int) mxGetScalar(prhs[0]);
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  switch (chartFileNumber) {
   case 6:
    {
      if (strcmp(tpChksum, "18poecr3DvUei9MWhdPjDD") == 0) {
        extern mxArray
          *sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_18poecr3DvUei9MWhdPjDD_hdlsllib_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "XZF8kJML5VgBBpfwrIutsC") == 0) {
        extern mxArray
          *sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_XZF8kJML5VgBBpfwrIutsC_hdlsllib_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "XZzpRJ28QaTLUZYSRsEeND") == 0) {
        extern mxArray
          *sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_XZzpRJ28QaTLUZYSRsEeND_hdlsllib_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "cZVGjs0KImVo2u9sipbkkG") == 0) {
        extern mxArray
          *sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_cZVGjs0KImVo2u9sipbkkG_hdlsllib_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "e1Hi4ChPrNXuCLfaX2T4eH") == 0) {
        extern mxArray
          *sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_e1Hi4ChPrNXuCLfaX2T4eH_hdlsllib_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "k9LAYxhP9ttLrWBQWHdq4B") == 0) {
        extern mxArray
          *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "rRo1qewSHYR34Cq2u76CHD") == 0) {
        extern mxArray
          *sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_rRo1qewSHYR34Cq2u76CHD_hdlsllib_get_post_codegen_info();
        return;
      }

      if (strcmp(tpChksum, "sL4u63ZWPMyaFVPvda6N2G") == 0) {
        extern mxArray
          *sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_post_codegen_info(void);
        plhs[0] = sf_c6_sL4u63ZWPMyaFVPvda6N2G_hdlsllib_get_post_codegen_info();
        return;
      }
    }
    break;

   default:
    break;
  }

  plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
}

void hdlsllib_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _hdlsllibMachineNumber_ = sf_debug_initialize_machine(debugInstance,"hdlsllib",
    "sfun",1,1,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,_hdlsllibMachineNumber_,0,
    0);
  sf_debug_set_machine_data_thresholds(debugInstance,_hdlsllibMachineNumber_,0);
}

void hdlsllib_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_hdlsllib_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("hdlsllib",
      "ADXL234_read");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_hdlsllib_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
