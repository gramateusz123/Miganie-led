/*
 * main.c

 *
 *  Created on: 4 mar 2016
 *      Author: Roland
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void){

	DDRB |= (1<<PB1);

	while(1){
		PORTB ^= (1<<PB1);
		_delay_ms (1000);
	}
}
