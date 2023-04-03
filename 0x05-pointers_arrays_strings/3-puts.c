#include "main.h"
/**
 * _puts - print a string in stdout
 * @str: string
 */
void _puts(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
}
