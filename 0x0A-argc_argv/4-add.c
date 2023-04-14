#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		if (!isdigit(argv[i]))
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
