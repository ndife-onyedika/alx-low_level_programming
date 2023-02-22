#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		/* code */
		if (i % 3 == 0 || i % 5 == 0)
		{
			/* code */
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
