#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int a, x = 0, n = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			n++;
		}
	}
	return (n);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: if successful, pointer to an array of strings
 * or NULL if unsuccessful
 */
char **strtow(char *str)
{
	char **matrix, *sun;
	int b = 0, y = 0, c = 0;
	int start, end, sunny, f;

	while (*(str + y))
		y++;
	sunny = count_word(str);
	if (sunny == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (sunny + 1));
	if (matrix == NULL)
		return (NULL);
	for (f = 0; f <= y; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (c)
			{
				end = f;
				sun = (char *) malloc(sizeof(char) * (c + 1));
				if (sun == NULL)
					return (NULL);
				while (start < end)
					*sun++ = str[start++];
				*sun = '\0';
				matrix[b] = sun - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = f;
	}
	matrix[b] = NULL;
	return (matrix);
}
