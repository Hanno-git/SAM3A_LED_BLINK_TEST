# SAM3A_LED_BLINK_TEST

This is a simple LED flickering testing program for the ATSAM3A4CA-CU chip. 

# This is untested
I'm still waiting for the chip

The goal of this is just to test basic gpio functioning by directly writing to the chip registers (no library usage to make things easier)

pins used:
```
#define RED_LED_PORT	PIOB
#define RED_LED_PIN		26

#define GREEN_LED_PORT	PIOA
#define GREEN_LED_PIN	15
```
