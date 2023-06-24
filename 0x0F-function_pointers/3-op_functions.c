#include "3-calc.h"

/**
 * op_add - add
 *
 * @a: value
 * @b: value
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 *
 * @a: value
 * @b: value
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 *
 * @a: value
 * @b: value
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 *
 * @a: value
 * @b: value
 * Return: result
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod
 *
 * @a: value
 * @b: value
 * Return: result
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
