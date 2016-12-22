uint32_t first=0;
uint8_t second=0;
void delay(){
	for(first=0;first<17000;first++){
		for(second=0;second<25;second++){}
	}
}
int buton(){
	if ((PIND &(1 << 3))){
		delay();
		if ((PIND&(1 << 3))){
			return 1;
		}
		return 0;
	}
}