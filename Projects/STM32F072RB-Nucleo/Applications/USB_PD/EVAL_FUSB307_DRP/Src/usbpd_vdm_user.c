/**
  ******************************************************************************
  * @file    usbpd_vdm_user.c
  * @author  MCD Application Team
  * @brief   USBPD provider demo file
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

/* Includes ------------------------------------------------------------------*/
#include "usbpd_core.h"
#include "usbpd_dpm_conf.h"
#include "usbpd_vdm_user.h"
#include "usbpd_dpm_user.h"
/* USER CODE BEGIN Includes */
#include "stm32f0xx.h"
#if defined(_GUI_INTERFACE)
#include "gui_api.h"
#include "usbpd_gui_memmap.h"
#endif /* _GUI_INTERFACE */
#include "string.h"
#if defined(_DEBUG_TRACE)
#include "usbpd_trace.h"
#endif /* _DEBUG_TRACE */
/* USER CODE END Includes */

/** @addtogroup STM32_USBPD_APPLICATION
  * @{
  */

/** @addtogroup STM32_USBPD_APPLICATION_VDM_USER
  * @{
  */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN Private_define */
#if defined(USBPDCORE_SNK_CAPA_EXT)
#define VDM_CABLE_INFO      USBPD_CORE_SNK_EXTENDED_CAPA + 1U
#else
#define VDM_CABLE_INFO      USBPD_CORE_UNSTRUCTURED_VDM + 1U
#endif /* USBPDCORE_SNK_CAPA_EXT */
/* USER CODE END Private_define */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN Private_typedef */
/* GNU Compiler */
#if defined   (__GNUC__)
/* ARM Compiler */
#elif defined   (__CC_ARM)
#pragma anon_unions
/* IAR Compiler */
#elif defined (__ICCARM__)
#endif
/* USER CODE END Private_typedef */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN Private_macro */
#if defined(_DEBUG_TRACE)
#define VDM_USER_DEBUG_TRACE(_PORT_, __MESSAGE__)  USBPD_TRACE_Add(USBPD_TRACE_DEBUG,    (_PORT_), 0u,(__MESSAGE__), sizeof(__MESSAGE__) - 1u)
#else
#define VDM_USER_DEBUG_TRACE(_PORT_, __MESSAGE__)
#endif /* _DEBUG_TRACE */
/* USER CODE END Private_macro */

/* Private function prototypes -----------------------------------------------*/
/* List of callbacks for VDM layer */

static void                USBPD_VDM_InformIdentity(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef status, USBPD_DiscoveryIdentity_TypeDef *pIdentity);
static void                USBPD_VDM_InformSVID(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, USBPD_SVIDInfo_TypeDef *pListSVID);
static void                USBPD_VDM_InformMode(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, USBPD_ModeInfo_TypeDef *pModesInfo);
static void                USBPD_VDM_InformModeEnter(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, uint16_t SVID, uint32_t ModeIndex);
static void                USBPD_VDM_InformModeExit(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, uint16_t SVID, uint32_t ModeIndex);
static void                USBPD_VDM_InformSpecific(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_Command_Typedef VDMCommand, uint8_t *NbData, uint32_t *VDO);
static void                USBPD_VDM_SendSpecific(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_Command_Typedef VDMCommand, uint8_t *NbData, uint32_t *VDO);
#if defined(_UVDM)
static void                USBPD_VDM_SendUVDM(uint8_t PortNum, USBPD_UVDMHeader_TypeDef *pUVDM_Header, uint8_t *pNbData, uint32_t *pVDO);
static USBPD_StatusTypeDef USBPD_VDM_ReceiveUVDM(uint8_t PortNum, USBPD_UVDMHeader_TypeDef UVDM_Header, uint8_t *pNbData, uint32_t *pVDO);
#endif /* _UVDM */

/* USER CODE BEGIN Private_prototypes */

/* USER CODE END Private_prototypes */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Private_variables */

const USBPD_VDM_Callbacks vdmCallbacks =
{
  /* in case of DISCO : we do not manage the below requests */
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  USBPD_VDM_InformIdentity,
  USBPD_VDM_InformSVID,
  USBPD_VDM_InformMode,
  USBPD_VDM_InformModeEnter,
  USBPD_VDM_InformModeExit,
  NULL,
  NULL,
  USBPD_VDM_SendSpecific,
  NULL,
  USBPD_VDM_InformSpecific,
#if defined(_UVDM)
  USBPD_VDM_SendUVDM,
  USBPD_VDM_ReceiveUVDM,
#endif /* _UVDM */
};

extern USBPD_ParamsTypeDef DPM_Params[USBPD_PORT_COUNT];

extern GUI_SAVE_INFO                 DPM_GUI_SaveInfo;
/* USER CODE END Private_variables */

/* Private functions ---------------------------------------------------------*/


/**
  * @brief  Inform identity callback
  * @note   Function is called to save Identity information received in Discovery identity from port partner
            (answer to SVDM discovery identity sent by device)
  * @param  PortNum       current port number
  * @param  SOPType       SOP type 
  * @param  CommandStatus Command status based on @ref USBPD_VDM_CommandType_Typedef
  * @param  pIdentity     Pointer on the discovery identity information based on @ref USBPD_DiscoveryIdentity_TypeDef
  * @retval None
*/
static void USBPD_VDM_InformIdentity(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, USBPD_DiscoveryIdentity_TypeDef *pIdentity)
{
/* USER CODE BEGIN USBPD_VDM_InformIdentity */
  switch(CommandStatus)
  {
  case SVDM_RESPONDER_ACK :
    if (USBPD_SOPTYPE_SOP1 == SOPType)
    {
      uint8_t*  disco_ident;
      disco_ident = (uint8_t*)&DPM_Ports[PortNum].VDM_DiscoCableIdentify;
      memcpy(disco_ident, (uint8_t*)pIdentity, sizeof(USBPD_DiscoveryIdentity_TypeDef));
      if (NULL != DPM_GUI_SaveInfo)
      {
        DPM_GUI_SaveInfo(PortNum, VDM_CABLE_INFO, (uint8_t*)pIdentity, sizeof(USBPD_DiscoveryIdentity_TypeDef));
      }
    }
    else
    break;
  case SVDM_RESPONDER_NAK :
    /* Nothing to do */
    break;
  case SVDM_RESPONDER_BUSY :
    /* retry in 50ms */
    break;
  case SVDM_CABLE_NO_PD_CAPABLE :
    if (USBPD_SOPTYPE_SOP1 == SOPType)
    {
      USBPD_DPM_PE_VconnPwr(PortNum, USBPD_DISABLE);
      /* No more need to request VCONN ON as CABLE is not PD capable. */
      DPM_Ports[PortNum].DPM_CablePDCapable = USBPD_FALSE;
    }
    break;
  case SVDM_CABLE_TIMEOUT :
    if (USBPD_SOPTYPE_SOP1 == SOPType)
    {
    }
    break;
  default :
    break;
  }
/* USER CODE END USBPD_VDM_InformIdentity */
}

/**
  * @brief  Inform SVID callback
  * @note   Function is called to save list of SVID received in Discovery SVID from port partner
            (answer to SVDM discovery SVID sent by device)
  * @param  PortNum       current port number
  * @param  SOPType       SOP type 
  * @param  CommandStatus Command status based on @ref USBPD_VDM_CommandType_Typedef
  * @param  pListSVID     Pointer of list of SVID based on @ref USBPD_SVIDInfo_TypeDef
  * @retval None
  */
static void USBPD_VDM_InformSVID(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, USBPD_SVIDInfo_TypeDef *pListSVID)
{
/* USER CODE BEGIN USBPD_VDM_InformSVID */
/* USER CODE END USBPD_VDM_InformSVID */
}

/**
  * @brief  Inform Mode callback ( received in Discovery Modes ACK)
  * @note   Function is called to save list of modes linked to SVID received in Discovery mode from port partner
            (answer to SVDM discovery mode sent by device)
  * @param  PortNum         current port number
  * @param  SOPType         SOP type 
  * @param  CommandStatus   Command status based on @ref USBPD_VDM_CommandType_Typedef
  * @param  pModesInfo      Pointer of Modes info based on @ref USBPD_ModeInfo_TypeDef
  * @retval None
  */
static void USBPD_VDM_InformMode(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, USBPD_ModeInfo_TypeDef *pModesInfo)
{
/* USER CODE BEGIN USBPD_VDM_InformMode */
/* USER CODE END USBPD_VDM_InformMode */
}

/**
  * @brief  Inform Mode enter callback
  * @note   Function is called to inform if port partner accepted or not to enter in the mode
  *         specified in the SVDM enter mode sent by the device
  * @param  PortNum   current port number
  * @param  SOPType       SOP type
  * @param  CommandStatus Command status based on @ref USBPD_VDM_CommandType_Typedef
  * @param  SVID      SVID ID
  * @param  ModeIndex Index of the mode to be entered
  * @retval None
  */
static void USBPD_VDM_InformModeEnter(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, uint16_t SVID, uint32_t ModeIndex)
{
/* USER CODE BEGIN USBPD_VDM_InformModeEnter */
/* USER CODE END USBPD_VDM_InformModeEnter */
}

/**
  * @brief  Inform Exit Mode callback
  * @param  PortNum   current port number
  * @param  SVID      SVID ID
  * @param  ModeIndex Index of the mode to be entered
  * @retval None
  */
static void USBPD_VDM_InformModeExit(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_CommandType_Typedef CommandStatus, uint16_t SVID, uint32_t ModeIndex)
{
/* USER CODE BEGIN USBPD_VDM_InformModeExit */
/* USER CODE END USBPD_VDM_InformModeExit */
}

/**
  * @brief  VDM Send Specific message callback
  * @note   Function is called when device wants to send a SVDM specific init message to port partner
  *         (for instance DP status or DP configure can be filled through this function)
  * @param  PortNum    current port number
  * @param  SOPType    SOP type
  * @param  VDMCommand VDM command based on @ref USBPD_VDM_Command_Typedef
  * @param  pNbData    Pointer of number of VDO to send
  * @param  pVDO       Pointer of VDO to send
  * @retval None
  */
static void USBPD_VDM_SendSpecific(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_Command_Typedef VDMCommand, uint8_t *pNbData, uint32_t *pVDO)
{
/* USER CODE BEGIN USBPD_VDM_SendSpecific */
  /* Manage Specific message sent to EMC cable */
  if (USBPD_SOPTYPE_SOP != SOPType)
  {
    VDM_USER_DEBUG_TRACE(PortNum, "USBPD_VDM_SendSpecific(CABLE)");
  }
  else
{
  }
/* USER CODE END USBPD_VDM_SendSpecific */
}

/**
  * @brief  VDM Specific message callback to inform user of reception of VDM specific message
  * @note   Function is called when answer from SVDM specific init message has been received by the device
  *         (for instance, save DP status and DP configure data through this function)
  * @param  PortNum           current port number
  * @param  SOPType    SOP type
  * @param  VDMCommand VDM command based on @ref USBPD_VDM_Command_Typedef
  * @param  pNbData    Pointer of number of received VDO
  * @param  pVDO       Pointer of received VDO
  * @retval None
  */
static void USBPD_VDM_InformSpecific(uint8_t PortNum, USBPD_SOPType_TypeDef SOPType, USBPD_VDM_Command_Typedef VDMCommand, uint8_t *pNbData, uint32_t *pVDO)
{
/* USER CODE BEGIN USBPD_VDM_InformSpecific */
  /* Manage Specific message received by EMC cable */
  if (USBPD_SOPTYPE_SOP != SOPType)
  {
    VDM_USER_DEBUG_TRACE(PortNum, "USBPD_VDM_SendSpecific(CABLE)");
  }
  else
  {
  }
/* USER CODE END USBPD_VDM_InformSpecific */
}

#if defined(_UVDM)
/**
  * @brief  VDM Send Unstructured message callback
  * @param  PortNum       current port number
  * @param  pUVDM_Header  Pointer on UVDM header based on @ref USBPD_UVDMHeader_TypeDef
  * @param  pNbData       Pointer of number of VDO to send
  * @param  pVDO          Pointer of VDO to send
  * @retval None
  */
static void USBPD_VDM_SendUVDM(uint8_t PortNum, USBPD_UVDMHeader_TypeDef *pUVDM_Header, uint8_t *pNbData, uint32_t *pVDO)
{
/* USER CODE BEGIN USBPD_VDM_SendUVDM */
  pUVDM_Header->b.VID = USBPD_VID;
  *pNbData            = 0;
/* USER CODE END USBPD_VDM_SendUVDM */
}

/**
  * @brief  Unstructured VDM  message callback to inform user of reception of UVDM message
  * @param  PortNum    current port number
  * @param  UVDM_Header UVDM header based on @ref USBPD_UVDMHeader_TypeDef
  * @param  pNbData    Pointer of number of received VDO
  * @param  pVDO       Pointer of received VDO
  * @retval USBPD Status
  */
static USBPD_StatusTypeDef USBPD_VDM_ReceiveUVDM(uint8_t PortNum, USBPD_UVDMHeader_TypeDef UVDM_Header, uint8_t *pNbData, uint32_t *pVDO)
{
/* USER CODE BEGIN USBPD_VDM_ReceiveUVDM */
  USBPD_StatusTypeDef _status = USBPD_OK;

  if (USBPD_VID != UVDM_Header.b.VID)
  {
    _status = USBPD_ERROR;
  }
  return _status;
/* USER CODE END USBPD_VDM_ReceiveUVDM */
}
#endif /* _UVDM */


/* USER CODE BEGIN Private_functions */

/* USER CODE END Private_functions */

/* Exported functions ---------------------------------------------------------*/
/**
  * @brief  VDM Initialization function
  * @param  PortNum     Index of current used port
  * @retval status
  */
USBPD_StatusTypeDef USBPD_VDM_UserInit(uint8_t PortNum)
{
/* USER CODE BEGIN USBPD_VDM_UserInit */
  USBPD_PE_InitVDM_Callback(PortNum, (USBPD_VDM_Callbacks *)&vdmCallbacks);
  return USBPD_OK;
/* USER CODE END USBPD_VDM_UserInit */
}


/* USER CODE BEGIN Exported_functions */
/* USER CODE END Exported_functions */


/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

