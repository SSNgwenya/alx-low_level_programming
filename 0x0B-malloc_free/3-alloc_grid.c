#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */


int **alloc_grid(int width, int height)
{
	int **a;
	int x;
	int s;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
				free(a[x]);
			free(a);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (s = 0; s < width; s++)
			a[x][s] = 0;
	}
	return (a);
}
