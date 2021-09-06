#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: used to access the address of the string
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
