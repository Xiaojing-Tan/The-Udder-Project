#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "stm32l4xx_hal.h"

/* Exported functions prototypes ---------------------------------------------*/

void Reset_Valve1(void);
void Reset_Valve2(void);
void Set_Valve1(void);
void Set_Valve2(void);
void Pos_Control(int32_t ref, int32_t cnt);

#ifdef __cplusplus
 }
#endif

#endif   // _CONTROLLER_H_
