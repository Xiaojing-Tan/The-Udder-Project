#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "peripherals.h"



/* Exported functions prototypes ---------------------------------------------*/

void Reset_Valve1(void);
void Reset_Valve2(void);
void Set_Valve1(void);
void Set_Valve2(void);
void Pos_Control(double ref, struct Encoder* enc);
void Magnet_Control(uint16_t mag_switch);

#ifdef __cplusplus
 }
#endif

#endif   // _CONTROLLER_H_
