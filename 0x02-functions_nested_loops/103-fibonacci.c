#include <stdio.h>
/**
 * main - calcule sum of even number
 * Return: 0 always
 */
int main(void)
{
	int a = 1, b = 2, sum = 0, d = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		d = a + b;
		a = b;
		b = d;
	}
	printf("%d\n", sum);
	return (0);
}
