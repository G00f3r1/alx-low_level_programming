#include "main.h"
#include <stdlib.h>

/**
 * _strdup - contains a copy of the string given as a parameter
 * @str: the character to be copied
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 1;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);

	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';

	return (ptr);
}
