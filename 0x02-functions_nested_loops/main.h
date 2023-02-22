#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

#endif
