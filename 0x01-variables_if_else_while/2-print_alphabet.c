#include <stdio.h>

/**
 * main - Prints in the alphabet in lower case
 * then adds a new line
 *
 * Return: ALways 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}

	putchar ('\n');
	return (0);
}
