/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef 02_MCAL_SPI_SPI_PRIVATE_H_
#define 02_MCAL_SPI_SPI_PRIVATE_H_

#define SPDR		*((volatile unsigned char* const) 0x2F)
#define SPSR		*((volatile unsigned char* const) 0x2E)
#define SPCR		*((volatile unsigned char* const) 0x2D)

/*SPCR PINS*/
#define SPR0		0
#define SPR1		1
#define CPHA		2
#define	CPOL		3
#define MSTR		4
#define DORD		5
#define SPE			6
#define SPIE		7

/*SPSR PINS*/
#define SPI2X		0
#define WCOL		6
#define SPIF		7

#endif /* 02_MCAL_SPI_SPI_PRIVATE_H_ */
