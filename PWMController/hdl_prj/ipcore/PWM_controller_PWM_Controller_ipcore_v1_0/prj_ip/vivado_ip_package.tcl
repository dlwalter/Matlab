create_project prj_ip {} -part xc7z020clg484-1 -ip -force
set_property ip_repo_paths {../../} [current_fileset]
ipx::infer_core -name {prj_packager} -directory {../prj_packager} {../}

# Set IP properties
set_property display_name PWM_controller_PWM_Controller_ipcore [ipx::current_core]
set_property version {1.0} [ipx::current_core]
set_property library {ip} [ipx::current_core]
set_property supported_families {{zynq} {Production} {artix7} {Production} {kintex7} {Production} {virtex7} {Production}} [ipx::current_core]
set_property taxonomy {{/HDL Coder Generated IP}} [ipx::current_core]
set_property description {HDL Coder generated IP} [ipx::current_core]

# Add HDL source files
add_files -norecurse {../hdl/vhdl/PWM_Controller_pkg.vhd}
add_files -norecurse {../hdl/vhdl/Calculate_f_coeff.vhd}
add_files -norecurse {../hdl/vhdl/Chart.vhd}
add_files -norecurse {../hdl/vhdl/PWM_Controller.vhd}
add_files -norecurse {../hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd}
add_files -norecurse {../hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd}
add_files -norecurse {../hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd}
add_files -norecurse {../hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd}
add_files -norecurse {../hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd}
ipx::add_file {hdl/vhdl/PWM_Controller_pkg.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_Controller_pkg.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_Controller_pkg.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_Controller_pkg.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/Calculate_f_coeff.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/Calculate_f_coeff.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/Calculate_f_coeff.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/Calculate_f_coeff.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/Chart.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/Chart.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/Chart.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/Chart.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_Controller.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_Controller.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_Controller.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_Controller.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_dut.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite_module.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_addr_decoder.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore_axi_lite.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd} [ipx::get_file_group xilinx_vhdlsynthesis [ipx::current_core]]]
ipx::add_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]
set_property type {{vhdlSource}} [ipx::get_file {hdl/vhdl/PWM_controller_PWM_Controller_ipcore.vhd} [ipx::get_file_group xilinx_vhdlbehavioralsimulation [ipx::current_core]]]

# Add bus interfaces
ipx::remove_all_bus_interface [ipx::current_core]
ipx::remove_all_memory_map [ipx::current_core]
# AXI4_Lite Slave
ipx::add_bus_interface {AXI4_Lite} [ipx::current_core]
set_property abstraction_type_vlnv {xilinx.com:interface:aximm_rtl:1.0} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property bus_type_vlnv {xilinx.com:interface:aximm:1.0} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
ipx::add_port_map {AWADDR} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_AWADDR} [ipx::get_port_map AWADDR [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {AWVALID} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_AWVALID} [ipx::get_port_map AWVALID [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {WDATA} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_WDATA} [ipx::get_port_map WDATA [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {WSTRB} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_WSTRB} [ipx::get_port_map WSTRB [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {WVALID} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_WVALID} [ipx::get_port_map WVALID [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {BREADY} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_BREADY} [ipx::get_port_map BREADY [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {ARADDR} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_ARADDR} [ipx::get_port_map ARADDR [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {ARVALID} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_ARVALID} [ipx::get_port_map ARVALID [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {RREADY} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_RREADY} [ipx::get_port_map RREADY [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {AWREADY} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_AWREADY} [ipx::get_port_map AWREADY [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {WREADY} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_WREADY} [ipx::get_port_map WREADY [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {BRESP} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_BRESP} [ipx::get_port_map BRESP [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {BVALID} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_BVALID} [ipx::get_port_map BVALID [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {ARREADY} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_ARREADY} [ipx::get_port_map ARREADY [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {RDATA} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_RDATA} [ipx::get_port_map RDATA [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {RRESP} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_RRESP} [ipx::get_port_map RRESP [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_port_map {RVALID} [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]
set_property physical_name {AXI4_Lite_RVALID} [ipx::get_port_map RVALID [ipx::get_bus_interface AXI4_Lite [ipx::current_core]]]
ipx::add_bus_interface {AXI4_Lite_signal_clock} [ipx::current_core]
set_property abstraction_type_vlnv {xilinx.com:signal:clock_rtl:1.0} [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]
set_property bus_type_vlnv {xilinx.com:signal:clock:1.0} [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]
ipx::add_port_map {CLK} [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]
set_property physical_name {AXI4_Lite_ACLK} [ipx::get_port_map CLK [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]]
ipx::add_bus_interface {AXI4_Lite_signal_reset} [ipx::current_core]
set_property abstraction_type_vlnv {xilinx.com:signal:reset_rtl:1.0} [ipx::get_bus_interface AXI4_Lite_signal_reset [ipx::current_core]]
set_property bus_type_vlnv {xilinx.com:signal:reset:1.0} [ipx::get_bus_interface AXI4_Lite_signal_reset [ipx::current_core]]
ipx::add_port_map {RST} [ipx::get_bus_interface AXI4_Lite_signal_reset [ipx::current_core]]
set_property physical_name {AXI4_Lite_ARESETN} [ipx::get_port_map RST [ipx::get_bus_interface AXI4_Lite_signal_reset [ipx::current_core]]]
ipx::add_bus_parameter {ASSOCIATED_BUSIF} [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]
set_property value {AXI4_Lite} [ipx::get_bus_parameter ASSOCIATED_BUSIF [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]]
ipx::add_bus_parameter {ASSOCIATED_RESET} [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]
set_property value {AXI4_Lite_ARESETN} [ipx::get_bus_parameter ASSOCIATED_RESET [ipx::get_bus_interface AXI4_Lite_signal_clock [ipx::current_core]]]
ipx::add_bus_parameter {POLARITY} [ipx::get_bus_interface AXI4_Lite_signal_reset [ipx::current_core]]
set_property value {ACTIVE_LOW} [ipx::get_bus_parameter POLARITY [ipx::get_bus_interface AXI4_Lite_signal_reset [ipx::current_core]]]
ipx::add_memory_map {AXI4_Lite} [ipx::current_core]
ipx::add_address_block {reg0} [ipx::get_memory_map AXI4_Lite [ipx::current_core]]
set_property range {65536} [ipx::get_address_block reg0 [ipx::get_memory_map AXI4_Lite [ipx::current_core]]]


# Add report files
ipx::add_file {doc/PWM_controller_ip_core_report.html} [ipx::get_file_group product_guide [ipx::current_core]]
set_property type {{html}} [ipx::get_file {doc/PWM_controller_ip_core_report.html} [ipx::get_file_group product_guide [ipx::current_core]]]
ipx::add_file {doc/PWM_controller_ip_core_report.pdf} [ipx::get_file_group product_guide [ipx::current_core]]
set_property type {{pdf}} [ipx::get_file {doc/PWM_controller_ip_core_report.pdf} [ipx::get_file_group product_guide [ipx::current_core]]]

# Add C files
ipx::add_file_group -type {software_driver} {} [ipx::current_core]
ipx::add_file {include/PWM_controller_PWM_Controller_ipcore_addr.h} [ipx::get_file_group {xilinx_softwaredriver} [ipx::current_core]]
set_property type {{cSource}} [ipx::get_file {include/PWM_controller_PWM_Controller_ipcore_addr.h} [ipx::get_file_group {xilinx_softwaredriver} [ipx::current_core]]]
ipx::create_xgui_files [ipx::current_core]
ipx::check_integrity -quiet [ipx::current_core]
ipx::save_core [ipx::current_core]

# Package IP
ipx::archive_core {../PWM_controller_PWM_Controller_ipcore_v1_0.zip} [ipx::current_core]
close_project
exit
