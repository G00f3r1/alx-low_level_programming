#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: the array
 * @size: the size of the array
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int principal = 0;
	int secondary = 0;
	int size_full;

	size_full = (size * size) - 1;

	for (i = 0; i <= size_full; i += size + 1)
	{
		principal += a[i];
	}
	for (j = size - 1; j < size_full; j += size - 1)
	{
		secondary += a[j];
	}

	printf("%d, %d\n", principal, secondary);

}
