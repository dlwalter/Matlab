/* Include files */

#include <stddef.h>
#include "blas.h"
#include "hdlsllib_sfun.h"
#include "c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(NULL,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c6_k9LAYxhP9ttLrWBQWHdq4B_b_lidx (15.0)
#define c6_k9LAYxhP9ttLrWBQWHdq4B_b_ridx (8.0)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_eml_mx;
static const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_eml_mx;

/* Function Declarations */
static void initialize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void initialize_params_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void enable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void disable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void set_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_st);
static void finalize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void sf_gateway_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void mdl_start_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void initSimStructsc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T
  c6_k9LAYxhP9ttLrWBQWHdq4B_machineNumber, uint32_T
  c6_k9LAYxhP9ttLrWBQWHdq4B_chartNumber, uint32_T
  c6_k9LAYxhP9ttLrWBQWHdq4B_instanceNumber);
static void c6_k9LAYxhP9ttLrWBQWHdq4B_info_helper(const mxArray
  **c6_k9LAYxhP9ttLrWBQWHdq4B_info);
static const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(const char
  * c6_k9LAYxhP9ttLrWBQWHdq4B_b_u);
static const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(const
  uint32_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_u);
static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_y, const char_T
   *c6_k9LAYxhP9ttLrWBQWHdq4B_identifier);
static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, const emlrtMsgIdentifier
   *c6_k9LAYxhP9ttLrWBQWHdq4B_parentId);
static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_c_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_,
   const char_T *c6_k9LAYxhP9ttLrWBQWHdq4B_identifier);
static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_d_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, const emlrtMsgIdentifier
   *c6_k9LAYxhP9ttLrWBQWHdq4B_parentId);
static void init_dsm_address_info
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);
static void init_simulink_io_address
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_hd
    = 0U;
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_eml_mx, sf_mex_call("numerictype",
    1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15, "Unsigned",
    15, "WordLength", 6, 8.0, 15, "FractionLength", 6, 0.0, 15, "BinaryPoint", 6,
    0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0), true);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_eml_mx, sf_mex_call("fimath", 1U, 42U,
    15, "RoundMode", 15, "nearest", 15, "RoundingMethod", 15, "Nearest", 15,
    "OverflowMode", 15, "saturate", 15, "OverflowAction", 15, "Saturate", 15,
    "ProductMode", 15, "FullPrecision", 15, "ProductWordLength", 6, 32.0, 15,
    "MaxProductWordLength", 6, 65535.0, 15, "ProductFractionLength", 6, 30.0, 15,
    "ProductFixedExponent", 6, -30.0, 15, "ProductSlope", 6,
    9.3132257461547852E-10, 15, "ProductSlopeAdjustmentFactor", 6, 1.0, 15,
    "ProductBias", 6, 0.0, 15, "SumMode", 15, "FullPrecision", 15,
    "SumWordLength", 6, 32.0, 15, "MaxSumWordLength", 6, 65535.0, 15,
    "SumFractionLength", 6, 30.0, 15, "SumFixedExponent", 6, -30.0, 15,
    "SumSlope", 6, 9.3132257461547852E-10, 15, "SumSlopeAdjustmentFactor", 6,
    1.0, 15, "SumBias", 6, 0.0, 15, "CastBeforeSum", 3, true), true);
}

static void initialize_params_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  real_T c6_k9LAYxhP9ttLrWBQWHdq4B_d0;
  real_T c6_k9LAYxhP9ttLrWBQWHdq4B_d1;
  sf_mex_import_named("lidx", sf_mex_get_sfun_param(chartInstance->S, 0, 0),
                      &c6_k9LAYxhP9ttLrWBQWHdq4B_d0, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_lidx = c6_k9LAYxhP9ttLrWBQWHdq4B_d0;
  sf_mex_import_named("ridx", sf_mex_get_sfun_param(chartInstance->S, 1, 0),
                      &c6_k9LAYxhP9ttLrWBQWHdq4B_d1, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_ridx = c6_k9LAYxhP9ttLrWBQWHdq4B_d1;
}

static void enable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static const mxArray *get_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_st;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_c_y = NULL;
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_u;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_d_y = NULL;
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_c_u;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_e_y = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_st = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = NULL;
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_y, sf_mex_createcellmatrix(2, 1),
                false);
  c6_k9LAYxhP9ttLrWBQWHdq4B_c_y = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_u = *chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_y;
  c6_k9LAYxhP9ttLrWBQWHdq4B_d_y = NULL;
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_d_y, sf_mex_create("y",
    &c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_c_y, sf_mex_call("fi", 1U, 8U, 15,
    "fimath", 14, sf_mex_dup(c6_k9LAYxhP9ttLrWBQWHdq4B_eml_mx), 15,
    "numerictype", 14, sf_mex_dup(c6_k9LAYxhP9ttLrWBQWHdq4B_b_eml_mx), 15,
    "simulinkarray", 14, c6_k9LAYxhP9ttLrWBQWHdq4B_d_y, 15, "fimathislocal", 3,
    true), false);
  sf_mex_setcell(c6_k9LAYxhP9ttLrWBQWHdq4B_b_y, 0, c6_k9LAYxhP9ttLrWBQWHdq4B_c_y);
  c6_k9LAYxhP9ttLrWBQWHdq4B_c_u =
    chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_hd;
  c6_k9LAYxhP9ttLrWBQWHdq4B_e_y = NULL;
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_e_y, sf_mex_create("y",
    &c6_k9LAYxhP9ttLrWBQWHdq4B_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_k9LAYxhP9ttLrWBQWHdq4B_b_y, 1, c6_k9LAYxhP9ttLrWBQWHdq4B_e_y);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_st, c6_k9LAYxhP9ttLrWBQWHdq4B_b_y,
                false);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_st;
}

static void set_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_st)
{
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_u;
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_u = sf_mex_dup(c6_k9LAYxhP9ttLrWBQWHdq4B_st);
  *chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_y =
    c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, 0)), "y");
  chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_hd
    = c6_k9LAYxhP9ttLrWBQWHdq4B_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, 1)),
    "is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib");
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_u);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_st);
}

static void finalize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  (void)chartInstance;
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_eml_mx);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_eml_mx);
}

static void sf_gateway_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  *chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_y = (uint8_T)
    (*chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_u >> 8 & 255ULL);
}

static void mdl_start_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T
  c6_k9LAYxhP9ttLrWBQWHdq4B_machineNumber, uint32_T
  c6_k9LAYxhP9ttLrWBQWHdq4B_chartNumber, uint32_T
  c6_k9LAYxhP9ttLrWBQWHdq4B_instanceNumber)
{
  (void)c6_k9LAYxhP9ttLrWBQWHdq4B_machineNumber;
  (void)c6_k9LAYxhP9ttLrWBQWHdq4B_chartNumber;
  (void)c6_k9LAYxhP9ttLrWBQWHdq4B_instanceNumber;
}

const mxArray
  *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_nameCaptureInfo = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_nameCaptureInfo, sf_mex_createstruct(
    "structure", 2, 22, 1), false);
  c6_k9LAYxhP9ttLrWBQWHdq4B_info_helper
    (&c6_k9LAYxhP9ttLrWBQWHdq4B_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a
    (&c6_k9LAYxhP9ttLrWBQWHdq4B_nameCaptureInfo);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_nameCaptureInfo;
}

static void c6_k9LAYxhP9ttLrWBQWHdq4B_info_helper(const mxArray
  **c6_k9LAYxhP9ttLrWBQWHdq4B_info)
{
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs0 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs0 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs1 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs1 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs2 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs2 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs3 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs3 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs4 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs4 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs5 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs5 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs6 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs6 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs7 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs7 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs8 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs8 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs9 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs9 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs10 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs10 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs11 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs11 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs12 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs12 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs13 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs13 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs14 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs14 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs15 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs15 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs16 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs16 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs17 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs17 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs18 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs18 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs19 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs19 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs20 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs20 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_rhs21 = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_lhs21 = NULL;
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(""), "context",
                  "context", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("cast_to_fi"),
                  "name", "name", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/hdlcoder/hdllib/sl_lib/cast_to_fi.m"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1368215566U),
                  "fileTimeLo", "fileTimeLo", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 0);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs0, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs0, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs0), "rhs", "rhs", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs0), "lhs", "lhs", 0);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(""), "context",
                  "context", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("bitsliceget"),
                  "name", "name", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitsliceget.m"),
                  "resolved", "resolved", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1363742658U),
                  "fileTimeLo", "fileTimeLo", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 1);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs1, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs1, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs1), "rhs", "rhs", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs1), "lhs", "lhs", 1);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitsliceget.m"),
                  "context", "context", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isfi"), "name",
                  "name", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1346542758U),
                  "fileTimeLo", "fileTimeLo", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 2);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs2, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs2, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs2), "rhs", "rhs", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs2), "lhs", "lhs", 2);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "context",
                  "context", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isnumerictype"),
                  "name", "name", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "embedded.numerictype"), "dominantType", "dominantType", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1398907998U),
                  "fileTimeLo", "fileTimeLo", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 3);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs3, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs3, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs3), "rhs", "rhs", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs3), "lhs", "lhs", 3);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitsliceget.m"),
                  "context", "context", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isfixed"), "name",
                  "name", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isfixed.m"),
                  "resolved", "resolved", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1346542778U),
                  "fileTimeLo", "fileTimeLo", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 4);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs4, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs4, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs4), "rhs", "rhs", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs4), "lhs", "lhs", 4);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isfixed.m"),
                  "context", "context", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("get"), "name",
                  "name", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "embedded.numerictype"), "dominantType", "dominantType", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@numerictype/get.m"),
                  "resolved", "resolved", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1378328382U),
                  "fileTimeLo", "fileTimeLo", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 5);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs5, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs5, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs5), "rhs", "rhs", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs5), "lhs", "lhs", 5);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitsliceget.m"),
                  "context", "context", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "eml_bitop_index_checks"), "name", "name", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_bitop_index_checks.m"),
                  "resolved", "resolved", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1363742660U),
                  "fileTimeLo", "fileTimeLo", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 6);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs6, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs6, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs6), "rhs", "rhs", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs6), "lhs", "lhs", 6);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_bitop_index_checks.m"),
                  "context", "context", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isfi"), "name",
                  "name", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1346542758U),
                  "fileTimeLo", "fileTimeLo", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 7);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs7, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs7, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs7), "rhs", "rhs", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs7), "lhs", "lhs", 7);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_bitop_index_checks.m"),
                  "context", "context", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "eml_isslopebiasscaled"), "name", "name", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_isslopebiasscaled.m"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1289552046U),
                  "fileTimeLo", "fileTimeLo", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 8);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs8, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs8, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs8), "rhs", "rhs", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs8), "lhs", "lhs", 8);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_isslopebiasscaled.m"),
                  "context", "context", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("get"), "name",
                  "name", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "embedded.numerictype"), "dominantType", "dominantType", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@numerictype/get.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1378328382U),
                  "fileTimeLo", "fileTimeLo", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 9);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs9, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs9, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs9), "rhs", "rhs", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs9), "lhs", "lhs", 9);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_bitop_index_checks.m"),
                  "context", "context", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isfi"), "name",
                  "name", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("double"),
                  "dominantType", "dominantType", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1346542758U),
                  "fileTimeLo", "fileTimeLo", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 10);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs10, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs10, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs10), "rhs", "rhs", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs10), "lhs", "lhs", 10);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "context",
                  "context", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isnumerictype"),
                  "name", "name", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("char"),
                  "dominantType", "dominantType", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1398907998U),
                  "fileTimeLo", "fileTimeLo", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 11);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs11, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs11, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs11), "rhs", "rhs", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs11), "lhs", "lhs", 11);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_bitop_index_checks.m"),
                  "context", "context", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "eml_scalexp_compatible"), "name", "name", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("embedded.fi"),
                  "dominantType", "dominantType", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1286851196U),
                  "fileTimeLo", "fileTimeLo", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 12);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs12, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs12, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs12), "rhs", "rhs", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs12), "lhs", "lhs", 12);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitsliceget.m"),
                  "context", "context", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("numerictype"),
                  "name", "name", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("double"),
                  "dominantType", "dominantType", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/numerictype.m"), "resolved",
                  "resolved", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1348224318U),
                  "fileTimeLo", "fileTimeLo", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 13);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs13, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs13, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs13), "rhs", "rhs", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs13), "lhs", "lhs", 13);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/numerictype.m"), "context",
                  "context", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("length"), "name",
                  "name", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("cell"),
                  "dominantType", "dominantType", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved",
                  "resolved", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1303178606U),
                  "fileTimeLo", "fileTimeLo", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 14);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs14, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs14, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs14), "rhs", "rhs", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs14), "lhs", "lhs", 14);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitsliceget.m"),
                  "context", "context", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("fi_impl"), "name",
                  "name", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(""),
                  "dominantType", "dominantType", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m"), "resolved",
                  "resolved", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1386456352U),
                  "fileTimeLo", "fileTimeLo", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 15);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs15, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs15, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs15), "rhs", "rhs", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs15), "lhs", "lhs", 15);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m"), "context",
                  "context", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isnumerictype"),
                  "name", "name", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("char"),
                  "dominantType", "dominantType", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1398907998U),
                  "fileTimeLo", "fileTimeLo", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 16);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs16, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs16, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs16), "rhs", "rhs", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs16), "lhs", "lhs", 16);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("length"), "name",
                  "name", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("cell"),
                  "dominantType", "dominantType", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved",
                  "resolved", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1303178606U),
                  "fileTimeLo", "fileTimeLo", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 17);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs17, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs17, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs17), "rhs", "rhs", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs17), "lhs", "lhs", 17);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "eml_fi_checkforconst"), "name", "name", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "embedded.numerictype"), "dominantType", "dominantType", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/eml_fi_checkforconst.m"),
                  "resolved", "resolved", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1346542752U),
                  "fileTimeLo", "fileTimeLo", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 18);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs18, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs18, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs18), "rhs", "rhs", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs18), "lhs", "lhs", 18);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("isfi"), "name",
                  "name", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut("double"),
                  "dominantType", "dominantType", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1346542758U),
                  "fileTimeLo", "fileTimeLo", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 19);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs19, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs19, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs19), "rhs", "rhs", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs19), "lhs", "lhs", 19);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "eml_fi_constructor_helper"), "name", "name", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(""),
                  "dominantType", "dominantType", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/fixedpoint/fixedpoint/eml_fi_constructor_helper.m"),
                  "resolved", "resolved", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1376013096U),
                  "fileTimeLo", "fileTimeLo", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 20);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs20, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs20, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs20), "rhs", "rhs", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs20), "lhs", "lhs", 20);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "eml_fi_checkforerror"), "name", "name", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "embedded.numerictype"), "dominantType", "dominantType", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/eml_fi_checkforerror.m"),
                  "resolved", "resolved", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(1360314746U),
                  "fileTimeLo", "fileTimeLo", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "fileTimeHi", "fileTimeHi", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeLo", "mFileTimeLo", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(0U),
                  "mFileTimeHi", "mFileTimeHi", 21);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs21, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs21, sf_mex_createcellmatrix(0, 1),
                false);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs21), "rhs", "rhs", 21);
  sf_mex_addfield(*c6_k9LAYxhP9ttLrWBQWHdq4B_info, sf_mex_duplicatearraysafe
                  (&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs21), "lhs", "lhs", 21);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs0);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs0);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs1);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs1);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs2);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs2);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs3);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs3);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs4);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs4);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs5);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs5);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs6);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs6);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs7);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs7);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs8);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs8);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs9);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs9);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs10);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs10);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs11);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs11);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs12);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs12);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs13);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs13);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs14);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs14);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs15);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs15);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs16);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs16);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs17);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs17);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs18);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs18);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs19);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs19);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs20);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs20);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_rhs21);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_lhs21);
}

static const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallOut(const char
  * c6_k9LAYxhP9ttLrWBQWHdq4B_b_u)
{
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = NULL;
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_y, sf_mex_create("y",
    c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c6_k9LAYxhP9ttLrWBQWHdq4B_b_u)), false);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
}

static const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallOut(const
  uint32_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_u)
{
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = NULL;
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_y, sf_mex_create("y",
    &c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, 7, 0U, 0U, 0U, 0), false);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
}

static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_y, const char_T
   *c6_k9LAYxhP9ttLrWBQWHdq4B_identifier)
{
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_c_y;
  emlrtMsgIdentifier c6_k9LAYxhP9ttLrWBQWHdq4B_thisId;
  c6_k9LAYxhP9ttLrWBQWHdq4B_thisId.fIdentifier =
    c6_k9LAYxhP9ttLrWBQWHdq4B_identifier;
  c6_k9LAYxhP9ttLrWBQWHdq4B_thisId.fParent = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_c_y = c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c6_k9LAYxhP9ttLrWBQWHdq4B_b_y),
     &c6_k9LAYxhP9ttLrWBQWHdq4B_thisId);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_y);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_c_y;
}

static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, const emlrtMsgIdentifier
   *c6_k9LAYxhP9ttLrWBQWHdq4B_parentId)
{
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_mxFi = NULL;
  const mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_mxInt = NULL;
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_u0;
  (void)chartInstance;
  sf_mex_check_fi(c6_k9LAYxhP9ttLrWBQWHdq4B_parentId,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, false, 0U, NULL,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_eml_mx,
                  c6_k9LAYxhP9ttLrWBQWHdq4B_b_eml_mx);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_mxFi, sf_mex_dup
                (c6_k9LAYxhP9ttLrWBQWHdq4B_b_u), false);
  sf_mex_assign(&c6_k9LAYxhP9ttLrWBQWHdq4B_mxInt, sf_mex_call("simulinkarray",
    1U, 1U, 14, sf_mex_dup(c6_k9LAYxhP9ttLrWBQWHdq4B_mxFi)), false);
  sf_mex_import(c6_k9LAYxhP9ttLrWBQWHdq4B_parentId, sf_mex_dup
                (c6_k9LAYxhP9ttLrWBQWHdq4B_mxInt), &c6_k9LAYxhP9ttLrWBQWHdq4B_u0,
                1, 3, 0U, 0, 0U, 0);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_mxFi);
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_mxInt);
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = c6_k9LAYxhP9ttLrWBQWHdq4B_u0;
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_u);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
}

static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_c_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_,
   const char_T *c6_k9LAYxhP9ttLrWBQWHdq4B_identifier)
{
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
  emlrtMsgIdentifier c6_k9LAYxhP9ttLrWBQWHdq4B_thisId;
  c6_k9LAYxhP9ttLrWBQWHdq4B_thisId.fIdentifier =
    c6_k9LAYxhP9ttLrWBQWHdq4B_identifier;
  c6_k9LAYxhP9ttLrWBQWHdq4B_thisId.fParent = NULL;
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = c6_k9LAYxhP9ttLrWBQWHdq4B_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup
     (c6_k9LAYxhP9ttLrWBQWHdq4B_b_is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_),
     &c6_k9LAYxhP9ttLrWBQWHdq4B_thisId);
  sf_mex_destroy
    (&c6_k9LAYxhP9ttLrWBQWHdq4B_b_is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
}

static uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_d_emlrt_marshallIn
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance, const
   mxArray *c6_k9LAYxhP9ttLrWBQWHdq4B_b_u, const emlrtMsgIdentifier
   *c6_k9LAYxhP9ttLrWBQWHdq4B_parentId)
{
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
  uint8_T c6_k9LAYxhP9ttLrWBQWHdq4B_u1;
  (void)chartInstance;
  sf_mex_import(c6_k9LAYxhP9ttLrWBQWHdq4B_parentId, sf_mex_dup
                (c6_k9LAYxhP9ttLrWBQWHdq4B_b_u), &c6_k9LAYxhP9ttLrWBQWHdq4B_u1,
                1, 3, 0U, 0, 0U, 0);
  c6_k9LAYxhP9ttLrWBQWHdq4B_b_y = c6_k9LAYxhP9ttLrWBQWHdq4B_u1;
  sf_mex_destroy(&c6_k9LAYxhP9ttLrWBQWHdq4B_b_u);
  return c6_k9LAYxhP9ttLrWBQWHdq4B_b_y;
}

static void init_dsm_address_info
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance)
{
  chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_u = (uint64_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c6_k9LAYxhP9ttLrWBQWHdq4B_y = (uint8_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1421611539U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(703407644U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3702544675U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3339773630U);
}

mxArray* sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_post_codegen_info(void);
mxArray *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("68Tdry9xWMohAwLhgIgYD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(11));

      {
        const char *fixptFields[] = { "isSigned", "wordLength", "bias", "slope",
          "exponent", "isScaledDouble" };

        mxArray *mxFixpt = mxCreateStructMatrix(1,1,6,fixptFields);
        mxSetField(mxFixpt,0,"isSigned",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"wordLength",mxCreateDoubleScalar(48));
        mxSetField(mxFixpt,0,"bias",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"slope",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"exponent",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"isScaledDouble",mxCreateDoubleScalar(0));
        mxSetField(mxType,0,"fixpt",mxFixpt);
      }

      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(11));

      {
        const char *fixptFields[] = { "isSigned", "wordLength", "bias", "slope",
          "exponent", "isScaledDouble" };

        mxArray *mxFixpt = mxCreateStructMatrix(1,1,6,fixptFields);
        mxSetField(mxFixpt,0,"isSigned",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"wordLength",mxCreateDoubleScalar(8));
        mxSetField(mxFixpt,0,"bias",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"slope",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"exponent",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"isScaledDouble",mxCreateDoubleScalar(0));
        mxSetField(mxType,0,"fixpt",mxFixpt);
      }

      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "incompatibleSymbol", };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 3, infoFields);
  mxArray *fallbackReason = mxCreateString("feature_off");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxArray *fallbackType = mxCreateString("early");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "k9LAYxhP9ttLrWBQWHdq4B";
}

static void sf_opaque_initialize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(void
  *chartInstanceVar)
{
  initialize_params_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*) chartInstanceVar);
  initialize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(void
  *chartInstanceVar)
{
  enable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(void
  *chartInstanceVar)
{
  disable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(void
  *chartInstanceVar)
{
  sf_gateway_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
  (SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(SimStruct*
  S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*)
     chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_hdlsllib_optimization_info();
    }

    finalize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
      ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
    ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    initialize_params_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib
      ((SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(SimStruct *S)
{
  /* Actual parameters from chart:
     lidx ridx
   */
  const char_T *rtParamNames[] = { "lidx", "ridx" };

  ssSetNumRunTimeParams(S,ssGetSFcnParamsCount(S));

  /* registration for lidx*/
  ssRegDlgParamAsRunTimeParam(S, 0, 0, rtParamNames[0], SS_DOUBLE);

  /* registration for ridx*/
  ssRegDlgParamAsRunTimeParam(S, 1, 1, rtParamNames[1], SS_DOUBLE);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_hdlsllib_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,6,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,6,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,6);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,6,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,6,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,6);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3580671897U));
  ssSetChecksum1(S,(2029620124U));
  ssSetChecksum2(S,(2551643976U));
  ssSetChecksum3(S,(2621405662U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(SimStruct *S)
{
  SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct *)utMalloc
    (sizeof(SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllibInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->S = S;
  crtInfo->checksum = SF_RUNTIME_INFO_CHECKSUM;
  crtInfo->instanceInfo = (&(chartInstance->chartInfo));
  crtInfo->isJITEnabled = false;
  crtInfo->compiledInfo = NULL;
  ssSetUserData(S,(void *)(crtInfo));  /* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
}

void c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_k9LAYxhP9ttLrWBQWHdq4B_hdlsllib_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
