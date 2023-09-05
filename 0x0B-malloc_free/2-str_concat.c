#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concaternates/adds two string
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to add strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int m, b, a, l;
	char *mot;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	m = 0;
	while (s1[m] != '\0')
	{
		m++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}
	mot = malloc(sizeof(char) * (m + b + 1));

	if (mot == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < m; a++)
	{
		mot[a] = s1[a];
	}
	for (l = 0; l <= b; l++)
	{
		mot[a] = s2[l];
		a++;
	}
	return (mot);
}
