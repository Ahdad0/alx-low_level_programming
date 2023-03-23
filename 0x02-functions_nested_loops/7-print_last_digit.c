#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: number
 * Return: num the value of the last digit
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	if (num < 0)
	{
		num = -num;
	}
	_putchar(num + '0');
	return (num);
}
