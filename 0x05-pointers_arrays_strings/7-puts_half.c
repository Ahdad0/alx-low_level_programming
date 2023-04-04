#include "main.h"
/**
 * puts_half - print the string from middle to the end
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0, i;

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
	else
	{
		_putchar(str[len - 1]);
	}
	_putchar('\n');
}
