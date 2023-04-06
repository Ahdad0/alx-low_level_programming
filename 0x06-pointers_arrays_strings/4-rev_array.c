#include "main.h"
/**
 * reverse_array - reverse string
 * @a: arrays name
 * @n: lenght of array
 */
void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
