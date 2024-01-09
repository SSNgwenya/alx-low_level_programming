#include "main.h"
#include <stdlib.h>

/**
 * array_range - createsarray of int
 * @min:minimum value
 * @max:maximum value
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int a, n;
	int *x;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	x  = malloc(sizeof(int) * n);
	if (x == NULL)
		return (NULL);
	for (a = 0; a < n; a++)
	{
		x[a] = min;
		min++;
	}
	return (x);
}
