#include "ADXL345_read_sfun.h"
#include "sf_runtime/sfcdebug.h"

struct SfDebugInstanceStruct;
struct SfDebugInstanceStruct* sfGlobalDebugInstanceStruct = NULL;

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

unsigned int sf_process_check_sum_call( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  extern unsigned int sf_ADXL345_read_process_check_sum_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlsllib_process_check_sum_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlmdlgenlib_process_check_sum_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  if (sf_ADXL345_read_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_hdlsllib_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_hdlmdlgenlib_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  return 0;
}

unsigned int sf_process_machine_uses_exported_functions_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern void sf_ADXL345_read_uses_exported_functions( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern void sf_hdlsllib_uses_exported_functions( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern void sf_hdlmdlgenlib_uses_exported_functions( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 2) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1])) {
    return 0;
  }

  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"uses_exported_functions")) {
    return 0;
  }

  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "ADXL345_read") == 0) {
    sf_ADXL345_read_uses_exported_functions(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "hdlsllib") == 0) {
    sf_hdlsllib_uses_exported_functions(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "hdlmdlgenlib") == 0) {
    sf_hdlmdlgenlib_uses_exported_functions(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  return 0;
}

unsigned int sf_process_autoinheritance_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_ADXL345_read_autoinheritance_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlsllib_autoinheritance_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlmdlgenlib_autoinheritance_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "ADXL345_read") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ADXL345_read_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlsllib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlsllib_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlmdlgenlib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlmdlgenlib_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_third_party_uses_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_ADXL345_read_third_party_uses_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlsllib_third_party_uses_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlmdlgenlib_third_party_uses_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "ADXL345_read") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ADXL345_read_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlsllib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlsllib_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlmdlgenlib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlmdlgenlib_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_jit_fallback_info_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_ADXL345_read_jit_fallback_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlsllib_jit_fallback_info( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlmdlgenlib_jit_fallback_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "ADXL345_read") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ADXL345_read_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlsllib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlsllib_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlmdlgenlib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlmdlgenlib_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_updateBuildInfo_args_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_ADXL345_read_updateBuildInfo_args_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlsllib_updateBuildInfo_args_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlmdlgenlib_updateBuildInfo_args_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "ADXL345_read") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ADXL345_read_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlsllib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlsllib_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "hdlmdlgenlib") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_hdlmdlgenlib_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_eml_resolved_functions_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_ADXL345_read_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlsllib_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_hdlmdlgenlib_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 3) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "ADXL345_read") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_ADXL345_read_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  if (strcmp(machineName, "hdlsllib") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_hdlsllib_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  if (strcmp(machineName, "hdlmdlgenlib") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_hdlmdlgenlib_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_post_codegen_info(int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[])
{
  extern void sf_ADXL345_read_get_post_codegen_info( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern void sf_hdlsllib_get_post_codegen_info( int nlhs, mxArray * plhs[], int
    nrhs, const mxArray * prhs[] );
  extern void sf_hdlmdlgenlib_get_post_codegen_info( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 3) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1])) {
    return 0;
  }

  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info")) {
    return 0;
  }

  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "ADXL345_read") == 0) {
    sf_ADXL345_read_get_post_codegen_info(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "hdlsllib") == 0) {
    sf_hdlsllib_get_post_codegen_info(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "hdlmdlgenlib") == 0) {
    sf_hdlmdlgenlib_get_post_codegen_info(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  return 1;
}

unsigned int sf_mex_unlock_call( int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[] )
{
  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_mex_unlock"))
    return 0;
  while (mexIsLocked()) {
    mexUnlock();
  }

  return(1);
}

extern unsigned int sf_debug_api(struct SfDebugInstanceStruct* debugInstance,
  int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
static unsigned int sf_debug_api_wrapper( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  return sf_debug_api(sfGlobalDebugInstanceStruct, nlhs, plhs, nrhs, prhs);
}

static unsigned int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[])
{
  if (sf_debug_api_wrapper(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_mex_unlock_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_autoinheritance_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_third_party_uses_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_jit_fallback_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_updateBuildInfo_args_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_eml_resolved_functions_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_post_codegen_info(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_machine_uses_exported_functions_call(nlhs,plhs,nrhs,prhs))
    return 1;
  mexErrMsgTxt("Unsuccessful command.");
  return 0;
}

static unsigned int sfGlobalMdlStartCallCounts = 0;
unsigned int sf_machine_global_initializer_called(void)
{
  return(sfGlobalMdlStartCallCounts > 0);
}

extern unsigned int sf_ADXL345_read_method_dispatcher(SimStruct *S, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_hdlsllib_method_dispatcher(SimStruct *S, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_hdlmdlgenlib_method_dispatcher(SimStruct *S, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data);
unsigned int sf_machine_global_method_dispatcher(SimStruct *simstructPtr, const
  char *machineName, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (!strcmp(machineName,"ADXL345_read")) {
    return(sf_ADXL345_read_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"hdlsllib")) {
    return(sf_hdlsllib_method_dispatcher(simstructPtr,chartFileNumber,specsCksum,
            method,data));
  }

  if (!strcmp(machineName,"hdlmdlgenlib")) {
    return(sf_hdlmdlgenlib_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  return 0;
}

extern void ADXL345_read_terminator(void);
extern void hdlsllib_terminator(void);
extern void hdlmdlgenlib_terminator(void);
void sf_machine_global_terminator(void)
{
  sfGlobalMdlStartCallCounts--;
  if (sfGlobalMdlStartCallCounts == 0) {
    ADXL345_read_terminator();
    hdlsllib_terminator();
    hdlmdlgenlib_terminator();
    sf_debug_terminate(sfGlobalDebugInstanceStruct);
    sfGlobalDebugInstanceStruct = NULL;
  }

  return;
}

extern void ADXL345_read_initializer(void);
extern void hdlsllib_initializer(void);
extern void hdlmdlgenlib_initializer(void);
extern void ADXL345_read_register_exported_symbols(SimStruct* S);
extern void hdlsllib_register_exported_symbols(SimStruct* S);
extern void hdlmdlgenlib_register_exported_symbols(SimStruct* S);
extern void ADXL345_read_debug_initialize(struct SfDebugInstanceStruct*);
extern void hdlsllib_debug_initialize(struct SfDebugInstanceStruct*);
extern void hdlmdlgenlib_debug_initialize(struct SfDebugInstanceStruct*);
void sf_register_machine_exported_symbols(SimStruct* S)
{
  ADXL345_read_register_exported_symbols(S);
  hdlsllib_register_exported_symbols(S);
  hdlmdlgenlib_register_exported_symbols(S);
}

bool callCustomFcn(char initFlag)
{
  return false;
}

void sf_machine_global_initializer(SimStruct* S)
{
  bool simModeIsRTWGen = sim_mode_is_rtw_gen(S);
  sfGlobalMdlStartCallCounts++;
  if (sfGlobalMdlStartCallCounts == 1) {
    if (simModeIsRTWGen) {
      sf_register_machine_exported_symbols(S);
    }

    sfGlobalDebugInstanceStruct = sf_debug_create_debug_instance_struct();
    if (!simModeIsRTWGen) {
      ADXL345_read_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    ADXL345_read_initializer();
    if (!simModeIsRTWGen) {
      hdlsllib_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    hdlsllib_initializer();
    if (!simModeIsRTWGen) {
      hdlmdlgenlib_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    hdlmdlgenlib_initializer();
  }

  return;
}

#include "sf_runtime/stateflow_mdl_methods.stub"
