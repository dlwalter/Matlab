#include "__cf_PWM_controller.h"
#include "rt_logging_mmi.h"
#include "PWM_controller_capi.h"
#include <math.h>
#include "PWM_controller.h"
#include "PWM_controller_private.h"
#include "PWM_controller_dt.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 1 ; const char_T
* gbl_raccel_Version = "8.7 (R2014b) 08-Sep-2014" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\PWM_controller\\PWM_controller_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
#define aaadyiqe1n ((uint8_T)4U)
#define btnjdlewu0 (-1)
#define c2axgzwkdc ((uint8_T)3U)
#define l5l2hdkpf3 ((uint8_T)2U)
#define pyynhddgfs ((uint8_T)1U)
B rtB ; DW rtDW ; ExtY rtY ; static SimStruct model_S ; SimStruct * const rtS
= & model_S ; void MdlInitialize ( void ) { rtDW . kja3v50kkq = btnjdlewu0 ;
rtDW . hb15pjcmck = 1U ; rtDW . iz0tix3n2j = c2axgzwkdc ; } void MdlStart (
void ) { rtB . frdrnxnjol = true ; { void * pAobHierarchyNode0 = ( NULL ) ; {
char * pathToTopModel = "" ; const char * sigLogSelectorFileName =
rt_GetMatSigLogSelectorFileName ( ) ; void * pSignalProbeCollection = ( NULL
) ; uint_T signalDimensions0 [ 1 ] = { 1 } ; rtwAobHierarchyCreateRootNode (
& pAobHierarchyNode0 ) ; rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1
) ; rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/Calculate f_coeff/Divide1" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "linear" ,
1 , 0 , 1 , signalDimensions0 , 0 , "uint32" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . pkxf2oboq4 . SignalProbe =
pSignalProbeCollection ; } } { void * pSignalProbeCollection = ( void * )
rtDW . pkxf2oboq4 . SignalProbe ; if ( rtwSignalProbeCollectionGetLoggingIsOn
( pSignalProbeCollection ) ) { { real_T t ; void * pData ; t = ssGetT ( rtS )
; pData = ( void * ) & rtB . lty3vbj3mi ;
rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection , 0 , t , pData
) ; } } } { void * pAobHierarchyNode0 = ( NULL ) ; { char * pathToTopModel =
"" ; const char * sigLogSelectorFileName = rt_GetMatSigLogSelectorFileName (
) ; void * pSignalProbeCollection = ( NULL ) ; uint_T signalDimensions0 [ 1 ]
= { 1 } ; rtwAobHierarchyCreateRootNode ( & pAobHierarchyNode0 ) ;
rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1 ) ;
rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/Calculate f_coeff/Divide" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "linear" ,
1 , 0 , 1 , signalDimensions0 , 0 , "uint32" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . jdvenxwuto . SignalProbe =
pSignalProbeCollection ; } } { void * pSignalProbeCollection = ( void * )
rtDW . jdvenxwuto . SignalProbe ; if ( rtwSignalProbeCollectionGetLoggingIsOn
( pSignalProbeCollection ) ) { { real_T t ; void * pData ; t = ssGetT ( rtS )
; pData = ( void * ) & rtB . hukmeacq2r ;
rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection , 0 , t , pData
) ; } } } { void * pAobHierarchyNode0 = ( NULL ) ; { char * pathToTopModel =
"" ; const char * sigLogSelectorFileName = rt_GetMatSigLogSelectorFileName (
) ; void * pSignalProbeCollection = ( NULL ) ; uint_T signalDimensions0 [ 1 ]
= { 1 } ; rtwAobHierarchyCreateRootNode ( & pAobHierarchyNode0 ) ;
rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1 ) ;
rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/Calculate f_coeff/pl_cl" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "linear" ,
1 , 0 , 1 , signalDimensions0 , 0 , "uint32" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . p1xakzzdwc . SignalProbe =
pSignalProbeCollection ; } } { void * pSignalProbeCollection = ( void * )
rtDW . p1xakzzdwc . SignalProbe ; if ( rtwSignalProbeCollectionGetLoggingIsOn
( pSignalProbeCollection ) ) { { real_T t ; void * pData ; t = ssGetT ( rtS )
; pData = ( void * ) & rtB . pzpcqpbppt ;
rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection , 0 , t , pData
) ; } } } { void * pAobHierarchyNode0 = ( NULL ) ; { char * pathToTopModel =
"" ; const char * sigLogSelectorFileName = rt_GetMatSigLogSelectorFileName (
) ; void * pSignalProbeCollection = ( NULL ) ; uint_T signalDimensions0 [ 1 ]
= { 1 } ; rtwAobHierarchyCreateRootNode ( & pAobHierarchyNode0 ) ;
rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1 ) ;
rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/Calculate f_coeff/q" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "linear" ,
1 , 0 , 1 , signalDimensions0 , 0 , "uint32" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . kwu5ltg0tf . SignalProbe =
pSignalProbeCollection ; } } { void * pSignalProbeCollection = ( void * )
rtDW . kwu5ltg0tf . SignalProbe ; if ( rtwSignalProbeCollectionGetLoggingIsOn
( pSignalProbeCollection ) ) { { real_T t ; void * pData ; t = ssGetT ( rtS )
; pData = ( void * ) & rtB . bm3oy5jlxe ;
rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection , 0 , t , pData
) ; } } } { void * pAobHierarchyNode0 = ( NULL ) ; { char * pathToTopModel =
"" ; const char * sigLogSelectorFileName = rt_GetMatSigLogSelectorFileName (
) ; void * pSignalProbeCollection = ( NULL ) ; uint_T signalDimensions0 [ 1 ]
= { 1 } ; rtwAobHierarchyCreateRootNode ( & pAobHierarchyNode0 ) ;
rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1 ) ;
rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/Chart" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "zoh" , 1
, 0 , 1 , signalDimensions0 , 0 , "logical" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . k1bxnjwqly . SignalProbe =
pSignalProbeCollection ; } } { void * pAobHierarchyNode0 = ( NULL ) ; { char
* pathToTopModel = "" ; const char * sigLogSelectorFileName =
rt_GetMatSigLogSelectorFileName ( ) ; void * pSignalProbeCollection = ( NULL
) ; uint_T signalDimensions0 [ 1 ] = { 1 } ; rtwAobHierarchyCreateRootNode (
& pAobHierarchyNode0 ) ; rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1
) ; rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/Saturation" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "zoh" , 1
, 0 , 1 , signalDimensions0 , 0 , "uint8" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . lpf0axv1ir . SignalProbe =
pSignalProbeCollection ; } } { void * pAobHierarchyNode0 = ( NULL ) ; { char
* pathToTopModel = "" ; const char * sigLogSelectorFileName =
rt_GetMatSigLogSelectorFileName ( ) ; void * pSignalProbeCollection = ( NULL
) ; uint_T signalDimensions0 [ 1 ] = { 1 } ; rtwAobHierarchyCreateRootNode (
& pAobHierarchyNode0 ) ; rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1
) ; rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/duty" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "zoh" , 1
, 0 , 1 , signalDimensions0 , 0 , "uint8" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . fluqytpzac . SignalProbe =
pSignalProbeCollection ; } } { void * pAobHierarchyNode0 = ( NULL ) ; { char
* pathToTopModel = "" ; const char * sigLogSelectorFileName =
rt_GetMatSigLogSelectorFileName ( ) ; void * pSignalProbeCollection = ( NULL
) ; uint_T signalDimensions0 [ 1 ] = { 1 } ; rtwAobHierarchyCreateRootNode (
& pAobHierarchyNode0 ) ; rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1
) ; rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/enable" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "zoh" , 1
, 0 , 1 , signalDimensions0 , 0 , "logical" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . n25qsrofm0 . SignalProbe =
pSignalProbeCollection ; } } { void * pAobHierarchyNode0 = ( NULL ) ; { char
* pathToTopModel = "" ; const char * sigLogSelectorFileName =
rt_GetMatSigLogSelectorFileName ( ) ; void * pSignalProbeCollection = ( NULL
) ; uint_T signalDimensions0 [ 1 ] = { 1 } ; rtwAobHierarchyCreateRootNode (
& pAobHierarchyNode0 ) ; rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1
) ; rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/pwm_freq" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "linear" ,
1 , 0 , 1 , signalDimensions0 , 0 , "uint32" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . neormjqbhq . SignalProbe =
pSignalProbeCollection ; } } { void * pSignalProbeCollection = ( void * )
rtDW . neormjqbhq . SignalProbe ; if ( rtwSignalProbeCollectionGetLoggingIsOn
( pSignalProbeCollection ) ) { { real_T t ; void * pData ; t = ssGetT ( rtS )
; pData = ( void * ) & rtB . bm1qr0mvxh ;
rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection , 0 , t , pData
) ; } } } { void * pAobHierarchyNode0 = ( NULL ) ; { char * pathToTopModel =
"" ; const char * sigLogSelectorFileName = rt_GetMatSigLogSelectorFileName (
) ; void * pSignalProbeCollection = ( NULL ) ; uint_T signalDimensions0 [ 1 ]
= { 1 } ; rtwAobHierarchyCreateRootNode ( & pAobHierarchyNode0 ) ;
rtwAobHierarchyVerifyNNodes ( pAobHierarchyNode0 , 1 ) ;
rtwSignalProbeCollectionCreateInstance ( "tmp_raccel_logsout" , "" ,
pathToTopModel , "PWM_controller/PWM Controller/direction" ,
sigLogSelectorFileName , 1 , & pSignalProbeCollection ) ;
rtwSignalProbeCollectionAddElement ( pSignalProbeCollection , "" , "zoh" , 1
, 0 , 1 , signalDimensions0 , 0 , "logical" ) ;
rtwSignalProbeCollectionVerifyNLeaves ( pSignalProbeCollection , 1 ) ;
rtwSignalProbeCollectionSetAobHierarchy ( pSignalProbeCollection ,
pAobHierarchyNode0 ) ; rtwSignalProbeCollectionFinalizeMetaData (
pSignalProbeCollection ) ; rtDW . jewdnm3wj3 . SignalProbe =
pSignalProbeCollection ; } } rtB . bm1qr0mvxh = 400U ; rtB . pzpcqpbppt =
25000000U ; rtB . lty3vbj3mi = rtB . bm1qr0mvxh == 0U ? MAX_uint32_T : rtB .
pzpcqpbppt / rtB . bm1qr0mvxh ; rtB . bm3oy5jlxe = 255U ; rtB . hukmeacq2r =
rtB . bm3oy5jlxe == 0U ? MAX_uint32_T : rtB . lty3vbj3mi / rtB . bm3oy5jlxe ;
rtB . dj1z3qbmb3 = rtB . hukmeacq2r + 1U ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { uint32_T tmp ; uint64_T tmp_p ; int32_T tmp_e ;
rtB . frdrnxnjol = true ; tmp_e = ( int32_T ) ( ( uint32_T ) ( ( uint8_T )
200U ) * ( ( uint8_T ) 1U ) ) ; if ( ( uint32_T ) tmp_e > 255U ) { tmp_e =
255 ; } rtB . h3v0udp4fs = ( uint8_T ) tmp_e ; rtB . etvwha3uf4 = rtB .
h3v0udp4fs ; rtDW . kja3v50kkq = btnjdlewu0 ; switch ( rtDW . iz0tix3n2j ) {
case pyynhddgfs : tmp_p = 255ULL * rtB . dj1z3qbmb3 ; if ( tmp_p >
4294967295ULL ) { tmp_p = 4294967295ULL ; } if ( ( rtDW . m0cpmrrq3z >= (
uint32_T ) tmp_p ) && ( rtB . etvwha3uf4 < 255 ) ) { rtB . j43cxlxqux = false
; rtDW . m0cpmrrq3z = 0U ; rtDW . iz0tix3n2j = l5l2hdkpf3 ; } else if ( rtB .
frdrnxnjol == 0 ) { rtB . j43cxlxqux = false ; rtDW . iz0tix3n2j = aaadyiqe1n
; } else { tmp = rtDW . m0cpmrrq3z + 1U ; if ( tmp > 65535U ) { tmp = 65535U
; } rtDW . m0cpmrrq3z = ( uint16_T ) tmp ; rtDW . iz0tix3n2j = pyynhddgfs ; }
break ; case l5l2hdkpf3 : tmp_p = ( uint64_T ) ( 255 - rtB . etvwha3uf4 ) *
rtB . dj1z3qbmb3 ; if ( tmp_p > 4294967295ULL ) { tmp_p = 4294967295ULL ; }
if ( ( rtDW . m0cpmrrq3z >= ( uint32_T ) tmp_p ) && ( rtB . etvwha3uf4 > 0 )
) { rtB . j43cxlxqux = true ; rtDW . iz0tix3n2j = pyynhddgfs ; } else { tmp =
rtDW . m0cpmrrq3z + 1U ; if ( tmp > 65535U ) { tmp = 65535U ; } rtDW .
m0cpmrrq3z = ( uint16_T ) tmp ; rtDW . iz0tix3n2j = l5l2hdkpf3 ; } break ;
case c2axgzwkdc : if ( rtB . frdrnxnjol == 1 ) { rtDW . m0cpmrrq3z = 0U ; rtB
. j43cxlxqux = false ; rtDW . iz0tix3n2j = l5l2hdkpf3 ; } break ; default :
rtDW . iz0tix3n2j = c2axgzwkdc ; break ; } if ( ssGetLogOutput ( rtS ) ) { {
void * pSignalProbeCollection = ( void * ) rtDW . k1bxnjwqly . SignalProbe ;
if ( rtwSignalProbeCollectionGetLoggingIsOn ( pSignalProbeCollection ) ) { {
real_T t ; void * pData ; t = ssGetT ( rtS ) ; pData = ( void * ) & rtB .
j43cxlxqux ; rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection ,
0 , t , pData ) ; } } } } if ( ssGetLogOutput ( rtS ) ) { { void *
pSignalProbeCollection = ( void * ) rtDW . lpf0axv1ir . SignalProbe ; if (
rtwSignalProbeCollectionGetLoggingIsOn ( pSignalProbeCollection ) ) { {
real_T t ; void * pData ; t = ssGetT ( rtS ) ; pData = ( void * ) & rtB .
etvwha3uf4 ; rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection ,
0 , t , pData ) ; } } } } if ( ssGetLogOutput ( rtS ) ) { { void *
pSignalProbeCollection = ( void * ) rtDW . fluqytpzac . SignalProbe ; if (
rtwSignalProbeCollectionGetLoggingIsOn ( pSignalProbeCollection ) ) { {
real_T t ; void * pData ; t = ssGetT ( rtS ) ; pData = ( void * ) & rtB .
h3v0udp4fs ; rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection ,
0 , t , pData ) ; } } } } if ( ssGetLogOutput ( rtS ) ) { { void *
pSignalProbeCollection = ( void * ) rtDW . n25qsrofm0 . SignalProbe ; if (
rtwSignalProbeCollectionGetLoggingIsOn ( pSignalProbeCollection ) ) { {
real_T t ; void * pData ; t = ssGetT ( rtS ) ; pData = ( void * ) & rtB .
frdrnxnjol ; rtwSignalProbeCollectionAppendSample ( pSignalProbeCollection ,
0 , t , pData ) ; } } } } rtB . f0wucbdmwi = true ; if ( ssGetLogOutput ( rtS
) ) { { void * pSignalProbeCollection = ( void * ) rtDW . jewdnm3wj3 .
SignalProbe ; if ( rtwSignalProbeCollectionGetLoggingIsOn (
pSignalProbeCollection ) ) { { real_T t ; void * pData ; t = ssGetT ( rtS ) ;
pData = ( void * ) & rtB . f0wucbdmwi ; rtwSignalProbeCollectionAppendSample
( pSignalProbeCollection , 0 , t , pData ) ; } } } } rtY . paxwndp12v = rtB .
j43cxlxqux ; rtY . fltmhsqxzo = rtB . f0wucbdmwi ; UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlTerminate ( void ) { { void * pSignalProbeCollection = ( void * ) rtDW .
pkxf2oboq4 . SignalProbe ; const char * fileName =
rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . jdvenxwuto .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . p1xakzzdwc .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . kwu5ltg0tf .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . k1bxnjwqly .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . lpf0axv1ir .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . fluqytpzac .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . n25qsrofm0 .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . neormjqbhq .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } { void * pSignalProbeCollection = ( void * ) rtDW . jewdnm3wj3 .
SignalProbe ; const char * fileName = rt_GetMatSignalLoggingFileName ( ) ;
rtwSignalProbeCollectionSaveDatasetMatFile ( pSignalProbeCollection ,
fileName ) ; rtwSignalProbeCollectionDestroyInstance ( pSignalProbeCollection
) ; } } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 2 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 31 ) ;
ssSetNumBlockIO ( rtS , 11 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 1.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; }
void raccel_set_checksum ( SimStruct * rtS ) { ssSetChecksumVal ( rtS , 0 ,
1416281717U ) ; ssSetChecksumVal ( rtS , 1 , 3687857193U ) ; ssSetChecksumVal
( rtS , 2 , 2501879179U ) ; ssSetChecksumVal ( rtS , 3 , 3256960780U ) ; }
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; { rtB . bm1qr0mvxh = 400U ; rtB . pzpcqpbppt = 25000000U ; rtB .
lty3vbj3mi = 62500U ; rtB . bm3oy5jlxe = 255U ; rtB . hukmeacq2r = 245U ; rtB
. dj1z3qbmb3 = 246U ; } } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( ( void
* ) & rtY , 0 , sizeof ( ExtY ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . B = &
rtBTransTable ; } PWM_controller_InitializeDataMapInfo ( rtS ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"PWM_controller" ) ; ssSetPath ( rtS , "PWM_controller" ) ; ssSetTStart ( rtS
, 0.0 ) ; ssSetTFinal ( rtS , 150000.0 ) ; ssSetStepSize ( rtS , 1.0 ) ;
ssSetFixedStepSize ( rtS , 1.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogXSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogT ( ssGetRTWLogInfo ( rtS )
, "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal
( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; { static void *
rt_LoggedOutputSignalPtrs [ ] = { & rtY . paxwndp12v , & rtY . fltmhsqxzo } ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( ( LogSignalPtrsType )
rt_LoggedOutputSignalPtrs ) ) ; } { static int_T rt_LoggedOutputWidths [ ] =
{ 1 , 1 } ; static int_T rt_LoggedOutputNumDimensions [ ] = { 1 , 1 } ;
static int_T rt_LoggedOutputDimensions [ ] = { 1 , 1 } ; static boolean_T
rt_LoggedOutputIsVarDims [ ] = { 0 , 0 } ; static void *
rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) , ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 } ; static BuiltInDTypeId
rt_LoggedOutputDataTypeIds [ ] = { SS_BOOLEAN , SS_BOOLEAN } ; static int_T
rt_LoggedOutputComplexSignals [ ] = { 0 , 0 } ; static const char_T *
rt_LoggedOutputLabels_0 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_0 [ ] = { "PWM_controller/Out1" } ; static const
char_T * rt_LoggedOutputLabels_1 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_1 [ ] = { "PWM_controller/Out2" } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedOutputSignalInfo [ ] = { { 1 , rt_LoggedOutputWidths ,
rt_LoggedOutputNumDimensions , rt_LoggedOutputDimensions ,
rt_LoggedOutputIsVarDims , rt_LoggedCurrentSignalDimensions ,
rt_LoggedCurrentSignalDimensionsSize , rt_LoggedOutputDataTypeIds ,
rt_LoggedOutputComplexSignals , ( NULL ) , { rt_LoggedOutputLabels_0 } , (
NULL ) , ( NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames_0 } , { ( NULL ) }
, ( NULL ) , rt_RTWLogDataTypeConvert } , { 1 , rt_LoggedOutputWidths + 1 ,
rt_LoggedOutputNumDimensions + 1 , rt_LoggedOutputDimensions + 1 ,
rt_LoggedOutputIsVarDims + 1 , rt_LoggedCurrentSignalDimensions + 1 ,
rt_LoggedCurrentSignalDimensionsSize + 1 , rt_LoggedOutputDataTypeIds + 1 ,
rt_LoggedOutputComplexSignals + 1 , ( NULL ) , { rt_LoggedOutputLabels_1 } ,
( NULL ) , ( NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames_1 } , { ( NULL )
} , ( NULL ) , rt_RTWLogDataTypeConvert + 1 } } ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , rt_LoggedOutputSignalInfo ) ;
rt_LoggedCurrentSignalDimensions [ 0 ] = & rt_LoggedOutputWidths [ 0 ] ;
rt_LoggedCurrentSignalDimensions [ 1 ] = & rt_LoggedOutputWidths [ 1 ] ; }
rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "tmp_raccel_yout1,tmp_raccel_yout2" )
; } { static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver ( rtS
, 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ; ssSetModelUpdate ( rtS
, MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS ,
rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS ,
0 ) ; } ssSetChecksumVal ( rtS , 0 , 1416281717U ) ; ssSetChecksumVal ( rtS ,
1 , 3687857193U ) ; ssSetChecksumVal ( rtS , 2 , 2501879179U ) ;
ssSetChecksumVal ( rtS , 3 , 3256960780U ) ; { static const sysRanDType
rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo
; static const sysRanDType * systemRan [ 4 ] ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
