/**
  ******************************************************************************
  * @file    stm32f0xx_it.h 
  * @brief   This file contains the headers of the interrupt handlers.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2016 STMicroelectronics. All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                               www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F0xx_IT_H
#define __STM32F0xx_IT_H

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
#if defined(_TRACE)||defined(_GUI_INTERFACE)
#include "tracer_emb_conf.h"
#endif /* _TRACE */
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void NMI_Handler(void);
void HardFault_Handler(void);
void SysTick_Handler(void);
#if defined(_TRACE)||defined(_GUI_INTERFACE)
void TRACER_EMB_USART_IRQHANDLER(void);
#endif /*_TRACE || _GUI_INTERFACE */
#if defined(_TRACE)||defined(_GUI_INTERFACE)
#if TRACER_EMB_DMA_MODE == 1UL
void TRACER_EMB_TX_DMA_IRQHANDLER(void);
#endif
#else /* USBPD_CLI */
void BSP_USART_IRQHandler(void);
#endif /* _TRACE */
void ALERT_PORT0_EXTI_IRQHandler(void);
void I2C2_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F0xx_IT_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
