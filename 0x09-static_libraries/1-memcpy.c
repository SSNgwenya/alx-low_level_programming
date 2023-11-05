#include "main.h"

/**
 * *_memcpy - copies n bytes from memory src to memory dest
 * @dest: memory are to be copied into
 * @src: memory are to be copied from
 * @n: copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
