#include "main.h"

/**
 * _islower - checks for lowercase characters
 * shows 1 if the input is c is lowercase character
 * shoes 0 for other cases
 *
 * @c: The character in ASCii code
 *
 * Return: 1 for lowercase character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

