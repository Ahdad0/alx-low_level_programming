#include "main.h"
/**
 * puts_half - print the string from middle to the end
 * @str: string
 */
void puts_half(char *str)
{
	long int len = 0, i, n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
