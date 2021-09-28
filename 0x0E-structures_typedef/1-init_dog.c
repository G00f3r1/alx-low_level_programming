#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: new dog variable
 * @name: accept name of the dog
 * @age: accept age of the dog
 * @owner: accept owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
