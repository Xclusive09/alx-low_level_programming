#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable
 * @d: struct dog
 * @name: dog's name string
 * @age: it's age integer
 * @owner: string
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
