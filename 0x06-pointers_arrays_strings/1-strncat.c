#include "main.h"
/**
 * _strncat - concatenates two strings fron dest to src.
 * @dest: destination.
 * @src: source of string.
 * @n: n byte from src.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
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
	if (n > len2)
	{
		n = len2;
	}
	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
