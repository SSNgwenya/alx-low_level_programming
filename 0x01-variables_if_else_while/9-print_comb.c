#include <stdio.h>

/**
 * main - This is a main function
 * Return: Always return 0 when successful
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
		if (m < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
