#include "main.h"

/**
 * print_alphabetx10 - prints the alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabetx10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
