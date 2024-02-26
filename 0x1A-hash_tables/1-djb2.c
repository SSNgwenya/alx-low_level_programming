#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: Calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int j;
	int a;

	j = 5381;
	while ((a = *str++))
		j = ((j << 5) + j) + a; /* j * 33 + a */

	return (j);
}
