#include "main.h"

/**
 * puts2 - prints only one charecter out of two
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int king = 0;
	int i = 0;
	char *s = str;
	int k;

	while (*s != '\0')
	{
		s++;
		king++;
	}
	i = king - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
