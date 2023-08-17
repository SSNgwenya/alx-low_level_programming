#include <stdio.h>

/**
 * main - This a main function
 * Return: Always return 0 when successful
 */

int main(void)
{
	int a = '0';
	int b = '0';
	int z = '0';

	for (z = '0'; z <= '9'; z++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (!((a == b) || (b == z) || (b > a) || (z > b)))
				{
					putchar(z);
					putchar(b);
					putchar(a);
					if (!(a == '9' && b == '8' && z == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
