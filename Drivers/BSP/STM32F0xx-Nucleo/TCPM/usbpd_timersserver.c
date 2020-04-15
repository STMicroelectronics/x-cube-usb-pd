/**
  ******************************************************************************
  * @file    usbpd_timersserver.c
  * @brief   This file contains timer server functions.
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

/* Includes ------------------------------------------------------------------*/
#include "usbpd_timersserver.h"
#include "stm32f0xx_ll_tim.h"
#include "stm32f0xx_ll_bus.h"

/** @addtogroup STM32_USBPD_LIBRARY
  * @{
  */

/** @addtogroup USBPD_DEVICE
  * @{
  */

/** @addtogroup USBPD_DEVICE_TIMESERVER
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Definition for TIMx clock resources */
#define TIMx                           TIM2
#define TIMx_CLK_ENABLE                LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM2)
#define TIMx_IRQ                       TIM2_IRQn

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Initialize Timer 2
  * @retval None
  */
void USBPD_TIM_Init(void)
{
  TIMx_CLK_ENABLE;
  /***************************/
  /* Time base configuration */
  /***************************/
  /* Counter mode: select up-counting mode */
  LL_TIM_SetCounterMode(TIMx, LL_TIM_COUNTERMODE_UP);

  /* Set the pre-scaler value to have TIMx counter clock equal to 1 MHz */
  LL_TIM_SetPrescaler(TIMx, __LL_TIM_CALC_PSC(SystemCoreClock, 1000000));

  /* Set the auto-reload value to have a counter frequency of 8 Hz (125 ms) */
  LL_TIM_SetAutoReload(TIMx, __LL_TIM_CALC_ARR(SystemCoreClock, LL_TIM_GetPrescaler(TIMx), 8));

  /*********************************/
  /* Output waveform configuration */
  /*********************************/
  /* Set output compare mode: TOGGLE */
  LL_TIM_OC_SetMode(TIMx, LL_TIM_CHANNEL_CH1, LL_TIM_OCMODE_TOGGLE);
  LL_TIM_OC_SetMode(TIMx, LL_TIM_CHANNEL_CH2, LL_TIM_OCMODE_TOGGLE);
  LL_TIM_OC_SetMode(TIMx, LL_TIM_CHANNEL_CH3, LL_TIM_OCMODE_TOGGLE);
  LL_TIM_OC_SetMode(TIMx, LL_TIM_CHANNEL_CH4, LL_TIM_OCMODE_TOGGLE);

  /* Set output channel polarity: OC is active high */
  LL_TIM_OC_SetPolarity(TIMx, LL_TIM_CHANNEL_CH1, LL_TIM_OCPOLARITY_HIGH);
  LL_TIM_OC_SetPolarity(TIMx, LL_TIM_CHANNEL_CH2, LL_TIM_OCPOLARITY_HIGH);
  LL_TIM_OC_SetPolarity(TIMx, LL_TIM_CHANNEL_CH3, LL_TIM_OCPOLARITY_HIGH);
  LL_TIM_OC_SetPolarity(TIMx, LL_TIM_CHANNEL_CH4, LL_TIM_OCPOLARITY_HIGH);

  /* Enable counter */
  LL_TIM_EnableCounter(TIMx);
}

void USBPD_TIM_Start(TIM_identifier id, uint32_t us_time)
{
  /* Positionne l'evenement pour sa detection */
  switch (id)
  {
    case TIM_PORT0_TIMER1:
      LL_TIM_OC_SetCompareCH1(TIMx, (us_time + TIMx->CNT) % 125000);
      LL_TIM_ClearFlag_CC1(TIMx);
      break;
    case TIM_PORT0_TIMER2:
      LL_TIM_OC_SetCompareCH2(TIMx, (us_time + TIMx->CNT) % 125000);
      LL_TIM_ClearFlag_CC2(TIMx);
      break;
    case TIM_PORT1_TIMER1:
      LL_TIM_OC_SetCompareCH3(TIMx, (us_time + TIMx->CNT) % 125000);
      LL_TIM_ClearFlag_CC3(TIMx);
      break;
    case TIM_PORT1_TIMER2:
      LL_TIM_OC_SetCompareCH4(TIMx, (us_time + TIMx->CNT) % 125000);
      LL_TIM_ClearFlag_CC4(TIMx);
      break;
    default:
      break;
  }
}

uint8_t USBPD_TIM_IsExpired(TIM_identifier id)
{
  switch (id)
  {
    case TIM_PORT0_TIMER1:
      return LL_TIM_IsActiveFlag_CC1(TIMx);
    case TIM_PORT0_TIMER2:
      return LL_TIM_IsActiveFlag_CC2(TIMx);
    case TIM_PORT1_TIMER1:
      return LL_TIM_IsActiveFlag_CC3(TIMx);
    case TIM_PORT1_TIMER2:
      return LL_TIM_IsActiveFlag_CC4(TIMx);
    default:
      break;
  }
  return 1;
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

