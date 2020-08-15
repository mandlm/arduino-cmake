#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRC |= (1 << PC5);

	while (true)
	{
		PORTC ^= (1 << PC5);
		_delay_ms(250);
	}

	return 0;
}
