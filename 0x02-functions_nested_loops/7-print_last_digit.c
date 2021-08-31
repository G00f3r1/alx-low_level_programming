#include "holberton.h"

/**
 * main - invoke the function print_last_digit().
 * @n: used to pass a value.
 * Return: Always 0.
 */

int print_last_digit(int n);

int main(void)
{
int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

/**
 * print_last_digit - prints the last digit of a number.
 * @n: used to reseve a value
 * Return: the last digint of a number.
 */

int print_last_digit(int n)
{
	n = n % 10;
	return (n);
}
