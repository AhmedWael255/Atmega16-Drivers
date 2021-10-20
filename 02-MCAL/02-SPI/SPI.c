/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#include "../02-SPI/SPI.h"

#include "../01-GPIO/GPIO.h"
#include "../01-LIB/BIT_Math.h"
#include "../01-LIB/STD_Types.h"
#include "../02-SPI/SPI_private.h"

void SPI_initMaster(void)
{
	/******** Configure SPI Master Pins *********
	 * SS(PB4)   --> Output
	 * MOSI(PB5) --> Output
	 * MISO(PB6) --> Input
	 * SCK(PB7) --> Output
	 ********************************************/
	GPIO_setupPinDirection(B,PIN4,OUTPUT);
	GPIO_setupPinDirection(B,PIN5,OUTPUT);
	GPIO_setupPinDirection(B,PIN4,INPUT);
	GPIO_setupPinDirection(B,PIN7,OUTPUT);

    /************************** SPCR Description **************************
     * SPIE    = 0 Disable SPI Interrupt
     * SPE     = 1 Enable SPI Driver
     * DORD    = 0 Transmit the MSB first
     * MSTR    = 1 Enable Master
     * CPOL    = 0 SCK is low when idle
     * CPHA    = 0 Sample Data with the raising edge
     * SPR1:0  = 00 Choose SPI clock = F_OSC/4
     ***********************************************************************/
	SPCR = (1<<SPE) | (1<<MSTR);

	/* Choose Clock as F_OSC/4 */
	SPSR &= ~(1<<SPI2X);
}


void SPI_initSlave(void)
{
	/******** Configure SPI Slave Pins *********
	 * SS(PB4)   --> Input
	 * MOSI(PB5) --> Input
	 * MISO(PB6) --> Output
	 * SCK(PB7) --> Input
	 ********************************************/
	GPIO_setupPinDirection(B,PIN4,INPUT);
	GPIO_setupPinDirection(B,PIN5,INPUT);
	GPIO_setupPinDirection(B,PIN4,OUTPUT);
	GPIO_setupPinDirection(B,PIN7,INPUT);

	/************************** SPCR Description **************************
	 * SPIE    = 0 Disable SPI Interrupt
	 * SPE     = 1 Enable SPI Driver
	 * DORD    = 0 Transmit the MSB first
	 * MSTR    = 0 Disable Master
	 * CPOL    = 0 SCK is low when idle
	 * CPHA    = 0 Sample Data with the raising edge
	 * SPR1:0  = 00 Choose SPI clock = F_OSC/4
	 ***********************************************************************/
	SPCR = (1<<SPE);

	/* Choose Clock as F_OSC/4 */
	SPSR &= ~(1<<SPI2X);
}


void SPI_sendData(u8 data)
{
	SPDR = data;
	/*Wait till data is successively sent */
	while(isCLR(SPSR,SPIF)){}
}

u8 SPI_ReceiveData()
{

	/*Wait till data is successively received */
	while(isCLR(SPSR,SPIF)){}

	/*
	 * Note: SPIF flag is cleared by first reading SPSR (with SPIF set) which is done in the previous step.
	 * and then accessing SPDR like the below line.
	 */
	return SPDR;
}

void SPI_sendString(const u8 *str)
{
	u8 i = 0;

	while(str[i] != '\0')
	{
		SPI_sendData(str[i]);
		i++;
	}
}


void SPI_receiveString(u8 *str)
{
	u8 i = 0;
	/* Receive the first byte */
	str[i] = SPI_ReceiveData();

	while(str[i] != '#')
	{
		i++;
		str[i] = SPI_ReceiveData();
	}

	/* After receiving the whole string plus the '#', replace the '#' with '\0' */
	str[i] = '\0';
}
