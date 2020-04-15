/**
  ******************************************************************************
  * @file    usbpd_timersserver.h
  * @author  MCD Application Team
  * @brief   This file contains the headers of usbpd_timerserver.h.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics International N.V.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

#ifndef __USBPD_TIMERSSERVER_H_
#define __USBPD_TIMERSSERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup STM32_USBPD_LIBRARY
  * @{
  */

/** @addtogroup USBPD_DEVICE
  * @{
  */

/** @addtogroup USBPD_DEVICE_TIMESERVER
  * @{
  */

/* Exported constants --------------------------------------------------------*/
typedef enum {
  TIM_PORT0_TIMER1,
  TIM_PORT0_TIMER2,
  TIM_PORT1_TIMER1,
  TIM_PORT1_TIMER2,
  TIM_MAX
} TIM_identifier;

/* Exported types ------------------------------------------------------------*/
/* External variables --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
void    USBPD_TIM_Init(void);
void    USBPD_TIM_Start(TIM_identifier id, uint32_t us_time);
uint8_t USBPD_TIM_IsExpired(TIM_identifier id);

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __USBPD_TIMERSSERVER_H_ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

