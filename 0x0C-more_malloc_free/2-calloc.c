#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: array size
 * @size: array elements
 * Return: array pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
