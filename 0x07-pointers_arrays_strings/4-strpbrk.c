#include "main.h"

/**
 * _strpbrk - finds any set of bytes within a string
 * @s: string to be searched
 * @accept: bytes to be searched for
 * Return: pointer to matched bytes if found, NULL if not
 */


char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
