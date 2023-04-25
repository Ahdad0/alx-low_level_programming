#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: name of array
 * @size: size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (action && size && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
