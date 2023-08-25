#include "main.h"

/**
 * leet - encode string
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int c, k;
	char *q = "aAeEoOtTlL";
	char *m = "4433007711";

	for (c = 0; s[c] != '\0' ; c++)
	{
		for (k = 0; k < 10;  k++)
		{
			if (s[c] == q[k])
				s[c] = m[k];
		}
	}
	return (s);
}
