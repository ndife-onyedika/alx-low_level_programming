#include "main.h"

/**
 * print_line - draws straight line in the terminal
 * @n: number of times (integer)
 * Return: 0 or 1
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		/* code */
		for (i = 0; i < n; i++)
		{
			/* code */
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
