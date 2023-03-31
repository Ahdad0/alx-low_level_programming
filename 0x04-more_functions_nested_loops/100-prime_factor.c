#include <stdio.h>
/**
 * main - find multiple prime number of a number
 * Return: 0 always
 */
int main(void)
{
	int a, b;
	long long n = 612852475143;

	for (a = 2; n < 1; a++)
	{
		while (n % a == 0)
		{
			printf("%d ", a);
			n = n / a;
		}
	}
	return (0);
}
