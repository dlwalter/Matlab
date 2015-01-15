/*
 * File Name:         hdl_prj\ipcore\pwm_controller_pwm_controller_pcore_v1_00_a\include\pwm_controller_pwm_controller_pcore_addr.h
 * Description:       C Header File
 * Created:           2014-10-15 17:50:19
*/

#ifndef PWM_CONTROLLER_PWM_CONTROLLER_PCORE_H_
#define PWM_CONTROLLER_PWM_CONTROLLER_PCORE_H_

#define  IPCore_Reset_pwm_controller_pwm_controller_pcore     0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_pwm_controller_pwm_controller_pcore    0x4  //enabled (by default) when bit 0 is 0x1
#define  enable_Data_pwm_controller_pwm_controller_pcore      0x100  //data register for port enable
#define  duty_Data_pwm_controller_pwm_controller_pcore        0x104  //data register for port duty
#define  direction_Data_pwm_controller_pwm_controller_pcore   0x108  //data register for port direction

#endif /* PWM_CONTROLLER_PWM_CONTROLLER_PCORE_H_ */
