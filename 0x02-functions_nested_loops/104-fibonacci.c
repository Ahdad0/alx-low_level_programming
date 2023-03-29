#include <stdio.h>
/**
 * main - print first 98 Fibonacci number starting with 1 and 2
 * Return: 0 always
 */
int main(void)
{
	int i, a = 1, b = 2, next;

	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		printf("%d", next);
		if (i != 98)
		{
			printf(", ");
		}
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
