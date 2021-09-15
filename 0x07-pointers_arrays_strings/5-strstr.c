#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: the string to locate from
 * @needle: the string to locate
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *end = needle;

		while (*end && *haystack && *haystack == *end)
		{
			haystack++;
			end++;
		}

		if (!*end)
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (0);
}
