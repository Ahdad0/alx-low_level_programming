#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sum of all parameters
 * @n: num
 * @...: inf num
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, num = 0, sum = 0;

	if (n == 0)
		return (0);

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);

	return (sum);
}
