#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src.
 * @dest: used to accesse the destination address of the string.
 * @src: used to accesse the address of string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
