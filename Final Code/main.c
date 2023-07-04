/**************************************************************************************************
 * @name: main.c
 *
 * @Date: 06/17/2023
 * @Author: Romany Sobhy
 * @brief: Main program file for the IR Sensor Obstacle Detection project.
 *************************************************************************************************/
#include <avr/io.h>
#include "LCD.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	LCD_vInit();
    while(1)
    {
		if(DIO_u8read('D',0)==1)
		{
			LCD_clearscreen();
			LCD_vSend_string("there is");
			LCD_movecursor(2,1);
			LCD_vSend_string("obstacle");
		}
		else
		{
			LCD_clearscreen();
			LCD_vSend_string("No obstacles");
		}
		_delay_ms(500);
    }
}

