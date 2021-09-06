#include "main.h"

/**
 * rev_string -  that reverses a string.
 * @s: used to accesse the address of the string.
 * Returns: void
 */

void rev_string(char *s)
{
	char temp[10];
	int len = 0;
	int i, j;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		temp[i] = s[i];
	}
	for (i = len, j = 0; i >= 0; i--, j++)
	{
		s[j] = temp[i];
	}
}
