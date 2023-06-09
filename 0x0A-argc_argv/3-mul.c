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
	int F, S;

	F = atoi(argv[1]);
	S = atoi(argv[2]);

	if (argc >= 2)
	{
		printf("%d\n", F * S);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
