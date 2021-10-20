/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "EEPROM.h"
#include "../../02-MCAL/03-I2C/I2C.h"
/*
void EEPROM_Init(void)
{
	TWI_init();
	if(TWI_getStatus() != TWI_start())
	{

	}
	TWI_writeByte();
}

void EEPROM_writeData(u16 address)
{
	TWI_writeByte(((address & 0x700) >> 7) | 0xA0);

	if(TWI_getStatus() != TWI_writeByte())
	{

	}
}

void EEPROM_ReadData(void);
*/
