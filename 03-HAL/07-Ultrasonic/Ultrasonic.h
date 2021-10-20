/*********************************/
/* Author   :   Spectrum         */
/* Date     :   13 Oct 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "../01-LIB/STD_Types.h"

#define Trigger_Port	B
#define Trigger_Pin		5

void Ultrasonic_Init(void);
void Ultrasonic_Trigger(void);
u16 Ultrasonic_readDistance(void);
void Ultrasonic_edgeProcessing(void);

#endif /* 03_HAL_ULTRASONIC_ULTRASONIC_H_ */
