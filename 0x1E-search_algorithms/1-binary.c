#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array
 * of integers
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: -1 or value
 */
int binary_search(int *array, size_t size, int value)
{
	int d = 0;
	int si = size - 1;
	int num = 0, i;

	if (array == NULL)
		return (-1);

	while (d <= si)
	{
		num = d + (si - d) / 2;

		printf("Searching in array: ");

		for (i = d; i <= si; i++)
		{
			if (i == si)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}


		if (array[num] == value)
		{
			return (num);
		}

		if (array[num] < value)
		{
			d = num + 1;
		}
		else
		{
			si = num - 1;
		}
	}

	return (-1);
}
