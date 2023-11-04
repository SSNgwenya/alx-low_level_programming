#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory to area to be filled
 * @b: charector to copy
 * @n: number to times to copy b
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
