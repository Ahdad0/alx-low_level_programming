#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * @str: string
 * Return: NULL or p
 */
char *_strdup(char *str)
{
	char *p;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[len])
		{
			len++;
		}

		len++;

		p = malloc(sizeof(char) * len);

		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len; i++)
		{
			p[i] = str[i];
		}
		return (p);
	}
}
