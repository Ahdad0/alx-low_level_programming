#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  function prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: inf number
 * Return: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i + 1 != n && separator != NULL)
		{
			printf("%s ", separator);
		}
		else if (i + 1 != n && separator == NULL)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	va_end(args);
}
