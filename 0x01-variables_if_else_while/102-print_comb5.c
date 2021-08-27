#include <stdio.h>
/**
 * main - is the function that will execute first
 *
 * Return: 0 Always (if successful)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 100; n++)
	{
		for (m = 1; m < 100; m++)
		{
			if (n < m)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (n == 98  && m == 99)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
