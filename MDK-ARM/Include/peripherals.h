#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "stm32l4xx_hal.h"
#include "adc.h"

/* Private defines */
#define WRIST_CHA_PIN GPIO_PIN_6
#define WRIST_CHB_PIN GPIO_PIN_7
#define MOTOR_CHA_PIN GPIO_PIN_8
#define MOTOR_CHB_PIN GPIO_PIN_9
#define MAGNET_ON_PIN GPIO_PIN_6
#define MAGNET_OFF_PIN GPIO_PIN_7
#define MAGNET_SWITCH GPIO_PIN_10
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

/* Exported functions prototypes ---------------------------------------------*/
void Encoder_Init(struct Encoder* enc, uint16_t CHA_PIN, uint16_t CHB_PIN);

void Encoder_Update(struct Encoder* enc, uint16_t CHA_PIN, uint16_t CHB_PIN);

void Reference_Update(int32_t* ref);

#ifdef __cplusplus
}
#endif

#endif   // _PERIPHERALS_H_
