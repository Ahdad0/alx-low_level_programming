#include <stdio.h>

/**
 * print_name - function
 * @name: string
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
