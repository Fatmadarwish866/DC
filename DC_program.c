/*
 * DC_program.c
 *
 *  Created on: Nov 24, 2023
 *      Author: pc
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"

#include "DC_config.h"
#include "DC_privet.h"
#include "DC_interface.h"




void DC_voidInit(void){
	DIO_voidSetPinDirection(DC_CTRL_PORT , DC_CTRL_PIN0 ,DIO_u8OUTPUT);
	DIO_voidSetPinDirection(DC_CTRL_PORT , DC_CTRL_PIN1 ,DIO_u8OUTPUT);


	DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN0 , DIO_u8LOW);
	DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN1 , DIO_u8LOW);


}
void DC_voidRotateCW(void){

	DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN0 , DIO_u8LOW);
	DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN1 , DIO_u8HIGH);


}
void DC_voidRotateACW(void){

	DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN1 , DIO_u8LOW);
	DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN0 , DIO_u8HIGH);

}
void DC_voidStop(void){

		DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN0 , DIO_u8LOW);
		DIO_voidSetPinValue(DC_CTRL_PORT , DC_CTRL_PIN1 , DIO_u8LOW);


}
