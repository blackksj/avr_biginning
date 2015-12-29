#include <avr/io.h>

int main(void) {
	
	//LCD 포트 초기화
	DDRF |= 0xFC;	

	while(1) {
		
		//LCD 켜기
		PORTF &= 0x03;
	}	
}
