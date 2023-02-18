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
	int e;
	for (c = 0; c < 8; c++)
	{
		for (d = c + 1; d < 9; d++)
		{
			for (e = d + 1; e < 10; e++)
			{
				/* code */
				putchar(c + '0');
				putchar(d + '0');
				putchar(e + '0');
				if (c < 7 && d <= 8 && e <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
