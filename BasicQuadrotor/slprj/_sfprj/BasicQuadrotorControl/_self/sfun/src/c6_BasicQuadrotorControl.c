/* Include files */

#include <stddef.h>
#include "blas.h"
#include "BasicQuadrotorControl_sfun.h"
#include "c6_BasicQuadrotorControl.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BasicQuadrotorControl_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c6_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c6_IN_HIGH                     ((uint8_T)1U)
#define c6_IN_LOW                      ((uint8_T)2U)
#define c6_IN_S1                       ((uint8_T)3U)
#define c6_IN_S2                       ((uint8_T)4U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c6_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_e_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_g_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_i_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_k_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_n_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_p_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void initialize_params_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void enable_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void disable_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c6_update_debugger_state_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void set_sim_state_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c6_st);
static void c6_set_sim_state_side_effects_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void finalize_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void sf_gateway_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void mdl_start_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c6_chartstep_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void initSimStructsc6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber);
static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData);
static boolean_T c6_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_sf_internal_predicateOutput, const char_T
  *c6_identifier);
static boolean_T c6_b_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static real_T c6_c_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static int32_T c6_d_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint8_T c6_e_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_b_tp_S1, const char_T *c6_identifier);
static uint8_T c6_f_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_e_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint16_T c6_g_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_b_count, const char_T *c6_identifier);
static uint16_T c6_h_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_f_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static void c6_i_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_b_dataWrittenToVector, const char_T
  *c6_identifier, boolean_T c6_y[2]);
static void c6_j_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T c6_y[2]);
static const mxArray *c6_k_emlrt_marshallIn
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray
   *c6_b_setSimStateSideEffectsInfo, const char_T *c6_identifier);
static const mxArray *c6_l_emlrt_marshallIn
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c6_u,
   const emlrtMsgIdentifier *c6_parentId);
static void c6_updateDataWrittenToVector
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c6_vectorIndex);
static void c6_errorIfDataNotWrittenToFcn
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c6_vectorIndex, uint32_T c6_dataNumber, uint32_T c6_ssIdOfSourceObject,
   int32_T c6_offsetInSourceObject, int32_T c6_lengthInSourceObject);
static void init_dsm_address_info(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_doSetSimStateSideEffects = 0U;
  chartInstance->c6_setSimStateSideEffectsInfo = NULL;
  chartInstance->c6_tp_HIGH = 0U;
  chartInstance->c6_tp_LOW = 0U;
  chartInstance->c6_tp_S1 = 0U;
  chartInstance->c6_tp_S2 = 0U;
  chartInstance->c6_is_active_c6_BasicQuadrotorControl = 0U;
  chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_NO_ACTIVE_CHILD;
  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  chartInstance->c6_is_active_c6_BasicQuadrotorControl = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_S1;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  chartInstance->c6_tp_S1 = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_BasicQuadrotorControlMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initialize_params_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c6_update_debugger_state_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  uint32_T c6_prevAniVal;
  c6_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c6_is_active_c6_BasicQuadrotorControl == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_S1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_LOW) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_HIGH) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_S2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
  }

  _SFD_SET_ANIMATION(c6_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  boolean_T c6_hoistedGlobal;
  boolean_T c6_u;
  const mxArray *c6_b_y = NULL;
  uint16_T c6_b_hoistedGlobal;
  uint16_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  uint8_T c6_c_hoistedGlobal;
  uint8_T c6_c_u;
  const mxArray *c6_d_y = NULL;
  uint8_T c6_d_hoistedGlobal;
  uint8_T c6_d_u;
  const mxArray *c6_e_y = NULL;
  int32_T c6_i0;
  boolean_T c6_e_u[2];
  const mxArray *c6_f_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(5, 1), false);
  c6_hoistedGlobal = *chartInstance->c6_PWM;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = chartInstance->c6_count;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_c_hoistedGlobal = chartInstance->c6_is_active_c6_BasicQuadrotorControl;
  c6_c_u = c6_c_hoistedGlobal;
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_d_hoistedGlobal = chartInstance->c6_is_c6_BasicQuadrotorControl;
  c6_d_u = c6_d_hoistedGlobal;
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", &c6_d_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  for (c6_i0 = 0; c6_i0 < 2; c6_i0++) {
    c6_e_u[c6_i0] = chartInstance->c6_dataWrittenToVector[c6_i0];
  }

  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", c6_e_u, 11, 0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c6_y, 4, c6_f_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  boolean_T c6_bv0[2];
  int32_T c6_i1;
  chartInstance->c6_doneDoubleBufferReInit = true;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_PWM = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 0)), "PWM");
  chartInstance->c6_count = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 1)), "count");
  chartInstance->c6_is_active_c6_BasicQuadrotorControl = c6_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 2)),
     "is_active_c6_BasicQuadrotorControl");
  chartInstance->c6_is_c6_BasicQuadrotorControl = c6_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 3)),
     "is_c6_BasicQuadrotorControl");
  c6_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 4)),
                        "dataWrittenToVector", c6_bv0);
  for (c6_i1 = 0; c6_i1 < 2; c6_i1++) {
    chartInstance->c6_dataWrittenToVector[c6_i1] = c6_bv0[c6_i1];
  }

  sf_mex_assign(&chartInstance->c6_setSimStateSideEffectsInfo,
                c6_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 5)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c6_u);
  chartInstance->c6_doSetSimStateSideEffects = 1U;
  c6_update_debugger_state_c6_BasicQuadrotorControl(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void c6_set_sim_state_side_effects_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  if (chartInstance->c6_doSetSimStateSideEffects != 0) {
    if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_HIGH) {
      chartInstance->c6_tp_HIGH = 1U;
    } else {
      chartInstance->c6_tp_HIGH = 0U;
    }

    if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_LOW) {
      chartInstance->c6_tp_LOW = 1U;
    } else {
      chartInstance->c6_tp_LOW = 0U;
    }

    if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_S1) {
      chartInstance->c6_tp_S1 = 1U;
    } else {
      chartInstance->c6_tp_S1 = 0U;
    }

    if (chartInstance->c6_is_c6_BasicQuadrotorControl == c6_IN_S2) {
      chartInstance->c6_tp_S2 = 1U;
    } else {
      chartInstance->c6_tp_S2 = 0U;
    }

    chartInstance->c6_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c6_setSimStateSideEffectsInfo);
}

static void sf_gateway_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  c6_set_sim_state_side_effects_c6_BasicQuadrotorControl(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c6_PWM, 0U, 0.0, 1.0);
  _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c6_pwm_enable, 1U, 0.0,
    1.0);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_count, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_duty, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_f_coeff, 4U);
  chartInstance->c6_sfEvent = CALL_EVENT;
  c6_chartstep_c6_BasicQuadrotorControl(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_BasicQuadrotorControlMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c6_chartstep_c6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  uint32_T c6_debug_family_var_map[3];
  real_T c6_nargin = 0.0;
  real_T c6_nargout = 1.0;
  boolean_T c6_out;
  uint64_T c6_u0;
  uint32_T c6_b_debug_family_var_map[2];
  real_T c6_b_nargin = 0.0;
  real_T c6_b_nargout = 0.0;
  real_T c6_c_nargin = 0.0;
  real_T c6_c_nargout = 1.0;
  boolean_T c6_b_out;
  real_T c6_d_nargin = 0.0;
  real_T c6_d_nargout = 0.0;
  real_T c6_e_nargin = 0.0;
  real_T c6_e_nargout = 0.0;
  uint32_T c6_u1;
  real_T c6_f_nargin = 0.0;
  real_T c6_f_nargout = 1.0;
  boolean_T c6_c_out;
  uint32_T c6_q0;
  uint32_T c6_qY;
  uint32_T c6_u2;
  uint64_T c6_u3;
  real_T c6_g_nargin = 0.0;
  real_T c6_g_nargout = 0.0;
  real_T c6_h_nargin = 0.0;
  real_T c6_h_nargout = 0.0;
  uint32_T c6_u4;
  real_T c6_i_nargin = 0.0;
  real_T c6_i_nargout = 1.0;
  boolean_T c6_d_out;
  real_T c6_j_nargin = 0.0;
  real_T c6_j_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
  switch (chartInstance->c6_is_c6_BasicQuadrotorControl) {
   case c6_IN_HIGH:
    CV_CHART_EVAL(5, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_g_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargin, 0U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargout, 1U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_out, 2U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    c6_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 8U, 1, 5);
    c6_u0 = 255ULL * (uint64_T)*chartInstance->c6_f_coeff;
    if (CV_SATURATION_EVAL(5, 3, 0, 0, c6_u0 > 4294967295ULL)) {
      c6_u0 = 4294967295ULL;
    }

    guard2 = false;
    if (CV_EML_COND(3, 0, 0, chartInstance->c6_count >= (uint32_T)c6_u0)) {
      if (CV_EML_COND(3, 0, 1, (real_T)*chartInstance->c6_duty < 255.0)) {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c6_out = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2 == true) {
      CV_EML_MCDC(3, 0, 0, false);
      CV_EML_IF(3, 0, 0, false);
      c6_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c6_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_h_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargin, 0U, c6_b_sf_marshallOut,
        c6_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargout, 1U,
        c6_b_sf_marshallOut, c6_b_sf_marshallIn);
      *chartInstance->c6_PWM = false;
      c6_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c6_PWM, 0U, 0.0, 1.0);
      chartInstance->c6_count = 0U;
      c6_updateDataWrittenToVector(chartInstance, 1U);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_count, 2U);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c6_tp_HIGH = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_LOW;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_LOW = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_k_debug_family_names,
        c6_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargin, 0U, c6_b_sf_marshallOut,
        c6_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargout, 1U,
        c6_b_sf_marshallOut, c6_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_out, 2U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      c6_b_out = CV_EML_IF(7, 0, 0, (real_T)*chartInstance->c6_pwm_enable == 0.0);
      _SFD_SYMBOL_SCOPE_POP();
      if (c6_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c6_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_l_debug_family_names,
          c6_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_nargin, 0U,
          c6_b_sf_marshallOut, c6_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_nargout, 1U,
          c6_b_sf_marshallOut, c6_b_sf_marshallIn);
        *chartInstance->c6_PWM = false;
        c6_updateDataWrittenToVector(chartInstance, 0U);
        _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c6_PWM, 0U, 0.0,
          1.0);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c6_tp_HIGH = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_S2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_S2 = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c6_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_d_debug_family_names,
          c6_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_e_nargin, 0U,
          c6_b_sf_marshallOut, c6_b_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_e_nargout, 1U,
          c6_b_sf_marshallOut, c6_b_sf_marshallIn);
        c6_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 19U, 9, 5);
        c6_u1 = (uint32_T)chartInstance->c6_count + 1U;
        if (CV_SATURATION_EVAL(5, 6, 0, 0, c6_u1 > 65535U)) {
          c6_u1 = 65535U;
        }

        chartInstance->c6_count = (uint16_T)c6_u1;
        c6_updateDataWrittenToVector(chartInstance, 1U);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_count, 2U);
        _SFD_SYMBOL_SCOPE_POP();
        chartInstance->c6_tp_HIGH = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_HIGH;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_HIGH = 1U;
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c6_sfEvent);
    break;

   case c6_IN_LOW:
    CV_CHART_EVAL(5, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_e_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_f_nargin, 0U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_f_nargout, 1U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_out, 2U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    c6_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 7U, 1, 5);
    c6_q0 = 255U;
    c6_qY = c6_q0 - (uint32_T)*chartInstance->c6_duty;
    if (CV_SATURATION_EVAL(5, 2, 1, 0, c6_qY > c6_q0)) {
      c6_qY = 0U;
    }

    c6_u2 = c6_qY;
    if (CV_SATURATION_EVAL(5, 2, 1, 0, c6_u2 > 255U)) {
      c6_u2 = 255U;
    }

    c6_u3 = (uint64_T)(uint8_T)c6_u2 * (uint64_T)*chartInstance->c6_f_coeff;
    if (CV_SATURATION_EVAL(5, 2, 0, 0, c6_u3 > 4294967295ULL)) {
      c6_u3 = 4294967295ULL;
    }

    guard1 = false;
    if (CV_EML_COND(2, 0, 0, chartInstance->c6_count >= (uint32_T)c6_u3)) {
      if (CV_EML_COND(2, 0, 1, (real_T)*chartInstance->c6_duty > 0.0)) {
        CV_EML_MCDC(2, 0, 0, true);
        CV_EML_IF(2, 0, 0, true);
        c6_c_out = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1 == true) {
      CV_EML_MCDC(2, 0, 0, false);
      CV_EML_IF(2, 0, 0, false);
      c6_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c6_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_f_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_g_nargin, 0U, c6_b_sf_marshallOut,
        c6_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_g_nargout, 1U,
        c6_b_sf_marshallOut, c6_b_sf_marshallIn);
      *chartInstance->c6_PWM = true;
      c6_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c6_PWM, 0U, 0.0, 1.0);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c6_tp_LOW = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_HIGH;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_HIGH = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_c_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_h_nargin, 0U, c6_b_sf_marshallOut,
        c6_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_h_nargout, 1U,
        c6_b_sf_marshallOut, c6_b_sf_marshallIn);
      c6_errorIfDataNotWrittenToFcn(chartInstance, 1U, 2U, 17U, 9, 5);
      c6_u4 = (uint32_T)chartInstance->c6_count + 1U;
      if (CV_SATURATION_EVAL(5, 5, 0, 0, c6_u4 > 65535U)) {
        c6_u4 = 65535U;
      }

      chartInstance->c6_count = (uint16_T)c6_u4;
      c6_updateDataWrittenToVector(chartInstance, 1U);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_count, 2U);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c6_tp_LOW = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_LOW;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_LOW = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c6_sfEvent);
    break;

   case c6_IN_S1:
    CV_CHART_EVAL(5, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_i_nargin, 0U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_i_nargout, 1U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_out, 2U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    c6_d_out = CV_EML_IF(1, 0, 0, (real_T)*chartInstance->c6_pwm_enable == 1.0);
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_b_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_j_nargin, 0U, c6_b_sf_marshallOut,
        c6_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_j_nargout, 1U,
        c6_b_sf_marshallOut, c6_b_sf_marshallIn);
      chartInstance->c6_count = 0U;
      c6_updateDataWrittenToVector(chartInstance, 1U);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c6_count, 2U);
      *chartInstance->c6_PWM = false;
      c6_updateDataWrittenToVector(chartInstance, 0U);
      _SFD_DATA_RANGE_CHECK_MIN_MAX((real_T)*chartInstance->c6_PWM, 0U, 0.0, 1.0);
      _SFD_SYMBOL_SCOPE_POP();
      chartInstance->c6_tp_S1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
      chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_LOW;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
      chartInstance->c6_tp_LOW = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
    break;

   case c6_IN_S2:
    CV_CHART_EVAL(5, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_S2 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_S1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_S1 = 1U;
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
    break;

   default:
    CV_CHART_EVAL(5, 0, 0);
    chartInstance->c6_is_c6_BasicQuadrotorControl = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c6_sfEvent);
}

static void initSimStructsc6_BasicQuadrotorControl
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber)
{
  (void)c6_machineNumber;
  (void)c6_chartNumber;
  (void)c6_instanceNumber;
}

static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  boolean_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(boolean_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static boolean_T c6_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_sf_internal_predicateOutput, const char_T
  *c6_identifier)
{
  boolean_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_sf_internal_predicateOutput), &c6_thisId);
  sf_mex_destroy(&c6_sf_internal_predicateOutput);
  return c6_y;
}

static boolean_T c6_b_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  boolean_T c6_y;
  boolean_T c6_b0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b0, 1, 11, 0U, 0, 0U, 0);
  c6_y = c6_b0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_sf_internal_predicateOutput;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  boolean_T c6_y;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_sf_internal_predicateOutput = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_sf_internal_predicateOutput), &c6_thisId);
  sf_mex_destroy(&c6_sf_internal_predicateOutput);
  *(boolean_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  real_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(real_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static real_T c6_c_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_y;
  real_T c6_d0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_nargout;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_nargout = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_nargout), &c6_thisId);
  sf_mex_destroy(&c6_nargout);
  *(real_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

const mxArray *sf_c6_BasicQuadrotorControl_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static int32_T c6_d_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int32_T c6_y;
  int32_T c6_i2;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i2, 1, 6, 0U, 0, 0U, 0);
  c6_y = c6_i2;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_sfEvent;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int32_T c6_y;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_b_sfEvent = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_sfEvent),
    &c6_thisId);
  sf_mex_destroy(&c6_b_sfEvent);
  *(int32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint8_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint8_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static uint8_T c6_e_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_b_tp_S1, const char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_S1), &c6_thisId);
  sf_mex_destroy(&c6_b_tp_S1);
  return c6_y;
}

static uint8_T c6_f_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_u5;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u5, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u5;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_tp_S1;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_b_tp_S1 = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_S1), &c6_thisId);
  sf_mex_destroy(&c6_b_tp_S1);
  *(uint8_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_e_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint16_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint16_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static uint16_T c6_g_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_b_count, const char_T *c6_identifier)
{
  uint16_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_count), &c6_thisId);
  sf_mex_destroy(&c6_b_count);
  return c6_y;
}

static uint16_T c6_h_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint16_T c6_y;
  uint16_T c6_u6;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u6, 1, 5, 0U, 0, 0U, 0);
  c6_y = c6_u6;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_count;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint16_T c6_y;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_b_count = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_count), &c6_thisId);
  sf_mex_destroy(&c6_b_count);
  *(uint16_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_f_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static void c6_i_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_b_dataWrittenToVector, const char_T
  *c6_identifier, boolean_T c6_y[2])
{
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_dataWrittenToVector),
                        &c6_thisId, c6_y);
  sf_mex_destroy(&c6_b_dataWrittenToVector);
}

static void c6_j_emlrt_marshallIn(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T c6_y[2])
{
  boolean_T c6_bv1[2];
  int32_T c6_i3;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), c6_bv1, 1, 11, 0U, 1, 0U, 1, 2);
  for (c6_i3 = 0; c6_i3 < 2; c6_i3++) {
    c6_y[c6_i3] = c6_bv1[c6_i3];
  }

  sf_mex_destroy(&c6_u);
}

static const mxArray *c6_k_emlrt_marshallIn
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray
   *c6_b_setSimStateSideEffectsInfo, const char_T *c6_identifier)
{
  const mxArray *c6_y = NULL;
  emlrtMsgIdentifier c6_thisId;
  c6_y = NULL;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  sf_mex_assign(&c6_y, c6_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_setSimStateSideEffectsInfo), &c6_thisId), false);
  sf_mex_destroy(&c6_b_setSimStateSideEffectsInfo);
  return c6_y;
}

static const mxArray *c6_l_emlrt_marshallIn
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c6_u,
   const emlrtMsgIdentifier *c6_parentId)
{
  const mxArray *c6_y = NULL;
  (void)chartInstance;
  (void)c6_parentId;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_duplicatearraysafe(&c6_u), false);
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_updateDataWrittenToVector
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c6_vectorIndex)
{
  chartInstance->c6_dataWrittenToVector[(uint32_T)_SFD_EML_ARRAY_BOUNDS_CHECK(0U,
    (int32_T)c6_vectorIndex, 0, 1, 1, 0)] = true;
}

static void c6_errorIfDataNotWrittenToFcn
  (SFc6_BasicQuadrotorControlInstanceStruct *chartInstance, uint32_T
   c6_vectorIndex, uint32_T c6_dataNumber, uint32_T c6_ssIdOfSourceObject,
   int32_T c6_offsetInSourceObject, int32_T c6_lengthInSourceObject)
{
  (void)c6_ssIdOfSourceObject;
  (void)c6_offsetInSourceObject;
  (void)c6_lengthInSourceObject;
  if (!chartInstance->c6_dataWrittenToVector[(uint32_T)
      _SFD_EML_ARRAY_BOUNDS_CHECK(0U, (int32_T)c6_vectorIndex, 0, 1, 1, 0)]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(c6_dataNumber);
  }
}

static void init_dsm_address_info(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_BasicQuadrotorControlInstanceStruct
  *chartInstance)
{
  chartInstance->c6_PWM = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_pwm_enable = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c6_duty = (uint8_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_f_coeff = (uint32_T *)ssGetInputPortSignal_wrapper
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

void sf_c6_BasicQuadrotorControl_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3196465712U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3792872435U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(795922746U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4109100982U);
}

mxArray* sf_c6_BasicQuadrotorControl_get_post_codegen_info(void);
mxArray *sf_c6_BasicQuadrotorControl_get_autoinheritance_info(void)
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
      sf_c6_BasicQuadrotorControl_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c6_BasicQuadrotorControl_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_BasicQuadrotorControl_jit_fallback_info(void)
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

mxArray *sf_c6_BasicQuadrotorControl_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c6_BasicQuadrotorControl_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c6_BasicQuadrotorControl(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[10],T\"PWM\",},{M[3],M[16],T\"count\",},{M[8],M[0],T\"is_active_c6_BasicQuadrotorControl\",},{M[9],M[0],T\"is_c6_BasicQuadrotorControl\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_BasicQuadrotorControl_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _BasicQuadrotorControlMachineNumber_,
           6,
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
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)c6_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_e_sf_marshallOut,(MexInFcnForType)c6_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_f_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c6_PWM);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c6_pwm_enable);
        _SFD_SET_DATA_VALUE_PTR(2U, &chartInstance->c6_count);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c6_duty);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c6_f_coeff);
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

static void sf_opaque_initialize_c6_BasicQuadrotorControl(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc6_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c6_BasicQuadrotorControl
    ((SFc6_BasicQuadrotorControlInstanceStruct*) chartInstanceVar);
  initialize_c6_BasicQuadrotorControl((SFc6_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_BasicQuadrotorControl(void *chartInstanceVar)
{
  enable_c6_BasicQuadrotorControl((SFc6_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c6_BasicQuadrotorControl(void *chartInstanceVar)
{
  disable_c6_BasicQuadrotorControl((SFc6_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c6_BasicQuadrotorControl(void *chartInstanceVar)
{
  sf_gateway_c6_BasicQuadrotorControl((SFc6_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_BasicQuadrotorControl(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c6_BasicQuadrotorControl
    ((SFc6_BasicQuadrotorControlInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_BasicQuadrotorControl(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c6_BasicQuadrotorControl
    ((SFc6_BasicQuadrotorControlInstanceStruct*)chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c6_BasicQuadrotorControl(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_BasicQuadrotorControlInstanceStruct*) chartInstanceVar)
      ->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_BasicQuadrotorControl_optimization_info();
    }

    finalize_c6_BasicQuadrotorControl((SFc6_BasicQuadrotorControlInstanceStruct*)
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
  initSimStructsc6_BasicQuadrotorControl
    ((SFc6_BasicQuadrotorControlInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_BasicQuadrotorControl(SimStruct *S)
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
    initialize_params_c6_BasicQuadrotorControl
      ((SFc6_BasicQuadrotorControlInstanceStruct*)(chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_BasicQuadrotorControl(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_BasicQuadrotorControl_optimization_info();
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
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,6,3);
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
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,6);
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

static void mdlRTW_c6_BasicQuadrotorControl(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c6_BasicQuadrotorControl(SimStruct *S)
{
  SFc6_BasicQuadrotorControlInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc6_BasicQuadrotorControlInstanceStruct *)utMalloc(sizeof
    (SFc6_BasicQuadrotorControlInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc6_BasicQuadrotorControlInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_BasicQuadrotorControl;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_BasicQuadrotorControl;
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

void c6_BasicQuadrotorControl_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_BasicQuadrotorControl(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_BasicQuadrotorControl(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_BasicQuadrotorControl(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_BasicQuadrotorControl_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
