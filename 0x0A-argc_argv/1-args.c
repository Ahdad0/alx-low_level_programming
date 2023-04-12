#include <stdio.h>
/**
 * main - print number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, count = 0;

	for (i = 1; i < argc; i++)
	{
		count += 1;
	}
	printf("%d\n", count);
	return (0);
}
