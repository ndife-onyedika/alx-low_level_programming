#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i <= 15; i++)
	{
		if (i > 9)
		{
			putchar(c);
			c++;
		}
		else
		{
			putchar(i + '0');
		}
	}
	putchar('\n');

	return (0);
}
