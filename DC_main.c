/*
 * DC_main.c
 *
 *  Created on: Nov 24, 2023
 *      Author: pc
 */


#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include <avr/delay.h>
#include "DC_interface.h"


int main (void) {

	DC_voidInit();


	while(1)
	{

		DC_voidRotateCW();
		_delay_ms(3000);

		 DC_voidStop();
		_delay_ms(3000);

		DC_voidRotateACW();
		_delay_ms(3000);

		 DC_voidStop();
		_delay_ms(3000);
	}


}
