#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRA = 0x01; // 개발보드 상태확인용
	DDRB = 0x10; // PB4만 Out...
	PORTB = 0x00;
	TCCR0 = 0x1C; // 0001 1100, Prescale(64)
	OCR0 = 60; // 여기까지 하면 2048Hz에 근접. 대략 2049.18Hz.
	
	while(1){
		// 개발보드 상태확인용
		PORTA = 0x01;
		_delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(1000);
	}
}