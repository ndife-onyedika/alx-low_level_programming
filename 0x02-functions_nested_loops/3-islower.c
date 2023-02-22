#include <ctype.h>
#include "main.h"

/**
 * _islower - check if character is lower case
 *
 * @c: character argument
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
