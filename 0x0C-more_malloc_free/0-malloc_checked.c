#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a new memory of size b
 * @b: size of memory
 *
 * Return: pointer to mrmory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit (98);
	else
		return (m);
}
