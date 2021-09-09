#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destnation
 * @src: source
 * @n: how many characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}
