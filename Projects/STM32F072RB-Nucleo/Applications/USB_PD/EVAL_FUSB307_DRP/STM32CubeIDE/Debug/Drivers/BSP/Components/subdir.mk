################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/git/_Delivery/F0/GIT/Firmware/Drivers/BSP/Components/fusb307/fusb305.c 

OBJS += \
./Drivers/BSP/Components/fusb305.o 

C_DEPS += \
./Drivers/BSP/Components/fusb305.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/fusb305.o: C:/git/_Delivery/F0/GIT/Firmware/Drivers/BSP/Components/fusb307/fusb305.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DUSBPD_TCPM_LIB_PD3_CONFIG_1 -DSTM32F072xB '-D_BATTERY=USBPD_FALSE' -D_RTOS -D_TRACE -D_GUI_INTERFACE '-D_STATUS=USBPD_TRUE' -DUSE_STM32F0XX_NUCLEO '-D_ALERT=USBPD_TRUE' '-D_MANU_INFO=USBPD_TRUE' -DDEBUG -DUSBPD_TCPM_MODULE_ENABLED -D_DRP '-DUSBPD_PORT_COUNT=1' -DUSE_HAL_DRIVER '-D_SRC_CAPA_EXT=USBPD_FALSE' -D_VCONN_SUPPORT -DUSE_FULL_LL_DRIVER '-D_PPS=USBPD_FALSE' -D_SNK -c -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../../../../../../Drivers/STM32F0xx_HAL_Driver/Inc -I../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../../../../../../../Drivers/BSP/Components/fusb307 -I../../../../../../../Drivers/BSP/STM32F0xx-Nucleo -I../../Inc -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../../../../../Utilities/TRACER_EMB -I../../../../../../../Utilities/GUI_INTERFACE -I../../../../../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/fusb305.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

