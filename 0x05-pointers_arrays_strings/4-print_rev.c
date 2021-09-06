#include "main.h"

/**
 * _puts - prints a string, in reverse, followed by a new line.
 * @s: used to accesse the address of the string.
 * Returns: void
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
