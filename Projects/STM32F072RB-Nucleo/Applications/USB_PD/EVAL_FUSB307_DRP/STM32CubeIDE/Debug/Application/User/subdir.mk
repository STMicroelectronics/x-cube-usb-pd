################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/main.c \
C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/stm32f0xx_hal_msp.c \
C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/stm32f0xx_it.c \
C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/usbpd_dpm_user.c \
C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/usbpd_pwr_if.c \
C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/usbpd_vdm_user.c 

OBJS += \
./Application/User/main.o \
./Application/User/stm32f0xx_hal_msp.o \
./Application/User/stm32f0xx_it.o \
./Application/User/usbpd_dpm_user.o \
./Application/User/usbpd_pwr_if.o \
./Application/User/usbpd_vdm_user.o 

C_DEPS += \
./Application/User/main.d \
./Application/User/stm32f0xx_hal_msp.d \
./Application/User/stm32f0xx_it.d \
./Application/User/usbpd_dpm_user.d \
./Application/User/usbpd_pwr_if.d \
./Application/User/usbpd_vdm_user.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/main.o: C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DUSBPD_TCPM_LIB_PD3_CONFIG_1 -DSTM32F072xB '-D_BATTERY=USBPD_FALSE' -D_RTOS -D_TRACE -D_GUI_INTERFACE '-D_STATUS=USBPD_TRUE' -DUSE_STM32F0XX_NUCLEO '-D_ALERT=USBPD_TRUE' '-D_MANU_INFO=USBPD_TRUE' -DDEBUG -DUSBPD_TCPM_MODULE_ENABLED -D_DRP '-DUSBPD_PORT_COUNT=1' -DUSE_HAL_DRIVER '-D_SRC_CAPA_EXT=USBPD_FALSE' -D_VCONN_SUPPORT -DUSE_FULL_LL_DRIVER '-D_PPS=USBPD_FALSE' -D_SNK -c -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../../../../../../Drivers/STM32F0xx_HAL_Driver/Inc -I../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../../../../../../../Drivers/BSP/Components/fusb307 -I../../../../../../../Drivers/BSP/STM32F0xx-Nucleo -I../../Inc -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../../../../../Utilities/TRACER_EMB -I../../../../../../../Utilities/GUI_INTERFACE -I../../../../../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Application/User/main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/stm32f0xx_hal_msp.o: C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/stm32f0xx_hal_msp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DUSBPD_TCPM_LIB_PD3_CONFIG_1 -DSTM32F072xB '-D_BATTERY=USBPD_FALSE' -D_RTOS -D_TRACE -D_GUI_INTERFACE '-D_STATUS=USBPD_TRUE' -DUSE_STM32F0XX_NUCLEO '-D_ALERT=USBPD_TRUE' '-D_MANU_INFO=USBPD_TRUE' -DDEBUG -DUSBPD_TCPM_MODULE_ENABLED -D_DRP '-DUSBPD_PORT_COUNT=1' -DUSE_HAL_DRIVER '-D_SRC_CAPA_EXT=USBPD_FALSE' -D_VCONN_SUPPORT -DUSE_FULL_LL_DRIVER '-D_PPS=USBPD_FALSE' -D_SNK -c -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../../../../../../Drivers/STM32F0xx_HAL_Driver/Inc -I../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../../../../../../../Drivers/BSP/Components/fusb307 -I../../../../../../../Drivers/BSP/STM32F0xx-Nucleo -I../../Inc -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../../../../../Utilities/TRACER_EMB -I../../../../../../../Utilities/GUI_INTERFACE -I../../../../../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Application/User/stm32f0xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/stm32f0xx_it.o: C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/stm32f0xx_it.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DUSBPD_TCPM_LIB_PD3_CONFIG_1 -DSTM32F072xB '-D_BATTERY=USBPD_FALSE' -D_RTOS -D_TRACE -D_GUI_INTERFACE '-D_STATUS=USBPD_TRUE' -DUSE_STM32F0XX_NUCLEO '-D_ALERT=USBPD_TRUE' '-D_MANU_INFO=USBPD_TRUE' -DDEBUG -DUSBPD_TCPM_MODULE_ENABLED -D_DRP '-DUSBPD_PORT_COUNT=1' -DUSE_HAL_DRIVER '-D_SRC_CAPA_EXT=USBPD_FALSE' -D_VCONN_SUPPORT -DUSE_FULL_LL_DRIVER '-D_PPS=USBPD_FALSE' -D_SNK -c -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../../../../../../Drivers/STM32F0xx_HAL_Driver/Inc -I../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../../../../../../../Drivers/BSP/Components/fusb307 -I../../../../../../../Drivers/BSP/STM32F0xx-Nucleo -I../../Inc -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../../../../../Utilities/TRACER_EMB -I../../../../../../../Utilities/GUI_INTERFACE -I../../../../../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Application/User/stm32f0xx_it.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/usbpd_dpm_user.o: C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/usbpd_dpm_user.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DUSBPD_TCPM_LIB_PD3_CONFIG_1 -DSTM32F072xB '-D_BATTERY=USBPD_FALSE' -D_RTOS -D_TRACE -D_GUI_INTERFACE '-D_STATUS=USBPD_TRUE' -DUSE_STM32F0XX_NUCLEO '-D_ALERT=USBPD_TRUE' '-D_MANU_INFO=USBPD_TRUE' -DDEBUG -DUSBPD_TCPM_MODULE_ENABLED -D_DRP '-DUSBPD_PORT_COUNT=1' -DUSE_HAL_DRIVER '-D_SRC_CAPA_EXT=USBPD_FALSE' -D_VCONN_SUPPORT -DUSE_FULL_LL_DRIVER '-D_PPS=USBPD_FALSE' -D_SNK -c -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../../../../../../Drivers/STM32F0xx_HAL_Driver/Inc -I../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../../../../../../../Drivers/BSP/Components/fusb307 -I../../../../../../../Drivers/BSP/STM32F0xx-Nucleo -I../../Inc -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../../../../../Utilities/TRACER_EMB -I../../../../../../../Utilities/GUI_INTERFACE -I../../../../../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Application/User/usbpd_dpm_user.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/usbpd_pwr_if.o: C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/usbpd_pwr_if.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DUSBPD_TCPM_LIB_PD3_CONFIG_1 -DSTM32F072xB '-D_BATTERY=USBPD_FALSE' -D_RTOS -D_TRACE -D_GUI_INTERFACE '-D_STATUS=USBPD_TRUE' -DUSE_STM32F0XX_NUCLEO '-D_ALERT=USBPD_TRUE' '-D_MANU_INFO=USBPD_TRUE' -DDEBUG -DUSBPD_TCPM_MODULE_ENABLED -D_DRP '-DUSBPD_PORT_COUNT=1' -DUSE_HAL_DRIVER '-D_SRC_CAPA_EXT=USBPD_FALSE' -D_VCONN_SUPPORT -DUSE_FULL_LL_DRIVER '-D_PPS=USBPD_FALSE' -D_SNK -c -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../../../../../../Drivers/STM32F0xx_HAL_Driver/Inc -I../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../../../../../../../Drivers/BSP/Components/fusb307 -I../../../../../../../Drivers/BSP/STM32F0xx-Nucleo -I../../Inc -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../../../../../Utilities/TRACER_EMB -I../../../../../../../Utilities/GUI_INTERFACE -I../../../../../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Application/User/usbpd_pwr_if.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/usbpd_vdm_user.o: C:/git/_Delivery/F0/GIT/Firmware/Projects/STM32F072RB-Nucleo/Applications/USB_PD/EVAL_FUSB307_DRP/Src/usbpd_vdm_user.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DUSBPD_TCPM_LIB_PD3_CONFIG_1 -DSTM32F072xB '-D_BATTERY=USBPD_FALSE' -D_RTOS -D_TRACE -D_GUI_INTERFACE '-D_STATUS=USBPD_TRUE' -DUSE_STM32F0XX_NUCLEO '-D_ALERT=USBPD_TRUE' '-D_MANU_INFO=USBPD_TRUE' -DDEBUG -DUSBPD_TCPM_MODULE_ENABLED -D_DRP '-DUSBPD_PORT_COUNT=1' -DUSE_HAL_DRIVER '-D_SRC_CAPA_EXT=USBPD_FALSE' -D_VCONN_SUPPORT -DUSE_FULL_LL_DRIVER '-D_PPS=USBPD_FALSE' -D_SNK -c -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../../../../../../Drivers/STM32F0xx_HAL_Driver/Inc -I../../../../../../../Middlewares/ST/STM32_USBPD_Library/Core/inc -I../../../../../../../Drivers/BSP/Components/fusb307 -I../../../../../../../Drivers/BSP/STM32F0xx-Nucleo -I../../Inc -I../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0 -I../../../../../../../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../../../../../../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../../../../../../Utilities/TRACER_EMB -I../../../../../../../Utilities/GUI_INTERFACE -I../../../../../../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Application/User/usbpd_vdm_user.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
