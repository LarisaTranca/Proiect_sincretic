#define F_CPU 16000000UL 
#include <avr/io.h>				
#include <avr/interrupt.h>
#include "Timer1.h"
// int i=0;
// int j=0;
int z=0;
///////////////////////////////////////////////////////////////////////////////////////////////////
int main(void) {
	Timer1();
	DDRD |=0xFF;			//set pin13 ouput 	
	DDRB |=0xFF;			//set pin 6 output for pwm
 	TCCR0A = 0b10000011;
 	TCCR0B = 0b00000101;
 	OCR0A =  0b10000000;
	 
	sei();					// enable interrupts
	
	while (1) {	
		if(z==0){
			while(j<5){
			 OCR0A = j*50;
			}
			j=0;
			z++;
		}else if(z==1){
			while(j<5){
				OCR0A=255;
			}
			j=0;
			z++;
		}else if(z==2){
			while(j<5){
				OCR0A = 255-(j*50);
			}
			j=0;
			z++;
		}else {
			z=0;
			while(j<5){
				OCR0A=0;
			}
			j=0;
		}
		 
	}
	
	return(0);				
}




