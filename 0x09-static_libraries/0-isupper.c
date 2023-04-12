#include "main.h"
/**
 * _isupper - checks if integer is uppercase
 * @c: alphabet
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	int u;

	for (u = 65; u <= 90; u++)
	{
		if (u == c)
		{
			return (1);
		}
	}
	return (0);
}
