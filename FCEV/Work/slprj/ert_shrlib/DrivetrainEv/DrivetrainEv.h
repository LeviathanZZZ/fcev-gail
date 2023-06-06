/* 
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * 
 * File: DrivetrainEv.h
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



  #ifndef RTW_HEADER_DrivetrainEv_h_
  #define RTW_HEADER_DrivetrainEv_h_

                #ifndef DrivetrainEv_COMMON_INCLUDES_
            #define DrivetrainEv_COMMON_INCLUDES_
                #include "rtwtypes.h"
        #include "rtw_continuous.h"
        #include "rtw_solver.h"

            #endif /* DrivetrainEv_COMMON_INCLUDES_ */


#include "DrivetrainEv_types.h"

#include "rt_nonfinite.h"

#include "rt_zcfcn.h"

#include "model_reference_types.h"

#include "zero_crossing_types.h"



    


    


    


    


    


    


    


    


    
                /* Block states (default storage) for system '<S157>/detectLockup' */
                    
        typedef struct  {
        /*@[d04bd*/




                    
                    


                        



                            /*@[d04bb*/
                            /*@[d04bc*/
                                   boolean_T UnitDelay_DSTATE; /* '<S165>/Unit Delay' */

                        
                        /*@]*/
                        /*@]*/


                    




/*@]*/
        } DW_detectLockup_DrivetrainEv_T;

            
                /* Block signals for system '<S157>/Slipping' */
                    
        typedef struct  {
        /*@[d04c0*/




                    
                    


                        



                            /*@[d04be*/
                            /*@[d04bf*/
                                   real_T OutputInertia; /* '<S159>/Output Inertia' */

                        
                        /*@]*/
                        /*@]*/


                    




/*@]*/
        } B_Slipping_DrivetrainEv_T;

                    
                /* Continuous states for system '<S157>/Slipping' */
                typedef struct  {
                            /*@[d04c1*/
                        real_T omegaWheel; /* '<S159>/omega wheel' */
                    /*@]*/
    
        } X_Slipping_DrivetrainEv_T;
        
                                /* State derivatives for system '<S157>/Slipping' */
                        typedef struct  {
                                /*@[d04c2*/
                        real_T omegaWheel; /* '<S159>/omega wheel' */
                    /*@]*/
                } XDot_Slipping_DrivetrainEv_T;                    
                /* State Disabled for system '<S157>/Slipping' */
                typedef struct  {                            /*@[d04c3*/
                        boolean_T omegaWheel; /* '<S159>/omega wheel' */
                    /*@]*/
            } XDis_Slipping_DrivetrainEv_T;        
                /* Block signals for system '<S152>/Clutch' */
                    
        typedef struct  {
        /*@[d04c9*/




                    
                    


                        



                            /*@[d04c4*/
                            /*@[d04c5*/
                                   boolean_T CombinatorialLogic; /* '<S165>/Combinatorial  Logic' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04c6*/
                            /*@[d04c7*/
                                   boolean_T RelationalOperator; /* '<S169>/Relational Operator' */

                        
                        /*@]*/
                        /*@]*/


                    





                    
                    


                        



                            /*@[d04c8*/
                                   B_Slipping_DrivetrainEv_T Slipping; /* '<S157>/Slipping' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } B_Clutch_DrivetrainEv_T;

            
                /* Block states (default storage) for system '<S152>/Clutch' */
                    
        typedef struct  {
        /*@[d04d7*/




                    
                    


                        



                            /*@[d04ca*/
                            /*@[d04cb*/
                                   real_T lastMajorTime; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04cc*/
                            
                                   int8_T TmpIfAtSlippingInport3_ActiveSu; /* synthesized block */

                        
                        
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04cd*/
                            
                                   int8_T TmpIfAtLockedInport2_ActiveSubs; /* synthesized block */

                        
                        
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04ce*/
                            /*@[d04cf*/
                                   uint8_T is_c8_autolibshared; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04d0*/
                            /*@[d04d1*/
                                   uint8_T is_active_c8_autolibshared; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04d2*/
                            /*@[d04d3*/
                                   boolean_T Slipping_entered; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04d4*/
                            /*@[d04d5*/
                                   boolean_T Locked_entered; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    





                    
                    


                        



                            /*@[d04d6*/
                                   DW_detectLockup_DrivetrainEv_T detectLockup; /* '<S157>/detectLockup' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } DW_Clutch_DrivetrainEv_T;

            
        
                /* Continuous states for system '<S152>/Clutch' */
                typedef struct  {
            

                                X_Slipping_DrivetrainEv_T Slipping; /* '<S157>/Slipping' */







        } X_Clutch_DrivetrainEv_T;
        
                                /* State derivatives for system '<S152>/Clutch' */
                        typedef struct  {
                

                                XDot_Slipping_DrivetrainEv_T Slipping; /* '<S157>/Slipping' */






            } XDot_Clutch_DrivetrainEv_T;                    
                /* State Disabled for system '<S152>/Clutch' */
                typedef struct  {            

                                XDis_Slipping_DrivetrainEv_T Slipping; /* '<S157>/Slipping' */






        } XDis_Clutch_DrivetrainEv_T;        
                /* Block signals for system '<S141>/Clutch' */
                    
        typedef struct  {
        /*@[d04db*/




                    
                    


                        



                            /*@[d04d8*/
                            /*@[d04d9*/
                                   real_T Omega; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    





                    
                    


                        



                            /*@[d04da*/
                                   B_Clutch_DrivetrainEv_T sf_Clutch; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } B_CoreSubsys_DrivetrainEv_c_T;

            
                /* Block states (default storage) for system '<S141>/Clutch' */
                    
        typedef struct  {
        /*@[d04dd*/



                    
                    


                        



                            /*@[d04dc*/
                                   DW_Clutch_DrivetrainEv_T sf_Clutch; /* '<S152>/Clutch' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } DW_CoreSubsys_DrivetrainEv_n_T;

            
        
                /* Continuous states for system '<S141>/Clutch' */
                typedef struct  {
            

                                X_Clutch_DrivetrainEv_T sf_Clutch; /* '<S152>/Clutch' */

        } X_CoreSubsys_DrivetrainEv_d_T;
        
                                /* State derivatives for system '<S141>/Clutch' */
                        typedef struct  {
                

                                XDot_Clutch_DrivetrainEv_T sf_Clutch; /* '<S152>/Clutch' */
            } XDot_CoreSubsys_DrivetrainE_m_T;                    
                /* State Disabled for system '<S141>/Clutch' */
                typedef struct  {            

                                XDis_Clutch_DrivetrainEv_T sf_Clutch; /* '<S152>/Clutch' */
        } XDis_CoreSubsys_DrivetrainE_e_T;        
                /* Block signals for system '<S194>/Clutch' */
                    
        typedef struct  {
        /*@[d04e3*/




                    
                    


                        



                            /*@[d04de*/
                            /*@[d04df*/
                                   boolean_T CombinatorialLogic; /* '<S207>/Combinatorial  Logic' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04e0*/
                            /*@[d04e1*/
                                   boolean_T RelationalOperator; /* '<S211>/Relational Operator' */

                        
                        /*@]*/
                        /*@]*/


                    





                    
                    


                        



                            /*@[d04e2*/
                                   B_Slipping_DrivetrainEv_T Slipping; /* '<S199>/Slipping' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } B_Clutch_DrivetrainEv_g_T;

            
                /* Block states (default storage) for system '<S194>/Clutch' */
                    
        typedef struct  {
        /*@[d04f1*/




                    
                    


                        



                            /*@[d04e4*/
                            /*@[d04e5*/
                                   real_T lastMajorTime; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04e6*/
                            
                                   int8_T TmpIfAtSlippingInport3_ActiveSu; /* synthesized block */

                        
                        
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04e7*/
                            
                                   int8_T TmpIfAtLockedInport2_ActiveSubs; /* synthesized block */

                        
                        
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04e8*/
                            /*@[d04e9*/
                                   uint8_T is_c8_autolibshared; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04ea*/
                            /*@[d04eb*/
                                   uint8_T is_active_c8_autolibshared; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04ec*/
                            /*@[d04ed*/
                                   boolean_T Slipping_entered; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04ee*/
                            /*@[d04ef*/
                                   boolean_T Locked_entered; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    





                    
                    


                        



                            /*@[d04f0*/
                                   DW_detectLockup_DrivetrainEv_T detectLockup; /* '<S199>/detectLockup' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } DW_Clutch_DrivetrainEv_k_T;

            
        
                /* Continuous states for system '<S194>/Clutch' */
                typedef struct  {
            

                                X_Slipping_DrivetrainEv_T Slipping; /* '<S157>/Slipping' */







        } X_Clutch_DrivetrainEv_m_T;
        
                                /* State derivatives for system '<S194>/Clutch' */
                        typedef struct  {
                

                                XDot_Slipping_DrivetrainEv_T Slipping; /* '<S157>/Slipping' */






            } XDot_Clutch_DrivetrainEv_i_T;                    
                /* State Disabled for system '<S194>/Clutch' */
                typedef struct  {            

                                XDis_Slipping_DrivetrainEv_T Slipping; /* '<S157>/Slipping' */






        } XDis_Clutch_DrivetrainEv_e_T;        
                /* Block signals for system '<S183>/Clutch' */
                    
        typedef struct  {
        /*@[d04f5*/




                    
                    


                        



                            /*@[d04f2*/
                            /*@[d04f3*/
                                   real_T Omega; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        /*@]*/


                    





                    
                    


                        



                            /*@[d04f4*/
                                   B_Clutch_DrivetrainEv_g_T sf_Clutch; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } B_CoreSubsys_DrivetrainEv_d_T;

            
                /* Block states (default storage) for system '<S183>/Clutch' */
                    
        typedef struct  {
        /*@[d04f7*/



                    
                    


                        



                            /*@[d04f6*/
                                   DW_Clutch_DrivetrainEv_k_T sf_Clutch; /* '<S194>/Clutch' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } DW_CoreSubsys_DrivetrainEv_k_T;

            
        
                /* Continuous states for system '<S183>/Clutch' */
                typedef struct  {
            

                                X_Clutch_DrivetrainEv_m_T sf_Clutch; /* '<S194>/Clutch' */

        } X_CoreSubsys_DrivetrainEv_c_T;
        
                                /* State derivatives for system '<S183>/Clutch' */
                        typedef struct  {
                

                                XDot_Clutch_DrivetrainEv_i_T sf_Clutch; /* '<S194>/Clutch' */
            } XDot_CoreSubsys_DrivetrainE_f_T;                    
                /* State Disabled for system '<S183>/Clutch' */
                typedef struct  {            

                                XDis_Clutch_DrivetrainEv_e_T sf_Clutch; /* '<S194>/Clutch' */
        } XDis_CoreSubsys_DrivetrainE_o_T;        
                /* Block signals for model 'DrivetrainEv' */
                    
        typedef struct  {
        /*@[d0525*/




                    
                    


                        



                            /*@[d04f8*/
                            /*@[d04f9*/
                                   real_T VectorConcatenate7[3]; /* '<S71>/Vector Concatenate7' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04fa*/
                            /*@[d04fb*/
                                   real_T q; /* '<S72>/q' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04fc*/
                                   real_T TmpSignalConversionAtIntegrator[2]; 

                        
                        
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04fd*/
                            /*@[d04fe*/
                                   real_T TmpSignalConversionAtPositionIn[2]; /* '<S72>/Transform  to Earth Axes' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d04ff*/
                            /*@[d0500*/
                                   real_T Memory; /* '<S15>/Memory' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0501*/
                            /*@[d0502*/
                                   real_T Signconvention; /* '<S141>/Sign convention' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0503*/
                            /*@[d0504*/
                                   real_T TorqueConversion; /* '<S156>/Torque Conversion' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0505*/
                            /*@[d0506*/
                                   real_T Ratioofstatictokinetic; /* '<S153>/Ratio of static to kinetic' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0507*/
                            /*@[d0508*/
                                   real_T Signconvention_g; /* '<S183>/Sign convention' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0509*/
                            /*@[d050a*/
                                   real_T TorqueConversion_b; /* '<S198>/Torque Conversion' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d050b*/
                            /*@[d050c*/
                                   real_T Ratioofstatictokinetic_l; /* '<S195>/Ratio of static to kinetic' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d050d*/
                            /*@[d050e*/
                                   real_T Sum1[2]; /* '<S72>/Sum1' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d050f*/
                            /*@[d0510*/
                                   real_T Memory_o; /* '<S51>/Memory' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0511*/
                            /*@[d0512*/
                                   real_T Subtract; /* '<S14>/Subtract' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0513*/
                            /*@[d0514*/
                                   real_T Product; /* '<S15>/Product' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0515*/
                            /*@[d0516*/
                                   real_T Subtract_l; /* '<S50>/Subtract' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0517*/
                            /*@[d0518*/
                                   real_T Product_j; /* '<S51>/Product' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0519*/
                            /*@[d051a*/
                                   real_T Divide; /* '<S59>/Divide' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d051b*/
                            /*@[d051c*/
                                   real_T Product_o; /* '<S212>/Product' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d051d*/
                            /*@[d051e*/
                                   real_T Product_l; /* '<S170>/Product' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d051f*/
                            /*@[d0520*/
                                   real_T Product2; /* '<S80>/Product2' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0521*/
                            /*@[d0522*/
                                   real_T xdot[2]; /* '<S26>/Open Differential' */

                        
                        /*@]*/
                        /*@]*/


                    





                    
                    


                        



                            /*@[d0523*/
                                   B_CoreSubsys_DrivetrainEv_d_T CoreSubsys_k[1]; /* '<S183>/Clutch' */

                        
                        /*@]*/
                        


                    





                    
                    


                        



                            /*@[d0524*/
                                   B_CoreSubsys_DrivetrainEv_c_T CoreSubsys_c[1]; /* '<S141>/Clutch' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } B_DrivetrainEv_c_T;

            
                /* Block states (default storage) for model 'DrivetrainEv' */
                    
        typedef struct  {
        /*@[d0534*/




                    
                    


                        



                            /*@[d0526*/
                            /*@[d0527*/
                                   real_T Memory_PreviousInput; /* '<S15>/Memory' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0528*/
                            /*@[d0529*/
                                   real_T Memory_PreviousInput_d; /* '<S51>/Memory' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        
                                    /*@[d052b*/
                            /*@[d052a*/
            int_T Uw_IWORK;        /* '<S72>/U,w' */
    /*@]*/

            /*@]*/



                    






                    
                    


                        
                                    /*@[d052d*/
                            /*@[d052c*/
            int_T Integrator_IWORK;        /* '<S15>/Integrator' */
    /*@]*/

            /*@]*/



                    






                    
                    


                        
                                    /*@[d052f*/
                            /*@[d052e*/
            int_T Integrator_IWORK_g;        /* '<S51>/Integrator' */
    /*@]*/

            /*@]*/



                    






                    
                    


                        
                                    /*@[d0531*/
                            /*@[d0530*/
            int_T Integrator_IWORK_i;        /* '<S26>/Integrator' */
    /*@]*/

            /*@]*/



                    





                    
                    


                        



                            /*@[d0532*/
                                   DW_CoreSubsys_DrivetrainEv_k_T CoreSubsys_k[1]; /* '<S183>/Clutch' */

                        
                        /*@]*/
                        


                    





                    
                    


                        



                            /*@[d0533*/
                                   DW_CoreSubsys_DrivetrainEv_n_T CoreSubsys_c[1]; /* '<S141>/Clutch' */

                        
                        /*@]*/
                        


                    




/*@]*/
        } DW_DrivetrainEv_f_T;

            
        
                /* Continuous states for model 'DrivetrainEv' */
                typedef struct  {
                            /*@[d0535*/
                        real_T Position_CSTATE[2]; /* '<S72>/Position' */
                    /*@]*/
                    /*@[d0536*/
                        real_T Theta_CSTATE; /* '<S72>/Theta' */
                    /*@]*/
                    /*@[d0537*/
                        real_T Integrator_CSTATE[2]; /* '<S4>/Integrator' */
                    /*@]*/
                    /*@[d0538*/
                        real_T Uw_CSTATE[2]; /* '<S72>/U,w' */
                    /*@]*/
                    /*@[d0539*/
                        real_T q_CSTATE; /* '<S72>/q' */
                    /*@]*/
                    /*@[d053a*/
                        real_T Integrator_CSTATE_n; /* '<S15>/Integrator' */
                    /*@]*/
                    /*@[d053b*/
                        real_T Integrator_CSTATE_f; /* '<S14>/Integrator' */
                    /*@]*/
                    /*@[d053c*/
                        real_T Integrator_CSTATE_e; /* '<S170>/Integrator' */
                    /*@]*/
                    /*@[d053d*/
                        real_T Integrator_CSTATE_b; /* '<S212>/Integrator' */
                    /*@]*/
                    /*@[d053e*/
                        real_T Integrator_CSTATE_g; /* '<S51>/Integrator' */
                    /*@]*/
                    /*@[d053f*/
                        real_T Integrator_CSTATE_bn; /* '<S50>/Integrator' */
                    /*@]*/
                    /*@[d0540*/
                        real_T Integrator_CSTATE_gx[2]; /* '<S26>/Integrator' */
                    /*@]*/
                    /*@[d0541*/
                        real_T Integrator_CSTATE_i; /* '<S59>/Integrator' */
                    /*@]*/
                    /*@[d0542*/
                        real_T Integrator3_CSTATE; /* '<S94>/Integrator3' */
                    /*@]*/
    

                            

                            

                                

                                X_CoreSubsys_DrivetrainEv_c_T CoreSubsys_k[1]; /* '<S194>/CoreSubsys' */




                            

                            

                                

                                X_CoreSubsys_DrivetrainEv_d_T CoreSubsys_c[1]; /* '<S152>/CoreSubsys' */




                            

                            
        } X_DrivetrainEv_n_T;
        
                        /* Periodic continuous state vector (global) */
                        typedef int_T  PeriodicIndX_DrivetrainEv_T[1];
        typedef real_T PeriodicRngX_DrivetrainEv_T[2];

                                        /* State derivatives for model 'DrivetrainEv' */
                        typedef struct  {
                                /*@[d0543*/
                        real_T Position_CSTATE[2]; /* '<S72>/Position' */
                    /*@]*/
                    /*@[d0544*/
                        real_T Theta_CSTATE; /* '<S72>/Theta' */
                    /*@]*/
                    /*@[d0545*/
                        real_T Integrator_CSTATE[2]; /* '<S4>/Integrator' */
                    /*@]*/
                    /*@[d0546*/
                        real_T Uw_CSTATE[2]; /* '<S72>/U,w' */
                    /*@]*/
                    /*@[d0547*/
                        real_T q_CSTATE; /* '<S72>/q' */
                    /*@]*/
                    /*@[d0548*/
                        real_T Integrator_CSTATE_n; /* '<S15>/Integrator' */
                    /*@]*/
                    /*@[d0549*/
                        real_T Integrator_CSTATE_f; /* '<S14>/Integrator' */
                    /*@]*/
                    /*@[d054a*/
                        real_T Integrator_CSTATE_e; /* '<S170>/Integrator' */
                    /*@]*/
                    /*@[d054b*/
                        real_T Integrator_CSTATE_b; /* '<S212>/Integrator' */
                    /*@]*/
                    /*@[d054c*/
                        real_T Integrator_CSTATE_g; /* '<S51>/Integrator' */
                    /*@]*/
                    /*@[d054d*/
                        real_T Integrator_CSTATE_bn; /* '<S50>/Integrator' */
                    /*@]*/
                    /*@[d054e*/
                        real_T Integrator_CSTATE_gx[2]; /* '<S26>/Integrator' */
                    /*@]*/
                    /*@[d054f*/
                        real_T Integrator_CSTATE_i; /* '<S59>/Integrator' */
                    /*@]*/
                    /*@[d0550*/
                        real_T Integrator3_CSTATE; /* '<S94>/Integrator3' */
                    /*@]*/
    

                            

                            

                                

                                XDot_CoreSubsys_DrivetrainE_f_T CoreSubsys_k[1]; /* '<S194>/CoreSubsys' */




                            

                            

                                

                                XDot_CoreSubsys_DrivetrainE_m_T CoreSubsys_c[1]; /* '<S152>/CoreSubsys' */




                            

                                        } XDot_DrivetrainEv_n_T;                    
                /* State Disabled for model 'DrivetrainEv' */
                typedef struct  {                            /*@[d0551*/
                        boolean_T Position_CSTATE[2]; /* '<S72>/Position' */
                    /*@]*/
                    /*@[d0552*/
                        boolean_T Theta_CSTATE; /* '<S72>/Theta' */
                    /*@]*/
                    /*@[d0553*/
                        boolean_T Integrator_CSTATE[2]; /* '<S4>/Integrator' */
                    /*@]*/
                    /*@[d0554*/
                        boolean_T Uw_CSTATE[2]; /* '<S72>/U,w' */
                    /*@]*/
                    /*@[d0555*/
                        boolean_T q_CSTATE; /* '<S72>/q' */
                    /*@]*/
                    /*@[d0556*/
                        boolean_T Integrator_CSTATE_n; /* '<S15>/Integrator' */
                    /*@]*/
                    /*@[d0557*/
                        boolean_T Integrator_CSTATE_f; /* '<S14>/Integrator' */
                    /*@]*/
                    /*@[d0558*/
                        boolean_T Integrator_CSTATE_e; /* '<S170>/Integrator' */
                    /*@]*/
                    /*@[d0559*/
                        boolean_T Integrator_CSTATE_b; /* '<S212>/Integrator' */
                    /*@]*/
                    /*@[d055a*/
                        boolean_T Integrator_CSTATE_g; /* '<S51>/Integrator' */
                    /*@]*/
                    /*@[d055b*/
                        boolean_T Integrator_CSTATE_bn; /* '<S50>/Integrator' */
                    /*@]*/
                    /*@[d055c*/
                        boolean_T Integrator_CSTATE_gx[2]; /* '<S26>/Integrator' */
                    /*@]*/
                    /*@[d055d*/
                        boolean_T Integrator_CSTATE_i; /* '<S59>/Integrator' */
                    /*@]*/
                    /*@[d055e*/
                        boolean_T Integrator3_CSTATE; /* '<S94>/Integrator3' */
                    /*@]*/
    

                            

                            

                                

                                XDis_CoreSubsys_DrivetrainE_o_T CoreSubsys_k[1]; /* '<S194>/CoreSubsys' */




                            

                            

                                

                                XDis_CoreSubsys_DrivetrainE_e_T CoreSubsys_c[1]; /* '<S152>/CoreSubsys' */




                            

                                    } XDis_DrivetrainEv_n_T;        
                        /* Zero-crossing (trigger) state for model 'DrivetrainEv' */
                    typedef struct  {
                            /*@[d055f*/
                            real_T Integrator_Reset_ZC; /* '<S15>/Integrator' */
                    /*@]*/
                    /*@[d0560*/
                            real_T Integrator_Reset_ZC_k; /* '<S51>/Integrator' */
                    /*@]*/
        
        } ZCV_DrivetrainEv_g_T;
                                    /* Zero-crossing (trigger) state for model 'DrivetrainEv' */
                    typedef struct  {
        /*@[d0565*/




                    
                    


                        



                            /*@[d0561*/
                            /*@[d0562*/
                                   ZCSigState Integrator_Reset_ZCE; /* '<S15>/Integrator' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0563*/
                            /*@[d0564*/
                                   ZCSigState Integrator_Reset_ZCE_h; /* '<S51>/Integrator' */

                        
                        /*@]*/
                        /*@]*/


                    




/*@]*/
        } ZCE_DrivetrainEv_T;
            
                /* Invariant block signals for model 'DrivetrainEv' */
            
                typedef struct  {
        /*@[d05b4*/




                    
                    


                        



                            /*@[d0586*/
                            /*@[d0587*/
                         const          real_T VectorConcatenate[3]; /* '<S102>/Vector Concatenate' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0588*/
                            /*@[d0589*/
                         const          real_T VectorConcatenate_d[3]; /* '<S103>/Vector Concatenate' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d058a*/
                            /*@[d058b*/
                         const          real_T m; /* '<S75>/m' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d058c*/
                            /*@[d058d*/
                         const          real_T VectorConcatenate4[3]; /* '<S75>/Vector Concatenate4' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d058e*/
                            /*@[d058f*/
                         const          real_T Abs; /* '<S61>/Abs' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0590*/
                            /*@[d0591*/
                         const          real_T Fcn; /* '<S61>/Fcn' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0592*/
                            /*@[d0593*/
                         const          real_T Switch; /* '<S61>/Switch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0594*/
                            /*@[d0595*/
                         const          real_T Add2; /* '<S141>/Add2' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0596*/
                            /*@[d0597*/
                         const          real_T Saturation; /* '<S141>/Saturation' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d0598*/
                            /*@[d0599*/
                         const          real_T TorqueConversion1; /* '<S156>/Torque Conversion1' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d059a*/
                            /*@[d059b*/
                         const          real_T Add2_n; /* '<S183>/Add2' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d059c*/
                            /*@[d059d*/
                         const          real_T Saturation_b; /* '<S183>/Saturation' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d059e*/
                            /*@[d059f*/
                         const          real_T TorqueConversion1_e; /* '<S198>/Torque Conversion1' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05a0*/
                            /*@[d05a1*/
                         const          real_T domega_o; /* '<S14>/domega_o' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05a2*/
                            /*@[d05a3*/
                         const          real_T UnaryMinus; /* '<S33>/Unary Minus' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05a4*/
                            /*@[d05a5*/
                         const          real_T diffDir; /* '<S33>/Switch1' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05a6*/
                            /*@[d05a7*/
                         const          real_T VectorConcatenate_n[2]; /* '<S26>/Vector Concatenate' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05a8*/
                            /*@[d05a9*/
                         const          real_T UnaryMinus_m; /* '<S30>/Unary Minus' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05aa*/
                            /*@[d05ab*/
                         const          real_T diffDir_j; /* '<S30>/Switch' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05ac*/
                            /*@[d05ad*/
                         const          real_T domega_o_p; /* '<S50>/domega_o' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05ae*/
                            /*@[d05af*/
                         const          boolean_T Compare; /* '<S68>/Compare' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05b0*/
                            /*@[d05b1*/
                         const          boolean_T Compare_g; /* '<S69>/Compare' */

                        
                        /*@]*/
                        /*@]*/


                    






                    
                    


                        



                            /*@[d05b2*/
                            /*@[d05b3*/
                         const          boolean_T LogicalOperator; /* '<S61>/Logical Operator' */

                        
                        /*@]*/
                        /*@]*/


                    




/*@]*/
        } ConstB_DrivetrainEv_h_T;
                                
        


            /* Real-time Model Data Structure */
            
    struct tag_RTM_DrivetrainEv_T {
                    const char_T **errorStatus;
                    RTWSolverInfo *solverInfo;
        const rtTimingBridge *timingBridge;

                        /*
        * Timing:
                * The following substructure contains information regarding
        * the timing information for the model.
         */
 
    struct  {
                    time_T stepSize0;
                    int_T mdlref_GlobalTID[2];
                    SimTimeStep *simTimeStep;
        boolean_T *stopRequestedFlag;
            


    } Timing;



    };

            
                            typedef struct  {
                    B_DrivetrainEv_c_T rtb;
        DW_DrivetrainEv_f_T rtdw;
        RT_MODEL_DrivetrainEv_T rtm;
        ZCE_DrivetrainEv_T rtzce;
            } MdlrefDW_DrivetrainEv_T;
                


    


    


    


    


            /* Model reference registration function */
            
        extern void DrivetrainEv_initialize(const char_T **rt_errorStatus, boolean_T *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, RT_MODEL_DrivetrainEv_T *const DrivetrainEv_M, ZCE_DrivetrainEv_T *localZCE);

            


                                            
                extern void DrivetrainEv_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz, real_T rtu_Omega, real_T rtu_Vx, real_T rtu_MagicPeak, real_T rtu_MagicPeak_b, real_T rtu_MagicPeak_n, real_T rtu_MagicPeak_a, real_T rtu_MagicPeak_i, const real_T rtu_MagicFxo[34], const real_T rtu_kappaFx[3], const real_T rtu_FzFx[3], const real_T rtu_FxMap[9], real_T rtu_RollRes, real_T rtu_RollRes_j, real_T rtu_RollRes_d, real_T rtu_RollRes_n, real_T rtu_RollRes_c, real_T rtu_RollRes_b, real_T rtu_RollRes_h, real_T rtu_RollRes_d1, real_T rtu_RollRes_i, real_T rtu_RollRes_d2, real_T rtu_RollRes_o, real_T rtu_RollRes_bt, real_T rtu_RollRes_f, real_T rtu_RollRes_k, real_T rtu_RollRes_fo, real_T rtu_RollRes_p, const real_T rtu_VxMy[3], const real_T rtu_FzMy[3], const real_T rtu_MyMap[9], real_T rtu_rho, real_T rtu_FxType, real_T rtu_rollingType, real_T rtu_vertType, real_T *rty_Fx, real_T *rty_My, real_T *rty_Kappa, real_T *rty_Re, real_T *rty_FzTire, real_T rtp_FZMAX, real_T rtp_FZMIN, real_T rtp_VXLOW, real_T rtp_kappamax);
                

    
                extern void DrivetrainEv_detectSlip_Init(boolean_T *rty_yn);
                

    
                extern void DrivetrainEv_detectSlip(real_T rtu_Tout, real_T rtu_Tfmaxs, boolean_T *rty_yn);
                

    
                extern void DrivetrainEv_detectLockup_Init(boolean_T *rty_yn);
                

    
                extern void DrivetrainEv_detectLockup(real_T rtu_Tout, real_T rtu_Tfmaxs, boolean_T *rty_yn, real_T rtp_br, DW_detectLockup_DrivetrainEv_T *localDW);
                

    
                extern void DrivetrainEv_Locked_Init(real_T *rty_ReactionTorque, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb);
                

    
                extern void DrivetrainEv_Locked(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T rtu_Tout, real_T *rty_ReactionTorque, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb);
                

    
                extern void DrivetrainEv_Slipping_Init(real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb, real_T rtp_omegao, X_Slipping_DrivetrainEv_T *localX);
                

    
                extern void DrivetrainEv_Slipping_Deriv(B_Slipping_DrivetrainEv_T *localB, XDot_Slipping_DrivetrainEv_T *localXdot);
                

    
                extern void DrivetrainEv_Slipping(real_T rtu_Tfmaxk, real_T rtu_Tout, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_ReactionTorque, real_T *rty_Myb, real_T rtp_br, real_T rtp_Iyy, B_Slipping_DrivetrainEv_T *localB, X_Slipping_DrivetrainEv_T *localX);
                

    
                extern void DrivetrainEv_Clutch_Init(real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, B_Clutch_DrivetrainEv_T *localB, X_Clutch_DrivetrainEv_T *localX);
                

    
                extern void DrivetrainEv_Clutch_Deriv(B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW, XDot_Clutch_DrivetrainEv_T *localXdot);
                

    
                extern void DrivetrainEv_Clutch(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, real_T rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol, B_Clutch_DrivetrainEv_T *localB, DW_Clutch_DrivetrainEv_T *localDW, X_Clutch_DrivetrainEv_T *localX);
                

    
                extern void DrivetrainEv_Clutch_o_Init(real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, B_Clutch_DrivetrainEv_g_T *localB, X_Clutch_DrivetrainEv_m_T *localX);
                

    
                extern void DrivetrainEv_Clutch_m_Deriv(B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW, XDot_Clutch_DrivetrainEv_i_T *localXdot);
                

    
                extern void DrivetrainEv_Clutch_b(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T *rty_Omega, real_T *rty_Omegadot, real_T *rty_Myb, real_T *rty_ReactionTorque, real_T rtp_omegao, real_T rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol, B_Clutch_DrivetrainEv_g_T *localB, DW_Clutch_DrivetrainEv_k_T *localDW, X_Clutch_DrivetrainEv_m_T *localX);
                

    
                extern void DrivetrainEv_Init(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX);
                

    
                extern void DrivetrainEv_Deriv(B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX, XDot_DrivetrainEv_n_T *localXdot);
                

    
                extern void DrivetrainEv_Update(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, DW_DrivetrainEv_f_T *localDW);
                

    
                extern void DrivetrainEv(RT_MODEL_DrivetrainEv_T * const DrivetrainEv_M, const real_T *rtu_MotTrq, const real_T *rtu_BrakeReq, const real_T *rtu_Grade, const real_T *rtu_WindVel, real_T *rty_VehSpd, real_T *rty_MotSpd, B_DrivetrainEv_c_T *localB, DW_DrivetrainEv_f_T *localDW, X_DrivetrainEv_n_T *localX, ZCE_DrivetrainEv_T *localZCE);
                

            



    


    


    


        
            /*-
            * These blocks were eliminated from the model due to optimizations:
            *
                    * Block '<S17>/Constant8' : Unused code path elimination
                    * Block '<S17>/Product1' : Unused code path elimination
                    * Block '<S17>/Product4' : Unused code path elimination
                    * Block '<S17>/Unary Minus' : Unused code path elimination
                    * Block '<S16>/Product' : Unused code path elimination
                    * Block '<S16>/Transferred Power' : Unused code path elimination
                    * Block '<S16>/Unary Minus1' : Unused code path elimination
                    * Block '<S14>/Signal Copy' : Unused code path elimination
                    * Block '<S14>/Signal Copy1' : Unused code path elimination
                    * Block '<S32>/Abs' : Unused code path elimination
                    * Block '<S32>/Constant6' : Unused code path elimination
                    * Block '<S32>/Constant7' : Unused code path elimination
                    * Block '<S32>/Constant8' : Unused code path elimination
                    * Block '<S32>/Product1' : Unused code path elimination
                    * Block '<S32>/Product4' : Unused code path elimination
                    * Block '<S32>/Sum of Elements2' : Unused code path elimination
                    * Block '<S32>/Unary Minus' : Unused code path elimination
                    * Block '<S33>/Constant1' : Unused code path elimination
                    * Block '<S33>/Constant4' : Unused code path elimination
                    * Block '<S33>/Constant5' : Unused code path elimination
                    * Block '<S33>/Product5' : Unused code path elimination
                    * Block '<S33>/Sum of Elements1' : Unused code path elimination
                    * Block '<S31>/Sum of Elements3' : Unused code path elimination
                    * Block '<S31>/Transferred Power' : Unused code path elimination
                    * Block '<S31>/Unary Minus' : Unused code path elimination
                    * Block '<S38>/Product2' : Unused code path elimination
                    * Block '<S38>/Subtract' : Unused code path elimination
                    * Block '<S39>/Product2' : Unused code path elimination
                    * Block '<S39>/Subtract' : Unused code path elimination
                    * Block '<S40>/Product2' : Unused code path elimination
                    * Block '<S40>/Subtract' : Unused code path elimination
                    * Block '<S53>/Constant8' : Unused code path elimination
                    * Block '<S53>/Product1' : Unused code path elimination
                    * Block '<S53>/Product4' : Unused code path elimination
                    * Block '<S53>/Unary Minus' : Unused code path elimination
                    * Block '<S52>/Product' : Unused code path elimination
                    * Block '<S52>/Transferred Power' : Unused code path elimination
                    * Block '<S52>/Unary Minus1' : Unused code path elimination
                    * Block '<S50>/Signal Copy' : Unused code path elimination
                    * Block '<S50>/Signal Copy1' : Unused code path elimination
                    * Block '<S50>/Unary Minus1' : Unused code path elimination
                    * Block '<S62>/Constant8' : Unused code path elimination
                    * Block '<S62>/Product1' : Unused code path elimination
                    * Block '<S62>/Product4' : Unused code path elimination
                    * Block '<S62>/Unary Minus' : Unused code path elimination
                    * Block '<S63>/Product5' : Unused code path elimination
                    * Block '<S60>/Transferred Power' : Unused code path elimination
                    * Block '<S85>/Unit Conversion' : Unused code path elimination
                    * Block '<S94>/Add' : Unused code path elimination
                    * Block '<S94>/Constant11' : Unused code path elimination
                    * Block '<S94>/Unit Conversion' : Unused code path elimination
                    * Block '<S94>/Unit Conversion1' : Unused code path elimination
                    * Block '<S94>/Unit Conversion2' : Unused code path elimination
                    * Block '<S96>/i x j' : Unused code path elimination
                    * Block '<S96>/j x k' : Unused code path elimination
                    * Block '<S96>/k x i' : Unused code path elimination
                    * Block '<S97>/i x k' : Unused code path elimination
                    * Block '<S97>/j x i' : Unused code path elimination
                    * Block '<S97>/k x j' : Unused code path elimination
                    * Block '<S95>/Sum' : Unused code path elimination
                    * Block '<S98>/Add' : Unused code path elimination
                    * Block '<S98>/Add1' : Unused code path elimination
                    * Block '<S98>/Constant10' : Unused code path elimination
                    * Block '<S98>/Constant6' : Unused code path elimination
                    * Block '<S98>/Constant8' : Unused code path elimination
                    * Block '<S98>/Constant9' : Unused code path elimination
                    * Block '<S98>/Unary Minus' : Unused code path elimination
                    * Block '<S98>/Unary Minus1' : Unused code path elimination
                    * Block '<S102>/Add4' : Unused code path elimination
                    * Block '<S105>/Product' : Unused code path elimination
                    * Block '<S105>/Reshape1' : Unused code path elimination
                    * Block '<S105>/Reshape2' : Unused code path elimination
                    * Block '<S103>/Add4' : Unused code path elimination
                    * Block '<S112>/Product' : Unused code path elimination
                    * Block '<S112>/Reshape1' : Unused code path elimination
                    * Block '<S112>/Reshape2' : Unused code path elimination
                    * Block '<S91>/Constant10' : Unused code path elimination
                    * Block '<S118>/Product' : Unused code path elimination
                    * Block '<S120>/Reshape (9) to [3x3] column-major' : Unused code path elimination
                    * Block '<S118>/Transpose' : Unused code path elimination
                    * Block '<S121>/Constant' : Unused code path elimination
                    * Block '<S121>/Constant1' : Unused code path elimination
                    * Block '<S121>/Constant2' : Unused code path elimination
                    * Block '<S121>/Product' : Unused code path elimination
                    * Block '<S121>/Product10' : Unused code path elimination
                    * Block '<S121>/Product11' : Unused code path elimination
                    * Block '<S121>/Product12' : Unused code path elimination
                    * Block '<S121>/Product3' : Unused code path elimination
                    * Block '<S121>/Product4' : Unused code path elimination
                    * Block '<S121>/Product5' : Unused code path elimination
                    * Block '<S121>/Product6' : Unused code path elimination
                    * Block '<S121>/Product7' : Unused code path elimination
                    * Block '<S121>/Reshape1' : Unused code path elimination
                    * Block '<S121>/Reshape2' : Unused code path elimination
                    * Block '<S121>/Selector8' : Unused code path elimination
                    * Block '<S121>/Selector9' : Unused code path elimination
                    * Block '<S121>/Sum of Elements' : Unused code path elimination
                    * Block '<S121>/Sum of Elements1' : Unused code path elimination
                    * Block '<S121>/Sum of Elements6' : Unused code path elimination
                    * Block '<S123>/Add1' : Unused code path elimination
                    * Block '<S123>/Add2' : Unused code path elimination
                    * Block '<S123>/Add3' : Unused code path elimination
                    * Block '<S123>/Subtract' : Unused code path elimination
                    * Block '<S123>/Subtract1' : Unused code path elimination
                    * Block '<S123>/Unary Minus' : Unused code path elimination
                    * Block '<S123>/Unary Minus1' : Unused code path elimination
                    * Block '<S121>/Unit Conversion' : Unused code path elimination
                    * Block '<S121>/Unit Conversion1' : Unused code path elimination
                    * Block '<S142>/4' : Unused code path elimination
                    * Block '<S142>/Add' : Unused code path elimination
                    * Block '<S142>/Constant' : Unused code path elimination
                    * Block '<S142>/Constant1' : Unused code path elimination
                    * Block '<S142>/Constant2' : Unused code path elimination
                    * Block '<S142>/Product' : Unused code path elimination
                    * Block '<S142>/Product10' : Unused code path elimination
                    * Block '<S142>/Product11' : Unused code path elimination
                    * Block '<S142>/Product12' : Unused code path elimination
                    * Block '<S142>/Product13' : Unused code path elimination
                    * Block '<S142>/Product2' : Unused code path elimination
                    * Block '<S142>/Product3' : Unused code path elimination
                    * Block '<S142>/Product4' : Unused code path elimination
                    * Block '<S142>/Product5' : Unused code path elimination
                    * Block '<S142>/Product6' : Unused code path elimination
                    * Block '<S142>/Product7' : Unused code path elimination
                    * Block '<S142>/Product8' : Unused code path elimination
                    * Block '<S142>/Product9' : Unused code path elimination
                    * Block '<S142>/Trigonometric Function' : Unused code path elimination
                    * Block '<S142>/Unary Minus1' : Unused code path elimination
                    * Block '<S142>/Unary Minus3' : Unused code path elimination
                    * Block '<S142>/Unary Minus4' : Unused code path elimination
                    * Block '<S142>/Unary Minus5' : Unused code path elimination
                    * Block '<S142>/Unary Minus8' : Unused code path elimination
                    * Block '<S136>/Signal Copy' : Unused code path elimination
                    * Block '<S132>/GndConstant' : Unused code path elimination
                    * Block '<S132>/TambConstant' : Unused code path elimination
                    * Block '<S150>/Signal Copy' : Unused code path elimination
                    * Block '<S184>/4' : Unused code path elimination
                    * Block '<S184>/Add' : Unused code path elimination
                    * Block '<S184>/Constant' : Unused code path elimination
                    * Block '<S184>/Constant1' : Unused code path elimination
                    * Block '<S184>/Constant2' : Unused code path elimination
                    * Block '<S184>/Product' : Unused code path elimination
                    * Block '<S184>/Product10' : Unused code path elimination
                    * Block '<S184>/Product11' : Unused code path elimination
                    * Block '<S184>/Product12' : Unused code path elimination
                    * Block '<S184>/Product13' : Unused code path elimination
                    * Block '<S184>/Product2' : Unused code path elimination
                    * Block '<S184>/Product3' : Unused code path elimination
                    * Block '<S184>/Product4' : Unused code path elimination
                    * Block '<S184>/Product5' : Unused code path elimination
                    * Block '<S184>/Product6' : Unused code path elimination
                    * Block '<S184>/Product7' : Unused code path elimination
                    * Block '<S184>/Product8' : Unused code path elimination
                    * Block '<S184>/Product9' : Unused code path elimination
                    * Block '<S184>/Trigonometric Function' : Unused code path elimination
                    * Block '<S184>/Unary Minus1' : Unused code path elimination
                    * Block '<S184>/Unary Minus3' : Unused code path elimination
                    * Block '<S184>/Unary Minus4' : Unused code path elimination
                    * Block '<S184>/Unary Minus5' : Unused code path elimination
                    * Block '<S184>/Unary Minus8' : Unused code path elimination
                    * Block '<S178>/Signal Copy' : Unused code path elimination
                    * Block '<S134>/GndConstant' : Unused code path elimination
                    * Block '<S134>/TambConstant' : Unused code path elimination
                    * Block '<S192>/Signal Copy' : Unused code path elimination
                    * Block '<S87>/Reshape (9) to [3x3] column-major' : Reshape block reduction
                    * Block '<S108>/Reshape (9) to [3x3] column-major' : Reshape block reduction
                    * Block '<S106>/Reshape1' : Reshape block reduction
                    * Block '<S106>/Reshape2' : Reshape block reduction
                    * Block '<S115>/Reshape (9) to [3x3] column-major' : Reshape block reduction
                    * Block '<S113>/Reshape1' : Reshape block reduction
                    * Block '<S113>/Reshape2' : Reshape block reduction
                    * Block '<S75>/Reshape' : Reshape block reduction
                    * Block '<S75>/Reshape1' : Reshape block reduction
                    * Block '<S75>/Reshape2' : Reshape block reduction
                    * Block '<S75>/Reshape3' : Reshape block reduction
                    * Block '<S131>/Reshape (9) to [3x3] column-major' : Reshape block reduction
                    * Block '<S130>/Reshape1' : Reshape block reduction
                    * Block '<S150>/Signal Copy1' : Eliminate redundant signal conversion block
                    * Block '<S153>/Ratio of static to kinetic1' : Eliminated nontunable gain of 1
                    * Block '<S192>/Signal Copy1' : Eliminate redundant signal conversion block
                    * Block '<S195>/Ratio of static to kinetic1' : Eliminated nontunable gain of 1
            */
        
    /*-
    * The generated code includes comments that allow you to trace directly
    * back to the appropriate location in the model.  The basic format
        * is <system>/block_name, where system is the system number (uniquely
        * assigned by Simulink) and block_name is the name of the block.
        *
        * Use the MATLAB hilite_system command to trace the generated code back
        * to the model.  For example,
        *
            * hilite_system('<S3>')    - opens system 3
            * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
        *
        * Here is the system hierarchy for this model
        *
            * '<Root>' : 'DrivetrainEv'
                * '<S1>'   : 'DrivetrainEv/Differential and Compliance'
                * '<S2>'   : 'DrivetrainEv/Driveshaft Compliance'
                * '<S3>'   : 'DrivetrainEv/Rotational Inertia'
                * '<S4>'   : 'DrivetrainEv/Vehicle'
                * '<S5>'   : 'DrivetrainEv/Vehicle Output Interface'
                * '<S6>'   : 'DrivetrainEv/Wheels and Brakes'
                * '<S7>'   : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive'
                * '<S8>'   : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1'
                * '<S9>'   : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2'
                * '<S10>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential'
                * '<S11>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Rear Axle 1'
                * '<S12>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Rear Axle 2'
                * '<S13>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way'
                * '<S14>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear'
                * '<S15>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
                * '<S16>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
                * '<S17>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
                * '<S18>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
                * '<S19>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S20>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
                * '<S21>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S22>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator'
                * '<S23>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S24>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator/PwrStored Input'
                * '<S25>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 2/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S26>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential'
                * '<S27>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation'
                * '<S28>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency'
                * '<S29>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Open Differential'
                * '<S30>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/y'
                * '<S31>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power'
                * '<S32>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Damping Power'
                * '<S33>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power'
                * '<S34>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator'
                * '<S35>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S36>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrStored Input'
                * '<S37>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S38>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency'
                * '<S39>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency'
                * '<S40>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Drive Efficiency'
                * '<S41>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Eta'
                * '<S42>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend'
                * '<S43>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency/Low speed blend/blend'
                * '<S44>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend'
                * '<S45>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency/Low speed blend/blend'
                * '<S46>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend'
                * '<S47>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Drive Efficiency/Low speed blend/blend'
                * '<S48>'  : 'DrivetrainEv/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Eta/Constant Eta'
                * '<S49>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way'
                * '<S50>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear'
                * '<S51>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
                * '<S52>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
                * '<S53>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
                * '<S54>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
                * '<S55>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S56>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
                * '<S57>'  : 'DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S58>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia'
                * '<S59>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input'
                * '<S60>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power'
                * '<S61>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly'
                * '<S62>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Damping Power'
                * '<S63>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Kinetic Power'
                * '<S64>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator'
                * '<S65>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S66>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrStored Input'
                * '<S67>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S68>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant'
                * '<S69>'  : 'DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Compare To Constant1'
                * '<S70>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal'
                * '<S71>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof'
                * '<S72>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)'
                * '<S73>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation'
                * '<S74>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force'
                * '<S75>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body'
                * '<S76>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Fx'
                * '<S77>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Fz'
                * '<S78>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My'
                * '<S79>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension'
                * '<S80>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot'
                * '<S81>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Determine Force,  Mass & Inertia'
                * '<S82>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Gravity'
                * '<S83>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes'
                * '<S84>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Velocity Conversion'
                * '<S85>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Velocity Conversion1'
                * '<S86>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix'
                * '<S87>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
                * '<S88>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame'
                * '<S89>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces'
                * '<S90>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing'
                * '<S91>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame'
                * '<S92>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Moments'
                * '<S93>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power'
                * '<S94>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF'
                * '<S95>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/wxR'
                * '<S96>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/wxR/Subsystem'
                * '<S97>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/wxR/Subsystem1'
                * '<S98>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF'
                * '<S99>'  : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm'
                * '<S100>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm1'
                * '<S101>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF'
                * '<S102>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front'
                * '<S103>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear'
                * '<S104>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix'
                * '<S105>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/transform to Inertial axes'
                * '<S106>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/transform to Inertial axes1'
                * '<S107>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR'
                * '<S108>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
                * '<S109>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem'
                * '<S110>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1'
                * '<S111>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix'
                * '<S112>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes'
                * '<S113>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes1'
                * '<S114>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR'
                * '<S115>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
                * '<S116>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem'
                * '<S117>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1'
                * '<S118>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes'
                * '<S119>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
                * '<S120>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
                * '<S121>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF'
                * '<S122>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension'
                * '<S123>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension'
                * '<S124>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator'
                * '<S125>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S126>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator/PwrStored Input'
                * '<S127>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Power/Longitudinal 3DOF/Transfered Suspension/Internal Suspension/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S128>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation'
                * '<S129>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix'
                * '<S130>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/transform to body axes'
                * '<S131>' : 'DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
                * '<S132>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1'
                * '<S133>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2'
                * '<S134>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1'
                * '<S135>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2'
                * '<S136>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing'
                * '<S137>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire'
                * '<S138>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters'
                * '<S139>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters'
                * '<S140>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF'
                * '<S141>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module'
                * '<S142>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power'
                * '<S143>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator'
                * '<S144>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S145>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
                * '<S146>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S147>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire'
                * '<S148>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value'
                * '<S149>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple'
                * '<S150>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None'
                * '<S151>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes'
                * '<S152>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch'
                * '<S153>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Friction Model'
                * '<S154>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation'
                * '<S155>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake'
                * '<S156>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake'
                * '<S157>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch'
                * '<S158>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked'
                * '<S159>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping'
                * '<S160>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup'
                * '<S161>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip'
                * '<S162>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
                * '<S163>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
                * '<S164>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
                * '<S165>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
                * '<S166>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
                * '<S167>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
                * '<S168>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
                * '<S169>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
                * '<S170>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn'
                * '<S171>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly'
                * '<S172>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
                * '<S173>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
                * '<S174>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator'
                * '<S175>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S176>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator/PwrStored Input'
                * '<S177>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 2/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S178>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing'
                * '<S179>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire'
                * '<S180>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters'
                * '<S181>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters'
                * '<S182>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF'
                * '<S183>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module'
                * '<S184>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power'
                * '<S185>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator'
                * '<S186>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S187>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
                * '<S188>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
                * '<S189>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire'
                * '<S190>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value'
                * '<S191>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple'
                * '<S192>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None'
                * '<S193>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes'
                * '<S194>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch'
                * '<S195>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Friction Model'
                * '<S196>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation'
                * '<S197>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake'
                * '<S198>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake'
                * '<S199>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch'
                * '<S200>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked'
                * '<S201>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping'
                * '<S202>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup'
                * '<S203>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip'
                * '<S204>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
                * '<S205>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
                * '<S206>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
                * '<S207>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
                * '<S208>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
                * '<S209>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
                * '<S210>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
                * '<S211>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
                * '<S212>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn'
                * '<S213>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly'
                * '<S214>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
                * '<S215>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
                * '<S216>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator'
                * '<S217>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
                * '<S218>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator/PwrStored Input'
                * '<S219>' : 'DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 2/Power Accounting Bus Creator/PwrTrnsfrd Input'
    */



    


  #endif /* RTW_HEADER_DrivetrainEv_h_ */

/* 
 * File trailer for generated code.
 * 
 * [EOF]
 */

