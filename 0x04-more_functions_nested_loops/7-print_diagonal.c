#include "main.h"
/**
 * print_diagonal - print slashback after n times
 * @n: integer
 */
void print_diagonal(int n)
{
	int a, b = 92, m, q = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			if (a == 0)
			{
				_putchar(b);
				_putchar('\n');
			}
			if (a > 0)
			{
				for (m = 0; m <= q; m++)
				{
					_putchar(' ');
				}
				q++;
				_putchar(b);
				_putchar('\n');
			}	
		}
	}
}
