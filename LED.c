#include <avr/io.h>

int main(void) {
	
	//LCD ��Ʈ �ʱ�ȭ
	DDRF |= 0xFC;	

	while(1) {
		
		//LCD �ѱ�
		PORTF &= 0x03;
	}	
}
