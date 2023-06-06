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
        ;% Auto data (bo1z0vnccp)
        ;%
            section.nData     = 72;
            section.data(72)  = dumData; %prealloc

                    ;% bo1z0vnccp.LongitudinalDriverModel_GearInit
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% bo1z0vnccp.SignalHold_IC
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% bo1z0vnccp.SignalHold_IC_k5etbcnmrh
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% bo1z0vnccp.LongitudinalDriverModel_Kpt
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% bo1z0vnccp.LongitudinalDriverModel_L
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% bo1z0vnccp.LongitudinalDriverModel_aR
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% bo1z0vnccp.LongitudinalDriverModel_bR
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% bo1z0vnccp.LongitudinalDriverModel_cR
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% bo1z0vnccp.LongitudinalDriverModel_g
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% bo1z0vnccp.LongitudinalDriverModel_m
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% bo1z0vnccp.LongitudinalDriverModel_tShift
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% bo1z0vnccp.LongitudinalDriverModel_tau
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% bo1z0vnccp.u1_UpperSat
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% bo1z0vnccp.u1_LowerSat
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% bo1z0vnccp.u0_UpperSat
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% bo1z0vnccp.u0_LowerSat
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% bo1z0vnccp.Constant_Value
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% bo1z0vnccp.Constant_Value_nhp3htkj21
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% bo1z0vnccp.Switch_Threshold
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% bo1z0vnccp.uDLookupTable_tableData
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% bo1z0vnccp.uDLookupTable_bp01Data
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 1389;

                    ;% bo1z0vnccp.MotorCouplingDynamics_A
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 2759;

                    ;% bo1z0vnccp.MotorCouplingDynamics_C
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 2760;

                    ;% bo1z0vnccp.FirstOrderHold_IniOut
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 2761;

                    ;% bo1z0vnccp.FirstOrderHold_ErrTol
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 2762;

                    ;% bo1z0vnccp.mstomph_Gain
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 2763;

                    ;% bo1z0vnccp.radstoRPM_Gain
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 2764;

                    ;% bo1z0vnccp.FirstOrderHold_IniOut_ign3oxg5f1
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 2765;

                    ;% bo1z0vnccp.FirstOrderHold_ErrTol_gdzadtrzfv
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 2766;

                    ;% bo1z0vnccp.FirstOrderHold1_IniOut
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 2767;

                    ;% bo1z0vnccp.FirstOrderHold1_ErrTol
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 2768;

                    ;% bo1z0vnccp.Integrator_IC
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 2769;

                    ;% bo1z0vnccp.mtomile_Gain
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 2770;

                    ;% bo1z0vnccp.Integrator1_IC
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 2771;

                    ;% bo1z0vnccp.m3toUSGal_Gain
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 2772;

                    ;% bo1z0vnccp.Saturation1_UpperSat
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 2773;

                    ;% bo1z0vnccp.Saturation1_LowerSat
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 2774;

                    ;% bo1z0vnccp.mto100Km_Gain
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 2775;

                    ;% bo1z0vnccp.Saturation_UpperSat
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 2776;

                    ;% bo1z0vnccp.Saturation_LowerSat
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 2777;

                    ;% bo1z0vnccp.m3toL_Gain
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 2778;

                    ;% bo1z0vnccp.Saturation_UpperSat_i5ock22ux5
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 2779;

                    ;% bo1z0vnccp.Saturation_LowerSat_lcopxrfjqs
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 2780;

                    ;% bo1z0vnccp.Gain_Gain
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 2781;

                    ;% bo1z0vnccp.kgstoGasgals_Gain
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 2782;

                    ;% bo1z0vnccp.m3pergal_Gain
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 2783;

                    ;% bo1z0vnccp.Integrator1_IC_ajivek24xs
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 2784;

                    ;% bo1z0vnccp.Saturation_UpperSat_ejlhkaxvm3
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 2785;

                    ;% bo1z0vnccp.Saturation_LowerSat_jq5vbx40o3
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 2786;

                    ;% bo1z0vnccp.Saturation_UpperSat_n5cfzewtp3
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 2787;

                    ;% bo1z0vnccp.Saturation_LowerSat_jdvecoiqp4
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 2788;

                    ;% bo1z0vnccp.Gain2_Gain
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 2789;

                    ;% bo1z0vnccp.Saturation_UpperSat_eqdlv1qluu
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 2790;

                    ;% bo1z0vnccp.Saturation_LowerSat_lo2mm43j55
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 2791;

                    ;% bo1z0vnccp.Gain1_Gain
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 2792;

                    ;% bo1z0vnccp.HitCrossing_Offset
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 2793;

                    ;% bo1z0vnccp.Integrator2_IC
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 2794;

                    ;% bo1z0vnccp.UnitDelay_InitialCondition
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 2795;

                    ;% bo1z0vnccp.pause_time_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 2797;

                    ;% bo1z0vnccp.Constant_Value_brbakq3rcg
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 2798;

                    ;% bo1z0vnccp.Gain_Gain_nhytib1535
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 2799;

                    ;% bo1z0vnccp.USEPAkwhUSgalequivalent_Value
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 2800;

                    ;% bo1z0vnccp.sperh_Value
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 2801;

                    ;% bo1z0vnccp.wtokw_Value
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 2802;

                    ;% bo1z0vnccp.repeat_Value
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 2803;

                    ;% bo1z0vnccp.tFinal_Value
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 2804;

                    ;% bo1z0vnccp.Constant2_Value
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 2805;

                    ;% bo1z0vnccp.Constant3_Value
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 2806;

                    ;% bo1z0vnccp.Constant_Value_mg0ii2c5jx
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 2807;

                    ;% bo1z0vnccp.Constant_Value_lfd1si2n0l
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 2808;

                    ;% bo1z0vnccp.Constant_Value_fb5mg350bv
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 2809;

                    ;% bo1z0vnccp.Constant1_Value
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 2810;

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
        ;% Auto data (arol2xwgeua)
        ;%
            section.nData     = 81;
            section.data(81)  = dumData; %prealloc

                    ;% arol2xwgeua.mdtyud1uco
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% arol2xwgeua.hs2db3gxe1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% arol2xwgeua.kyvnagqwsz
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% arol2xwgeua.nldptn0dqc
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% arol2xwgeua.gh4eu0hgdx
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% arol2xwgeua.k0miwqwhp4
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% arol2xwgeua.ccugnyas5r
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% arol2xwgeua.fyc3gwx23b
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% arol2xwgeua.jvpo5pxor4
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 9;

                    ;% arol2xwgeua.nivlwap1ku
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 11;

                    ;% arol2xwgeua.ovilnfqx3i
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 12;

                    ;% arol2xwgeua.k4zvb232bn
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 13;

                    ;% arol2xwgeua.nwobq5pehg
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 14;

                    ;% arol2xwgeua.grzfptpe55
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 15;

                    ;% arol2xwgeua.hzezmdv3lt
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 16;

                    ;% arol2xwgeua.aqtgj50qai
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 17;

                    ;% arol2xwgeua.evj5xoqrrj
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 18;

                    ;% arol2xwgeua.lfu0clsnxa
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 19;

                    ;% arol2xwgeua.hrpk2gwn22
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 20;

                    ;% arol2xwgeua.fvrzozslmz
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 21;

                    ;% arol2xwgeua.nlscj1wkoa
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 22;

                    ;% arol2xwgeua.f1gdql1qam
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 23;

                    ;% arol2xwgeua.jo21islmqg
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 24;

                    ;% arol2xwgeua.jb5z2dve1g
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 25;

                    ;% arol2xwgeua.okzca3psdg
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 26;

                    ;% arol2xwgeua.pngeld3eh4
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 27;

                    ;% arol2xwgeua.nclhnaqn33
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 28;

                    ;% arol2xwgeua.dex1ynigww
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 29;

                    ;% arol2xwgeua.eksslsa3nq
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 30;

                    ;% arol2xwgeua.c1yh21bbxg
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 31;

                    ;% arol2xwgeua.puf4jg5pqu
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 32;

                    ;% arol2xwgeua.jjtf4hxjvb
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 33;

                    ;% arol2xwgeua.pvr5co4ozs
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 34;

                    ;% arol2xwgeua.hnspac23rl
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 35;

                    ;% arol2xwgeua.ghz3myl3uq
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 36;

                    ;% arol2xwgeua.bg0r4hctuw
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 37;

                    ;% arol2xwgeua.ifdyy33fmz
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 38;

                    ;% arol2xwgeua.gmg1uuwodr
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 39;

                    ;% arol2xwgeua.imasaqk5dh
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 40;

                    ;% arol2xwgeua.pjcnv0yr3h
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 41;

                    ;% arol2xwgeua.amo2ayshmg
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 42;

                    ;% arol2xwgeua.mtqi5bjqaq
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 43;

                    ;% arol2xwgeua.ox3udpfx0s
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 44;

                    ;% arol2xwgeua.ggv2kf5x13
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 45;

                    ;% arol2xwgeua.ob5patswnz
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 46;

                    ;% arol2xwgeua.m2ujessiey
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 47;

                    ;% arol2xwgeua.dkmci12msj
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 48;

                    ;% arol2xwgeua.jdqevtvewp
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 49;

                    ;% arol2xwgeua.ntnlhbhu4n
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 51;

                    ;% arol2xwgeua.jrzv51i13d
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 52;

                    ;% arol2xwgeua.n1mdtuox5b
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 53;

                    ;% arol2xwgeua.ixmdmgwvrg
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 54;

                    ;% arol2xwgeua.pg4vu0woab
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 55;

                    ;% arol2xwgeua.cxt45itkxu
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 56;

                    ;% arol2xwgeua.akfb4dpcur
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 57;

                    ;% arol2xwgeua.c0jtinjrgp
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 58;

                    ;% arol2xwgeua.fi4crlath4
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 59;

                    ;% arol2xwgeua.byu4dnscl5
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 60;

                    ;% arol2xwgeua.dffnpnahry
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 61;

                    ;% arol2xwgeua.itnb0b3ert
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 62;

                    ;% arol2xwgeua.b5bw4cab53
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 63;

                    ;% arol2xwgeua.azqdsmx4o5
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 64;

                    ;% arol2xwgeua.gc4ky0bjec
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 65;

                    ;% arol2xwgeua.a5mvaifpwe
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 66;

                    ;% arol2xwgeua.aawice3zmc
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 67;

                    ;% arol2xwgeua.pwqsmmfyxm
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 68;

                    ;% arol2xwgeua.kfjumalmu5
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 69;

                    ;% arol2xwgeua.a1ifzjuqu2
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 70;

                    ;% arol2xwgeua.iewvvph2bn
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 71;

                    ;% arol2xwgeua.b0hrwclaey
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 72;

                    ;% arol2xwgeua.iioo4rwecj
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 73;

                    ;% arol2xwgeua.mbw0oe0xgq
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 74;

                    ;% arol2xwgeua.gnzc0nrj3w
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 75;

                    ;% arol2xwgeua.dfgfnvbjkq
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 76;

                    ;% arol2xwgeua.l0xwo0ycrz
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 77;

                    ;% arol2xwgeua.b2ehf0ulx5
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 78;

                    ;% arol2xwgeua.ee51mjy2aa
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 79;

                    ;% arol2xwgeua.lpbnodzorb
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 81;

                    ;% arol2xwgeua.jrtiyk3oiq
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 83;

                    ;% arol2xwgeua.caokwv1pyy
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 84;

                    ;% arol2xwgeua.dcnebbmssf
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 85;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% arol2xwgeua.pmarfk24je
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

                    ;% arol2xwgeua.l33ngyt2ph
                    section.data(2).logicalSrcIdx = 82;
                    section.data(2).dtTransOffset = 1;

                    ;% arol2xwgeua.drdlsysypy
                    section.data(3).logicalSrcIdx = 83;
                    section.data(3).dtTransOffset = 2;

                    ;% arol2xwgeua.mhizywt5g2
                    section.data(4).logicalSrcIdx = 84;
                    section.data(4).dtTransOffset = 3;

                    ;% arol2xwgeua.jupidj25f2
                    section.data(5).logicalSrcIdx = 85;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% arol2xwgeua.dxcv00k5uk.i1rtqrd21n
                    section.data(1).logicalSrcIdx = 86;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% arol2xwgeua.mfp3l0luimk.i1rtqrd21n
                    section.data(1).logicalSrcIdx = 87;
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
        nTotSects     = 16;
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
        ;% Auto data (lw0sy0o11jr)
        ;%
            section.nData     = 38;
            section.data(38)  = dumData; %prealloc

                    ;% lw0sy0o11jr.mumtw2t4fy
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% lw0sy0o11jr.kvonjsymh5
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% lw0sy0o11jr.dsvgzsahab
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% lw0sy0o11jr.iw5r3fihha
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% lw0sy0o11jr.am1tetzj4p
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% lw0sy0o11jr.lxkfwihbro
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% lw0sy0o11jr.cqehw34o0h
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% lw0sy0o11jr.hfmbz1d5vw
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 9;

                    ;% lw0sy0o11jr.cd2xpetkh4
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 10;

                    ;% lw0sy0o11jr.bo4hodedpa
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 11;

                    ;% lw0sy0o11jr.cm5tdkgoya
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 12;

                    ;% lw0sy0o11jr.bkuu3yyjsl
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 13;

                    ;% lw0sy0o11jr.nez5k4mt2q
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 14;

                    ;% lw0sy0o11jr.eyagulv3eu
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 15;

                    ;% lw0sy0o11jr.evm1loz2xr
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 16;

                    ;% lw0sy0o11jr.ahnghn4brt
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 17;

                    ;% lw0sy0o11jr.cl5g0rwk2e
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 18;

                    ;% lw0sy0o11jr.filyznw4an
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 19;

                    ;% lw0sy0o11jr.fmivgn3dll
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 20;

                    ;% lw0sy0o11jr.ab044e5fyd
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 21;

                    ;% lw0sy0o11jr.bus0ytb1zk
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 22;

                    ;% lw0sy0o11jr.mgx323pfpy
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 23;

                    ;% lw0sy0o11jr.lkzjqwrbzn
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 24;

                    ;% lw0sy0o11jr.naf5zf5ewa
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 25;

                    ;% lw0sy0o11jr.a2bqy2lbvf
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 26;

                    ;% lw0sy0o11jr.mhjabgx12v
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 27;

                    ;% lw0sy0o11jr.flieyulmtp
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 28;

                    ;% lw0sy0o11jr.mzpieghwj5
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 29;

                    ;% lw0sy0o11jr.itjxrblkjw
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 30;

                    ;% lw0sy0o11jr.kyu2utgbhq
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 31;

                    ;% lw0sy0o11jr.ayylq5cimi
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 32;

                    ;% lw0sy0o11jr.ghmgweglut
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 33;

                    ;% lw0sy0o11jr.gjzj5p0bc1
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 34;

                    ;% lw0sy0o11jr.pn5h0qud2t
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 35;

                    ;% lw0sy0o11jr.lddh2eciz1
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 36;

                    ;% lw0sy0o11jr.bsds3pyzel
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 37;

                    ;% lw0sy0o11jr.cuuxgkcmrh
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 38;

                    ;% lw0sy0o11jr.jx2b1t4erw
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% lw0sy0o11jr.jfjzwnxtuk.AQHandles
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% lw0sy0o11jr.ovlvx5kkbf.LoggedData
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 1;

                    ;% lw0sy0o11jr.i5lo0wqw00.LoggedData
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 9;

                    ;% lw0sy0o11jr.alsymnf2nf.AQHandles
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 10;

                    ;% lw0sy0o11jr.h4dlhxn3ru.AQHandles
                    section.data(5).logicalSrcIdx = 42;
                    section.data(5).dtTransOffset = 11;

                    ;% lw0sy0o11jr.jfjzwnxtukc.AQHandles
                    section.data(6).logicalSrcIdx = 43;
                    section.data(6).dtTransOffset = 12;

                    ;% lw0sy0o11jr.nyib12dh5l.AQHandles
                    section.data(7).logicalSrcIdx = 44;
                    section.data(7).dtTransOffset = 13;

                    ;% lw0sy0o11jr.epffddpn0z.AQHandles
                    section.data(8).logicalSrcIdx = 45;
                    section.data(8).dtTransOffset = 14;

                    ;% lw0sy0o11jr.alsymnf2nfl.AQHandles
                    section.data(9).logicalSrcIdx = 46;
                    section.data(9).dtTransOffset = 15;

                    ;% lw0sy0o11jr.h4dlhxn3rui.AQHandles
                    section.data(10).logicalSrcIdx = 47;
                    section.data(10).dtTransOffset = 16;

                    ;% lw0sy0o11jr.icos43ell0.LoggedData
                    section.data(11).logicalSrcIdx = 48;
                    section.data(11).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.ahou0vl2z3
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% lw0sy0o11jr.pjfrrptm45
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

                    ;% lw0sy0o11jr.nmxkq34d03
                    section.data(2).logicalSrcIdx = 51;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% lw0sy0o11jr.noc02rvf4u
                    section.data(1).logicalSrcIdx = 52;
                    section.data(1).dtTransOffset = 0;

                    ;% lw0sy0o11jr.id1a31qwaj
                    section.data(2).logicalSrcIdx = 53;
                    section.data(2).dtTransOffset = 1;

                    ;% lw0sy0o11jr.jskwu05yzr
                    section.data(3).logicalSrcIdx = 54;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% lw0sy0o11jr.agsuq5sl52
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

                    ;% lw0sy0o11jr.aqmbdilrtq
                    section.data(2).logicalSrcIdx = 56;
                    section.data(2).dtTransOffset = 1;

                    ;% lw0sy0o11jr.fondni20e2
                    section.data(3).logicalSrcIdx = 57;
                    section.data(3).dtTransOffset = 2;

                    ;% lw0sy0o11jr.kyjqeczcx2
                    section.data(4).logicalSrcIdx = 58;
                    section.data(4).dtTransOffset = 3;

                    ;% lw0sy0o11jr.axxnlh2wvc
                    section.data(5).logicalSrcIdx = 59;
                    section.data(5).dtTransOffset = 4;

                    ;% lw0sy0o11jr.p4tvqhnquk
                    section.data(6).logicalSrcIdx = 60;
                    section.data(6).dtTransOffset = 5;

                    ;% lw0sy0o11jr.gc5sh1wkwt
                    section.data(7).logicalSrcIdx = 61;
                    section.data(7).dtTransOffset = 6;

                    ;% lw0sy0o11jr.aq2j102lks
                    section.data(8).logicalSrcIdx = 62;
                    section.data(8).dtTransOffset = 7;

                    ;% lw0sy0o11jr.gzgin33ia0
                    section.data(9).logicalSrcIdx = 63;
                    section.data(9).dtTransOffset = 8;

                    ;% lw0sy0o11jr.pv4mryn5kw
                    section.data(10).logicalSrcIdx = 64;
                    section.data(10).dtTransOffset = 9;

                    ;% lw0sy0o11jr.bz2xjgs4w4
                    section.data(11).logicalSrcIdx = 65;
                    section.data(11).dtTransOffset = 10;

                    ;% lw0sy0o11jr.jawpdqhxq5
                    section.data(12).logicalSrcIdx = 66;
                    section.data(12).dtTransOffset = 11;

                    ;% lw0sy0o11jr.pvituonzi0
                    section.data(13).logicalSrcIdx = 67;
                    section.data(13).dtTransOffset = 12;

                    ;% lw0sy0o11jr.oztkmm3ipn
                    section.data(14).logicalSrcIdx = 68;
                    section.data(14).dtTransOffset = 13;

                    ;% lw0sy0o11jr.dl1wjiyyo5
                    section.data(15).logicalSrcIdx = 69;
                    section.data(15).dtTransOffset = 14;

                    ;% lw0sy0o11jr.fp52fvpgcn
                    section.data(16).logicalSrcIdx = 70;
                    section.data(16).dtTransOffset = 15;

                    ;% lw0sy0o11jr.mmgm2ezxm5
                    section.data(17).logicalSrcIdx = 71;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% lw0sy0o11jr.mbvoiiw20z
                    section.data(1).logicalSrcIdx = 72;
                    section.data(1).dtTransOffset = 0;

                    ;% lw0sy0o11jr.draduovrmv
                    section.data(2).logicalSrcIdx = 73;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% lw0sy0o11jr.lzrdwg5jtp
                    section.data(1).logicalSrcIdx = 74;
                    section.data(1).dtTransOffset = 0;

                    ;% lw0sy0o11jr.nx4k1o3c2b
                    section.data(2).logicalSrcIdx = 75;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.jkb4b3hcqy
                    section.data(1).logicalSrcIdx = 76;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.f2cw5vgug5
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.im32k3bxdo
                    section.data(1).logicalSrcIdx = 78;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.jfaeol5er3
                    section.data(1).logicalSrcIdx = 79;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.dxcv00k5uk.g1iyf3f52k
                    section.data(1).logicalSrcIdx = 80;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.dxcv00k5uk.flozbskedr
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.mfp3l0luimk.g1iyf3f52k
                    section.data(1).logicalSrcIdx = 82;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% lw0sy0o11jr.mfp3l0luimk.flozbskedr
                    section.data(1).logicalSrcIdx = 83;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
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


    targMap.checksum0 = 869903735;
    targMap.checksum1 = 1051471062;
    targMap.checksum2 = 1937168891;
    targMap.checksum3 = 3224586444;

