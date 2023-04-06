#include "main.h"
/**
 * cap_string - capitalize all words of striing.
 * @s: array.
 * Return: s.
 */
char *cap_string(char *s)
{
	int i, len = 0, b;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		for (b = 32; b < 64 && b != 54 && b != '-'; b++)
		{
			if (s[i] == b || s[i] == '\n' || s[i] == '\t' || s[i] == '.')
			{
				if (s[i + 1] <= 122 && s[i + 1] >= 97)
				{
					s[i + 1] -= 32;
				}
				else if (s[i + 1] == ' ')
				{
					if (s[i + 2] <= 90 && s[i + 2] >= 65)
					{
						s[i + 2] += 0;
					}
					else
					{
						s[i + 2] -= 32;
					}
				}
			}

		}
	}
	return (s);
}
