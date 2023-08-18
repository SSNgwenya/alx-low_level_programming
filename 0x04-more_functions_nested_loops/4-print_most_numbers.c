#include "main.h"

/**
 * print_most_numbers - checks for numbers
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int q;

	for (q = 48; q < 58; q++)
	{
		if (q != 50)
		{
			if (q != 52)
			{
				_putchar(q);
			}
		}
	}
	_putchar('\n')
}
