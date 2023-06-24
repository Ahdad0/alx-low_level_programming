#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 * @ac: the number of arguments
 * @av: array
 * Return: 0 or NULL
 */

int main(int ac, char **av)
{
	int a, b;
	char *op;
	int (*_operation)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	op = av[2];
	if (op[1])
	{
		printf("Error\n");
		exit(99);
	}
	b = atoi(av[3]);
	_operation = get_op_func(op);
	if (!_operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", _operation(a, b));
	return (0);
}
