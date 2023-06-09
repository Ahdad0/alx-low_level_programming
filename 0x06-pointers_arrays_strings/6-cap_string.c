#include "main.h"
/**
 * cap_string - capitalize all words of striing.
 * @s: array.
 * Return: s.
 */
char *cap_string(char *s)
{
	int i, len = 0, c, len2 = 0;
	char spe_car[] = {'\n', '\t', ',', '}', '{', ' ', '.', '"', ';', '!', '?'};

	while (spe_car[len2] != '\0')
	{
		len2++;
	}
	while (s[len] != '\0')
	{
		len++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (i = 1; i < len; i++)
	{
		for (c = 0; c < len2; c++)
		{
			if (s[i] == spe_car[c])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
				else if (s[i + 1] == spe_car[c])
				{
					s[i + 2] -= 32;
				}
			}
		}
	}
	return (s);
}
