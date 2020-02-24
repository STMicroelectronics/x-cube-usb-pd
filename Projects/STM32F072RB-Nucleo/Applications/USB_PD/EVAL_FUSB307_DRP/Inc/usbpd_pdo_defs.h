/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    usbpd_pdo_defs.h
  * @author  MCD Application Team
  * @brief   This file contains selection of H file for PDO definition.
  ******************************************************************************
  *
  * Copyright (c) 2018 STMicroelectronics. All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

#ifndef __USBPD_PDO_DEF_H_
#define __USBPD_PDO_DEF_H_

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#if USBPD_PORT_COUNT == 1
     
#if defined(_DRP)
#include "usbpd_pdo_defs_Drp_1Port.h"
#elif defined(_SRC)
#include "usbpd_pdo_defs_Src_1Port.h"
#elif defined(_SNK)
#include "usbpd_pdo_defs_Snk_1Port.h"
#else
#error "Unknown PDO definition file"
#endif

#elif USBPD_PORT_COUNT == 2

#include "usbpd_pdo_defs_Drp_2Ports.h"

#else
#error "Unexpected nb of Ports for selecting PDO definition file"
#endif
/* USER CODE END Includes */

/* Exported functions --------------------------------------------------------*/

/* USER CODE BEGIN functions */

/* USER CODE END functions */

#ifdef __cplusplus
}
#endif

#endif /* __USBPD_PDO_DEF_H_ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

