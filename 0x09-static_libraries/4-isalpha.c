#include "main.h"
/**
 * _isalpha - checks if alphabet are in lowercase nor uppercase
 * @c: represent alphabet or integr or integre
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
