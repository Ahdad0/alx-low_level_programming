#include <stdio.h>
/**
 * print_array - print n element of an array of integer
 * @a: array
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n != i + 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
