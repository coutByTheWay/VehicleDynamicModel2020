#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Traction_Model_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Traction_Model.h"
#include "Traction_Model_capi.h"
#include "Traction_Model_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING ( "Traction_Model/Integrator" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 , ( NULL
) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void Traction_Model_InitializeDataAddr ( void * dataAddr [ ] ,
mk15kpcwx1 * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX -> ofofuop4ar
) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Traction_Model_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Traction_Model_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 4 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 4 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1858411190U , 3300102933U , 2263293881U ,
2411813872U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * Traction_Model_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Traction_Model_InitializeSystemRan ( dodztnquqb * const
iv3y41y4ea , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( iv3y41y4ea ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] =
iv3y41y4ea -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = iv3y41y4ea
-> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 3 ] = iv3y41y4ea -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Traction_Model_InitializeDataMapInfo ( dodztnquqb * const iv3y41y4ea ,
mk15kpcwx1 * localX , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( iv3y41y4ea -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( iv3y41y4ea -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( iv3y41y4ea -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Traction_Model_InitializeDataAddr ( iv3y41y4ea ->
DataMapInfo . dataAddress , localX ) ; rtwCAPI_SetDataAddressMap ( iv3y41y4ea
-> DataMapInfo . mmi , iv3y41y4ea -> DataMapInfo . dataAddress ) ;
Traction_Model_InitializeVarDimsAddr ( iv3y41y4ea -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( iv3y41y4ea -> DataMapInfo .
mmi , iv3y41y4ea -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
iv3y41y4ea -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
iv3y41y4ea -> DataMapInfo . mmi , ( NULL ) ) ;
Traction_Model_InitializeLoggingFunctions ( iv3y41y4ea -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( iv3y41y4ea -> DataMapInfo . mmi ,
iv3y41y4ea -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
iv3y41y4ea -> DataMapInfo . mmi , & iv3y41y4ea -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( iv3y41y4ea -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( iv3y41y4ea -> DataMapInfo .
mmi , 0 ) ; Traction_Model_InitializeSystemRan ( iv3y41y4ea , iv3y41y4ea ->
DataMapInfo . systemRan , iv3y41y4ea -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( iv3y41y4ea -> DataMapInfo . mmi ,
iv3y41y4ea -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( iv3y41y4ea
-> DataMapInfo . mmi , iv3y41y4ea -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( iv3y41y4ea -> DataMapInfo . mmi , & iv3y41y4ea ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Traction_Model_host_InitializeDataMapInfo (
Traction_Model_host_DataMapInfo_T * dataMap , const char * path ) {
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
