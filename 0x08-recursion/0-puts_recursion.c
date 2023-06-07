#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that print string
 * @s: string
 */

void _puts_recursion(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}

	len++;

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
