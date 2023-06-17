#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - function sthat allocate a memory block
 * @ptr: memory previously allocated
 * @old_size: size
 * @new_size: size
 * Return: NULL or p or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	free(ptr);
	ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
