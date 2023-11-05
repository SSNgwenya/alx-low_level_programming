#include "main.h"


/**
 * *_strchr - finds charecter in a string
 * @s: string to be searched
 * @c: charecter to be located
 * Return: pointer to first occurence if c is found.
 * NULL if c is not found.
 */


char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
