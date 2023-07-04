/**************************************************************************************************
 * @name: DIO.c
 *
 * @Date: 06/17/2023
 * @Author: Romany Sobhy
 * @brief: DIO implementation file.
 *************************************************************************************************/


#ifndef DIO_H_
#define DIO_H_
/**

@brief Set the direction of the given pin in the given port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param pinnumber The pin number.
@param direction The direction of the pin (0 = input, 1 = output).
@implements DIO_vsetPINDir
*/
void DIO_vsetPINDir(unsigned char portname, unsigned char pinnumber, unsigned char direction);
/**

@brief Set the value of the given pin in the given port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param pinnumber The pin number.
@param outputvalue The value to set (0 = low, 1 = high).
@implements DIO_write
*/
void DIO_write(unsigned char portname, unsigned char pinnumber, unsigned char outputvalue);
/**

@brief Returns the value of the given pin in the given port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param pinnumber The pin number.
@return The value of the pin (1 if high, 0 if low).
@implements DIO_u8read
*/
unsigned char DIO_u8read(unsigned char portname, unsigned char pinnumber);
/**

@brief Reverse the value of the given pin in the given port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param pinnumber The pin number.
@implements DIO_toggle
*/
void DIO_toggle(unsigned char portname, unsigned char pinnumber);
/**

@brief Set the direction of the whole port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param direction The direction of the port.
@implements DIO_set_port_direction
*/
void DIO_set_port_direction(unsigned char portname, unsigned char direction);
/**

@brief Write a value to all pins of the given port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param portvalue The value to write to the port.
@implements DIO_write_port
*/
void DIO_write_port(unsigned char portname, unsigned char portvalue);
/**

@brief Read the value of the given port.
@param portname The port name ('A', 'B', 'C', or 'D').
@return The value of the port.
@implements DIO_read_port
*/
unsigned char DIO_read_port(unsigned char portname);
/**

@brief Connect or disconnect the pull-up resistor to the given pin at the given port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param pinnumber The pin number.
@param connect_pullup Connect or disconnect the pull-up resistor (1 = connect, 0 = disconnect).
@implements DIO_vconnectpullup
*/
void DIO_vconnectpullup(char portname, char pinnumber, char connect_pullup);
/**

@brief Write a value to the low nibble of the port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param value The value to write.
@implements write_low_nibble
*/
void write_low_nibble(unsigned char portname, unsigned char value);
/**

@brief Write a value to the high nibble of the port.
@param portname The port name ('A', 'B', 'C', or 'D').
@param value The value to write.
@implements write_high_nibble
*/
void write_high_nibble(unsigned char portname, unsigned char value);
#endif