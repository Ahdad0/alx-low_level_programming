#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print number n to 98
 * @n: integer
 * Return: 0 always
 */
void print_to_98(int n)
{
	int a = n;
	int b = n;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (n = a; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			
			{
			else if (a == 98)
			{
				printf("%d", a);
			}
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (n = b; b <= 98; b++)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			{
			else if (b == 98)
			{
				printf("%d", b);
			}
		}
		printf("\n");
	}
}
