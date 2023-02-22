#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to number 98
 * @n: integer
 * Return: returns nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			/* code */
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d ", i);
		}
	}
	else if (n > 98)
	{
		/* code */
		for (i = n; i >= 98; i--)
		{
			/* code */
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d ", i);
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	_putchar('\n');
}
