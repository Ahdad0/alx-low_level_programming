#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function
 * @nmemb: value
 * @size: type
 * Return: ar or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
