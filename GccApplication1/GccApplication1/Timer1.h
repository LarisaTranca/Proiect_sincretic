
int i=0;
int j=0;
void initTimer1(){
	TCCR1B=0x02;
	TIMSK1=0x01;

}
ISR(TIMER1_OVF_vect) {
	i++;
	if(i>16){
		i=0;
		PORTB^=(1<<2);
	}
}
