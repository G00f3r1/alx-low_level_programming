#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - findes natural square root of a number.
 * @n: used to pass the number
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - findes natural square root of a number.
 * @n: the number to be checked
 * @i: testing value
 * Return: square root of a number or if does not have one -1;
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
