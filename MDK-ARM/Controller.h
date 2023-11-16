#ifndef __CONTROLLER__H
#define __CONTROLLER__H

#include "main.h"
void ResetValve1(void);
void ResetValve2(void);
void SetValve1(void);
void SetValve2(void);
void Pos_Control(int32_t ref, struct Encoder* enc);

#endif
