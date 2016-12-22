#define F_CPU 16000000UL 
#include <avr/io.h>				
#include <avr/interrupt.h>
#include "Segmente.h"
#include "Buton.h"
#include "Timer1.h"
#include "UART.h"
#include "ADC.h"

uint8_t NumarAfisaj=0;

void initializarie(){
	initADC();
	initIO();
	afisare(0);
	initTimer1();
	initSerial();
	sei();
}
int main(void) {
	initializarie();
	
	while (1)
	{	
		delay();
		if (buton()==1){		
			if(NumarAfisaj>9){
				NumarAfisaj=0;
			}
			afisare(NumarAfisaj++);
			send(NumarAfisaj);
			send(read_adc());
		}
	}
return 0;
}
