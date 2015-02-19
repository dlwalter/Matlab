  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
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
    ;% Auto data (BasicQuadrotorControl_interfa_P)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interfa_P.DATA_FORMAT
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interfa_P.READ_CMD
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interfa_P.SliderGain_gain
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interfa_P.SliderGain1_gain
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BasicQuadrotorControl_interfa_P.SliderGain2_gain
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BasicQuadrotorControl_interfa_P.SliderGain3_gain
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interfa_P.Constant_Value
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interfa_P.Constant1_Value
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interfa_P.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interfa_P.Constant2_Value
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BasicQuadrotorControl_interfa_P.Constant3_Value
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BasicQuadrotorControl_interfa_P.Constant4_Value
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 3;
	
	  ;% BasicQuadrotorControl_interfa_P.Constant5_Value
	  section.data(5).logicalSrcIdx = 12;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interfa_P.Constant_Value_a
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
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
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (BasicQuadrotorControl_interfa_B)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interfa_B.DataTypeConversion1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interfa_B.DataTypeConversion2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BasicQuadrotorControl_interfa_B.DataTypeConversion3
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
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
    nTotSects     = 5;
    sectIdxOffset = 1;
    
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
    ;% Auto data (BasicQuadrotorControl_interf_DW)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interf_DW.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_k
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_h
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_p
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_h2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_n
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_pv
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_c
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_m
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_ku
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interf_DW.FromWorkspace_PWORK.TimePtr
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interf_DW.Scope1_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_f
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_l
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 4;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_k
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 5;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_b
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 6;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_h
	  section.data(8).logicalSrcIdx = 17;
	  section.data(8).dtTransOffset = 7;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_f0
	  section.data(9).logicalSrcIdx = 18;
	  section.data(9).dtTransOffset = 8;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_g
	  section.data(10).logicalSrcIdx = 19;
	  section.data(10).dtTransOffset = 9;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_e
	  section.data(11).logicalSrcIdx = 20;
	  section.data(11).dtTransOffset = 10;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceWrite_PWORK_d
	  section.data(12).logicalSrcIdx = 21;
	  section.data(12).dtTransOffset = 11;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceRead_PWORK
	  section.data(13).logicalSrcIdx = 22;
	  section.data(13).dtTransOffset = 12;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceRead_PWORK_a
	  section.data(14).logicalSrcIdx = 23;
	  section.data(14).dtTransOffset = 13;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceRead_PWORK_f
	  section.data(15).logicalSrcIdx = 24;
	  section.data(15).dtTransOffset = 14;
	
	  ;% BasicQuadrotorControl_interf_DW.AXI4InterfaceRead_PWORK_k
	  section.data(16).logicalSrcIdx = 25;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interf_DW.FromWorkspace_IWORK.PrevIndex
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interf_DW.obj_nh
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_d
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_i
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BasicQuadrotorControl_interf_DW.obj_o
	  section.data(4).logicalSrcIdx = 30;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% BasicQuadrotorControl_interf_DW.objisempty
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_n
	  section.data(2).logicalSrcIdx = 32;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_h
	  section.data(3).logicalSrcIdx = 33;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_f
	  section.data(4).logicalSrcIdx = 34;
	  section.data(4).dtTransOffset = 3;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_m
	  section.data(5).logicalSrcIdx = 35;
	  section.data(5).dtTransOffset = 4;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_i
	  section.data(6).logicalSrcIdx = 36;
	  section.data(6).dtTransOffset = 5;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_c
	  section.data(7).logicalSrcIdx = 37;
	  section.data(7).dtTransOffset = 6;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_b
	  section.data(8).logicalSrcIdx = 38;
	  section.data(8).dtTransOffset = 7;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_o
	  section.data(9).logicalSrcIdx = 39;
	  section.data(9).dtTransOffset = 8;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_k
	  section.data(10).logicalSrcIdx = 40;
	  section.data(10).dtTransOffset = 9;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_fm
	  section.data(11).logicalSrcIdx = 41;
	  section.data(11).dtTransOffset = 10;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_ii
	  section.data(12).logicalSrcIdx = 42;
	  section.data(12).dtTransOffset = 11;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_j
	  section.data(13).logicalSrcIdx = 43;
	  section.data(13).dtTransOffset = 12;
	
	  ;% BasicQuadrotorControl_interf_DW.objisempty_h2
	  section.data(14).logicalSrcIdx = 44;
	  section.data(14).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
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


  targMap.checksum0 = 3106970222;
  targMap.checksum1 = 3573942916;
  targMap.checksum2 = 1466300935;
  targMap.checksum3 = 1483338184;

