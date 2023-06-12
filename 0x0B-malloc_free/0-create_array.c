#include <stdlib.h>

/**
 * *create_array - function that create an array of chars
 * @size: size
 * @c: character
 * Return: NULL or p
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(char) * size);
		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
