#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int n = 0;
	int king = 0;
	int d = 0;
	int k = 0;

	while (s[king] != '\0')
		king++;
	while (a < king && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			k = s[a] - '0';
			if (b % 2)
				k = -k;
			n = n * 10 + k;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (n);
}
