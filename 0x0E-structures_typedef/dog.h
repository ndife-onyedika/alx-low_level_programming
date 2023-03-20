#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	/* data */
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif