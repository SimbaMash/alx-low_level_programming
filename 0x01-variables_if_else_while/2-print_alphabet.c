#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * and adds a new line
 *
 * Return Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
