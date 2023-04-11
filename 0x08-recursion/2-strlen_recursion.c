#include "main.h"
/**
 * _strlen_recursion - return the lenght of string.
 * @s: string.
 * Return: return lenght.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}

	count += _strlen_recursion(s + 1);
	count += 1;

	return (count);
}
