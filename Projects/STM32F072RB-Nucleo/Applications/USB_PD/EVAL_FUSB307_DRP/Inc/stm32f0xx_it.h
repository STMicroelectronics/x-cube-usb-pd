/**
  ******************************************************************************
  * @file    stm32f0xx_it.h 
  * @author  MCD Application Team
  * @brief   This file contains the headers of the interrupt handlers.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 STMicroelectronics International N.V. 
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
