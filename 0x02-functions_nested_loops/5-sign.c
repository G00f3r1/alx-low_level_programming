#include "holberton.h"

/**
 * main - prints the sign of a number.
 * @n: is used to pass a value to the function
 * Return: Always 0.
 */
int print_sign(int n);

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * print_sign - prints the sign of a number.
 * @n: is used to pass a value to the function
 * Return: 1 if + , 0 if 0 and -1 if -.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		-putchar('0');
		return (0);
	}
}
