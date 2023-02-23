#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: 0 or 1
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		/* code */
		_putchar(i + '0');
	}
	_putchar('\n');
}
