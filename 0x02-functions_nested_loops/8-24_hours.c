#include "main.h"
/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59,
 */
int hour, minute;
{
	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 23; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
	_putchar(i);

}
