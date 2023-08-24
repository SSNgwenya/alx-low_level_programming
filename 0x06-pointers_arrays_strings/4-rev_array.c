#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: name of array
 * @n: number of elements of the array
 * Return: void
 */

void  reverse_array(int *a, int n)
{
	int q;
	int m;

	for (q = 0; q < n / 2; q++)
	{
		m = a[q];
		a[q] = a[n - 1 - q];
		a[n - 1 - q] = m;
	}
}
