
[
 Attempting to get a license: %s
78*common2"
Implementation2default:defaultZ17-78
Y
Failed to get a license: %s
295*common2"
Implementation2default:defaultZ17-301
–
πWARNING: No 'Implementation' license found. This message may be safely ignored if a Vivado WebPACK or device-locked license, common for board kits, will be used during implementation.

4*vivadoZ15-19
V
 Attempting to get a license: %s
78*common2
	Synthesis2default:defaultZ17-78
T
Failed to get a license: %s
295*common2
	Synthesis2default:defaultZ17-301
É
+Loading parts and site information from %s
36*device2?
+C:/Xilinx/Vivado/2013.4/data/parts/arch.xml2default:defaultZ21-36
ê
!Parsing RTL primitives file [%s]
14*netlist2U
AC:/Xilinx/Vivado/2013.4/data/parts/xilinx/rtl/prims/rtl_prims.xml2default:defaultZ29-14
ô
*Finished parsing RTL primitives file [%s]
11*netlist2U
AC:/Xilinx/Vivado/2013.4/data/parts/xilinx/rtl/prims/rtl_prims.xml2default:defaultZ29-11
5
Refreshing IP repositories
234*coregenZ19-234
ë
 Loaded user IP repository '%s'.
1135*coregen2S
?c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/ipcore2default:defaultZ19-1700
s
"Loaded Vivado IP repository '%s'.
1332*coregen23
C:/Xilinx/Vivado/2013.4/data/ip2default:defaultZ19-2313
Ç
3Changing the constrs_type of fileset '%s' to '%s'.
11*project2
	constrs_12default:default2
XDC2default:defaultZ1-11
v
Command: %s
53*	vivadotcl2N
:synth_design -top system_top_wrapper -part xc7z020clg484-12default:defaultZ4-113
/

Starting synthesis...

3*	vivadotclZ4-3
°
¢The '%s' target of the sub-design '%s' is stale, please manually generate the synthesis target first by executing the command: generate_target {%s} [get_files %s]106*	vivadotcl2
	Synthesis2default:default2

system_top2default:default2
	Synthesis2default:default2Ç
nC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/system_top.bd2default:defaultZ4-250
´
¢The '%s' target of the sub-design '%s' is stale, please manually generate the synthesis target first by executing the command: generate_target {%s} [get_files %s]106*	vivadotcl2"
Implementation2default:default2

system_top2default:default2"
Implementation2default:default2Ç
nC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/system_top.bd2default:defaultZ4-250
ï
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
	Synthesis2default:default2
xc7z0202default:defaultZ17-347
Ö
0Got license for feature '%s' and/or device '%s'
310*common2
	Synthesis2default:default2
xc7z0202default:defaultZ17-349
ú
%s*synth2å
xStarting RTL Elaboration : Time (s): cpu = 00:00:52 ; elapsed = 00:00:56 . Memory (MB): peak = 263.723 ; gain = 112.188
2default:default
â
synthesizing module '%s'638*oasys2&
system_top_wrapper2default:default2ë
{C:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top_wrapper.vhd2default:default2
302default:default8@Z8-638
ò
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2

system_top2default:default2á
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
5642default:default2 
system_top_i2default:default2

system_top2default:default2ë
{C:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top_wrapper.vhd2default:default2
582default:default8@Z8-3491
˙
synthesizing module '%s'638*oasys2

system_top2default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
5932default:default8@Z8-638
†
,binding component instance '%s' to cell '%s'113*oasys2
GND2default:default2
GND2default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
8122default:default8@Z8-113
ﬂ
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:default2Í
’c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/synth/system_top_PWM_controller_PWM_Controller_ipcore_0_0.vhd2default:default2
592default:default2:
&PWM_controller_PWM_Controller_ipcore_02default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
8162default:default8@Z8-3491
Ö
synthesizing module '%s'638*oasys2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:default2Ï
’c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/synth/system_top_PWM_controller_PWM_Controller_ipcore_0_0.vhd2default:default2
862default:default8@Z8-638
˘
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys28
$PWM_controller_PWM_Controller_ipcore2default:default2„
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd2default:default2
292default:default2
U02default:default28
$PWM_controller_PWM_Controller_ipcore2default:default2Ï
’c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/synth/system_top_PWM_controller_PWM_Controller_ipcore_0_0.vhd2default:default2
1432default:default8@Z8-3491
Ô
synthesizing module '%s'638*oasys28
$PWM_controller_PWM_Controller_ipcore2default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd2default:default2
562default:default8@Z8-638
ø
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2A
-PWM_controller_PWM_Controller_ipcore_axi_lite2default:default2Ï
◊c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd2default:default2
222default:default2H
4u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst2default:default2A
-PWM_controller_PWM_Controller_ipcore_axi_lite2default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd2default:default2
1272default:default8@Z8-3491
Å
synthesizing module '%s'638*oasys2A
-PWM_controller_PWM_Controller_ipcore_axi_lite2default:default2Ó
◊c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd2default:default2
522default:default8@Z8-638
ÿ
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2E
1PWM_controller_PWM_Controller_ipcore_addr_decoder2default:default2
€c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd2default:default2
222default:default2L
8u_PWM_controller_PWM_Controller_ipcore_addr_decoder_inst2default:default2E
1PWM_controller_PWM_Controller_ipcore_addr_decoder2default:default2Ó
◊c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd2default:default2
1222default:default8@Z8-3491
â
synthesizing module '%s'638*oasys2E
1PWM_controller_PWM_Controller_ipcore_addr_decoder2default:default2Ú
€c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd2default:default2
382default:default8@Z8-638
ƒ
%done synthesizing module '%s' (%s#%s)256*oasys2E
1PWM_controller_PWM_Controller_ipcore_addr_decoder2default:default2
12default:default2
12default:default2Ú
€c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd2default:default2
382default:default8@Z8-256
‰
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2H
4PWM_controller_PWM_Controller_ipcore_axi_lite_module2default:default2Û
ﬁc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd2default:default2
222default:default2O
;u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst2default:default2H
4PWM_controller_PWM_Controller_ipcore_axi_lite_module2default:default2Ó
◊c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd2default:default2
1362default:default8@Z8-3491
è
synthesizing module '%s'638*oasys2H
4PWM_controller_PWM_Controller_ipcore_axi_lite_module2default:default2ı
ﬁc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd2default:default2
522default:default8@Z8-638
 
%done synthesizing module '%s' (%s#%s)256*oasys2H
4PWM_controller_PWM_Controller_ipcore_axi_lite_module2default:default2
22default:default2
12default:default2ı
ﬁc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd2default:default2
522default:default8@Z8-256
º
%done synthesizing module '%s' (%s#%s)256*oasys2A
-PWM_controller_PWM_Controller_ipcore_axi_lite2default:default2
32default:default2
12default:default2Ó
◊c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd2default:default2
522default:default8@Z8-256
´
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2<
(PWM_controller_PWM_Controller_ipcore_dut2default:default2Á
“c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd2default:default2
222default:default2C
/u_PWM_controller_PWM_Controller_ipcore_dut_inst2default:default2<
(PWM_controller_PWM_Controller_ipcore_dut2default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd2default:default2
1552default:default8@Z8-3491
˜
synthesizing module '%s'638*oasys2<
(PWM_controller_PWM_Controller_ipcore_dut2default:default2È
“c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd2default:default2
362default:default8@Z8-638
¡
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2"
PWM_Controller2default:default2Õ
∏c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_Controller.vhd2default:default2
422default:default2$
u_PWM_Controller2default:default2"
PWM_Controller2default:default2È
“c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd2default:default2
652default:default8@Z8-3491
√
synthesizing module '%s'638*oasys2"
PWM_Controller2default:default2œ
∏c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_Controller.vhd2default:default2
562default:default8@Z8-638
≥
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2%
Calculate_f_coeff2default:default2–
ªc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/Calculate_f_coeff.vhd2default:default2
222default:default2'
u_Calculate_f_coeff2default:default2%
Calculate_f_coeff2default:default2œ
∏c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_Controller.vhd2default:default2
882default:default8@Z8-3491
…
synthesizing module '%s'638*oasys2%
Calculate_f_coeff2default:default2“
ªc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/Calculate_f_coeff.vhd2default:default2
292default:default8@Z8-638
Ñ
%done synthesizing module '%s' (%s#%s)256*oasys2%
Calculate_f_coeff2default:default2
42default:default2
12default:default2“
ªc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/Calculate_f_coeff.vhd2default:default2
292default:default8@Z8-256
É
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2
Chart2default:default2ƒ
Øc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/Chart.vhd2default:default2
232default:default2
u_Chart2default:default2
Chart2default:default2œ
∏c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_Controller.vhd2default:default2
932default:default8@Z8-3491
±
synthesizing module '%s'638*oasys2
Chart2default:default2∆
Øc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/Chart.vhd2default:default2
352default:default8@Z8-638
Ï
%done synthesizing module '%s' (%s#%s)256*oasys2
Chart2default:default2
52default:default2
12default:default2∆
Øc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/Chart.vhd2default:default2
352default:default8@Z8-256
˛
%done synthesizing module '%s' (%s#%s)256*oasys2"
PWM_Controller2default:default2
62default:default2
12default:default2œ
∏c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_Controller.vhd2default:default2
562default:default8@Z8-256
≤
%done synthesizing module '%s' (%s#%s)256*oasys2<
(PWM_controller_PWM_Controller_ipcore_dut2default:default2
72default:default2
12default:default2È
“c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd2default:default2
362default:default8@Z8-256
™
%done synthesizing module '%s' (%s#%s)256*oasys28
$PWM_controller_PWM_Controller_ipcore2default:default2
82default:default2
12default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/work/hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd2default:default2
562default:default8@Z8-256
¿
%done synthesizing module '%s' (%s#%s)256*oasys2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:default2
92default:default2
12default:default2Ï
’c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_PWM_controller_PWM_Controller_ipcore_0_0/synth/system_top_PWM_controller_PWM_Controller_ipcore_0_0.vhd2default:default2
862default:default8@Z8-256
†
,binding component instance '%s' to cell '%s'113*oasys2
VCC2default:default2
VCC2default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
8412default:default8@Z8-113
è
synthesizing module '%s'638*oasys23
system_top_axi_interconnect_0_02default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
3792default:default8@Z8-638
á
synthesizing module '%s'638*oasys2,
s00_couplers_imp_1FHMR112default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
672default:default8@Z8-638
¬
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2(
system_top_auto_pc_32default:default2™
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/synth/system_top_auto_pc_3.v2default:default2
572default:default2
auto_pc2default:default2(
system_top_auto_pc_32default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
2482default:default8@Z8-3491
¶
synthesizing module '%s'638*oasys2(
system_top_auto_pc_32default:default2¨
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/synth/system_top_auto_pc_3.v2default:default2
572default:default8@Z8-638
Ñ
synthesizing module '%s'638*oasys2F
2axi_protocol_converter_v2_1_axi_protocol_converter2default:default2Ï
’c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_axi_protocol_converter.v2default:default2
622default:default8@Z8-638
V
%s*synth2G
3	Parameter C_FAMILY bound to: zynq - type: string 
2default:default
\
%s*synth2M
9	Parameter C_M_AXI_PROTOCOL bound to: 2 - type: integer 
2default:default
\
%s*synth2M
9	Parameter C_S_AXI_PROTOCOL bound to: 1 - type: integer 
2default:default
W
%s*synth2H
4	Parameter C_IGNORE_ID bound to: 0 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AXI_ID_WIDTH bound to: 12 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_AXI_SUPPORTS_WRITE bound to: 1 - type: integer 
2default:default
_
%s*synth2P
<	Parameter C_AXI_SUPPORTS_READ bound to: 1 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_AXI_SUPPORTS_USER_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_AWUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_ARUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_WUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_RUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_BUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_TRANSLATION_MODE bound to: 2 - type: integer 
2default:default
R
%s*synth2C
/	Parameter P_AXI4 bound to: 0 - type: integer 
2default:default
R
%s*synth2C
/	Parameter P_AXI3 bound to: 1 - type: integer 
2default:default
U
%s*synth2F
2	Parameter P_AXILITE bound to: 2 - type: integer 
2default:default
O
%s*synth2@
,	Parameter P_AXILITE_SIZE bound to: 3'b010 
2default:default
F
%s*synth27
#	Parameter P_INCR bound to: 2'b01 
2default:default
H
%s*synth29
%	Parameter P_DECERR bound to: 2'b11 
2default:default
H
%s*synth29
%	Parameter P_SLVERR bound to: 2'b10 
2default:default
X
%s*synth2I
5	Parameter P_PROTECTION bound to: 1 - type: integer 
2default:default
X
%s*synth2I
5	Parameter P_CONVERSION bound to: 2 - type: integer 
2default:default
ﬁ
synthesizing module '%s'638*oasys23
axi_protocol_converter_v2_1_b2s2default:default2Ÿ
¬c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s.v2default:default2
392default:default8@Z8-638
\
%s*synth2M
9	Parameter C_S_AXI_PROTOCOL bound to: 1 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AXI_ID_WIDTH bound to: 12 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_AXI_SUPPORTS_WRITE bound to: 1 - type: integer 
2default:default
_
%s*synth2P
<	Parameter C_AXI_SUPPORTS_READ bound to: 1 - type: integer 
2default:default

synthesizing module '%s'638*oasys2>
*axi_register_slice_v2_1_axi_register_slice2default:default2‡
…c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axi_register_slice.v2default:default2
642default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Z
%s*synth2K
7	Parameter C_AXI_PROTOCOL bound to: 1 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AXI_ID_WIDTH bound to: 12 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_AXI_SUPPORTS_USER_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_AWUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_ARUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_WUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_RUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_BUSER_WIDTH bound to: 1 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_REG_CONFIG_AW bound to: 1 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_REG_CONFIG_W bound to: 0 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_REG_CONFIG_B bound to: 1 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_REG_CONFIG_AR bound to: 1 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_REG_CONFIG_R bound to: 1 - type: integer 
2default:default
i
%s*synth2Z
F	Parameter C_AXI_SUPPORTS_REGION_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWSIZE_WIDTH bound to: 3 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWBURST_INDEX bound to: 38 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWBURST_WIDTH bound to: 2 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWCACHE_INDEX bound to: 40 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWCACHE_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLEN_INDEX bound to: 44 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWLEN_WIDTH bound to: 4 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWLOCK_INDEX bound to: 48 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLOCK_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_INDEX bound to: 50 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWQOS_INDEX bound to: 62 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWQOS_WIDTH bound to: 4 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_AWREGION_INDEX bound to: 66 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWUSER_INDEX bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_AWPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARSIZE_WIDTH bound to: 3 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARBURST_INDEX bound to: 38 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARBURST_WIDTH bound to: 2 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARCACHE_INDEX bound to: 40 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARCACHE_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLEN_INDEX bound to: 44 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARLEN_WIDTH bound to: 4 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARLOCK_INDEX bound to: 48 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLOCK_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_INDEX bound to: 50 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARQOS_INDEX bound to: 62 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARQOS_WIDTH bound to: 4 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_ARREGION_INDEX bound to: 66 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARUSER_INDEX bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_ARPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WSTRB_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WSTRB_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WLAST_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WLAST_WIDTH bound to: 1 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_INDEX bound to: 37 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WUSER_INDEX bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_WPAYLOAD_WIDTH bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_INDEX bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_WIDTH bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_INDEX bound to: 2 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_BID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_BUSER_INDEX bound to: 14 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_BPAYLOAD_WIDTH bound to: 14 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RRESP_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RRESP_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RLAST_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RLAST_WIDTH bound to: 1 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RUSER_INDEX bound to: 47 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_RPAYLOAD_WIDTH bound to: 47 - type: integer 
2default:default
‡
synthesizing module '%s'638*oasys26
"axi_infrastructure_v1_1_axi2vector2default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_axi2vector.v2default:default2
602default:default8@Z8-638
Z
%s*synth2K
7	Parameter C_AXI_PROTOCOL bound to: 1 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AXI_ID_WIDTH bound to: 12 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_AXI_SUPPORTS_USER_SIGNALS bound to: 0 - type: integer 
2default:default
i
%s*synth2Z
F	Parameter C_AXI_SUPPORTS_REGION_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_AWUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_WUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_BUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_ARUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_RUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AWPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_WPAYLOAD_WIDTH bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_BPAYLOAD_WIDTH bound to: 14 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_ARPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_RPAYLOAD_WIDTH bound to: 47 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWSIZE_WIDTH bound to: 3 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWBURST_INDEX bound to: 38 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWBURST_WIDTH bound to: 2 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWCACHE_INDEX bound to: 40 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWCACHE_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLEN_INDEX bound to: 44 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWLEN_WIDTH bound to: 4 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWLOCK_INDEX bound to: 48 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLOCK_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_INDEX bound to: 50 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWQOS_INDEX bound to: 62 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWQOS_WIDTH bound to: 4 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_AWREGION_INDEX bound to: 66 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWUSER_INDEX bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_AWPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARSIZE_WIDTH bound to: 3 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARBURST_INDEX bound to: 38 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARBURST_WIDTH bound to: 2 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARCACHE_INDEX bound to: 40 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARCACHE_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLEN_INDEX bound to: 44 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARLEN_WIDTH bound to: 4 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARLOCK_INDEX bound to: 48 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLOCK_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_INDEX bound to: 50 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARQOS_INDEX bound to: 62 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARQOS_WIDTH bound to: 4 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_ARREGION_INDEX bound to: 66 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARUSER_INDEX bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_ARPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WSTRB_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WSTRB_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WLAST_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WLAST_WIDTH bound to: 1 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_INDEX bound to: 37 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WUSER_INDEX bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_WPAYLOAD_WIDTH bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_INDEX bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_WIDTH bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_INDEX bound to: 2 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_BID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_BUSER_INDEX bound to: 14 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_BPAYLOAD_WIDTH bound to: 14 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RRESP_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RRESP_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RLAST_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RLAST_WIDTH bound to: 1 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RUSER_INDEX bound to: 47 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_RPAYLOAD_WIDTH bound to: 47 - type: integer 
2default:default
ú
%done synthesizing module '%s' (%s#%s)256*oasys26
"axi_infrastructure_v1_1_axi2vector2default:default2
102default:default2
12default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_axi2vector.v2default:default2
602default:default8@Z8-256
Ú
synthesizing module '%s'638*oasys2?
+axi_register_slice_v2_1_axic_register_slice2default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 66 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 1 - type: integer 
2default:default
Æ
%done synthesizing module '%s' (%s#%s)256*oasys2?
+axi_register_slice_v2_1_axic_register_slice2default:default2
112default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256
Ç
synthesizing module '%s'638*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized02default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 49 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 0 - type: integer 
2default:default
æ
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized02default:default2
112default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256
Ç
synthesizing module '%s'638*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 14 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 1 - type: integer 
2default:default
æ
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized12default:default2
112default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256
Ç
synthesizing module '%s'638*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized22default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 47 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 1 - type: integer 
2default:default
æ
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized22default:default2
112default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256
‡
synthesizing module '%s'638*oasys26
"axi_infrastructure_v1_1_vector2axi2default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_vector2axi.v2default:default2
602default:default8@Z8-638
Z
%s*synth2K
7	Parameter C_AXI_PROTOCOL bound to: 1 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AXI_ID_WIDTH bound to: 12 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_AXI_SUPPORTS_USER_SIGNALS bound to: 0 - type: integer 
2default:default
i
%s*synth2Z
F	Parameter C_AXI_SUPPORTS_REGION_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_AWUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_WUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_BUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_ARUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_RUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AWPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_WPAYLOAD_WIDTH bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_BPAYLOAD_WIDTH bound to: 14 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_ARPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_RPAYLOAD_WIDTH bound to: 47 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWSIZE_WIDTH bound to: 3 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWBURST_INDEX bound to: 38 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWBURST_WIDTH bound to: 2 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWCACHE_INDEX bound to: 40 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWCACHE_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLEN_INDEX bound to: 44 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWLEN_WIDTH bound to: 4 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWLOCK_INDEX bound to: 48 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLOCK_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_INDEX bound to: 50 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWQOS_INDEX bound to: 62 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWQOS_WIDTH bound to: 4 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_AWREGION_INDEX bound to: 66 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWUSER_INDEX bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_AWPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARSIZE_WIDTH bound to: 3 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARBURST_INDEX bound to: 38 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARBURST_WIDTH bound to: 2 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARCACHE_INDEX bound to: 40 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARCACHE_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLEN_INDEX bound to: 44 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARLEN_WIDTH bound to: 4 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARLOCK_INDEX bound to: 48 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLOCK_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_INDEX bound to: 50 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARQOS_INDEX bound to: 62 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARQOS_WIDTH bound to: 4 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_ARREGION_INDEX bound to: 66 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARUSER_INDEX bound to: 66 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_ARPAYLOAD_WIDTH bound to: 66 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WSTRB_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WSTRB_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WLAST_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WLAST_WIDTH bound to: 1 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_INDEX bound to: 37 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WUSER_INDEX bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_WPAYLOAD_WIDTH bound to: 49 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_INDEX bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_WIDTH bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_INDEX bound to: 2 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_BID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_BUSER_INDEX bound to: 14 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_BPAYLOAD_WIDTH bound to: 14 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RRESP_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RRESP_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RLAST_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RLAST_WIDTH bound to: 1 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_WIDTH bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RUSER_INDEX bound to: 47 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_RPAYLOAD_WIDTH bound to: 47 - type: integer 
2default:default
ú
%done synthesizing module '%s' (%s#%s)256*oasys26
"axi_infrastructure_v1_1_vector2axi2default:default2
122default:default2
12default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_vector2axi.v2default:default2
602default:default8@Z8-256
¨
%done synthesizing module '%s' (%s#%s)256*oasys2>
*axi_register_slice_v2_1_axi_register_slice2default:default2
132default:default2
12default:default2‡
…c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axi_register_slice.v2default:default2
642default:default8@Z8-256
Û
synthesizing module '%s'638*oasys2>
*axi_protocol_converter_v2_1_b2s_aw_channel2default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_aw_channel.v2default:default2
52default:default8@Z8-638
W
%s*synth2H
4	Parameter C_ID_WIDTH bound to: 12 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
¸
synthesizing module '%s'638*oasys2B
.axi_protocol_converter_v2_1_b2s_cmd_translator2default:default2Ë
—c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_cmd_translator.v2default:default2
172default:default8@Z8-638
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
O
%s*synth2@
,	Parameter P_AXBURST_FIXED bound to: 2'b00 
2default:default
N
%s*synth2?
+	Parameter P_AXBURST_INCR bound to: 2'b01 
2default:default
N
%s*synth2?
+	Parameter P_AXBURST_WRAP bound to: 2'b10 
2default:default

synthesizing module '%s'638*oasys2<
(axi_protocol_converter_v2_1_b2s_incr_cmd2default:default2‚
Àc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_incr_cmd.v2default:default2
112default:default8@Z8-638
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter L_AXI_ADDR_LOW_BIT bound to: 12 - type: integer 
2default:default
¨
%done synthesizing module '%s' (%s#%s)256*oasys2<
(axi_protocol_converter_v2_1_b2s_incr_cmd2default:default2
142default:default2
12default:default2‚
Àc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_incr_cmd.v2default:default2
112default:default8@Z8-256

synthesizing module '%s'638*oasys2<
(axi_protocol_converter_v2_1_b2s_wrap_cmd2default:default2‚
Àc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_wrap_cmd.v2default:default2
112default:default8@Z8-638
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter L_AXI_ADDR_LOW_BIT bound to: 12 - type: integer 
2default:default
¨
%done synthesizing module '%s' (%s#%s)256*oasys2<
(axi_protocol_converter_v2_1_b2s_wrap_cmd2default:default2
152default:default2
12default:default2‚
Àc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_wrap_cmd.v2default:default2
112default:default8@Z8-256
∏
%done synthesizing module '%s' (%s#%s)256*oasys2B
.axi_protocol_converter_v2_1_b2s_cmd_translator2default:default2
162default:default2
12default:default2Ë
—c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_cmd_translator.v2default:default2
172default:default8@Z8-256
Ù
synthesizing module '%s'638*oasys2>
*axi_protocol_converter_v2_1_b2s_wr_cmd_fsm2default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_wr_cmd_fsm.v2default:default2
102default:default8@Z8-638
G
%s*synth28
$	Parameter SM_IDLE bound to: 2'b00 
2default:default
I
%s*synth2:
&	Parameter SM_CMD_EN bound to: 2'b01 
2default:default
O
%s*synth2@
,	Parameter SM_CMD_ACCEPTED bound to: 2'b10 
2default:default
L
%s*synth2=
)	Parameter SM_DONE_WAIT bound to: 2'b11 
2default:default
∑
default block is never used226*oasys2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_wr_cmd_fsm.v2default:default2
642default:default8@Z8-226
∞
%done synthesizing module '%s' (%s#%s)256*oasys2>
*axi_protocol_converter_v2_1_b2s_wr_cmd_fsm2default:default2
172default:default2
12default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_wr_cmd_fsm.v2default:default2
102default:default8@Z8-256
Ø
%done synthesizing module '%s' (%s#%s)256*oasys2>
*axi_protocol_converter_v2_1_b2s_aw_channel2default:default2
182default:default2
12default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_aw_channel.v2default:default2
52default:default8@Z8-256
Ú
synthesizing module '%s'638*oasys2=
)axi_protocol_converter_v2_1_b2s_b_channel2default:default2„
Ãc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_b_channel.v2default:default2
102default:default8@Z8-638
W
%s*synth2H
4	Parameter C_ID_WIDTH bound to: 12 - type: integer 
2default:default
L
%s*synth2=
)	Parameter LP_RESP_OKAY bound to: 2'b00 
2default:default
N
%s*synth2?
+	Parameter LP_RESP_EXOKAY bound to: 2'b01 
2default:default
P
%s*synth2A
-	Parameter LP_RESP_SLVERROR bound to: 2'b10 
2default:default
N
%s*synth2?
+	Parameter LP_RESP_DECERR bound to: 2'b11 
2default:default
T
%s*synth2E
1	Parameter P_WIDTH bound to: 20 - type: integer 
2default:default
S
%s*synth2D
0	Parameter P_DEPTH bound to: 4 - type: integer 
2default:default
T
%s*synth2E
1	Parameter P_AWIDTH bound to: 2 - type: integer 
2default:default
T
%s*synth2E
1	Parameter P_RWIDTH bound to: 2 - type: integer 
2default:default
T
%s*synth2E
1	Parameter P_RDEPTH bound to: 4 - type: integer 
2default:default
U
%s*synth2F
2	Parameter P_RAWIDTH bound to: 2 - type: integer 
2default:default
ı
synthesizing module '%s'638*oasys2?
+axi_protocol_converter_v2_1_b2s_simple_fifo2default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-638
T
%s*synth2E
1	Parameter C_WIDTH bound to: 20 - type: integer 
2default:default
T
%s*synth2E
1	Parameter C_AWIDTH bound to: 2 - type: integer 
2default:default
S
%s*synth2D
0	Parameter C_DEPTH bound to: 4 - type: integer 
2default:default
G
%s*synth28
$	Parameter C_EMPTY bound to: 2'b11 
2default:default
K
%s*synth2<
(	Parameter C_EMPTY_PRE bound to: 2'b00 
2default:default
F
%s*synth27
#	Parameter C_FULL bound to: 2'b10 
2default:default
J
%s*synth2;
'	Parameter C_FULL_PRE bound to: 2'b01 
2default:default
±
%done synthesizing module '%s' (%s#%s)256*oasys2?
+axi_protocol_converter_v2_1_b2s_simple_fifo2default:default2
192default:default2
12default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-256
Ö
synthesizing module '%s'638*oasys2O
;axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized02default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-638
S
%s*synth2D
0	Parameter C_WIDTH bound to: 2 - type: integer 
2default:default
T
%s*synth2E
1	Parameter C_AWIDTH bound to: 2 - type: integer 
2default:default
S
%s*synth2D
0	Parameter C_DEPTH bound to: 4 - type: integer 
2default:default
G
%s*synth28
$	Parameter C_EMPTY bound to: 2'b11 
2default:default
K
%s*synth2<
(	Parameter C_EMPTY_PRE bound to: 2'b00 
2default:default
F
%s*synth27
#	Parameter C_FULL bound to: 2'b10 
2default:default
J
%s*synth2;
'	Parameter C_FULL_PRE bound to: 2'b01 
2default:default
¡
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized02default:default2
192default:default2
12default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-256
Æ
%done synthesizing module '%s' (%s#%s)256*oasys2=
)axi_protocol_converter_v2_1_b2s_b_channel2default:default2
202default:default2
12default:default2„
Ãc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_b_channel.v2default:default2
102default:default8@Z8-256
Û
synthesizing module '%s'638*oasys2>
*axi_protocol_converter_v2_1_b2s_ar_channel2default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_ar_channel.v2default:default2
52default:default8@Z8-638
W
%s*synth2H
4	Parameter C_ID_WIDTH bound to: 12 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
Ù
synthesizing module '%s'638*oasys2>
*axi_protocol_converter_v2_1_b2s_rd_cmd_fsm2default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_rd_cmd_fsm.v2default:default2
102default:default8@Z8-638
G
%s*synth28
$	Parameter SM_IDLE bound to: 2'b00 
2default:default
I
%s*synth2:
&	Parameter SM_CMD_EN bound to: 2'b01 
2default:default
O
%s*synth2@
,	Parameter SM_CMD_ACCEPTED bound to: 2'b10 
2default:default
G
%s*synth28
$	Parameter SM_DONE bound to: 2'b11 
2default:default
∑
default block is never used226*oasys2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_rd_cmd_fsm.v2default:default2
722default:default8@Z8-226
∞
%done synthesizing module '%s' (%s#%s)256*oasys2>
*axi_protocol_converter_v2_1_b2s_rd_cmd_fsm2default:default2
212default:default2
12default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_rd_cmd_fsm.v2default:default2
102default:default8@Z8-256
Ø
%done synthesizing module '%s' (%s#%s)256*oasys2>
*axi_protocol_converter_v2_1_b2s_ar_channel2default:default2
222default:default2
12default:default2‰
Õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_ar_channel.v2default:default2
52default:default8@Z8-256
Ú
synthesizing module '%s'638*oasys2=
)axi_protocol_converter_v2_1_b2s_r_channel2default:default2„
Ãc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_r_channel.v2default:default2
212default:default8@Z8-638
W
%s*synth2H
4	Parameter C_ID_WIDTH bound to: 12 - type: integer 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 32 - type: integer 
2default:default
T
%s*synth2E
1	Parameter P_WIDTH bound to: 13 - type: integer 
2default:default
T
%s*synth2E
1	Parameter P_DEPTH bound to: 32 - type: integer 
2default:default
T
%s*synth2E
1	Parameter P_AWIDTH bound to: 5 - type: integer 
2default:default
V
%s*synth2G
3	Parameter P_D_WIDTH bound to: 34 - type: integer 
2default:default
V
%s*synth2G
3	Parameter P_D_DEPTH bound to: 32 - type: integer 
2default:default
V
%s*synth2G
3	Parameter P_D_AWIDTH bound to: 5 - type: integer 
2default:default
Ö
synthesizing module '%s'638*oasys2O
;axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized12default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-638
T
%s*synth2E
1	Parameter C_WIDTH bound to: 34 - type: integer 
2default:default
T
%s*synth2E
1	Parameter C_AWIDTH bound to: 5 - type: integer 
2default:default
T
%s*synth2E
1	Parameter C_DEPTH bound to: 32 - type: integer 
2default:default
J
%s*synth2;
'	Parameter C_EMPTY bound to: 5'b11111 
2default:default
N
%s*synth2?
+	Parameter C_EMPTY_PRE bound to: 5'b00000 
2default:default
I
%s*synth2:
&	Parameter C_FULL bound to: 5'b11110 
2default:default
M
%s*synth2>
*	Parameter C_FULL_PRE bound to: 5'b11010 
2default:default
¡
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized12default:default2
222default:default2
12default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-256
Ö
synthesizing module '%s'638*oasys2O
;axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized22default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-638
T
%s*synth2E
1	Parameter C_WIDTH bound to: 13 - type: integer 
2default:default
T
%s*synth2E
1	Parameter C_AWIDTH bound to: 5 - type: integer 
2default:default
T
%s*synth2E
1	Parameter C_DEPTH bound to: 32 - type: integer 
2default:default
J
%s*synth2;
'	Parameter C_EMPTY bound to: 5'b11111 
2default:default
N
%s*synth2?
+	Parameter C_EMPTY_PRE bound to: 5'b00000 
2default:default
I
%s*synth2:
&	Parameter C_FULL bound to: 5'b11110 
2default:default
M
%s*synth2>
*	Parameter C_FULL_PRE bound to: 5'b11010 
2default:default
¡
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized22default:default2
222default:default2
12default:default2Â
Œc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_simple_fifo.v2default:default2
92default:default8@Z8-256
Æ
%done synthesizing module '%s' (%s#%s)256*oasys2=
)axi_protocol_converter_v2_1_b2s_r_channel2default:default2
232default:default2
12default:default2„
Ãc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s_r_channel.v2default:default2
212default:default8@Z8-256
Ä
synthesizing module '%s'638*oasys2N
:axi_register_slice_v2_1_axi_register_slice__parameterized02default:default2‡
…c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axi_register_slice.v2default:default2
642default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Z
%s*synth2K
7	Parameter C_AXI_PROTOCOL bound to: 2 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_AXI_ID_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_AXI_SUPPORTS_USER_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_AWUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_ARUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_WUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_RUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_BUSER_WIDTH bound to: 1 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_REG_CONFIG_AW bound to: 0 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_REG_CONFIG_W bound to: 0 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_REG_CONFIG_B bound to: 0 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_REG_CONFIG_AR bound to: 0 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_REG_CONFIG_R bound to: 0 - type: integer 
2default:default
i
%s*synth2Z
F	Parameter C_AXI_SUPPORTS_REGION_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWSIZE_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWBURST_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWBURST_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWCACHE_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWCACHE_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLEN_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWLEN_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWLOCK_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLOCK_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_AWID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWQOS_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWQOS_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_AWREGION_INDEX bound to: 35 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWUSER_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_AWPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARSIZE_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARBURST_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARBURST_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARCACHE_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARCACHE_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLEN_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARLEN_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARLOCK_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLOCK_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_ARID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARQOS_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARQOS_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_ARREGION_INDEX bound to: 35 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARUSER_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_ARPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WSTRB_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WSTRB_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WLAST_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WLAST_WIDTH bound to: 0 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_INDEX bound to: 36 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_WID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WUSER_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_WPAYLOAD_WIDTH bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_INDEX bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_WIDTH bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_INDEX bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_INDEX bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_BPAYLOAD_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RRESP_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RRESP_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RLAST_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RLAST_WIDTH bound to: 0 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_INDEX bound to: 34 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_RID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RUSER_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_RPAYLOAD_WIDTH bound to: 34 - type: integer 
2default:default

synthesizing module '%s'638*oasys2F
2axi_infrastructure_v1_1_axi2vector__parameterized02default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_axi2vector.v2default:default2
602default:default8@Z8-638
Z
%s*synth2K
7	Parameter C_AXI_PROTOCOL bound to: 2 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_AXI_ID_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_AXI_SUPPORTS_USER_SIGNALS bound to: 0 - type: integer 
2default:default
i
%s*synth2Z
F	Parameter C_AXI_SUPPORTS_REGION_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_AWUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_WUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_BUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_ARUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_RUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AWPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_WPAYLOAD_WIDTH bound to: 36 - type: integer 
2default:default
\
%s*synth2M
9	Parameter C_BPAYLOAD_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_ARPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_RPAYLOAD_WIDTH bound to: 34 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWSIZE_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWBURST_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWBURST_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWCACHE_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWCACHE_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLEN_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWLEN_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWLOCK_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLOCK_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_AWID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWQOS_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWQOS_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_AWREGION_INDEX bound to: 35 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWUSER_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_AWPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARSIZE_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARBURST_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARBURST_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARCACHE_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARCACHE_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLEN_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARLEN_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARLOCK_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLOCK_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_ARID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARQOS_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARQOS_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_ARREGION_INDEX bound to: 35 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARUSER_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_ARPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WSTRB_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WSTRB_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WLAST_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WLAST_WIDTH bound to: 0 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_INDEX bound to: 36 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_WID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WUSER_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_WPAYLOAD_WIDTH bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_INDEX bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_WIDTH bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_INDEX bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_INDEX bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_BPAYLOAD_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RRESP_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RRESP_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RLAST_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RLAST_WIDTH bound to: 0 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_INDEX bound to: 34 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_RID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RUSER_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_RPAYLOAD_WIDTH bound to: 34 - type: integer 
2default:default
¨
%done synthesizing module '%s' (%s#%s)256*oasys2F
2axi_infrastructure_v1_1_axi2vector__parameterized02default:default2
232default:default2
12default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_axi2vector.v2default:default2
602default:default8@Z8-256
Ç
synthesizing module '%s'638*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized32default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 35 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 0 - type: integer 
2default:default
æ
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized32default:default2
232default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256
Ç
synthesizing module '%s'638*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized42default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 36 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 0 - type: integer 
2default:default
æ
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized42default:default2
232default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256
Ç
synthesizing module '%s'638*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized52default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
X
%s*synth2I
5	Parameter C_DATA_WIDTH bound to: 2 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 0 - type: integer 
2default:default
æ
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized52default:default2
232default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256
Ç
synthesizing module '%s'638*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized62default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-638
Y
%s*synth2J
6	Parameter C_FAMILY bound to: virtex6 - type: string 
2default:default
Y
%s*synth2J
6	Parameter C_DATA_WIDTH bound to: 34 - type: integer 
2default:default
X
%s*synth2I
5	Parameter C_REG_CONFIG bound to: 0 - type: integer 
2default:default
æ
%done synthesizing module '%s' (%s#%s)256*oasys2O
;axi_register_slice_v2_1_axic_register_slice__parameterized62default:default2
232default:default2
12default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
622default:default8@Z8-256

synthesizing module '%s'638*oasys2F
2axi_infrastructure_v1_1_vector2axi__parameterized02default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_vector2axi.v2default:default2
602default:default8@Z8-638
Z
%s*synth2K
7	Parameter C_AXI_PROTOCOL bound to: 2 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_AXI_ID_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_ADDR_WIDTH bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_DATA_WIDTH bound to: 32 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_AXI_SUPPORTS_USER_SIGNALS bound to: 0 - type: integer 
2default:default
i
%s*synth2Z
F	Parameter C_AXI_SUPPORTS_REGION_SIGNALS bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_AWUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_WUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_BUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AXI_ARUSER_WIDTH bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_AXI_RUSER_WIDTH bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_AWPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_WPAYLOAD_WIDTH bound to: 36 - type: integer 
2default:default
\
%s*synth2M
9	Parameter C_BPAYLOAD_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_ARPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_RPAYLOAD_WIDTH bound to: 34 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWSIZE_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWBURST_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWBURST_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWCACHE_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWCACHE_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLEN_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWLEN_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWLOCK_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWLOCK_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_AWID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWQOS_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_AWQOS_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_AWREGION_INDEX bound to: 35 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_AWREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_AWUSER_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_AWUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_AWPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARADDR_INDEX bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARADDR_WIDTH bound to: 32 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARPROT_INDEX bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARPROT_WIDTH bound to: 3 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARSIZE_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARSIZE_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARBURST_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARBURST_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARCACHE_INDEX bound to: 35 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARCACHE_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLEN_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARLEN_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARLOCK_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARLOCK_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARID_INDEX bound to: 35 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_ARID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARQOS_INDEX bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_ARQOS_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_ARREGION_INDEX bound to: 35 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_ARREGION_WIDTH bound to: 0 - type: integer 
2default:default
_
%s*synth2P
<	Parameter G_AXI_ARUSER_INDEX bound to: 35 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_ARUSER_WIDTH bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter G_AXI_ARPAYLOAD_WIDTH bound to: 35 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WSTRB_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WSTRB_WIDTH bound to: 4 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WLAST_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WLAST_WIDTH bound to: 0 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_WID_INDEX bound to: 36 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_WID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_WUSER_INDEX bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_WUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_WPAYLOAD_WIDTH bound to: 36 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_INDEX bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BRESP_WIDTH bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_INDEX bound to: 2 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_BID_WIDTH bound to: 0 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_INDEX bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_BUSER_WIDTH bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter G_AXI_BPAYLOAD_WIDTH bound to: 2 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RDATA_INDEX bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RDATA_WIDTH bound to: 32 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RRESP_INDEX bound to: 32 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RRESP_WIDTH bound to: 2 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RLAST_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RLAST_WIDTH bound to: 0 - type: integer 
2default:default
\
%s*synth2M
9	Parameter G_AXI_RID_INDEX bound to: 34 - type: integer 
2default:default
[
%s*synth2L
8	Parameter G_AXI_RID_WIDTH bound to: 0 - type: integer 
2default:default
^
%s*synth2O
;	Parameter G_AXI_RUSER_INDEX bound to: 34 - type: integer 
2default:default
]
%s*synth2N
:	Parameter G_AXI_RUSER_WIDTH bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter G_AXI_RPAYLOAD_WIDTH bound to: 34 - type: integer 
2default:default
¨
%done synthesizing module '%s' (%s#%s)256*oasys2F
2axi_infrastructure_v1_1_vector2axi__parameterized02default:default2
232default:default2
12default:default2ÿ
¡c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_infrastructure_v1_1/hdl/verilog/axi_infrastructure_v1_1_vector2axi.v2default:default2
602default:default8@Z8-256
º
%done synthesizing module '%s' (%s#%s)256*oasys2N
:axi_register_slice_v2_1_axi_register_slice__parameterized02default:default2
232default:default2
12default:default2‡
…c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axi_register_slice.v2default:default2
642default:default8@Z8-256
ö
%done synthesizing module '%s' (%s#%s)256*oasys23
axi_protocol_converter_v2_1_b2s2default:default2
242default:default2
12default:default2Ÿ
¬c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_b2s.v2default:default2
392default:default8@Z8-256
¿
%done synthesizing module '%s' (%s#%s)256*oasys2F
2axi_protocol_converter_v2_1_axi_protocol_converter2default:default2
252default:default2
12default:default2Ï
’c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_protocol_converter_v2_1/hdl/verilog/axi_protocol_converter_v2_1_axi_protocol_converter.v2default:default2
622default:default8@Z8-256
‚
%done synthesizing module '%s' (%s#%s)256*oasys2(
system_top_auto_pc_32default:default2
262default:default2
12default:default2¨
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/synth/system_top_auto_pc_3.v2default:default2
572default:default8@Z8-256
√
%done synthesizing module '%s' (%s#%s)256*oasys2,
s00_couplers_imp_1FHMR112default:default2
272default:default2
12default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
672default:default8@Z8-256
À
%done synthesizing module '%s' (%s#%s)256*oasys23
system_top_axi_interconnect_0_02default:default2
282default:default2
12default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
3792default:default8@Z8-256
»
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2*
system_top_clk_wiz_0_02default:default2™
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0.vhd2default:default2
742default:default2
	clk_wiz_02default:default2*
system_top_clk_wiz_0_02default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
9092default:default8@Z8-3491
®
synthesizing module '%s'638*oasys2*
system_top_clk_wiz_0_02default:default2¨
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0.vhd2default:default2
862default:default8@Z8-638
¸
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys22
system_top_clk_wiz_0_0_clk_wiz2default:default2≤
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
742default:default2
U02default:default22
system_top_clk_wiz_0_0_clk_wiz2default:default2¨
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0.vhd2default:default2
1042default:default8@Z8-3491
∏
synthesizing module '%s'638*oasys22
system_top_clk_wiz_0_0_clk_wiz2default:default2¥
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
862default:default8@Z8-638
^
%s*synth2O
;	Parameter CAPACITANCE bound to: DONT_CARE - type: string 
2default:default
[
%s*synth2L
8	Parameter IBUF_DELAY_VALUE bound to: 0 - type: string 
2default:default
U
%s*synth2F
2	Parameter IBUF_LOW_PWR bound to: 1 - type: bool 
2default:default
]
%s*synth2N
:	Parameter IFD_DELAY_VALUE bound to: AUTO - type: string 
2default:default
[
%s*synth2L
8	Parameter IOSTANDARD bound to: DEFAULT - type: string 
2default:default
’
,binding component instance '%s' to cell '%s'113*oasys2 
clkin1_ibufg2default:default2
IBUF2default:default2¥
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
1202default:default8@Z8-113
\
%s*synth2M
9	Parameter BANDWIDTH bound to: OPTIMIZED - type: string 
2default:default
a
%s*synth2R
>	Parameter CLKFBOUT_MULT_F bound to: 10.000000 - type: float 
2default:default
_
%s*synth2P
<	Parameter CLKFBOUT_PHASE bound to: 0.000000 - type: float 
2default:default
]
%s*synth2N
:	Parameter CLKFBOUT_USE_FINE_PS bound to: 0 - type: bool 
2default:default
_
%s*synth2P
<	Parameter CLKIN1_PERIOD bound to: 10.000000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKIN2_PERIOD bound to: 0.000000 - type: float 
2default:default
b
%s*synth2S
?	Parameter CLKOUT0_DIVIDE_F bound to: 20.000000 - type: float 
2default:default
c
%s*synth2T
@	Parameter CLKOUT0_DUTY_CYCLE bound to: 0.500000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKOUT0_PHASE bound to: 0.000000 - type: float 
2default:default
\
%s*synth2M
9	Parameter CLKOUT0_USE_FINE_PS bound to: 0 - type: bool 
2default:default
Z
%s*synth2K
7	Parameter CLKOUT1_DIVIDE bound to: 1 - type: integer 
2default:default
c
%s*synth2T
@	Parameter CLKOUT1_DUTY_CYCLE bound to: 0.500000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKOUT1_PHASE bound to: 0.000000 - type: float 
2default:default
\
%s*synth2M
9	Parameter CLKOUT1_USE_FINE_PS bound to: 0 - type: bool 
2default:default
Z
%s*synth2K
7	Parameter CLKOUT2_DIVIDE bound to: 1 - type: integer 
2default:default
c
%s*synth2T
@	Parameter CLKOUT2_DUTY_CYCLE bound to: 0.500000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKOUT2_PHASE bound to: 0.000000 - type: float 
2default:default
\
%s*synth2M
9	Parameter CLKOUT2_USE_FINE_PS bound to: 0 - type: bool 
2default:default
Z
%s*synth2K
7	Parameter CLKOUT3_DIVIDE bound to: 1 - type: integer 
2default:default
c
%s*synth2T
@	Parameter CLKOUT3_DUTY_CYCLE bound to: 0.500000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKOUT3_PHASE bound to: 0.000000 - type: float 
2default:default
\
%s*synth2M
9	Parameter CLKOUT3_USE_FINE_PS bound to: 0 - type: bool 
2default:default
X
%s*synth2I
5	Parameter CLKOUT4_CASCADE bound to: 0 - type: bool 
2default:default
Z
%s*synth2K
7	Parameter CLKOUT4_DIVIDE bound to: 1 - type: integer 
2default:default
c
%s*synth2T
@	Parameter CLKOUT4_DUTY_CYCLE bound to: 0.500000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKOUT4_PHASE bound to: 0.000000 - type: float 
2default:default
\
%s*synth2M
9	Parameter CLKOUT4_USE_FINE_PS bound to: 0 - type: bool 
2default:default
Z
%s*synth2K
7	Parameter CLKOUT5_DIVIDE bound to: 1 - type: integer 
2default:default
c
%s*synth2T
@	Parameter CLKOUT5_DUTY_CYCLE bound to: 0.500000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKOUT5_PHASE bound to: 0.000000 - type: float 
2default:default
\
%s*synth2M
9	Parameter CLKOUT5_USE_FINE_PS bound to: 0 - type: bool 
2default:default
Z
%s*synth2K
7	Parameter CLKOUT6_DIVIDE bound to: 1 - type: integer 
2default:default
c
%s*synth2T
@	Parameter CLKOUT6_DUTY_CYCLE bound to: 0.500000 - type: float 
2default:default
^
%s*synth2O
;	Parameter CLKOUT6_PHASE bound to: 0.000000 - type: float 
2default:default
\
%s*synth2M
9	Parameter CLKOUT6_USE_FINE_PS bound to: 0 - type: bool 
2default:default
[
%s*synth2L
8	Parameter COMPENSATION bound to: ZHOLD - type: string 
2default:default
Y
%s*synth2J
6	Parameter DIVCLK_DIVIDE bound to: 1 - type: integer 
2default:default
S
%s*synth2D
0	Parameter IS_CLKINSEL_INVERTED bound to: 1'b0 
2default:default
O
%s*synth2@
,	Parameter IS_PSEN_INVERTED bound to: 1'b0 
2default:default
S
%s*synth2D
0	Parameter IS_PSINCDEC_INVERTED bound to: 1'b0 
2default:default
Q
%s*synth2B
.	Parameter IS_PWRDWN_INVERTED bound to: 1'b0 
2default:default
N
%s*synth2?
+	Parameter IS_RST_INVERTED bound to: 1'b0 
2default:default
\
%s*synth2M
9	Parameter REF_JITTER1 bound to: 0.010000 - type: float 
2default:default
\
%s*synth2M
9	Parameter REF_JITTER2 bound to: 0.000000 - type: float 
2default:default
T
%s*synth2E
1	Parameter SS_EN bound to: FALSE - type: string 
2default:default
\
%s*synth2M
9	Parameter SS_MODE bound to: CENTER_HIGH - type: string 
2default:default
]
%s*synth2N
:	Parameter SS_MOD_PERIOD bound to: 10000 - type: integer 
2default:default
U
%s*synth2F
2	Parameter STARTUP_WAIT bound to: 0 - type: bool 
2default:default
‹
,binding component instance '%s' to cell '%s'113*oasys2!
mmcm_adv_inst2default:default2

MMCME2_ADV2default:default2¥
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
1322default:default8@Z8-113
—
,binding component instance '%s' to cell '%s'113*oasys2
clkf_buf2default:default2
BUFG2default:default2¥
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
1962default:default8@Z8-113
‘
,binding component instance '%s' to cell '%s'113*oasys2
clkout1_buf2default:default2
BUFG2default:default2¥
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
2032default:default8@Z8-113
Ù
%done synthesizing module '%s' (%s#%s)256*oasys22
system_top_clk_wiz_0_0_clk_wiz2default:default2
292default:default2
12default:default2¥
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
862default:default8@Z8-256
‰
%done synthesizing module '%s' (%s#%s)256*oasys2*
system_top_clk_wiz_0_02default:default2
302default:default2
12default:default2¨
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0.vhd2default:default2
862default:default8@Z8-256
Ò
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys21
system_top_proc_sys_reset_0_02default:default2æ
©c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/synth/system_top_proc_sys_reset_0_0.vhd2default:default2
562default:default2$
proc_sys_reset_02default:default21
system_top_proc_sys_reset_0_02default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
9162default:default8@Z8-3491
√
synthesizing module '%s'638*oasys21
system_top_proc_sys_reset_0_02default:default2¿
©c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/synth/system_top_proc_sys_reset_0_0.vhd2default:default2
712default:default8@Z8-638
V
%s*synth2G
3	Parameter C_FAMILY bound to: zynq - type: string 
2default:default
[
%s*synth2L
8	Parameter C_EXT_RST_WIDTH bound to: 4 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AUX_RST_WIDTH bound to: 4 - type: integer 
2default:default
O
%s*synth2@
,	Parameter C_EXT_RESET_HIGH bound to: 1'b0 
2default:default
O
%s*synth2@
,	Parameter C_AUX_RESET_HIGH bound to: 1'b0 
2default:default
Y
%s*synth2J
6	Parameter C_NUM_BUS_RST bound to: 1 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_NUM_PERP_RST bound to: 1 - type: integer 
2default:default
f
%s*synth2W
C	Parameter C_NUM_INTERCONNECT_ARESETN bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_NUM_PERP_ARESETN bound to: 1 - type: integer 
2default:default
â
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2"
proc_sys_reset2default:default2 
µc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/proc_sys_reset.vhd2default:default2
1402default:default2
U02default:default2"
proc_sys_reset2default:default2¿
©c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/synth/system_top_proc_sys_reset_0_0.vhd2default:default2
1172default:default8@Z8-3491
—
synthesizing module '%s'638*oasys22
proc_sys_reset__parameterized02default:default2Ã
µc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/proc_sys_reset.vhd2default:default2
1992default:default8@Z8-638
V
%s*synth2G
3	Parameter C_FAMILY bound to: zynq - type: string 
2default:default
[
%s*synth2L
8	Parameter C_EXT_RST_WIDTH bound to: 4 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AUX_RST_WIDTH bound to: 4 - type: integer 
2default:default
O
%s*synth2@
,	Parameter C_EXT_RESET_HIGH bound to: 1'b0 
2default:default
O
%s*synth2@
,	Parameter C_AUX_RESET_HIGH bound to: 1'b0 
2default:default
Y
%s*synth2J
6	Parameter C_NUM_BUS_RST bound to: 1 - type: integer 
2default:default
Z
%s*synth2K
7	Parameter C_NUM_PERP_RST bound to: 1 - type: integer 
2default:default
f
%s*synth2W
C	Parameter C_NUM_INTERCONNECT_ARESETN bound to: 1 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_NUM_PERP_ARESETN bound to: 1 - type: integer 
2default:default
´
synthesizing module '%s'638*oasys2
lpf2default:default2¡
™c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/lpf.vhd2default:default2
1362default:default8@Z8-638
[
%s*synth2L
8	Parameter C_EXT_RST_WIDTH bound to: 4 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_AUX_RST_WIDTH bound to: 4 - type: integer 
2default:default
O
%s*synth2@
,	Parameter C_EXT_RESET_HIGH bound to: 1'b0 
2default:default
O
%s*synth2@
,	Parameter C_AUX_RESET_HIGH bound to: 1'b0 
2default:default
ˇ
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2
SRL162default:default2I
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
347842default:default2
	POR_SRL_I2default:default2
SRL162default:default2¡
™c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/lpf.vhd2default:default2
1882default:default8@Z8-3491
∏
synthesizing module '%s'638*oasys2
SRL162default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
347842default:default8@Z8-638
S
%s*synth2D
0	Parameter INIT bound to: 16'b0000000000000000 
2default:default
Ù
%done synthesizing module '%s' (%s#%s)256*oasys2
SRL162default:default2
312default:default2
12default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
347842default:default8@Z8-256
Á
%done synthesizing module '%s' (%s#%s)256*oasys2
lpf2default:default2
322default:default2
12default:default2¡
™c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/lpf.vhd2default:default2
1362default:default8@Z8-256
µ
synthesizing module '%s'638*oasys2
sequence2default:default2∆
Øc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/sequence.vhd2default:default2
1462default:default8@Z8-638
≥
synthesizing module '%s'638*oasys2
upcnt_n2default:default2≈
Æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/upcnt_n.vhd2default:default2
1262default:default8@Z8-638
R
%s*synth2C
/	Parameter C_SIZE bound to: 6 - type: integer 
2default:default
Ô
%done synthesizing module '%s' (%s#%s)256*oasys2
upcnt_n2default:default2
332default:default2
12default:default2≈
Æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/upcnt_n.vhd2default:default2
1262default:default8@Z8-256
Ò
%done synthesizing module '%s' (%s#%s)256*oasys2
sequence2default:default2
342default:default2
12default:default2∆
Øc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/sequence.vhd2default:default2
1462default:default8@Z8-256
ç
%done synthesizing module '%s' (%s#%s)256*oasys22
proc_sys_reset__parameterized02default:default2
352default:default2
12default:default2Ã
µc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/proc_sys_reset.vhd2default:default2
1992default:default8@Z8-256
ˇ
%done synthesizing module '%s' (%s#%s)256*oasys21
system_top_proc_sys_reset_0_02default:default2
362default:default2
12default:default2¿
©c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/synth/system_top_proc_sys_reset_0_0.vhd2default:default2
712default:default8@Z8-256
Ö
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys25
!system_top_processing_system7_0_02default:default2∆
±c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/synth/system_top_processing_system7_0_0.vhd2default:default2
562default:default2(
processing_system7_02default:default25
!system_top_processing_system7_0_02default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
9292default:default8@Z8-3491
–
synthesizing module '%s'638*oasys25
!system_top_processing_system7_0_02default:default2»
±c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/synth/system_top_processing_system7_0_0.vhd2default:default2
1322default:default8@Z8-638
[
%s*synth2L
8	Parameter C_EN_EMIO_ENET0 bound to: 0 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_EN_EMIO_ENET1 bound to: 0 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_EN_EMIO_TRACE bound to: 0 - type: integer 
2default:default
b
%s*synth2S
?	Parameter C_INCLUDE_TRACE_BUFFER bound to: 0 - type: integer 
2default:default
f
%s*synth2W
C	Parameter C_TRACE_BUFFER_FIFO_SIZE bound to: 128 - type: integer 
2default:default
h
%s*synth2Y
E	Parameter USE_TRACE_DATA_EDGE_DETECTOR bound to: 0 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_TRACE_BUFFER_CLOCK_DELAY bound to: 12 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_EMIO_GPIO_WIDTH bound to: 64 - type: integer 
2default:default
e
%s*synth2V
B	Parameter C_INCLUDE_ACP_TRANS_CHECK bound to: 0 - type: integer 
2default:default
f
%s*synth2W
C	Parameter C_USE_DEFAULT_ACP_USER_VAL bound to: 0 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_ACP_ARUSER_VAL bound to: 31 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_ACP_AWUSER_VAL bound to: 31 - type: integer 
2default:default
a
%s*synth2R
>	Parameter C_M_AXI_GP0_ID_WIDTH bound to: 12 - type: integer 
2default:default
k
%s*synth2\
H	Parameter C_M_AXI_GP0_ENABLE_STATIC_REMAP bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter C_M_AXI_GP1_ID_WIDTH bound to: 12 - type: integer 
2default:default
k
%s*synth2\
H	Parameter C_M_AXI_GP1_ENABLE_STATIC_REMAP bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_GP0_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_GP1_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_ACP_ID_WIDTH bound to: 3 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP0_ID_WIDTH bound to: 6 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP0_DATA_WIDTH bound to: 64 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP1_ID_WIDTH bound to: 6 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP1_DATA_WIDTH bound to: 64 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP2_ID_WIDTH bound to: 6 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP2_DATA_WIDTH bound to: 64 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP3_ID_WIDTH bound to: 6 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP3_DATA_WIDTH bound to: 64 - type: integer 
2default:default
h
%s*synth2Y
E	Parameter C_M_AXI_GP0_THREAD_ID_WIDTH bound to: 12 - type: integer 
2default:default
h
%s*synth2Y
E	Parameter C_M_AXI_GP1_THREAD_ID_WIDTH bound to: 12 - type: integer 
2default:default
a
%s*synth2R
>	Parameter C_NUM_F2P_INTR_INPUTS bound to: 1 - type: integer 
2default:default
W
%s*synth2H
4	Parameter C_DQ_WIDTH bound to: 32 - type: integer 
2default:default
W
%s*synth2H
4	Parameter C_DQS_WIDTH bound to: 4 - type: integer 
2default:default
V
%s*synth2G
3	Parameter C_DM_WIDTH bound to: 4 - type: integer 
2default:default
\
%s*synth2M
9	Parameter C_MIO_PRIMITIVE bound to: 54 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_PS7_SI_REV bound to: PRODUCTION - type: string 
2default:default
]
%s*synth2N
:	Parameter C_FCLK_CLK0_BUF bound to: true - type: string 
2default:default
^
%s*synth2O
;	Parameter C_FCLK_CLK1_BUF bound to: false - type: string 
2default:default
^
%s*synth2O
;	Parameter C_FCLK_CLK2_BUF bound to: false - type: string 
2default:default
^
%s*synth2O
;	Parameter C_FCLK_CLK3_BUF bound to: false - type: string 
2default:default
^
%s*synth2O
;	Parameter C_PACKAGE_NAME bound to: clg484 - type: string 
2default:default
“
Hmodule '%s' declared at '%s:%s' bound to instance '%s' of component '%s'3392*oasys2>
*processing_system7_v5_3_processing_system72default:default2”
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
1532default:default2
U02default:default2>
*processing_system7_v5_3_processing_system72default:default2»
±c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/synth/system_top_processing_system7_0_0.vhd2default:default2
9152default:default8@Z8-3491
ˆ
synthesizing module '%s'638*oasys2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
1532default:default8@Z8-638
f
%s*synth2W
C	Parameter C_USE_DEFAULT_ACP_USER_VAL bound to: 0 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_ACP_ARUSER_VAL bound to: 31 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_ACP_AWUSER_VAL bound to: 31 - type: integer 
2default:default
h
%s*synth2Y
E	Parameter C_M_AXI_GP0_THREAD_ID_WIDTH bound to: 12 - type: integer 
2default:default
h
%s*synth2Y
E	Parameter C_M_AXI_GP1_THREAD_ID_WIDTH bound to: 12 - type: integer 
2default:default
k
%s*synth2\
H	Parameter C_M_AXI_GP0_ENABLE_STATIC_REMAP bound to: 0 - type: integer 
2default:default
k
%s*synth2\
H	Parameter C_M_AXI_GP1_ENABLE_STATIC_REMAP bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter C_M_AXI_GP0_ID_WIDTH bound to: 12 - type: integer 
2default:default
a
%s*synth2R
>	Parameter C_M_AXI_GP1_ID_WIDTH bound to: 12 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_GP0_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_GP1_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP0_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP1_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP2_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_HP3_ID_WIDTH bound to: 6 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_S_AXI_ACP_ID_WIDTH bound to: 3 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP0_DATA_WIDTH bound to: 64 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP1_DATA_WIDTH bound to: 64 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP2_DATA_WIDTH bound to: 64 - type: integer 
2default:default
c
%s*synth2T
@	Parameter C_S_AXI_HP3_DATA_WIDTH bound to: 64 - type: integer 
2default:default
e
%s*synth2V
B	Parameter C_INCLUDE_ACP_TRANS_CHECK bound to: 0 - type: integer 
2default:default
a
%s*synth2R
>	Parameter C_NUM_F2P_INTR_INPUTS bound to: 1 - type: integer 
2default:default
]
%s*synth2N
:	Parameter C_FCLK_CLK0_BUF bound to: true - type: string 
2default:default
^
%s*synth2O
;	Parameter C_FCLK_CLK1_BUF bound to: false - type: string 
2default:default
^
%s*synth2O
;	Parameter C_FCLK_CLK2_BUF bound to: false - type: string 
2default:default
^
%s*synth2O
;	Parameter C_FCLK_CLK3_BUF bound to: false - type: string 
2default:default
^
%s*synth2O
;	Parameter C_EMIO_GPIO_WIDTH bound to: 64 - type: integer 
2default:default
b
%s*synth2S
?	Parameter C_INCLUDE_TRACE_BUFFER bound to: 0 - type: integer 
2default:default
f
%s*synth2W
C	Parameter C_TRACE_BUFFER_FIFO_SIZE bound to: 128 - type: integer 
2default:default
g
%s*synth2X
D	Parameter C_TRACE_BUFFER_CLOCK_DELAY bound to: 12 - type: integer 
2default:default
h
%s*synth2Y
E	Parameter USE_TRACE_DATA_EDGE_DETECTOR bound to: 0 - type: integer 
2default:default
`
%s*synth2Q
=	Parameter C_PS7_SI_REV bound to: PRODUCTION - type: string 
2default:default
[
%s*synth2L
8	Parameter C_EN_EMIO_ENET0 bound to: 0 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_EN_EMIO_ENET1 bound to: 0 - type: integer 
2default:default
[
%s*synth2L
8	Parameter C_EN_EMIO_TRACE bound to: 0 - type: integer 
2default:default
W
%s*synth2H
4	Parameter C_DQ_WIDTH bound to: 32 - type: integer 
2default:default
W
%s*synth2H
4	Parameter C_DQS_WIDTH bound to: 4 - type: integer 
2default:default
V
%s*synth2G
3	Parameter C_DM_WIDTH bound to: 4 - type: integer 
2default:default
\
%s*synth2M
9	Parameter C_MIO_PRIMITIVE bound to: 54 - type: integer 
2default:default
^
%s*synth2O
;	Parameter C_PACKAGE_NAME bound to: clg484 - type: string 
2default:default
µ
synthesizing module '%s'638*oasys2
BUFG2default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
6122default:default8@Z8-638
Ò
%done synthesizing module '%s' (%s#%s)256*oasys2
BUFG2default:default2
372default:default2
12default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
6122default:default8@Z8-256
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21712default:default8@Z8-4446
∂
synthesizing module '%s'638*oasys2
BIBUF2default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
2682default:default8@Z8-638
Ú
%done synthesizing module '%s' (%s#%s)256*oasys2
BIBUF2default:default2
382default:default2
12default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
2682default:default8@Z8-256
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21722default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21732default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21742default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21752default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21762default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21772default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21782default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21792default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21802default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21812default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21822default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21832default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21842default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21892default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21952default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21952default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
21952default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22012default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22072default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22072default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22072default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22072default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
◊
Fall outputs are unconnected for this instance and logic may be removed3605*oasys2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
22132default:default8@Z8-4446
‘
ÅMessage '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-44462default:default2
1002default:defaultZ17-14
∂
synthesizing module '%s'638*oasys2
PS72default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
267372default:default8@Z8-638
Ú
%done synthesizing module '%s' (%s#%s)256*oasys2
PS72default:default2
392default:default2
12default:default2K
5C:/Xilinx/Vivado/2013.4/scripts/rt/data/unisim_comp.v2default:default2
267372default:default8@Z8-256
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_TX_EN2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2102default:default8@Z8-3848
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_TX_ER2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2112default:default8@Z8-3848
¥
0Net %s in module/entity %s does not have driver.3422*oasys2"
ENET0_GMII_TXD2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2272default:default8@Z8-3848
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_TX_EN2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2412default:default8@Z8-3848
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_TX_ER2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2422default:default8@Z8-3848
¥
0Net %s in module/entity %s does not have driver.3422*oasys2"
ENET1_GMII_TXD2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2562default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_COL_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10332default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_CRS_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10342default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_RXD_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10372default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET0_GMII_RX_DV_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10352default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET0_GMII_RX_ER_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10362default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_COL_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10422default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_CRS_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10432default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_RXD_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10462default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET1_GMII_RX_DV_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10442default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET1_GMII_RX_ER_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10452default:default8@Z8-3848
∫
0Net %s in module/entity %s does not have driver.3422*oasys2'
FTMD_TRACEIN_ATID_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10552default:default8@Z8-3848
∫
0Net %s in module/entity %s does not have driver.3422*oasys2'
FTMD_TRACEIN_DATA_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10532default:default8@Z8-3848
ª
0Net %s in module/entity %s does not have driver.3422*oasys2(
FTMD_TRACEIN_VALID_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10542default:default8@Z8-3848
≤
%done synthesizing module '%s' (%s#%s)256*oasys2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2
402default:default2
12default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
1532default:default8@Z8-256
å
%done synthesizing module '%s' (%s#%s)256*oasys25
!system_top_processing_system7_0_02default:default2
412default:default2
12default:default2»
±c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/synth/system_top_processing_system7_0_0.vhd2default:default2
1322default:default8@Z8-256
∂
%done synthesizing module '%s' (%s#%s)256*oasys2

system_top2default:default2
422default:default2
12default:default2â
sC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top.vhd2default:default2
5932default:default8@Z8-256
≈
%done synthesizing module '%s' (%s#%s)256*oasys2&
system_top_wrapper2default:default2
432default:default2
12default:default2ë
{C:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/hdl/system_top_wrapper.vhd2default:default2
302default:default8@Z8-256
ú
%s*synth2å
xFinished RTL Elaboration : Time (s): cpu = 00:01:21 ; elapsed = 00:01:26 . Memory (MB): peak = 339.559 ; gain = 188.023
2default:default
;
%s*synth2,

Report Check Netlist: 
2default:default
l
%s*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:default
l
%s*synth2]
I|      |Item              |Errors |Warnings |Status |Description       |
2default:default
l
%s*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:default
l
%s*synth2]
I|1     |multi_driven_nets |      0|        0|Passed |Multi driven nets |
2default:default
l
%s*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:default
\
-Analyzing %s Unisim elements for replacement
17*netlist2
32default:defaultZ29-17
a
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28
ñ
Loading clock regions from %s
13*device2_
KC:/Xilinx/Vivado/2013.4/data\parts/xilinx/zynq/zynq/xc7z020/ClockRegion.xml2default:defaultZ21-13
ó
Loading clock buffers from %s
11*device2`
LC:/Xilinx/Vivado/2013.4/data\parts/xilinx/zynq/zynq/xc7z020/ClockBuffers.xml2default:defaultZ21-11
ó
&Loading clock placement rules from %s
318*place2W
CC:/Xilinx/Vivado/2013.4/data/parts/xilinx/zynq/ClockPlacerRules.xml2default:defaultZ30-318
ï
)Loading package pin functions from %s...
17*device2S
?C:/Xilinx/Vivado/2013.4/data\parts/xilinx/zynq/PinFunctions.xml2default:defaultZ21-17
ì
Loading package from %s
16*device2b
NC:/Xilinx/Vivado/2013.4/data\parts/xilinx/zynq/zynq/xc7z020/clg484/Package.xml2default:defaultZ21-16
ä
Loading io standards from %s
15*device2T
@C:/Xilinx/Vivado/2013.4/data\./parts/xilinx/zynq/IOStandards.xml2default:defaultZ21-15
¨
ôCould not create '%s' constraint because cell '%s' is not directly connected to top level port. '%s' is ignored by %s but preserved inside the database.
527*constraints2 
IBUF_LOW_PWR2default:default2<
&system_top_i/clk_wiz_0/U0/clkin1_ibufg	2default:default2 
IBUF_LOW_PWR2default:default2
Vivado2default:default2¥
ùc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_clk_wiz.vhd2default:default2
1202default:default8@Z18-549
5

Processing XDC Constraints
244*projectZ1-262
û
$Parsing XDC File [%s] for cell '%s'
848*designutils2™
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0.xdc2default:default2-
system_top_i/clk_wiz_0/U02default:defaultZ20-848
ß
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2™
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0.xdc2default:default2-
system_top_i/clk_wiz_0/U02default:defaultZ20-847
/
Deriving generated clocks
2*timingZ38-2
¨
ŸImplementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project2™
ïc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0.xdc2default:default2â
uC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.runs/synth_1/.Xil/system_top_wrapper_propImpl.xdc2default:defaultZ1-236
§
$Parsing XDC File [%s] for cell '%s'
848*designutils2∞
õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_board.xdc2default:default2-
system_top_i/clk_wiz_0/U02default:defaultZ20-848
≠
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2∞
õc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_clk_wiz_0_0/system_top_clk_wiz_0_0_board.xdc2default:default2-
system_top_i/clk_wiz_0/U02default:defaultZ20-847
≥
$Parsing XDC File [%s] for cell '%s'
848*designutils2∏
£c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/system_top_proc_sys_reset_0_0.xdc2default:default24
 system_top_i/proc_sys_reset_0/U02default:defaultZ20-848
º
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2∏
£c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/system_top_proc_sys_reset_0_0.xdc2default:default24
 system_top_i/proc_sys_reset_0/U02default:defaultZ20-847
π
$Parsing XDC File [%s] for cell '%s'
848*designutils2æ
©c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/system_top_proc_sys_reset_0_0_board.xdc2default:default24
 system_top_i/proc_sys_reset_0/U02default:defaultZ20-848
¬
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2æ
©c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/system_top_proc_sys_reset_0_0_board.xdc2default:default24
 system_top_i/proc_sys_reset_0/U02default:defaultZ20-847
ø
$Parsing XDC File [%s] for cell '%s'
848*designutils2¿
´c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/system_top_processing_system7_0_0.xdc2default:default28
$system_top_i/processing_system7_0/U02default:defaultZ20-848
»
-Finished Parsing XDC File [%s] for cell '%s'
847*designutils2¿
´c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/system_top_processing_system7_0_0.xdc2default:default28
$system_top_i/processing_system7_0/U02default:defaultZ20-847
¬
ŸImplementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project2¿
´c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/system_top_processing_system7_0_0.xdc2default:default2â
uC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.runs/synth_1/.Xil/system_top_wrapper_propImpl.xdc2default:defaultZ1-236
ò
Parsing XDC File [%s]
179*designutils2b
NC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_constraint.xdc2default:defaultZ20-179
°
Finished Parsing XDC File [%s]
178*designutils2b
NC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_constraint.xdc2default:defaultZ20-178
„
ŸImplementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project2b
NC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_constraint.xdc2default:default2â
uC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.runs/synth_1/.Xil/system_top_wrapper_propImpl.xdc2default:defaultZ1-236
©
Parsing XDC File [%s]
179*designutils2s
_C:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.runs/synth_1/dont_touch.xdc2default:defaultZ20-179
≤
Finished Parsing XDC File [%s]
178*designutils2s
_C:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.runs/synth_1/dont_touch.xdc2default:defaultZ20-178
Ù
ŸImplementation specific constraints were found while reading constraint file [%s]. These constraints will be ignored for synthesis but will be used in implementation. Impacted constraints are listed in the file [%s].
233*project2s
_C:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.runs/synth_1/dont_touch.xdc2default:default2â
uC:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.runs/synth_1/.Xil/system_top_wrapper_propImpl.xdc2default:defaultZ1-236
?
&Completed Processing XDC Constraints

245*projectZ1-263
|
MSuccessfully populated the BRAM INIT strings from the following elf files: %s96*memdata2
 2default:defaultZ28-144
ö
!Unisim Transformation Summary:
%s111*project2^
J  A total of 1 instances were transformed.
  SRL16 => SRL16E: 1 instances
2default:defaultZ1-111
µ
%s*synth2•
êFinished applying 'set_property' XDC Constraints : Time (s): cpu = 00:01:38 ; elapsed = 00:01:43 . Memory (MB): peak = 545.871 ; gain = 394.336
2default:default
ù
%s*synth2ç
yFinished RTL Optimization : Time (s): cpu = 00:01:38 ; elapsed = 00:01:43 . Memory (MB): peak = 545.871 ; gain = 394.336
2default:default
á
3inferred FSM for state register '%s' in module '%s'802*oasys2 
is_Chart_reg2default:default2
Chart2default:defaultZ8-802
Ê
merging register '%s' into '%s'3619*oasys2"
seq_cnt_en_reg2default:default2 
from_sys_reg2default:default2∆
Øc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_proc_sys_reset_0_0/proc_sys_reset_v5_0/hdl/src/vhdl/sequence.vhd2default:default2
2222default:default8@Z8-4471
∫
Gencoded FSM with state register '%s' using encoding '%s' in module '%s'3353*oasys2 
is_Chart_reg2default:default2
one-hot2default:default2
Chart2default:defaultZ8-3354
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_TX_EN2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2102default:default8@Z8-3848
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_TX_ER2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2112default:default8@Z8-3848
¥
0Net %s in module/entity %s does not have driver.3422*oasys2"
ENET0_GMII_TXD2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2272default:default8@Z8-3848
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_TX_EN2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2412default:default8@Z8-3848
∂
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_TX_ER2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2422default:default8@Z8-3848
¥
0Net %s in module/entity %s does not have driver.3422*oasys2"
ENET1_GMII_TXD2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
2562default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_COL_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10332default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_CRS_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10342default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET0_GMII_RXD_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10372default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET0_GMII_RX_DV_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10352default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET0_GMII_RX_ER_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10362default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_COL_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10422default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_CRS_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10432default:default8@Z8-3848
∑
0Net %s in module/entity %s does not have driver.3422*oasys2$
ENET1_GMII_RXD_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10462default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET1_GMII_RX_DV_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10442default:default8@Z8-3848
π
0Net %s in module/entity %s does not have driver.3422*oasys2&
ENET1_GMII_RX_ER_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10452default:default8@Z8-3848
∫
0Net %s in module/entity %s does not have driver.3422*oasys2'
FTMD_TRACEIN_ATID_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10552default:default8@Z8-3848
∫
0Net %s in module/entity %s does not have driver.3422*oasys2'
FTMD_TRACEIN_DATA_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10532default:default8@Z8-3848
ª
0Net %s in module/entity %s does not have driver.3422*oasys2(
FTMD_TRACEIN_VALID_i2default:default2N
:processing_system7_v5_3_processing_system7__parameterized02default:default2’
æc:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_processing_system7_0_0/hdl/verilog/processing_system7_v5_3_processing_system7.v2default:default2
10542default:default8@Z8-3848
<
%s*synth2-

Report RTL Partitions: 
2default:default
N
%s*synth2?
++-+--------------+------------+----------+
2default:default
N
%s*synth2?
+| |RTL Partition |Replication |Instances |
2default:default
N
%s*synth2?
++-+--------------+------------+----------+
2default:default
N
%s*synth2?
++-+--------------+------------+----------+
2default:default
z
%s*synth2k
WPart Resources:
DSPs: 220 (col length:60)
BRAMs: 280 (col length: RAMB18 60 RAMB36 30)
2default:default
±
%s*synth2°
åFinished Loading Part and Timing Information : Time (s): cpu = 00:01:51 ; elapsed = 00:01:56 . Memory (MB): peak = 599.766 ; gain = 448.230
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input     32 Bit       Adders := 1     
2default:default
Q
%s*synth2B
.	   2 Input     17 Bit       Adders := 1     
2default:default
Q
%s*synth2B
.	   2 Input     12 Bit       Adders := 6     
2default:default
Q
%s*synth2B
.	   2 Input     10 Bit       Adders := 2     
2default:default
Q
%s*synth2B
.	   2 Input      9 Bit       Adders := 2     
2default:default
Q
%s*synth2B
.	   2 Input      8 Bit       Adders := 1     
2default:default
Q
%s*synth2B
.	   2 Input      6 Bit       Adders := 3     
2default:default
Q
%s*synth2B
.	   2 Input      5 Bit       Adders := 4     
2default:default
Q
%s*synth2B
.	   2 Input      4 Bit       Adders := 4     
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit       Adders := 2     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               66 Bit    Registers := 4     
2default:default
Q
%s*synth2B
.	               47 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	               32 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	               16 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	               14 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	               12 Bit    Registers := 7     
2default:default
Q
%s*synth2B
.	                9 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	                8 Bit    Registers := 5     
2default:default
Q
%s*synth2B
.	                6 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                5 Bit    Registers := 4     
2default:default
Q
%s*synth2B
.	                4 Bit    Registers := 6     
2default:default
Q
%s*synth2B
.	                3 Bit    Registers := 3     
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 9     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 57    
2default:default
6
%s*synth2'
+---Multipliers : 
2default:default
Q
%s*synth2B
.	                 8x32  Multipliers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     47 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input     33 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input     32 Bit        Muxes := 7     
2default:default
Q
%s*synth2B
.	   3 Input     32 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   4 Input     16 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input     16 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   2 Input     14 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   2 Input     12 Bit        Muxes := 4     
2default:default
Q
%s*synth2B
.	   2 Input      9 Bit        Muxes := 4     
2default:default
Q
%s*synth2B
.	   2 Input      6 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   4 Input      5 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      5 Bit        Muxes := 4     
2default:default
Q
%s*synth2B
.	   2 Input      4 Bit        Muxes := 8     
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 12    
2default:default
Q
%s*synth2B
.	   4 Input      2 Bit        Muxes := 4     
2default:default
Q
%s*synth2B
.	   5 Input      2 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   4 Input      1 Bit        Muxes := 6     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 34    
2default:default
Q
%s*synth2B
.	   3 Input      1 Bit        Muxes := 3     
2default:default
F
%s*synth27
#Hierarchical RTL Component report 
2default:default
>
%s*synth2/
Module system_top_wrapper 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
]
%s*synth2N
:Module PWM_controller_PWM_Controller_ipcore_addr_decoder 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                8 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 3     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 4     
2default:default
`
%s*synth2Q
=Module PWM_controller_PWM_Controller_ipcore_axi_lite_module 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               32 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	               16 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                8 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 2     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     14 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   4 Input      2 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   3 Input      1 Bit        Muxes := 3     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   4 Input      1 Bit        Muxes := 3     
2default:default
Y
%s*synth2J
6Module PWM_controller_PWM_Controller_ipcore_axi_lite 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
=
%s*synth2.
Module Calculate_f_coeff 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input     32 Bit       Adders := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     33 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input     32 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 1     
2default:default
1
%s*synth2"
Module Chart 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input     17 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               16 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 1     
2default:default
6
%s*synth2'
+---Multipliers : 
2default:default
Q
%s*synth2B
.	                 8x32  Multipliers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     32 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   4 Input     16 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input     16 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   4 Input      5 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   5 Input      2 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   4 Input      2 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   4 Input      1 Bit        Muxes := 3     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 2     
2default:default
:
%s*synth2+
Module PWM_Controller 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
T
%s*synth2E
1Module PWM_controller_PWM_Controller_ipcore_dut 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
P
%s*synth2A
-Module PWM_controller_PWM_Controller_ipcore 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
_
%s*synth2P
<Module system_top_PWM_controller_PWM_Controller_ipcore_0_0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
N
%s*synth2?
+Module axi_infrastructure_v1_1_axi2vector 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
W
%s*synth2H
4Module axi_register_slice_v2_1_axic_register_slice 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               66 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 2     
2default:default
g
%s*synth2X
DModule axi_register_slice_v2_1_axic_register_slice__parameterized0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
g
%s*synth2X
DModule axi_register_slice_v2_1_axic_register_slice__parameterized1 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               14 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 2     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     14 Bit        Muxes := 1     
2default:default
g
%s*synth2X
DModule axi_register_slice_v2_1_axic_register_slice__parameterized2 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               47 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 2     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     47 Bit        Muxes := 1     
2default:default
N
%s*synth2?
+Module axi_infrastructure_v1_1_vector2axi 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
V
%s*synth2G
3Module axi_register_slice_v2_1_axi_register_slice 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
T
%s*synth2E
1Module axi_protocol_converter_v2_1_b2s_incr_cmd 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input     12 Bit       Adders := 2     
2default:default
Q
%s*synth2B
.	   2 Input     10 Bit       Adders := 1     
2default:default
Q
%s*synth2B
.	   2 Input      9 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                9 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 2     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     32 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      9 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   2 Input      4 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 4     
2default:default
T
%s*synth2E
1Module axi_protocol_converter_v2_1_b2s_wrap_cmd 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input     12 Bit       Adders := 1     
2default:default
Q
%s*synth2B
.	   2 Input      6 Bit       Adders := 1     
2default:default
Q
%s*synth2B
.	   2 Input      5 Bit       Adders := 1     
2default:default
Q
%s*synth2B
.	   2 Input      4 Bit       Adders := 2     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               12 Bit    Registers := 2     
2default:default
Q
%s*synth2B
.	                5 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                4 Bit    Registers := 3     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 2     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input     32 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input     12 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   2 Input      5 Bit        Muxes := 2     
2default:default
Q
%s*synth2B
.	   2 Input      4 Bit        Muxes := 3     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 4     
2default:default
Z
%s*synth2K
7Module axi_protocol_converter_v2_1_b2s_cmd_translator 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 3     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   3 Input     32 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 4     
2default:default
V
%s*synth2G
3Module axi_protocol_converter_v2_1_b2s_wr_cmd_fsm 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   4 Input      2 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 2     
2default:default
V
%s*synth2G
3Module axi_protocol_converter_v2_1_b2s_aw_channel 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               12 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                8 Bit    Registers := 1     
2default:default
W
%s*synth2H
4Module axi_protocol_converter_v2_1_b2s_simple_fifo 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 1     
2default:default
g
%s*synth2X
DModule axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 1     
2default:default
U
%s*synth2F
2Module axi_protocol_converter_v2_1_b2s_b_channel 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input      8 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                8 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 3     
2default:default
V
%s*synth2G
3Module axi_protocol_converter_v2_1_b2s_rd_cmd_fsm 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                2 Bit    Registers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   4 Input      2 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 2     
2default:default
V
%s*synth2G
3Module axi_protocol_converter_v2_1_b2s_ar_channel 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               12 Bit    Registers := 1     
2default:default
g
%s*synth2X
DModule axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized1 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input      5 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                5 Bit    Registers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 1     
2default:default
g
%s*synth2X
DModule axi_protocol_converter_v2_1_b2s_simple_fifo__parameterized2 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input      5 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                5 Bit    Registers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input      2 Bit        Muxes := 1     
2default:default
U
%s*synth2F
2Module axi_protocol_converter_v2_1_b2s_r_channel 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	               12 Bit    Registers := 1     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 2     
2default:default
^
%s*synth2O
;Module axi_infrastructure_v1_1_axi2vector__parameterized0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
g
%s*synth2X
DModule axi_register_slice_v2_1_axic_register_slice__parameterized3 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
g
%s*synth2X
DModule axi_register_slice_v2_1_axic_register_slice__parameterized4 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
g
%s*synth2X
DModule axi_register_slice_v2_1_axic_register_slice__parameterized5 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
g
%s*synth2X
DModule axi_register_slice_v2_1_axic_register_slice__parameterized6 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
^
%s*synth2O
;Module axi_infrastructure_v1_1_vector2axi__parameterized0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
f
%s*synth2W
CModule axi_register_slice_v2_1_axi_register_slice__parameterized0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
K
%s*synth2<
(Module axi_protocol_converter_v2_1_b2s 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 1     
2default:default
^
%s*synth2O
;Module axi_protocol_converter_v2_1_axi_protocol_converter 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
@
%s*synth21
Module system_top_auto_pc_3 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
D
%s*synth25
!Module s00_couplers_imp_1FHMR11 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
K
%s*synth2<
(Module system_top_axi_interconnect_0_0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
J
%s*synth2;
'Module system_top_clk_wiz_0_0_clk_wiz 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
B
%s*synth23
Module system_top_clk_wiz_0_0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
/
%s*synth2 
Module lpf 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 13    
2default:default
3
%s*synth2$
Module upcnt_n 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
1
%s*synth2"
+---Adders : 
2default:default
Q
%s*synth2B
.	   2 Input      6 Bit       Adders := 1     
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                6 Bit    Registers := 1     
2default:default
0
%s*synth2!
+---Muxes : 
2default:default
Q
%s*synth2B
.	   2 Input      6 Bit        Muxes := 1     
2default:default
Q
%s*synth2B
.	   2 Input      1 Bit        Muxes := 1     
2default:default
4
%s*synth2%
Module sequence 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                3 Bit    Registers := 3     
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 5     
2default:default
J
%s*synth2;
'Module proc_sys_reset__parameterized0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
4
%s*synth2%
+---Registers : 
2default:default
Q
%s*synth2B
.	                1 Bit    Registers := 5     
2default:default
I
%s*synth2:
&Module system_top_proc_sys_reset_0_0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
f
%s*synth2W
CModule processing_system7_v5_3_processing_system7__parameterized0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
M
%s*synth2>
*Module system_top_processing_system7_0_0 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
6
%s*synth2'
Module system_top 
2default:default
B
%s*synth23
Detailed RTL Component Info : 
2default:default
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[31] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[30] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[29] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[28] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[27] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[26] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[25] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[24] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[23] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[22] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[21] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[20] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[19] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[18] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[17] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[16] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[15] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[14] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[13] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[12] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[11] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[10] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[9] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[8] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/waddr_reg[1] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/waddr_reg[0] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
≠
%s*synth2ù
àDSP Report: Generating DSP U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02, operation Mode is: A*B.
2default:default
¯
%s*synth2Ë
”DSP Report: operator U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02 is absorbed into DSP U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02.
2default:default
¯
%s*synth2Ë
”DSP Report: operator U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02 is absorbed into DSP U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02.
2default:default
∏
%s*synth2®
ìDSP Report: Generating DSP U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02, operation Mode is: (PCIN>>17)+A*B.
2default:default
¯
%s*synth2Ë
”DSP Report: operator U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02 is absorbed into DSP U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02.
2default:default
¯
%s*synth2Ë
”DSP Report: operator U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02 is absorbed into DSP U0/u_PWM_controller_PWM_Controller_ipcore_dut_inst/u_PWM_Controller/u_Chart/cast_02.
2default:default
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[31] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[30] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[29] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[28] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[27] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[26] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[25] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[24] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[23] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[22] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[21] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[20] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[19] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[18] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[17] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[16] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[15] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[14] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[13] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[12] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[11] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¬
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ò
É\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[10] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[9] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/wdata_reg[8] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/waddr_reg[1] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
¡
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2ó
Ç\U0/u_PWM_controller_PWM_Controller_ipcore_axi_lite_inst/u_PWM_controller_PWM_Controller_ipcore_axi_lite_module_inst/waddr_reg[0] 2default:default2G
3system_top_PWM_controller_PWM_Controller_ipcore_0_02default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[65] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[64] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[63] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[62] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[49] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[48] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[43] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[42] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[41] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[40] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/skid_buffer_reg[37] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[65] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[64] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[63] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[62] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[49] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[48] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[43] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[42] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[41] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[40] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[37] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[65] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[64] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[63] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[62] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[49] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[48] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[43] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[42] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[41] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[40] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/skid_buffer_reg[37] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[65] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[64] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[63] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[62] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[49] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[48] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[43] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[42] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[41] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[40] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg[37] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
¸
RFound unconnected internal register '%s' and it is trimmed from '%s' to '%s' bits.3455*oasys2\
Hinst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg2default:default2
662default:default2
622default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
1212default:default8@Z8-3936
¸
RFound unconnected internal register '%s' and it is trimmed from '%s' to '%s' bits.3455*oasys2\
Hinst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/ar_pipe/m_payload_i_reg2default:default2
662default:default2
622default:default2·
 c:/MATLAB/quadcopter/PWMController/hdl_prj/vivado_ip_prj/vivado_prj.srcs/sources_1/bd/system_top/ip/system_top_auto_pc_3/axi_register_slice_v2_1/hdl/verilog/axi_register_slice_v2_1_axic_register_slice.v2default:default2
1212default:default8@Z8-3936
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[49] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[48] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[43] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
Ï
ESequential element (%s) is unused and will be removed from module %s.3332*oasys2b
N\inst/gen_axilite.gen_b2s_conv.axilite_b2s/SI_REG/aw_pipe/m_payload_i_reg[42] 2default:default2(
system_top_auto_pc_32default:defaultZ8-3332
‘
ÅMessage '%s' appears more than %s times and has been disabled. User can change this message limit to see more message instances.
14*common2 
Synth 8-33322default:default2
1002default:defaultZ17-14
©
%s*synth2ô
ÑFinished Cross Boundary Optimization : Time (s): cpu = 00:01:52 ; elapsed = 00:01:58 . Memory (MB): peak = 610.363 ; gain = 458.828
2default:default
¢
%s*synth2í
~---------------------------------------------------------------------------------
Start RAM, DSP and Shift Register Reporting
2default:default
u
%s*synth2f
R---------------------------------------------------------------------------------
2default:default
)
%s*synth2

DSP:
2default:default
Æ
%s*synth2û
â+------------+----------------+--------------+------------------+--------+--------+--------+--------+------+------+------+------+------+
2default:default
Ø
%s*synth2ü
ä|Module Name | OP MODE        | Neg Edge Clk | A Size (Signed?) | B Size | C Size | D Size | P Size | AREG | BREG | CREG | DREG | PREG | 
2default:default
Æ
%s*synth2û
â+------------+----------------+--------------+------------------+--------+--------+--------+--------+------+------+------+------+------+
2default:default
Ø
%s*synth2ü
ä|Chart       | A*B            | No           | 18 (N)           | 9 (N)  | 48 (N) | 25 (N) | 48 (Y) | 0    | 0    | 1    | 1    | 0    | 
2default:default
Ø
%s*synth2ü
ä|Chart       | (PCIN>>17)+A*B | No           | 16 (N)           | 9 (N)  | 23 (Y) | 25 (N) | 23 (N) | 0    | 0    | 1    | 1    | 0    | 
2default:default
Ø
%s*synth2ü
ä+------------+----------------+--------------+------------------+--------+--------+--------+--------+------+------+------+------+------+

2default:default
¶
%s*synth2ñ
Å---------------------------------------------------------------------------------
Finished RAM, DSP and Shift Register Reporting
2default:default
u
%s*synth2f
R---------------------------------------------------------------------------------
2default:default
û
%s*synth2é
zFinished Area Optimization : Time (s): cpu = 00:01:55 ; elapsed = 00:02:01 . Memory (MB): peak = 652.672 ; gain = 501.137
2default:default
{
%s*synth2l
XINFO: Moved 1 constraints on hierarchical pins to their respective driving/loading pins
2default:default
≠
%s*synth2ù
àFinished Applying XDC Timing Constraints : Time (s): cpu = 00:02:02 ; elapsed = 00:02:08 . Memory (MB): peak = 833.270 ; gain = 681.734
2default:default
†
%s*synth2ê
|Finished Timing Optimization : Time (s): cpu = 00:02:04 ; elapsed = 00:02:10 . Memory (MB): peak = 850.332 ; gain = 698.797
2default:default
ü
%s*synth2è
{Finished Technology Mapping : Time (s): cpu = 00:02:09 ; elapsed = 00:02:16 . Memory (MB): peak = 878.703 ; gain = 727.168
2default:default
o
%s*synth2`
Ldesign system_top_auto_pc_3 has 4 max_fanout violations cannot be satisfied
2default:default
D
%s*synth25
!Gated Clock Conversion mode: off
2default:default
ô
%s*synth2â
uFinished IO Insertion : Time (s): cpu = 00:02:11 ; elapsed = 00:02:18 . Memory (MB): peak = 878.703 ; gain = 727.168
2default:default
;
%s*synth2,

Report Check Netlist: 
2default:default
l
%s*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:default
l
%s*synth2]
I|      |Item              |Errors |Warnings |Status |Description       |
2default:default
l
%s*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:default
l
%s*synth2]
I|1     |multi_driven_nets |      0|        0|Passed |Multi driven nets |
2default:default
l
%s*synth2]
I+------+------------------+-------+---------+-------+------------------+
2default:default
™
%s*synth2ö
ÖFinished Renaming Generated Instances : Time (s): cpu = 00:02:11 ; elapsed = 00:02:18 . Memory (MB): peak = 878.703 ; gain = 727.168
2default:default
ß
%s*synth2ó
ÇFinished Rebuilding User Hierarchy : Time (s): cpu = 00:02:12 ; elapsed = 00:02:18 . Memory (MB): peak = 878.703 ; gain = 727.168
2default:default
¢
%s*synth2í
~---------------------------------------------------------------------------------
Start RAM, DSP and Shift Register Reporting
2default:default
u
%s*synth2f
R---------------------------------------------------------------------------------
2default:default
<
%s*synth2-

Dynamic Shift Register:
2default:default
á
%s*synth2x
d+------------+----------------+--------+------------+--------+---------+--------+--------+--------+
2default:default
à
%s*synth2y
e|Module Name | RTL Name       | Length | Data Width | SRL16E | SRLC32E | Mux F7 | Mux F8 | Mux F9 | 
2default:default
á
%s*synth2x
d+------------+----------------+--------+------------+--------+---------+--------+--------+--------+
2default:default
à
%s*synth2y
e|dsrl        | memory_reg[3]  | 4      | 20         | 20     | 0       | 0      | 0      | 0      | 
2default:default
à
%s*synth2y
e|dsrl__1     | memory_reg[3]  | 4      | 2          | 2      | 0       | 0      | 0      | 0      | 
2default:default
à
%s*synth2y
e|dsrl__2     | memory_reg[31] | 32     | 34         | 0      | 34      | 0      | 0      | 0      | 
2default:default
à
%s*synth2y
e|dsrl__3     | memory_reg[31] | 32     | 13         | 0      | 13      | 0      | 0      | 0      | 
2default:default
à
%s*synth2y
e+------------+----------------+--------+------------+--------+---------+--------+--------+--------+

2default:default
¶
%s*synth2ñ
Å---------------------------------------------------------------------------------
Finished RAM, DSP and Shift Register Reporting
2default:default
u
%s*synth2f
R---------------------------------------------------------------------------------
2default:default
8
%s*synth2)

Report BlackBoxes: 
2default:default
A
%s*synth22
+-+--------------+----------+
2default:default
A
%s*synth22
| |BlackBox name |Instances |
2default:default
A
%s*synth22
+-+--------------+----------+
2default:default
A
%s*synth22
+-+--------------+----------+
2default:default
8
%s*synth2)

Report Cell Usage: 
2default:default
?
%s*synth20
+------+-----------+------+
2default:default
?
%s*synth20
|      |Cell       |Count |
2default:default
?
%s*synth20
+------+-----------+------+
2default:default
?
%s*synth20
|1     |BIBUF      |   130|
2default:default
?
%s*synth20
|2     |BUFG       |     3|
2default:default
?
%s*synth20
|3     |CARRY4     |   337|
2default:default
?
%s*synth20
|4     |DSP48E1_1  |     2|
2default:default
?
%s*synth20
|5     |GND        |     1|
2default:default
?
%s*synth20
|6     |LUT1       |   247|
2default:default
?
%s*synth20
|7     |LUT2       |   923|
2default:default
?
%s*synth20
|8     |LUT3       |   327|
2default:default
?
%s*synth20
|9     |LUT4       |   187|
2default:default
?
%s*synth20
|10    |LUT5       |   225|
2default:default
?
%s*synth20
|11    |LUT6       |   242|
2default:default
?
%s*synth20
|12    |MMCME2_ADV |     1|
2default:default
?
%s*synth20
|13    |PS7        |     1|
2default:default
?
%s*synth20
|14    |SRL16      |     1|
2default:default
?
%s*synth20
|15    |SRL16E     |    22|
2default:default
?
%s*synth20
|16    |SRLC32E    |    47|
2default:default
?
%s*synth20
|17    |VCC        |     1|
2default:default
?
%s*synth20
|18    |FDCE       |    72|
2default:default
?
%s*synth20
|19    |FDPE       |     2|
2default:default
?
%s*synth20
|20    |FDRE       |   613|
2default:default
?
%s*synth20
|21    |FDSE       |    63|
2default:default
?
%s*synth20
|22    |IBUF       |     1|
2default:default
?
%s*synth20
|23    |OBUF       |     8|
2default:default
?
%s*synth20
+------+-----------+------+
2default:default
<
%s*synth2-

Report Instance Areas: 
2default:default
ú
%s*synth2å
x+------+-------------------------------------------+-----------------------------------------------------------+------+
2default:default
ú
%s*synth2å
x|      |Instance                                   |Module                                                     |Cells |
2default:default
ú
%s*synth2å
x+------+-------------------------------------------+-----------------------------------------------------------+------+
2default:default
ú
%s*synth2å
x|1     |top                                        |                                                           |  3456|
2default:default
ú
%s*synth2å
x|2     |  system_top_i                             |system_top                                                 |  3448|
2default:default
ú
%s*synth2å
x|3     |    PWM_controller_PWM_Controller_ipcore_0 |system_top_PWM_controller_PWM_Controller_ipcore_0_0        |  1874|
2default:default
ú
%s*synth2å
x|4     |    axi_interconnect_0                     |system_top_axi_interconnect_0_0                            |  1281|
2default:default
ú
%s*synth2å
x|5     |      \s00_couplers/auto_pc                |system_top_auto_pc_3                                       |  1281|
2default:default
ú
%s*synth2å
x|6     |    clk_wiz_0                              |system_top_clk_wiz_0_0                                     |     5|
2default:default
ú
%s*synth2å
x|7     |      U0                                   |system_top_clk_wiz_0_0_clk_wiz                             |     5|
2default:default
ú
%s*synth2å
x|8     |    proc_sys_reset_0                       |system_top_proc_sys_reset_0_0                              |    65|
2default:default
ú
%s*synth2å
x|9     |      U0                                   |proc_sys_reset__parameterized0                             |    65|
2default:default
ú
%s*synth2å
x|10    |    processing_system7_0                   |system_top_processing_system7_0_0                          |   221|
2default:default
ú
%s*synth2å
x|11    |      U0                                   |processing_system7_v5_3_processing_system7__parameterized0 |   221|
2default:default
ú
%s*synth2å
x+------+-------------------------------------------+-----------------------------------------------------------+------+
2default:default
¶
%s*synth2ñ
ÅFinished Writing Synthesis Report : Time (s): cpu = 00:02:12 ; elapsed = 00:02:19 . Memory (MB): peak = 878.703 ; gain = 727.168
2default:default
j
%s*synth2[
GSynthesis finished with 0 errors, 0 critical warnings and 21 warnings.
2default:default
£
%s*synth2ì
Synthesis Optimization Complete : Time (s): cpu = 00:02:12 ; elapsed = 00:02:19 . Memory (MB): peak = 878.703 ; gain = 727.168
2default:default
\
-Analyzing %s Unisim elements for replacement
17*netlist2
52default:defaultZ29-17
a
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28
û
NRemoving redundant IBUF since it is not being driven by a top-level port. %s 
32*opt2:
&system_top_i/clk_wiz_0/U0/clkin1_ibufg2default:defaultZ31-32
^
1Inserted %s IBUFs to IO ports without IO buffers.100*opt2
02default:defaultZ31-140
^
1Inserted %s OBUFs to IO ports without IO buffers.101*opt2
02default:defaultZ31-141
C
Pushed %s inverter(s).
98*opt2
02default:defaultZ31-138
|
MSuccessfully populated the BRAM INIT strings from the following elf files: %s96*memdata2
 2default:defaultZ28-144
ö
!Unisim Transformation Summary:
%s111*project2^
J  A total of 1 instances were transformed.
  SRL16 => SRL16E: 1 instances
2default:defaultZ1-111
L
Releasing license: %s
83*common2
	Synthesis2default:defaultZ17-83
¿
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
2592default:default2
1442default:default2
02default:default2
02default:defaultZ4-41
U
%s completed successfully
29*	vivadotcl2 
synth_design2default:defaultZ4-42
˛
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
synth_design: 2default:default2
00:02:262default:default2
00:02:332default:default2
1230.5632default:default2
1021.1562default:defaultZ17-268
<
%Done setting XDC timing constraints.
35*timingZ38-35
Ä
treport_utilization: Time (s): cpu = 00:00:00 ; elapsed = 00:00:00.051 . Memory (MB): peak = 1230.563 ; gain = 0.000
*common
w
Exiting %s at %s...
206*common2
Vivado2default:default2,
Thu Jan 15 17:52:43 20152default:defaultZ17-206