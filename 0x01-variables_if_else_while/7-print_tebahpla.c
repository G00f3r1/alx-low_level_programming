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
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
