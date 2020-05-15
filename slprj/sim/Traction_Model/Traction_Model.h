#ifndef RTW_HEADER_Traction_Model_h_
#define RTW_HEADER_Traction_Model_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Traction_Model_COMMON_INCLUDES_
#define Traction_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "Traction_Model_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T kzkgqwmjoi ; real_T ak51yqniuf ; } eifhdams3s ;
typedef struct { real_T ofofuop4ar ; } mk15kpcwx1 ; typedef struct { real_T
ofofuop4ar ; } miqt3mwx52 ; typedef struct { boolean_T ofofuop4ar ; }
mepedpiocj ; typedef struct { real_T ofofuop4ar ; } jp4wvwdhrk ; typedef
struct { real_T ofofuop4ar ; } ihj1i2nznk ; typedef struct { real_T
ofofuop4ar ; } intupqur3k ; struct g0scevvpmb3_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
} ; struct ia5tf00pcr { struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T
mr_nonContSig0 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 1 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; } Timing ; } ; typedef struct { eifhdams3s rtb ; dodztnquqb rtm ; }
hupbxjr5fjc ; extern void h4khlhkpbr ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , dodztnquqb * const
iv3y41y4ea , eifhdams3s * localB , mk15kpcwx1 * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Traction_Model_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Traction_Model_GetDWork (
const hupbxjr5fjc * mdlrefDW ) ; extern void mr_Traction_Model_SetDWork (
hupbxjr5fjc * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Traction_Model_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_Traction_Model_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Traction_Model_GetCAPIStaticMap ( void ) ;
extern void mxvoph4n2k ( mk15kpcwx1 * localX ) ; extern void gzopvquhr4 (
mk15kpcwx1 * localX ) ; extern void k4l0fa3the ( eifhdams3s * localB ,
miqt3mwx52 * localXdot ) ; extern void dfuikadvmz ( dodztnquqb * const
iv3y41y4ea ) ; extern void dfuikadvmzTID2 ( void ) ; extern void
Traction_Model ( dodztnquqb * const iv3y41y4ea , const real_T * jygmymdn4v ,
real_T * j1ad5bfwvp , real_T * ay0vaw0dfl , eifhdams3s * localB , mk15kpcwx1
* localX ) ; extern void Traction_ModelTID2 ( void ) ; extern void bivkusxkvs
( dodztnquqb * const iv3y41y4ea ) ;
#endif
