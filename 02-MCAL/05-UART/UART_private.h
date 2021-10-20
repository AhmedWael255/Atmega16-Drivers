/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef 02_MCAL_UART_UART_PRIVATE_H_
#define 02_MCAL_UART_UART_PRIVATE_H_

#define F_CPU		1000000UL

#define UDR			*((volatile unsigned char* const) 0x2C)
#define UCSRA		*((volatile unsigned char* const) 0x2B)
#define UCSRB		*((volatile unsigned char* const) 0x2A)
#define UBRRL		*((volatile unsigned char* const) 0x29)
#define UBRRH		*((volatile unsigned char* const) 0x40)
#define UCSRC		*((volatile unsigned char* const) 0x40)

/*UCSRA PINS*/
#define MPCM		0
#define U2X			1
#define PE			2
#define	DOR			3
#define FE			4
#define UDRE		5
#define TXC			6
#define RXC			7

/*UCSRB PINS*/
#define TXB8		0
#define RXB8		1
#define UCSZ2		2
#define	TXEN		3
#define RXEN		4
#define UDRIE		5
#define TXCIE		6
#define RXCIE		7

/*UCSRC PINS*/
#define UCPOL		0
#define UCSZ0		1
#define UCSZ1		2
#define	USBS		3
#define UPM0		4
#define UPM1		5
#define UMSEL		6
#define URSEL		7

#endif /* 02_MCAL_UART_UART_PRIVATE_H_ */
