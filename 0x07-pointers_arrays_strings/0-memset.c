#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the memory to be filled
 * @b: the value to be filled
 * @n: the byte that is filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
