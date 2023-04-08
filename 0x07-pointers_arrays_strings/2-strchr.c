#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: p or null.
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s)
	{
		if (*s == c)
		{
			for (i = *s; i < '\0'; i++)
			{
				s[i] = c;
			}
			return (s);
		}
		s++;
	}
	return (NULL);
}
