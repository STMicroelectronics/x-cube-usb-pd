################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Utilities/TRACER_EMB/subdir.mk
-include Utilities/GUI_INTERFACE/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/portable/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/CMSIS_RTOS/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/subdir.mk
-include Middlewares/ST/STM32_USBPD_Library/Core/subdir.mk
-include Drivers/STM32F0xx_HAL_Driver/subdir.mk
-include Drivers/CMSIS/subdir.mk
-include Drivers/BSP/STM32F0xx-Nucleo/subdir.mk
-include Drivers/BSP/Components/subdir.mk
-include Application/User/subdir.mk
-include Application/Startup/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
EVAL_FUSB307_DRP.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
EVAL_FUSB307_DRP.list \

OBJCOPY_BIN += \
EVAL_FUSB307_DRP.bin \


# All Target
all: EVAL_FUSB307_DRP.elf secondary-outputs

# Tool invocations
EVAL_FUSB307_DRP.elf: $(OBJS) $(USER_OBJS)
	arm-none-eabi-gcc -o "EVAL_FUSB307_DRP.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0 --specs=nosys.specs -Wl,-Map="EVAL_FUSB307_DRP.map" -Wl,--gc-sections -static -L../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/lib --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

EVAL_FUSB307_DRP.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "EVAL_FUSB307_DRP.list"
	@echo 'Finished building: $@'
	@echo ' '

EVAL_FUSB307_DRP.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "EVAL_FUSB307_DRP.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
