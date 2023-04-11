#include "main.h"

/**
 * _recursion - function.
 * @n: num.
 * @i: num.
 * Return: natural root num.
 */

int _recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	return (_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - find the natural square root of num.
 * @n: num
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_recursion(n, 0));
}
