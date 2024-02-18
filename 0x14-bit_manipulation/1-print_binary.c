#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int x;
	unsigned int a;

	x = 1;
	for (a = 1; a <= power; a++)
		x *= base;
	return (x);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divider, d;
	char i;

	i = 0;
	divider = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		d = n & divider;
		if (d == divider)
		{
			i = 1;
			_putchar('1');
		}
		else if (i == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
