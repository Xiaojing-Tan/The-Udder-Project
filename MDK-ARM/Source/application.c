#include "main.h"

#include "application.h"
#include "controller.h"
#include "peripherals.h"
#include "cmsis_os.h"

#define PERIOD_READ 10 	// ms
#define PERIOD_CTRL 10	// ms

/* Global variables ----------------------------------------------------------*/
struct Encoder wrist_enc;
struct Encoder motor_enc;
int32_t reference;
uint32_t millisec;

/* Define threads */
void thread_read(void const *argument);
void thread_control(void const *argument);
osThreadId read_ID;
osThreadId control_ID;
osThreadDef(thread_read, osPriorityAboveNormal, 1, 0);
osThreadDef(thread_control, osPriorityNormal, 1, 0);




/* Functions -----------------------------------------------------------------*/




/* Run setup needed for all periodic tasks */
int Application_Setup()
{
	// Reset global variables

	// Initialise hardware
	Reset_Valve1();
	Set_Valve2();
	HAL_Delay(3000);
	Reset_Valve1();
	Reset_Valve2();
	Encoder_Init(&wrist_enc, WRIST_CHA_PIN, WRIST_CHB_PIN);
	Encoder_Init(&motor_enc, MOTOR_CHA_PIN, MOTOR_CHB_PIN);
	return 0;
}

/* Define what to do in the infinite loop */
void Application_Loop()
{
}
