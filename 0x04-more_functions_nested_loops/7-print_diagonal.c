#include "main.h"
/**
 * print_diagonal - print slashback after n times
 * @n: integer
 */
void print_diagonal(int n)
{
	int a, b = 92;

	for (a = 0; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (a == n)
		{
			_putchar(b);
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
		}
	}
}
