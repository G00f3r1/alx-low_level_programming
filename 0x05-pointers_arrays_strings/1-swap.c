#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: used to pass the address of a
 * @b: used to pass the address of b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
