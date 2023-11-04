#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum_A = 0;
	int sum_B = 0;

	for (x = 0; x < size; x++)
	{
		sum_A += a[x];
		a += size;
	}
	a -= size;
	for (x = 0; x < size; x++)
	{
		sum_B += a[x];
		a -= size;
	}
	printf("%d, %d\n", sum_A, sum_B);
}
