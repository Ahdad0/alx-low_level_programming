#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL or p
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len = 0, len2 = 0, len3 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len])
		len++;

	while (s2[len2])
		len2++;

	len2++;

	len3 = len + len2;

	p = malloc(sizeof(char) * len3);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		p[len + j] = s2[j];
	}

	return (p);
}
