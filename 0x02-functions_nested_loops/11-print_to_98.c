#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: initial number
 * Return: 0
 */

void print_to_98(int n)
{
	int king;

	if (n >= 0 && n <= 98)
	{
		for (king = n; king <= 98; king++)
		{
			printf("%d", king);
			if (king != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (king = n; king <= 98; king++)
		{
			printf("%d", king);
			if (king != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (king = n; king >= 98; king--)
		{
			printf("%d", king);
			if (king != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
			printf("%d\n", n);
}
