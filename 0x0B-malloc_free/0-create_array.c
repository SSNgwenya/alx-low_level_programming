#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes a size array and assigns char c
 * @size: size of array
 * @c: assigned character
 * Description: makes a size array and assign char c
 * Return: NULL if fail, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		a[x] = c;
	return (a);
}
