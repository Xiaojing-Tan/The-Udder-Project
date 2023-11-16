#ifndef __CONTROLLER__H
#define __CONTROLLER__H

#include "main.h"
// #include "stm32l4xx_hal.h"
void Reset_Valve1(void);
void Reset_Valve2(void);
void Set_Valve1(void);
void Set_Valve2(void);
void Pos_Control(int32_t ref, struct Encoder* enc);

#endif
