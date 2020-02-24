/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    usbpd_vdm_user.h
  * @author  MCD Application Team
  * @brief   Header file for usbpd_vdm_user.c file
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

#ifndef __USBPD_VDM_USER_H_
#define __USBPD_VDM_USER_H_

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/
/** @addtogroup STM32_USBPD_APPLICATION
  * @{
  */

/** @addtogroup STM32_USBPD_APPLICATION_VDM_USER
  * @{
  */

/* Exported typedef ----------------------------------------------------------*/

/*
 * DisplayPort Status VDO
 */
typedef union
{
  uint32_t d32;
  struct
  {
    uint32_t   ConnectStatus  : 2;    /*!< Connect status : 00b ==  no (DFP|UFP)_D is connected or disabled.
                                           01b == DFP_D connected, 10b == UFP_D connected, 11b == both        */
    uint32_t   PowerLow       : 1;    /*!< Power low : 0 == normal or LPM disabled, 1 == DP disabled for LPM  */
    uint32_t   Enable         : 1;    /*!< Enabled : is DPout on/off.                                         */
    uint32_t   MultiFunction  : 1;    /*!< Multi-function preference : 0 == no pref, 1 == MF preferred        */
    uint32_t   USBConfig      : 1;    /*!< USB config : 0 == maintain current, 1 == switch to USB from DP     */
    uint32_t   ExitDPMode     : 1;    /*!< Exit DP Alt mode: 0 == maintain, 1 == exit                         */
    uint32_t   HPDState       : 1;    /*!< HPD state : 0 = HPD_LOW, 1 == HPD_HIGH                             */
    uint32_t   IRQ_HPD        : 1;    /*!< IRQ_HPD : 1 == irq arrived since last message otherwise 0.         */
    uint32_t   Reserved       : 22;   /*!< Reserved                                                           */
  }d;
}USBPD_DPStatus_TypeDef;

/*
 * DisplayPort Config capabilities
 */
#define MODE_DP_CONFIG_SELECT_USB               0u            /*!< Set configuration for USB.           */
#define MODE_DP_CONFIG_SELECT_UFP_U_AS_DFP_D    1u /*!< Set configuration for UFP_U_AS_DFP_. */
#define MODE_DP_CONFIG_SELECT_UFP_U_AS_UFP_D    2u /*!< Set configuration for UFP_U_AS_UFP_D.*/
#define MODE_DP_CONFIG_SELECT_RESERVED          3u       /*!< Reserved                             */

typedef uint32_t USBPD_MODE_DP_CONFIG_SELECT;

typedef union
{
  uint32_t d32;
  struct
  {
    USBPD_MODE_DP_CONFIG_SELECT   SelectConfiguration  : 2;    /*!< Selection configuration */
    uint32_t   Signaling                : 4;    /*!< Signaling for transport of DP protocol */
    uint32_t   Reserved1                : 2;    /*!< Reserved                               */
    uint32_t   UFP_U_Pin                : 8;    /*!< Configure UFP_U pin Assignement        */
    uint32_t   Reserved2                : 16;   /*!< Reserved                               */
  }d;
}USBPD_DPConfig_TypeDef;

/*
 * Structure to SVID received by the port partner
 */
typedef struct {
  uint32_t  NumSVIDs;             /*!< Number of received SVIDs                           */
  uint16_t  SVIDs[24];            /*!< List of received SVIDs                             */
  uint8_t   FlagAllSVIDReceived;  /*!< Flag to indicate that all SVIDs have been received */
}USBPD_SVIDPortPartnerInfo_TypeDef;

/* Exported define -----------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
USBPD_StatusTypeDef USBPD_VDM_UserInit(uint8_t PortNum);
void                USBPD_VDM_UserReset(uint8_t PortNum);
void                USBPD_VDM_UserCallback(uint8_t PortNum);
/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __USBPD_VDM_USER_H_ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
