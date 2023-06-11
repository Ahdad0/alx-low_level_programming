#include "main.h"

/**
 * leng - count lenght of string
 * @s: string
 * Return: lenght of string
 */
int leng(char *s)
{
	if (*s != '\0')
	{
		return (1 + leng(s + 1));
	}
	return (0);
}

/**
 * check - check if string is palindrome
 * @s: string
 * @i: right of string
 * @j: left of string
 * Return: 0 or 1
 */
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > (j / 2))
		{
			return (1);
		}
		else
		{
			return (check(s, i + 1, j - 1));
		}
	}
	else
		return (0);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (check(s, 0, leng(s) - 1));
}
