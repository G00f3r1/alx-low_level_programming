#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: used to access the string
 * Return: s
 */

char *string_toupper(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
