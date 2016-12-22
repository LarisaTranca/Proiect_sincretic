int laststate=-1;
void initIO(){
	
		DDRB=0xFF;
		DDRD=0xFF;
		DDRD=0b11110111;//pin3 output
		PORTB=0x00;
		PORTD=0x00;
}
 void reset(){
	 
	 PORTD&=(0<<4);
	 PORTD&=(0<<2);
	 PORTB&=(0<<0);
	 PORTB&=(0<<1);
	 PORTB&=(0<<4);
	 PORTB&=(0<<5);
	 PORTB&=(0<<3);	 
 }

 void afisare(int numar){
	 if(numar==laststate)
	 {
		 return;
	 }else{
		 laststate=numar;
		  reset();
	 }
	
	 switch (numar)
	 {	
		 case 0:
				PORTB|=(1<<0);
				PORTB|=(1<<4);
				PORTB|=(1<<5);
				PORTB|=(1<<3);
				PORTD|=(1<<2);
				PORTD|=(1<<4);
				PORTB|=(0<<1);
				break;
		case 1:
				PORTD|=(1<<2);
				PORTB|=(1<<3);
				PORTD|=(0<<4);
				PORTB|=(0<<0);
				PORTB|=(0<<1);
				PORTB|=(0<<4);
				PORTB|=(0<<5);
				
				break;
		case 2:
				PORTD|=(1<<2);
				PORTB|=(1<<0);
				PORTB|=(1<<1);
				PORTB|=(1<<4);
				PORTB|=(1<<5);
				break;
		case 3:
				PORTD|=(1<<2);
				PORTB|=(1<<0);
				PORTB|=(1<<1);
				PORTB|=(1<<3);
				PORTB|=(1<<5);
				break;
		case 4:
				PORTD|=(1<<2);
				PORTD|=(1<<4);
				PORTB|=(1<<1);
				PORTB|=(1<<3);
				break;
		case 5:
				PORTD|=(1<<4);
				PORTB|=(1<<0);
				PORTB|=(1<<1);
				PORTB|=(1<<3);
				PORTB|=(1<<5);
				break;
		case 6:
				PORTD|=(1<<4);
				PORTB|=(1<<0);
				PORTB|=(1<<1);
				PORTB|=(1<<4);
				PORTB|=(1<<5);
				PORTB|=(1<<3);
				break;
		case 7:
				PORTD|=(1<<2);
				PORTB|=(1<<0);
				PORTB|=(1<<3);
				break;
		case 8:
				PORTD|=(1<<4);
				PORTD|=(1<<2);
				PORTB|=(1<<0);
				PORTB|=(1<<1);
				PORTB|=(1<<4);
				PORTB|=(1<<5);
				PORTB|=(1<<3);
				break;
		case 9:
				PORTD|=(1<<4);
				PORTD|=(1<<2);
				PORTB|=(1<<0);
				PORTB|=(1<<1);
				PORTB|=(1<<5);
				PORTB|=(1<<3);
				break;
		default:
				PORTB|=(1<<2);
				break;
	 }
	 
	 
 }
