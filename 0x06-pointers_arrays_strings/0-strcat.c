#include "main.h"
/**
 * _strcat - concatenates two string from src to dest
 * @dest: destination
 * @src: source of string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
