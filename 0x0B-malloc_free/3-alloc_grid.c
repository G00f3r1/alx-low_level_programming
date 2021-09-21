#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;
	int k;
	int l;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int*) * width);
		if (grid[i] == NULL)
		{
			j = i;
			while (j >= 0)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	k = 0;
	while (k < height)
	{
		l = 0;
		while (l < width)
		{
			grid[k][l] = 0;
			l++;
		}
		k++;
	}

	return (grid);
}
