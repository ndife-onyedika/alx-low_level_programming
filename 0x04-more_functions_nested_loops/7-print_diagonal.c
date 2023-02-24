#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws straight line in the terminal
 * @n: number of times (integer)
 * Return: 0 or 1
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		/* code */
		for (i = 0; i < n; i++)
		{
			/* code */
			for (j = 0; j <= i; j++)
			{
				/* code */
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
