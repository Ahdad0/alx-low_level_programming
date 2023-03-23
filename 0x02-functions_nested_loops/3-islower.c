#include "main.h"
/**
 * _islower - checks if alphabet are in lowercase
 * @c: represent alphabet
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
