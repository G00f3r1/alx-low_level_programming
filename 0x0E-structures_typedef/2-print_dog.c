#include "dog.h"

/**
 * print_dog - prints a struct dog elementes
 * @d: to accept the struct dog variable
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL && d->age > 0 && d->owner != NULL)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %.6f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		if (d->name == NULL)
		{
			printf("Name: %s\n", "(nil)");
		}
		if (d->age <= 0)
		{
			printf("Age: %s\n", "(nil)");
		}
		if (d->owner == NULL)
		{
			printf("Owner: %s\n", "(nil)");
		}
	}
}
