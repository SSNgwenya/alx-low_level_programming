#include <stdio.h>

/**
 * main - function to find first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next_term;
	int z;

	printf("%lu, ", a);
	for (z = 1; z < 50; z++)
	{
		printf("%lu", b);
		next_term = a + b;
		a = b;
		b = next_term;
		if (z != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
