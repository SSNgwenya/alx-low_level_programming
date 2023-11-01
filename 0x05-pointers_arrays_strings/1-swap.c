#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */


void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
