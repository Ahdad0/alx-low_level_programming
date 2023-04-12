#include "main.h"
/**
 * _strncpy - copies n of string from src to dest.
 * @dest: destination when to paste strings.
 * @src: source of strings.
 * @n: number of string to copie.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, len2 = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	if (n < len2)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else if (n > len2)
	{
		for (i = 0; i < n; i++)
		{
			if (i != len2)
			{
				dest[i] = src[i];
			}
			if (i == len2)
			{
				while (i < n)
				{
					dest[i] = '\0';
					i++;
				}
			}
		}
	}
	return (dest);
}
