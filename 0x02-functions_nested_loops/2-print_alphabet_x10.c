#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: no return value.
 */
void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(alphabet[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
