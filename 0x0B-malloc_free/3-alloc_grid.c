#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2
 *              dimensional array of integers
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid =  (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
		{
			for (; i >= 0; i--)
				free(*(grid + i));
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
