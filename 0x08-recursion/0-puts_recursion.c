#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that print string
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		putchar('\n');
	}

}
