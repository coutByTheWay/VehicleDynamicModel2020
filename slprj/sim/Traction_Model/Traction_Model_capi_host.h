#ifndef RTW_HEADER_Traction_Model_cap_host_h_
#define RTW_HEADER_Traction_Model_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Traction_Model_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Traction_Model_host_InitializeDataMapInfo (
Traction_Model_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
