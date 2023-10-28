#include <stdio.h>

/**
 * main - function adding multiples of 5 or 3 in numbers below 1024
 * Return: 0
 */

int main(void)
{
	int sunny = 0;
	int me;

	for (me = 0; me <= 1024; me++)
	{
		if (me % 3 == 0 || me % 5 == 0)
			sunny = sunny + me;
	}
	printf("%d\n", sunny);
	return (0);
}
