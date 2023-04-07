#include "main.h"
/**
 * cap_string - capitalize all words of striing.
 * @s: array.
 * Return: s.
 */
char *cap_string(char *s)
{
	int i, len = 0, c, len2 = 0;
	char spe_car[] = {'\n', '\t', ',', '}', '{', ' ', '.', '"', ';', '!', '?', '\0'};

	while (spe_car[len2] != '\0')
	{
		len2++;
	}
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		for (c = 0; c < len2; c++)
		{
			if (s[i] == spe_car[c])
			{
				if (s[i + 1] <= 122 && s[i + 1] >= 97)
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
