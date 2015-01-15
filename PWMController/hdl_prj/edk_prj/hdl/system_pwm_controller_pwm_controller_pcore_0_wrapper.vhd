-------------------------------------------------------------------------------
-- system_pwm_controller_pwm_controller_pcore_0_wrapper.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

library pwm_controller_pwm_controller_pcore_v1_00_a;
use pwm_controller_pwm_controller_pcore_v1_00_a.all;

entity system_pwm_controller_pwm_controller_pcore_0_wrapper is
  port (
    IPCORE_CLK : in std_logic;
    IPCORE_RESETN : in std_logic;
    AXI_Lite_ACLK : in std_logic;
    AXI_Lite_ARESETN : in std_logic;
    AXI_Lite_AWADDR : in std_logic_vector(31 downto 0);
    AXI_Lite_AWVALID : in std_logic;
    AXI_Lite_AWREADY : out std_logic;
    AXI_Lite_WDATA : in std_logic_vector(31 downto 0);
    AXI_Lite_WSTRB : in std_logic_vector(3 downto 0);
    AXI_Lite_WVALID : in std_logic;
    AXI_Lite_WREADY : out std_logic;
    AXI_Lite_BRESP : out std_logic_vector(1 downto 0);
    AXI_Lite_BVALID : out std_logic;
    AXI_Lite_BREADY : in std_logic;
    AXI_Lite_ARADDR : in std_logic_vector(31 downto 0);
    AXI_Lite_ARVALID : in std_logic;
    AXI_Lite_ARREADY : out std_logic;
    AXI_Lite_RDATA : out std_logic_vector(31 downto 0);
    AXI_Lite_RRESP : out std_logic_vector(1 downto 0);
    AXI_Lite_RVALID : out std_logic;
    AXI_Lite_RREADY : in std_logic;
    PmodJA1 : out std_logic_vector(7 downto 0)
  );
end system_pwm_controller_pwm_controller_pcore_0_wrapper;

architecture STRUCTURE of system_pwm_controller_pwm_controller_pcore_0_wrapper is

  component pwm_controller_pwm_controller_pcore is
    port (
      IPCORE_CLK : in std_logic;
      IPCORE_RESETN : in std_logic;
      AXI_Lite_ACLK : in std_logic;
      AXI_Lite_ARESETN : in std_logic;
      AXI_Lite_AWADDR : in std_logic_vector(31 downto 0);
      AXI_Lite_AWVALID : in std_logic;
      AXI_Lite_AWREADY : out std_logic;
      AXI_Lite_WDATA : in std_logic_vector(31 downto 0);
      AXI_Lite_WSTRB : in std_logic_vector(3 downto 0);
      AXI_Lite_WVALID : in std_logic;
      AXI_Lite_WREADY : out std_logic;
      AXI_Lite_BRESP : out std_logic_vector(1 downto 0);
      AXI_Lite_BVALID : out std_logic;
      AXI_Lite_BREADY : in std_logic;
      AXI_Lite_ARADDR : in std_logic_vector(31 downto 0);
      AXI_Lite_ARVALID : in std_logic;
      AXI_Lite_ARREADY : out std_logic;
      AXI_Lite_RDATA : out std_logic_vector(31 downto 0);
      AXI_Lite_RRESP : out std_logic_vector(1 downto 0);
      AXI_Lite_RVALID : out std_logic;
      AXI_Lite_RREADY : in std_logic;
      PmodJA1 : out std_logic_vector(7 downto 0)
    );
  end component;

begin

  pwm_controller_pwm_controller_pcore_0 : pwm_controller_pwm_controller_pcore
    port map (
      IPCORE_CLK => IPCORE_CLK,
      IPCORE_RESETN => IPCORE_RESETN,
      AXI_Lite_ACLK => AXI_Lite_ACLK,
      AXI_Lite_ARESETN => AXI_Lite_ARESETN,
      AXI_Lite_AWADDR => AXI_Lite_AWADDR,
      AXI_Lite_AWVALID => AXI_Lite_AWVALID,
      AXI_Lite_AWREADY => AXI_Lite_AWREADY,
      AXI_Lite_WDATA => AXI_Lite_WDATA,
      AXI_Lite_WSTRB => AXI_Lite_WSTRB,
      AXI_Lite_WVALID => AXI_Lite_WVALID,
      AXI_Lite_WREADY => AXI_Lite_WREADY,
      AXI_Lite_BRESP => AXI_Lite_BRESP,
      AXI_Lite_BVALID => AXI_Lite_BVALID,
      AXI_Lite_BREADY => AXI_Lite_BREADY,
      AXI_Lite_ARADDR => AXI_Lite_ARADDR,
      AXI_Lite_ARVALID => AXI_Lite_ARVALID,
      AXI_Lite_ARREADY => AXI_Lite_ARREADY,
      AXI_Lite_RDATA => AXI_Lite_RDATA,
      AXI_Lite_RRESP => AXI_Lite_RRESP,
      AXI_Lite_RVALID => AXI_Lite_RVALID,
      AXI_Lite_RREADY => AXI_Lite_RREADY,
      PmodJA1 => PmodJA1
    );

end architecture STRUCTURE;

