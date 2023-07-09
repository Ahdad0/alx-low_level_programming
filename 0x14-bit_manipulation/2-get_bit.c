#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0
 * Return: Value of bit at index, or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tak;

	if (index > 64)
	{
		return (-1);
	}

	tak = n >> index;

	return (tak & 1);
}
