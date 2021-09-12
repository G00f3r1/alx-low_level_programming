#include "main.h"

/**
 * print_number - prints an string from integer
 * @n: used to pass the integer
 * Return : void
 */

void print_number(int n)
{
	char text[20];
	int i = 0;

	sprintf(text, "%d", n);

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
}
