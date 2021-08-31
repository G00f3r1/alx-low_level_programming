#include "holberton.h"

/**
 * main - invoke the function _islower().
 * @c: value have to be passed to the function _islower.
 * Return: Always 0.
 */
int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * _islower - Checks for lowercase character.
 * @c: value have to be passed to the function _islower
 * Return: 1 if it's lowercase or 0 if it's upercase.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
