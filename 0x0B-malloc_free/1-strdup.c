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
	int i = 0;

	if (str == NULL)
		ptr = NULL;
	else
	{
		ptr = malloc(sizeof(str));
		while (str[i] != '\0')
		{
			ptr[i] = str[i];
			i++;
		}
	}

	return (ptr);
}
