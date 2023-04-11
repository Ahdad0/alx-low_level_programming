#include "main.h"
/**
 * _pow_recursion - return value of x raised to the power y.
 * @x: value.
 * @y: power.
 * Return: value of x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
