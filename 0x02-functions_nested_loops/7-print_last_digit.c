#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - get last digit of number
 *
 * @n: integer
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last_num;

	last_num = abs(n) % 10;
	_putchar(last_num + '0');

	return (last_num);
}
