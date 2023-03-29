#include <stdio.h>
/**
 * main - print first 50 Fibonacci starting with 1 and 2
 * Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long first = 0, seconde = 1, next;

	for (i = 0; i < 50; i++)
	{
		next = first + seconde;
		printf("%lu,", next);
		first = seconde;
		seconde = next;
		if (i == 49)
		{
			printf("\n");
		}
		else
			printf(", ");
	}
	return (0);
}
