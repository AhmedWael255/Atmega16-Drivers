/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef ADC_H_
#define ADC_H_

#include "../01-LIB/BIT_Math.h"
#include "../01-LIB/STD_Types.h"

/*Define Macros of reference voltage and maximum sensing offset*/

#define ADC_MAXIMUM_VALUE    1023
#define ADC_REF_VOLT_VALUE   5

/*Define Clock options*/
typedef enum
{
	FCPU_2,FCPU_4 = 2,FCPU_8, FCPU_16, FCPU_32,FCPU64,FCPU_128
}ADC_CLK;


/*Define Reference voltage options*/
typedef enum
{
	AREF,AVCC,IntVoltage = 3
}ADC_VoltRef;

/*Design ADC Configuration*/
typedef struct
{
	ADC_CLK	clock;
	ADC_VoltRef RefVoltage;
}ADC_config;

/*Functions*/
void ADC_init(const ADC_config * ADC_ptr);
u16 ADC_readChannel(u16 ch);


#endif /* 03_HAL_ADC_ADC_H_ */
