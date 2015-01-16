#include "__cf_PWM_controller.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . bm1qr0mvxh
) , 7 , 0 , 6 } , { ( char_T * ) ( & rtB . h3v0udp4fs ) , 3 , 0 , 2 } , { (
char_T * ) ( & rtB . frdrnxnjol ) , 8 , 0 , 3 } , { ( char_T * ) ( & rtDW .
bbht1lxgyi . LoggedData ) , 11 , 0 , 11 } , { ( char_T * ) ( & rtDW .
kja3v50kkq ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW . m0cpmrrq3z ) , 5 , 0 ,
1 } , { ( char_T * ) ( & rtDW . hb15pjcmck ) , 3 , 0 , 2 } , { ( char_T * ) (
& rtDW . jfhrimhf1j ) , 8 , 0 , 2 } } ; static DataTypeTransitionTable
rtBTransTable = { 8U , rtBTransitions } ;
