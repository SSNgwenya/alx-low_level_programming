#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * Return: void
 */


void times_table(void)
{
	int sunny, mbali, result;

	for (sunny = 0; sunny < 10; sunny++)
	{
		for (mbali = 0; mbali < 10; mbali++)
		{
			result = sunny * mbali;
			if (mbali == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (mbali != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
