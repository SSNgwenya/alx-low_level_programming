#include "main.h"

/**
 * _strspn - gets length of prefix sustring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number to bytes in s consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				b++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
