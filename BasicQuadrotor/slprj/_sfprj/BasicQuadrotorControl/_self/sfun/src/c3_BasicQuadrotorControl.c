/* Include files */

#include <stddef.h>
#include "blas.h"
#include "BasicQuadrotorControl_sfun.h"
#include "c3_BasicQuadrotorControl.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BasicQuadrotorControl_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c3_IN_CLOCKING                 ((uint8_T)1U)
#define c3_IN_END                      ((uint8_T)2U)
#define c3_IN_IDLE                     ((uint8_T)3U)
#define c3_IN_Read                     ((uint8_T)4U)
#define c3_IN_Read1                    ((uint8_T)5U)
#define c3_IN_START_ADC_RDWR           ((uint8_T)6U)
#define c3_IN_START_CONV               ((uint8_T)7U)
#define c3_IN_tCONV_delay              ((uint8_T)8U)
#define c3_const_cmd                   ((uint8_T)242U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c3_debug_family_names[6] = { "nargin", "nargout", "word",
  "cnt", "ser_data", "ser_data_int" };

static const mxArray *c3_eml_mx;
static const mxArray *c3_b_eml_mx;
static const mxArray *c3_c_eml_mx;
static const mxArray *c3_d_eml_mx;

/* Function Declarations */
static void initialize_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void initialize_params_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void enable_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void disable_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void set_sim_state_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void finalize_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void sf_gateway_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void mdl_start_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c3_chartstep_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void initSimStructsc3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c3_CLOCKING(SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void c3_END(SFc3_BasicQuadrotorControlInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static boolean_T c3_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_b_ser_data_int, const char_T *c3_identifier);
static boolean_T c3_b_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static boolean_T c3_c_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c3_ser_data, const char_T *c3_identifier);
static boolean_T c3_d_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_e_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_f_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_word, const char_T *c3_identifier);
static uint8_T c3_g_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static real_T c3_h_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static void c3_info_helper(const mxArray **c3_info);
static const mxArray *c3_emlrt_marshallOut(const char * c3_u);
static const mxArray *c3_b_emlrt_marshallOut(const uint32_T c3_u);
static boolean_T c3_sdi_gen(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, uint8_T c3_word, uint8_T c3_cnt);
static boolean_T c3_eq(SFc3_BasicQuadrotorControlInstanceStruct *chartInstance,
  uint8_T c3_a0, uint8_T c3_b0);
static void c3_eml_scalar_eg(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance);
static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_i_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint16_T c3_j_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_b_count, const char_T *c3_identifier);
static uint16_T c3_k_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_h_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_l_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_b_clock_cnt, const char_T *c3_identifier);
static uint8_T c3_m_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_n_emlrt_marshallIn
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray
   *c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier);
static const mxArray *c3_o_emlrt_marshallIn
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c3_u,
   const emlrtMsgIdentifier *c3_parentId);
static void init_dsm_address_info(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_ser_data_int_not_empty = false;
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_tp_CLOCKING = 0U;
  chartInstance->c3_tp_END = 0U;
  chartInstance->c3_tp_IDLE = 0U;
  chartInstance->c3_tp_Read = 0U;
  chartInstance->c3_tp_Read1 = 0U;
  chartInstance->c3_tp_START_ADC_RDWR = 0U;
  chartInstance->c3_tp_START_CONV = 0U;
  chartInstance->c3_tp_tCONV_delay = 0U;
  chartInstance->c3_is_active_c3_BasicQuadrotorControl = 0U;
  chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_NO_ACTIVE_CHILD;
  chartInstance->c3_count = 0U;
  chartInstance->c3_clock_cnt = 0U;
  chartInstance->c3_cmd = 242U;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c3_CSn = true;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c3_SCK = true;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c3_SDI = true;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c3_READ_SHIFT = false;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 5) != 0)) {
    *chartInstance->c3_XYZ_Valid = true;
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  chartInstance->c3_is_active_c3_BasicQuadrotorControl = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_IDLE;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  chartInstance->c3_tp_IDLE = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_BasicQuadrotorControlMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  sf_mex_assign(&c3_d_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15,
    "Unsigned", 15, "WordLength", 6, 6.0, 15, "FractionLength", 6, 0.0, 15,
    "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0),
                true);
  sf_mex_assign(&c3_c_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15,
    "Unsigned", 15, "WordLength", 6, 9.0, 15, "FractionLength", 6, 0.0, 15,
    "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0),
                true);
  sf_mex_assign(&c3_b_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15,
    "Unsigned", 15, "WordLength", 6, 5.0, 15, "FractionLength", 6, 0.0, 15,
    "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0),
                true);
  sf_mex_assign(&c3_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "fimath", 1U, 42U, 15, "RoundMode", 15, "nearest", 15, "RoundingMethod", 15,
    "Nearest", 15, "OverflowMode", 15, "saturate", 15, "OverflowAction", 15,
    "Saturate", 15, "ProductMode", 15, "FullPrecision", 15, "ProductWordLength",
    6, 32.0, 15, "MaxProductWordLength", 6, 65535.0, 15, "ProductFractionLength",
    6, 30.0, 15, "ProductFixedExponent", 6, -30.0, 15, "ProductSlope", 6,
    9.3132257461547852E-10, 15, "ProductSlopeAdjustmentFactor", 6, 1.0, 15,
    "ProductBias", 6, 0.0, 15, "SumMode", 15, "FullPrecision", 15,
    "SumWordLength", 6, 32.0, 15, "MaxSumWordLength", 6, 65535.0, 15,
    "SumFractionLength", 6, 30.0, 15, "SumFixedExponent", 6, -30.0, 15,
    "SumSlope", 6, 9.3132257461547852E-10, 15, "SumSlopeAdjustmentFactor", 6,
    1.0, 15, "SumBias", 6, 0.0, 15, "CastBeforeSum", 3, true), true);
}

static void initialize_params_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_debugger_state_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c3_is_active_c3_BasicQuadrotorControl == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_IDLE) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_START_CONV) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_tCONV_delay) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_START_ADC_RDWR) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_CLOCKING) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_Read1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_Read) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_END) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  }

  _SFD_SET_ANIMATION(c3_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  boolean_T c3_hoistedGlobal;
  boolean_T c3_u;
  const mxArray *c3_b_y = NULL;
  boolean_T c3_b_hoistedGlobal;
  boolean_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  boolean_T c3_c_hoistedGlobal;
  boolean_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  boolean_T c3_d_hoistedGlobal;
  boolean_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  boolean_T c3_e_hoistedGlobal;
  boolean_T c3_e_u;
  const mxArray *c3_f_y = NULL;
  uint8_T c3_f_hoistedGlobal;
  uint8_T c3_f_u;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_g_u;
  const mxArray *c3_h_y = NULL;
  uint16_T c3_g_hoistedGlobal;
  uint16_T c3_h_u;
  const mxArray *c3_i_y = NULL;
  uint16_T c3_i_u;
  const mxArray *c3_j_y = NULL;
  boolean_T c3_h_hoistedGlobal;
  boolean_T c3_j_u;
  const mxArray *c3_k_y = NULL;
  uint8_T c3_i_hoistedGlobal;
  uint8_T c3_k_u;
  const mxArray *c3_l_y = NULL;
  uint8_T c3_j_hoistedGlobal;
  uint8_T c3_l_u;
  const mxArray *c3_m_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(10, 1), false);
  c3_hoistedGlobal = *chartInstance->c3_CSn;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *chartInstance->c3_READ_SHIFT;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *chartInstance->c3_SCK;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = *chartInstance->c3_SDI;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = *chartInstance->c3_XYZ_Valid;
  c3_e_u = c3_e_hoistedGlobal;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = chartInstance->c3_clock_cnt;
  c3_f_u = c3_f_hoistedGlobal;
  c3_g_y = NULL;
  c3_g_u = c3_f_u;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_g_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
    (c3_eml_mx), 15, "numerictype", 14, sf_mex_dup(c3_d_eml_mx), 15,
    "simulinkarray", 14, c3_h_y, 15, "fimathislocal", 3, true), false);
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = chartInstance->c3_count;
  c3_h_u = c3_g_hoistedGlobal;
  c3_i_y = NULL;
  c3_i_u = c3_h_u;
  c3_j_y = NULL;
  sf_mex_assign(&c3_j_y, sf_mex_create("y", &c3_i_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_i_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
    (c3_eml_mx), 15, "numerictype", 14, sf_mex_dup(c3_c_eml_mx), 15,
    "simulinkarray", 14, c3_j_y, 15, "fimathislocal", 3, true), false);
  sf_mex_setcell(c3_y, 6, c3_i_y);
  c3_h_hoistedGlobal = chartInstance->c3_ser_data_int;
  c3_j_u = c3_h_hoistedGlobal;
  c3_k_y = NULL;
  if (!chartInstance->c3_ser_data_int_not_empty) {
    sf_mex_assign(&c3_k_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c3_k_y, sf_mex_create("y", &c3_j_u, 11, 0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c3_y, 7, c3_k_y);
  c3_i_hoistedGlobal = chartInstance->c3_is_active_c3_BasicQuadrotorControl;
  c3_k_u = c3_i_hoistedGlobal;
  c3_l_y = NULL;
  sf_mex_assign(&c3_l_y, sf_mex_create("y", &c3_k_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 8, c3_l_y);
  c3_j_hoistedGlobal = chartInstance->c3_is_c3_BasicQuadrotorControl;
  c3_l_u = c3_j_hoistedGlobal;
  c3_m_y = NULL;
  sf_mex_assign(&c3_m_y, sf_mex_create("y", &c3_l_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c3_y, 9, c3_m_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  chartInstance->c3_doneDoubleBufferReInit = true;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_CSn = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 0)), "CSn");
  *chartInstance->c3_READ_SHIFT = c3_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 1)), "READ_SHIFT");
  *chartInstance->c3_SCK = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "SCK");
  *chartInstance->c3_SDI = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 3)), "SDI");
  *chartInstance->c3_XYZ_Valid = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 4)), "XYZ_Valid");
  chartInstance->c3_clock_cnt = c3_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 5)), "clock_cnt");
  chartInstance->c3_count = c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 6)), "count");
  chartInstance->c3_ser_data_int = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 7)), "ser_data_int");
  chartInstance->c3_is_active_c3_BasicQuadrotorControl = c3_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 8)),
     "is_active_c3_BasicQuadrotorControl");
  chartInstance->c3_is_c3_BasicQuadrotorControl = c3_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 9)),
     "is_c3_BasicQuadrotorControl");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_n_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 10)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_BasicQuadrotorControl(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_CLOCKING) {
      chartInstance->c3_tp_CLOCKING = 1U;
    } else {
      chartInstance->c3_tp_CLOCKING = 0U;
    }

    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_END) {
      chartInstance->c3_tp_END = 1U;
    } else {
      chartInstance->c3_tp_END = 0U;
    }

    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_IDLE) {
      chartInstance->c3_tp_IDLE = 1U;
    } else {
      chartInstance->c3_tp_IDLE = 0U;
    }

    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_Read) {
      chartInstance->c3_tp_Read = 1U;
    } else {
      chartInstance->c3_tp_Read = 0U;
    }

    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_Read1) {
      chartInstance->c3_tp_Read1 = 1U;
    } else {
      chartInstance->c3_tp_Read1 = 0U;
    }

    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_START_ADC_RDWR) {
      chartInstance->c3_tp_START_ADC_RDWR = 1U;
    } else {
      chartInstance->c3_tp_START_ADC_RDWR = 0U;
    }

    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_START_CONV) {
      chartInstance->c3_tp_START_CONV = 1U;
    } else {
      chartInstance->c3_tp_START_CONV = 0U;
    }

    if (chartInstance->c3_is_c3_BasicQuadrotorControl == c3_IN_tCONV_delay) {
      chartInstance->c3_tp_tCONV_delay = 1U;
    } else {
      chartInstance->c3_tp_tCONV_delay = 0U;
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  sf_mex_destroy(&c3_eml_mx);
  sf_mex_destroy(&c3_b_eml_mx);
  sf_mex_destroy(&c3_c_eml_mx);
  sf_mex_destroy(&c3_d_eml_mx);
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_gateway_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  c3_set_sim_state_side_effects_c3_BasicQuadrotorControl(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_read_x_y_z_en, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_CSn, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_clock_cnt, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SDI, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_cmd, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_READ_SHIFT, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_XYZ_Valid, 8U);
  chartInstance->c3_sfEvent = CALL_EVENT;
  c3_chartstep_c3_BasicQuadrotorControl(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_BasicQuadrotorControlMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_chartstep_c3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  boolean_T c3_out;
  int32_T c3_i0;
  int16_T c3_i1;
  int16_T c3_i2;
  int16_T c3_i3;
  int32_T c3_i4;
  int16_T c3_i5;
  int16_T c3_i6;
  int16_T c3_i7;
  int32_T c3_i8;
  int16_T c3_i9;
  real_T c3_d0;
  int16_T c3_i10;
  boolean_T c3_temp;
  real_T c3_d1;
  boolean_T c3_b_out;
  int16_T c3_i11;
  int16_T c3_i12;
  int16_T c3_i13;
  int32_T c3_i14;
  int16_T c3_i15;
  int16_T c3_i16;
  int16_T c3_i17;
  int32_T c3_i18;
  int16_T c3_i19;
  real_T c3_d2;
  int16_T c3_i20;
  boolean_T c3_c_out;
  int32_T c3_i21;
  int32_T c3_i22;
  int16_T c3_i23;
  int16_T c3_i24;
  int16_T c3_i25;
  int32_T c3_i26;
  int16_T c3_i27;
  int16_T c3_i28;
  int16_T c3_i29;
  int32_T c3_i30;
  int16_T c3_i31;
  real_T c3_d3;
  int16_T c3_i32;
  boolean_T c3_d_out;
  int32_T c3_i33;
  real_T c3_d4;
  boolean_T c3_b_temp;
  int16_T c3_i34;
  int16_T c3_i35;
  int16_T c3_i36;
  int32_T c3_i37;
  int16_T c3_i38;
  int16_T c3_i39;
  int16_T c3_i40;
  int32_T c3_i41;
  int16_T c3_i42;
  real_T c3_d5;
  int16_T c3_i43;
  boolean_T c3_e_out;
  int16_T c3_i44;
  int16_T c3_i45;
  int16_T c3_i46;
  int32_T c3_i47;
  int16_T c3_i48;
  int16_T c3_i49;
  int16_T c3_i50;
  int32_T c3_i51;
  int16_T c3_i52;
  real_T c3_d6;
  int16_T c3_i53;
  boolean_T c3_f_out;
  uint8_T c3_u0;
  int32_T c3_i54;
  int16_T c3_i55;
  int16_T c3_i56;
  int16_T c3_i57;
  int32_T c3_i58;
  int16_T c3_i59;
  int16_T c3_i60;
  int16_T c3_i61;
  int32_T c3_i62;
  int16_T c3_i63;
  real_T c3_d7;
  int16_T c3_i64;
  boolean_T c3_g_out;
  uint8_T c3_u1;
  int32_T c3_i65;
  int16_T c3_i66;
  int16_T c3_i67;
  int16_T c3_i68;
  int32_T c3_i69;
  int16_T c3_i70;
  int16_T c3_i71;
  int16_T c3_i72;
  int32_T c3_i73;
  int16_T c3_i74;
  real_T c3_d8;
  int16_T c3_i75;
  boolean_T c3_h_out;
  int32_T c3_i76;
  int32_T c3_i77;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  switch (chartInstance->c3_is_c3_BasicQuadrotorControl) {
   case c3_IN_CLOCKING:
    CV_CHART_EVAL(2, 0, 1);
    c3_CLOCKING(chartInstance);
    break;

   case c3_IN_END:
    CV_CHART_EVAL(2, 0, 2);
    c3_END(chartInstance);
    break;

   case c3_IN_IDLE:
    CV_CHART_EVAL(2, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c3_sfEvent);
    c3_out = (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0,
                *chartInstance->c3_read_x_y_z_en != 0U,
                chartInstance->c3_sfEvent)) != 0);
    if (c3_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      *chartInstance->c3_CSn = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_CSn, 1U);
      c3_i0 = chartInstance->c3_clock_cnt + 1;
      if (CV_SATURATION_EVAL(5, 0, 0, 0, c3_i0 < 0)) {
        c3_i0 = 0;
      } else {
        if (c3_i0 > 63) {
          c3_i0 = 63;
        }
      }

      chartInstance->c3_clock_cnt = (uint8_T)c3_i0;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_clock_cnt, 4U);
      *chartInstance->c3_XYZ_Valid = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_XYZ_Valid, 8U);
      chartInstance->c3_tp_IDLE = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_START_CONV;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_START_CONV = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c3_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
    break;

   case c3_IN_Read:
    CV_CHART_EVAL(2, 0, 4);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                 chartInstance->c3_sfEvent);
    c3_i1 = (int16_T)chartInstance->c3_count;
    c3_i2 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i2 & 512) != 0) {
      c3_i3 = (int16_T)(c3_i2 | -512);
    } else {
      c3_i3 = (int16_T)(c3_i2 & 511);
    }

    c3_i4 = 10 - c3_i3;
    if (c3_i4 > 511) {
      c3_i4 = 511;
    } else {
      if (c3_i4 < -512) {
        c3_i4 = -512;
      }
    }

    c3_i5 = (int16_T)chartInstance->c3_count;
    c3_i6 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i6 & 512) != 0) {
      c3_i7 = (int16_T)(c3_i6 | -512);
    } else {
      c3_i7 = (int16_T)(c3_i6 & 511);
    }

    c3_i8 = c3_i7 - 10;
    if (c3_i8 > 511) {
      c3_i8 = 511;
    } else {
      if (c3_i8 < -512) {
        c3_i8 = -512;
      }
    }

    if ((int16_T)(c3_i1 & 512) != 0) {
      c3_i9 = (int16_T)(c3_i1 | -512);
    } else {
      c3_i9 = (int16_T)(c3_i1 & 511);
    }

    if (c3_i9 < 10) {
      if ((int16_T)c3_i4 <= 1) {
        c3_d0 = 1.0;
      } else {
        c3_d0 = 0.0;
      }
    } else {
      if ((int16_T)(c3_i5 & 512) != 0) {
        c3_i10 = (int16_T)(c3_i5 | -512);
      } else {
        c3_i10 = (int16_T)(c3_i5 & 511);
      }

      if (c3_i10 > 10) {
        if ((int16_T)c3_i8 <= 1) {
          c3_d0 = 3.0;
        } else {
          c3_d0 = 0.0;
        }
      } else {
        c3_d0 = 2.0;
      }
    }

    c3_temp = (_SFD_CCP_CALL(13U, 0, CV_RELATIONAL_EVAL(5U, 13U, 0, c3_d0, 0.0,
      -2, 0U, chartInstance->c3_count == 10) != 0U, chartInstance->c3_sfEvent)
               != 0);
    if (c3_temp) {
      if ((int8_T)chartInstance->c3_clock_cnt < 56) {
        if ((int8_T)(56 - (int8_T)chartInstance->c3_clock_cnt) <= 1) {
          c3_d1 = 1.0;
        } else {
          c3_d1 = 0.0;
        }
      } else if ((int8_T)chartInstance->c3_clock_cnt > 56) {
        if ((int8_T)((int8_T)chartInstance->c3_clock_cnt - 56) <= 1) {
          c3_d1 = 3.0;
        } else {
          c3_d1 = 0.0;
        }
      } else {
        c3_d1 = 2.0;
      }

      c3_temp = (_SFD_CCP_CALL(13U, 1, CV_RELATIONAL_EVAL(5U, 13U, 1, c3_d1, 0.0,
        -2, 0U, chartInstance->c3_clock_cnt == 56) != 0U,
                  chartInstance->c3_sfEvent) != 0);
    }

    c3_b_out = (CV_TRANSITION_EVAL(13U, (int32_T)c3_temp) != 0);
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c3_sfEvent);
      chartInstance->c3_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      chartInstance->c3_clock_cnt = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_clock_cnt, 4U);
      *chartInstance->c3_SCK = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
      chartInstance->c3_tp_Read = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_END;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_END = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                   chartInstance->c3_sfEvent);
      c3_i11 = (int16_T)chartInstance->c3_count;
      c3_i12 = (int16_T)chartInstance->c3_count;
      if ((int16_T)(c3_i12 & 512) != 0) {
        c3_i13 = (int16_T)(c3_i12 | -512);
      } else {
        c3_i13 = (int16_T)(c3_i12 & 511);
      }

      c3_i14 = 10 - c3_i13;
      if (c3_i14 > 511) {
        c3_i14 = 511;
      } else {
        if (c3_i14 < -512) {
          c3_i14 = -512;
        }
      }

      c3_i15 = (int16_T)chartInstance->c3_count;
      c3_i16 = (int16_T)chartInstance->c3_count;
      if ((int16_T)(c3_i16 & 512) != 0) {
        c3_i17 = (int16_T)(c3_i16 | -512);
      } else {
        c3_i17 = (int16_T)(c3_i16 & 511);
      }

      c3_i18 = c3_i17 - 10;
      if (c3_i18 > 511) {
        c3_i18 = 511;
      } else {
        if (c3_i18 < -512) {
          c3_i18 = -512;
        }
      }

      if ((int16_T)(c3_i11 & 512) != 0) {
        c3_i19 = (int16_T)(c3_i11 | -512);
      } else {
        c3_i19 = (int16_T)(c3_i11 & 511);
      }

      if (c3_i19 < 10) {
        if ((int16_T)c3_i14 <= 1) {
          c3_d2 = 1.0;
        } else {
          c3_d2 = 0.0;
        }
      } else {
        if ((int16_T)(c3_i15 & 512) != 0) {
          c3_i20 = (int16_T)(c3_i15 | -512);
        } else {
          c3_i20 = (int16_T)(c3_i15 & 511);
        }

        if (c3_i20 > 10) {
          if ((int16_T)c3_i18 <= 1) {
            c3_d2 = 3.0;
          } else {
            c3_d2 = 0.0;
          }
        } else {
          c3_d2 = 2.0;
        }
      }

      c3_c_out = (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14U, 0,
        CV_RELATIONAL_EVAL(5U, 14U, 0, c3_d2, 0.0, -2, 0U,
                           chartInstance->c3_count == 10) != 0U,
        chartInstance->c3_sfEvent)) != 0);
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, chartInstance->c3_sfEvent);
        *chartInstance->c3_SCK = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
        chartInstance->c3_count = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
        c3_i21 = chartInstance->c3_clock_cnt + 1;
        if (CV_SATURATION_EVAL(5, 14, 0, 0, c3_i21 < 0)) {
          c3_i21 = 0;
        } else {
          if (c3_i21 > 63) {
            c3_i21 = 63;
          }
        }

        chartInstance->c3_clock_cnt = (uint8_T)c3_i21;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_clock_cnt, 4U);
        chartInstance->c3_tp_Read = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_Read1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Read1 = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c3_sfEvent);
        c3_i22 = chartInstance->c3_count + 1;
        if (CV_SATURATION_EVAL(5, 12, 0, 0, c3_i22 < 0)) {
          c3_i22 = 0;
        } else {
          if (c3_i22 > 511) {
            c3_i22 = 511;
          }
        }

        chartInstance->c3_count = (uint16_T)c3_i22;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
        chartInstance->c3_tp_Read = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_Read;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Read = 1U;
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c3_sfEvent);
    break;

   case c3_IN_Read1:
    CV_CHART_EVAL(2, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 chartInstance->c3_sfEvent);
    c3_i23 = (int16_T)chartInstance->c3_count;
    c3_i24 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i24 & 512) != 0) {
      c3_i25 = (int16_T)(c3_i24 | -512);
    } else {
      c3_i25 = (int16_T)(c3_i24 & 511);
    }

    c3_i26 = 10 - c3_i25;
    if (c3_i26 > 511) {
      c3_i26 = 511;
    } else {
      if (c3_i26 < -512) {
        c3_i26 = -512;
      }
    }

    c3_i27 = (int16_T)chartInstance->c3_count;
    c3_i28 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i28 & 512) != 0) {
      c3_i29 = (int16_T)(c3_i28 | -512);
    } else {
      c3_i29 = (int16_T)(c3_i28 & 511);
    }

    c3_i30 = c3_i29 - 10;
    if (c3_i30 > 511) {
      c3_i30 = 511;
    } else {
      if (c3_i30 < -512) {
        c3_i30 = -512;
      }
    }

    if ((int16_T)(c3_i23 & 512) != 0) {
      c3_i31 = (int16_T)(c3_i23 | -512);
    } else {
      c3_i31 = (int16_T)(c3_i23 & 511);
    }

    if (c3_i31 < 10) {
      if ((int16_T)c3_i26 <= 1) {
        c3_d3 = 1.0;
      } else {
        c3_d3 = 0.0;
      }
    } else {
      if ((int16_T)(c3_i27 & 512) != 0) {
        c3_i32 = (int16_T)(c3_i27 | -512);
      } else {
        c3_i32 = (int16_T)(c3_i27 & 511);
      }

      if (c3_i32 > 10) {
        if ((int16_T)c3_i30 <= 1) {
          c3_d3 = 3.0;
        } else {
          c3_d3 = 0.0;
        }
      } else {
        c3_d3 = 2.0;
      }
    }

    c3_d_out = (CV_TRANSITION_EVAL(15U, (int32_T)_SFD_CCP_CALL(15U, 0,
      CV_RELATIONAL_EVAL(5U, 15U, 0, c3_d3, 0.0, -2, 0U, chartInstance->c3_count
                         == 10) != 0U, chartInstance->c3_sfEvent)) != 0);
    if (c3_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, chartInstance->c3_sfEvent);
      *chartInstance->c3_SCK = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
      chartInstance->c3_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      chartInstance->c3_tp_Read1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_Read;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_Read = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, chartInstance->c3_sfEvent);
      c3_i33 = chartInstance->c3_count + 1;
      if (CV_SATURATION_EVAL(5, 16, 0, 0, c3_i33 < 0)) {
        c3_i33 = 0;
      } else {
        if (c3_i33 > 511) {
          c3_i33 = 511;
        }
      }

      chartInstance->c3_count = (uint16_T)c3_i33;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      chartInstance->c3_tp_Read1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_Read1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_Read1 = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c3_sfEvent);
    break;

   case c3_IN_START_ADC_RDWR:
    CV_CHART_EVAL(2, 0, 6);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U, chartInstance->c3_sfEvent);
    if ((int8_T)chartInstance->c3_clock_cnt < 9) {
      if ((int8_T)(9 - (int8_T)chartInstance->c3_clock_cnt) <= 1) {
        c3_d4 = 1.0;
      } else {
        c3_d4 = 0.0;
      }
    } else if ((int8_T)chartInstance->c3_clock_cnt > 9) {
      if ((int8_T)((int8_T)chartInstance->c3_clock_cnt - 9) <= 1) {
        c3_d4 = 3.0;
      } else {
        c3_d4 = 0.0;
      }
    } else {
      c3_d4 = 2.0;
    }

    c3_b_temp = (_SFD_CCP_CALL(7U, 0, CV_RELATIONAL_EVAL(5U, 7U, 0, c3_d4, 0.0,
      -2, 0U, chartInstance->c3_clock_cnt == 9) != 0U, chartInstance->c3_sfEvent)
                 != 0);
    if (c3_b_temp) {
      c3_i34 = (int16_T)chartInstance->c3_count;
      c3_i35 = (int16_T)chartInstance->c3_count;
      if ((int16_T)(c3_i35 & 512) != 0) {
        c3_i36 = (int16_T)(c3_i35 | -512);
      } else {
        c3_i36 = (int16_T)(c3_i35 & 511);
      }

      c3_i37 = 10 - c3_i36;
      if (c3_i37 > 511) {
        c3_i37 = 511;
      } else {
        if (c3_i37 < -512) {
          c3_i37 = -512;
        }
      }

      c3_i38 = (int16_T)chartInstance->c3_count;
      c3_i39 = (int16_T)chartInstance->c3_count;
      if ((int16_T)(c3_i39 & 512) != 0) {
        c3_i40 = (int16_T)(c3_i39 | -512);
      } else {
        c3_i40 = (int16_T)(c3_i39 & 511);
      }

      c3_i41 = c3_i40 - 10;
      if (c3_i41 > 511) {
        c3_i41 = 511;
      } else {
        if (c3_i41 < -512) {
          c3_i41 = -512;
        }
      }

      if ((int16_T)(c3_i34 & 512) != 0) {
        c3_i42 = (int16_T)(c3_i34 | -512);
      } else {
        c3_i42 = (int16_T)(c3_i34 & 511);
      }

      if (c3_i42 < 10) {
        if ((int16_T)c3_i37 <= 1) {
          c3_d5 = 1.0;
        } else {
          c3_d5 = 0.0;
        }
      } else {
        if ((int16_T)(c3_i38 & 512) != 0) {
          c3_i43 = (int16_T)(c3_i38 | -512);
        } else {
          c3_i43 = (int16_T)(c3_i38 & 511);
        }

        if (c3_i43 > 10) {
          if ((int16_T)c3_i41 <= 1) {
            c3_d5 = 3.0;
          } else {
            c3_d5 = 0.0;
          }
        } else {
          c3_d5 = 2.0;
        }
      }

      c3_b_temp = (_SFD_CCP_CALL(7U, 1, CV_RELATIONAL_EVAL(5U, 7U, 1, c3_d5, 0.0,
        -2, 0U, chartInstance->c3_count == 10) != 0U, chartInstance->c3_sfEvent)
                   != 0);
    }

    c3_e_out = (CV_TRANSITION_EVAL(7U, (int32_T)c3_b_temp) != 0);
    if (c3_e_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c3_sfEvent);
      chartInstance->c3_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      *chartInstance->c3_SCK = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
      *chartInstance->c3_SDI = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SDI, 5U);
      *chartInstance->c3_READ_SHIFT = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_READ_SHIFT, 7U);
      chartInstance->c3_tp_START_ADC_RDWR = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_Read;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_Read = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c3_sfEvent);
      c3_i44 = (int16_T)chartInstance->c3_count;
      c3_i45 = (int16_T)chartInstance->c3_count;
      if ((int16_T)(c3_i45 & 512) != 0) {
        c3_i46 = (int16_T)(c3_i45 | -512);
      } else {
        c3_i46 = (int16_T)(c3_i45 & 511);
      }

      c3_i47 = 10 - c3_i46;
      if (c3_i47 > 511) {
        c3_i47 = 511;
      } else {
        if (c3_i47 < -512) {
          c3_i47 = -512;
        }
      }

      c3_i48 = (int16_T)chartInstance->c3_count;
      c3_i49 = (int16_T)chartInstance->c3_count;
      if ((int16_T)(c3_i49 & 512) != 0) {
        c3_i50 = (int16_T)(c3_i49 | -512);
      } else {
        c3_i50 = (int16_T)(c3_i49 & 511);
      }

      c3_i51 = c3_i50 - 10;
      if (c3_i51 > 511) {
        c3_i51 = 511;
      } else {
        if (c3_i51 < -512) {
          c3_i51 = -512;
        }
      }

      if ((int16_T)(c3_i44 & 512) != 0) {
        c3_i52 = (int16_T)(c3_i44 | -512);
      } else {
        c3_i52 = (int16_T)(c3_i44 & 511);
      }

      if (c3_i52 < 10) {
        if ((int16_T)c3_i47 <= 1) {
          c3_d6 = 1.0;
        } else {
          c3_d6 = 0.0;
        }
      } else {
        if ((int16_T)(c3_i48 & 512) != 0) {
          c3_i53 = (int16_T)(c3_i48 | -512);
        } else {
          c3_i53 = (int16_T)(c3_i48 & 511);
        }

        if (c3_i53 > 10) {
          if ((int16_T)c3_i51 <= 1) {
            c3_d6 = 3.0;
          } else {
            c3_d6 = 0.0;
          }
        } else {
          c3_d6 = 2.0;
        }
      }

      c3_f_out = (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0,
        CV_RELATIONAL_EVAL(5U, 6U, 0, c3_d6, 0.0, -2, 0U,
                           chartInstance->c3_count == 10) != 0U,
        chartInstance->c3_sfEvent)) != 0);
      if (c3_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
        chartInstance->c3_count = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
        *chartInstance->c3_SCK = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
        c3_u0 = chartInstance->c3_clock_cnt;
        if (CV_SATURATION_EVAL(5, 6, 0, 0, c3_u0 > 31)) {
          c3_u0 = 31U;
        }

        *chartInstance->c3_SDI = c3_sdi_gen(chartInstance, c3_const_cmd, c3_u0);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SDI, 5U);
        chartInstance->c3_tp_START_ADC_RDWR = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_CLOCKING;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_CLOCKING = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c3_sfEvent);
        c3_i54 = chartInstance->c3_count + 1;
        if (CV_SATURATION_EVAL(5, 11, 0, 0, c3_i54 < 0)) {
          c3_i54 = 0;
        } else {
          if (c3_i54 > 511) {
            c3_i54 = 511;
          }
        }

        chartInstance->c3_count = (uint16_T)c3_i54;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
        chartInstance->c3_tp_START_ADC_RDWR = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_START_ADC_RDWR;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_START_ADC_RDWR = 1U;
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c3_sfEvent);
    break;

   case c3_IN_START_CONV:
    CV_CHART_EVAL(2, 0, 7);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c3_sfEvent);
    c3_i55 = (int16_T)chartInstance->c3_count;
    c3_i56 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i56 & 512) != 0) {
      c3_i57 = (int16_T)(c3_i56 | -512);
    } else {
      c3_i57 = (int16_T)(c3_i56 & 511);
    }

    c3_i58 = 10 - c3_i57;
    if (c3_i58 > 511) {
      c3_i58 = 511;
    } else {
      if (c3_i58 < -512) {
        c3_i58 = -512;
      }
    }

    c3_i59 = (int16_T)chartInstance->c3_count;
    c3_i60 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i60 & 512) != 0) {
      c3_i61 = (int16_T)(c3_i60 | -512);
    } else {
      c3_i61 = (int16_T)(c3_i60 & 511);
    }

    c3_i62 = c3_i61 - 10;
    if (c3_i62 > 511) {
      c3_i62 = 511;
    } else {
      if (c3_i62 < -512) {
        c3_i62 = -512;
      }
    }

    if ((int16_T)(c3_i55 & 512) != 0) {
      c3_i63 = (int16_T)(c3_i55 | -512);
    } else {
      c3_i63 = (int16_T)(c3_i55 & 511);
    }

    if (c3_i63 < 10) {
      if ((int16_T)c3_i58 <= 1) {
        c3_d7 = 1.0;
      } else {
        c3_d7 = 0.0;
      }
    } else {
      if ((int16_T)(c3_i59 & 512) != 0) {
        c3_i64 = (int16_T)(c3_i59 | -512);
      } else {
        c3_i64 = (int16_T)(c3_i59 & 511);
      }

      if (c3_i64 > 10) {
        if ((int16_T)c3_i62 <= 1) {
          c3_d7 = 3.0;
        } else {
          c3_d7 = 0.0;
        }
      } else {
        c3_d7 = 2.0;
      }
    }

    c3_g_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
      CV_RELATIONAL_EVAL(5U, 2U, 0, c3_d7, 0.0, -2, 0U, chartInstance->c3_count ==
                         10) != 0U, chartInstance->c3_sfEvent)) != 0);
    if (c3_g_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
      chartInstance->c3_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      *chartInstance->c3_SCK = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
      c3_u1 = chartInstance->c3_clock_cnt;
      if (CV_SATURATION_EVAL(5, 2, 0, 0, c3_u1 > 31)) {
        c3_u1 = 31U;
      }

      *chartInstance->c3_SDI = c3_sdi_gen(chartInstance, c3_const_cmd, c3_u1);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SDI, 5U);
      chartInstance->c3_tp_START_CONV = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_tCONV_delay;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_tCONV_delay = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
      c3_i65 = chartInstance->c3_count + 1;
      if (CV_SATURATION_EVAL(5, 3, 0, 0, c3_i65 < 0)) {
        c3_i65 = 0;
      } else {
        if (c3_i65 > 511) {
          c3_i65 = 511;
        }
      }

      chartInstance->c3_count = (uint16_T)c3_i65;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      chartInstance->c3_tp_START_CONV = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_START_CONV;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_START_CONV = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c3_sfEvent);
    break;

   case c3_IN_tCONV_delay:
    CV_CHART_EVAL(2, 0, 8);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, chartInstance->c3_sfEvent);
    c3_i66 = (int16_T)chartInstance->c3_count;
    c3_i67 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i67 & 512) != 0) {
      c3_i68 = (int16_T)(c3_i67 | -512);
    } else {
      c3_i68 = (int16_T)(c3_i67 & 511);
    }

    c3_i69 = 10 - c3_i68;
    if (c3_i69 > 511) {
      c3_i69 = 511;
    } else {
      if (c3_i69 < -512) {
        c3_i69 = -512;
      }
    }

    c3_i70 = (int16_T)chartInstance->c3_count;
    c3_i71 = (int16_T)chartInstance->c3_count;
    if ((int16_T)(c3_i71 & 512) != 0) {
      c3_i72 = (int16_T)(c3_i71 | -512);
    } else {
      c3_i72 = (int16_T)(c3_i71 & 511);
    }

    c3_i73 = c3_i72 - 10;
    if (c3_i73 > 511) {
      c3_i73 = 511;
    } else {
      if (c3_i73 < -512) {
        c3_i73 = -512;
      }
    }

    if ((int16_T)(c3_i66 & 512) != 0) {
      c3_i74 = (int16_T)(c3_i66 | -512);
    } else {
      c3_i74 = (int16_T)(c3_i66 & 511);
    }

    if (c3_i74 < 10) {
      if ((int16_T)c3_i69 <= 1) {
        c3_d8 = 1.0;
      } else {
        c3_d8 = 0.0;
      }
    } else {
      if ((int16_T)(c3_i70 & 512) != 0) {
        c3_i75 = (int16_T)(c3_i70 | -512);
      } else {
        c3_i75 = (int16_T)(c3_i70 & 511);
      }

      if (c3_i75 > 10) {
        if ((int16_T)c3_i73 <= 1) {
          c3_d8 = 3.0;
        } else {
          c3_d8 = 0.0;
        }
      } else {
        c3_d8 = 2.0;
      }
    }

    c3_h_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
      CV_RELATIONAL_EVAL(5U, 5U, 0, c3_d8, 0.0, -2, 0U, chartInstance->c3_count ==
                         10) != 0U, chartInstance->c3_sfEvent)) != 0);
    if (c3_h_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
      chartInstance->c3_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      *chartInstance->c3_SCK = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
      c3_i76 = chartInstance->c3_clock_cnt + 1;
      if (CV_SATURATION_EVAL(5, 5, 0, 0, c3_i76 < 0)) {
        c3_i76 = 0;
      } else {
        if (c3_i76 > 63) {
          c3_i76 = 63;
        }
      }

      chartInstance->c3_clock_cnt = (uint8_T)c3_i76;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_clock_cnt, 4U);
      chartInstance->c3_tp_tCONV_delay = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_START_ADC_RDWR;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_START_ADC_RDWR = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
      c3_i77 = chartInstance->c3_count + 1;
      if (CV_SATURATION_EVAL(5, 4, 0, 0, c3_i77 < 0)) {
        c3_i77 = 0;
      } else {
        if (c3_i77 > 511) {
          c3_i77 = 511;
        }
      }

      chartInstance->c3_count = (uint16_T)c3_i77;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
      chartInstance->c3_tp_tCONV_delay = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_tCONV_delay;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_tCONV_delay = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c3_sfEvent);
    break;

   default:
    CV_CHART_EVAL(2, 0, 0);
    chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
}

static void initSimStructsc3_BasicQuadrotorControl
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_CLOCKING(SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  int16_T c3_i78;
  int16_T c3_i79;
  int16_T c3_i80;
  int32_T c3_i81;
  int16_T c3_i82;
  int16_T c3_i83;
  int16_T c3_i84;
  int32_T c3_i85;
  int16_T c3_i86;
  real_T c3_d9;
  int16_T c3_i87;
  boolean_T c3_out;
  int32_T c3_i88;
  int32_T c3_i89;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, chartInstance->c3_sfEvent);
  c3_i78 = (int16_T)chartInstance->c3_count;
  c3_i79 = (int16_T)chartInstance->c3_count;
  if ((int16_T)(c3_i79 & 512) != 0) {
    c3_i80 = (int16_T)(c3_i79 | -512);
  } else {
    c3_i80 = (int16_T)(c3_i79 & 511);
  }

  c3_i81 = 10 - c3_i80;
  if (c3_i81 > 511) {
    c3_i81 = 511;
  } else {
    if (c3_i81 < -512) {
      c3_i81 = -512;
    }
  }

  c3_i82 = (int16_T)chartInstance->c3_count;
  c3_i83 = (int16_T)chartInstance->c3_count;
  if ((int16_T)(c3_i83 & 512) != 0) {
    c3_i84 = (int16_T)(c3_i83 | -512);
  } else {
    c3_i84 = (int16_T)(c3_i83 & 511);
  }

  c3_i85 = c3_i84 - 10;
  if (c3_i85 > 511) {
    c3_i85 = 511;
  } else {
    if (c3_i85 < -512) {
      c3_i85 = -512;
    }
  }

  if ((int16_T)(c3_i78 & 512) != 0) {
    c3_i86 = (int16_T)(c3_i78 | -512);
  } else {
    c3_i86 = (int16_T)(c3_i78 & 511);
  }

  if (c3_i86 < 10) {
    if ((int16_T)c3_i81 <= 1) {
      c3_d9 = 1.0;
    } else {
      c3_d9 = 0.0;
    }
  } else {
    if ((int16_T)(c3_i82 & 512) != 0) {
      c3_i87 = (int16_T)(c3_i82 | -512);
    } else {
      c3_i87 = (int16_T)(c3_i82 & 511);
    }

    if (c3_i87 > 10) {
      if ((int16_T)c3_i85 <= 1) {
        c3_d9 = 3.0;
      } else {
        c3_d9 = 0.0;
      }
    } else {
      c3_d9 = 2.0;
    }
  }

  c3_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
              CV_RELATIONAL_EVAL(5U, 9U, 0, c3_d9, 0.0, -2, 0U,
    chartInstance->c3_count == 10) != 0U, chartInstance->c3_sfEvent)) != 0);
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c3_sfEvent);
    chartInstance->c3_count = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
    *chartInstance->c3_SCK = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_SCK, 3U);
    c3_i88 = chartInstance->c3_clock_cnt + 1;
    if (CV_SATURATION_EVAL(5, 9, 0, 0, c3_i88 < 0)) {
      c3_i88 = 0;
    } else {
      if (c3_i88 > 63) {
        c3_i88 = 63;
      }
    }

    chartInstance->c3_clock_cnt = (uint8_T)c3_i88;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_clock_cnt, 4U);
    chartInstance->c3_tp_CLOCKING = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_START_ADC_RDWR;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_START_ADC_RDWR = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
    c3_i89 = chartInstance->c3_count + 1;
    if (CV_SATURATION_EVAL(5, 8, 0, 0, c3_i89 < 0)) {
      c3_i89 = 0;
    } else {
      if (c3_i89 > 511) {
        c3_i89 = 511;
      }
    }

    chartInstance->c3_count = (uint16_T)c3_i89;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
    chartInstance->c3_tp_CLOCKING = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_CLOCKING;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_CLOCKING = 1U;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
}

static void c3_END(SFc3_BasicQuadrotorControlInstanceStruct *chartInstance)
{
  int16_T c3_i90;
  int16_T c3_i91;
  int16_T c3_i92;
  int32_T c3_i93;
  int16_T c3_i94;
  int16_T c3_i95;
  int16_T c3_i96;
  int32_T c3_i97;
  int16_T c3_i98;
  real_T c3_d10;
  int16_T c3_i99;
  boolean_T c3_out;
  int32_T c3_i100;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U, chartInstance->c3_sfEvent);
  c3_i90 = (int16_T)chartInstance->c3_count;
  c3_i91 = (int16_T)chartInstance->c3_count;
  if ((int16_T)(c3_i91 & 512) != 0) {
    c3_i92 = (int16_T)(c3_i91 | -512);
  } else {
    c3_i92 = (int16_T)(c3_i91 & 511);
  }

  c3_i93 = 10 - c3_i92;
  if (c3_i93 > 511) {
    c3_i93 = 511;
  } else {
    if (c3_i93 < -512) {
      c3_i93 = -512;
    }
  }

  c3_i94 = (int16_T)chartInstance->c3_count;
  c3_i95 = (int16_T)chartInstance->c3_count;
  if ((int16_T)(c3_i95 & 512) != 0) {
    c3_i96 = (int16_T)(c3_i95 | -512);
  } else {
    c3_i96 = (int16_T)(c3_i95 & 511);
  }

  c3_i97 = c3_i96 - 10;
  if (c3_i97 > 511) {
    c3_i97 = 511;
  } else {
    if (c3_i97 < -512) {
      c3_i97 = -512;
    }
  }

  if ((int16_T)(c3_i90 & 512) != 0) {
    c3_i98 = (int16_T)(c3_i90 | -512);
  } else {
    c3_i98 = (int16_T)(c3_i90 & 511);
  }

  if (c3_i98 < 10) {
    if ((int16_T)c3_i93 <= 1) {
      c3_d10 = 1.0;
    } else {
      c3_d10 = 0.0;
    }
  } else {
    if ((int16_T)(c3_i94 & 512) != 0) {
      c3_i99 = (int16_T)(c3_i94 | -512);
    } else {
      c3_i99 = (int16_T)(c3_i94 & 511);
    }

    if (c3_i99 > 10) {
      if ((int16_T)c3_i97 <= 1) {
        c3_d10 = 3.0;
      } else {
        c3_d10 = 0.0;
      }
    } else {
      c3_d10 = 2.0;
    }
  }

  c3_out = (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
              CV_RELATIONAL_EVAL(5U, 10U, 0, c3_d10, 0.0, -2, 0U,
    chartInstance->c3_count == 10) != 0U, chartInstance->c3_sfEvent)) != 0);
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c3_sfEvent);
    *chartInstance->c3_CSn = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_CSn, 1U);
    chartInstance->c3_count = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
    *chartInstance->c3_XYZ_Valid = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_XYZ_Valid, 8U);
    *chartInstance->c3_READ_SHIFT = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c3_READ_SHIFT, 7U);
    chartInstance->c3_tp_END = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_IDLE = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, chartInstance->c3_sfEvent);
    c3_i100 = chartInstance->c3_count + 1;
    if (CV_SATURATION_EVAL(5, 17, 0, 0, c3_i100 < 0)) {
      c3_i100 = 0;
    } else {
      if (c3_i100 > 511) {
        c3_i100 = 511;
      }
    }

    chartInstance->c3_count = (uint16_T)c3_i100;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c3_count, 2U);
    chartInstance->c3_tp_END = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_BasicQuadrotorControl = c3_IN_END;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_END = 1U;
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
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(boolean_T *)c3_inData;
  c3_y = NULL;
  if (!chartInstance->c3_ser_data_int_not_empty) {
    sf_mex_assign(&c3_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), false);
  } else {
    sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0), false);
  }

  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static boolean_T c3_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_b_ser_data_int, const char_T *c3_identifier)
{
  boolean_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_ser_data_int),
    &c3_thisId);
  sf_mex_destroy(&c3_b_ser_data_int);
  return c3_y;
}

static boolean_T c3_b_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  boolean_T c3_y;
  boolean_T c3_b0;
  if (mxIsEmpty(c3_u)) {
    chartInstance->c3_ser_data_int_not_empty = false;
  } else {
    chartInstance->c3_ser_data_int_not_empty = true;
    sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b0, 1, 11, 0U, 0, 0U, 0);
    c3_y = c3_b0;
  }

  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_ser_data_int;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  boolean_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_b_ser_data_int = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_ser_data_int),
    &c3_thisId);
  sf_mex_destroy(&c3_b_ser_data_int);
  *(boolean_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  boolean_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(boolean_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static boolean_T c3_c_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c3_ser_data, const char_T *c3_identifier)
{
  boolean_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_ser_data),
    &c3_thisId);
  sf_mex_destroy(&c3_ser_data);
  return c3_y;
}

static boolean_T c3_d_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct *
  chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  boolean_T c3_y;
  boolean_T c3_b1;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b1, 1, 11, 0U, 0, 0U, 0);
  c3_y = c3_b1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_ser_data;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  boolean_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_ser_data = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_ser_data),
    &c3_thisId);
  sf_mex_destroy(&c3_ser_data);
  *(boolean_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  uint8_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c3_u = *(uint8_T *)c3_inData;
    c3_y = NULL;
    c3_b_u = c3_u;
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 3, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c3_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c3_eml_mx), 15, "numerictype", 14, sf_mex_dup(c3_b_eml_mx), 15,
      "simulinkarray", 14, c3_b_y, 15, "fimathislocal", 3, false), false);
    sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  } else {
    sf_mex_assign(&c3_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c3_mxArrayOutData;
}

static uint8_T c3_e_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  const mxArray *c3_mxFi = NULL;
  const mxArray *c3_mxInt = NULL;
  uint8_T c3_u2;
  (void)chartInstance;
  sf_mex_check_fi(c3_parentId, c3_u, false, 0U, NULL, c3_eml_mx, c3_b_eml_mx);
  sf_mex_assign(&c3_mxFi, sf_mex_dup(c3_u), false);
  sf_mex_assign(&c3_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c3_mxFi)), false);
  sf_mex_import(c3_parentId, sf_mex_dup(c3_mxInt), &c3_u2, 1, 3, 0U, 0, 0U, 0);
  sf_mex_destroy(&c3_mxFi);
  sf_mex_destroy(&c3_mxInt);
  c3_y = c3_u2;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_cnt;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c3_cnt = sf_mex_dup(c3_mxArrayInData);
    c3_identifier = c3_varName;
    c3_thisId.fIdentifier = c3_identifier;
    c3_thisId.fParent = NULL;
    c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_cnt), &c3_thisId);
    sf_mex_destroy(&c3_cnt);
    *(uint8_T *)c3_outData = c3_y;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static uint8_T c3_f_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_word, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_word), &c3_thisId);
  sf_mex_destroy(&c3_word);
  return c3_y;
}

static uint8_T c3_g_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u3;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u3, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u3;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_word;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_word = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_word), &c3_thisId);
  sf_mex_destroy(&c3_word);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_h_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d11;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d11, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d11;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargout;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_nargout = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray *sf_c3_BasicQuadrotorControl_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_createstruct("structure", 2, 49, 1),
                false);
  c3_info_helper(&c3_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c3_nameCaptureInfo);
  return c3_nameCaptureInfo;
}

static void c3_info_helper(const mxArray **c3_info)
{
  const mxArray *c3_rhs0 = NULL;
  const mxArray *c3_lhs0 = NULL;
  const mxArray *c3_rhs1 = NULL;
  const mxArray *c3_lhs1 = NULL;
  const mxArray *c3_rhs2 = NULL;
  const mxArray *c3_lhs2 = NULL;
  const mxArray *c3_rhs3 = NULL;
  const mxArray *c3_lhs3 = NULL;
  const mxArray *c3_rhs4 = NULL;
  const mxArray *c3_lhs4 = NULL;
  const mxArray *c3_rhs5 = NULL;
  const mxArray *c3_lhs5 = NULL;
  const mxArray *c3_rhs6 = NULL;
  const mxArray *c3_lhs6 = NULL;
  const mxArray *c3_rhs7 = NULL;
  const mxArray *c3_lhs7 = NULL;
  const mxArray *c3_rhs8 = NULL;
  const mxArray *c3_lhs8 = NULL;
  const mxArray *c3_rhs9 = NULL;
  const mxArray *c3_lhs9 = NULL;
  const mxArray *c3_rhs10 = NULL;
  const mxArray *c3_lhs10 = NULL;
  const mxArray *c3_rhs11 = NULL;
  const mxArray *c3_lhs11 = NULL;
  const mxArray *c3_rhs12 = NULL;
  const mxArray *c3_lhs12 = NULL;
  const mxArray *c3_rhs13 = NULL;
  const mxArray *c3_lhs13 = NULL;
  const mxArray *c3_rhs14 = NULL;
  const mxArray *c3_lhs14 = NULL;
  const mxArray *c3_rhs15 = NULL;
  const mxArray *c3_lhs15 = NULL;
  const mxArray *c3_rhs16 = NULL;
  const mxArray *c3_lhs16 = NULL;
  const mxArray *c3_rhs17 = NULL;
  const mxArray *c3_lhs17 = NULL;
  const mxArray *c3_rhs18 = NULL;
  const mxArray *c3_lhs18 = NULL;
  const mxArray *c3_rhs19 = NULL;
  const mxArray *c3_lhs19 = NULL;
  const mxArray *c3_rhs20 = NULL;
  const mxArray *c3_lhs20 = NULL;
  const mxArray *c3_rhs21 = NULL;
  const mxArray *c3_lhs21 = NULL;
  const mxArray *c3_rhs22 = NULL;
  const mxArray *c3_lhs22 = NULL;
  const mxArray *c3_rhs23 = NULL;
  const mxArray *c3_lhs23 = NULL;
  const mxArray *c3_rhs24 = NULL;
  const mxArray *c3_lhs24 = NULL;
  const mxArray *c3_rhs25 = NULL;
  const mxArray *c3_lhs25 = NULL;
  const mxArray *c3_rhs26 = NULL;
  const mxArray *c3_lhs26 = NULL;
  const mxArray *c3_rhs27 = NULL;
  const mxArray *c3_lhs27 = NULL;
  const mxArray *c3_rhs28 = NULL;
  const mxArray *c3_lhs28 = NULL;
  const mxArray *c3_rhs29 = NULL;
  const mxArray *c3_lhs29 = NULL;
  const mxArray *c3_rhs30 = NULL;
  const mxArray *c3_lhs30 = NULL;
  const mxArray *c3_rhs31 = NULL;
  const mxArray *c3_lhs31 = NULL;
  const mxArray *c3_rhs32 = NULL;
  const mxArray *c3_lhs32 = NULL;
  const mxArray *c3_rhs33 = NULL;
  const mxArray *c3_lhs33 = NULL;
  const mxArray *c3_rhs34 = NULL;
  const mxArray *c3_lhs34 = NULL;
  const mxArray *c3_rhs35 = NULL;
  const mxArray *c3_lhs35 = NULL;
  const mxArray *c3_rhs36 = NULL;
  const mxArray *c3_lhs36 = NULL;
  const mxArray *c3_rhs37 = NULL;
  const mxArray *c3_lhs37 = NULL;
  const mxArray *c3_rhs38 = NULL;
  const mxArray *c3_lhs38 = NULL;
  const mxArray *c3_rhs39 = NULL;
  const mxArray *c3_lhs39 = NULL;
  const mxArray *c3_rhs40 = NULL;
  const mxArray *c3_lhs40 = NULL;
  const mxArray *c3_rhs41 = NULL;
  const mxArray *c3_lhs41 = NULL;
  const mxArray *c3_rhs42 = NULL;
  const mxArray *c3_lhs42 = NULL;
  const mxArray *c3_rhs43 = NULL;
  const mxArray *c3_lhs43 = NULL;
  const mxArray *c3_rhs44 = NULL;
  const mxArray *c3_lhs44 = NULL;
  const mxArray *c3_rhs45 = NULL;
  const mxArray *c3_lhs45 = NULL;
  const mxArray *c3_rhs46 = NULL;
  const mxArray *c3_lhs46 = NULL;
  const mxArray *c3_rhs47 = NULL;
  const mxArray *c3_lhs47 = NULL;
  const mxArray *c3_rhs48 = NULL;
  const mxArray *c3_lhs48 = NULL;
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("fi_impl"), "name", "name", 0);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1386456352U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c3_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs0), "rhs", "rhs", 0);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs0), "lhs", "lhs", 0);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m"), "context",
                  "context", 1);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("isnumerictype"), "name",
                  "name", 1);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 1);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1398907998U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c3_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs1), "rhs", "rhs", 1);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs1), "lhs", "lhs", 1);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 2);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("length"), "name", "name", 2);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("cell"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1303178606U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c3_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs2), "rhs", "rhs", 2);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs2), "lhs", "lhs", 2);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 3);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_fi_checkforconst"), "name",
                  "name", 3);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/eml_fi_checkforconst.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1346542752U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c3_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs3), "rhs", "rhs", 3);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs3), "lhs", "lhs", 3);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 4);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("isfi"), "name", "name", 4);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 4);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1346542758U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c3_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs4), "rhs", "rhs", 4);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs4), "lhs", "lhs", 4);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("isnumerictype"), "name",
                  "name", 5);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 5);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1398907998U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c3_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs5), "rhs", "rhs", 5);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs5), "lhs", "lhs", 5);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 6);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_fi_constructor_helper"),
                  "name", "name", 6);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/fixedpoint/fixedpoint/eml_fi_constructor_helper.m"),
                  "resolved", "resolved", 6);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1376013096U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c3_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs6), "rhs", "rhs", 6);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs6), "lhs", "lhs", 6);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 7);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_fi_checkforerror"), "name",
                  "name", 7);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.numerictype"),
                  "dominantType", "dominantType", 7);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/eml_fi_checkforerror.m"),
                  "resolved", "resolved", 7);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1360314746U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c3_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs7), "rhs", "rhs", 7);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs7), "lhs", "lhs", 7);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "context", "context", 8);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eq"), "name", "name", 8);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1397289822U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c3_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs8), "rhs", "rhs", 8);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs8), "lhs", "lhs", 8);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 9);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 9);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1286851196U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c3_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs9), "rhs", "rhs", 9);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs9), "lhs", "lhs", 9);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 10);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("isfi"), "name", "name", 10);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 10);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1346542758U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c3_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs10), "lhs", "lhs",
                  10);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "context",
                  "context", 11);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("isnumerictype"), "name",
                  "name", 11);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.numerictype"),
                  "dominantType", "dominantType", 11);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 11);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1398907998U), "fileTimeLo",
                  "fileTimeLo", 11);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 11);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 11);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 11);
  sf_mex_assign(&c3_rhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs11), "rhs", "rhs",
                  11);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs11), "lhs", "lhs",
                  11);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 12);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("get"), "name", "name", 12);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.fimath"),
                  "dominantType", "dominantType", 12);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fimath/get.m"),
                  "resolved", "resolved", 12);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1378328382U), "fileTimeLo",
                  "fileTimeLo", 12);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 12);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 12);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 12);
  sf_mex_assign(&c3_rhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs12), "rhs", "rhs",
                  12);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs12), "lhs", "lhs",
                  12);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 13);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("strcmpi"), "name", "name", 13);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 13);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strcmpi.m"), "resolved",
                  "resolved", 13);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1327451510U), "fileTimeLo",
                  "fileTimeLo", 13);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 13);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 13);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 13);
  sf_mex_assign(&c3_rhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs13), "rhs", "rhs",
                  13);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs13), "lhs", "lhs",
                  13);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strcmpi.m"), "context",
                  "context", 14);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_assert_supported_string"),
                  "name", "name", 14);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 14);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m"),
                  "resolved", "resolved", 14);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1327451510U), "fileTimeLo",
                  "fileTimeLo", 14);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 14);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 14);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 14);
  sf_mex_assign(&c3_rhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs14), "rhs", "rhs",
                  14);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs14), "lhs", "lhs",
                  14);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m!inrange"),
                  "context", "context", 15);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_charmax"), "name", "name",
                  15);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 15);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m"),
                  "resolved", "resolved", 15);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1327451510U), "fileTimeLo",
                  "fileTimeLo", 15);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 15);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 15);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 15);
  sf_mex_assign(&c3_rhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs15), "rhs", "rhs",
                  15);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs15), "lhs", "lhs",
                  15);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m"), "context",
                  "context", 16);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("intmax"), "name", "name", 16);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 16);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved",
                  "resolved", 16);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1362294282U), "fileTimeLo",
                  "fileTimeLo", 16);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 16);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 16);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 16);
  sf_mex_assign(&c3_rhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs16), "rhs", "rhs",
                  16);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs16), "lhs", "lhs",
                  16);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "context",
                  "context", 17);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_switch_helper"), "name",
                  "name", 17);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 17);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                  "resolved", "resolved", 17);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1393363258U), "fileTimeLo",
                  "fileTimeLo", 17);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 17);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 17);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 17);
  sf_mex_assign(&c3_rhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs17), "rhs", "rhs",
                  17);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs17), "lhs", "lhs",
                  17);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strcmpi.m"), "context",
                  "context", 18);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("min"), "name", "name", 18);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 18);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved",
                  "resolved", 18);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1311287718U), "fileTimeLo",
                  "fileTimeLo", 18);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 18);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 18);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 18);
  sf_mex_assign(&c3_rhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs18), "rhs", "rhs",
                  18);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs18), "lhs", "lhs",
                  18);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "context",
                  "context", 19);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_min_or_max"), "name",
                  "name", 19);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 19);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                  "resolved", "resolved", 19);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1378328384U), "fileTimeLo",
                  "fileTimeLo", 19);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 19);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 19);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 19);
  sf_mex_assign(&c3_rhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs19), "rhs", "rhs",
                  19);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs19), "lhs", "lhs",
                  19);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 20);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 20);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 20);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 20);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 20);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 20);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 20);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 20);
  sf_mex_assign(&c3_rhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs20), "rhs", "rhs",
                  20);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs20), "lhs", "lhs",
                  20);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 21);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 21);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 21);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 21);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1410840170U), "fileTimeLo",
                  "fileTimeLo", 21);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 21);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 21);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 21);
  sf_mex_assign(&c3_rhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs21), "rhs", "rhs",
                  21);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs21), "lhs", "lhs",
                  21);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 22);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 22);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 22);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 22);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 22);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 22);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 22);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 22);
  sf_mex_assign(&c3_rhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs22), "rhs", "rhs",
                  22);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs22), "lhs", "lhs",
                  22);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 23);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 23);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 23);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 23);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1410840170U), "fileTimeLo",
                  "fileTimeLo", 23);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 23);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 23);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 23);
  sf_mex_assign(&c3_rhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs23), "rhs", "rhs",
                  23);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs23), "lhs", "lhs",
                  23);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 24);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_index_class"), "name",
                  "name", 24);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 24);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                  "resolved", "resolved", 24);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1323202978U), "fileTimeLo",
                  "fileTimeLo", 24);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 24);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 24);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 24);
  sf_mex_assign(&c3_rhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs24), "rhs", "rhs",
                  24);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs24), "lhs", "lhs",
                  24);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 25);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 25);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 25);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 25);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 25);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 25);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 25);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 25);
  sf_mex_assign(&c3_rhs25, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs25, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs25), "rhs", "rhs",
                  25);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs25), "lhs", "lhs",
                  25);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 26);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 26);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 26);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 26);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1395960656U), "fileTimeLo",
                  "fileTimeLo", 26);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 26);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 26);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 26);
  sf_mex_assign(&c3_rhs26, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs26, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs26), "rhs", "rhs",
                  26);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs26), "lhs", "lhs",
                  26);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 27);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("isscaledtype"), "name", "name",
                  27);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 27);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isscaledtype.m"),
                  "resolved", "resolved", 27);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1346542780U), "fileTimeLo",
                  "fileTimeLo", 27);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 27);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 27);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 27);
  sf_mex_assign(&c3_rhs27, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs27, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs27), "rhs", "rhs",
                  27);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs27), "lhs", "lhs",
                  27);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isscaledtype.m"),
                  "context", "context", 28);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("isfixed"), "name", "name", 28);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 28);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isfixed.m"),
                  "resolved", "resolved", 28);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1346542778U), "fileTimeLo",
                  "fileTimeLo", 28);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 28);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 28);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 28);
  sf_mex_assign(&c3_rhs28, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs28, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs28), "rhs", "rhs",
                  28);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs28), "lhs", "lhs",
                  28);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isfixed.m"),
                  "context", "context", 29);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("get"), "name", "name", 29);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.numerictype"),
                  "dominantType", "dominantType", 29);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@numerictype/get.m"),
                  "resolved", "resolved", 29);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1378328382U), "fileTimeLo",
                  "fileTimeLo", 29);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 29);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 29);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 29);
  sf_mex_assign(&c3_rhs29, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs29, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs29), "rhs", "rhs",
                  29);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs29), "lhs", "lhs",
                  29);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 30);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_make_same_complexity"),
                  "name", "name", 30);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 30);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_make_same_complexity.m"),
                  "resolved", "resolved", 30);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1289552046U), "fileTimeLo",
                  "fileTimeLo", 30);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 30);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 30);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 30);
  sf_mex_assign(&c3_rhs30, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs30, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs30), "rhs", "rhs",
                  30);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs30), "lhs", "lhs",
                  30);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "context", "context", 31);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("bitget"), "name", "name", 31);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("uint8"), "dominantType",
                  "dominantType", 31);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "resolved",
                  "resolved", 31);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1383909690U), "fileTimeLo",
                  "fileTimeLo", 31);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 31);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 31);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 31);
  sf_mex_assign(&c3_rhs31, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs31, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs31), "rhs", "rhs",
                  31);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs31), "lhs", "lhs",
                  31);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context",
                  "context", 32);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 32);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 32);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 32);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1389750174U), "fileTimeLo",
                  "fileTimeLo", 32);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 32);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 32);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 32);
  sf_mex_assign(&c3_rhs32, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs32, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs32), "rhs", "rhs",
                  32);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs32), "lhs", "lhs",
                  32);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context",
                  "context", 33);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 33);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("uint8"), "dominantType",
                  "dominantType", 33);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 33);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 33);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 33);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 33);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 33);
  sf_mex_assign(&c3_rhs33, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs33, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs33), "rhs", "rhs",
                  33);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs33), "lhs", "lhs",
                  33);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 34);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 34);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("uint8"), "dominantType",
                  "dominantType", 34);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 34);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1410840170U), "fileTimeLo",
                  "fileTimeLo", 34);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 34);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 34);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 34);
  sf_mex_assign(&c3_rhs34, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs34, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs34), "rhs", "rhs",
                  34);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs34), "lhs", "lhs",
                  34);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context",
                  "context", 35);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 35);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("uint8"), "dominantType",
                  "dominantType", 35);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 35);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 35);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 35);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 35);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 35);
  sf_mex_assign(&c3_rhs35, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs35, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs35), "rhs", "rhs",
                  35);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs35), "lhs", "lhs",
                  35);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 36);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 36);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("uint8"), "dominantType",
                  "dominantType", 36);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 36);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1410840170U), "fileTimeLo",
                  "fileTimeLo", 36);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 36);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 36);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 36);
  sf_mex_assign(&c3_rhs36, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs36, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs36), "rhs", "rhs",
                  36);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs36), "lhs", "lhs",
                  36);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context",
                  "context", 37);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_int_nbits"), "name",
                  "name", 37);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 37);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_nbits.m"), "resolved",
                  "resolved", 37);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1323202978U), "fileTimeLo",
                  "fileTimeLo", 37);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 37);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 37);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 37);
  sf_mex_assign(&c3_rhs37, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs37, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs37), "rhs", "rhs",
                  37);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs37), "lhs", "lhs",
                  37);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_nbits.m"), "context",
                  "context", 38);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_switch_helper"), "name",
                  "name", 38);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 38);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                  "resolved", "resolved", 38);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1393363258U), "fileTimeLo",
                  "fileTimeLo", 38);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 38);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 38);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 38);
  sf_mex_assign(&c3_rhs38, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs38, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs38), "rhs", "rhs",
                  38);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs38), "lhs", "lhs",
                  38);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context",
                  "context", 39);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("all_in_integer_range"), "name",
                  "name", 39);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("uint8"), "dominantType",
                  "dominantType", 39);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/ops/private/all_in_integer_range.m"),
                  "resolved", "resolved", 39);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1383909688U), "fileTimeLo",
                  "fileTimeLo", 39);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 39);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 39);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 39);
  sf_mex_assign(&c3_rhs39, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs39, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs39), "rhs", "rhs",
                  39);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs39), "lhs", "lhs",
                  39);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/ops/private/all_in_integer_range.m"),
                  "context", "context", 40);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("coder.internal.indexIntRelop"),
                  "name", "name", 40);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 40);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                  "resolved", "resolved", 40);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1326760722U), "fileTimeLo",
                  "fileTimeLo", 40);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 40);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 40);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 40);
  sf_mex_assign(&c3_rhs40, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs40, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs40), "rhs", "rhs",
                  40);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs40), "lhs", "lhs",
                  40);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!apply_float_relop"),
                  "context", "context", 41);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_switch_helper"), "name",
                  "name", 41);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 41);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                  "resolved", "resolved", 41);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1393363258U), "fileTimeLo",
                  "fileTimeLo", 41);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 41);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 41);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 41);
  sf_mex_assign(&c3_rhs41, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs41, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs41), "rhs", "rhs",
                  41);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs41), "lhs", "lhs",
                  41);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass"),
                  "context", "context", 42);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_float_model"), "name",
                  "name", 42);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 42);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                  "resolved", "resolved", 42);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1326760396U), "fileTimeLo",
                  "fileTimeLo", 42);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 42);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 42);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 42);
  sf_mex_assign(&c3_rhs42, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs42, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs42), "rhs", "rhs",
                  42);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs42), "lhs", "lhs",
                  42);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass"),
                  "context", "context", 43);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("intmin"), "name", "name", 43);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 43);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved",
                  "resolved", 43);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1362294282U), "fileTimeLo",
                  "fileTimeLo", 43);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 43);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 43);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 43);
  sf_mex_assign(&c3_rhs43, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs43, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs43), "rhs", "rhs",
                  43);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs43), "lhs", "lhs",
                  43);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "context",
                  "context", 44);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_switch_helper"), "name",
                  "name", 44);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 44);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                  "resolved", "resolved", 44);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1393363258U), "fileTimeLo",
                  "fileTimeLo", 44);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 44);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 44);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 44);
  sf_mex_assign(&c3_rhs44, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs44, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs44), "rhs", "rhs",
                  44);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs44), "lhs", "lhs",
                  44);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/ops/private/all_in_integer_range.m"),
                  "context", "context", 45);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("floor"), "name", "name", 45);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 45);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved",
                  "resolved", 45);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1363742654U), "fileTimeLo",
                  "fileTimeLo", 45);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 45);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 45);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 45);
  sf_mex_assign(&c3_rhs45, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs45, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs45), "rhs", "rhs",
                  45);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs45), "lhs", "lhs",
                  45);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 46);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 46);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 46);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 46);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1395960656U), "fileTimeLo",
                  "fileTimeLo", 46);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 46);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 46);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 46);
  sf_mex_assign(&c3_rhs46, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs46, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs46), "rhs", "rhs",
                  46);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs46), "lhs", "lhs",
                  46);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 47);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("eml_scalar_floor"), "name",
                  "name", 47);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 47);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                  "resolved", "resolved", 47);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1286851126U), "fileTimeLo",
                  "fileTimeLo", 47);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 47);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 47);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 47);
  sf_mex_assign(&c3_rhs47, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs47, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs47), "rhs", "rhs",
                  47);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs47), "lhs", "lhs",
                  47);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/bitget.m"), "context",
                  "context", 48);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 48);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut("uint8"), "dominantType",
                  "dominantType", 48);
  sf_mex_addfield(*c3_info, c3_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 48);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(1389750174U), "fileTimeLo",
                  "fileTimeLo", 48);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 48);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 48);
  sf_mex_addfield(*c3_info, c3_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 48);
  sf_mex_assign(&c3_rhs48, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c3_lhs48, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_rhs48), "rhs", "rhs",
                  48);
  sf_mex_addfield(*c3_info, sf_mex_duplicatearraysafe(&c3_lhs48), "lhs", "lhs",
                  48);
  sf_mex_destroy(&c3_rhs0);
  sf_mex_destroy(&c3_lhs0);
  sf_mex_destroy(&c3_rhs1);
  sf_mex_destroy(&c3_lhs1);
  sf_mex_destroy(&c3_rhs2);
  sf_mex_destroy(&c3_lhs2);
  sf_mex_destroy(&c3_rhs3);
  sf_mex_destroy(&c3_lhs3);
  sf_mex_destroy(&c3_rhs4);
  sf_mex_destroy(&c3_lhs4);
  sf_mex_destroy(&c3_rhs5);
  sf_mex_destroy(&c3_lhs5);
  sf_mex_destroy(&c3_rhs6);
  sf_mex_destroy(&c3_lhs6);
  sf_mex_destroy(&c3_rhs7);
  sf_mex_destroy(&c3_lhs7);
  sf_mex_destroy(&c3_rhs8);
  sf_mex_destroy(&c3_lhs8);
  sf_mex_destroy(&c3_rhs9);
  sf_mex_destroy(&c3_lhs9);
  sf_mex_destroy(&c3_rhs10);
  sf_mex_destroy(&c3_lhs10);
  sf_mex_destroy(&c3_rhs11);
  sf_mex_destroy(&c3_lhs11);
  sf_mex_destroy(&c3_rhs12);
  sf_mex_destroy(&c3_lhs12);
  sf_mex_destroy(&c3_rhs13);
  sf_mex_destroy(&c3_lhs13);
  sf_mex_destroy(&c3_rhs14);
  sf_mex_destroy(&c3_lhs14);
  sf_mex_destroy(&c3_rhs15);
  sf_mex_destroy(&c3_lhs15);
  sf_mex_destroy(&c3_rhs16);
  sf_mex_destroy(&c3_lhs16);
  sf_mex_destroy(&c3_rhs17);
  sf_mex_destroy(&c3_lhs17);
  sf_mex_destroy(&c3_rhs18);
  sf_mex_destroy(&c3_lhs18);
  sf_mex_destroy(&c3_rhs19);
  sf_mex_destroy(&c3_lhs19);
  sf_mex_destroy(&c3_rhs20);
  sf_mex_destroy(&c3_lhs20);
  sf_mex_destroy(&c3_rhs21);
  sf_mex_destroy(&c3_lhs21);
  sf_mex_destroy(&c3_rhs22);
  sf_mex_destroy(&c3_lhs22);
  sf_mex_destroy(&c3_rhs23);
  sf_mex_destroy(&c3_lhs23);
  sf_mex_destroy(&c3_rhs24);
  sf_mex_destroy(&c3_lhs24);
  sf_mex_destroy(&c3_rhs25);
  sf_mex_destroy(&c3_lhs25);
  sf_mex_destroy(&c3_rhs26);
  sf_mex_destroy(&c3_lhs26);
  sf_mex_destroy(&c3_rhs27);
  sf_mex_destroy(&c3_lhs27);
  sf_mex_destroy(&c3_rhs28);
  sf_mex_destroy(&c3_lhs28);
  sf_mex_destroy(&c3_rhs29);
  sf_mex_destroy(&c3_lhs29);
  sf_mex_destroy(&c3_rhs30);
  sf_mex_destroy(&c3_lhs30);
  sf_mex_destroy(&c3_rhs31);
  sf_mex_destroy(&c3_lhs31);
  sf_mex_destroy(&c3_rhs32);
  sf_mex_destroy(&c3_lhs32);
  sf_mex_destroy(&c3_rhs33);
  sf_mex_destroy(&c3_lhs33);
  sf_mex_destroy(&c3_rhs34);
  sf_mex_destroy(&c3_lhs34);
  sf_mex_destroy(&c3_rhs35);
  sf_mex_destroy(&c3_lhs35);
  sf_mex_destroy(&c3_rhs36);
  sf_mex_destroy(&c3_lhs36);
  sf_mex_destroy(&c3_rhs37);
  sf_mex_destroy(&c3_lhs37);
  sf_mex_destroy(&c3_rhs38);
  sf_mex_destroy(&c3_lhs38);
  sf_mex_destroy(&c3_rhs39);
  sf_mex_destroy(&c3_lhs39);
  sf_mex_destroy(&c3_rhs40);
  sf_mex_destroy(&c3_lhs40);
  sf_mex_destroy(&c3_rhs41);
  sf_mex_destroy(&c3_lhs41);
  sf_mex_destroy(&c3_rhs42);
  sf_mex_destroy(&c3_lhs42);
  sf_mex_destroy(&c3_rhs43);
  sf_mex_destroy(&c3_lhs43);
  sf_mex_destroy(&c3_rhs44);
  sf_mex_destroy(&c3_lhs44);
  sf_mex_destroy(&c3_rhs45);
  sf_mex_destroy(&c3_lhs45);
  sf_mex_destroy(&c3_rhs46);
  sf_mex_destroy(&c3_lhs46);
  sf_mex_destroy(&c3_rhs47);
  sf_mex_destroy(&c3_lhs47);
  sf_mex_destroy(&c3_rhs48);
  sf_mex_destroy(&c3_lhs48);
}

static const mxArray *c3_emlrt_marshallOut(const char * c3_u)
{
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c3_u)), false);
  return c3_y;
}

static const mxArray *c3_b_emlrt_marshallOut(const uint32_T c3_u)
{
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 7, 0U, 0U, 0U, 0), false);
  return c3_y;
}

static boolean_T c3_sdi_gen(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, uint8_T c3_word, uint8_T c3_cnt)
{
  boolean_T c3_ser_data;
  uint32_T c3_debug_family_var_map[6];
  real_T c3_nargin = 2.0;
  real_T c3_nargout = 1.0;
  const mxArray *c3_T = NULL;
  const mxArray *c3_F = NULL;
  const mxArray *c3_val = NULL;
  const mxArray *c3_unusedU2 = NULL;
  const mxArray *c3_unusedU3 = NULL;
  const mxArray *c3_isfimathlocal = NULL;
  int8_T c3_i101;
  int8_T c3_i102;
  int8_T c3_i103;
  int32_T c3_i104;
  int8_T c3_i105;
  int8_T c3_i106;
  int8_T c3_i107;
  int32_T c3_i108;
  int8_T c3_i109;
  real_T c3_d12;
  int8_T c3_i110;
  uint8_T c3_a;
  uint8_T c3_ak;
  uint8_T c3_c;
  const mxArray *c3_b_T = NULL;
  const mxArray *c3_b_F = NULL;
  const mxArray *c3_b_val = NULL;
  const mxArray *c3_b_unusedU2 = NULL;
  const mxArray *c3_b_unusedU3 = NULL;
  const mxArray *c3_b_isfimathlocal = NULL;
  int8_T c3_i111;
  int8_T c3_i112;
  int8_T c3_i113;
  int32_T c3_i114;
  int8_T c3_i115;
  int8_T c3_i116;
  int8_T c3_i117;
  int32_T c3_i118;
  int8_T c3_i119;
  real_T c3_d13;
  int8_T c3_i120;
  uint8_T c3_b_a;
  uint8_T c3_b_ak;
  uint8_T c3_b_c;
  const mxArray *c3_c_T = NULL;
  const mxArray *c3_c_F = NULL;
  const mxArray *c3_c_val = NULL;
  const mxArray *c3_c_unusedU2 = NULL;
  const mxArray *c3_c_unusedU3 = NULL;
  const mxArray *c3_c_isfimathlocal = NULL;
  int8_T c3_i121;
  int8_T c3_i122;
  int8_T c3_i123;
  int32_T c3_i124;
  int8_T c3_i125;
  int8_T c3_i126;
  int8_T c3_i127;
  int32_T c3_i128;
  int8_T c3_i129;
  real_T c3_d14;
  int8_T c3_i130;
  uint8_T c3_c_a;
  uint8_T c3_c_ak;
  uint8_T c3_c_c;
  const mxArray *c3_d_T = NULL;
  const mxArray *c3_d_F = NULL;
  const mxArray *c3_d_val = NULL;
  const mxArray *c3_d_unusedU2 = NULL;
  const mxArray *c3_d_unusedU3 = NULL;
  const mxArray *c3_d_isfimathlocal = NULL;
  int8_T c3_i131;
  int8_T c3_i132;
  int8_T c3_i133;
  int32_T c3_i134;
  int8_T c3_i135;
  int8_T c3_i136;
  int8_T c3_i137;
  int32_T c3_i138;
  int8_T c3_i139;
  real_T c3_d15;
  int8_T c3_i140;
  uint8_T c3_d_a;
  uint8_T c3_d_ak;
  uint8_T c3_d_c;
  const mxArray *c3_e_T = NULL;
  const mxArray *c3_e_F = NULL;
  const mxArray *c3_e_val = NULL;
  const mxArray *c3_e_unusedU2 = NULL;
  const mxArray *c3_e_unusedU3 = NULL;
  const mxArray *c3_e_isfimathlocal = NULL;
  int8_T c3_i141;
  int8_T c3_i142;
  int8_T c3_i143;
  int32_T c3_i144;
  int8_T c3_i145;
  int8_T c3_i146;
  int8_T c3_i147;
  int32_T c3_i148;
  int8_T c3_i149;
  real_T c3_d16;
  int8_T c3_i150;
  uint8_T c3_e_a;
  uint8_T c3_e_ak;
  uint8_T c3_e_c;
  const mxArray *c3_f_T = NULL;
  const mxArray *c3_f_F = NULL;
  const mxArray *c3_f_val = NULL;
  const mxArray *c3_f_unusedU2 = NULL;
  const mxArray *c3_f_unusedU3 = NULL;
  const mxArray *c3_f_isfimathlocal = NULL;
  int8_T c3_i151;
  int8_T c3_i152;
  int8_T c3_i153;
  int32_T c3_i154;
  int8_T c3_i155;
  int8_T c3_i156;
  int8_T c3_i157;
  int32_T c3_i158;
  int8_T c3_i159;
  real_T c3_d17;
  int8_T c3_i160;
  uint8_T c3_f_a;
  uint8_T c3_f_ak;
  uint8_T c3_f_c;
  const mxArray *c3_g_T = NULL;
  const mxArray *c3_g_F = NULL;
  const mxArray *c3_g_val = NULL;
  const mxArray *c3_g_unusedU2 = NULL;
  const mxArray *c3_g_unusedU3 = NULL;
  const mxArray *c3_g_isfimathlocal = NULL;
  int8_T c3_i161;
  int8_T c3_i162;
  int8_T c3_i163;
  int32_T c3_i164;
  int8_T c3_i165;
  int8_T c3_i166;
  int8_T c3_i167;
  int32_T c3_i168;
  int8_T c3_i169;
  real_T c3_d18;
  int8_T c3_i170;
  uint8_T c3_g_a;
  uint8_T c3_g_ak;
  uint8_T c3_g_c;
  const mxArray *c3_h_T = NULL;
  const mxArray *c3_h_F = NULL;
  const mxArray *c3_h_val = NULL;
  const mxArray *c3_h_unusedU2 = NULL;
  const mxArray *c3_h_unusedU3 = NULL;
  const mxArray *c3_h_isfimathlocal = NULL;
  int8_T c3_i171;
  int8_T c3_i172;
  int8_T c3_i173;
  int32_T c3_i174;
  int8_T c3_i175;
  int8_T c3_i176;
  int8_T c3_i177;
  int32_T c3_i178;
  int8_T c3_i179;
  real_T c3_d19;
  int8_T c3_i180;
  uint8_T c3_h_a;
  uint8_T c3_h_ak;
  uint8_T c3_h_c;
  _SFD_SET_DATA_VALUE_PTR(11U, &c3_ser_data);
  _SFD_SET_DATA_VALUE_PTR(10U, &c3_cnt);
  _SFD_SET_DATA_VALUE_PTR(9U, &c3_word);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c3_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_e_sf_marshallOut,
    c3_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_e_sf_marshallOut,
    c3_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_word, 2U, c3_d_sf_marshallOut,
    c3_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_cnt, 3U, c3_c_sf_marshallOut,
    c3_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_ser_data, 4U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&chartInstance->c3_ser_data_int, 5U,
    c3_sf_marshallOut, c3_sf_marshallIn);
  CV_EML_FCN(7, 0);
  _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 4);
  _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 5);
  if (CV_EML_IF(7, 1, 0, !chartInstance->c3_ser_data_int_not_empty)) {
    _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 6);
    chartInstance->c3_ser_data_int = false;
    chartInstance->c3_ser_data_int_not_empty = true;
  }

  _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 10);
  sf_mex_destroy(&c3_T);
  sf_mex_destroy(&c3_F);
  sf_mex_destroy(&c3_val);
  sf_mex_destroy(&c3_unusedU2);
  sf_mex_destroy(&c3_unusedU3);
  sf_mex_destroy(&c3_isfimathlocal);
  c3_i101 = (int8_T)c3_cnt;
  c3_i102 = (int8_T)c3_cnt;
  if ((int8_T)(c3_i102 & 32) != 0) {
    c3_i103 = (int8_T)(c3_i102 | -32);
  } else {
    c3_i103 = (int8_T)(c3_i102 & 31);
  }

  c3_i104 = 1 - c3_i103;
  if (c3_i104 > 31) {
    c3_i104 = 31;
  } else {
    if (c3_i104 < -32) {
      c3_i104 = -32;
    }
  }

  c3_i105 = (int8_T)c3_cnt;
  c3_i106 = (int8_T)c3_cnt;
  if ((int8_T)(c3_i106 & 32) != 0) {
    c3_i107 = (int8_T)(c3_i106 | -32);
  } else {
    c3_i107 = (int8_T)(c3_i106 & 31);
  }

  c3_i108 = c3_i107 - 1;
  if (c3_i108 > 31) {
    c3_i108 = 31;
  } else {
    if (c3_i108 < -32) {
      c3_i108 = -32;
    }
  }

  if ((int8_T)(c3_i101 & 32) != 0) {
    c3_i109 = (int8_T)(c3_i101 | -32);
  } else {
    c3_i109 = (int8_T)(c3_i101 & 31);
  }

  if (c3_i109 < 1) {
    if ((int8_T)c3_i104 <= 1) {
      c3_d12 = 1.0;
    } else {
      c3_d12 = 0.0;
    }
  } else {
    if ((int8_T)(c3_i105 & 32) != 0) {
      c3_i110 = (int8_T)(c3_i105 | -32);
    } else {
      c3_i110 = (int8_T)(c3_i105 & 31);
    }

    if (c3_i110 > 1) {
      if ((int8_T)c3_i108 <= 1) {
        c3_d12 = 3.0;
      } else {
        c3_d12 = 0.0;
      }
    } else {
      c3_d12 = 2.0;
    }
  }

  if (CV_EML_IF(7, 1, 1, CV_RELATIONAL_EVAL(4U, 7U, 0, c3_d12, 0.0, -2, 0U,
        (int32_T)c3_eq(chartInstance, c3_cnt, 1U)))) {
    _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 11);
    c3_a = c3_word;
    c3_ak = c3_a;
    c3_c = (uint8_T)((real_T)(uint8_T)(c3_ak & 128U) != 0.0);
    chartInstance->c3_ser_data_int = (c3_c != 0);
  } else {
    _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 12);
    sf_mex_destroy(&c3_b_T);
    sf_mex_destroy(&c3_b_F);
    sf_mex_destroy(&c3_b_val);
    sf_mex_destroy(&c3_b_unusedU2);
    sf_mex_destroy(&c3_b_unusedU3);
    sf_mex_destroy(&c3_b_isfimathlocal);
    c3_i111 = (int8_T)c3_cnt;
    c3_i112 = (int8_T)c3_cnt;
    if ((int8_T)(c3_i112 & 32) != 0) {
      c3_i113 = (int8_T)(c3_i112 | -32);
    } else {
      c3_i113 = (int8_T)(c3_i112 & 31);
    }

    c3_i114 = 2 - c3_i113;
    if (c3_i114 > 31) {
      c3_i114 = 31;
    } else {
      if (c3_i114 < -32) {
        c3_i114 = -32;
      }
    }

    c3_i115 = (int8_T)c3_cnt;
    c3_i116 = (int8_T)c3_cnt;
    if ((int8_T)(c3_i116 & 32) != 0) {
      c3_i117 = (int8_T)(c3_i116 | -32);
    } else {
      c3_i117 = (int8_T)(c3_i116 & 31);
    }

    c3_i118 = c3_i117 - 2;
    if (c3_i118 > 31) {
      c3_i118 = 31;
    } else {
      if (c3_i118 < -32) {
        c3_i118 = -32;
      }
    }

    if ((int8_T)(c3_i111 & 32) != 0) {
      c3_i119 = (int8_T)(c3_i111 | -32);
    } else {
      c3_i119 = (int8_T)(c3_i111 & 31);
    }

    if (c3_i119 < 2) {
      if ((int8_T)c3_i114 <= 1) {
        c3_d13 = 1.0;
      } else {
        c3_d13 = 0.0;
      }
    } else {
      if ((int8_T)(c3_i115 & 32) != 0) {
        c3_i120 = (int8_T)(c3_i115 | -32);
      } else {
        c3_i120 = (int8_T)(c3_i115 & 31);
      }

      if (c3_i120 > 2) {
        if ((int8_T)c3_i118 <= 1) {
          c3_d13 = 3.0;
        } else {
          c3_d13 = 0.0;
        }
      } else {
        c3_d13 = 2.0;
      }
    }

    if (CV_EML_IF(7, 1, 2, CV_RELATIONAL_EVAL(4U, 7U, 1, c3_d13, 0.0, -2, 0U,
          (int32_T)c3_eq(chartInstance, c3_cnt, 2U)))) {
      _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 13);
      c3_b_a = c3_word;
      c3_b_ak = c3_b_a;
      c3_b_c = (uint8_T)((real_T)(uint8_T)(c3_b_ak & 64U) != 0.0);
      chartInstance->c3_ser_data_int = (c3_b_c != 0);
    } else {
      _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 14);
      sf_mex_destroy(&c3_c_T);
      sf_mex_destroy(&c3_c_F);
      sf_mex_destroy(&c3_c_val);
      sf_mex_destroy(&c3_c_unusedU2);
      sf_mex_destroy(&c3_c_unusedU3);
      sf_mex_destroy(&c3_c_isfimathlocal);
      c3_i121 = (int8_T)c3_cnt;
      c3_i122 = (int8_T)c3_cnt;
      if ((int8_T)(c3_i122 & 32) != 0) {
        c3_i123 = (int8_T)(c3_i122 | -32);
      } else {
        c3_i123 = (int8_T)(c3_i122 & 31);
      }

      c3_i124 = 3 - c3_i123;
      if (c3_i124 > 31) {
        c3_i124 = 31;
      } else {
        if (c3_i124 < -32) {
          c3_i124 = -32;
        }
      }

      c3_i125 = (int8_T)c3_cnt;
      c3_i126 = (int8_T)c3_cnt;
      if ((int8_T)(c3_i126 & 32) != 0) {
        c3_i127 = (int8_T)(c3_i126 | -32);
      } else {
        c3_i127 = (int8_T)(c3_i126 & 31);
      }

      c3_i128 = c3_i127 - 3;
      if (c3_i128 > 31) {
        c3_i128 = 31;
      } else {
        if (c3_i128 < -32) {
          c3_i128 = -32;
        }
      }

      if ((int8_T)(c3_i121 & 32) != 0) {
        c3_i129 = (int8_T)(c3_i121 | -32);
      } else {
        c3_i129 = (int8_T)(c3_i121 & 31);
      }

      if (c3_i129 < 3) {
        if ((int8_T)c3_i124 <= 1) {
          c3_d14 = 1.0;
        } else {
          c3_d14 = 0.0;
        }
      } else {
        if ((int8_T)(c3_i125 & 32) != 0) {
          c3_i130 = (int8_T)(c3_i125 | -32);
        } else {
          c3_i130 = (int8_T)(c3_i125 & 31);
        }

        if (c3_i130 > 3) {
          if ((int8_T)c3_i128 <= 1) {
            c3_d14 = 3.0;
          } else {
            c3_d14 = 0.0;
          }
        } else {
          c3_d14 = 2.0;
        }
      }

      if (CV_EML_IF(7, 1, 3, CV_RELATIONAL_EVAL(4U, 7U, 2, c3_d14, 0.0, -2, 0U,
            (int32_T)c3_eq(chartInstance, c3_cnt, 3U)))) {
        _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 15);
        c3_c_a = c3_word;
        c3_c_ak = c3_c_a;
        c3_c_c = (uint8_T)((real_T)(uint8_T)(c3_c_ak & 32U) != 0.0);
        chartInstance->c3_ser_data_int = (c3_c_c != 0);
      } else {
        _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 16);
        sf_mex_destroy(&c3_d_T);
        sf_mex_destroy(&c3_d_F);
        sf_mex_destroy(&c3_d_val);
        sf_mex_destroy(&c3_d_unusedU2);
        sf_mex_destroy(&c3_d_unusedU3);
        sf_mex_destroy(&c3_d_isfimathlocal);
        c3_i131 = (int8_T)c3_cnt;
        c3_i132 = (int8_T)c3_cnt;
        if ((int8_T)(c3_i132 & 32) != 0) {
          c3_i133 = (int8_T)(c3_i132 | -32);
        } else {
          c3_i133 = (int8_T)(c3_i132 & 31);
        }

        c3_i134 = 4 - c3_i133;
        if (c3_i134 > 31) {
          c3_i134 = 31;
        } else {
          if (c3_i134 < -32) {
            c3_i134 = -32;
          }
        }

        c3_i135 = (int8_T)c3_cnt;
        c3_i136 = (int8_T)c3_cnt;
        if ((int8_T)(c3_i136 & 32) != 0) {
          c3_i137 = (int8_T)(c3_i136 | -32);
        } else {
          c3_i137 = (int8_T)(c3_i136 & 31);
        }

        c3_i138 = c3_i137 - 4;
        if (c3_i138 > 31) {
          c3_i138 = 31;
        } else {
          if (c3_i138 < -32) {
            c3_i138 = -32;
          }
        }

        if ((int8_T)(c3_i131 & 32) != 0) {
          c3_i139 = (int8_T)(c3_i131 | -32);
        } else {
          c3_i139 = (int8_T)(c3_i131 & 31);
        }

        if (c3_i139 < 4) {
          if ((int8_T)c3_i134 <= 1) {
            c3_d15 = 1.0;
          } else {
            c3_d15 = 0.0;
          }
        } else {
          if ((int8_T)(c3_i135 & 32) != 0) {
            c3_i140 = (int8_T)(c3_i135 | -32);
          } else {
            c3_i140 = (int8_T)(c3_i135 & 31);
          }

          if (c3_i140 > 4) {
            if ((int8_T)c3_i138 <= 1) {
              c3_d15 = 3.0;
            } else {
              c3_d15 = 0.0;
            }
          } else {
            c3_d15 = 2.0;
          }
        }

        if (CV_EML_IF(7, 1, 4, CV_RELATIONAL_EVAL(4U, 7U, 3, c3_d15, 0.0, -2, 0U,
              (int32_T)c3_eq(chartInstance, c3_cnt, 4U)))) {
          _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 17);
          c3_d_a = c3_word;
          c3_d_ak = c3_d_a;
          c3_d_c = (uint8_T)((real_T)(uint8_T)(c3_d_ak & 16U) != 0.0);
          chartInstance->c3_ser_data_int = (c3_d_c != 0);
        } else {
          _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 18);
          sf_mex_destroy(&c3_e_T);
          sf_mex_destroy(&c3_e_F);
          sf_mex_destroy(&c3_e_val);
          sf_mex_destroy(&c3_e_unusedU2);
          sf_mex_destroy(&c3_e_unusedU3);
          sf_mex_destroy(&c3_e_isfimathlocal);
          c3_i141 = (int8_T)c3_cnt;
          c3_i142 = (int8_T)c3_cnt;
          if ((int8_T)(c3_i142 & 32) != 0) {
            c3_i143 = (int8_T)(c3_i142 | -32);
          } else {
            c3_i143 = (int8_T)(c3_i142 & 31);
          }

          c3_i144 = 5 - c3_i143;
          if (c3_i144 > 31) {
            c3_i144 = 31;
          } else {
            if (c3_i144 < -32) {
              c3_i144 = -32;
            }
          }

          c3_i145 = (int8_T)c3_cnt;
          c3_i146 = (int8_T)c3_cnt;
          if ((int8_T)(c3_i146 & 32) != 0) {
            c3_i147 = (int8_T)(c3_i146 | -32);
          } else {
            c3_i147 = (int8_T)(c3_i146 & 31);
          }

          c3_i148 = c3_i147 - 5;
          if (c3_i148 > 31) {
            c3_i148 = 31;
          } else {
            if (c3_i148 < -32) {
              c3_i148 = -32;
            }
          }

          if ((int8_T)(c3_i141 & 32) != 0) {
            c3_i149 = (int8_T)(c3_i141 | -32);
          } else {
            c3_i149 = (int8_T)(c3_i141 & 31);
          }

          if (c3_i149 < 5) {
            if ((int8_T)c3_i144 <= 1) {
              c3_d16 = 1.0;
            } else {
              c3_d16 = 0.0;
            }
          } else {
            if ((int8_T)(c3_i145 & 32) != 0) {
              c3_i150 = (int8_T)(c3_i145 | -32);
            } else {
              c3_i150 = (int8_T)(c3_i145 & 31);
            }

            if (c3_i150 > 5) {
              if ((int8_T)c3_i148 <= 1) {
                c3_d16 = 3.0;
              } else {
                c3_d16 = 0.0;
              }
            } else {
              c3_d16 = 2.0;
            }
          }

          if (CV_EML_IF(7, 1, 5, CV_RELATIONAL_EVAL(4U, 7U, 4, c3_d16, 0.0, -2,
                0U, (int32_T)c3_eq(chartInstance, c3_cnt, 5U)))) {
            _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 19);
            c3_e_a = c3_word;
            c3_e_ak = c3_e_a;
            c3_e_c = (uint8_T)((real_T)(uint8_T)(c3_e_ak & 8U) != 0.0);
            chartInstance->c3_ser_data_int = (c3_e_c != 0);
          } else {
            _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 20);
            sf_mex_destroy(&c3_f_T);
            sf_mex_destroy(&c3_f_F);
            sf_mex_destroy(&c3_f_val);
            sf_mex_destroy(&c3_f_unusedU2);
            sf_mex_destroy(&c3_f_unusedU3);
            sf_mex_destroy(&c3_f_isfimathlocal);
            c3_i151 = (int8_T)c3_cnt;
            c3_i152 = (int8_T)c3_cnt;
            if ((int8_T)(c3_i152 & 32) != 0) {
              c3_i153 = (int8_T)(c3_i152 | -32);
            } else {
              c3_i153 = (int8_T)(c3_i152 & 31);
            }

            c3_i154 = 6 - c3_i153;
            if (c3_i154 > 31) {
              c3_i154 = 31;
            } else {
              if (c3_i154 < -32) {
                c3_i154 = -32;
              }
            }

            c3_i155 = (int8_T)c3_cnt;
            c3_i156 = (int8_T)c3_cnt;
            if ((int8_T)(c3_i156 & 32) != 0) {
              c3_i157 = (int8_T)(c3_i156 | -32);
            } else {
              c3_i157 = (int8_T)(c3_i156 & 31);
            }

            c3_i158 = c3_i157 - 6;
            if (c3_i158 > 31) {
              c3_i158 = 31;
            } else {
              if (c3_i158 < -32) {
                c3_i158 = -32;
              }
            }

            if ((int8_T)(c3_i151 & 32) != 0) {
              c3_i159 = (int8_T)(c3_i151 | -32);
            } else {
              c3_i159 = (int8_T)(c3_i151 & 31);
            }

            if (c3_i159 < 6) {
              if ((int8_T)c3_i154 <= 1) {
                c3_d17 = 1.0;
              } else {
                c3_d17 = 0.0;
              }
            } else {
              if ((int8_T)(c3_i155 & 32) != 0) {
                c3_i160 = (int8_T)(c3_i155 | -32);
              } else {
                c3_i160 = (int8_T)(c3_i155 & 31);
              }

              if (c3_i160 > 6) {
                if ((int8_T)c3_i158 <= 1) {
                  c3_d17 = 3.0;
                } else {
                  c3_d17 = 0.0;
                }
              } else {
                c3_d17 = 2.0;
              }
            }

            if (CV_EML_IF(7, 1, 6, CV_RELATIONAL_EVAL(4U, 7U, 5, c3_d17, 0.0, -2,
                  0U, (int32_T)c3_eq(chartInstance, c3_cnt, 6U)))) {
              _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 21);
              c3_f_a = c3_word;
              c3_f_ak = c3_f_a;
              c3_f_c = (uint8_T)((real_T)(uint8_T)(c3_f_ak & 4U) != 0.0);
              chartInstance->c3_ser_data_int = (c3_f_c != 0);
            } else {
              _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 22);
              sf_mex_destroy(&c3_g_T);
              sf_mex_destroy(&c3_g_F);
              sf_mex_destroy(&c3_g_val);
              sf_mex_destroy(&c3_g_unusedU2);
              sf_mex_destroy(&c3_g_unusedU3);
              sf_mex_destroy(&c3_g_isfimathlocal);
              c3_i161 = (int8_T)c3_cnt;
              c3_i162 = (int8_T)c3_cnt;
              if ((int8_T)(c3_i162 & 32) != 0) {
                c3_i163 = (int8_T)(c3_i162 | -32);
              } else {
                c3_i163 = (int8_T)(c3_i162 & 31);
              }

              c3_i164 = 7 - c3_i163;
              if (c3_i164 > 31) {
                c3_i164 = 31;
              } else {
                if (c3_i164 < -32) {
                  c3_i164 = -32;
                }
              }

              c3_i165 = (int8_T)c3_cnt;
              c3_i166 = (int8_T)c3_cnt;
              if ((int8_T)(c3_i166 & 32) != 0) {
                c3_i167 = (int8_T)(c3_i166 | -32);
              } else {
                c3_i167 = (int8_T)(c3_i166 & 31);
              }

              c3_i168 = c3_i167 - 7;
              if (c3_i168 > 31) {
                c3_i168 = 31;
              } else {
                if (c3_i168 < -32) {
                  c3_i168 = -32;
                }
              }

              if ((int8_T)(c3_i161 & 32) != 0) {
                c3_i169 = (int8_T)(c3_i161 | -32);
              } else {
                c3_i169 = (int8_T)(c3_i161 & 31);
              }

              if (c3_i169 < 7) {
                if ((int8_T)c3_i164 <= 1) {
                  c3_d18 = 1.0;
                } else {
                  c3_d18 = 0.0;
                }
              } else {
                if ((int8_T)(c3_i165 & 32) != 0) {
                  c3_i170 = (int8_T)(c3_i165 | -32);
                } else {
                  c3_i170 = (int8_T)(c3_i165 & 31);
                }

                if (c3_i170 > 7) {
                  if ((int8_T)c3_i168 <= 1) {
                    c3_d18 = 3.0;
                  } else {
                    c3_d18 = 0.0;
                  }
                } else {
                  c3_d18 = 2.0;
                }
              }

              if (CV_EML_IF(7, 1, 7, CV_RELATIONAL_EVAL(4U, 7U, 6, c3_d18, 0.0,
                    -2, 0U, (int32_T)c3_eq(chartInstance, c3_cnt, 7U)))) {
                _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 23);
                c3_g_a = c3_word;
                c3_g_ak = c3_g_a;
                c3_g_c = (uint8_T)((real_T)(uint8_T)(c3_g_ak & 2U) != 0.0);
                chartInstance->c3_ser_data_int = (c3_g_c != 0);
              } else {
                _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 24);
                sf_mex_destroy(&c3_h_T);
                sf_mex_destroy(&c3_h_F);
                sf_mex_destroy(&c3_h_val);
                sf_mex_destroy(&c3_h_unusedU2);
                sf_mex_destroy(&c3_h_unusedU3);
                sf_mex_destroy(&c3_h_isfimathlocal);
                c3_i171 = (int8_T)c3_cnt;
                c3_i172 = (int8_T)c3_cnt;
                if ((int8_T)(c3_i172 & 32) != 0) {
                  c3_i173 = (int8_T)(c3_i172 | -32);
                } else {
                  c3_i173 = (int8_T)(c3_i172 & 31);
                }

                c3_i174 = 8 - c3_i173;
                if (c3_i174 > 31) {
                  c3_i174 = 31;
                } else {
                  if (c3_i174 < -32) {
                    c3_i174 = -32;
                  }
                }

                c3_i175 = (int8_T)c3_cnt;
                c3_i176 = (int8_T)c3_cnt;
                if ((int8_T)(c3_i176 & 32) != 0) {
                  c3_i177 = (int8_T)(c3_i176 | -32);
                } else {
                  c3_i177 = (int8_T)(c3_i176 & 31);
                }

                c3_i178 = c3_i177 - 8;
                if (c3_i178 > 31) {
                  c3_i178 = 31;
                } else {
                  if (c3_i178 < -32) {
                    c3_i178 = -32;
                  }
                }

                if ((int8_T)(c3_i171 & 32) != 0) {
                  c3_i179 = (int8_T)(c3_i171 | -32);
                } else {
                  c3_i179 = (int8_T)(c3_i171 & 31);
                }

                if (c3_i179 < 8) {
                  if ((int8_T)c3_i174 <= 1) {
                    c3_d19 = 1.0;
                  } else {
                    c3_d19 = 0.0;
                  }
                } else {
                  if ((int8_T)(c3_i175 & 32) != 0) {
                    c3_i180 = (int8_T)(c3_i175 | -32);
                  } else {
                    c3_i180 = (int8_T)(c3_i175 & 31);
                  }

                  if (c3_i180 > 8) {
                    if ((int8_T)c3_i178 <= 1) {
                      c3_d19 = 3.0;
                    } else {
                      c3_d19 = 0.0;
                    }
                  } else {
                    c3_d19 = 2.0;
                  }
                }

                if (CV_EML_IF(7, 1, 8, CV_RELATIONAL_EVAL(4U, 7U, 7, c3_d19, 0.0,
                      -2, 0U, (int32_T)c3_eq(chartInstance, c3_cnt, 8U)))) {
                  _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 25);
                  c3_h_a = c3_word;
                  c3_h_ak = c3_h_a;
                  c3_h_c = (uint8_T)((real_T)(uint8_T)(c3_h_ak & 1U) != 0.0);
                  chartInstance->c3_ser_data_int = (c3_h_c != 0);
                } else {
                  _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 27);
                  chartInstance->c3_ser_data_int = true;
                }
              }
            }
          }
        }
      }
    }
  }

  _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, 30);
  c3_ser_data = chartInstance->c3_ser_data_int;
  _SFD_EML_CALL(7U, chartInstance->c3_sfEvent, -30);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_UNSET_DATA_VALUE_PTR(11U);
  _SFD_UNSET_DATA_VALUE_PTR(10U);
  _SFD_UNSET_DATA_VALUE_PTR(9U);
  return c3_ser_data;
}

static boolean_T c3_eq(SFc3_BasicQuadrotorControlInstanceStruct *chartInstance,
  uint8_T c3_a0, uint8_T c3_b0)
{
  uint8_T c3_a;
  uint8_T c3_b;
  uint8_T c3_b_a0;
  uint8_T c3_b_b0;
  uint8_T c3_a1;
  uint8_T c3_b1;
  uint8_T c3_b_a1;
  uint8_T c3_b_b1;
  c3_eml_scalar_eg(chartInstance);
  c3_eml_scalar_eg(chartInstance);
  c3_a = c3_a0;
  c3_b = c3_b0;
  c3_b_a0 = c3_a;
  c3_b_b0 = c3_b;
  c3_a1 = c3_b_a0;
  c3_b1 = c3_b_b0;
  c3_b_a1 = c3_a1;
  c3_b_b1 = c3_b1;
  return c3_b_a1 == c3_b_b1;
}

static void c3_eml_scalar_eg(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static int32_T c3_i_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i181;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i181, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i181;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint16_T c3_u;
  const mxArray *c3_y = NULL;
  uint16_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c3_u = *(uint16_T *)c3_inData;
    c3_y = NULL;
    c3_b_u = c3_u;
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 5, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c3_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c3_eml_mx), 15, "numerictype", 14, sf_mex_dup(c3_c_eml_mx), 15,
      "simulinkarray", 14, c3_b_y, 15, "fimathislocal", 3, true), false);
    sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  } else {
    sf_mex_assign(&c3_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c3_mxArrayOutData;
}

static uint16_T c3_j_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_b_count, const char_T *c3_identifier)
{
  uint16_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_count), &c3_thisId);
  sf_mex_destroy(&c3_b_count);
  return c3_y;
}

static uint16_T c3_k_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint16_T c3_y;
  const mxArray *c3_mxFi = NULL;
  const mxArray *c3_mxInt = NULL;
  uint16_T c3_u4;
  (void)chartInstance;
  sf_mex_check_fi(c3_parentId, c3_u, false, 0U, NULL, c3_eml_mx, c3_c_eml_mx);
  sf_mex_assign(&c3_mxFi, sf_mex_dup(c3_u), false);
  sf_mex_assign(&c3_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c3_mxFi)), false);
  sf_mex_import(c3_parentId, sf_mex_dup(c3_mxInt), &c3_u4, 1, 5, 0U, 0, 0U, 0);
  sf_mex_destroy(&c3_mxFi);
  sf_mex_destroy(&c3_mxInt);
  c3_y = c3_u4;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_count;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint16_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c3_b_count = sf_mex_dup(c3_mxArrayInData);
    c3_identifier = c3_varName;
    c3_thisId.fIdentifier = c3_identifier;
    c3_thisId.fParent = NULL;
    c3_y = c3_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_count),
      &c3_thisId);
    sf_mex_destroy(&c3_b_count);
    *(uint16_T *)c3_outData = c3_y;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_h_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  uint8_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c3_u = *(uint8_T *)c3_inData;
    c3_y = NULL;
    c3_b_u = c3_u;
    c3_b_y = NULL;
    sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 3, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c3_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c3_eml_mx), 15, "numerictype", 14, sf_mex_dup(c3_d_eml_mx), 15,
      "simulinkarray", 14, c3_b_y, 15, "fimathislocal", 3, true), false);
    sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  } else {
    sf_mex_assign(&c3_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c3_mxArrayOutData;
}

static uint8_T c3_l_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_b_clock_cnt, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_clock_cnt),
    &c3_thisId);
  sf_mex_destroy(&c3_b_clock_cnt);
  return c3_y;
}

static uint8_T c3_m_emlrt_marshallIn(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  const mxArray *c3_mxFi = NULL;
  const mxArray *c3_mxInt = NULL;
  uint8_T c3_u5;
  (void)chartInstance;
  sf_mex_check_fi(c3_parentId, c3_u, false, 0U, NULL, c3_eml_mx, c3_d_eml_mx);
  sf_mex_assign(&c3_mxFi, sf_mex_dup(c3_u), false);
  sf_mex_assign(&c3_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c3_mxFi)), false);
  sf_mex_import(c3_parentId, sf_mex_dup(c3_mxInt), &c3_u5, 1, 3, 0U, 0, 0U, 0);
  sf_mex_destroy(&c3_mxFi);
  sf_mex_destroy(&c3_mxInt);
  c3_y = c3_u5;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_clock_cnt;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c3_b_clock_cnt = sf_mex_dup(c3_mxArrayInData);
    c3_identifier = c3_varName;
    c3_thisId.fIdentifier = c3_identifier;
    c3_thisId.fParent = NULL;
    c3_y = c3_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_clock_cnt),
      &c3_thisId);
    sf_mex_destroy(&c3_b_clock_cnt);
    *(uint8_T *)c3_outData = c3_y;
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_n_emlrt_marshallIn
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray
   *c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  sf_mex_assign(&c3_y, c3_o_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId), false);
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_o_emlrt_marshallIn
  (SFc3_BasicQuadrotorControlInstanceStruct *chartInstance, const mxArray *c3_u,
   const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  (void)chartInstance;
  (void)c3_parentId;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), false);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void init_dsm_address_info(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_BasicQuadrotorControlInstanceStruct
  *chartInstance)
{
  chartInstance->c3_read_x_y_z_en = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_CSn = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_SCK = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_SDI = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_READ_SHIFT = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c3_XYZ_Valid = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
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

void sf_c3_BasicQuadrotorControl_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2697349919U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(882164163U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4060656556U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1889341684U);
}

mxArray* sf_c3_BasicQuadrotorControl_get_post_codegen_info(void);
mxArray *sf_c3_BasicQuadrotorControl_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("jQrpCqrjOBoDvlq80MbMpB");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c3_BasicQuadrotorControl_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_BasicQuadrotorControl_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_BasicQuadrotorControl_jit_fallback_info(void)
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

mxArray *sf_c3_BasicQuadrotorControl_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c3_BasicQuadrotorControl_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c3_BasicQuadrotorControl(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[6],T\"CSn\",},{M[1],M[125],T\"READ_SHIFT\",},{M[1],M[17],T\"SCK\",},{M[1],M[109],T\"SDI\",},{M[1],M[51],T\"XYZ_Valid\",},{M[3],M[24],T\"clock_cnt\",},{M[3],M[12],T\"count\",},{M[4],M[77],T\"ser_data_int\",S'l','i','p'{{M1x2[51 63],M[0],}}},{M[8],M[0],T\"is_active_c3_BasicQuadrotorControl\",},{M[9],M[0],T\"is_c3_BasicQuadrotorControl\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_BasicQuadrotorControl_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _BasicQuadrotorControlMachineNumber_,
           3,
           9,
           18,
           0,
           12,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"read_x_y_z_en");
          _SFD_SET_DATA_PROPS(1,2,0,1,"CSn");
          _SFD_SET_DATA_PROPS(2,0,0,0,"count");
          _SFD_SET_DATA_PROPS(3,2,0,1,"SCK");
          _SFD_SET_DATA_PROPS(4,0,0,0,"clock_cnt");
          _SFD_SET_DATA_PROPS(5,2,0,1,"SDI");
          _SFD_SET_DATA_PROPS(6,7,0,0,"cmd");
          _SFD_SET_DATA_PROPS(7,2,0,1,"READ_SHIFT");
          _SFD_SET_DATA_PROPS(8,2,0,1,"XYZ_Valid");
          _SFD_SET_DATA_PROPS(9,8,0,0,"");
          _SFD_SET_DATA_PROPS(10,8,0,0,"");
          _SFD_SET_DATA_PROPS(11,9,0,0,"");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(7,0,2);
          _SFD_CH_SUBSTATE_COUNT(8);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,8);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
        }

        _SFD_CV_INIT_CHART(8,1,0,0);

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

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartSaturateMap[] = { 37 };

          static unsigned int sEndSaturateMap[] = { 48 };

          _SFD_CV_INIT_TRANSITION_SATURATION(0,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartSaturateMap[] = { 1 };

          static unsigned int sEndSaturateMap[] = { 8 };

          _SFD_CV_INIT_TRANSITION_SATURATION(3,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartSaturateMap[] = { 59 };

          static unsigned int sEndSaturateMap[] = { 68 };

          _SFD_CV_INIT_TRANSITION_SATURATION(2,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartSaturateMap[] = { 1 };

          static unsigned int sEndSaturateMap[] = { 8 };

          _SFD_CV_INIT_TRANSITION_SATURATION(4,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartSaturateMap[] = { 40 };

          static unsigned int sEndSaturateMap[] = { 51 };

          _SFD_CV_INIT_TRANSITION_SATURATION(5,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartSaturateMap[] = { 1 };

          static unsigned int sEndSaturateMap[] = { 8 };

          _SFD_CV_INIT_TRANSITION_SATURATION(8,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartSaturateMap[] = { 1 };

          static unsigned int sEndSaturateMap[] = { 8 };

          _SFD_CV_INIT_TRANSITION_SATURATION(11,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartSaturateMap[] = { 55 };

          static unsigned int sEndSaturateMap[] = { 64 };

          _SFD_CV_INIT_TRANSITION_SATURATION(6,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(6,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartSaturateMap[] = { 38 };

          static unsigned int sEndSaturateMap[] = { 49 };

          _SFD_CV_INIT_TRANSITION_SATURATION(9,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 15, 31 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 20 };

          static unsigned int sEndRelationalopMap[] = { 15, 31 };

          static int sRelationalopEps[] = { -2, -2 };

          static int sRelationalopType[] = { 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartSaturateMap[] = { 1 };

          static unsigned int sEndSaturateMap[] = { 8 };

          _SFD_CV_INIT_TRANSITION_SATURATION(16,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartSaturateMap[] = { 36 };

          static unsigned int sEndSaturateMap[] = { 47 };

          _SFD_CV_INIT_TRANSITION_SATURATION(14,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(14,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartSaturateMap[] = { 1 };

          static unsigned int sEndSaturateMap[] = { 8 };

          _SFD_CV_INIT_TRANSITION_SATURATION(12,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(15,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(15,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 12, 31 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(13,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 16 };

          static unsigned int sEndRelationalopMap[] = { 12, 31 };

          static int sRelationalopEps[] = { -2, -2 };

          static int sRelationalopType[] = { 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartSaturateMap[] = { 1 };

          static unsigned int sEndSaturateMap[] = { 8 };

          _SFD_CV_INIT_TRANSITION_SATURATION(17,1,&(sStartSaturateMap[0]),
            &(sEndSaturateMap[0]));
        }

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(7,1,1,9,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(7,0,"sdi_gen",0,-1,751);
        _SFD_CV_INIT_EML_IF(7,1,0,65,89,-1,119);
        _SFD_CV_INIT_EML_IF(7,1,1,122,143,189,719);
        _SFD_CV_INIT_EML_IF(7,1,2,189,214,260,719);
        _SFD_CV_INIT_EML_IF(7,1,3,260,285,331,719);
        _SFD_CV_INIT_EML_IF(7,1,4,331,356,402,719);
        _SFD_CV_INIT_EML_IF(7,1,5,402,427,473,719);
        _SFD_CV_INIT_EML_IF(7,1,6,473,498,544,719);
        _SFD_CV_INIT_EML_IF(7,1,7,544,569,615,719);
        _SFD_CV_INIT_EML_IF(7,1,8,615,640,686,719);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,0,125,143,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,1,196,214,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,2,267,285,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,3,338,356,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,4,409,427,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,5,480,498,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,6,551,569,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,1,7,622,640,-2,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT16,0,NULL,1,0,9,0,1,0,0,
          (MexFcnForType)c3_g_sf_marshallOut,(MexInFcnForType)c3_g_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,1,0,6,0,1,0,0,
          (MexFcnForType)c3_h_sf_marshallOut,(MexInFcnForType)c3_h_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_d_sf_marshallOut,(MexInFcnForType)c3_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT8,0,NULL,1,0,5,0,1,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)c3_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_VALUE_PTR(9,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(10,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(11,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c3_read_x_y_z_en);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c3_CSn);
        _SFD_SET_DATA_VALUE_PTR(2U, &chartInstance->c3_count);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c3_SCK);
        _SFD_SET_DATA_VALUE_PTR(4U, &chartInstance->c3_clock_cnt);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c3_SDI);
        _SFD_SET_DATA_VALUE_PTR(6U, &chartInstance->c3_cmd);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c3_READ_SHIFT);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c3_XYZ_Valid);
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
  return "g1xAzOlJuWfyo7OQYDpMqD";
}

static void sf_opaque_initialize_c3_BasicQuadrotorControl(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_BasicQuadrotorControl
    ((SFc3_BasicQuadrotorControlInstanceStruct*) chartInstanceVar);
  initialize_c3_BasicQuadrotorControl((SFc3_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c3_BasicQuadrotorControl(void *chartInstanceVar)
{
  enable_c3_BasicQuadrotorControl((SFc3_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c3_BasicQuadrotorControl(void *chartInstanceVar)
{
  disable_c3_BasicQuadrotorControl((SFc3_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c3_BasicQuadrotorControl(void *chartInstanceVar)
{
  sf_gateway_c3_BasicQuadrotorControl((SFc3_BasicQuadrotorControlInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_BasicQuadrotorControl(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c3_BasicQuadrotorControl
    ((SFc3_BasicQuadrotorControlInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_BasicQuadrotorControl(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c3_BasicQuadrotorControl
    ((SFc3_BasicQuadrotorControlInstanceStruct*)chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c3_BasicQuadrotorControl(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_BasicQuadrotorControlInstanceStruct*) chartInstanceVar)
      ->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_BasicQuadrotorControl_optimization_info();
    }

    finalize_c3_BasicQuadrotorControl((SFc3_BasicQuadrotorControlInstanceStruct*)
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
  initSimStructsc3_BasicQuadrotorControl
    ((SFc3_BasicQuadrotorControlInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_BasicQuadrotorControl(SimStruct *S)
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
    initialize_params_c3_BasicQuadrotorControl
      ((SFc3_BasicQuadrotorControlInstanceStruct*)(chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_BasicQuadrotorControl(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_BasicQuadrotorControl_optimization_info();
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
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,5);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=5; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2711482603U));
  ssSetChecksum1(S,(2675266859U));
  ssSetChecksum2(S,(3027335253U));
  ssSetChecksum3(S,(3424619357U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_BasicQuadrotorControl(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_BasicQuadrotorControl(SimStruct *S)
{
  SFc3_BasicQuadrotorControlInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc3_BasicQuadrotorControlInstanceStruct *)utMalloc(sizeof
    (SFc3_BasicQuadrotorControlInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_BasicQuadrotorControlInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_BasicQuadrotorControl;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_BasicQuadrotorControl;
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

void c3_BasicQuadrotorControl_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_BasicQuadrotorControl(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_BasicQuadrotorControl(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_BasicQuadrotorControl(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_BasicQuadrotorControl_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
