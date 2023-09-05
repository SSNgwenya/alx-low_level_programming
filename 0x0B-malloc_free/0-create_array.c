#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: input for size of array in int
 * @c: stores the strings of characters
 * Return: return a pointer when successful, NULL if not
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mot;

	if (size == 0)
	{
		return (NULL);
	}
	mot = malloc(sizeof(char) * size);
	if (mot == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		mot[i] = c;
	}
	return (mot);
}
