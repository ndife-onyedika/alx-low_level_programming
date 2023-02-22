#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - get last digit of number
 *
 * Return: none
 */

void jack_bauer(void)
{
	int min, hour;
	for (hour = 0; hour <= 23; hour++)
	{
		/* code */
		for (min = 0; min <= 59; min++)
		{
			/* code */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(10);
		}
	}
}
