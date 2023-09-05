#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimention array
 * @width: width of array
 * @height: height of array
 * Return: pointer of array
 */

int **alloc_grid(int width, int height)
{
	int m, b;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		gridout[m] = malloc(width * sizeof(int));
		if (gridout[m] == NULL)
		{
			for (m--; m >= 0; m--)
			free(gridout[m]);
			free(gridout);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
		for (b = 0; b < width; b++)
			gridout[m][b] = 0;
	return (gridout);
}
