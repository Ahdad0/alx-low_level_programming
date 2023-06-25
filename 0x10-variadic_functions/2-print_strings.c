#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: str
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *name;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		name = va_arg(args, char*);
		if (name == NULL)
		{
			printf("(nil)");
		}
		else if (name != NULL)
		{
			printf("%s", name);
		}
		if (i + 1 != n && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);
}
