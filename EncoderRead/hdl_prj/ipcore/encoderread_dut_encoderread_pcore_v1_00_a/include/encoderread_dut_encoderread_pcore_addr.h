/*
 * File Name:         hdl_prj\ipcore\encoderread_dut_encoderread_pcore_v1_00_a\include\encoderread_dut_encoderread_pcore_addr.h
 * Description:       C Header File
 * Created:           2015-02-11 17:57:04
*/

#ifndef ENCODERREAD_DUT_ENCODERREAD_PCORE_H_
#define ENCODERREAD_DUT_ENCODERREAD_PCORE_H_

#define  IPCore_Reset_encoderread_dut_encoderread_pcore    0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_encoderread_dut_encoderread_pcore   0x4  //enabled (by default) when bit 0 is 0x1
#define  reset_Data_encoderread_dut_encoderread_pcore      0x100  //data register for port reset
#define  enable_Data_encoderread_dut_encoderread_pcore     0x104  //data register for port enable
#define  count_Data_encoderread_dut_encoderread_pcore      0x108  //data register for port count

#endif /* ENCODERREAD_DUT_ENCODERREAD_PCORE_H_ */
