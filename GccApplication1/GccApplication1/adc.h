void initADC(){
	ADMUX |= 0;
	ADMUX |= (1<<6); 
	ADCSRA = 0x87;              
	ADCSRA |= (1<<6);
}

uint8_t read_adc(){
	                  
	ADCSRA |= (1<<6);                
	while(ADCSRA & (1<<6)); 
	return ((ADC>>1)-4);          
}