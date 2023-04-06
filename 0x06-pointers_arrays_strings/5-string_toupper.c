#include "main.h"
/**
 * string_toupper - turn the string from lowercase to uppercase
 * @a: string.
 * Return: a.
 */
char *string_toupper(char *a)
{
	int c = 0, len = 0, i;

	while (a[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (a[c] <= 122 && a[c] >= 97)
		{
			a[c] -= 32;
		}
		c++;
	}
	return (a);
}
