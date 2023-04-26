#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that print all
 * @format: list type
 * @...: arg
 */
void print_all(const char * const format, ...)
{
	int u = 0;
	char *separator = "";
	char *s;
	va_list ap;

	va_start(ap, format);

	while (format[u])
	{
		switch (format[u])
		{
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'c':
				printf("%s%s", separator, va_arg(ap, char *));
				break;

			case 's':
				s = va_arg(ap, char *);

				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;

			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;

			default:
				u++;
				continue;
		}
		separator = ", ";
		u++;
	}
	putchar('\n');
	va_end(ap);
}
