################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Application/Startup/startup_stm32f072rbtx.s 

OBJS += \
./Application/Startup/startup_stm32f072rbtx.o 


# Each subdirectory must supply rules for building sources it contributes
Application/Startup/%.o: ../Application/Startup/%.s
	arm-none-eabi-gcc -mcpu=cortex-m0 -g3 -c -I../../Inc -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -x assembler-with-cpp --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

