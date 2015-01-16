#include "__cf_PWM_controller.h"
#ifndef RTW_HEADER_PWM_controller_h_
#define RTW_HEADER_PWM_controller_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef PWM_controller_COMMON_INCLUDES_
#define PWM_controller_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "PWM_controller_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME PWM_controller
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (2)     
#define NBLOCKIO (11) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { uint32_T bm1qr0mvxh ; uint32_T pzpcqpbppt ; uint32_T
lty3vbj3mi ; uint32_T bm3oy5jlxe ; uint32_T hukmeacq2r ; uint32_T dj1z3qbmb3
; uint8_T h3v0udp4fs ; uint8_T etvwha3uf4 ; boolean_T frdrnxnjol ; boolean_T
f0wucbdmwi ; boolean_T j43cxlxqux ; } B ; typedef struct { struct { void *
LoggedData ; } bbht1lxgyi ; struct { void * SignalProbe ; } k1bxnjwqly ;
struct { void * SignalProbe ; } lpf0axv1ir ; struct { void * SignalProbe ; }
fluqytpzac ; struct { void * SignalProbe ; } n25qsrofm0 ; struct { void *
SignalProbe ; } neormjqbhq ; struct { void * SignalProbe ; } jewdnm3wj3 ;
struct { void * SignalProbe ; } pkxf2oboq4 ; struct { void * SignalProbe ; }
jdvenxwuto ; struct { void * SignalProbe ; } p1xakzzdwc ; struct { void *
SignalProbe ; } kwu5ltg0tf ; int32_T kja3v50kkq ; uint16_T m0cpmrrq3z ;
uint8_T hb15pjcmck ; uint8_T iz0tix3n2j ; boolean_T jfhrimhf1j ; boolean_T
lzvdarbbdu ; } DW ; typedef struct { boolean_T paxwndp12v ; boolean_T
fltmhsqxzo ; } ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ;
extern DW rtDW ; extern ExtY rtY ; extern const
rtwCAPI_ModelMappingStaticInfo * PWM_controller_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
