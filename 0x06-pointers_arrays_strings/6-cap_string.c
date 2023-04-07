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
	for (i = 1; i < len; i++)
	{
		int is_spe = 0;

		for (c = 0; c < len2; c++)
		{
			if (s[i] == spe_car[c])
			{
				if (!is_spe && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
				is_spe = 1;
			}
			else
			{
				is_spe = 0;
			}
		}
	}
	return (s);
}
