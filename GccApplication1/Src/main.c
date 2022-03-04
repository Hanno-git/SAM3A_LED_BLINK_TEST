/*
 * GccApplication1.c
 *
 * Created: 2022/02/28 14:35:07
 * Author : hanno
 */ 

#include "pio_init.h"
#include "sam.h"


int main(void)
{
	/* Initialize variables */
	static uint32_t cnt = 0u;
    /* Initialize the SAM system */
    SystemInit();

	/* Initialize the peripherals */
	PIO_INIT();
	
	// Continuously toggle LEDs
    while (1)
    {
		//  Set Output Data Register for port B pin 26
		PIOB->PIO_SODR |=((0x1u << RED_LED_PIN));//set
		
		// Set Output Data Register for port A pin 15
		PIOA->PIO_SODR |=((0x1u << GREEN_LED_PIN));//set
		
	    cnt = 0;
	    while (cnt<3600000)
	    {
		    cnt = cnt +1;
	    }
		//   Clear Output Data Register for port B pin 26
		PIOB->PIO_CODR |=((0x1u << RED_LED_PIN));//set
		
		//  Clear Output Data Register for port A pin 15
		PIOA->PIO_CODR |=((0x1u << GREEN_LED_PIN));//set
		
		cnt = 0;
		while (cnt<3600000)
		{
			cnt = cnt +1;
		}
	}
	    
}
