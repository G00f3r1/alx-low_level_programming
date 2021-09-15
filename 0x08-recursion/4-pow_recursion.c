#include "main.h"

/**
 * _pow_recursion - raise a number to the power of a number
 * @x: to pass the number to be powerd
 * @y: the value of the power
 * Return: If y is lower than 0, the function should return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	return (x);
}
