#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @s: string being converted
 * Return: s
 */

char *string_toupper(char *s)
{
	int q;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] >= 'a' && s[q] <= 'z')
			s[q] = s[q] - 32;
	}
	return (s);
}
