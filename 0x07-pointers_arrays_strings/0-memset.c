#include "main.h"

/**
 * _memset - sets the value in a string to the input value
 * @s: input string
 * @b: set value
 * @n: number of bytes to be set
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return(s);
}
