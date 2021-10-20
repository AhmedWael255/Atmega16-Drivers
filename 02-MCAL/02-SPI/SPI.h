/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef SPI_H_
#define SPI_H_

#include "../01-LIB/STD_Types.h"


 /* Default SPI data value used in case we need to receive a byte from the other device,
 * without need to send a data to it
 */
#define SPI_DEFAULT_DATA_VALUE 0xFF


/*Initialize the SPI Master*/
void SPI_initMaster(void);

/*Initialize the SPI Slave*/
void SPI_initSlave(void);

/*Send the data from device to another*/
void SPI_sendData(u8 data);

/*Receive the data from device to another*/
u8 SPI_RecieveData();

/*Send String to an SPI device*/
void SPI_sendString(const u8 *str);

/*
 * Description :
 * Receive the required string until the '#' symbol through SPI from the other SPI device.
 */
void SPI_receiveString(u8 *str);

#endif /* SPI_SPI_H_ */
