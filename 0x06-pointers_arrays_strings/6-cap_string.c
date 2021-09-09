#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: to access the string
 * Return: s
 */

char *cap_string(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == '\n' || s[i] == 32 || s[i] == 33 || s[i] == 43 || s[i] == 40 || s[i] == 41 || s[i] == 63 || s[i] == 123 || s[i] == 125)
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}

	return (s);
}
