#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int First = 0, Second = 0, result = 0;

	First = atoi(argv[1]);
	Second = atoi(argv[2]);
	result = First * Second;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 2)
	{
		printf("%d\n", result);
	}
	return (0);
}
