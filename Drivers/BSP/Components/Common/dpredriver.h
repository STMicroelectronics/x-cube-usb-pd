/**
  ******************************************************************************
  * @file    dpredriver.h
  * @author  MCD Application Team
  * @brief   This header file contains the functions prototypes for the  
  *          DisplayPort Linear Redriver.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DPREDRIVER_H
#define __DPREDRIVER_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup BSP
  * @{
  */

/** @addtogroup Components
  * @{
  */
    
/** @addtogroup DPREDRIVER
  * @{
  */

/** @defgroup DPREDRIVER_Exported_Types
  * @{
  */ 

/** @defgroup DPREDRIVER_Channel_Identifier  Channel Identifier
  * @{
  */
 typedef enum {
   CHANNEL_DP0 = 0,
   CHANNEL_DP1,
   CHANNEL_DP2,
   CHANNEL_DP3,
   CHANNEL_RX1,
   CHANNEL_RX2,
   CHANNEL_SSTX
 } DPREDRIVER_ChannelId_t;
/**
  * @}
  */
  
 /** @defgroup DPREDRIVER_Driver_structure  DisplayPort Linear Redriver Driver structure
  * @{
  */
typedef struct
{  
  uint32_t  (*Init)(uint16_t);
  void      (*DeInit)(uint16_t); 
  uint32_t  (*PowerOn)(uint16_t);
  uint32_t  (*PowerOff)(uint16_t);
  uint32_t  (*SetEQGain)(uint16_t, DPREDRIVER_ChannelId_t, uint8_t);
  uint32_t  (*EnableChannel)(uint16_t, DPREDRIVER_ChannelId_t);
  uint32_t  (*DisableChannel)(uint16_t, DPREDRIVER_ChannelId_t);
}DPREDRIVER_Drv_t;
/**
  * @}
  */

/**
  * @}
  */


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

#endif /* __DPREDRIVER_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
