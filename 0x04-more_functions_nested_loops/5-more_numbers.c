#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 */

void more_numbers(void)
{
	int q, w;

	for (q = 0; q < 10; q++)
	{
		for (w = 0; w < 15; w++)
		{
			if (w >= 10)
			_putchar((w / 10) + '0');
			_putchar((w % 10) + '0');
		}
	}
	_putchar('\n');
}
