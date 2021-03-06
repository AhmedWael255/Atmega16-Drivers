/*********************************/
/* Author   :   Spectrum         */
/* Date     :   11 Aug 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_

#define SREG		*((volatile unsigned char* const) 0x5F)
#define SPH			*((volatile unsigned char* const) 0x5E)
#define SPL			*((volatile unsigned char* const) 0x5D)
#define OCR0		*((volatile unsigned char* const) 0x5C)
#define GICR		*((volatile unsigned char* const) 0x5B)
#define GIFR		*((volatile unsigned char* const) 0x5A)
#define TIMSK		*((volatile unsigned char* const) 0x59)
#define TIFR		*((volatile unsigned char* const) 0x58)
#define SPMCR		*((volatile unsigned char* const) 0x57)
#define TWCR		*((volatile unsigned char* const) 0x56)
#define MCUCR		*((volatile unsigned char* const) 0x55)
#define MCUCSR		*((volatile unsigned char* const) 0x54)
#define TCCR0		*((volatile unsigned char* const) 0x53)
#define TCNT0		*((volatile unsigned char* const) 0x52)
#define OSCCAL		*((volatile unsigned char* const) 0x51)
#define OCDR		*((volatile unsigned char* const) 0x51)
#define SFIOR		*((volatile unsigned char* const) 0x50)
#define TCCR1A		*((volatile unsigned char* const) 0x4F)
#define TCCR1B		*((volatile unsigned char* const) 0x4E)
#define TCNT1H		*((volatile unsigned char* const) 0x4D)
#define TCNT1L		*((volatile unsigned char* const) 0x4C)
#define OCR1AH		*((volatile unsigned char* const) 0x4B)
#define OCR1AL		*((volatile unsigned char* const) 0x4A)
#define OCRLBH		*((volatile unsigned char* const) 0x49)
#define OCR1BL		*((volatile unsigned char* const) 0x48)
#define ICR1H		*((volatile unsigned char* const) 0x47)
#define ICR1L		*((volatile unsigned char* const) 0x46)
#define TCCR2		*((volatile unsigned char* const) 0x45)
#define TCNT2		*((volatile unsigned char* const) 0x44)
#define OCR2		*((volatile unsigned char* const) 0x43)
#define ASSR		*((volatile unsigned char* const) 0x42)
#define WDTCR		*((volatile unsigned char* const) 0x41)
#define UBRRH		*((volatile unsigned char* const) 0x40)
#define UCSRC		*((volatile unsigned char* const) 0x40)
#define EEARH		*((volatile unsigned char* const) 0x3F)
#define EEARL		*((volatile unsigned char* const) 0x3E)
#define EEDR		*((volatile unsigned char* const) 0x3D)
#define EECR		*((volatile unsigned char* const) 0x3C)
#define PORTA 		*((volatile unsigned char* const) 0x3B)
#define DDRA 		*((volatile unsigned char* const) 0x3A)
#define PINA 		*((volatile unsigned char* const) 0x39)
#define PORTB 		*((volatile unsigned char* const) 0x38)
#define DDRB 		*((volatile unsigned char* const) 0x37)
#define PINB 		*((volatile unsigned char* const) 0x36)
#define PORTC 		*((volatile unsigned char* const) 0x35)
#define DDRC		*((volatile unsigned char* const) 0x34)
#define PINC		*((volatile unsigned char* const) 0x33)
#define PORTD		*((volatile unsigned char* const) 0x32)
#define DDRD		*((volatile unsigned char* const) 0x31)
#define PIND		*((volatile unsigned char* const) 0x30)
#define SPDR		*((volatile unsigned char* const) 0x2F)
#define SPSR		*((volatile unsigned char* const) 0x2E)
#define SPCR		*((volatile unsigned char* const) 0x2D)
#define UDR			*((volatile unsigned char* const) 0x2C)
#define UCSRA		*((volatile unsigned char* const) 0x2B)
#define UCSRB		*((volatile unsigned char* const) 0x2A)
#define UBRRL		*((volatile unsigned char* const) 0x29)
#define ACSR		*((volatile unsigned char* const) 0x28)
#define ADMUX		*((volatile unsigned char* const) 0x27)
#define ADCSRA		*((volatile unsigned char* const) 0x26)
#define ADCH		*((volatile unsigned char* const) 0x25)
#define ADCL		*((volatile unsigned char* const) 0x24)
#define TWDR		*((volatile unsigned char* const) 0x23)
#define TWAR		*((volatile unsigned char* const) 0x22)
#define TWSR		*((volatile unsigned char* const) 0x21)
#define TWBR		*((volatile unsigned char* const) 0x20)

#endif /* 01_LIB_ATMEGA32_REGISTERS_H_ */
