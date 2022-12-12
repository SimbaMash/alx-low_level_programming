#include <stdio.h>

/**
 * main - Prints the alphabet in lower case in reverse
 *
 * Return: ALways 0 (Succcess)
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}

	putchar ('\n');
	return (0);
}
