#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: used to accsess the first string
 * @src: used to access the second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int lend = 0;
	int lens = 0;
	char temp;

	while (dest[lend] != '\0')
	{
		lend++;
	}
	while (src[lens] != '\0')
	{
		lens++;
	}
	for (j = 0; j < lens; j++)
	{
		temp = src[j];
		dest[lend] = temp;
		lend++;
	}

	return (dest);
}
