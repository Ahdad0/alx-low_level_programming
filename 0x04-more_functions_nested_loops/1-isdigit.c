#include "main.h"
/**
 * _isdigit - checks if c is a digit (0 throught 9)
 * @c: alphabet or digit
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	int u;

	for (u = '0'; u <= '9'; u++)
	{
		if (u == c)
		{
			return (1);
		}
	}
	return (0);
}
