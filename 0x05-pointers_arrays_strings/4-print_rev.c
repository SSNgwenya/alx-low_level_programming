#include "main.h"

/**
 * print_rev - returns string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int sunny = 0;
	int k;

	while (*s != '\0')
	{
		sunny++;
		s++;
	}
	s--;
	for (k = sunny; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
