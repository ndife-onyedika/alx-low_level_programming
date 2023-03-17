#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: String 1
 * @s2: String 1
 * @n: slice index for s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}

	if (n >= len2)
	{
		while (s2[j] != '\0')
		{
			/* code */
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	else
	{
		while (j != n)
		{
			/* code */
			s3[i] = s2[j];
			i++;
			j++;
		}
	}

	return (s3);
}
