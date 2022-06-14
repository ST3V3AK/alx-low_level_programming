#include "main.h"
#include <string.h>

/**
 * *_strcopy - Prints a string depending on the specified length
 * @str1: stores the input destination string
 * @str2: stores the input source string
 * @new: pointer for the updated string
 *
 * Return: void
 */

char *_strcopy(char *dest, char *src)
{
	char str1 = *dest;
	char str2 = *src;
	char *new;

	strcpy(str1, str2);

	new = &str1;

	_putchar('\n');

	return (new);
}
