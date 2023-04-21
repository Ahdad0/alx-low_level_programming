#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: num
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(sizeof(void) * b);

	if (ar == NULL)
	{
		printf("98");
		exit(1);
	}

	return (ar);
}
