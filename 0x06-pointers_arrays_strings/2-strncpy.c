#include "main.h"
#include <string.h>

/**
 * _strncpy - copies string 2 to the end of string 1 by n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *new;

	new = strncpy(dest, src, n);
	return (new);
}
