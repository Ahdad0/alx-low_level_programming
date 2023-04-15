#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL or s3
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, len2 = 0, len3 = 0, i, u;
	char *s3;

	while (s1[len])
		len++;

	while (s2[len2])
		len2++;
	len2++;
	len3 = len + len2;

	s3 = malloc(len3 * sizeof(char));

	if (s3 == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		s3[i] = s1[i];
	}

	for (u = 0; u < len2; u++)
	{
		s3[len + u] = s2[u];
	}
	return (s3);
}
