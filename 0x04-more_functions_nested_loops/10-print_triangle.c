#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: used to accept the size of triangle.
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = 1; space <= (size - i); space++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
