#include "lists.h"

void __attribute__((constructor)) first(void);

/**
 * first - function that prints before main
 *
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
