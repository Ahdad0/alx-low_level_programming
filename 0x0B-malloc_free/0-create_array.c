#include <stdlib.h>

/**
 * _memset - function
 * @s: string
 * @b: char
 * @n: num
 * Return: s
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

/**
 * create_array - creates an array of chars
 * @size: size
 * @c: char
 * Return: NULL or ar
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar != NULL)
		_memset(ar, c, size);

	return (ar);
}
