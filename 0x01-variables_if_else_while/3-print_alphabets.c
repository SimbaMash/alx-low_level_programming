#include <stdio.h>

/**
 * main - Printsthe alphabet in lower case,
 * then in upper case and adds a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}

	putchar ('\n');

	return (0);
}
