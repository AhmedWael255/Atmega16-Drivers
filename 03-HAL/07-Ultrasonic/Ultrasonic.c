/*********************************/
/* Author   :   Spectrum         */
/* Date     :   13 Oct 2021      */
/* Version  :   V01              */
/*********************************/

#define F_CPU	8000000UL
#include "../07-Ultrasonic/Ultrasonic.h"
#include "../../02-MCAL/06-ICU/ICU.h"
#include "../../02-MCAL/01-GPIO/GPIO.h"
#include "../05-LCD/LCD.h"
#include "avr/delay.h"

u8 timehigh = 0, edge = 0, timelow, time= 0;
u16 distance;

void Ultrasonic_Init(void)
{
	ICU_Config config = {F_CPU_8, RISING};
	ICU_init(&config);
	ICU_setCallBack(Ultrasonic_edgeProcessing);
	GPIO_setPinDirection(Trigger_Port, Trigger_Pin, OUTPUT);
}

void Ultrasonic_Trigger(void)
{
	GPIO_writePin(Trigger_Port, Trigger_Pin, High);
	_delay_us(15);
	GPIO_writePin(Trigger_Port, Trigger_Pin, Low);
}

u16 Ultrasonic_readDistance(void)
{
	Ultrasonic_Trigger();
	_delay_ms(40);
	if(edge == 4)
	{
		edge = 0;
		distance = ((timelow -timehigh)/58.8);
		LCD_MoveCursor(0,10);
		LCD_Int_to_Str(distance);
	}
	else
	{
		return 0;
	}
}

void Ultrasonic_edgeProcessing(void)
{
	++edge;
	if(edge == 1)
	{
		ICU_clearTimerValue();
		ICU_setEdgeDetectionType(FALLING);
	}
	else if(edge == 2)
	{
		timelow = ICU_getInputCaptureValue();
		ICU_setEdgeDetectionType(RISING);
	}
	else if(edge == 3)
	{
		time = ICU_getInputCaptureValue();
		ICU_setEdgeDetectionType(FALLING);
	}
	else if(edge == 4)
	{
		timehigh = Icu_getInputCaptureValue();
		ICU_clearTimerValue();
		ICU_setEdgeDetectionType(RISING);
	}

}

