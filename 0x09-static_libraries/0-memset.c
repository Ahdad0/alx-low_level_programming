#include "main.h"
/**
 * _memset - fills memory with b with constant n byte in s.
 * @s: array desti.
 * @b: source.
 * @n: string.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
