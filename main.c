/*
 * main.c

 *
 *  Created on: 4 mar 2016
 *      Author: Roland
 */
#include <avr/io.h> //biblioteka do sterowania wej�ciem/wyj�ciem
#include <util/delay.h>

int main(void){ //void czyli pobiera nic, np. podnie�, po��.

	DDRC = 0b11111111; //ustalamy czy dany port jest wejsciem, czy wyjsciem
	PORTC = 0b00000001;
	int licznik = 0;
	while(1){
		if(licznik == 6)
		{
			licznik = 0;
			PORTC = 0b00000001;
		}
		_delay_ms(150);
		PORTC = (PORTC << 1);
		licznik++;
	}
}

