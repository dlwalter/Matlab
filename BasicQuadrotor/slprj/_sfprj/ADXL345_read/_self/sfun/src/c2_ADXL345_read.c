/* Include files */

#include <stddef.h>
#include "blas.h"
#include "ADXL345_read_sfun.h"
#include "c2_ADXL345_read.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ADXL345_read_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c2_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c2_IN_CLOCKING                 ((uint8_T)1U)
#define c2_IN_END                      ((uint8_T)2U)
#define c2_IN_END1                     ((uint8_T)3U)
#define c2_IN_IDLE                     ((uint8_T)4U)
#define c2_IN_START_ADC_RDWR           ((uint8_T)5U)
#define c2_IN_START_CONV               ((uint8_T)6U)
#define c2_IN_tCONV_delay              ((uint8_T)7U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c2_debug_family_names[6] = { "nargin", "nargout", "word",
  "cnt", "ser_data", "ser_data_int" };

static const mxArray *c2_eml_mx;
static const mxArray *c2_b_eml_mx;
static const mxArray *c2_c_eml_mx;
static const mxArray *c2_d_eml_mx;

/* Function Declarations */
static void initialize_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void initialize_params_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void enable_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void disable_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void c2_update_debugger_state_c2_ADXL345_read
  (SFc2_ADXL345_readInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_ADXL345_read
  (SFc2_ADXL345_readInstanceStruct *chartInstance);
static void set_sim_state_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void c2_set_sim_state_side_effects_c2_ADXL345_read
  (SFc2_ADXL345_readInstanceStruct *chartInstance);
static void finalize_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void sf_gateway_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void mdl_start_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void c2_chartstep_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void initSimStructsc2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber);
static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData);
static boolean_T c2_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_ser_data_int, const char_T *c2_identifier);
static boolean_T c2_b_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static boolean_T c2_c_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_ser_data, const char_T *c2_identifier);
static boolean_T c2_d_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static uint8_T c2_e_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static uint16_T c2_f_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static real_T c2_g_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static void c2_info_helper(const mxArray **c2_info);
static const mxArray *c2_emlrt_marshallOut(const char * c2_u);
static const mxArray *c2_b_emlrt_marshallOut(const uint32_T c2_u);
static boolean_T c2_sdi_gen(SFc2_ADXL345_readInstanceStruct *chartInstance,
  uint16_T c2_word, uint8_T c2_cnt);
static boolean_T c2_eq(SFc2_ADXL345_readInstanceStruct *chartInstance, uint8_T
  c2_a0, uint8_T c2_b0);
static void c2_strcmpi(SFc2_ADXL345_readInstanceStruct *chartInstance);
static void c2_eml_scalar_eg(SFc2_ADXL345_readInstanceStruct *chartInstance);
static boolean_T c2_logical(SFc2_ADXL345_readInstanceStruct *chartInstance,
  uint8_T c2_a);
static const mxArray *c2_f_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int32_T c2_h_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_g_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static uint8_T c2_i_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_tp_IDLE, const char_T *c2_identifier);
static uint8_T c2_j_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_h_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static uint16_T c2_k_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_count, const char_T *c2_identifier);
static uint16_T c2_l_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_i_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static uint8_T c2_m_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_clock_cnt, const char_T *c2_identifier);
static uint8_T c2_n_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_j_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_o_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_setSimStateSideEffectsInfo, const char_T
  *c2_identifier);
static const mxArray *c2_p_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info(SFc2_ADXL345_readInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_ADXL345_readInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_ser_data_int_not_empty = false;
  chartInstance->c2_doSetSimStateSideEffects = 0U;
  chartInstance->c2_setSimStateSideEffectsInfo = NULL;
  chartInstance->c2_tp_CLOCKING = 0U;
  chartInstance->c2_tp_END = 0U;
  chartInstance->c2_tp_END1 = 0U;
  chartInstance->c2_tp_IDLE = 0U;
  chartInstance->c2_tp_START_ADC_RDWR = 0U;
  chartInstance->c2_tp_START_CONV = 0U;
  chartInstance->c2_tp_tCONV_delay = 0U;
  chartInstance->c2_is_active_c2_ADXL345_read = 0U;
  chartInstance->c2_is_c2_ADXL345_read = c2_IN_NO_ACTIVE_CHILD;
  chartInstance->c2_count = 0U;
  chartInstance->c2_clock_cnt = 0U;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c2_CSn_CONV = true;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c2_SCK = true;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c2_SDI = true;
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  chartInstance->c2_is_active_c2_ADXL345_read = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c2_sfEvent);
  chartInstance->c2_is_c2_ADXL345_read = c2_IN_IDLE;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c2_sfEvent);
  chartInstance->c2_tp_IDLE = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_ADXL345_readMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  sf_mex_assign(&c2_d_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15,
    "Unsigned", 15, "WordLength", 6, 9.0, 15, "FractionLength", 6, 0.0, 15,
    "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0),
                true);
  sf_mex_assign(&c2_c_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15,
    "Unsigned", 15, "WordLength", 6, 14.0, 15, "FractionLength", 6, 0.0, 15,
    "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0),
                true);
  sf_mex_assign(&c2_b_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15,
    "Unsigned", 15, "WordLength", 6, 5.0, 15, "FractionLength", 6, 0.0, 15,
    "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0),
                true);
  sf_mex_assign(&c2_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
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

static void initialize_params_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_debugger_state_c2_ADXL345_read
  (SFc2_ADXL345_readInstanceStruct *chartInstance)
{
  uint32_T c2_prevAniVal;
  c2_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c2_is_active_c2_ADXL345_read == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 1U, chartInstance->c2_sfEvent);
  }

  if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_IDLE) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c2_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c2_sfEvent);
  }

  if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_START_CONV) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c2_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c2_sfEvent);
  }

  if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_tCONV_delay) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c2_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c2_sfEvent);
  }

  if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_START_ADC_RDWR) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
  }

  if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_CLOCKING) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
  }

  if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_END1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c2_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c2_sfEvent);
  }

  if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_END) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c2_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c2_sfEvent);
  }

  _SFD_SET_ANIMATION(c2_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c2_ADXL345_read
  (SFc2_ADXL345_readInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  boolean_T c2_hoistedGlobal;
  boolean_T c2_u;
  const mxArray *c2_b_y = NULL;
  boolean_T c2_b_hoistedGlobal;
  boolean_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  boolean_T c2_c_hoistedGlobal;
  boolean_T c2_c_u;
  const mxArray *c2_d_y = NULL;
  uint8_T c2_d_hoistedGlobal;
  uint8_T c2_d_u;
  const mxArray *c2_e_y = NULL;
  uint8_T c2_e_u;
  const mxArray *c2_f_y = NULL;
  uint16_T c2_e_hoistedGlobal;
  uint16_T c2_f_u;
  const mxArray *c2_g_y = NULL;
  uint16_T c2_g_u;
  const mxArray *c2_h_y = NULL;
  boolean_T c2_f_hoistedGlobal;
  boolean_T c2_h_u;
  const mxArray *c2_i_y = NULL;
  uint8_T c2_g_hoistedGlobal;
  uint8_T c2_i_u;
  const mxArray *c2_j_y = NULL;
  uint8_T c2_h_hoistedGlobal;
  uint8_T c2_j_u;
  const mxArray *c2_k_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(8, 1), false);
  c2_hoistedGlobal = *chartInstance->c2_CSn_CONV;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = *chartInstance->c2_SCK;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_c_hoistedGlobal = *chartInstance->c2_SDI;
  c2_c_u = c2_c_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_c_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_d_hoistedGlobal = chartInstance->c2_clock_cnt;
  c2_d_u = c2_d_hoistedGlobal;
  c2_e_y = NULL;
  c2_e_u = c2_d_u;
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_e_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_e_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
    (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_b_eml_mx), 15,
    "simulinkarray", 14, c2_f_y, 15, "fimathislocal", 3, true), false);
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_e_hoistedGlobal = chartInstance->c2_count;
  c2_f_u = c2_e_hoistedGlobal;
  c2_g_y = NULL;
  c2_g_u = c2_f_u;
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y", &c2_g_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_g_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
    (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_d_eml_mx), 15,
    "simulinkarray", 14, c2_h_y, 15, "fimathislocal", 3, true), false);
  sf_mex_setcell(c2_y, 4, c2_g_y);
  c2_f_hoistedGlobal = chartInstance->c2_ser_data_int;
  c2_h_u = c2_f_hoistedGlobal;
  c2_i_y = NULL;
  if (!chartInstance->c2_ser_data_int_not_empty) {
    sf_mex_assign(&c2_i_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_h_u, 11, 0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c2_y, 5, c2_i_y);
  c2_g_hoistedGlobal = chartInstance->c2_is_active_c2_ADXL345_read;
  c2_i_u = c2_g_hoistedGlobal;
  c2_j_y = NULL;
  sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_i_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 6, c2_j_y);
  c2_h_hoistedGlobal = chartInstance->c2_is_c2_ADXL345_read;
  c2_j_u = c2_h_hoistedGlobal;
  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y", &c2_j_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 7, c2_k_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  *chartInstance->c2_CSn_CONV = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "CSn_CONV");
  *chartInstance->c2_SCK = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 1)), "SCK");
  *chartInstance->c2_SDI = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "SDI");
  chartInstance->c2_clock_cnt = c2_m_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "clock_cnt");
  chartInstance->c2_count = c2_k_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 4)), "count");
  chartInstance->c2_ser_data_int = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 5)), "ser_data_int");
  chartInstance->c2_is_active_c2_ADXL345_read = c2_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 6)),
     "is_active_c2_ADXL345_read");
  chartInstance->c2_is_c2_ADXL345_read = c2_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 7)), "is_c2_ADXL345_read");
  sf_mex_assign(&chartInstance->c2_setSimStateSideEffectsInfo,
                c2_o_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 8)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c2_u);
  chartInstance->c2_doSetSimStateSideEffects = 1U;
  c2_update_debugger_state_c2_ADXL345_read(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void c2_set_sim_state_side_effects_c2_ADXL345_read
  (SFc2_ADXL345_readInstanceStruct *chartInstance)
{
  if (chartInstance->c2_doSetSimStateSideEffects != 0) {
    if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_CLOCKING) {
      chartInstance->c2_tp_CLOCKING = 1U;
    } else {
      chartInstance->c2_tp_CLOCKING = 0U;
    }

    if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_END) {
      chartInstance->c2_tp_END = 1U;
    } else {
      chartInstance->c2_tp_END = 0U;
    }

    if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_END1) {
      chartInstance->c2_tp_END1 = 1U;
    } else {
      chartInstance->c2_tp_END1 = 0U;
    }

    if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_IDLE) {
      chartInstance->c2_tp_IDLE = 1U;
    } else {
      chartInstance->c2_tp_IDLE = 0U;
    }

    if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_START_ADC_RDWR) {
      chartInstance->c2_tp_START_ADC_RDWR = 1U;
    } else {
      chartInstance->c2_tp_START_ADC_RDWR = 0U;
    }

    if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_START_CONV) {
      chartInstance->c2_tp_START_CONV = 1U;
    } else {
      chartInstance->c2_tp_START_CONV = 0U;
    }

    if (chartInstance->c2_is_c2_ADXL345_read == c2_IN_tCONV_delay) {
      chartInstance->c2_tp_tCONV_delay = 1U;
    } else {
      chartInstance->c2_tp_tCONV_delay = 0U;
    }

    chartInstance->c2_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&c2_eml_mx);
  sf_mex_destroy(&c2_b_eml_mx);
  sf_mex_destroy(&c2_c_eml_mx);
  sf_mex_destroy(&c2_d_eml_mx);
  sf_mex_destroy(&chartInstance->c2_setSimStateSideEffectsInfo);
}

static void sf_gateway_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  c2_set_sim_state_side_effects_c2_ADXL345_read(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_CSn_CONV, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SCK, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_clock_cnt, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SDI, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_cmd, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_CMD_VLD, 6U);
  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_chartstep_c2_ADXL345_read(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_ADXL345_readMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_chartstep_c2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  int16_T c2_i0;
  int16_T c2_i1;
  int16_T c2_i2;
  int32_T c2_i3;
  int16_T c2_i4;
  int16_T c2_i5;
  int16_T c2_i6;
  int32_T c2_i7;
  int16_T c2_i8;
  real_T c2_d0;
  int16_T c2_i9;
  boolean_T c2_out;
  int32_T c2_i10;
  int16_T c2_i11;
  int16_T c2_i12;
  int16_T c2_i13;
  int32_T c2_i14;
  int16_T c2_i15;
  int16_T c2_i16;
  int16_T c2_i17;
  int32_T c2_i18;
  int16_T c2_i19;
  real_T c2_d1;
  int16_T c2_i20;
  boolean_T c2_b_out;
  int32_T c2_i21;
  boolean_T c2_c_out;
  real_T c2_d2;
  boolean_T c2_temp;
  int16_T c2_i22;
  int16_T c2_i23;
  int16_T c2_i24;
  int32_T c2_i25;
  int16_T c2_i26;
  int16_T c2_i27;
  int16_T c2_i28;
  int32_T c2_i29;
  int16_T c2_i30;
  real_T c2_d3;
  int16_T c2_i31;
  boolean_T c2_d_out;
  int16_T c2_i32;
  int16_T c2_i33;
  int16_T c2_i34;
  int32_T c2_i35;
  int16_T c2_i36;
  int16_T c2_i37;
  int16_T c2_i38;
  int32_T c2_i39;
  int16_T c2_i40;
  real_T c2_d4;
  int16_T c2_i41;
  boolean_T c2_e_out;
  int32_T c2_i42;
  int32_T c2_i43;
  int16_T c2_i44;
  int16_T c2_i45;
  int16_T c2_i46;
  int32_T c2_i47;
  int16_T c2_i48;
  int16_T c2_i49;
  int16_T c2_i50;
  int32_T c2_i51;
  int16_T c2_i52;
  real_T c2_d5;
  int16_T c2_i53;
  boolean_T c2_f_out;
  int32_T c2_i54;
  int16_T c2_i55;
  int16_T c2_i56;
  int16_T c2_i57;
  int32_T c2_i58;
  int16_T c2_i59;
  int16_T c2_i60;
  int16_T c2_i61;
  int32_T c2_i62;
  int16_T c2_i63;
  real_T c2_d6;
  int16_T c2_i64;
  boolean_T c2_g_out;
  int32_T c2_i65;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  switch (chartInstance->c2_is_c2_ADXL345_read) {
   case c2_IN_CLOCKING:
    CV_CHART_EVAL(1, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, chartInstance->c2_sfEvent);
    c2_i0 = (int16_T)chartInstance->c2_count;
    c2_i1 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i1 & 512) != 0) {
      c2_i2 = (int16_T)(c2_i1 | -512);
    } else {
      c2_i2 = (int16_T)(c2_i1 & 511);
    }

    c2_i3 = 10 - c2_i2;
    if (c2_i3 > 511) {
      c2_i3 = 511;
    } else {
      if (c2_i3 < -512) {
        c2_i3 = -512;
      }
    }

    c2_i4 = (int16_T)chartInstance->c2_count;
    c2_i5 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i5 & 512) != 0) {
      c2_i6 = (int16_T)(c2_i5 | -512);
    } else {
      c2_i6 = (int16_T)(c2_i5 & 511);
    }

    c2_i7 = c2_i6 - 10;
    if (c2_i7 > 511) {
      c2_i7 = 511;
    } else {
      if (c2_i7 < -512) {
        c2_i7 = -512;
      }
    }

    if ((int16_T)(c2_i0 & 512) != 0) {
      c2_i8 = (int16_T)(c2_i0 | -512);
    } else {
      c2_i8 = (int16_T)(c2_i0 & 511);
    }

    if (c2_i8 < 10) {
      if ((int16_T)c2_i3 <= 1) {
        c2_d0 = 1.0;
      } else {
        c2_d0 = 0.0;
      }
    } else {
      if ((int16_T)(c2_i4 & 512) != 0) {
        c2_i9 = (int16_T)(c2_i4 | -512);
      } else {
        c2_i9 = (int16_T)(c2_i4 & 511);
      }

      if (c2_i9 > 10) {
        if ((int16_T)c2_i7 <= 1) {
          c2_d0 = 3.0;
        } else {
          c2_d0 = 0.0;
        }
      } else {
        c2_d0 = 2.0;
      }
    }

    c2_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
                CV_RELATIONAL_EVAL(5U, 9U, 0, c2_d0, 0.0, -2, 0U,
      chartInstance->c2_count == 10) != 0U, chartInstance->c2_sfEvent)) != 0);
    if (c2_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c2_sfEvent);
      chartInstance->c2_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      *chartInstance->c2_SCK = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SCK, 2U);
      *chartInstance->c2_SDI = c2_sdi_gen(chartInstance, *chartInstance->c2_cmd,
        chartInstance->c2_clock_cnt);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SDI, 4U);
      chartInstance->c2_tp_CLOCKING = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_START_ADC_RDWR;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_START_ADC_RDWR = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c2_sfEvent);
      c2_i10 = chartInstance->c2_count + 1;
      if (CV_SATURATION_EVAL(5, 8, 0, 0, c2_i10 < 0)) {
        c2_i10 = 0;
      } else {
        if (c2_i10 > 511) {
          c2_i10 = 511;
        }
      }

      chartInstance->c2_count = (uint16_T)c2_i10;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      chartInstance->c2_tp_CLOCKING = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_CLOCKING;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_CLOCKING = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c2_sfEvent);
    break;

   case c2_IN_END:
    CV_CHART_EVAL(1, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c2_sfEvent);
    chartInstance->c2_tp_END = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c2_sfEvent);
    chartInstance->c2_is_c2_ADXL345_read = c2_IN_IDLE;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c2_sfEvent);
    chartInstance->c2_tp_IDLE = 1U;
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
    break;

   case c2_IN_END1:
    CV_CHART_EVAL(1, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                 chartInstance->c2_sfEvent);
    c2_i11 = (int16_T)chartInstance->c2_count;
    c2_i12 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i12 & 512) != 0) {
      c2_i13 = (int16_T)(c2_i12 | -512);
    } else {
      c2_i13 = (int16_T)(c2_i12 & 511);
    }

    c2_i14 = 10 - c2_i13;
    if (c2_i14 > 511) {
      c2_i14 = 511;
    } else {
      if (c2_i14 < -512) {
        c2_i14 = -512;
      }
    }

    c2_i15 = (int16_T)chartInstance->c2_count;
    c2_i16 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i16 & 512) != 0) {
      c2_i17 = (int16_T)(c2_i16 | -512);
    } else {
      c2_i17 = (int16_T)(c2_i16 & 511);
    }

    c2_i18 = c2_i17 - 10;
    if (c2_i18 > 511) {
      c2_i18 = 511;
    } else {
      if (c2_i18 < -512) {
        c2_i18 = -512;
      }
    }

    if ((int16_T)(c2_i11 & 512) != 0) {
      c2_i19 = (int16_T)(c2_i11 | -512);
    } else {
      c2_i19 = (int16_T)(c2_i11 & 511);
    }

    if (c2_i19 < 10) {
      if ((int16_T)c2_i14 <= 1) {
        c2_d1 = 1.0;
      } else {
        c2_d1 = 0.0;
      }
    } else {
      if ((int16_T)(c2_i15 & 512) != 0) {
        c2_i20 = (int16_T)(c2_i15 | -512);
      } else {
        c2_i20 = (int16_T)(c2_i15 & 511);
      }

      if (c2_i20 > 10) {
        if ((int16_T)c2_i18 <= 1) {
          c2_d1 = 3.0;
        } else {
          c2_d1 = 0.0;
        }
      } else {
        c2_d1 = 2.0;
      }
    }

    c2_b_out = (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13U, 0,
      CV_RELATIONAL_EVAL(5U, 13U, 0, c2_d1, 0.0, -2, 0U, chartInstance->c2_count
                         == 10) != 0U, chartInstance->c2_sfEvent)) != 0);
    if (c2_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c2_sfEvent);
      chartInstance->c2_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      *chartInstance->c2_CSn_CONV = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_CSn_CONV, 0U);
      chartInstance->c2_tp_END1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_END;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_END = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c2_sfEvent);
      c2_i21 = chartInstance->c2_count + 1;
      if (CV_SATURATION_EVAL(5, 12, 0, 0, c2_i21 < 0)) {
        c2_i21 = 0;
      } else {
        if (c2_i21 > 511) {
          c2_i21 = 511;
        }
      }

      chartInstance->c2_count = (uint16_T)c2_i21;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      chartInstance->c2_tp_END1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_END1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_END1 = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c2_sfEvent);
    break;

   case c2_IN_IDLE:
    CV_CHART_EVAL(1, 0, 4);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c2_sfEvent);
    c2_c_out = (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0,
      *chartInstance->c2_CMD_VLD != 0U, chartInstance->c2_sfEvent)) != 0);
    if (c2_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
      *chartInstance->c2_CSn_CONV = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_CSn_CONV, 0U);
      *chartInstance->c2_SCK = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SCK, 2U);
      *chartInstance->c2_SDI = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SDI, 4U);
      chartInstance->c2_tp_IDLE = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_START_CONV;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_START_CONV = 1U;
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c2_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c2_sfEvent);
    break;

   case c2_IN_START_ADC_RDWR:
    CV_CHART_EVAL(1, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U, chartInstance->c2_sfEvent);
    if ((int8_T)chartInstance->c2_clock_cnt < 14) {
      if ((int8_T)(14 - (int8_T)chartInstance->c2_clock_cnt) <= 1) {
        c2_d2 = 1.0;
      } else {
        c2_d2 = 0.0;
      }
    } else if ((int8_T)chartInstance->c2_clock_cnt > 14) {
      if ((int8_T)((int8_T)chartInstance->c2_clock_cnt - 14) <= 1) {
        c2_d2 = 3.0;
      } else {
        c2_d2 = 0.0;
      }
    } else {
      c2_d2 = 2.0;
    }

    c2_temp = (_SFD_CCP_CALL(7U, 0, CV_RELATIONAL_EVAL(5U, 7U, 0, c2_d2, 0.0, -2,
      0U, chartInstance->c2_clock_cnt == 14) != 0U, chartInstance->c2_sfEvent)
               != 0);
    if (c2_temp) {
      c2_i22 = (int16_T)chartInstance->c2_count;
      c2_i23 = (int16_T)chartInstance->c2_count;
      if ((int16_T)(c2_i23 & 512) != 0) {
        c2_i24 = (int16_T)(c2_i23 | -512);
      } else {
        c2_i24 = (int16_T)(c2_i23 & 511);
      }

      c2_i25 = 10 - c2_i24;
      if (c2_i25 > 511) {
        c2_i25 = 511;
      } else {
        if (c2_i25 < -512) {
          c2_i25 = -512;
        }
      }

      c2_i26 = (int16_T)chartInstance->c2_count;
      c2_i27 = (int16_T)chartInstance->c2_count;
      if ((int16_T)(c2_i27 & 512) != 0) {
        c2_i28 = (int16_T)(c2_i27 | -512);
      } else {
        c2_i28 = (int16_T)(c2_i27 & 511);
      }

      c2_i29 = c2_i28 - 10;
      if (c2_i29 > 511) {
        c2_i29 = 511;
      } else {
        if (c2_i29 < -512) {
          c2_i29 = -512;
        }
      }

      if ((int16_T)(c2_i22 & 512) != 0) {
        c2_i30 = (int16_T)(c2_i22 | -512);
      } else {
        c2_i30 = (int16_T)(c2_i22 & 511);
      }

      if (c2_i30 < 10) {
        if ((int16_T)c2_i25 <= 1) {
          c2_d3 = 1.0;
        } else {
          c2_d3 = 0.0;
        }
      } else {
        if ((int16_T)(c2_i26 & 512) != 0) {
          c2_i31 = (int16_T)(c2_i26 | -512);
        } else {
          c2_i31 = (int16_T)(c2_i26 & 511);
        }

        if (c2_i31 > 10) {
          if ((int16_T)c2_i29 <= 1) {
            c2_d3 = 3.0;
          } else {
            c2_d3 = 0.0;
          }
        } else {
          c2_d3 = 2.0;
        }
      }

      c2_temp = (_SFD_CCP_CALL(7U, 1, CV_RELATIONAL_EVAL(5U, 7U, 1, c2_d3, 0.0,
        -2, 0U, chartInstance->c2_count == 10) != 0U, chartInstance->c2_sfEvent)
                 != 0);
    }

    c2_d_out = (CV_TRANSITION_EVAL(7U, (int32_T)c2_temp) != 0);
    if (c2_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c2_sfEvent);
      chartInstance->c2_clock_cnt = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_clock_cnt, 3U);
      chartInstance->c2_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      *chartInstance->c2_SCK = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SCK, 2U);
      chartInstance->c2_tp_START_ADC_RDWR = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_END1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_END1 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c2_sfEvent);
      c2_i32 = (int16_T)chartInstance->c2_count;
      c2_i33 = (int16_T)chartInstance->c2_count;
      if ((int16_T)(c2_i33 & 512) != 0) {
        c2_i34 = (int16_T)(c2_i33 | -512);
      } else {
        c2_i34 = (int16_T)(c2_i33 & 511);
      }

      c2_i35 = 10 - c2_i34;
      if (c2_i35 > 511) {
        c2_i35 = 511;
      } else {
        if (c2_i35 < -512) {
          c2_i35 = -512;
        }
      }

      c2_i36 = (int16_T)chartInstance->c2_count;
      c2_i37 = (int16_T)chartInstance->c2_count;
      if ((int16_T)(c2_i37 & 512) != 0) {
        c2_i38 = (int16_T)(c2_i37 | -512);
      } else {
        c2_i38 = (int16_T)(c2_i37 & 511);
      }

      c2_i39 = c2_i38 - 10;
      if (c2_i39 > 511) {
        c2_i39 = 511;
      } else {
        if (c2_i39 < -512) {
          c2_i39 = -512;
        }
      }

      if ((int16_T)(c2_i32 & 512) != 0) {
        c2_i40 = (int16_T)(c2_i32 | -512);
      } else {
        c2_i40 = (int16_T)(c2_i32 & 511);
      }

      if (c2_i40 < 10) {
        if ((int16_T)c2_i35 <= 1) {
          c2_d4 = 1.0;
        } else {
          c2_d4 = 0.0;
        }
      } else {
        if ((int16_T)(c2_i36 & 512) != 0) {
          c2_i41 = (int16_T)(c2_i36 | -512);
        } else {
          c2_i41 = (int16_T)(c2_i36 & 511);
        }

        if (c2_i41 > 10) {
          if ((int16_T)c2_i39 <= 1) {
            c2_d4 = 3.0;
          } else {
            c2_d4 = 0.0;
          }
        } else {
          c2_d4 = 2.0;
        }
      }

      c2_e_out = (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0,
        CV_RELATIONAL_EVAL(5U, 6U, 0, c2_d4, 0.0, -2, 0U,
                           chartInstance->c2_count == 10) != 0U,
        chartInstance->c2_sfEvent)) != 0);
      if (c2_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c2_sfEvent);
        chartInstance->c2_count = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
        *chartInstance->c2_SCK = true;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SCK, 2U);
        c2_i42 = chartInstance->c2_clock_cnt + 1;
        if (CV_SATURATION_EVAL(5, 6, 0, 0, c2_i42 < 0)) {
          c2_i42 = 0;
        } else {
          if (c2_i42 > 31) {
            c2_i42 = 31;
          }
        }

        chartInstance->c2_clock_cnt = (uint8_T)c2_i42;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_clock_cnt, 3U);
        chartInstance->c2_tp_START_ADC_RDWR = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
        chartInstance->c2_is_c2_ADXL345_read = c2_IN_CLOCKING;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
        chartInstance->c2_tp_CLOCKING = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c2_sfEvent);
        c2_i43 = chartInstance->c2_count + 1;
        if (CV_SATURATION_EVAL(5, 11, 0, 0, c2_i43 < 0)) {
          c2_i43 = 0;
        } else {
          if (c2_i43 > 511) {
            c2_i43 = 511;
          }
        }

        chartInstance->c2_count = (uint16_T)c2_i43;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
        chartInstance->c2_tp_START_ADC_RDWR = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
        chartInstance->c2_is_c2_ADXL345_read = c2_IN_START_ADC_RDWR;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
        chartInstance->c2_tp_START_ADC_RDWR = 1U;
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c2_sfEvent);
    break;

   case c2_IN_START_CONV:
    CV_CHART_EVAL(1, 0, 6);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c2_sfEvent);
    c2_i44 = (int16_T)chartInstance->c2_count;
    c2_i45 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i45 & 512) != 0) {
      c2_i46 = (int16_T)(c2_i45 | -512);
    } else {
      c2_i46 = (int16_T)(c2_i45 & 511);
    }

    c2_i47 = 10 - c2_i46;
    if (c2_i47 > 511) {
      c2_i47 = 511;
    } else {
      if (c2_i47 < -512) {
        c2_i47 = -512;
      }
    }

    c2_i48 = (int16_T)chartInstance->c2_count;
    c2_i49 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i49 & 512) != 0) {
      c2_i50 = (int16_T)(c2_i49 | -512);
    } else {
      c2_i50 = (int16_T)(c2_i49 & 511);
    }

    c2_i51 = c2_i50 - 10;
    if (c2_i51 > 511) {
      c2_i51 = 511;
    } else {
      if (c2_i51 < -512) {
        c2_i51 = -512;
      }
    }

    if ((int16_T)(c2_i44 & 512) != 0) {
      c2_i52 = (int16_T)(c2_i44 | -512);
    } else {
      c2_i52 = (int16_T)(c2_i44 & 511);
    }

    if (c2_i52 < 10) {
      if ((int16_T)c2_i47 <= 1) {
        c2_d5 = 1.0;
      } else {
        c2_d5 = 0.0;
      }
    } else {
      if ((int16_T)(c2_i48 & 512) != 0) {
        c2_i53 = (int16_T)(c2_i48 | -512);
      } else {
        c2_i53 = (int16_T)(c2_i48 & 511);
      }

      if (c2_i53 > 10) {
        if ((int16_T)c2_i51 <= 1) {
          c2_d5 = 3.0;
        } else {
          c2_d5 = 0.0;
        }
      } else {
        c2_d5 = 2.0;
      }
    }

    c2_f_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
      CV_RELATIONAL_EVAL(5U, 2U, 0, c2_d5, 0.0, -2, 0U, chartInstance->c2_count ==
                         10) != 0U, chartInstance->c2_sfEvent)) != 0);
    if (c2_f_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c2_sfEvent);
      chartInstance->c2_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      *chartInstance->c2_CSn_CONV = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_CSn_CONV, 0U);
      *chartInstance->c2_SCK = true;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SCK, 2U);
      chartInstance->c2_tp_START_CONV = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_tCONV_delay;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_tCONV_delay = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c2_sfEvent);
      c2_i54 = chartInstance->c2_count + 1;
      if (CV_SATURATION_EVAL(5, 3, 0, 0, c2_i54 < 0)) {
        c2_i54 = 0;
      } else {
        if (c2_i54 > 511) {
          c2_i54 = 511;
        }
      }

      chartInstance->c2_count = (uint16_T)c2_i54;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      chartInstance->c2_tp_START_CONV = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_START_CONV;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_START_CONV = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c2_sfEvent);
    break;

   case c2_IN_tCONV_delay:
    CV_CHART_EVAL(1, 0, 7);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, chartInstance->c2_sfEvent);
    c2_i55 = (int16_T)chartInstance->c2_count;
    c2_i56 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i56 & 512) != 0) {
      c2_i57 = (int16_T)(c2_i56 | -512);
    } else {
      c2_i57 = (int16_T)(c2_i56 & 511);
    }

    c2_i58 = 10 - c2_i57;
    if (c2_i58 > 511) {
      c2_i58 = 511;
    } else {
      if (c2_i58 < -512) {
        c2_i58 = -512;
      }
    }

    c2_i59 = (int16_T)chartInstance->c2_count;
    c2_i60 = (int16_T)chartInstance->c2_count;
    if ((int16_T)(c2_i60 & 512) != 0) {
      c2_i61 = (int16_T)(c2_i60 | -512);
    } else {
      c2_i61 = (int16_T)(c2_i60 & 511);
    }

    c2_i62 = c2_i61 - 10;
    if (c2_i62 > 511) {
      c2_i62 = 511;
    } else {
      if (c2_i62 < -512) {
        c2_i62 = -512;
      }
    }

    if ((int16_T)(c2_i55 & 512) != 0) {
      c2_i63 = (int16_T)(c2_i55 | -512);
    } else {
      c2_i63 = (int16_T)(c2_i55 & 511);
    }

    if (c2_i63 < 10) {
      if ((int16_T)c2_i58 <= 1) {
        c2_d6 = 1.0;
      } else {
        c2_d6 = 0.0;
      }
    } else {
      if ((int16_T)(c2_i59 & 512) != 0) {
        c2_i64 = (int16_T)(c2_i59 | -512);
      } else {
        c2_i64 = (int16_T)(c2_i59 & 511);
      }

      if (c2_i64 > 10) {
        if ((int16_T)c2_i62 <= 1) {
          c2_d6 = 3.0;
        } else {
          c2_d6 = 0.0;
        }
      } else {
        c2_d6 = 2.0;
      }
    }

    c2_g_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
      CV_RELATIONAL_EVAL(5U, 5U, 0, c2_d6, 0.0, -2, 0U, chartInstance->c2_count ==
                         10) != 0U, chartInstance->c2_sfEvent)) != 0);
    if (c2_g_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c2_sfEvent);
      chartInstance->c2_count = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      *chartInstance->c2_SCK = false;
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_SCK, 2U);
      chartInstance->c2_tp_tCONV_delay = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_START_ADC_RDWR;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_START_ADC_RDWR = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c2_sfEvent);
      c2_i65 = chartInstance->c2_count + 1;
      if (CV_SATURATION_EVAL(5, 4, 0, 0, c2_i65 < 0)) {
        c2_i65 = 0;
      } else {
        if (c2_i65 > 511) {
          c2_i65 = 511;
        }
      }

      chartInstance->c2_count = (uint16_T)c2_i65;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_count, 1U);
      chartInstance->c2_tp_tCONV_delay = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c2_sfEvent);
      chartInstance->c2_is_c2_ADXL345_read = c2_IN_tCONV_delay;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c2_sfEvent);
      chartInstance->c2_tp_tCONV_delay = 1U;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c2_sfEvent);
    break;

   default:
    CV_CHART_EVAL(1, 0, 0);
    chartInstance->c2_is_c2_ADXL345_read = c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c2_sfEvent);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
}

static void initSimStructsc2_ADXL345_read(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber)
{
  (void)c2_machineNumber;
  (void)c2_chartNumber;
  (void)c2_instanceNumber;
}

static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  boolean_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(boolean_T *)c2_inData;
  c2_y = NULL;
  if (!chartInstance->c2_ser_data_int_not_empty) {
    sf_mex_assign(&c2_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0), false);
  } else {
    sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0), false);
  }

  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static boolean_T c2_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_ser_data_int, const char_T *c2_identifier)
{
  boolean_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_ser_data_int),
    &c2_thisId);
  sf_mex_destroy(&c2_b_ser_data_int);
  return c2_y;
}

static boolean_T c2_b_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  boolean_T c2_y;
  boolean_T c2_b0;
  if (mxIsEmpty(c2_u)) {
    chartInstance->c2_ser_data_int_not_empty = false;
  } else {
    chartInstance->c2_ser_data_int_not_empty = true;
    sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b0, 1, 11, 0U, 0, 0U, 0);
    c2_y = c2_b0;
  }

  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_ser_data_int;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  boolean_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_b_ser_data_int = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_ser_data_int),
    &c2_thisId);
  sf_mex_destroy(&c2_b_ser_data_int);
  *(boolean_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  boolean_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(boolean_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static boolean_T c2_c_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_ser_data, const char_T *c2_identifier)
{
  boolean_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_ser_data),
    &c2_thisId);
  sf_mex_destroy(&c2_ser_data);
  return c2_y;
}

static boolean_T c2_d_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  boolean_T c2_y;
  boolean_T c2_b1;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b1, 1, 11, 0U, 0, 0U, 0);
  c2_y = c2_b1;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_ser_data;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  boolean_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_ser_data = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_ser_data),
    &c2_thisId);
  sf_mex_destroy(&c2_ser_data);
  *(boolean_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  uint8_T c2_u;
  const mxArray *c2_y = NULL;
  uint8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_u = *(uint8_T *)c2_inData;
    c2_y = NULL;
    c2_b_u = c2_u;
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_b_eml_mx), 15,
      "simulinkarray", 14, c2_b_y, 15, "fimathislocal", 3, false), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static uint8_T c2_e_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  const mxArray *c2_mxFi = NULL;
  const mxArray *c2_mxInt = NULL;
  uint8_T c2_u0;
  (void)chartInstance;
  sf_mex_check_fi(c2_parentId, c2_u, false, 0U, NULL, c2_eml_mx, c2_b_eml_mx);
  sf_mex_assign(&c2_mxFi, sf_mex_dup(c2_u), false);
  sf_mex_assign(&c2_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c2_mxFi)), false);
  sf_mex_import(c2_parentId, sf_mex_dup(c2_mxInt), &c2_u0, 1, 3, 0U, 0, 0U, 0);
  sf_mex_destroy(&c2_mxFi);
  sf_mex_destroy(&c2_mxInt);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_cnt;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c2_cnt = sf_mex_dup(c2_mxArrayInData);
    c2_identifier = c2_varName;
    c2_thisId.fIdentifier = c2_identifier;
    c2_thisId.fParent = NULL;
    c2_y = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_cnt), &c2_thisId);
    sf_mex_destroy(&c2_cnt);
    *(uint8_T *)c2_outData = c2_y;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  uint16_T c2_u;
  const mxArray *c2_y = NULL;
  uint16_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_u = *(uint16_T *)c2_inData;
    c2_y = NULL;
    c2_b_u = c2_u;
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 5, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_c_eml_mx), 15,
      "simulinkarray", 14, c2_b_y, 15, "fimathislocal", 3, false), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static uint16_T c2_f_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint16_T c2_y;
  const mxArray *c2_mxFi = NULL;
  const mxArray *c2_mxInt = NULL;
  uint16_T c2_u1;
  (void)chartInstance;
  sf_mex_check_fi(c2_parentId, c2_u, false, 0U, NULL, c2_eml_mx, c2_c_eml_mx);
  sf_mex_assign(&c2_mxFi, sf_mex_dup(c2_u), false);
  sf_mex_assign(&c2_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c2_mxFi)), false);
  sf_mex_import(c2_parentId, sf_mex_dup(c2_mxInt), &c2_u1, 1, 5, 0U, 0, 0U, 0);
  sf_mex_destroy(&c2_mxFi);
  sf_mex_destroy(&c2_mxInt);
  c2_y = c2_u1;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_word;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  uint16_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c2_word = sf_mex_dup(c2_mxArrayInData);
    c2_identifier = c2_varName;
    c2_thisId.fIdentifier = c2_identifier;
    c2_thisId.fParent = NULL;
    c2_y = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_word), &c2_thisId);
    sf_mex_destroy(&c2_word);
    *(uint16_T *)c2_outData = c2_y;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  real_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(real_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static real_T c2_g_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d7;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d7, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d7;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_nargout;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_nargout = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nargout), &c2_thisId);
  sf_mex_destroy(&c2_nargout);
  *(real_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

const mxArray *sf_c2_ADXL345_read_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_createstruct("structure", 2, 60, 1),
                false);
  c2_info_helper(&c2_nameCaptureInfo);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static void c2_info_helper(const mxArray **c2_info)
{
  const mxArray *c2_rhs0 = NULL;
  const mxArray *c2_lhs0 = NULL;
  const mxArray *c2_rhs1 = NULL;
  const mxArray *c2_lhs1 = NULL;
  const mxArray *c2_rhs2 = NULL;
  const mxArray *c2_lhs2 = NULL;
  const mxArray *c2_rhs3 = NULL;
  const mxArray *c2_lhs3 = NULL;
  const mxArray *c2_rhs4 = NULL;
  const mxArray *c2_lhs4 = NULL;
  const mxArray *c2_rhs5 = NULL;
  const mxArray *c2_lhs5 = NULL;
  const mxArray *c2_rhs6 = NULL;
  const mxArray *c2_lhs6 = NULL;
  const mxArray *c2_rhs7 = NULL;
  const mxArray *c2_lhs7 = NULL;
  const mxArray *c2_rhs8 = NULL;
  const mxArray *c2_lhs8 = NULL;
  const mxArray *c2_rhs9 = NULL;
  const mxArray *c2_lhs9 = NULL;
  const mxArray *c2_rhs10 = NULL;
  const mxArray *c2_lhs10 = NULL;
  const mxArray *c2_rhs11 = NULL;
  const mxArray *c2_lhs11 = NULL;
  const mxArray *c2_rhs12 = NULL;
  const mxArray *c2_lhs12 = NULL;
  const mxArray *c2_rhs13 = NULL;
  const mxArray *c2_lhs13 = NULL;
  const mxArray *c2_rhs14 = NULL;
  const mxArray *c2_lhs14 = NULL;
  const mxArray *c2_rhs15 = NULL;
  const mxArray *c2_lhs15 = NULL;
  const mxArray *c2_rhs16 = NULL;
  const mxArray *c2_lhs16 = NULL;
  const mxArray *c2_rhs17 = NULL;
  const mxArray *c2_lhs17 = NULL;
  const mxArray *c2_rhs18 = NULL;
  const mxArray *c2_lhs18 = NULL;
  const mxArray *c2_rhs19 = NULL;
  const mxArray *c2_lhs19 = NULL;
  const mxArray *c2_rhs20 = NULL;
  const mxArray *c2_lhs20 = NULL;
  const mxArray *c2_rhs21 = NULL;
  const mxArray *c2_lhs21 = NULL;
  const mxArray *c2_rhs22 = NULL;
  const mxArray *c2_lhs22 = NULL;
  const mxArray *c2_rhs23 = NULL;
  const mxArray *c2_lhs23 = NULL;
  const mxArray *c2_rhs24 = NULL;
  const mxArray *c2_lhs24 = NULL;
  const mxArray *c2_rhs25 = NULL;
  const mxArray *c2_lhs25 = NULL;
  const mxArray *c2_rhs26 = NULL;
  const mxArray *c2_lhs26 = NULL;
  const mxArray *c2_rhs27 = NULL;
  const mxArray *c2_lhs27 = NULL;
  const mxArray *c2_rhs28 = NULL;
  const mxArray *c2_lhs28 = NULL;
  const mxArray *c2_rhs29 = NULL;
  const mxArray *c2_lhs29 = NULL;
  const mxArray *c2_rhs30 = NULL;
  const mxArray *c2_lhs30 = NULL;
  const mxArray *c2_rhs31 = NULL;
  const mxArray *c2_lhs31 = NULL;
  const mxArray *c2_rhs32 = NULL;
  const mxArray *c2_lhs32 = NULL;
  const mxArray *c2_rhs33 = NULL;
  const mxArray *c2_lhs33 = NULL;
  const mxArray *c2_rhs34 = NULL;
  const mxArray *c2_lhs34 = NULL;
  const mxArray *c2_rhs35 = NULL;
  const mxArray *c2_lhs35 = NULL;
  const mxArray *c2_rhs36 = NULL;
  const mxArray *c2_lhs36 = NULL;
  const mxArray *c2_rhs37 = NULL;
  const mxArray *c2_lhs37 = NULL;
  const mxArray *c2_rhs38 = NULL;
  const mxArray *c2_lhs38 = NULL;
  const mxArray *c2_rhs39 = NULL;
  const mxArray *c2_lhs39 = NULL;
  const mxArray *c2_rhs40 = NULL;
  const mxArray *c2_lhs40 = NULL;
  const mxArray *c2_rhs41 = NULL;
  const mxArray *c2_lhs41 = NULL;
  const mxArray *c2_rhs42 = NULL;
  const mxArray *c2_lhs42 = NULL;
  const mxArray *c2_rhs43 = NULL;
  const mxArray *c2_lhs43 = NULL;
  const mxArray *c2_rhs44 = NULL;
  const mxArray *c2_lhs44 = NULL;
  const mxArray *c2_rhs45 = NULL;
  const mxArray *c2_lhs45 = NULL;
  const mxArray *c2_rhs46 = NULL;
  const mxArray *c2_lhs46 = NULL;
  const mxArray *c2_rhs47 = NULL;
  const mxArray *c2_lhs47 = NULL;
  const mxArray *c2_rhs48 = NULL;
  const mxArray *c2_lhs48 = NULL;
  const mxArray *c2_rhs49 = NULL;
  const mxArray *c2_lhs49 = NULL;
  const mxArray *c2_rhs50 = NULL;
  const mxArray *c2_lhs50 = NULL;
  const mxArray *c2_rhs51 = NULL;
  const mxArray *c2_lhs51 = NULL;
  const mxArray *c2_rhs52 = NULL;
  const mxArray *c2_lhs52 = NULL;
  const mxArray *c2_rhs53 = NULL;
  const mxArray *c2_lhs53 = NULL;
  const mxArray *c2_rhs54 = NULL;
  const mxArray *c2_lhs54 = NULL;
  const mxArray *c2_rhs55 = NULL;
  const mxArray *c2_lhs55 = NULL;
  const mxArray *c2_rhs56 = NULL;
  const mxArray *c2_lhs56 = NULL;
  const mxArray *c2_rhs57 = NULL;
  const mxArray *c2_lhs57 = NULL;
  const mxArray *c2_rhs58 = NULL;
  const mxArray *c2_lhs58 = NULL;
  const mxArray *c2_rhs59 = NULL;
  const mxArray *c2_lhs59 = NULL;
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "context", "context", 0);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("fi_impl"), "name", "name", 0);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 0);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m"), "resolved",
                  "resolved", 0);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1386456352U), "fileTimeLo",
                  "fileTimeLo", 0);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 0);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 0);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 0);
  sf_mex_assign(&c2_rhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs0, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs0), "rhs", "rhs", 0);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs0), "lhs", "lhs", 0);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m"), "context",
                  "context", 1);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isnumerictype"), "name",
                  "name", 1);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 1);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 1);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1398907998U), "fileTimeLo",
                  "fileTimeLo", 1);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 1);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 1);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 1);
  sf_mex_assign(&c2_rhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs1, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs1), "rhs", "rhs", 1);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs1), "lhs", "lhs", 1);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 2);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("length"), "name", "name", 2);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("cell"), "dominantType",
                  "dominantType", 2);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved",
                  "resolved", 2);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1303178606U), "fileTimeLo",
                  "fileTimeLo", 2);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 2);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 2);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 2);
  sf_mex_assign(&c2_rhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs2, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs2), "rhs", "rhs", 2);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs2), "lhs", "lhs", 2);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 3);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_fi_checkforconst"), "name",
                  "name", 3);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 3);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/eml_fi_checkforconst.m"),
                  "resolved", "resolved", 3);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542752U), "fileTimeLo",
                  "fileTimeLo", 3);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 3);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 3);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 3);
  sf_mex_assign(&c2_rhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs3, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs3), "rhs", "rhs", 3);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs3), "lhs", "lhs", 3);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 4);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isfi"), "name", "name", 4);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 4);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 4);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542758U), "fileTimeLo",
                  "fileTimeLo", 4);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 4);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 4);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 4);
  sf_mex_assign(&c2_rhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs4, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs4), "rhs", "rhs", 4);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs4), "lhs", "lhs", 4);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "context",
                  "context", 5);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isnumerictype"), "name",
                  "name", 5);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 5);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 5);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1398907998U), "fileTimeLo",
                  "fileTimeLo", 5);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 5);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 5);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 5);
  sf_mex_assign(&c2_rhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs5, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs5), "rhs", "rhs", 5);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs5), "lhs", "lhs", 5);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 6);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_fi_constructor_helper"),
                  "name", "name", 6);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 6);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/fixedpoint/fixedpoint/eml_fi_constructor_helper.m"),
                  "resolved", "resolved", 6);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1376013096U), "fileTimeLo",
                  "fileTimeLo", 6);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 6);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 6);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 6);
  sf_mex_assign(&c2_rhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs6, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs6), "rhs", "rhs", 6);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs6), "lhs", "lhs", 6);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/fi_impl.m!fi_helper"),
                  "context", "context", 7);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_fi_checkforerror"), "name",
                  "name", 7);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.numerictype"),
                  "dominantType", "dominantType", 7);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/eml_fi_checkforerror.m"),
                  "resolved", "resolved", 7);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1360314746U), "fileTimeLo",
                  "fileTimeLo", 7);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 7);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 7);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 7);
  sf_mex_assign(&c2_rhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs7, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs7), "rhs", "rhs", 7);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs7), "lhs", "lhs", 7);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "context", "context", 8);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eq"), "name", "name", 8);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 8);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "resolved", "resolved", 8);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1397289822U), "fileTimeLo",
                  "fileTimeLo", 8);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 8);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 8);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 8);
  sf_mex_assign(&c2_rhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs8, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs8), "rhs", "rhs", 8);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs8), "lhs", "lhs", 8);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 9);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 9);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 9);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 9);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1286851196U), "fileTimeLo",
                  "fileTimeLo", 9);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 9);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 9);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 9);
  sf_mex_assign(&c2_rhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs9, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs9), "rhs", "rhs", 9);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs9), "lhs", "lhs", 9);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 10);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isfi"), "name", "name", 10);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 10);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 10);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542758U), "fileTimeLo",
                  "fileTimeLo", 10);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 10);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 10);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 10);
  sf_mex_assign(&c2_rhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs10, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs10), "rhs", "rhs",
                  10);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs10), "lhs", "lhs",
                  10);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "context",
                  "context", 11);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isnumerictype"), "name",
                  "name", 11);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.numerictype"),
                  "dominantType", "dominantType", 11);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                  "resolved", 11);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1398907998U), "fileTimeLo",
                  "fileTimeLo", 11);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 11);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 11);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 11);
  sf_mex_assign(&c2_rhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs11, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs11), "rhs", "rhs",
                  11);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs11), "lhs", "lhs",
                  11);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 12);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("get"), "name", "name", 12);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fimath"),
                  "dominantType", "dominantType", 12);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fimath/get.m"),
                  "resolved", "resolved", 12);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1378328382U), "fileTimeLo",
                  "fileTimeLo", 12);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 12);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 12);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 12);
  sf_mex_assign(&c2_rhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs12, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs12), "rhs", "rhs",
                  12);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs12), "lhs", "lhs",
                  12);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 13);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("strcmpi"), "name", "name", 13);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 13);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strcmpi.m"), "resolved",
                  "resolved", 13);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1327451510U), "fileTimeLo",
                  "fileTimeLo", 13);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 13);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 13);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 13);
  sf_mex_assign(&c2_rhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs13, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs13), "rhs", "rhs",
                  13);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs13), "lhs", "lhs",
                  13);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strcmpi.m"), "context",
                  "context", 14);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_assert_supported_string"),
                  "name", "name", 14);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 14);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m"),
                  "resolved", "resolved", 14);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1327451510U), "fileTimeLo",
                  "fileTimeLo", 14);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 14);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 14);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 14);
  sf_mex_assign(&c2_rhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs14, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs14), "rhs", "rhs",
                  14);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs14), "lhs", "lhs",
                  14);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_assert_supported_string.m!inrange"),
                  "context", "context", 15);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_charmax"), "name", "name",
                  15);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 15);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m"),
                  "resolved", "resolved", 15);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1327451510U), "fileTimeLo",
                  "fileTimeLo", 15);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 15);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 15);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 15);
  sf_mex_assign(&c2_rhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs15, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs15), "rhs", "rhs",
                  15);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs15), "lhs", "lhs",
                  15);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/eml_charmax.m"), "context",
                  "context", 16);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("intmax"), "name", "name", 16);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 16);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved",
                  "resolved", 16);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1362294282U), "fileTimeLo",
                  "fileTimeLo", 16);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 16);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 16);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 16);
  sf_mex_assign(&c2_rhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs16, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs16), "rhs", "rhs",
                  16);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs16), "lhs", "lhs",
                  16);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "context",
                  "context", 17);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_switch_helper"), "name",
                  "name", 17);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 17);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                  "resolved", "resolved", 17);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1393363258U), "fileTimeLo",
                  "fileTimeLo", 17);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 17);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 17);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 17);
  sf_mex_assign(&c2_rhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs17, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs17), "rhs", "rhs",
                  17);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs17), "lhs", "lhs",
                  17);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strcmpi.m"), "context",
                  "context", 18);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("min"), "name", "name", 18);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 18);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved",
                  "resolved", 18);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1311287718U), "fileTimeLo",
                  "fileTimeLo", 18);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 18);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 18);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 18);
  sf_mex_assign(&c2_rhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs18, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs18), "rhs", "rhs",
                  18);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs18), "lhs", "lhs",
                  18);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "context",
                  "context", 19);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_min_or_max"), "name",
                  "name", 19);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 19);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                  "resolved", "resolved", 19);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1378328384U), "fileTimeLo",
                  "fileTimeLo", 19);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 19);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 19);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 19);
  sf_mex_assign(&c2_rhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs19, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs19), "rhs", "rhs",
                  19);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs19), "lhs", "lhs",
                  19);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 20);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 20);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 20);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 20);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 20);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 20);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 20);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 20);
  sf_mex_assign(&c2_rhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs20, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs20), "rhs", "rhs",
                  20);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs20), "lhs", "lhs",
                  20);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                  "context", 21);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("coder.internal.scalarEg"),
                  "name", "name", 21);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 21);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                  "resolved", "resolved", 21);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1410840170U), "fileTimeLo",
                  "fileTimeLo", 21);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 21);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 21);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 21);
  sf_mex_assign(&c2_rhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs21, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs21), "rhs", "rhs",
                  21);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs21), "lhs", "lhs",
                  21);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 22);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_scalexp_alloc"), "name",
                  "name", 22);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 22);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "resolved", "resolved", 22);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 22);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 22);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 22);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 22);
  sf_mex_assign(&c2_rhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs22, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs22), "rhs", "rhs",
                  22);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs22), "lhs", "lhs",
                  22);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                  "context", "context", 23);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("coder.internal.scalexpAlloc"),
                  "name", "name", 23);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 23);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                  "resolved", "resolved", 23);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1410840170U), "fileTimeLo",
                  "fileTimeLo", 23);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 23);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 23);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 23);
  sf_mex_assign(&c2_rhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs23, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs23), "rhs", "rhs",
                  23);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs23), "lhs", "lhs",
                  23);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                  "context", "context", 24);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_index_class"), "name",
                  "name", 24);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "dominantType",
                  "dominantType", 24);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                  "resolved", "resolved", 24);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1323202978U), "fileTimeLo",
                  "fileTimeLo", 24);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 24);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 24);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 24);
  sf_mex_assign(&c2_rhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs24, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs24), "rhs", "rhs",
                  24);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs24), "lhs", "lhs",
                  24);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 25);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_scalar_eg"), "name",
                  "name", 25);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 25);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                  "resolved", 25);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1376013088U), "fileTimeLo",
                  "fileTimeLo", 25);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 25);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 25);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 25);
  sf_mex_assign(&c2_rhs25, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs25, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs25), "rhs", "rhs",
                  25);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs25), "lhs", "lhs",
                  25);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                  "context", "context", 26);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 26);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 26);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 26);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1395960656U), "fileTimeLo",
                  "fileTimeLo", 26);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 26);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 26);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 26);
  sf_mex_assign(&c2_rhs26, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs26, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs26), "rhs", "rhs",
                  26);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs26), "lhs", "lhs",
                  26);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 27);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isscaledtype"), "name", "name",
                  27);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 27);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isscaledtype.m"),
                  "resolved", "resolved", 27);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542780U), "fileTimeLo",
                  "fileTimeLo", 27);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 27);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 27);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 27);
  sf_mex_assign(&c2_rhs27, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs27, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs27), "rhs", "rhs",
                  27);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs27), "lhs", "lhs",
                  27);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isscaledtype.m"),
                  "context", "context", 28);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isfixed"), "name", "name", 28);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 28);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isfixed.m"),
                  "resolved", "resolved", 28);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542778U), "fileTimeLo",
                  "fileTimeLo", 28);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 28);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 28);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 28);
  sf_mex_assign(&c2_rhs28, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs28, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs28), "rhs", "rhs",
                  28);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs28), "lhs", "lhs",
                  28);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isfixed.m"),
                  "context", "context", 29);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("get"), "name", "name", 29);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.numerictype"),
                  "dominantType", "dominantType", 29);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@numerictype/get.m"),
                  "resolved", "resolved", 29);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1378328382U), "fileTimeLo",
                  "fileTimeLo", 29);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 29);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 29);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 29);
  sf_mex_assign(&c2_rhs29, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs29, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs29), "rhs", "rhs",
                  29);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs29), "lhs", "lhs",
                  29);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eq.m"),
                  "context", "context", 30);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_make_same_complexity"),
                  "name", "name", 30);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 30);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_make_same_complexity.m"),
                  "resolved", "resolved", 30);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1289552046U), "fileTimeLo",
                  "fileTimeLo", 30);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 30);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 30);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 30);
  sf_mex_assign(&c2_rhs30, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs30, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs30), "rhs", "rhs",
                  30);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs30), "lhs", "lhs",
                  30);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "context", "context", 31);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("bitget"), "name", "name", 31);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 31);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitget.m"),
                  "resolved", "resolved", 31);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1370042286U), "fileTimeLo",
                  "fileTimeLo", 31);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 31);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 31);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 31);
  sf_mex_assign(&c2_rhs31, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs31, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs31), "rhs", "rhs",
                  31);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs31), "lhs", "lhs",
                  31);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitget.m"),
                  "context", "context", 32);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 32);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 32);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 32);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1286851196U), "fileTimeLo",
                  "fileTimeLo", 32);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 32);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 32);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 32);
  sf_mex_assign(&c2_rhs32, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs32, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs32), "rhs", "rhs",
                  32);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs32), "lhs", "lhs",
                  32);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitget.m"),
                  "context", "context", 33);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isfi"), "name", "name", 33);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 33);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 33);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542758U), "fileTimeLo",
                  "fileTimeLo", 33);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 33);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 33);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 33);
  sf_mex_assign(&c2_rhs33, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs33, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs33), "rhs", "rhs",
                  33);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs33), "lhs", "lhs",
                  33);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitget.m"),
                  "context", "context", 34);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isfixed"), "name", "name", 34);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 34);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isfixed.m"),
                  "resolved", "resolved", 34);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542778U), "fileTimeLo",
                  "fileTimeLo", 34);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 34);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 34);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 34);
  sf_mex_assign(&c2_rhs34, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs34, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs34), "rhs", "rhs",
                  34);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs34), "lhs", "lhs",
                  34);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitget.m"),
                  "context", "context", 35);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("all"), "name", "name", 35);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("logical"), "dominantType",
                  "dominantType", 35);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "resolved",
                  "resolved", 35);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1372614814U), "fileTimeLo",
                  "fileTimeLo", 35);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 35);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 35);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 35);
  sf_mex_assign(&c2_rhs35, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs35, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs35), "rhs", "rhs",
                  35);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs35), "lhs", "lhs",
                  35);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "context", "context",
                  36);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 36);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 36);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 36);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1389750174U), "fileTimeLo",
                  "fileTimeLo", 36);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 36);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 36);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 36);
  sf_mex_assign(&c2_rhs36, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs36, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs36), "rhs", "rhs",
                  36);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs36), "lhs", "lhs",
                  36);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "context", "context",
                  37);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 37);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("logical"), "dominantType",
                  "dominantType", 37);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 37);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1395960656U), "fileTimeLo",
                  "fileTimeLo", 37);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 37);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 37);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 37);
  sf_mex_assign(&c2_rhs37, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs37, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs37), "rhs", "rhs",
                  37);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs37), "lhs", "lhs",
                  37);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "context", "context",
                  38);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("coder.internal.allOrAny"),
                  "name", "name", 38);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 38);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/allOrAny.m"),
                  "resolved", "resolved", 38);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1372615558U), "fileTimeLo",
                  "fileTimeLo", 38);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 38);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 38);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 38);
  sf_mex_assign(&c2_rhs38, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs38, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs38), "rhs", "rhs",
                  38);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs38), "lhs", "lhs",
                  38);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/allOrAny.m"),
                  "context", "context", 39);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("coder.internal.assert"),
                  "name", "name", 39);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 39);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                  "resolved", "resolved", 39);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1389750174U), "fileTimeLo",
                  "fileTimeLo", 39);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 39);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 39);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 39);
  sf_mex_assign(&c2_rhs39, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs39, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs39), "rhs", "rhs",
                  39);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs39), "lhs", "lhs",
                  39);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/allOrAny.m"),
                  "context", "context", 40);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isequal"), "name", "name", 40);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 40);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved",
                  "resolved", 40);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1286851158U), "fileTimeLo",
                  "fileTimeLo", 40);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 40);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 40);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 40);
  sf_mex_assign(&c2_rhs40, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs40, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs40), "rhs", "rhs",
                  40);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs40), "lhs", "lhs",
                  40);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "context",
                  "context", 41);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_isequal_core"), "name",
                  "name", 41);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 41);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"),
                  "resolved", "resolved", 41);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1286851186U), "fileTimeLo",
                  "fileTimeLo", 41);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 41);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 41);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 41);
  sf_mex_assign(&c2_rhs41, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs41, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs41), "rhs", "rhs",
                  41);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs41), "lhs", "lhs",
                  41);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/allOrAny.m"),
                  "context", "context", 42);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "coder.internal.constNonSingletonDim"), "name", "name", 42);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("logical"), "dominantType",
                  "dominantType", 42);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/constNonSingletonDim.m"),
                  "resolved", "resolved", 42);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1372615560U), "fileTimeLo",
                  "fileTimeLo", 42);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 42);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 42);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 42);
  sf_mex_assign(&c2_rhs42, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs42, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs42), "rhs", "rhs",
                  42);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs42), "lhs", "lhs",
                  42);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitget.m"),
                  "context", "context", 43);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("numerictype"), "name", "name",
                  43);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 43);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/numerictype.m"), "resolved",
                  "resolved", 43);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1348224318U), "fileTimeLo",
                  "fileTimeLo", 43);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 43);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 43);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 43);
  sf_mex_assign(&c2_rhs43, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs43, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs43), "rhs", "rhs",
                  43);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs43), "lhs", "lhs",
                  43);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/numerictype.m"), "context",
                  "context", 44);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("length"), "name", "name", 44);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("cell"), "dominantType",
                  "dominantType", 44);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved",
                  "resolved", 44);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1303178606U), "fileTimeLo",
                  "fileTimeLo", 44);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 44);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 44);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 44);
  sf_mex_assign(&c2_rhs44, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs44, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs44), "rhs", "rhs",
                  44);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs44), "lhs", "lhs",
                  44);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/bitget.m"),
                  "context", "context", 45);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("fimath"), "name", "name", 45);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 45);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/fimath.m"),
                  "resolved", "resolved", 45);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1378328384U), "fileTimeLo",
                  "fileTimeLo", 45);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 45);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 45);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 45);
  sf_mex_assign(&c2_rhs45, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs45, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs45), "rhs", "rhs",
                  45);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs45), "lhs", "lhs",
                  45);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/@embedded/@fi/bitget.m!convertOneBasedBitIndexToZeroBased"),
                  "context", "context", 46);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("floor"), "name", "name", 46);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 46);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved",
                  "resolved", 46);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1363742654U), "fileTimeLo",
                  "fileTimeLo", 46);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 46);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 46);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 46);
  sf_mex_assign(&c2_rhs46, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs46, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs46), "rhs", "rhs",
                  46);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs46), "lhs", "lhs",
                  46);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 47);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "coder.internal.isBuiltInNumeric"), "name", "name", 47);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 47);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                  "resolved", "resolved", 47);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1395960656U), "fileTimeLo",
                  "fileTimeLo", 47);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 47);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 47);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 47);
  sf_mex_assign(&c2_rhs47, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs47, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs47), "rhs", "rhs",
                  47);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs47), "lhs", "lhs",
                  47);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context",
                  "context", 48);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_scalar_floor"), "name",
                  "name", 48);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 48);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                  "resolved", "resolved", 48);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1286851126U), "fileTimeLo",
                  "fileTimeLo", 48);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 48);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 48);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 48);
  sf_mex_assign(&c2_rhs48, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs48, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs48), "rhs", "rhs",
                  48);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs48), "lhs", "lhs",
                  48);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(""), "context", "context", 49);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("logical"), "name", "name", 49);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 49);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/logical.m"),
                  "resolved", "resolved", 49);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542782U), "fileTimeLo",
                  "fileTimeLo", 49);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 49);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 49);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 49);
  sf_mex_assign(&c2_rhs49, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs49, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs49), "rhs", "rhs",
                  49);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs49), "lhs", "lhs",
                  49);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/logical.m"),
                  "context", "context", 50);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("ne"), "name", "name", 50);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 50);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "resolved", "resolved", 50);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1397289824U), "fileTimeLo",
                  "fileTimeLo", 50);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 50);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 50);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 50);
  sf_mex_assign(&c2_rhs50, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs50, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs50), "rhs", "rhs",
                  50);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs50), "lhs", "lhs",
                  50);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 51);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_scalexp_compatible"),
                  "name", "name", 51);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 51);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                  "resolved", "resolved", 51);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1286851196U), "fileTimeLo",
                  "fileTimeLo", 51);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 51);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 51);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 51);
  sf_mex_assign(&c2_rhs51, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs51, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs51), "rhs", "rhs",
                  51);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs51), "lhs", "lhs",
                  51);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 52);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isfi"), "name", "name", 52);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 52);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 52);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542758U), "fileTimeLo",
                  "fileTimeLo", 52);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 52);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 52);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 52);
  sf_mex_assign(&c2_rhs52, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs52, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs52), "rhs", "rhs",
                  52);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs52), "lhs", "lhs",
                  52);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 53);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("get"), "name", "name", 53);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fimath"),
                  "dominantType", "dominantType", 53);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fimath/get.m"),
                  "resolved", "resolved", 53);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1378328382U), "fileTimeLo",
                  "fileTimeLo", 53);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 53);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 53);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 53);
  sf_mex_assign(&c2_rhs53, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs53, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs53), "rhs", "rhs",
                  53);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs53), "lhs", "lhs",
                  53);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 54);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("strcmpi"), "name", "name", 54);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("char"), "dominantType",
                  "dominantType", 54);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/strcmpi.m"), "resolved",
                  "resolved", 54);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1327451510U), "fileTimeLo",
                  "fileTimeLo", 54);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 54);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 54);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 54);
  sf_mex_assign(&c2_rhs54, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs54, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs54), "rhs", "rhs",
                  54);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs54), "lhs", "lhs",
                  54);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 55);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isscaledtype"), "name", "name",
                  55);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 55);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/isscaledtype.m"),
                  "resolved", "resolved", 55);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542780U), "fileTimeLo",
                  "fileTimeLo", 55);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 55);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 55);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 55);
  sf_mex_assign(&c2_rhs55, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs55, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs55), "rhs", "rhs",
                  55);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs55), "lhs", "lhs",
                  55);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 56);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("isfi"), "name", "name", 56);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("double"), "dominantType",
                  "dominantType", 56);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved",
                  "resolved", 56);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542758U), "fileTimeLo",
                  "fileTimeLo", 56);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 56);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 56);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 56);
  sf_mex_assign(&c2_rhs56, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs56, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs56), "rhs", "rhs",
                  56);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs56), "lhs", "lhs",
                  56);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 57);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_type_relop_const"), "name",
                  "name", 57);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 57);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_type_relop_const.m"),
                  "resolved", "resolved", 57);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1346542774U), "fileTimeLo",
                  "fileTimeLo", 57);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 57);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 57);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 57);
  sf_mex_assign(&c2_rhs57, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs57, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs57), "rhs", "rhs",
                  57);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs57), "lhs", "lhs",
                  57);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_type_relop_const.m"),
                  "context", "context", 58);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("all"), "name", "name", 58);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("logical"), "dominantType",
                  "dominantType", 58);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "resolved",
                  "resolved", 58);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1372614814U), "fileTimeLo",
                  "fileTimeLo", 58);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 58);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 58);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 58);
  sf_mex_assign(&c2_rhs58, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs58, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs58), "rhs", "rhs",
                  58);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs58), "lhs", "lhs",
                  58);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/ne.m"),
                  "context", "context", 59);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("eml_make_same_complexity"),
                  "name", "name", 59);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut("embedded.fi"), "dominantType",
                  "dominantType", 59);
  sf_mex_addfield(*c2_info, c2_emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/@embedded/@fi/eml_make_same_complexity.m"),
                  "resolved", "resolved", 59);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(1289552046U), "fileTimeLo",
                  "fileTimeLo", 59);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "fileTimeHi",
                  "fileTimeHi", 59);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeLo",
                  "mFileTimeLo", 59);
  sf_mex_addfield(*c2_info, c2_b_emlrt_marshallOut(0U), "mFileTimeHi",
                  "mFileTimeHi", 59);
  sf_mex_assign(&c2_rhs59, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_assign(&c2_lhs59, sf_mex_createcellmatrix(0, 1), false);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_rhs59), "rhs", "rhs",
                  59);
  sf_mex_addfield(*c2_info, sf_mex_duplicatearraysafe(&c2_lhs59), "lhs", "lhs",
                  59);
  sf_mex_destroy(&c2_rhs0);
  sf_mex_destroy(&c2_lhs0);
  sf_mex_destroy(&c2_rhs1);
  sf_mex_destroy(&c2_lhs1);
  sf_mex_destroy(&c2_rhs2);
  sf_mex_destroy(&c2_lhs2);
  sf_mex_destroy(&c2_rhs3);
  sf_mex_destroy(&c2_lhs3);
  sf_mex_destroy(&c2_rhs4);
  sf_mex_destroy(&c2_lhs4);
  sf_mex_destroy(&c2_rhs5);
  sf_mex_destroy(&c2_lhs5);
  sf_mex_destroy(&c2_rhs6);
  sf_mex_destroy(&c2_lhs6);
  sf_mex_destroy(&c2_rhs7);
  sf_mex_destroy(&c2_lhs7);
  sf_mex_destroy(&c2_rhs8);
  sf_mex_destroy(&c2_lhs8);
  sf_mex_destroy(&c2_rhs9);
  sf_mex_destroy(&c2_lhs9);
  sf_mex_destroy(&c2_rhs10);
  sf_mex_destroy(&c2_lhs10);
  sf_mex_destroy(&c2_rhs11);
  sf_mex_destroy(&c2_lhs11);
  sf_mex_destroy(&c2_rhs12);
  sf_mex_destroy(&c2_lhs12);
  sf_mex_destroy(&c2_rhs13);
  sf_mex_destroy(&c2_lhs13);
  sf_mex_destroy(&c2_rhs14);
  sf_mex_destroy(&c2_lhs14);
  sf_mex_destroy(&c2_rhs15);
  sf_mex_destroy(&c2_lhs15);
  sf_mex_destroy(&c2_rhs16);
  sf_mex_destroy(&c2_lhs16);
  sf_mex_destroy(&c2_rhs17);
  sf_mex_destroy(&c2_lhs17);
  sf_mex_destroy(&c2_rhs18);
  sf_mex_destroy(&c2_lhs18);
  sf_mex_destroy(&c2_rhs19);
  sf_mex_destroy(&c2_lhs19);
  sf_mex_destroy(&c2_rhs20);
  sf_mex_destroy(&c2_lhs20);
  sf_mex_destroy(&c2_rhs21);
  sf_mex_destroy(&c2_lhs21);
  sf_mex_destroy(&c2_rhs22);
  sf_mex_destroy(&c2_lhs22);
  sf_mex_destroy(&c2_rhs23);
  sf_mex_destroy(&c2_lhs23);
  sf_mex_destroy(&c2_rhs24);
  sf_mex_destroy(&c2_lhs24);
  sf_mex_destroy(&c2_rhs25);
  sf_mex_destroy(&c2_lhs25);
  sf_mex_destroy(&c2_rhs26);
  sf_mex_destroy(&c2_lhs26);
  sf_mex_destroy(&c2_rhs27);
  sf_mex_destroy(&c2_lhs27);
  sf_mex_destroy(&c2_rhs28);
  sf_mex_destroy(&c2_lhs28);
  sf_mex_destroy(&c2_rhs29);
  sf_mex_destroy(&c2_lhs29);
  sf_mex_destroy(&c2_rhs30);
  sf_mex_destroy(&c2_lhs30);
  sf_mex_destroy(&c2_rhs31);
  sf_mex_destroy(&c2_lhs31);
  sf_mex_destroy(&c2_rhs32);
  sf_mex_destroy(&c2_lhs32);
  sf_mex_destroy(&c2_rhs33);
  sf_mex_destroy(&c2_lhs33);
  sf_mex_destroy(&c2_rhs34);
  sf_mex_destroy(&c2_lhs34);
  sf_mex_destroy(&c2_rhs35);
  sf_mex_destroy(&c2_lhs35);
  sf_mex_destroy(&c2_rhs36);
  sf_mex_destroy(&c2_lhs36);
  sf_mex_destroy(&c2_rhs37);
  sf_mex_destroy(&c2_lhs37);
  sf_mex_destroy(&c2_rhs38);
  sf_mex_destroy(&c2_lhs38);
  sf_mex_destroy(&c2_rhs39);
  sf_mex_destroy(&c2_lhs39);
  sf_mex_destroy(&c2_rhs40);
  sf_mex_destroy(&c2_lhs40);
  sf_mex_destroy(&c2_rhs41);
  sf_mex_destroy(&c2_lhs41);
  sf_mex_destroy(&c2_rhs42);
  sf_mex_destroy(&c2_lhs42);
  sf_mex_destroy(&c2_rhs43);
  sf_mex_destroy(&c2_lhs43);
  sf_mex_destroy(&c2_rhs44);
  sf_mex_destroy(&c2_lhs44);
  sf_mex_destroy(&c2_rhs45);
  sf_mex_destroy(&c2_lhs45);
  sf_mex_destroy(&c2_rhs46);
  sf_mex_destroy(&c2_lhs46);
  sf_mex_destroy(&c2_rhs47);
  sf_mex_destroy(&c2_lhs47);
  sf_mex_destroy(&c2_rhs48);
  sf_mex_destroy(&c2_lhs48);
  sf_mex_destroy(&c2_rhs49);
  sf_mex_destroy(&c2_lhs49);
  sf_mex_destroy(&c2_rhs50);
  sf_mex_destroy(&c2_lhs50);
  sf_mex_destroy(&c2_rhs51);
  sf_mex_destroy(&c2_lhs51);
  sf_mex_destroy(&c2_rhs52);
  sf_mex_destroy(&c2_lhs52);
  sf_mex_destroy(&c2_rhs53);
  sf_mex_destroy(&c2_lhs53);
  sf_mex_destroy(&c2_rhs54);
  sf_mex_destroy(&c2_lhs54);
  sf_mex_destroy(&c2_rhs55);
  sf_mex_destroy(&c2_lhs55);
  sf_mex_destroy(&c2_rhs56);
  sf_mex_destroy(&c2_lhs56);
  sf_mex_destroy(&c2_rhs57);
  sf_mex_destroy(&c2_lhs57);
  sf_mex_destroy(&c2_rhs58);
  sf_mex_destroy(&c2_lhs58);
  sf_mex_destroy(&c2_rhs59);
  sf_mex_destroy(&c2_lhs59);
}

static const mxArray *c2_emlrt_marshallOut(const char * c2_u)
{
  const mxArray *c2_y = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 15, 0U, 0U, 0U, 2, 1, strlen
    (c2_u)), false);
  return c2_y;
}

static const mxArray *c2_b_emlrt_marshallOut(const uint32_T c2_u)
{
  const mxArray *c2_y = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 7, 0U, 0U, 0U, 0), false);
  return c2_y;
}

static boolean_T c2_sdi_gen(SFc2_ADXL345_readInstanceStruct *chartInstance,
  uint16_T c2_word, uint8_T c2_cnt)
{
  boolean_T c2_ser_data;
  uint32_T c2_debug_family_var_map[6];
  real_T c2_nargin = 2.0;
  real_T c2_nargout = 1.0;
  const mxArray *c2_T = NULL;
  const mxArray *c2_F = NULL;
  const mxArray *c2_val = NULL;
  const mxArray *c2_unusedU2 = NULL;
  const mxArray *c2_unusedU3 = NULL;
  const mxArray *c2_isfimathlocal = NULL;
  int8_T c2_i66;
  int8_T c2_i67;
  int8_T c2_i68;
  int32_T c2_i69;
  int8_T c2_i70;
  int8_T c2_i71;
  int8_T c2_i72;
  int32_T c2_i73;
  int8_T c2_i74;
  real_T c2_d8;
  int8_T c2_i75;
  uint16_T c2_a;
  uint16_T c2_a1;
  uint8_T c2_slice_temp;
  uint8_T c2_c;
  const mxArray *c2_b_T = NULL;
  const mxArray *c2_b_F = NULL;
  const mxArray *c2_b_val = NULL;
  const mxArray *c2_b_unusedU2 = NULL;
  const mxArray *c2_b_unusedU3 = NULL;
  const mxArray *c2_b_isfimathlocal = NULL;
  int8_T c2_i76;
  int8_T c2_i77;
  int8_T c2_i78;
  int32_T c2_i79;
  int8_T c2_i80;
  int8_T c2_i81;
  int8_T c2_i82;
  int32_T c2_i83;
  int8_T c2_i84;
  real_T c2_d9;
  int8_T c2_i85;
  uint16_T c2_b_a;
  uint16_T c2_b_a1;
  uint8_T c2_b_slice_temp;
  uint8_T c2_b_c;
  const mxArray *c2_c_T = NULL;
  const mxArray *c2_c_F = NULL;
  const mxArray *c2_c_val = NULL;
  const mxArray *c2_c_unusedU2 = NULL;
  const mxArray *c2_c_unusedU3 = NULL;
  const mxArray *c2_c_isfimathlocal = NULL;
  int8_T c2_i86;
  int8_T c2_i87;
  int8_T c2_i88;
  int32_T c2_i89;
  int8_T c2_i90;
  int8_T c2_i91;
  int8_T c2_i92;
  int32_T c2_i93;
  int8_T c2_i94;
  real_T c2_d10;
  int8_T c2_i95;
  uint16_T c2_c_a;
  uint16_T c2_c_a1;
  uint8_T c2_c_slice_temp;
  uint8_T c2_c_c;
  const mxArray *c2_d_T = NULL;
  const mxArray *c2_d_F = NULL;
  const mxArray *c2_d_val = NULL;
  const mxArray *c2_d_unusedU2 = NULL;
  const mxArray *c2_d_unusedU3 = NULL;
  const mxArray *c2_d_isfimathlocal = NULL;
  int8_T c2_i96;
  int8_T c2_i97;
  int8_T c2_i98;
  int32_T c2_i99;
  int8_T c2_i100;
  int8_T c2_i101;
  int8_T c2_i102;
  int32_T c2_i103;
  int8_T c2_i104;
  real_T c2_d11;
  int8_T c2_i105;
  uint16_T c2_d_a;
  uint16_T c2_d_a1;
  uint8_T c2_d_slice_temp;
  uint8_T c2_d_c;
  const mxArray *c2_e_T = NULL;
  const mxArray *c2_e_F = NULL;
  const mxArray *c2_e_val = NULL;
  const mxArray *c2_e_unusedU2 = NULL;
  const mxArray *c2_e_unusedU3 = NULL;
  const mxArray *c2_e_isfimathlocal = NULL;
  int8_T c2_i106;
  int8_T c2_i107;
  int8_T c2_i108;
  int32_T c2_i109;
  int8_T c2_i110;
  int8_T c2_i111;
  int8_T c2_i112;
  int32_T c2_i113;
  int8_T c2_i114;
  real_T c2_d12;
  int8_T c2_i115;
  uint16_T c2_e_a;
  uint16_T c2_e_a1;
  uint8_T c2_e_slice_temp;
  uint8_T c2_e_c;
  const mxArray *c2_f_T = NULL;
  const mxArray *c2_f_F = NULL;
  const mxArray *c2_f_val = NULL;
  const mxArray *c2_f_unusedU2 = NULL;
  const mxArray *c2_f_unusedU3 = NULL;
  const mxArray *c2_f_isfimathlocal = NULL;
  int8_T c2_i116;
  int8_T c2_i117;
  int8_T c2_i118;
  int32_T c2_i119;
  int8_T c2_i120;
  int8_T c2_i121;
  int8_T c2_i122;
  int32_T c2_i123;
  int8_T c2_i124;
  real_T c2_d13;
  int8_T c2_i125;
  uint16_T c2_f_a;
  uint16_T c2_f_a1;
  uint8_T c2_f_slice_temp;
  uint8_T c2_f_c;
  const mxArray *c2_g_T = NULL;
  const mxArray *c2_g_F = NULL;
  const mxArray *c2_g_val = NULL;
  const mxArray *c2_g_unusedU2 = NULL;
  const mxArray *c2_g_unusedU3 = NULL;
  const mxArray *c2_g_isfimathlocal = NULL;
  int8_T c2_i126;
  int8_T c2_i127;
  int8_T c2_i128;
  int32_T c2_i129;
  int8_T c2_i130;
  int8_T c2_i131;
  int8_T c2_i132;
  int32_T c2_i133;
  int8_T c2_i134;
  real_T c2_d14;
  int8_T c2_i135;
  uint16_T c2_g_a;
  uint16_T c2_g_a1;
  uint8_T c2_g_slice_temp;
  uint8_T c2_g_c;
  const mxArray *c2_h_T = NULL;
  const mxArray *c2_h_F = NULL;
  const mxArray *c2_h_val = NULL;
  const mxArray *c2_h_unusedU2 = NULL;
  const mxArray *c2_h_unusedU3 = NULL;
  const mxArray *c2_h_isfimathlocal = NULL;
  int8_T c2_i136;
  int8_T c2_i137;
  int8_T c2_i138;
  int32_T c2_i139;
  int8_T c2_i140;
  int8_T c2_i141;
  int8_T c2_i142;
  int32_T c2_i143;
  int8_T c2_i144;
  real_T c2_d15;
  int8_T c2_i145;
  uint16_T c2_h_a;
  uint16_T c2_h_a1;
  uint8_T c2_h_slice_temp;
  uint8_T c2_h_c;
  const mxArray *c2_i_T = NULL;
  const mxArray *c2_i_F = NULL;
  const mxArray *c2_i_val = NULL;
  const mxArray *c2_i_unusedU2 = NULL;
  const mxArray *c2_i_unusedU3 = NULL;
  const mxArray *c2_i_isfimathlocal = NULL;
  int8_T c2_i146;
  int8_T c2_i147;
  int8_T c2_i148;
  int32_T c2_i149;
  int8_T c2_i150;
  int8_T c2_i151;
  int8_T c2_i152;
  int32_T c2_i153;
  int8_T c2_i154;
  real_T c2_d16;
  int8_T c2_i155;
  uint16_T c2_i_a;
  uint16_T c2_i_a1;
  uint8_T c2_i_slice_temp;
  uint8_T c2_i_c;
  const mxArray *c2_j_T = NULL;
  const mxArray *c2_j_F = NULL;
  const mxArray *c2_j_val = NULL;
  const mxArray *c2_j_unusedU2 = NULL;
  const mxArray *c2_j_unusedU3 = NULL;
  const mxArray *c2_j_isfimathlocal = NULL;
  int8_T c2_i156;
  int8_T c2_i157;
  int8_T c2_i158;
  int32_T c2_i159;
  int8_T c2_i160;
  int8_T c2_i161;
  int8_T c2_i162;
  int32_T c2_i163;
  int8_T c2_i164;
  real_T c2_d17;
  int8_T c2_i165;
  uint16_T c2_j_a;
  uint16_T c2_j_a1;
  uint8_T c2_j_slice_temp;
  uint8_T c2_j_c;
  const mxArray *c2_k_T = NULL;
  const mxArray *c2_k_F = NULL;
  const mxArray *c2_k_val = NULL;
  const mxArray *c2_k_unusedU2 = NULL;
  const mxArray *c2_k_unusedU3 = NULL;
  const mxArray *c2_k_isfimathlocal = NULL;
  int8_T c2_i166;
  int8_T c2_i167;
  int8_T c2_i168;
  int32_T c2_i169;
  int8_T c2_i170;
  int8_T c2_i171;
  int8_T c2_i172;
  int32_T c2_i173;
  int8_T c2_i174;
  real_T c2_d18;
  int8_T c2_i175;
  uint16_T c2_k_a;
  uint16_T c2_k_a1;
  uint8_T c2_k_slice_temp;
  uint8_T c2_k_c;
  const mxArray *c2_l_T = NULL;
  const mxArray *c2_l_F = NULL;
  const mxArray *c2_l_val = NULL;
  const mxArray *c2_l_unusedU2 = NULL;
  const mxArray *c2_l_unusedU3 = NULL;
  const mxArray *c2_l_isfimathlocal = NULL;
  int8_T c2_i176;
  int8_T c2_i177;
  int8_T c2_i178;
  int32_T c2_i179;
  int8_T c2_i180;
  int8_T c2_i181;
  int8_T c2_i182;
  int32_T c2_i183;
  int8_T c2_i184;
  real_T c2_d19;
  int8_T c2_i185;
  uint16_T c2_l_a;
  uint16_T c2_l_a1;
  uint8_T c2_l_slice_temp;
  uint8_T c2_l_c;
  const mxArray *c2_m_T = NULL;
  const mxArray *c2_m_F = NULL;
  const mxArray *c2_m_val = NULL;
  const mxArray *c2_m_unusedU2 = NULL;
  const mxArray *c2_m_unusedU3 = NULL;
  const mxArray *c2_m_isfimathlocal = NULL;
  int8_T c2_i186;
  int8_T c2_i187;
  int8_T c2_i188;
  int32_T c2_i189;
  int8_T c2_i190;
  int8_T c2_i191;
  int8_T c2_i192;
  int32_T c2_i193;
  int8_T c2_i194;
  real_T c2_d20;
  int8_T c2_i195;
  uint16_T c2_m_a;
  uint16_T c2_m_a1;
  uint8_T c2_m_slice_temp;
  uint8_T c2_m_c;
  const mxArray *c2_n_T = NULL;
  const mxArray *c2_n_F = NULL;
  const mxArray *c2_n_val = NULL;
  const mxArray *c2_n_unusedU2 = NULL;
  const mxArray *c2_n_unusedU3 = NULL;
  const mxArray *c2_n_isfimathlocal = NULL;
  int8_T c2_i196;
  int8_T c2_i197;
  int8_T c2_i198;
  int32_T c2_i199;
  int8_T c2_i200;
  int8_T c2_i201;
  int8_T c2_i202;
  int32_T c2_i203;
  int8_T c2_i204;
  real_T c2_d21;
  int8_T c2_i205;
  uint16_T c2_n_a;
  uint16_T c2_n_a1;
  uint8_T c2_n_slice_temp;
  uint8_T c2_n_c;
  _SFD_SET_DATA_VALUE_PTR(9U, &c2_ser_data);
  _SFD_SET_DATA_VALUE_PTR(8U, &c2_cnt);
  _SFD_SET_DATA_VALUE_PTR(7U, &c2_word);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c2_debug_family_names,
    c2_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargin, 0U, c2_e_sf_marshallOut,
    c2_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargout, 1U, c2_e_sf_marshallOut,
    c2_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_word, 2U, c2_d_sf_marshallOut,
    c2_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_cnt, 3U, c2_c_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_ser_data, 4U, c2_b_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&chartInstance->c2_ser_data_int, 5U,
    c2_sf_marshallOut, c2_sf_marshallIn);
  CV_EML_FCN(6, 0);
  _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 4);
  _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 5);
  if (CV_EML_IF(6, 1, 0, !chartInstance->c2_ser_data_int_not_empty)) {
    _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 6);
    chartInstance->c2_ser_data_int = false;
    chartInstance->c2_ser_data_int_not_empty = true;
  }

  _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 10);
  sf_mex_destroy(&c2_T);
  sf_mex_destroy(&c2_F);
  sf_mex_destroy(&c2_val);
  sf_mex_destroy(&c2_unusedU2);
  sf_mex_destroy(&c2_unusedU3);
  sf_mex_destroy(&c2_isfimathlocal);
  c2_i66 = (int8_T)c2_cnt;
  c2_i67 = (int8_T)c2_cnt;
  if ((int8_T)(c2_i67 & 32) != 0) {
    c2_i68 = (int8_T)(c2_i67 | -32);
  } else {
    c2_i68 = (int8_T)(c2_i67 & 31);
  }

  c2_i69 = 1 - c2_i68;
  if (c2_i69 > 31) {
    c2_i69 = 31;
  } else {
    if (c2_i69 < -32) {
      c2_i69 = -32;
    }
  }

  c2_i70 = (int8_T)c2_cnt;
  c2_i71 = (int8_T)c2_cnt;
  if ((int8_T)(c2_i71 & 32) != 0) {
    c2_i72 = (int8_T)(c2_i71 | -32);
  } else {
    c2_i72 = (int8_T)(c2_i71 & 31);
  }

  c2_i73 = c2_i72 - 1;
  if (c2_i73 > 31) {
    c2_i73 = 31;
  } else {
    if (c2_i73 < -32) {
      c2_i73 = -32;
    }
  }

  if ((int8_T)(c2_i66 & 32) != 0) {
    c2_i74 = (int8_T)(c2_i66 | -32);
  } else {
    c2_i74 = (int8_T)(c2_i66 & 31);
  }

  if (c2_i74 < 1) {
    if ((int8_T)c2_i69 <= 1) {
      c2_d8 = 1.0;
    } else {
      c2_d8 = 0.0;
    }
  } else {
    if ((int8_T)(c2_i70 & 32) != 0) {
      c2_i75 = (int8_T)(c2_i70 | -32);
    } else {
      c2_i75 = (int8_T)(c2_i70 & 31);
    }

    if (c2_i75 > 1) {
      if ((int8_T)c2_i73 <= 1) {
        c2_d8 = 3.0;
      } else {
        c2_d8 = 0.0;
      }
    } else {
      c2_d8 = 2.0;
    }
  }

  if (CV_EML_IF(6, 1, 1, CV_RELATIONAL_EVAL(4U, 6U, 0, c2_d8, 0.0, -2, 0U,
        (int32_T)c2_eq(chartInstance, c2_cnt, 1U)))) {
    _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 11);
    c2_a = c2_word;
    c2_a1 = c2_a;
    c2_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)c2_a1 >> 13) & 1U)
      & 1U);
    c2_c = c2_slice_temp;
    chartInstance->c2_ser_data_int = c2_logical(chartInstance, c2_c);
  } else {
    _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 12);
    sf_mex_destroy(&c2_b_T);
    sf_mex_destroy(&c2_b_F);
    sf_mex_destroy(&c2_b_val);
    sf_mex_destroy(&c2_b_unusedU2);
    sf_mex_destroy(&c2_b_unusedU3);
    sf_mex_destroy(&c2_b_isfimathlocal);
    c2_i76 = (int8_T)c2_cnt;
    c2_i77 = (int8_T)c2_cnt;
    if ((int8_T)(c2_i77 & 32) != 0) {
      c2_i78 = (int8_T)(c2_i77 | -32);
    } else {
      c2_i78 = (int8_T)(c2_i77 & 31);
    }

    c2_i79 = 2 - c2_i78;
    if (c2_i79 > 31) {
      c2_i79 = 31;
    } else {
      if (c2_i79 < -32) {
        c2_i79 = -32;
      }
    }

    c2_i80 = (int8_T)c2_cnt;
    c2_i81 = (int8_T)c2_cnt;
    if ((int8_T)(c2_i81 & 32) != 0) {
      c2_i82 = (int8_T)(c2_i81 | -32);
    } else {
      c2_i82 = (int8_T)(c2_i81 & 31);
    }

    c2_i83 = c2_i82 - 2;
    if (c2_i83 > 31) {
      c2_i83 = 31;
    } else {
      if (c2_i83 < -32) {
        c2_i83 = -32;
      }
    }

    if ((int8_T)(c2_i76 & 32) != 0) {
      c2_i84 = (int8_T)(c2_i76 | -32);
    } else {
      c2_i84 = (int8_T)(c2_i76 & 31);
    }

    if (c2_i84 < 2) {
      if ((int8_T)c2_i79 <= 1) {
        c2_d9 = 1.0;
      } else {
        c2_d9 = 0.0;
      }
    } else {
      if ((int8_T)(c2_i80 & 32) != 0) {
        c2_i85 = (int8_T)(c2_i80 | -32);
      } else {
        c2_i85 = (int8_T)(c2_i80 & 31);
      }

      if (c2_i85 > 2) {
        if ((int8_T)c2_i83 <= 1) {
          c2_d9 = 3.0;
        } else {
          c2_d9 = 0.0;
        }
      } else {
        c2_d9 = 2.0;
      }
    }

    if (CV_EML_IF(6, 1, 2, CV_RELATIONAL_EVAL(4U, 6U, 1, c2_d9, 0.0, -2, 0U,
          (int32_T)c2_eq(chartInstance, c2_cnt, 2U)))) {
      _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 13);
      c2_b_a = c2_word;
      c2_b_a1 = c2_b_a;
      c2_b_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)c2_b_a1 >> 12)
        & 1U) & 1U);
      c2_b_c = c2_b_slice_temp;
      chartInstance->c2_ser_data_int = c2_logical(chartInstance, c2_b_c);
    } else {
      _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 14);
      sf_mex_destroy(&c2_c_T);
      sf_mex_destroy(&c2_c_F);
      sf_mex_destroy(&c2_c_val);
      sf_mex_destroy(&c2_c_unusedU2);
      sf_mex_destroy(&c2_c_unusedU3);
      sf_mex_destroy(&c2_c_isfimathlocal);
      c2_i86 = (int8_T)c2_cnt;
      c2_i87 = (int8_T)c2_cnt;
      if ((int8_T)(c2_i87 & 32) != 0) {
        c2_i88 = (int8_T)(c2_i87 | -32);
      } else {
        c2_i88 = (int8_T)(c2_i87 & 31);
      }

      c2_i89 = 3 - c2_i88;
      if (c2_i89 > 31) {
        c2_i89 = 31;
      } else {
        if (c2_i89 < -32) {
          c2_i89 = -32;
        }
      }

      c2_i90 = (int8_T)c2_cnt;
      c2_i91 = (int8_T)c2_cnt;
      if ((int8_T)(c2_i91 & 32) != 0) {
        c2_i92 = (int8_T)(c2_i91 | -32);
      } else {
        c2_i92 = (int8_T)(c2_i91 & 31);
      }

      c2_i93 = c2_i92 - 3;
      if (c2_i93 > 31) {
        c2_i93 = 31;
      } else {
        if (c2_i93 < -32) {
          c2_i93 = -32;
        }
      }

      if ((int8_T)(c2_i86 & 32) != 0) {
        c2_i94 = (int8_T)(c2_i86 | -32);
      } else {
        c2_i94 = (int8_T)(c2_i86 & 31);
      }

      if (c2_i94 < 3) {
        if ((int8_T)c2_i89 <= 1) {
          c2_d10 = 1.0;
        } else {
          c2_d10 = 0.0;
        }
      } else {
        if ((int8_T)(c2_i90 & 32) != 0) {
          c2_i95 = (int8_T)(c2_i90 | -32);
        } else {
          c2_i95 = (int8_T)(c2_i90 & 31);
        }

        if (c2_i95 > 3) {
          if ((int8_T)c2_i93 <= 1) {
            c2_d10 = 3.0;
          } else {
            c2_d10 = 0.0;
          }
        } else {
          c2_d10 = 2.0;
        }
      }

      if (CV_EML_IF(6, 1, 3, CV_RELATIONAL_EVAL(4U, 6U, 2, c2_d10, 0.0, -2, 0U,
            (int32_T)c2_eq(chartInstance, c2_cnt, 3U)))) {
        _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 15);
        c2_c_a = c2_word;
        c2_c_a1 = c2_c_a;
        c2_c_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)c2_c_a1 >> 11)
          & 1U) & 1U);
        c2_c_c = c2_c_slice_temp;
        chartInstance->c2_ser_data_int = c2_logical(chartInstance, c2_c_c);
      } else {
        _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 16);
        sf_mex_destroy(&c2_d_T);
        sf_mex_destroy(&c2_d_F);
        sf_mex_destroy(&c2_d_val);
        sf_mex_destroy(&c2_d_unusedU2);
        sf_mex_destroy(&c2_d_unusedU3);
        sf_mex_destroy(&c2_d_isfimathlocal);
        c2_i96 = (int8_T)c2_cnt;
        c2_i97 = (int8_T)c2_cnt;
        if ((int8_T)(c2_i97 & 32) != 0) {
          c2_i98 = (int8_T)(c2_i97 | -32);
        } else {
          c2_i98 = (int8_T)(c2_i97 & 31);
        }

        c2_i99 = 4 - c2_i98;
        if (c2_i99 > 31) {
          c2_i99 = 31;
        } else {
          if (c2_i99 < -32) {
            c2_i99 = -32;
          }
        }

        c2_i100 = (int8_T)c2_cnt;
        c2_i101 = (int8_T)c2_cnt;
        if ((int8_T)(c2_i101 & 32) != 0) {
          c2_i102 = (int8_T)(c2_i101 | -32);
        } else {
          c2_i102 = (int8_T)(c2_i101 & 31);
        }

        c2_i103 = c2_i102 - 4;
        if (c2_i103 > 31) {
          c2_i103 = 31;
        } else {
          if (c2_i103 < -32) {
            c2_i103 = -32;
          }
        }

        if ((int8_T)(c2_i96 & 32) != 0) {
          c2_i104 = (int8_T)(c2_i96 | -32);
        } else {
          c2_i104 = (int8_T)(c2_i96 & 31);
        }

        if (c2_i104 < 4) {
          if ((int8_T)c2_i99 <= 1) {
            c2_d11 = 1.0;
          } else {
            c2_d11 = 0.0;
          }
        } else {
          if ((int8_T)(c2_i100 & 32) != 0) {
            c2_i105 = (int8_T)(c2_i100 | -32);
          } else {
            c2_i105 = (int8_T)(c2_i100 & 31);
          }

          if (c2_i105 > 4) {
            if ((int8_T)c2_i103 <= 1) {
              c2_d11 = 3.0;
            } else {
              c2_d11 = 0.0;
            }
          } else {
            c2_d11 = 2.0;
          }
        }

        if (CV_EML_IF(6, 1, 4, CV_RELATIONAL_EVAL(4U, 6U, 3, c2_d11, 0.0, -2, 0U,
              (int32_T)c2_eq(chartInstance, c2_cnt, 4U)))) {
          _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 17);
          c2_d_a = c2_word;
          c2_d_a1 = c2_d_a;
          c2_d_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)c2_d_a1 >>
            10) & 1U) & 1U);
          c2_d_c = c2_d_slice_temp;
          chartInstance->c2_ser_data_int = c2_logical(chartInstance, c2_d_c);
        } else {
          _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 18);
          sf_mex_destroy(&c2_e_T);
          sf_mex_destroy(&c2_e_F);
          sf_mex_destroy(&c2_e_val);
          sf_mex_destroy(&c2_e_unusedU2);
          sf_mex_destroy(&c2_e_unusedU3);
          sf_mex_destroy(&c2_e_isfimathlocal);
          c2_i106 = (int8_T)c2_cnt;
          c2_i107 = (int8_T)c2_cnt;
          if ((int8_T)(c2_i107 & 32) != 0) {
            c2_i108 = (int8_T)(c2_i107 | -32);
          } else {
            c2_i108 = (int8_T)(c2_i107 & 31);
          }

          c2_i109 = 5 - c2_i108;
          if (c2_i109 > 31) {
            c2_i109 = 31;
          } else {
            if (c2_i109 < -32) {
              c2_i109 = -32;
            }
          }

          c2_i110 = (int8_T)c2_cnt;
          c2_i111 = (int8_T)c2_cnt;
          if ((int8_T)(c2_i111 & 32) != 0) {
            c2_i112 = (int8_T)(c2_i111 | -32);
          } else {
            c2_i112 = (int8_T)(c2_i111 & 31);
          }

          c2_i113 = c2_i112 - 5;
          if (c2_i113 > 31) {
            c2_i113 = 31;
          } else {
            if (c2_i113 < -32) {
              c2_i113 = -32;
            }
          }

          if ((int8_T)(c2_i106 & 32) != 0) {
            c2_i114 = (int8_T)(c2_i106 | -32);
          } else {
            c2_i114 = (int8_T)(c2_i106 & 31);
          }

          if (c2_i114 < 5) {
            if ((int8_T)c2_i109 <= 1) {
              c2_d12 = 1.0;
            } else {
              c2_d12 = 0.0;
            }
          } else {
            if ((int8_T)(c2_i110 & 32) != 0) {
              c2_i115 = (int8_T)(c2_i110 | -32);
            } else {
              c2_i115 = (int8_T)(c2_i110 & 31);
            }

            if (c2_i115 > 5) {
              if ((int8_T)c2_i113 <= 1) {
                c2_d12 = 3.0;
              } else {
                c2_d12 = 0.0;
              }
            } else {
              c2_d12 = 2.0;
            }
          }

          if (CV_EML_IF(6, 1, 5, CV_RELATIONAL_EVAL(4U, 6U, 4, c2_d12, 0.0, -2,
                0U, (int32_T)c2_eq(chartInstance, c2_cnt, 5U)))) {
            _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 19);
            c2_e_a = c2_word;
            c2_e_a1 = c2_e_a;
            c2_e_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)c2_e_a1 >>
              9) & 1U) & 1U);
            c2_e_c = c2_e_slice_temp;
            chartInstance->c2_ser_data_int = c2_logical(chartInstance, c2_e_c);
          } else {
            _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 20);
            sf_mex_destroy(&c2_f_T);
            sf_mex_destroy(&c2_f_F);
            sf_mex_destroy(&c2_f_val);
            sf_mex_destroy(&c2_f_unusedU2);
            sf_mex_destroy(&c2_f_unusedU3);
            sf_mex_destroy(&c2_f_isfimathlocal);
            c2_i116 = (int8_T)c2_cnt;
            c2_i117 = (int8_T)c2_cnt;
            if ((int8_T)(c2_i117 & 32) != 0) {
              c2_i118 = (int8_T)(c2_i117 | -32);
            } else {
              c2_i118 = (int8_T)(c2_i117 & 31);
            }

            c2_i119 = 6 - c2_i118;
            if (c2_i119 > 31) {
              c2_i119 = 31;
            } else {
              if (c2_i119 < -32) {
                c2_i119 = -32;
              }
            }

            c2_i120 = (int8_T)c2_cnt;
            c2_i121 = (int8_T)c2_cnt;
            if ((int8_T)(c2_i121 & 32) != 0) {
              c2_i122 = (int8_T)(c2_i121 | -32);
            } else {
              c2_i122 = (int8_T)(c2_i121 & 31);
            }

            c2_i123 = c2_i122 - 6;
            if (c2_i123 > 31) {
              c2_i123 = 31;
            } else {
              if (c2_i123 < -32) {
                c2_i123 = -32;
              }
            }

            if ((int8_T)(c2_i116 & 32) != 0) {
              c2_i124 = (int8_T)(c2_i116 | -32);
            } else {
              c2_i124 = (int8_T)(c2_i116 & 31);
            }

            if (c2_i124 < 6) {
              if ((int8_T)c2_i119 <= 1) {
                c2_d13 = 1.0;
              } else {
                c2_d13 = 0.0;
              }
            } else {
              if ((int8_T)(c2_i120 & 32) != 0) {
                c2_i125 = (int8_T)(c2_i120 | -32);
              } else {
                c2_i125 = (int8_T)(c2_i120 & 31);
              }

              if (c2_i125 > 6) {
                if ((int8_T)c2_i123 <= 1) {
                  c2_d13 = 3.0;
                } else {
                  c2_d13 = 0.0;
                }
              } else {
                c2_d13 = 2.0;
              }
            }

            if (CV_EML_IF(6, 1, 6, CV_RELATIONAL_EVAL(4U, 6U, 5, c2_d13, 0.0, -2,
                  0U, (int32_T)c2_eq(chartInstance, c2_cnt, 6U)))) {
              _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 21);
              c2_f_a = c2_word;
              c2_f_a1 = c2_f_a;
              c2_f_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)c2_f_a1
                >> 8) & 1U) & 1U);
              c2_f_c = c2_f_slice_temp;
              chartInstance->c2_ser_data_int = c2_logical(chartInstance, c2_f_c);
            } else {
              _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 22);
              sf_mex_destroy(&c2_g_T);
              sf_mex_destroy(&c2_g_F);
              sf_mex_destroy(&c2_g_val);
              sf_mex_destroy(&c2_g_unusedU2);
              sf_mex_destroy(&c2_g_unusedU3);
              sf_mex_destroy(&c2_g_isfimathlocal);
              c2_i126 = (int8_T)c2_cnt;
              c2_i127 = (int8_T)c2_cnt;
              if ((int8_T)(c2_i127 & 32) != 0) {
                c2_i128 = (int8_T)(c2_i127 | -32);
              } else {
                c2_i128 = (int8_T)(c2_i127 & 31);
              }

              c2_i129 = 7 - c2_i128;
              if (c2_i129 > 31) {
                c2_i129 = 31;
              } else {
                if (c2_i129 < -32) {
                  c2_i129 = -32;
                }
              }

              c2_i130 = (int8_T)c2_cnt;
              c2_i131 = (int8_T)c2_cnt;
              if ((int8_T)(c2_i131 & 32) != 0) {
                c2_i132 = (int8_T)(c2_i131 | -32);
              } else {
                c2_i132 = (int8_T)(c2_i131 & 31);
              }

              c2_i133 = c2_i132 - 7;
              if (c2_i133 > 31) {
                c2_i133 = 31;
              } else {
                if (c2_i133 < -32) {
                  c2_i133 = -32;
                }
              }

              if ((int8_T)(c2_i126 & 32) != 0) {
                c2_i134 = (int8_T)(c2_i126 | -32);
              } else {
                c2_i134 = (int8_T)(c2_i126 & 31);
              }

              if (c2_i134 < 7) {
                if ((int8_T)c2_i129 <= 1) {
                  c2_d14 = 1.0;
                } else {
                  c2_d14 = 0.0;
                }
              } else {
                if ((int8_T)(c2_i130 & 32) != 0) {
                  c2_i135 = (int8_T)(c2_i130 | -32);
                } else {
                  c2_i135 = (int8_T)(c2_i130 & 31);
                }

                if (c2_i135 > 7) {
                  if ((int8_T)c2_i133 <= 1) {
                    c2_d14 = 3.0;
                  } else {
                    c2_d14 = 0.0;
                  }
                } else {
                  c2_d14 = 2.0;
                }
              }

              if (CV_EML_IF(6, 1, 7, CV_RELATIONAL_EVAL(4U, 6U, 6, c2_d14, 0.0,
                    -2, 0U, (int32_T)c2_eq(chartInstance, c2_cnt, 7U)))) {
                _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 23);
                c2_g_a = c2_word;
                c2_g_a1 = c2_g_a;
                c2_g_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)
                  c2_g_a1 >> 7) & 1U) & 1U);
                c2_g_c = c2_g_slice_temp;
                chartInstance->c2_ser_data_int = c2_logical(chartInstance,
                  c2_g_c);
              } else {
                _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 24);
                sf_mex_destroy(&c2_h_T);
                sf_mex_destroy(&c2_h_F);
                sf_mex_destroy(&c2_h_val);
                sf_mex_destroy(&c2_h_unusedU2);
                sf_mex_destroy(&c2_h_unusedU3);
                sf_mex_destroy(&c2_h_isfimathlocal);
                c2_i136 = (int8_T)c2_cnt;
                c2_i137 = (int8_T)c2_cnt;
                if ((int8_T)(c2_i137 & 32) != 0) {
                  c2_i138 = (int8_T)(c2_i137 | -32);
                } else {
                  c2_i138 = (int8_T)(c2_i137 & 31);
                }

                c2_i139 = 8 - c2_i138;
                if (c2_i139 > 31) {
                  c2_i139 = 31;
                } else {
                  if (c2_i139 < -32) {
                    c2_i139 = -32;
                  }
                }

                c2_i140 = (int8_T)c2_cnt;
                c2_i141 = (int8_T)c2_cnt;
                if ((int8_T)(c2_i141 & 32) != 0) {
                  c2_i142 = (int8_T)(c2_i141 | -32);
                } else {
                  c2_i142 = (int8_T)(c2_i141 & 31);
                }

                c2_i143 = c2_i142 - 8;
                if (c2_i143 > 31) {
                  c2_i143 = 31;
                } else {
                  if (c2_i143 < -32) {
                    c2_i143 = -32;
                  }
                }

                if ((int8_T)(c2_i136 & 32) != 0) {
                  c2_i144 = (int8_T)(c2_i136 | -32);
                } else {
                  c2_i144 = (int8_T)(c2_i136 & 31);
                }

                if (c2_i144 < 8) {
                  if ((int8_T)c2_i139 <= 1) {
                    c2_d15 = 1.0;
                  } else {
                    c2_d15 = 0.0;
                  }
                } else {
                  if ((int8_T)(c2_i140 & 32) != 0) {
                    c2_i145 = (int8_T)(c2_i140 | -32);
                  } else {
                    c2_i145 = (int8_T)(c2_i140 & 31);
                  }

                  if (c2_i145 > 8) {
                    if ((int8_T)c2_i143 <= 1) {
                      c2_d15 = 3.0;
                    } else {
                      c2_d15 = 0.0;
                    }
                  } else {
                    c2_d15 = 2.0;
                  }
                }

                if (CV_EML_IF(6, 1, 8, CV_RELATIONAL_EVAL(4U, 6U, 7, c2_d15, 0.0,
                      -2, 0U, (int32_T)c2_eq(chartInstance, c2_cnt, 8U)))) {
                  _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 25);
                  c2_h_a = c2_word;
                  c2_h_a1 = c2_h_a;
                  c2_h_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)
                    c2_h_a1 >> 6) & 1U) & 1U);
                  c2_h_c = c2_h_slice_temp;
                  chartInstance->c2_ser_data_int = c2_logical(chartInstance,
                    c2_h_c);
                } else {
                  _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 26);
                  sf_mex_destroy(&c2_i_T);
                  sf_mex_destroy(&c2_i_F);
                  sf_mex_destroy(&c2_i_val);
                  sf_mex_destroy(&c2_i_unusedU2);
                  sf_mex_destroy(&c2_i_unusedU3);
                  sf_mex_destroy(&c2_i_isfimathlocal);
                  c2_i146 = (int8_T)c2_cnt;
                  c2_i147 = (int8_T)c2_cnt;
                  if ((int8_T)(c2_i147 & 32) != 0) {
                    c2_i148 = (int8_T)(c2_i147 | -32);
                  } else {
                    c2_i148 = (int8_T)(c2_i147 & 31);
                  }

                  c2_i149 = 9 - c2_i148;
                  if (c2_i149 > 31) {
                    c2_i149 = 31;
                  } else {
                    if (c2_i149 < -32) {
                      c2_i149 = -32;
                    }
                  }

                  c2_i150 = (int8_T)c2_cnt;
                  c2_i151 = (int8_T)c2_cnt;
                  if ((int8_T)(c2_i151 & 32) != 0) {
                    c2_i152 = (int8_T)(c2_i151 | -32);
                  } else {
                    c2_i152 = (int8_T)(c2_i151 & 31);
                  }

                  c2_i153 = c2_i152 - 9;
                  if (c2_i153 > 31) {
                    c2_i153 = 31;
                  } else {
                    if (c2_i153 < -32) {
                      c2_i153 = -32;
                    }
                  }

                  if ((int8_T)(c2_i146 & 32) != 0) {
                    c2_i154 = (int8_T)(c2_i146 | -32);
                  } else {
                    c2_i154 = (int8_T)(c2_i146 & 31);
                  }

                  if (c2_i154 < 9) {
                    if ((int8_T)c2_i149 <= 1) {
                      c2_d16 = 1.0;
                    } else {
                      c2_d16 = 0.0;
                    }
                  } else {
                    if ((int8_T)(c2_i150 & 32) != 0) {
                      c2_i155 = (int8_T)(c2_i150 | -32);
                    } else {
                      c2_i155 = (int8_T)(c2_i150 & 31);
                    }

                    if (c2_i155 > 9) {
                      if ((int8_T)c2_i153 <= 1) {
                        c2_d16 = 3.0;
                      } else {
                        c2_d16 = 0.0;
                      }
                    } else {
                      c2_d16 = 2.0;
                    }
                  }

                  if (CV_EML_IF(6, 1, 9, CV_RELATIONAL_EVAL(4U, 6U, 8, c2_d16,
                        0.0, -2, 0U, (int32_T)c2_eq(chartInstance, c2_cnt, 9U))))
                  {
                    _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 27);
                    c2_i_a = c2_word;
                    c2_i_a1 = c2_i_a;
                    c2_i_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)
                      c2_i_a1 >> 5) & 1U) & 1U);
                    c2_i_c = c2_i_slice_temp;
                    chartInstance->c2_ser_data_int = c2_logical(chartInstance,
                      c2_i_c);
                  } else {
                    _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 28);
                    sf_mex_destroy(&c2_j_T);
                    sf_mex_destroy(&c2_j_F);
                    sf_mex_destroy(&c2_j_val);
                    sf_mex_destroy(&c2_j_unusedU2);
                    sf_mex_destroy(&c2_j_unusedU3);
                    sf_mex_destroy(&c2_j_isfimathlocal);
                    c2_i156 = (int8_T)c2_cnt;
                    c2_i157 = (int8_T)c2_cnt;
                    if ((int8_T)(c2_i157 & 32) != 0) {
                      c2_i158 = (int8_T)(c2_i157 | -32);
                    } else {
                      c2_i158 = (int8_T)(c2_i157 & 31);
                    }

                    c2_i159 = 10 - c2_i158;
                    if (c2_i159 > 31) {
                      c2_i159 = 31;
                    } else {
                      if (c2_i159 < -32) {
                        c2_i159 = -32;
                      }
                    }

                    c2_i160 = (int8_T)c2_cnt;
                    c2_i161 = (int8_T)c2_cnt;
                    if ((int8_T)(c2_i161 & 32) != 0) {
                      c2_i162 = (int8_T)(c2_i161 | -32);
                    } else {
                      c2_i162 = (int8_T)(c2_i161 & 31);
                    }

                    c2_i163 = c2_i162 - 10;
                    if (c2_i163 > 31) {
                      c2_i163 = 31;
                    } else {
                      if (c2_i163 < -32) {
                        c2_i163 = -32;
                      }
                    }

                    if ((int8_T)(c2_i156 & 32) != 0) {
                      c2_i164 = (int8_T)(c2_i156 | -32);
                    } else {
                      c2_i164 = (int8_T)(c2_i156 & 31);
                    }

                    if (c2_i164 < 10) {
                      if ((int8_T)c2_i159 <= 1) {
                        c2_d17 = 1.0;
                      } else {
                        c2_d17 = 0.0;
                      }
                    } else {
                      if ((int8_T)(c2_i160 & 32) != 0) {
                        c2_i165 = (int8_T)(c2_i160 | -32);
                      } else {
                        c2_i165 = (int8_T)(c2_i160 & 31);
                      }

                      if (c2_i165 > 10) {
                        if ((int8_T)c2_i163 <= 1) {
                          c2_d17 = 3.0;
                        } else {
                          c2_d17 = 0.0;
                        }
                      } else {
                        c2_d17 = 2.0;
                      }
                    }

                    if (CV_EML_IF(6, 1, 10, CV_RELATIONAL_EVAL(4U, 6U, 9, c2_d17,
                          0.0, -2, 0U, (int32_T)c2_eq(chartInstance, c2_cnt, 10U))))
                    {
                      _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 29);
                      c2_j_a = c2_word;
                      c2_j_a1 = c2_j_a;
                      c2_j_slice_temp = (uint8_T)((uint8_T)((uint16_T)((uint32_T)
                        c2_j_a1 >> 4) & 1U) & 1U);
                      c2_j_c = c2_j_slice_temp;
                      chartInstance->c2_ser_data_int = c2_logical(chartInstance,
                        c2_j_c);
                    } else {
                      _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 30);
                      sf_mex_destroy(&c2_k_T);
                      sf_mex_destroy(&c2_k_F);
                      sf_mex_destroy(&c2_k_val);
                      sf_mex_destroy(&c2_k_unusedU2);
                      sf_mex_destroy(&c2_k_unusedU3);
                      sf_mex_destroy(&c2_k_isfimathlocal);
                      c2_i166 = (int8_T)c2_cnt;
                      c2_i167 = (int8_T)c2_cnt;
                      if ((int8_T)(c2_i167 & 32) != 0) {
                        c2_i168 = (int8_T)(c2_i167 | -32);
                      } else {
                        c2_i168 = (int8_T)(c2_i167 & 31);
                      }

                      c2_i169 = 11 - c2_i168;
                      if (c2_i169 > 31) {
                        c2_i169 = 31;
                      } else {
                        if (c2_i169 < -32) {
                          c2_i169 = -32;
                        }
                      }

                      c2_i170 = (int8_T)c2_cnt;
                      c2_i171 = (int8_T)c2_cnt;
                      if ((int8_T)(c2_i171 & 32) != 0) {
                        c2_i172 = (int8_T)(c2_i171 | -32);
                      } else {
                        c2_i172 = (int8_T)(c2_i171 & 31);
                      }

                      c2_i173 = c2_i172 - 11;
                      if (c2_i173 > 31) {
                        c2_i173 = 31;
                      } else {
                        if (c2_i173 < -32) {
                          c2_i173 = -32;
                        }
                      }

                      if ((int8_T)(c2_i166 & 32) != 0) {
                        c2_i174 = (int8_T)(c2_i166 | -32);
                      } else {
                        c2_i174 = (int8_T)(c2_i166 & 31);
                      }

                      if (c2_i174 < 11) {
                        if ((int8_T)c2_i169 <= 1) {
                          c2_d18 = 1.0;
                        } else {
                          c2_d18 = 0.0;
                        }
                      } else {
                        if ((int8_T)(c2_i170 & 32) != 0) {
                          c2_i175 = (int8_T)(c2_i170 | -32);
                        } else {
                          c2_i175 = (int8_T)(c2_i170 & 31);
                        }

                        if (c2_i175 > 11) {
                          if ((int8_T)c2_i173 <= 1) {
                            c2_d18 = 3.0;
                          } else {
                            c2_d18 = 0.0;
                          }
                        } else {
                          c2_d18 = 2.0;
                        }
                      }

                      if (CV_EML_IF(6, 1, 11, CV_RELATIONAL_EVAL(4U, 6U, 10,
                            c2_d18, 0.0, -2, 0U, (int32_T)c2_eq(chartInstance,
                             c2_cnt, 11U)))) {
                        _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 31);
                        c2_k_a = c2_word;
                        c2_k_a1 = c2_k_a;
                        c2_k_slice_temp = (uint8_T)((uint8_T)((uint16_T)
                          ((uint32_T)c2_k_a1 >> 3) & 1U) & 1U);
                        c2_k_c = c2_k_slice_temp;
                        chartInstance->c2_ser_data_int = c2_logical
                          (chartInstance, c2_k_c);
                      } else {
                        _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 32);
                        sf_mex_destroy(&c2_l_T);
                        sf_mex_destroy(&c2_l_F);
                        sf_mex_destroy(&c2_l_val);
                        sf_mex_destroy(&c2_l_unusedU2);
                        sf_mex_destroy(&c2_l_unusedU3);
                        sf_mex_destroy(&c2_l_isfimathlocal);
                        c2_i176 = (int8_T)c2_cnt;
                        c2_i177 = (int8_T)c2_cnt;
                        if ((int8_T)(c2_i177 & 32) != 0) {
                          c2_i178 = (int8_T)(c2_i177 | -32);
                        } else {
                          c2_i178 = (int8_T)(c2_i177 & 31);
                        }

                        c2_i179 = 12 - c2_i178;
                        if (c2_i179 > 31) {
                          c2_i179 = 31;
                        } else {
                          if (c2_i179 < -32) {
                            c2_i179 = -32;
                          }
                        }

                        c2_i180 = (int8_T)c2_cnt;
                        c2_i181 = (int8_T)c2_cnt;
                        if ((int8_T)(c2_i181 & 32) != 0) {
                          c2_i182 = (int8_T)(c2_i181 | -32);
                        } else {
                          c2_i182 = (int8_T)(c2_i181 & 31);
                        }

                        c2_i183 = c2_i182 - 12;
                        if (c2_i183 > 31) {
                          c2_i183 = 31;
                        } else {
                          if (c2_i183 < -32) {
                            c2_i183 = -32;
                          }
                        }

                        if ((int8_T)(c2_i176 & 32) != 0) {
                          c2_i184 = (int8_T)(c2_i176 | -32);
                        } else {
                          c2_i184 = (int8_T)(c2_i176 & 31);
                        }

                        if (c2_i184 < 12) {
                          if ((int8_T)c2_i179 <= 1) {
                            c2_d19 = 1.0;
                          } else {
                            c2_d19 = 0.0;
                          }
                        } else {
                          if ((int8_T)(c2_i180 & 32) != 0) {
                            c2_i185 = (int8_T)(c2_i180 | -32);
                          } else {
                            c2_i185 = (int8_T)(c2_i180 & 31);
                          }

                          if (c2_i185 > 12) {
                            if ((int8_T)c2_i183 <= 1) {
                              c2_d19 = 3.0;
                            } else {
                              c2_d19 = 0.0;
                            }
                          } else {
                            c2_d19 = 2.0;
                          }
                        }

                        if (CV_EML_IF(6, 1, 12, CV_RELATIONAL_EVAL(4U, 6U, 11,
                              c2_d19, 0.0, -2, 0U, (int32_T)c2_eq(chartInstance,
                               c2_cnt, 12U)))) {
                          _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 33);
                          c2_l_a = c2_word;
                          c2_l_a1 = c2_l_a;
                          c2_l_slice_temp = (uint8_T)((uint8_T)((uint16_T)
                            ((uint32_T)c2_l_a1 >> 2) & 1U) & 1U);
                          c2_l_c = c2_l_slice_temp;
                          chartInstance->c2_ser_data_int = c2_logical
                            (chartInstance, c2_l_c);
                        } else {
                          _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 34);
                          sf_mex_destroy(&c2_m_T);
                          sf_mex_destroy(&c2_m_F);
                          sf_mex_destroy(&c2_m_val);
                          sf_mex_destroy(&c2_m_unusedU2);
                          sf_mex_destroy(&c2_m_unusedU3);
                          sf_mex_destroy(&c2_m_isfimathlocal);
                          c2_i186 = (int8_T)c2_cnt;
                          c2_i187 = (int8_T)c2_cnt;
                          if ((int8_T)(c2_i187 & 32) != 0) {
                            c2_i188 = (int8_T)(c2_i187 | -32);
                          } else {
                            c2_i188 = (int8_T)(c2_i187 & 31);
                          }

                          c2_i189 = 13 - c2_i188;
                          if (c2_i189 > 31) {
                            c2_i189 = 31;
                          } else {
                            if (c2_i189 < -32) {
                              c2_i189 = -32;
                            }
                          }

                          c2_i190 = (int8_T)c2_cnt;
                          c2_i191 = (int8_T)c2_cnt;
                          if ((int8_T)(c2_i191 & 32) != 0) {
                            c2_i192 = (int8_T)(c2_i191 | -32);
                          } else {
                            c2_i192 = (int8_T)(c2_i191 & 31);
                          }

                          c2_i193 = c2_i192 - 13;
                          if (c2_i193 > 31) {
                            c2_i193 = 31;
                          } else {
                            if (c2_i193 < -32) {
                              c2_i193 = -32;
                            }
                          }

                          if ((int8_T)(c2_i186 & 32) != 0) {
                            c2_i194 = (int8_T)(c2_i186 | -32);
                          } else {
                            c2_i194 = (int8_T)(c2_i186 & 31);
                          }

                          if (c2_i194 < 13) {
                            if ((int8_T)c2_i189 <= 1) {
                              c2_d20 = 1.0;
                            } else {
                              c2_d20 = 0.0;
                            }
                          } else {
                            if ((int8_T)(c2_i190 & 32) != 0) {
                              c2_i195 = (int8_T)(c2_i190 | -32);
                            } else {
                              c2_i195 = (int8_T)(c2_i190 & 31);
                            }

                            if (c2_i195 > 13) {
                              if ((int8_T)c2_i193 <= 1) {
                                c2_d20 = 3.0;
                              } else {
                                c2_d20 = 0.0;
                              }
                            } else {
                              c2_d20 = 2.0;
                            }
                          }

                          if (CV_EML_IF(6, 1, 13, CV_RELATIONAL_EVAL(4U, 6U, 12,
                                c2_d20, 0.0, -2, 0U, (int32_T)c2_eq
                                (chartInstance, c2_cnt, 13U)))) {
                            _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 35);
                            c2_m_a = c2_word;
                            c2_m_a1 = c2_m_a;
                            c2_m_slice_temp = (uint8_T)((uint8_T)((uint16_T)
                              ((uint32_T)c2_m_a1 >> 1) & 1U) & 1U);
                            c2_m_c = c2_m_slice_temp;
                            chartInstance->c2_ser_data_int = c2_logical
                              (chartInstance, c2_m_c);
                          } else {
                            _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 36);
                            sf_mex_destroy(&c2_n_T);
                            sf_mex_destroy(&c2_n_F);
                            sf_mex_destroy(&c2_n_val);
                            sf_mex_destroy(&c2_n_unusedU2);
                            sf_mex_destroy(&c2_n_unusedU3);
                            sf_mex_destroy(&c2_n_isfimathlocal);
                            c2_i196 = (int8_T)c2_cnt;
                            c2_i197 = (int8_T)c2_cnt;
                            if ((int8_T)(c2_i197 & 32) != 0) {
                              c2_i198 = (int8_T)(c2_i197 | -32);
                            } else {
                              c2_i198 = (int8_T)(c2_i197 & 31);
                            }

                            c2_i199 = 14 - c2_i198;
                            if (c2_i199 > 31) {
                              c2_i199 = 31;
                            } else {
                              if (c2_i199 < -32) {
                                c2_i199 = -32;
                              }
                            }

                            c2_i200 = (int8_T)c2_cnt;
                            c2_i201 = (int8_T)c2_cnt;
                            if ((int8_T)(c2_i201 & 32) != 0) {
                              c2_i202 = (int8_T)(c2_i201 | -32);
                            } else {
                              c2_i202 = (int8_T)(c2_i201 & 31);
                            }

                            c2_i203 = c2_i202 - 14;
                            if (c2_i203 > 31) {
                              c2_i203 = 31;
                            } else {
                              if (c2_i203 < -32) {
                                c2_i203 = -32;
                              }
                            }

                            if ((int8_T)(c2_i196 & 32) != 0) {
                              c2_i204 = (int8_T)(c2_i196 | -32);
                            } else {
                              c2_i204 = (int8_T)(c2_i196 & 31);
                            }

                            if (c2_i204 < 14) {
                              if ((int8_T)c2_i199 <= 1) {
                                c2_d21 = 1.0;
                              } else {
                                c2_d21 = 0.0;
                              }
                            } else {
                              if ((int8_T)(c2_i200 & 32) != 0) {
                                c2_i205 = (int8_T)(c2_i200 | -32);
                              } else {
                                c2_i205 = (int8_T)(c2_i200 & 31);
                              }

                              if (c2_i205 > 14) {
                                if ((int8_T)c2_i203 <= 1) {
                                  c2_d21 = 3.0;
                                } else {
                                  c2_d21 = 0.0;
                                }
                              } else {
                                c2_d21 = 2.0;
                              }
                            }

                            if (CV_EML_IF(6, 1, 14, CV_RELATIONAL_EVAL(4U, 6U,
                                  13, c2_d21, 0.0, -2, 0U, (int32_T)c2_eq
                                  (chartInstance, c2_cnt, 14U)))) {
                              _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 37);
                              c2_n_a = c2_word;
                              c2_n_a1 = c2_n_a;
                              c2_n_slice_temp = (uint8_T)((uint8_T)(c2_n_a1 & 1U)
                                & 1U);
                              c2_n_c = c2_n_slice_temp;
                              chartInstance->c2_ser_data_int = c2_logical
                                (chartInstance, c2_n_c);
                            } else {
                              _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 39);
                              chartInstance->c2_ser_data_int = false;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, 42);
  c2_ser_data = chartInstance->c2_ser_data_int;
  _SFD_EML_CALL(6U, chartInstance->c2_sfEvent, -42);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_UNSET_DATA_VALUE_PTR(9U);
  _SFD_UNSET_DATA_VALUE_PTR(8U);
  _SFD_UNSET_DATA_VALUE_PTR(7U);
  return c2_ser_data;
}

static boolean_T c2_eq(SFc2_ADXL345_readInstanceStruct *chartInstance, uint8_T
  c2_a0, uint8_T c2_b0)
{
  uint8_T c2_a;
  uint8_T c2_b;
  uint8_T c2_b_a0;
  uint8_T c2_b_b0;
  uint8_T c2_a1;
  uint8_T c2_b1;
  uint8_T c2_b_a1;
  uint8_T c2_b_b1;
  c2_strcmpi(chartInstance);
  c2_a = c2_a0;
  c2_b = c2_b0;
  c2_b_a0 = c2_a;
  c2_b_b0 = c2_b;
  c2_a1 = c2_b_a0;
  c2_b1 = c2_b_b0;
  c2_b_a1 = c2_a1;
  c2_b_b1 = c2_b1;
  return c2_b_a1 == c2_b_b1;
}

static void c2_strcmpi(SFc2_ADXL345_readInstanceStruct *chartInstance)
{
  c2_eml_scalar_eg(chartInstance);
  c2_eml_scalar_eg(chartInstance);
}

static void c2_eml_scalar_eg(SFc2_ADXL345_readInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static boolean_T c2_logical(SFc2_ADXL345_readInstanceStruct *chartInstance,
  uint8_T c2_a)
{
  uint8_T c2_a0;
  uint8_T c2_b_a;
  uint8_T c2_b_a0;
  uint8_T c2_a1;
  uint8_T c2_b_a1;
  c2_a0 = c2_a;
  c2_strcmpi(chartInstance);
  c2_b_a = c2_a0;
  c2_b_a0 = c2_b_a;
  c2_a1 = c2_b_a0;
  c2_b_a1 = c2_a1;
  return c2_b_a1 != 0;
}

static const mxArray *c2_f_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  int32_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(int32_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static int32_T c2_h_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_y;
  int32_T c2_i206;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_i206, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_i206;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_sfEvent;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int32_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_b_sfEvent = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_sfEvent),
    &c2_thisId);
  sf_mex_destroy(&c2_b_sfEvent);
  *(int32_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_g_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  uint8_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(uint8_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static uint8_T c2_i_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_tp_IDLE, const char_T *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_tp_IDLE),
    &c2_thisId);
  sf_mex_destroy(&c2_b_tp_IDLE);
  return c2_y;
}

static uint8_T c2_j_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_u2;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_u2, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u2;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_tp_IDLE;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_b_tp_IDLE = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_tp_IDLE),
    &c2_thisId);
  sf_mex_destroy(&c2_b_tp_IDLE);
  *(uint8_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_h_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  uint16_T c2_u;
  const mxArray *c2_y = NULL;
  uint16_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_u = *(uint16_T *)c2_inData;
    c2_y = NULL;
    c2_b_u = c2_u;
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 5, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_d_eml_mx), 15,
      "simulinkarray", 14, c2_b_y, 15, "fimathislocal", 3, true), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static uint16_T c2_k_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_count, const char_T *c2_identifier)
{
  uint16_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_count), &c2_thisId);
  sf_mex_destroy(&c2_b_count);
  return c2_y;
}

static uint16_T c2_l_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint16_T c2_y;
  const mxArray *c2_mxFi = NULL;
  const mxArray *c2_mxInt = NULL;
  uint16_T c2_u3;
  (void)chartInstance;
  sf_mex_check_fi(c2_parentId, c2_u, false, 0U, NULL, c2_eml_mx, c2_d_eml_mx);
  sf_mex_assign(&c2_mxFi, sf_mex_dup(c2_u), false);
  sf_mex_assign(&c2_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c2_mxFi)), false);
  sf_mex_import(c2_parentId, sf_mex_dup(c2_mxInt), &c2_u3, 1, 5, 0U, 0, 0U, 0);
  sf_mex_destroy(&c2_mxFi);
  sf_mex_destroy(&c2_mxInt);
  c2_y = c2_u3;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_count;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  uint16_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c2_b_count = sf_mex_dup(c2_mxArrayInData);
    c2_identifier = c2_varName;
    c2_thisId.fIdentifier = c2_identifier;
    c2_thisId.fParent = NULL;
    c2_y = c2_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_count),
      &c2_thisId);
    sf_mex_destroy(&c2_b_count);
    *(uint16_T *)c2_outData = c2_y;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_i_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  uint8_T c2_u;
  const mxArray *c2_y = NULL;
  uint8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_u = *(uint8_T *)c2_inData;
    c2_y = NULL;
    c2_b_u = c2_u;
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_b_eml_mx), 15,
      "simulinkarray", 14, c2_b_y, 15, "fimathislocal", 3, true), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static uint8_T c2_m_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_clock_cnt, const char_T *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_clock_cnt),
    &c2_thisId);
  sf_mex_destroy(&c2_b_clock_cnt);
  return c2_y;
}

static uint8_T c2_n_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  const mxArray *c2_mxFi = NULL;
  const mxArray *c2_mxInt = NULL;
  uint8_T c2_u4;
  (void)chartInstance;
  sf_mex_check_fi(c2_parentId, c2_u, false, 0U, NULL, c2_eml_mx, c2_b_eml_mx);
  sf_mex_assign(&c2_mxFi, sf_mex_dup(c2_u), false);
  sf_mex_assign(&c2_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c2_mxFi)), false);
  sf_mex_import(c2_parentId, sf_mex_dup(c2_mxInt), &c2_u4, 1, 3, 0U, 0, 0U, 0);
  sf_mex_destroy(&c2_mxFi);
  sf_mex_destroy(&c2_mxInt);
  c2_y = c2_u4;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_clock_cnt;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c2_b_clock_cnt = sf_mex_dup(c2_mxArrayInData);
    c2_identifier = c2_varName;
    c2_thisId.fIdentifier = c2_identifier;
    c2_thisId.fParent = NULL;
    c2_y = c2_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_clock_cnt),
      &c2_thisId);
    sf_mex_destroy(&c2_b_clock_cnt);
    *(uint8_T *)c2_outData = c2_y;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_j_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  uint16_T c2_u;
  const mxArray *c2_y = NULL;
  uint16_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_u = *(uint16_T *)c2_inData;
    c2_y = NULL;
    c2_b_u = c2_u;
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 5, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
      (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_c_eml_mx), 15,
      "simulinkarray", 14, c2_b_y, 15, "fimathislocal", 3, true), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static const mxArray *c2_o_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_b_setSimStateSideEffectsInfo, const char_T
  *c2_identifier)
{
  const mxArray *c2_y = NULL;
  emlrtMsgIdentifier c2_thisId;
  c2_y = NULL;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  sf_mex_assign(&c2_y, c2_p_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_setSimStateSideEffectsInfo), &c2_thisId), false);
  sf_mex_destroy(&c2_b_setSimStateSideEffectsInfo);
  return c2_y;
}

static const mxArray *c2_p_emlrt_marshallIn(SFc2_ADXL345_readInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  (void)c2_parentId;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_duplicatearraysafe(&c2_u), false);
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void init_dsm_address_info(SFc2_ADXL345_readInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_ADXL345_readInstanceStruct
  *chartInstance)
{
  chartInstance->c2_CSn_CONV = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_SCK = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_SDI = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_cmd = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_CMD_VLD = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
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

void sf_c2_ADXL345_read_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2800253434U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3729843452U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1229829768U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3951675255U);
}

mxArray* sf_c2_ADXL345_read_get_post_codegen_info(void);
mxArray *sf_c2_ADXL345_read_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("uEgWayLE0TKZ01eEgfFFtE");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(11));

      {
        const char *fixptFields[] = { "isSigned", "wordLength", "bias", "slope",
          "exponent", "isScaledDouble" };

        mxArray *mxFixpt = mxCreateStructMatrix(1,1,6,fixptFields);
        mxSetField(mxFixpt,0,"isSigned",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"wordLength",mxCreateDoubleScalar(14));
        mxSetField(mxFixpt,0,"bias",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"slope",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"exponent",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"isScaledDouble",mxCreateDoubleScalar(0));
        mxSetField(mxType,0,"fixpt",mxFixpt);
      }

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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c2_ADXL345_read_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c2_ADXL345_read_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_ADXL345_read_jit_fallback_info(void)
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

mxArray *sf_c2_ADXL345_read_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c2_ADXL345_read_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c2_ADXL345_read(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[6],T\"CSn_CONV\",},{M[1],M[17],T\"SCK\",},{M[1],M[51],T\"SDI\",},{M[3],M[24],T\"clock_cnt\",},{M[3],M[12],T\"count\",},{M[4],M[77],T\"ser_data_int\",S'l','i','p'{{M1x2[51 63],M[0],}}},{M[8],M[0],T\"is_active_c2_ADXL345_read\",},{M[9],M[0],T\"is_c2_ADXL345_read\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_ADXL345_read_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_ADXL345_readInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc2_ADXL345_readInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _ADXL345_readMachineNumber_,
           2,
           8,
           14,
           0,
           10,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_ADXL345_readMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_ADXL345_readMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _ADXL345_readMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"CSn_CONV");
          _SFD_SET_DATA_PROPS(1,0,0,0,"count");
          _SFD_SET_DATA_PROPS(2,2,0,1,"SCK");
          _SFD_SET_DATA_PROPS(3,0,0,0,"clock_cnt");
          _SFD_SET_DATA_PROPS(4,2,0,1,"SDI");
          _SFD_SET_DATA_PROPS(5,1,1,0,"cmd");
          _SFD_SET_DATA_PROPS(6,1,1,0,"CMD_VLD");
          _SFD_SET_DATA_PROPS(7,8,0,0,"");
          _SFD_SET_DATA_PROPS(8,8,0,0,"");
          _SFD_SET_DATA_PROPS(9,9,0,0,"");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(6,0,2);
          _SFD_CH_SUBSTATE_COUNT(7);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,7);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
        }

        _SFD_CV_INIT_CHART(7,1,0,0);

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
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
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
          static unsigned int sStartSaturateMap[] = { 33 };

          static unsigned int sEndSaturateMap[] = { 44 };

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
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 16, 32 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 21 };

          static unsigned int sEndRelationalopMap[] = { 16, 32 };

          static int sRelationalopEps[] = { -2, -2 };

          static int sRelationalopType[] = { 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,2,&(sStartRelationalopMap[0]),
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

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -2 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(6,1,1,15,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(6,0,"sdi_gen",0,-1,1188);
        _SFD_CV_INIT_EML_IF(6,1,0,65,89,-1,119);
        _SFD_CV_INIT_EML_IF(6,1,1,122,143,190,1156);
        _SFD_CV_INIT_EML_IF(6,1,2,190,215,262,1156);
        _SFD_CV_INIT_EML_IF(6,1,3,262,287,334,1156);
        _SFD_CV_INIT_EML_IF(6,1,4,334,359,406,1156);
        _SFD_CV_INIT_EML_IF(6,1,5,406,431,478,1156);
        _SFD_CV_INIT_EML_IF(6,1,6,478,503,549,1156);
        _SFD_CV_INIT_EML_IF(6,1,7,549,574,620,1156);
        _SFD_CV_INIT_EML_IF(6,1,8,620,645,691,1156);
        _SFD_CV_INIT_EML_IF(6,1,9,691,716,762,1156);
        _SFD_CV_INIT_EML_IF(6,1,10,762,788,834,1156);
        _SFD_CV_INIT_EML_IF(6,1,11,834,860,906,1156);
        _SFD_CV_INIT_EML_IF(6,1,12,906,932,978,1156);
        _SFD_CV_INIT_EML_IF(6,1,13,978,1004,1050,1156);
        _SFD_CV_INIT_EML_IF(6,1,14,1050,1076,1122,1156);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,0,125,143,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,1,197,215,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,2,269,287,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,3,341,359,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,4,413,431,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,5,485,503,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,6,556,574,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,7,627,645,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,8,698,716,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,9,769,788,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,10,841,860,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,11,913,932,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,12,985,1004,-2,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,1,13,1057,1076,-2,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)c2_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT16,0,NULL,1,0,9,0,1,0,0,
          (MexFcnForType)c2_h_sf_marshallOut,(MexInFcnForType)c2_h_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)c2_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,1,0,5,0,1,0,0,
          (MexFcnForType)c2_i_sf_marshallOut,(MexInFcnForType)c2_i_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)c2_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT16,0,NULL,1,0,14,0,1,0,0,
          (MexFcnForType)c2_j_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT16,0,NULL,1,0,14,0,1,0,0,
          (MexFcnForType)c2_d_sf_marshallOut,(MexInFcnForType)c2_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,1,0,5,0,1,0,0,
          (MexFcnForType)c2_c_sf_marshallOut,(MexInFcnForType)c2_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)c2_b_sf_marshallIn);
        _SFD_SET_DATA_VALUE_PTR(7,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(8,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(9,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c2_CSn_CONV);
        _SFD_SET_DATA_VALUE_PTR(1U, &chartInstance->c2_count);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c2_SCK);
        _SFD_SET_DATA_VALUE_PTR(3U, &chartInstance->c2_clock_cnt);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c2_SDI);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c2_cmd);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c2_CMD_VLD);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _ADXL345_readMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "ssyupry7ZKjxvQ5lPtRU0C";
}

static void sf_opaque_initialize_c2_ADXL345_read(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_ADXL345_readInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*)
    chartInstanceVar);
  initialize_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_ADXL345_read(void *chartInstanceVar)
{
  enable_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_ADXL345_read(void *chartInstanceVar)
{
  disable_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_ADXL345_read(void *chartInstanceVar)
{
  sf_gateway_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_ADXL345_read(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_ADXL345_read(SimStruct* S, const mxArray *
  st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c2_ADXL345_read(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_ADXL345_readInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ADXL345_read_optimization_info();
    }

    finalize_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_ADXL345_read(SimStruct *S)
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
    initialize_params_c2_ADXL345_read((SFc2_ADXL345_readInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_ADXL345_read(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ADXL345_read_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,2,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,2);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,2,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,2,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3822850766U));
  ssSetChecksum1(S,(2961791802U));
  ssSetChecksum2(S,(3471001685U));
  ssSetChecksum3(S,(4089247059U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c2_ADXL345_read(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c2_ADXL345_read(SimStruct *S)
{
  SFc2_ADXL345_readInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc2_ADXL345_readInstanceStruct *)utMalloc(sizeof
    (SFc2_ADXL345_readInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc2_ADXL345_readInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_ADXL345_read;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_ADXL345_read;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_ADXL345_read;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_ADXL345_read;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_ADXL345_read;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_ADXL345_read;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_ADXL345_read;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_ADXL345_read;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_ADXL345_read;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_ADXL345_read;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_ADXL345_read;
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

void c2_ADXL345_read_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_ADXL345_read(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_ADXL345_read(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_ADXL345_read(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_ADXL345_read_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
