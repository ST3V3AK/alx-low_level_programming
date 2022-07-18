#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contects of a dog struct variable
 * @d: the struct variable
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	return;
}
