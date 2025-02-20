######################################################
#
# XPS Tcl API script generated by PlanAhead
#
######################################################

proc _main_ {} {
  cd "C:/Projects/Quadcopter/ADXL345/hdl_prj/edk_prj"
  if { [ catch {xload xmp system.xmp} result ] } {
    exit 10
  }

  # Set host application type
  xset intstyle PA

  # Set design flow type
  xset flow ise

  # Save language
  set hdl_bak [xget hdl]

  # Set target language for the template
  xset hdl vhdl

  if { [catch {run stubgen} result] } {
    return -1
  }

  # Restore language
  xset hdl $hdl_bak
  return $result
}

# Generate Top-Level wrapper
if { [catch {_main_} result] } {
  exit -1
}

# Check return status and exit
if { [string length $result] == 0 } {
  exit 0
} else {
  exit $result
}
