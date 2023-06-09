#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: set of character.
 * Return: sum of length.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, c, count = 0, len2 = 0, len = 0, length = 0;

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
		for (i = 0; i <= len; i++)
		{
			if (accept[i] == s[c])
			{
				length += 1;
				count += 1;
			}
		}
		if (length == 0 || count == 0)
		{
			return (length);
		}
		count = 0;
	}
	return (length);
}
