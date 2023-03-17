#include <stdlib.h>
#define STATUS 98
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: positive integer
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *c = (unsigned int *)malloc(sizeof(unsigned int) * b);

	if (c == NULL)
		exit(STATUS);
	return (c);
}
