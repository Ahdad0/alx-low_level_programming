#include "main.h"
/**
 * _strlen - compute the length of string
 * @s: string
 * Return: len.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}
