#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		/* code */
		if (i != 2 && i != 4)
		{
			/* code */
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
