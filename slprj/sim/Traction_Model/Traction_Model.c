#include "Traction_Model_capi.h"
#include "Traction_Model.h"
#include "Traction_Model_private.h"
static RegMdlInfo rtMdlInfo_Traction_Model [ 42 ] = { { "hupbxjr5fjc" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Traction_Model" } , {
"dkix11o1kt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "intupqur3k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "ihj1i2nznk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "jp4wvwdhrk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "mepedpiocj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "miqt3mwx52" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "mk15kpcwx1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "cyeg1fhdcr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "l3vnqhezi0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "nbpsl3osla" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "hglikurbuc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "e5klaro3zd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "eifhdams3s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "j2mttcbyw2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "bivkusxkvs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "m2zg1eo514" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "k4l0fa3the" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "dfuikadvmz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "gzopvquhr4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "mxvoph4n2k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "h4khlhkpbr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "egg1w3wyhv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "d4dt3vqtf4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , { "Traction_Model" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "fcdjx2mzym" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Traction_Model" } ,
{ "ia5tf00pcr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Traction_Model" } , { "dodztnquqb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "Traction_Model" } , {
"mr_Traction_Model_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Traction_Model" } , { "mr_Traction_Model_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Traction_Model" } , {
"mr_Traction_Model_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "Traction_Model" } , { "Traction_Model.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "Traction_Model.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 ,
( void * ) "Traction_Model" } } ; g0scevvpmb3 g0scevvpmb = { 0.0 , 7.07 , 1.0
, 1.1455 , 1.0 , 2.0 , 0.864 , 6600.0 } ; void mxvoph4n2k ( mk15kpcwx1 *
localX ) { localX -> ofofuop4ar = g0scevvpmb . P_0 ; } void gzopvquhr4 (
mk15kpcwx1 * localX ) { localX -> ofofuop4ar = g0scevvpmb . P_0 ; } void
Traction_Model ( dodztnquqb * const iv3y41y4ea , const real_T * jygmymdn4v ,
real_T * j1ad5bfwvp , real_T * ay0vaw0dfl , eifhdams3s * localB , mk15kpcwx1
* localX ) { if ( rtmIsMajorTimeStep ( iv3y41y4ea ) && rtmIsSampleHit (
iv3y41y4ea , 1 , 0 ) ) { localB -> ak51yqniuf = ( g0scevvpmb . P_4 /
g0scevvpmb . P_6 + g0scevvpmb . P_5 ) + g0scevvpmb . P_7 * g0scevvpmb . P_6 ;
} * j1ad5bfwvp = localX -> ofofuop4ar ; * ay0vaw0dfl = * j1ad5bfwvp /
g0scevvpmb . P_6 ; localB -> kzkgqwmjoi = * jygmymdn4v / localB -> ak51yqniuf
- 0.5 * g0scevvpmb . P_3 * g0scevvpmb . P_1 * g0scevvpmb . P_2 * g0scevvpmb .
P_6 / localB -> ak51yqniuf * ( * j1ad5bfwvp * * j1ad5bfwvp ) ; } void
Traction_ModelTID2 ( void ) { } void dfuikadvmz ( dodztnquqb * const
iv3y41y4ea ) { if ( rtmIsMajorTimeStep ( iv3y41y4ea ) ) { if ( memcmp (
iv3y41y4ea -> nonContDerivSignal [ 0 ] . pCurrVal , iv3y41y4ea ->
nonContDerivSignal [ 0 ] . pPrevVal , iv3y41y4ea -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( iv3y41y4ea -> nonContDerivSignal [
0 ] . pPrevVal , iv3y41y4ea -> nonContDerivSignal [ 0 ] . pCurrVal ,
iv3y41y4ea -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( iv3y41y4ea -> _mdlRefSfcnS ) ; } } } void
dfuikadvmzTID2 ( void ) { } void k4l0fa3the ( eifhdams3s * localB ,
miqt3mwx52 * localXdot ) { localXdot -> ofofuop4ar = localB -> kzkgqwmjoi ; }
void bivkusxkvs ( dodztnquqb * const iv3y41y4ea ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( iv3y41y4ea ->
_mdlRefSfcnS , "Traction_Model" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void h4khlhkpbr (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , dodztnquqb * const iv3y41y4ea , eifhdams3s * localB ,
mk15kpcwx1 * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) iv3y41y4ea , 0 , sizeof ( dodztnquqb ) ) ;
iv3y41y4ea -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; iv3y41y4ea ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; iv3y41y4ea -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; iv3y41y4ea -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( iv3y41y4ea -> _mdlRefSfcnS , "Traction_Model" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> kzkgqwmjoi = 0.0
; localB -> ak51yqniuf = 0.0 ; } Traction_Model_InitializeDataMapInfo (
iv3y41y4ea , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != (
NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( iv3y41y4ea -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( iv3y41y4ea -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( iv3y41y4ea -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } iv3y41y4ea -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) iv3y41y4ea -> NonContDerivMemory . mr_nonContSig0 ; iv3y41y4ea ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
iv3y41y4ea -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> ak51yqniuf ) ; ; } void mr_Traction_Model_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Traction_Model , 42 ) ; * retVal = 1 ; } static void
mr_Traction_Model_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_Traction_Model_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Traction_Model_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Traction_Model_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Traction_Model_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_Traction_Model_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Traction_Model_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Traction_Model_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Traction_Model_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Traction_Model_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Traction_Model_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_Traction_Model_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_Traction_Model_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_Traction_Model_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Traction_Model_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Traction_Model_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Traction_Model_GetDWork ( const
hupbxjr5fjc * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = { "rtb"
, "NULL->rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_Traction_Model_cacheDataAsMxArray ( ssDW ,
0 , 0 , & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; ( void )
mdlrefDW ; return ssDW ; } void mr_Traction_Model_SetDWork ( hupbxjr5fjc *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_Traction_Model_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 ,
0 , sizeof ( mdlrefDW -> rtb ) ) ; } void
mr_Traction_Model_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1127160603U , 3906083803U , 2804828667U , 2986194498U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Traction_Model" , & chksum [ 0 ]
) ; } mxArray * mr_Traction_Model_GetSimStateDisallowedBlocks ( ) { return
NULL ; }
