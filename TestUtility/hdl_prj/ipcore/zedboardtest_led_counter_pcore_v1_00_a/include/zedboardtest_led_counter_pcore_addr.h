/*
 * File Name:         hdl_prj\ipcore\zedboardtest_led_counter_pcore_v1_00_a\include\zedboardtest_led_counter_pcore_addr.h
 * Description:       C Header File
 * Created:           2015-02-12 16:24:52
*/

#ifndef ZEDBOARDTEST_LED_COUNTER_PCORE_H_
#define ZEDBOARDTEST_LED_COUNTER_PCORE_H_

#define  IPCore_Reset_zedboardtest_led_counter_pcore      0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_zedboardtest_led_counter_pcore     0x4  //enabled (by default) when bit 0 is 0x1
#define  in1_Data_zedboardtest_led_counter_pcore          0x100  //data register for port in1
#define  in2_Data_zedboardtest_led_counter_pcore          0x104  //data register for port in2
#define  read_back1_Data_zedboardtest_led_counter_pcore   0x110  //data register for port read_back1
#define  read_back2_Data_zedboardtest_led_counter_pcore   0x114  //data register for port read_back2
#define  read_back3_Data_zedboardtest_led_counter_pcore   0x118  //data register for port read_back3
#define  read_back4_Data_zedboardtest_led_counter_pcore   0x11C  //data register for port read_back4

#endif /* ZEDBOARDTEST_LED_COUNTER_PCORE_H_ */
