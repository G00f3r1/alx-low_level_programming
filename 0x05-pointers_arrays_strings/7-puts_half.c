#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: used to accesse the address of the string.
 * Returns: void
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int len_half;

	while (str[len] != '\0')
	{
		len++;
	}
	len += 1;
	if (len % 2 != 0)
		len_half = (len - 1) / 2;
	else
		len_half = len / 2;

	for (i = len_half; i < len - 1; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
