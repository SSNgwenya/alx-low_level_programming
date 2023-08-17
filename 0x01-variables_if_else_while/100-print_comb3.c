#include <stdio.h>

/**
 * main - This is a main function
 * Return: Always return 0 when successful
 */

int main(void)
{
	int a = '0';
	int b = '0';

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (!((a == b) || (b > a)))
			{
				putchar(b);
				putchar(a);
				if (!(a == '9' && b == '8'))
				{
					putchar(',');
					putchard(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
