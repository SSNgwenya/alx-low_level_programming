#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int q;

		for (q = 1; q <= n; q++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
