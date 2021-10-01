#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	if (n > 0)
	{
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = (va_arg(ap, char*));
		if (s == NULL)
		{
			printf("(nil");
		}
		else
		{
			printf("%s", s);
		}
		if (i != n - 1 && separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);
	}
}
