#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initialize dog variable
 * @d: para 1
 * @name: para 2
 * @age: para 3
 * @owner: para 4
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;
}
