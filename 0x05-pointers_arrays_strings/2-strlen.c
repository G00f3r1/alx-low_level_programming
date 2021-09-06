#include "main.h"

/**
 * _strlen - count the length of a string.
 * @s: used to access the address of the string.
 * Return: returns the length of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
