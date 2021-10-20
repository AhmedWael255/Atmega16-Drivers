/*********************************/
/* Author   :   Spectrum         */
/* Date     :   13 Oct 2020      */
/* Version  :   V01              */
/*********************************/

#ifndef KEYPAD_KEYPAD_H_
#define KEYPAD_KEYPAD_H_

#include "../Common/STD_Types.h"
#include "../GPIO/GPIO.h"

/*	Definitions	*/

/* Configure number of rows and columns of the keypad */
#define KEYPAD_Columns            4
#define KEYPAD_Rows               4

/* Keypad Port and Pin Configurations */
#define KEYPAD_Port                   	PORTB

#define KEYPAD_FisrtRowPin        		PIN0
#define KEYPAD_FirstColPin       		PIN4

/* Keypad button config */
#define KEYPAD_BUTTON_PRESSED           High
#define KEYPAD_BUTTON_RELEASED          Low

/*	Functions	*/

/*Get the Keypad pressed button*/
u8 KEYPAD_getPressedKey(void);

#endif
