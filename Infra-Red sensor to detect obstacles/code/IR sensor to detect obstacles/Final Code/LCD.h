
/**************************************************************************************************

@name: LCD.h
@Date: 06/17/2023
@Author: Romany Sobhy
@brief: Header file for LCD module.
*************************************************************************************************/
#ifndef LCD_H_
#define LCD_H_

#include "DIO.h"
#include "LCD_config.h"

#define CLR_SCREEN 0x01
#define CURSOR_ON_DISPLAN_ON 0x0e
#define RETURN_HOME 0x02
#define ENTRY_MODE 0x06

#if defined four_bits_mode
#define EN 0
#define RS 1
#define RW 2
#define FOUR_BITS 0x28
#elif defined eight_bits_mode
#define EN 0
#define RS 1
#define RW 2
#define EIGHT_BITS 0x38
#endif

/**

@brief: Initializes the LCD module.
*/
void LCD_vInit(void);
/**

@brief: Sends a command to the LCD.
@param: cmd The command to send.
*/
void LCD_vSend_cmd(char cmd);
/**

@brief: Sends a character to the LCD.
@param: data The character to send.
*/
void LCD_vSend_char(char data);
/**

@brief: Sends a string to the LCD.
@param: data The string to send.
*/
void LCD_vSend_string(char *data);
/**

@brief: Clears the LCD screen.
*/
void LCD_clearscreen();
/**

@brief: Moves the cursor to the specified row and column.
@param: row The row to move the cursor to.
@param: coloumn The column to move the cursor to.
*/
void LCD_movecursor(char row, char coloumn);
#endif /* LCD_H_ */

