#include <stdio.h>
#include "dog.h"

/**
 * init_dog - intializes a variable of type
 *
 * @d: dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: (0)
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
