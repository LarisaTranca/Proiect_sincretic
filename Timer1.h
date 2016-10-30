/*
 * Timer1.h
 *
 * Created: 30-Oct-16 9:22:51 PM
 *  Author: COSMOS
 */ 


#ifndef TIMER1_H_
#define TIMER1_H_
int i=0;
int j=0;
void Timer1(){
	TCCR1A=0b00000000;
	TCCR1B=0b00000010;
	TCCR1C=0b00000000;
	TIMSK1=0b00000001;

}
ISR(TIMER1_OVF_vect) {
	//PORTB ^= (1 << PINB5);
	i++;
	if(i>16){
		i=0;
		j++;
		PORTB ^= (1 << PINB5);
	}
}

#endif /* TIMER1_H_ */