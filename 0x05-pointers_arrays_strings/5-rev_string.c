#include "main.h"

/**
 * rev_string -  that reverses a string.
 * @s: used to accesse the address of the string.
 * Returns: void
 */

void rev_string(char *s)
{
	char temp, *begin, *end;
	int len = 0;
	int i;

	begin = s;
	end = s;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
	{
		end++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
