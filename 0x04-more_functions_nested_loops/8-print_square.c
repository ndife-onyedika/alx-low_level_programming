#include "main.h"

/**
 * print_square - draws straight line in the terminal
 * @size: number of times (integer)
 * Return: 0 or 1
 */
void print_square(int size)
{
	int len, hash;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (hash = 0; hash < size; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
