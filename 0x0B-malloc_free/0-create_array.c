#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of size 'size' and fills it with c
 * @size: size of the array
 * @c: input character
 *
 * Return: returns pointer to string if size != 0 and NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ar = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
		ar[i] = c;
	if (size == 0 || ar == NULL)
		return (NULL);
	return (ar);
	free(ar);
}
