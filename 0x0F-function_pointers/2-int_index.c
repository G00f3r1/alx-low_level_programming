#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array
 * @size: the size of the array
 * @cmp: pinter to a function
 * Return: index of the number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size > 0)
		{
			int i;

			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]))
				{
					return (i);
				}
			}
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
