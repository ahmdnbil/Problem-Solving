/*
 * main.c
 *
 *  Created on: Aug 7, 2022
 *      Author: User
 */
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#define ZERO 0b00111111
#define ONE 0b00000110
#define TWO 0b01011011
#define THREE 0b01001111
#define FOUR 0b01100110
#define FIVE 0b01101101
#define SIX 0b01111101
#define SEVEN 0b00000111
#define EIGHT 0b01111111
#define NINE 0b01101111

#define F_CPU 8000000UL

#define PIN_HIGH 1
#define PIN_LOW 0



void main(void)
{
	DDRC=0xFF;
	DDRB=0xFF;
	DDRA=0xFF;
	u8 arr[]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};

	while(1)
	{
		PORTC=0b00000100;
		for(u8 i=9;i>0;i--)
		{
			if(i+1 ==10)
			{
			   PORTB=arr[0];
			   PORTA=arr[1];
			}else
			{
			   PORTB=arr[i+1];
			   PORTA=arr[i+1];
			}

			_delay_ms(1000);
			if(i==0)
				break;
		}
		PORTC=0b00000010;
		for(u8 i=2;i>=-1;i--)
		{
			PORTB=arr[i+1];
			PORTA=arr[i+1];
			_delay_ms(1000);
			if(i==0)
				break;
		}
		PORTC=PORTC=0b00000001;
		for(u8 i=9;i>=-1;i--)
		{
			if(i+1 ==10)
			{
			   PORTB=arr[0];
			   PORTA=arr[1];
			}else
			{
			   PORTB=arr[i+1];
			   PORTA=arr[i+1];
			}
			_delay_ms(1000);
			if(i==0)
				break;
		}
	}
}
