#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: to access the array of integers
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int *begin;
	int *end;
	int temp;
	int i = 0;

	begin = a;
	end = a;

	while (i < n - 1)
	{
		end++;
		i++;
	}

	for (i = 0; i < n / 2; i++)
	{
		temp = *begin;
		*begin = *end;
		*end  = temp;
		begin++;
		end--;
	}
}
