#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	if (d->age == 0)
		printf("(nil)");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
