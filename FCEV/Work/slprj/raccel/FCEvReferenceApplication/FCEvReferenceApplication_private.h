#ifndef RTW_HEADER_FCEvReferenceApplication_private_h_
#define RTW_HEADER_FCEvReferenceApplication_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "FCEvReferenceApplication.h"
#include "FCEvReferenceApplication_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern void frb52ryevs ( real_T rtp_IC , aqpkndaxav * localB ) ; extern void
pi2ok4w0z3 ( SimStruct * rtS_p , oycks5i3te * localDW ) ; extern void
gvoongqpzo ( oycks5i3te * localDW ) ; extern void mfp3l0luim ( SimStruct *
rtS_i , boolean_T dfkwj4xiq4 , real_T of3mkwktaa , aqpkndaxav * localB ,
oycks5i3te * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
