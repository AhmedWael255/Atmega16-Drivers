/*
 * I2C.h
 *
 *  Created on: Oct 20, 2021
 *      Author: medoa
 */

#ifndef I2C_I2C_H_
#define I2C_I2C_H_

void TWI_init(void);
void TWI_start(void);
void TWI_stop(void);
void TWI_write(void);
void TWI_readWithACK(void);
void TWI_readWithNACK(void);
void TWI_getStatus(void);

#endif /* I2C_I2C_H_ */
