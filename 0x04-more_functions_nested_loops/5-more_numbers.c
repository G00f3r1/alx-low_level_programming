#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14'};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j[j]);
		}
		_putchar('/n');
	}
}
