#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		/* code */
		for (j = 0; j < 15; j++)
		{
			/* code */
			_putchar(j + '0');
		}
	}

	_putchar('\n');
}
