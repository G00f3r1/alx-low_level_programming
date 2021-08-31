#include "holberton.h"

/**
 * main - invoke the function print_alphabet().
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
