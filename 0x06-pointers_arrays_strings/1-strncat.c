#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: used to access the address of the first string
 * @src: used to access the adddress of the second string
 * @n: it will use at most n bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int lend = 0;
	char temp;

	while (dest[lend] != '\0')
	{
		lend++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		temp = src[j];
		dest[lend] = temp;
		lend++;
	}

	return (dest);
}
