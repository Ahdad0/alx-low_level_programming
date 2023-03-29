#include <stdio.h>
/**
 * main - print first 50 Fibonacci starting with 1 and 2
 * Return: 0 always
 */
int main(void)
{
	int i, first = 1, seconde = 2, next;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", first);
		next = first + seconde;
		first = seconde;
		seconde = next;
	}
	return (0);
}
