#include "main.h"
/**
 * _strcpy - copies the sting include ('\0') in dest
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
