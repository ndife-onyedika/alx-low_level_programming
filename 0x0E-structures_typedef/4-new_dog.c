#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * dog_t *new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	char *name_copy;
	char *owner_copy;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}

	owner_copy = owner;
	name_copy = name;
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
