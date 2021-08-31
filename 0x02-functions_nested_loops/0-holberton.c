#include "main.h"

/**
 * main - prints Holberton.
 *
 * Return: 0 on success.
 */

int main(void)
{
	char school[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(school[i]);
	}
	_putchar('\n');
	return (0);
}
