#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer.
 * @c: character.
 * Return: s or null.
 */
char *_strchr(char *s, char c)
{
	int i, len = 0;

	while (s[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}
