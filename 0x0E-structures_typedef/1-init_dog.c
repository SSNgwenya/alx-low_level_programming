#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - initializes a variable  type struct dog
 * @d: struct dog pointer to be initialized
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
