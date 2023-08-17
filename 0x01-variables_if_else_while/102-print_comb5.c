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

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if ((c + d > (a +b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

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
				c++;
			}
			b++;

		}
		a++;
	}
	putchar('\n');
	return (0);

}
