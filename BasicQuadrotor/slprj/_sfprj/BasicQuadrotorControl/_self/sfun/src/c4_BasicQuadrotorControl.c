/* Include files */

#include <stddef.h>
#include "blas.h"
#include "BasicQuadrotorControl_sfun.h"
#include "c4_BasicQuadrotorControl.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BasicQuadrotorControl_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c4_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c4_IN_HIGH                     ((uint8_T)1U)
#define c4_IN_LOW                      ((uint8_T)2U)
#define c4_IN_S1                       ((uint8_T)3U)
#define c4_IN_S2                       ((uint8_T)4U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c4_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c4_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c4_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c4_e_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c4_g_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c4_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c4_k_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c4_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_n_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_p_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c4_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void initialize_params_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void enable_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void disable_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c4_update_debugger_state_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void set_sim_state_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c4_st);
static void c4_set_sim_state_side_effects_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void finalize_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void sf_gateway_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void mdl_start_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c4_chartstep_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void initSimStructsc4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber, uint32_T c4_instanceNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static boolean_T c4_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_sf_internal_predicateOutput, const char_T
  *c4_identifier);
static boolean_T c4_b_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static real_T c4_c_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static int32_T c4_d_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static uint8_T c4_e_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_b_tp_S1, const char_T *c4_identifier);
static uint8_T c4_f_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static uint16_T c4_g_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_b_count, const char_T *c4_identifier);
static uint16_T c4_h_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_f_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_i_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_b_dataWrittenToVector, const char_T
  *c4_identifier, boolean_T c4_y[2]);
static void c4_j_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_y[2]);
static const mxArray *c4_k_emlrt_marshallIn
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier);
static const mxArray *c4_l_emlrt_marshallIn
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c4_u,
   const emlrtMsgIdentifier *c4_parentId);
static void c4_updateDataWrittenToVector
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c4_vectorIndex);
static void c4_errorIfDataNotWrittenToFcn
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c4_vectorIndex, uint32_T c4_dataNumber, uint32_T c4_ssIdOfSourceObject,
   int32_T c4_offsetInSourceObject, int32_T c4_lengthInSourceObject);
static void init_dsm_address_info(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_doSetSimStateSideEffects = 0U;
  chartInstance->c4_setSimStateSideEffectsInfo = NULL;
  chartInstance->c4_tp_HIGH = 0U;
  chartInstance->c4_tp_LOW = 0U;
  chartInstance->c4_tp_S1 = 0U;
  chartInstance->c4_tp_S2 = 0U;
  chartInstance->c4_is_active_c4_BasicQuadrotorControl = 0U;
  chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_NO_ACTIVE_CHILD;
  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  chartInstance->c4_is_active_c4_BasicQuadrotorControl = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_S1;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  chartInstance->c4_tp_S1 = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_BasicQuadrotorControlMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initialize_params_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c4_update_debugger_state_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  uint32_T c4_prevAniVal;
  c4_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c4_is_active_c4_BasicQuadrotorControl == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_S1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_LOW) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_HIGH) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_S2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
  }

  _SFD_SET_ANIMATION(c4_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  boolean_T c4_hoistedGlobal;
  boolean_T c4_u;
  const mxArray *c4_b_y = NULL;
  uint16_T c4_b_hoistedGlobal;
  uint16_T c4_b_u;
  const mxArray *c4_c_y = NULL;
  uint8_T c4_c_hoistedGlobal;
  uint8_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  uint8_T c4_d_hoistedGlobal;
  uint8_T c4_d_u;
  const mxArray *c4_e_y = NULL;
  int32_T c4_i0;
  boolean_T c4_e_u[2];
  const mxArray *c4_f_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(5, 1), false);
  c4_hoistedGlobal = *chartInstance->c4_PWM;
  c4_u = c4_hoistedGlobal;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_b_hoistedGlobal = chartInstance->c4_count;
  c4_b_u = c4_b_hoistedGlobal;
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_c_hoistedGlobal = chartInstance->c4_is_active_c4_BasicQuadrotorControl;
  c4_c_u = c4_c_hoistedGlobal;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_d_hoistedGlobal = chartInstance->c4_is_c4_BasicQuadrotorControl;
  c4_d_u = c4_d_hoistedGlobal;
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", &c4_d_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 3, c4_e_y);
  for (c4_i0 = 0; c4_i0 < 2; c4_i0++) {
    c4_e_u[c4_i0] = chartInstance->c4_dataWrittenToVector[c4_i0];
  }

  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_e_u, 11, 0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c4_y, 4, c4_f_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  boolean_T c4_bv0[2];
  int32_T c4_i1;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_PWM = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "PWM");
  chartInstance->c4_count = c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 1)), "count");
  chartInstance->c4_is_active_c4_BasicQuadrotorControl = c4_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 2)),
     "is_active_c4_BasicQuadrotorControl");
  chartInstance->c4_is_c4_BasicQuadrotorControl = c4_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 3)),
     "is_c4_BasicQuadrotorControl");
  c4_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 4)),
                        "dataWrittenToVector", c4_bv0);
  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    chartInstance->c4_dataWrittenToVector[c4_i1] = c4_bv0[c4_i1];
  }

  sf_mex_assign(&chartInstance->c4_setSimStateSideEffectsInfo,
                c4_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 5)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c4_u);
  chartInstance->c4_doSetSimStateSideEffects = 1U;
  c4_update_debugger_state_c4_BasicQuadrotorControl(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void c4_set_sim_state_side_effects_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  if (chartInstance->c4_doSetSimStateSideEffects != 0) {
    if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_HIGH) {
      chartInstance->c4_tp_HIGH = 1U;
    } else {
      chartInstance->c4_tp_HIGH = 0U;
    }

    if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_LOW) {
      chartInstance->c4_tp_LOW = 1U;
    } else {
      chartInstance->c4_tp_LOW = 0U;
    }

    if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_S1) {
      chartInstance->c4_tp_S1 = 1U;
    } else {
      chartInstance->c4_tp_S1 = 0U;
    }

    if (chartInstance->c4_is_c4_BasicQuadrotorControl == c4_IN_S2) {
      chartInstance->c4_tp_S2 = 1U;
    } else {
      chartInstance->c4_tp_S2 = 0U;
    }

    chartInstance->c4_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c4_setSimStateSideEffectsInfo);
}

static void sf_gateway_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  c4_set_sim_state_side_effects_c4_BasicQuadrotorControl(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c4_PWM, 0U, 0.0, 1.0);
  _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c4_pwm_enable, 1U, 0.0,
    1.0);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_count, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c4_duty, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c4_f_coeff, 4U);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_chartstep_c4_BasicQuadrotorControl(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_BasicQuadrotorControlMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_chartstep_c4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  uint32_T c4_debug_family_var_map[3];
  real_T c4_nargin = 0.0;
  real_T c4_nargout = 1.0;
  boolean_T c4_out;
  uint64_T c4_u0;
  uint32_T c4_b_debug_family_var_map[2];
  real_T c4_b_nargin = 0.0;
  real_T c4_b_nargout = 0.0;
  real_T c4_c_nargin = 0.0;
  real_T c4_c_nargout = 1.0;
  boolean_T c4_b_out;
  real_T c4_d_nargin = 0.0;
  real_T c4_d_nargout = 0.0;
  real_T c4_e_nargin = 0.0;
  real_T c4_e_nargout = 0.0;
  uint32_T c4_u1;
  real_T c4_f_nargin = 0.0;
  real_T c4_f_nargout = 1.0;
  boolean_T c4_c_out;
  uint32_T c4_q0;
  uint32_T c4_qY;
  uint32_T c4_u2;
  uint64_T c4_u3;
  real_T c4_g_nargin = 0.0;
  real_T c4_g_nargout = 0.0;
  real_T c4_h_nargin = 0.0;
  real_T c4_h_nargout = 0.0;
  uint32_T c4_u4;
  real_T c4_i_nargin = 0.0;
  real_T c4_i_nargout = 1.0;
  boolean_T c4_d_out;
  real_T c4_j_nargin = 0.0;
  real_T c4_j_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  switch (chartInstance->c4_is_c4_BasicQuadrotorControl) {
   case c4_IN_HIGH:
    CV_CHART_EVAL(0, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c4_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c4_g_debug_family_names,
      c4_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_nargin, 0U, c4_b_sf_marshallOut,
      c4_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_nargout, 1U, c4_b_sf_marshallOut,
      c4_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_out, 2U, c4_sf_marshallOut,
      c4_sf_marshallIn);
    c4_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 8U, 1, 5);
    c4_u0 = 255ULL * (uint64_T)*chartInstance->c4_f_coeff;
    if (CV_SATURATION_EVAL(5, 3, 0, 0, c4_u0 > 4294967295ULL)) {
      c4_u0 = 4294967295ULL;
    }

    guard2 = false;
    if (CV_EML_COND(3, 0, 0, chartInstance->c4_count >= (uint32_T)c4_u0)) {
      if (CV_EML_COND(3, 0, 1, (real_T)*chartInstance->c4_duty < 255.0)) {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c4_out = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2 == true) {
      CV_EML_MCDC(3, 0, 0, false);
      CV_EML_IF(3, 0, 0, false);
      c4_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c4_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c4_h_debug_family_names,
        c4_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_b_nargin, 0U, c4_b_sf_marshallOut,
        c4_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_b_nargout, 1U,
        c4_b_sf_marshallOut, c4_b_sf_marshallIn);
      *chartInstance->c4_PWM = false;
      c4_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c4_PWM, 0U, 0.0, 1.0);
      chartInstance->c4_count = 0U;
      c4_updateDataWrittenToVector(chartInstance, 1U);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_count, 2U);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c4_tp_HIGH = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_LOW;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_LOW = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c4_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c4_k_debug_family_names,
        c4_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_c_nargin, 0U, c4_b_sf_marshallOut,
        c4_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_c_nargout, 1U,
        c4_b_sf_marshallOut, c4_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_b_out, 2U, c4_sf_marshallOut,
        c4_sf_marshallIn);
      c4_b_out = CV_EML_IF(7, 0, 0, (real_T)*chartInstance->c4_pwm_enable == 0.0);
      _SFD_SYMBOL_SCOPE_POP();
      if (c4_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c4_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c4_l_debug_family_names,
          c4_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_d_nargin, 0U,
          c4_b_sf_marshallOut, c4_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_d_nargout, 1U,
          c4_b_sf_marshallOut, c4_b_sf_marshallIn);
        *chartInstance->c4_PWM = false;
        c4_updateDataWrittenToVector(chartInstance, 0U);
        _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c4_PWM, 0U, 0.0,
          1.0);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c4_tp_HIGH = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_S2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_S2 = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c4_d_debug_family_names,
          c4_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_e_nargin, 0U,
          c4_b_sf_marshallOut, c4_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_e_nargout, 1U,
          c4_b_sf_marshallOut, c4_b_sf_marshallIn);
        c4_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 19U, 9, 5);
        c4_u1 = (uint32_T)chartInstance->c4_count + 1U;
        if (CV_SATURATION_EVAL(5, 6, 0, 0, c4_u1 > 65535U)) {
          c4_u1 = 65535U;
        }

        chartInstance->c4_count = (uint16_T)c4_u1;
        c4_updateDataWrittenToVector(chartInstance, 1U);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_count, 2U);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c4_tp_HIGH = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_HIGH;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_HIGH = 1U;
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_LOW:
    CV_CHART_EVAL(0, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c4_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c4_e_debug_family_names,
      c4_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_f_nargin, 0U, c4_b_sf_marshallOut,
      c4_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_f_nargout, 1U, c4_b_sf_marshallOut,
      c4_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_c_out, 2U, c4_sf_marshallOut,
      c4_sf_marshallIn);
    c4_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 7U, 1, 5);
    c4_q0 = 255U;
    c4_qY = c4_q0 - (uint32_T)*chartInstance->c4_duty;
    if (CV_SATURATION_EVAL(5, 2, 1, 0, c4_qY > c4_q0)) {
      c4_qY = 0U;
    }

    c4_u2 = c4_qY;
    if (CV_SATURATION_EVAL(5, 2, 1, 0, c4_u2 > 255U)) {
      c4_u2 = 255U;
    }

    c4_u3 = (uint64_T)(uint8_T)c4_u2 * (uint64_T)*chartInstance->c4_f_coeff;
    if (CV_SATURATION_EVAL(5, 2, 0, 0, c4_u3 > 4294967295ULL)) {
      c4_u3 = 4294967295ULL;
    }

    guard1 = false;
    if (CV_EML_COND(2, 0, 0, chartInstance->c4_count >= (uint32_T)c4_u3)) {
      if (CV_EML_COND(2, 0, 1, (real_T)*chartInstance->c4_duty > 0.0)) {
        CV_EML_MCDC(2, 0, 0, true);
        CV_EML_IF(2, 0, 0, true);
        c4_c_out = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1 == true) {
      CV_EML_MCDC(2, 0, 0, false);
      CV_EML_IF(2, 0, 0, false);
      c4_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c4_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c4_f_debug_family_names,
        c4_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_g_nargin, 0U, c4_b_sf_marshallOut,
        c4_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_g_nargout, 1U,
        c4_b_sf_marshallOut, c4_b_sf_marshallIn);
      *chartInstance->c4_PWM = true;
      c4_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c4_PWM, 0U, 0.0, 1.0);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c4_tp_LOW = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_HIGH;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_HIGH = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c4_c_debug_family_names,
        c4_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_h_nargin, 0U, c4_b_sf_marshallOut,
        c4_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_h_nargout, 1U,
        c4_b_sf_marshallOut, c4_b_sf_marshallIn);
      c4_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 17U, 9, 5);
      c4_u4 = (uint32_T)chartInstance->c4_count + 1U;
      if (CV_SATURATION_EVAL(5, 5, 0, 0, c4_u4 > 65535U)) {
        c4_u4 = 65535U;
      }

      chartInstance->c4_count = (uint16_T)c4_u4;
      c4_updateDataWrittenToVector(chartInstance, 1U);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_count, 2U);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c4_tp_LOW = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_LOW;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_LOW = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_S1:
    CV_CHART_EVAL(0, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c4_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c4_debug_family_names,
      c4_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_i_nargin, 0U, c4_b_sf_marshallOut,
      c4_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_i_nargout, 1U, c4_b_sf_marshallOut,
      c4_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_d_out, 2U, c4_sf_marshallOut,
      c4_sf_marshallIn);
    c4_d_out = CV_EML_IF(1, 0, 0, (real_T)*chartInstance->c4_pwm_enable == 1.0);
    _SFD_SYMBOL_SCOPE_POP();
    if (c4_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c4_b_debug_family_names,
        c4_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_j_nargin, 0U, c4_b_sf_marshallOut,
        c4_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c4_j_nargout, 1U,
        c4_b_sf_marshallOut, c4_b_sf_marshallIn);
      chartInstance->c4_count = 0U;
      c4_updateDataWrittenToVector(chartInstance, 1U);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_count, 2U);
      *chartInstance->c4_PWM = false;
      c4_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c4_PWM, 0U, 0.0, 1.0);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c4_tp_S1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_LOW;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_LOW = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c4_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_S2:
    CV_CHART_EVAL(0, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
    chartInstance->c4_tp_S2 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_S1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
    chartInstance->c4_tp_S1 = 1U;
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
    break;

   default:
    CV_CHART_EVAL(0, 0, 0);
    chartInstance->c4_is_c4_BasicQuadrotorControl = c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
}

static void initSimStructsc4_BasicQuadrotorControl
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber, uint32_T c4_instanceNumber)
{
  (void)c4_machineNumber;
  (void)c4_chartNumber;
  (void)c4_instanceNumber;
}

static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  boolean_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(boolean_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, false);
  return c4_mxArrayOutData;
}

static boolean_T c4_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_sf_internal_predicateOutput, const char_T
  *c4_identifier)
{
  boolean_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_sf_internal_predicateOutput), &c4_thisId);
  sf_mex_destroy(&c4_sf_internal_predicateOutput);
  return c4_y;
}

static boolean_T c4_b_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  boolean_T c4_y;
  boolean_T c4_b0;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b0, 1, 11, 0U, 0, 0U, 0);
  c4_y = c4_b0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_sf_internal_predicateOutput;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  boolean_T c4_y;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_sf_internal_predicateOutput = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_sf_internal_predicateOutput), &c4_thisId);
  sf_mex_destroy(&c4_sf_internal_predicateOutput);
  *(boolean_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  real_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(real_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, false);
  return c4_mxArrayOutData;
}

static real_T c4_c_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_y;
  real_T c4_d0;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d0, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_nargout;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_nargout = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nargout), &c4_thisId);
  sf_mex_destroy(&c4_nargout);
  *(real_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

const mxArray *sf_c4_BasicQuadrotorControl_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(int32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, false);
  return c4_mxArrayOutData;
}

static int32_T c4_d_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  int32_T c4_y;
  int32_T c4_i2;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_i2, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i2;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_sfEvent;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_y;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_b_sfEvent = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent),
    &c4_thisId);
  sf_mex_destroy(&c4_b_sfEvent);
  *(int32_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  uint8_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(uint8_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, false);
  return c4_mxArrayOutData;
}

static uint8_T c4_e_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_b_tp_S1, const char_T *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_S1), &c4_thisId);
  sf_mex_destroy(&c4_b_tp_S1);
  return c4_y;
}

static uint8_T c4_f_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_y;
  uint8_T c4_u5;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u5, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_u5;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_tp_S1;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_b_tp_S1 = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_S1), &c4_thisId);
  sf_mex_destroy(&c4_b_tp_S1);
  *(uint8_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  uint16_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(uint16_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, false);
  return c4_mxArrayOutData;
}

static uint16_T c4_g_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_b_count, const char_T *c4_identifier)
{
  uint16_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_count), &c4_thisId);
  sf_mex_destroy(&c4_b_count);
  return c4_y;
}

static uint16_T c4_h_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint16_T c4_y;
  uint16_T c4_u6;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u6, 1, 5, 0U, 0, 0U, 0);
  c4_y = c4_u6;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_count;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint16_T c4_y;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_b_count = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_count), &c4_thisId);
  sf_mex_destroy(&c4_b_count);
  *(uint16_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_f_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  uint32_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(uint32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, false);
  return c4_mxArrayOutData;
}

static void c4_i_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_b_dataWrittenToVector, const char_T
  *c4_identifier, boolean_T c4_y[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_dataWrittenToVector),
                        &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_dataWrittenToVector);
}

static void c4_j_emlrt_marshallIn(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_y[2])
{
  boolean_T c4_bv1[2];
  int32_T c4_i3;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_bv1, 1, 11, 0U, 1, 0U, 1, 2);
  for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
    c4_y[c4_i3] = c4_bv1[c4_i3];
  }

  sf_mex_destroy(&c4_u);
}

static const mxArray *c4_k_emlrt_marshallIn
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier)
{
  const mxArray *c4_y = NULL;
  emlrtMsgIdentifier c4_thisId;
  c4_y = NULL;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  sf_mex_assign(&c4_y, c4_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_setSimStateSideEffectsInfo), &c4_thisId), false);
  sf_mex_destroy(&c4_b_setSimStateSideEffectsInfo);
  return c4_y;
}

static const mxArray *c4_l_emlrt_marshallIn
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c4_u,
   const emlrtMsgIdentifier *c4_parentId)
{
  const mxArray *c4_y = NULL;
  (void)chartInstance;
  (void)c4_parentId;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_duplicatearraysafe(&c4_u), false);
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_updateDataWrittenToVector
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c4_vectorIndex)
{
  chartInstance->c4_dataWrittenToVector[(uint32_T)_SFD_EML_ARRAY_BOUNDS_CHECK(0U,
    (int32_T)c4_vectorIndex, 0, 1, 1, 0)] = true;
}

static void c4_errorIfDataNotWrittenToFcn
  (SFc4_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c4_vectorIndex, uint32_T c4_dataNumber, uint32_T c4_ssIdOfSourceObject,
   int32_T c4_offsetInSourceObject, int32_T c4_lengthInSourceObject)
{
  (void)c4_ssIdOfSourceObject;
  (void)c4_offsetInSourceObject;
  (void)c4_lengthInSourceObject;
  if (!chartInstance->c4_dataWrittenToVector[(uint32_T)
      _SFD_EML_ARRAY_BOUNDS_CHECK(0U, (int32_T)c4_vectorIndex, 0, 1, 1, 0)]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(c4_dataNumber);
  }
}

static void init_dsm_address_info(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_BasicQuadrotorControlInstanceStruct
  *chartInstance)
{
  chartInstance->c4_PWM = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_pwm_enable = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_duty = (uint8_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_f_coeff = (uint32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
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

void sf_c4_BasicQuadrotorControl_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3196465712U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3792872435U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(795922746U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4109100982U);
}

mxArray* sf_c4_BasicQuadrotorControl_get_post_codegen_info(void);
mxArray *sf_c4_BasicQuadrotorControl_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("6rHY4bsjGnGRaUi1v5ezHC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c4_BasicQuadrotorControl_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c4_BasicQuadrotorControl_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c4_BasicQuadrotorControl_jit_fallback_info(void)
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

mxArray *sf_c4_BasicQuadrotorControl_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c4_BasicQuadrotorControl_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c4_BasicQuadrotorControl(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[10],T\"PWM\",},{M[3],M[16],T\"count\",},{M[8],M[0],T\"is_active_c4_BasicQuadrotorControl\",},{M[9],M[0],T\"is_c4_BasicQuadrotorControl\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_BasicQuadrotorControl_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _BasicQuadrotorControlMachineNumber_,
           4,
           4,
           9,
           0,
           5,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_BasicQuadrotorControlMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_BasicQuadrotorControlMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _BasicQuadrotorControlMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"PWM");
          _SFD_SET_DATA_PROPS(1,1,1,0,"pwm_enable");
          _SFD_SET_DATA_PROPS(2,0,0,0,"count");
          _SFD_SET_DATA_PROPS(3,1,1,0,"duty");
          _SFD_SET_DATA_PROPS(4,1,1,0,"f_coeff");
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

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(1,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,16,1,16);
        _SFD_CV_INIT_EML(5,0,0,0,0,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_SATURATION(5,0,0,9,-1,18);
        _SFD_CV_INIT_EML(6,0,0,0,0,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_SATURATION(6,0,0,9,-1,18);
        _SFD_CV_INIT_EML(2,0,0,1,0,2,0,0,0,2,1);
        _SFD_CV_INIT_EML_SATURATION(2,0,0,10,-1,34);
        _SFD_CV_INIT_EML_SATURATION(2,0,1,17,-1,25);
        _SFD_CV_INIT_EML_IF(2,0,0,1,46,1,46);

        {
          static int condStart[] = { 1, 38 };

          static int condEnd[] = { 34, 46 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,46,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML(3,0,0,1,0,1,0,0,0,2,1);
        _SFD_CV_INIT_EML_SATURATION(3,0,0,10,-1,29);
        _SFD_CV_INIT_EML_IF(3,0,0,1,43,1,43);

        {
          static int condStart[] = { 1, 33 };

          static int condEnd[] = { 29, 43 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(3,0,0,1,43,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML(4,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(4,0,0,1,16,1,16);
        _SFD_CV_INIT_EML(7,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(7,0,0,1,16,1,16);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_e_sf_marshallOut,(MexInFcnForType)c4_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_f_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c4_PWM);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c4_pwm_enable);
        _SFD_SET_DATA_VALUE_PTR(2U, &chartInstance->c4_count);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c4_duty);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c4_f_coeff);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _BasicQuadrotorControlMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "YtJRe84wdBILjz4PmpKAqF";
}

static void sf_opaque_initialize_c4_BasicQuadrotorControl(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc4_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c4_BasicQuadrotorControl
    ((SFc4_BasicQuadrotorControlInstanceStruct*) chartInstanceVar);
  initialize_c4_BasicQuadrotorControl((SFc4_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_BasicQuadrotorControl(void *chartInstanceVar)
{
  enable_c4_BasicQuadrotorControl((SFc4_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_BasicQuadrotorControl(void *chartInstanceVar)
{
  disable_c4_BasicQuadrotorControl((SFc4_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_BasicQuadrotorControl(void *chartInstanceVar)
{
  sf_gateway_c4_BasicQuadrotorControl((SFc4_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_BasicQuadrotorControl(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c4_BasicQuadrotorControl
    ((SFc4_BasicQuadrotorControlInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_BasicQuadrotorControl(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c4_BasicQuadrotorControl
    ((SFc4_BasicQuadrotorControlInstanceStruct*)chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c4_BasicQuadrotorControl(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_BasicQuadrotorControlInstanceStruct*) chartInstanceVar)
      ->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_BasicQuadrotorControl_optimization_info();
    }

    finalize_c4_BasicQuadrotorControl((SFc4_BasicQuadrotorControlInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_BasicQuadrotorControl
    ((SFc4_BasicQuadrotorControlInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_BasicQuadrotorControl(SimStruct *S)
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
    initialize_params_c4_BasicQuadrotorControl
      ((SFc4_BasicQuadrotorControlInstanceStruct*)(chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_BasicQuadrotorControl(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_BasicQuadrotorControl_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,4,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,4);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,4,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,4,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2516091781U));
  ssSetChecksum1(S,(2433695975U));
  ssSetChecksum2(S,(3100916291U));
  ssSetChecksum3(S,(2731930003U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c4_BasicQuadrotorControl(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c4_BasicQuadrotorControl(SimStruct *S)
{
  SFc4_BasicQuadrotorControlInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc4_BasicQuadrotorControlInstanceStruct *)utMalloc(sizeof
    (SFc4_BasicQuadrotorControlInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc4_BasicQuadrotorControlInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.mdlStart = mdlStart_c4_BasicQuadrotorControl;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_BasicQuadrotorControl;
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

void c4_BasicQuadrotorControl_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_BasicQuadrotorControl(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_BasicQuadrotorControl(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_BasicQuadrotorControl(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_BasicQuadrotorControl_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
