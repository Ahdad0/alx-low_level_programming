#include <stdio.h>

/**
 * _atoi - function
 * @s: number
 * Return: s
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int res = 0;
	int sign = 1;

	while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * sign);
}

/**
 * main - multiple two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, count = 0, coount = 0, sum = 0;

	for (i = 1; i < argc - 1; i++)
	{
		count += _atoi(argv[i]);
	}
	for (i = 2; i < argc; i++)
	{
		coount += _atoi(argv[i]);
	}
	sum = count * coount;
	printf("%d\n", sum);
	return (0);
}
