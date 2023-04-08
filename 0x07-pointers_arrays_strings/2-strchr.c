#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: p or null.
 */
char *_strchr(char *s, char c)
{
	int i, len = 0;

	while (s[len])
	{
		len++;
	}
	while (*s)
	{
		if (*s == c)
		{
			for (i = *s; i < len; i++)
			{
				s[i] = c;
			}
			return (s);
		}
		s++;
	}
	return (NULL);
}
