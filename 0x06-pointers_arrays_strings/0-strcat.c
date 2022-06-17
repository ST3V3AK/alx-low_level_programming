#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates string 2 to the end if string 1
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *new;
	new = strcat(dest, src);
	return (new);
}
