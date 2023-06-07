#include "main.h"

/**
 * recur - function
 * @n: firsrt number
 * @i: seconde number
 * Return: result
 */
int recur(int n, int i)
{
	if (n * n == i)
	{
		return (n);
	}
	else if (n <= 0)
	{
		return (-1);
	}

	return (recur(n - 1, i));
}

/**
 * _sqrt_recursion - function that found the square root
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (recur(n, n));
}
