#include "main.h"

/**
 * print_alphabet - function that print alphabet
 * it prints in lowercase
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
