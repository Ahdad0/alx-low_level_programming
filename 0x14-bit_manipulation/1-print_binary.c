#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: pointer
 *
 * Return: 0 or total
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total;

	total = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		total = (total << 1) + (b[i] - '0');
	}

	return (total);
}
