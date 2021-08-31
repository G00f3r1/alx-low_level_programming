#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			for (int k = 0; k <= 5; k++)
			{
				for (int h = 0; h <= 9; h++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(h);
				}
			}
		}
	}
	return (0);
}
