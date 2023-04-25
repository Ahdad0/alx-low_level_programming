#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: string
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
