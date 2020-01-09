-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2018.2 (win64) Build 2258646 Thu Jun 14 20:03:12 MDT 2018
-- Date        : Tue Dec 31 08:59:08 2019
-- Host        : DESKTOP-CDN1SDU running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim -rename_top zusys_xlconstant_2_1 -prefix
--               zusys_xlconstant_2_1_ zusys_xlconstant_2_0_sim_netlist.vhdl
-- Design      : zusys_xlconstant_2_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xczu15eg-ffvc900-1-e
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity zusys_xlconstant_2_1 is
  port (
    dout : out STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of zusys_xlconstant_2_1 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of zusys_xlconstant_2_1 : entity is "zusys_xlconstant_2_0,xlconstant_v1_1_5_xlconstant,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of zusys_xlconstant_2_1 : entity is "yes";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of zusys_xlconstant_2_1 : entity is "xlconstant_v1_1_5_xlconstant,Vivado 2018.2";
end zusys_xlconstant_2_1;

architecture STRUCTURE of zusys_xlconstant_2_1 is
  signal \<const0>\ : STD_LOGIC;
begin
  dout(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
end STRUCTURE;