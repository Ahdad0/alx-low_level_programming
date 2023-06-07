#include "main.h"

/**
 * recur - function
 * @n: firsrt number
 * @i: seconde number
 * Return: result
 */
int recur(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	return (recur(n, i + 1));
}

/**
 * _sqrt_recursion - function that found the square root
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (recur(n, 0));
}
