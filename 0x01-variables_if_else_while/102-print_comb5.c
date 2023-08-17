#include <stdio.h>

/**
 * main - This a main function
 * Return: Always return 0 when successful
 */

int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';

	while (a <= '9'; a++)
	{
		while (b <= '9'; b++)
		{
			while (c <= '9'; c++)
			{
				while (d <= '9'; d++)
				{
					if ((c + d > (a +b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ')
						putchar(c);
						putchard(d);

						if (a + b + c + d == '179' && a == '9')
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
