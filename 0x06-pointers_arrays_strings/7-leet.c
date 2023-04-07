#include "main.h"
/**
 * leet - replace specified alphabet with number.
 * @s: array.
 * Return: s.
 */
char *leet(char *s)
{
	int i = 0, c;
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	char chA[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (c = 0; c < 5; c++)
		{
			if (s[i] == chA[c] || s[i] == ch[c])
			{
				s[i] = num[c];
			}
		}
		i++;
	}
	return (s);
}
