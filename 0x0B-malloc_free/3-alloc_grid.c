#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that return pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: NULL or p
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(int) * height);
		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);

			if (p[i] == NULL)
			{
				for (j = 0; j < i; j++)
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
	}
	return (p);
}
