#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function
 * @b: var
 * Return: value or void
 */
void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);

	if (!ar)
		exit(98);

	return (ar);
}