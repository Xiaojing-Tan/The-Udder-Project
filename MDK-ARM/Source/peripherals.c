#include "peripherals.h"

void Encoder_Init(struct Encoder* enc, uint16_t CHA_PIN, uint16_t CHB_PIN){
	enc->CHA = HAL_GPIO_ReadPin(GPIOA, CHA_PIN);
	enc->CHB = HAL_GPIO_ReadPin(GPIOA, CHB_PIN);
  enc->last_CHA = HAL_GPIO_ReadPin(GPIOA, CHA_PIN);
	enc->last_CHB = HAL_GPIO_ReadPin(GPIOA, CHB_PIN);
	enc->CNT = 0;
}

void Encoder_Update(struct Encoder* enc, uint16_t CHA_PIN, uint16_t CHB_PIN){
  enc->CHA = HAL_GPIO_ReadPin(GPIOA, CHA_PIN);
  enc->CHB = HAL_GPIO_ReadPin(GPIOA, CHB_PIN);
  if (enc->last_CHA == LOW && enc->CHA == HIGH)
  {
    if (enc->CHB == LOW)
    {
      enc->CNT++;
    }
    else if (enc->CHB == HIGH)
    {
      enc->CNT--;
    }
  }
  else if (enc->last_CHA == HIGH && enc->CHA == LOW)
  {
    if (enc->CHB == LOW)
    {
      enc->CNT--;
    }
    else if (enc->CHB == HIGH)
    {
      enc->CNT++;
    }
  }
  else if (enc->last_CHB == LOW && enc->CHB == HIGH)
  {
    if (enc->CHA == LOW)
    {
      enc->CNT--;
    }
    else if (enc->CHA == HIGH)
    {
      enc->CNT++;
    }
  }
  else if (enc->last_CHB == HIGH && enc->CHB == LOW)
  {
    if (enc->CHA == LOW)
    {
      enc->CNT++;
    }
    else if (enc->CHA == HIGH)
    {
      enc->CNT--;
    }
  }
  enc->last_CHA = enc->CHA;
  enc->last_CHB = enc->CHB;
}

void Reference_Update(int32_t* ref){
	HAL_ADC_Start(&hadc1);
	HAL_ADC_PollForConversion(&hadc1, 100);
	*ref = HAL_ADC_GetValue(&hadc1);
	HAL_ADC_Stop(&hadc1);
}