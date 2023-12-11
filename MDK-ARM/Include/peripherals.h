#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "stm32l4xx_hal.h"
#include "adc.h"

/* Private defines */
#define LOW GPIO_PIN_RESET
#define HIGH GPIO_PIN_SET

/* Exported functions prototypes ---------------------------------------------*/
int32_t Read_Timer_Encoder(TIM_TypeDef *TIMx);

void Reference_Update(uint32_t* ref);

#ifdef __cplusplus
}
#endif

#endif   // _PERIPHERALS_H_
