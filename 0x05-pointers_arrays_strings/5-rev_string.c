#include "main.h"
#include <string.h>

/**
 * rev_string - Prints thpe string in reverse
 * @s: pointer to string
 *	
 * Return: void
 */

void rev_string(char *s)
{
	int n = strlen(s);
	int i = 0;

	while (n > 0)
	{
		*(s + i) = *(s + n);
		n--;
		i++;
	}
}
