#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated space
 * @str: initial string input
 * Return: pointer to memory allocated
 */

char *_strdup(char *str)
{
	unsigned int i, m;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdout = malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}
	for (m = 0; m <= i; m++)
	{
		strdout[m] = str[m];
	}
	return (strdout);
}
