
#define USART_BAUDRATE 9600
#define BAUD_PRESCALE (((F_CPU/(USART_BAUDRATE*16UL)))-1)
char recieved_byte;

void initSerial(){
	UCSR0B |= (1<<RXEN0)  | (1<<TXEN0);
	UCSR0C |= (1<<UCSZ00) | (1<<UCSZ01);
	UBRR0H  = (BAUD_PRESCALE >> 8);
	UBRR0L  = BAUD_PRESCALE;
}

void send(char send){
	
	while (( UCSR0A & (1<<5))  == 0){};
	UDR0 = send;
}
// char read(){
// 	while( (( UCSR0A & ( 1 << RXC0 ) ) == 0) & (i<10)){
// 	
// 		recieved_byte = UDR0;
// 	}
// 	return recieved_byte;
// }

char read(){
	while ( !(UCSR0A & (1<<RXC0)) )
		
	recieved_byte = UDR0;

	return recieved_byte;
}
