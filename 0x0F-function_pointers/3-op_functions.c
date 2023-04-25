#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function
 * @a: value
 * @b: value
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function
 * @a: value
 * @b: value
 * Return: non-zero
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function
 * @a: value
 * @b: value
 * Return: non-zero
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function
 * @a: value
 * @b: value
 * Return: non-zero
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
 * op_mod - function
 * @a: value
 * @b: value
 * Return: non-zero
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
