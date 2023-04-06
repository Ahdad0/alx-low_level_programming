#include "main.h"
/**
 * _strcmp - compares two strings and return their result.
 * @s1: string.
 * @s2: string.
 * Return: result.
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = s1[0] - s2[0];

	return (result);
}
