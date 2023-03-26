#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int i, m, a;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 10; m++)
		{
			a = i * m;
			if (m == 0)
			{
				_putchar(a + '0');
			}
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (a < 10)
				{
					_putchar(' ');
					_putchar(a + '0');
				}
				else if (a >= 10)
				{
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
