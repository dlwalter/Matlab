open_project vivado_prj.xpr
set_property ip_repo_paths {./ipcore} [current_fileset]
update_ip_catalog
update_ip_catalog -delete_ip {./ipcore/PWM_controller_PWM_Controller_ipcore_v1_0/component.xml} -repo_path {./ipcore} -quiet
update_ip_catalog -add_ip {./ipcore/PWM_controller_PWM_Controller_ipcore_v1_0.zip} -repo_path {./ipcore}
update_ip_catalog
set HDLCODERIPVLNV [get_property VLNV [get_ipdefs -filter {NAME==PWM_controller_PWM_Controller_ipcore && VERSION==1.0}]]
set HDLCODERIPINST PWM_controller_PWM_Controller_ipcore_0
set BDFILEPATH [get_files -quiet system_top.bd]
open_bd_design $BDFILEPATH
create_bd_cell -type ip -vlnv $HDLCODERIPVLNV $HDLCODERIPINST
connect_bd_intf_net [get_bd_intf_pins $HDLCODERIPINST/AXI4_Lite] [get_bd_intf_pins axi_interconnect_0/M00_AXI]
connect_bd_net -net [get_bd_nets -of_objects [get_bd_pins clk_wiz_0/clk_out1]] [get_bd_pins $HDLCODERIPINST/IPCORE_CLK] [get_bd_pins clk_wiz_0/clk_out1]
connect_bd_net -net [get_bd_nets -of_objects [get_bd_pins clk_wiz_0/clk_out1]] [get_bd_pins $HDLCODERIPINST/AXI4_Lite_ACLK] [get_bd_pins clk_wiz_0/clk_out1]
connect_bd_net -net [get_bd_nets -of_objects [get_bd_pins proc_sys_reset_0/peripheral_aresetn]] [get_bd_pins $HDLCODERIPINST/IPCORE_RESETN] [get_bd_pins proc_sys_reset_0/peripheral_aresetn]
connect_bd_net -net [get_bd_nets -of_objects [get_bd_pins proc_sys_reset_0/peripheral_aresetn]] [get_bd_pins $HDLCODERIPINST/AXI4_Lite_ARESETN] [get_bd_pins proc_sys_reset_0/peripheral_aresetn]
create_bd_port -dir O -from 7 -to 0 PmodJA1_pin
connect_bd_net [get_bd_ports PmodJA1_pin] [get_bd_pins $HDLCODERIPINST/PmodJA1]
assign_bd_address
set_property range {65536} [get_bd_addr_segs {processing_system7_0/Data/SEG_PWM_controller_PWM_Controller_ipcore_0_reg0}]
set_property offset 0x400D0000 [get_bd_addr_segs {processing_system7_0/Data/SEG_PWM_controller_PWM_Controller_ipcore_0_reg0}]
make_wrapper -files $BDFILEPATH -top
regsub -all "system_top.vhd" [get_files system_top.vhd] "system_top_wrapper.vhd" TOPFILEPATH
add_files -norecurse $TOPFILEPATH
update_compile_order -fileset sources_1
validate_bd_design
save_bd_design
add_files -fileset constrs_1 -norecurse vivado_constraint.xdc
close_project
exit
