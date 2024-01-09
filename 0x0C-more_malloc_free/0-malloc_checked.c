#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: input int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
