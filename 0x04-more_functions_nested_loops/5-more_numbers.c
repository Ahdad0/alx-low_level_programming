#include "main.h"
/**
 * more_numbers - print from 0 to 14 x10 times
 */
void more_numbers(void)
{
	int a, n;

	for (a = 0; a < 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
