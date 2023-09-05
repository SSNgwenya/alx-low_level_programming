#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates/adds all program arguments
 * @ac: argument count
 * @av: argument vector
 * Return:pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int m, b, a = 0, li = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (b = 0; av[m][b]; b++)
			li++;
	}

	li += ac;
	aout = malloc(sizeof(char) * li + 1);
	if (aout == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (b = 0; av[m][b]; b++)
		{
			aout[a] = av[m][b];
			a++;
		}
		if (aout[a] == '\0')
		{
			aout[a++] = '\n';
		}
	}
	return (aout);
}
