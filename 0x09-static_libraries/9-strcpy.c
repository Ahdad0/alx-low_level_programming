#include "main.h"
/**
 * _strcpy - copies the sting include ('\0') in dest
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
