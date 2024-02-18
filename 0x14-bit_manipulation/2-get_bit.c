#include"main.h"

/**
 * get_bit - returns value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider, x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divider = 1 << index;
	x = n & divider;
	if (x == divider)
		return (1);
	return (0);
}
