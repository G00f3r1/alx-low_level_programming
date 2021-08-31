#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: used to input a value.
 *
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
	int last_Dig;
	if (n >= 0)
	{
		last_Dig = n % 10;
	}
	else
	{
		last_Dig = (n % 10) * -1;
	}
	_putchar('0' + last_Dig);
	return (last_Dig);
}
