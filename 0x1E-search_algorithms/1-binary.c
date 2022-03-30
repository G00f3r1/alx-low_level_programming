#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: the array
 * @size: size of the array
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i < size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL
 * your function must return -1, but if present index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	if (!array || size == 0)
		return (-1);
	left = 0;
	right = size - 1;
	print_array(array + left, right + 1 - left);
	while (left < right)
	{
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
		print_array(array + left, right + 1 - left);
	}
	return (-1);
}
