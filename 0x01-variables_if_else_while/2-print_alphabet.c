#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * Return: 0 (success)
 */
int main() 
{
	char letter = 'a';
	while (letter <= 'z') 
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return 0;
}
