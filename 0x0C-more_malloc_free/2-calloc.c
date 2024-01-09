#include "main.h"
#include <stdlib.h>


/**
 * _calloc - allocates memory for array
 * @nmemb: number of blocks of memeory
 * @size: size of element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		pointer[a] = 0;
	return (pointer);
}
