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
	char *o = s;

	while (*o)
	{
		if (*o == c)
		{
			for (i = *o; i < 3; i++)
			{
				o[i] = c;
			}
			return (o);
		}
		o++;
	}
	return (NULL);
}
