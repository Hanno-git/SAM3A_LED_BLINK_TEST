################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../Core/Inc \
../Device_Startup/ \
../Drivers/Inc \
../Drivers/Inc/component \
../Drivers/Inc/instance \
../Drivers/Inc/pio \
../Drivers/Src \
../Inc/ \
../Drivers \
../Core \
../Src


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Device_Startup/startup_sam3xa.c \
../Device_Startup/system_sam3xa.c \
../Src/main.c \
../Src/pio_init.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Device_Startup/startup_sam3xa.o \
Device_Startup/system_sam3xa.o \
Src/main.o \
Src/pio_init.o

OBJS_AS_ARGS +=  \
Device_Startup/startup_sam3xa.o \
Device_Startup/system_sam3xa.o \
Src/main.o \
Src/pio_init.o

C_DEPS +=  \
Device_Startup/startup_sam3xa.d \
Device_Startup/system_sam3xa.d \
Src/main.d \
Src/pio_init.d

C_DEPS_AS_ARGS +=  \
Device_Startup/startup_sam3xa.d \
Device_Startup/system_sam3xa.d \
Src/main.d \
Src/pio_init.d

OUTPUT_FILE_PATH +=BlinkySAM3A.elf

OUTPUT_FILE_PATH_AS_ARGS +=BlinkySAM3A.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+=  \
../Device_Startup/sam3a4c_flash.ld \
../Device_Startup/sam3a4c_sram.ld \
../Device_Startup/sam3xa_flash.ld \
../Device_Startup/sam3xa_sram.ld


# AVR32/GNU C Compiler
Device_Startup/startup_sam3xa.o: ../Device_Startup/startup_sam3xa.c
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE)  -x c -mthumb -D__SAM3A4C__ -DDEBUG  -I"../Inc" -I"../Drivers/Inc" -I"../Core/Inc"  -Og -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m3 -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

Device_Startup/system_sam3xa.o: ../Device_Startup/system_sam3xa.c
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE)  -x c -mthumb -D__SAM3A4C__ -DDEBUG  -I"../Inc" -I"../Drivers/Inc" -I"../Core/Inc"  -Og -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m3 -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

Src/main.o: ../Src/main.c
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE)  -x c -mthumb -D__SAM3A4C__ -DDEBUG  -I"../Inc" -I"../Drivers/Inc" -I"../Core/Inc"  -Og -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m3 -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

Src/pio_init.o: ../Src/pio_init.c
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE)  -x c -mthumb -D__SAM3A4C__ -DDEBUG  -I"../Inc" -I"../Drivers/Inc" -I"../Core/Inc"  -Og -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m3 -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker : 6.3.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mthumb -Wl,-Map="BlinkySAM3A.map" -Wl,--start-group -lm  -Wl,--end-group -L"..\\Device_Startup"  -Wl,--gc-sections -mcpu=cortex-m3 -Tsam3a4c_flash.ld  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O binary "BlinkySAM3A.elf" "BlinkySAM3A.bin"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "BlinkySAM3A.elf" "BlinkySAM3A.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O binary "BlinkySAM3A.elf" "BlinkySAM3A.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objdump.exe" -h -S "BlinkySAM3A.elf" > "BlinkySAM3A.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "BlinkySAM3A.elf" "BlinkySAM3A.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\arm\arm-gnu-toolchain\bin\arm-none-eabi-size.exe" "BlinkySAM3A.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "BlinkySAM3A.elf" "BlinkySAM3A.a" "BlinkySAM3A.hex" "BlinkySAM3A.bin" "BlinkySAM3A.lss" "BlinkySAM3A.eep" "BlinkySAM3A.map" "BlinkySAM3A.srec"
	