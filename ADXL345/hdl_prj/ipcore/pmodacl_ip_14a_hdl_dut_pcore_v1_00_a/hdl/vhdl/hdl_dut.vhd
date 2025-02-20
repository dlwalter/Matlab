-- -------------------------------------------------------------
-- 
-- File Name: hdl_prj\hdlsrc\PmodACL_IP_14a\hdl_dut.vhd
-- Created: 2015-02-17 15:23:11
-- 
-- Generated by MATLAB 8.4 and HDL Coder 3.5
-- 
-- 
-- -------------------------------------------------------------
-- Rate and Clocking Details
-- -------------------------------------------------------------
-- Model base rate: 1
-- Target subsystem base rate: 1
-- 
-- 
-- Clock Enable  Sample Time
-- -------------------------------------------------------------
-- ce_out        1
-- -------------------------------------------------------------
-- 
-- 
-- Output Signal                 Clock Enable  Sample Time
-- -------------------------------------------------------------
-- X                             ce_out        1
-- Y                             ce_out        1
-- Z                             ce_out        1
-- XYZ_Valid                     ce_out        1
-- CS                            ce_out        1
-- SCLK                          ce_out        1
-- SDI                           ce_out        1
-- -------------------------------------------------------------
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: hdl_dut
-- Source Path: PmodACL_IP_14a/hdl_dut
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY hdl_dut IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        clk_enable                        :   IN    std_logic;
        CMD                               :   IN    std_logic_vector(15 DOWNTO 0);  -- uint16
        CMD_VLD                           :   IN    std_logic;
        SDO                               :   IN    std_logic;
        ce_out                            :   OUT   std_logic;
        X                                 :   OUT   std_logic_vector(15 DOWNTO 0);  -- uint16
        Y                                 :   OUT   std_logic_vector(15 DOWNTO 0);  -- uint16
        Z                                 :   OUT   std_logic_vector(15 DOWNTO 0);  -- uint16
        XYZ_Valid                         :   OUT   std_logic;
        CS                                :   OUT   std_logic;
        SCLK                              :   OUT   std_logic;
        SDI                               :   OUT   std_logic
        );
END hdl_dut;


ARCHITECTURE rtl OF hdl_dut IS

  -- Component Declarations
  COMPONENT Read_X_Y_Z
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          read_x_y_z_en                   :   IN    std_logic;
          CSn                             :   OUT   std_logic;
          SCK                             :   OUT   std_logic;
          SDI                             :   OUT   std_logic;
          READ_SHIFT                      :   OUT   std_logic;
          XYZ_Valid                       :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT XYZ_shiftRegister
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          CS                              :   IN    std_logic;
          SCLK                            :   IN    std_logic;
          SDO                             :   IN    std_logic;
          READ_SHIFT                      :   IN    std_logic;
          X                               :   OUT   std_logic_vector(15 DOWNTO 0);  -- uint16
          Y                               :   OUT   std_logic_vector(15 DOWNTO 0);  -- uint16
          Z                               :   OUT   std_logic_vector(15 DOWNTO 0)  -- uint16
          );
  END COMPONENT;

  COMPONENT Write
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          cmd                             :   IN    std_logic_vector(13 DOWNTO 0);  -- ufix14
          CMD_VLD                         :   IN    std_logic;
          CSn_CONV                        :   OUT   std_logic;
          SCK                             :   OUT   std_logic;
          SDI                             :   OUT   std_logic
          );
  END COMPONENT;

  COMPONENT Control_Signals
    PORT( clk                             :   IN    std_logic;
          reset                           :   IN    std_logic;
          enb                             :   IN    std_logic;
          WCS                             :   IN    std_logic;
          WSCLK                           :   IN    std_logic;
          WEN                             :   IN    std_logic;
          WSDI                            :   IN    std_logic;
          RCS                             :   IN    std_logic;
          RSCLK                           :   IN    std_logic;
          REN                             :   IN    std_logic;
          RSDI                            :   IN    std_logic;
          CS                              :   OUT   std_logic;
          SCLK                            :   OUT   std_logic;
          SDI                             :   OUT   std_logic
          );
  END COMPONENT;

  -- Component Configuration Statements
  FOR ALL : Read_X_Y_Z
    USE ENTITY work.Read_X_Y_Z(rtl);

  FOR ALL : XYZ_shiftRegister
    USE ENTITY work.XYZ_shiftRegister(rtl);

  FOR ALL : Write
    USE ENTITY work.Write(rtl);

  FOR ALL : Control_Signals
    USE ENTITY work.Control_Signals(rtl);

  -- Signals
  SIGNAL enb                              : std_logic;
  SIGNAL CMD_unsigned                     : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Bit_Slice_out1                   : std_logic;  -- ufix1
  SIGNAL Logical_Operator1_out1           : std_logic;
  SIGNAL CSn                              : std_logic;
  SIGNAL SCK                              : std_logic;
  SIGNAL SDI_1                            : std_logic;
  SIGNAL READ_SHIFT                       : std_logic;
  SIGNAL XYZ_Valid_1                      : std_logic;
  SIGNAL Delay7_out1                      : std_logic;
  SIGNAL y_1                              : std_logic_vector(15 DOWNTO 0);  -- ufix16
  SIGNAL y_2                              : std_logic_vector(15 DOWNTO 0);  -- ufix16
  SIGNAL y_3                              : std_logic_vector(15 DOWNTO 0);  -- ufix16
  SIGNAL y_unsigned                       : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Unit_Delay_Enabled1_out1         : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL y_unsigned_1                     : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Unit_Delay_Enabled2_out1         : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL y_unsigned_2                     : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL Unit_Delay_Enabled3_out1         : unsigned(15 DOWNTO 0);  -- uint16
  SIGNAL switch_compare_1                 : std_logic;
  SIGNAL Constant1_out1                   : std_logic;
  SIGNAL Constant_out1                    : std_logic;
  SIGNAL Switch_out1                      : std_logic;
  SIGNAL Bit_Slice1_out1                  : unsigned(13 DOWNTO 0);  -- ufix14
  SIGNAL Unit_Delay_Enabled_out1          : unsigned(13 DOWNTO 0);  -- ufix14
  SIGNAL Logical_Operator_out1            : std_logic;
  SIGNAL Logical_Operator2_out1           : std_logic;
  SIGNAL CSn_CONV                         : std_logic;
  SIGNAL SCK_1                            : std_logic;
  SIGNAL SDI_2                            : std_logic;
  SIGNAL Control_Signals_out1             : std_logic;
  SIGNAL Control_Signals_out2             : std_logic;
  SIGNAL Control_Signals_out3             : std_logic;
  SIGNAL Delay4_out1                      : std_logic;
  SIGNAL Delay5_out1                      : std_logic;
  SIGNAL Delay6_out1                      : std_logic;

BEGIN
  u_Read_X_Y_Z : Read_X_Y_Z
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              read_x_y_z_en => Logical_Operator1_out1,
              CSn => CSn,
              SCK => SCK,
              SDI => SDI_1,
              READ_SHIFT => READ_SHIFT,
              XYZ_Valid => XYZ_Valid_1
              );

  u_XYZ_shiftRegister : XYZ_shiftRegister
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              CS => CSn,
              SCLK => SCK,
              SDO => Delay7_out1,
              READ_SHIFT => READ_SHIFT,
              X => y_1,  -- uint16
              Y => y_2,  -- uint16
              Z => y_3  -- uint16
              );

  u_Write : Write
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              cmd => std_logic_vector(Unit_Delay_Enabled_out1),  -- ufix14
              CMD_VLD => Logical_Operator2_out1,
              CSn_CONV => CSn_CONV,
              SCK => SCK_1,
              SDI => SDI_2
              );

  u_Control_Signals : Control_Signals
    PORT MAP( clk => clk,
              reset => reset,
              enb => clk_enable,
              WCS => CSn_CONV,
              WSCLK => SCK_1,
              WEN => Logical_Operator2_out1,
              WSDI => SDI_2,
              RCS => CSn,
              RSCLK => SCK,
              REN => Logical_Operator1_out1,
              RSDI => SDI_1,
              CS => Control_Signals_out1,
              SCLK => Control_Signals_out2,
              SDI => Control_Signals_out3
              );

  CMD_unsigned <= unsigned(CMD);

  Bit_Slice_out1 <= CMD_unsigned(15);

  Logical_Operator1_out1 <= Bit_Slice_out1 AND CMD_VLD;

  enb <= clk_enable;

  Delay7_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Delay7_out1 <= '0';
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' THEN
        Delay7_out1 <= SDO;
      END IF;
    END IF;
  END PROCESS Delay7_process;

  y_unsigned <= unsigned(y_1);

  Unit_Delay_Enabled1_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Unit_Delay_Enabled1_out1 <= to_unsigned(16#0000#, 16);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' AND XYZ_Valid_1 = '1' THEN
        Unit_Delay_Enabled1_out1 <= y_unsigned;
      END IF;
    END IF;
  END PROCESS Unit_Delay_Enabled1_process;

  X <= std_logic_vector(Unit_Delay_Enabled1_out1);

  y_unsigned_1 <= unsigned(y_2);

  Unit_Delay_Enabled2_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Unit_Delay_Enabled2_out1 <= to_unsigned(16#0000#, 16);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' AND XYZ_Valid_1 = '1' THEN
        Unit_Delay_Enabled2_out1 <= y_unsigned_1;
      END IF;
    END IF;
  END PROCESS Unit_Delay_Enabled2_process;

  Y <= std_logic_vector(Unit_Delay_Enabled2_out1);

  y_unsigned_2 <= unsigned(y_3);

  Unit_Delay_Enabled3_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Unit_Delay_Enabled3_out1 <= to_unsigned(16#0000#, 16);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' AND XYZ_Valid_1 = '1' THEN
        Unit_Delay_Enabled3_out1 <= y_unsigned_2;
      END IF;
    END IF;
  END PROCESS Unit_Delay_Enabled3_process;

  Z <= std_logic_vector(Unit_Delay_Enabled3_out1);

  
  switch_compare_1 <= '1' WHEN Logical_Operator1_out1 > '0' ELSE
      '0';

  Constant1_out1 <= '0';

  Constant_out1 <= '1';

  
  Switch_out1 <= Constant1_out1 WHEN switch_compare_1 = '0' ELSE
      Constant_out1;

  Bit_Slice1_out1 <= CMD_unsigned(13 DOWNTO 0);

  Unit_Delay_Enabled_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Unit_Delay_Enabled_out1 <= to_unsigned(2#00000000000000#, 14);
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' AND CMD_VLD = '1' THEN
        Unit_Delay_Enabled_out1 <= Bit_Slice1_out1;
      END IF;
    END IF;
  END PROCESS Unit_Delay_Enabled_process;

  Logical_Operator_out1 <=  NOT Bit_Slice_out1;

  Logical_Operator2_out1 <= CMD_VLD AND Logical_Operator_out1;

  Delay4_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Delay4_out1 <= '0';
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' THEN
        Delay4_out1 <= Control_Signals_out1;
      END IF;
    END IF;
  END PROCESS Delay4_process;

  Delay5_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Delay5_out1 <= '0';
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' THEN
        Delay5_out1 <= Control_Signals_out2;
      END IF;
    END IF;
  END PROCESS Delay5_process;

  Delay6_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Delay6_out1 <= '0';
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' THEN
        Delay6_out1 <= Control_Signals_out3;
      END IF;
    END IF;
  END PROCESS Delay6_process;

  ce_out <= clk_enable;

  XYZ_Valid <= Switch_out1;

  CS <= Delay4_out1;

  SCLK <= Delay5_out1;

  SDI <= Delay6_out1;

END rtl;

