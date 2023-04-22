#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function
 * @min: integer
 * @max: integer
 * Return: ar or NULL
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);

	ar = malloc((max + 1) * sizeof(int));

	if (!ar)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
