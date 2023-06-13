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
	int **p, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
