#include <stdio.h>
/**
 * main - is the function that will execute first
 *
 *
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
