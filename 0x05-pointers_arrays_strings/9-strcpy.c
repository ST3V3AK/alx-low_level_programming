#include "main.h"
#include <string.h>

/**
 * *_strcopy - Prints a string depending on the specified length
 * @dest: pointer to the  destination string
 * @src: pointer to string to be copied
 *
 * Return: void
 */

char *_strcopy(char *dest, char *src)
{
	char *new = strcpy(dest, src);

	return (new);
}
