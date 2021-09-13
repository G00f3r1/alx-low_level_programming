#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be checked
 * @c: the character to ckeck for
 * Return: occ if it occurre NULL if it's not
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *occ = NULL;

	while (s[i] != c)
	{
		s++;
		i++;
	}
	s++;
	if (s[i] == '\0')
		occ = NULL;
	else
		occ = s;

	return (occ);
}
