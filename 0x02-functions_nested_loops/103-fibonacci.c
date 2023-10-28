#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int end = 4000000;
	int a = 1;
	int b = 2;
	int next_term;
	int s = 2;

	while (next_term <= end)
	{
		next_term = a + b;
		if (next_term % 2 == 0)
			s = s + next_term;
		a = b;
		b = next_term;
	}
	printf("%d\n", s);
	return (0);
}
