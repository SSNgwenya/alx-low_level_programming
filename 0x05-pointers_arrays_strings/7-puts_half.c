#include "main.h"


/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int a;
	int b;
	int hard_things = 0;

	for (a = 0; str[a] != '\0'; a++)
		hard_things++;

	b = (hard_things / 2);

	if ((hard_things % 2) == 1)
		b = ((hard_things + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

