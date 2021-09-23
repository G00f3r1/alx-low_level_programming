#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: integer array pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
