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
	PORTC = 0b00000001;
	int licznik = 0;
	int x = 0;
	while(1){

		if(x == 0){
			if(licznik == 6 )
			{
				PORTC = 0b00100000;
				licznik = 0;
				x = 1;

			}
			else
			{

				_delay_ms (1000);
				PORTC = (PORTC << 1);
				licznik++;
			}

			}
		else if(x == 1){

				if(licznik == 6 )
				{

					PORTC = 0b00000001;
					licznik = 0;
					x = 0;

				}
				else
				{
					_delay_ms (1000);
					PORTC = (PORTC >> 1);
					licznik++;
				}
			}
	}
}

























//		if (x == 0){//diody w lewo
//			if(licznik == 6){
//				licznik = 0;
//				PORTC = 0b00100000;
//				x = 1;
//
//			}
//			else{
//				_delay_ms(500);
//				PORTC = (PORTC << 1);
//				licznik++;
//			}
//
//		}
//		else if(x == 1){//diody w prawo
//			if(licznik == 6){
//				licznik = 0;
//				PORTC = 0b00000001;
//				x = 0;
//
//			}
//			else{
//				_delay_ms(500);
//				PORTC = (PORTC >> 1);
//				licznik++;
//				}
//			}
//
