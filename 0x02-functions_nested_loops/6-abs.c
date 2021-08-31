#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: used to pass the value
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
