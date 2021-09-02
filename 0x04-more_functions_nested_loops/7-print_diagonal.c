#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: used to accept a value
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (k = 1 ; k <= i; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
