#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be checked
 * @c: the character to ckeck for
 * Return: occ if it occurre NULL if it's not
 */

char *_strchr(char *s, char c)
{

	while (*s != c)
	{
		if (!*s++)
			return (NULL);
	}

	return (s);
}
