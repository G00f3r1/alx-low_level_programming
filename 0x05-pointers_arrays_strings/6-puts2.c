#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line.
 * @str: used to accesse the address of the string.
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
