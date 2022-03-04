/*
 * pio_init.h 
 *
 * Created: 2022/03/01 16:24:14
 *  Author: hanno
 */ 


#ifndef pio_init_H_
#define pio_init_H_

#include "main.h"

#define RED_LED_PORT	PIOB
#define RED_LED_PIN		26

#define GREEN_LED_PORT	PIOA
#define GREEN_LED_PIN	15


void PIO_INIT(void);



#endif /* INCFILE1_H_ */