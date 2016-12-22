// #define F_CPU 16000000UL
// #include <avr/io.h>
// #include <avr/interrupt.h>
// #include <avr/io.h>
// #define BUAD 9600
// #define BUAD_RATE((F_CPU/16/BUAD) - 1)
// 
// 
// int main(void){
// 
// 	char ar[]= "Hello World!!";
// 	DDRB=0xFF;
// 	//High and low bits
// 	UBRR0H = (BUAD_RATE >> 8);
// 	UBRR0L = BUAD_RATE;
// 	////////////////
// 	//transimit and recieve enable
// 	UCSR0B = (1 << TXEN0) | (1 << RXEN0);
// 	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);  //8 bit data format
// 	////////////////////////////////////////////////////////////////
// 	int i = 0;
// 
// 	while (1){
// 		while(!(UCSR0A & (1<<RXC0))){
// 			// 			if(UDR0=="a")
// 			// 			{
// 			// 				PORTB=0xFF;
// 			//
// 			// 			}else if(UDR0=="s"){
// 			// 				PORTB=0x00;
// 			// 			}
// 			// 		}
// 			
// 			for (i = 0; i < strlen(ar); i++){
// 				while (( UCSR0A & (1<<5))  == 0){};
// 				UDR0 = ar[i];
// 			}
// 			
// 		}
// 	}
// 	// #include "Timer1.h"
// 	// // int i=0;
// 	// // int j=0;
// 	// int z=0;
// 	// ///////////////////////////////////////////////////////////////////////////////////////////////////
// 	// int main(void) {
// 	// 	Timer1();
// 	// 	DDRD |=0xFF;			//set pin13 ouput
// 	// 	DDRB |=0xFF;			//set pin 6 output for pwm
// 	//  	TCCR0A = 0b10000011;
// 	//  	TCCR0B = 0b00000101;
// 	//  	OCR0A =  0b10000000;
// 	//
// 	// 	sei();					// enable interrupts
// 	//
// 	// 	while (1) {
// 	// 		if(z==0){
// 	// 			while(j<5){
// 	// 			 OCR0A = j*50;
// 	// 			}
// 	// 			j=0;
// 	// 			z++;
// 	// 		}else if(z==1){
// 	// 			while(j<5){
// 	// 				OCR0A=255;
// 	// 			}
// 	// 			j=0;
// 	// 			z++;
// 	// 		}else if(z==2){
// 	// 			while(j<5){
// 	// 				OCR0A = 255-(j*50);
// 	// 			}
// 	// 			j=0;
// 	// 			z++;
// 	// 		}else {
// 	// 			z=0;
// 	// 			while(j<5){
// 	// 				OCR0A=0;
// 	// 			}
// 	// 			j=0;
// 	// 		}
// 	//
// 	// 	}
// 	//
// 	// 	return(0);
// 	// }
// 
// 
// 
// 
