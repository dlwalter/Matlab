/*
 * File Name:         hdl_prj\ipcore\PWM_controller_PWM_Controller_ipcore_v1_0\include\PWM_controller_PWM_Controller_ipcore_addr.h
 * Description:       C Header File
 * Created:           2015-01-15 17:48:42
*/

#ifndef PWM_CONTROLLER_PWM_CONTROLLER_IPCORE_H_
#define PWM_CONTROLLER_PWM_CONTROLLER_IPCORE_H_

#define  IPCore_Reset_PWM_controller_PWM_Controller_ipcore     0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_PWM_controller_PWM_Controller_ipcore    0x4  //enabled (by default) when bit 0 is 0x1
#define  enable_Data_PWM_controller_PWM_Controller_ipcore      0x100  //data register for port enable
#define  duty_Data_PWM_controller_PWM_Controller_ipcore        0x104  //data register for port duty
#define  direction_Data_PWM_controller_PWM_Controller_ipcore   0x108  //data register for port direction

#endif /* PWM_CONTROLLER_PWM_CONTROLLER_IPCORE_H_ */
