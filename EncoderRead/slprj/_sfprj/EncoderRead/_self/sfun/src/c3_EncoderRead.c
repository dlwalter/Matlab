/* Include files */

#include <stddef.h>
#include "blas.h"
#include "EncoderRead_sfun.h"
#include "c3_EncoderRead.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "EncoderRead_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c3_IN_I1                       ((uint8_T)1U)
#define c3_IN_I2                       ((uint8_T)2U)
#define c3_IN_I3                       ((uint8_T)3U)
#define c3_IN_I4                       ((uint8_T)4U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c3_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_c_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_e_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_f_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_h_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_j_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_k_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_l_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_m_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_n_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_p_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_r_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_s_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_t_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_u_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_v_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_w_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_x_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_y_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ab_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_bb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_cb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_db_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance);
static void initialize_params_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance);
static void enable_c3_EncoderRead(SFc3_EncoderReadInstanceStruct *chartInstance);
static void disable_c3_EncoderRead(SFc3_EncoderReadInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_EncoderRead
  (SFc3_EncoderReadInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_EncoderRead
  (SFc3_EncoderReadInstanceStruct *chartInstance);
static void set_sim_state_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_EncoderRead
  (SFc3_EncoderReadInstanceStruct *chartInstance);
static void finalize_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance);
static void sf_gateway_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance);
static void mdl_start_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance);
static void initSimStructsc3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance);
static void c3_I1(SFc3_EncoderReadInstanceStruct *chartInstance);
static void c3_I2(SFc3_EncoderReadInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static boolean_T c3_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_sf_internal_predicateOutput, const char_T
  *c3_identifier);
static boolean_T c3_b_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static real_T c3_c_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_d_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_b_sfEvent, const char_T *c3_identifier);
static int32_T c3_e_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_f_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_b_tp_I4, const char_T *c3_identifier);
static uint8_T c3_g_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static void c3_h_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct *chartInstance,
  const mxArray *c3_b_dataWrittenToVector, const char_T *c3_identifier,
  boolean_T c3_y[2]);
static void c3_i_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T c3_y[2]);
static const mxArray *c3_j_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier);
static const mxArray *c3_k_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_updateDataWrittenToVector(SFc3_EncoderReadInstanceStruct
  *chartInstance, uint32_T c3_vectorIndex);
static void c3_errorIfDataNotWrittenToFcn(SFc3_EncoderReadInstanceStruct
  *chartInstance, uint32_T c3_vectorIndex, uint32_T c3_dataNumber, uint32_T
  c3_ssIdOfSourceObject, int32_T c3_offsetInSourceObject, int32_T
  c3_lengthInSourceObject);
static void init_dsm_address_info(SFc3_EncoderReadInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_EncoderReadInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance)
{
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_tp_I1 = 0U;
  chartInstance->c3_tp_I2 = 0U;
  chartInstance->c3_tp_I3 = 0U;
  chartInstance->c3_tp_I4 = 0U;
  chartInstance->c3_is_active_c3_EncoderRead = 0U;
  chartInstance->c3_is_c3_EncoderRead = c3_IN_NO_ACTIVE_CHILD;
  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  chartInstance->c3_is_active_c3_EncoderRead = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c3_sfEvent);
  chartInstance->c3_is_c3_EncoderRead = c3_IN_I4;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  chartInstance->c3_tp_I4 = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_EncoderReadMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initialize_params_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_EncoderRead(SFc3_EncoderReadInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_EncoderRead(SFc3_EncoderReadInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_debugger_state_c3_EncoderRead
  (SFc3_EncoderReadInstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c3_is_active_c3_EncoderRead == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  }

  _SFD_SET_ANIMATION(c3_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_EncoderRead
  (SFc3_EncoderReadInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  int32_T c3_hoistedGlobal;
  int32_T c3_u;
  const mxArray *c3_b_y = NULL;
  boolean_T c3_b_hoistedGlobal;
  boolean_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  uint8_T c3_c_hoistedGlobal;
  uint8_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  uint8_T c3_d_hoistedGlobal;
  uint8_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  int32_T c3_i0;
  boolean_T c3_e_u[2];
  const mxArray *c3_f_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(5, 1), false);
  c3_hoistedGlobal = *chartInstance->c3_count;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = chartInstance->c3_reset_val;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = chartInstance->c3_is_active_c3_EncoderRead;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = chartInstance->c3_is_c3_EncoderRead;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  for (c3_i0 = 0; c3_i0 < 2; c3_i0++) {
    c3_e_u[c3_i0] = chartInstance->c3_dataWrittenToVector[c3_i0];
  }

  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_e_u, 11, 0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c3_y, 4, c3_f_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  boolean_T c3_bv0[2];
  int32_T c3_i1;
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_count = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 0)), "count");
  chartInstance->c3_reset_val = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 1)), "reset_val");
  chartInstance->c3_is_active_c3_EncoderRead = c3_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 2)),
     "is_active_c3_EncoderRead");
  chartInstance->c3_is_c3_EncoderRead = c3_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 3)), "is_c3_EncoderRead");
  c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 4)),
                        "dataWrittenToVector", c3_bv0);
  for (c3_i1 = 0; c3_i1 < 2; c3_i1++) {
    chartInstance->c3_dataWrittenToVector[c3_i1] = c3_bv0[c3_i1];
  }

  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 5)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_EncoderRead(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_EncoderRead
  (SFc3_EncoderReadInstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I1) {
      chartInstance->c3_tp_I1 = 1U;
    } else {
      chartInstance->c3_tp_I1 = 0U;
    }

    if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I2) {
      chartInstance->c3_tp_I2 = 1U;
    } else {
      chartInstance->c3_tp_I2 = 0U;
    }

    if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I3) {
      chartInstance->c3_tp_I3 = 1U;
    } else {
      chartInstance->c3_tp_I3 = 0U;
    }

    if (chartInstance->c3_is_c3_EncoderRead == c3_IN_I4) {
      chartInstance->c3_tp_I4 = 1U;
    } else {
      chartInstance->c3_tp_I4 = 0U;
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_gateway_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 0.0;
  c3_set_sim_state_side_effects_c3_EncoderRead(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_A, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_B, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_reset, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_reset_val, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_enable, 5U);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  switch (chartInstance->c3_is_c3_EncoderRead) {
   case c3_IN_I1:
    CV_CHART_EVAL(1, 0, 1);
    c3_I1(chartInstance);
    break;

   case c3_IN_I2:
    CV_CHART_EVAL(1, 0, 2);
    c3_I2(chartInstance);
    break;

   case c3_IN_I3:
    CV_CHART_EVAL(1, 0, 3);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_I3 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_EncoderRead = c3_IN_I4;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_I4 = 1U;
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
    break;

   case c3_IN_I4:
    CV_CHART_EVAL(1, 0, 4);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    c3_out = CV_EML_IF(0, 0, 0, *chartInstance->c3_enable);
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_b_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U,
        c3_b_sf_marshallOut, c3_b_sf_marshallIn);
      *chartInstance->c3_count = 0;
      c3_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
      chartInstance->c3_reset_val = *chartInstance->c3_reset;
      c3_updateDataWrittenToVector(chartInstance, 1U);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_reset_val, 4U);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c3_tp_I4 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_EncoderRead = c3_IN_I1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_I1 = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c3_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c3_sfEvent);
    break;

   default:
    CV_CHART_EVAL(1, 0, 0);
    chartInstance->c3_is_c3_EncoderRead = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_EncoderReadMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc3_EncoderRead(SFc3_EncoderReadInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c3_I1(SFc3_EncoderReadInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_c_nargin = 0.0;
  real_T c3_c_nargout = 0.0;
  int64_T c3_i2;
  real_T c3_d_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  boolean_T c3_c_out;
  real_T c3_e_nargin = 0.0;
  real_T c3_e_nargout = 0.0;
  int64_T c3_i3;
  real_T c3_f_nargin = 0.0;
  real_T c3_f_nargout = 1.0;
  boolean_T c3_d_out;
  real_T c3_g_nargin = 0.0;
  real_T c3_g_nargout = 1.0;
  boolean_T c3_e_out;
  real_T c3_h_nargin = 0.0;
  real_T c3_h_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_e_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  c3_out = CV_EML_IF(1, 0, 0, *chartInstance->c3_A);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_c_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    c3_b_out = CV_EML_IF(3, 0, 0, (int32_T)*chartInstance->c3_A == (int32_T)
                         *chartInstance->c3_B);
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_d_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U,
        c3_b_sf_marshallOut, c3_b_sf_marshallIn);
      c3_errorIfDataNotWrittenToFcn(chartInstance, 0U, 2U, 25U, 15, 5);
      c3_i2 = (int64_T)*chartInstance->c3_count + 1LL;
      if (c3_i2 > 2147483647LL) {
        CV_SATURATION_EVAL(5, 3, 0, 0, 1);
        c3_i2 = 2147483647LL;
      } else {
        if (CV_SATURATION_EVAL(5, 3, 0, 0, c3_i2 < -2147483648LL)) {
          c3_i2 = -2147483648LL;
        }
      }

      *chartInstance->c3_count = (int32_T)c3_i2;
      c3_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c3_tp_I1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_EncoderRead = c3_IN_I2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_I2 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_f_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U,
        c3_b_sf_marshallOut, c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      c3_c_out = CV_EML_IF(4, 0, 0, (int32_T)*chartInstance->c3_A != (int32_T)
                           *chartInstance->c3_B);
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_g_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        c3_errorIfDataNotWrittenToFcn(chartInstance, 0U, 2U, 26U, 15, 5);
        c3_i3 = (int64_T)*chartInstance->c3_count - 1LL;
        if (c3_i3 > 2147483647LL) {
          CV_SATURATION_EVAL(5, 4, 0, 0, 1);
          c3_i3 = 2147483647LL;
        } else {
          if (CV_SATURATION_EVAL(5, 4, 0, 0, c3_i3 < -2147483648LL)) {
            c3_i3 = -2147483648LL;
          }
        }

        *chartInstance->c3_count = (int32_T)c3_i3;
        c3_updateDataWrittenToVector(chartInstance, 0U);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c3_tp_I1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_EncoderRead = c3_IN_I2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_I2 = 1U;
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1 == true) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_n_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    c3_d_out = CV_EML_IF(9, 0, 0, !*chartInstance->c3_enable);
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_I1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_EncoderRead = c3_IN_I3;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_I3 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_j_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargin, 0U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargout, 1U,
        c3_b_sf_marshallOut, c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      c3_errorIfDataNotWrittenToFcn(chartInstance, 1U, 4U, 30U, 10, 9);
      c3_e_out = CV_EML_IF(7, 0, 0, (int32_T)*chartInstance->c3_reset !=
                           (int32_T)chartInstance->c3_reset_val);
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_k_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargin, 0U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargout, 1U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        *chartInstance->c3_count = 0;
        c3_updateDataWrittenToVector(chartInstance, 0U);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
        chartInstance->c3_reset_val = *chartInstance->c3_reset;
        c3_updateDataWrittenToVector(chartInstance, 1U);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_reset_val, 4U);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c3_tp_I1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_EncoderRead = c3_IN_I1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_I1 = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     chartInstance->c3_sfEvent);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
}

static void c3_I2(SFc3_EncoderReadInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_b_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_c_nargin = 0.0;
  real_T c3_c_nargout = 0.0;
  int64_T c3_i4;
  real_T c3_d_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  boolean_T c3_c_out;
  real_T c3_e_nargin = 0.0;
  real_T c3_e_nargout = 0.0;
  int64_T c3_i5;
  real_T c3_f_nargin = 0.0;
  real_T c3_f_nargout = 1.0;
  boolean_T c3_d_out;
  real_T c3_g_nargin = 0.0;
  real_T c3_g_nargout = 1.0;
  boolean_T c3_e_out;
  real_T c3_h_nargin = 0.0;
  real_T c3_h_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_r_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  c3_out = CV_EML_IF(2, 0, 0, !*chartInstance->c3_A);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_o_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    c3_b_out = CV_EML_IF(5, 0, 0, (int32_T)*chartInstance->c3_A == (int32_T)
                         *chartInstance->c3_B);
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_p_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U,
        c3_b_sf_marshallOut, c3_b_sf_marshallIn);
      c3_errorIfDataNotWrittenToFcn(chartInstance, 0U, 2U, 27U, 17, 5);
      c3_i4 = (int64_T)*chartInstance->c3_count + 1LL;
      if (c3_i4 > 2147483647LL) {
        CV_SATURATION_EVAL(5, 5, 0, 0, 1);
        c3_i4 = 2147483647LL;
      } else {
        if (CV_SATURATION_EVAL(5, 5, 0, 0, c3_i4 < -2147483648LL)) {
          c3_i4 = -2147483648LL;
        }
      }

      *chartInstance->c3_count = (int32_T)c3_i4;
      c3_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c3_tp_I2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_EncoderRead = c3_IN_I1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_I1 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_l_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U,
        c3_b_sf_marshallOut, c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      c3_c_out = CV_EML_IF(6, 0, 0, (int32_T)*chartInstance->c3_A != (int32_T)
                           *chartInstance->c3_B);
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_m_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        c3_errorIfDataNotWrittenToFcn(chartInstance, 0U, 2U, 28U, 17, 5);
        c3_i5 = (int64_T)*chartInstance->c3_count - 1LL;
        if (c3_i5 > 2147483647LL) {
          CV_SATURATION_EVAL(5, 6, 0, 0, 1);
          c3_i5 = 2147483647LL;
        } else {
          if (CV_SATURATION_EVAL(5, 6, 0, 0, c3_i5 < -2147483648LL)) {
            c3_i5 = -2147483648LL;
          }
        }

        *chartInstance->c3_count = (int32_T)c3_i5;
        c3_updateDataWrittenToVector(chartInstance, 0U);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c3_tp_I2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_EncoderRead = c3_IN_I1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_I1 = 1U;
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1 == true) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                 chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_q_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    c3_d_out = CV_EML_IF(11, 0, 0, !*chartInstance->c3_enable);
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_I2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_EncoderRead = c3_IN_I3;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_I3 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_h_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargin, 0U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargout, 1U,
        c3_b_sf_marshallOut, c3_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      c3_errorIfDataNotWrittenToFcn(chartInstance, 1U, 4U, 31U, 10, 9);
      c3_e_out = CV_EML_IF(8, 0, 0, (int32_T)*chartInstance->c3_reset !=
                           (int32_T)chartInstance->c3_reset_val);
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_i_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargin, 0U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargout, 1U,
          c3_b_sf_marshallOut, c3_b_sf_marshallIn);
        *chartInstance->c3_count = 0;
        c3_updateDataWrittenToVector(chartInstance, 0U);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_count, 2U);
        chartInstance->c3_reset_val = *chartInstance->c3_reset;
        c3_updateDataWrittenToVector(chartInstance, 1U);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_reset_val, 4U);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c3_tp_I2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_EncoderRead = c3_IN_I2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_I2 = 1U;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     chartInstance->c3_sfEvent);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber)
{
  (void)c3_machineNumber;
  (void)c3_chartNumber;
  (void)c3_instanceNumber;
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  boolean_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(boolean_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static boolean_T c3_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_sf_internal_predicateOutput, const char_T
  *c3_identifier)
{
  boolean_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_sf_internal_predicateOutput), &c3_thisId);
  sf_mex_destroy(&c3_sf_internal_predicateOutput);
  return c3_y;
}

static boolean_T c3_b_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  boolean_T c3_y;
  boolean_T c3_b0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b0, 1, 11, 0U, 0, 0U, 0);
  c3_y = c3_b0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_sf_internal_predicateOutput;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  boolean_T c3_y;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_sf_internal_predicateOutput = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_sf_internal_predicateOutput), &c3_thisId);
  sf_mex_destroy(&c3_sf_internal_predicateOutput);
  *(boolean_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_c_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargout;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_nargout = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray *sf_c3_EncoderRead_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static int32_T c3_d_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_b_sfEvent, const char_T *c3_identifier)
{
  int32_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  return c3_y;
}

static int32_T c3_e_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i6;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i6, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i6;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static uint8_T c3_f_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_b_tp_I4, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_I4), &c3_thisId);
  sf_mex_destroy(&c3_b_tp_I4);
  return c3_y;
}

static uint8_T c3_g_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_tp_I4;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_EncoderReadInstanceStruct *chartInstance;
  chartInstance = (SFc3_EncoderReadInstanceStruct *)chartInstanceVoid;
  c3_b_tp_I4 = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_I4), &c3_thisId);
  sf_mex_destroy(&c3_b_tp_I4);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static void c3_h_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct *chartInstance,
  const mxArray *c3_b_dataWrittenToVector, const char_T *c3_identifier,
  boolean_T c3_y[2])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_dataWrittenToVector),
                        &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_dataWrittenToVector);
}

static void c3_i_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T c3_y[2])
{
  boolean_T c3_bv1[2];
  int32_T c3_i7;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_bv1, 1, 11, 0U, 1, 0U, 1, 2);
  for (c3_i7 = 0; c3_i7 < 2; c3_i7++) {
    c3_y[c3_i7] = c3_bv1[c3_i7];
  }

  sf_mex_destroy(&c3_u);
}

static const mxArray *c3_j_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  sf_mex_assign(&c3_y, c3_k_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId), false);
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_k_emlrt_marshallIn(SFc3_EncoderReadInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  (void)chartInstance;
  (void)c3_parentId;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), false);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_updateDataWrittenToVector(SFc3_EncoderReadInstanceStruct
  *chartInstance, uint32_T c3_vectorIndex)
{
  chartInstance->c3_dataWrittenToVector[(uint32_T)_SFD_EML_ARRAY_BOUNDS_CHECK(0U,
    (int32_T)c3_vectorIndex, 0, 1, 1, 0)] = true;
}

static void c3_errorIfDataNotWrittenToFcn(SFc3_EncoderReadInstanceStruct
  *chartInstance, uint32_T c3_vectorIndex, uint32_T c3_dataNumber, uint32_T
  c3_ssIdOfSourceObject, int32_T c3_offsetInSourceObject, int32_T
  c3_lengthInSourceObject)
{
  (void)c3_ssIdOfSourceObject;
  (void)c3_offsetInSourceObject;
  (void)c3_lengthInSourceObject;
  if (!chartInstance->c3_dataWrittenToVector[(uint32_T)
      _SFD_EML_ARRAY_BOUNDS_CHECK(0U, (int32_T)c3_vectorIndex, 0, 1, 1, 0)]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(c3_dataNumber);
  }
}

static void init_dsm_address_info(SFc3_EncoderReadInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_EncoderReadInstanceStruct
  *chartInstance)
{
  chartInstance->c3_A = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_B = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_count = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_reset = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_enable = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
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

void sf_c3_EncoderRead_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2111081277U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(831808098U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2581804480U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(394048751U);
}

mxArray* sf_c3_EncoderRead_get_post_codegen_info(void);
mxArray *sf_c3_EncoderRead_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("lRnfInFuRBzdJUZ9YZpy0C");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo = sf_c3_EncoderRead_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_EncoderRead_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_EncoderRead_jit_fallback_info(void)
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

mxArray *sf_c3_EncoderRead_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c3_EncoderRead_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c3_EncoderRead(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[6],T\"count\",},{M[3],M[32],T\"reset_val\",},{M[8],M[0],T\"is_active_c3_EncoderRead\",},{M[9],M[0],T\"is_c3_EncoderRead\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_EncoderRead_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_EncoderReadInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc3_EncoderReadInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _EncoderReadMachineNumber_,
           3,
           4,
           13,
           0,
           6,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_EncoderReadMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_EncoderReadMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _EncoderReadMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"A");
          _SFD_SET_DATA_PROPS(1,1,1,0,"B");
          _SFD_SET_DATA_PROPS(2,2,0,1,"count");
          _SFD_SET_DATA_PROPS(3,1,1,0,"reset");
          _SFD_SET_DATA_PROPS(4,0,0,0,"reset_val");
          _SFD_SET_DATA_PROPS(5,1,1,0,"enable");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(0,0,0,1,15,1,15);
        _SFD_CV_INIT_EML(3,0,0,1,0,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_SATURATION(3,0,0,15,-1,24);
        _SFD_CV_INIT_EML_IF(3,0,0,1,5,1,5);
        _SFD_CV_INIT_EML(1,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,8,1,8);
        _SFD_CV_INIT_EML(4,0,0,1,0,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_SATURATION(4,0,0,15,-1,24);
        _SFD_CV_INIT_EML_IF(4,0,0,1,5,1,5);
        _SFD_CV_INIT_EML(8,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(8,0,0,1,19,1,19);
        _SFD_CV_INIT_EML(7,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(7,0,0,1,19,1,19);
        _SFD_CV_INIT_EML(6,0,0,1,0,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_SATURATION(6,0,0,17,-1,26);
        _SFD_CV_INIT_EML_IF(6,0,0,1,7,1,7);
        _SFD_CV_INIT_EML(9,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(9,0,0,1,16,1,16);
        _SFD_CV_INIT_EML(5,0,0,1,0,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_SATURATION(5,0,0,17,-1,26);
        _SFD_CV_INIT_EML_IF(5,0,0,1,7,1,7);
        _SFD_CV_INIT_EML(11,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(11,0,0,1,16,1,16);
        _SFD_CV_INIT_EML(2,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(2,0,0,1,11,1,11);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)c3_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c3_A);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c3_B);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c3_count);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c3_reset);
        _SFD_SET_DATA_VALUE_PTR(4U, &chartInstance->c3_reset_val);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c3_enable);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _EncoderReadMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "MTO0vtQ81vZM1qdZdK6jRE";
}

static void sf_opaque_initialize_c3_EncoderRead(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_EncoderReadInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*)
    chartInstanceVar);
  initialize_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_EncoderRead(void *chartInstanceVar)
{
  enable_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_EncoderRead(void *chartInstanceVar)
{
  disable_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_EncoderRead(void *chartInstanceVar)
{
  sf_gateway_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_EncoderRead(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_EncoderRead(SimStruct* S, const mxArray
  *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c3_EncoderRead(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_EncoderReadInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_EncoderRead_optimization_info();
    }

    finalize_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_EncoderRead((SFc3_EncoderReadInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_EncoderRead(SimStruct *S)
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
    initialize_params_c3_EncoderRead((SFc3_EncoderReadInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_EncoderRead(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_EncoderRead_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,3,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,3);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(725797932U));
  ssSetChecksum1(S,(2280382080U));
  ssSetChecksum2(S,(464880064U));
  ssSetChecksum3(S,(2791931544U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_EncoderRead(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_EncoderRead(SimStruct *S)
{
  SFc3_EncoderReadInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc3_EncoderReadInstanceStruct *)utMalloc(sizeof
    (SFc3_EncoderReadInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_EncoderReadInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_EncoderRead;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_EncoderRead;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_EncoderRead;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_EncoderRead;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_EncoderRead;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_EncoderRead;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_EncoderRead;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_EncoderRead;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_EncoderRead;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_EncoderRead;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_EncoderRead;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
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
  chart_debug_initialization(S,1);
}

void c3_EncoderRead_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_EncoderRead(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_EncoderRead(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_EncoderRead(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_EncoderRead_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
