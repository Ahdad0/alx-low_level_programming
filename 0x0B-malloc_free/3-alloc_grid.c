#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a point to a 2 dimensional array
 * @width: columns
 * @height: row
 * Return: NULL or arr
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (arr == NULL)
		return (NULL);

	return (arr);
}
