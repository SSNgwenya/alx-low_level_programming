#include "main.h"

/**
 * print_diagonal - draws diagonal lines
 *
 * @n: number of times \ is printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int q;
		int f;

		for (q = 0; q < n; q++)
		{
			for (f = 0; f < n; f++)
			{
				if (f == q)
					_putchar('\\');
				else if (f < q)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
