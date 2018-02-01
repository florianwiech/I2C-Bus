# I2C-Bus

The name I2C-Bus translates into "Inter Integrated Circuit-Bus". Sometimes the bus is called I2C, IIC or I&sup2;C-bus.
<br><br>
The I&sup2;C–Bus allows easy communication between components on the same circuit board or components which are linked via cable.
The most significant features are that there are only two bus lines required. It's based on a simple master/slave relationship between all components. Each device is addressed by an unique address.
Simplicity and flexibility are key characteristics that make this bus attractive to many applications.

## Getting Started
Two use the libraries you have to create/implement the following constants/functions<br>
(Declaration of the constants before the `include` lines):

### I2C-Bus
```c
void setSDA_HIGH();	// set SDA line to high
void setSDA_LOW();	// set SDA line to low

void setSCL_HIGH();	// set SCL line to high
void setSCL_LOW();	// set SCL line to low

void setPULLUP(true);	// set SDA line to input
void setPULLUP(false);	// set both SDA & SCL to output (important to set both!)

bool getSDAValue();	// returns current value on SDA line

#define DELAY		// name of the delay function:
			// the DELAY constant is optional, if you want to use the <util/delay> library.

```

### LCD-Display
```c
bool lcd_display_send_byte(int);	// call the transmitter function in here
				//	@param Integer address (8-Bit)
				//	@return Integer (1 -> ack, 0 -> transfer fails)

#define DELAY_MS	// name of the delay function:
			// the DELAY constant is optional, if you want to use the <util/delay> library.
```

### Hardware
![Hardware Setup](assets/hardware_complete.jpg)
* Mikrocontroller ATMEGA2560
* Development Board: NTK600
* LCD-Display, type HD44780 (4-Bit-Mode)
* Oscilloscope

## Resources

* [Official Specification](https://www.nxp.com/docs/en/user-guide/UM10204.pdf) by NXP
* [i2c-bus.org](https://www.i2c-bus.org/)
* [learn.sparkfun.com](https://learn.sparkfun.com/tutorials/i2c)
* [i2c.info](http://i2c.info/i2c-bus-specification)

## Contributing
We're thrilled that you'd like to contribute to this project. Your help is essential for keeping it great.<br>
In general, contributors should develop on branches based off of `master` and pull requests should be to `master`.

## Team
* [Florian Wiech](https://github.com/florianwiech)
* [Thomas Niestroj](https://github.com/Manorka)

## Copyright and License

This project is under the MIT License. See the [MIT License](LICENSE.md) file for the full license text.
<br>
Please consider the I2C-Bus License.
