#include "main.h"
#include <string.h>

/**
 * _strspn - returns a count of string containing *accept
 * @s: input string
 * @accept: reference string
 *
 * Return: integer
 */

char *_strpbrk(char *s, char *accept)
{
	char *n = strbrk(s,accept);

	return(n);
}
