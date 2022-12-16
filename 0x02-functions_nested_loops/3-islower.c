#include "main.h"

/**
 * _islower - Returns one when a character is lowercase
 * and zero if it is not
 *
 * Return: Always 0 (SUccess)
*/

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
