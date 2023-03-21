#include "main.h"
/**
 * print_alphabet_x10 - output alphabet in lowercase 10 times
 * Return: 0 (success)
 **/
void print_alphabet_x10(void)
{
	int i = 10;

	while (i >= 1)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}

