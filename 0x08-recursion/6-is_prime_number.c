#include "main.h"

/**
 * _facto - function to calcule the square root of n.
 * @n: number.
 * @i: integer.
 * Return: result.
 */
int _facto(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (n < i)
	{
		return (0);
	}
	return (_facto(n, i + 1));
}

/**
 * _prime - check n if it's a prime number.
 * @n: number.
 * @i: number.
 * @sqrt: store _facto value.
 * Return: return 1 or 0.
 */
int _prime(int n, int i, int sqrt)
{
	if (n < 2)
	{
		return (0);
	}

	if (i > sqrt)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (_prime(n, i + 1, sqrt));
}

/**
 * is_prime_number - compare if it's a prime number.
 * @n: number.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	int sqrt = _facto(n, 1);

	return (_prime(n, 2, sqrt));
}
