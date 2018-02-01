#ifndef LCD_DISPLAY_H
#define LCD_DISPLAY_H

#include <stdbool.h>

/*
	github repo: <https://github.com/florianwiech/I2C-Bus>

	library created by
		> Florian Wiech		<https://github.com/florianwiech>
		> Thomas Niestroj	<https://github.com/Manorka>

	hardware components:
		> Display: Type HD44780, 4-Bit-Mode
      		Specification: http://www.sprut.de/electronic/lcd/

	Requirements:
	To use this library you have to define the following functions/constants:

	> lcd_display_send_byte(int)	// name of the send function
									//		@param Integer address (8-Bit)
									//		@return Boolean (1 -> ack, 0 -> transfer fails)

	> DELAY_MS		// name of the delay function
					// the DELAY constant is optional, if you want to use the <util/delay> library.
*/

bool lcd_display_send_byte(int);

#ifndef DELAY_MS
	#ifndef _UTIL_DELAY_H_
		#include <util/delay.h>
	#endif
	#define DELAY_MS _delay_ms
#endif

// config vars
int display_ligthning;

bool lcd_display_init();

bool lcd_display_write(int, int);
bool lcd_display_send_character(char, int, int);

/**
 * helper
*/

/**
 * @function lcd_display_write_row
 * @param text: max. 16 chracters
 * @param row: 1 -> first row, 2 -> second row
*/
bool lcd_display_write_row(char[], int);
bool lcd_display_write_first_row(char[]);
bool lcd_display_write_second_row(char[]);

bool lcd_display_cursor_home();

/**
 * @function lcd_display_cursor_shift: display & cursor shift
 * @param display_cursor: 0 -> cursor, 1 -> display
 * @param right_left: 0 -> left, 1 -> right
*/
bool lcd_display_cursor_shift(int, int);

bool lcd_display_clear();

/**
 * @function lcd_display_cursor_settings
 * @param display_on_off: 0 -> off, 1 -> on
 * @param cursor_on_off: 0 -> off, 1 -> on
 * @param cursor_blink_on_off: 0 -> off, 1 -> on
*/
bool lcd_display_cursor_settings(int, int, int);

#endif
