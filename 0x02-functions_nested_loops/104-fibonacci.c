#include <stdio.h>
/**
 * main - print first 98 of Fibonacci number
 * Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long a, b, c, next;

	a = 0;
	b = 1;
	c = 98;

	for (i = 1; i <= c; i++)
	{
		next = a + b;
		printf("%lu", next);
		a = b;
		b = next;
		if (i == c)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
