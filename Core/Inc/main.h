/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/

/* USER CODE BEGIN Private defines */
// End-effector Encoder Chanal A PA6 D12
// End-effector Encoder Chanal B PA7 D11
// Motor Encoder Chanal A PA8 D7
// Motor Encoder Chanal B PA9 D8
#define WRIST_CHA_PIN GPIO_PIN_6
#define WRIST_CHB_PIN GPIO_PIN_7
#define MOTOR_CHA_PIN GPIO_PIN_8
#define MOTOR_CHB_PIN GPIO_PIN_9
#define LOW GPIO_PIN_RESET
#define HIGH GPIO_PIN_SET

struct Encoder
{
  GPIO_PinState CHA;
  GPIO_PinState CHB;
  GPIO_PinState last_CHA;
  GPIO_PinState last_CHB;
  int32_t CNT;
};
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
