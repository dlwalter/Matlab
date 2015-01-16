set CHAINPOSITION 1
connect_hw_server -host localhost -port 60001
current_hw_target [get_hw_targets *]
open_hw_target
current_hw_device [lindex [get_hw_devices] $CHAINPOSITION]
refresh_hw_device -update_hw_probes false [lindex [get_hw_devices] $CHAINPOSITION]
set_property PROGRAM.FILE {./hdl_prj/vivado_ip_prj/vivado_prj.runs/impl_1/system_top_wrapper.bit} [lindex [get_hw_devices] $CHAINPOSITION]
program_hw_devices [lindex [get_hw_devices] $CHAINPOSITION]
close_hw_target [get_hw_targets *]
disconnect_hw_server localhost
exit
