#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if character is upper case
 *
 * @c: integer argument
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
  if (isdigit(c))
  {
    return (1);
  }
  else
  {
    return (0);
  }
}
