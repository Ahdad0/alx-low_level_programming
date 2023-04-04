#include "main.h"
/**
 * rev_string - reverse the string
 * @s: string
 */
void rev_string(char *s)
{
	int len = 0, i;
	char sum;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		sum = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = sum;
	}
}
