-- -------------------------------------------------------------
-- 
-- File Name: hdl_prj\hdlsrc\BasicQuadrotorControl\rising_edge_detect.vhd
-- Created: 2015-02-18 16:12:25
-- 
-- Generated by MATLAB 8.4 and HDL Coder 3.5
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: rising_edge_detect
-- Source Path: BasicQuadrotorControl/hdl_dut/ADXL345_read/XYZ_shiftRegister/rising_edge_detect
-- Hierarchy Level: 3
-- 
-- Simulink subsystem description for BasicQuadrotorControl/hdl_dut/ADXL345_read/XYZ_shiftRegister/rising_edge_detect:
-- 
-- This section detects the rising edge of the SCK input.
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY rising_edge_detect IS
  PORT( clk                               :   IN    std_logic;
        reset                             :   IN    std_logic;
        enb                               :   IN    std_logic;
        SCK                               :   IN    std_logic;
        SCK_RISING                        :   OUT   std_logic
        );
END rising_edge_detect;


ARCHITECTURE rtl OF rising_edge_detect IS

  -- Signals
  SIGNAL Logical_Operator1_out1           : std_logic;
  SIGNAL Unit_Delay1_out1                 : std_logic;
  SIGNAL sample_bit                       : std_logic;

BEGIN
  Logical_Operator1_out1 <=  NOT SCK;

  Unit_Delay1_process : PROCESS (clk, reset)
  BEGIN
    IF reset = '1' THEN
      Unit_Delay1_out1 <= '0';
    ELSIF clk'EVENT AND clk = '1' THEN
      IF enb = '1' THEN
        Unit_Delay1_out1 <= Logical_Operator1_out1;
      END IF;
    END IF;
  END PROCESS Unit_Delay1_process;

  sample_bit <= SCK AND Unit_Delay1_out1;

  SCK_RISING <= sample_bit;

END rtl;

