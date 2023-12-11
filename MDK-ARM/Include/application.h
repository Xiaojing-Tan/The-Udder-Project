#ifndef _APPLICATION_H_
#define _APPLICATION_H_
#ifdef __cplusplus
 extern "C" {
#endif

#include <stdint.h>

/* Exported functions prototypes ---------------------------------------------*/

/* Run setup needed for all periodic tasks */
int Application_Setup(void);

/* Define what to do in the infinite loop */
void Application_Loop(void);

#ifdef __cplusplus
 }
#endif

#endif   // _APPLICATION_H_
