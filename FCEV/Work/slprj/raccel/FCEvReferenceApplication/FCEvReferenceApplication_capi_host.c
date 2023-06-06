#include "FCEvReferenceApplication_capi_host.h"
static FCEvReferenceApplication_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        FCEvReferenceApplication_host_InitializeDataMapInfo(&(root), "FCEvReferenceApplication");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
