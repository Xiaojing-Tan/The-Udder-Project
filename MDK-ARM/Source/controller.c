#include "controller.h"

//Valve1 is PA0
//Valve2 is PA1

void Reset_Valve1(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
}

void Reset_Valve2(void)
{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
}

void Set_Valve1(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
}

void Set_Valve2(void)
{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
}

/*
Brief : Controller for motor
Parameters: 
	@double ref: The reference angle
	@struct Encoder* enc: The encoder type, can be &wrist_enc or &motor_enc
*/

void Pos_Control(int32_t ref, int32_t cnt) 
{
    //Calculate error
	int32_t err = ref - cnt;

    if(err < -5) //Turn right
    {
        Set_Valve2(); // PA0 = LOW
        Reset_Valve1();   // PA1 = HIGH
    }
    else if(err > 5)//Turn left
    {
        Reset_Valve2();   // PA0 = HIGH
        Set_Valve1(); // PA1 = LOW
    }
    else // If the angle is in side the threshold
    { 
        Reset_Valve1();
        Reset_Valve2();
        
    }
}
