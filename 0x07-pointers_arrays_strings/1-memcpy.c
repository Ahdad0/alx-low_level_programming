#include "main.h"
/**
 * _memcpy - copies n number from drc to dest.
 * @dest: destination.
 * @src: source of number.
 * @n: number of byte to be copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
