#include <stdio.h>
/**
 * main - find multiple prime number of a number
 * Return: 0 always
 */
int main(void)
{
	int a;
	unsigned long int n = 612852475143;

	for (a = 2; n < 1; a++)
	{
		while (n % a == 0)
		{
			printf("%d ", a);
			n = n / a;
		}
	}
	putchar('\n');
	return (0);
}
