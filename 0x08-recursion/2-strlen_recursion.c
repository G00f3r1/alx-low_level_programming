#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 * @s: used to pass a string
 * Return: returns the length of a string.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i++;
		s++;
		return (i + _strlen_recursion(s));
	}
}
