/**
  ******************************************************************************
  * @file    typecswitch.h
  * @author  MCD Application Team
  * @brief   This header file contains the functions prototypes for the 
  *          crossbar switch device for USB Type-C systems.
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
#ifndef __TYPECSWITCH_H
#define __TYPECSWITCH_H

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
    
/** @addtogroup TYPECSWITCH
  * @{
  */

/** @defgroup TYPECSWITCH_Exported_Types
  * @{
  */
 typedef enum {
   USB_NORMAL = 0,
   USB_FLIPPED,
   DFP_D_PIN_ASSIGNMENT_A_NORMAL,
   DFP_D_PIN_ASSIGNMENT_A_FLIPPED,
   DFP_D_PIN_ASSIGNMENT_B_NORMAL,
   DFP_D_PIN_ASSIGNMENT_B_FLIPPED,
   DFP_D_PIN_ASSIGNMENT_C_NORMAL,
   DFP_D_PIN_ASSIGNMENT_C_FLIPPED,
   DFP_D_PIN_ASSIGNMENT_D_NORMAL,
   DFP_D_PIN_ASSIGNMENT_D_FLIPPED,
   DFP_D_PIN_ASSIGNMENT_E_NORMAL,
   DFP_D_PIN_ASSIGNMENT_E_FLIPPED,
   DFP_D_PIN_ASSIGNMENT_F_NORMAL,
   DFP_D_PIN_ASSIGNMENT_F_FLIPPED,
   UFP_D_PIN_ASSIGNMENT_A_NORMAL,
   UFP_D_PIN_ASSIGNMENT_A_FLIPPED,
   UFP_D_PIN_ASSIGNMENT_B_NORMAL,
   UFP_D_PIN_ASSIGNMENT_B_FLIPPED,
   UFP_D_PIN_ASSIGNMENT_C_NORMAL,
   UFP_D_PIN_ASSIGNMENT_C_FLIPPED,
   UFP_D_PIN_ASSIGNMENT_D_NORMAL,
   UFP_D_PIN_ASSIGNMENT_D_FLIPPED,
   UFP_D_PIN_ASSIGNMENT_E_NORMAL,
   UFP_D_PIN_ASSIGNMENT_E_FLIPPED,
   UFP_D_PIN_ASSIGNMENT_F_NORMAL,
   UFP_D_PIN_ASSIGNMENT_F_FLIPPED
 } TYPECSWITCH_Mode_t;

/** @defgroup TYPECSWITCH_Driver_structure  USB Type-C Crossbar Switch Driver structure
  * @{
  */
typedef struct
{  
  uint32_t  (*Init)(uint16_t);
  void      (*DeInit)(uint16_t); 
  uint32_t  (*PowerOn)(uint16_t);
  uint32_t  (*PowerOff)(uint16_t);
  uint32_t  (*SetMode)(uint16_t, TYPECSWITCH_Mode_t);
  uint32_t  (*IsSupportedMode)(TYPECSWITCH_Mode_t);
} TYPECSWITCH_Drv_t;
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

#endif /* __TYPECSWITCH_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
