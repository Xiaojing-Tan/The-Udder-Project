#include "main.h"
#include "Controller.h"


void ResetValve1(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
}

void ResetValve2(void)
{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
}

void SetValve1(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
}

void SetValve2(void)
{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
}

void Pos_Control(int32_t ref, struct Encoder* enc)
{
	int32_t err = 0;
	
	while(1)
	{
		//Calculate error
		err = ref - enc->CNT;
		if(err < -10) //Turn right
		{
			ResetValve1(); // PA0 = LOW
			SetValve2();   // PA1 = HIGH
		}
		else if(err > 10)//Turn left
		{
			SetValve1();   // PA0 = HIGH
			ResetValve2(); // PA1 = LOW
		}
		else // If the angle is in side the threshold
		{
		break;
		}
	}
}





