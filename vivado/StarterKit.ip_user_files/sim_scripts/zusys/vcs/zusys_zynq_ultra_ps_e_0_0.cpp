// (c) Copyright 1995-2019 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.

#include "zusys_zynq_ultra_ps_e_0_0.h"

#include "zynq_ultra_ps_e_tlm.h"

#include <map>
#include <string>

zusys_zynq_ultra_ps_e_0_0::zusys_zynq_ultra_ps_e_0_0(const sc_module_name& nm) : sc_module(nm), mp_impl(NULL)
{
  // configure connectivity manager
  xsc::utils::xsc_sim_manager::addInstance("zusys_zynq_ultra_ps_e_0_0", this);

  // initialize module
  xsc::common::properties model_param_props;
  model_param_props._long_property_map["C_DP_USE_AUDIO"] = 1;
  model_param_props._long_property_map["C_DP_USE_VIDEO"] = 0;
  model_param_props._long_property_map["C_MAXIGP0_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_MAXIGP1_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_MAXIGP2_DATA_WIDTH"] = 32;
  model_param_props._long_property_map["C_SAXIGP0_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_SAXIGP1_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_SAXIGP2_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_SAXIGP3_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_SAXIGP4_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_SAXIGP5_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_SAXIGP6_DATA_WIDTH"] = 128;
  model_param_props._long_property_map["C_USE_DIFF_RW_CLK_GP0"] = 0;
  model_param_props._long_property_map["C_USE_DIFF_RW_CLK_GP1"] = 0;
  model_param_props._long_property_map["C_USE_DIFF_RW_CLK_GP2"] = 0;
  model_param_props._long_property_map["C_USE_DIFF_RW_CLK_GP3"] = 0;
  model_param_props._long_property_map["C_USE_DIFF_RW_CLK_GP4"] = 0;
  model_param_props._long_property_map["C_USE_DIFF_RW_CLK_GP5"] = 0;
  model_param_props._long_property_map["C_USE_DIFF_RW_CLK_GP6"] = 0;
  model_param_props._long_property_map["C_TRACE_PIPELINE_WIDTH"] = 8;
  model_param_props._long_property_map["C_EN_EMIO_TRACE"] = 0;
  model_param_props._long_property_map["C_TRACE_DATA_WIDTH"] = 32;
  model_param_props._long_property_map["C_USE_DEBUG_TEST"] = 0;
  model_param_props._long_property_map["C_SD0_INTERNAL_BUS_WIDTH"] = 8;
  model_param_props._long_property_map["C_SD1_INTERNAL_BUS_WIDTH"] = 4;
  model_param_props._long_property_map["C_NUM_F2P_0_INTR_INPUTS"] = 1;
  model_param_props._long_property_map["C_NUM_F2P_1_INTR_INPUTS"] = 1;
  model_param_props._long_property_map["C_EMIO_GPIO_WIDTH"] = 1;
  model_param_props._long_property_map["C_NUM_FABRIC_RESETS"] = 1;
  model_param_props._string_property_map["C_EN_FIFO_ENET0"] = "0";
  model_param_props._string_property_map["C_EN_FIFO_ENET1"] = "0";
  model_param_props._string_property_map["C_EN_FIFO_ENET2"] = "0";
  model_param_props._string_property_map["C_EN_FIFO_ENET3"] = "0";
  model_param_props._string_property_map["C_PL_CLK0_BUF"] = "TRUE";
  model_param_props._string_property_map["C_PL_CLK1_BUF"] = "TRUE";
  model_param_props._string_property_map["C_PL_CLK2_BUF"] = "FALSE";
  model_param_props._string_property_map["C_PL_CLK3_BUF"] = "FALSE";
  mp_impl = new zynq_ultra_ps_e_tlm("inst", model_param_props);

  // initialize sockets
  M_AXI_HPM0_LPD_wr_socket = mp_impl->M_AXI_HPM0_LPD_wr_socket;
  M_AXI_HPM0_LPD_rd_socket = mp_impl->M_AXI_HPM0_LPD_rd_socket;
  S_AXIS_AUDIO_socket = mp_impl->S_AXIS_AUDIO_socket;
  M_AXIS_MIXED_AUDIO_socket = mp_impl->M_AXIS_MIXED_AUDIO_socket;

  // initialize pins
  mp_impl->maxihpm0_lpd_aclk(maxihpm0_lpd_aclk);
  mp_impl->emio_can0_phy_tx(emio_can0_phy_tx);
  mp_impl->emio_can0_phy_rx(emio_can0_phy_rx);
  mp_impl->emio_enet0_gmii_rx_clk(emio_enet0_gmii_rx_clk);
  mp_impl->emio_enet0_speed_mode(emio_enet0_speed_mode);
  mp_impl->emio_enet0_gmii_crs(emio_enet0_gmii_crs);
  mp_impl->emio_enet0_gmii_col(emio_enet0_gmii_col);
  mp_impl->emio_enet0_gmii_rxd(emio_enet0_gmii_rxd);
  mp_impl->emio_enet0_gmii_rx_er(emio_enet0_gmii_rx_er);
  mp_impl->emio_enet0_gmii_rx_dv(emio_enet0_gmii_rx_dv);
  mp_impl->emio_enet0_gmii_tx_clk(emio_enet0_gmii_tx_clk);
  mp_impl->emio_enet0_gmii_txd(emio_enet0_gmii_txd);
  mp_impl->emio_enet0_gmii_tx_en(emio_enet0_gmii_tx_en);
  mp_impl->emio_enet0_gmii_tx_er(emio_enet0_gmii_tx_er);
  mp_impl->emio_enet0_mdio_mdc(emio_enet0_mdio_mdc);
  mp_impl->emio_enet0_mdio_i(emio_enet0_mdio_i);
  mp_impl->emio_enet0_mdio_o(emio_enet0_mdio_o);
  mp_impl->emio_enet0_mdio_t(emio_enet0_mdio_t);
  mp_impl->emio_enet0_tsu_inc_ctrl(emio_enet0_tsu_inc_ctrl);
  mp_impl->emio_enet0_tsu_timer_cmp_val(emio_enet0_tsu_timer_cmp_val);
  mp_impl->emio_enet0_enet_tsu_timer_cnt(emio_enet0_enet_tsu_timer_cnt);
  mp_impl->emio_enet0_ext_int_in(emio_enet0_ext_int_in);
  mp_impl->emio_enet0_dma_bus_width(emio_enet0_dma_bus_width);
  mp_impl->dp_audio_ref_clk(dp_audio_ref_clk);
  mp_impl->dp_s_axis_audio_clk(dp_s_axis_audio_clk);
  mp_impl->dp_aux_data_in(dp_aux_data_in);
  mp_impl->dp_aux_data_out(dp_aux_data_out);
  mp_impl->dp_aux_data_oe_n(dp_aux_data_oe_n);
  mp_impl->dp_hot_plug_detect(dp_hot_plug_detect);
  mp_impl->pl_resetn0(pl_resetn0);
  mp_impl->pl_clk0(pl_clk0);
  mp_impl->pl_clk1(pl_clk1);

  // initialize transactors
  mp_M_AXI_HPM0_LPD_transactor = NULL;
  mp_S_AXIS_AUDIO_transactor = NULL;
  mp_dp_s_axis_audio_tid_converter = NULL;
  mp_M_AXIS_MIXED_AUDIO_transactor = NULL;
  mp_dp_m_axis_mixed_audio_tid_converter = NULL;
}

void zusys_zynq_ultra_ps_e_0_0::before_end_of_elaboration()
{
  // configure 'M_AXI_HPM0_LPD' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zusys_zynq_ultra_ps_e_0_0", "M_AXI_HPM0_LPD_TLM_MODE") != 1)
  {
    xsc::common::properties M_AXI_HPM0_LPD_transactor_param_props;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["DATA_WIDTH"] = 32;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["FREQ_HZ"] = 99999990;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["ID_WIDTH"] = 16;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["ADDR_WIDTH"] = 40;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["AWUSER_WIDTH"] = 16;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["ARUSER_WIDTH"] = 16;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["WUSER_WIDTH"] = 0;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["RUSER_WIDTH"] = 0;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["BUSER_WIDTH"] = 0;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_BURST"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_LOCK"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_PROT"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_CACHE"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_QOS"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_REGION"] = 0;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_WSTRB"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_BRESP"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["HAS_RRESP"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["SUPPORTS_NARROW_BURST"] = 1;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["MAX_BURST_LENGTH"] = 256;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["NUM_READ_THREADS"] = 4;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["NUM_WRITE_THREADS"] = 4;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["RUSER_BITS_PER_BYTE"] = 0;
    M_AXI_HPM0_LPD_transactor_param_props._long_property_map["WUSER_BITS_PER_BYTE"] = 0;
    M_AXI_HPM0_LPD_transactor_param_props._float_property_map["PHASE"] = 0.000;
    M_AXI_HPM0_LPD_transactor_param_props._string_property_map["NUM_WRITE_OUTSTANDING"] = "8";
    M_AXI_HPM0_LPD_transactor_param_props._string_property_map["NUM_READ_OUTSTANDING"] = "8";
    M_AXI_HPM0_LPD_transactor_param_props._string_property_map["PROTOCOL"] = "AXI4";
    M_AXI_HPM0_LPD_transactor_param_props._string_property_map["READ_WRITE_MODE"] = "READ_WRITE";
    M_AXI_HPM0_LPD_transactor_param_props._string_property_map["CLK_DOMAIN"] = "zusys_zynq_ultra_ps_e_0_0_pl_clk0";
    mp_M_AXI_HPM0_LPD_transactor = new xtlm::xaximm_xtlm2pin_t<32,40,16,16,1,1,16,1>("M_AXI_HPM0_LPD_transactor", M_AXI_HPM0_LPD_transactor_param_props);
    mp_M_AXI_HPM0_LPD_transactor->ARADDR(maxigp2_araddr);
    mp_M_AXI_HPM0_LPD_transactor->ARBURST(maxigp2_arburst);
    mp_M_AXI_HPM0_LPD_transactor->ARCACHE(maxigp2_arcache);
    mp_M_AXI_HPM0_LPD_transactor->ARID(maxigp2_arid);
    mp_M_AXI_HPM0_LPD_transactor->ARLEN(maxigp2_arlen);
    mp_M_AXI_HPM0_LPD_transactor->ARLOCK(maxigp2_arlock);
    mp_M_AXI_HPM0_LPD_transactor->ARPROT(maxigp2_arprot);
    mp_M_AXI_HPM0_LPD_transactor->ARQOS(maxigp2_arqos);
    mp_M_AXI_HPM0_LPD_transactor->ARREADY(maxigp2_arready);
    mp_M_AXI_HPM0_LPD_transactor->ARSIZE(maxigp2_arsize);
    mp_M_AXI_HPM0_LPD_transactor->ARUSER(maxigp2_aruser);
    mp_M_AXI_HPM0_LPD_transactor->ARVALID(maxigp2_arvalid);
    mp_M_AXI_HPM0_LPD_transactor->AWADDR(maxigp2_awaddr);
    mp_M_AXI_HPM0_LPD_transactor->AWBURST(maxigp2_awburst);
    mp_M_AXI_HPM0_LPD_transactor->AWCACHE(maxigp2_awcache);
    mp_M_AXI_HPM0_LPD_transactor->AWID(maxigp2_awid);
    mp_M_AXI_HPM0_LPD_transactor->AWLEN(maxigp2_awlen);
    mp_M_AXI_HPM0_LPD_transactor->AWLOCK(maxigp2_awlock);
    mp_M_AXI_HPM0_LPD_transactor->AWPROT(maxigp2_awprot);
    mp_M_AXI_HPM0_LPD_transactor->AWQOS(maxigp2_awqos);
    mp_M_AXI_HPM0_LPD_transactor->AWREADY(maxigp2_awready);
    mp_M_AXI_HPM0_LPD_transactor->AWSIZE(maxigp2_awsize);
    mp_M_AXI_HPM0_LPD_transactor->AWUSER(maxigp2_awuser);
    mp_M_AXI_HPM0_LPD_transactor->AWVALID(maxigp2_awvalid);
    mp_M_AXI_HPM0_LPD_transactor->BID(maxigp2_bid);
    mp_M_AXI_HPM0_LPD_transactor->BREADY(maxigp2_bready);
    mp_M_AXI_HPM0_LPD_transactor->BRESP(maxigp2_bresp);
    mp_M_AXI_HPM0_LPD_transactor->BVALID(maxigp2_bvalid);
    mp_M_AXI_HPM0_LPD_transactor->RDATA(maxigp2_rdata);
    mp_M_AXI_HPM0_LPD_transactor->RID(maxigp2_rid);
    mp_M_AXI_HPM0_LPD_transactor->RLAST(maxigp2_rlast);
    mp_M_AXI_HPM0_LPD_transactor->RREADY(maxigp2_rready);
    mp_M_AXI_HPM0_LPD_transactor->RRESP(maxigp2_rresp);
    mp_M_AXI_HPM0_LPD_transactor->RVALID(maxigp2_rvalid);
    mp_M_AXI_HPM0_LPD_transactor->WDATA(maxigp2_wdata);
    mp_M_AXI_HPM0_LPD_transactor->WLAST(maxigp2_wlast);
    mp_M_AXI_HPM0_LPD_transactor->WREADY(maxigp2_wready);
    mp_M_AXI_HPM0_LPD_transactor->WSTRB(maxigp2_wstrb);
    mp_M_AXI_HPM0_LPD_transactor->WVALID(maxigp2_wvalid);
    mp_M_AXI_HPM0_LPD_transactor->CLK(maxihpm0_lpd_aclk);
    m_M_AXI_HPM0_LPD_transactor_rst_signal.write(1);
    mp_M_AXI_HPM0_LPD_transactor->RST(m_M_AXI_HPM0_LPD_transactor_rst_signal);

    mp_impl->M_AXI_HPM0_LPD_wr_socket->bind(*(mp_M_AXI_HPM0_LPD_transactor->wr_socket));
    mp_impl->M_AXI_HPM0_LPD_rd_socket->bind(*(mp_M_AXI_HPM0_LPD_transactor->rd_socket));
  }
  // configure 'S_AXIS_AUDIO' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zusys_zynq_ultra_ps_e_0_0", "S_AXIS_AUDIO_TLM_MODE") != 1)
  {
    xsc::common::properties S_AXIS_AUDIO_transactor_param_props;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["TDATA_NUM_BYTES"] = 4;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["TDEST_WIDTH"] = 0;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["TID_WIDTH"] = 1;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["TUSER_WIDTH"] = 0;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["HAS_TREADY"] = 1;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["HAS_TSTRB"] = 0;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["HAS_TKEEP"] = 0;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["HAS_TLAST"] = 0;
    S_AXIS_AUDIO_transactor_param_props._long_property_map["FREQ_HZ"] = 25000000;
    S_AXIS_AUDIO_transactor_param_props._float_property_map["PHASE"] = 0.000;
    S_AXIS_AUDIO_transactor_param_props._string_property_map["CLK_DOMAIN"] = "zusys_zynq_ultra_ps_e_0_0_dp_audio_ref_clk";
    S_AXIS_AUDIO_transactor_param_props._string_property_map["LAYERED_METADATA"] = "undef";
    mp_S_AXIS_AUDIO_transactor = new xtlm::xaxis_pin2xtlm_t<4,1,1,1>("S_AXIS_AUDIO_transactor", S_AXIS_AUDIO_transactor_param_props);
    mp_S_AXIS_AUDIO_transactor->TDATA(dp_s_axis_audio_tdata);
    mp_dp_s_axis_audio_tid_converter = new xsc::common::scalar2vector_converter("dp_s_axis_audio_tid_converter");
    mp_S_AXIS_AUDIO_transactor->TID(m_dp_s_axis_audio_tid_converter_signal);
    (*mp_dp_s_axis_audio_tid_converter)(dp_s_axis_audio_tid, m_dp_s_axis_audio_tid_converter_signal);
    mp_S_AXIS_AUDIO_transactor->TREADY(dp_s_axis_audio_tready);
    mp_S_AXIS_AUDIO_transactor->TVALID(dp_s_axis_audio_tvalid);
    mp_S_AXIS_AUDIO_transactor->CLK(dp_s_axis_audio_clk);
    m_S_AXIS_AUDIO_transactor_rst_signal.write(1);
    mp_S_AXIS_AUDIO_transactor->RST(m_S_AXIS_AUDIO_transactor_rst_signal);

    mp_impl->S_AXIS_AUDIO_socket->bind(*(mp_S_AXIS_AUDIO_transactor->socket));
  }
  // configure 'M_AXIS_MIXED_AUDIO' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("zusys_zynq_ultra_ps_e_0_0", "M_AXIS_MIXED_AUDIO_TLM_MODE") != 1)
  {
    xsc::common::properties M_AXIS_MIXED_AUDIO_transactor_param_props;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["TDATA_NUM_BYTES"] = 4;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["TDEST_WIDTH"] = 0;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["TID_WIDTH"] = 1;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["TUSER_WIDTH"] = 0;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["HAS_TREADY"] = 1;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["HAS_TSTRB"] = 0;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["HAS_TKEEP"] = 0;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["HAS_TLAST"] = 0;
    M_AXIS_MIXED_AUDIO_transactor_param_props._long_property_map["FREQ_HZ"] = 25000000;
    M_AXIS_MIXED_AUDIO_transactor_param_props._float_property_map["PHASE"] = 0.000;
    M_AXIS_MIXED_AUDIO_transactor_param_props._string_property_map["CLK_DOMAIN"] = "zusys_zynq_ultra_ps_e_0_0_dp_audio_ref_clk";
    M_AXIS_MIXED_AUDIO_transactor_param_props._string_property_map["LAYERED_METADATA"] = "undef";
    mp_M_AXIS_MIXED_AUDIO_transactor = new xtlm::xaxis_xtlm2pin_t<4,1,1,1>("M_AXIS_MIXED_AUDIO_transactor", M_AXIS_MIXED_AUDIO_transactor_param_props);
    mp_M_AXIS_MIXED_AUDIO_transactor->TDATA(dp_m_axis_mixed_audio_tdata);
    mp_dp_m_axis_mixed_audio_tid_converter = new xsc::common::vector2scalar_converter("dp_m_axis_mixed_audio_tid_converter");
    mp_M_AXIS_MIXED_AUDIO_transactor->TID(m_dp_m_axis_mixed_audio_tid_converter_signal);
    (*mp_dp_m_axis_mixed_audio_tid_converter)(m_dp_m_axis_mixed_audio_tid_converter_signal, dp_m_axis_mixed_audio_tid);
    mp_M_AXIS_MIXED_AUDIO_transactor->TREADY(dp_m_axis_mixed_audio_tready);
    mp_M_AXIS_MIXED_AUDIO_transactor->TVALID(dp_m_axis_mixed_audio_tvalid);
    mp_M_AXIS_MIXED_AUDIO_transactor->CLK(dp_audio_ref_clk);
    m_M_AXIS_MIXED_AUDIO_transactor_rst_signal.write(1);
    mp_M_AXIS_MIXED_AUDIO_transactor->RST(m_M_AXIS_MIXED_AUDIO_transactor_rst_signal);

    mp_impl->M_AXIS_MIXED_AUDIO_socket->bind(*(mp_M_AXIS_MIXED_AUDIO_transactor->socket));
  }
}

zusys_zynq_ultra_ps_e_0_0::~zusys_zynq_ultra_ps_e_0_0()
{
  xsc::utils::xsc_sim_manager::clean();

  delete mp_impl;
  delete mp_M_AXI_HPM0_LPD_transactor;
  delete mp_S_AXIS_AUDIO_transactor;
  delete mp_dp_s_axis_audio_tid_converter;
  delete mp_M_AXIS_MIXED_AUDIO_transactor;
  delete mp_dp_m_axis_mixed_audio_tid_converter;
}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(zusys_zynq_ultra_ps_e_0_0);
#endif
