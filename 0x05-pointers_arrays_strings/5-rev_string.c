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

	while (n >= 0)
	{
		char rev[] = {*(s + n);}
		n--;
	}
}
