#include <unistd.h>

/**
 * main - Prints out the quote without using printf and put
 *
 * Return: 1 if it ran successfully
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
