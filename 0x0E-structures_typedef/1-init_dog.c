#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes avariable with strct dog
 * @d: the variable
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
	return;
}
