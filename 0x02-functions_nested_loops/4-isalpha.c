#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if character is lower case
 *
 * @c: character argument
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
