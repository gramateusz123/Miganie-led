/*
 * main.c

 *
 *  Created on: 4 mar 2016
 *      Author: Roland
 */
#include <avr/io.h> //biblioteka do sterowania wej�ciem/wyj�ciem
#include <util/delay.h>

int main(void){ //void czyli pobiera nic, np. podnie�, po��.

	DDRB |= (1<<PB1); //ustalamy czy dany port jest wejsciem, czy wyjsciem

	while(1){
		PORTB ^= (1<<PB1);// przypisujemy stan wysoki albo niski na konkretny port
		_delay_ms (1000);
	}
}
