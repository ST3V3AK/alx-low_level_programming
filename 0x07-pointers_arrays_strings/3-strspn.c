#include "main.h"
#include <string.h>

/**
 * _strspn - returns a count of string containing *accept
 * @s: input string
 * @accept: reference string
 *
 * Return: integer
 */

unsigned int _strspn (char *s, char *accept)
{
	unsigned int n = strspn(s,accept);

	return(n);
}
