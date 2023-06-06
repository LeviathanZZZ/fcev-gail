    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (FCEvReferenceApplication_P)
        ;%
            section.nData     = 71;
            section.data(71)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_GearIni
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_P.SignalHold_IC
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% FCEvReferenceApplication_P.SignalHold_IC_k
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_Kpt
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_L
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_aR
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_bR
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_cR
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_g
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_m
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_tShift
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% FCEvReferenceApplication_P.LongitudinalDriverModel_tau
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% FCEvReferenceApplication_P.u1_UpperSat
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% FCEvReferenceApplication_P.u1_LowerSat
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% FCEvReferenceApplication_P.u0_UpperSat
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% FCEvReferenceApplication_P.u0_LowerSat
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% FCEvReferenceApplication_P.Constant_Value
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% FCEvReferenceApplication_P.Constant_Value_n
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% FCEvReferenceApplication_P.FirstOrderHold_IniOut
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% FCEvReferenceApplication_P.FirstOrderHold_ErrTol
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% FCEvReferenceApplication_P.FirstOrderHold1_IniOut
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% FCEvReferenceApplication_P.FirstOrderHold1_ErrTol
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% FCEvReferenceApplication_P.Saturation_UpperSat
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% FCEvReferenceApplication_P.Saturation_LowerSat
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% FCEvReferenceApplication_P.Gain_Gain
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% FCEvReferenceApplication_P.Gain_Gain_n
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% FCEvReferenceApplication_P.Constant_Value_m
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% FCEvReferenceApplication_P.Integrator1_IC
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% FCEvReferenceApplication_P.Saturation_UpperSat_e
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% FCEvReferenceApplication_P.Saturation_LowerSat_j
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% FCEvReferenceApplication_P.Constant_Value_l
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% FCEvReferenceApplication_P.Saturation_UpperSat_n
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% FCEvReferenceApplication_P.Saturation_LowerSat_jd
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% FCEvReferenceApplication_P.tFinal_Value
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% FCEvReferenceApplication_P.repeat_Value
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% FCEvReferenceApplication_P.Switch_Threshold
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% FCEvReferenceApplication_P.uDLookupTable_tableData
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% FCEvReferenceApplication_P.uDLookupTable_bp01Data
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 1406;

                    ;% FCEvReferenceApplication_P.Constant1_Value
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 2776;

                    ;% FCEvReferenceApplication_P.Constant_Value_f
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 2777;

                    ;% FCEvReferenceApplication_P.Gain2_Gain
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 2778;

                    ;% FCEvReferenceApplication_P.Saturation_UpperSat_eq
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 2779;

                    ;% FCEvReferenceApplication_P.Saturation_LowerSat_l
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 2780;

                    ;% FCEvReferenceApplication_P.Gain1_Gain
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 2781;

                    ;% FCEvReferenceApplication_P.HitCrossing_Offset
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 2782;

                    ;% FCEvReferenceApplication_P.Constant2_Value
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 2783;

                    ;% FCEvReferenceApplication_P.Constant3_Value
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 2784;

                    ;% FCEvReferenceApplication_P.Integrator2_IC
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 2785;

                    ;% FCEvReferenceApplication_P.UnitDelay_InitialCondition
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 2786;

                    ;% FCEvReferenceApplication_P.MotorCouplingDynamics_A
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 2788;

                    ;% FCEvReferenceApplication_P.MotorCouplingDynamics_C
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 2789;

                    ;% FCEvReferenceApplication_P.FirstOrderHold_IniOut_b
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 2790;

                    ;% FCEvReferenceApplication_P.FirstOrderHold_ErrTol_e
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 2791;

                    ;% FCEvReferenceApplication_P.mstomph_Gain
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 2792;

                    ;% FCEvReferenceApplication_P.radstoRPM_Gain
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 2793;

                    ;% FCEvReferenceApplication_P.Integrator_IC
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 2794;

                    ;% FCEvReferenceApplication_P.mtomile_Gain
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 2795;

                    ;% FCEvReferenceApplication_P.Integrator1_IC_o
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 2796;

                    ;% FCEvReferenceApplication_P.m3toUSGal_Gain
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 2797;

                    ;% FCEvReferenceApplication_P.Saturation1_UpperSat
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 2798;

                    ;% FCEvReferenceApplication_P.Saturation1_LowerSat
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 2799;

                    ;% FCEvReferenceApplication_P.mto100Km_Gain
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 2800;

                    ;% FCEvReferenceApplication_P.Saturation_UpperSat_d
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 2801;

                    ;% FCEvReferenceApplication_P.Saturation_LowerSat_ln
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 2802;

                    ;% FCEvReferenceApplication_P.m3toL_Gain
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 2803;

                    ;% FCEvReferenceApplication_P.wtokw_Value
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 2804;

                    ;% FCEvReferenceApplication_P.USEPAkwhUSgalequivalent_Value
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 2805;

                    ;% FCEvReferenceApplication_P.sperh_Value
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 2806;

                    ;% FCEvReferenceApplication_P.kgstoGasgals_Gain
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 2807;

                    ;% FCEvReferenceApplication_P.m3pergal_Gain
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 2808;

                    ;% FCEvReferenceApplication_P.pause_time_Value
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 2809;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (FCEvReferenceApplication_B)
        ;%
            section.nData     = 82;
            section.data(82)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_B.MotTrqCmd
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_B.xdot
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% FCEvReferenceApplication_B.MotSpd
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% FCEvReferenceApplication_B.FCCurrCmd
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% FCEvReferenceApplication_B.BattSoc
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% FCEvReferenceApplication_B.BattPwr
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% FCEvReferenceApplication_B.BattCurr
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% FCEvReferenceApplication_B.MotTrq
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% FCEvReferenceApplication_B.ElectricPlant_o5
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% FCEvReferenceApplication_B.FCCurr
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% FCEvReferenceApplication_B.TotPwr
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% FCEvReferenceApplication_B.H2Flow
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% FCEvReferenceApplication_B.ElectricPlant_o9
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% FCEvReferenceApplication_B.Saturation
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% FCEvReferenceApplication_B.Gain
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% FCEvReferenceApplication_B.Derivative
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% FCEvReferenceApplication_B.Gain_g
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% FCEvReferenceApplication_B.Constant
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% FCEvReferenceApplication_B.Integrator1
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% FCEvReferenceApplication_B.Gain_a
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% FCEvReferenceApplication_B.Add
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% FCEvReferenceApplication_B.Constant_d
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% FCEvReferenceApplication_B.tFinal
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% FCEvReferenceApplication_B.repeat
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% FCEvReferenceApplication_B.Switch
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% FCEvReferenceApplication_B.uDLookupTable
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% FCEvReferenceApplication_B.Constant1
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% FCEvReferenceApplication_B.Constant_l
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% FCEvReferenceApplication_B.Switch_b
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% FCEvReferenceApplication_B.RateTransition
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 30;

                    ;% FCEvReferenceApplication_B.RateTransition1
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 31;

                    ;% FCEvReferenceApplication_B.RateTransition2
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 32;

                    ;% FCEvReferenceApplication_B.RateTransition3
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 33;

                    ;% FCEvReferenceApplication_B.RateTransition6
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 34;

                    ;% FCEvReferenceApplication_B.RateTransition7
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 35;

                    ;% FCEvReferenceApplication_B.MotTrqCmd_j
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 36;

                    ;% FCEvReferenceApplication_B.BrkCmd
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 37;

                    ;% FCEvReferenceApplication_B.PowertrainControlModulePCM_o3
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 38;

                    ;% FCEvReferenceApplication_B.Gain2
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 39;

                    ;% FCEvReferenceApplication_B.Gain1
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 40;

                    ;% FCEvReferenceApplication_B.RateTransition4
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 41;

                    ;% FCEvReferenceApplication_B.RateTransition5
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 42;

                    ;% FCEvReferenceApplication_B.DigitalClock
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 43;

                    ;% FCEvReferenceApplication_B.Add1
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 44;

                    ;% FCEvReferenceApplication_B.Grade
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 45;

                    ;% FCEvReferenceApplication_B.wind_x
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 46;

                    ;% FCEvReferenceApplication_B.Product1
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 47;

                    ;% FCEvReferenceApplication_B.Product
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 48;

                    ;% FCEvReferenceApplication_B.ytT
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 49;

                    ;% FCEvReferenceApplication_B.etT
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 50;

                    ;% FCEvReferenceApplication_B.Divide
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 51;

                    ;% FCEvReferenceApplication_B.u_ot
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 52;

                    ;% FCEvReferenceApplication_B.Constant_a
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 53;

                    ;% FCEvReferenceApplication_B.Sum
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 54;

                    ;% FCEvReferenceApplication_B.Divide_j
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 55;

                    ;% FCEvReferenceApplication_B.Sum7
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 56;

                    ;% FCEvReferenceApplication_B.Product_m
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 57;

                    ;% FCEvReferenceApplication_B.UnitDelay
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 58;

                    ;% FCEvReferenceApplication_B.Switch_p
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 60;

                    ;% FCEvReferenceApplication_B.MotTrq_f
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 62;

                    ;% FCEvReferenceApplication_B.BrkCmd_f
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 63;

                    ;% FCEvReferenceApplication_B.mstomph
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 64;

                    ;% FCEvReferenceApplication_B.radstoRPM
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 66;

                    ;% FCEvReferenceApplication_B.Integrator
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 67;

                    ;% FCEvReferenceApplication_B.Integrator1_d
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 68;

                    ;% FCEvReferenceApplication_B.m3toUSGal
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 69;

                    ;% FCEvReferenceApplication_B.USMPGCalc
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 70;

                    ;% FCEvReferenceApplication_B.mto100Km
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 71;

                    ;% FCEvReferenceApplication_B.L100Km
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 72;

                    ;% FCEvReferenceApplication_B.wtokw
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 73;

                    ;% FCEvReferenceApplication_B.Divide_c
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 74;

                    ;% FCEvReferenceApplication_B.USEPAkwhUSgalequivalent
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 75;

                    ;% FCEvReferenceApplication_B.Divide2
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 76;

                    ;% FCEvReferenceApplication_B.sperh
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 77;

                    ;% FCEvReferenceApplication_B.GasGallonss
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 78;

                    ;% FCEvReferenceApplication_B.Gasgals
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 79;

                    ;% FCEvReferenceApplication_B.Add_b
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 80;

                    ;% FCEvReferenceApplication_B.Product_e
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 81;

                    ;% FCEvReferenceApplication_B.Sqrt
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 82;

                    ;% FCEvReferenceApplication_B.m3pergal
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 83;

                    ;% FCEvReferenceApplication_B.Clock
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 84;

                    ;% FCEvReferenceApplication_B.Gear
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 85;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_B.LogicalOperator2
                    section.data(1).logicalSrcIdx = 82;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_B.NOT
                    section.data(2).logicalSrcIdx = 83;
                    section.data(2).dtTransOffset = 1;

                    ;% FCEvReferenceApplication_B.LogicalOperator2_j
                    section.data(3).logicalSrcIdx = 84;
                    section.data(3).dtTransOffset = 2;

                    ;% FCEvReferenceApplication_B.NOT_g
                    section.data(4).logicalSrcIdx = 85;
                    section.data(4).dtTransOffset = 3;

                    ;% FCEvReferenceApplication_B.LogicalOperator
                    section.data(5).logicalSrcIdx = 86;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_B.PassThrough_b.u
                    section.data(1).logicalSrcIdx = 87;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_B.PassThrough.u
                    section.data(1).logicalSrcIdx = 88;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 13;
        sectIdxOffset = 4;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (FCEvReferenceApplication_DW)
        ;%
            section.nData     = 38;
            section.data(38)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.UnitDelay_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_DW.Tk
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% FCEvReferenceApplication_DW.Ck
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% FCEvReferenceApplication_DW.Mk
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% FCEvReferenceApplication_DW.Uk
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% FCEvReferenceApplication_DW.Tk_o
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% FCEvReferenceApplication_DW.Ck_d
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 7;

                    ;% FCEvReferenceApplication_DW.Mk_e
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 8;

                    ;% FCEvReferenceApplication_DW.Uk_j
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 9;

                    ;% FCEvReferenceApplication_DW.RateTransition1_Buffer0
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 10;

                    ;% FCEvReferenceApplication_DW.TimeStampA
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 11;

                    ;% FCEvReferenceApplication_DW.LastUAtTimeA
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 12;

                    ;% FCEvReferenceApplication_DW.TimeStampB
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 13;

                    ;% FCEvReferenceApplication_DW.LastUAtTimeB
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 14;

                    ;% FCEvReferenceApplication_DW.RateTransition_Buffer0
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 15;

                    ;% FCEvReferenceApplication_DW.RateTransition1_Buffer0_m
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 16;

                    ;% FCEvReferenceApplication_DW.RateTransition2_Buffer0
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 17;

                    ;% FCEvReferenceApplication_DW.RateTransition3_Buffer0
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 18;

                    ;% FCEvReferenceApplication_DW.RateTransition6_Buffer0
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 19;

                    ;% FCEvReferenceApplication_DW.RateTransition7_Buffer0
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 20;

                    ;% FCEvReferenceApplication_DW.RateTransition4_Buffer0
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 21;

                    ;% FCEvReferenceApplication_DW.RateTransition5_Buffer0
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 22;

                    ;% FCEvReferenceApplication_DW.Tk_a
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 23;

                    ;% FCEvReferenceApplication_DW.Ck_g
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 24;

                    ;% FCEvReferenceApplication_DW.Mk_h
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 25;

                    ;% FCEvReferenceApplication_DW.Uk_h
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 26;

                    ;% FCEvReferenceApplication_DW.RateTransition4_Buffer0_b
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 27;

                    ;% FCEvReferenceApplication_DW.RateTransition2_Buffer0_k
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 29;

                    ;% FCEvReferenceApplication_DW.RateTransition5_Buffer0_d
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 30;

                    ;% FCEvReferenceApplication_DW.RateTransition6_Buffer0_e
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 31;

                    ;% FCEvReferenceApplication_DW.RateTransition3_Buffer0_d
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 32;

                    ;% FCEvReferenceApplication_DW.RateTransition7_Buffer0_j
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 33;

                    ;% FCEvReferenceApplication_DW.RateTransition3_Buffer0_g
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 34;

                    ;% FCEvReferenceApplication_DW.GearState
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 35;

                    ;% FCEvReferenceApplication_DW.temporalCounter_i1
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 36;

                    ;% FCEvReferenceApplication_DW.presentTime
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 37;

                    ;% FCEvReferenceApplication_DW.elapsedTime
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 38;

                    ;% FCEvReferenceApplication_DW.previousTime
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.Scope_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_DW.ToWorkspace_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 1;

                    ;% FCEvReferenceApplication_DW.ToWorkspace1_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 2;

                    ;% FCEvReferenceApplication_DW.ToWorkspace2_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 3;

                    ;% FCEvReferenceApplication_DW.PerformanceandFEScope_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 42;
                    section.data(5).dtTransOffset = 4;

                    ;% FCEvReferenceApplication_DW.Scope_PWORK_k.LoggedData
                    section.data(6).logicalSrcIdx = 43;
                    section.data(6).dtTransOffset = 12;

                    ;% FCEvReferenceApplication_DW.ToWorkspace1_PWORK_c.LoggedData
                    section.data(7).logicalSrcIdx = 44;
                    section.data(7).dtTransOffset = 13;

                    ;% FCEvReferenceApplication_DW.ToWorkspace2_PWORK_i.LoggedData
                    section.data(8).logicalSrcIdx = 45;
                    section.data(8).dtTransOffset = 14;

                    ;% FCEvReferenceApplication_DW.ToWorkspace3_PWORK.LoggedData
                    section.data(9).logicalSrcIdx = 46;
                    section.data(9).dtTransOffset = 15;

                    ;% FCEvReferenceApplication_DW.ToWorkspace4_PWORK.LoggedData
                    section.data(10).logicalSrcIdx = 47;
                    section.data(10).dtTransOffset = 16;

                    ;% FCEvReferenceApplication_DW.ToWorkspace3_PWORK_j.LoggedData
                    section.data(11).logicalSrcIdx = 48;
                    section.data(11).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.m_bpIndex
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.Saturation_MODE
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_DW.Saturation1_MODE
                    section.data(2).logicalSrcIdx = 51;
                    section.data(2).dtTransOffset = 1;

                    ;% FCEvReferenceApplication_DW.Saturation_MODE_k
                    section.data(3).logicalSrcIdx = 52;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.RateTransition1_semaphoreTaken
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_DW.RateTransition_semaphoreTaken
                    section.data(2).logicalSrcIdx = 54;
                    section.data(2).dtTransOffset = 1;

                    ;% FCEvReferenceApplication_DW.RateTransition1_semaphoreTake_h
                    section.data(3).logicalSrcIdx = 55;
                    section.data(3).dtTransOffset = 2;

                    ;% FCEvReferenceApplication_DW.RateTransition2_semaphoreTaken
                    section.data(4).logicalSrcIdx = 56;
                    section.data(4).dtTransOffset = 3;

                    ;% FCEvReferenceApplication_DW.RateTransition3_semaphoreTaken
                    section.data(5).logicalSrcIdx = 57;
                    section.data(5).dtTransOffset = 4;

                    ;% FCEvReferenceApplication_DW.RateTransition6_semaphoreTaken
                    section.data(6).logicalSrcIdx = 58;
                    section.data(6).dtTransOffset = 5;

                    ;% FCEvReferenceApplication_DW.RateTransition7_semaphoreTaken
                    section.data(7).logicalSrcIdx = 59;
                    section.data(7).dtTransOffset = 6;

                    ;% FCEvReferenceApplication_DW.RateTransition4_semaphoreTaken
                    section.data(8).logicalSrcIdx = 60;
                    section.data(8).dtTransOffset = 7;

                    ;% FCEvReferenceApplication_DW.RateTransition5_semaphoreTaken
                    section.data(9).logicalSrcIdx = 61;
                    section.data(9).dtTransOffset = 8;

                    ;% FCEvReferenceApplication_DW.RateTransition4_semaphoreTake_d
                    section.data(10).logicalSrcIdx = 62;
                    section.data(10).dtTransOffset = 9;

                    ;% FCEvReferenceApplication_DW.RateTransition2_semaphoreTake_p
                    section.data(11).logicalSrcIdx = 63;
                    section.data(11).dtTransOffset = 10;

                    ;% FCEvReferenceApplication_DW.RateTransition5_semaphoreTake_i
                    section.data(12).logicalSrcIdx = 64;
                    section.data(12).dtTransOffset = 11;

                    ;% FCEvReferenceApplication_DW.RateTransition6_semaphoreTake_e
                    section.data(13).logicalSrcIdx = 65;
                    section.data(13).dtTransOffset = 12;

                    ;% FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_e
                    section.data(14).logicalSrcIdx = 66;
                    section.data(14).dtTransOffset = 13;

                    ;% FCEvReferenceApplication_DW.RateTransition7_semaphoreTake_h
                    section.data(15).logicalSrcIdx = 67;
                    section.data(15).dtTransOffset = 14;

                    ;% FCEvReferenceApplication_DW.RateTransition3_semaphoreTake_g
                    section.data(16).logicalSrcIdx = 68;
                    section.data(16).dtTransOffset = 15;

                    ;% FCEvReferenceApplication_DW.Sqrt_DWORK1
                    section.data(17).logicalSrcIdx = 69;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.is_GearSelect
                    section.data(1).logicalSrcIdx = 70;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_DW.is_active_c6_autolibsharedcommo
                    section.data(2).logicalSrcIdx = 71;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.Compare_Mode
                    section.data(1).logicalSrcIdx = 72;
                    section.data(1).dtTransOffset = 0;

                    ;% FCEvReferenceApplication_DW.RelationalOperator_Mode
                    section.data(2).logicalSrcIdx = 73;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.Drivetrain_InstanceData
                    section.data(1).logicalSrcIdx = 74;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.ElectricPlant_InstanceData
                    section.data(1).logicalSrcIdx = 75;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.ElectricPlant_MASS_MATRIX_PR
                    section.data(1).logicalSrcIdx = 76;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.PowertrainControlModulePCM_Inst
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.PassThrough_b.PassThrough_MODE
                    section.data(1).logicalSrcIdx = 78;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% FCEvReferenceApplication_DW.PassThrough.PassThrough_MODE
                    section.data(1).logicalSrcIdx = 79;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 2287748902;
    targMap.checksum1 = 2603615125;
    targMap.checksum2 = 1712206550;
    targMap.checksum3 = 680897979;

