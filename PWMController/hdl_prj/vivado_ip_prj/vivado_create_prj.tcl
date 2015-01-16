create_project vivado_prj {} -part xc7z020clg484-1 -force
set_property board em.avnet.com:zynq:zed:d [current_project]
set_property target_language VHDL [current_project]
source build_block_design.tcl
validate_bd_design
save_bd_design
close_project
exit
