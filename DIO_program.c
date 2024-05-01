/*
 * DIOprogram.c
 *
 *  Created on: Nov 10, 2023
 *      Author: User
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_config.h"

#include "DIO_interface.h"
#include "DIO_privte.h"
#include "DIO_register.h"


void DIO_voidSetPinDirection(u8 Copy_u8Port ,u8 Copy_u8Pin, u8 Copy_u8Direction )


{
      if(Copy_u8Direction== DIO_u8INPUT)//input
      {
          switch(Copy_u8Port)
          {
          case  DIO_u8PORTA :   CLEAR_BIT(DDRA , Copy_u8Pin); break;
          case  DIO_u8PORTB :   CLEAR_BIT(DDRB , Copy_u8Pin); break;
          case  DIO_u8PORTC :   CLEAR_BIT(DDRC , Copy_u8Pin); break;
          case  DIO_u8PORTD :   CLEAR_BIT(DDRD , Copy_u8Pin); break;


          }

      }
      else if (Copy_u8Direction==DIO_u8OUTPUT)//output
      {
    	  switch(Copy_u8Port)
    	      {
    	           case  DIO_u8PORTA :   SET_BIT(DDRA , Copy_u8Pin); break;
    	           case  DIO_u8PORTB :   SET_BIT(DDRB , Copy_u8Pin); break;
    	           case  DIO_u8PORTC :   SET_BIT(DDRC , Copy_u8Pin); break;
    	           case  DIO_u8PORTD :   SET_BIT(DDRD , Copy_u8Pin); break;


    	       }
      }
}

 void DIO_voidSetPinValue(u8 Copy_u8Port ,u8 Copy_u8Pin, u8 Copy_u8Value )
      {
    	  if(Copy_u8Value== DIO_u8LOW)//input
    	       {
    	           switch(Copy_u8Port)
    	           {
    	           case  DIO_u8PORTA :   CLEAR_BIT(PORTA , Copy_u8Pin); break;
    	           case  DIO_u8PORTB :   CLEAR_BIT(PORTB , Copy_u8Pin); break;
    	           case  DIO_u8PORTC :   CLEAR_BIT(PORTC , Copy_u8Pin); break;
    	           case  DIO_u8PORTD :   CLEAR_BIT(PORTD , Copy_u8Pin); break;


    	           }

    	       }
    	       else if (Copy_u8Value==DIO_u8HIGH)//output
    	       {
    	     	  switch(Copy_u8Port)
    	     	      {
    	     	           case  DIO_u8PORTA :   SET_BIT(PORTA , Copy_u8Pin); break;
    	     	           case  DIO_u8PORTB :   SET_BIT(PORTB , Copy_u8Pin); break;
    	     	           case  DIO_u8PORTC :   SET_BIT(PORTC , Copy_u8Pin); break;
    	     	           case  DIO_u8PORTD :   SET_BIT(PORTD , Copy_u8Pin); break;


    	     	       }


      }
      }

void DIO_voidSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction )

{
	 switch(Copy_u8Port)
	 {
	 case  DIO_u8PORTA : DDRA =Copy_u8Direction ; break;
	 case  DIO_u8PORTB : DDRB =Copy_u8Direction ; break;
	 case  DIO_u8PORTC : DDRC =Copy_u8Direction ; break;
	 case  DIO_u8PORTD : DDRD =Copy_u8Direction ; break;


	 }

}

void DIO_voidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value )
{
	 switch(Copy_u8Port)
		 {
		 case  DIO_u8PORTA : PORTA =Copy_u8Value ; break;
		 case  DIO_u8PORTB : PORTB =Copy_u8Value ; break;
		 case  DIO_u8PORTC : PORTC =Copy_u8Value ; break;
		 case  DIO_u8PORTD : PORTD =Copy_u8Value ; break;


		 }

}

u8   DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	u8 Local_u8Result;

	 switch(Copy_u8Port)
	 {
	 case  DIO_u8PORTA :Local_u8Result=GET_BIT(PINA,Copy_u8Pin); break;
	 case  DIO_u8PORTB :Local_u8Result=GET_BIT(PINB,Copy_u8Pin); break;
	 case  DIO_u8PORTC :Local_u8Result=GET_BIT(PINC,Copy_u8Pin); break;
	 case  DIO_u8PORTD :Local_u8Result=GET_BIT(PIND,Copy_u8Pin); break;
	 }
	return Local_u8Result;
}
