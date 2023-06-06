/* 
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * 
 * File: DrivetrainEv.c
 *  
 * Code generated for Simulink model 'DrivetrainEv'.
 * 
 * Model version                  : 7.6
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Mar 27 13:54:50 2023
 * 
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */



    
#include "DrivetrainEv.h"

#include "rtwtypes.h"

#include <math.h>

#include "interp2_gQgEamix.h"

#include "rt_powd_snf.h"

#include <string.h>

#include "rt_atan2d_snf.h"

#include <emmintrin.h>

#include "automldiffopen_RcYoMae5.h"

#include "DrivetrainEv_private.h"

#include "look1_binlxpw.h"

#include "look1_binlcpw.h"

#include "zero_crossing_types.h"

#include "rt_nonfinite.h"



    


    


    


    
    

/* Named constants for Chart: '<S152>/Clutch' */
#define DrivetrainEv_IN_Locked ((uint8_T)1U)
#define DrivetrainEv_IN_Slipping ((uint8_T)2U)


    

/* Named constants for Chart: '<S194>/Clutch' */
#define DrivetrainEv_IN_Locked_j ((uint8_T)1U)
#define DrivetrainEv_IN_Slipping_o ((uint8_T)2U)




    


    


    


    


    


    


    


    


    


    /* Forward declaration for local functions */


                
                

                                 static void DrivetrainEv_automltirediv0prot(real_T u, real_T tol, real_T *y, real_T *yabs);
                                





                
                

                                 static real_T Drivetrain_automltirepurelongFx(real_T kappa, real_T Vx, real_T Fz, real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN, real_T b_FZMAX, real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX, real_T PCX1, real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2, real_T PEX3, real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1, real_T PHX2, real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3, real_T PPX4, real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T lam_Kxkappa, real_T lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx);
                                





                
                

                                 static real_T DrivetrainE_automltirelongMySAE(real_T Fz, real_T omega, real_T Vx, real_T press, real_T QSY1, real_T QSY2, real_T QSY3, real_T QSY7, real_T QSY8, real_T UNLOADED_RADIUS, real_T b_FZMIN, real_T b_FZMAX, real_T PRESMIN, real_T PRESMAX);
                                





                
                

                                 static real_T Drivetra_automltirelongMyMapped(real_T omega, real_T Fz, real_T Vx, const real_T VxMy[3], const real_T FzMy[3], const real_T MyMap[9], real_T b_FZMAX);
                                





                
                

                                 static real_T DrivetrainE_automltirelongMyISO(real_T Fz, real_T omega, real_T Tamb, real_T Fpl, real_T Cr, real_T Kt, real_T Tmeas, real_T Re, real_T b_FZMIN, real_T b_FZMAX, real_T TMIN, real_T TMAX);
                                



/* Forward declaration for local functions */


                
                

                                 static boolean_T DrivetrainEv_detectSlip_a(real_T Tout, real_T Tfmaxs, B_Clutch_DrivetrainEv_T *localB);
                                





                
                

                                 static boolean_T DrivetrainEv_detectLockup_o(real_T Tout, real_T Tfmaxs, real_T rtp_br, B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW);
                                



/* Forward declaration for local functions */


                
                

                                 static boolean_T DrivetrainEv_detectSlip_e(real_T Tout, real_T Tfmaxs, B_Clutch_DrivetrainEv_g_T *localB);
                                





                
                

                                 static boolean_T DrivetrainEv_detectLockup_p(real_T Tout, real_T Tfmaxs, real_T rtp_br, B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW);
                                






    


        

                        


        /* Function for MATLAB Function: '<S137>/Simple Magic Tire' */

            
                    
        static void DrivetrainEv_automltirediv0prot(real_T u, real_T tol, real_T *y, real_T *yabs)
        {
            real_T varargin_1;
int32_T trueCount;
boolean_T yneginds;
boolean_T ytolinds;
*/*@>77d50*/yabs/*@>3924b*/ = /*@>77e06*/fabs(/*@>6e501*/u);
/*@>6e4e6*/ytolinds/*@>15fb7*/ = (*/*@<7b870*//*@>77d53*/yabs/*@>16006*/ < /*@>6e4e4*/tol);
trueCount = 0;
if (/*@>6e503*/ytolinds) {
    trueCount = 1;
}
/*@>73bad*/if (/*@>73ba9*/trueCount/*@>73ba7*/ - /*@>73baa*/1/*@>73e7e*/ >= /*@>73bab*/0) {
    /*@>71f1f*/varargin_1/*@>71f21*/ = */*@<7b861*//*@>77d56*/yabs/*@>696ef*/ / /*@>6e5ae*/tol;
    /*@>767ad*/varargin_1/*@>69707*/ = /*@>6e5a7*/2.0/*@>6ec20*/ * /*@>6e5a8*/tol/*@>696e4*/ / (/*@>6e52b*/3.0/*@>696ec*/ - /*@>7287b*/varargin_1/*@>72879*/ * /*@>7287d*/varargin_1);
}
*/*@>77d59*/y/*@>2021f*/ = */*@<7b86b*//*@>77d5c*/yabs;
/*@>6e4f5*/yneginds/*@>15fd7*/ = (/*@>6e4f2*/u/*@>20232*/ < /*@>6e4f4*/0.0);
trueCount = /*@>7b835*/-1;
if (/*@>6e5e8*/ytolinds) {
    */*@>77d5f*/y/*@>6c76e*/ = /*@>767d4*/varargin_1;
}
if (/*@>6e5ec*/yneginds) {
    trueCount = 0;
}
*/*@>77d62*/yabs/*@>20224*/ = */*@<7b857*//*@>77d65*/y;
/*@>73b78*/if (/*@>73b75*/trueCount/*@>73e87*/ >= /*@>73b76*/0) {
    /*@>76829*/varargin_1/*@>698ac*/ = -/*@<6ec22*/*/*@<7b856*//*@>77d68*/y;
}
if (/*@>6e505*/yneginds) {
    */*@>77d6b*/y/*@>6c74c*/ = /*@>76849*/varargin_1;
}


        }
            

            





                        


        /* Function for MATLAB Function: '<S137>/Simple Magic Tire' */

            
                    
        static real_T Drivetrain_automltirepurelongFx(real_T kappa, real_T Vx, real_T Fz, real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN, real_T b_FZMAX, real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX, real_T PCX1, real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2, real_T PEX3, real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1, real_T PHX2, real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3, real_T PPX4, real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T lam_Kxkappa, real_T lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx)
        {
            real_T Cx;
real_T CxDxp;
real_T Dx;
real_T Dx_tmp;
real_T Ex;
real_T Fxo;
real_T a__1;
real_T b_idx_0;
real_T dfz;
real_T dpi;
real_T kappa_x;
real_T lam_mux_star;


/*@>6e789*/b_idx_0/*@>227e0*/ = /*@>6e682*/Fz;
if (/*@>72957*/Fz/*@>72955*/ < /*@>72959*/b_FZMIN) {
    /*@>6e7bb*/b_idx_0/*@>6c829*/ = /*@>6e784*/b_FZMIN;
}
if (/*@>7295d*/b_idx_0/*@>7295b*/ > /*@>7295f*/b_FZMAX) {
    /*@>6e7b9*/b_idx_0/*@>6c819*/ = /*@>6e77d*/b_FZMAX;
}
/*@>6e78b*/Cx/*@>22916*/ = /*@>6e68e*/press;
if (/*@>72963*/press/*@>72961*/ < /*@>72965*/PRESMIN) {
    /*@>6e7b7*/Cx/*@>6c809*/ = /*@>6e776*/PRESMIN;
}
if (/*@>72969*/Cx/*@>72967*/ > /*@>7296b*/PRESMAX) {
    /*@>6e7b5*/Cx/*@>6c7f9*/ = /*@>6e76f*/PRESMAX;
}
/*@>6e698*/dpi/*@>2259b*/ = (/*@>6e79b*/Cx/*@>229c5*/ - /*@>6e694*/NOMPRES)/*@>229c7*/ / /*@>6e696*/NOMPRES;
/*@>6e6a2*/dfz/*@>225a9*/ = (/*@>6e79d*/b_idx_0/*@>229cc*/ - /*@>6e69a*/FNOMIN/*@>6ece2*/ * /*@>6e69c*/lam_Fzo)/*@>229ce*/ / /*@>6e69e*/FNOMIN/*@>6ecde*/ * /*@>6e6a0*/lam_Fzo;
/*@>6e6a6*/kappa_x/*@>225b9*/ = (/*@>6e6e7*/PHX2/*@>6ecda*/ * /*@>6e6e9*/dfz/*@>3dac4*/ + /*@>6e6e5*/PHX1)/*@>6ecd6*/ * /*@>6e6eb*/lam_Hx/*@>229dc*/ + /*@>6e6a4*/kappa;
/*@>6e6db*/lam_mux_star/*@>225c3*/ = -/*@<6ecd3*//*@>77e08*/fabs(/*@>6e6ed*/Vx)/*@>6ecd1*/ * /*@>6e6a8*/kappa;
/*@>6e6b1*/lam_mux_star/*@>225de*/ = /*@>6e6aa*/lam_mux/*@>239be*/ / (/*@>77e0a*/sqrt(/*@>6e71c*/lam_mux_star/*@>6eccd*/ * /*@>6e71e*/lam_mux_star)/*@>6ecc9*/ * /*@>6e6ac*/lam_muV/*@>239bc*/ / /*@>6e6ae*/LONGVL/*@>239bd*/ + /*@>6e6b0*/1.0);
/*@>6e6b7*/Cx/*@>2260a*/ = /*@>6e6b3*/PCX1/*@>6ecc5*/ * /*@>6e6b5*/lam_Cx;
/*@>742b2*/Dx_tmp/*@>742b4*/ = /*@>6e720*/dpi/*@>6ecb9*/ * /*@>6e722*/dpi;
/*@>6e6bb*/Dx/*@>2261c*/ = ((/*@>6e6f5*/PPX3/*@>6ecb1*/ * /*@>6e6f7*/dpi/*@>3dafe*/ + /*@>6e6f9*/1.0)/*@>3dafd*/ + /*@>742b6*/Dx_tmp/*@>6ecb5*/ * /*@>6e6fa*/PPX4)/*@>6eca9*/ * (/*@>6e6f1*/PDX2/*@>6ecad*/ * /*@>6e6f3*/dfz/*@>3daf5*/ + /*@>6e6ef*/PDX1)/*@>6eca5*/ * (/*@>6e6fc*/1.0/*@>3db0a*/ - /*@>6e724*/b_gamma/*@>6ecc1*/ * /*@>6e726*/b_gamma/*@>6ecbd*/ * /*@>6e6fd*/PDX3)/*@>6eca1*/ * /*@>6e6ff*/lam_mux_star/*@>6ec9d*/ * /*@>6e79f*/b_idx_0;
/*@>6e6cc*/Ex/*@>22639*/ = ((/*@>6e6c1*/PEX2/*@>6ec89*/ * /*@>6e6c3*/dfz/*@>23ab3*/ + /*@>6e6bf*/PEX1)/*@>23ab9*/ + /*@>6e701*/dfz/*@>6ec91*/ * /*@>6e703*/dfz/*@>6ec8d*/ * /*@>6e6c5*/PEX3)/*@>6ec85*/ * (/*@>6e6c9*/1.0/*@>23fbb*/ - /*@>77e0c*/tanh(/*@>6e728*/10.0/*@>6ec99*/ * /*@>6e729*/kappa_x)/*@>6ec95*/ * /*@>6e6c7*/PEX4)/*@>6ec81*/ * /*@>6e6ca*/lam_Ex;
if (/*@>6e758*/Cx/*@>6c7c3*/ < /*@>6e75a*/0.0) {
    /*@>6e7af*/Cx/*@>6c7d1*/ = /*@>6e760*/0.0;
}
if (/*@>6e75d*/Dx/*@>6c7cc*/ < /*@>6e75f*/0.0) {
    /*@>6e7b1*/Dx/*@>6c7e0*/ = /*@>6e766*/0.0;
}
if (/*@>6e763*/Ex/*@>6c7db*/ > /*@>6e765*/1.0) {
    /*@>6e7b3*/Ex/*@>6c7ea*/ = /*@>6e769*/1.0;
}
/*@[7b64b*/DrivetrainEv_automltirediv0prot(/*@>7b9d9*/Cx/*@>7b9d8*/ * /*@>7b9da*/Dx, /*@>7b9e4*/0.1, &/*@>7b9ef*/CxDxp, &/*@>7b9fa*/a__1)/*@]*/;
/*@>742c2*/dpi/*@>742c4*/ = (/*@>74949*/PKX2/*@>74947*/ * /*@>7494b*/dfz/*@>74946*/ + /*@>7494d*/PKX1)/*@>74945*/ * /*@>7494f*/b_idx_0/*@>74944*/ * /*@>77e12*/exp(/*@>74954*/PKX3/*@>74952*/ * /*@>74956*/dfz)/*@>74943*/ * ((/*@>7495b*/PPX1/*@>74959*/ * /*@>7495d*/dpi/*@>74958*/ + /*@>7495e*/1.0)/*@>74957*/ + Dx_tmp/*@>7495f*/ * /*@>74963*/PPX2)/*@>74942*/ * /*@>74965*/lam_Kxkappa/*@>74941*/ / /*@>74967*/CxDxp/*@>6ec3d*/ * /*@>6e744*/kappa_x;
/*@>6e6d7*/Fxo/*@>2268d*/ = /*@>77e18*/sin(/*@>77e16*/atan(dpi/*@>3dd80*/ - (dpi/*@>3dd8b*/ - /*@>77e14*/atan(/*@>742c6*/dpi))/*@>6ec35*/ * /*@>6e7ab*/Ex)/*@>6ec2d*/ * /*@>6e7a9*/Cx)/*@>6ec29*/ * /*@>6e7a7*/Dx/*@>24743*/ + (/*@>6e716*/PVX2/*@>6ec4d*/ * /*@>6e718*/dfz/*@>3dbc7*/ + /*@>6e714*/PVX1)/*@>6ec49*/ * /*@>6e7ad*/b_idx_0/*@>6ec45*/ * (/*@>6e733*/lam_mux_star/*@>6ec51*/ * /*@>6e735*/10.0/*@>3dce8*/ / (/*@>6e736*/9.0/*@>6ec55*/ * /*@>6e737*/lam_mux_star/*@>3dced*/ + /*@>6e739*/1.0))/*@>6ec41*/ * /*@>6e71a*/lam_Vx;
return Fxo;


        }
            

            



            


                        


        /* Function for MATLAB Function: '<S137>/Simple Magic Tire' */

            
                    
        static real_T DrivetrainE_automltirelongMySAE(real_T Fz, real_T omega, real_T Vx, real_T press, real_T QSY1, real_T QSY2, real_T QSY3, real_T QSY7, real_T QSY8, real_T UNLOADED_RADIUS, real_T b_FZMIN, real_T b_FZMAX, real_T PRESMIN, real_T PRESMAX)
        {
            real_T My;
real_T b_idx_0;
real_T d_idx_0;





/*@>6e9a0*/b_idx_0/*@>2c9eb*/ = /*@>6e94c*/press;
if (/*@>72aeb*/press/*@>72ae9*/ < /*@>72aed*/PRESMIN) {
    /*@>6e9b6*/b_idx_0/*@>6c891*/ = /*@>6e99b*/PRESMIN;
}
if (/*@>72af1*/b_idx_0/*@>72aef*/ > /*@>72af3*/PRESMAX) {
    /*@>6e9b4*/b_idx_0/*@>6c881*/ = /*@>6e994*/PRESMAX;
}
/*@>6e9a2*/d_idx_0/*@>2cb21*/ = /*@>6e958*/Fz;
if (/*@>72af7*/Fz/*@>72af5*/ < /*@>72af9*/b_FZMIN) {
    /*@>6e9b2*/d_idx_0/*@>6c871*/ = /*@>6e98d*/b_FZMIN;
}
if (/*@>72afd*/d_idx_0/*@>72afb*/ > /*@>72aff*/b_FZMAX) {
    /*@>6e9b0*/d_idx_0/*@>6c861*/ = /*@>6e986*/b_FZMAX;
}
/*@>6e966*/My/*@>2c92e*/ = ((/*@>6e962*/QSY2/*@>6ed34*/ * /*@>77e1a*/fabs(/*@>6e972*/Vx)/*@>2cbd9*/ + /*@>6e960*/QSY1)/*@>2cbdf*/ + /*@>6e974*/Vx/*@>6ed3c*/ * /*@>6e976*/Vx/*@>6ed38*/ * /*@>6e964*/QSY3)/*@>6ed2c*/ * (/*@>77e1c*/tanh(/*@>6e970*/omega)/*@>6ed30*/ * /*@>6e95e*/UNLOADED_RADIUS)/*@>6ed28*/ * (/*@[7b664*/rt_powd_snf(/*@>7bafc*/d_idx_0, /*@>7bb06*/QSY7)/*@]*//*@>6ed40*/ * /*@[7b67d*/rt_powd_snf(/*@>7bb1a*/b_idx_0, /*@>7bb24*/QSY8)/*@]*/);
return My;


        }
            

            



            


                        


        /* Function for MATLAB Function: '<S137>/Simple Magic Tire' */

            
                    
        static real_T Drivetra_automltirelongMyMapped(real_T omega, real_T Fz, real_T Vx, const real_T VxMy[3], const real_T FzMy[3], const real_T MyMap[9], real_T b_FZMAX)
        {
            real_T MyMap_0[9];
real_T My;
real_T b_idx_0;
int32_T i;





/*@>6ea1e*/b_idx_0/*@>2e9f3*/ = /*@>6e9ce*/Fz;
if (/*@>72b42*/Fz/*@>72b40*/ < /*@>72b43*/0.0) {
    /*@>6ea28*/b_idx_0/*@>6c910*/ = /*@>6ea18*/0.0;
}
if (/*@>72b47*/b_idx_0/*@>72b45*/ > /*@>72b49*/b_FZMAX) {
    /*@>6ea26*/b_idx_0/*@>6c900*/ = /*@>6ea11*/b_FZMAX;
}
/*@>6a128*/for (/*@>7bcb4*/i = /*@>7bcb3*/0; /*@>7bcbe*/i < /*@>7bcbc*/3; /*@>7bcba*/i/*@>7bcc2*/++) {
    /*@>6e9ef*/MyMap_0/*@>6c8b1*/[/*@>6e9f1*/3/*@>6ed4c*/ * /*@>6e9f2*/i]/*@>6c8b0*/ = /*@>79966*/MyMap/*@>79968*/[/*@>79964*/i];
    /*@>6e9f8*/MyMap_0/*@>6c8c9*/[/*@>6e9fa*/3/*@>6ed49*/ * /*@>6e9fb*/i/*@>6c8cb*/ + /*@>6ea01*/1]/*@>6c8c8*/ = /*@>7996f*/MyMap/*@>79971*/[/*@>7996c*/i/*@>7996a*/ + /*@>7996d*/3];
    /*@>6ea02*/MyMap_0/*@>6c8e1*/[/*@>6ea04*/3/*@>6ed46*/ * /*@>6ea05*/i/*@>6c8e3*/ + /*@>6ea0b*/2]/*@>6c8e0*/ = /*@>79978*/MyMap/*@>7997a*/[/*@>79975*/i/*@>79973*/ + /*@>79976*/6];
}
/*@>6e9da*/My/*@>2e950*/ = /*@>77e22*/tanh(/*@>6e9e0*/omega)/*@>6ed44*/ * /*@[7b699*/interp2_gQgEamix(/*@>7bd3e*/VxMy, /*@>7bd48*/FzMy, /*@>7bd52*/MyMap_0, /*@>7bd5c*/Vx, /*@>7bd66*/b_idx_0)/*@]*/;
return My;


        }
            

            





                        


        /* Function for MATLAB Function: '<S137>/Simple Magic Tire' */

            
                    
        static real_T DrivetrainE_automltirelongMyISO(real_T Fz, real_T omega, real_T Tamb, real_T Fpl, real_T Cr, real_T Kt, real_T Tmeas, real_T Re, real_T b_FZMIN, real_T b_FZMAX, real_T TMIN, real_T TMAX)
        {
            real_T b_idx_0;
real_T d_idx_0;
/*@>6ea95*/b_idx_0/*@>2edc0*/ = /*@>6ea4a*/Tamb;
if (/*@>72b94*/Tamb/*@>72b92*/ < /*@>72b96*/TMIN) {
    /*@>6eaab*/b_idx_0/*@>6c964*/ = /*@>6ea90*/TMIN;
}
if (/*@>72b9a*/b_idx_0/*@>72b98*/ > /*@>72b9c*/TMAX) {
    /*@>6eaa9*/b_idx_0/*@>6c954*/ = /*@>6ea89*/TMAX;
}
/*@>6ea97*/d_idx_0/*@>2eef6*/ = /*@>6ea56*/Fz;
if (/*@>72ba0*/Fz/*@>72b9e*/ < /*@>72ba2*/b_FZMIN) {
    /*@>6eaa7*/d_idx_0/*@>6c944*/ = /*@>6ea82*/b_FZMIN;
}
if (/*@>72ba6*/d_idx_0/*@>72ba4*/ > /*@>72ba8*/b_FZMAX) {
    /*@>6eaa5*/d_idx_0/*@>6c934*/ = /*@>6ea7b*/b_FZMAX;
}
return (/*@>6eaa1*/d_idx_0/*@>6ed5e*/ * /*@>6ea60*/Cr/*@>6ed5a*/ * /*@>6ea62*/0.001/*@>2efb4*/ / ((/*@>6eaa3*/b_idx_0/*@>2efb1*/ - /*@>6ea65*/Tmeas)/*@>6ed62*/ * /*@>6ea63*/Kt/*@>2efb3*/ + /*@>6ea67*/1.0)/*@>2efb5*/ + /*@>6ea5e*/Fpl)/*@>6ed51*/ * (-/*@<6ed57*//*@>77e2e*/tanh(/*@>6ea72*/omega)/*@>6ed55*/ * /*@>6ea5c*/Re);


        }
            

            


            
        


                    /* 
 * Output and update for atomic system:
 *    '<S137>/Simple Magic Tire'
 *    '<S179>/Simple Magic Tire'
 */

            
                            

        


          void DrivetrainEv_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz, real_T rtu_Omega, real_T rtu_Vx, real_T rtu_MagicPeak, real_T rtu_MagicPeak_b, real_T rtu_MagicPeak_n, real_T rtu_MagicPeak_a, real_T rtu_MagicPeak_i, const real_T rtu_MagicFxo[34], const real_T rtu_kappaFx[3], const real_T rtu_FzFx[3], const real_T rtu_FxMap[9], real_T rtu_RollRes, real_T rtu_RollRes_j, real_T rtu_RollRes_d, real_T rtu_RollRes_n, real_T rtu_RollRes_c, real_T rtu_RollRes_b, real_T rtu_RollRes_h, real_T rtu_RollRes_d1, real_T rtu_RollRes_i, real_T rtu_RollRes_d2, real_T rtu_RollRes_o, real_T rtu_RollRes_bt, real_T rtu_RollRes_f, real_T rtu_RollRes_k, real_T rtu_RollRes_fo, real_T rtu_RollRes_p, const real_T rtu_VxMy[3], const real_T rtu_FzMy[3], const real_T rtu_MyMap[9], real_T rtu_rho, real_T rtu_FxType, real_T rtu_rollingType, real_T rtu_vertType, real_T *rty_Fx, real_T *rty_My, real_T *rty_Kappa, real_T *rty_Re, real_T *rty_FzTire, real_T rtp_FZMAX, real_T rtp_FZMIN, real_T rtp_VXLOW, real_T rtp_kappamax)
    {
    
                                            
            
real_T rtu_FxMap_0[9];
real_T FxType;
real_T Fz;
real_T Omega;
real_T ReNom;
real_T Vx;
real_T Vxpabs;
real_T a__1;
real_T b_FZMAX;
real_T b_FZMIN;
real_T b_Re;
real_T b_kappamax;
real_T rollingType;
real_T rtb_TmpSignalConversionAtSFu__0;
real_T rtb_TmpSignalConversionAtSFu__1;
real_T rtb_TmpSignalConversionAtSFu__2;
real_T rtb_TmpSignalConversionAtSFu__3;
real_T rtb_TmpSignalConversionAtSFu__4;
real_T rtb_TmpSignalConversionAtSFun_0;
real_T rtb_TmpSignalConversionAtSFun_1;
real_T rtb_TmpSignalConversionAtSFun_2;
real_T rtb_TmpSignalConversionAtSFun_3;
real_T rtb_TmpSignalConversionAtSFun_4;
real_T rtb_TmpSignalConversionAtSFun_5;
real_T rtb_TmpSignalConversionAtSFun_6;
real_T rtb_TmpSignalConversionAtSFun_7;
real_T rtb_TmpSignalConversionAtSFun_8;
real_T rtb_TmpSignalConversionAtSFun_9;
real_T rtb_TmpSignalConversionAtSFun_a;
real_T rtb_TmpSignalConversionAtSFun_b;
real_T rtb_TmpSignalConversionAtSFun_c;
real_T rtb_TmpSignalConversionAtSFun_d;
real_T rtb_TmpSignalConversionAtSFun_e;
real_T rtb_TmpSignalConversionAtSFun_f;
int32_T trueCount;

            
        




                                                            
        




                                                    
                                    


















































/* {S!d2}SignalConversion generated from: '<S147>/ SFunction ' */
/*@>6e3c1*/rtb_TmpSignalConversionAtSFun_0/*@>660be*/ = /*@>796ca*/rtu_RollRes;
/*@>6e3c3*/rtb_TmpSignalConversionAtSFun_1/*@>660c7*/ = /*@>796cc*/rtu_RollRes_j;
/*@>6e3c5*/rtb_TmpSignalConversionAtSFun_2/*@>660d0*/ = /*@>796ce*/rtu_RollRes_d;
/*@>6e3c7*/rtb_TmpSignalConversionAtSFun_3/*@>660d9*/ = /*@>796d0*/rtu_RollRes_n;
/*@>6e3c9*/rtb_TmpSignalConversionAtSFun_4/*@>660e2*/ = /*@>796d2*/rtu_RollRes_c;
/*@>6e3cb*/rtb_TmpSignalConversionAtSFun_5/*@>660eb*/ = /*@>796d4*/rtu_RollRes_b;
/*@>6e3cd*/rtb_TmpSignalConversionAtSFun_6/*@>660f4*/ = /*@>796d6*/rtu_RollRes_h;
/*@>6e3cf*/rtb_TmpSignalConversionAtSFun_7/*@>660fd*/ = /*@>796d8*/rtu_RollRes_d1;
/*@>6e3d1*/rtb_TmpSignalConversionAtSFun_8/*@>66106*/ = /*@>796da*/rtu_RollRes_i;
/*@>6e3d3*/rtb_TmpSignalConversionAtSFun_9/*@>6610f*/ = /*@>796dc*/rtu_RollRes_d2;
/*@>6e3d5*/rtb_TmpSignalConversionAtSFun_a/*@>66118*/ = /*@>796de*/rtu_RollRes_o;
/*@>6e3d7*/rtb_TmpSignalConversionAtSFun_b/*@>66121*/ = /*@>796e0*/rtu_RollRes_bt;
/*@>6e3d9*/rtb_TmpSignalConversionAtSFun_c/*@>6612a*/ = /*@>796e2*/rtu_RollRes_f;
/*@>6e3db*/rtb_TmpSignalConversionAtSFun_d/*@>66133*/ = /*@>796e4*/rtu_RollRes_k;
/*@>6e3dd*/rtb_TmpSignalConversionAtSFun_e/*@>6613c*/ = /*@>796e6*/rtu_RollRes_fo;
/*@>6e3df*/rtb_TmpSignalConversionAtSFun_f/*@>66145*/ = /*@>796e8*/rtu_RollRes_p;
/* {S!d4}SignalConversion generated from: '<S147>/ SFunction ' */
/*@>6e3e1*/rtb_TmpSignalConversionAtSFu__0/*@>6614f*/ = /*@>796ea*/rtu_MagicPeak;
/*@>6e3e3*/rtb_TmpSignalConversionAtSFu__1/*@>66158*/ = /*@>796ec*/rtu_MagicPeak_b;
/*@>6e3e5*/rtb_TmpSignalConversionAtSFu__2/*@>66161*/ = /*@>796ee*/rtu_MagicPeak_n;
/*@>6e3e7*/rtb_TmpSignalConversionAtSFu__3/*@>6616a*/ = /*@>796f0*/rtu_MagicPeak_a;
/*@>6e3e9*/rtb_TmpSignalConversionAtSFu__4/*@>66173*/ = /*@>796f2*/rtu_MagicPeak_i;
/*@>6e106*/ReNom/*@>4df48*/ = /*@>796f4*/rtu_ReNom;
/*@>6e108*/Fz/*@>4df4b*/ = /*@>796f6*/rtu_Fz;
/*@>6e10a*/Omega/*@>4df4e*/ = /*@>796f8*/rtu_Omega;
/*@>6e10c*/Vx/*@>4df51*/ = /*@>796fa*/rtu_Vx;
/*@>6e10e*/b_FZMIN/*@>4df54*/ = /*@>6e1fb*/rtp_FZMIN;
/*@>6e110*/b_FZMAX/*@>4df57*/ = /*@>6e1fd*/rtp_FZMAX;
/*@>6e18f*/b_kappamax/*@>4df59*/ = /*@>6e1ff*/rtp_kappamax;
/*@>6e112*/FxType/*@>4df5c*/ = /*@>796fc*/rtu_FxType;
/*@>6e114*/rollingType/*@>4df5f*/ = /*@>796fe*/rtu_rollingType;
/*@>4dfff*/switch (/*@>6ec0b*/(int32_T)/*@>79700*/rtu_vertType) {
  case /*@>6e11a*/0:
    *rty_FzTire/*@>4df71*/ = /*@>79707*/rtu_Fz;
    /*@>6e121*/b_Re/*@>4df72*/ = /*@>79714*/rtu_ReNom;
    break;
  case /*@>6e11b*/1:
    /*@>6e15f*/b_Re/*@>4e0a8*/ = /*@>6e15e*/0.0/*@>6ec08*/ * /*@>77dd5*/fabs(/*@>79709*/rtu_Omega)/*@>4e0ac*/ + /*@>7970b*/rtu_rho;
    /*@>4e0bd*/if (/*@>725ee*/b_Re/*@>725ec*/ < /*@>725ef*/0.001) {
        /*@>735bb*/b_Re/*@>6c71a*/ = /*@>6e3b6*/0.001;
    }
    *rty_FzTire/*@>4dff9*/ = /*@>6e123*/(rtNaN);
    break;
  case /*@>6e11c*/2:
    /*@>6e11f*/b_Re/*@>4df73*/ = /*@>7970d*/rtu_ReNom;
    *rty_FzTire/*@>4df74*/ = /*@>79719*/rtu_Fz;
    break;
  default:
    /*@>6e11d*/b_Re/*@>4df75*/ = /*@>79702*/rtu_ReNom;
    *rty_FzTire/*@>4df76*/ = /*@>79712*/rtu_Fz;
    break;
}
/*@[7b7bf*/DrivetrainEv_automltirediv0prot(/*@>7c231*/rtu_Vx, /*@>7c23b*/rtp_VXLOW, &/*@>7c246*/a__1, &/*@>7c251*/Vxpabs)/*@]*/;
/*@>6e16e*/a__1/*@>4e0cf*/ = (/*@>6e195*/ReNom/*@>6ec04*/ * /*@>6e197*/Omega/*@>4e0d4*/ - /*@>6e199*/Vx)/*@>4e0d5*/ / /*@>6e16c*/Vxpabs;
/*@>76ad1*/Vxpabs/*@>4e0da*/ = /*@>6e171*/a__1;
/*@>6e173*/trueCount/*@>4e0ea*/ = /*@>7be43*/0;
/*@>4e0ef*/if (/*@>6e1b5*/a__1/*@>4e24d*/ < -/*@<6ec01*//*@>6e1b7*/b_kappamax) {
    /*@>6e3af*/trueCount/*@>6c70a*/ = /*@>7be46*/1;
}
/*@>73b46*/if (/*@>73b42*/trueCount/*@>73b40*/ - /*@>73b43*/1/*@>73e37*/ >= /*@>73b44*/0) {
    /*@>76ad9*/Vxpabs/*@>681a1*/ = -/*@<6ec0f*//*@>6e27e*/b_kappamax;
}
/*@>6e3ed*/a__1/*@>4e0df*/ = /*@>76adb*/Vxpabs;
/*@>4e10e*/if (/*@>76ade*/Vxpabs/*@>4e25d*/ > /*@>6e1bd*/b_kappamax) {
    /*@>6e461*/a__1/*@>6c6e8*/ = /*@>6e3a1*/b_kappamax;
}
*rty_Kappa/*@>4e0e1*/ = /*@>6e3ef*/a__1;
/*@>4e008*/switch (/*@>6ebfb*/(int32_T)/*@>6e127*/FxType) {
  case /*@>6e124*/0:
    /*@>76ad3*/Vxpabs/*@>4e148*/ = /*@>6e19f*/Fz;
    /*@>4e158*/if (/*@>725fb*/Fz/*@>725f9*/ < /*@>725fd*/b_FZMIN) {
        /*@>76afa*/Vxpabs/*@>6c6d8*/ = /*@>6e39a*/b_FZMIN;
    }
    /*@>4e160*/if (/*@>76afc*/Vxpabs/*@>725ff*/ > /*@>72605*/b_FZMAX) {
        /*@>76af8*/Vxpabs/*@>6c6c8*/ = /*@>6e390*/b_FZMAX;
    }
    /*@>74290*/rtb_TmpSignalConversionAtSFu__2/*@>7be5d*/ *= /*@>6e42d*/a__1;
    /*@>6e193*/rtb_TmpSignalConversionAtSFu__0/*@>4e145*/ = /*@>77ddf*/sin(/*@>77ddd*/atan(rtb_TmpSignalConversionAtSFu__2/*@>4e334*/ - (rtb_TmpSignalConversionAtSFu__2/*@>4e343*/ - /*@>77ddb*/atan(/*@>74294*/rtb_TmpSignalConversionAtSFu__2))/*@>6ebec*/ * /*@>6e427*/rtb_TmpSignalConversionAtSFu__3)/*@>6ebe4*/ * /*@>6e421*/rtb_TmpSignalConversionAtSFu__1)/*@>6ebe0*/ * /*@>6e41f*/rtb_TmpSignalConversionAtSFu__0/*@>6ebd8*/ * (/*@>76ae1*/Vxpabs/*@>6ebdc*/ * /*@>6e41d*/rtb_TmpSignalConversionAtSFu__4);
    break;
  case /*@>6e125*/2:
    /*@>6e134*/rtb_TmpSignalConversionAtSFu__0/*@>4dfc0*/ = /*@[7b6d7*/Drivetrain_automltirepurelongFx(/*@>7c265*/a__1, /*@>7c26f*/Vx, /*@>7c279*/Fz, /*@>7c284*/rtu_MagicFxo/*@>7c283*/[/*@>7c285*/0], /*@>7c290*/rtu_MagicFxo/*@>7c28f*/[/*@>7c291*/1], /*@>7c29c*/rtu_MagicFxo/*@>7c29b*/[/*@>7c29d*/2], /*@>7c2a7*/b_FZMIN, /*@>7c2b1*/b_FZMAX, /*@>7c2bc*/rtu_MagicFxo/*@>7c2bb*/[/*@>7c2bd*/3], /*@>7c2c8*/rtu_MagicFxo/*@>7c2c7*/[/*@>7c2c9*/4], /*@>7c2d4*/rtu_MagicFxo/*@>7c2d3*/[/*@>7c2d5*/5], /*@>7c2e0*/rtu_MagicFxo/*@>7c2df*/[/*@>7c2e1*/6], /*@>7c2ec*/rtu_MagicFxo/*@>7c2eb*/[/*@>7c2ed*/7], /*@>7c2f8*/rtu_MagicFxo/*@>7c2f7*/[/*@>7c2f9*/8], /*@>7c304*/rtu_MagicFxo/*@>7c303*/[/*@>7c305*/9], /*@>7c310*/rtu_MagicFxo/*@>7c30f*/[/*@>7c311*/10], /*@>7c31c*/rtu_MagicFxo/*@>7c31b*/[/*@>7c31d*/11], /*@>7c328*/rtu_MagicFxo/*@>7c327*/[/*@>7c329*/12], /*@>7c334*/rtu_MagicFxo/*@>7c333*/[/*@>7c335*/13], /*@>7c340*/rtu_MagicFxo/*@>7c33f*/[/*@>7c341*/14], /*@>7c34c*/rtu_MagicFxo/*@>7c34b*/[/*@>7c34d*/15], /*@>7c358*/rtu_MagicFxo/*@>7c357*/[/*@>7c359*/16], /*@>7c364*/rtu_MagicFxo/*@>7c363*/[/*@>7c365*/17], /*@>7c370*/rtu_MagicFxo/*@>7c36f*/[/*@>7c371*/18], /*@>7c37c*/rtu_MagicFxo/*@>7c37b*/[/*@>7c37d*/19], /*@>7c388*/rtu_MagicFxo/*@>7c387*/[/*@>7c389*/20], /*@>7c394*/rtu_MagicFxo/*@>7c393*/[/*@>7c395*/21], /*@>7c3a0*/rtu_MagicFxo/*@>7c39f*/[/*@>7c3a1*/22], /*@>7c3ac*/rtu_MagicFxo/*@>7c3ab*/[/*@>7c3ad*/23], /*@>7c3b8*/rtu_MagicFxo/*@>7c3b7*/[/*@>7c3b9*/24], /*@>7c3c4*/rtu_MagicFxo/*@>7c3c3*/[/*@>7c3c5*/25], /*@>7c3d0*/rtu_MagicFxo/*@>7c3cf*/[/*@>7c3d1*/26], /*@>7c3dc*/rtu_MagicFxo/*@>7c3db*/[/*@>7c3dd*/27], /*@>7c3e8*/rtu_MagicFxo/*@>7c3e7*/[/*@>7c3e9*/28], /*@>7c3f4*/rtu_MagicFxo/*@>7c3f3*/[/*@>7c3f5*/29], /*@>7c400*/rtu_MagicFxo/*@>7c3ff*/[/*@>7c401*/30], /*@>7c40c*/rtu_MagicFxo/*@>7c40b*/[/*@>7c40d*/31], /*@>7c418*/rtu_MagicFxo/*@>7c417*/[/*@>7c419*/32], /*@>7c424*/rtu_MagicFxo/*@>7c423*/[/*@>7c425*/33])/*@]*/;
    break;
  case /*@>6e126*/3:
    /*@>76ad5*/Vxpabs/*@>4e176*/ = /*@>6e1a7*/Fz;
    /*@>4e186*/if (/*@>72609*/Fz/*@>72607*/ < /*@>7260b*/b_FZMIN) {
        /*@>76af6*/Vxpabs/*@>6c6a1*/ = /*@>6e37b*/b_FZMIN;
    }
    /*@>4e18e*/if (/*@>76aff*/Vxpabs/*@>7260d*/ > /*@>72613*/b_FZMAX) {
        /*@>76af4*/Vxpabs/*@>6c691*/ = /*@>6e371*/b_FZMAX;
    }
/*@>68bc1*/    for (/*@>7be4e*/trueCount = /*@>7be4d*/0; /*@>7be58*/trueCount < /*@>7be56*/3; /*@>7be54*/trueCount/*@>7be5c*/++) {
        /*@>6e34c*/rtu_FxMap_0/*@>6c63f*/[/*@>6e34e*/3/*@>6ec16*/ * /*@>6e34f*/trueCount]/*@>6c63e*/ = rtu_FxMap/*@>7988e*/[/*@>7988a*/trueCount];
        /*@>6e355*/rtu_FxMap_0/*@>6c658*/[/*@>6e357*/3/*@>6ec13*/ * /*@>6e358*/trueCount/*@>6c65a*/ + /*@>6e35e*/1]/*@>6c657*/ = rtu_FxMap/*@>79897*/[/*@>79892*/trueCount/*@>79890*/ + /*@>79893*/3];
        /*@>6e35f*/rtu_FxMap_0/*@>6c671*/[/*@>6e361*/3/*@>6ec10*/ * /*@>6e362*/trueCount/*@>6c673*/ + /*@>6e368*/2]/*@>6c670*/ = rtu_FxMap/*@>798a0*/[/*@>7989b*/trueCount/*@>79899*/ + /*@>7989c*/6];
    }
    /*@>6e183*/rtb_TmpSignalConversionAtSFu__0/*@>4e173*/ = /*@[7b759*/interp2_gQgEamix(rtu_kappaFx, rtu_FzFx, /*@>7c44d*/rtu_FxMap_0, /*@>7c457*/a__1, /*@>7c461*/Vxpabs)/*@]*//*@>6ebf8*/ * /*@>6e435*/rtb_TmpSignalConversionAtSFu__4;
    break;
  default:
    /*@>6e129*/rtb_TmpSignalConversionAtSFu__0/*@>4dfc1*/ = /*@>6e12b*/0.0;
    *rty_Kappa/*@>4dfc2*/ = /*@>6e136*/0.0;
    break;
}
/*@>4e00d*/switch (/*@>6ebd4*/(int32_T)/*@>6e13c*/rollingType) {
  case /*@>6e137*/0:
    *rty_My/*@>4dfc4*/ = /*@>6e13f*/0.0;
    break;
  case /*@>6e138*/1:
    *rty_My/*@>4dfdb*/ = /*@[7b6fc*/DrivetrainE_automltirelongMySAE(/*@>7c475*/Fz, /*@>7c47f*/Omega, /*@>7c489*/Vx, /*@>7c493*/rtb_TmpSignalConversionAtSFun_0, /*@>7c49d*/rtb_TmpSignalConversionAtSFun_3, /*@>7c4a7*/rtb_TmpSignalConversionAtSFun_4, /*@>7c4b1*/rtb_TmpSignalConversionAtSFun_5, /*@>7c4bb*/rtb_TmpSignalConversionAtSFun_9, /*@>7c4c5*/rtb_TmpSignalConversionAtSFun_a, /*@>7c4cf*/b_Re, /*@>7c4d9*/b_FZMIN, /*@>7c4e3*/b_FZMAX, /*@>7c4ed*/rtb_TmpSignalConversionAtSFun_e, /*@>7c4f7*/rtb_TmpSignalConversionAtSFun_f)/*@]*/;
    break;
  case /*@>6e139*/2:
    /*@>6e417*/a__1/*@>4e1a7*/ = /*@>6e415*/rtb_TmpSignalConversionAtSFun_0;
    /*@>4e1d1*/if (/*@>72617*/rtb_TmpSignalConversionAtSFun_0/*@>72615*/ < /*@>72619*/rtb_TmpSignalConversionAtSFun_e) {
        /*@>6e45d*/a__1/*@>6c62f*/ = /*@>6e45f*/rtb_TmpSignalConversionAtSFun_e;
    }
    /*@>4e1d9*/if (/*@>7261d*/a__1/*@>7261b*/ > /*@>7261f*/rtb_TmpSignalConversionAtSFun_f) {
        /*@>6e459*/a__1/*@>6c61d*/ = /*@>6e45b*/rtb_TmpSignalConversionAtSFun_f;
    }
    /*@>76ad7*/Vxpabs/*@>4e1ad*/ = /*@>6e1ad*/Fz;
    /*@>4e1e1*/if (/*@>72623*/Fz/*@>72621*/ < /*@>72624*/0.0) {
        /*@>76af2*/Vxpabs/*@>6c60e*/ = /*@>6e33e*/0.0;
    }
    /*@>4e1e9*/if (/*@>76b02*/Vxpabs/*@>72626*/ > /*@>7262c*/b_FZMAX) {
        /*@>76af0*/Vxpabs/*@>6c5fe*/ = /*@>6e334*/b_FZMAX;
    }
    *rty_My/*@>4e1a4*/ = ((((/*@>6e43b*/rtb_TmpSignalConversionAtSFun_4/*@>6ebb7*/ * /*@>6e1b1*/rtb_TmpSignalConversionAtSFu__0/*@>4e1b4*/ / /*@>6e43d*/rtb_TmpSignalConversionAtSFun_1/*@>4e1b5*/ + /*@>6e439*/rtb_TmpSignalConversionAtSFun_3)/*@>4e1b7*/ + /*@>77def*/fabs(/*@>6e1d2*/Vx/*@>4e306*/ / /*@>6e1d4*/16.7)/*@>6ebbb*/ * /*@>6e43f*/rtb_TmpSignalConversionAtSFun_5)/*@>4e1b9*/ + /*@[7b772*/rt_powd_snf(/*@>7c50c*/Vx/*@>7c50b*/ / /*@>7c50d*/16.7, /*@>7c517*/4.0)/*@]*//*@>6ebbf*/ * /*@>6e441*/rtb_TmpSignalConversionAtSFun_6)/*@>4e1be*/ + (/*@>76aea*/Vxpabs/*@>6ebc7*/ * /*@>6e445*/rtb_TmpSignalConversionAtSFun_8/*@>4e1bb*/ / /*@>6e447*/rtb_TmpSignalConversionAtSFun_1/*@>4e1bc*/ + /*@>6e443*/rtb_TmpSignalConversionAtSFun_7)/*@>6ebc3*/ * (/*@>6e449*/rtb_TmpSignalConversionAtSFun_b/*@>6ebcb*/ * /*@>6e44b*/rtb_TmpSignalConversionAtSFun_b))/*@>6ebab*/ * (/*@>77df3*/tanh(/*@>6e1cf*/Omega)/*@>6ebb3*/ * /*@>76ae7*/Vxpabs/*@>6ebaf*/ * /*@>6e437*/rtb_TmpSignalConversionAtSFun_d)/*@>6eba7*/ * (/*@[7b78b*/rt_powd_snf(/*@>7c52c*/Vxpabs/*@>7c52b*/ / /*@>7c52d*/rtb_TmpSignalConversionAtSFun_1, /*@>7c537*/rtb_TmpSignalConversionAtSFun_9)/*@]*//*@>6ebcf*/ * /*@[7b7a4*/rt_powd_snf(/*@>7c54c*/a__1/*@>7c54b*/ / /*@>7c54d*/rtb_TmpSignalConversionAtSFun_2, /*@>7c557*/rtb_TmpSignalConversionAtSFun_a)/*@]*/)/*@>6eba3*/ * /*@>6e457*/rtb_TmpSignalConversionAtSFun_c;
    break;
  case /*@>6e13a*/3:
    *rty_My/*@>4dfe3*/ = -/*@<6ebd1*//*@[7b71a*/Drivetra_automltirelongMyMapped(/*@>7c56b*/Omega, /*@>7c575*/Fz, /*@>7c57f*/Vx, rtu_VxMy, rtu_FzMy, rtu_MyMap, /*@>7c5a7*/b_FZMAX)/*@]*/;
    break;
  case /*@>6e13b*/4:
    *rty_My/*@>4dff7*/ = -/*@<6ebd2*//*@[7b73d*/DrivetrainE_automltirelongMyISO(/*@>7c5bb*/Fz, /*@>7c5c5*/Omega, /*@>7c5cf*/rtb_TmpSignalConversionAtSFun_0, /*@>7c5d9*/rtb_TmpSignalConversionAtSFun_3, /*@>7c5e3*/rtb_TmpSignalConversionAtSFun_4, /*@>7c5ed*/rtb_TmpSignalConversionAtSFun_5, /*@>7c5f7*/rtb_TmpSignalConversionAtSFun_6, /*@>7c601*/b_Re, /*@>7c60b*/b_FZMIN, /*@>7c615*/b_FZMAX, /*@>7c61f*/rtb_TmpSignalConversionAtSFun_e, /*@>7c629*/rtb_TmpSignalConversionAtSFun_f)/*@]*/;
    break;
  default:
    *rty_My/*@>4dff8*/ = /*@>6e13e*/0.0;
    break;
}
*rty_Fx/*@>4df63*/ = /*@>6e116*/rtb_TmpSignalConversionAtSFu__0;
*rty_Re/*@>4df6b*/ = /*@>6e118*/b_Re;





        



                        
        
            
                    }
            



                                






                            /* 
 * System initialize for function-call system:
 *    '<S157>/detectSlip'
 *    '<S199>/detectSlip'
 */

                    

        


          void DrivetrainEv_detectSlip_Init(boolean_T *rty_yn)
    {
    
                
    
    




                                    




                                                
                                    *rty_yn = false;





    




                            }
            



            
        


                    /* 
 * Output and update for function-call system:
 *    '<S157>/detectSlip'
 *    '<S199>/detectSlip'
 */

            
                            

        


          void DrivetrainEv_detectSlip(real_T rtu_Tout, real_T rtu_Tfmaxs, boolean_T *rty_yn)
    {
    
                                            
            
            
        




                                                            
        




                                                    
                                    /* RelationalOperator: '<S169>/Relational Operator' incorporates:
 *  Abs: '<S169>/Abs'
 */
*rty_yn/*@>4d591*/ = (/*@>7cb9b*/fabs(/*@>7cbe8*/rtu_Tout)/*@>4d590*/ >= /*@>7cbea*/rtu_Tfmaxs);





        



                        
        
            
                    }
            



                                






                            /* 
 * System initialize for function-call system:
 *    '<S157>/detectLockup'
 *    '<S199>/detectLockup'
 */

                    

        


          void DrivetrainEv_detectLockup_Init(boolean_T *rty_yn)
    {
    
                
    
    




                                    




                                                
                                    *rty_yn = false;





    




                            }
            



            
        


                    /* 
 * Output and update for function-call system:
 *    '<S157>/detectLockup'
 *    '<S199>/detectLockup'
 */

            
                            

        


          void DrivetrainEv_detectLockup(real_T rtu_Tout, real_T rtu_Tfmaxs, boolean_T *rty_yn, real_T rtp_br, DW_detectLockup_DrivetrainEv_T *localDW)
    {
    
                                            
            
real_T rtb_Abs_g;

            
        




                                                            
        




                                                    
                                    /* Gain: '<S166>/Output Damping' incorporates:
 *  Constant: '<S160>/Constant'
 */
/*@>7d825*/rtb_Abs_g/*@>4d4c4*/ = /*@>7d82d*/rtp_br/*@>7d87e*/ * /*@>7d844*/0.0;
/* CombinatorialLogic: '<S165>/Combinatorial  Logic' incorporates:
 *  Abs: '<S163>/Abs'
 *  Abs: '<S168>/Abs'
 *  RelationalOperator: '<S163>/Relational Operator'
 *  RelationalOperator: '<S168>/Relational Operator'
 *  Sum: '<S166>/Sum1'
 *  Sum: '<S166>/Sum2'
 *  UnaryMinus: '<S167>/Unary Minus'
 *  UnitDelay: '<S165>/Unit Delay'
 */
*rty_yn/*@>4d56a*/ = /*@>7de82*/rtCP_CombinatorialLogic_table/*@>7de84*/[((/*@>7de63*/(uint32_T)(/*@>7de66*/fabs(((/*@>7de6a*/0.0/*@>7de69*/ - /*@>7de6c*/rtu_Tout)/*@>7de68*/ - /*@>7de6e*/rtb_Abs_g)/*@>7de67*/ + /*@>7de70*/rtb_Abs_g)/*@>7de64*/ >= /*@>7de72*/rtu_Tfmaxs)/*@>7de62*/ + (/*@>7de74*/(uint32_T)(/*@>7de77*/fabs(-/*@<7de78*//*@>7de7a*/rtu_Tout)/*@>7de75*/ <= /*@>7de7c*/rtu_Tfmaxs)/*@>7de73*/ << /*@>7de7d*/1))/*@>7de61*/ << /*@>7de7e*/1)/*@>7de60*/ + /*@>7dff3*/localDW->/*@>7e0e7*/UnitDelay_DSTATE];
/* Update for UnitDelay: '<S165>/Unit Delay' */
/*@>7dffa*/localDW->/*@>7e0ea*/UnitDelay_DSTATE/*@>4d581*/ = */*@<7e0c2*/rty_yn;





        



                        
        
            
                    }
            



                                






                            /* 
 * System initialize for action system:
 *    '<S157>/Locked'
 *    '<S199>/Locked'
 */

                    

        


          void DrivetrainEv_Locked_Init(real_T *rty_ReactionTorque, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb)
    {
    
                
    
    




                                    




                                                
                                    *rty_Omega = 0.0;
*rty_Omegadot = 0.0;
*rty_Myb = 0.0;
*rty_ReactionTorque = 0.0;





    




                            }
            



            
        


                    /* 
 * Output and update for action system:
 *    '<S157>/Locked'
 *    '<S199>/Locked'
 */

            
                            

        


          void DrivetrainEv_Locked(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T rtu_Tout, real_T *rty_ReactionTorque, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb)
    {
    
                                            
            
            
        




                                                            
        




                                                    
                                    if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    /* {S!d14}SignalConversion generated from: '<S158>/Omega' incorporates:
 *  Constant: '<S158>/Constant'
 */
    *rty_Omega/*@>4d3ff*/ = /*@>7e45d*/0.0;
    /* {S!d16}SignalConversion generated from: '<S158>/Omegadot' incorporates:
 *  Constant: '<S158>/Constant1'
 */
    *rty_Omegadot/*@>4d403*/ = /*@>7e45e*/0.0;
    /* {S!d18}SignalConversion generated from: '<S158>/Myb' incorporates:
 *  Constant: '<S158>/Constant2'
 */
    *rty_Myb/*@>4d407*/ = /*@>7e45f*/0.0;
}
/* {S!d20}UnaryMinus: '<S158>/Unary Minus' */
*rty_ReactionTorque/*@>4d432*/ = -/*@<7e460*//*@>7e874*/rtu_Tout;







        



                        
        
            
                    }
            



                                






                            /* 
 * System initialize for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */

                    

        


          void DrivetrainEv_Slipping_Init(real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb, real_T rtp_omegao, X_Slipping_DrivetrainEv_T *localX)
    {
    
                
    
    




                                    




                                                
                                    *rty_ReactionTorque = 0.0;
*rty_Omegadot = 0.0;
*rty_Myb = 0.0;
*rty_Omega = 0.0;
/* InitializeConditions for Integrator: '<S159>/omega wheel' */
/*@>7ff81*/localX->/*@>8017e*/omegaWheel/*@>4d5d4*/ = /*@>7f3e0*/rtp_omegao;





    




                            }
            



            
        


                    /* 
 * Outputs for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */

            
                        

        


          void DrivetrainEv_Slipping(real_T rtu_Tfmaxk, real_T rtu_Tout, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb, real_T rtp_br, real_T rtp_Iyy, B_Slipping_DrivetrainEv_T *localB, X_Slipping_DrivetrainEv_T *localX)
    {
    
                            
        
real_T rtb_MaxDynamicFrictionTorque1;
real_T rtb_OutputDamping;
real_T rtb_OutputSum;

    




                                            

        
        
    




                
                                    
                                    /* SignalConversion generated from: '<S159>/Omega' incorporates:
 *  Integrator: '<S159>/omega wheel'
 */
*rty_Omega/*@>4d49e*/ = /*@>7ff88*/localX->/*@>801e1*/omegaWheel;
/* Product: '<S159>/Max Dynamic Friction Torque1' incorporates:
 *  Gain: '<S159>/-4'
 *  Integrator: '<S159>/omega wheel'
 *  Trigonometry: '<S159>/Trigonometric Function'
 */
/*@>7f3eb*/rtb_MaxDynamicFrictionTorque1/*@>4d44e*/ = /*@>7fc31*/tanh(/*@>7f41b*/-4.0/*@>7f438*/ * /*@>7ff8f*/localX->/*@>801e4*/omegaWheel)/*@>7f434*/ * /*@>7fd6f*/rtu_Tfmaxk;
/* Gain: '<S159>/Output Damping' incorporates:
 *  Integrator: '<S159>/omega wheel'
 */
/*@>7f3ed*/rtb_OutputDamping/*@>4d456*/ = /*@>7f408*/rtp_br/*@>7f430*/ * /*@>7ff96*/localX->/*@>801e7*/omegaWheel;
/* Sum: '<S159>/Output Sum' */
/*@>7f3ff*/rtb_OutputSum/*@>50faf*/ = (/*@>7f3ef*/rtb_MaxDynamicFrictionTorque1/*@>50fab*/ - /*@>7fd71*/rtu_Tout)/*@>50fac*/ - /*@>7f3f1*/rtb_OutputDamping;
/* SignalConversion generated from: '<S159>/ReactionTorque' */
*rty_ReactionTorque/*@>4d45e*/ = /*@>7f3f3*/rtb_OutputSum;
/* Gain: '<S159>/Output Inertia' */
/*@>7f403*/rtb_MaxDynamicFrictionTorque1/*@>5bc19*/ = /*@>7f405*/1.0/*@>7f42c*/ / /*@>7f40e*/rtp_Iyy;
/* Gain: '<S159>/Output Inertia' */
/*@>7fe42*/localB->/*@>801db*/OutputInertia/*@>4d466*/ = /*@>7f401*/rtb_MaxDynamicFrictionTorque1/*@>7f428*/ * /*@>7f3f5*/rtb_OutputSum;
/* SignalConversion generated from: '<S159>/Omegadot' */
*rty_Omegadot/*@>4d468*/ = /*@>7fe49*/localB->/*@>801de*/OutputInertia;
/* SignalConversion generated from: '<S159>/Myb' */
*rty_Myb/*@>4d46a*/ = /*@>7f3fb*/rtb_OutputDamping;





    



                        
    

        
                }
            








            
        







                            /* 
 * Derivatives for action system:
 *    '<S157>/Slipping'
 *    '<S199>/Slipping'
 */

                            

        


          void DrivetrainEv_Slipping_Deriv(B_Slipping_DrivetrainEv_T *localB, XDot_Slipping_DrivetrainEv_T *localXdot)
    {
    

            

            
    
    




                                
        
    




                                                
                                    /* Derivatives for Integrator: '<S159>/omega wheel' */
/*@>7ff9f*/localXdot->/*@>80225*/omegaWheel/*@>4d4b4*/ = /*@>7fe50*/localB->/*@>80222*/OutputInertia;




    




                
        
                }
            




    

                        


        /* Function for Chart: '<S152>/Clutch' */

            
                    
        static boolean_T DrivetrainEv_detectSlip_a(real_T Tout, real_T Tfmaxs, B_Clutch_DrivetrainEv_T *localB)
        {
            boolean_T b_yn;




/* Outputs for Function Call SubSystem: '<S157>/detectSlip' */





/*@[84845*/        DrivetrainEv_detectSlip(Tout, Tfmaxs, &/*@>84b5f*/localB->/*@>84b5e*/RelationalOperator)/*@]*/;


/* End of Outputs for SubSystem: '<S157>/detectSlip' */


b_yn = localB->RelationalOperator;
return b_yn;


        }
            

            





                        


        /* Function for Chart: '<S152>/Clutch' */

            
                    
        static boolean_T DrivetrainEv_detectLockup_o(real_T Tout, real_T Tfmaxs, real_T rtp_br, B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW)
        {
            boolean_T b_yn;




/* Outputs for Function Call SubSystem: '<S157>/detectLockup' */







/*@[84876*/        DrivetrainEv_detectLockup(Tout, Tfmaxs, &/*@>84be9*/localB->/*@>84be8*/CombinatorialLogic, /*@>84bf4*/rtp_br, &/*@>84c00*/localDW->/*@>84bff*/detectLockup)/*@]*/;


/* End of Outputs for SubSystem: '<S157>/detectLockup' */


b_yn = localB->CombinatorialLogic;
return b_yn;


        }
            

            


                            /* System initialize for atomic system: '<S152>/Clutch' */
                    

        


          void DrivetrainEv_Clutch_Init(real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, B_Clutch_DrivetrainEv_T *localB, X_Clutch_DrivetrainEv_T *localX)
    {
    
                
    
    




                                    




                                                
                                    
/*@>841f6*/localX->/*@>84c5f*/Slipping./*@>84c5c*/omegaWheel/*@>4d631*/ = /*@>81da0*/0.0;
*rty_Omega/*@>4d635*/ = /*@>81da3*/0.0;
*rty_Omegadot/*@>4d639*/ = /*@>81da4*/0.0;
*rty_Myb/*@>4d63d*/ = /*@>81da5*/0.0;
*rty_ReactionTorque/*@>4d641*/ = /*@>81da6*/0.0;



/* SystemInitialize for Function Call SubSystem: '<S157>/detectSlip' */



/*@[84813*/        DrivetrainEv_detectSlip_Init(&/*@>84c9d*/localB->/*@>84c9c*/RelationalOperator)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S157>/detectSlip' */






/* SystemInitialize for Function Call SubSystem: '<S157>/detectLockup' */



/*@[84814*/        DrivetrainEv_detectLockup_Init(&/*@>84ccd*/localB->/*@>84ccc*/CombinatorialLogic)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S157>/detectLockup' */






/* SystemInitialize for IfAction SubSystem: '<S157>/Slipping' */








/*@[84815*/        DrivetrainEv_Slipping_Init(rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>84d2d*/rtp_omegao, &/*@>84d39*/localX->/*@>84d38*/Slipping)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S157>/Slipping' */






/* SystemInitialize for IfAction SubSystem: '<S157>/Locked' */






/*@[84816*/        DrivetrainEv_Locked_Init(rty_ReactionTorque, rty_Omega, rty_Omegadot, rty_Myb)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S157>/Locked' */







    




                            }
            



            
        


                    /* Outputs for atomic system: '<S152>/Clutch' */
            
                        

        


          void DrivetrainEv_Clutch(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, real_T rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol, B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW, X_Clutch_DrivetrainEv_T *localX)
    {
    
                            
        
    




                                            

        
        
    




                
                                    
                                    










/*@>4d666*/if (/*@[8496d*/rtsiIsModeUpdateTimeStep(DrivetrainEv_M->solverInfo)/*@]*/) {
    /*@>84242*/localDW->/*@>84f07*/lastMajorTime/*@>4d668*/ = /*@>81de4*/(*(DrivetrainEv_M->timingBridge->taskTime[DrivetrainEv_M->Timing.mdlref_GlobalTID[0]]));
    /* {S!d54}Chart: '<S152>/Clutch' */
    /*@>4d69a*/if (/*@>84250*/localDW->/*@>84f0d*/is_active_c8_autolibshared/*@>4d698*/ == /*@>81df9*/0U) {
        /*@>84265*/localDW->/*@>84f16*/is_active_c8_autolibshared/*@>4d6a2*/ = /*@>84dd2*/1U;
        /*@>84209*/localX->/*@>84ef5*/Slipping./*@>84ef2*/omegaWheel/*@>4d6cb*/ = /*@>81e50*/rtp_omegao;
        /*@>84281*/localDW->/*@>84f22*/is_c8_autolibshared/*@>4d6c8*/ = /*@>81e12*/DrivetrainEv_IN_Slipping;











/*@[84975*/        DrivetrainEv_Slipping(/*@>84f85*/rtu_Tfmaxk, /*@>84f8f*/rtu_Tout, rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>84fc1*/rtp_br, /*@>84fcb*/rtp_Iyy, &/*@>84fd7*/localB->/*@>84fd6*/Slipping, &/*@>84fe4*/localX->/*@>84fe3*/Slipping)/*@]*/;
        /*@>8429d*/localDW->/*@>84f2e*/Slipping_entered/*@>4d6bd*/ = /*@>81e0f*/true;
        /*@[84970*/rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->solverInfo, true)/*@]*/;
    } else /*@>81ac9*/if (/*@>8425e*/localDW->/*@>84f13*/is_c8_autolibshared/*@>81ac8*/ == /*@>8430f*/DrivetrainEv_IN_Locked) {
        /*@>4d6a4*/if (/*@[84a5a*/DrivetrainEv_detectSlip_a(/*@>84fef*/rtu_Tout, /*@>84ff9*/rtu_Tfmaxs, /*@>8500d*/localB)/*@]*/) {
            /*@>8421c*/localX->/*@>84efe*/Slipping./*@>84efb*/omegaWheel/*@>4d6ba*/ = /*@>81e21*/0.0;
            /*@>84288*/localDW->/*@>84f25*/Locked_entered/*@>4d6a5*/ = /*@>81dfe*/false;
            /*@>84296*/localDW->/*@>84f2b*/is_c8_autolibshared/*@>4d6b4*/ = /*@>81e07*/DrivetrainEv_IN_Slipping;











/*@[84976*/        DrivetrainEv_Slipping(/*@>8504f*/rtu_Tfmaxk, /*@>85059*/rtu_Tout, rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>8508b*/rtp_br, /*@>85095*/rtp_Iyy, &/*@>850a1*/localB->/*@>850a0*/Slipping, &/*@>850ae*/localX->/*@>850ad*/Slipping)/*@]*/;
            /*@>842ab*/localDW->/*@>84f34*/Slipping_entered/*@>4d6a9*/ = /*@>81e04*/true;
            /*@[84dde*/rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->solverInfo, true)/*@]*/;
        }

        /* case IN_Slipping: */
    } else /*@>4d6cf*/if (/*@[84a76*/DrivetrainEv_detectLockup_o(/*@>850b9*/rtu_Tout, /*@>850c3*/rtu_Tfmaxs, /*@>850cd*/rtp_br, /*@>850e1*/localB, /*@>850eb*/localDW)/*@]*//*@>849af*/ && (/*@>8377a*/fabs(*/*@<84e0a*/rty_Omega)/*@>4d6e5*/ <= /*@>81e5a*/rtp_OmegaTol)) {
        /*@>8428f*/localDW->/*@>84f28*/Slipping_entered/*@>4d6d0*/ = /*@>81e17*/false;
        /*@>842a4*/localDW->/*@>84f31*/is_c8_autolibshared/*@>4d6df*/ = /*@>81e20*/DrivetrainEv_IN_Locked;







/*@[84977*/        DrivetrainEv_Locked(/*@>85113*/DrivetrainEv_M, /*@>8511d*/rtu_Tout, rty_ReactionTorque, rty_Omega, rty_Omegadot, rty_Myb)/*@]*/;
        /*@>842b2*/localDW->/*@>84f37*/Locked_entered/*@>4d6d4*/ = /*@>81e1d*/true;
        /*@[84de3*/rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->solverInfo, true)/*@]*/;
    }
    /* {E!d54}End of Chart: '<S152>/Clutch' */
}
/*@>81ac4*/if (/*@>84249*/localDW->/*@>84f0a*/is_c8_autolibshared/*@>81ac3*/ == /*@>8430c*/DrivetrainEv_IN_Locked) {
    /*@>4d688*/if (!/*@<4d686*//*@>84257*/localDW->/*@>84f10*/Locked_entered) {







/*@[84973*/        DrivetrainEv_Locked(/*@>8516d*/DrivetrainEv_M, /*@>85177*/rtu_Tout, rty_ReactionTorque, rty_Omega, rty_Omegadot, rty_Myb)/*@]*/;
    } else {
        /*@>84273*/localDW->/*@>84f1c*/Locked_entered/*@>4d685*/ = /*@>81df1*/false;
    }

    /* case IN_Slipping: */
} else /*@>4d691*/if (!/*@<4d68f*//*@>8426c*/localDW->/*@>84f19*/Slipping_entered) {











/*@[84974*/        DrivetrainEv_Slipping(/*@>851e1*/rtu_Tfmaxk, /*@>851eb*/rtu_Tout, rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>8521d*/rtp_br, /*@>85227*/rtp_Iyy, &/*@>85233*/localB->/*@>85232*/Slipping, &/*@>85240*/localX->/*@>8523f*/Slipping)/*@]*/;
} else {
    /*@>8427a*/localDW->/*@>84f1f*/Slipping_entered/*@>4d68e*/ = /*@>81df6*/false;
}







    



                        
    

        
                }
            








            
        







                            /* Derivatives for atomic system: '<S152>/Clutch' */
                            

        


          void DrivetrainEv_Clutch_Deriv(B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW, XDot_Clutch_DrivetrainEv_T *localXdot)
    {
    

            

            
    
    




                                
        
    




                                                
                                    
            


            localXdot->Slipping.omegaWheel = 0.0;
/*@>4d794*/if (/*@>842b9*/localDW->/*@>85285*/is_c8_autolibshared/*@>4d790*/ == /*@>84313*/DrivetrainEv_IN_Slipping) {



/*@[849aa*/        DrivetrainEv_Slipping_Deriv(&/*@>852ea*/localB->/*@>852e9*/Slipping, &/*@>852f7*/localXdot->/*@>852f6*/Slipping)/*@]*/;
}
/*@>81ad0*/if (/*@>842c0*/localDW->/*@>85288*/is_c8_autolibshared/*@>81acf*/ == /*@>84316*/DrivetrainEv_IN_Locked) {
    /*@>4d7a4*/if (/*@>842c7*/localDW->/*@>8528b*/Locked_entered) {
        /*@>842d5*/localDW->/*@>85291*/Locked_entered/*@>4d7a1*/ = /*@>81ea8*/false;
    }

    /* case IN_Slipping: */
} else /*@>4d7ac*/if (/*@>842ce*/localDW->/*@>8528e*/Slipping_entered) {
    /*@>842dc*/localDW->/*@>85294*/Slipping_entered/*@>4d7a9*/ = /*@>81ead*/false;
}




    




                
        
                }
            




    

                        


        /* Function for Chart: '<S194>/Clutch' */

            
                    
        static boolean_T DrivetrainEv_detectSlip_e(real_T Tout, real_T Tfmaxs, B_Clutch_DrivetrainEv_g_T *localB)
        {
            boolean_T b_yn;




/* Outputs for Function Call SubSystem: '<S199>/detectSlip' */





/*@[898e7*/        DrivetrainEv_detectSlip(Tout, Tfmaxs, &/*@>89c01*/localB->/*@>89c00*/RelationalOperator)/*@]*/;


/* End of Outputs for SubSystem: '<S199>/detectSlip' */


b_yn = localB->RelationalOperator;
return b_yn;


        }
            

            





                        


        /* Function for Chart: '<S194>/Clutch' */

            
                    
        static boolean_T DrivetrainEv_detectLockup_p(real_T Tout, real_T Tfmaxs, real_T rtp_br, B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW)
        {
            boolean_T b_yn;




/* Outputs for Function Call SubSystem: '<S199>/detectLockup' */







/*@[89918*/        DrivetrainEv_detectLockup(Tout, Tfmaxs, &/*@>89c8b*/localB->/*@>89c8a*/CombinatorialLogic, /*@>89c96*/rtp_br, &/*@>89ca2*/localDW->/*@>89ca1*/detectLockup)/*@]*/;


/* End of Outputs for SubSystem: '<S199>/detectLockup' */


b_yn = localB->CombinatorialLogic;
return b_yn;


        }
            

            


                            /* System initialize for atomic system: '<S194>/Clutch' */
                    

        


          void DrivetrainEv_Clutch_o_Init(real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, B_Clutch_DrivetrainEv_g_T *localB, X_Clutch_DrivetrainEv_m_T *localX)
    {
    
                
    
    




                                    




                                                
                                    
/*@>89298*/localX->/*@>89d01*/Slipping./*@>89cfe*/omegaWheel/*@>4d7fe*/ = /*@>86e42*/0.0;
*rty_Omega/*@>4d802*/ = /*@>86e45*/0.0;
*rty_Omegadot/*@>4d806*/ = /*@>86e46*/0.0;
*rty_Myb/*@>4d80a*/ = /*@>86e47*/0.0;
*rty_ReactionTorque/*@>4d80e*/ = /*@>86e48*/0.0;



/* SystemInitialize for Function Call SubSystem: '<S199>/detectSlip' */



/*@[898b5*/        DrivetrainEv_detectSlip_Init(&/*@>89d3f*/localB->/*@>89d3e*/RelationalOperator)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S199>/detectSlip' */






/* SystemInitialize for Function Call SubSystem: '<S199>/detectLockup' */



/*@[898b6*/        DrivetrainEv_detectLockup_Init(&/*@>89d6f*/localB->/*@>89d6e*/CombinatorialLogic)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S199>/detectLockup' */






/* SystemInitialize for IfAction SubSystem: '<S199>/Slipping' */








/*@[898b7*/        DrivetrainEv_Slipping_Init(rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>89dcf*/rtp_omegao, &/*@>89ddb*/localX->/*@>89dda*/Slipping)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S199>/Slipping' */






/* SystemInitialize for IfAction SubSystem: '<S199>/Locked' */






/*@[898b8*/        DrivetrainEv_Locked_Init(rty_ReactionTorque, rty_Omega, rty_Omegadot, rty_Myb)/*@]*/;


/* End of SystemInitialize for SubSystem: '<S199>/Locked' */







    




                            }
            



            
        


                    /* Outputs for atomic system: '<S194>/Clutch' */
            
                        

        


          void DrivetrainEv_Clutch_b(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, real_T rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol, B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW, X_Clutch_DrivetrainEv_m_T *localX)
    {
    
                            
        
    




                                            

        
        
    




                
                                    
                                    










/*@>4d833*/if (/*@[89a0f*/rtsiIsModeUpdateTimeStep(DrivetrainEv_M->solverInfo)/*@]*/) {
    /*@>892e4*/localDW->/*@>89fa9*/lastMajorTime/*@>4d835*/ = /*@>86e86*/(*(DrivetrainEv_M->timingBridge->taskTime[DrivetrainEv_M->Timing.mdlref_GlobalTID[0]]));
    /* {S!d68}Chart: '<S194>/Clutch' */
    /*@>4d867*/if (/*@>892f2*/localDW->/*@>89faf*/is_active_c8_autolibshared/*@>4d865*/ == /*@>86e9b*/0U) {
        /*@>89307*/localDW->/*@>89fb8*/is_active_c8_autolibshared/*@>4d86f*/ = /*@>89e74*/1U;
        /*@>892ab*/localX->/*@>89f97*/Slipping./*@>89f94*/omegaWheel/*@>4d898*/ = /*@>86ef2*/rtp_omegao;
        /*@>89323*/localDW->/*@>89fc4*/is_c8_autolibshared/*@>4d895*/ = /*@>86eb4*/DrivetrainEv_IN_Slipping_o;











/*@[89a17*/        DrivetrainEv_Slipping(/*@>8a027*/rtu_Tfmaxk, /*@>8a031*/rtu_Tout, rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>8a063*/rtp_br, /*@>8a06d*/rtp_Iyy, &/*@>8a079*/localB->/*@>8a078*/Slipping, &/*@>8a086*/localX->/*@>8a085*/Slipping)/*@]*/;
        /*@>8933f*/localDW->/*@>89fd0*/Slipping_entered/*@>4d88a*/ = /*@>86eb1*/true;
        /*@[89a12*/rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->solverInfo, true)/*@]*/;
    } else /*@>86b6b*/if (/*@>89300*/localDW->/*@>89fb5*/is_c8_autolibshared/*@>86b6a*/ == /*@>893b1*/DrivetrainEv_IN_Locked_j) {
        /*@>4d871*/if (/*@[89afc*/DrivetrainEv_detectSlip_e(/*@>8a091*/rtu_Tout, /*@>8a09b*/rtu_Tfmaxs, /*@>8a0af*/localB)/*@]*/) {
            /*@>892be*/localX->/*@>89fa0*/Slipping./*@>89f9d*/omegaWheel/*@>4d887*/ = /*@>86ec3*/0.0;
            /*@>8932a*/localDW->/*@>89fc7*/Locked_entered/*@>4d872*/ = /*@>86ea0*/false;
            /*@>89338*/localDW->/*@>89fcd*/is_c8_autolibshared/*@>4d881*/ = /*@>86ea9*/DrivetrainEv_IN_Slipping_o;











/*@[89a18*/        DrivetrainEv_Slipping(/*@>8a0f1*/rtu_Tfmaxk, /*@>8a0fb*/rtu_Tout, rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>8a12d*/rtp_br, /*@>8a137*/rtp_Iyy, &/*@>8a143*/localB->/*@>8a142*/Slipping, &/*@>8a150*/localX->/*@>8a14f*/Slipping)/*@]*/;
            /*@>8934d*/localDW->/*@>89fd6*/Slipping_entered/*@>4d876*/ = /*@>86ea6*/true;
            /*@[89e80*/rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->solverInfo, true)/*@]*/;
        }

        /* case IN_Slipping: */
    } else /*@>4d89c*/if (/*@[89b18*/DrivetrainEv_detectLockup_p(/*@>8a15b*/rtu_Tout, /*@>8a165*/rtu_Tfmaxs, /*@>8a16f*/rtp_br, /*@>8a183*/localB, /*@>8a18d*/localDW)/*@]*//*@>89a51*/ && (/*@>8881c*/fabs(*/*@<89eac*/rty_Omega)/*@>4d8b2*/ <= /*@>86efc*/rtp_OmegaTol)) {
        /*@>89331*/localDW->/*@>89fca*/Slipping_entered/*@>4d89d*/ = /*@>86eb9*/false;
        /*@>89346*/localDW->/*@>89fd3*/is_c8_autolibshared/*@>4d8ac*/ = /*@>86ec2*/DrivetrainEv_IN_Locked_j;







/*@[89a19*/        DrivetrainEv_Locked(/*@>8a1b5*/DrivetrainEv_M, /*@>8a1bf*/rtu_Tout, rty_ReactionTorque, rty_Omega, rty_Omegadot, rty_Myb)/*@]*/;
        /*@>89354*/localDW->/*@>89fd9*/Locked_entered/*@>4d8a1*/ = /*@>86ebf*/true;
        /*@[89e85*/rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainEv_M->solverInfo, true)/*@]*/;
    }
    /* {E!d68}End of Chart: '<S194>/Clutch' */
}
/*@>86b66*/if (/*@>892eb*/localDW->/*@>89fac*/is_c8_autolibshared/*@>86b65*/ == /*@>893ae*/DrivetrainEv_IN_Locked_j) {
    /*@>4d855*/if (!/*@<4d853*//*@>892f9*/localDW->/*@>89fb2*/Locked_entered) {







/*@[89a15*/        DrivetrainEv_Locked(/*@>8a20f*/DrivetrainEv_M, /*@>8a219*/rtu_Tout, rty_ReactionTorque, rty_Omega, rty_Omegadot, rty_Myb)/*@]*/;
    } else {
        /*@>89315*/localDW->/*@>89fbe*/Locked_entered/*@>4d852*/ = /*@>86e93*/false;
    }

    /* case IN_Slipping: */
} else /*@>4d85e*/if (!/*@<4d85c*//*@>8930e*/localDW->/*@>89fbb*/Slipping_entered) {











/*@[89a16*/        DrivetrainEv_Slipping(/*@>8a283*/rtu_Tfmaxk, /*@>8a28d*/rtu_Tout, rty_Omega, rty_Omegadot, rty_ReactionTorque, rty_Myb, /*@>8a2bf*/rtp_br, /*@>8a2c9*/rtp_Iyy, &/*@>8a2d5*/localB->/*@>8a2d4*/Slipping, &/*@>8a2e2*/localX->/*@>8a2e1*/Slipping)/*@]*/;
} else {
    /*@>8931c*/localDW->/*@>89fc1*/Slipping_entered/*@>4d85b*/ = /*@>86e98*/false;
}







    



                        
    

        
                }
            








            
        







                            /* Derivatives for atomic system: '<S194>/Clutch' */
                            

        


          void DrivetrainEv_Clutch_m_Deriv(B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW, XDot_Clutch_DrivetrainEv_i_T *localXdot)
    {
    

            

            
    
    




                                
        
    




                                                
                                    
            


            localXdot->Slipping.omegaWheel = 0.0;
/*@>4d961*/if (/*@>8935b*/localDW->/*@>8a327*/is_c8_autolibshared/*@>4d95d*/ == /*@>893b5*/DrivetrainEv_IN_Slipping_o) {



/*@[89a4c*/        DrivetrainEv_Slipping_Deriv(&/*@>8a38c*/localB->/*@>8a38b*/Slipping, &/*@>8a399*/localXdot->/*@>8a398*/Slipping)/*@]*/;
}
/*@>86b72*/if (/*@>89362*/localDW->/*@>8a32a*/is_c8_autolibshared/*@>86b71*/ == /*@>893b8*/DrivetrainEv_IN_Locked_j) {
    /*@>4d971*/if (/*@>89369*/localDW->/*@>8a32d*/Locked_entered) {
        /*@>89377*/localDW->/*@>8a333*/Locked_entered/*@>4d96e*/ = /*@>86f4a*/false;
    }

    /* case IN_Slipping: */
} else /*@>4d979*/if (/*@>89370*/localDW->/*@>8a330*/Slipping_entered) {
    /*@>8937e*/localDW->/*@>8a336*/Slipping_entered/*@>4d976*/ = /*@>86f4f*/false;
}




    




                
        
                }
            





                            /* System initialize for referenced model: 'DrivetrainEv' */
                    

        


          void DrivetrainEv_Init(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX)
    {
    
                /* local scratch DWork variables */


                                int32_T ForEach_itr;


                                int32_T ForEach_itr_h;


    
real_T Myb;
real_T Omegadot;
real_T ReactionTorque;

    




                                    




                                                
                                    



/* {S!d82}InitializeConditions for Integrator: '<S72>/Theta' */
/*@>c67f7*/localX->/*@>ca59f*/Theta_CSTATE/*@>4e495*/ = /*@>ad68d*/0.0;
/* {S!d84}InitializeConditions for Integrator: '<S72>/Position' */
/*@>c67fe*/localX->/*@>ca5a2*/Position_CSTATE/*@>a9a96*/[/*@>ad69c*/0]/*@>a9a95*/ = /*@>ad6a5*/0.0;
/* {S!d86}InitializeConditions for Integrator: '<S4>/Integrator' */
/*@>c6805*/localX->/*@>ca5a5*/Integrator_CSTATE/*@>a9aa1*/[/*@>ad69d*/0]/*@>a9aa0*/ = /*@>ad69b*/0.0;
/* {S!d88}InitializeConditions for Integrator: '<S72>/Position' */
/*@>c680c*/localX->/*@>ca5a8*/Position_CSTATE/*@>a9aac*/[/*@>ad6a3*/1]/*@>a9aab*/ = /*@>ad6a6*/-0.35;
/* {S!d90}InitializeConditions for Integrator: '<S4>/Integrator' */
/*@>c6813*/localX->/*@>ca5ab*/Integrator_CSTATE/*@>a9ab7*/[/*@>ad6a4*/1]/*@>a9ab6*/ = /*@>ad6a2*/0.0;
/* {S!d92}InitializeConditions for Integrator: '<S72>/U,w' incorporates:
 *  Integrator: '<S15>/Integrator'
 */
/*@>4e4bb*/if (/*@[c901f*/rtmIsFirstInitCond(DrivetrainEv_M)/*@]*/) {
    /*@>c681a*/localX->/*@>ca5ae*/Uw_CSTATE/*@>4e4b0*/[/*@>ad625*/0]/*@>4e4b3*/ = /*@>ad624*/0.0;
    /*@>c6821*/localX->/*@>ca5b1*/Uw_CSTATE/*@>4e4b6*/[/*@>ad627*/1]/*@>4e4b9*/ = /*@>ad626*/0.0;
    /*@>c682f*/localX->/*@>ca5b7*/Integrator_CSTATE_n/*@>4e4de*/ = /*@>ad62e*/0.0;
}
/*@>c6bde*/localDW->/*@>ca5e1*/Uw_IWORK/*@>4e4c3*/ = /*@>ca451*/1;
/* {E!d92}End of InitializeConditions for Integrator: '<S72>/U,w' */

/* {S!d94}InitializeConditions for Integrator: '<S72>/q' */
/*@>c6828*/localX->/*@>ca5b4*/q_CSTATE/*@>4e4d0*/ = /*@>ad68e*/0.0;
/* {S!d96}InitializeConditions for Integrator: '<S15>/Integrator' */
/*@>c6be5*/localDW->/*@>ca5e4*/Integrator_IWORK/*@>4e4e8*/ = /*@>ca454*/1;
/* {S!d98}InitializeConditions for Integrator: '<S14>/Integrator' */
/*@>c6836*/localX->/*@>ca5ba*/Integrator_CSTATE_f/*@>4e4f5*/ = /*@>ad68f*/0.0;
/* {S!d100}InitializeConditions for Integrator: '<S170>/Integrator' */
/*@>c683d*/localX->/*@>ca5bd*/Integrator_CSTATE_e/*@>4e502*/ = /*@>ad690*/0.0;
/* {S!d102}InitializeConditions for Integrator: '<S212>/Integrator' */
/*@>c6844*/localX->/*@>ca5c0*/Integrator_CSTATE_b/*@>4e50f*/ = /*@>ad691*/0.0;
/* {S!d104}InitializeConditions for Integrator: '<S51>/Integrator' incorporates:
 *  Integrator: '<S26>/Integrator'
 */
/*@>4e51f*/if (/*@[c9022*/rtmIsFirstInitCond(DrivetrainEv_M)/*@]*/) {
    /*@>c684b*/localX->/*@>ca5c3*/Integrator_CSTATE_g/*@>4e51d*/ = /*@>ad63b*/0.0;
    /*@>c6852*/localX->/*@>ca5c6*/Integrator_CSTATE_gx/*@>4e541*/[/*@>ad645*/0]/*@>4e544*/ = /*@>ad644*/0.0;
    /*@>c6860*/localX->/*@>ca5cc*/Integrator_CSTATE_gx/*@>4e547*/[/*@>ad647*/1]/*@>4e54a*/ = /*@>ad646*/0.0;
}
/*@>c6bec*/localDW->/*@>ca5e7*/Integrator_IWORK_g/*@>4e527*/ = /*@>ca457*/1;
/* {E!d104}End of InitializeConditions for Integrator: '<S51>/Integrator' */

/* {S!d106}InitializeConditions for Integrator: '<S50>/Integrator' */
/*@>c6859*/localX->/*@>ca5c9*/Integrator_CSTATE_bn/*@>4e534*/ = /*@>ad692*/0.0;
/* {S!d108}InitializeConditions for Integrator: '<S26>/Integrator' */
/*@>c6bf3*/localDW->/*@>ca5ea*/Integrator_IWORK_i/*@>4e554*/ = /*@>ca45a*/1;
/* {S!d110}InitializeConditions for Integrator: '<S59>/Integrator' */
/*@>c6867*/localX->/*@>ca5cf*/Integrator_CSTATE_i/*@>4e561*/ = /*@>ad693*/0.0;
/* {S!d112}InitializeConditions for Integrator: '<S94>/Integrator3' */
/*@>c686e*/localX->/*@>ca5d2*/Integrator3_CSTATE/*@>4e56e*/ = /*@>ad694*/0.0;
/* {S!d75}SystemInitialize for Iterator SubSystem: '<S141>/Clutch' */
/*@>ca496*/for (/*@>ca492*/ForEach_itr_h/*@>ca491*/ = /*@>ca493*/0; /*@>ca489*/ForEach_itr_h/*@>ca487*/ < /*@>ca48a*/1; /*@>ca48c*/ForEach_itr_h/*@>ca4a9*/++) {
/* {S!d73}SystemInitialize for Iterator SubSystem: '<S141>/Clutch' */
/* {S!d114}SystemInitialize for Chart: '<S152>/Clutch' */







/*@[c9025*/        DrivetrainEv_Clutch_Init(&/*@>ca659*/localB->/*@>ca658*/CoreSubsys_c/*@>ca657*/[/*@>ca65b*/ForEach_itr_h]./*@>ca656*/Omega, &/*@>ca667*/Omegadot, &/*@>ca672*/Myb, &/*@>ca67d*/ReactionTorque, /*@>ca687*/0.0, &/*@>ca695*/localB->/*@>ca694*/CoreSubsys_c/*@>ca693*/[/*@>ca697*/ForEach_itr_h]./*@>ca692*/sf_Clutch, &/*@>ca6a6*/localX->/*@>ca6a5*/CoreSubsys_c/*@>ca6a4*/[/*@>ca6a8*/ForEach_itr_h]./*@>ca6a3*/sf_Clutch)/*@]*/;

/* {E!d73}End of SystemInitialize for SubSystem: '<S141>/Clutch' */

}
/* {E!d75}End of SystemInitialize for SubSystem: '<S141>/Clutch' */
/* {S!d79}SystemInitialize for Iterator SubSystem: '<S183>/Clutch' */
/*@>ca474*/for (/*@>ca470*/ForEach_itr/*@>ca46f*/ = /*@>ca471*/0; /*@>ca467*/ForEach_itr/*@>ca465*/ < /*@>ca468*/1; /*@>ca46a*/ForEach_itr/*@>ca4aa*/++) {
/* {S!d77}SystemInitialize for Iterator SubSystem: '<S183>/Clutch' */
/* {S!d116}SystemInitialize for Chart: '<S194>/Clutch' */







/*@[c9026*/        DrivetrainEv_Clutch_o_Init(&/*@>ca6fb*/localB->/*@>ca6fa*/CoreSubsys_k/*@>ca6f9*/[/*@>ca6fd*/ForEach_itr]./*@>ca6f8*/Omega, &/*@>ca709*/Omegadot, &/*@>ca714*/Myb, &/*@>ca71f*/ReactionTorque, /*@>ca729*/0.0, &/*@>ca737*/localB->/*@>ca736*/CoreSubsys_k/*@>ca735*/[/*@>ca739*/ForEach_itr]./*@>ca734*/sf_Clutch, &/*@>ca748*/localX->/*@>ca747*/CoreSubsys_k/*@>ca746*/[/*@>ca74a*/ForEach_itr]./*@>ca745*/sf_Clutch)/*@]*/;

/* {E!d77}End of SystemInitialize for SubSystem: '<S183>/Clutch' */

}
/* {E!d79}End of SystemInitialize for SubSystem: '<S183>/Clutch' */







    




                            }
            



            
        


                    /* Outputs for referenced model: 'DrivetrainEv' */
            
                        

        


          void DrivetrainEv(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, const real_T *rtu_MotTrq, const real_T *rtu_BrakeReq, const real_T *rtu_Grade, const real_T *rtu_WindVel, real_T *rty_VehSpd, real_T *rty_MotSpd, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX, ZCE_DrivetrainEv_T *localZCE)
    {
    
                                                /* local block i/o variables */
                                

                                real_T rtb_Fz;


                                real_T rtb_Fz_c;


                                real_T rtb_ImpSel_InsertedFor_Tout_at_;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxs_a;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxk_a;


                                real_T rtb_ImpAsg_InsertedFor_Omega_at;


                                real_T rtb_Fx;


                                real_T rtb_My;


                                real_T rtb_Kappa;


                                real_T rtb_Re;


                                real_T rtb_FzTire;


                                real_T rtb_ImpSel_InsertedFor_Tout_a_f;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxs_p;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxk_j;


                                real_T rtb_ImpAsg_InsertedFor_Omega__d;


                                real_T rtb_Fx_o;


                                real_T rtb_My_l;


                                real_T rtb_Kappa_f;


                                real_T rtb_Re_g;


                                real_T rtb_FzTire_f;


                                real_T rtb_UnaryMinus;


                                real_T rtb_Add1_l;

                

                    /* local scratch DWork variables */
                                

                                int32_T ForEach_itr;


                                int32_T ForEach_itr_h;


                                int32_T ForEach_itr_e;

                


        
__m128d tmp;
__m128d tmp_0;
__m128d tmp_1;
__m128d tmp_2;
__m128d tmp_3;
__m128d tmp_4;
__m128d tmp_5;
__m128d tmp_6;
real_T VectorConcatenate[12];
real_T rtb_ImpAsg_InsertedFor_x_at_inp[12];
real_T rtb_Transpose[9];
real_T rtb_Transpose1[9];
real_T rtb_VectorConcatenate_l[6];
real_T VectorConcatenate1[4];
real_T rtb_Add1_d[3];
real_T rtb_Add2[3];
real_T rtb_Add_p[3];
real_T rtb_Gain1_k[3];
real_T rtb_Product3_g[3];
real_T rtb_sincos_o1_n[3];
real_T ReactionTorque;
real_T rtb_FrontBias;
real_T rtb_Fsb_idx_0;
real_T rtb_Fsk_idx_0;
real_T rtb_Fsk_idx_1;
real_T rtb_Fx_a;
real_T rtb_Integrator_n;
real_T rtb_Product3_b;
real_T rtb_Product3_cn;
real_T rtb_RearBias1;
real_T rtb_Switch_b;
real_T rtb_UnaryMinus1_c;
int32_T i;
ZCEventType zcEvent;

    




                                            

        
        
    




                
                                    
                                    

























/* {S!d124}UnaryMinus: '<S75>/Unary Minus1' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 */
/*@>adff7*/VectorConcatenate/*@>9dc91*/[/*@>ae009*/0]/*@>9dc90*/ = -/*@<aed92*/*/*@<cab43*/rtu_WindVel;
/*@>adff5*/VectorConcatenate/*@>9dc9b*/[/*@>ae006*/1]/*@>9dc9a*/ = -/*@<aed91*//*@[c92ff*/0.0/*@]*/;
/*@>adff3*/VectorConcatenate/*@>9dca5*/[/*@>ae003*/2]/*@>9dca4*/ = -/*@<aed90*//*@[c931e*/0.0/*@]*/;
/* {S!d126}SignalConversion generated from: '<S75>/Vector Concatenate2' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 */
/*@>adff1*/VectorConcatenate/*@>5603c*/[/*@>ae167*/3]/*@>4e613*/ = /*@>adcbc*/0.0;
/* {S!d128}SignalConversion generated from: '<S75>/Vector Concatenate2' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 */
/*@>adfef*/VectorConcatenate/*@>5604f*/[/*@>ae166*/4]/*@>4e615*/ = /*@>adcbb*/0.0;
/* {S!d130}Trigonometry: '<S104>/sincos' incorporates:
 *  Integrator: '<S72>/Theta'
 *  Trigonometry: '<S111>/sincos'
 *  Trigonometry: '<S82>/sincos'
 *  Trigonometry: '<S86>/sincos'
 */
/*@>b96fb*/rtb_Switch_b/*@>b96fd*/ = /*@>c1d5b*/sin(/*@>c6897*/localX->/*@>cb3e9*/Theta_CSTATE);
/*@>b96eb*/rtb_Product3_b/*@>b96ed*/ = /*@>c1d5d*/cos(/*@>c689e*/localX->/*@>cb3ec*/Theta_CSTATE);
/* {S!d132}Fcn: '<S104>/Fcn11' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adfb5*/rtb_Transpose1/*@>a0e8d*/[/*@>adfb4*/0]/*@>4e62f*/ = /*@>b9e95*/rtb_Product3_b;
/* {S!d134}Fcn: '<S104>/Fcn21' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adfa3*/rtb_Transpose1/*@>a0f63*/[/*@>adfa2*/1]/*@>4e639*/ = /*@>b9e99*/rtb_Switch_b/*@>aed86*/ * /*@>afe13*/0.0;
/* {S!d136}Fcn: '<S104>/Fcn31' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adf91*/rtb_Transpose1/*@>a1039*/[/*@>adf90*/2]/*@>4e643*/ = /*@>b9e9d*/rtb_Switch_b;
/* {S!d138}Fcn: '<S104>/Fcn12' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adf88*/rtb_Transpose1/*@>a1087*/[/*@>adf87*/3]/*@>4e647*/ = /*@>afe1f*/0.0/*@>aed72*/ * /*@>b9ea1*/rtb_Product3_b;
/* {S!d140}Fcn: '<S104>/Fcn22' incorporates:
 *  Fcn: '<S111>/Fcn22'
 *  Fcn: '<S86>/Fcn22'
 *  Trigonometry: '<S104>/sincos'
 */
/*@>be7ba*/rtb_FrontBias/*@>be7bc*/ = /*@>b9ea5*/rtb_Switch_b/*@>aed6a*/ * /*@>afe21*/0.0/*@>aed66*/ * /*@>afe23*/0.0/*@>4e650*/ + /*@>afe25*/1.0;
/*@>adf76*/rtb_Transpose1/*@>a1129*/[/*@>adf75*/4]/*@>4e651*/ = /*@>be7be*/rtb_FrontBias;
/* {S!d142}Fcn: '<S104>/Fcn32' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adf64*/rtb_Transpose1/*@>a11cb*/[/*@>adf63*/5]/*@>4e65b*/ = /*@>b9ea9*/rtb_Switch_b/*@>aed5a*/ * /*@>afe29*/0.0;
/* {S!d144}Fcn: '<S104>/Fcn13' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adf5e*/rtb_Transpose1/*@>a11fd*/[/*@>adf5d*/6]/*@>4e65e*/ = -/*@<aed57*//*@>b9ead*/rtb_Switch_b;
/* {S!d146}Fcn: '<S104>/Fcn23' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adf55*/rtb_Transpose1/*@>a124b*/[/*@>adf54*/7]/*@>4e662*/ = /*@>b9eb1*/rtb_Product3_b/*@>aed55*/ * /*@>afe2d*/0.0;
/* {S!d148}Fcn: '<S104>/Fcn33' incorporates:
 *  Trigonometry: '<S104>/sincos'
 */
/*@>adf4c*/rtb_Transpose1/*@>a1299*/[/*@>adf4b*/8]/*@>4e666*/ = /*@>b9eb5*/rtb_Product3_b;
/* {S!d150}Product: '<S106>/Product' incorporates:
 *  Concatenate: '<S102>/Vector Concatenate'
 *  Math: '<S102>/Transpose1'
 *  Math: '<S103>/Transpose1'
 *  Sum: '<S103>/Add'
 */
/*@>a132b*/for (/*@>ca911*/i = /*@>ca910*/0; /*@>ca91b*/i < /*@>ca919*/3; /*@>ca917*/i/*@>ca91f*/++) {
    /*@>b8749*/rtb_Add_p/*@>b8748*/[/*@>b874b*/i] = (/*@>c4e83*/rtb_Transpose1/*@>c4e85*/[/*@>c4e7f*/3/*@>c4e7e*/ * /*@>c4e81*/i/*@>c4e7d*/ + /*@>c4e82*/1]/*@>ba4f2*/ * /*@>c661a*/DrivetrainEv_ConstB./*@>cb38c*/VectorConcatenate/*@>c4e8a*/[/*@>c4e87*/1]/*@>ba4f1*/ + /*@>c4e90*/rtb_Transpose1/*@>c4e92*/[/*@>c4e8d*/3/*@>c4e8c*/ * /*@>c4e8f*/i]/*@>ba501*/ * /*@>c6620*/DrivetrainEv_ConstB./*@>cb38f*/VectorConcatenate/*@>c4e97*/[/*@>c4e94*/0])/*@>b9edb*/ + /*@>c4e74*/rtb_Transpose1/*@>c4e76*/[/*@>c4e70*/3/*@>c4e6f*/ * /*@>c4e72*/i/*@>c4e6e*/ + /*@>c4e73*/2]/*@>b9edc*/ * /*@>c6614*/DrivetrainEv_ConstB./*@>cb389*/VectorConcatenate/*@>c4e7b*/[/*@>c4e78*/2];
}
/* {E!d150}End of Product: '<S106>/Product' */

/* {S!d152}Sum: '<S102>/Add' */
/*@>adffb*/rtb_Integrator_n/*@>9f624*/ = /*@>c4e6a*/rtb_Add_p/*@>c4e6c*/[/*@>c4e69*/2];
/* {S!d154}Fcn: '<S111>/Fcn11' */
/*@>adf27*/rtb_Transpose1/*@>a14d7*/[/*@>adf26*/0]/*@>4e680*/ = rtb_Product3_b;
/* {S!d156}Fcn: '<S111>/Fcn21' */
/*@>adf15*/rtb_Transpose1/*@>a15ad*/[/*@>adf14*/1]/*@>4e68a*/ = rtb_Switch_b/*@>aed45*/ * /*@>afe3f*/0.0;
/* {S!d158}Fcn: '<S111>/Fcn31' */
/*@>adf03*/rtb_Transpose1/*@>a1683*/[/*@>adf02*/2]/*@>4e694*/ = rtb_Switch_b;
/* {S!d160}Fcn: '<S111>/Fcn12' */
/*@>adefa*/rtb_Transpose1/*@>a16d1*/[/*@>adef9*/3]/*@>4e698*/ = /*@>afe4b*/0.0/*@>aed31*/ * rtb_Product3_b;
/* {S!d162}Fcn: '<S111>/Fcn22' */
/*@>adee8*/rtb_Transpose1/*@>a1773*/[/*@>adee7*/4]/*@>4e6a2*/ = rtb_FrontBias;
/* {S!d164}Fcn: '<S111>/Fcn32' */
/*@>aded6*/rtb_Transpose1/*@>a1815*/[/*@>aded5*/5]/*@>4e6ac*/ = rtb_Switch_b/*@>aed19*/ * /*@>afe55*/0.0;
/* {S!d166}Fcn: '<S111>/Fcn13' */
/*@>aded0*/rtb_Transpose1/*@>a1847*/[/*@>adecf*/6]/*@>4e6af*/ = -/*@<aed16*/rtb_Switch_b;
/* {S!d168}Fcn: '<S111>/Fcn23' */
/*@>adec7*/rtb_Transpose1/*@>a1895*/[/*@>adec6*/7]/*@>4e6b3*/ = rtb_Product3_b/*@>aed14*/ * /*@>afe59*/0.0;
/* {S!d170}Fcn: '<S111>/Fcn33' */
/*@>adebe*/rtb_Transpose1/*@>a18e3*/[/*@>adebd*/8]/*@>4e6b7*/ = rtb_Product3_b;
/* {S!d172}Product: '<S113>/Product' incorporates:
 *  Concatenate: '<S103>/Vector Concatenate'
 *  Math: '<S103>/Transpose1'
 */
/*@>a196a*/for (/*@>ca900*/i = /*@>ca8ff*/0; /*@>ca90a*/i < /*@>ca908*/3; /*@>ca906*/i/*@>ca920*/++) {
    /*@>b876d*/rtb_Product3_g/*@>b876c*/[/*@>b876f*/i] = (/*@>c4eae*/rtb_Transpose1/*@>c4eb0*/[/*@>c4eaa*/3/*@>c4ea9*/ * /*@>c4eac*/i/*@>c4ea8*/ + /*@>c4ead*/1]/*@>ba522*/ * /*@>c662c*/DrivetrainEv_ConstB./*@>cb395*/VectorConcatenate_d/*@>c4eb5*/[/*@>c4eb2*/1]/*@>ba521*/ + /*@>c4ebb*/rtb_Transpose1/*@>c4ebd*/[/*@>c4eb8*/3/*@>c4eb7*/ * /*@>c4eba*/i]/*@>ba531*/ * /*@>c6632*/DrivetrainEv_ConstB./*@>cb398*/VectorConcatenate_d/*@>c4ec2*/[/*@>c4ebf*/0])/*@>b9f33*/ + /*@>c4e9f*/rtb_Transpose1/*@>c4ea1*/[/*@>c4e9b*/3/*@>c4e9a*/ * /*@>c4e9d*/i/*@>c4e99*/ + /*@>c4e9e*/2]/*@>b9f34*/ * /*@>c6626*/DrivetrainEv_ConstB./*@>cb392*/VectorConcatenate_d/*@>c4ea6*/[/*@>c4ea3*/2];
}
/* {S!d174}Integrator: '<S72>/U,w' incorporates:
 *  Constant: '<S72>/U0'
 *  Constant: '<S72>/w0'
 *  SignalConversion generated from: '<S72>/U,w'
 */
/*@>4f621*/if (/*@>c6bfa*/localDW->/*@>cb494*/Uw_IWORK/*@>aed0d*/ != /*@>aed0b*/0) {
    /*@>c68a5*/localX->/*@>cb3ef*/Uw_CSTATE/*@>9dcb0*/[/*@>ae000*/0]/*@>9dcaf*/ = /*@>adcb8*/0.0;
    /*@>c68ac*/localX->/*@>cb3f2*/Uw_CSTATE/*@>9dcb9*/[/*@>adfff*/1]/*@>9dcb8*/ = /*@>adcb7*/0.0;
}
/* {S!d176}SignalConversion generated from: '<S71>/Vector Concatenate7' incorporates:
 *  Concatenate: '<S71>/Vector Concatenate7'
 *  Integrator: '<S72>/U,w'
 */
/* Unit Conversion - from: m/s to: m/s
 Expression: output = (1*input) + (0) */
/*@>c626d*/localB->/*@>cb2bd*/VectorConcatenate7/*@>a1ae7*/[/*@>adea6*/0]/*@>4e6e2*/ = /*@>c68b3*/localX->/*@>cb3f5*/Uw_CSTATE/*@>c4ec7*/[/*@>c4ec4*/0];
/* {S!d178}SignalConversion generated from: '<S71>/Vector Concatenate7' incorporates:
 *  Concatenate: '<S71>/Vector Concatenate7'
 */
/*@>c6274*/localB->/*@>cb2c0*/VectorConcatenate7/*@>57af7*/[/*@>ae15d*/1]/*@>4e6e4*/ = /*@>adcb6*/0.0;
/* {S!d180}SignalConversion generated from: '<S71>/Vector Concatenate7' incorporates:
 *  Concatenate: '<S71>/Vector Concatenate7'
 *  Integrator: '<S72>/U,w'
 */
/*@>c627b*/localB->/*@>cb2c3*/VectorConcatenate7/*@>a1b1a*/[/*@>adea0*/2]/*@>4e6e6*/ = /*@>c68ba*/localX->/*@>cb3f8*/Uw_CSTATE/*@>c4ecc*/[/*@>c4ec9*/1];
/* {S!d182}Integrator: '<S72>/q' */
/*@>c6282*/localB->/*@>cb2c6*/q/*@>4f631*/ = /*@>c68c1*/localX->/*@>cb3fb*/q_CSTATE;
/* {S!d184}SignalConversion generated from: '<S4>/Integrator' */
/*@>c6289*/localB->/*@>cb2c9*/TmpSignalConversionAtIntegrator/*@>9db1d*/[/*@>ae028*/0]/*@>9db1c*/ = /*@[c933d*/0.0/*@]*/;
/*@>c6290*/localB->/*@>cb2cc*/TmpSignalConversionAtIntegrator/*@>9db26*/[/*@>ae025*/1]/*@>9db25*/ = /*@[c935c*/0.0/*@]*/;
/* {S!d186}SignalConversion generated from: '<S75>/Vector Concatenate2' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 *  Gain: '<S79>/[NF,NR]'
 *  Integrator: '<S4>/Integrator'
 *  Integrator: '<S72>/Position'
 *  Lookup_n-D: '<S79>/Damping - Front'
 *  Lookup_n-D: '<S79>/Stiffness - Front'
 *  Product: '<S109>/i x j'
 *  Product: '<S110>/j x i'
 *  SignalConversion generated from: '<S71>/Vector Concatenate4'
 *  SignalConversion generated from: '<S71>/Vector Concatenate9'
 *  Sum: '<S102>/Add'
 *  Sum: '<S102>/Add1'
 *  Sum: '<S107>/Sum'
 *  Sum: '<S79>/Add1'
 *  Sum: '<S79>/Add2'
 *  Sum: '<S79>/Add3'
 * */
/*@>ade8c*/VectorConcatenate/*@>a1d11*/[/*@>ade8b*/5]/*@>4e781*/ = (/*@>c1d63*/look1_binlxpw(((/*@>b50fb*/0.0/*@>b50fa*/ * /*@>c6638*/DrivetrainEv_ConstB./*@>cb39b*/VectorConcatenate/*@>c4ed1*/[/*@>c4ece*/1]/*@>b50f9*/ - /*@>c663e*/DrivetrainEv_ConstB./*@>cb39e*/VectorConcatenate/*@>c4ed6*/[/*@>c4ed3*/0]/*@>b5100*/ * /*@>c6297*/localB->/*@>cb2cf*/q)/*@>b50f8*/ + /*@>c629e*/localB->/*@>cb2d2*/VectorConcatenate7/*@>c4edb*/[/*@>c4ed8*/2])/*@>b50f7*/ - /*@>c62a5*/localB->/*@>cb2d5*/TmpSignalConversionAtIntegrator/*@>c4ee0*/[/*@>c4edd*/0], /*@>c1d60*/rtCP_DampingFront_bp01Data, /*@>c1d62*/rtCP_DampingFront_tableData, /*@>b4d7b*/6U)/*@>b4938*/ + /*@>c1d69*/look1_binlxpw((/*@>c68c8*/localX->/*@>cb3fe*/Position_CSTATE/*@>c4ee5*/[/*@>c4ee2*/1]/*@>b50ec*/ + /*@>b50f2*/rtb_Integrator_n)/*@>b50eb*/ - /*@>c68cf*/localX->/*@>cb401*/Integrator_CSTATE/*@>c4eea*/[/*@>c4ee7*/0], /*@>c1d66*/rtCP_StiffnessFront_bp01Data, /*@>c1d68*/rtCP_StiffnessFront_tableData, /*@>b4d72*/5U))/*@>b4936*/ * /*@>b4937*/2.0;
/* {S!d188}SignalConversion generated from: '<S75>/Vector Concatenate3' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 */
/*@>adfdd*/VectorConcatenate/*@>57f5c*/[/*@>ae154*/6]/*@>4e783*/ = /*@>adcb3*/0.0;
/* {S!d190}SignalConversion generated from: '<S75>/Vector Concatenate3' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 */
/*@>adfdb*/VectorConcatenate/*@>57f6f*/[/*@>ae153*/7]/*@>4e785*/ = /*@>adcb2*/0.0;
/* {S!d192}SignalConversion generated from: '<S75>/Vector Concatenate3' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 *  Gain: '<S79>/[NF,NR]'
 *  Integrator: '<S4>/Integrator'
 *  Integrator: '<S72>/Position'
 *  Lookup_n-D: '<S79>/Ramping - Rear'
 *  Lookup_n-D: '<S79>/Stiffness - Rear'
 *  Product: '<S113>/Product'
 *  Product: '<S116>/i x j'
 *  Product: '<S117>/j x i'
 *  SignalConversion generated from: '<S71>/Vector Concatenate4'
 *  Sum: '<S103>/Add'
 *  Sum: '<S103>/Add1'
 *  Sum: '<S114>/Sum'
 *  Sum: '<S79>/Add1'
 *  Sum: '<S79>/Add2'
 *  Sum: '<S79>/Add3'
 * */
/*@>ade89*/VectorConcatenate/*@>a1db3*/[/*@>ade88*/8]/*@>4e787*/ = (/*@>c1d6f*/look1_binlxpw(((/*@>b5122*/0.0/*@>b5121*/ * /*@>c6644*/DrivetrainEv_ConstB./*@>cb3a1*/VectorConcatenate_d/*@>c4eef*/[/*@>c4eec*/1]/*@>b5120*/ - /*@>c664a*/DrivetrainEv_ConstB./*@>cb3a4*/VectorConcatenate_d/*@>c4ef4*/[/*@>c4ef1*/0]/*@>b5127*/ * /*@>c62ac*/localB->/*@>cb2d8*/q)/*@>b511f*/ + /*@>c62b3*/localB->/*@>cb2db*/VectorConcatenate7/*@>c4ef9*/[/*@>c4ef6*/2])/*@>b511e*/ - /*@>c62ba*/localB->/*@>cb2de*/TmpSignalConversionAtIntegrator/*@>c4efe*/[/*@>c4efb*/1], /*@>c1d6c*/rtCP_RampingRear_bp01Data, /*@>c1d6e*/rtCP_RampingRear_tableData, /*@>b4d8e*/6U)/*@>b4940*/ + /*@>c1d75*/look1_binlxpw((/*@>c68d6*/localX->/*@>cb404*/Position_CSTATE/*@>c4f03*/[/*@>c4f00*/1]/*@>b5111*/ + /*@>c4f06*/rtb_Product3_g/*@>c4f08*/[/*@>c4f05*/2])/*@>b5110*/ - /*@>c68dd*/localX->/*@>cb407*/Integrator_CSTATE/*@>c4f0d*/[/*@>c4f0a*/1], /*@>c1d72*/rtCP_StiffnessRear_bp01Data, /*@>c1d74*/rtCP_StiffnessRear_tableData, /*@>b4d85*/5U))/*@>b493e*/ * /*@>b493f*/2.0;
/* {S!d194}SignalConversion generated from: '<S75>/Vector Concatenate' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 */
/*@>ad964*/VectorConcatenate/*@>aa1ed*/[/*@>ad83c*/9]/*@>aa1ec*/ = /*@>c6650*/DrivetrainEv_ConstB./*@>cb3a7*/VectorConcatenate4/*@>c4f12*/[/*@>c4f0f*/0];
/*@>ad95f*/VectorConcatenate/*@>aa1fd*/[/*@>ad83b*/10]/*@>aa1fc*/ = /*@>c6656*/DrivetrainEv_ConstB./*@>cb3aa*/VectorConcatenate4/*@>c4f17*/[/*@>c4f14*/1];
/*@>ad95a*/VectorConcatenate/*@>aa20d*/[/*@>ad83a*/11]/*@>aa20c*/ = /*@>c665c*/DrivetrainEv_ConstB./*@>cb3ad*/VectorConcatenate4/*@>c4f1c*/[/*@>c4f19*/2];
/* {S!d196}SignalConversion generated from: '<S75>/Vector Concatenate1' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate1'
 *  Integrator: '<S72>/Theta'
 *  UnaryMinus: '<S75>/Unary Minus'
 */
/*@>adfd9*/VectorConcatenate1/*@>57fed*/[/*@>ae152*/0]/*@>4e78c*/ = -/*@<aecf1*//*@>c68e4*/localX->/*@>cb40a*/Theta_CSTATE;
/* {S!d198}SignalConversion generated from: '<S75>/Vector Concatenate1' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate1'
 *  Integrator: '<S72>/Theta'
 *  UnaryMinus: '<S75>/Unary Minus'
 */
/*@>adfd7*/VectorConcatenate1/*@>58000*/[/*@>ae151*/1]/*@>4e78e*/ = -/*@<aecf0*//*@>c68eb*/localX->/*@>cb40d*/Theta_CSTATE;
/* {S!d200}SignalConversion generated from: '<S75>/Vector Concatenate1' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate1'
 *  Integrator: '<S72>/Theta'
 *  UnaryMinus: '<S75>/Unary Minus'
 */
/*@>adfd5*/VectorConcatenate1/*@>58013*/[/*@>ae150*/2]/*@>4e790*/ = -/*@<aecef*//*@>c68f2*/localX->/*@>cb410*/Theta_CSTATE;
/* {S!d202}UnitConversion: '<S71>/Unit Conversion' */
/* Unit Conversion - from: deg to: rad
 Expression: output = (0.0174533*input) + (0) */
/*@>ae1fb*/rtb_UnaryMinus1_c/*@>4f63f*/ = /*@>ae1fd*/0.017453292519943295/*@>aeced*/ * */*@<caa9d*/rtu_Grade;
/* {S!d204}Sum: '<S75>/Add' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate1'
 *  Integrator: '<S72>/Theta'
 *  UnaryMinus: '<S75>/Unary Minus'
 */
/*@>adfd3*/VectorConcatenate1/*@>58026*/[/*@>ae14f*/3]/*@>51701*/ = -/*@<aecea*//*@>c68f9*/localX->/*@>cb413*/Theta_CSTATE/*@>516fe*/ - /*@>ae2cd*/rtb_UnaryMinus1_c;
/* {S!d117}Outputs for Iterator SubSystem: '<S75>/rotation' incorporates:
 *  ForEach: '<S128>/For Each'
 */
/*@>ca8d9*/for (/*@>ca8d5*/ForEach_itr_e/*@>ca8d4*/ = /*@>ca8d6*/0; /*@>ca8cc*/ForEach_itr_e/*@>ca8ca*/ < /*@>ca8cd*/4; /*@>ca8cf*/ForEach_itr_e/*@>ca921*/++) {
    /* {S!d206}SignalConversion generated from: '<S129>/sincos' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate1'
 *  ForEachSliceSelector generated from: '<S128>/theta'
 */
    /*@>ade82*/rtb_Add1_d/*@>a1e36*/[/*@>ade81*/1]/*@>9dd04*/ = /*@>c4f20*/VectorConcatenate1/*@>c4f22*/[/*@>c4f1f*/ForEach_itr_e];
    /* {S!d208}Trigonometry: '<S129>/sincos' */
    /*@>adb49*/rtb_Gain1_k/*@>a9c1e*/[/*@>adb3b*/1]/*@>a9c1d*/ = /*@>c1e2b*/cos(/*@>c4f25*/rtb_Add1_d/*@>c4f27*/[/*@>c4f24*/1]);
    rtb_Integrator_n/*@>a9c27*/ = /*@>c1e2d*/sin(/*@>c4f2a*/rtb_Add1_d/*@>c4f2c*/[/*@>c4f29*/1]);
    /* {S!d210}Fcn: '<S129>/Fcn11' */
    /*@>ade70*/rtb_Transpose/*@>a1f0e*/[/*@>ade6f*/0]/*@>4f855*/ = /*@>c4f2f*/rtb_Gain1_k/*@>c4f31*/[/*@>c4f2e*/1];
    /* {S!d212}Fcn: '<S129>/Fcn21' */
    /*@>ade4c*/rtb_Transpose/*@>a20ba*/[/*@>ade4b*/1]/*@>4f85f*/ = rtb_Integrator_n/*@>aedf4*/ * /*@>afe97*/0.0;
    /* {S!d214}Fcn: '<S129>/Fcn31' */
    /*@>ade28*/rtb_Transpose/*@>a2232*/[/*@>ade27*/2]/*@>4f869*/ = rtb_Integrator_n;
    /* {S!d216}Fcn: '<S129>/Fcn12' */
    /*@>ade16*/rtb_Transpose/*@>a22ce*/[/*@>ade15*/3]/*@>4f86d*/ = /*@>afea3*/0.0/*@>aede0*/ * /*@>c4f34*/rtb_Gain1_k/*@>c4f36*/[/*@>c4f33*/1];
    /* {S!d218}Fcn: '<S129>/Fcn22' */
    /*@>addf2*/rtb_Transpose/*@>a2412*/[/*@>addf1*/4]/*@>4f877*/ = rtb_Integrator_n/*@>aedd8*/ * /*@>afea5*/0.0/*@>aedd4*/ * /*@>afea7*/0.0/*@>4f876*/ + /*@>afea9*/1.0;
    /* {S!d220}Fcn: '<S129>/Fcn32' */
    /*@>addce*/rtb_Transpose/*@>a2556*/[/*@>addcd*/5]/*@>4f881*/ = rtb_Integrator_n/*@>aedc8*/ * /*@>afead*/0.0;
    /* {S!d222}Fcn: '<S129>/Fcn13' */
    /*@>addc2*/rtb_Transpose/*@>a25ba*/[/*@>addc1*/6]/*@>4f884*/ = -/*@<aedc5*/rtb_Integrator_n;
    /* {S!d224}Fcn: '<S129>/Fcn23' */
    /*@>addb0*/rtb_Transpose/*@>a2656*/[/*@>addaf*/7]/*@>4f888*/ = /*@>c4f39*/rtb_Gain1_k/*@>c4f3b*/[/*@>c4f38*/1]/*@>aedc3*/ * /*@>afeb1*/0.0;
    /* {S!d226}Fcn: '<S129>/Fcn33' */
    /*@>add9e*/rtb_Transpose/*@>a26f2*/[/*@>add9d*/8]/*@>4f88c*/ = /*@>c4f3e*/rtb_Gain1_k/*@>c4f40*/[/*@>c4f3d*/1];
/*@>a2805*/    for (/*@>ca8ef*/i = /*@>ca8ee*/0; /*@>ca8f9*/i < /*@>ca8f7*/3; /*@>ca8f5*/i/*@>ca922*/++) {
        /* {S!d228}ForEachSliceAssignment generated from: '<S128>/x' incorporates:
 *  Concatenate: '<S75>/Vector Concatenate'
 *  ForEachSliceSelector generated from: '<S128>/X'
 *  Math: '<S128>/Transpose1'
 *  Math: '<S83>/Transpose'
 *  Product: '<S130>/Product'
 */
        /*@>add77*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>a87a7*/[/*@>add75*/i/*@>a87a3*/ + /*@>adbbb*/3/*@>aedfe*/ * /*@>add73*/ForEach_itr_e]/*@>a28b1*/ = (/*@>c4f72*/rtb_Transpose/*@>c4f74*/[/*@>c4f6e*/3/*@>c4f6d*/ * /*@>c4f70*/i/*@>c4f6c*/ + /*@>c4f71*/1]/*@>ba5df*/ * /*@>c4f7c*/VectorConcatenate/*@>c4f7e*/[/*@>c4f78*/3/*@>c4f77*/ * /*@>c4f7a*/ForEach_itr_e/*@>c4f76*/ + /*@>c4f7b*/1]/*@>ba5de*/ + /*@>c4f84*/rtb_Transpose/*@>c4f86*/[/*@>c4f81*/3/*@>c4f80*/ * /*@>c4f83*/i]/*@>ba5f3*/ * /*@>c4f8c*/VectorConcatenate/*@>c4f8e*/[/*@>c4f89*/3/*@>c4f88*/ * /*@>c4f8b*/ForEach_itr_e])/*@>ba0c0*/ + /*@>c4f5e*/rtb_Transpose/*@>c4f60*/[/*@>c4f5a*/3/*@>c4f59*/ * /*@>c4f5c*/i/*@>c4f58*/ + /*@>c4f5d*/2]/*@>ba0c1*/ * /*@>c4f68*/VectorConcatenate/*@>c4f6a*/[/*@>c4f64*/3/*@>c4f63*/ * /*@>c4f66*/ForEach_itr_e/*@>c4f62*/ + /*@>c4f67*/2];
    }
}
/* {E!d117}End of Outputs for SubSystem: '<S75>/rotation' */

/* {S!d230}Fcn: '<S86>/Fcn11' */
/*@>ade79*/rtb_Transpose/*@>a1e8c*/[/*@>ade78*/0]/*@>4e7a0*/ = rtb_Product3_b;
/* {S!d232}Fcn: '<S86>/Fcn21' */
/*@>ade5e*/rtb_Transpose/*@>a1fe4*/[/*@>ade5d*/1]/*@>4e7aa*/ = rtb_Switch_b/*@>aece0*/ * /*@>afe6b*/0.0;
/* {S!d234}Fcn: '<S86>/Fcn31' */
/*@>ade3a*/rtb_Transpose/*@>a2190*/[/*@>ade39*/2]/*@>4e7b4*/ = rtb_Switch_b;
/* {S!d236}Fcn: '<S86>/Fcn12' */
/*@>ade1f*/rtb_Transpose/*@>a2280*/[/*@>ade1e*/3]/*@>4e7b8*/ = /*@>afe77*/0.0/*@>aeccc*/ * rtb_Product3_b;
/* {S!d238}Fcn: '<S86>/Fcn22' */
/*@>ade04*/rtb_Transpose/*@>a2370*/[/*@>ade03*/4]/*@>4e7c2*/ = rtb_FrontBias;
/* {S!d240}Fcn: '<S86>/Fcn32' */
/*@>adde0*/rtb_Transpose/*@>a24b4*/[/*@>adddf*/5]/*@>4e7cc*/ = rtb_Switch_b/*@>aecb4*/ * /*@>afe81*/0.0;
/* {S!d242}Fcn: '<S86>/Fcn13' */
/*@>addc8*/rtb_Transpose/*@>a2588*/[/*@>addc7*/6]/*@>4e7cf*/ = -/*@<aecb1*/rtb_Switch_b;
/* {S!d244}Fcn: '<S86>/Fcn23' */
/*@>addb9*/rtb_Transpose/*@>a2608*/[/*@>addb8*/7]/*@>4e7d3*/ = rtb_Product3_b/*@>aecaf*/ * /*@>afe85*/0.0;
/* {S!d246}Fcn: '<S86>/Fcn33' */
/*@>adda7*/rtb_Transpose/*@>a26a4*/[/*@>adda6*/8]/*@>4e7d7*/ = rtb_Product3_b;
/* {S!d248}Math: '<S83>/Transpose' */
/*@>a2750*/for (/*@>ca8bc*/i = /*@>ca8bb*/0; /*@>ca8c6*/i < /*@>ca8c4*/3; /*@>ca8c2*/i/*@>ca923*/++) {
    /*@>ad9c0*/rtb_Transpose1/*@>aa12c*/[/*@>ad9bf*/3/*@>aee25*/ * /*@>ad9bd*/i]/*@>aa12b*/ = /*@>c4f44*/rtb_Transpose/*@>c4f46*/[/*@>c4f43*/i];
    /*@>ad9b7*/rtb_Transpose1/*@>aa144*/[/*@>ad9b6*/3/*@>aee22*/ * /*@>ad9b4*/i/*@>aa146*/ + /*@>ad9af*/1]/*@>aa143*/ = /*@>c4f4c*/rtb_Transpose/*@>c4f4e*/[/*@>c4f4a*/i/*@>c4f48*/ + /*@>c4f4b*/3];
    /*@>ad9ad*/rtb_Transpose1/*@>aa15c*/[/*@>ad9ac*/3/*@>aee1f*/ * /*@>ad9aa*/i/*@>aa15e*/ + /*@>ad9a5*/2]/*@>aa15b*/ = /*@>c4f54*/rtb_Transpose/*@>c4f56*/[/*@>c4f52*/i/*@>c4f50*/ + /*@>c4f53*/6];
}
/*@>c2a41*/memcpy(&/*@>c0006*/rtb_Transpose/*@>c0007*/[/*@>bfff6*/0], &/*@>c000e*/rtb_Transpose1/*@>c000f*/[/*@>c0003*/0], /*@>c0005*/9U/*@>c0012*/ * /*@>c0011*/sizeof(real_T));
/* {E!d248}End of Math: '<S83>/Transpose' */

/* {S!d250}Sum: '<S74>/Add1' incorporates:
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Selector: '<S75>/Selector'
 */
rtb_Integrator_n/*@>aa0b4*/ = /*@>c62c1*/localB->/*@>cb2e1*/VectorConcatenate7/*@>c4f93*/[/*@>c4f90*/0]/*@>aa0b6*/ - /*@>c4f96*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>c4f98*/[/*@>c4f95*/0];
/* {S!d252}Product: '<S74>/Product' */
/*@>ad9f6*/rtb_Gain1_k/*@>aa0c3*/[/*@>ad9eb*/0]/*@>aa0c2*/ = rtb_Integrator_n/*@>aeca7*/ * rtb_Integrator_n;
/* {S!d254}Sum: '<S74>/Add1' incorporates:
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Selector: '<S75>/Selector'
 */
/*@>ad9f0*/rtb_Product3_g/*@>aa0ce*/[/*@>ad9ea*/0] = rtb_Integrator_n;
rtb_Integrator_n/*@>aa0da*/ = /*@>c62c8*/localB->/*@>cb2e4*/VectorConcatenate7/*@>c4f9d*/[/*@>c4f9a*/1]/*@>aa0dc*/ - /*@>c4fa0*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>c4fa2*/[/*@>c4f9f*/1];
/* {S!d256}Product: '<S74>/Product' */
/*@>ad9e2*/rtb_Gain1_k/*@>aa0e9*/[/*@>ad9d7*/1]/*@>aa0e8*/ = rtb_Integrator_n/*@>aeca3*/ * rtb_Integrator_n;
/* {S!d258}Sum: '<S74>/Add1' incorporates:
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Selector: '<S75>/Selector'
 */
/*@>ad9dc*/rtb_Product3_g/*@>aa0f4*/[/*@>ad9d6*/1] = rtb_Integrator_n;
rtb_Integrator_n/*@>aa100*/ = /*@>c62cf*/localB->/*@>cb2e7*/VectorConcatenate7/*@>c4fa7*/[/*@>c4fa4*/2]/*@>aa102*/ - /*@>c4faa*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>c4fac*/[/*@>c4fa9*/2];
/* {S!d260}Sqrt: '<S74>/Sqrt' incorporates:
 *  Product: '<S74>/Product'
 *  Sum: '<S74>/Sum of Elements'
 */
/*@>ae2c5*/rtb_Switch_b/*@>4e81f*/ = /*@>c1d79*/sqrt((/*@>c4faf*/rtb_Gain1_k/*@>c4fb1*/[/*@>c4fae*/0]/*@>b5157*/ + /*@>c4fb4*/rtb_Gain1_k/*@>c4fb6*/[/*@>c4fb3*/1])/*@>b5156*/ + rtb_Integrator_n/*@>b5160*/ * rtb_Integrator_n);
/* {S!d262}Product: '<S74>/Product2' */
/*@>ae2bf*/rtb_UnaryMinus1_c/*@>4e826*/ = /*@>ae2c3*/rtb_Switch_b/*@>aec9b*/ * /*@>ae2c1*/rtb_Switch_b;
/* {S!d264}SignalConversion generated from: '<S74>/Vector Concatenate' incorporates:
 *  Constant: '<S74>/Constant'
 */
/*@>adfc7*/rtb_VectorConcatenate_l/*@>598fa*/[/*@>ae14e*/0]/*@>4e829*/ = /*@>adcad*/0.28;
/* {S!d266}Trigonometry: '<S74>/Trigonometric Function' */
/*@>ae2bb*/rtb_Switch_b/*@>4e82e*/ = /*@[c9fab*/rt_atan2d_snf(/*@>cb5d5*/rtb_Product3_g/*@>cb5d4*/[/*@>cb5d6*/1], /*@>cb5e1*/rtb_Product3_g/*@>cb5e0*/[/*@>cb5e2*/0])/*@]*/;
/* {S!d268}Lookup_n-D: '<S74>/Cs' incorporates:
 *  Switch: '<S15>/Switch'
 */
/*@>add69*/rtb_VectorConcatenate_l/*@>a2a07*/[/*@>add68*/1]/*@>51fce*/ = /*@>c1d81*/look1_binlcpw(/*@>ae16f*/rtb_Switch_b, /*@>c1d7e*/rtCP_Cs_bp01Data, /*@>c1d80*/rtCP_Cs_tableData, /*@>ae0b3*/1U);
/* {S!d270}SignalConversion generated from: '<S74>/Vector Concatenate' incorporates:
 *  Constant: '<S74>/Constant1'
 */
/*@>adfc5*/rtb_VectorConcatenate_l/*@>59973*/[/*@>ae149*/2]/*@>4e838*/ = /*@>adcac*/0.1;
/* {S!d272}Lookup_n-D: '<S74>/Crm' incorporates:
 *  Switch: '<S15>/Switch'
 */
/*@>add66*/rtb_VectorConcatenate_l/*@>a2a3c*/[/*@>add65*/3]/*@>52008*/ = /*@>c1d87*/look1_binlxpw(/*@>ae16c*/rtb_Switch_b, /*@>c1d84*/rtCP_Crm_bp01Data, /*@>c1d86*/rtCP_Crm_tableData, /*@>ae0b2*/1U);
/* {S!d274}Trigonometry: '<S74>/Tanh' incorporates:
 *  Gain: '<S74>/4'
 */
/*@>b971b*/rtb_FrontBias/*@>b971d*/ = /*@>c1d89*/tanh(/*@>ae377*/4.0/*@>aec97*/ * /*@>c4fc3*/rtb_Product3_g/*@>c4fc5*/[/*@>c4fc2*/0]);
/*@>ada30*/rtb_Product3_g/*@>aa02d*/[/*@>ada2c*/0] = rtb_FrontBias;
/*@>ada21*/rtb_Product3_g/*@>aa04e*/[/*@>ada1d*/1] = /*@>c1d8b*/tanh(/*@>b49b6*/4.0/*@>b49b5*/ * /*@>c4fc8*/rtb_Product3_g/*@>c4fca*/[/*@>c4fc7*/1]);
/*@>ada12*/rtb_Product3_g/*@>aa06f*/[/*@>ada0e*/2] = /*@>c1d8d*/tanh(/*@>b49c6*/0.0/*@>b49c5*/ * rtb_Integrator_n);
/* {S!d276}Product: '<S74>/Product5' incorporates:
 *  Constant: '<S74>/Constant2'
 *  Trigonometry: '<S74>/Tanh'
 */
/*@>add60*/rtb_VectorConcatenate_l/*@>a2ac6*/[/*@>add5f*/4]/*@>4e853*/ = /*@>b9e84*/rtb_FrontBias/*@>aec8b*/ * /*@>adcab*/0.1;
/* {S!d278}Lookup_n-D: '<S74>/Cym' incorporates:
 *  Switch: '<S15>/Switch'
 */
/*@>add5d*/rtb_VectorConcatenate_l/*@>a2b1a*/[/*@>add5c*/5]/*@>52042*/ = /*@>c1d93*/look1_binlxpw(/*@>ae169*/rtb_Switch_b, /*@>c1d90*/rtCP_Cym_bp01Data, /*@>c1d92*/rtCP_Cym_tableData, /*@>ae0b1*/1U);
for (i = 0; i <= 4; i += 2) {
    /* {S!d280}Product: '<S74>/Product1' */
    tmp_5 = _mm_loadu_pd(&/*@>b8d98*/rtb_VectorConcatenate_l[/*@>b8d97*/i]);
    /* {S!d282}Gain: '<S74>/.5.*A.*Pabs.//R.//T' incorporates:
 *  Constant: '<S70>/AirTempConstant'
 *  Product: '<S74>/Product1'
 */
    _mm_storeu_pd(&/*@>b8de8*/rtb_VectorConcatenate_l/*@>b8de7*/[/*@>b8dea*/i], _mm_mul_pd(_mm_div_pd(_mm_mul_pd(_mm_set1_pd(/*@>ba261*/rtb_UnaryMinus1_c), tmp_5), _mm_set1_pd(/*@>ba266*/273.0)), _mm_set1_pd(/*@>b9f9a*/400.6294024204168)));
}
/* {S!d284}SignalConversion generated from: '<S83>/Product' incorporates:
 *  Integrator: '<S72>/U,w'
 */
/*@>ae349*/rtb_Switch_b/*@>a2ca4*/ = /*@>c6900*/localX->/*@>cb416*/Uw_CSTATE/*@>c4fcf*/[/*@>c4fcc*/0];
/*@>ae345*/rtb_UnaryMinus1_c/*@>a2cc6*/ = /*@>c6907*/localX->/*@>cb419*/Uw_CSTATE/*@>c4fd4*/[/*@>c4fd1*/1];
for (i = 0; i <= 0; i += 2) {
    /* {S!d286}Product: '<S74>/Product4' incorporates:
 *  Constant: '<S74>/Constant3'
 *  Sum: '<S74>/Add2'
 */
    tmp_5 = _mm_loadu_pd(&/*@>b8aaf*/rtb_VectorConcatenate_l[/*@>b8aad*/i/*@>b8aab*/ + /*@>b8aae*/3]);
    _mm_storeu_pd(&/*@>b8aeb*/rtb_Add1_d/*@>b8aea*/[/*@>b8aed*/i], _mm_mul_pd(tmp_5, _mm_set1_pd(/*@>b9fa2*/2.7)));
    /* {S!d288}Sum: '<S74>/Add2' */
    tmp_5 = _mm_loadu_pd(&/*@>b8b09*/rtb_Product3_g[/*@>b8b08*/i]);
    /* {S!d290}Product: '<S74>/Product4' incorporates:
 *  Sum: '<S74>/Add2'
 */
    tmp = _mm_loadu_pd(&/*@>b8b5f*/rtb_VectorConcatenate_l[/*@>b8b5e*/i]);
    /* {S!d292}Product: '<S83>/Product' incorporates:
 *  Math: '<S83>/Transpose'
 *  Product: '<S74>/Product4'
 *  Sum: '<S74>/Add2'
 */
    tmp_0 = _mm_loadu_pd(&/*@>b8b89*/rtb_Transpose[/*@>b8b88*/i]);
    tmp_6 = _mm_set1_pd(/*@>b8bb2*/0.0);
    tmp_1 = _mm_loadu_pd(&/*@>b8bdb*/rtb_Transpose[/*@>b8bd9*/i/*@>b8bd7*/ + /*@>b8bda*/3]);
    tmp_2 = _mm_loadu_pd(&/*@>b8c1f*/rtb_Transpose[/*@>b8c1d*/i/*@>b8c1b*/ + /*@>b8c1e*/6]);
    /* {S!d294}Selector: '<S75>/Selector1' incorporates:
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Product: '<S74>/Product4'
 *  Sum: '<S74>/Add2'
 */
    tmp_3 = _mm_loadu_pd(&/*@>b8c69*/rtb_ImpAsg_InsertedFor_x_at_inp[/*@>b8c67*/i/*@>b8c65*/ + /*@>b8c68*/3]);
    /* {S!d296}Gain: '<S75>/Gain' incorporates:
 *  Sum: '<S74>/Add2'
 */
    tmp_3 = _mm_mul_pd(tmp_3, _mm_loadu_pd(&/*@>b9fe3*/rtCP_Gain_Gain[/*@>b9fe5*/i]));
    /* {S!d298}SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
 *  Sum: '<S74>/Add2'
 */
    _mm_storeu_pd(&/*@>b8cac*/rtb_VectorConcatenate_l/*@>b8cab*/[/*@>b8cae*/i], tmp_3);
    /* {S!d300}Selector: '<S75>/Selector1' incorporates:
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Product: '<S83>/Product'
 *  Selector: '<S75>/Selector2'
 *  Sum: '<S74>/Add2'
 */
    tmp_4 = _mm_loadu_pd(&/*@>b8ccb*/rtb_ImpAsg_InsertedFor_x_at_inp[/*@>b8cc9*/i/*@>b8cc7*/ + /*@>b8cca*/6]);
    /* {S!d302}Gain: '<S75>/Gain1' incorporates:
 *  Sum: '<S74>/Add2'
 */
    tmp_4 = _mm_mul_pd(tmp_4, _mm_loadu_pd(&/*@>b9fec*/rtCP_Gain1_Gain[/*@>b9fee*/i]));
    /* {S!d304}Sum: '<S71>/Add2' incorporates:
 *  Sum: '<S74>/Add2'
 */
    _mm_storeu_pd(&/*@>b8d1c*/rtb_Add2/*@>b8d1b*/[/*@>b8d1e*/i], _mm_add_pd(tmp_3, tmp_4));
    /* {S!d306}SignalConversion generated from: '<S71>/Vector Concatenate' incorporates:
 *  Product: '<S74>/Product4'
 *  Sum: '<S74>/Add2'
 */
    _mm_storeu_pd(&/*@>b8d30*/rtb_VectorConcatenate_l/*@>b8d2f*/[/*@>b8d33*/i/*@>b8d31*/ + /*@>b8d34*/3], tmp_4);
    /* {S!d308}Gain: '<S75>/Gain' incorporates:
 *  Sum: '<S74>/Add2'
 */
    _mm_storeu_pd(&/*@>b8d40*/rtb_sincos_o1_n/*@>b8d3f*/[/*@>b8d42*/i], tmp_3);
    /* {S!d310}Gain: '<S75>/Gain1' incorporates:
 *  Sum: '<S74>/Add2'
 */
    _mm_storeu_pd(&/*@>b8d4e*/rtb_Gain1_k/*@>b8d4d*/[/*@>b8d50*/i], tmp_4);
    /* {S!d312}Product: '<S74>/Product3' incorporates:
 *  Constant: '<S74>/Constant4'
 *  Sum: '<S74>/Add2'
 */
    _mm_storeu_pd(&/*@>b8d5c*/rtb_Product3_g/*@>b8d5b*/[/*@>b8d5e*/i], _mm_mul_pd(_mm_sub_pd(tmp_5, _mm_loadu_pd(&/*@>ba289*/rtCP_Constant4_Value[/*@>ba28b*/i])), tmp));
    /* {S!d314}Product: '<S83>/Product' incorporates:
 *  Sum: '<S74>/Add2'
 */
    _mm_storeu_pd(&/*@>b8d6a*/rtb_Add_p/*@>b8d69*/[/*@>b8d6c*/i], _mm_add_pd(_mm_mul_pd(tmp_2, _mm_set1_pd(/*@>ba294*/rtb_UnaryMinus1_c)), _mm_add_pd(_mm_mul_pd(tmp_1, tmp_6), _mm_add_pd(_mm_mul_pd(tmp_0, _mm_set1_pd(/*@>ba57f*/rtb_Switch_b)), tmp_6))));
}
/*@>9dbce*/for (/*@>ca88d*/i = 2; /*@>ca897*/i < 3; /*@>ca893*/i/*@>ca926*/++) {
    /* {S!d316}Product: '<S74>/Product4' incorporates:
 *  Constant: '<S74>/Constant3'
 */
    /*@>add4a*/rtb_Add1_d/*@>a2c07*/[/*@>add48*/i]/*@>9dbba*/ = /*@>c4fdf*/rtb_VectorConcatenate_l/*@>c4fe1*/[/*@>c4fdd*/i/*@>c4fdb*/ + /*@>c4fde*/3]/*@>aee4e*/ * /*@>adca8*/2.7;
    /* {S!d318}Product: '<S74>/Product3' incorporates:
 *  Constant: '<S74>/Constant4'
 *  Sum: '<S74>/Add2'
 */
    rtb_Integrator_n/*@>a2bc6*/ = (/*@>c4fea*/rtb_Product3_g/*@>c4fec*/[/*@>c4fe9*/i]/*@>a2ba1*/ - /*@>c4ff0*/rtCP_Constant4_Value/*@>c4ff2*/[/*@>c4fef*/i])/*@>aee4a*/ * /*@>c4ff6*/rtb_VectorConcatenate_l/*@>c4ff8*/[/*@>c4ff5*/i];
    /* {S!d320}Gain: '<S75>/Gain' incorporates:
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Selector: '<S75>/Selector1'
 */
    rtb_FrontBias/*@>a2dd9*/ = /*@>c5008*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>c500a*/[/*@>c5006*/i/*@>c5004*/ + /*@>c5007*/3]/*@>aee3a*/ * /*@>c500e*/rtCP_Gain_Gain/*@>c5010*/[/*@>c500d*/i];
    /* {S!d322}SignalConversion generated from: '<S71>/Vector Concatenate' */
    /*@>add2d*/rtb_VectorConcatenate_l/*@>a2ebd*/[/*@>add2b*/i]/*@>9dbdc*/ = rtb_FrontBias;
    /* {S!d324}Gain: '<S75>/Gain1' incorporates:
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Selector: '<S75>/Selector2'
 */
    rtb_Fx_a/*@>a2e7e*/ = /*@>c5020*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>c5022*/[/*@>c501e*/i/*@>c501c*/ + /*@>c501f*/6]/*@>aee36*/ * /*@>c5026*/rtCP_Gain1_Gain/*@>c5028*/[/*@>c5025*/i];
    /* {S!d326}Sum: '<S71>/Add2' */
    /*@>add29*/rtb_Add2/*@>a2f14*/[/*@>add27*/i]/*@>9dd1d*/ = rtb_FrontBias/*@>9dd24*/ + rtb_Fx_a;
    /* {S!d328}SignalConversion generated from: '<S71>/Vector Concatenate' */
    /*@>add25*/rtb_VectorConcatenate_l/*@>a2fcf*/[/*@>add23*/i/*@>a2fd4*/ + /*@>add22*/3]/*@>9dbfb*/ = rtb_Fx_a;
    /* {S!d330}Gain: '<S75>/Gain' */
    /*@>adbd6*/rtb_sincos_o1_n/*@>a7db4*/[/*@>adbd4*/i] = rtb_FrontBias;
    /* {S!d332}Gain: '<S75>/Gain1' */
    /*@>adbca*/rtb_Gain1_k/*@>a7dcf*/[/*@>adbc8*/i] = rtb_Fx_a;
    /* {S!d334}Product: '<S74>/Product3' incorporates:
 *  Sum: '<S74>/Add2'
 */
    /*@>b87d0*/rtb_Product3_g/*@>b87cf*/[/*@>b87d2*/i] = rtb_Integrator_n;
    /* {S!d336}Product: '<S83>/Product' incorporates:
 *  Math: '<S83>/Transpose'
 */
    /*@>b87e8*/rtb_Add_p/*@>b87e7*/[/*@>b87ea*/i] = (/*@>c5036*/rtb_Transpose/*@>c5038*/[/*@>c5034*/i/*@>c5032*/ + /*@>c5035*/3]/*@>ba591*/ * /*@>ba599*/0.0/*@>ba590*/ + /*@>c503c*/rtb_Transpose/*@>c503e*/[/*@>c503b*/i]/*@>ba59b*/ * /*@>ba5a2*/rtb_Switch_b)/*@>ba03c*/ + /*@>c502e*/rtb_Transpose/*@>c5030*/[/*@>c502c*/i/*@>c502a*/ + /*@>c502d*/6]/*@>ba03d*/ * /*@>ba046*/rtb_UnaryMinus1_c;
}
/* {S!d338}SignalConversion generated from: '<S72>/Position' */
/*@>c62d6*/localB->/*@>cb2ea*/TmpSignalConversionAtPositionIn/*@>a308b*/[/*@>add1c*/0]/*@>9dc1d*/ = /*@>c4fd7*/rtb_Add_p/*@>c4fd9*/[/*@>c4fd6*/0];
/*@>c62dd*/localB->/*@>cb2ed*/TmpSignalConversionAtPositionIn/*@>a30bd*/[/*@>add16*/1]/*@>9dc28*/ = /*@>c4fe4*/rtb_Add_p/*@>c4fe6*/[/*@>c4fe3*/2];
/* {S!d340}Product: '<S72>/Product' incorporates:
 *  Gain: '<S72>/Matrix Gain'
 *  Integrator: '<S72>/U,w'
 */
/*@>ae30f*/rtb_Fsk_idx_0/*@>a9ea7*/ = (/*@>b517d*/0.0/*@>b517c*/ * /*@>c690e*/localX->/*@>cb41c*/Uw_CSTATE/*@>c4ffd*/[/*@>c4ffa*/0]/*@>b4dfd*/ - /*@>c6915*/localX->/*@>cb41f*/Uw_CSTATE/*@>c5002*/[/*@>c4fff*/1])/*@>aec83*/ * /*@>c62e4*/localB->/*@>cb2f0*/q;
/*@>ae303*/rtb_Fsk_idx_1/*@>a9f12*/ = (/*@>b4e0e*/0.0/*@>b4e0d*/ * /*@>c691c*/localX->/*@>cb422*/Uw_CSTATE/*@>c5015*/[/*@>c5012*/1]/*@>b4e0a*/ + /*@>c6923*/localX->/*@>cb425*/Uw_CSTATE/*@>c501a*/[/*@>c5017*/0])/*@>aec7b*/ * /*@>c62eb*/localB->/*@>cb2f3*/q;
/* {S!d342}Product: '<S82>/Product' incorporates:
 *  Constant: '<S72>/gravity'
 *  Integrator: '<S72>/Theta'
 *  Trigonometry: '<S82>/sincos'
 *  UnaryMinus: '<S82>/Unary Minus'
 */
/*@>ae369*/rtb_Fsb_idx_0/*@>9dc34*/ = -/*@<aec78*//*@>c1deb*/sin(/*@>c692a*/localX->/*@>cb428*/Theta_CSTATE)/*@>aec76*/ * /*@>adca6*/0.0;
if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    /* {S!d344}Memory: '<S15>/Memory' */
    /*@>c62f2*/localB->/*@>cb2f6*/Memory/*@>4e944*/ = /*@>c6c01*/localDW->/*@>cb497*/Memory_PreviousInput;
}
/* {S!d346}Integrator: '<S15>/Integrator' */
/*@>4f6b1*/if (/*@[c92c9*/rtsiIsModeUpdateTimeStep(DrivetrainEv_M->solverInfo)/*@]*/) {
    /*@>ae1f1*/zcEvent/*@>4f691*/ = /*@[c92cf*/rt_ZCFcn(/*@>ae1f5*/RISING_ZERO_CROSSING,&/*@>c6b94*/localZCE->/*@>cb48e*/Integrator_Reset_ZCE,
(/*@>c62f9*/localB->/*@>cb2f9*/Memory))/*@]*/;
    /* evaluate zero-crossings */
    /*@>4f6af*/if ((/*@>ae0bc*/zcEvent/*@>91e62*/ != /*@>ae0bb*/NO_ZCEVENT)/*@>4f6a4*/ || (/*@>c6c08*/localDW->/*@>cb49a*/Integrator_IWORK/*@>aec6f*/ != /*@>aec6d*/0)) {
        /*@>c694d*/localX->/*@>cb437*/Integrator_CSTATE_n/*@>4f6a9*/ = /*@>c6662*/DrivetrainEv_ConstB./*@>cb3b0*/domega_o;
    }
}
/*@>ae1e7*/rtb_Switch_b/*@>4f6b6*/ = /*@>c6931*/localX->/*@>cb42b*/Integrator_CSTATE_n;
/* {S!d348}Sum: '<S14>/Subtract1' incorporates:
 *  Gain: '<S14>/Gain1'
 *  Gain: '<S14>/Gain2'
 *  Integrator: '<S14>/Integrator'
 *  Integrator: '<S15>/Integrator'
 */
/*@>ae181*/rtb_UnaryMinus1_c/*@>51a85*/ = /*@>adca4*/400.0/*@>aec66*/ * /*@>c6938*/localX->/*@>cb42e*/Integrator_CSTATE_n/*@>51a82*/ + /*@>adca3*/10000.0/*@>aec6a*/ * /*@>c693f*/localX->/*@>cb431*/Integrator_CSTATE_f;
/* {S!d350}Integrator: '<S170>/Integrator' */
/*@>ae1e3*/rtb_Integrator_n/*@>4f6c0*/ = /*@>c6946*/localX->/*@>cb434*/Integrator_CSTATE_e;
/* {S!d352}Gain: '<S141>/Sign convention' incorporates:
 *  Integrator: '<S170>/Integrator'
 *  Product: '<S154>/Product1'
 *  Sum: '<S141>/Add1'
 */
/*@>c6300*/localB->/*@>cb2fc*/Signconvention/*@>4e96e*/ = -/*@<aec5f*/(/*@>ae0a9*/rtb_UnaryMinus1_c/*@>9733e*/ - /*@>c6954*/localX->/*@>cb43a*/Integrator_CSTATE_e/*@>aec62*/ * /*@>c6668*/DrivetrainEv_ConstB./*@>cb3b3*/Saturation);
/* {S!d354}Gain: '<S6>/Front Bias' */
/*@>ae2b1*/rtb_FrontBias/*@>4e976*/ = /*@>adca2*/0.6/*@>aec5d*/ * */*@<caa61*/rtu_BrakeReq;
/* {S!d356}Product: '<S156>/product' incorporates:
 *  Constant: '<S156>/Disk brake actuator bore'
 *  Constant: '<S156>/Number of brake pads'
 */
/*@>ae2ab*/rtb_Fx_a/*@>4e983*/ = /*@>ae2af*/rtb_FrontBias/*@>aec59*/ * /*@>c666e*/DrivetrainEv_ConstB./*@>cb3b6*/TorqueConversion1/*@>aec55*/ * /*@>adca1*/0.05/*@>aec51*/ * /*@>adca0*/2.0;
/* {S!d358}Saturate: '<S156>/Disallow Negative Brake Torque' */
/*@>a9967*/if (/*@>ae0c4*/rtb_Fx_a/*@>51a9c*/ <= /*@>adc9f*/2.2204460492503131E-16) {
    /*@>adbb8*/rtb_Fx_a/*@>a996a*/ = /*@>adc9e*/2.2204460492503131E-16;
}
/* {E!d358}End of Saturate: '<S156>/Disallow Negative Brake Torque' */

/* {S!d360}Gain: '<S156>/Torque Conversion' */
/*@>c6307*/localB->/*@>cb2ff*/TorqueConversion/*@>4e991*/ = /*@>adc9d*/0.0525/*@>aec4d*/ * /*@>ae2a9*/rtb_Fx_a;
/* {S!d362}Gain: '<S153>/Ratio of static to kinetic' */
/*@>c630e*/localB->/*@>cb302*/Ratioofstatictokinetic/*@>4e999*/ = /*@>adc9c*/1.2857142857142858/*@>aec49*/ * /*@>c6315*/localB->/*@>cb305*/TorqueConversion;
/* {S!d119}Outputs for Iterator SubSystem: '<S141>/Clutch' incorporates:
 *  ForEach: '<S152>/For Each'
 */
/*@>ca877*/for (/*@>ca873*/ForEach_itr_h/*@>ca872*/ = /*@>ca874*/0; /*@>ca86a*/ForEach_itr_h/*@>ca868*/ < /*@>ca86b*/1; /*@>ca86d*/ForEach_itr_h/*@>ca927*/++) {
    /* {S!d364}ForEachSliceSelector generated from: '<S152>/Tout' */
    /*@>ae1df*/rtb_ImpSel_InsertedFor_Tout_a_f/*@>4f6c9*/ = /*@>c631c*/localB->/*@>cb308*/Signconvention;
    /* {S!d366}ForEachSliceSelector generated from: '<S152>/Tfmaxs' */
    /*@>ae1db*/rtb_ImpSel_InsertedFor_Tfmaxs_p/*@>4f6d1*/ = /*@>c632a*/localB->/*@>cb30e*/Ratioofstatictokinetic;
    /* {S!d368}ForEachSliceSelector generated from: '<S152>/Tfmaxk' */
    /*@>ae1d7*/rtb_ImpSel_InsertedFor_Tfmaxk_j/*@>4f6d9*/ = /*@>c6331*/localB->/*@>cb311*/TorqueConversion;
    /* {S!d370}Chart: '<S152>/Clutch' */













/*@[c92df*/        DrivetrainEv_Clutch(/*@>cb645*/DrivetrainEv_M, /*@>cb64f*/rtb_ImpSel_InsertedFor_Tout_a_f, /*@>cb659*/rtb_ImpSel_InsertedFor_Tfmaxs_p, /*@>cb663*/rtb_ImpSel_InsertedFor_Tfmaxk_j, &/*@>cb671*/localB->/*@>cb670*/CoreSubsys_c/*@>cb66f*/[/*@>cb673*/ForEach_itr_h]./*@>cb66e*/Omega, &/*@>cb67f*/rtb_RearBias1, &/*@>cb68a*/rtb_Product3_cn, &/*@>cb695*/ReactionTorque, /*@>cb69f*/0.0, /*@>cb6a9*/0.001, /*@>cb6b3*/0.8, /*@>cb6bd*/0.0, &/*@>cb6cb*/localB->/*@>cb6ca*/CoreSubsys_c/*@>cb6c9*/[/*@>cb6cd*/ForEach_itr_h]./*@>cb6c8*/sf_Clutch, &/*@>cb6dc*/localDW->/*@>cb6db*/CoreSubsys_c/*@>cb6da*/[/*@>cb6de*/ForEach_itr_h]./*@>cb6d9*/sf_Clutch, &/*@>cb6ed*/localX->/*@>cb6ec*/CoreSubsys_c/*@>cb6eb*/[/*@>cb6ef*/ForEach_itr_h]./*@>cb6ea*/sf_Clutch)/*@]*/;

    /* {S!d372}ForEachSliceAssignment generated from: '<S152>/Omega' */
    /*@>ae1d3*/rtb_ImpAsg_InsertedFor_Omega__d/*@>4f6e1*/ = /*@>c636b*/localB->/*@>cb326*/CoreSubsys_c/*@>c636a*/[/*@>c6366*/ForEach_itr_h]./*@>cb323*/Omega;
}
/* {E!d119}End of Outputs for SubSystem: '<S141>/Clutch' */

/* {S!d374}Gain: '<S98>/1//NF' incorporates:
 *  Concatenate: '<S71>/Vector Concatenate'
 *  Math: '<S99>/Math Function'
 *  Selector: '<S98>/Selector'
 *  Sqrt: '<S99>/Sqrt'
 *  Sum: '<S99>/Sum of Elements1'
 *
 * About '<S99>/Math Function':
 *  Operator: magnitude^2
 */
/*@>ae29d*/rtb_Fz/*@>4e9d5*/ = /*@>c1df3*/sqrt((/*@>c5041*/rtb_VectorConcatenate_l/*@>c5043*/[/*@>c5040*/0]/*@>b518c*/ * /*@>c5046*/rtb_VectorConcatenate_l/*@>c5048*/[/*@>c5045*/0]/*@>b4e36*/ + /*@>c504b*/rtb_VectorConcatenate_l/*@>c504d*/[/*@>c504a*/1]/*@>b5195*/ * /*@>c5050*/rtb_VectorConcatenate_l/*@>c5052*/[/*@>c504f*/1])/*@>b4e35*/ + /*@>c5055*/rtb_VectorConcatenate_l/*@>c5057*/[/*@>c5054*/2]/*@>b4e3b*/ * /*@>c505a*/rtb_VectorConcatenate_l/*@>c505c*/[/*@>c5059*/2])/*@>aec45*/ * /*@>adc9b*/0.5;
/* {S!d376}MATLAB Function: '<S137>/Simple Magic Tire' incorporates:
 *  Constant: '<S132>/FxType'
 *  Constant: '<S132>/TirePrsConstant'
 *  Constant: '<S132>/lam_muxConstant'
 *  Constant: '<S132>/rollType'
 *  Constant: '<S132>/vertType'
 *  Constant: '<S148>/Constant'
 *  Constant: '<S148>/Constant1'
 *  Constant: '<S148>/Constant12'
 *  Constant: '<S148>/Constant14'
 *  Constant: '<S148>/Constant19'
 *  Constant: '<S148>/Constant2'
 *  Constant: '<S148>/Constant6'
 *  Constant: '<S148>/Constant7'
 *  Constant: '<S149>/Constant1'
 *  Constant: '<S149>/Constant10'
 *  Constant: '<S149>/Constant11'
 *  Constant: '<S149>/Constant12'
 *  Constant: '<S149>/Constant13'
 *  Constant: '<S149>/Constant14'
 *  Constant: '<S149>/Constant15'
 *  Constant: '<S149>/Constant16'
 *  Constant: '<S149>/Constant17'
 *  Constant: '<S149>/Constant18'
 *  Constant: '<S149>/Constant19'
 *  Constant: '<S149>/Constant2'
 *  Constant: '<S149>/Constant3'
 *  Constant: '<S149>/Constant4'
 *  Constant: '<S149>/Constant5'
 *  Constant: '<S149>/Constant7'
 *  Constant: '<S149>/Constant8'
 *  Constant: '<S149>/Constant9'
 *  Constant: '<S150>/Constant1'
 *  Constant: '<S150>/Constant10'
 *  Constant: '<S150>/Constant11'
 *  Constant: '<S150>/Constant13'
 *  Constant: '<S150>/Constant14'
 *  Constant: '<S150>/Constant15'
 *  Constant: '<S150>/Constant16'
 *  Constant: '<S150>/Constant17'
 *  Constant: '<S150>/Constant18'
 *  Constant: '<S150>/Constant19'
 *  Constant: '<S150>/Constant2'
 *  Constant: '<S150>/Constant20'
 *  Constant: '<S150>/Constant21'
 *  Constant: '<S150>/Constant22'
 *  Constant: '<S150>/Constant23'
 *  Constant: '<S150>/Constant24'
 *  Constant: '<S150>/Constant3'
 *  Constant: '<S150>/Constant4'
 *  Constant: '<S150>/Constant5'
 *  Constant: '<S150>/Constant6'
 *  Constant: '<S150>/Constant7'
 *  Constant: '<S150>/Constant8'
 *  Constant: '<S150>/Constant9'
 */









/*@[c92de*/        DrivetrainEv_SimpleMagicTire(/*@>cb7fb*/DrivetrainEv_ConstB./*@>cb7fa*/Saturation, /*@>cb806*/rtb_Fz, /*@>cb810*/rtb_ImpAsg_InsertedFor_Omega__d, /*@>cb81c*/localB->/*@>cb81b*/VectorConcatenate7/*@>cb81a*/[/*@>cb81e*/0], /*@>cb828*/1.0, /*@>cb832*/1.65, /*@>cb83c*/10.0, /*@>cb846*/0.01, /*@>cb850*/1.0, /*@[cb85a*/rtCP_Constant2_Value_c/*@]*/, /*@[cb86e*/rtCP_Constant19_Value/*@]*/, /*@[cb882*/rtCP_Constant12_Value_p/*@]*/, /*@[cb896*/rtCP_Constant14_Value/*@]*/, /*@>cb8aa*/234400.0, /*@>cb8b4*/0.0, /*@>cb8be*/0.0, /*@>cb8c8*/0.01, /*@>cb8d2*/0.0, /*@>cb8dc*/0.0, /*@>cb8e6*/0.0, /*@>cb8f0*/0.0, /*@>cb8fa*/0.0, /*@>cb904*/1.0, /*@>cb90e*/0.0, /*@>cb918*/0.0, /*@>cb922*/0.0, /*@>cb92c*/0.336, /*@>cb936*/10000.0, /*@>cb940*/1.0E+6, /*@[cb94a*/rtCP_Constant19_Value_n/*@]*/, /*@[cb95e*/rtCP_Constant12_Value_p5/*@]*/, /*@[cb972*/rtCP_Constant14_Value_a/*@]*/, /*@[cb986*/0.0/*@]*/, /*@>cba7f*/0.0, /*@>cba89*/1.0, /*@>cba93*/0.0, &/*@>cba9e*/rtb_Fx_o, &/*@>cbaa9*/rtb_My_l, &/*@>cbab4*/rtb_Kappa_f, &/*@>cbabf*/rtb_Re_g, &/*@>cbaca*/rtb_FzTire_f, /*@>cbad4*/6570.0, /*@>cbade*/0.0, /*@>cbae8*/2.0, /*@>cbaf2*/1.5)/*@]*/;

/* {S!d378}Sum: '<S6>/Add' */
/*@>ae17f*/rtb_Fx_a/*@>51ac2*/ = /*@>ae29b*/rtb_Fx_o/*@>51abf*/ + /*@>ae299*/rtb_Fx_o;
/* {S!d380}Integrator: '<S212>/Integrator' */
/*@>ae1cf*/rtb_FrontBias/*@>4f709*/ = /*@>c695b*/localX->/*@>cb43d*/Integrator_CSTATE_b;
/* {S!d382}Gain: '<S183>/Sign convention' incorporates:
 *  Integrator: '<S212>/Integrator'
 *  Product: '<S196>/Product1'
 *  Sum: '<S183>/Add1'
 */
/*@>c635a*/localB->/*@>cb320*/Signconvention_g/*@>4e9ee*/ = -/*@<aec3e*/(/*@>adc64*/0.0/*@>97352*/ - /*@>c6973*/localX->/*@>cb446*/Integrator_CSTATE_b/*@>aec41*/ * /*@>c667a*/DrivetrainEv_ConstB./*@>cb3bc*/Saturation_b);
/* {S!d384}Gain: '<S6>/Rear Bias1' */
/*@>ae295*/rtb_RearBias1/*@>4e9f6*/ = /*@>adc63*/0.4/*@>aec3c*/ * */*@<caa6e*/rtu_BrakeReq;
/* {S!d386}Product: '<S198>/product' incorporates:
 *  Constant: '<S198>/Disk brake actuator bore'
 *  Constant: '<S198>/Number of brake pads'
 */
/*@>ae28f*/rtb_RearBias1/*@>4ea03*/ = /*@>ae293*/rtb_RearBias1/*@>aec38*/ * /*@>c6680*/DrivetrainEv_ConstB./*@>cb3bf*/TorqueConversion1_e/*@>aec34*/ * /*@>adc62*/0.05/*@>aec30*/ * /*@>adc61*/2.0;
/* {S!d388}Saturate: '<S198>/Disallow Negative Brake Torque' */
/*@>a996c*/if (/*@>ae0c0*/rtb_RearBias1/*@>51ad9*/ <= /*@>adc60*/2.2204460492503131E-16) {
    /*@>adbb6*/rtb_RearBias1/*@>a996f*/ = /*@>adc5f*/2.2204460492503131E-16;
}
/* {E!d388}End of Saturate: '<S198>/Disallow Negative Brake Torque' */

/* {S!d390}Gain: '<S198>/Torque Conversion' */
/*@>c6372*/localB->/*@>cb329*/TorqueConversion_b/*@>4ea11*/ = /*@>adc5e*/0.0525/*@>aec2c*/ * /*@>ae28d*/rtb_RearBias1;
/* {S!d392}Gain: '<S195>/Ratio of static to kinetic' */
/*@>c6379*/localB->/*@>cb32c*/Ratioofstatictokinetic_l/*@>4ea19*/ = /*@>adc5d*/1.2857142857142858/*@>aec28*/ * /*@>c6380*/localB->/*@>cb32f*/TorqueConversion_b;
/* {S!d121}Outputs for Iterator SubSystem: '<S183>/Clutch' incorporates:
 *  ForEach: '<S194>/For Each'
 */
/*@>ca855*/for (/*@>ca851*/ForEach_itr/*@>ca850*/ = /*@>ca852*/0; /*@>ca848*/ForEach_itr/*@>ca846*/ < /*@>ca849*/1; /*@>ca84b*/ForEach_itr/*@>ca928*/++) {
    /* {S!d394}ForEachSliceSelector generated from: '<S194>/Tout' */
    /*@>ae1cb*/rtb_ImpSel_InsertedFor_Tout_at_/*@>4f712*/ = /*@>c6387*/localB->/*@>cb332*/Signconvention_g;
    /* {S!d396}ForEachSliceSelector generated from: '<S194>/Tfmaxs' */
    /*@>ae1c7*/rtb_ImpSel_InsertedFor_Tfmaxs_a/*@>4f71a*/ = /*@>c6395*/localB->/*@>cb338*/Ratioofstatictokinetic_l;
    /* {S!d398}ForEachSliceSelector generated from: '<S194>/Tfmaxk' */
    /*@>ae1c3*/rtb_ImpSel_InsertedFor_Tfmaxk_a/*@>4f722*/ = /*@>c63a3*/localB->/*@>cb33b*/TorqueConversion_b;
    /* {S!d400}Chart: '<S194>/Clutch' */













/*@[c92e1*/        DrivetrainEv_Clutch_b(/*@>cbb4b*/DrivetrainEv_M, /*@>cbb55*/rtb_ImpSel_InsertedFor_Tout_at_, /*@>cbb5f*/rtb_ImpSel_InsertedFor_Tfmaxs_a, /*@>cbb69*/rtb_ImpSel_InsertedFor_Tfmaxk_a, &/*@>cbb77*/localB->/*@>cbb76*/CoreSubsys_k/*@>cbb75*/[/*@>cbb79*/ForEach_itr]./*@>cbb74*/Omega, &/*@>cbb85*/rtb_RearBias1, &/*@>cbb90*/rtb_Product3_cn, &/*@>cbb9b*/ReactionTorque, /*@>cbba5*/0.0, /*@>cbbaf*/0.001, /*@>cbbb9*/0.8, /*@>cbbc3*/0.0, &/*@>cbbd1*/localB->/*@>cbbd0*/CoreSubsys_k/*@>cbbcf*/[/*@>cbbd3*/ForEach_itr]./*@>cbbce*/sf_Clutch, &/*@>cbbe2*/localDW->/*@>cbbe1*/CoreSubsys_k/*@>cbbe0*/[/*@>cbbe4*/ForEach_itr]./*@>cbbdf*/sf_Clutch, &/*@>cbbf3*/localX->/*@>cbbf2*/CoreSubsys_k/*@>cbbf1*/[/*@>cbbf5*/ForEach_itr]./*@>cbbf0*/sf_Clutch)/*@]*/;

    /* {S!d402}ForEachSliceAssignment generated from: '<S194>/Omega' */
    /*@>ae1bf*/rtb_ImpAsg_InsertedFor_Omega_at/*@>4f72a*/ = /*@>c63dd*/localB->/*@>cb350*/CoreSubsys_k/*@>c63dc*/[/*@>c63d8*/ForEach_itr]./*@>cb34d*/Omega;
}
/* {E!d121}End of Outputs for SubSystem: '<S183>/Clutch' */

/* {S!d404}Gain: '<S98>/1//NR' incorporates:
 *  Concatenate: '<S71>/Vector Concatenate'
 *  Math: '<S100>/Math Function'
 *  Selector: '<S98>/Selector1'
 *  Sqrt: '<S100>/Sqrt'
 *  Sum: '<S100>/Sum of Elements1'
 *
 * About '<S100>/Math Function':
 *  Operator: magnitude^2
 */
/*@>ae281*/rtb_Fz_c/*@>4ea55*/ = /*@>c1df7*/sqrt((/*@>c5064*/rtb_VectorConcatenate_l/*@>c5066*/[/*@>c5063*/3]/*@>b51ab*/ * /*@>c5069*/rtb_VectorConcatenate_l/*@>c506b*/[/*@>c5068*/3]/*@>b4e61*/ + /*@>c506e*/rtb_VectorConcatenate_l/*@>c5070*/[/*@>c506d*/4]/*@>b51b4*/ * /*@>c5073*/rtb_VectorConcatenate_l/*@>c5075*/[/*@>c5072*/4])/*@>b4e60*/ + /*@>c5078*/rtb_VectorConcatenate_l/*@>c507a*/[/*@>c5077*/5]/*@>b4e66*/ * /*@>c507d*/rtb_VectorConcatenate_l/*@>c507f*/[/*@>c507c*/5])/*@>aec24*/ * /*@>adc5c*/0.5;
/* {S!d406}MATLAB Function: '<S179>/Simple Magic Tire' incorporates:
 *  Constant: '<S134>/FxType'
 *  Constant: '<S134>/TirePrsConstant'
 *  Constant: '<S134>/lam_muxConstant'
 *  Constant: '<S134>/rollType'
 *  Constant: '<S134>/vertType'
 *  Constant: '<S190>/Constant'
 *  Constant: '<S190>/Constant1'
 *  Constant: '<S190>/Constant12'
 *  Constant: '<S190>/Constant14'
 *  Constant: '<S190>/Constant19'
 *  Constant: '<S190>/Constant2'
 *  Constant: '<S190>/Constant6'
 *  Constant: '<S190>/Constant7'
 *  Constant: '<S191>/Constant1'
 *  Constant: '<S191>/Constant10'
 *  Constant: '<S191>/Constant11'
 *  Constant: '<S191>/Constant12'
 *  Constant: '<S191>/Constant13'
 *  Constant: '<S191>/Constant14'
 *  Constant: '<S191>/Constant15'
 *  Constant: '<S191>/Constant16'
 *  Constant: '<S191>/Constant17'
 *  Constant: '<S191>/Constant18'
 *  Constant: '<S191>/Constant19'
 *  Constant: '<S191>/Constant2'
 *  Constant: '<S191>/Constant3'
 *  Constant: '<S191>/Constant4'
 *  Constant: '<S191>/Constant5'
 *  Constant: '<S191>/Constant7'
 *  Constant: '<S191>/Constant8'
 *  Constant: '<S191>/Constant9'
 *  Constant: '<S192>/Constant1'
 *  Constant: '<S192>/Constant10'
 *  Constant: '<S192>/Constant11'
 *  Constant: '<S192>/Constant13'
 *  Constant: '<S192>/Constant14'
 *  Constant: '<S192>/Constant15'
 *  Constant: '<S192>/Constant16'
 *  Constant: '<S192>/Constant17'
 *  Constant: '<S192>/Constant18'
 *  Constant: '<S192>/Constant19'
 *  Constant: '<S192>/Constant2'
 *  Constant: '<S192>/Constant20'
 *  Constant: '<S192>/Constant21'
 *  Constant: '<S192>/Constant22'
 *  Constant: '<S192>/Constant23'
 *  Constant: '<S192>/Constant24'
 *  Constant: '<S192>/Constant3'
 *  Constant: '<S192>/Constant4'
 *  Constant: '<S192>/Constant5'
 *  Constant: '<S192>/Constant6'
 *  Constant: '<S192>/Constant7'
 *  Constant: '<S192>/Constant8'
 *  Constant: '<S192>/Constant9'
 */









/*@[c92e0*/        DrivetrainEv_SimpleMagicTire(/*@>cbd01*/DrivetrainEv_ConstB./*@>cbd00*/Saturation_b, /*@>cbd0c*/rtb_Fz_c, /*@>cbd16*/rtb_ImpAsg_InsertedFor_Omega_at, /*@>cbd22*/localB->/*@>cbd21*/VectorConcatenate7/*@>cbd20*/[/*@>cbd24*/0], /*@>cbd2e*/1.0, /*@>cbd38*/1.65, /*@>cbd42*/10.0, /*@>cbd4c*/0.01, /*@>cbd56*/1.0, /*@[cbd60*/rtCP_Constant2_Value_ah/*@]*/, /*@[cbd74*/rtCP_Constant19_Value_l/*@]*/, /*@[cbd88*/rtCP_Constant12_Value_e/*@]*/, /*@[cbd9c*/rtCP_Constant14_Value_b/*@]*/, /*@>cbdb0*/234400.0, /*@>cbdba*/0.0, /*@>cbdc4*/0.0, /*@>cbdce*/0.01, /*@>cbdd8*/0.0, /*@>cbde2*/0.0, /*@>cbdec*/0.0, /*@>cbdf6*/0.0, /*@>cbe00*/0.0, /*@>cbe0a*/1.0, /*@>cbe14*/0.0, /*@>cbe1e*/0.0, /*@>cbe28*/0.0, /*@>cbe32*/0.336, /*@>cbe3c*/10000.0, /*@>cbe46*/1.0E+6, /*@[cbe50*/rtCP_Constant19_Value_c/*@]*/, /*@[cbe64*/rtCP_Constant12_Value_j/*@]*/, /*@[cbe78*/rtCP_Constant14_Value_bm/*@]*/, /*@[cbe8c*/0.0/*@]*/, /*@>cbf85*/0.0, /*@>cbf8f*/1.0, /*@>cbf99*/0.0, &/*@>cbfa4*/rtb_Fx, &/*@>cbfaf*/rtb_My, &/*@>cbfba*/rtb_Kappa, &/*@>cbfc5*/rtb_Re, &/*@>cbfd0*/rtb_FzTire, /*@>cbfda*/6570.0, /*@>cbfe4*/0.0, /*@>cbfee*/2.0, /*@>cbff8*/1.5)/*@]*/;

/* {S!d408}Sum: '<S72>/Sum' incorporates:
 *  Sum: '<S6>/Add1'
 *  Sum: '<S76>/Add1'
 *  Sum: '<S78>/Add3'
 */
/*@>b9743*/rtb_Fx_a/*@>ca929*/ += /*@>ba056*/rtb_Fx/*@>ba054*/ + /*@>ba058*/rtb_Fx;
/* {S!d410}Sum: '<S72>/Sum1' incorporates:
 *  Constant: '<S72>/gravity'
 *  Constant: '<S81>/Constant'
 *  ForEachSliceAssignment generated from: '<S128>/x'
 *  Product: '<S72>/Product1'
 *  Product: '<S82>/Product'
 *  Selector: '<S75>/Selector3'
 *  Sum: '<S72>/Sum'
 *  Sum: '<S76>/Add'
 *  Sum: '<S76>/Add1'
 *  Sum: '<S77>/Add5'
 */
/*@>c63cc*/localB->/*@>cb34a*/Sum1/*@>a34f3*/[/*@>adcfb*/0]/*@>a34fa*/ = ((((/*@>b9747*/rtb_Fx_a/*@>a349d*/ + /*@>c5087*/rtb_Add2/*@>c5089*/[/*@>c5086*/0])/*@>a349c*/ - /*@>c508c*/rtb_Product3_g/*@>c508e*/[/*@>c508b*/0])/*@>a349b*/ + /*@>c5091*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>c5093*/[/*@>c5090*/9])/*@>aec20*/ / /*@>adc25*/1500.0/*@>a3494*/ + /*@>ae343*/rtb_Fsb_idx_0)/*@>a348f*/ + /*@>ae341*/rtb_Fsk_idx_0;
/*@>c63e4*/localB->/*@>cb353*/Sum1/*@>a3504*/[/*@>adcf8*/1]/*@>a350b*/ = (((/*@>c5096*/rtb_Product3_g/*@>c5098*/[/*@>c5095*/2]/*@>a34cd*/ - /*@>c509b*/rtb_Add2/*@>c509d*/[/*@>c509a*/2])/*@>a34cc*/ + /*@>c50a0*/rtb_ImpAsg_InsertedFor_x_at_inp/*@>c50a2*/[/*@>c509f*/11])/*@>aec1c*/ / /*@>adc24*/1500.0/*@>a34c5*/ + rtb_Product3_b/*@>ba05c*/ * /*@>ba05f*/0.0)/*@>a34c0*/ + /*@>ae33d*/rtb_Fsk_idx_1;
if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    /* {S!d412}Memory: '<S51>/Memory' */
    /*@>c63eb*/localB->/*@>cb356*/Memory_o/*@>4ea87*/ = /*@>c6c31*/localDW->/*@>cb4a9*/Memory_PreviousInput_d;
}
/* {S!d414}Integrator: '<S51>/Integrator' */
/*@>4f77a*/if (/*@[c92d5*/rtsiIsModeUpdateTimeStep(DrivetrainEv_M->solverInfo)/*@]*/) {
    /*@>ae1b5*/zcEvent/*@>4f75a*/ = /*@[c92db*/rt_ZCFcn(/*@>ae1b9*/RISING_ZERO_CROSSING,&/*@>c6b9b*/localZCE->/*@>cb491*/Integrator_Reset_ZCE_h,
(/*@>c63f2*/localB->/*@>cb359*/Memory_o))/*@]*/;
    /* evaluate zero-crossings */
    /*@>4f778*/if ((/*@>ae0b9*/zcEvent/*@>91e67*/ != /*@>ae0b8*/NO_ZCEVENT)/*@>4f76d*/ || (/*@>c6c38*/localDW->/*@>cb4ac*/Integrator_IWORK_g/*@>aec19*/ != /*@>aec17*/0)) {
        /*@>c6999*/localX->/*@>cb455*/Integrator_CSTATE_g/*@>4f772*/ = /*@>c668c*/DrivetrainEv_ConstB./*@>cb3c5*/domega_o_p;
    }
}
/* {S!d416}UnaryMinus: '<S50>/Unary Minus' incorporates:
 *  Gain: '<S50>/Gain1'
 *  Gain: '<S50>/Gain2'
 *  Integrator: '<S50>/Integrator'
 *  Integrator: '<S51>/Integrator'
 *  Sum: '<S50>/Subtract1'
 */
/*@>ae1ab*/rtb_UnaryMinus/*@>4f784*/ = /*@>c698b*/localX->/*@>cb44f*/Integrator_CSTATE_bn;
/*@>ae17b*/rtb_UnaryMinus/*@>51b18*/ = /*@>adc23*/400.0/*@>aec10*/ * /*@>c6992*/localX->/*@>cb452*/Integrator_CSTATE_g/*@>51b15*/ + /*@>adc22*/10000.0/*@>aec14*/ * /*@>ae09f*/rtb_UnaryMinus;
/* {S!d418}Integrator: '<S26>/Integrator' */
/* Limited  Integrator  */
/*@>4f78e*/if (/*@>c6c3f*/localDW->/*@>cb4af*/Integrator_IWORK_i/*@>aec0d*/ != /*@>aec0b*/0) {
    /*@>c69a0*/localX->/*@>cb458*/Integrator_CSTATE_gx/*@>a9d73*/[/*@>adad2*/0]/*@>a9d72*/ = /*@>c6692*/DrivetrainEv_ConstB./*@>cb3c8*/VectorConcatenate_n/*@>c50a7*/[/*@>c50a4*/0];
    /*@>c69ae*/localX->/*@>cb45e*/Integrator_CSTATE_gx/*@>a9d81*/[/*@>adacc*/1]/*@>a9d80*/ = /*@>c6698*/DrivetrainEv_ConstB./*@>cb3cb*/VectorConcatenate_n/*@>c50b1*/[/*@>c50ae*/1];
}
/*@>a9cfe*/if (/*@>c69a7*/localX->/*@>cb45b*/Integrator_CSTATE_gx/*@>c50ac*/[/*@>c50a9*/0]/*@>a9cff*/ >= /*@>adb00*/5000.0) {
    /*@>c69bc*/localX->/*@>cb464*/Integrator_CSTATE_gx/*@>a9d10*/[/*@>adaef*/0]/*@>a9d0f*/ = /*@>adafa*/5000.0;
} else /*@>a9d06*/if (/*@>c69b5*/localX->/*@>cb461*/Integrator_CSTATE_gx/*@>c50b6*/[/*@>c50b3*/0]/*@>a9d07*/ <= /*@>adafd*/-5000.0) {
    /*@>c69c3*/localX->/*@>cb467*/Integrator_CSTATE_gx/*@>a9d18*/[/*@>adaee*/0]/*@>a9d17*/ = /*@>adaf7*/-5000.0;
}
/*@>a9d35*/if (/*@>c69ca*/localX->/*@>cb46a*/Integrator_CSTATE_gx/*@>c50bb*/[/*@>c50b8*/1]/*@>a9d36*/ >= /*@>adaea*/5000.0) {
    /*@>c69d8*/localX->/*@>cb470*/Integrator_CSTATE_gx/*@>a9d47*/[/*@>adad9*/1]/*@>a9d46*/ = /*@>adae4*/5000.0;
} else /*@>a9d3d*/if (/*@>c69d1*/localX->/*@>cb46d*/Integrator_CSTATE_gx/*@>c50c0*/[/*@>c50bd*/1]/*@>a9d3e*/ <= /*@>adae7*/-5000.0) {
    /*@>c69df*/localX->/*@>cb473*/Integrator_CSTATE_gx/*@>a9d4f*/[/*@>adad8*/1]/*@>a9d4e*/ = /*@>adae1*/-5000.0;
}
/* {S!d420}Sum: '<S30>/Sum of Elements' incorporates:
 *  Gain: '<S30>/Gain'
 *  Integrator: '<S26>/Integrator'
 *  Product: '<S30>/Product'
 */
/*@>adb08*/rtb_Product3_b/*@>a9cdc*/ = /*@>c669e*/DrivetrainEv_ConstB./*@>cb3ce*/diffDir_j/*@>b4e70*/ * /*@>c69e6*/localX->/*@>cb476*/Integrator_CSTATE_gx/*@>c50c5*/[/*@>c50c2*/0]/*@>b4e6e*/ * /*@>b4e6f*/3.97/*@>a9cde*/ + /*@>c66a4*/DrivetrainEv_ConstB./*@>cb3d1*/diffDir_j/*@>b4abf*/ * /*@>c69ed*/localX->/*@>cb479*/Integrator_CSTATE_gx/*@>c50ca*/[/*@>c50c7*/1]/*@>b4abd*/ * /*@>b4abe*/3.97;
/* {S!d422}Gain: '<S47>/Gain' incorporates:
 *  Abs: '<S46>/Abs'
 *  Constant: '<S47>/Constant1'
 *  Gain: '<S47>/Gain1'
 *  Gain: '<S47>/Gain2'
 *  Sum: '<S30>/Sum of Elements'
 *  Sum: '<S47>/Subtract1'
 *  Sum: '<S47>/Subtract2'
 *  Trigonometry: '<S47>/Trigonometric Function'
 */
/*@>ae271*/rtb_Fsk_idx_0/*@>4eb23*/ = (/*@>c1e03*/tanh((/*@>adc1f*/20.0/*@>aebf6*/ * /*@>c1e01*/fabs(/*@>b483e*/rtb_Product3_b)/*@>97dbb*/ - /*@>adc1e*/1.0)/*@>aebf2*/ * /*@>adc20*/4.0)/*@>97402*/ + /*@>adc1d*/1.0)/*@>aebee*/ * /*@>adc21*/0.5;
/* {S!d424}Product: '<S46>/Product5' */
/*@>ae26d*/rtb_Fsk_idx_1/*@>4eb2a*/ = /*@>ae26f*/rtb_Fsk_idx_0;
/* {S!d426}Product: '<S46>/Product3' incorporates:
 *  Constant: '<S47>/Constant1'
 *  Sum: '<S47>/Subtract'
 */
/*@>ae26b*/rtb_Fsb_idx_0/*@>4eb36*/ = /*@>adc1c*/1.0/*@>97416*/ - /*@>ae09d*/rtb_Fsk_idx_0;
/* {S!d428}Sum: '<S78>/Add1' incorporates:
 *  Abs: '<S42>/Abs'
 *  Constant: '<S43>/Constant1'
 *  Gain: '<S43>/Gain'
 *  Gain: '<S43>/Gain1'
 *  Gain: '<S43>/Gain2'
 *  Integrator: '<S26>/Integrator'
 *  Sum: '<S43>/Subtract1'
 *  Sum: '<S43>/Subtract2'
 *  Trigonometry: '<S43>/Trigonometric Function'
 *  UnaryMinus: '<S30>/Unary Minus1'
 */
/*@>ae269*/rtb_Add1_l/*@>4eb4d*/ = /*@>c1e05*/fabs(-/*@<b4ad0*//*@>c69f4*/localX->/*@>cb47c*/Integrator_CSTATE_gx/*@>c50cf*/[/*@>c50cc*/0]);
/*@>ae267*/rtb_Add1_l/*@>4eb73*/ = (/*@>c1e07*/tanh((/*@>adc19*/20.0/*@>aebea*/ * /*@>ae033*/rtb_Add1_l/*@>97dce*/ - /*@>adc18*/1.0)/*@>aebe6*/ * /*@>adc1a*/4.0)/*@>9745e*/ + /*@>adc17*/1.0)/*@>aebe2*/ * /*@>adc1b*/0.5;
/* {S!d430}Product: '<S42>/Product5' */
/*@>ae263*/rtb_RearBias1/*@>4eb7a*/ = /*@>ae265*/rtb_Add1_l;
/* {S!d432}Product: '<S42>/Product3' incorporates:
 *  Constant: '<S43>/Constant1'
 *  Sum: '<S43>/Subtract'
 */
/*@>ae261*/rtb_Product3_cn/*@>4eb86*/ = /*@>adc16*/1.0/*@>97464*/ - /*@>ae09b*/rtb_Add1_l;
/* {S!d434}Sum: '<S78>/Add1' incorporates:
 *  Constant: '<S48>/Constant'
 *  Switch: '<S39>/Switch'
 */
/*@>ae1a7*/rtb_Add1_l/*@>4f7ed*/ = /*@>adc15*/1.0;
/* {S!d436}Gain: '<S45>/Gain' incorporates:
 *  Abs: '<S44>/Abs'
 *  Constant: '<S45>/Constant1'
 *  Gain: '<S45>/Gain1'
 *  Gain: '<S45>/Gain2'
 *  Integrator: '<S26>/Integrator'
 *  Sum: '<S45>/Subtract1'
 *  Sum: '<S45>/Subtract2'
 *  Trigonometry: '<S45>/Trigonometric Function'
 *  UnaryMinus: '<S30>/Unary Minus1'
 */
/*@>ae25d*/rtb_Fsk_idx_0/*@>4ebc3*/ = (/*@>c1e0b*/tanh((/*@>adc12*/20.0/*@>aebd9*/ * /*@>c1e09*/fabs(-/*@<b4ad6*//*@>c69fb*/localX->/*@>cb47f*/Integrator_CSTATE_gx/*@>c50d4*/[/*@>c50d1*/1])/*@>97ddd*/ - /*@>adc11*/1.0)/*@>aebd5*/ * /*@>adc13*/4.0)/*@>974af*/ + /*@>adc10*/1.0)/*@>aebd1*/ * /*@>adc14*/0.5;
/* {S!d438}SignalConversion generated from: '<S29>/ SFunction ' incorporates:
 *  Constant: '<S45>/Constant1'
 *  MATLAB Function: '<S26>/Open Differential'
 *  Product: '<S38>/Product4'
 *  Product: '<S39>/Product4'
 *  Product: '<S40>/Product4'
 *  Product: '<S44>/Product5'
 *  Sum: '<S42>/Subtract1'
 *  Sum: '<S44>/Subtract1'
 *  Sum: '<S45>/Subtract'
 *  Sum: '<S46>/Subtract1'
 *  UnaryMinus: '<S14>/Unary Minus'
 *  UnaryMinus: '<S14>/Unary Minus1'
 */
/*@>adce0*/rtb_Add_p/*@>a37d4*/[/*@>adcdf*/0]/*@>a37db*/ = (/*@>adcf4*/rtb_Fsk_idx_1/*@>a37aa*/ + /*@>adcf2*/rtb_Fsb_idx_0)/*@>aebcd*/ * /*@>adcf0*/rtb_UnaryMinus;
/*@>adcdd*/rtb_Add_p/*@>a37e5*/[/*@>adcdc*/1]/*@>a37ec*/ = (/*@>adcee*/rtb_RearBias1/*@>a37b2*/ + /*@>adcec*/rtb_Product3_cn)/*@>aebc8*/ * -/*@<aebca*//*@>adcea*/rtb_UnaryMinus1_c;
/*@>adcda*/rtb_Add_p/*@>a37f6*/[/*@>adcd9*/2]/*@>a37fd*/ = (/*@>adce8*/rtb_Add1_l/*@>aebc3*/ * /*@>adce6*/rtb_Fsk_idx_0/*@>a37bb*/ + (/*@>adc0f*/1.0/*@>a37c2*/ - /*@>adce4*/rtb_Fsk_idx_0))/*@>aebbf*/ * -/*@<aebc5*//*@>adce2*/rtb_UnaryMinus1_c;
/* {S!d440}MATLAB Function: '<S26>/Open Differential' incorporates:
 *  Constant: '<S26>/Jd'
 *  Constant: '<S26>/Jw1'
 *  Constant: '<S26>/Jw3'
 *  Constant: '<S26>/Ndiff2'
 *  Constant: '<S26>/bd'
 *  Constant: '<S26>/bw1'
 *  Constant: '<S26>/bw2'
 *  Integrator: '<S26>/Integrator'
 */
/*@[c9fce*/automldiffopen_RcYoMae5(/*@>cc002*/rtb_Add_p, /*@>cc00c*/0.001, /*@>cc016*/0.001, /*@>cc020*/0.001, /*@>cc02a*/7.94, /*@>cc034*/1.0, /*@>cc03e*/0.025, /*@>cc048*/0.01, /*@>cc052*/0.01, /*@>cc05d*/localX->/*@>cc05c*/Integrator_CSTATE_gx, /*@>cc068*/rtb_Product3_g, /*@>cc073*/localB->/*@>cc072*/xdot)/*@]*/;
/* {S!d442}Sum: '<S14>/Subtract' incorporates:
 *  Integrator: '<S26>/Integrator'
 *  UnaryMinus: '<S30>/Unary Minus1'
 */
/*@>c6407*/localB->/*@>cb35f*/Subtract/*@>51b5e*/ = -/*@<b4ae0*//*@>c6a09*/localX->/*@>cb485*/Integrator_CSTATE_gx/*@>c50d9*/[/*@>c50d6*/0]/*@>51b5b*/ - /*@>ae25b*/rtb_ImpAsg_InsertedFor_Omega__d;
/* {S!d444}Switch: '<S15>/Switch' */
/*@>b66bf*/if (!/*@<bcec8*/(/*@>c640e*/localB->/*@>cb362*/Memory/*@>b4ae7*/ != /*@>b4aea*/0.0)) {
    /*@>b66b0*/rtb_Switch_b/*@>b66b2*/ = /*@>c66aa*/DrivetrainEv_ConstB./*@>cb3d4*/domega_o;
}
/* {S!d446}Product: '<S15>/Product' incorporates:
 *  Constant: '<S14>/omega_c'
 *  Sum: '<S15>/Sum'
 *  Switch: '<S15>/Switch'
 */
/*@>c6415*/localB->/*@>cb365*/Product/*@>4ec39*/ = (/*@>c641c*/localB->/*@>cb368*/Subtract/*@>974fd*/ - /*@>b66b4*/rtb_Switch_b)/*@>aebbb*/ * /*@>adc07*/100.0;
/* {S!d448}Integrator: '<S59>/Integrator' */
*rty_MotSpd/*@>4f812*/ = /*@>c6a10*/localX->/*@>cb488*/Integrator_CSTATE_i;
/* {S!d450}Sum: '<S50>/Subtract' incorporates:
 *  Sum: '<S30>/Sum of Elements'
 */
/*@>c6423*/localB->/*@>cb36b*/Subtract_l/*@>51b68*/ = */*@<caa86*/rty_MotSpd/*@>51b65*/ - /*@>b4840*/rtb_Product3_b;
/* {S!d452}Switch: '<S51>/Switch' incorporates:
 *  Integrator: '<S51>/Integrator'
 */
/*@>b66c4*/if (/*@>c642a*/localB->/*@>cb36e*/Memory_o/*@>b4af3*/ != /*@>b4af6*/0.0) {
    /*@>b66c8*/rtb_Product3_b/*@>b66c7*/ = /*@>c6a17*/localX->/*@>cb48b*/Integrator_CSTATE_g;
} else {
    /*@>b66b8*/rtb_Product3_b/*@>b66ba*/ = /*@>c66b0*/DrivetrainEv_ConstB./*@>cb3d7*/domega_o_p;
}
/* {S!d454}Product: '<S51>/Product' incorporates:
 *  Constant: '<S50>/omega_c'
 *  Sum: '<S51>/Sum'
 *  Switch: '<S51>/Switch'
 */
/*@>c6431*/localB->/*@>cb371*/Product_j/*@>4ec4a*/ = (/*@>c6438*/localB->/*@>cb374*/Subtract_l/*@>9750d*/ - /*@>b66bc*/rtb_Product3_b)/*@>aebb7*/ * /*@>adc06*/100.0;
/* {S!d456}Sum: '<S78>/Add1' incorporates:
 *  Gain: '<S59>/Gain2'
 */
/*@>ae253*/rtb_Add1_l/*@>4ec52*/ = /*@>adc05*/-0.001/*@>aebb3*/ * */*@<caa88*/rty_MotSpd;
/* {S!d458}UnaryMinus: '<S50>/Unary Minus' */
/*@>ae1a1*/rtb_UnaryMinus/*@>4f828*/ = -/*@<aebb0*//*@>ae1a3*/rtb_UnaryMinus;
/* {S!d460}Sum: '<S59>/Subtract' */
/*@>adfc1*/rtb_Product3_g/*@>9dc75*/[/*@>ae012*/0]/*@>9dc74*/ = */*@<cab3f*/rtu_MotTrq;
/* {S!d462}Product: '<S59>/Divide' incorporates:
 *  Sum: '<S59>/Subtract'
 */
/*@>c643f*/localB->/*@>cb377*/Divide/*@>4ec8b*/ = ((/*@>c50dc*/rtb_Product3_g/*@>c50de*/[/*@>c50db*/0]/*@>b51d6*/ + /*@>b51dc*/rtb_UnaryMinus)/*@>b51d5*/ + /*@>b51de*/rtb_Add1_l)/*@>aebae*/ / /*@>c66b6*/DrivetrainEv_ConstB./*@>cb3da*/Switch;
/* {S!d464}Product: '<S196>/Product3' */
/*@>ae241*/rtb_Product3_b/*@>4ecab*/ = /*@>ae245*/rtb_ImpAsg_InsertedFor_Omega_at/*@>aebaa*/ * /*@>c66bc*/DrivetrainEv_ConstB./*@>cb3dd*/Saturation_b;
/* {S!d470}Switch: '<S213>/Switch' incorporates:
 *  Constant: '<S214>/Constant'
 *  Constant: '<S215>/Constant'
 *  Logic: '<S213>/Logical Operator'
 *  RelationalOperator: '<S214>/Compare'
 *  RelationalOperator: '<S215>/Compare'
 */
/*@>4f836*/if ((/*@>ae05e*/rtb_Product3_b/*@>97a35*/ >= /*@>adc04*/-2.0)/*@>97530*/ && (/*@>ae05c*/rtb_Product3_b/*@>97a3a*/ <= /*@>adc03*/2.0)) {
    /* {S!d466}Sum: '<S78>/Add1' incorporates:
 *  Fcn: '<S213>/Fcn'
 */
    /*@>ae19f*/rtb_Add1_l/*@>4f831*/ = /*@>ae091*/4.0/*@>97567*/ / (/*@>ae090*/3.0/*@>97569*/ - /*@[c9fe7*/rt_powd_snf(/*@>cc089*/rtb_Product3_b/*@>cc088*/ / /*@>cc08a*/2.0, /*@>cc094*/2.0)/*@]*/);
} else {
    /* {S!d468}Sum: '<S78>/Add1' incorporates:
 *  Abs: '<S213>/Abs'
 */
    /*@>ae19d*/rtb_Add1_l/*@>4f834*/ = /*@>c1e1b*/fabs(/*@>ae092*/rtb_Product3_b);
}
/* {E!d470}End of Switch: '<S213>/Switch' */

/* {S!d472}Product: '<S212>/Product' incorporates:
 *  Constant: '<S196>/Constant2'
 *  Product: '<S196>/Product'
 *  Product: '<S196>/Product2'
 *  Sum: '<S196>/Add'
 *  Sum: '<S212>/Sum'
 */
/*@>c6446*/localB->/*@>cb37a*/Product_o/*@>4ecc7*/ = ((/*@>ae050*/rtb_My/*@>aeba4*/ / /*@>c66c2*/DrivetrainEv_ConstB./*@>cb3e0*/Saturation_b/*@>97a60*/ + /*@>ae052*/rtb_Fx)/*@>97573*/ - /*@>ae08c*/rtb_FrontBias)/*@>aeb9c*/ * (/*@>ae08e*/rtb_Add1_l/*@>aeba0*/ / /*@>adc02*/0.15);
/* {S!d474}Product: '<S154>/Product3' */
/*@>ae237*/rtb_Product3_b/*@>4ece1*/ = /*@>ae23b*/rtb_ImpAsg_InsertedFor_Omega__d/*@>aeb98*/ * /*@>c66c8*/DrivetrainEv_ConstB./*@>cb3e3*/Saturation;
/* {S!d480}Switch: '<S171>/Switch' incorporates:
 *  Constant: '<S172>/Constant'
 *  Constant: '<S173>/Constant'
 *  Logic: '<S171>/Logical Operator'
 *  RelationalOperator: '<S172>/Compare'
 *  RelationalOperator: '<S173>/Compare'
 */
/*@>4f844*/if ((/*@>ae04c*/rtb_Product3_b/*@>97a6d*/ >= /*@>adc01*/-2.0)/*@>97594*/ && (/*@>ae04a*/rtb_Product3_b/*@>97a72*/ <= /*@>adc00*/2.0)) {
    /* {S!d476}Sum: '<S78>/Add1' incorporates:
 *  Fcn: '<S171>/Fcn'
 */
    /*@>ae19b*/rtb_Add1_l/*@>4f83f*/ = /*@>ae088*/4.0/*@>975cb*/ / (/*@>ae087*/3.0/*@>975cd*/ - /*@[ca000*/rt_powd_snf(/*@>cc0a9*/rtb_Product3_b/*@>cc0a8*/ / /*@>cc0aa*/2.0, /*@>cc0b4*/2.0)/*@]*/);
} else {
    /* {S!d478}Sum: '<S78>/Add1' incorporates:
 *  Abs: '<S171>/Abs'
 */
    /*@>ae199*/rtb_Add1_l/*@>4f842*/ = /*@>c1e1f*/fabs(/*@>ae089*/rtb_Product3_b);
}
/* {E!d480}End of Switch: '<S171>/Switch' */

/* {S!d482}Product: '<S170>/Product' incorporates:
 *  Constant: '<S154>/Constant2'
 *  Product: '<S154>/Product'
 *  Product: '<S154>/Product2'
 *  Sum: '<S154>/Add'
 *  Sum: '<S170>/Sum'
 */
/*@>c644d*/localB->/*@>cb37d*/Product_l/*@>4ecfd*/ = ((/*@>ae03e*/rtb_My_l/*@>aeb92*/ / /*@>c66ce*/DrivetrainEv_ConstB./*@>cb3e6*/Saturation/*@>97a98*/ + /*@>ae040*/rtb_Fx_o)/*@>975d7*/ - /*@>ae083*/rtb_Integrator_n)/*@>aeb8a*/ * (/*@>ae085*/rtb_Add1_l/*@>aeb8e*/ / /*@>adbff*/0.15);
/* {S!d484}Sum: '<S78>/Add1' incorporates:
 *  Gain: '<S78>/a'
 *  Gain: '<S78>/b'
 *  Gain: '<S78>/h'
 *  Sum: '<S78>/Add2'
 */
/*@>ae233*/rtb_Add1_l/*@>4ed05*/ = /*@>adbfe*/1.1880000000000002/*@>aeb86*/ * /*@>c50e1*/rtb_sincos_o1_n/*@>c50e3*/[/*@>c50e0*/2];
/*@>ae175*/rtb_Add1_l/*@>51b8f*/ = (((/*@>c50e6*/rtb_sincos_o1_n/*@>c50e8*/[/*@>c50e5*/0]/*@>97aa2*/ + /*@>c50eb*/rtb_Gain1_k/*@>c50ed*/[/*@>c50ea*/0])/*@>97aa1*/ + rtb_Fx_a)/*@>aeb82*/ * /*@>adbfc*/0.5/*@>51b8a*/ + (/*@>ae22d*/rtb_Add1_l/*@>51b89*/ - /*@>adbfd*/1.5120000000000002/*@>aeb7e*/ * /*@>c50f0*/rtb_Gain1_k/*@>c50f2*/[/*@>c50ef*/2]))/*@>51b8b*/ + /*@>c50f5*/rtb_Add1_d/*@>c50f7*/[/*@>c50f4*/1];
/* {S!d486}Product: '<S80>/Product2' incorporates:
 *  Constant: '<S81>/Constant1'
 *  Constant: '<S81>/Constant2'
 *  Product: '<S80>/Product3'
 *  Sum: '<S80>/Sum1'
 */
/*@>c6454*/localB->/*@>cb380*/Product2/*@>4ed68*/ = (/*@>ae081*/rtb_Add1_l/*@>975fd*/ - /*@>adbfb*/0.0/*@>aeb7a*/ * /*@>c645b*/localB->/*@>cb383*/q)/*@>aeb76*/ / /*@>adbfa*/3000.0;
/* {S!d488}SignalConversion generated from: '<Root>/VehSpd' */
*rty_VehSpd/*@>4ed70*/ = /*@>c6462*/localB->/*@>cb386*/VectorConcatenate7/*@>c50fc*/[/*@>c50f9*/0];







    



                        
    

        
                }
            








            
        


                    /* Update for referenced model: 'DrivetrainEv' */
            
                        

        


          void DrivetrainEv_Update(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, DW_DrivetrainEv_f_T *localDW)
    {
    
            
                
        
    




                                        
        
    




                                                    
                                    /* {S!d490}Update for Integrator: '<S72>/U,w' */
/*@>c6c46*/localDW->/*@>cc0fa*/Uw_IWORK/*@>4fb3e*/ = /*@>cc0c6*/0;
if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    /* {S!d492}Update for Memory: '<S15>/Memory' incorporates:
 *  Constant: '<S15>/Reset'
 */
    /*@>c6c4d*/localDW->/*@>cc0fd*/Memory_PreviousInput/*@>4f9d8*/ = /*@>ae4ba*/1.0;
}
/* {S!d494}Update for Integrator: '<S15>/Integrator' */
/*@>c6c54*/localDW->/*@>cc100*/Integrator_IWORK/*@>4fb49*/ = /*@>cc0c9*/0;
if (rtmIsMajorTimeStep(DrivetrainEv_M)) {
    /* {S!d496}Update for Memory: '<S51>/Memory' incorporates:
 *  Constant: '<S51>/Reset'
 */
    /*@>c6c5b*/localDW->/*@>cc103*/Memory_PreviousInput_d/*@>4f9dd*/ = /*@>ae4bb*/1.0;
}
/* {S!d498}Update for Integrator: '<S51>/Integrator' */
/*@>c6c62*/localDW->/*@>cc106*/Integrator_IWORK_g/*@>4fb68*/ = /*@>cc0cc*/0;
/* {S!d500}Update for Integrator: '<S26>/Integrator' */
/*@>c6c69*/localDW->/*@>cc109*/Integrator_IWORK_i/*@>4fb73*/ = /*@>cc0cf*/0;






    




                    
    

                        }
            








                            /* Derivatives for referenced model: 'DrivetrainEv' */
                            

        


          void DrivetrainEv_Deriv(B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX, XDot_DrivetrainEv_n_T *localXdot)
    {
    

            

            /* local block i/o variables */


                                real_T rtb_ImpSel_InsertedFor_Tout_at_;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxs_a;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxk_a;


                                real_T rtb_ImpSel_InsertedFor_Tout_a_f;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxs_p;


                                real_T rtb_ImpSel_InsertedFor_Tfmaxk_j;

/* local scratch DWork variables */


                                int32_T ForEach_itr;


                                int32_T ForEach_itr_h;


    
boolean_T lsat;
boolean_T usat;

    




                                
        
    




                                                
                                    








/* {S!d506}Derivatives for Integrator: '<S72>/Theta' */
/*@>c6a58*/localXdot->/*@>cc39b*/Theta_CSTATE/*@>4fc1e*/ = /*@>c6469*/localB->/*@>cc32f*/q;
/* {S!d508}Derivatives for Integrator: '<S72>/Position' */
/*@>c6a5f*/localXdot->/*@>cc39e*/Position_CSTATE/*@>aa571*/[/*@>ae5aa*/0]/*@>aa570*/ = /*@>c6470*/localB->/*@>cc332*/TmpSignalConversionAtPositionIn/*@>c5101*/[/*@>c50fe*/0];
/* {S!d510}Derivatives for Integrator: '<S4>/Integrator' */
/*@>c6a66*/localXdot->/*@>cc3a1*/Integrator_CSTATE/*@>aa57c*/[/*@>ae5ac*/0]/*@>aa57b*/ = /*@>c6477*/localB->/*@>cc335*/TmpSignalConversionAtIntegrator/*@>c5106*/[/*@>c5103*/0];
/* {S!d512}Derivatives for Integrator: '<S72>/U,w' */
/*@>c6a6d*/localXdot->/*@>cc3a4*/Uw_CSTATE/*@>aa587*/[/*@>ae5ae*/0]/*@>aa586*/ = /*@>c647e*/localB->/*@>cc338*/Sum1/*@>c510b*/[/*@>c5108*/0];
/* {S!d514}Derivatives for Integrator: '<S72>/Position' */
/*@>c6a74*/localXdot->/*@>cc3a7*/Position_CSTATE/*@>aa599*/[/*@>ae5bc*/1]/*@>aa598*/ = /*@>c6485*/localB->/*@>cc33b*/TmpSignalConversionAtPositionIn/*@>c5110*/[/*@>c510d*/1];
/* {S!d516}Derivatives for Integrator: '<S4>/Integrator' */
/*@>c6a7b*/localXdot->/*@>cc3aa*/Integrator_CSTATE/*@>aa5a4*/[/*@>ae5be*/1]/*@>aa5a3*/ = /*@>c648c*/localB->/*@>cc33e*/TmpSignalConversionAtIntegrator/*@>c5115*/[/*@>c5112*/1];
/* {S!d518}Derivatives for Integrator: '<S72>/U,w' */
/*@>c6a82*/localXdot->/*@>cc3ad*/Uw_CSTATE/*@>aa5af*/[/*@>ae5c0*/1]/*@>aa5ae*/ = /*@>c6493*/localB->/*@>cc341*/Sum1/*@>c511a*/[/*@>c5117*/1];
/* {S!d520}Derivatives for Integrator: '<S72>/q' */
/*@>c6a89*/localXdot->/*@>cc3b0*/q_CSTATE/*@>4fc42*/ = /*@>c649a*/localB->/*@>cc344*/Product2;
/* {S!d522}Derivatives for Integrator: '<S15>/Integrator' */
/*@>c6a90*/localXdot->/*@>cc3b3*/Integrator_CSTATE_n/*@>4fc4e*/ = /*@>c64a1*/localB->/*@>cc347*/Product;
/* {S!d524}Derivatives for Integrator: '<S14>/Integrator' */
/*@>c6a97*/localXdot->/*@>cc3b6*/Integrator_CSTATE_f/*@>4fc5a*/ = /*@>c64a8*/localB->/*@>cc34a*/Subtract;
/* {S!d526}Derivatives for Integrator: '<S170>/Integrator' */
/*@>c6a9e*/localXdot->/*@>cc3b9*/Integrator_CSTATE_e/*@>4fc66*/ = /*@>c64af*/localB->/*@>cc34d*/Product_l;
/* {S!d501}Derivatives for Iterator SubSystem: '<S141>/Clutch' */
/*@>cc168*/for (/*@>cc164*/ForEach_itr_h/*@>cc163*/ = /*@>cc165*/0; /*@>cc15b*/ForEach_itr_h/*@>cc159*/ < /*@>cc15c*/1; /*@>cc15e*/ForEach_itr_h/*@>cc17b*/++) {
    /* {S!d528}Derivatives for ForEachSliceSelector generated from: '<S152>/Tout' */
    /*@>ae516*/rtb_ImpSel_InsertedFor_Tout_a_f/*@>4fc82*/ = /*@>c64bd*/localB->/*@>cc353*/Signconvention;
    /* {S!d530}Derivatives for ForEachSliceSelector generated from: '<S152>/Tfmaxs' */
    /*@>ae51a*/rtb_ImpSel_InsertedFor_Tfmaxs_p/*@>4fc8a*/ = /*@>c64c4*/localB->/*@>cc356*/Ratioofstatictokinetic;
    /* {S!d532}Derivatives for ForEachSliceSelector generated from: '<S152>/Tfmaxk' */
    /*@>ae51e*/rtb_ImpSel_InsertedFor_Tfmaxk_j/*@>4fc92*/ = /*@>c64cb*/localB->/*@>cc359*/TorqueConversion;
    /* {S!d534}Derivatives for Chart: '<S152>/Clutch' */







/*@[c95fd*/        DrivetrainEv_Clutch_Deriv(&/*@>cc44c*/localB->/*@>cc44b*/CoreSubsys_c/*@>cc44a*/[/*@>cc44e*/ForEach_itr_h]./*@>cc449*/sf_Clutch, &/*@>cc45d*/localDW->/*@>cc45c*/CoreSubsys_c/*@>cc45b*/[/*@>cc45f*/ForEach_itr_h]./*@>cc45a*/sf_Clutch, &/*@>cc46e*/localXdot->/*@>cc46d*/CoreSubsys_c/*@>cc46c*/[/*@>cc470*/ForEach_itr_h]./*@>cc46b*/sf_Clutch)/*@]*/;
}
/* {E!d501}End of Derivatives for SubSystem: '<S141>/Clutch' */

/* {S!d536}Derivatives for Integrator: '<S212>/Integrator' */
/*@>c6aa5*/localXdot->/*@>cc3bc*/Integrator_CSTATE_b/*@>4fc72*/ = /*@>c64b6*/localB->/*@>cc350*/Product_o;
/* {S!d503}Derivatives for Iterator SubSystem: '<S183>/Clutch' */
/*@>cc146*/for (/*@>cc142*/ForEach_itr/*@>cc141*/ = /*@>cc143*/0; /*@>cc139*/ForEach_itr/*@>cc137*/ < /*@>cc13a*/1; /*@>cc13c*/ForEach_itr/*@>cc17c*/++) {
    /* {S!d538}Derivatives for ForEachSliceSelector generated from: '<S194>/Tout' */
    /*@>ae52a*/rtb_ImpSel_InsertedFor_Tout_at_/*@>4fd3a*/ = /*@>c64ea*/localB->/*@>cc365*/Signconvention_g;
    /* {S!d540}Derivatives for ForEachSliceSelector generated from: '<S194>/Tfmaxs' */
    /*@>ae52e*/rtb_ImpSel_InsertedFor_Tfmaxs_a/*@>4fd42*/ = /*@>c64f8*/localB->/*@>cc36b*/Ratioofstatictokinetic_l;
    /* {S!d542}Derivatives for ForEachSliceSelector generated from: '<S194>/Tfmaxk' */
    /*@>ae532*/rtb_ImpSel_InsertedFor_Tfmaxk_a/*@>4fd4a*/ = /*@>c64ff*/localB->/*@>cc36e*/TorqueConversion_b;
    /* {S!d544}Derivatives for Chart: '<S194>/Clutch' */







/*@[c95fe*/        DrivetrainEv_Clutch_m_Deriv(&/*@>cc4b8*/localB->/*@>cc4b7*/CoreSubsys_k/*@>cc4b6*/[/*@>cc4ba*/ForEach_itr]./*@>cc4b5*/sf_Clutch, &/*@>cc4c9*/localDW->/*@>cc4c8*/CoreSubsys_k/*@>cc4c7*/[/*@>cc4cb*/ForEach_itr]./*@>cc4c6*/sf_Clutch, &/*@>cc4da*/localXdot->/*@>cc4d9*/CoreSubsys_k/*@>cc4d8*/[/*@>cc4dc*/ForEach_itr]./*@>cc4d7*/sf_Clutch)/*@]*/;
}
/* {E!d503}End of Derivatives for SubSystem: '<S183>/Clutch' */

/* {S!d546}Derivatives for Integrator: '<S51>/Integrator' */
/*@>c6abd*/localXdot->/*@>cc3c5*/Integrator_CSTATE_g/*@>4fcbb*/ = /*@>c64e3*/localB->/*@>cc362*/Product_j;
/* {S!d548}Derivatives for Integrator: '<S50>/Integrator' */
/*@>c6ac4*/localXdot->/*@>cc3c8*/Integrator_CSTATE_bn/*@>4fcc7*/ = /*@>c64f1*/localB->/*@>cc368*/Subtract_l;
/* {S!d550}Derivatives for Integrator: '<S26>/Integrator' */
/*@>ae54f*/lsat/*@>aa4cf*/ = (/*@>c6a1e*/localX->/*@>cc38f*/Integrator_CSTATE_gx/*@>c511f*/[/*@>c511c*/0]/*@>aa4d1*/ <= /*@>ae553*/-5000.0);
/*@>ae554*/usat/*@>aa4d9*/ = (/*@>c6a25*/localX->/*@>cc392*/Integrator_CSTATE_gx/*@>c5124*/[/*@>c5121*/0]/*@>aa4db*/ >= /*@>ae558*/5000.0);
/*@>aa4e2*/if (((!/*@<aa4e6*//*@>ae559*/lsat)/*@>aa4e5*/ && (!/*@<aa4e9*//*@>ae55b*/usat))/*@>aa4e4*/ || (/*@>ae55d*/lsat/*@>aa4ec*/ && (/*@>c6517*/localB->/*@>cc377*/xdot/*@>c5129*/[/*@>c5126*/0]/*@>aa4ef*/ > /*@>ae561*/0.0))/*@>aa4e3*/ || (/*@>ae562*/usat/*@>aa4f6*/ && (/*@>c651e*/localB->/*@>cc37a*/xdot/*@>c512e*/[/*@>c512b*/0]/*@>aa4f9*/ < /*@>ae566*/0.0))) {
    /*@>c6adc*/localXdot->/*@>cc3d1*/Integrator_CSTATE_gx/*@>aa503*/[/*@>ae572*/0]/*@>aa502*/ = /*@>c6525*/localB->/*@>cc37d*/xdot/*@>c5133*/[/*@>c5130*/0];
} else {
    /* in saturation */
    /*@>c6ae3*/localXdot->/*@>cc3d4*/Integrator_CSTATE_gx/*@>aa50e*/[/*@>ae574*/0]/*@>aa50d*/ = /*@>ae56d*/0.0;
}
/*@>ae575*/lsat/*@>aa51d*/ = (/*@>c6a2c*/localX->/*@>cc395*/Integrator_CSTATE_gx/*@>c5138*/[/*@>c5135*/1]/*@>aa51f*/ <= /*@>ae579*/-5000.0);
/*@>ae57a*/usat/*@>aa527*/ = (/*@>c6a33*/localX->/*@>cc398*/Integrator_CSTATE_gx/*@>c513d*/[/*@>c513a*/1]/*@>aa529*/ >= /*@>ae57e*/5000.0);
/*@>aa530*/if (((!/*@<aa534*//*@>ae57f*/lsat)/*@>aa533*/ && (!/*@<aa537*//*@>ae581*/usat))/*@>aa532*/ || (/*@>ae583*/lsat/*@>aa53a*/ && (/*@>c652c*/localB->/*@>cc380*/xdot/*@>c5142*/[/*@>c513f*/1]/*@>aa53d*/ > /*@>ae587*/0.0))/*@>aa531*/ || (/*@>ae588*/usat/*@>aa544*/ && (/*@>c6533*/localB->/*@>cc383*/xdot/*@>c5147*/[/*@>c5144*/1]/*@>aa547*/ < /*@>ae58c*/0.0))) {
    /*@>c6aea*/localXdot->/*@>cc3d7*/Integrator_CSTATE_gx/*@>aa551*/[/*@>ae598*/1]/*@>aa550*/ = /*@>c653a*/localB->/*@>cc386*/xdot/*@>c514c*/[/*@>c5149*/1];
} else {
    /* in saturation */
    /*@>c6af1*/localXdot->/*@>cc3da*/Integrator_CSTATE_gx/*@>aa55c*/[/*@>ae59a*/1]/*@>aa55b*/ = /*@>ae593*/0.0;
}
/* {E!d550}End of Derivatives for Integrator: '<S26>/Integrator' */

/* {S!d552}Derivatives for Integrator: '<S59>/Integrator' */
/*@>c6af8*/localXdot->/*@>cc3dd*/Integrator_CSTATE_i/*@>4fd73*/ = /*@>c6541*/localB->/*@>cc389*/Divide;
/* {S!d554}Derivatives for Integrator: '<S94>/Integrator3' */
/*@>c6aff*/localXdot->/*@>cc3e0*/Integrator3_CSTATE/*@>4fd7f*/ = /*@>c6548*/localB->/*@>cc38c*/VectorConcatenate7/*@>c5151*/[/*@>c514e*/0];





    




                
        
                }
            






    






        /* Model initialize function */
        
                    void DrivetrainEv_initialize(const char_T **rt_errorStatus, boolean_T *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, RT_MODEL_DrivetrainEv_T *const DrivetrainEv_M, ZCE_DrivetrainEv_T *localZCE)
        {
            


        


    
        

        

        





            /* Registration code */
                
    /* initialize non-finites */
    rt_InitInfAndNaN(sizeof(real_T));
    
        








            

    

    

            /* setup the global timing engine */


                    DrivetrainEv_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;


                    DrivetrainEv_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;


                DrivetrainEv_M->timingBridge = (timingBridge);









                            /* initialize error status */
                            rtmSetErrorStatusPointer(DrivetrainEv_M, rt_errorStatus);
                            /* initialize stop requested flag */
                            rtmSetStopRequestedPtr(DrivetrainEv_M, rt_stopRequested);

                            /* initialize RTWSolverInfo */
                            DrivetrainEv_M->solverInfo = (rt_solverInfo);
                                    /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
    rtmSetSimTimeStepPointer(DrivetrainEv_M, rtsiGetSimTimeStepPtr(DrivetrainEv_M->solverInfo));
        DrivetrainEv_M->Timing.stepSize0 = (rtsiGetStepSize(DrivetrainEv_M->solverInfo));


                    

                    










        



























        















        

    
            
    
        












                                
                                    localZCE->Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
localZCE->Integrator_Reset_ZCE_h = UNINITIALIZED_ZCSIG;








    




        }        









    





    


    


    


    


/* 
 * File trailer for generated code.
 * 
 * [EOF]
 */

