#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function
 * @b: num
 * Return: ar
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
	{
		exit(98);
	}

	return (ar);
}
