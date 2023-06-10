#include <stdio.h>
#include <stdlib.h>

/**
 * _isdi - function
 * @s: string
 * Return: 0 or 1
 */
int _isdi(char *s)
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
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, count = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!_isdi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				count += atoi(argv[i]);
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
