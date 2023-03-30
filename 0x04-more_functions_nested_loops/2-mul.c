#include "main.h"
/**
 * mul - multiples two number
 * @a: first number
 * @b: seconde number
 * Return: sum
 */
int mul(int a, int b)
{
	int sum;

	if (b < 0 && a > 0)
	{
		b *= -1;

		sum = a * b;
		sum *= -1;
	}
	else if (a < 0 && b > 0)
	{
		a *= -1;

		sum = a * b;
		sum *= -1;
	}
	else if (b < 0 && a < 0)
	{
		a *= -1;
		b *= -1;

		sum = a * b;
	}
	else
	{
		sum = a * b;
	}
	return (sum);
}
