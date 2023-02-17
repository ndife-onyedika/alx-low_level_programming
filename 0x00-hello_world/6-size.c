#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long ll;
	float f;
	printf("Size of a char: %d byte(s)\n",(int)sizeof(c));
	printf("Size of an int: %d byte(s)\n",(int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n",(int)sizeof(li));
	printf("Size of a long long: %d byte(s)\n",(int)sizeof(ll));
	printf("Size of a float: %d byte(s)\n",(int)sizeof(f));
	return (0);
}
