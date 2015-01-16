#include "__cf_PWM_controller.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PWM_controller_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "PWM_controller.h"
#include "PWM_controller_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 2 , TARGET_STRING (
"PWM_controller/PWM Controller" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 1 , 3 , TARGET_STRING ( "PWM_controller/PWM Controller" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"PWM_controller/Constant" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
3 , 3 , TARGET_STRING ( "PWM_controller/PWM Controller/direction" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 1 , TARGET_STRING (
"PWM_controller/PWM Controller/Calculate f_coeff" ) , TARGET_STRING ( "" ) ,
0 , 1 , 0 , 0 , 1 } , { 5 , 2 , TARGET_STRING (
"PWM_controller/PWM Controller/Chart" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 6 , 0 , TARGET_STRING (
"PWM_controller/PWM Controller/Chart/is_active_c3_PWM_controller" ) ,
TARGET_STRING ( "is_active_c3_PWM_controller" ) , 0 , 2 , 0 , 0 , 0 } , { 7 ,
0 , TARGET_STRING (
"PWM_controller/PWM Controller/Chart/is_c3_PWM_controller" ) , TARGET_STRING
( "is_c3_PWM_controller" ) , 0 , 2 , 0 , 0 , 0 } , { 8 , 3 , TARGET_STRING (
"PWM_controller/PWM Controller/pwm_freq" ) , TARGET_STRING ( "" ) , 0 , 1 , 0
, 0 , 1 } , { 9 , 3 , TARGET_STRING (
"PWM_controller/PWM Controller/Saturation" ) , TARGET_STRING ( "" ) , 0 , 2 ,
0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"PWM_controller/Slider Gain/Slider Gain" ) , TARGET_STRING ( "" ) , 0 , 2 , 0
, 0 , 0 } , { 11 , 1 , TARGET_STRING (
"PWM_controller/PWM Controller/Calculate f_coeff/pl_cl" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 12 , 1 , TARGET_STRING (
"PWM_controller/PWM Controller/Calculate f_coeff/q" ) , TARGET_STRING ( "" )
, 0 , 1 , 0 , 0 , 1 } , { 13 , 1 , TARGET_STRING (
"PWM_controller/PWM Controller/Calculate f_coeff/Divide" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 14 , 1 , TARGET_STRING (
"PWM_controller/PWM Controller/Calculate f_coeff/Divide1" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 1 } , { 15 , 1 , TARGET_STRING (
"PWM_controller/PWM Controller/Calculate f_coeff/Sum" ) , TARGET_STRING ( ""
) , 0 , 1 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 }
} ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . j43cxlxqux , & rtB . f0wucbdmwi ,
& rtB . frdrnxnjol , & rtB . f0wucbdmwi , & rtB . dj1z3qbmb3 , & rtB .
j43cxlxqux , & rtDW . hb15pjcmck , & rtDW . iz0tix3n2j , & rtB . bm1qr0mvxh ,
& rtB . etvwha3uf4 , & rtB . h3v0udp4fs , & rtB . pzpcqpbppt , & rtB .
bm3oy5jlxe , & rtB . hukmeacq2r , & rtB . lty3vbj3mi , & rtB . dj1z3qbmb3 , }
; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) ,
SS_UINT32 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , SS_UINT8 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 1.0 , 0.0 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
- 2 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 16 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 1416281717U
, 3687857193U , 2501879179U , 3256960780U } , ( NULL ) , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * PWM_controller_GetCAPIStaticMap ( ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void PWM_controller_InitializeDataMapInfo ( SimStruct * const rtS ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void PWM_controller_host_InitializeDataMapInfo (
PWM_controller_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
