#include "main.h"

/**
 * print_array - prints elements of an array of integers,followed by a new line
 * @a: used to pass the address of the array
 * @n: used to pass the size of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
