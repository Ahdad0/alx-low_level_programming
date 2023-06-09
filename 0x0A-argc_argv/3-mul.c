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
	long int First, Second, result;

	First = atoi(argv[1]);
	Second = atoi(argv[2]);
	result = First * Second;

	if (argc == 3)
	{
		printf("%ld\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
