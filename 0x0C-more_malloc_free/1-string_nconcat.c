#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -  function that concatenates two strings
 * @s1: string
 * @s2: second string
 * @n: num
 * Return: NULL or p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = 0, len2 = 0, len3 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (s1[len])
		len++;
	while (s2[len2])
		len2++;

	if (n >= len2)
	{
		len3 = len + len2 + 1;
		p = malloc(sizeof(char) * len3);
		if (p == NULL)
			return (NULL);
		len2++;
		for (i = 0; i < len; i++)
			p[i] = s1[i];
		for (i = 0; i < len2; i++)
			p[len + i] = s2[i];
	}
	else if (n < len2)
	{
		len3 = len + n + 1;
		p = malloc(sizeof(char) * len3);
		if (p == NULL)
			return (NULL);
		n++;
		for (i = 0; i < len; i++)
			p[i] = s1[i];

		for (i = 0; i < n; i++)
			p[len + i] = s2[i];
	}
	return (p);
}
