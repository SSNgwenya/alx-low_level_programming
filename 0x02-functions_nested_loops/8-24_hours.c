#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int sunny, mbali;

	for (sunny = 0; sunny < 24; sunny++)
	{
		for (mbali = 0; mbali < 60; mbali++)
		{
			_putchar(sunny / 10 + '0');
			_putchar(sunny % 10 + '0');
			_putchar(':');
			_putchar(mbali / 10 + '0');
			_putchar(mbali % 10 + '0');
			_putchar('\n');
		}
	}
}
