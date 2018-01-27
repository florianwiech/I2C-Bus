#define F_CPU 1000000UL

#include <stdio.h>
#include <string.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


#define SDA_HIGH    PORTB |= 0b00000010
#define SDA_LOW     PORTB &= 0b11111101

#define SCL_HIGH    PORTB |= 0b00000001
#define SCL_LOW     PORTB &= 0b11111110

#define PULLUP_ON   DDRB &=0b11111101
#define PULLUP_OFF	DDRB |=0b00000011

#define READ_SDA_VALUE  (PORTB & (1 << 1)) >> 1

#include "i2cbus-transmitter.h"

int main() {

  //…

  return 0;
}
