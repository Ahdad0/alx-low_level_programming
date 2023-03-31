#include <stdio.h>
/**
 * main - find the largest prime factore of the number n
 * Return: 0 always
 */
int main(void)
{
	unsigned long int n = 612852475143;
	long int i;

	for (i = 2; n > 1; i++)
	{
		while (i % n == 0)
		{
			n /= i;
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}
