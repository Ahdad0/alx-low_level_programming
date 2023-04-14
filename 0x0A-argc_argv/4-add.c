#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isd - function
 * @s: string
 * Return: 0 or 1.
 */
int _isd(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: count or 0 or Error
 */
int main(int argc, char *argv[])
{
	int i = 1, count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		if (!_isd(argv[i]))
		{
			 printf("Error\n");
			 return (1);
		}

		count += atoi(argv[i]);
		i++;
	}
	printf("%d\n", count);
	return (0);
}
