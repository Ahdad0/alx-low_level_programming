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
	int *ar, i, sum;

	if (min > max)
		return (NULL);

	sum = max - min + 1;

	ar = malloc(sum * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
