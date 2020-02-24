/**
  ******************************************************************************
  * @file    usbpd_task.h
  * @author  MCD Application Team
  * @brief   This file contains the definition of the Non RTOS task
  *          controls.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
#ifndef __USBPD_TASK_H_
#define __USBPD_TASK_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32_seq.h"
#include "stm32_timer.h"
/** @addtogroup STM32_USBPD_LIBRARY
  * @{
  */

/** @addtogroup USBPD_CORE
  * @{
  */

/** @addtogroup USBPD_CORE_TASK
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/** @defgroup USBPD_CORE_TASK_Exported_types USBPD CORE TASK Exported types
  * @{
  */

/**
  * @brief  Definition of the task in NON RTOS mode.
  */
typedef enum {
  TASK_CAD  = 1 << 0,
  TASK_PE_0 = 1 << 1,
  TASK_PE_1 = 1 << 2,
  TASK_TRACE= 1 << 3,
  TASK_USER = 1 << 4,
  TASK_GUI  = 1 << 5
}USBPD_Task;
/**
  * @}
  */

/* Exported define -----------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

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

#endif /* __USBPD_CAD_H_ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
