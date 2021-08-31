#include "main.h"

/**
 * main - prints Holberton.
 *
 * Return: 0 on success.
 */

int main(void)
{
	char school[] = "_putchar";
	int i;

	for (i = 0; i < 7; i++)
	{
		_putchar(school[i]);
	}
	_putchar('\n');
	return (0);
}
