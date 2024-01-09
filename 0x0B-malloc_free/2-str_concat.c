#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concatinate
 * @s2: input two to concatinate
 * Return: concat of s1 and s2
 */


char *str_concat(char *s1, char *s2)
{
	char *a;
	int x;
	int n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = n = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[n] != '\0')
		n++;
	a = malloc(sizeof(char) * (x + n + 1));
	if (a == NULL)
		return (NULL);

	x = n = 0;
	while (s1[x] != '\0')
	{
		a[x] = s1[x];
		x++;
	}
	while (s2[n] != '\0')
	{
		a[x] = s2[n];
		x++, n++;
	}
	a[x] = '\0';
	return (a);
}
