#include <stdio.h>
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
		else
		{
			printf("%d ", a);
		}
	}
	_putchar('\n');
	return (0);
}
