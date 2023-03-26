#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print number n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n > 98)
	{
		for (n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	return (0);
}
