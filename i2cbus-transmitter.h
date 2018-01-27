#ifndef I2C_BUS_H
#define I2C_BUS_H

#ifndef SDA_HIGH_SCL_HIGH
	#define SDA_HIGH_SCL_HIGH	SDA_HIGH; SCL_HIGH
#endif

#ifndef SDA_HIGH_SCL_LOW
	#define SDA_HIGH_SCL_LOW	SDA_HIGH; SCL_LOW
#endif

#ifndef SDA_LOW_SCL_HIGH
	#define SDA_LOW_SCL_HIGH	SDA_LOW; SCL_HIGH
#endif

#ifndef SDA_LOW_SCL_LOW
	#define SDA_LOW_SCL_LOW		SDA_LOW; SCL_LOW
#endif

#ifndef DELAY
	#ifndef _UTIL_DELAY_H_
		#include <util/delay.h>
	#endif
	#ifndef DELAY_TIME
		#define DELAY_TIME 200
	#endif
	#define DELAY _delay_us(DELAY_TIME)
#endif

  //…

#endif
