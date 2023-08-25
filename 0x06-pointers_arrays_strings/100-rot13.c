#include "main.h"

/**
 * rot13 - encode string using rot 13
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char *q = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *d = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; q[j] != '\0'; j++)
		{
			if (s[i] == q[j])
			{	s[i] = d[j];
				break;
			}
		}
	}
	return (s);
}
