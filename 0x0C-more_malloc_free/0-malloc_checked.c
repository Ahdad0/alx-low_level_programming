#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: num
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
