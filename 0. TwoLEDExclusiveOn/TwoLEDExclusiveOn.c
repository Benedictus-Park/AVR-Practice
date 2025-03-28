#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

void SetPins(){
    DDRA = 0b00000011; // PA0, 1만 Out...
	PORTA = 0b00000000; // PA0, 일단 0으로...
}

int main(void){
    SetPins();
	
	while(1){
		PORTA = 0b00000001;
		_delay_ms(1000);
		PORTA = 0b00000010;
		_delay_ms(1000);
	}
}