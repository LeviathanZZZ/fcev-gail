#ifndef RTW_HEADER_FCElectricPlant_types_h_
#define RTW_HEADER_FCElectricPlant_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_AFnjoI7EtZZSooCsoe6EE_
#define DEFINED_TYPEDEF_FOR_struct_AFnjoI7EtZZSooCsoe6EE_
typedef struct { real_T DischrgLmt_bpt [ 11 ] ; real_T ChrgLmt_bpt [ 11 ] ;
real_T SOC_bpt [ 11 ] ; real_T BattDischrgMax ; real_T BattChrgMax ; real_T
noLoadV [ 42 ] ; real_T CapSOCBp [ 6 ] ; real_T BattTempBp [ 7 ] ; real_T
CapLUTBp [ 101 ] ; real_T Em [ 101 ] ; real_T Ns ; real_T Np ; real_T
BattChargeMax ; real_T BattCapInit ; real_T AH [ 7 ] ; real_T initSOC ;
real_T RInt [ 42 ] ; real_T R0 [ 42 ] ; real_T thermalMass ; }
struct_AFnjoI7EtZZSooCsoe6EE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_H6WPvM8rfrwYCCVKK0ESLD_
#define DEFINED_TYPEDEF_FOR_struct_H6WPvM8rfrwYCCVKK0ESLD_
typedef struct { real_T Vout ; real_T Plim ; real_T currMax ; real_T eff ;
real_T convLoss ; real_T tc ; real_T Vinit ; real_T thermalMass ; real_T
Vdroop ; real_T avgSwitchResistance ; real_T diodeFwdVolt ; real_T
diodeOnResistance ; real_T diodeOffConductance ; real_T inductance ; real_T
inductorSeriesResistance ; real_T capacitance ; real_T CapEffSeriesResistance
; } struct_H6WPvM8rfrwYCCVKK0ESLD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_DwpI6bQuIOImzafpnoLEKE_
#define DEFINED_TYPEDEF_FOR_struct_DwpI6bQuIOImzafpnoLEKE_
typedef struct { real_T Vout ; real_T Plim ; real_T Vdroop ; real_T currMax ;
real_T eff ; real_T convLoss ; real_T tc ; real_T Vinit ; real_T thermalMass
; real_T conductance ; real_T inductance ; real_T capacitance ; real_T
diodeFwdVolt ; real_T diodeOnResistance ; real_T diodeOffConductance ; real_T
avgSwitchResistance ; real_T inductorSeriesResistance ; real_T
CapEffSeriesResistance ; } struct_DwpI6bQuIOImzafpnoLEKE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_zSfISpRpY6aADD7OgXSulC_
#define DEFINED_TYPEDEF_FOR_struct_zSfISpRpY6aADD7OgXSulC_
typedef struct { real_T area ; real_T thick ; real_T cond ; real_T mass ;
real_T sh ; } struct_zSfISpRpY6aADD7OgXSulC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_JO2GXfI9g1rAenTIGmuhPD_
#define DEFINED_TYPEDEF_FOR_struct_JO2GXfI9g1rAenTIGmuhPD_
typedef struct { real_T maxT [ 12 ] ; real_T w_eff_bp [ 12 ] ; real_T Tc_Mot
; real_T T_eff_bp [ 15 ] ; real_T efficiency_table [ 180 ] ; real_T supplyRes
; real_T inertia ; real_T damping ; real_T thermalMass ;
struct_zSfISpRpY6aADD7OgXSulC winding ; struct_zSfISpRpY6aADD7OgXSulC
windingIron ; struct_zSfISpRpY6aADD7OgXSulC ironStack ; }
struct_JO2GXfI9g1rAenTIGmuhPD ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 22
#endif
#ifndef SS_INT64
#define SS_INT64 23
#endif
typedef struct locdm2fqb0b_ locdm2fqb0b ; typedef struct fjefo04diq
m5e23pbc2h ;
#endif
