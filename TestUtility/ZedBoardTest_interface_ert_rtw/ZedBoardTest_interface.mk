###########################################################################
## Makefile generated for Simulink model 'ZedBoardTest_interface'. 
## 
## Makefile     : ZedBoardTest_interface.mk
## Generated on : Thu Feb 12 16:33:37 2015
## MATLAB Coder version: 2.7 (R2014b)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/ZedBoardTest_interface
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = ZedBoardTest_interface
MAKEFILE                  = ZedBoardTest_interface.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2014b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2014b/bin
MATLAB_ARCH_BIN           = C:/PROGRA~1/MATLAB/R2014b/bin/win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = C:/Projects/Quadcopter/TestUtility
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODELREF_LINK_RSPFILE_NAME = ZedBoardTest_interface_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Xilinx ISE Design Suite v14.4 | gmake (64-bit Windows)
# Supported Version(s):    
# ToolchainInfo Version:   R2014b
# Specification Revision:  1.0
# 

-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk


#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# XILINX_ARM_CROSS_COMPILE
# TARGET_LOAD_CMD_ARGS
# TARGET_PKG_INSTALLDIR

#-----------
# MACROS
#-----------

SHELL                    = %SystemRoot%/system32/cmd.exe
XILINXISE_TOOLS          = $(XILINX_ARM_CROSS_COMPILE)
CCOUTPUTFLAG             = --output_file=
LDOUTPUTFLAG             = --output_file=
EXE_FILE_EXT             = $(PROGRAM_FILE_EXT)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: Xilinx ISE Assembler
AS_PATH = $(XILINXISE_TOOLS)
AS = $(AS_PATH)/arm-xilinx-linux-gnueabi-as

# C Compiler: Xilinx ISE C Compiler
CC_PATH = $(XILINXISE_TOOLS)
CC = $(CC_PATH)/arm-xilinx-linux-gnueabi-gcc

# Linker: Xilinx ISE Linker
LD_PATH = $(XILINXISE_TOOLS)
LD = $(LD_PATH)/arm-xilinx-linux-gnueabi-gcc

# C++ Compiler: Xilinx ISE C++ Compiler
CPP_PATH = $(XILINXISE_TOOLS)
CPP = $(CPP_PATH)/arm-xilinx-linux-gnueabi-gcc

# C++ Linker: Xilinx ISE C++ Linker
CPP_LD_PATH = $(XILINXISE_TOOLS)
CPP_LD = $(CPP_LD_PATH)/arm-xilinx-linux-gnueabi-gcc

# Archiver: Xilinx ISE Archiver
AR_PATH = $(XILINXISE_TOOLS)
AR = $(AR_PATH)/arm-xilinx-linux-gnueabi-ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)/mex

# Download: Download
DOWNLOAD_PATH = $(TARGET_PKG_INSTALLDIR)
DOWNLOAD = $(DOWNLOAD_PATH)/download.bat

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = -r
ASFLAGS              = -c \
                       $(ASFLAGS_ADDITIONAL) \
                       $(INCLUDES)
CFLAGS               = -c \
                       -O0
CPPFLAGS             =
CPP_LDFLAGS          =
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       = $(TARGET_LOAD_CMD_ARGS)  $(ZYNQ_PASSWORD)  $(ZYNQ_USERNAME) $(ZYNQ_IPADDRESS) /tmp $(PRODUCT)
EXECUTE_FLAGS        =
LDFLAGS              = -lm   -lrt  -lpthread  -ldl
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =

#--------------------
# File extensions
#--------------------

OBJ_EXT             = .s.o
ASM_EXT             = .s
H_EXT               = .h
OBJ_EXT             = .c.o
C_EXT               = .c
EXE_EXT             =
SHAREDLIB_EXT       =
HPP_EXT             = .hpp
OBJ_EXT             = .cpp.o
CPP_EXT             = .cpp
EXE_EXT             =
SHAREDLIB_EXT       =
STATICLIB_EXT       = .lib
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/ZedBoardTest_interface
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -IC:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/include -I$(START_DIR)/ZedBoardTest_interface_ert_rtw -I$(START_DIR) -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -IC:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/@slCustomizer/../include -IC:/MATLAB/SupportPackages/R2014b/armcortexa/toolbox/target/supportpackages/arm_cortex_a/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D__AXI4STREAM_WRITE__ -DMODEL=ZedBoardTest_interface -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DON_TARGET_WAIT_FOR_START=1 -DONESTEPFCN=1 -DEXT_MODE=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DARM_PROJECT -DRT -DSTACK_SIZE=64
DEFINES_BUILD_ARGS = -DONESTEPFCN=1 -DEXT_MODE=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_OPTS = -DON_TARGET_WAIT_FOR_START=1
DEFINES_SKIPFORSIL = -DARM_PROJECT -DRT -DSTACK_SIZE=64
DEFINES_STANDARD = -DMODEL=ZedBoardTest_interface -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_IMPLIED) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = C:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/@slCustomizer/../src/axi4Lite.c axi4Stream.c $(START_DIR)/ZedBoardTest_interface_ert_rtw/ZedBoardTest_interface.c $(START_DIR)/ZedBoardTest_interface_ert_rtw/ZedBoardTest_interface_data.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/rtiostream_interface.c $(MATLAB_ROOT)/rtw/c/src/rtiostream/rtiostreamtcpip/rtiostream_tcpip.c C:/MATLAB/SupportPackages/R2014b/armcortexa/toolbox/target/supportpackages/arm_cortex_a/src/linuxinitialize.c

MAIN_SRC = $(START_DIR)/ZedBoardTest_interface_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = axi4Lite.c.o axi4Stream.c.o ert_main.c.o ZedBoardTest_interface.c.o ZedBoardTest_interface_data.c.o ext_svr.c.o updown.c.o ext_work.c.o rtiostream_utils.c.o rtiostream_interface.c.o rtiostream_tcpip.c.o linuxinitialize.c.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -march=armv7-a -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -march=armv7-a -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = -march=armv7-a -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -march=armv7-a -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = -march=armv7-a -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = -march=armv7-a -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : build
	@echo "### Invoking postbuild tool "Download" ..."
	$(DOWNLOAD) $(DOWNLOAD_FLAGS)
	@echo "### Done invoking postbuild tool."


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.c.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(MATLAB_ROOT)/rtw/c/src/rtiostream/rtiostreamtcpip/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(MATLAB_ROOT)/rtw/c/src/rtiostream/rtiostreamtcpip/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(MATLAB_ROOT)/rtw/c/src/rtiostream/rtiostreamtcpip/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(START_DIR)/ZedBoardTest_interface_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(START_DIR)/ZedBoardTest_interface_ert_rtw/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/ZedBoardTest_interface_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : C:/MATLAB/SupportPackages/R2014b/armcortexa/toolbox/target/supportpackages/arm_cortex_a/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : C:/MATLAB/SupportPackages/R2014b/armcortexa/toolbox/target/supportpackages/arm_cortex_a/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : C:/MATLAB/SupportPackages/R2014b/armcortexa/toolbox/target/supportpackages/arm_cortex_a/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : C:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/@slCustomizer/../src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : C:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/@slCustomizer/../src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : C:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/@slCustomizer/../src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : C:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : C:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : C:/MATLAB/SupportPackages/R2014b/xilinxzynq7000ec/toolbox/target/supportpackages/zynq/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *Object
	$(ECHO) "### Deleted all derived files."


