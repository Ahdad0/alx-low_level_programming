#include "main.h"
/**
 * print_number - print an integer
 * @n: integer
 */
void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
