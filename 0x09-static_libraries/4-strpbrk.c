#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searched a string for any of a set of cha.
 * @s: string to be searched.
 * @accept: set of cha to search for.
 * Return: s or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, c, len = 0, len2 = 0;

	while (accept[len])
	{
		len++;
	}
	while (s[len2])
	{
		len2++;
	}
	for (c = 0; c < len2; c++)
	{
		for (i = 0; i < len; i++)
		{
			if (accept[i] == s[c])
			{
				return (s + c);
			}
		}
	}
	return (NULL);
}
