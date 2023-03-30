#include <stdio.h>
#include "main.h"
/**
 * main - replace multiple of 3 and 5 with letter
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a < 10)
		{
			_putchar(a + '0');
			_putchar(' ');
		}
		else if (a < 100)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(' ');
		}
		else if (a == 100)
		{
			printf("Buzz ");
		}
	}
	_putchar('\n');
	return (0);
}
