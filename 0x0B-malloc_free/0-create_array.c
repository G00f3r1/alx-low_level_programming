#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: the size of the arry
 * @c: the char to be initialized
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		ptr = NULL;
	else
	{
		ptr = malloc(sizeof(char) * size);
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	}

	return (ptr);
}
