#include "main.h"

/**
 * *_strcpy - copies string pointed to src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int s = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; s < l; s++)
	{
		dest[s] = src[s];
	}
	dest[l] = '\0';
	return (dest);
}
