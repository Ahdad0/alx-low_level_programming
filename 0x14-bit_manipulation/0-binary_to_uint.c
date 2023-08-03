#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - binary to int
 * @b: binary
 *
 * Return: value or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int res = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		res = res * 2 + (*b - '0');
		b++;
	}

	return (res);
}
