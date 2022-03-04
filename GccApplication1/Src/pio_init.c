/*
 * pio.c
 *
 * Created: 2022/03/01 
 * Author : hanno
 */ 

#include "pio_init.h"



void PIO_INIT(void)
{
	static uint32_t temp1,temp2;
	//Disable PMC Write Protect Mode Register
	PMC->PMC_WPMR &=~(PMC_WPMR_WPEN);
	//Enable Peripheral Clock
	PMC->PMC_PCER0 |= (PMC_PCER0_PID11);//enable clock for port A
	PMC->PMC_PCER0 |= (PMC_PCER0_PID12);//enable clock for port B
	PMC->PMC_PCER0 |= (PMC_PCER0_PID13);//enable clock for port C
	
	// Disables the Write Protect for port B
	RED_LED_PORT ->PIO_WPMR &=~(PIO_WPMR_WPEN);
	// Disables the Write Protect for port A
	GREEN_LED_PORT ->PIO_WPMR &=~(PIO_WPMR_WPEN);
	
	// reset the Disable register for port B pin 26
	RED_LED_PORT->PIO_PDR &=~((0x1u << RED_LED_PIN));//reset
	
	// reset the Disable register for port A pin 15
	GREEN_LED_PORT->PIO_PDR &=~((0x1u << GREEN_LED_PIN));//reset
	
	// Enables the PIO to control port B pin 26
	RED_LED_PORT->PIO_PER &=~((0x1u << RED_LED_PIN));//reset
	RED_LED_PORT->PIO_PER |=((0x1u << RED_LED_PIN));//set
	
	// Enables the PIO to control port A pin 15
	GREEN_LED_PORT->PIO_PER &=~((0x1u << GREEN_LED_PIN));//reset
	GREEN_LED_PORT->PIO_PER |=((0x1u << GREEN_LED_PIN));//set
	
	// Grabs PIO Controller status for respective pins
	temp1 = (RED_LED_PORT->PIO_PSR>>(RED_LED_PIN-1))&(0x0001);//port B pin 26
	temp2 = (GREEN_LED_PORT->PIO_PSR>>(GREEN_LED_PIN-1))&(0x0001);//port A pin 15
	if (~(temp1)||~(temp2))//tests if LED PIO is active
	{
		while (1)
		{
			//fault LED pins PIO is inactive
		}
	}
	
	// Enables the output at port B pin 26
	RED_LED_PORT->PIO_OER &=~((0x1u << RED_LED_PIN));//reset
	RED_LED_PORT->PIO_OER |=((0x1u << RED_LED_PIN));//set
	
	// Enables the output at port A pin 15
	GREEN_LED_PORT->PIO_OER &=~((0x1u << GREEN_LED_PIN));//reset
	GREEN_LED_PORT->PIO_OER |=((0x1u << GREEN_LED_PIN));//set
	
	// Grabs PIO Controller Output Status for respective pins
	temp1 = (RED_LED_PORT->PIO_PSR>>(RED_LED_PIN-1))&(0x0001);//port B pin 26
	temp2 = (GREEN_LED_PORT->PIO_PSR>>(GREEN_LED_PIN-1))&(0x0001);//port A pin 15
	if (~(temp1)||~(temp2))//tests if LED PIO is set to output
	{
		while (1)
		{
			//fault LED pins PIO is input
		}
	}
	
	// Grabs PIO Controller Input Filter Status for respective pins
	temp1 = (RED_LED_PORT->PIO_PSR>>(RED_LED_PIN-1))&(0x0001);//port B pin 26
	temp2 = (GREEN_LED_PORT->PIO_PSR>>(GREEN_LED_PIN-1))&(0x0001);//port A pin 15
	if ((temp1)||(temp2))//test if input glitch filter is disabled on the I/O line for LED pins
	{
		while (1)
		{
			//fault input glitch filter is enabled on the I/O line for LED pins
		}
	}
	
	// Enables Output Write Enable Register at port B pin 26
	RED_LED_PORT->PIO_OWER &=~((0x1u << RED_LED_PIN));//reset
	RED_LED_PORT->PIO_OWER |=((0x1u << RED_LED_PIN));//set
	
	// Enables tOutput Write Enable Register at port A pin 15
	GREEN_LED_PORT->PIO_OWER &=~((0x1u << GREEN_LED_PIN));//reset
	GREEN_LED_PORT->PIO_OWER |=((0x1u << GREEN_LED_PIN));//set
	
	// GrabsPIO Output Write Status Register for respective pins
	temp1 = (RED_LED_PORT->PIO_PSR>>(RED_LED_PIN-1))&(0x0001);//port B pin 26
	temp2 = (GREEN_LED_PORT->PIO_PSR>>(GREEN_LED_PIN-1))&(0x0001);//port A pin 15
	if (~(temp1)||~(temp2))// Writing PIO_ODSR affects the I/O line. for LED pins
	{
		while (1)
		{
			//fault Writing PIO_ODSR does not affect the I/O line for LED pins
		}
	}
		
}