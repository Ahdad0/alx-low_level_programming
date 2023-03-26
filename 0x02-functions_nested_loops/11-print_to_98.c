#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print number n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int a = n;
	int b = n;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	if (n > 98)
	{
		for (n = a; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (n = b; b <= 98; b++)
		{
			printf("%d", b);
			if (b != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
