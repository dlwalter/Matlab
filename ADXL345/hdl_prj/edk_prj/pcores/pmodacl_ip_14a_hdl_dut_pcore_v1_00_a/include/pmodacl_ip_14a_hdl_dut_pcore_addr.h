/*
 * File Name:         hdl_prj\ipcore\pmodacl_ip_14a_hdl_dut_pcore_v1_00_a\include\pmodacl_ip_14a_hdl_dut_pcore_addr.h
 * Description:       C Header File
 * Created:           2015-02-17 15:23:15
*/

#ifndef PMODACL_IP_14A_HDL_DUT_PCORE_H_
#define PMODACL_IP_14A_HDL_DUT_PCORE_H_

#define  IPCore_Reset_pmodacl_ip_14a_hdl_dut_pcore     0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_pmodacl_ip_14a_hdl_dut_pcore    0x4  //enabled (by default) when bit 0 is 0x1
#define  CMD_Data_pmodacl_ip_14a_hdl_dut_pcore         0x100  //data register for port CMD
#define  CMD_VLD_Data_pmodacl_ip_14a_hdl_dut_pcore     0x104  //data register for port CMD_VLD
#define  X_Data_pmodacl_ip_14a_hdl_dut_pcore           0x108  //data register for port X
#define  Y_Data_pmodacl_ip_14a_hdl_dut_pcore           0x10C  //data register for port Y
#define  Z_Data_pmodacl_ip_14a_hdl_dut_pcore           0x110  //data register for port Z
#define  XYZ_Valid_Data_pmodacl_ip_14a_hdl_dut_pcore   0x114  //data register for port XYZ_Valid

#endif /* PMODACL_IP_14A_HDL_DUT_PCORE_H_ */
