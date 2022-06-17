#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates string 2 to the end of string 1 by n byte
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new;
	new = strncat(dest, src, n);
	return (new);
}
