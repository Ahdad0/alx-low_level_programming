#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
