#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: to accept the name of the dog
 * @age: to accept the age of the dog
 * @owner: to accept the owner of the dog
 * Return: new_d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_d;

	if (name == NULL && age < 0 && owner == NULL)
		return (NULL);
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->name = malloc(sizeof(char) * strlen(name) + 1);
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->name = strcpy(new_d->name, name);
	new_d->age = age;
	new_d->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	new_d->owner = strcpy(new_d->owner, owner);

	return (new_d);
}
