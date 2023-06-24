#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: array name
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: sum or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}

	return (-1);
}
