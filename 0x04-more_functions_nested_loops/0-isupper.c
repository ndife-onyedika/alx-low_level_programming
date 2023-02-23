#include <ctype.h>
#include "main.h"

/**
 * _isupper - check if character is upper case
 *
 * @c: character argument
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
