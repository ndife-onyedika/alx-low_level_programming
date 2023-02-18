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
	int c;
	int d;

	for (c = 0; c < 9; c++)
	{
		for (d = c + 1; d < 10; d++)
		{
			putchar(c + '0');
			putchar(d + '0');
			if (c < 8 && d <= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
