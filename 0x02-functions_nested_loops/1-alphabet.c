#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * main - program prints alphabet,in lowercase, followed by a new line
 *
 * Return: (0) Always
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
