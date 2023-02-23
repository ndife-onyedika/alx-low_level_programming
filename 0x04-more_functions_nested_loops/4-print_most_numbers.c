#include "main.h"

/**
 * print_most_numbers - print numbers other than 2 and 4
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
