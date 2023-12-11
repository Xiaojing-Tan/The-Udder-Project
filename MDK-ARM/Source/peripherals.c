#include "peripherals.h"

int32_t Read_Timer_Encoder(TIM_TypeDef *TIMx){
	if(TIMx->CNT > 10000){
		return TIMx->CNT - 65535;
	}
	else{
		return TIMx->CNT;
	}
}

void Reference_Update(uint32_t* ref){
	HAL_ADC_Start(&hadc1);
	HAL_ADC_PollForConversion(&hadc1, 1);
	*ref = HAL_ADC_GetValue(&hadc1);
	HAL_ADC_Stop(&hadc1);
}
