#include "main.h"
/**
 * print_triangle - print a 'size' of triangle
 * @size: integer
 */
void print_triangle(int size)
{
	int a, b, z, s, c = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		z = size;
		for (a = 0; a < size; a++)
		{
			for (b = 1; b < z; b++)
			{
				_putchar(' ');
			}
			z--;
			for (s = 0; s <= c; s++)
			{
				_putchar('#');
			}
			c++;
			_putchar('\n');
		}
	}
}
