#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers
 * @min: minimum number
 * @max: maximun number
 * Return: NULL or num
 */
int *array_range(int min, int max)
{
	int *num, i = 0, sub;

	if (min > max)
		return (NULL);

	sub = max - min + 1;

	num = malloc(sub * sizeof(int));

	if (num == NULL)
		return (NULL);

	while (min <= max)
	{
		num[i] = min++;
		i++;
	}

	return (num);
}
