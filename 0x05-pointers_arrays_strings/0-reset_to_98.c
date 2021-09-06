#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value
 * @n: used to pass the address of n
 * Return: void
 */

void reset_to_98(int *n)
{
	int *reset = n;
	*reset = 98;
}
