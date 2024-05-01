/*
 * DIO_interface.h
 *
 *  Created on: Nov 10, 2023
 *      Author: pc
 */
 // prototypes of functions
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

///////////


void DIO_voidSetPinDirection(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Direction );
 /* the function set pin direction and it return void ,,, takes parameter the port {A,B,C,D} and the number of pin {0 TO 7}
  * and the direction {input or output}.....  set function --> output  .. clear function --> intput
  *  */

void DIO_voidSetPinValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value );
/* the function set pin value and it return void ,,, takes parameter the port {A,B,C,D} and the number of pin {0 TO 7}
 * and the direction {input or output}.....  set function --> output  .. clear function --> intput
 *  */

void DIO_voidPortDirection(u8 Copy_u8Port , u8 Copy_u8Direction );

/* the function set port direction and it return void ,,, takes parameter the port {A,B,C,D} and the number of pin {0 TO 7}
 * and the direction {input or output}.....  set function --> output  .. clear function --> intput
 *  */

void DIO_voidPortValue(u8 Copy_u8Port , u8 Copy_u8Value );

/* the function set port value and it return void ,,, takes parameter the port {A,B,C,D} and the number of pin {0 TO 7}
 * and the direction {input or output}.....  set function --> output  .. clear function --> intput
 *  */
// output from pin or port

u8 DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin);
//input into pin

#define DIO_u8INPUT             0
#define DIO_u8OUTPUT            1


#define DIO_u8PORTA             1
#define DIO_u8PORTB             2
#define DIO_u8PORTC             3
#define DIO_u8PORTD             4

#define DIO_u8LOW               0
#define DIO_u8HIGH              1

#endif /* DIO_INTERFACE_H_ */
