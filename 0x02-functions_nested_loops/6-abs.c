#include "holberton.h"
#include <stdio.h>

/**
 * main - invoks the function _abs().
 * @n: used to pass a value
 * Return: Always 0.
 */
int _abs(int n);

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

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
