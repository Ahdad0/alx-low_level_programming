#include <stdio.h>
/**
 * main - find multiple prime number of a number
 * Return: 0 always
 */
int main(void)
{
	unsigned long int n = 612852475143, a;

	for (a = 2; n < 1; a++)
	{
		while (n % a == 0)
		{
			printf("%u\n", a);
			n = n / a;
		}
	}
	return (0);
}
