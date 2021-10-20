/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef EEPROM_H_
#define EEPROM_H_

#include "../../01-LIB/STD_Types.h"

void EEPROM_Init(void);
void EEPROM_writeData(u16 address);
void EEPROM_ReadData(void);

#endif /* EEPROM_H_ */
