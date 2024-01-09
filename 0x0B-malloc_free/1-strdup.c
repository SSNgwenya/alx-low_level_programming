#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */


char *_strdup(char *str)
{
	char *a;
	int x;
	int s = 0;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	a = malloc(sizeof(char) * (x + 1));

	if (a == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		a[s] = str[s];
	return (a);
}
