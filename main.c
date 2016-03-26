/*
 * main.c

 *
 *  Created on: 4 mar 2016
 *      Author: Roland
 */
#include <avr/io.h> //biblioteka do sterowania wejœciem/wyjœciem
#include <util/delay.h>

int main(void){ //void czyli pobiera nic, np. podnieœ, po³ó¿.

	DDRC = 0b11111111; //ustalamy czy dany port jest wejsciem, czy wyjsciem

	while(1){
		PORTC = 0b00010101;// przypisujemy stan wysoki albo niski na konkretny port
		_delay_ms (1000);
		PORTC = 0b00101010;
		_delay_ms (1000);
		PORTC = 0b00111110;
		_delay_ms (1000);
		PORTC = 0b00111101;
		_delay_ms (1000);
		PORTC = 0b00111011;
		_delay_ms (1000);
		PORTC = 0b00110111;
		_delay_ms (1000);
		PORTC = 0b00101111;
		_delay_ms (1000);
		PORTC = 0b00011111;
		_delay_ms (1000);
	}
}
