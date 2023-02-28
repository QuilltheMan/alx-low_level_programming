#include "main.h"

/**
 * swap_int - a function that swaps values of two integers
 * @a: interger to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}


