#include <stdio.h>

/**
 * main - Prints numbers of base sixteen
 *
 * Return: Always 0 (Success)
*/

int main (void)
{
	int num;
	char ch;

	for (num = ; num < 10; num++)
	{
		putchar ((num % 10) + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);

	}

	putchar ('\n');
	return (0);
}
