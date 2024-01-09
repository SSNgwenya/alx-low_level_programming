#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 string
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number to concatenate from s2
 * Return: pointer to new allocated memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, x, y;
	char *b;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}
	if (s2 == NULL)
		x = 0;
	else
	{
		for (x = 0; s2[x] != '\0'; x++)
			;
	}
	if (x > n)
		x = n;
	b = malloc(sizeof(char) * (a + x + 1));
	if (b == NULL)
		return (NULL);
	for (y = 0; y < a; y++)
		b[y] = s1[y];
	for (y = 0; y < x; y++)
		b[y + a] = s2[y];
	b[a + x] = '\0';
	return (b);
}
