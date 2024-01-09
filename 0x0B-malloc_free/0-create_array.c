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
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
