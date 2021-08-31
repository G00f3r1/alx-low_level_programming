#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: used to insert value.
 *
 * Return: 1 for +, 0 for 0 and -1 for -
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
