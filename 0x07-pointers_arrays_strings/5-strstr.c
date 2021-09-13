#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: the string to locate from
 * @needle: the string to locate
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != *needle)
	{
		if (!*haystack++)
			return (NULL);
	}

	return (haystack);
}
