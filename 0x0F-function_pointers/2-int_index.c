#include <stdlib.h>
#include <ctype.h>
/**
 * int_index - function that searches for an integer.
 * @array: array of type int
 * @size: size of array
 * @cmp: func ptr
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			index = i;
			break;
		}
	}

	return (index);
}
