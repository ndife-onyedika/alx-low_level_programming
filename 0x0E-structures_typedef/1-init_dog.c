#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  function
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* code */
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
