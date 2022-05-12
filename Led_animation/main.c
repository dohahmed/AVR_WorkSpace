/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: lenovo
 */
/*******************************************************************************************
 * ! Title : Led Program
 * ! File Name : main.c
 * ! Description : This file has the implementation code for switching on led
 * ! Version : V1.0
 ********************************************************************************************/
//AVR Input Ouput Library Include
#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
	DDRA=0xFF;
	PORTA=0x00;
	while(1)
	{
		//				for(int i=0;i<8;i++)
		//				{
		//					PORTA|=(1<<i);
		//					_delay_ms(1000);
		//					PORTA&=(0<<i);
		//		//			PORTA=0x00;
		//		//			_delay_ms(2000);
		//				}
		//		for(int i=0;i<8;i++)
		//		{
		//			PORTA|=(1<<i);
		//			_delay_ms(1000);
		//			//					PORTA&=(0<<i);
		//			//			PORTA=0x00;
		//			//			_delay_ms(2000);
		//		}
		for(int i=0;i<4;i++)
		{
			PORTA=(0x0f|(1<<i))&&(0x0f|(1<<i));
			_delay_ms(1000);
			//					PORTA&=(0<<i);
			//			PORTA=0x00;
			//			_delay_ms(2000);
		}
	}
}
