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

	i = 0;
	grid = malloc(sizeof(int) * width);
	while (height > i)
	{
		grid[i] = malloc(sizeof(int) * width);
		i++;
	}

	return (grid);
}
