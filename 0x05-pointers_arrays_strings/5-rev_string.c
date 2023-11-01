#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int sunny = 0;
	int k;

	while (s[sunny] != '\0')
		sunny++;
	for (k = 0; k < sunny; k++)
	{
		sunny--;
		reverse = s[k];
		s[k] = s[sunny];
		s[sunny] = reverse;
	}
}
