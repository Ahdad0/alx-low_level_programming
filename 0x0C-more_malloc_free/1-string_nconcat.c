#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function
 * @s1: string
 * @s2: string
 * @n: value
 * Return: nothing or ar
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, o, len = 0, len2 = 0, len3 = 0;

	while (s2[len] != '\0')
		len++;

	while (s1[len2] != '\0')
		len2++;

	len++;

	len3 = len + len2;

	ar = malloc(sizeof(char) * len3);

	if (!ar)
		return (0);

	for (i = 0; i < len2; i++)
		ar[i] = s1[i];

	if (n >= len)
	{
		for (o = 0; o < len; o++)
		{
			ar[len2 + o] = s2[o];
		}
	}
	else if (n < len)
	{
		for (i = 0; i < n; i++)
		{
			ar[len2 + i] = s2[i];
		}
	}

	return (ar);
}










