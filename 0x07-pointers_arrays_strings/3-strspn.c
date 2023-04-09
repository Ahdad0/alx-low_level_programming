#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: set of character.
 * Return: sum of lenght.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len = 0, lenght = 0;

	while (accept[len])
	{
		len++;
	}

	while (*s)
	{
		for (i = 0; i < len; i++)
		{
			if (accept[i] == s[i])
			{
				lenght += 1;
			}
			else if (accept[i] != s[i])
			{
				break;
			}
		}
		s++;
	}
	return (lenght);
}
