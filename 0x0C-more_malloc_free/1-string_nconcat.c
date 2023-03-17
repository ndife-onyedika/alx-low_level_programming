#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: String 1
 * @s2: String 1
 * @n: slice index for s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int space;
	unsigned int s1len = 0, s2len = 0;
	char *mal_s1;

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0')
		s2len++;

	if (n >= s2len)
		space = s2len;
	else
		space = n;

	while (s1[i])
	{
		/* code */
	}

	mal_s1 = malloc(sizeof(char) * (s1len + space));

	if (mal_s1 == NULL)
		return (NULL);

	return (mal_s1);
}
