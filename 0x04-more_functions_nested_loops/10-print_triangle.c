#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: used to accept the size of triangle.
 * Return: void
 */



void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			printf(" ");
		}
		for (k = 1 ; k <= i; k++)
		{
			printf("#");
		}

		printf("\n");
	}
}
