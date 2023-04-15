#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a newly allocated space in memory
 * @str: string
 * Return: NULL or st
 */
char *_strdup(char *str)
{
	char *st;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	len++;
	st = malloc(len * sizeof(char));

	if (st == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		st[i] = str[i];
	}

	return (st);
}
